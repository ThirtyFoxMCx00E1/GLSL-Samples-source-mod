#!/usr/bin/env python3
import json, os, re, glob, subprocess, struct, shutil, sys

W = '/home/claude/work'
OUT = f'{W}/ZyZGfx64-source'
SO = '/mnt/user-data/uploads/libZyZGfx64.so'
j = json.load(open(f'{W}/funcs.json'))
funcs = j['funcs']
byname = {f['name']: f for f in funcs}


# ---------- rodata string map (annotate pointers to string literals)
_d = open(SO, 'rb').read()
_shoff = struct.unpack_from('<Q', _d, 0x28)[0]
_shnum, _shstr = struct.unpack_from('<HH', _d, 0x3C)
_sh = [struct.unpack_from('<IIQQQQIIQQ', _d, _shoff + i * 64) for i in range(_shnum)]
_so = _sh[_shstr][4]
_nm = lambda o: _d[_so + o:_d.index(b'\0', _so + o)].decode()
_ro = [x for x in _sh if _nm(x[0]) == '.rodata'][0]
_rva, _roff, _rsz = _ro[3], _ro[4], _ro[5]
_blob = _d[_roff:_roff + _rsz]
STR = {}
for m in re.finditer(rb'(?<![^\x00])[\x09\x0a\x20-\x7e]{4,}(?=\x00)', _blob):
    STR[_rva + m.start()] = m.group().decode()
HEX = re.compile(r'\b0x([0-9a-f]{5,6})\b')
def annotate(text):
    out = []
    for ln in text.split('\n'):
        if ln.lstrip().startswith(('/*', '*')):
            out.append(ln); continue
        def rep(m):
            a = int(m.group(1), 16)
            st = STR.get(a)
            if st is None: return m.group(0)
            t = st.replace('\\', '\\\\').replace('\n', '\\n').replace('\t', '\\t').replace('"', '\\"').replace('*/', '* /')
            if len(t) > 70: t = t[:70] + '...'
            return f'{m.group(0)} /* "{t}" */'
        out.append(HEX.sub(rep, ln))
    return '\n'.join(out)

# ---------- demangle
mang = [f['mangled'] or '' for f in funcs]
p = subprocess.run(['c++filt'], input='\n'.join(mang), capture_output=True, text=True)
dem = p.stdout.split('\n')
for f, dm in zip(funcs, dem):
    f['demangled'] = dm if f['mangled'] else ''

# ---------- parse decompiler output
code = {}
failed = []
for l in open(f'{W}/out/results.jsonl'):
    r = json.loads(l)
    if not r['ok']:
        failed.append(r['name']); continue
    body = []
    for ln in r['text'].split('\n'):
        if ln.startswith('@@@') or ln == 'Decompilation complete' or ln.startswith('Decompiling '):
            continue
        if ln.startswith('lo fu ') or ln in ('decompile', 'print C') or ln.startswith('echo @@@'):
            continue
        if ln.startswith('Function ') and ': 0x' in ln:
            continue
        body.append(ln)
    t = '\n'.join(body).strip('\n')
    if t and ('{' in t):
        code[r['name']] = t
    else:
        failed.append(r['name'])
print('failed', len(failed))
done = [f for f in funcs if f['name'] in code]
print('decompiled', len(done), 'of', len(funcs))

def module(f):
    d = f['demangled']; n = f['name']
    if not f['mangled']:
        return None
    if d.startswith(('std::', 'void std::', 'unsigned long std::', 'bool std::', 'int std::', 'char std::')) \
       or '__ndk1' in d or d.startswith(('__cxa', '__gxx', 'operator', '__dynamic', 'typeinfo', 'vtable',
                                         'non-virtual thunk', 'virtual thunk', 'guard variable', '__cxxabiv1',
                                         'abi:', 'stbsp_')) or '__cxxabiv1' in d or d.startswith('std'):
        return 'libcxx_runtime'
    if n.startswith('HookOf_'):
        return 'hooks'
    base = re.sub(r'\(.*$', '', d)
    if '::' in base:
        return re.sub(r'[^A-Za-z0-9_]', '_', base.split('::')[0]) or 'misc'
    return 'exports'

mods = {}
for f in funcs:
    f['module'] = module(f)

def render(f):
    c = code.get(f['name'])
    hdr = f"/* 0x{f['addr']:x}  size={f['size']}"
    if f['mangled']:
        hdr += f"  {f['demangled'] or f['mangled']}  [{f['mangled']}]"
    hdr += ' */'
    if c is None:
        OD = f'{W}/android-ndk-r30/toolchains/llvm/prebuilt/linux-x86_64/bin/llvm-objdump'
        dis = subprocess.run([OD, '-d', '--no-show-raw-insn', f"--start-address=0x{f['addr']:x}",
                              f"--stop-address=0x{f['addr'] + f['size']:x}", SO], capture_output=True, text=True).stdout
        dis = '\n'.join(' * ' + l for l in dis.split('\n')[5:] if l.strip())
        c = ('/* DECOMPILER HUNG on this function (Ghidra decompiler loop) -- AArch64 disassembly instead:\n'
             + dis.replace('*/', '* /') + '\n */')
    if f['name'] in code: c = annotate(c)
    return hdr + '\n' + c + '\n'

for d in ('src/by_module', 'src/unnamed', 'include', 'reference', 'shaders'):
    os.makedirs(f'{OUT}/{d}', exist_ok=True)

TYPES = '''/* Types emitted by Ghidra's console decompiler (C printer) */
#pragma once
#include <stdint.h>
typedef int8_t   int1;   typedef int16_t  int2;   typedef int32_t  int4;   typedef int64_t  int8;
typedef uint8_t  uint1;  typedef uint16_t uint2;  typedef uint32_t uint4;  typedef uint64_t uint8;
typedef uint8_t  xunknown1; typedef uint16_t xunknown2; typedef uint32_t xunknown4; typedef uint64_t xunknown8;
typedef uint8_t  undefined1; typedef uint16_t undefined2; typedef uint32_t undefined4; typedef uint64_t undefined8;
typedef float    float4; typedef double float8;
typedef void     code();
'''
open(f'{OUT}/include/ghidra_types.h', 'w').write(TYPES)

def write_group(path, fl, title, inc='../../include'):
    with open(path, 'w') as o:
        o.write(f'/* {title}\n * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.\n'
                f' * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;\n'
                f' * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */\n')
        o.write(f'#include "{inc}/ghidra_types.h"\n\n')
        for f in fl:
            o.write(render(f) + '\n')

groups = {}
for f in funcs:
    if f['module']:
        groups.setdefault(f['module'], []).append(f)
for m, fl in sorted(groups.items()):
    write_group(f'{OUT}/src/by_module/{m}.c', fl, f'module: {m}  ({len(fl)} functions)')

un = [f for f in funcs if not f['module']]
CH = 100
for i in range(0, len(un), CH):
    ch = un[i:i + CH]
    write_group(f'{OUT}/src/unnamed/unnamed_{i // CH:02d}_{ch[0]["addr"]:06x}-{ch[-1]["addr"]:06x}.c', ch,
                f'unexported functions 0x{ch[0]["addr"]:x}..0x{ch[-1]["addr"]:x}')

write_group(f'{OUT}/src/all_by_address.c', funcs, f'ALL functions, address order ({len(funcs)})', '../include')

# ---------- reference: symbols
with open(f'{OUT}/reference/functions.tsv', 'w') as o:
    o.write('addr\tsize\tname\tmodule\tdemangled\tmangled\tdecompiled\n')
    for f in funcs:
        o.write(f"0x{f['addr']:x}\t{f['size']}\t{f['name']}\t{f['module'] or ''}\t{f['demangled']}\t{f['mangled'] or ''}\t{int(f['name'] in code)}\n")

# ---------- ELF bits for strings / imports / shaders
d = open(SO, 'rb').read()
shoff = struct.unpack_from('<Q', d, 0x28)[0]
shnum, shstrndx = struct.unpack_from('<HH', d, 0x3C)
sh = []
for i in range(shnum):
    nm, ty, fl, va, off, sz, lk, inf, al, es = struct.unpack_from('<IIQQQQIIQQ', d, shoff + i * 64)
    sh.append((nm, off, sz, va))
stro = sh[shstrndx][1]
def nm(o):
    e = d.index(b'\0', stro + o); return d[stro + o:e].decode()
S = {nm(s[0]): s for s in sh}
ro = S['.rodata']
blob = d[ro[1]:ro[1] + ro[2]]
strs = []
pos = 0
for m in re.finditer(rb'[\x09\x0a\x20-\x7e]{4,}', blob):
    strs.append((ro[3] + m.start(), m.group().decode()))
with open(f'{OUT}/reference/strings_rodata.txt', 'w') as o:
    for a, s in strs:
        o.write(f'0x{a:x}\t{s!r}\n')

n = 0
for a, s in strs:
    if '#version' in s or 'gl_Position' in s or 'gl_FragCoord' in s or 'precision ' in s and 'void main' in s:
        n += 1
        ext = 'frag' if 'gl_FragCoord' in s or 'out vec4' in s or 'FragColor' in s else 'glsl'
        open(f'{OUT}/shaders/rodata_0x{a:x}.{ext}', 'w').write(s + '\n')
print('shader-like strings', n)

dynsym = S['.dynsym']; dynstr = S['.dynstr']
imps = []
for i in range(dynsym[2] // 24):
    nmo, info, other, shndx, val, sz = struct.unpack_from('<IBBHQQ', d, dynsym[1] + i * 24)
    name = d[dynstr[1] + nmo:d.index(b'\0', dynstr[1] + nmo)].decode()
    if shndx == 0 and name:
        imps.append(name)
needed = subprocess.run(['readelf', '-d', SO], capture_output=True, text=True).stdout
libs = re.findall(r'Shared library: \[(.*?)\]', needed)
open(f'{OUT}/reference/imports.txt', 'w').write('# NEEDED: ' + ' '.join(libs) + '\n' + '\n'.join(sorted(set(imps))) + '\n')

exp = subprocess.run(['readelf', '--dyn-syms', '-W', SO], capture_output=True, text=True).stdout.split('\n')
rows = []
for l in exp:
    p_ = l.split()
    if len(p_) >= 8 and p_[6] != 'UND' and p_[3] in ('FUNC', 'OBJECT'):
        rows.append((p_[1], p_[2], p_[3], p_[7].split('@')[0]))
nm_in = '\n'.join(r[3] for r in rows)
dm = subprocess.run(['c++filt'], input=nm_in, capture_output=True, text=True).stdout.split('\n')
with open(f'{OUT}/reference/exports.txt', 'w') as o:
    o.write('addr\tsize\ttype\tdemangled\n')
    for r, dd in zip(rows, dm):
        o.write(f'0x{r[0].lstrip("0") or "0"}\t{r[1]}\t{r[2]}\t{dd}\n')

# tools for reproducibility
os.makedirs(f'{OUT}/tools', exist_ok=True)
for fn in ('elf2img.py', 'driver.py', 'assemble.py'):
    shutil.copy(f'{W}/{fn}', f'{OUT}/tools/{fn}')

print('modules:', {m: len(v) for m, v in sorted(groups.items())})
print('unnamed:', len(un))
