/* unexported functions 0xc1514..0xc6350
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0xc1514  size=8 */
void FUN_000c1514(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc151c  size=48 */
uint8 FUN_000c151c(int8 param_1)

{
  uint1 uVar1;
  uint8 uVar2;
  
  uVar1 = *(uint1 *)((int8)*(xunknown8 **)(param_1 + 0x10) + 9);
  if ((uVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x000c153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(xunknown8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (uint8)(uVar1 < 0x40);
}

/* 0xc154c  size=48 */
uint8 FUN_000c154c(int8 param_1)

{
  uint1 uVar1;
  uint8 uVar2;
  
  uVar1 = *(uint1 *)((int8)*(int8 **)(param_1 + 0x10) + 10);
  if ((uVar1 & 3) == 2) {
                    /* WARNING: Could not recover jumptable at 0x000c156c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(int8 **)(param_1 + 0x10) + 8))();
    return uVar2;
  }
  return (uint8)((uVar1 & 3) == 0);
}

/* 0xc157c  size=48 */
uint8 FUN_000c157c(int8 param_1)

{
  uint2 uVar1;
  uint8 uVar2;
  
  uVar1 = *(uint2 *)((int8)*(int8 **)(param_1 + 0x10) + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000c159c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(int8 **)(param_1 + 0x10) + 0x10))();
    return uVar2;
  }
  return (uint8)(uVar1 == 0);
}

/* 0xc15ac  size=376 */
void FUN_000c15ac(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  uint4 uVar3;
  int8 iVar4;
  uint8 uVar5;
  
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x20))();
  uVar3 = *(uint4 *)(param_1 + 0xc);
  if ((uVar3 & 1) != 0) {
    iVar4 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar4 + 6U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar4 + 0x3e6U) {
        uVar5 = iVar4 + 0x3e6U;
      }
      param_2[2] = uVar5;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown2 *)((xunknown4 *)(iVar2 + iVar4) + 1) = 0x7473;
    *(xunknown4 *)(iVar2 + iVar4) = 0x6e6f6320;
    uVar3 = *(uint4 *)(param_1 + 0xc);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    iVar4 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar4 + 9U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar4 + 0x3e9U) {
        uVar5 = iVar4 + 0x3e9U;
      }
      param_2[2] = uVar5;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    xVar1 = xRam000000000003d18e;
    *(xunknown1 *)((xunknown8 *)(iVar2 + iVar4) + 1) = 0x65;
    *(xunknown8 *)(iVar2 + iVar4) = xVar1;
    uVar3 = *(uint4 *)(param_1 + 0xc);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    iVar4 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar4 + 9U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar4 + 0x3e9U) {
        uVar5 = iVar4 + 0x3e9U;
      }
      param_2[2] = uVar5;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar4 = param_2[1];
    }
    xVar1 = xRam000000000003fb5c;
    *(xunknown1 *)((xunknown8 *)(iVar2 + iVar4) + 1) = 0x74;
    *(xunknown8 *)(iVar2 + iVar4) = xVar1;
    param_2[1] = param_2[1] + 9;
  }
  return;
}

/* 0xc1724  size=20 */
void FUN_000c1724(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000c1734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x28))();
  return;
}

/* 0xc1738  size=8 */
void FUN_000c1738(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc1740  size=364 */
void FUN_000c1740(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  int8 *piVar5;
  int8 iVar6;
  xunknown8 xVar7;
  
  iVar6 = *(int8 *)(param_1 + 0x18);
  iVar2 = param_2[1];
  if (iVar6 != 0) {
    xVar7 = *(xunknown8 *)(param_1 + 0x10);
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar2 + iVar6)) {
      uVar3 = param_2[2] * 2;
      uVar4 = iVar2 + iVar6 + 0x3e0;
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar2 = param_2[1];
    }
    memcpy(iVar1 + iVar2,xVar7,iVar6);
    iVar2 = param_2[1] + iVar6;
    param_2[1] = iVar2;
  }
  uVar4 = iVar2 + 1;
  iVar6 = *param_2;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar2 + 0x3e1U) {
      uVar4 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar6 = realloc();
    *param_2 = iVar6;
    if (iVar6 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar6 + iVar2) = 0x28;
  piVar5 = *(int8 **)(param_1 + 0x20);
  (**(code **)(*piVar5 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  }
  iVar2 = param_2[1];
  iVar6 = *param_2;
  uVar4 = iVar2 + 1;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar2 + 0x3e1U) {
      uVar4 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar6 = realloc();
    *param_2 = iVar6;
    if (iVar6 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar6 + iVar2) = 0x29;
  return;
}

/* 0xc18ac  size=8 */
void FUN_000c18ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc18b4  size=216 */
void FUN_000c18b4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 6U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e6U) {
      uVar3 = iVar2 + 0x3e6U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc(iVar1);
    *param_2 = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
  }
  *(xunknown2 *)((xunknown4 *)(iVar1 + iVar2) + 1) = 0x7461;
  *(xunknown4 *)(iVar1 + iVar2) = 0x6f6c465f;
  piVar4 = *(int8 **)(param_1 + 0x10);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 6;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c1984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xc198c  size=8 */
void FUN_000c198c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc1994  size=464 */
void FUN_000c1994(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  xunknown8 xVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  uint8 uVar6;
  
  iVar5 = param_2[1];
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar4 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 9U) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar5 + 0x3e9U) {
        uVar6 = iVar5 + 0x3e9U;
      }
      param_2[2] = uVar6;
      iVar4 = realloc();
      *param_2 = iVar4;
      if (iVar4 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    xVar2 = xRam0000000000029fb0;
    *(xunknown1 *)((xunknown8 *)(iVar4 + iVar5) + 1) = 0x20;
    *(xunknown8 *)(iVar4 + iVar5) = xVar2;
    iVar4 = param_2[1];
    uVar6 = param_2[2];
    iVar5 = iVar4 + 9;
    param_2[1] = iVar5;
    iVar3 = *param_2;
    if (uVar6 < iVar4 + 0x10U) goto code_r0x000c1a40;
  }
  else {
    uVar6 = param_2[2];
    iVar3 = *param_2;
    if (uVar6 < iVar5 + 7U) {
code_r0x000c1a40:
      uVar1 = uVar6 * 2;
      if (uVar6 * 2 <= iVar5 + 999U) {
        uVar1 = iVar5 + 999U;
      }
      param_2[2] = uVar1;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
  }
  *(xunknown4 *)(iVar3 + iVar5 + 3) = 0x746e4974;
  *(xunknown4 *)(iVar3 + iVar5) = 0x7469425f;
  iVar4 = param_2[1];
  iVar3 = *param_2;
  uVar6 = iVar4 + 8;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  iVar5 = iVar4 + 7;
  param_2[1] = iVar5;
  if ((uint8)param_2[2] < uVar6) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 1000U) {
      uVar6 = iVar4 + 1000U;
    }
    param_2[2] = uVar6;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
    uVar6 = iVar5 + 1;
  }
  param_2[1] = uVar6;
  *(xunknown1 *)(iVar3 + iVar5) = 0x28;
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x10),param_2,0x13,0);
  iVar5 = param_2[1];
  iVar4 = *param_2;
  uVar6 = iVar5 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar6) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar5 + 0x3e1U) {
      uVar6 = iVar5 + 0x3e1U;
    }
    param_2[2] = uVar6;
    iVar4 = realloc();
    *param_2 = iVar4;
    if (iVar4 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar5 = param_2[1];
    uVar6 = iVar5 + 1;
  }
  param_2[1] = uVar6;
  *(xunknown1 *)(iVar4 + iVar5) = 0x29;
  return;
}

/* 0xc1b64  size=8 */
void FUN_000c1b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc1b6c  size=164 */
void FUN_000c1b6c(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x20))();
  iVar5 = *(int8 *)(param_1 + 0x20);
  if (iVar5 != 0) {
    iVar4 = param_2[1];
    iVar2 = *param_2;
    xVar6 = *(xunknown8 *)(param_1 + 0x18);
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar5)) {
      uVar3 = param_2[2] * 2;
      uVar1 = iVar4 + iVar5 + 0x3e0;
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
      param_2[2] = uVar3;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar4 = param_2[1];
    }
    memcpy(iVar2 + iVar4,xVar6,iVar5);
    param_2[1] = param_2[1] + iVar5;
  }
  return;
}

/* 0xc1c10  size=8 */
void FUN_000c1c10(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc1c18  size=160 */
void FUN_000c1c18(int8 param_1,xunknown8 *param_2)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  int8 *piVar4;
  
  piVar4 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar4[1];
  piVar1 = piVar4;
  if (iVar2 - 0xfd0U < 0xfffffffffffff00f || iVar2 == -0x21) {
    piVar1 = (int8 *)malloc(0x1000);
    if (piVar1 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar2 = 0;
    *piVar1 = (int8)piVar4;
    piVar1[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar1;
  }
  piVar1[1] = iVar2 + 0x20;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2bb8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x1e;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xc1cb8  size=168 */
void FUN_000c1cb8(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar5[1];
  piVar1 = piVar5;
  if (iVar2 - 0xfd0U < 0xfffffffffffff00f || iVar2 == -0x21) {
    piVar1 = (int8 *)malloc(0x1000);
    if (piVar1 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar2 = 0;
    *piVar1 = (int8)piVar5;
    piVar1[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar1;
  }
  piVar1[1] = iVar2 + 0x20;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2c28;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x1d;
  xVar3 = *param_2;
  xVar4 = *param_3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar4;
  return;
}

/* 0xc1d60  size=288 */
void FUN_000c1d60(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 *piVar5;
  
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 0xdU) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3edU) {
      uVar4 = iVar3 + 0x3edU;
    }
    param_2[2] = uVar4;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  xVar1 = CONCAT53(Ram000000000004047e,Ram000000000004047b);
  *(xunknown8 *)(iVar2 + iVar3) = CONCAT35(Ram000000000004047b,Ram0000000000040476);
  *(xunknown8 *)(iVar2 + iVar3 + 5) = xVar1;
  piVar5 = *(int8 **)(param_1 + 0x10);
  iVar3 = *piVar5;
  param_2[1] = param_2[1] + 0xd;
  (**(code **)(iVar3 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  }
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 1U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e1U) {
      uVar4 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar3 = param_2[1];
  }
  *(xunknown1 *)(iVar2 + iVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xc1e80  size=8 */
void FUN_000c1e80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc1e88  size=340 */
void FUN_000c1e88(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  piVar4 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar4 + 0x20))(piVar4);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 8U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 1000U) {
      uVar3 = iVar2 + 1000U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
  }
  *(xunknown8 *)(iVar1 + iVar2) = 0x5b726f7463657620;
  piVar4 = *(int8 **)(param_1 + 0x18);
  param_2[1] = param_2[1] + 8;
  if ((piVar4 != (int8 *)0x0) &&
     ((**(code **)(*piVar4 + 0x20))(piVar4,param_2), (*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40))
  {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 1U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar2) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xc1fdc  size=8 */
void FUN_000c1fdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc1fe4  size=164 */
void FUN_000c1fe4(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar5[1];
  piVar1 = piVar5;
  if (iVar2 - 0xfd0U < 0xfffffffffffff00f || iVar2 == -0x21) {
    piVar1 = (int8 *)malloc(0x1000);
    if (piVar1 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar2 = 0;
    *piVar1 = (int8)piVar5;
    piVar1[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar1;
  }
  piVar1[1] = iVar2 + 0x20;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2c98;
  xVar4 = *param_2;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0xf;
  xVar3 = *param_3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x400
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar4;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar3;
  return;
}

/* 0xc2088  size=12 */
xunknown8 FUN_000c2088(void)

{
  return 1;
}

/* 0xc2094  size=12 */
xunknown8 FUN_000c2094(void)

{
  return 1;
}

/* 0xc20a0  size=20 */
void FUN_000c20a0(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000c20b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x20))();
  return;
}

/* 0xc20b4  size=420 */
void FUN_000c20b4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  iVar2 = param_2[1];
  if (iVar2 == 0) {
    FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x2ba68 /* "out/llvm-project/libcxxabi/src/demangle/Utility.h" */,0xae,0x29893);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_abort)();
    return;
  }
  iVar1 = *param_2;
  if (*(char *)(iVar1 + iVar2 + -1) != ']') {
    if ((uint8)param_2[2] < iVar2 + 1U) {
      uVar3 = param_2[2] * 2;
      if (uVar3 <= iVar2 + 0x3e1U) {
        uVar3 = iVar2 + 0x3e1U;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar2 = param_2[1];
    }
    *(xunknown1 *)(iVar1 + iVar2) = 0x20;
    iVar1 = *param_2;
    iVar2 = param_2[1] + 1;
    param_2[1] = iVar2;
  }
  if ((uint8)param_2[2] < iVar2 + 1U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar2) = 0x5b;
  piVar4 = *(int8 **)(param_1 + 0x18);
  param_2[1] = param_2[1] + 1;
  if ((piVar4 != (int8 *)0x0) &&
     ((**(code **)(*piVar4 + 0x20))(piVar4,param_2), (*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40))
  {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 1U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar2) = 0x5d;
  piVar4 = *(int8 **)(param_1 + 0x10);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x000c2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0x28))(piVar4,param_2);
  return;
}

/* 0xc2258  size=8 */
void FUN_000c2258(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc2260  size=180 */
void FUN_000c2260(int8 param_1,xunknown8 *param_2,int8 *param_3)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  int8 iVar4;
  xunknown8 xVar5;
  int8 *piVar6;
  
  piVar6 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar6[1];
  piVar2 = piVar6;
  if (iVar3 - 0xfd0U < 0xfffffffffffff00f || iVar3 == -0x21) {
    piVar2 = (int8 *)malloc(0x1000);
    if (piVar2 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar3 = 0;
    *piVar2 = (int8)piVar6;
    piVar2[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar2;
  }
  iVar4 = *param_3;
  piVar2[1] = iVar3 + 0x20;
  uVar1 = *(uint2 *)(iVar4 + 9);
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd2d08;
  xVar5 = *param_2;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0xe;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar5;
  *(int8 *)((int8)piVar2 + iVar3 + 0x28) = iVar4;
  return;
}

/* 0xc2314  size=48 */
uint8 FUN_000c2314(int8 param_1)

{
  uint1 uVar1;
  uint8 uVar2;
  
  uVar1 = *(uint1 *)((int8)*(xunknown8 **)(param_1 + 0x18) + 9);
  if ((uVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x000c2334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(xunknown8 **)(param_1 + 0x18))();
    return uVar2;
  }
  return (uint8)(uVar1 < 0x40);
}

/* 0xc2344  size=448 */
void FUN_000c2344(int8 param_1,int8 *param_2)

{
  uint2 uVar1;
  uint2 uVar2;
  int8 *piVar3;
  uint8 uVar4;
  int8 iVar5;
  int8 iVar6;
  xunknown1 xVar7;
  
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x20))();
  piVar3 = *(int8 **)(param_1 + 0x18);
  uVar1 = *(uint2 *)((int8)piVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
code_r0x000c23c8:
    iVar6 = param_2[1];
    iVar5 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 1U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar6 + 0x3e1U) {
        uVar4 = iVar6 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar5 = realloc();
      *param_2 = iVar5;
      if (iVar5 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    xVar7 = 0x28;
  }
  else {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*piVar3 + 8))(piVar3,param_2);
      if ((uVar4 & 1) != 0) goto code_r0x000c23c8;
      piVar3 = *(int8 **)(param_1 + 0x18);
      uVar1 = *(uint2 *)((int8)piVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,param_2), (uVar4 & 1) != 0))))
    goto code_r0x000c23c8;
    iVar6 = param_2[1];
    iVar5 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 1U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar6 + 0x3e1U) {
        uVar4 = iVar6 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar5 = realloc();
      *param_2 = iVar5;
      if (iVar5 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    xVar7 = 0x20;
  }
  *(xunknown1 *)(iVar5 + iVar6) = xVar7;
  piVar3 = *(int8 **)(param_1 + 0x10);
  iVar6 = *piVar3;
  param_2[1] = param_2[1] + 1;
  (**(code **)(iVar6 + 0x20))(piVar3,param_2);
  if ((*(uint2 *)((int8)piVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar3 + 0x28))(piVar3,param_2);
  }
  iVar6 = param_2[1];
  iVar5 = *param_2;
  if ((uint8)param_2[2] < iVar6 + 3U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar6 + 0x3e3U) {
      uVar4 = iVar6 + 0x3e3U;
    }
    param_2[2] = uVar4;
    iVar5 = realloc();
    *param_2 = iVar5;
    if (iVar5 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar6 = param_2[1];
  }
  *(xunknown1 *)((xunknown2 *)(iVar5 + iVar6) + 1) = 0x2a;
  *(xunknown2 *)(iVar5 + iVar6) = 0x3a3a;
  param_2[1] = param_2[1] + 3;
  return;
}

/* 0xc2504  size=228 */
void FUN_000c2504(int8 param_1,int8 *param_2)

{
  uint2 uVar1;
  uint2 uVar2;
  int8 *piVar3;
  uint8 uVar4;
  int8 iVar5;
  int8 iVar6;
  
  piVar3 = *(int8 **)(param_1 + 0x18);
  uVar1 = *(uint2 *)((int8)piVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*piVar3 + 8))(piVar3,param_2);
      if ((uVar4 & 1) != 0) goto code_r0x000c2578;
      piVar3 = *(int8 **)(param_1 + 0x18);
      uVar1 = *(uint2 *)((int8)piVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,param_2), (uVar4 & 1) == 0))))
    goto code_r0x000c25c4;
  }
code_r0x000c2578:
  iVar6 = param_2[1];
  iVar5 = *param_2;
  if ((uint8)param_2[2] < iVar6 + 1U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar6 + 0x3e1U) {
      uVar4 = iVar6 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar5 = realloc();
    *param_2 = iVar5;
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar6 = param_2[1];
  }
  *(xunknown1 *)(iVar5 + iVar6) = 0x29;
  param_2[1] = param_2[1] + 1;
code_r0x000c25c4:
                    /* WARNING: Could not recover jumptable at 0x000c25e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x28))(*(int8 **)(param_1 + 0x18),param_2);
  return;
}

/* 0xc25e8  size=8 */
void FUN_000c25e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc25f0  size=304 */
void FUN_000c25f0(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  int8 *piVar5;
  int8 iVar6;
  xunknown8 xVar7;
  
  iVar6 = *(int8 *)(param_1 + 0x18);
  iVar2 = param_2[1];
  if (iVar6 != 0) {
    xVar7 = *(xunknown8 *)(param_1 + 0x10);
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar2 + iVar6)) {
      uVar3 = param_2[2] * 2;
      uVar4 = iVar2 + iVar6 + 0x3e0;
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar2 = param_2[1];
    }
    memcpy(iVar1 + iVar2,xVar7,iVar6);
    iVar2 = param_2[1] + iVar6;
    param_2[1] = iVar2;
  }
  uVar4 = iVar2 + 1;
  iVar6 = *param_2;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar2 + 0x3e1U) {
      uVar4 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar6 = realloc();
    *param_2 = iVar6;
    if (iVar6 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar6 + iVar2) = 0x20;
  piVar5 = *(int8 **)(param_1 + 0x20);
  (**(code **)(*piVar5 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c2714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  return;
}

/* 0xc2720  size=8 */
void FUN_000c2720(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc2728  size=48 */
uint8 FUN_000c2728(int8 param_1)

{
  uint1 uVar1;
  uint8 uVar2;
  
  uVar1 = *(uint1 *)((int8)*(xunknown8 **)(param_1 + 0x10) + 9);
  if ((uVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x000c2748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(xunknown8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (uint8)(uVar1 < 0x40);
}

/* 0xc2758  size=832 */
void FUN_000c2758(int8 param_1,int8 *param_2)

{
  uint2 uVar1;
  uint2 uVar2;
  int8 *piVar3;
  uint8 uVar4;
  int8 iVar5;
  int8 iVar6;
  int8 iVar7;
  uint8 uVar8;
  xunknown1 xVar9;
  int8 iVar10;
  int8 *piVar11;
  
  piVar3 = *(int8 **)(param_1 + 0x10);
  if (((((char)piVar3[1] == '\v') && (iVar7 = piVar3[2], *(char *)(iVar7 + 8) == '\b')) &&
      (*(int8 *)(iVar7 + 0x18) == 0xb)) &&
     (**(int8 **)(iVar7 + 0x10) == 0x6a626f5f636a626f &&
      *(int8 *)((int8)*(int8 **)(iVar7 + 0x10) + 3) == 0x7463656a626f5f63)) {
    iVar7 = *param_2;
    piVar11 = param_2 + 1;
    iVar5 = *piVar11;
    if ((uint8)param_2[2] < iVar5 + 3U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar5 + 0x3e3U) {
        uVar4 = iVar5 + 0x3e3U;
      }
      param_2[2] = uVar4;
      iVar7 = realloc(iVar7);
      *param_2 = iVar7;
      if (iVar7 == 0) goto code_r0x000ca7b0;
      iVar5 = *piVar11;
    }
    *(xunknown1 *)((xunknown2 *)(iVar7 + iVar5) + 1) = 0x3c;
    *(xunknown2 *)(iVar7 + iVar5) = 0x6469;
    iVar7 = *piVar11 + 3;
    *piVar11 = iVar7;
    iVar5 = piVar3[4];
    if (iVar5 != 0) {
      iVar10 = piVar3[3];
      iVar6 = *param_2;
      if ((uint8)param_2[2] < (uint8)(iVar7 + iVar5)) {
        uVar8 = param_2[2] * 2;
        uVar4 = iVar7 + iVar5 + 0x3e0;
        if (uVar8 <= uVar4) {
          uVar8 = uVar4;
        }
        param_2[2] = uVar8;
        iVar6 = realloc();
        *param_2 = iVar6;
        if (iVar6 == 0) goto code_r0x000ca7b0;
        iVar7 = *piVar11;
      }
      memcpy(iVar6 + iVar7,iVar10,iVar5);
      iVar7 = *piVar11 + iVar5;
      *piVar11 = iVar7;
    }
    iVar5 = *param_2;
    if ((uint8)param_2[2] < iVar7 + 1U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar7 + 0x3e1U) {
        uVar4 = iVar7 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar5 = realloc();
      *param_2 = iVar5;
      if (iVar5 == 0) goto code_r0x000ca7b0;
      iVar7 = *piVar11;
    }
    xVar9 = 0x3e;
    goto code_r0x000c294c;
  }
  (**(code **)(*piVar3 + 0x20))(piVar3,param_2);
  piVar3 = *(int8 **)(param_1 + 0x10);
  if (((*(uint1 *)((int8)piVar3 + 10) & 3) == 0) ||
     (((*(uint1 *)((int8)piVar3 + 10) & 3) == 2 &&
      (uVar4 = (**(code **)(*piVar3 + 8))(piVar3,param_2), (uVar4 & 1) != 0)))) {
    iVar7 = param_2[1];
    iVar5 = *param_2;
    if ((uint8)param_2[2] < iVar7 + 1U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar7 + 0x3e1U) {
        uVar4 = iVar7 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar5 = realloc();
      *param_2 = iVar5;
      if (iVar5 == 0) goto code_r0x000ca7b0;
      iVar7 = param_2[1];
    }
    *(xunknown1 *)(iVar5 + iVar7) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  piVar3 = *(int8 **)(param_1 + 0x10);
  uVar1 = *(uint2 *)((int8)piVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
code_r0x000c28bc:
    iVar7 = param_2[1];
    iVar5 = *param_2;
    if ((uint8)param_2[2] < iVar7 + 1U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar7 + 0x3e1U) {
        uVar4 = iVar7 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar5 = realloc();
      *param_2 = iVar5;
      if (iVar5 == 0) goto code_r0x000ca7b0;
      iVar7 = param_2[1];
    }
    *(xunknown1 *)(iVar5 + iVar7) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*piVar3 + 8))(piVar3,param_2);
      if ((uVar4 & 1) != 0) goto code_r0x000c28bc;
      piVar3 = *(int8 **)(param_1 + 0x10);
      uVar1 = *(uint2 *)((int8)piVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,param_2), (uVar4 & 1) != 0))))
    goto code_r0x000c28bc;
  }
  iVar5 = *param_2;
  iVar7 = param_2[1];
  if ((uint8)param_2[2] < iVar7 + 1U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar7 + 0x3e1U) {
      uVar4 = iVar7 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar5 = realloc();
    *param_2 = iVar5;
    if (iVar5 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar7 = param_2[1];
  }
  xVar9 = 0x2a;
code_r0x000c294c:
  *(xunknown1 *)(iVar5 + iVar7) = xVar9;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xc2a98  size=340 */
void FUN_000c2a98(int8 param_1,int8 *param_2)

{
  uint2 uVar1;
  uint2 uVar2;
  int8 *piVar3;
  uint8 uVar4;
  int8 iVar5;
  int8 iVar6;
  
  piVar3 = *(int8 **)(param_1 + 0x10);
  if (((((char)piVar3[1] == '\v') && (iVar6 = piVar3[2], *(char *)(iVar6 + 8) == '\b')) &&
      (*(int8 *)(iVar6 + 0x18) == 0xb)) &&
     (**(int8 **)(iVar6 + 0x10) == 0x6a626f5f636a626f &&
      *(int8 *)((int8)*(int8 **)(iVar6 + 0x10) + 3) == 0x7463656a626f5f63)) {
    return;
  }
  uVar1 = *(uint2 *)((int8)piVar3 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 != 0) {
    if (uVar2 == 2) {
      uVar4 = (**(code **)(*piVar3 + 8))(piVar3,param_2);
      if ((uVar4 & 1) != 0) goto code_r0x000c2b6c;
      piVar3 = *(int8 **)(param_1 + 0x10);
      uVar1 = *(uint2 *)((int8)piVar3 + 9);
    }
    if (((uVar1 >> 10 & 3) != 0) &&
       (((uVar1 >> 10 & 3) != 2 ||
        (uVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,param_2), (uVar4 & 1) == 0))))
    goto code_r0x000c2bb8;
  }
code_r0x000c2b6c:
  iVar6 = param_2[1];
  iVar5 = *param_2;
  if ((uint8)param_2[2] < iVar6 + 1U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar6 + 0x3e1U) {
      uVar4 = iVar6 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar5 = realloc();
    *param_2 = iVar5;
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar6 = param_2[1];
  }
  *(xunknown1 *)(iVar5 + iVar6) = 0x29;
  param_2[1] = param_2[1] + 1;
code_r0x000c2bb8:
                    /* WARNING: Could not recover jumptable at 0x000c2bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x28))(*(int8 **)(param_1 + 0x10),param_2);
  return;
}

/* 0xc2bec  size=8 */
void FUN_000c2bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc2bf4  size=48 */
uint8 FUN_000c2bf4(int8 param_1)

{
  uint1 uVar1;
  uint8 uVar2;
  
  uVar1 = *(uint1 *)((int8)*(xunknown8 **)(param_1 + 0x10) + 9);
  if ((uVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x000c2c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(xunknown8 **)(param_1 + 0x10))();
    return uVar2;
  }
  return (uint8)(uVar1 < 0x40);
}

/* 0xc2c24  size=564 */
void FUN_000c2c24(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  uint2 uVar2;
  uint2 uVar3;
  bool bVar4;
  uint8 uVar5;
  int8 iVar6;
  int8 iVar7;
  int8 *piVar8;
  int8 iVar9;
  uint8 uVar10;
  xunknown1 axVar11 [16];
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  *(xunknown1 *)(param_1 + 0x1c) = 1;
  axVar11 = FUN_000c2fa4(*(xunknown8 *)(param_1 + 0x10),*(xunknown4 *)(param_1 + 0x18),param_2);
  piVar8 = axVar11._8_8_;
  if (piVar8 == (int8 *)0x0) goto code_r0x000c2e2c;
  (**(code **)(*piVar8 + 0x20))(piVar8,param_2);
  if (((*(uint1 *)((int8)piVar8 + 10) & 3) == 0) ||
     (((*(uint1 *)((int8)piVar8 + 10) & 3) == 2 &&
      (uVar5 = (**(code **)(*piVar8 + 8))(piVar8,param_2), (uVar5 & 1) != 0)))) {
    iVar9 = param_2[1];
    iVar6 = *param_2;
    if ((uint8)param_2[2] < iVar9 + 1U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar9 + 0x3e1U) {
        uVar5 = iVar9 + 0x3e1U;
      }
      param_2[2] = uVar5;
      iVar6 = realloc();
      *param_2 = iVar6;
      if (iVar6 == 0) goto code_r0x000ca7b0;
      iVar9 = param_2[1];
    }
    *(xunknown1 *)(iVar6 + iVar9) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
  uVar2 = *(uint2 *)((int8)piVar8 + 9);
  uVar3 = uVar2 >> 8 & 3;
  if (uVar3 == 0) {
code_r0x000c2d6c:
    iVar9 = param_2[1];
    iVar6 = *param_2;
    if ((uint8)param_2[2] < iVar9 + 1U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar9 + 0x3e1U) {
        uVar5 = iVar9 + 0x3e1U;
      }
      param_2[2] = uVar5;
      iVar6 = realloc();
      *param_2 = iVar6;
      if (iVar6 == 0) goto code_r0x000ca7b0;
      iVar9 = param_2[1];
    }
    *(xunknown1 *)(iVar6 + iVar9) = 0x28;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar3 == 2) {
      uVar5 = (**(code **)(*piVar8 + 8))(piVar8,param_2);
      if ((uVar5 & 1) != 0) goto code_r0x000c2d6c;
      uVar2 = *(uint2 *)((int8)piVar8 + 9);
    }
    if (((uVar2 >> 10 & 3) == 0) ||
       (((uVar2 >> 10 & 3) == 2 &&
        (uVar5 = (**(code **)(*piVar8 + 0x10))(piVar8,param_2), (uVar5 & 1) != 0))))
    goto code_r0x000c2d6c;
  }
  bVar4 = (axVar11._0_8_ & 0xffffffff) != 0;
  iVar9 = 1;
  if (bVar4) {
    iVar9 = 2;
  }
  iVar6 = param_2[1];
  iVar7 = *param_2;
  xVar1 = 0x2ac96;
  if (bVar4) {
    xVar1 = 0x2ac98;
  }
  if ((uint8)param_2[2] < (uint8)(iVar6 + iVar9)) {
    uVar10 = param_2[2] * 2;
    uVar5 = iVar6 + iVar9 + 0x3e0;
    if (uVar10 <= uVar5) {
      uVar10 = uVar5;
    }
    param_2[2] = uVar10;
    iVar7 = realloc();
    *param_2 = iVar7;
    if (iVar7 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar6 = param_2[1];
  }
  memcpy(iVar7 + iVar6,xVar1,iVar9);
  param_2[1] = param_2[1] + iVar9;
code_r0x000c2e2c:
  *(xunknown1 *)(param_1 + 0x1c) = 0;
  return;
}

/* 0xc2e58  size=316 */
void FUN_000c2e58(int8 param_1,int8 *param_2)

{
  uint2 uVar1;
  uint2 uVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 *extraout_x1;
  int8 iVar5;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  *(xunknown1 *)(param_1 + 0x1c) = 1;
  FUN_000c2fa4(*(xunknown8 *)(param_1 + 0x10),*(xunknown4 *)(param_1 + 0x18),param_2);
  if (extraout_x1 == (int8 *)0x0) goto code_r0x000c2f70;
  uVar1 = *(uint2 *)((int8)extraout_x1 + 9);
  uVar2 = uVar1 >> 8 & 3;
  if (uVar2 == 0) {
code_r0x000c2f10:
    iVar5 = param_2[1];
    iVar4 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 1U) {
      uVar3 = param_2[2] * 2;
      if (uVar3 <= iVar5 + 0x3e1U) {
        uVar3 = iVar5 + 0x3e1U;
      }
      param_2[2] = uVar3;
      iVar4 = realloc();
      *param_2 = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar5 = param_2[1];
    }
    *(xunknown1 *)(iVar4 + iVar5) = 0x29;
    param_2[1] = param_2[1] + 1;
  }
  else {
    if (uVar2 == 2) {
      uVar3 = (**(code **)(*extraout_x1 + 8))(extraout_x1,param_2);
      if ((uVar3 & 1) != 0) goto code_r0x000c2f10;
      uVar1 = *(uint2 *)((int8)extraout_x1 + 9);
    }
    if (((uVar1 >> 10 & 3) == 0) ||
       (((uVar1 >> 10 & 3) == 2 &&
        (uVar3 = (**(code **)(*extraout_x1 + 0x10))(extraout_x1,param_2), (uVar3 & 1) != 0))))
    goto code_r0x000c2f10;
  }
  (**(code **)(*extraout_x1 + 0x28))(extraout_x1,param_2);
code_r0x000c2f70:
  *(xunknown1 *)(param_1 + 0x1c) = 0;
  return;
}

/* 0xc2f94  size=8 */
void FUN_000c2f94(void)

{
  return;
}

/* 0xc2f9c  size=8 */
void FUN_000c2f9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc2fa4  size=428 */
xunknown1  [16] FUN_000c2fa4(int8 *param_1,uint4 param_2,xunknown8 param_3)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint4 uVar5;
  xunknown1 axVar6 [16];
  xunknown8 *pxStack_98;
  xunknown8 *pxStack_90;
  xunknown8 *pxStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown8 xStack_70;
  xunknown8 xStack_68;
  xunknown8 xStack_60;
  xunknown8 xStack_58;
  xunknown8 xStack_50;
  xunknown8 xStack_48;
  
  pxStack_88 = (xunknown8 *)((int8)register_sp + -0x40);
  xStack_78 = 0;
  xStack_80 = 0;
  xStack_68 = 0;
  xStack_70 = 0;
  xStack_58 = 0;
  xStack_60 = 0;
  xStack_48 = 0;
  xStack_50 = 0;
  pxStack_98 = &xStack_80;
  pxStack_90 = &xStack_80;
  do {
    do {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      if (*(char *)(iVar2 + 8) != '\r') {
        uVar5 = param_2;
        if (pxStack_98 != &xStack_80) goto code_r0x000c30e0;
        goto code_r0x000c30e4;
      }
      param_1 = *(int8 **)(iVar2 + 0x10);
      uVar5 = *(uint4 *)(iVar2 + 0x18);
      if ((int4)param_2 <= (int4)*(uint4 *)(iVar2 + 0x18)) {
        uVar5 = param_2;
      }
      if (pxStack_90 == pxStack_88) {
        iVar2 = (int8)pxStack_90 - (int8)pxStack_98;
        if (pxStack_98 == &xStack_80) {
          pxStack_98 = (xunknown8 *)malloc(iVar2 * 2);
          if (pxStack_98 == (xunknown8 *)0x0) goto code_r0x000ca7b0;
          if (pxStack_90 != &xStack_80) {
            memcpy(pxStack_98,&xStack_80,iVar2);
          }
        }
        else {
          pxStack_98 = (xunknown8 *)realloc();
          if (pxStack_98 == (xunknown8 *)0x0) goto code_r0x000ca7b0;
        }
        pxStack_90 = (xunknown8 *)((int8)pxStack_98 + iVar2);
        pxStack_88 = pxStack_98 + (iVar2 >> 2);
      }
      pxVar1 = pxStack_90 + 1;
      *pxStack_90 = param_1;
      uVar3 = (int8)pxVar1 - (int8)pxStack_98 >> 3;
      param_2 = uVar5;
      pxStack_90 = pxVar1;
    } while (uVar3 < 2);
    uVar4 = uVar3 - 1 >> 1;
    if (uVar3 <= uVar4) {
      FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0x96,0x2a47d /* "Invalid access!" */);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      axVar6 = (*got_abort)();
      return axVar6;
    }
  } while (param_1 != (int8 *)pxStack_98[uVar4]);
  param_1 = (int8 *)0x0;
  if (pxStack_98 != &xStack_80) {
code_r0x000c30e0:
    free();
    uVar5 = param_2;
  }
code_r0x000c30e4:
  axVar6._4_4_ = 0;
  axVar6._0_4_ = uVar5;
  axVar6._8_8_ = param_1;
  return axVar6;
}

/* 0xc33ac  size=12 */
xunknown8 FUN_000c33ac(xunknown8 *param_1)

{
  return *param_1;
}

/* 0xc33b8  size=36 */
bool FUN_000c33b8(uint8 *param_1)

{
  return *param_1 >> 8 == 0x434c4e47432b2b;
}

/* 0xc35c4  size=104 */
int8 FUN_000c35c4(int4 param_1,int8 param_2)

{
  int8 iVar1;
  
  if (param_1 != 1) {
    FUN_000a8760(*(xunknown8 *)(param_2 + -0x38));
    FUN_0009e4a4();
    iVar1 = FUN_0009e4a4();
    cxa_begin_catch_plt(iVar1 + 0x60);
    iVar1 = FUN_000a8760(*(xunknown8 *)(iVar1 + 0x28));
    return *(int8 *)(iVar1 + -8);
  }
  iVar1 = FUN_000c5430(0xffffffffffffffff,param_2 + -0x58);
  if (iVar1 == 1) {
    if (*(code **)(param_2 + -0x48) != (code *)0x0) {
      (**(code **)(param_2 + -0x48))(param_2 + 0x20);
    }
    iVar1 = FUN_000c3d90(param_2 + -0x60);
  }
  return iVar1;
}

/* 0xc362c  size=36 */
xunknown8 FUN_000c362c(int8 param_1)

{
  int8 iVar1;
  
  cxa_begin_catch_plt(param_1 + 0x60);
  iVar1 = FUN_000a8760(*(xunknown8 *)(param_1 + 0x28));
  return *(xunknown8 *)(iVar1 + -8);
}

/* 0xc3ae0  size=116 */
uint8 FUN_000c3ae0(int4 param_1,int8 param_2)

{
  uint2 uVar1;
  uint2 *puVar2;
  int8 iVar3;
  uint8 uVar4;
  int4 iVar5;
  uint2 *puVar6;
  uint2 *puVar7;
  uint2 *puVar8;
  int8 iVar9;
  
  if (param_1 != 1) {
    FUN_000a8760(*(xunknown8 *)(param_2 + -0x38));
    FUN_0009e4a4();
    FUN_0009e4a4();
    iVar9 = cxa_get_globals_fast_plt();
    uVar4 = 0;
    if (iVar9 != 0) {
      uVar4 = (uint8)(*(int4 *)(iVar9 + 8) != 0);
    }
    return uVar4;
  }
  iVar9 = *(int8 *)(param_2 + -0x58);
  if ((iVar9 != 0) && (iVar3 = FUN_000c5430(0xffffffffffffffff,iVar9 + -0x78), iVar3 == 1)) {
    if (*(code **)(iVar9 + -0x68) != (code *)0x0) {
      (**(code **)(iVar9 + -0x68))(iVar9);
    }
    FUN_000c3d90(iVar9 + -0x80);
  }
  if ((param_2 - 0x60U < 0x1730b0) || (0x1732af < param_2 - 0x60U)) {
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*got_free)();
    return uVar4;
  }
  puVar8 = (uint2 *)(param_2 + -100);
  pthread_mutex_lock(0x173088);
  if ((puRam0000000000173080 != (uint2 *)0x0) && (puRam0000000000173080 != (uint2 *)0x1732b0)) {
    puVar2 = puRam0000000000173080;
    puVar7 = (uint2 *)0x0;
    do {
      puVar6 = puVar2;
      uVar1 = puVar6[1];
      if (puVar6 + (uint8)uVar1 * 2 == puVar8) {
        puVar6[1] = *(int2 *)(param_2 + -0x62) + uVar1;
        goto code_r0x000c3ea8;
      }
      if (puVar8 + (uint8)*(uint2 *)(param_2 + -0x62) * 2 == puVar6) {
        *(uint2 *)(param_2 + -0x62) = *(uint2 *)(param_2 + -0x62) + uVar1;
        if (puVar7 == (uint2 *)0x0) {
          puRam0000000000173080 = puVar8;
          *puVar8 = *puVar6;
        }
        else {
          *puVar7 = (uint2)((int4)puVar8 - 0x1730b0U >> 2);
        }
        goto code_r0x000c3ea8;
      }
      puVar2 = (uint2 *)((uint8)*puVar6 * 4 + 0x1730b0);
      puVar7 = puVar6;
    } while ((uint8)*puVar6 != 0x80);
  }
  iVar5 = (int4)puRam0000000000173080;
  puRam0000000000173080 = puVar8;
  *puVar8 = (uint2)(iVar5 - 0x1730b0U >> 2);
code_r0x000c3ea8:
  uVar4 = pthread_mutex_unlock(0x173088);
  return uVar4;
}

/* 0xc3bac  size=92 */
void FUN_000c3bac(uint8 param_1)

{
  int8 iStack_8;
  
  iStack_8 = 0;
  if (param_1 < 2) {
    param_1 = 1;
  }
  posix_memalign(&iStack_8,0x10,param_1);
  if (iStack_8 == 0) {
    FUN_000c3c08(param_1);
    return;
  }
  return;
}

/* 0xc3c08  size=392 */
uint2 * FUN_000c3c08(int8 param_1)

{
  uint2 uVar1;
  uint2 uVar2;
  xunknown8 xVar3;
  uint8 uVar4;
  uint2 *extraout_x8;
  int4 iVar5;
  uint2 *extraout_x9;
  uint2 *puVar6;
  uint8 uVar7;
  uint2 *puVar8;
  uint8 uVar9;
  uint8 uVar10;
  uint2 *puVar11;
  uint2 *puVar12;
  
  pthread_mutex_lock(0x173088);
  if (puRam0000000000173080 == (uint2 *)0x0) {
    xRam00000000001730bc = 0x7d0080;
    puRam0000000000173080 = (uint2 *)0x1730bc;
  }
  else if (puRam0000000000173080 == (uint2 *)0x1732b0) {
code_r0x000c3cc0:
    puVar11 = (uint2 *)0x0;
code_r0x000c3d2c:
    pthread_mutex_unlock(0x173088);
    return puVar11;
  }
  uVar7 = param_1 + 3U >> 2;
  uVar4 = uVar7 + 1;
  puVar6 = (uint2 *)0x0;
  puVar12 = puRam0000000000173080;
  while (puVar11 = puVar12 + 2, ((uint8)puVar11 & 0xf) == 0) {
    uVar1 = puVar12[1];
    uVar10 = (uint8)uVar1;
    uVar9 = (uint8)((uint4)uVar1 - (int4)uVar4 & 3);
    if (uVar10 <= uVar4) {
      uVar9 = 0;
    }
    if (uVar9 + uVar4 < uVar10) {
      uVar2 = (uint2)(uVar9 + uVar4);
      uVar1 = uVar1 - uVar2;
      puVar6 = puVar12 + (uint8)uVar1 * 2;
      puVar12[1] = uVar1;
      puVar11 = puVar6 + 2;
      *puVar6 = 0;
      puVar6[1] = uVar2;
      if (((uint8)puVar11 & 0xf) != 0) {
        FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32ceb /* "out/llvm-project/libcxxabi/src/fallback_malloc.cpp" */,0xa7,0x29893);
        puVar12 = extraout_x8;
        puVar6 = extraout_x9;
code_r0x000c3d08:
        uVar1 = *puVar12;
        if (puVar6 == (uint2 *)0x0) {
          *puVar12 = 0;
          puRam0000000000173080 = (uint2 *)((uint8)uVar1 * 4 + 0x1730b0);
        }
        else {
          *puVar6 = uVar1;
          *puVar12 = 0;
        }
      }
      goto code_r0x000c3d2c;
    }
    if (uVar7 < uVar10) goto code_r0x000c3d08;
    uVar1 = *puVar12;
    puVar6 = puVar12;
    puVar12 = (uint2 *)((uint8)uVar1 * 4 + 0x1730b0);
    if ((uint8)uVar1 == 0x80) goto code_r0x000c3cc0;
  }
  xVar3 = FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32ceb /* "out/llvm-project/libcxxabi/src/fallback_malloc.cpp" */,0x92,0x29893);
  pthread_mutex_unlock(0x173088);
  FUN_000c5688(xVar3);
  uVar4 = FUN_0009e4a4();
  if ((uVar4 < 0x1730b0) || (0x1732af < uVar4)) {
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar12 = (uint2 *)(*got_free)();
    return puVar12;
  }
  puVar12 = (uint2 *)(uVar4 - 4);
  pthread_mutex_lock(0x173088);
  if ((puRam0000000000173080 == (uint2 *)0x0) || (puRam0000000000173080 == (uint2 *)0x1732b0))
  goto code_r0x000c3e34;
  puVar6 = puRam0000000000173080;
  puVar11 = (uint2 *)0x0;
  while( true ) {
    puVar8 = puVar6;
    uVar1 = puVar8[1];
    if (puVar8 + (uint8)uVar1 * 2 == puVar12) {
      puVar8[1] = *(int2 *)(uVar4 - 2) + uVar1;
      goto code_r0x000c3ea8;
    }
    if (puVar12 + (uint8)*(uint2 *)(uVar4 - 2) * 2 == puVar8) break;
    puVar6 = (uint2 *)((uint8)*puVar8 * 4 + 0x1730b0);
    puVar11 = puVar8;
    if ((uint8)*puVar8 == 0x80) {
code_r0x000c3e34:
      iVar5 = (int4)puRam0000000000173080;
      puRam0000000000173080 = puVar12;
      *puVar12 = (uint2)(iVar5 - 0x1730b0U >> 2);
code_r0x000c3ea8:
      puVar12 = (uint2 *)pthread_mutex_unlock(0x173088);
      return puVar12;
    }
  }
  *(uint2 *)(uVar4 - 2) = *(uint2 *)(uVar4 - 2) + uVar1;
  if (puVar11 == (uint2 *)0x0) {
    puRam0000000000173080 = puVar12;
    *puVar12 = *puVar8;
  }
  else {
    *puVar11 = (uint2)((int4)puVar12 - 0x1730b0U >> 2);
  }
  goto code_r0x000c3ea8;
}

/* 0xc3d90  size=316 */
void FUN_000c3d90(uint8 param_1)

{
  uint2 uVar1;
  uint2 *puVar2;
  int4 iVar3;
  uint2 *puVar4;
  uint2 *puVar5;
  uint2 *puVar6;
  
  if ((param_1 < 0x1730b0) || (0x1732af < param_1)) {
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_free)();
    return;
  }
  puVar6 = (uint2 *)(param_1 - 4);
  pthread_mutex_lock(0x173088);
  if ((puRam0000000000173080 != (uint2 *)0x0) && (puRam0000000000173080 != (uint2 *)0x1732b0)) {
    puVar2 = puRam0000000000173080;
    puVar5 = (uint2 *)0x0;
    do {
      puVar4 = puVar2;
      uVar1 = puVar4[1];
      if (puVar4 + (uint8)uVar1 * 2 == puVar6) {
        puVar4[1] = *(int2 *)(param_1 - 2) + uVar1;
        goto code_r0x000c3ea8;
      }
      if (puVar6 + (uint8)*(uint2 *)(param_1 - 2) * 2 == puVar4) {
        *(uint2 *)(param_1 - 2) = *(uint2 *)(param_1 - 2) + uVar1;
        if (puVar5 == (uint2 *)0x0) {
          puRam0000000000173080 = puVar6;
          *puVar6 = *puVar4;
        }
        else {
          *puVar5 = (uint2)((int4)puVar6 - 0x1730b0U >> 2);
        }
        goto code_r0x000c3ea8;
      }
      puVar2 = (uint2 *)((uint8)*puVar4 * 4 + 0x1730b0);
      puVar5 = puVar4;
    } while ((uint8)*puVar4 != 0x80);
  }
  iVar3 = (int4)puRam0000000000173080;
  puRam0000000000173080 = puVar6;
  *puVar6 = (uint2)(iVar3 - 0x1730b0U >> 2);
code_r0x000c3ea8:
  pthread_mutex_unlock(0x173088);
  return;
}

/* 0xc40f4  size=1420 */
void FUN_000c40f4(uint8 *param_1,uint4 param_2,uint4 param_3,int8 param_4,xunknown8 param_5,
                 int8 param_6)

{
  uint1 uVar1;
  uint1 uVar2;
  uint8 uVar3;
  uint8 uVar4;
  char *pcVar5;
  uint8 uVar6;
  uint8 uVar7;
  uint8 uVar8;
  int8 iVar9;
  int8 iVar10;
  int8 *piVar11;
  xunknown8 xVar12;
  xunknown8 xVar13;
  uint4 uVar14;
  xunknown4 xVar15;
  uint8 uVar16;
  uint8 uVar17;
  uint8 uVar18;
  uint4 uVar19;
  uint1 *puVar20;
  uint1 *puVar21;
  uint1 *puVar22;
  uint1 *puStack_a0;
  uint1 *puStack_80;
  uint1 *puStack_78;
  uint1 *puStack_70;
  uint1 *puStack_68;
  
  param_1[4] = 0;
  *(xunknown4 *)(param_1 + 5) = 3;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
      return;
    }
    if (((param_2 ^ 0xffffffff) & 0xc) == 0) {
      xVar15 = 2;
      goto code_r0x000c44e8;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  pcVar5 = (char *)FUN_000c5800(param_5);
  if (pcVar5 != (char *)0x0) {
    param_1[2] = (uint8)pcVar5;
    uVar6 = FUN_000c588c(param_5);
    uVar7 = FUN_000c5834(param_5);
    puStack_70 = (uint1 *)(pcVar5 + 1);
    if (*pcVar5 == -1) {
      puVar22 = (uint1 *)(pcVar5 + 2);
      uVar1 = *puStack_70;
      uVar8 = uVar7;
    }
    else {
      uVar8 = FUN_000c48a0(&puStack_70,*pcVar5,0);
      puVar22 = puStack_70 + 1;
      uVar1 = *puStack_70;
    }
    uVar4 = (uint8)uVar1;
    if (uVar4 == 0xff) {
      puStack_80 = (uint1 *)0x0;
    }
    else {
      uVar18 = 0;
      uVar17 = 0;
      puVar20 = puVar22;
      do {
        puVar22 = puVar20 + 1;
        uVar1 = *puVar20;
        uVar16 = uVar18 & 0x3f;
        uVar18 = uVar18 + 7;
        uVar17 = ((uint8)uVar1 & 0x7f) << uVar16 | uVar17;
        puVar20 = puVar22;
      } while ((char)uVar1 < '\0');
      puStack_80 = puVar22 + uVar17;
    }
    uVar18 = 0;
    uVar17 = 0;
    uVar7 = uVar6 + ~uVar7;
    uVar1 = *puVar22;
    puVar22 = puVar22 + 1;
    do {
      puVar20 = puVar22 + 1;
      uVar2 = *puVar22;
      uVar16 = uVar18 & 0x3f;
      uVar18 = uVar18 + 7;
      uVar17 = ((uint8)uVar2 & 0x7f) << uVar16 | uVar17;
      puVar22 = puVar20;
    } while ((char)uVar2 < '\0');
    puStack_78 = puVar20;
    puStack_70 = puVar20;
    do {
      if (puVar20 + (uVar17 & 0xffffffff) <= puStack_78) break;
      uVar6 = FUN_000c48a0(&puStack_78,uVar1,0);
      iVar9 = FUN_000c48a0(&puStack_78,uVar1,0);
      iVar10 = FUN_000c48a0(&puStack_78,uVar1,0);
      uVar18 = 0;
      uVar16 = 0;
      puVar22 = puStack_78;
      do {
        puStack_78 = puVar22 + 1;
        uVar2 = *puVar22;
        uVar3 = uVar18 & 0x3f;
        uVar18 = uVar18 + 7;
        uVar16 = ((uint8)uVar2 & 0x7f) << uVar3 | uVar16;
        puVar22 = puStack_78;
      } while ((char)uVar2 < '\0');
      if ((uVar6 <= uVar7) && (uVar7 < iVar9 + uVar6)) {
        if (iVar10 == 0) goto code_r0x000c44e4;
        param_1[3] = iVar10 + uVar8;
        if (uVar16 == 0) {
          xVar15 = 6;
          if ((param_2 & 1) != 0) {
            xVar15 = 8;
          }
          goto code_r0x000c44e8;
        }
        uVar7 = uVar4 & 0xf;
        puVar20 = puVar20 + uVar16 + (uVar17 & 0xffffffff) + -1;
        puStack_a0 = (uint1 *)(param_4 + 0x20);
        uVar19 = 0;
        goto code_r0x000c4334;
      }
    } while (uVar6 <= uVar7);
    cxa_begin_catch_plt(param_4);
    if ((param_3 & 1) != 0) {
      do {
        FUN_000a8760(*(xunknown8 *)(param_4 + -0x38));
code_r0x000c45ec:
        cxa_begin_catch_plt(param_4);
      } while ((uVar6 & 1) != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000000d4468)();
    return;
  }
code_r0x000c44e4:
  xVar15 = 8;
  goto code_r0x000c44e8;
code_r0x000c4334:
  uVar6 = (uint8)param_3;
  uVar8 = 0;
  uVar18 = 0;
  puVar22 = puVar20;
  do {
    puVar21 = puVar22 + 1;
    uVar1 = *puVar22;
    uVar17 = uVar8 & 0x3f;
    uVar8 = uVar8 + 7;
    uVar18 = ((uint8)uVar1 & 0x7f) << uVar17 | uVar18;
    puVar22 = puVar21;
  } while ((char)uVar1 < '\0');
  uVar17 = -1L << (uVar8 & 0x3f);
  if (0x3f < uVar8 || uVar1 < 0x40) {
    uVar17 = 0;
  }
  uVar18 = uVar18 | uVar17;
  if ((int8)uVar18 < 1) {
    uVar14 = uVar18 == 0 | uVar19;
    if ((uVar18 != 0) && ((param_2 >> 3 & 1) == 0)) {
      if ((param_3 & 1) == 0) {
        *param_1 = uVar18;
        param_1[1] = (uint8)puVar20;
        goto code_r0x000c4588;
      }
      iVar9 = FUN_000c33ac(param_4);
      puVar22 = puStack_a0;
      if (iVar9 == 0x434c4e47432b2b01) {
        puVar22 = *(uint1 **)(param_4 + -0x58);
      }
      if ((puVar22 == (uint1 *)0x0) || (*(int8 *)(param_4 + -0x50) == 0)) goto code_r0x000c460c;
      param_6 = param_4;
      uVar6 = FUN_000c4a8c(uVar18,puStack_80,uVar4,*(int8 *)(param_4 + -0x50),puVar22,param_4,0);
      uVar14 = uVar19;
      if ((uVar6 & 1) != 0) {
        if ((param_2 & 1) == 0) {
          xVar13 = 0x30d7b /* "actions & _UA_SEARCH_PHASE" */;
          xVar12 = 0x327;
          goto code_r0x000ca550;
        }
        *param_1 = uVar18;
        param_1[1] = (uint8)puVar20;
        xVar15 = 6;
        param_1[4] = (uint8)puVar22;
        goto code_r0x000c44e8;
      }
    }
  }
  else {
    if (puStack_80 == (uint1 *)0x0) goto code_r0x000c45ec;
    if (0xc < (uint4)uVar7) goto code_r0x000c45ec;
    if ((0x1c1dU >> uVar7 & 1) == 0) goto code_r0x000c45ec;
    puStack_68 = puStack_80 + *(int8 *)(uVar7 * 8 + 0x43dc0) * uVar18;
    piVar11 = (int8 *)FUN_000c48a0(&puStack_68,uVar4,0);
    if (piVar11 == (int8 *)0x0) {
      if ((param_2 & 0xd) == 0) {
code_r0x000c4624:
        xVar13 = 0x36ffe /* "actions & (_UA_SEARCH_PHASE | _UA_HANDLER_FRAME | _UA_FORCE_UNWIND)" */;
        xVar12 = 0x2ec;
code_r0x000ca550:
                    /* WARNING: Could not recover jumptable at 0x000ca55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got___assert2)(0x3a130 /* "out/llvm-project/libcxxabi/src/cxa_personality.cpp" */,xVar12,0x2a4c4 /* "void __cxxabiv1::scan_eh_tab(scan_results &, _Unwind_Action, bool, _Un..." */,xVar13);
        return;
      }
      *param_1 = uVar18;
      param_1[1] = (uint8)puVar20;
code_r0x000c4588:
      iVar9 = FUN_000c33ac(param_4);
      if (iVar9 == 0x434c4e47432b2b01) {
        puStack_a0 = *(uint1 **)(param_4 + -0x58);
      }
      param_1[4] = (uint8)puStack_a0;
      xVar15 = 6;
      goto code_r0x000c44e8;
    }
    if ((param_3 & 1) != 0) {
      iVar9 = FUN_000c33ac(param_4);
      puStack_68 = puStack_a0;
      if (iVar9 == 0x434c4e47432b2b01) {
        puStack_68 = *(uint1 **)(param_4 + -0x58);
      }
      if ((puStack_68 == (uint1 *)0x0) || (*(int8 *)(param_4 + -0x50) == 0)) {
        cxa_begin_catch_plt(param_4);
        FUN_000a8760(*(xunknown8 *)(param_4 + -0x38));
        param_4 = param_6;
code_r0x000c460c:
        cxa_begin_catch_plt(param_4);
        FUN_000a8760(*(xunknown8 *)(param_4 + -0x38));
        goto code_r0x000c4624;
      }
      uVar6 = (**(code **)(*piVar11 + 0x20))(piVar11,*(int8 *)(param_4 + -0x50),&puStack_68);
      if ((uVar6 & 1) != 0) {
        if ((param_2 & 9) != 0) {
          *param_1 = uVar18;
          param_1[1] = (uint8)puVar20;
          *(xunknown4 *)(param_1 + 5) = 6;
          param_1[4] = (uint8)puStack_68;
          return;
        }
        xVar13 = 0x29fba /* "actions & (_UA_SEARCH_PHASE | _UA_FORCE_UNWIND)" */;
        xVar12 = 0x306;
        goto code_r0x000ca550;
      }
    }
    uVar14 = uVar19;
  }
  uVar6 = 0;
  uVar8 = 0;
  puVar22 = puVar21;
  do {
    uVar1 = *puVar22;
    uVar18 = uVar6 & 0x3f;
    uVar6 = uVar6 + 7;
    uVar8 = ((uint8)uVar1 & 0x7f) << uVar18 | uVar8;
    puVar22 = puVar22 + 1;
  } while ((char)uVar1 < '\0');
  uVar18 = -1L << (uVar6 & 0x3f);
  if (0x3f < uVar6 || uVar1 < 0x40) {
    uVar18 = 0;
  }
  if ((uVar8 | uVar18) == 0) goto code_r0x000c4524;
  puVar20 = puVar21 + (uVar8 | uVar18);
  uVar19 = uVar14;
  goto code_r0x000c4334;
code_r0x000c4524:
  xVar15 = 6;
  if ((uVar14 & (param_2 & 2) >> 1) == 0) {
    xVar15 = 8;
  }
code_r0x000c44e8:
  *(xunknown4 *)(param_1 + 5) = xVar15;
  return;
}

/* 0xc48a0  size=492 */
xunknown8 * FUN_000c48a0(xunknown8 *param_1,uint4 param_2,int8 param_3)

{
  uint4 uVar1;
  uint1 uVar2;
  xunknown8 *pxVar3;
  uint8 uVar4;
  uint8 *puVar5;
  uint8 *puVar6;
  uint8 *puVar7;
  uint8 uVar8;
  uint8 uVar9;
  
  if ((param_2 & 0xff) == 0xff) {
    return (xunknown8 *)0x0;
  }
  uVar1 = param_2 & 0xf;
  puVar5 = (uint8 *)*param_1;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_2 & 0xf) == 0) goto code_r0x000c49bc;
      if (uVar1 != 1) goto code_r0x000ca7b0;
      uVar8 = 0;
      pxVar3 = (xunknown8 *)0x0;
      puVar6 = puVar5;
      do {
        puVar7 = (uint8 *)((int8)puVar6 + 1);
        uVar9 = *puVar6;
        uVar4 = uVar8 & 0x3f;
        uVar8 = uVar8 + 7;
        pxVar3 = (xunknown8 *)(((uint8)(uint1)uVar9 & 0x7f) << uVar4 | (uint8)pxVar3);
        puVar6 = puVar7;
      } while ((char)(uint1)uVar9 < '\0');
    }
    else if (uVar1 == 2) {
      puVar7 = (uint8 *)((int8)puVar5 + 2);
      pxVar3 = (xunknown8 *)(uint8)(uint2)*puVar5;
    }
    else {
      if (uVar1 != 3) goto code_r0x000ca7b0;
      pxVar3 = (xunknown8 *)(uint8)(uint4)*puVar5;
joined_r0x000c4958:
      puVar7 = (uint8 *)((int8)puVar5 + 4);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) goto code_r0x000c49bc;
    if (uVar1 != 9) goto code_r0x000ca7b0;
    uVar8 = 0;
    uVar4 = 0;
    puVar6 = puVar5;
    do {
      puVar7 = (uint8 *)((int8)puVar6 + 1);
      uVar2 = (uint1)*puVar6;
      uVar9 = uVar8 & 0x3f;
      uVar8 = uVar8 + 7;
      uVar4 = ((uint8)uVar2 & 0x7f) << uVar9 | uVar4;
      puVar6 = puVar7;
    } while ((char)uVar2 < '\0');
    uVar9 = -1L << (uVar8 & 0x3f);
    if (0x3f < uVar8 || uVar2 < 0x40) {
      uVar9 = 0;
    }
    pxVar3 = (xunknown8 *)(uVar4 | uVar9);
  }
  else if (uVar1 == 10) {
    puVar7 = (uint8 *)((int8)puVar5 + 2);
    pxVar3 = (xunknown8 *)(int8)(int2)*puVar5;
  }
  else {
    if (uVar1 == 0xb) {
      pxVar3 = (xunknown8 *)(int8)(int4)(uint4)*puVar5;
      goto joined_r0x000c4958;
    }
    if (uVar1 != 0xc) goto code_r0x000ca7b0;
code_r0x000c49bc:
    puVar7 = puVar5 + 1;
    pxVar3 = (xunknown8 *)*puVar5;
  }
  uVar1 = (param_2 & 0xff) >> 4 & 7;
  if (uVar1 != 0) {
    if (uVar1 == 3) {
      if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar3 = (xunknown8 *)(*got___assert2)(0x3a130 /* "out/llvm-project/libcxxabi/src/cxa_personality.cpp" */,0x135,0x34a1f /* "uintptr_t __cxxabiv1::readEncodedPointer(const uint8_t **, uint8_t, ui..." */,0x22cfa /* "(base != 0) && \"DW_EH_PE_datarel is invalid with a base of 0\"" */);
        return pxVar3;
      }
      if (pxVar3 == (xunknown8 *)0x0) goto code_r0x000c4a24;
      pxVar3 = (xunknown8 *)((int8)pxVar3 + param_3);
    }
    else {
      if (uVar1 != 1) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar3 = (xunknown8 *)(*got_abort)();
        return pxVar3;
      }
      if (pxVar3 == (xunknown8 *)0x0) goto code_r0x000c4a24;
      pxVar3 = (xunknown8 *)((int8)pxVar3 + (int8)puVar5);
    }
  }
  if ((pxVar3 != (xunknown8 *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    pxVar3 = (xunknown8 *)*pxVar3;
    *param_1 = puVar7;
    return pxVar3;
  }
code_r0x000c4a24:
  *param_1 = puVar7;
  return pxVar3;
}

/* 0xc4a8c  size=288 */
uint8 FUN_000c4a8c(uint8 param_1,int8 param_2,uint8 param_3,xunknown8 param_4,int8 param_5,
                  int8 param_6,xunknown8 param_7)

{
  uint1 uVar1;
  int8 *piVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint8 uVar7;
  uint1 *puVar9;
  uint1 *puVar8;
  int8 iStack_68;
  
  if (param_2 == 0) {
code_r0x000c4ba0:
    cxa_begin_catch_plt(param_6);
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam00000000000d4468)();
    return uVar4;
  }
  uVar7 = param_3 & 0xf;
  uVar4 = 0;
  uVar5 = 0;
  puVar9 = (uint1 *)(param_2 + ~param_1);
  do {
    do {
      puVar8 = puVar9 + 1;
      uVar1 = *puVar9;
      uVar6 = uVar4 & 0x3f;
      uVar4 = uVar4 + 7;
      uVar6 = ((uint8)uVar1 & 0x7f) << uVar6 | uVar5;
      uVar5 = uVar6;
      puVar9 = puVar8;
    } while ((char)uVar1 < '\0');
    if (uVar6 == 0) break;
    if ((0xc < (uint4)uVar7) || ((0x1c1dU >> uVar7 & 1) == 0)) {
      cxa_begin_catch_plt(param_6);
      FUN_000a8760(*(xunknown8 *)(param_6 + -0x38));
      goto code_r0x000c4ba0;
    }
    iStack_68 = param_2 + *(int8 *)(uVar7 * 8 + 0x43dc0) * uVar6;
    piVar2 = (int8 *)FUN_000c48a0(&iStack_68,param_3 & 0xffffffff,param_7);
    iStack_68 = param_5;
    uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,param_4,&iStack_68);
    uVar4 = 0;
    uVar5 = 0;
  } while ((uVar3 & 1) == 0);
  return (uint8)(uVar6 == 0);
}

/* 0xc4d90  size=60 */
void FUN_000c4d90(void)

{
  if (cRam00000000001732b0 == '\x01') {
    pthread_key_delete(xRam00000000001732b4);
    cRam00000000001732b0 = '\0';
  }
  return;
}

/* 0xc4dcc  size=56 */
void FUN_000c4dcc(void)

{
  int4 iVar1;
  
  iVar1 = pthread_key_create(&xRam00000000001732b4,FUN_000c4e04);
  if (iVar1 == 0) {
    cRam00000000001732b0 = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_abort)();
  return;
}

/* 0xc4e04  size=140 */
void FUN_000c4e04(int8 *param_1)

{
  xunknown4 xVar1;
  uint8 uVar2;
  uint8 uVar3;
  
  xVar1 = xRam00000000001732b4;
  if (*param_1 != 0) {
    *param_1 = *param_1 + -1;
                    /* WARNING: Could not recover jumptable at 0x000ca15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_pthread_setspecific)(xVar1,param_1);
    return;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (param_1[uVar3 + 2] != 0) {
        free(*(xunknown8 *)(param_1[uVar3 + 2] + -8));
        uVar2 = param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_free)(param_1);
  return;
}

/* 0xc4e90  size=48 */
int4 FUN_000c4e90(int4 param_1,int4 param_2,int4 *param_3)

{
  char cVar1;
  bool bVar2;
  int4 iVar3;
  
  if (cRam00000000001732f0 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (*param_3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}

/* 0xc4ec0  size=248 */
void FUN_000c4ec0(void)

{
  uint4 uVar1;
  int4 iVar2;
  uint8 uVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 uStack_84;
  uint2 uStack_7c;
  int8 iStack_28;
  
  iVar4 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar4 + 0x28);
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    cRam00000000001732f0 = false;
    if (*(int8 *)(iVar4 + 0x28) == iStack_28) {
      cRam00000000001732f0 = 0;
      return;
    }
    goto code_r0x000c4fb4;
  }
  iVar2 = __system_property_get(0x2987a /* "ro.arch" */,&uStack_84);
  if (iVar2 < 1) {
    cRam00000000001732f0 = true;
    iVar4 = *(int8 *)(iVar4 + 0x28);
  }
  else {
    uVar3 = (uStack_84 & 0xff00ff00ff00ff00) >> 8 | (uStack_84 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar5 = 0x6578796e6f733938;
    if (uVar3 == 0x6578796e6f733938) {
      uVar5 = 0x3130;
      uVar1 = (uint4)(uStack_7c >> 8) | (uStack_7c & 0xff00ff) << 8;
      uVar3 = (uint8)uVar1;
      if (uVar1 != 0x3130) goto code_r0x000c4f5c;
      iVar2 = 0;
    }
    else {
code_r0x000c4f5c:
      iVar2 = 1;
      if (uVar3 < uVar5) {
        iVar2 = -1;
      }
    }
    cRam00000000001732f0 = iVar2 != 0;
    iVar4 = *(int8 *)(iVar4 + 0x28);
  }
  if (iVar4 == iStack_28) {
    return;
  }
code_r0x000c4fb4:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0xc4fd8  size=532 */
void FUN_000c4fd8(uint8 param_1,int8 param_2)

{
  uint8 uVar1;
  uint8 uVar2;
  int8 iVar3;
  xunknown1 axVar4 [16];
  xunknown1 axVar5 [16];
  xunknown1 axVar6 [16];
  xunknown1 axVar7 [16];
  uint1 uVar8;
  xunknown1 axVar9 [16];
  xunknown1 axVar10 [16];
  xunknown1 axVar11 [16];
  
  if ((param_1 >> 0x3e & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint8 *)(param_2 + 0x10);
  }
  axVar11._8_8_ = uVar1;
  axVar11._0_8_ = uVar1;
  axVar6._8_8_ = xRam00000000000221a8;
  axVar6._0_8_ = xRam00000000000221a0;
  iVar3 = uVar1 << 0xd;
  axVar7._8_8_ = xRam0000000000022178;
  axVar7._0_8_ = xRam0000000000022170;
  axVar6 = NEON_ushl(axVar11,axVar6,8);
  axVar9._8_8_ = xRam0000000000022058;
  axVar9._0_8_ = xRam0000000000022050;
  axVar7 = NEON_ushl(axVar11,axVar7,8);
  axVar10 = NEON_ushl(axVar11,axVar9,8);
  axVar4[8] = (char)xRam00000000000220e8;
  axVar4._0_8_ = xRam00000000000220e0;
  axVar4[9] = (char)((uint8)xRam00000000000220e8 >> 8);
  axVar4[10] = (char)((uint8)xRam00000000000220e8 >> 0x10);
  axVar4[0xb] = (char)((uint8)xRam00000000000220e8 >> 0x18);
  axVar4[0xc] = (char)((uint8)xRam00000000000220e8 >> 0x20);
  axVar4[0xd] = (char)((uint8)xRam00000000000220e8 >> 0x28);
  axVar4[0xe] = (char)((uint8)xRam00000000000220e8 >> 0x30);
  axVar4[0xf] = (char)((uint8)xRam00000000000220e8 >> 0x38);
  axVar4 = NEON_ushl(axVar11,axVar4,8);
  uVar8 = axVar6[8] & (uint1)xRam0000000000021fb0;
  axVar5[0] = axVar4[0] & (uint1)xRam0000000000021f30 | axVar10[0] & (uint1)xRam0000000000022160 |
              axVar6[0] & (uint1)xRam0000000000022020 | axVar7[0] & (uint1)xRam00000000000220b0;
  axVar5[1] = axVar4[1] & (uint1)((uint8)xRam0000000000021f30 >> 8) |
              axVar10[1] & (uint1)((uint8)xRam0000000000022160 >> 8) |
              axVar6[1] & (uint1)((uint8)xRam0000000000022020 >> 8) |
              axVar7[1] & (uint1)((uint8)xRam00000000000220b0 >> 8);
  axVar5[2] = axVar4[2] & (uint1)((uint8)xRam0000000000021f30 >> 0x10) |
              axVar10[2] & (uint1)((uint8)xRam0000000000022160 >> 0x10) |
              axVar6[2] & (uint1)((uint8)xRam0000000000022020 >> 0x10) |
              axVar7[2] & (uint1)((uint8)xRam00000000000220b0 >> 0x10);
  axVar5[3] = axVar4[3] & (uint1)((uint8)xRam0000000000021f30 >> 0x18) |
              axVar10[3] & (uint1)((uint8)xRam0000000000022160 >> 0x18) |
              axVar6[3] & (uint1)((uint8)xRam0000000000022020 >> 0x18) |
              axVar7[3] & (uint1)((uint8)xRam00000000000220b0 >> 0x18);
  axVar5[4] = axVar4[4] & (uint1)((uint8)xRam0000000000021f30 >> 0x20) |
              axVar10[4] & (uint1)((uint8)xRam0000000000022160 >> 0x20) |
              axVar6[4] & (uint1)((uint8)xRam0000000000022020 >> 0x20) |
              axVar7[4] & (uint1)((uint8)xRam00000000000220b0 >> 0x20);
  axVar5[5] = axVar4[5] & (uint1)((uint8)xRam0000000000021f30 >> 0x28) |
              axVar10[5] & (uint1)((uint8)xRam0000000000022160 >> 0x28) |
              axVar6[5] & (uint1)((uint8)xRam0000000000022020 >> 0x28) |
              axVar7[5] & (uint1)((uint8)xRam00000000000220b0 >> 0x28);
  axVar5[6] = axVar4[6] & (uint1)((uint8)xRam0000000000021f30 >> 0x30) |
              axVar10[6] & (uint1)((uint8)xRam0000000000022160 >> 0x30) |
              axVar6[6] & (uint1)((uint8)xRam0000000000022020 >> 0x30) |
              axVar7[6] & (uint1)((uint8)xRam00000000000220b0 >> 0x30);
  axVar5[7] = axVar4[7] & (uint1)((uint8)xRam0000000000021f30 >> 0x38) |
              axVar10[7] & (uint1)((uint8)xRam0000000000022160 >> 0x38) |
              axVar6[7] & (uint1)((uint8)xRam0000000000022020 >> 0x38) |
              axVar7[7] & (uint1)((uint8)xRam00000000000220b0 >> 0x38);
  axVar5[8] = axVar4[8] & (uint1)xRam0000000000021f38 | axVar10[8] & (uint1)xRam0000000000022168 |
              axVar6[8] & (uint1)xRam0000000000022028 | axVar7[8] & (uint1)xRam00000000000220b8;
  axVar5[9] = axVar4[9] & (uint1)((uint8)xRam0000000000021f38 >> 8) |
              axVar10[9] & (uint1)((uint8)xRam0000000000022168 >> 8) |
              axVar6[9] & (uint1)((uint8)xRam0000000000022028 >> 8) |
              axVar7[9] & (uint1)((uint8)xRam00000000000220b8 >> 8);
  axVar5[10] = axVar4[10] & (uint1)((uint8)xRam0000000000021f38 >> 0x10) |
               axVar10[10] & (uint1)((uint8)xRam0000000000022168 >> 0x10) |
               axVar6[10] & (uint1)((uint8)xRam0000000000022028 >> 0x10) |
               axVar7[10] & (uint1)((uint8)xRam00000000000220b8 >> 0x10);
  axVar5[0xb] = axVar4[0xb] & (uint1)((uint8)xRam0000000000021f38 >> 0x18) |
                axVar10[0xb] & (uint1)((uint8)xRam0000000000022168 >> 0x18) |
                axVar6[0xb] & (uint1)((uint8)xRam0000000000022028 >> 0x18) |
                axVar7[0xb] & (uint1)((uint8)xRam00000000000220b8 >> 0x18);
  axVar5[0xc] = axVar4[0xc] & (uint1)((uint8)xRam0000000000021f38 >> 0x20) |
                axVar10[0xc] & (uint1)((uint8)xRam0000000000022168 >> 0x20) |
                axVar6[0xc] & (uint1)((uint8)xRam0000000000022028 >> 0x20) |
                axVar7[0xc] & (uint1)((uint8)xRam00000000000220b8 >> 0x20);
  axVar5[0xd] = axVar4[0xd] & (uint1)((uint8)xRam0000000000021f38 >> 0x28) |
                axVar10[0xd] & (uint1)((uint8)xRam0000000000022168 >> 0x28) |
                axVar6[0xd] & (uint1)((uint8)xRam0000000000022028 >> 0x28) |
                axVar7[0xd] & (uint1)((uint8)xRam00000000000220b8 >> 0x28);
  axVar5[0xe] = axVar4[0xe] & (uint1)((uint8)xRam0000000000021f38 >> 0x30) |
                axVar10[0xe] & (uint1)((uint8)xRam0000000000022168 >> 0x30) |
                axVar6[0xe] & (uint1)((uint8)xRam0000000000022028 >> 0x30) |
                axVar7[0xe] & (uint1)((uint8)xRam00000000000220b8 >> 0x30);
  axVar5[0xf] = axVar4[0xf] & (uint1)((uint8)xRam0000000000021f38 >> 0x38) |
                axVar10[0xf] & (uint1)((uint8)xRam0000000000022168 >> 0x38) |
                axVar6[0xf] & (uint1)((uint8)xRam0000000000022028 >> 0x38) |
                axVar7[0xf] & (uint1)((uint8)xRam00000000000220b8 >> 0x38);
  axVar10[1] = axVar6[9] & (uint1)((uint8)xRam0000000000021fb0 >> 8) |
               (uint1)((uint8)iVar3 >> 8) & (uint1)((uint8)xRam00000000000221e0 >> 8);
  axVar10[0] = uVar8;
  axVar10[2] = axVar6[10] & (uint1)((uint8)xRam0000000000021fb0 >> 0x10) |
               (uint1)((uint8)iVar3 >> 0x10) & (uint1)((uint8)xRam00000000000221e0 >> 0x10);
  axVar10[3] = axVar6[0xb] & (uint1)((uint8)xRam0000000000021fb0 >> 0x18) |
               (uint1)((uint8)iVar3 >> 0x18) & (uint1)((uint8)xRam00000000000221e0 >> 0x18);
  axVar10[4] = axVar6[0xc] & (uint1)((uint8)xRam0000000000021fb0 >> 0x20) |
               (uint1)((uint8)iVar3 >> 0x20) & (uint1)((uint8)xRam00000000000221e0 >> 0x20);
  axVar10[5] = axVar6[0xd] & (uint1)((uint8)xRam0000000000021fb0 >> 0x28) |
               (uint1)((uint8)iVar3 >> 0x28) & (uint1)((uint8)xRam00000000000221e0 >> 0x28);
  axVar10[6] = axVar6[0xe] & (uint1)((uint8)xRam0000000000021fb0 >> 0x30) |
               (uint1)((uint8)iVar3 >> 0x30) & (uint1)((uint8)xRam00000000000221e0 >> 0x30);
  axVar10[7] = axVar6[0xf] & (uint1)((uint8)xRam0000000000021fb0 >> 0x38) |
               (uint1)((uint8)iVar3 >> 0x38) & (uint1)((uint8)xRam00000000000221e0 >> 0x38);
  axVar10[8] = (uint1)(uVar1 >> 0x10) & (uint1)xRam0000000000021fb8 |
               axVar7[8] & (uint1)xRam00000000000221e8;
  axVar10[9] = (uint1)(uVar1 >> 0x18) & (uint1)((uint8)xRam0000000000021fb8 >> 8) |
               axVar7[9] & (uint1)((uint8)xRam00000000000221e8 >> 8);
  axVar10[10] = (uint1)(uVar1 >> 0x20) & (uint1)((uint8)xRam0000000000021fb8 >> 0x10) |
                axVar7[10] & (uint1)((uint8)xRam00000000000221e8 >> 0x10);
  axVar10[0xb] = (uint1)(uVar1 >> 0x28) & (uint1)((uint8)xRam0000000000021fb8 >> 0x18) |
                 axVar7[0xb] & (uint1)((uint8)xRam00000000000221e8 >> 0x18);
  axVar10[0xc] = (uint1)(uVar1 >> 0x30) & (uint1)((uint8)xRam0000000000021fb8 >> 0x20) |
                 axVar7[0xc] & (uint1)((uint8)xRam00000000000221e8 >> 0x20);
  axVar10[0xd] = (uint1)(uVar1 >> 0x38) & (uint1)((uint8)xRam0000000000021fb8 >> 0x28) |
                 axVar7[0xd] & (uint1)((uint8)xRam00000000000221e8 >> 0x28);
  axVar10[0xe] = axVar7[0xe] & (uint1)((uint8)xRam00000000000221e8 >> 0x30);
  axVar10[0xf] = axVar7[0xf] & (uint1)((uint8)xRam00000000000221e8 >> 0x38);
  axVar4 = NEON_ext(axVar5,axVar5,8,1);
  axVar11 = NEON_ext(axVar10,axVar10,8,1);
  uVar2 = CONCAT17(axVar10[7] | axVar11[7],
                   CONCAT16(axVar10[6] | axVar11[6],
                            CONCAT15(axVar10[5] | axVar11[5],
                                     CONCAT14(axVar10[4] | axVar11[4],
                                              CONCAT13(axVar10[3] | axVar11[3],
                                                       CONCAT12(axVar10[2] | axVar11[2],
                                                                CONCAT11(axVar10[1] | axVar11[1],
                                                                         uVar8 | axVar11[0]))))))) |
          (param_1 & 0x80) << 3 |
          param_1 >> 0x1a & 2 | (param_1 >> 4 & 1) << 0xf |
          param_1 >> 0xe & 0x20 | param_1 >> 0x10 & 0x10 |
          param_1 >> 0x14 & 8 | (param_1 >> 9 & 1) << 0x10 |
          param_1 >> 7 & 0x20000 | param_1 >> 6 & 0x40 |
          param_1 << 7 & 0x300000 | (param_1 >> 6 & 1) << 0xc |
          (param_1 & 0x10000000) << 0x15 | (param_1 >> 0x1d & 1) << 0x2e |
          param_1 >> 1 & 0x80 | uVar1 >> 5 & 4 |
          uVar1 << 0x23 & 0x3c000000000 | (uVar1 >> 0x12 & 1) << 0x2c |
          uVar1 >> 0x17 & 0x800 |
          CONCAT17(axVar5[7] | axVar4[7],
                   CONCAT16(axVar5[6] | axVar4[6],
                            CONCAT15(axVar5[5] | axVar4[5],
                                     CONCAT14(axVar5[4] | axVar4[4],
                                              CONCAT13(axVar5[3] | axVar4[3],
                                                       CONCAT12(axVar5[2] | axVar4[2],
                                                                CONCAT11(axVar5[1] | axVar4[1],
                                                                         axVar5[0] | axVar4[0]))))))
                  );
  if ((param_1 & 1) != 0) {
    uVar2 = uVar2 | 0x300;
  }
  uRam00000000001732f8 =
       (param_1 >> 0x16 & 1) << 0x1e | (uVar1 >> 0x2e & 1) << 0x3a |
       param_1 << 7 & 0x400000 | (param_1 >> 0x10 & 1) << 0x12 | param_1 >> 3 & 0x800000 |
       param_1 >> 4 & 0x2000 | (uVar1 >> 0xe & 1) << 0x1b | uVar1 << 0x23 & 0x1000000000 | uVar2 |
       0x8000000000000000;
  return;
}

/* 0xc52b0  size=48 */
int8 FUN_000c52b0(int8 param_1,int8 param_2,int8 *param_3)

{
  char cVar1;
  bool bVar2;
  int8 iVar3;
  
  if (cRam00000000001732f0 != '\0') {
    iVar3 = *param_3;
    if (iVar3 == param_1) {
      *param_3 = param_2;
    }
    return iVar3;
  }
  do {
    iVar3 = *param_3;
    if (iVar3 != param_1) {
      return iVar3;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
    if (bVar2) {
      *param_3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}

/* 0xc52e0  size=40 */
xunknown4 FUN_000c52e0(xunknown4 param_1,xunknown4 *param_2)

{
  char cVar1;
  bool bVar2;
  xunknown4 xVar3;
  
  if (cRam00000000001732f0 != '\0') {
    xVar3 = *param_2;
    *param_2 = param_1;
    return xVar3;
  }
  do {
    xVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return xVar3;
}

/* 0xc5310  size=40 */
xunknown4 FUN_000c5310(xunknown4 param_1,xunknown4 *param_2)

{
  char cVar1;
  bool bVar2;
  xunknown4 xVar3;
  
  if (cRam00000000001732f0 != '\0') {
    LOAcquire();
    xVar3 = *param_2;
    *param_2 = param_1;
    LORelease();
    return xVar3;
  }
  do {
    xVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return xVar3;
}

/* 0xc5340  size=40 */
xunknown8 FUN_000c5340(xunknown8 param_1,xunknown8 *param_2)

{
  char cVar1;
  bool bVar2;
  xunknown8 xVar3;
  
  if (cRam00000000001732f0 != '\0') {
    xVar3 = *param_2;
    *param_2 = param_1;
    return xVar3;
  }
  do {
    xVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return xVar3;
}

/* 0xc5370  size=40 */
xunknown8 FUN_000c5370(xunknown8 param_1,xunknown8 *param_2)

{
  char cVar1;
  bool bVar2;
  xunknown8 xVar3;
  
  if (cRam00000000001732f0 != '\0') {
    LOAcquire();
    xVar3 = *param_2;
    *param_2 = param_1;
    LORelease();
    return xVar3;
  }
  do {
    xVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return xVar3;
}

/* 0xc53a0  size=44 */
int4 FUN_000c53a0(int4 param_1,int4 *param_2)

{
  char cVar1;
  bool bVar2;
  int4 iVar3;
  
  if (cRam00000000001732f0 != '\0') {
    iVar3 = *param_2;
    *param_2 = iVar3 + param_1;
    return iVar3;
  }
  do {
    iVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = iVar3 + param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}

/* 0xc53d0  size=44 */
int4 FUN_000c53d0(int4 param_1,int4 *param_2)

{
  char cVar1;
  bool bVar2;
  int4 iVar3;
  
  if (cRam00000000001732f0 != '\0') {
    LOAcquire();
    iVar3 = *param_2;
    *param_2 = iVar3 + param_1;
    LORelease();
    return iVar3;
  }
  do {
    iVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = iVar3 + param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}

/* 0xc5400  size=44 */
int8 FUN_000c5400(int8 param_1,int8 *param_2)

{
  char cVar1;
  bool bVar2;
  int8 iVar3;
  
  if (cRam00000000001732f0 != '\0') {
    iVar3 = *param_2;
    *param_2 = iVar3 + param_1;
    return iVar3;
  }
  do {
    iVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = iVar3 + param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}

/* 0xc5430  size=44 */
int8 FUN_000c5430(int8 param_1,int8 *param_2)

{
  char cVar1;
  bool bVar2;
  int8 iVar3;
  
  if (cRam00000000001732f0 != '\0') {
    LOAcquire();
    iVar3 = *param_2;
    *param_2 = iVar3 + param_1;
    LORelease();
    return iVar3;
  }
  do {
    iVar3 = *param_2;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar2) {
      *param_2 = iVar3 + param_1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return iVar3;
}

/* 0xc545c  size=248 */
xunknown8 FUN_000c545c(xunknown8 *param_1)

{
  int4 iVar1;
  xunknown8 xVar2;
  xunknown1 axStack_4f0 [624];
  xunknown1 axStack_280 [528];
  xunknown8 xStack_70;
  xunknown1 axStack_68 [24];
  code *pcStack_50;
  
  func_0x000c9478(axStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_000c58cc(axStack_4f0,axStack_280);
  iVar1 = FUN_000c5adc(axStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_000c5b04(axStack_4f0,axStack_68), iVar1 != 0)) break;
    if ((pcStack_50 != (code *)0x0) &&
       (iVar1 = (*pcStack_50)(1,1,*param_1,param_1,axStack_4f0), iVar1 != 8)) {
      if (iVar1 == 6) {
        FUN_000c5974(axStack_4f0,0xfffffffe,&xStack_70);
        param_1[3] = xStack_70;
        xVar2 = FUN_000c5554(axStack_280,axStack_4f0,param_1);
        return xVar2;
      }
      return 3;
    }
    iVar1 = FUN_000c5adc(axStack_4f0);
  }
  return 3;
}

/* 0xc5554  size=308 */
xunknown8 FUN_000c5554(xunknown8 param_1,xunknown8 param_2,xunknown8 *param_3)

{
  int8 iVar1;
  int4 iVar2;
  xunknown8 xVar3;
  xunknown4 xVar4;
  xunknown1 axStack_80 [24];
  code *pcStack_68;
  int8 iStack_38;
  
  FUN_000c58cc(param_2,param_1);
  iVar2 = FUN_000c5af0(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_000c5974(param_2,0xfffffffe,&iStack_38);
    iVar2 = FUN_000c5b04(param_2,axStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (pcStack_68 != (code *)0x0) {
      xVar4 = 6;
      if (iStack_38 != param_3[3]) {
        xVar4 = 2;
      }
      iVar2 = (*pcStack_68)(1,xVar4,*param_3,param_3,param_2);
      iVar1 = got___sF;
      if (iVar2 != 8) {
        if (iVar2 == 7) {
          FUN_000c5b44(param_2);
          return 2;
        }
        return 2;
      }
      if (iStack_38 == param_3[3]) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2bf6c /* "unwind_phase2" */,0x34a6e /* "during phase1 personality function said it would stop here, but now in..." */);
        fflush(iVar1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        xVar3 = (*got_abort)();
        return xVar3;
      }
    }
    iVar2 = FUN_000c5af0(param_2);
  }
  return 2;
}

/* 0xc5688  size=132 */
void FUN_000c5688(int8 param_1)

{
  int8 iVar1;
  xunknown1 axStack_4a0 [624];
  xunknown1 axStack_230 [528];
  
  func_0x000c9478(axStack_230);
  if (*(int8 *)(param_1 + 0x10) == 0) {
    FUN_000c5554(axStack_230,axStack_4a0,param_1);
  }
  else {
    FUN_000c570c(axStack_230,axStack_4a0,param_1,*(int8 *)(param_1 + 0x10),
                 *(xunknown8 *)(param_1 + 0x18));
  }
  iVar1 = got___sF;
  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x3d19e /* "_Unwind_Resume" */,0x2906a /* "_Unwind_Resume() can't return" */);
  fflush(iVar1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_abort)();
  return;
}

/* 0xc570c  size=244 */
void FUN_000c570c(xunknown8 param_1,xunknown8 param_2,xunknown8 *param_3,code *param_4,
                 xunknown8 param_5)

{
  int4 iVar1;
  xunknown1 axStack_78 [24];
  code *pcStack_60;
  
  FUN_000c58cc(param_2,param_1);
  iVar1 = FUN_000c5af0(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_000c5b04(param_2,axStack_78);
    if (iVar1 != 0) break;
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((pcStack_60 != (code *)0x0) &&
       (iVar1 = (*pcStack_60)(1,10,*param_3,param_3,param_2), iVar1 != 8)) {
      if (iVar1 != 7) {
        return;
      }
      FUN_000c5b44(param_2);
    }
    iVar1 = FUN_000c5af0(param_2);
  }
  return;
}

/* 0xc5800  size=52 */
xunknown8 FUN_000c5800(xunknown8 param_1)

{
  int4 iVar1;
  xunknown1 axStack_58 [16];
  xunknown8 xStack_48;
  
  iVar1 = FUN_000c5b04(param_1,axStack_58);
  if (iVar1 != 0) {
    xStack_48 = 0;
  }
  return xStack_48;
}

/* 0xc5834  size=52 */
xunknown8 FUN_000c5834(xunknown8 param_1)

{
  int4 iVar1;
  xunknown8 axStack_58 [9];
  
  iVar1 = FUN_000c5b04(param_1,axStack_58);
  if (iVar1 != 0) {
    axStack_58[0] = 0;
  }
  return axStack_58[0];
}

/* 0xc5868  size=28 */
void FUN_000c5868(int8 param_1)

{
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(1,param_1);
  return;
}

/* 0xc5884  size=8 */
xunknown8 FUN_000c5884(int8 *param_1,int4 param_2,xunknown8 param_3)

{
  uint8 uVar1;
  int8 iVar2;
  xunknown1 axStack_78 [32];
  int8 iStack_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    return 0xffffe672;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  if (param_2 == -1) {
    (**(code **)(*param_1 + 0x48))(param_1,axStack_78);
    (**(code **)(*param_1 + 0x68))(param_1,0);
    if (iStack_58 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
      (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,iStack_58 + iVar2);
    }
  }
  return 0;
}

/* 0xc588c  size=48 */
xunknown8 FUN_000c588c(xunknown8 param_1)

{
  xunknown8 xStack_18;
  
  FUN_000c5974(param_1,0xffffffff,&xStack_18);
  return xStack_18;
}

/* 0xc58bc  size=16 */
xunknown8 FUN_000c58bc(int8 *param_1,xunknown8 param_2)

{
  uint8 uVar1;
  int8 iVar2;
  xunknown1 axStack_78 [32];
  int8 iStack_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    return 0xffffe672;
  }
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,param_2);
  (**(code **)(*param_1 + 0x48))(param_1,axStack_78);
  (**(code **)(*param_1 + 0x68))(param_1,0);
  if (iStack_58 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
    (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,iStack_58 + iVar2);
  }
  return 0;
}

/* 0xc58cc  size=168 */
xunknown8 FUN_000c58cc(xunknown8 *param_1,int8 param_2)

{
  xunknown8 xVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  
  *param_1 = 0xd2ec8;
  param_1[1] = 0x173300;
  memcpy(param_1 + 2,param_2,0x110);
  xVar3 = *(xunknown8 *)(param_2 + 0x130);
  xVar2 = *(xunknown8 *)(param_2 + 0x148);
  xVar1 = *(xunknown8 *)(param_2 + 0x140);
  xVar7 = *(xunknown8 *)(param_2 + 0x118);
  xVar6 = *(xunknown8 *)(param_2 + 0x110);
  xVar5 = *(xunknown8 *)(param_2 + 0x128);
  xVar4 = *(xunknown8 *)(param_2 + 0x120);
  param_1[0x29] = *(xunknown8 *)(param_2 + 0x138);
  param_1[0x28] = xVar3;
  param_1[0x2b] = xVar2;
  param_1[0x2a] = xVar1;
  param_1[0x25] = xVar7;
  param_1[0x24] = xVar6;
  param_1[0x27] = xVar5;
  param_1[0x26] = xVar4;
  xVar3 = *(xunknown8 *)(param_2 + 0x170);
  xVar2 = *(xunknown8 *)(param_2 + 0x188);
  xVar1 = *(xunknown8 *)(param_2 + 0x180);
  xVar7 = *(xunknown8 *)(param_2 + 0x158);
  xVar6 = *(xunknown8 *)(param_2 + 0x150);
  xVar5 = *(xunknown8 *)(param_2 + 0x168);
  xVar4 = *(xunknown8 *)(param_2 + 0x160);
  param_1[0x31] = *(xunknown8 *)(param_2 + 0x178);
  param_1[0x30] = xVar3;
  param_1[0x33] = xVar2;
  param_1[0x32] = xVar1;
  param_1[0x2d] = xVar7;
  param_1[0x2c] = xVar6;
  param_1[0x2f] = xVar5;
  param_1[0x2e] = xVar4;
  xVar3 = *(xunknown8 *)(param_2 + 0x1b0);
  xVar2 = *(xunknown8 *)(param_2 + 0x1c8);
  xVar1 = *(xunknown8 *)(param_2 + 0x1c0);
  xVar7 = *(xunknown8 *)(param_2 + 0x198);
  xVar6 = *(xunknown8 *)(param_2 + 400);
  xVar5 = *(xunknown8 *)(param_2 + 0x1a8);
  xVar4 = *(xunknown8 *)(param_2 + 0x1a0);
  param_1[0x39] = *(xunknown8 *)(param_2 + 0x1b8);
  param_1[0x38] = xVar3;
  param_1[0x3b] = xVar2;
  param_1[0x3a] = xVar1;
  param_1[0x35] = xVar7;
  param_1[0x34] = xVar6;
  param_1[0x37] = xVar5;
  param_1[0x36] = xVar4;
  xVar3 = *(xunknown8 *)(param_2 + 0x1f0);
  xVar2 = *(xunknown8 *)(param_2 + 0x208);
  xVar1 = *(xunknown8 *)(param_2 + 0x200);
  xVar7 = *(xunknown8 *)(param_2 + 0x1d8);
  xVar6 = *(xunknown8 *)(param_2 + 0x1d0);
  xVar5 = *(xunknown8 *)(param_2 + 0x1e8);
  xVar4 = *(xunknown8 *)(param_2 + 0x1e0);
  param_1[0x41] = *(xunknown8 *)(param_2 + 0x1f8);
  param_1[0x40] = xVar3;
  param_1[0x43] = xVar2;
  param_1[0x42] = xVar1;
  param_1[0x3d] = xVar7;
  param_1[0x3c] = xVar6;
  param_1[0x3f] = xVar5;
  param_1[0x3e] = xVar4;
  *(xunknown8 *)((int8)param_1 + 0x263) = 0;
  *(xunknown8 *)((int8)param_1 + 0x25b) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_000c6394(param_1,0);
  return 0;
}

/* 0xc5974  size=124 */
xunknown8 FUN_000c5974(int8 *param_1,xunknown4 param_2,xunknown8 *param_3)

{
  uint8 uVar1;
  xunknown8 xVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    return 0xffffe672;
  }
  xVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  *param_3 = xVar2;
  return 0;
}

/* 0xc59f0  size=236 */
xunknown8 FUN_000c59f0(int8 *param_1,int4 param_2,xunknown8 param_3)

{
  uint8 uVar1;
  int8 iVar2;
  xunknown1 axStack_78 [32];
  int8 iStack_58;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if ((uVar1 & 1) == 0) {
    return 0xffffe672;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  if (param_2 == -1) {
    (**(code **)(*param_1 + 0x48))(param_1,axStack_78);
    (**(code **)(*param_1 + 0x68))(param_1,0);
    if (iStack_58 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
      (**(code **)(*param_1 + 0x20))(param_1,0xfffffffe,iStack_58 + iVar2);
    }
  }
  return 0;
}

/* 0xc5adc  size=20 */
void FUN_000c5adc(int8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000c5aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}

/* 0xc5af0  size=20 */
void FUN_000c5af0(int8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000c5b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}

/* 0xc5b04  size=64 */
xunknown4 FUN_000c5b04(int8 *param_1,int8 param_2)

{
  xunknown4 xVar1;
  
  (**(code **)(*param_1 + 0x48))();
  xVar1 = 0xffffe66b;
  if (*(int8 *)(param_2 + 8) != 0) {
    xVar1 = 0;
  }
  return xVar1;
}

/* 0xc5b44  size=40 */
xunknown8 FUN_000c5b44(int8 *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}

/* 0xc5b6c  size=400 */
int8 FUN_000c5b6c(xunknown8 param_1,uint4 *param_2,xunknown8 *param_3,int8 *param_4,uint8 param_5)

{
  int8 iVar1;
  char cVar2;
  uint4 *puVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  int8 iVar7;
  uint8 uVar8;
  uint4 *puVar9;
  uint4 *puStack_48;
  
  puVar9 = param_2 + 1;
  uVar8 = (uint8)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar8 = *(uint8 *)(param_2 + 1);
    puVar9 = param_2 + 3;
  }
  if (uVar8 == 0) {
    iVar7 = 0x2a034 /* "FDE has zero length" */;
  }
  else if (*puVar9 == 0) {
    iVar7 = 0x2da8e /* "FDE is really a CIE" */;
  }
  else {
    iVar7 = (int8)puVar9 - (uint8)*puVar9;
    if ((param_5 & 1) == 0) {
      iVar7 = FUN_000c5cfc(param_1,iVar7,param_4);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
    else if (*param_4 != iVar7) {
      return 0x3fb79 /* "CIE start does not match" */;
    }
    iVar1 = (int8)puVar9 + uVar8;
    puStack_48 = puVar9 + 1;
    iVar4 = FUN_000c7b54(param_1,&puStack_48,iVar1,(char)param_4[3],0);
    iVar5 = FUN_000c7b54(param_1,&puStack_48,iVar1,*(uint1 *)(param_4 + 3) & 0xf,0);
    cVar2 = *(char *)((int8)param_4 + 0x31);
    param_3[5] = 0;
    if (cVar2 == '\0') {
      puVar9 = puStack_48;
    }
    else {
      iVar7 = FUN_000c7ee0(&puStack_48,iVar1);
      puVar3 = puStack_48;
      puVar9 = (uint4 *)((int8)puStack_48 + iVar7);
      if ((*(uint1 *)((int8)param_4 + 0x19) != 0xff) &&
         (iVar7 = FUN_000c7b54(param_1,&puStack_48,iVar1,*(uint1 *)((int8)param_4 + 0x19) & 0xf,0),
         iVar7 != 0)) {
        puStack_48 = puVar3;
        xVar6 = FUN_000c7b54(param_1,&puStack_48,iVar1,*(xunknown1 *)((int8)param_4 + 0x19),0);
        param_3[5] = xVar6;
      }
    }
    iVar7 = 0;
    param_3[2] = puVar9;
    param_3[3] = iVar4;
    *param_3 = param_2;
    param_3[1] = iVar1 - (int8)param_2;
    param_3[4] = iVar5 + iVar4;
  }
  return iVar7;
}

/* 0xc5cfc  size=712 */
xunknown8 FUN_000c5cfc(xunknown8 param_1,uint4 *param_2,int8 *param_3)

{
  uint1 *puVar1;
  uint1 uVar2;
  uint8 uVar3;
  uint4 uVar4;
  xunknown1 xVar5;
  xunknown4 xVar6;
  xunknown8 xVar7;
  int8 iVar8;
  uint4 *puVar9;
  uint1 *puVar10;
  uint1 *puVar11;
  uint8 uVar12;
  uint8 uVar13;
  uint1 *puVar14;
  uint1 *puVar15;
  uint4 uVar16;
  uint1 *puVar17;
  uint1 *puStack_48;
  
  *(xunknown2 *)((int8)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(xunknown2 *)(param_3 + 6) = 0;
  *param_3 = (int8)param_2;
  *(xunknown4 *)(param_3 + 3) = 0xff00;
  puVar9 = param_2 + 1;
  uVar12 = (uint8)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar12 = *(uint8 *)(param_2 + 1);
    puVar9 = param_2 + 3;
    puVar1 = (uint1 *)(uVar12 + (int8)puVar9);
  }
  else {
    puVar1 = (uint1 *)((int8)puVar9 + uVar12);
  }
  if (uVar12 == 0) {
    xVar7 = 0;
  }
  else if (*puVar9 == 0) {
    uVar4 = puVar9[1];
    if (((uint1)uVar4 & 0xfd) == 1) {
      puVar17 = (uint1 *)((int8)puVar9 + 5);
      puVar10 = puVar17;
      do {
        puStack_48 = puVar10 + 1;
        uVar2 = *puVar10;
        puVar10 = puStack_48;
      } while (uVar2 != 0);
      xVar6 = FUN_000c7ee0(&puStack_48,puVar1);
      uVar12 = 0;
      uVar13 = 0;
      *(xunknown4 *)(param_3 + 5) = xVar6;
      iVar8 = got___sF;
      puVar10 = puStack_48;
      puVar14 = puStack_48;
      do {
        puVar11 = puVar10;
        if (puVar14 == puVar1) {
          fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
          fflush(iVar8 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          xVar7 = (*got_abort)();
          return xVar7;
        }
        puVar15 = puVar14 + 1;
        uVar2 = *puVar14;
        puVar10 = puVar11 + 1;
        uVar3 = uVar12 & 0x3f;
        uVar12 = uVar12 + 7;
        uVar13 = ((uint8)uVar2 & 0x7f) << uVar3 | uVar13;
        puVar14 = puVar15;
      } while ((char)uVar2 < '\0');
      uVar16 = (uint4)(-1L << (uVar12 & 0x3f));
      if (0x38 < (int4)uVar12 - 7U || uVar2 < 0x40) {
        uVar16 = 0;
      }
      *(uint4 *)((int8)param_3 + 0x2c) = (uint4)uVar13 | uVar16;
      if ((uint1)uVar4 == 1) {
        puStack_48 = puVar11 + 2;
        *(uint1 *)((int8)param_3 + 0x32) = *puVar15;
        uVar2 = *puVar17;
      }
      else {
        puStack_48 = puVar10;
        xVar5 = FUN_000c7ee0(&puStack_48,puVar1);
        *(xunknown1 *)((int8)param_3 + 0x32) = xVar5;
        uVar2 = *puVar17;
      }
      if (uVar2 == 0x7a) {
        FUN_000c7ee0(&puStack_48,puVar1);
code_r0x000c5e7c:
        uVar2 = *puVar17;
        if (uVar2 < 0x50) {
          if (uVar2 < 0x47) {
            if (uVar2 != 0x42) {
              if (uVar2 != 0) goto code_r0x000c5f1c;
              goto code_r0x000c5f60;
            }
            *(xunknown1 *)((int8)param_3 + 0x33) = 1;
            puVar17 = puVar17 + 1;
            goto code_r0x000c5e7c;
          }
          if (uVar2 == 0x47) {
            *(xunknown1 *)((int8)param_3 + 0x34) = 1;
            goto code_r0x000c5f1c;
          }
          if (uVar2 == 0x4c) {
            puVar17 = puVar17 + 1;
            *(uint1 *)((int8)param_3 + 0x19) = *puStack_48;
            puStack_48 = puStack_48 + 1;
            goto code_r0x000c5e7c;
          }
        }
        else if (uVar2 < 0x53) {
          if (uVar2 == 0x50) {
            uVar2 = *puStack_48;
            *(uint1 *)((int8)param_3 + 0x1a) = uVar2;
            *(char *)((int8)param_3 + 0x1b) = (char)(puStack_48 + 1) - (char)param_2;
            puStack_48 = puStack_48 + 1;
            iVar8 = FUN_000c7b54(param_1,&puStack_48,puVar1,uVar2,0);
            param_3[4] = iVar8;
            puVar17 = puVar17 + 1;
            goto code_r0x000c5e7c;
          }
          if (uVar2 == 0x52) {
            puVar17 = puVar17 + 1;
            *(uint1 *)(param_3 + 3) = *puStack_48;
            puStack_48 = puStack_48 + 1;
            goto code_r0x000c5e7c;
          }
        }
        else {
          if (uVar2 == 0x53) {
            *(xunknown1 *)(param_3 + 6) = 1;
            puVar17 = puVar17 + 1;
            goto code_r0x000c5e7c;
          }
          if (uVar2 == 0x7a) {
            *(xunknown1 *)((int8)param_3 + 0x31) = 1;
            puVar17 = puVar17 + 1;
            goto code_r0x000c5e7c;
          }
        }
code_r0x000c5f1c:
        puVar17 = puVar17 + 1;
        goto code_r0x000c5e7c;
      }
code_r0x000c5f60:
      xVar7 = 0;
      param_3[1] = (int8)puVar1 - *param_3;
      param_3[2] = (int8)puStack_48;
    }
    else {
      xVar7 = 0x277f9 /* "CIE version is not 1 or 3" */;
    }
  }
  else {
    xVar7 = 0x3d1f1 /* "CIE ID is not zero" */;
  }
  return xVar7;
}

/* 0xc5fc4  size=8 */
void FUN_000c5fc4(void)

{
  return;
}

/* 0xc5fcc  size=8 */
void FUN_000c5fcc(void)

{
  return;
}

/* 0xc5fd4  size=68 */
bool FUN_000c5fd4(xunknown8 param_1,uint4 param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  if (param_2 == 0x22) {
    return true;
  }
  return param_2 - 0x40 < 0xffffffe1;
}

/* 0xc6018  size=232 */
xunknown8 FUN_000c6018(int8 param_1,uint4 param_2)

{
  int8 iVar1;
  xunknown8 xVar2;
  
  iVar1 = got___sF;
  if ((int4)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
code_r0x000c6080:
      return *(xunknown8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto code_r0x000c6074;
    if (param_2 == 0x1d) {
      return *(xunknown8 *)(param_1 + 0xf8);
    }
  }
  else if ((int4)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(xunknown8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto code_r0x000c6080;
  }
  else {
    if (param_2 == 0x22) {
      return *(xunknown8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
code_r0x000c6074:
      return *(xunknown8 *)(param_1 + 0x110);
    }
  }
  if (param_2 < 0x1d) {
    return *(xunknown8 *)(param_1 + 0x10 + (uint8)param_2 * 8);
  }
  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
  fflush(iVar1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xVar2 = (*got_abort)();
  return xVar2;
}

/* 0xc6100  size=232 */
void FUN_000c6100(int8 param_1,uint4 param_2,xunknown8 param_3)

{
  int8 iVar1;
  
  iVar1 = got___sF;
  if ((int4)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
code_r0x000c6168:
      *(xunknown8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto code_r0x000c615c;
    if (param_2 == 0x1d) {
      *(xunknown8 *)(param_1 + 0xf8) = param_3;
      return;
    }
  }
  else if ((int4)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      *(xunknown8 *)(param_1 + 0x100) = param_3;
      return;
    }
    if (param_2 == 0x1f) goto code_r0x000c6168;
  }
  else {
    if (param_2 == 0x22) {
      *(xunknown8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
code_r0x000c615c:
      *(xunknown8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (param_2 < 0x1d) {
    *(xunknown8 *)(param_1 + 0x10 + (uint8)param_2 * 8) = param_3;
    return;
  }
  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x350f0 /* "setRegister" */,0x2ac9b /* "unsupported arm64 register" */);
  fflush(iVar1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_abort)();
  return;
}

/* 0xc61e8  size=20 */
bool FUN_000c61e8(xunknown8 param_1,uint4 param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}

/* 0xc61fc  size=16 */
xunknown1  [16] FUN_000c61fc(int8 param_1,int4 param_2)

{
  xunknown1 axVar1 [16];
  
  axVar1._0_8_ = *(uint8 *)(param_1 + (int8)param_2 * 8 + -0xe0);
  axVar1._8_8_ = 0;
  return axVar1;
}

/* 0xc620c  size=16 */
void FUN_000c620c(xunknown8 param_1,int8 param_2,int4 param_3)

{
  *(xunknown8 *)(param_2 + (int8)param_3 * 8 + -0xe0) = param_1;
  return;
}

/* 0xc621c  size=240 */
uint8 FUN_000c621c(int8 *param_1,uint4 param_2)

{
  int8 iVar1;
  int4 iVar2;
  uint8 uVar3;
  xunknown8 xVar4;
  xunknown1 axStack_240 [528];
  
  if ((char)param_1[0x4d] != '\0') {
    return 0;
  }
  if (*(char *)((int8)param_1 + 0x26a) == '\0') {
    iVar1 = param_1[1];
    xVar4 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    uVar3 = FUN_000c6740(iVar1,xVar4,param_1[0x4b],param_1 + 2,(int8)param_1 + 0x269,param_2 & 1);
    iVar2 = (int4)uVar3;
  }
  else {
    memset(axStack_240,0,0x210);
    uVar3 = FUN_000c6620(param_1,axStack_240);
    iVar2 = (int4)uVar3;
  }
  if (iVar2 == 1) {
    uVar3 = uVar3 & 0xffffffff;
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] != '\0') {
      return 0;
    }
  }
  return uVar3;
}

/* 0xc630c  size=68 */
void FUN_000c630c(int8 param_1,xunknown8 *param_2)

{
  xunknown8 xVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  
  if (*(char *)(param_1 + 0x268) == '\0') {
    xVar1 = *(xunknown8 *)(param_1 + 0x220);
    param_2[1] = *(xunknown8 *)(param_1 + 0x228);
    *param_2 = xVar1;
    xVar6 = *(xunknown8 *)(param_1 + 0x248);
    xVar5 = *(xunknown8 *)(param_1 + 0x240);
    xVar2 = *(xunknown8 *)(param_1 + 600);
    xVar1 = *(xunknown8 *)(param_1 + 0x250);
    xVar4 = *(xunknown8 *)(param_1 + 0x238);
    xVar3 = *(xunknown8 *)(param_1 + 0x230);
    param_2[8] = *(xunknown8 *)(param_1 + 0x260);
    param_2[5] = xVar6;
    param_2[4] = xVar5;
    param_2[7] = xVar2;
    param_2[6] = xVar1;
    param_2[3] = xVar4;
    param_2[2] = xVar3;
    return;
  }
  param_2[8] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  return;
}

/* 0xc6350  size=12 */
xunknown8 FUN_000c6350(int8 param_1)

{
  return *(xunknown8 *)(param_1 + 0x10);
}

