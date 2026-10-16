#!/usr/bin/env python3
"""libZyZGfx64.so -> binaryimage XML for Ghidra console decompiler + funcs.json"""
import struct, sys, json, re, subprocess

SO = sys.argv[1]
OUT_XML = sys.argv[2]
OUT_JSON = sys.argv[3]

d = open(SO, 'rb').read()
u16 = lambda o: struct.unpack_from('<H', d, o)[0]
u32 = lambda o: struct.unpack_from('<I', d, o)[0]
s32 = lambda o: struct.unpack_from('<i', d, o)[0]
u64 = lambda o: struct.unpack_from('<Q', d, o)[0]

phoff, shoff = u64(0x20), u64(0x28)
phentsize, phnum = u16(0x36), u16(0x38)
shentsize, shnum, shstrndx = u16(0x3A), u16(0x3C), u16(0x3E)

loads = []
for i in range(phnum):
    o = phoff + i * phentsize
    t, fl, off, va, pa, fsz, msz, al = struct.unpack_from('<IIQQQQQQ', d, o)
    if t == 1:
        loads.append(dict(flags=fl, off=off, va=va, fsz=fsz, msz=msz))

secs = {}
shs = []
for i in range(shnum):
    o = shoff + i * shentsize
    nm, ty, fl, va, off, sz, lk, inf, al, es = struct.unpack_from('<IIQQQQIIQQ', d, o)
    shs.append(dict(nm=nm, ty=ty, fl=fl, va=va, off=off, sz=sz, lk=lk, es=es))
shstr = shs[shstrndx]
def cstr(base, o):
    s = base + o
    e = d.index(b'\0', s)
    return d[s:e].decode('latin1')
for s in shs:
    s['name'] = cstr(shstr['off'], s['nm'])
    secs[s['name']] = s

# --- image
top = max(l['va'] + l['msz'] for l in loads)
img = bytearray(top)
for l in loads:
    img[l['va']:l['va'] + l['fsz']] = d[l['off']:l['off'] + l['fsz']]

# --- dynsym
dynsym, dynstr = secs['.dynsym'], secs['.dynstr']
syms = []
for i in range(dynsym['sz'] // 24):
    o = dynsym['off'] + i * 24
    nm, info, other, shndx, val, sz = struct.unpack_from('<IBBHQQ', d, o)
    syms.append(dict(name=cstr(dynstr['off'], nm), type=info & 0xf, bind=info >> 4,
                     shndx=shndx, val=val, size=sz))

# --- demangle exported names (batch via c++filt)
mang = [s['name'] for s in syms if s['name']]
p = subprocess.run(['c++filt'], input='\n'.join(mang), capture_output=True, text=True)
dem = dict(zip(mang, p.stdout.split('\n')))
def ident(n):
    # sanitize demangled name to a valid short identifier
    n = dem.get(n, n)
    n = re.sub(r'\(.*$', '', n) if '(' in n and not n.startswith('(') else n
    n = re.sub(r'<[^<>]*>', '', n)
    n = re.sub(r'<[^<>]*>', '', n)
    n = n.replace('::', '__').replace('~', 'dtor_')
    n = re.sub(r'[^A-Za-z0-9_]', '_', n).strip('_')
    return n or 'sym'

# --- relocations
GOTNAME = {}   # got slot addr -> import name
GOTFUNC = {}
rel_imports = []
PLTDEF = {}
for rs in ('.rela.dyn', '.rela.plt'):
    s = secs[rs]
    for i in range(s['sz'] // 24):
        o = s['off'] + i * 24
        r_off, r_info, r_add = struct.unpack_from('<QQq', d, o)
        rt, si = r_info & 0xffffffff, r_info >> 32
        if rt == 1027:  # RELATIVE
            struct.pack_into('<Q', img, r_off, r_add & 0xffffffffffffffff)
        elif rt in (1025, 1026, 257):  # GLOB_DAT / JUMP_SLOT / ABS64
            sy = syms[si]
            if sy['shndx'] != 0:
                if rt == 1026: PLTDEF[r_off] = sy['name']
                struct.pack_into('<Q', img, r_off, (sy['val'] + r_add) & 0xffffffffffffffff)
            else:
                GOTNAME[r_off] = sy['name'].split('@')[0]
                GOTFUNC[r_off] = (sy['type'] != 1)
                if rt == 1026:
                    pass

# --- PLT stubs
plt = secs['.plt']
PLT = {}
a = plt['va'] + 32
while a < plt['va'] + plt['sz']:
    i0, i1 = u32(a), u32(a + 4)
    if (i0 & 0x9f000000) == 0x90000000 and (i1 & 0xffc00000) == 0xf9400000:
        immlo = (i0 >> 29) & 3
        immhi = (i0 >> 5) & 0x7ffff
        imm = (immhi << 2) | immlo
        if imm & (1 << 20):
            imm -= 1 << 21
        page = ((a & ~0xfff) + (imm << 12))
        got = page + (((i1 >> 10) & 0xfff) << 3)
        if got in GOTNAME:
            PLT[a] = GOTNAME[got]
        elif got in PLTDEF:
            PLT[a] = ident(PLTDEF[got]) + '_plt'
    a += 16

# --- eh_frame_hdr -> function ranges
h = secs['.eh_frame_hdr']
hv = h['va']
ho = h['off']
assert d[ho] == 1
fde_cnt_enc, tab_enc = d[ho + 2], d[ho + 3]
assert tab_enc == 0x3b, hex(tab_enc)
# eh_frame_ptr (enc d[ho+1]) 4 bytes, fde_count (enc) 4 bytes
cnt = u32(ho + 8)
ef = secs['.eh_frame']
def fde_info(fa):
    o = ef['off'] + (fa - ef['va'])
    ln = u32(o)
    cie_ptr = u32(o + 4)
    cie_o = o + 4 - cie_ptr
    # CIE: len, id, ver, aug string, ...
    co = cie_o + 8
    ver = d[co]; co += 1
    aug = d[co:d.index(b'\0', co)]; co += len(aug) + 1
    def uleb(p):
        r = 0; sh = 0
        while True:
            b = d[p]; p += 1
            r |= (b & 0x7f) << sh; sh += 7
            if not b & 0x80: return r, p
    def sleb(p):
        r = 0; sh = 0
        while True:
            b = d[p]; p += 1
            r |= (b & 0x7f) << sh; sh += 7
            if not b & 0x80:
                if b & 0x40: r -= 1 << sh
                return r, p
    _, co = uleb(co); _, co = sleb(co)
    co += 1 if ver == 1 else 0
    if ver != 1:
        _, co = uleb(co)
    enc = 0
    if aug.startswith(b'z'):
        alen, co = uleb(co)
        for ch in aug[1:]:
            if ch == ord('R'):
                enc = d[co]; co += 1
            elif ch == ord('P'):
                e = d[co]; co += 1 + 8
            elif ch == ord('L'):
                co += 1
    po = o + 8
    base = ef['va'] + (po - ef['off'])
    if enc & 0x0f == 0x0b:
        pc = base + s32(po)
    else:
        pc = base + s32(po)
    rng = u32(po + 4)
    return pc, rng

funcs = {}
for i in range(cnt):
    loc = hv + s32(ho + 12 + i * 8)
    fde = hv + s32(ho + 12 + i * 8 + 4)
    pc, rng = fde_info(fde)
    funcs[pc] = rng

text = secs['.text']
for s in syms:
    if s['type'] == 2 and s['shndx'] != 0 and s['val']:
        funcs.setdefault(s['val'], s['size'] or 4)
# init_array entries
ia = secs['.init_array']
for i in range(ia['sz'] // 8):
    t = struct.unpack_from('<Q', img, ia['va'] + i * 8)[0]
    if t: funcs.setdefault(t, 4)

# --- noreturn patching: bl <noreturn> -> b <noreturn> (stops flow past throw/abort)
NORET = set("""__cxa_throw __cxa_rethrow abort __stack_chk_fail __assert2 _Unwind_Resume __cxa_bad_cast
__cxa_bad_typeid _ZSt9terminatev __cxa_call_unexpected exit _exit __cxa_pure_virtual
__cxa_throw_bad_array_new_length __android_log_assert longjmp pthread_exit __fortify_fatal
__libcpp_verbose_abort __cxa_deleted_virtual __abort_message __cxa_bad_array_new_length""".split())
def _is_noret_name(mn):
    if mn in NORET: return True
    dm = dem.get(mn, mn)
    return ('__throw_' in dm) or ('__libcpp_verbose_abort' in dm) or ('__abort_message' in dm) or dm.startswith('std::terminate')
noret_t = set()
for a, n in PLT.items():
    if n in NORET: noret_t.add(a)
for s_ in syms:
    if s_['shndx'] != 0 and s_['type'] == 2 and s_['val'] and _is_noret_name(s_['name']):
        noret_t.add(s_['val'])
for got, mn in PLTDEF.items():
    if _is_noret_name(mn):
        for a, nme in PLT.items():
            if nme == ident(mn) + '_plt':
                noret_t.add(a)
npatch = 0
for a in range(text['va'], text['va'] + text['sz'], 4):
    w = struct.unpack_from('<I', img, a)[0]
    if (w & 0xfc000000) == 0x94000000:
        imm = w & 0x3ffffff
        if imm & 0x2000000: imm -= 1 << 26
        if a + imm * 4 in noret_t:
            struct.pack_into('<I', img, a, w & 0x7fffffff)
            npatch += 1
print('noreturn call sites patched:', npatch, 'targets', len(noret_t))

# --- names
names = {}
for s in syms:
    if s['shndx'] != 0 and s['val'] and s['type'] in (1, 2):
        nm = ident(s['name'])
        names.setdefault(s['val'], (nm, s['name'], s['type'], s['size']))
for a, n in PLT.items():
    names[a] = (n, n, 2, 16)
for a, n in GOTNAME.items():
    names.setdefault(a, ('got_' + n, n, 1, 8))

# uniquify identifiers
seen = {}
for a in sorted(names):
    n = names[a][0]
    k = seen.get(n, 0)
    seen[n] = k + 1
    if k:
        names[a] = (f'{n}_{k}',) + names[a][1:]

fl = {}
for a in sorted(funcs):
    if not (text['va'] <= a < text['va'] + text['sz']):
        continue
    nm = names.get(a, (f'FUN_{a:08x}', None, 2, 0))
    fl[a] = dict(addr=a, size=funcs[a], name=nm[0], mangled=nm[1])

# --- XML
def chunk(va, size, ro):
    return (f'<bytechunk space="ram" offset="0x{va:x}"' + (' readonly="true"' if ro else '') +
            '>' + img[va:va + size].hex() + '</bytechunk>\n')
x = ['<binaryimage arch="AARCH64:LE:64:v8A:default">\n']
for l in loads:
    va, sz = l['va'], l['fsz']
    ro = not (l['flags'] & 2)
    x.append(chunk(va, sz, ro))
dsyms = []
for a in sorted(names):
    nm = names[a][0]
    if names[a][2] == 2:
        x.append(f'<symbol space="ram" offset="0x{a:x}" name="{nm}"/>\n')
    elif not nm.startswith('typeinfo_name') and not nm.startswith('vtable_for') and not nm.startswith('typeinfo_for'):
        dsyms.append((a, nm, names[a][3], 'gotfunc' if GOTFUNC.get(a) else ('gotdata' if a in GOTNAME else 'obj')))
for a in sorted(fl):
    if a not in names:
        x.append(f'<symbol space="ram" offset="0x{a:x}" name="{fl[a]["name"]}"/>\n')
x.append('</binaryimage>\n')
open(OUT_XML, 'w').write(''.join(x))
json.dump(dict(data=dsyms, funcs=[fl[a] for a in sorted(fl)], plt=len(PLT), got=len(GOTNAME),
               text=[text['va'], text['sz']]), open(OUT_JSON, 'w'), indent=1)
print('funcs', len(fl), 'plt', len(PLT), 'got', len(GOTNAME), 'named', len(names),
      'loads', [(hex(l['va']), hex(l['fsz']), l['flags']) for l in loads])
