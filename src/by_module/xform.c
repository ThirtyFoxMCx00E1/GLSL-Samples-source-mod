/* module: xform  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x74664  size=252  xform::SsrCode(int)  [_ZN5xform7SsrCodeEi] */
void xform__SsrCode(int8 *param_1,int4 param_2)

{
  int8 iVar1;
  uint8 uVar2;
  int8 iVar3;
  xunknown1 axStack_e58 [3600];
  int8 iStack_48;
  
  iVar1 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar1 + 0x28);
  if (param_2 < 5) {
    param_2 = 4;
  }
  if (0x17 < param_2) {
    param_2 = 0x18;
  }
  FUN_0006dfa8(axStack_e58,0xe10,0xe10,0x2de6e /* "uniform highp mat4 zSsrM;uniform highp vec4 zSsrC;uniform highp vec4 z..." */,param_2,param_2);
  uVar2 = strlen(axStack_e58);
  if (0xffffffffffffffef < uVar2) {
    if (*(int8 *)(iVar1 + 0x28) == iStack_48) {
      FUN_000664d4(param_1);
    }
    goto code_r0x0007475c;
  }
  if (uVar2 < 0x17) {
    iVar3 = (int8)param_1 + 1;
    *(char *)param_1 = (char)((int4)uVar2 << 1);
    if (uVar2 != 0) goto code_r0x00074708;
  }
  else {
    iVar3 = operator_new_plt((uVar2 | 0xf) + 1);
    param_1[1] = uVar2;
    param_1[2] = iVar3;
    *param_1 = (uVar2 | 0xf) + 2;
code_r0x00074708:
    memcpy(iVar3,axStack_e58,uVar2);
  }
  *(xunknown1 *)(iVar3 + uVar2) = 0;
  if (*(int8 *)(iVar1 + 0x28) == iStack_48) {
    return;
  }
code_r0x0007475c:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

