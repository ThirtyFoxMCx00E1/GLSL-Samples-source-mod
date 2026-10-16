/* module: got  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x7d044  size=92  got::FindSlot(char const*, char const*)  [_ZN3got8FindSlotEPKcS1_] */
void got__FindSlot(xunknown8 param_1,xunknown8 param_2)

{
  int8 iVar1;
  xunknown8 xStack_40;
  xunknown8 xStack_38;
  xunknown8 xStack_30;
  int8 iStack_28;
  
  iVar1 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar1 + 0x28);
  xStack_30 = 0;
  xStack_40 = param_1;
  xStack_38 = param_2;
  dl_iterate_phdr(FUN_0007d0a0,&xStack_40);
  if (*(int8 *)(iVar1 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xStack_30);
  return;
}

