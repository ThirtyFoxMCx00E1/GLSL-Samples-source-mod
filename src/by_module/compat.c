/* module: compat  (2 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x8f350  size=188  compat::SceneSize(int&, int&)  [_ZN6compat9SceneSizeERiS0_] */
void compat__SceneSize(int4 *param_1,xunknown4 *param_2)

{
  int8 iVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  int4 iVar4;
  xunknown4 xVar5;
  xunknown8 xStack_50;
  int8 iStack_48;
  
  iVar1 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar1 + 0x28);
  if (iRam0000000000170f88 == 0) {
    xVar2 = eglGetCurrentDisplay();
    xVar3 = eglGetCurrentSurface(0x3059);
    xStack_50 = 0;
    eglQuerySurface(xVar2,xVar3,0x3057,(int8)&xStack_50 + 4);
    eglQuerySurface(xVar2,xVar3,0x3056,&xStack_50);
    xVar5 = (xunknown4)xStack_50;
    iVar4 = xStack_50._4_4_;
  }
  else {
    xVar5 = xRam0000000000170f8c;
    iVar4 = iRam0000000000170f88;
  }
  *param_1 = iVar4;
  *param_2 = xVar5;
  if (*(int8 *)(iVar1 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8f40c  size=52  compat::Install(void (*)(bool, char const*, ...))  [_ZN6compat7InstallEPFvbPKczE] */
void compat__Install(xunknown8 param_1)

{
  xRam0000000000170f90 = param_1;
  rq__Listen_plt(1,FUN_0008f440);
                    /* WARNING: Could not recover jumptable at 0x000c99dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c50)(5,FUN_0008fe90);
  return;
}

