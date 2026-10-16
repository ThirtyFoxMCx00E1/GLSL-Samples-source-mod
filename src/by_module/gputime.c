/* module: gputime  (2 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x940ec  size=48  gputime::Drain(double&, int&)  [_ZN7gputime5DrainERdRi] */
xunknown1 gputime__Drain(xunknown8 *param_1,xunknown4 *param_2)

{
  xunknown1 xVar1;
  
  xVar1 = xRam00000000001716ac;
  *param_1 = xRam00000000001716a0;
  *param_2 = xRam00000000001716a8;
  xRam00000000001716a0 = 0;
  xRam00000000001716a8 = 0;
  return xVar1;
}

/* 0x9411c  size=68  gputime::Install(void (*)(bool, char const*, ...))  [_ZN7gputime7InstallEPFvbPKczE] */
void gputime__Install(xunknown8 param_1)

{
  xRam00000000001716b0 = param_1;
  rq__Listen_plt(1,FUN_00094160);
  rq__Listen_plt(2,FUN_0009469c);
                    /* WARNING: Could not recover jumptable at 0x000c99dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c50)(3,FUN_000946ec);
  return;
}

