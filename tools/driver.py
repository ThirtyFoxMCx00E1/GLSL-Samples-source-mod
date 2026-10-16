#!/usr/bin/env python3
"""Supervised Ghidra console decompiler run: per-function timeout, restart on hang."""
import json, os, subprocess, threading, queue, time, sys
W = '/home/claude/work'
os.environ['SLEIGHHOME'] = f'{W}/ghidra-master'
DEC = f'{W}/ghidra-master/Ghidra/Features/Decompiler/src/decompile/cpp/decomp_opt'
j = json.load(open(f'{W}/funcs.json'))
funcs = j['funcs']
init = ['load file image.xml']
seen = set()
for a, n, sz, k in j['data']:
    if a in seen:
        continue
    seen.add(a)
    t = 'code *' if k == 'gotfunc' else {4: 'xunknown4', 2: 'xunknown2', 1: 'xunknown1'}.get(sz, 'xunknown8')
    init.append(f'map address 0x{a:x} {t} {n}')
RESTART_EVERY = 120
os.makedirs(f'{W}/out', exist_ok=True)
LOG = open(f'{W}/out/driver.log', 'a')


def log(*a):
    print(time.strftime('%H:%M:%S'), *a, file=LOG, flush=True)


class Dec:
    def __init__(self):
        self.p = subprocess.Popen([DEC], cwd=W, stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                                  stderr=subprocess.STDOUT, bufsize=0)
        self.q = queue.Queue()
        threading.Thread(target=self._rd, daemon=True).start()
        self.send('\n'.join(init) + '\necho @@@READY\n')
        self.wait('@@@READY', 180)
        self.count = 0

    def _rd(self):
        while True:
            try:
                c = os.read(self.p.stdout.fileno(), 65536)
            except Exception:
                c = b''
            if not c:
                self.q.put(None)
                return
            self.q.put(c)

    def send(self, s):
        self.p.stdin.write(s.encode())
        self.p.stdin.flush()

    def wait(self, marker, timeout):
        end = time.time() + timeout
        out = ''
        need = '\n' + marker + '\n'
        while True:
            left = end - time.time()
            if left <= 0:
                return None
            try:
                c = self.q.get(timeout=left)
            except queue.Empty:
                return None
            if c is None:
                return None
            out += c.decode('latin1')
            # echo prints "[decomp]> echo @@@X\n@@@X\n": real marker is a bare line
            if need in ('\n' + out):
                return out

    def kill(self):
        try:
            self.p.kill()
            self.p.wait(timeout=5)
        except Exception:
            pass


done = {}
res_path = f'{W}/out/results.jsonl'
if os.path.exists(res_path):
    for l in open(res_path):
        r = json.loads(l)
        done[r['name']] = r
res = open(res_path, 'a')
d = Dec()
t0 = time.time()
for i, f in enumerate(funcs):
    if f['name'] in done:
        continue
    if d.count >= RESTART_EVERY:
        d.kill()
        d = Dec()
    tmo = 40 + f['size'] / 60.0
    d.send(f'lo fu {f["name"]}\ndecompile\nprint C\necho @@@END\n')
    out = d.wait('@@@END', tmo)
    d.count += 1
    if out is None:
        log('TIMEOUT', f['name'], hex(f['addr']), f['size'])
        r = dict(name=f['name'], ok=False, text='')
        d.kill()
        d = Dec()
    else:
        lines = [l for l in out.split('\n') if not l.startswith('[decomp]> ')]
        r = dict(name=f['name'], ok=True, text='\n'.join(lines))
    res.write(json.dumps(r) + '\n')
    res.flush()
    if i % 25 == 0:
        log('progress', i, len(funcs), int(time.time() - t0), 's')
log('DONE')
d.kill()
