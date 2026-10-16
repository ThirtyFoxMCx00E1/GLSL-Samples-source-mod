/* module: perf  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x93834  size=100  perf::Install(void (*)(bool, char const*, ...), bool)  [_ZN4perf7InstallEPFvbPKczEb] */
void perf__Install(code *param_1,uint8 param_2)

{
  pcRam0000000000171228 = param_1;
  if ((param_2 & 1) == 0) {
    return;
  }
  rq__Listen_plt(4,FUN_00093898);
                    /* WARNING: Could not recover jumptable at 0x00093888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000171228)(0x4010000000000000,0x4056000000000000,0x4066000000000000,0,0x2d186 /* "perf: PerfCycle on - features switch off one at a time for %.0f s each..." */);
  return;
}

