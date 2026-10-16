# libZyZGfx64.so — decompiled (AArch64, stripped, BuildID 328d8ad8…)

Pseudo-C from Ghidra's decompiler (built from the uploaded `ghidra-master` source, run headless).
**Not original source** — it will not compile as-is; use it as readable reference.

- 1275 functions found (`.eh_frame` + `.dynsym` + `.init_array`); 1273 decompiled.
  `0x5ec48` and `0x5eedc` (libc++ `vector::insert` internals) hung the decompiler -> AArch64 disassembly in their place.
- Names: from `.dynsym` (demangled). `FUN_xxxxxxxx` = unexported function at that vaddr. PLT stubs named from relocs (`<export>_plt`).
- String pointers into `.rodata` are annotated inline: `0x23a1d /* "ao: off - ..." */`.
- `Could not recover jumptable ... Treating indirect jump as call` = tail call through a function-pointer
  (log callback, GL pointer); the call itself is correct.
- Analysis image: `bl <noreturn>` (`__cxa_throw`, `abort`, `__stack_chk_fail`, `*__throw_*`, ...) patched to `b` so flow stops there. Output only; the .so is untouched.

## Layout
- `src/by_module/<ns>.c` — exported functions grouped by namespace/class (`ao`, `shaders`, `fsr`, `gl`, `wind`, `ripples`, `rq`, `Config`, `hooks` = `HookOf_*`, `libcxx_runtime` = statically linked libc++/stb_sprintf).
- `src/unnamed/` — 719 unexported (static) functions, address order, 100 per file.
- `src/all_by_address.c` — everything, address order.
- `shaders/` — 41 GLSL ES strings extracted from `.rodata`.
- `reference/` — `functions.tsv` (addr/size/name/demangled/mangled), `exports.txt`, `imports.txt`, `strings_rodata.txt`.
- `include/ghidra_types.h` — typedefs for `int4`, `uint8`, `xunknown4`, `float4`, `code`, …
- `tools/` — `elf2img.py` (ELF -> decompiler image), `driver.py` (supervised run), `assemble.py` (this tree).
