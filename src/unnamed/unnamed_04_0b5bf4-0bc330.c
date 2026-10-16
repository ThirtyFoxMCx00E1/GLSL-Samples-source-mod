/* unexported functions 0xb5bf4..0xbc330
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0xb5bf4  size=256 */
void FUN_000b5bf4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x10),param_2,
               (int4)((uint4)*(uint2 *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar3) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x5b;
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x18),param_2,0x13,0);
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar3) {
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
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x5d;
  return;
}

/* 0xb5cf4  size=8 */
void FUN_000b5cf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb5cfc  size=188 */
void FUN_000b5cfc(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 *piVar2;
  uint8 uVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 iVar6;
  xunknown8 xVar7;
  
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x10),param_2,
               (int4)((uint4)*(uint2 *)(param_1 + 9) << 0x1a) >> 0x1a,1);
  iVar6 = *(int8 *)(param_1 + 0x20);
  if (iVar6 != 0) {
    iVar4 = param_2[1];
    iVar1 = *param_2;
    xVar7 = *(xunknown8 *)(param_1 + 0x18);
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar6)) {
      uVar3 = param_2[2] * 2;
      uVar5 = iVar4 + iVar6 + 0x3e0;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    memcpy(iVar1 + iVar4,xVar7,iVar6);
    param_2[1] = param_2[1] + iVar6;
  }
  piVar2 = *(int8 **)(param_1 + 0x28);
  if ((uint4)((int4)((uint4)*(uint2 *)((int8)piVar2 + 9) << 0x1a) >> 0x1a) <
      (uint4)((int4)((uint4)*(uint2 *)(param_1 + 9) << 0x1a) >> 0x1a)) {
    (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
    if ((*(uint2 *)((int8)piVar2 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000b58d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x28))(piVar2,param_2);
      return;
    }
  }
  else {
    iVar6 = param_2[1];
    iVar4 = *param_2;
    uVar5 = iVar6 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
    if ((uint8)param_2[2] < uVar5) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar6 + 0x3e1U) {
        uVar5 = iVar6 + 0x3e1U;
      }
      param_2[2] = uVar5;
      iVar4 = realloc();
      *param_2 = iVar4;
      if (iVar4 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
      uVar5 = iVar6 + 1;
    }
    param_2[1] = uVar5;
    iVar1 = *piVar2;
    *(xunknown1 *)(iVar4 + iVar6) = 0x28;
    (**(code **)(iVar1 + 0x20))(piVar2,param_2);
    if ((*(uint2 *)((int8)piVar2 + 9) & 0xc0) != 0x40) {
      (**(code **)(*piVar2 + 0x28))(piVar2,param_2);
    }
    iVar6 = param_2[1];
    iVar4 = *param_2;
    uVar5 = iVar6 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
    if ((uint8)param_2[2] < uVar5) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar6 + 0x3e1U) {
        uVar5 = iVar6 + 0x3e1U;
      }
      param_2[2] = uVar5;
      iVar4 = realloc();
      *param_2 = iVar4;
      if (iVar4 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar6 = param_2[1];
      uVar5 = iVar6 + 1;
    }
    param_2[1] = uVar5;
    *(xunknown1 *)(iVar4 + iVar6) = 0x29;
  }
  return;
}

/* 0xb5db8  size=8 */
void FUN_000b5db8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb5dc0  size=1248 */
void FUN_000b5dc0(int8 param_1,int8 *param_2)

{
  char cVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  uint8 uVar6;
  int8 *piVar7;
  bool bVar8;
  
  iVar4 = param_2[1];
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar4 + 2U) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e2U) {
        uVar6 = iVar4 + 0x3e2U;
      }
      param_2[2] = uVar6;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown2 *)(iVar2 + iVar4) = 0x3a3a;
    iVar4 = param_2[1] + 2;
    param_2[1] = iVar4;
  }
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 3U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e3U) {
      uVar6 = iVar4 + 0x3e3U;
    }
    param_2[2] = uVar6;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)((xunknown2 *)(iVar2 + iVar4) + 1) = 0x77;
  *(xunknown2 *)(iVar2 + iVar4) = 0x656e;
  iVar2 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x39);
  iVar4 = iVar2 + 3;
  param_2[1] = iVar4;
  if (cVar1 != '\0') {
    iVar3 = *param_2;
    if ((uint8)param_2[2] < iVar2 + 5U) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar2 + 0x3e5U) {
        uVar6 = iVar2 + 0x3e5U;
      }
      param_2[2] = uVar6;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown2 *)(iVar3 + iVar4) = 0x5d5b;
    iVar4 = param_2[1] + 2;
    param_2[1] = iVar4;
  }
  if (*(int8 *)(param_1 + 0x18) != 0) {
    uVar6 = iVar4 + 1;
    iVar2 = *param_2;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
      uVar6 = iVar4 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar2 + iVar4) = 0x28;
    iVar4 = param_2[1];
    if (*(int8 *)(param_1 + 0x18) != 0) {
      iVar2 = 0;
      bVar8 = true;
      do {
        while( true ) {
          iVar3 = iVar4;
          if (!bVar8) {
            iVar3 = *param_2;
            if ((uint8)param_2[2] < iVar4 + 2U) {
              uVar6 = param_2[2] * 2;
              if (uVar6 <= iVar4 + 0x3e2U) {
                uVar6 = iVar4 + 0x3e2U;
              }
              param_2[2] = uVar6;
              iVar3 = realloc();
              *param_2 = iVar3;
              if (iVar3 == 0) goto code_r0x000ca7b0;
              iVar5 = param_2[1];
            }
            else {
              iVar5 = iVar4;
            }
            *(xunknown2 *)(iVar3 + iVar5) = 0x202c;
            iVar3 = param_2[1] + 2;
            param_2[1] = iVar3;
          }
          FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar2 * 8),param_2,0x12,0);
          iVar5 = param_2[1];
          if (iVar3 == iVar5) break;
          bVar8 = false;
          iVar2 = iVar2 + 1;
          iVar4 = iVar5;
          if (iVar2 == *(int8 *)(param_1 + 0x18)) goto code_r0x000b6008;
        }
        param_2[1] = iVar4;
        iVar2 = iVar2 + 1;
      } while (iVar2 != *(int8 *)(param_1 + 0x18));
    }
code_r0x000b6008:
    uVar6 = iVar4 + 1;
    iVar2 = *param_2;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
      uVar6 = iVar4 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar2 + iVar4) = 0x29;
    iVar4 = param_2[1];
  }
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 1U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e1U) {
      uVar6 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar6;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)(iVar2 + iVar4) = 0x20;
  piVar7 = *(int8 **)(param_1 + 0x20);
  iVar4 = *piVar7;
  param_2[1] = param_2[1] + 1;
  (**(code **)(iVar4 + 0x20))(piVar7,param_2);
  if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
  }
  if (*(int8 *)(param_1 + 0x30) != 0) {
    iVar4 = param_2[1];
    iVar2 = *param_2;
    uVar6 = iVar4 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
      uVar6 = iVar4 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar2 + iVar4) = 0x28;
    iVar4 = param_2[1];
    if (*(int8 *)(param_1 + 0x30) != 0) {
      iVar2 = 0;
      bVar8 = true;
      do {
        while( true ) {
          iVar3 = iVar4;
          if (!bVar8) {
            iVar3 = *param_2;
            if ((uint8)param_2[2] < iVar4 + 2U) {
              uVar6 = param_2[2] * 2;
              if (uVar6 <= iVar4 + 0x3e2U) {
                uVar6 = iVar4 + 0x3e2U;
              }
              param_2[2] = uVar6;
              iVar3 = realloc();
              *param_2 = iVar3;
              if (iVar3 == 0) goto code_r0x000ca7b0;
              iVar5 = param_2[1];
            }
            else {
              iVar5 = iVar4;
            }
            *(xunknown2 *)(iVar3 + iVar5) = 0x202c;
            iVar3 = param_2[1] + 2;
            param_2[1] = iVar3;
          }
          FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x28) + iVar2 * 8),param_2,0x12,0);
          iVar5 = param_2[1];
          if (iVar3 == iVar5) break;
          bVar8 = false;
          iVar2 = iVar2 + 1;
          iVar4 = iVar5;
          if (iVar2 == *(int8 *)(param_1 + 0x30)) goto code_r0x000b6208;
        }
        param_2[1] = iVar4;
        iVar2 = iVar2 + 1;
      } while (iVar2 != *(int8 *)(param_1 + 0x30));
    }
code_r0x000b6208:
    uVar6 = iVar4 + 1;
    iVar2 = *param_2;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
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
      uVar6 = iVar4 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar2 + iVar4) = 0x29;
  }
  return;
}

/* 0xb62a0  size=8 */
void FUN_000b62a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb62a8  size=464 */
void FUN_000b62a8(int8 param_1,int8 *param_2)

{
  char cVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 *piVar6;
  
  iVar4 = param_2[1];
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar4 + 2U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar4 + 0x3e2U) {
        uVar5 = iVar4 + 0x3e2U;
      }
      param_2[2] = uVar5;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown2 *)(iVar2 + iVar4) = 0x3a3a;
    iVar4 = param_2[1] + 2;
    param_2[1] = iVar4;
  }
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
  *(xunknown2 *)((xunknown4 *)(iVar2 + iVar4) + 1) = 0x6574;
  *(xunknown4 *)(iVar2 + iVar4) = 0x656c6564;
  iVar2 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x19);
  iVar4 = iVar2 + 6;
  param_2[1] = iVar4;
  if (cVar1 != '\0') {
    iVar3 = *param_2;
    if ((uint8)param_2[2] < iVar2 + 8U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar2 + 1000U) {
        uVar5 = iVar2 + 1000U;
      }
      param_2[2] = uVar5;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown2 *)(iVar3 + iVar4) = 0x5d5b;
    iVar4 = param_2[1] + 2;
    param_2[1] = iVar4;
  }
  uVar5 = iVar4 + 1;
  iVar2 = *param_2;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 0x3e1U) {
      uVar5 = iVar4 + 0x3e1U;
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
    uVar5 = iVar4 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar2 + iVar4) = 0x20;
  piVar6 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar6 + 0x20))(piVar6,param_2);
  if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000b6464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  return;
}

/* 0xb6478  size=8 */
void FUN_000b6478(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb6480  size=496 */
void FUN_000b6480(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 *piVar6;
  bool bVar7;
  
  piVar6 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar6 + 0x20))(piVar6);
  if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  }
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar3 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x28;
  iVar3 = param_2[1];
  if (*(int8 *)(param_1 + 0x20) != 0) {
    iVar1 = 0;
    bVar7 = true;
    do {
      while( true ) {
        iVar2 = iVar3;
        if (!bVar7) {
          iVar2 = *param_2;
          if ((uint8)param_2[2] < iVar3 + 2U) {
            uVar5 = param_2[2] * 2;
            if (uVar5 <= iVar3 + 0x3e2U) {
              uVar5 = iVar3 + 0x3e2U;
            }
            param_2[2] = uVar5;
            iVar2 = realloc();
            *param_2 = iVar2;
            if (iVar2 == 0) goto code_r0x000ca7b0;
            iVar4 = param_2[1];
          }
          else {
            iVar4 = iVar3;
          }
          *(xunknown2 *)(iVar2 + iVar4) = 0x202c;
          iVar2 = param_2[1] + 2;
          param_2[1] = iVar2;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x18) + iVar1 * 8),param_2,0x12,0);
        iVar4 = param_2[1];
        if (iVar2 == iVar4) break;
        bVar7 = false;
        iVar1 = iVar1 + 1;
        iVar3 = iVar4;
        if (iVar1 == *(int8 *)(param_1 + 0x20)) goto code_r0x000b65f4;
      }
      param_2[1] = iVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int8 *)(param_1 + 0x20));
  }
code_r0x000b65f4:
  uVar5 = iVar3 + 1;
  iVar1 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x29;
  return;
}

/* 0xb6670  size=8 */
void FUN_000b6670(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb6678  size=676 */
void FUN_000b6678(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 *piVar6;
  bool bVar7;
  
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar3 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x28;
  piVar6 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar6 + 0x20))(piVar6,param_2);
  if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  }
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar3 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x29;
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar3 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x28;
  iVar3 = param_2[1];
  if (*(int8 *)(param_1 + 0x20) != 0) {
    iVar1 = 0;
    bVar7 = true;
    do {
      while( true ) {
        iVar2 = iVar3;
        if (!bVar7) {
          iVar2 = *param_2;
          if ((uint8)param_2[2] < iVar3 + 2U) {
            uVar5 = param_2[2] * 2;
            if (uVar5 <= iVar3 + 0x3e2U) {
              uVar5 = iVar3 + 0x3e2U;
            }
            param_2[2] = uVar5;
            iVar2 = realloc();
            *param_2 = iVar2;
            if (iVar2 == 0) goto code_r0x000ca7b0;
            iVar4 = param_2[1];
          }
          else {
            iVar4 = iVar3;
          }
          *(xunknown2 *)(iVar2 + iVar4) = 0x202c;
          iVar2 = param_2[1] + 2;
          param_2[1] = iVar2;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x18) + iVar1 * 8),param_2,0x12,0);
        iVar4 = param_2[1];
        if (iVar2 == iVar4) break;
        bVar7 = false;
        iVar1 = iVar1 + 1;
        iVar3 = iVar4;
        if (iVar1 == *(int8 *)(param_1 + 0x20)) goto code_r0x000b6898;
      }
      param_2[1] = iVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int8 *)(param_1 + 0x20));
  }
code_r0x000b6898:
  uVar5 = iVar3 + 1;
  iVar1 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x29;
  return;
}

/* 0xb691c  size=8 */
void FUN_000b691c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb6924  size=284 */
void FUN_000b6924(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  xunknown8 xVar2;
  int8 *piVar3;
  int8 iVar4;
  int8 iVar5;
  uint8 uVar6;
  
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x10),param_2,
               (int4)((uint4)*(uint2 *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  iVar4 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 3U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e3U) {
      uVar6 = iVar4 + 0x3e3U;
    }
    param_2[2] = uVar6;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)((xunknown2 *)(iVar1 + iVar4) + 1) = 0x20;
  *(xunknown2 *)(iVar1 + iVar4) = 0x3f20;
  xVar2 = *(xunknown8 *)(param_1 + 0x18);
  param_2[1] = param_2[1] + 3;
  FUN_000b5868(xVar2,param_2,0x13,0);
  iVar4 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 3U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e3U) {
      uVar6 = iVar4 + 0x3e3U;
    }
    param_2[2] = uVar6;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)((xunknown2 *)(iVar1 + iVar4) + 1) = 0x20;
  *(xunknown2 *)(iVar1 + iVar4) = 0x3a20;
  piVar3 = *(int8 **)(param_1 + 0x20);
  param_2[1] = param_2[1] + 3;
  if ((uint4)((int4)((uint4)*(uint2 *)((int8)piVar3 + 9) << 0x1a) >> 0x1a) < 0x12) {
    (**(code **)(*piVar3 + 0x20))(piVar3,param_2);
    if ((*(uint2 *)((int8)piVar3 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000b58d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x28))(piVar3,param_2);
      return;
    }
  }
  else {
    iVar4 = param_2[1];
    iVar1 = *param_2;
    uVar6 = iVar4 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
      uVar6 = iVar4 + 1;
    }
    param_2[1] = uVar6;
    iVar5 = *piVar3;
    *(xunknown1 *)(iVar1 + iVar4) = 0x28;
    (**(code **)(iVar5 + 0x20))(piVar3,param_2);
    if ((*(uint2 *)((int8)piVar3 + 9) & 0xc0) != 0x40) {
      (**(code **)(*piVar3 + 0x28))(piVar3,param_2);
    }
    iVar4 = param_2[1];
    iVar1 = *param_2;
    uVar6 = iVar4 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar4 = param_2[1];
      uVar6 = iVar4 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar1 + iVar4) = 0x29;
  }
  return;
}

/* 0xb6a40  size=8 */
void FUN_000b6a40(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb6a48  size=536 */
void FUN_000b6a48(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 *piVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 uVar6;
  int8 iVar7;
  xunknown8 xVar8;
  
  iVar7 = *(int8 *)(param_1 + 0x18);
  iVar4 = param_2[1];
  if (iVar7 != 0) {
    xVar8 = *(xunknown8 *)(param_1 + 0x10);
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar7)) {
      uVar5 = param_2[2] * 2;
      uVar6 = iVar4 + iVar7 + 0x3e0;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      param_2[2] = uVar5;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    memcpy(iVar1 + iVar4,xVar8,iVar7);
    iVar4 = param_2[1] + iVar7;
    param_2[1] = iVar4;
  }
  iVar7 = param_2[4];
  iVar1 = *param_2;
  *(xunknown4 *)(param_2 + 4) = 0;
  if ((uint8)param_2[2] < iVar4 + 1U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e1U) {
      uVar6 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar6;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar4) = 0x3c;
  piVar2 = *(int8 **)(param_1 + 0x20);
  iVar4 = *piVar2;
  param_2[1] = param_2[1] + 1;
  (**(code **)(iVar4 + 0x20))(piVar2,param_2);
  iVar4 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 1U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e1U) {
      uVar6 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar6;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar4) = 0x3e;
  iVar1 = param_2[1];
  iVar3 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)iVar7 + 1;
  uVar6 = iVar1 + 2;
  iVar4 = iVar1 + 1;
  param_2[1] = iVar4;
  if ((uint8)param_2[2] < uVar6) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar1 + 0x3e2U) {
      uVar6 = iVar1 + 0x3e2U;
    }
    param_2[2] = uVar6;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
    uVar6 = iVar4 + 1;
  }
  param_2[1] = uVar6;
  *(xunknown1 *)(iVar3 + iVar4) = 0x28;
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x28),param_2,0x13,0);
  iVar4 = param_2[1];
  iVar7 = *param_2;
  uVar6 = iVar4 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar6) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e1U) {
      uVar6 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar6;
    iVar7 = realloc();
    *param_2 = iVar7;
    if (iVar7 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar4 = param_2[1];
    uVar6 = iVar4 + 1;
  }
  param_2[1] = uVar6;
  *(xunknown1 *)(iVar7 + iVar4) = 0x29;
  return;
}

/* 0xb6c60  size=8 */
void FUN_000b6c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb6c68  size=488 */
void FUN_000b6c68(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  int8 iVar5;
  int8 *piVar6;
  xunknown8 xVar7;
  
  iVar5 = *(int8 *)(param_1 + 0x18);
  iVar2 = param_2[1];
  if (iVar5 != 0) {
    xVar7 = *(xunknown8 *)(param_1 + 0x10);
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar2 + iVar5)) {
      uVar3 = param_2[2] * 2;
      uVar4 = iVar2 + iVar5 + 0x3e0;
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar2 = param_2[1];
    }
    memcpy(iVar1 + iVar2,xVar7,iVar5);
    iVar2 = param_2[1] + iVar5;
    param_2[1] = iVar2;
  }
  uVar4 = iVar2 + 1;
  iVar5 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar2 + 0x3e1U) {
      uVar4 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar5 = realloc();
    *param_2 = iVar5;
    if (iVar5 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar5 + iVar2) = 0x28;
  piVar6 = *(int8 **)(param_1 + 0x20);
  (**(code **)(*piVar6 + 0x20))(piVar6,param_2);
  if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  }
  iVar2 = param_2[1];
  iVar5 = *param_2;
  uVar4 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar2 + 0x3e1U) {
      uVar4 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar5 = realloc();
    *param_2 = iVar5;
    if (iVar5 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar4 = iVar2 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar5 + iVar2) = 0x29;
  iVar2 = *(int8 *)(param_1 + 0x30);
  if (iVar2 != 0) {
    iVar5 = param_2[1];
    iVar1 = *param_2;
    xVar7 = *(xunknown8 *)(param_1 + 0x28);
    if ((uint8)param_2[2] < (uint8)(iVar5 + iVar2)) {
      uVar3 = param_2[2] * 2;
      uVar4 = iVar5 + iVar2 + 0x3e0;
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
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
      iVar5 = param_2[1];
    }
    memcpy(iVar1 + iVar5,xVar7,iVar2);
    param_2[1] = param_2[1] + iVar2;
  }
  return;
}

/* 0xb6e50  size=8 */
void FUN_000b6e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb6e58  size=332 */
xunknown8 * FUN_000b6e58(int8 *param_1,xunknown8 param_2,xunknown8 param_3)

{
  uint1 *puVar1;
  uint1 *puVar2;
  int8 *piVar3;
  int8 iVar4;
  xunknown8 *pxVar5;
  uint1 *puVar6;
  int8 *piVar7;
  
  puVar1 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  puVar6 = puVar1;
  if ((puVar1 != puVar2) && (*puVar1 == 0x6e)) {
    puVar6 = puVar1 + 1;
    *param_1 = (int8)puVar6;
  }
  if ((puVar2 != puVar6) && (0xfffffff5 < *puVar6 - 0x3a)) {
    do {
      if (*puVar6 - 0x3a < 0xfffffff6) goto code_r0x000b6ef4;
      puVar6 = puVar6 + 1;
      *param_1 = (int8)puVar6;
    } while (puVar6 != puVar2);
    puVar6 = puVar2;
code_r0x000b6ef4:
    if ((int8)puVar6 - (int8)puVar1 == 0) {
      return (xunknown8 *)0x0;
    }
    if (puVar6 == puVar2) {
      return (xunknown8 *)0x0;
    }
    if (*puVar6 == 0x45) {
      piVar7 = (int8 *)param_1[0x266];
      *param_1 = (int8)(puVar6 + 1);
      iVar4 = piVar7[1];
      piVar3 = piVar7;
      if (iVar4 - 0xfc0U < 0xfffffffffffff00f || iVar4 == -0x31) {
        piVar3 = (int8 *)malloc(0x1000);
        if (piVar3 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar5 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar5;
        }
        iVar4 = 0;
        *piVar3 = (int8)piVar7;
        piVar3[1] = 0;
        param_1[0x266] = (int8)piVar3;
      }
      piVar3[1] = iVar4 + 0x30;
      pxVar5 = (xunknown8 *)((int8)piVar3 + iVar4 + 0x10);
      *pxVar5 = 0xd0fb8;
      *(xunknown1 *)((int8)piVar3 + iVar4 + 0x18) = 0x4d;
      *(xunknown8 *)((int8)piVar3 + iVar4 + 0x20) = param_2;
      *(xunknown8 *)((int8)piVar3 + iVar4 + 0x28) = param_3;
      *(uint1 **)((int8)piVar3 + iVar4 + 0x30) = puVar1;
      *(int8 *)((int8)piVar3 + iVar4 + 0x38) = (int8)puVar6 - (int8)puVar1;
      *(uint2 *)((int8)piVar3 + iVar4 + 0x19) =
           *(uint2 *)((int8)piVar3 + iVar4 + 0x19) & 0xf000 | 0x540;
      return pxVar5;
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb6fa4  size=164 */
void FUN_000b6fa4(int8 param_1,int4 param_2)

{
  xunknown8 *pxVar1;
  int8 *piVar2;
  int8 iVar3;
  int8 *piVar4;
  
  piVar4 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar4[1];
  piVar2 = piVar4;
  if (iVar3 - 0xfe0U < 0xfffffffffffff00f || iVar3 == -0x11) {
    piVar2 = (int8 *)malloc(0x1000);
    if (piVar2 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar3 = 0;
    *piVar2 = (int8)piVar4;
    piVar2[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar2;
  }
  piVar2[1] = iVar3 + 0x10;
  pxVar1 = (xunknown8 *)(iVar3 + 0x10 + (int8)piVar2);
  *(xunknown1 *)(pxVar1 + 1) = 0x49;
  *pxVar1 = 0xd1028;
  *(uint2 *)((int8)pxVar1 + 9) = *(uint2 *)((int8)pxVar1 + 9) & 0xf000 | 0x540;
  *(bool *)((int8)pxVar1 + 0xb) = param_2 != 0;
  return;
}

/* 0xb7048  size=160 */
void FUN_000b7048(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd11e8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x4a;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xb70e8  size=168 */
xunknown8 * FUN_000b70e8(int8 param_1,xunknown8 param_2)

{
  int8 *piVar1;
  xunknown8 xVar2;
  int8 iVar3;
  xunknown8 *pxVar4;
  int8 *piVar5;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar1 = piVar5;
  if (iVar3 - 0xfd0U < 0xfffffffffffff00f || iVar3 == -0x21) {
    piVar1 = (int8 *)malloc(0x1000);
    if (piVar1 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pxVar4 = (xunknown8 *)(*pcRam00000000000d4468)();
      return pxVar4;
    }
    iVar3 = 0;
    *piVar1 = (int8)piVar5;
    piVar1[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar1;
  }
  piVar1[1] = iVar3 + 0x20;
  xVar2 = strlen(param_2);
  pxVar4 = (xunknown8 *)((int8)piVar1 + iVar3 + 0x10);
  *pxVar4 = 0xd0548;
  *(xunknown1 *)((int8)piVar1 + iVar3 + 0x18) = 8;
  *(xunknown8 *)((int8)piVar1 + iVar3 + 0x20) = param_2;
  *(xunknown8 *)((int8)piVar1 + iVar3 + 0x28) = xVar2;
  *(uint2 *)((int8)piVar1 + iVar3 + 0x19) = *(uint2 *)((int8)piVar1 + iVar3 + 0x19) & 0xf000 | 0x540
  ;
  return pxVar4;
}

/* 0xb7190  size=1884 */
xunknown8 * FUN_000b7190(int8 *param_1,int8 param_2)

{
  int2 *piVar1;
  xunknown1 xVar2;
  int8 *piVar3;
  xunknown8 *pxVar4;
  int8 iVar5;
  int8 iVar6;
  int8 iVar7;
  char cVar8;
  int8 iVar9;
  char *pcVar10;
  uint1 *puVar11;
  uint8 uVar12;
  char *pcVar13;
  uint1 *puVar14;
  uint1 *puVar15;
  int8 *piVar16;
  uint1 *puVar17;
  int8 iVar18;
  int8 iVar19;
  uint1 *puStack_110;
  int8 iStack_108;
  int8 iStack_100;
  xunknown1 axStack_f8 [16];
  int8 iStack_e8;
  xunknown1 axStack_e0 [16];
  int8 iStack_d0;
  uint8 uStack_c8;
  xunknown1 *apxStack_c0 [3];
  xunknown1 axStack_a8 [72];
  
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  piVar1 = (int2 *)*param_1;
  puVar14 = (uint1 *)param_1[1];
  if ((uint8)((int8)puVar14 - (int8)piVar1) < 2) {
    return (xunknown8 *)0x0;
  }
  if (*piVar1 == 0x7455) {
    puVar11 = (uint1 *)(piVar1 + 1);
    *param_1 = (int8)puVar11;
    if (puVar14 == puVar11) {
      return (xunknown8 *)0x0;
    }
    if (*puVar11 - 0x3a < 0xfffffff6) {
      puVar17 = (uint1 *)0x0;
      iVar9 = 0;
    }
    else {
      puVar17 = (uint1 *)(piVar1 + 1);
      puVar15 = puVar11;
      do {
        if (*puVar15 - 0x3a < 0xfffffff6) goto code_r0x000b7684;
        puVar15 = puVar15 + 1;
        puVar17 = puVar17 + 1;
        *param_1 = (int8)puVar15;
      } while (puVar15 != puVar14);
      puVar17 = puVar14;
      puVar15 = puVar14;
code_r0x000b7684:
      iVar9 = (int8)puVar17 - (int8)puVar11;
      puVar17 = puVar11;
      puVar11 = puVar15;
    }
    if (puVar11 == puVar14) {
      return (xunknown8 *)0x0;
    }
    if (*puVar11 != 0x5f) {
      return (xunknown8 *)0x0;
    }
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar11 + 1);
    iVar7 = piVar16[1];
    piVar3 = piVar16;
    if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
      piVar3 = (int8 *)malloc(0x1000);
      if (piVar3 == (int8 *)0x0) goto code_r0x000b782c;
      iVar7 = 0;
      *piVar3 = (int8)piVar16;
      piVar3[1] = 0;
      param_1[0x266] = (int8)piVar3;
    }
    piVar3[1] = iVar7 + 0x20;
    pxVar4 = (xunknown8 *)((int8)piVar3 + iVar7 + 0x10);
    *pxVar4 = 0xd1258;
    *(uint1 **)((int8)piVar3 + iVar7 + 0x20) = puVar17;
    *(int8 *)((int8)piVar3 + iVar7 + 0x28) = iVar9;
    *(xunknown1 *)((int8)piVar3 + iVar7 + 0x18) = 0x33;
    *(uint2 *)((int8)piVar3 + iVar7 + 0x19) =
         *(uint2 *)((int8)piVar3 + iVar7 + 0x19) & 0xf000 | 0x540;
    return pxVar4;
  }
  if (*piVar1 != 0x6c55) {
    if (*piVar1 != 0x6255) {
      return (xunknown8 *)0x0;
    }
    puVar11 = (uint1 *)(piVar1 + 1);
    *param_1 = (int8)puVar11;
    if (puVar14 == puVar11) {
      return (xunknown8 *)0x0;
    }
    if (0xfffffff5 < *puVar11 - 0x3a) {
      while (0xfffffff5 < *puVar11 - 0x3a) {
        puVar11 = puVar11 + 1;
        *param_1 = (int8)puVar11;
        if (puVar11 == puVar14) {
          return (xunknown8 *)0x0;
        }
      }
    }
    if (puVar11 == puVar14) {
      return (xunknown8 *)0x0;
    }
    if (*puVar11 != 0x5f) {
      return (xunknown8 *)0x0;
    }
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar11 + 1);
    iVar9 = piVar16[1];
    piVar3 = piVar16;
    if (iVar9 - 0xfd0U < 0xfffffffffffff00f || iVar9 == -0x21) {
      piVar3 = (int8 *)malloc(0x1000);
      if (piVar3 == (int8 *)0x0) goto code_r0x000b782c;
      iVar9 = 0;
      *piVar3 = (int8)piVar16;
      piVar3[1] = 0;
      param_1[0x266] = (int8)piVar3;
    }
    piVar3[1] = iVar9 + 0x20;
    pxVar4 = (xunknown8 *)((int8)piVar3 + iVar9 + 0x10);
    *pxVar4 = 0xd0548;
    *(xunknown1 *)((int8)piVar3 + iVar9 + 0x18) = 8;
    *(uint2 *)((int8)piVar3 + iVar9 + 0x19) =
         *(uint2 *)((int8)piVar3 + iVar9 + 0x19) & 0xf000 | 0x540;
    *(xunknown8 *)((int8)piVar3 + iVar9 + 0x20) = 0x38370;
    *(xunknown8 *)((int8)piVar3 + iVar9 + 0x28) = 0xf;
    return pxVar4;
  }
  iVar19 = param_1[0x62];
  *param_1 = (int8)(piVar1 + 1);
  param_1[0x62] = param_1[0x54] - param_1[0x53] >> 3;
  FUN_000b8580(&iStack_d0,param_1);
  pcVar10 = (char *)*param_1;
  iVar9 = param_1[2];
  iVar7 = param_1[3];
  uVar12 = param_1[1] - (int8)pcVar10;
  if (uVar12 != 0) {
    piVar3 = param_1 + 5;
    while (*pcVar10 == 'T') {
      if (uVar12 < 2) {
        cVar8 = '\0';
      }
      else {
        cVar8 = pcVar10[1];
      }
      iVar5 = memchr(0x29043 /* "yptnk" */,cVar8,5);
      if ((iVar5 == 0) || (iVar5 == 0x29042)) break;
      iVar5 = FUN_000b86a8(param_1,apxStack_c0);
      pxVar4 = (xunknown8 *)0x0;
      if (iVar5 == 0) goto code_r0x000b7790;
      piVar16 = (int8 *)param_1[3];
      if (piVar16 == (int8 *)param_1[4]) {
        iVar18 = (int8)piVar16 - param_1[2];
        if ((int8 *)param_1[2] == piVar3) {
          iVar6 = malloc(iVar18 * 2);
          if (iVar6 == 0) goto code_r0x000ca7b0;
          if (piVar16 != piVar3) {
            memcpy(iVar6,piVar3,iVar18);
          }
          param_1[2] = iVar6;
        }
        else {
          iVar6 = realloc();
          param_1[2] = iVar6;
          if (iVar6 == 0) goto code_r0x000ca7b0;
        }
        piVar16 = (int8 *)(iVar6 + iVar18);
        param_1[3] = (int8)piVar16;
        param_1[4] = iVar6 + (iVar18 >> 2) * 8;
      }
      param_1[3] = (int8)(piVar16 + 1);
      *piVar16 = iVar5;
      pcVar10 = (char *)*param_1;
      uVar12 = param_1[1] - (int8)pcVar10;
      if (uVar12 == 0) break;
    }
  }
  iVar9 = iVar7 - iVar9 >> 3;
  axStack_e0 = FUN_000adec4(param_1,iVar9);
  if (axStack_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
      FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0x83,0x2a4a5 /* "Popping empty vector!" */);
code_r0x000b782c:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pxVar4 = (xunknown8 *)(*pcRam00000000000d4468)();
      return pxVar4;
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar10 = (char *)*param_1;
  pcVar13 = (char *)param_1[1];
  iStack_e8 = 0;
  if (pcVar10 == pcVar13) {
code_r0x000b7500:
    piVar3 = param_1 + 5;
    do {
      iVar7 = FUN_000abd5c(param_1);
      pxVar4 = (xunknown8 *)0x0;
      if (iVar7 == 0) goto code_r0x000b7790;
      piVar16 = (int8 *)param_1[3];
      if (piVar16 == (int8 *)param_1[4]) {
        iVar5 = (int8)piVar16 - param_1[2];
        if ((int8 *)param_1[2] == piVar3) {
          iVar18 = malloc(iVar5 * 2);
          if (iVar18 == 0) goto code_r0x000ca7b0;
          if (piVar16 != piVar3) {
            memcpy(iVar18,piVar3,iVar5);
          }
          param_1[2] = iVar18;
        }
        else {
          iVar18 = realloc();
          param_1[2] = iVar18;
          if (iVar18 == 0) goto code_r0x000ca7b0;
        }
        piVar16 = (int8 *)(iVar18 + iVar5);
        param_1[3] = (int8)piVar16;
        param_1[4] = iVar18 + (iVar5 >> 2) * 8;
      }
      param_1[3] = (int8)(piVar16 + 1);
      *piVar16 = iVar7;
      if ((char *)param_1[1] == (char *)*param_1) {
        cVar8 = '\0';
      }
      else {
        cVar8 = *(char *)*param_1;
        if (cVar8 == 'E') break;
      }
    } while (cVar8 != 'Q');
  }
  else {
    if (*pcVar10 == 'Q') {
      xVar2 = *(xunknown1 *)((int8)param_1 + 0x30a);
      *param_1 = (int8)(pcVar10 + 1);
      *(xunknown1 *)((int8)param_1 + 0x30a) = 1;
      iStack_e8 = FUN_000b0fa8(param_1);
      *(xunknown1 *)((int8)param_1 + 0x30a) = xVar2;
      pxVar4 = (xunknown8 *)0x0;
      if (iStack_e8 == 0) goto code_r0x000b7790;
      pcVar10 = (char *)*param_1;
      pcVar13 = (char *)param_1[1];
    }
    if ((pcVar13 == pcVar10) || (*pcVar10 != 'v')) goto code_r0x000b7500;
    *param_1 = (int8)(pcVar10 + 1);
  }
  axStack_f8 = FUN_000adec4(param_1,iVar9);
  puVar14 = (uint1 *)*param_1;
  puVar11 = (uint1 *)param_1[1];
  iStack_100 = 0;
  if (puVar14 != puVar11) {
    if (*puVar14 == 0x51) {
      xVar2 = *(xunknown1 *)((int8)param_1 + 0x30a);
      *param_1 = (int8)(puVar14 + 1);
      *(xunknown1 *)((int8)param_1 + 0x30a) = 1;
      iStack_100 = FUN_000b0fa8(param_1);
      *(xunknown1 *)((int8)param_1 + 0x30a) = xVar2;
      pxVar4 = (xunknown8 *)0x0;
      if (iStack_100 == 0) goto code_r0x000b7790;
      puVar14 = (uint1 *)*param_1;
      puVar11 = (uint1 *)param_1[1];
    }
    if ((puVar14 != puVar11) && (*puVar14 == 0x45)) {
      puVar14 = puVar14 + 1;
      *param_1 = (int8)puVar14;
      if (puVar11 != puVar14) {
        puVar17 = puVar14;
        if (*puVar14 - 0x3a < 0xfffffff6) {
          iStack_108 = 0;
          puVar14 = (uint1 *)0x0;
        }
        else {
          do {
            if (*puVar17 - 0x3a < 0xfffffff6) goto code_r0x000b7740;
            puVar17 = puVar17 + 1;
            *param_1 = (int8)puVar17;
          } while (puVar17 != puVar11);
          puVar17 = puVar11;
code_r0x000b7740:
          iStack_108 = (int8)puVar17 - (int8)puVar14;
        }
        puStack_110 = puVar14;
        if ((puVar17 != puVar11) && (*puVar17 == 0x5f)) {
          *param_1 = (int8)(puVar17 + 1);
          pxVar4 = (xunknown8 *)
                   FUN_000b8ba8(param_1,axStack_e0,&iStack_e8,axStack_f8,&iStack_100,&puStack_110);
          goto code_r0x000b7790;
        }
      }
    }
  }
  pxVar4 = (xunknown8 *)0x0;
code_r0x000b7790:
  if (uStack_c8 <= (uint8)(*(int8 *)(iStack_d0 + 0x2a0) - *(int8 *)(iStack_d0 + 0x298) >> 3)) {
    *(uint8 *)(iStack_d0 + 0x2a0) = *(int8 *)(iStack_d0 + 0x298) + uStack_c8 * 8;
    if (apxStack_c0[0] != axStack_a8) {
      free(apxStack_c0[0]);
    }
    param_1[0x62] = iVar19;
    return pxVar4;
  }
  FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0xa50,0x29893);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pxVar4 = (xunknown8 *)(*got_abort)();
  return pxVar4;
}

/* 0xb78ec  size=160 */
void FUN_000b78ec(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd15d8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x4b;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xb798c  size=172 */
void FUN_000b798c(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  int8 *piVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  
  piVar4 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar4[1];
  piVar1 = piVar4;
  if (iVar2 - 0xfc0U < 0xfffffffffffff00f || iVar2 == -0x31) {
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
  piVar1[1] = iVar2 + 0x30;
  xVar3 = *param_2;
  xVar6 = param_3[1];
  xVar5 = *param_3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd1648;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x4c;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar6;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  return;
}

/* 0xb7a38  size=748 */
void FUN_000b7a38(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  xunknown8 xVar7;
  char *pcVar8;
  uint8 *puVar9;
  
  if (3 < *(uint8 *)(param_1 + 0x18)) {
    iVar3 = param_2[1];
    iVar1 = *param_2;
    uVar6 = iVar3 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar3 + 0x3e1U) {
        uVar6 = iVar3 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar6 = iVar3 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar1 + iVar3) = 0x28;
    iVar1 = *(int8 *)(param_1 + 0x18);
    iVar3 = param_2[1];
    if (iVar1 != 0) {
      xVar7 = *(xunknown8 *)(param_1 + 0x10);
      iVar2 = *param_2;
      if ((uint8)param_2[2] < (uint8)(iVar3 + iVar1)) {
        uVar4 = param_2[2] * 2;
        uVar6 = iVar3 + iVar1 + 0x3e0;
        if (uVar4 <= uVar6) {
          uVar4 = uVar6;
        }
        param_2[2] = uVar4;
        iVar2 = realloc();
        *param_2 = iVar2;
        if (iVar2 == 0) goto code_r0x000ca7b0;
        iVar3 = param_2[1];
      }
      memcpy(iVar2 + iVar3,xVar7,iVar1);
      iVar3 = param_2[1] + iVar1;
      param_2[1] = iVar3;
    }
    uVar6 = iVar3 + 1;
    iVar1 = *param_2;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar3 + 0x3e1U) {
        uVar6 = iVar3 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar6 = iVar3 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar1 + iVar3) = 0x29;
  }
  pcVar8 = *(char **)(param_1 + 0x20);
  if (*pcVar8 == 'n') {
    iVar3 = *param_2;
    puVar9 = (uint8 *)(param_2 + 1);
    uVar4 = *puVar9;
    uVar6 = uVar4 + 1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= uVar4 + 0x3e1) {
        uVar6 = uVar4 + 0x3e1;
      }
      param_2[2] = uVar6;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      uVar4 = *puVar9;
      uVar6 = uVar4 + 1;
    }
    *puVar9 = uVar6;
    *(xunknown1 *)(iVar3 + uVar4) = 0x2d;
    iVar3 = *(int8 *)(param_1 + 0x28) + -1;
    if (iVar3 != 0) {
      uVar6 = param_2[1];
      iVar1 = *param_2;
      iVar2 = *(int8 *)(param_1 + 0x20);
      if ((uint8)param_2[2] < uVar6 + iVar3) {
        uVar4 = param_2[2] * 2;
        uVar6 = uVar6 + iVar3 + 0x3e0;
        if (uVar4 <= uVar6) {
          uVar4 = uVar6;
        }
        param_2[2] = uVar4;
        iVar1 = realloc();
        *param_2 = iVar1;
        if (iVar1 == 0) goto code_r0x000ca7b0;
        uVar6 = *puVar9;
      }
      iVar1 = iVar1 + uVar6;
      pcVar8 = (char *)(iVar2 + 1);
code_r0x000b7c74:
      memcpy(iVar1,pcVar8,iVar3);
      param_2[1] = param_2[1] + iVar3;
    }
  }
  else {
    iVar3 = *(int8 *)(param_1 + 0x28);
    if (iVar3 != 0) {
      iVar1 = *param_2;
      iVar2 = param_2[1];
      if ((uint8)param_2[2] < (uint8)(iVar2 + iVar3)) {
        uVar4 = param_2[2] * 2;
        uVar6 = iVar2 + iVar3 + 0x3e0;
        if (uVar4 <= uVar6) {
          uVar4 = uVar6;
        }
        param_2[2] = uVar4;
        iVar1 = realloc();
        *param_2 = iVar1;
        if (iVar1 == 0) goto code_r0x000ca7b0;
        iVar2 = param_2[1];
      }
      iVar1 = iVar1 + iVar2;
      goto code_r0x000b7c74;
    }
  }
  uVar6 = *(uint8 *)(param_1 + 0x18);
  if ((uVar6 < 4) && (uVar6 != 0)) {
    iVar3 = param_2[1];
    iVar1 = *param_2;
    xVar7 = *(xunknown8 *)(param_1 + 0x10);
    if ((uint8)param_2[2] < iVar3 + uVar6) {
      uVar5 = param_2[2] * 2;
      uVar4 = iVar3 + uVar6 + 0x3e0;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      param_2[2] = uVar5;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar3 = param_2[1];
    }
    memcpy(iVar1 + iVar3,xVar7,uVar6);
    param_2[1] = param_2[1] + uVar6;
  }
  return;
}

/* 0xb7d24  size=8 */
void FUN_000b7d24(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb7d2c  size=168 */
void FUN_000b7d2c(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int8 iVar2;
  xunknown8 xVar3;
  char cVar4;
  int8 iVar5;
  uint8 uVar6;
  int8 iVar7;
  
  cVar4 = *(char *)(param_1 + 0xb);
  iVar5 = *param_2;
  iVar2 = 4;
  if (cVar4 == '\0') {
    iVar2 = 5;
  }
  iVar7 = param_2[1];
  if ((uint8)param_2[2] < (uint8)(iVar2 + iVar7)) {
    uVar6 = param_2[2] * 2;
    uVar1 = iVar2 + iVar7 + 0x3e0;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    param_2[2] = uVar6;
    iVar5 = realloc();
    *param_2 = iVar5;
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar7 = param_2[1];
  }
  xVar3 = 0x2246d /* "false" */;
  if (cVar4 != '\0') {
    xVar3 = 0x2d534 /* "true" */;
  }
  memcpy(iVar5 + iVar7,xVar3,iVar2);
  param_2[1] = param_2[1] + iVar2;
  return;
}

/* 0xb7dd4  size=8 */
void FUN_000b7dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb7ddc  size=436 */
void FUN_000b7ddc(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  xunknown1 xVar2;
  bool bVar3;
  int4 iVar4;
  int8 iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  xunknown1 *pxVar10;
  uint8 uVar11;
  int8 iVar12;
  xunknown1 *pxVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  uint1 *puVar18;
  int8 iVar19;
  xunknown8 xStack_40;
  xunknown8 xStack_38;
  xunknown8 xStack_30;
  xunknown4 xStack_24;
  
  if (7 < *(uint8 *)(param_1 + 0x18)) {
    puVar18 = *(uint1 **)(param_1 + 0x10);
    cVar6 = '\t';
    if (0xfffffff5 < *puVar18 - 0x3a) {
      cVar6 = '\0';
    }
    cVar14 = -0x57;
    if (0xfffffff5 < puVar18[1] - 0x3a) {
      cVar14 = -0x30;
    }
    cVar7 = '\t';
    if (0xfffffff5 < puVar18[2] - 0x3a) {
      cVar7 = '\0';
    }
    cVar15 = -0x57;
    if (0xfffffff5 < puVar18[3] - 0x3a) {
      cVar15 = -0x30;
    }
    cVar8 = '\t';
    if (0xfffffff5 < puVar18[4] - 0x3a) {
      cVar8 = '\0';
    }
    cVar16 = -0x57;
    if (0xfffffff5 < puVar18[5] - 0x3a) {
      cVar16 = -0x30;
    }
    cVar9 = '\t';
    if (0xfffffff5 < puVar18[6] - 0x3a) {
      cVar9 = '\0';
    }
    cVar17 = -0x57;
    if (0xfffffff5 < puVar18[7] - 0x3a) {
      cVar17 = -0x30;
    }
    pxVar10 = (xunknown1 *)((uint8)&xStack_24 | 1);
    xStack_24 = (float4)CONCAT13(cVar17 + puVar18[7] + (cVar9 + puVar18[6]) * '\x10',
                                 CONCAT12(cVar16 + puVar18[5] + (cVar8 + puVar18[4]) * '\x10',
                                          CONCAT11(cVar15 + puVar18[3] +
                                                   (cVar7 + puVar18[2]) * '\x10',
                                                   cVar14 + puVar18[1] + (cVar6 + *puVar18) * '\x10'
                                                  )));
    pxVar13 = (xunknown1 *)((uint8)&xStack_24 | 3);
    do {
      xVar2 = pxVar10[-1];
      pxVar10[-1] = *pxVar13;
      *pxVar13 = xVar2;
      bVar3 = pxVar10 < pxVar13 + -1;
      pxVar10 = pxVar10 + 1;
      pxVar13 = pxVar13 + -1;
    } while (bVar3);
    xStack_40 = 0;
    xStack_38 = 0;
    xStack_30 = 0;
    iVar4 = snprintf((float8)xStack_24,&xStack_40,0x18,0x38368);
    if (iVar4 != 0) {
      iVar12 = param_2[1];
      iVar19 = (int8)iVar4;
      iVar5 = *param_2;
      if ((uint8)param_2[2] < (uint8)(iVar12 + iVar19)) {
        uVar11 = param_2[2] * 2;
        uVar1 = iVar12 + iVar19 + 0x3e0;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        param_2[2] = uVar11;
        iVar5 = realloc();
        *param_2 = iVar5;
        if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*got_abort)();
          return;
        }
        iVar12 = param_2[1];
      }
      memcpy(iVar5 + iVar12,&xStack_40,iVar19);
      param_2[1] = param_2[1] + iVar19;
    }
  }
  return;
}

/* 0xb7f90  size=8 */
void FUN_000b7f90(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb7f98  size=452 */
void FUN_000b7f98(int8 param_1,int8 *param_2)

{
  xunknown1 xVar1;
  uint8 uVar2;
  bool bVar3;
  int4 iVar4;
  int8 iVar5;
  char *pcVar6;
  xunknown1 *pxVar7;
  uint8 uVar8;
  int8 iVar9;
  xunknown1 *pxVar10;
  int8 iVar11;
  uint1 uVar12;
  uint1 uVar13;
  uint1 uVar14;
  uint1 uVar15;
  uint1 uVar16;
  uint1 uVar17;
  xunknown8 xStack_50;
  xunknown8 xStack_48;
  xunknown8 xStack_40;
  xunknown8 xStack_38;
  xunknown8 xStack_28;
  
  if (0xf < *(uint8 *)(param_1 + 0x18)) {
    pcVar6 = *(char **)(param_1 + 0x10);
    uVar12 = pcVar6[2];
    uVar15 = pcVar6[3];
    uVar13 = pcVar6[4];
    uVar16 = pcVar6[5];
    uVar14 = pcVar6[10];
    uVar17 = pcVar6[0xb];
    pxVar10 = (xunknown1 *)((uint8)&xStack_28 | 1);
    uVar2 = CONCAT17(-((uint1)pcVar6[0xe] - 0x3a < 0xfffffff6),
                     CONCAT16(-((uint1)pcVar6[0xc] - 0x3a < 0xfffffff6),
                              CONCAT15(-(uVar14 - 0x3a < 0xfffffff6),
                                       CONCAT14(-((CONCAT12(uVar14,(uint2)(uint1)pcVar6[8]) & 0xffff
                                                  ) - 0x3a < 0xfffffff6),
                                                CONCAT13(-((uint1)pcVar6[6] - 0x3a < 0xfffffff6),
                                                         CONCAT12(-(uVar13 - 0x3a < 0xfffffff6),
                                                                  CONCAT11(-(uVar12 - 0x3a <
                                                                            0xfffffff6),
                                                                           -((CONCAT12(uVar13,
                                                  CONCAT11(uVar12,*pcVar6)) & 0xff) - 0x3a <
                                                  0xfffffff6)))))))) & 0x909090909090909;
    uVar8 = CONCAT17(-((uint1)pcVar6[0xf] - 0x3a < 0xfffffff6),
                     CONCAT16(-((uint1)pcVar6[0xd] - 0x3a < 0xfffffff6),
                              CONCAT15(-(uVar17 - 0x3a < 0xfffffff6),
                                       CONCAT14(-((CONCAT12(uVar17,(uint2)(uint1)pcVar6[9]) & 0xffff
                                                  ) - 0x3a < 0xfffffff6),
                                                CONCAT13(-((uint1)pcVar6[7] - 0x3a < 0xfffffff6),
                                                         CONCAT12(-(uVar16 - 0x3a < 0xfffffff6),
                                                                  CONCAT11(-(uVar15 - 0x3a <
                                                                            0xfffffff6),
                                                                           -((CONCAT12(uVar16,
                                                  CONCAT11(uVar15,pcVar6[1])) & 0xff) - 0x3a <
                                                  0xfffffff6)))))))) & 0x7979797979797979 ^
            0xd0d0d0d0d0d0d0d0;
    xStack_28 = CONCAT17((char)(uVar8 >> 0x38) + pcVar6[0xf] +
                         ((char)(uVar2 >> 0x38) + pcVar6[0xe]) * '\x10',
                         CONCAT16((char)(uVar8 >> 0x30) + pcVar6[0xd] +
                                  ((char)(uVar2 >> 0x30) + pcVar6[0xc]) * '\x10',
                                  CONCAT15((char)(uVar8 >> 0x28) + uVar17 +
                                           ((char)(uVar2 >> 0x28) + uVar14) * '\x10',
                                           CONCAT14((char)(uVar8 >> 0x20) + pcVar6[9] +
                                                    ((char)(uVar2 >> 0x20) + pcVar6[8]) * '\x10',
                                                    CONCAT13((char)(uVar8 >> 0x18) + pcVar6[7] +
                                                             ((char)(uVar2 >> 0x18) + pcVar6[6]) *
                                                             '\x10',CONCAT12((char)(uVar8 >> 0x10) +
                                                                             uVar16 + ((char)(uVar2 
                                                  >> 0x10) + uVar13) * '\x10',
                                                  CONCAT11((char)(uVar8 >> 8) + uVar15 +
                                                           ((char)(uVar2 >> 8) + uVar12) * '\x10',
                                                           (char)uVar8 + pcVar6[1] +
                                                           ((char)uVar2 + *pcVar6) * '\x10')))))));
    pxVar7 = (xunknown1 *)((uint8)&xStack_28 | 7);
    do {
      xVar1 = pxVar10[-1];
      pxVar10[-1] = *pxVar7;
      *pxVar7 = xVar1;
      bVar3 = pxVar10 < pxVar7 + -1;
      pxVar10 = pxVar10 + 1;
      pxVar7 = pxVar7 + -1;
    } while (bVar3);
    xStack_48 = 0;
    xStack_50 = 0;
    xStack_38 = 0;
    xStack_40 = 0;
    iVar4 = snprintf(xStack_28,&xStack_50,0x20,0x2ba44);
    if (iVar4 != 0) {
      iVar9 = param_2[1];
      iVar11 = (int8)iVar4;
      iVar5 = *param_2;
      if ((uint8)param_2[2] < (uint8)(iVar9 + iVar11)) {
        uVar8 = param_2[2] * 2;
        uVar2 = iVar9 + iVar11 + 0x3e0;
        if (uVar8 <= uVar2) {
          uVar8 = uVar2;
        }
        param_2[2] = uVar8;
        iVar5 = realloc();
        *param_2 = iVar5;
        if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*got_abort)();
          return;
        }
        iVar9 = param_2[1];
      }
      memcpy(iVar5 + iVar9,&xStack_50,iVar11);
      param_2[1] = param_2[1] + iVar11;
    }
  }
  return;
}

/* 0xb815c  size=8 */
void FUN_000b815c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb8164  size=768 */
void FUN_000b8164(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  uint1 uVar2;
  uint1 uVar3;
  uint1 uVar4;
  uint1 uVar5;
  uint1 uVar6;
  uint1 uVar7;
  uint1 uVar8;
  uint1 uVar9;
  uint1 uVar10;
  uint1 uVar11;
  xunknown1 xVar12;
  unkuint6 Var13;
  xunknown1 axVar14 [16];
  unkuint6 Var15;
  xunknown1 axVar16 [16];
  bool bVar17;
  int4 iVar18;
  int8 iVar19;
  char *pcVar20;
  xunknown1 *pxVar21;
  uint8 uVar22;
  int8 iVar23;
  xunknown1 *pxVar24;
  int8 iVar25;
  xunknown1 axVar26 [16];
  xunknown1 axVar27 [16];
  xunknown8 xStack_60;
  xunknown8 xStack_58;
  xunknown8 xStack_50;
  xunknown2 xStack_48;
  unkbyte6 Stack_46;
  xunknown2 xStack_40;
  xunknown8 xStack_3e;
  xunknown8 xStack_30;
  xunknown8 xStack_28;
  
  if (0x1f < *(uint8 *)(param_1 + 0x18)) {
    pcVar20 = *(char **)(param_1 + 0x10);
    uVar2 = pcVar20[2];
    uVar3 = pcVar20[4];
    uVar4 = pcVar20[3];
    uVar5 = pcVar20[0x12];
    uVar6 = pcVar20[0x13];
    uVar7 = pcVar20[10];
    uVar8 = pcVar20[0x15];
    uVar9 = pcVar20[0x14];
    uVar10 = pcVar20[0x1a];
    uVar11 = pcVar20[0x1b];
    Var15 = (unkuint6)
            CONCAT14(-(uVar10 - 0x3a < 0xfffffff6),
                     -(uint4)((CONCAT12(uVar10,(uint2)(uint1)pcVar20[0x18]) & 0xffff) - 0x3a <
                             0xfffffff6)) & 0xffff0000ffff;
    Var13 = (unkuint6)
            CONCAT14(-(uVar7 - 0x3a < 0xfffffff6),
                     -(uint4)((CONCAT12(uVar7,(uint2)(uint1)pcVar20[8]) & 0xffff) - 0x3a <
                             0xfffffff6)) & 0xffff0000ffff;
    axVar26[1] = -(uVar4 - 0x3a < 0xfffffff6);
    axVar26[0] = -((CONCAT12(uVar4,(uint2)(uint1)pcVar20[1]) & 0xffff) - 0x3a < 0xfffffff6);
    axVar26[2] = -((uint1)pcVar20[5] - 0x3a < 0xfffffff6);
    axVar26[3] = -((uint1)pcVar20[7] - 0x3a < 0xfffffff6);
    axVar26[4] = -((uint1)pcVar20[9] - 0x3a < 0xfffffff6);
    axVar26[5] = -((uint1)pcVar20[0xb] - 0x3a < 0xfffffff6);
    axVar26[6] = -((uint1)pcVar20[0xd] - 0x3a < 0xfffffff6);
    axVar26[7] = -((uint1)pcVar20[0xf] - 0x3a < 0xfffffff6);
    axVar26[8] = -((CONCAT12(uVar8,CONCAT11(uVar6,pcVar20[0x11])) & 0xff) - 0x3a < 0xfffffff6);
    axVar26[9] = -(uVar6 - 0x3a < 0xfffffff6);
    axVar26[10] = -(uVar8 - 0x3a < 0xfffffff6);
    axVar26[0xb] = -((uint1)pcVar20[0x17] - 0x3a < 0xfffffff6);
    axVar26[0xc] = -((CONCAT12(uVar11,(uint2)(uint1)pcVar20[0x19]) & 0xffff) - 0x3a < 0xfffffff6);
    axVar26[0xd] = -(uVar11 - 0x3a < 0xfffffff6);
    axVar26[0xe] = -((uint1)pcVar20[0x1d] - 0x3a < 0xfffffff6);
    axVar26[0xf] = -((uint1)pcVar20[0x1f] - 0x3a < 0xfffffff6);
    axVar14[8] = 0xd0;
    axVar14._0_8_ = 0xd0d0d0d0d0d0d0d0;
    axVar14[9] = 0xd0;
    axVar14[10] = 0xd0;
    axVar14[0xb] = 0xd0;
    axVar14[0xc] = 0xd0;
    axVar14[0xd] = 0xd0;
    axVar14[0xe] = 0xd0;
    axVar14[0xf] = 0xd0;
    axVar16[8] = 0xa9;
    axVar16._0_8_ = 0xa9a9a9a9a9a9a9a9;
    axVar16[9] = 0xa9;
    axVar16[10] = 0xa9;
    axVar16[0xb] = 0xa9;
    axVar16[0xc] = 0xa9;
    axVar16[0xd] = 0xa9;
    axVar16[0xe] = 0xa9;
    axVar16[0xf] = 0xa9;
    axVar27[8] = 0xd0;
    axVar27._0_8_ = 0xd0d0d0d0d0d0d0d0;
    axVar27[9] = 0xd0;
    axVar27[10] = 0xd0;
    axVar27[0xb] = 0xd0;
    axVar27[0xc] = 0xd0;
    axVar27[0xd] = 0xd0;
    axVar27[0xe] = 0xd0;
    axVar27[0xf] = 0xd0;
    axVar27 = axVar27 ^ (axVar14 ^ axVar16) & axVar26;
    pxVar24 = (xunknown1 *)((uint8)&xStack_30 | 1);
    xStack_30 = CONCAT17(axVar27[7] + pcVar20[0xf] +
                         ((-((uint1)pcVar20[0xe] - 0x3a < 0xfffffff6) & 9U) + pcVar20[0xe]) * '\x10'
                         ,CONCAT16(axVar27[6] + pcVar20[0xd] +
                                   ((-((uint1)pcVar20[0xc] - 0x3a < 0xfffffff6) & 9U) + pcVar20[0xc]
                                   ) * '\x10',
                                   CONCAT15(axVar27[5] + pcVar20[0xb] +
                                            (((uint1)(Var13 >> 0x20) & 9) + uVar7) * '\x10',
                                            CONCAT14(axVar27[4] + pcVar20[9] +
                                                     (((uint1)Var13 & 9) + pcVar20[8]) * '\x10',
                                                     CONCAT13(axVar27[3] + pcVar20[7] +
                                                              ((-((uint1)pcVar20[6] - 0x3a <
                                                                 0xfffffff6) & 9U) + pcVar20[6]) *
                                                              '\x10',CONCAT12(axVar27[2] +
                                                                              pcVar20[5] +
                                                                              ((-(uVar3 - 0x3a <
                                                                                 0xfffffff6) & 9U) +
                                                                              uVar3) * '\x10',
                                                                              CONCAT11(axVar27[1] +
                                                                                       uVar4 + ((-(
                                                  uVar2 - 0x3a < 0xfffffff6) & 9U) + uVar2) * '\x10'
                                                  ,axVar27[0] + pcVar20[1] +
                                                   ((-((CONCAT12(uVar3,CONCAT11(uVar2,*pcVar20)) &
                                                       0xff) - 0x3a < 0xfffffff6) & 9U) + *pcVar20)
                                                   * '\x10')))))));
    xStack_28 = CONCAT17(axVar27[0xf] + pcVar20[0x1f] +
                         ((-((uint1)pcVar20[0x1e] - 0x3a < 0xfffffff6) & 9U) + pcVar20[0x1e]) *
                         '\x10',CONCAT16(axVar27[0xe] + pcVar20[0x1d] +
                                         ((-((uint1)pcVar20[0x1c] - 0x3a < 0xfffffff6) & 9U) +
                                         pcVar20[0x1c]) * '\x10',
                                         CONCAT15(axVar27[0xd] + uVar11 +
                                                  (((uint1)(Var15 >> 0x20) & 9) + uVar10) * '\x10',
                                                  CONCAT14(axVar27[0xc] + pcVar20[0x19] +
                                                           (((uint1)Var15 & 9) + pcVar20[0x18]) *
                                                           '\x10',CONCAT13(axVar27[0xb] +
                                                                           pcVar20[0x17] +
                                                                           ((-((uint1)pcVar20[0x16]
                                                                               - 0x3a < 0xfffffff6)
                                                                            & 9U) + pcVar20[0x16]) *
                                                                           '\x10',CONCAT12(axVar27[
                                                  10] + uVar8 +
                                                  ((-(uVar9 - 0x3a < 0xfffffff6) & 9U) + uVar9) *
                                                  '\x10',CONCAT11(axVar27[9] + uVar6 +
                                                                  ((-(uVar5 - 0x3a < 0xfffffff6) &
                                                                   9U) + uVar5) * '\x10',
                                                                  axVar27[8] + pcVar20[0x11] +
                                                                  ((-((CONCAT12(uVar9,CONCAT11(uVar5
                                                  ,pcVar20[0x10])) & 0xff) - 0x3a < 0xfffffff6) & 9U
                                                  ) + pcVar20[0x10]) * '\x10')))))));
    pxVar21 = (xunknown1 *)((uint8)&xStack_30 | 0xf);
    do {
      xVar12 = pxVar24[-1];
      pxVar24[-1] = *pxVar21;
      *pxVar21 = xVar12;
      bVar17 = pxVar24 < pxVar21 + -1;
      pxVar24 = pxVar24 + 1;
      pxVar21 = pxVar21 + -1;
    } while (bVar17);
    xStack_3e = 0;
    xStack_40 = 0;
    xStack_58 = 0;
    xStack_60 = 0;
    xStack_48 = 0;
    Stack_46 = 0;
    xStack_50 = 0;
    iVar18 = snprintf(xStack_30,&xStack_60,0x2a,0x38f3b /* "%LaL" */);
    if (iVar18 != 0) {
      iVar23 = param_2[1];
      iVar25 = (int8)iVar18;
      iVar19 = *param_2;
      if ((uint8)param_2[2] < (uint8)(iVar23 + iVar25)) {
        uVar22 = param_2[2] * 2;
        uVar1 = iVar23 + iVar25 + 0x3e0;
        if (uVar22 <= uVar1) {
          uVar22 = uVar1;
        }
        param_2[2] = uVar22;
        iVar19 = realloc();
        *param_2 = iVar19;
        if (iVar19 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*got_abort)();
          return;
        }
        iVar23 = param_2[1];
      }
      memcpy(iVar19 + iVar23,&xStack_60,iVar25);
      param_2[1] = param_2[1] + iVar25;
    }
  }
  return;
}

/* 0xb8464  size=8 */
void FUN_000b8464(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb846c  size=268 */
void FUN_000b846c(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 2U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e2U) {
      uVar3 = iVar2 + 0x3e2U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc(iVar1);
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
  }
  *(xunknown2 *)(iVar1 + iVar2) = 0x3c22;
  piVar4 = *(int8 **)(param_1 + 0x10);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 2;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 2U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e2U) {
      uVar3 = iVar2 + 0x3e2U;
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
  *(xunknown2 *)(iVar1 + iVar2) = 0x223e;
  param_2[1] = param_2[1] + 2;
  return;
}

/* 0xb8578  size=8 */
void FUN_000b8578(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb8580  size=296 */
void FUN_000b8580(int8 *param_1,int8 param_2)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  int8 *piVar4;
  xunknown8 *pxVar5;
  
  iVar1 = *(int8 *)(param_2 + 0x298);
  iVar2 = *(int8 *)(param_2 + 0x2a0);
  *param_1 = param_2;
  piVar4 = param_1 + 5;
  param_1[6] = 0;
  *piVar4 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  pxVar5 = *(xunknown8 **)(param_2 + 0x2a0);
  pxVar3 = *(xunknown8 **)(param_2 + 0x2a8);
  param_1[1] = iVar2 - iVar1 >> 3;
  param_1[2] = (int8)piVar4;
  param_1[3] = (int8)piVar4;
  param_1[4] = (int8)(param_1 + 0xd);
  if (pxVar5 == pxVar3) {
    pxVar3 = *(xunknown8 **)(param_2 + 0x298);
    iVar1 = (int8)pxVar5 - (int8)pxVar3;
    if (pxVar3 == (xunknown8 *)(param_2 + 0x2b0)) {
      iVar2 = malloc(iVar1 * 2);
      if (iVar2 == 0) goto code_r0x000ca7b0;
      if (pxVar5 != pxVar3) {
        memmove(iVar2,pxVar3,iVar1);
      }
      *(int8 *)(param_2 + 0x298) = iVar2;
    }
    else {
      iVar2 = realloc(pxVar3);
      *(int8 *)(param_2 + 0x298) = iVar2;
      if (iVar2 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
    }
    pxVar5 = (xunknown8 *)(iVar2 + iVar1);
    *(xunknown8 **)(param_2 + 0x2a0) = pxVar5;
    *(int8 *)(param_2 + 0x2a8) = iVar2 + (iVar1 >> 2) * 8;
  }
  *(xunknown8 **)(param_2 + 0x2a0) = pxVar5 + 1;
  *pxVar5 = param_1 + 2;
  return;
}

/* 0xb86a8  size=1280 */
xunknown8 *
FUN_000b86a8(int8 *param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,xunknown8 *param_5,
            xunknown8 *param_6)

{
  int2 *piVar1;
  uint2 uVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  xunknown8 xVar5;
  int8 iVar6;
  int8 iVar7;
  int8 *piVar8;
  xunknown8 *pxVar9;
  char *pcVar10;
  int8 iVar11;
  xunknown1 xVar12;
  char *pcVar13;
  xunknown8 xVar14;
  int8 unaff_x23;
  int8 *piVar15;
  xunknown8 xVar16;
  xunknown8 xVar17;
  xunknown8 xVar18;
  xunknown8 xVar19;
  xunknown8 xVar20;
  xunknown8 xVar21;
  xunknown1 axVar22 [16];
  int8 iStack_d0;
  uint8 uStack_c8;
  xunknown1 *apxStack_c0 [3];
  xunknown1 axStack_a8 [64];
  int8 *piStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  piVar1 = (int2 *)*param_1;
  pxStack_60 = &xStack_58;
  if ((uint8)(param_1[1] - (int8)piVar1) < 2) {
code_r0x000b86e4:
    pxVar3 = (xunknown8 *)0x0;
  }
  else {
    piStack_68 = param_1;
    xStack_58 = param_2;
    if (*piVar1 == 0x7954) {
      *param_1 = (int8)(piVar1 + 1);
      xVar5 = FUN_000b8e54(&piStack_68,0);
      piVar15 = (int8 *)param_1[0x266];
      iVar11 = piVar15[1];
      piVar8 = piVar15;
      if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
        piVar8 = (int8 *)malloc(0x1000);
        if (piVar8 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar3 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar3;
        }
        iVar11 = 0;
        *piVar8 = (int8)piVar15;
        piVar8[1] = 0;
        param_1[0x266] = (int8)piVar8;
      }
      piVar8[1] = iVar11 + 0x20;
      pxVar3 = (xunknown8 *)((int8)piVar8 + iVar11 + 0x10);
      *pxVar3 = 0xd1338;
      uVar2 = *(uint2 *)((int8)piVar8 + iVar11 + 0x19);
      *(xunknown8 *)((int8)piVar8 + iVar11 + 0x20) = xVar5;
      *(xunknown1 *)((int8)piVar8 + iVar11 + 0x18) = 0x23;
    }
    else {
      if (*piVar1 == 0x6b54) {
        *param_1 = (int8)(piVar1 + 1);
        iVar11 = FUN_000ad294(param_1,0);
        if (iVar11 == 0) {
          return (xunknown8 *)0x0;
        }
        iVar4 = FUN_000b8e54(&piStack_68,0);
        piVar15 = (int8 *)param_1[0x266];
        iVar6 = piVar15[1];
        piVar8 = piVar15;
        if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
          piVar8 = (int8 *)malloc(0x1000);
          if (piVar8 == (int8 *)0x0) goto code_r0x000caa00;
          iVar6 = 0;
          *piVar8 = (int8)piVar15;
          piVar8[1] = 0;
          param_1[0x266] = (int8)piVar8;
        }
        iVar7 = (int8)piVar8 + iVar6;
        xVar5 = 0xd13a8;
        piVar8[1] = iVar6 + 0x20;
        xVar12 = 0x24;
      }
      else {
        if (*piVar1 != 0x6e54) {
          if (*piVar1 == 0x7454) {
            *param_1 = (int8)(piVar1 + 1);
            xVar5 = FUN_000b8e54(&piStack_68,2);
            iVar11 = param_1[2];
            iVar4 = param_1[3];
            FUN_000b8580(&iStack_d0,param_1);
            pcVar10 = (char *)*param_1;
            pcVar13 = (char *)param_1[1];
            piVar8 = param_1 + 5;
            do {
              xVar12 = (xunknown1)unaff_x23;
              if ((pcVar10 != pcVar13) && (*pcVar10 == 'E')) {
                iVar6 = 0;
                goto code_r0x000b8a54;
              }
              iVar6 = FUN_000b86a8(param_1,apxStack_c0);
              pxVar3 = (xunknown8 *)0x0;
              if (iVar6 == 0) goto code_r0x000b8adc;
              piVar15 = (int8 *)param_1[3];
              if (piVar15 == (int8 *)param_1[4]) {
                unaff_x23 = (int8)piVar15 - param_1[2];
                if ((int8 *)param_1[2] == piVar8) {
                  iVar7 = malloc(unaff_x23 * 2);
                  if (iVar7 == 0) goto code_r0x000ca7b0;
                  if (piVar15 != piVar8) {
                    memcpy(iVar7,piVar8,unaff_x23);
                  }
                  param_1[2] = iVar7;
                }
                else {
                  iVar7 = realloc();
                  param_1[2] = iVar7;
                  if (iVar7 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    pxVar3 = (xunknown8 *)(*got_abort)();
                    return pxVar3;
                  }
                }
                piVar15 = (int8 *)(iVar7 + unaff_x23);
                param_1[3] = (int8)piVar15;
                param_1[4] = iVar7 + (unaff_x23 >> 2) * 8;
              }
              param_1[3] = (int8)(piVar15 + 1);
              *piVar15 = iVar6;
              pcVar10 = (char *)*param_1;
              pcVar13 = (char *)param_1[1];
            } while ((pcVar10 == pcVar13) || (*pcVar10 != 'Q'));
            xVar12 = *(xunknown1 *)((int8)param_1 + 0x30a);
            *param_1 = (int8)(pcVar10 + 1);
            *(xunknown1 *)((int8)param_1 + 0x30a) = 1;
            iVar6 = FUN_000b0fa8(param_1);
            *(xunknown1 *)((int8)param_1 + 0x30a) = xVar12;
            if ((iVar6 == 0) ||
               ((pcVar10 = (char *)*param_1, pcVar10 == (char *)param_1[1] || (*pcVar10 != 'E')))) {
              pxVar3 = (xunknown8 *)0x0;
            }
            else {
code_r0x000b8a54:
              *param_1 = (int8)(pcVar10 + 1);
              axVar22 = FUN_000adec4(param_1,iVar4 - iVar11 >> 3);
              xVar12 = axVar22[0];
              piVar15 = (int8 *)param_1[0x266];
              iVar11 = piVar15[1];
              piVar8 = piVar15;
              if (iVar11 - 0xfc0U < 0xfffffffffffff00f || iVar11 == -0x31) {
                piVar8 = (int8 *)malloc(0x1000);
                if (piVar8 == (int8 *)0x0) goto code_r0x000caa00;
                iVar11 = 0;
                *piVar8 = (int8)piVar15;
                piVar8[1] = 0;
                param_1[0x266] = (int8)piVar8;
              }
              piVar8[1] = iVar11 + 0x30;
              pxVar3 = (xunknown8 *)((int8)piVar8 + iVar11 + 0x10);
              *pxVar3 = 0xd1488;
              *(xunknown1 *)((int8)piVar8 + iVar11 + 0x18) = 0x26;
              *(xunknown8 *)((int8)piVar8 + iVar11 + 0x20) = xVar5;
              *(xunknown1 (*) [16])((int8)piVar8 + iVar11 + 0x28) = axVar22;
              *(int8 *)((int8)piVar8 + iVar11 + 0x38) = iVar6;
              *(uint2 *)((int8)piVar8 + iVar11 + 0x19) =
                   *(uint2 *)((int8)piVar8 + iVar11 + 0x19) & 0xf000 | 0x500;
            }
code_r0x000b8adc:
            if (uStack_c8 <=
                (uint8)(*(int8 *)(iStack_d0 + 0x2a0) - *(int8 *)(iStack_d0 + 0x298) >> 3)) {
              *(uint8 *)(iStack_d0 + 0x2a0) = *(int8 *)(iStack_d0 + 0x298) + uStack_c8 * 8;
              if (apxStack_c0[0] == axStack_a8) {
                return pxVar3;
              }
              free(apxStack_c0[0]);
              return pxVar3;
            }
            pxVar9 = (xunknown8 *)0x29893;
            pxVar3 = (xunknown8 *)0xa50;
            xVar5 = FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */);
            *(xunknown1 *)((int8)param_1 + 0x30a) = xVar12;
            FUN_000b8c88(&iStack_d0);
            xVar5 = FUN_000c5688(xVar5);
            FUN_000b8c88(&iStack_d0);
            FUN_000c5688(xVar5);
            xVar5 = FUN_0009e4a4();
            FUN_000b8c88(&iStack_d0);
            xVar5 = FUN_000c5688(xVar5);
            FUN_000b8c88(&iStack_d0);
            axVar22 = FUN_000c5688(xVar5);
            piVar15 = *(int8 **)(axVar22._0_8_ + 0x1330);
            iVar11 = piVar15[1];
            piVar8 = piVar15;
            if (iVar11 - 4000U < 0xfffffffffffff00f || iVar11 == -0x51) {
              piVar8 = (int8 *)malloc(0x1000);
              if (piVar8 == (int8 *)0x0) goto code_r0x000caa00;
              iVar11 = 0;
              *piVar8 = (int8)piVar15;
              piVar8[1] = 0;
              *(int8 **)(axVar22._0_8_ + 0x1330) = piVar8;
            }
            xVar5 = *pxVar3;
            piVar8[1] = iVar11 + 0x50;
            xVar17 = axVar22._8_8_[1];
            xVar16 = *axVar22._8_8_;
            xVar19 = pxVar9[1];
            xVar18 = *pxVar9;
            xVar21 = param_6[1];
            xVar20 = *param_6;
            pxVar3 = (xunknown8 *)((int8)piVar8 + iVar11 + 0x10);
            *pxVar3 = 0xd1568;
            xVar14 = *param_5;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x28) = xVar17;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x20) = xVar16;
            *(xunknown1 *)((int8)piVar8 + iVar11 + 0x18) = 0x34;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x30) = xVar5;
            *(uint2 *)((int8)piVar8 + iVar11 + 0x19) =
                 *(uint2 *)((int8)piVar8 + iVar11 + 0x19) & 0xf000 | 0x540;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x40) = xVar19;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x38) = xVar18;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x48) = xVar14;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x58) = xVar21;
            *(xunknown8 *)((int8)piVar8 + iVar11 + 0x50) = xVar20;
            return pxVar3;
          }
          if (*piVar1 == 0x7054) {
            *param_1 = (int8)(piVar1 + 1);
            iStack_d0 = FUN_000b86a8(param_1);
            if (iStack_d0 == 0) {
              return (xunknown8 *)0x0;
            }
            pxVar3 = (xunknown8 *)FUN_000b8fa4(param_1,&iStack_d0);
            return pxVar3;
          }
          goto code_r0x000b86e4;
        }
        *param_1 = (int8)(piVar1 + 1);
        iVar11 = FUN_000b8e54(&piStack_68,1);
        iVar4 = FUN_000abd5c(param_1);
        if (iVar4 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar15 = (int8 *)param_1[0x266];
        iVar6 = piVar15[1];
        piVar8 = piVar15;
        if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
          piVar8 = (int8 *)malloc(0x1000);
          if (piVar8 == (int8 *)0x0) goto code_r0x000caa00;
          iVar6 = 0;
          *piVar8 = (int8)piVar15;
          piVar8[1] = 0;
          param_1[0x266] = (int8)piVar8;
        }
        iVar7 = (int8)piVar8 + iVar6;
        xVar5 = 0xd1418;
        piVar8[1] = iVar6 + 0x20;
        xVar12 = 0x25;
      }
      pxVar3 = (xunknown8 *)(iVar7 + 0x10);
      *pxVar3 = xVar5;
      uVar2 = *(uint2 *)(iVar7 + 0x19);
      *(xunknown1 *)(iVar7 + 0x18) = xVar12;
      *(int8 *)(iVar7 + 0x20) = iVar11;
      *(int8 *)(iVar7 + 0x28) = iVar4;
    }
    *(uint2 *)((int8)pxVar3 + 9) = uVar2 & 0xf000 | 0x500;
  }
  return pxVar3;
}

/* 0xb8ba8  size=224 */
void FUN_000b8ba8(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,
                 xunknown8 *param_5,xunknown8 *param_6)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  xunknown8 xVar9;
  xunknown8 xVar10;
  xunknown8 xVar11;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar5[1];
  piVar1 = piVar5;
  if (iVar2 - 4000U < 0xfffffffffffff00f || iVar2 == -0x51) {
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
  xVar3 = *param_3;
  piVar1[1] = iVar2 + 0x50;
  xVar7 = param_2[1];
  xVar6 = *param_2;
  xVar9 = param_4[1];
  xVar8 = *param_4;
  xVar11 = param_6[1];
  xVar10 = *param_6;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd1568;
  xVar4 = *param_5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar7;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar6;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x34;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x40) = xVar9;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x38) = xVar8;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x48) = xVar4;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x58) = xVar11;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x50) = xVar10;
  return;
}

/* 0xb8c88  size=124 */
void FUN_000b8c88(int8 *param_1)

{
  int8 iVar1;
  int8 *piVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 iVar5;
  uint8 uVar6;
  xunknown8 xVar7;
  xunknown1 axVar8 [16];
  
  iVar5 = *param_1;
  if ((uint8)param_1[1] <= (uint8)(*(int8 *)(iVar5 + 0x2a0) - *(int8 *)(iVar5 + 0x298) >> 3)) {
    piVar2 = (int8 *)param_1[2];
    *(int8 *)(iVar5 + 0x2a0) = *(int8 *)(iVar5 + 0x298) + param_1[1] * 8;
    if (piVar2 == param_1 + 5) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_free)(piVar2);
    return;
  }
  FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0xa50,0x29893);
  axVar8 = FUN_0009e4a4();
  piVar2 = axVar8._8_8_;
  iVar5 = piVar2[1];
  iVar3 = *piVar2;
  if ((uint8)piVar2[2] < iVar5 + 8U) {
    uVar6 = piVar2[2] * 2;
    if (uVar6 <= iVar5 + 1000U) {
      uVar6 = iVar5 + 1000U;
    }
    piVar2[2] = uVar6;
    iVar3 = realloc(iVar3);
    *piVar2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar5 = piVar2[1];
  }
  *(xunknown8 *)(iVar3 + iVar5) = 0x64656d616e6e7527;
  iVar5 = piVar2[1] + 8;
  piVar2[1] = iVar5;
  iVar3 = *(int8 *)(axVar8._0_8_ + 0x18);
  if (iVar3 != 0) {
    xVar7 = *(xunknown8 *)(axVar8._0_8_ + 0x10);
    iVar1 = *piVar2;
    if ((uint8)piVar2[2] < (uint8)(iVar5 + iVar3)) {
      uVar4 = piVar2[2] * 2;
      uVar6 = iVar5 + iVar3 + 0x3e0;
      if (uVar4 <= uVar6) {
        uVar4 = uVar6;
      }
      piVar2[2] = uVar4;
      iVar1 = realloc();
      *piVar2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar5 = piVar2[1];
    }
    memcpy(iVar1 + iVar5,xVar7,iVar3);
    iVar5 = piVar2[1] + iVar3;
    piVar2[1] = iVar5;
  }
  iVar3 = *piVar2;
  if ((uint8)piVar2[2] < iVar5 + 1U) {
    uVar6 = piVar2[2] * 2;
    if (uVar6 <= iVar5 + 0x3e1U) {
      uVar6 = iVar5 + 0x3e1U;
    }
    piVar2[2] = uVar6;
    iVar3 = realloc();
    *piVar2 = iVar3;
    if (iVar3 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar5 = piVar2[1];
  }
  *(xunknown1 *)(iVar3 + iVar5) = 0x27;
  piVar2[1] = piVar2[1] + 1;
  return;
}

/* 0xb8d04  size=328 */
void FUN_000b8d04(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  
  iVar4 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 8U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 1000U) {
      uVar5 = iVar4 + 1000U;
    }
    param_2[2] = uVar5;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown8 *)(iVar2 + iVar4) = 0x64656d616e6e7527;
  iVar4 = param_2[1] + 8;
  param_2[1] = iVar4;
  iVar2 = *(int8 *)(param_1 + 0x18);
  if (iVar2 != 0) {
    xVar6 = *(xunknown8 *)(param_1 + 0x10);
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar2)) {
      uVar3 = param_2[2] * 2;
      uVar5 = iVar4 + iVar2 + 0x3e0;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    memcpy(iVar1 + iVar4,xVar6,iVar2);
    iVar4 = param_2[1] + iVar2;
    param_2[1] = iVar4;
  }
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 1U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 0x3e1U) {
      uVar5 = iVar4 + 0x3e1U;
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
  *(xunknown1 *)(iVar2 + iVar4) = 0x27;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xb8e4c  size=8 */
void FUN_000b8e4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb8e54  size=336 */
void FUN_000b8e54(int8 *param_1,int4 param_2)

{
  int4 iVar1;
  int8 *piVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  xunknown8 *pxVar5;
  int8 *piVar6;
  int8 iVar7;
  int8 *piVar8;
  
  iVar7 = *param_1;
  iVar4 = iVar7 + (int8)param_2 * 4;
  iVar1 = *(int4 *)(iVar4 + 0x318);
  *(int4 *)(iVar4 + 0x318) = iVar1 + 1;
  piVar8 = *(int8 **)(iVar7 + 0x1330);
  iVar4 = piVar8[1];
  piVar2 = piVar8;
  if (iVar4 - 0xfd0U < 0xfffffffffffff00f || iVar4 == -0x21) {
    piVar2 = (int8 *)malloc(0x1000);
    if (piVar2 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar4 = 0;
    *piVar2 = (int8)piVar8;
    piVar2[1] = 0;
    *(int8 **)(iVar7 + 0x1330) = piVar2;
  }
  piVar2[1] = iVar4 + 0x20;
  pxVar3 = (xunknown8 *)((int8)piVar2 + iVar4 + 0x10);
  *pxVar3 = 0xd12c8;
  *(int4 *)((int8)piVar2 + iVar4 + 0x1c) = param_2;
  *(int4 *)((int8)piVar2 + iVar4 + 0x20) = iVar1;
  *(uint2 *)((int8)piVar2 + iVar4 + 0x19) = *(uint2 *)((int8)piVar2 + iVar4 + 0x19) & 0xf000 | 0x540
  ;
  pxVar5 = (xunknown8 *)param_1[1];
  *(xunknown1 *)((int8)piVar2 + iVar4 + 0x18) = 0x21;
  piVar2 = (int8 *)*pxVar5;
  if (piVar2 != (int8 *)0x0) {
    piVar8 = (int8 *)piVar2[1];
    if (piVar8 == (int8 *)piVar2[2]) {
      piVar6 = (int8 *)*piVar2;
      iVar4 = (int8)piVar8 - (int8)piVar6;
      if (piVar6 == piVar2 + 3) {
        iVar7 = malloc(iVar4 * 2);
        if (iVar7 == 0) goto code_r0x000ca7b0;
        if (piVar8 != piVar6) {
          memmove(iVar7,piVar6,iVar4);
        }
        *piVar2 = iVar7;
      }
      else {
        iVar7 = realloc(piVar6);
        *piVar2 = iVar7;
        if (iVar7 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*got_abort)();
          return;
        }
      }
      piVar8 = (int8 *)(iVar7 + iVar4);
      piVar2[2] = iVar7 + (iVar4 >> 2) * 8;
    }
    piVar2[1] = (int8)(piVar8 + 1);
    *piVar8 = (int8)pxVar3;
  }
  return;
}

/* 0xb8fa4  size=160 */
void FUN_000b8fa4(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd14f8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x27;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x500
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xb9044  size=556 */
void FUN_000b9044(int8 param_1,int8 *param_2)

{
  bool bVar1;
  int4 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 iVar6;
  int8 iVar7;
  xunknown2 xVar8;
  uint8 uVar9;
  uint1 uStack_31;
  
  iVar2 = *(int4 *)(param_1 + 0xc);
  if (iVar2 == 2) {
    iVar4 = *param_2;
    iVar7 = param_2[1];
    if ((uint8)param_2[2] < iVar7 + 3U) {
      uVar9 = param_2[2] * 2;
      if (uVar9 <= iVar7 + 0x3e3U) {
        uVar9 = iVar7 + 0x3e3U;
      }
      param_2[2] = uVar9;
      iVar4 = realloc(iVar4);
      *param_2 = iVar4;
      if (iVar4 == 0) goto code_r0x000ca7b0;
      iVar7 = param_2[1];
    }
    *(xunknown1 *)((xunknown2 *)(iVar4 + iVar7) + 1) = 0x54;
    *(xunknown2 *)(iVar4 + iVar7) = 0x5424;
    iVar4 = 3;
code_r0x000b9198:
    param_2[1] = param_2[1] + iVar4;
  }
  else {
    if (iVar2 == 1) {
      iVar4 = *param_2;
      iVar7 = param_2[1];
      if ((uint8)param_2[2] < iVar7 + 2U) {
        uVar9 = param_2[2] * 2;
        if (uVar9 <= iVar7 + 0x3e2U) {
          uVar9 = iVar7 + 0x3e2U;
        }
        param_2[2] = uVar9;
        iVar4 = realloc(iVar4);
        *param_2 = iVar4;
        if (iVar4 == 0) goto code_r0x000ca7b0;
        iVar7 = param_2[1];
      }
      xVar8 = 0x4e24;
code_r0x000b9124:
      *(xunknown2 *)(iVar4 + iVar7) = xVar8;
      iVar4 = 2;
      goto code_r0x000b9198;
    }
    if (iVar2 == 0) {
      iVar4 = *param_2;
      iVar7 = param_2[1];
      if ((uint8)param_2[2] < iVar7 + 2U) {
        uVar9 = param_2[2] * 2;
        if (uVar9 <= iVar7 + 0x3e2U) {
          uVar9 = iVar7 + 0x3e2U;
        }
        param_2[2] = uVar9;
        iVar4 = realloc(iVar4);
        *param_2 = iVar4;
        if (iVar4 == 0) goto code_r0x000ca7b0;
        iVar7 = param_2[1];
      }
      xVar8 = 0x5424;
      goto code_r0x000b9124;
    }
  }
  if (*(int4 *)(param_1 + 0x10) != 0) {
    uVar9 = (uint8)(*(int4 *)(param_1 + 0x10) - 1);
    iVar4 = 0;
    do {
      iVar7 = iVar4;
      iVar4 = iVar7 + -1;
      (&uStack_31)[iVar7] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      bVar1 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar1);
    iVar6 = param_2[1];
    iVar3 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar6 - iVar4)) {
      uVar5 = param_2[2] * 2;
      uVar9 = (iVar6 - iVar4) + 0x3e0;
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      param_2[2] = uVar5;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar6 = param_2[1];
    }
    memcpy(iVar3 + iVar6,&uStack_31 + iVar7,-iVar4);
    param_2[1] = param_2[1] - iVar4;
  }
  return;
}

/* 0xb9270  size=8 */
void FUN_000b9270(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb9278  size=136 */
void FUN_000b9278(xunknown8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 9U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e9U) {
      uVar4 = iVar3 + 0x3e9U;
    }
    param_2[2] = uVar4;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar3 = param_2[1];
  }
  xVar1 = xRam0000000000025c1b;
  *(xunknown1 *)((xunknown8 *)(iVar2 + iVar3) + 1) = 0x20;
  *(xunknown8 *)(iVar2 + iVar3) = xVar1;
  param_2[1] = param_2[1] + 9;
  return;
}

/* 0xb9300  size=104 */
void FUN_000b9300(int8 param_1,xunknown8 param_2)

{
  int8 *piVar1;
  
  piVar1 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar1 + 0x20))(piVar1);
  if ((*(uint2 *)((int8)piVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000b9364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  return;
}

/* 0xb9368  size=8 */
void FUN_000b9368(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb9370  size=172 */
void FUN_000b9370(int8 param_1,int8 *param_2)

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
  if ((uint8)param_2[2] < iVar2 + 1U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar2) = 0x20;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xb941c  size=104 */
void FUN_000b941c(int8 param_1,xunknown8 param_2)

{
  int8 *piVar1;
  
  piVar1 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 0x20))(piVar1);
  if ((*(uint2 *)((int8)piVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000b9480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  return;
}

/* 0xb9484  size=8 */
void FUN_000b9484(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb948c  size=200 */
void FUN_000b948c(int8 param_1,int8 *param_2)

{
  xunknown8 *pxVar1;
  uint8 uVar2;
  int8 iVar3;
  int8 iVar4;
  
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x20))();
  pxVar1 = *(xunknown8 **)(param_1 + 0x18);
  if ((*(uint1 *)((int8)pxVar1 + 9) & 0xc0) == 0x80) {
    uVar2 = (**(code **)*pxVar1)(pxVar1,param_2);
    if ((uVar2 & 1) == 0) {
code_r0x000b94f4:
      iVar4 = param_2[1];
      iVar3 = *param_2;
      if ((uint8)param_2[2] < iVar4 + 1U) {
        uVar2 = param_2[2] * 2;
        if (uVar2 <= iVar4 + 0x3e1U) {
          uVar2 = iVar4 + 0x3e1U;
        }
        param_2[2] = uVar2;
        iVar3 = realloc();
        *param_2 = iVar3;
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*got_abort)();
          return;
        }
        iVar4 = param_2[1];
      }
      *(xunknown1 *)(iVar3 + iVar4) = 0x20;
      param_2[1] = param_2[1] + 1;
      return;
    }
  }
  else if (0x3f < *(uint1 *)((int8)pxVar1 + 9)) goto code_r0x000b94f4;
  return;
}

/* 0xb9554  size=120 */
void FUN_000b9554(int8 param_1,xunknown8 param_2)

{
  int8 *piVar1;
  
  piVar1 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar1 + 0x20))(piVar1);
  if ((*(uint2 *)((int8)piVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000b95c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x28))(*(int8 **)(param_1 + 0x18),param_2);
  return;
}

/* 0xb95cc  size=8 */
void FUN_000b95cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb95d4  size=492 */
void FUN_000b95d4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  xunknown8 xVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  int8 iVar6;
  uint8 uVar7;
  bool bVar8;
  
  iVar5 = param_2[1];
  iVar3 = *param_2;
  iVar1 = param_2[4];
  *(xunknown4 *)(param_2 + 4) = 0;
  if ((uint8)param_2[2] < iVar5 + 9U) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar5 + 0x3e9U) {
      uVar7 = iVar5 + 0x3e9U;
    }
    param_2[2] = uVar7;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
  }
  xVar2 = xRam000000000004045e;
  *(xunknown1 *)((xunknown8 *)(iVar3 + iVar5) + 1) = 0x3c;
  *(xunknown8 *)(iVar3 + iVar5) = xVar2;
  iVar3 = *(int8 *)(param_1 + 0x20);
  iVar5 = param_2[1] + 9;
  param_2[1] = iVar5;
  if (iVar3 != 0) {
    iVar3 = 0;
    bVar8 = true;
    do {
      while( true ) {
        iVar4 = iVar5;
        if (!bVar8) {
          iVar4 = *param_2;
          if ((uint8)param_2[2] < iVar5 + 2U) {
            uVar7 = param_2[2] * 2;
            if (uVar7 <= iVar5 + 0x3e2U) {
              uVar7 = iVar5 + 0x3e2U;
            }
            param_2[2] = uVar7;
            iVar4 = realloc();
            *param_2 = iVar4;
            if (iVar4 == 0) goto code_r0x000ca7b0;
            iVar6 = param_2[1];
          }
          else {
            iVar6 = iVar5;
          }
          *(xunknown2 *)(iVar4 + iVar6) = 0x202c;
          iVar4 = param_2[1] + 2;
          param_2[1] = iVar4;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x18) + iVar3 * 8),param_2,0x12,0);
        iVar6 = param_2[1];
        if (iVar4 == iVar6) break;
        bVar8 = false;
        iVar3 = iVar3 + 1;
        iVar5 = iVar6;
        if (iVar3 == *(int8 *)(param_1 + 0x20)) goto code_r0x000b9720;
      }
      param_2[1] = iVar5;
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int8 *)(param_1 + 0x20));
  }
code_r0x000b9720:
  iVar3 = *param_2;
  if ((uint8)param_2[2] < iVar5 + 0xbU) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar5 + 0x3ebU) {
      uVar7 = iVar5 + 0x3ebU;
    }
    param_2[2] = uVar7;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar5 = param_2[1];
  }
  *(xunknown8 *)(iVar3 + iVar5) = xRam000000000002ebc0;
  *(xunknown4 *)(iVar3 + iVar5 + 7) = 0x20656d61;
  param_2[1] = param_2[1] + 0xb;
  *(int4 *)(param_2 + 4) = (int4)iVar1;
  return;
}

/* 0xb97c0  size=288 */
void FUN_000b97c0(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 *piVar5;
  
  piVar5 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar5 + 0x20))(piVar5);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  }
  if (*(int8 *)(param_1 + 0x28) != 0) {
    iVar3 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar3 + 10U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar3 + 0x3eaU) {
        uVar4 = iVar3 + 0x3eaU;
      }
      param_2[2] = uVar4;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar3 = param_2[1];
    }
    xVar1 = xRam0000000000040abf;
    *(xunknown2 *)((xunknown8 *)(iVar2 + iVar3) + 1) = 0x2073;
    *(xunknown8 *)(iVar2 + iVar3) = xVar1;
    piVar5 = *(int8 **)(param_1 + 0x28);
    iVar3 = *piVar5;
    param_2[1] = param_2[1] + 10;
    (**(code **)(iVar3 + 0x20))(piVar5,param_2);
    if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000b98d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
      return;
    }
  }
  return;
}

/* 0xb98e0  size=8 */
void FUN_000b98e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb98e8  size=144 */
void FUN_000b98e8(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x20))();
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 3U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e3U) {
      uVar3 = iVar2 + 0x3e3U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
  }
  *(xunknown1 *)((xunknown2 *)(iVar1 + iVar2) + 1) = 0x2e;
  *(xunknown2 *)(iVar1 + iVar2) = 0x2e2e;
  param_2[1] = param_2[1] + 3;
  return;
}

/* 0xb9978  size=20 */
void FUN_000b9978(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000b9988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x28))();
  return;
}

/* 0xb998c  size=8 */
void FUN_000b998c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb9994  size=344 */
void FUN_000b9994(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 iVar5;
  int8 iVar6;
  uint8 uVar7;
  int8 *piVar8;
  xunknown8 xVar9;
  bool bVar10;
  
  iVar6 = param_2[1];
  iVar3 = *param_2;
  if ((uint8)param_2[2] < iVar6 + 7U) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar6 + 999U) {
      uVar7 = iVar6 + 999U;
    }
    param_2[2] = uVar7;
    iVar3 = realloc(iVar3);
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar6 = param_2[1];
  }
  *(xunknown4 *)(iVar3 + iVar6 + 3) = 0x6164626d;
  *(xunknown4 *)(iVar3 + iVar6) = 0x6d616c27;
  iVar6 = param_2[1] + 7;
  param_2[1] = iVar6;
  iVar3 = *(int8 *)(param_1 + 0x48);
  if (iVar3 != 0) {
    xVar9 = *(xunknown8 *)(param_1 + 0x40);
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar6 + iVar3)) {
      uVar4 = param_2[2] * 2;
      uVar7 = iVar6 + iVar3 + 0x3e0;
      if (uVar4 <= uVar7) {
        uVar4 = uVar7;
      }
      param_2[2] = uVar4;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    memcpy(iVar1 + iVar6,xVar9,iVar3);
    iVar6 = param_2[1] + iVar3;
    param_2[1] = iVar6;
  }
  iVar3 = *param_2;
  if ((uint8)param_2[2] < iVar6 + 1U) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar6 + 0x3e1U) {
      uVar7 = iVar6 + 0x3e1U;
    }
    param_2[2] = uVar7;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar6 = param_2[1];
  }
  *(xunknown1 *)(iVar3 + iVar6) = 0x27;
  param_2[1] = param_2[1] + 1;
  if (*(int8 *)(param_1 + 0x18) != 0) {
    iVar6 = param_2[1];
    iVar1 = *param_2;
    iVar3 = param_2[4];
    *(xunknown4 *)(param_2 + 4) = 0;
    if ((uint8)param_2[2] < iVar6 + 1U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar6 + 0x3e1U) {
        uVar7 = iVar6 + 0x3e1U;
      }
      param_2[2] = uVar7;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    *(xunknown1 *)(iVar1 + iVar6) = 0x3c;
    iVar1 = *(int8 *)(param_1 + 0x18);
    iVar6 = param_2[1] + 1;
    param_2[1] = iVar6;
    if (iVar1 != 0) {
      iVar1 = 0;
      bVar10 = true;
      do {
        while( true ) {
          iVar2 = iVar6;
          if (!bVar10) {
            iVar2 = *param_2;
            if ((uint8)param_2[2] < iVar6 + 2U) {
              uVar7 = param_2[2] * 2;
              if (uVar7 <= iVar6 + 0x3e2U) {
                uVar7 = iVar6 + 0x3e2U;
              }
              param_2[2] = uVar7;
              iVar2 = realloc();
              *param_2 = iVar2;
              if (iVar2 == 0) goto code_r0x000ca7b0;
              iVar5 = param_2[1];
            }
            else {
              iVar5 = iVar6;
            }
            *(xunknown2 *)(iVar2 + iVar5) = 0x202c;
            iVar2 = param_2[1] + 2;
            param_2[1] = iVar2;
          }
          FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar1 * 8),param_2,0x12,0);
          iVar5 = param_2[1];
          if (iVar2 == iVar5) break;
          bVar10 = false;
          iVar1 = iVar1 + 1;
          iVar6 = iVar5;
          if (iVar1 == *(int8 *)(param_1 + 0x18)) goto code_r0x000b9c34;
        }
        param_2[1] = iVar6;
        iVar1 = iVar1 + 1;
      } while (iVar1 != *(int8 *)(param_1 + 0x18));
    }
code_r0x000b9c34:
    iVar1 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 1U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar6 + 0x3e1U) {
        uVar7 = iVar6 + 0x3e1U;
      }
      param_2[2] = uVar7;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    *(xunknown1 *)(iVar1 + iVar6) = 0x3e;
    *(int4 *)(param_2 + 4) = (int4)iVar3;
    param_2[1] = param_2[1] + 1;
  }
  iVar6 = param_2[1];
  if (*(int8 *)(param_1 + 0x20) != 0) {
    iVar3 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 10U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar6 + 0x3eaU) {
        uVar7 = iVar6 + 0x3eaU;
      }
      param_2[2] = uVar7;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    xVar9 = xRam0000000000040abf;
    *(xunknown2 *)((xunknown8 *)(iVar3 + iVar6) + 1) = 0x2073;
    *(xunknown8 *)(iVar3 + iVar6) = xVar9;
    piVar8 = *(int8 **)(param_1 + 0x20);
    iVar6 = *piVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(iVar6 + 0x20))(piVar8,param_2);
    if ((*(uint2 *)((int8)piVar8 + 9) & 0xc0) != 0x40) {
      (**(code **)(*piVar8 + 0x28))(piVar8,param_2);
    }
    iVar6 = param_2[1];
    iVar3 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 1U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar6 + 0x3e1U) {
        uVar7 = iVar6 + 0x3e1U;
      }
      param_2[2] = uVar7;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    *(xunknown1 *)(iVar3 + iVar6) = 0x20;
    iVar6 = param_2[1] + 1;
    param_2[1] = iVar6;
  }
  uVar7 = iVar6 + 1;
  iVar3 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar7) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar6 + 0x3e1U) {
      uVar7 = iVar6 + 0x3e1U;
    }
    param_2[2] = uVar7;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar6 = param_2[1];
    uVar7 = iVar6 + 1;
  }
  param_2[1] = uVar7;
  *(xunknown1 *)(iVar3 + iVar6) = 0x28;
  iVar6 = param_2[1];
  if (*(int8 *)(param_1 + 0x30) != 0) {
    iVar3 = 0;
    bVar10 = true;
    do {
      while( true ) {
        iVar1 = iVar6;
        if (!bVar10) {
          iVar1 = *param_2;
          if ((uint8)param_2[2] < iVar6 + 2U) {
            uVar7 = param_2[2] * 2;
            if (uVar7 <= iVar6 + 0x3e2U) {
              uVar7 = iVar6 + 0x3e2U;
            }
            param_2[2] = uVar7;
            iVar1 = realloc();
            *param_2 = iVar1;
            if (iVar1 == 0) goto code_r0x000ca7b0;
            iVar2 = param_2[1];
          }
          else {
            iVar2 = iVar6;
          }
          *(xunknown2 *)(iVar1 + iVar2) = 0x202c;
          iVar1 = param_2[1] + 2;
          param_2[1] = iVar1;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x28) + iVar3 * 8),param_2,0x12,0);
        iVar2 = param_2[1];
        if (iVar1 == iVar2) break;
        bVar10 = false;
        iVar3 = iVar3 + 1;
        iVar6 = iVar2;
        if (iVar3 == *(int8 *)(param_1 + 0x30)) goto code_r0x000b9e90;
      }
      param_2[1] = iVar6;
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int8 *)(param_1 + 0x30));
  }
code_r0x000b9e90:
  uVar7 = iVar6 + 1;
  iVar3 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar7) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar6 + 0x3e1U) {
      uVar7 = iVar6 + 0x3e1U;
    }
    param_2[2] = uVar7;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar6 = param_2[1];
    uVar7 = iVar6 + 1;
  }
  param_2[1] = uVar7;
  *(xunknown1 *)(iVar3 + iVar6) = 0x29;
  if (*(int8 *)(param_1 + 0x38) != 0) {
    iVar6 = param_2[1];
    iVar3 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 10U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar6 + 0x3eaU) {
        uVar7 = iVar6 + 0x3eaU;
      }
      param_2[2] = uVar7;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar6 = param_2[1];
    }
    xVar9 = xRam0000000000040abf;
    *(xunknown2 *)((xunknown8 *)(iVar3 + iVar6) + 1) = 0x2073;
    *(xunknown8 *)(iVar3 + iVar6) = xVar9;
    piVar8 = *(int8 **)(param_1 + 0x38);
    iVar6 = *piVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(iVar6 + 0x20))(piVar8,param_2);
    if ((*(uint2 *)((int8)piVar8 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000b9fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar8 + 0x28))(piVar8,param_2);
      return;
    }
  }
  return;
}

/* 0xb9aec  size=8 */
void FUN_000b9aec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb9af4  size=1268 */
void FUN_000b9af4(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  int8 iVar6;
  uint8 uVar7;
  int8 *piVar8;
  bool bVar9;
  
  if (*(int8 *)(param_1 + 0x18) != 0) {
    iVar5 = param_2[1];
    iVar2 = *param_2;
    iVar4 = param_2[4];
    *(xunknown4 *)(param_2 + 4) = 0;
    if ((uint8)param_2[2] < iVar5 + 1U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e1U) {
        uVar7 = iVar5 + 0x3e1U;
      }
      param_2[2] = uVar7;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    *(xunknown1 *)(iVar2 + iVar5) = 0x3c;
    iVar2 = *(int8 *)(param_1 + 0x18);
    iVar5 = param_2[1] + 1;
    param_2[1] = iVar5;
    if (iVar2 != 0) {
      iVar2 = 0;
      bVar9 = true;
      do {
        while( true ) {
          iVar3 = iVar5;
          if (!bVar9) {
            iVar3 = *param_2;
            if ((uint8)param_2[2] < iVar5 + 2U) {
              uVar7 = param_2[2] * 2;
              if (uVar7 <= iVar5 + 0x3e2U) {
                uVar7 = iVar5 + 0x3e2U;
              }
              param_2[2] = uVar7;
              iVar3 = realloc();
              *param_2 = iVar3;
              if (iVar3 == 0) goto code_r0x000ca7b0;
              iVar6 = param_2[1];
            }
            else {
              iVar6 = iVar5;
            }
            *(xunknown2 *)(iVar3 + iVar6) = 0x202c;
            iVar3 = param_2[1] + 2;
            param_2[1] = iVar3;
          }
          FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar2 * 8),param_2,0x12,0);
          iVar6 = param_2[1];
          if (iVar3 == iVar6) break;
          bVar9 = false;
          iVar2 = iVar2 + 1;
          iVar5 = iVar6;
          if (iVar2 == *(int8 *)(param_1 + 0x18)) goto code_r0x000b9c34;
        }
        param_2[1] = iVar5;
        iVar2 = iVar2 + 1;
      } while (iVar2 != *(int8 *)(param_1 + 0x18));
    }
code_r0x000b9c34:
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 1U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e1U) {
        uVar7 = iVar5 + 0x3e1U;
      }
      param_2[2] = uVar7;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    *(xunknown1 *)(iVar2 + iVar5) = 0x3e;
    *(int4 *)(param_2 + 4) = (int4)iVar4;
    param_2[1] = param_2[1] + 1;
  }
  iVar5 = param_2[1];
  if (*(int8 *)(param_1 + 0x20) != 0) {
    iVar4 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 10U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3eaU) {
        uVar7 = iVar5 + 0x3eaU;
      }
      param_2[2] = uVar7;
      iVar4 = realloc();
      *param_2 = iVar4;
      if (iVar4 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    xVar1 = xRam0000000000040abf;
    *(xunknown2 *)((xunknown8 *)(iVar4 + iVar5) + 1) = 0x2073;
    *(xunknown8 *)(iVar4 + iVar5) = xVar1;
    piVar8 = *(int8 **)(param_1 + 0x20);
    iVar5 = *piVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(iVar5 + 0x20))(piVar8,param_2);
    if ((*(uint2 *)((int8)piVar8 + 9) & 0xc0) != 0x40) {
      (**(code **)(*piVar8 + 0x28))(piVar8,param_2);
    }
    iVar5 = param_2[1];
    iVar4 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 1U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e1U) {
        uVar7 = iVar5 + 0x3e1U;
      }
      param_2[2] = uVar7;
      iVar4 = realloc();
      *param_2 = iVar4;
      if (iVar4 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    *(xunknown1 *)(iVar4 + iVar5) = 0x20;
    iVar5 = param_2[1] + 1;
    param_2[1] = iVar5;
  }
  uVar7 = iVar5 + 1;
  iVar4 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar7) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar5 + 0x3e1U) {
      uVar7 = iVar5 + 0x3e1U;
    }
    param_2[2] = uVar7;
    iVar4 = realloc();
    *param_2 = iVar4;
    if (iVar4 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
    uVar7 = iVar5 + 1;
  }
  param_2[1] = uVar7;
  *(xunknown1 *)(iVar4 + iVar5) = 0x28;
  iVar5 = param_2[1];
  if (*(int8 *)(param_1 + 0x30) != 0) {
    iVar4 = 0;
    bVar9 = true;
    do {
      while( true ) {
        iVar2 = iVar5;
        if (!bVar9) {
          iVar2 = *param_2;
          if ((uint8)param_2[2] < iVar5 + 2U) {
            uVar7 = param_2[2] * 2;
            if (uVar7 <= iVar5 + 0x3e2U) {
              uVar7 = iVar5 + 0x3e2U;
            }
            param_2[2] = uVar7;
            iVar2 = realloc();
            *param_2 = iVar2;
            if (iVar2 == 0) goto code_r0x000ca7b0;
            iVar3 = param_2[1];
          }
          else {
            iVar3 = iVar5;
          }
          *(xunknown2 *)(iVar2 + iVar3) = 0x202c;
          iVar2 = param_2[1] + 2;
          param_2[1] = iVar2;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x28) + iVar4 * 8),param_2,0x12,0);
        iVar3 = param_2[1];
        if (iVar2 == iVar3) break;
        bVar9 = false;
        iVar4 = iVar4 + 1;
        iVar5 = iVar3;
        if (iVar4 == *(int8 *)(param_1 + 0x30)) goto code_r0x000b9e90;
      }
      param_2[1] = iVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 != *(int8 *)(param_1 + 0x30));
  }
code_r0x000b9e90:
  uVar7 = iVar5 + 1;
  iVar4 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar7) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar5 + 0x3e1U) {
      uVar7 = iVar5 + 0x3e1U;
    }
    param_2[2] = uVar7;
    iVar4 = realloc();
    *param_2 = iVar4;
    if (iVar4 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
    uVar7 = iVar5 + 1;
  }
  param_2[1] = uVar7;
  *(xunknown1 *)(iVar4 + iVar5) = 0x29;
  if (*(int8 *)(param_1 + 0x38) != 0) {
    iVar5 = param_2[1];
    iVar4 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 10U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3eaU) {
        uVar7 = iVar5 + 0x3eaU;
      }
      param_2[2] = uVar7;
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
    }
    xVar1 = xRam0000000000040abf;
    *(xunknown2 *)((xunknown8 *)(iVar4 + iVar5) + 1) = 0x2073;
    *(xunknown8 *)(iVar4 + iVar5) = xVar1;
    piVar8 = *(int8 **)(param_1 + 0x38);
    iVar5 = *piVar8;
    param_2[1] = param_2[1] + 10;
    (**(code **)(iVar5 + 0x20))(piVar8,param_2);
    if ((*(uint2 *)((int8)piVar8 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000b9fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar8 + 0x28))(piVar8,param_2);
      return;
    }
  }
  return;
}

/* 0xb9fe8  size=252 */
void FUN_000b9fe8(int8 param_1,int8 *param_2)

{
  char cVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 2U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e2U) {
      uVar4 = iVar3 + 0x3e2U;
    }
    param_2[2] = uVar4;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  *(xunknown2 *)(iVar2 + iVar3) = 0x5d5b;
  iVar2 = *(int8 *)(param_1 + 0x10);
  cVar1 = *(char *)(iVar2 + 8);
  iVar3 = param_2[1] + 2;
  param_2[1] = iVar3;
  if (cVar1 == '4') {
    FUN_000b9af4(iVar2,param_2);
    iVar3 = param_2[1];
  }
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 5U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e5U) {
      uVar4 = iVar3 + 0x3e5U;
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
  *(xunknown1 *)((xunknown4 *)(iVar2 + iVar3) + 1) = 0x7d;
  *(xunknown4 *)(iVar2 + iVar3) = 0x2e2e2e7b;
  param_2[1] = param_2[1] + 5;
  return;
}

/* 0xba0e4  size=8 */
void FUN_000ba0e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xba0ec  size=560 */
void FUN_000ba0ec(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 iVar6;
  int8 *piVar7;
  char *pcVar8;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar2 + 0x3e1U) {
      uVar5 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar5 = iVar2 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar2) = 0x28;
  piVar7 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar7 + 0x20))(piVar7,param_2);
  if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar2 + 0x3e1U) {
      uVar5 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar5 = iVar2 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar2) = 0x29;
  pcVar8 = *(char **)(param_1 + 0x18);
  if (*pcVar8 == 'n') {
    iVar2 = param_2[1];
    iVar1 = *param_2;
    uVar5 = iVar2 + 1;
    if ((uint8)param_2[2] < uVar5) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar2 + 0x3e1U) {
        uVar5 = iVar2 + 0x3e1U;
      }
      param_2[2] = uVar5;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar2 = param_2[1];
      uVar5 = iVar2 + 1;
    }
    param_2[1] = uVar5;
    *(xunknown1 *)(iVar1 + iVar2) = 0x2d;
    iVar2 = *(int8 *)(param_1 + 0x20) + -1;
    if (iVar2 == 0) {
      return;
    }
    iVar4 = param_2[1];
    iVar1 = *param_2;
    iVar6 = *(int8 *)(param_1 + 0x18);
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar2)) {
      uVar3 = param_2[2] * 2;
      uVar5 = iVar4 + iVar2 + 0x3e0;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
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
      iVar4 = param_2[1];
    }
    iVar1 = iVar1 + iVar4;
    pcVar8 = (char *)(iVar6 + 1);
  }
  else {
    iVar2 = *(int8 *)(param_1 + 0x20);
    if (iVar2 == 0) {
      return;
    }
    iVar4 = param_2[1];
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar2)) {
      uVar3 = param_2[2] * 2;
      uVar5 = iVar4 + iVar2 + 0x3e0;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    iVar1 = iVar1 + iVar4;
  }
  memcpy(iVar1,pcVar8,iVar2);
  param_2[1] = param_2[1] + iVar2;
  return;
}

/* 0xba31c  size=8 */
void FUN_000ba31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xba324  size=160 */
void FUN_000ba324(int8 param_1,xunknown8 *param_2)

{
  int8 *piVar1;
  int8 iVar2;
  int8 *piVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  
  piVar3 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar3[1];
  piVar1 = piVar3;
  if (iVar2 - 0xfd0U < 0xfffffffffffff00f || iVar2 == -0x21) {
    piVar1 = (int8 *)malloc(0x1000);
    if (piVar1 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar2 = 0;
    *piVar1 = (int8)piVar3;
    piVar1[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar1;
  }
  piVar1[1] = iVar2 + 0x20;
  xVar5 = param_2[1];
  xVar4 = *param_2;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd16b8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x43;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar4;
  return;
}

/* 0xba3c4  size=236 */
void FUN_000ba3c4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  
  iVar4 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 2U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 0x3e2U) {
      uVar5 = iVar4 + 0x3e2U;
    }
    param_2[2] = uVar5;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown2 *)(iVar2 + iVar4) = 0x7066;
  iVar4 = param_2[1] + 2;
  param_2[1] = iVar4;
  iVar2 = *(int8 *)(param_1 + 0x18);
  if (iVar2 != 0) {
    xVar6 = *(xunknown8 *)(param_1 + 0x10);
    iVar1 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar2)) {
      uVar3 = param_2[2] * 2;
      uVar5 = iVar4 + iVar2 + 0x3e0;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
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
      iVar4 = param_2[1];
    }
    memcpy(iVar1 + iVar4,xVar6,iVar2);
    param_2[1] = param_2[1] + iVar2;
  }
  return;
}

/* 0xba4b0  size=8 */
void FUN_000ba4b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xba4b8  size=992 */
void FUN_000ba4b8(int8 param_1,int8 *param_2)

{
  char cVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 uVar6;
  xunknown8 xVar7;
  int8 *piStack_40;
  int8 iStack_38;
  
  iVar4 = param_2[1];
  iVar2 = *param_2;
  uVar6 = iVar4 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  piStack_40 = param_2;
  iStack_38 = param_1;
  if ((uint8)param_2[2] < uVar6) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e1U) {
      uVar6 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar6;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
    uVar6 = iVar4 + 1;
  }
  param_2[1] = uVar6;
  *(xunknown1 *)(iVar2 + iVar4) = 0x28;
  if ((*(char *)(param_1 + 0x30) == '\0') || (*(int8 *)(param_1 + 0x18) != 0)) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_000ba8a0(&piStack_40);
      iVar4 = param_2[1];
      uVar6 = param_2[2];
      iVar2 = *param_2;
      if (uVar6 < iVar4 + 1U) goto code_r0x000ba5a0;
    }
    else {
      FUN_000b5868(*(int8 *)(param_1 + 0x18),param_2,3,1);
      iVar4 = param_2[1];
      uVar6 = param_2[2];
      iVar2 = *param_2;
      if (uVar6 < iVar4 + 1U) {
code_r0x000ba5a0:
        uVar5 = uVar6 * 2;
        if (uVar6 * 2 <= iVar4 + 0x3e1U) {
          uVar5 = iVar4 + 0x3e1U;
        }
        param_2[2] = uVar5;
        iVar2 = realloc();
        *param_2 = iVar2;
        if (iVar2 == 0) goto code_r0x000ca7b0;
        iVar4 = param_2[1];
      }
    }
    *(xunknown1 *)(iVar2 + iVar4) = 0x20;
    iVar4 = param_2[1] + 1;
    param_2[1] = iVar4;
    iVar2 = *(int8 *)(param_1 + 0x28);
    if (iVar2 != 0) {
      xVar7 = *(xunknown8 *)(param_1 + 0x20);
      iVar3 = *param_2;
      if ((uint8)param_2[2] < (uint8)(iVar4 + iVar2)) {
        uVar5 = param_2[2] * 2;
        uVar6 = iVar4 + iVar2 + 0x3e0;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        iVar3 = realloc();
        *param_2 = iVar3;
        if (iVar3 == 0) goto code_r0x000ca7b0;
        iVar4 = param_2[1];
      }
      memcpy(iVar3 + iVar4,xVar7,iVar2);
      iVar4 = param_2[1] + iVar2;
      param_2[1] = iVar4;
    }
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar4 + 1U) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown1 *)(iVar2 + iVar4) = 0x20;
    iVar2 = param_2[1];
    uVar6 = param_2[2];
    iVar4 = iVar2 + 1;
    param_2[1] = iVar4;
    iVar3 = *param_2;
    if (uVar6 < iVar2 + 4U) goto code_r0x000ba694;
  }
  else {
    iVar4 = param_2[1];
    uVar6 = param_2[2];
    iVar3 = *param_2;
    if (uVar6 < iVar4 + 3U) {
code_r0x000ba694:
      uVar5 = uVar6 * 2;
      if (uVar6 * 2 <= iVar4 + 0x3e3U) {
        uVar5 = iVar4 + 0x3e3U;
      }
      param_2[2] = uVar5;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
  }
  *(xunknown1 *)((xunknown2 *)(iVar3 + iVar4) + 1) = 0x2e;
  *(xunknown2 *)(iVar3 + iVar4) = 0x2e2e;
  iVar2 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x30);
  iVar4 = iVar2 + 3;
  param_2[1] = iVar4;
  if ((cVar1 != '\0') || (*(int8 *)(param_1 + 0x18) != 0)) {
    iVar3 = *param_2;
    if ((uint8)param_2[2] < iVar2 + 4U) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar2 + 0x3e4U) {
        uVar6 = iVar2 + 0x3e4U;
      }
      param_2[2] = uVar6;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown1 *)(iVar3 + iVar4) = 0x20;
    iVar4 = param_2[1] + 1;
    param_2[1] = iVar4;
    iVar2 = *(int8 *)(param_1 + 0x28);
    if (iVar2 != 0) {
      xVar7 = *(xunknown8 *)(param_1 + 0x20);
      iVar3 = *param_2;
      if ((uint8)param_2[2] < (uint8)(iVar4 + iVar2)) {
        uVar5 = param_2[2] * 2;
        uVar6 = iVar4 + iVar2 + 0x3e0;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        iVar3 = realloc();
        *param_2 = iVar3;
        if (iVar3 == 0) goto code_r0x000ca7b0;
        iVar4 = param_2[1];
      }
      memcpy(iVar3 + iVar4,xVar7,iVar2);
      iVar4 = param_2[1] + iVar2;
      param_2[1] = iVar4;
    }
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar4 + 1U) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e1U) {
        uVar6 = iVar4 + 0x3e1U;
      }
      param_2[2] = uVar6;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown1 *)(iVar2 + iVar4) = 0x20;
    cVar1 = *(char *)(param_1 + 0x30);
    param_2[1] = param_2[1] + 1;
    if (cVar1 == '\0') {
      FUN_000b5868(*(xunknown8 *)(param_1 + 0x18),param_2,3,1);
    }
    else {
      FUN_000ba8a0(&piStack_40);
    }
  }
  iVar4 = param_2[1];
  iVar2 = *param_2;
  uVar6 = iVar4 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar6) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e1U) {
      uVar6 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar6;
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
    uVar6 = iVar4 + 1;
  }
  param_2[1] = uVar6;
  *(xunknown1 *)(iVar2 + iVar4) = 0x29;
  return;
}

/* 0xba898  size=8 */
void FUN_000ba898(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xba8a0  size=288 */
void FUN_000ba8a0(xunknown8 *param_1)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  int8 iVar5;
  xunknown8 xStack_48;
  xunknown1 xStack_40;
  xunknown2 xStack_3f;
  xunknown8 xStack_38;
  
  piVar4 = (int8 *)*param_1;
  iVar5 = param_1[1];
  iVar2 = piVar4[1];
  iVar1 = *piVar4;
  uVar3 = iVar2 + 1;
  *(int4 *)(piVar4 + 4) = (int4)piVar4[4] + 1;
  if ((uint8)piVar4[2] < uVar3) {
    uVar3 = piVar4[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    piVar4[2] = uVar3;
    iVar1 = realloc();
    *piVar4 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = piVar4[1];
    uVar3 = iVar2 + 1;
  }
  piVar4[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x28;
  xStack_38 = *(xunknown8 *)(iVar5 + 0x10);
  xStack_40 = 0x2a;
  xStack_3f = 0x540;
  xStack_48 = 0xd1798;
  FUN_000ba9c0(&xStack_48,*param_1);
  piVar4 = (int8 *)*param_1;
  iVar2 = piVar4[1];
  iVar1 = *piVar4;
  uVar3 = iVar2 + 1;
  *(int4 *)(piVar4 + 4) = (int4)piVar4[4] + -1;
  if ((uint8)piVar4[2] < uVar3) {
    uVar3 = piVar4[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    piVar4[2] = uVar3;
    iVar1 = realloc();
    *piVar4 = iVar1;
    if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = piVar4[1];
    uVar3 = iVar2 + 1;
  }
  piVar4[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x29;
  return;
}

/* 0xba9c0  size=448 */
void FUN_000ba9c0(int8 param_1,int8 *param_2)

{
  xunknown4 xVar1;
  uint4 uVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 *piVar6;
  uint4 uVar7;
  int8 iVar8;
  
  piVar6 = *(int8 **)(param_1 + 0x10);
  iVar8 = param_2[1];
  iVar3 = param_2[3];
  xVar1 = *(xunknown4 *)((int8)param_2 + 0x1c);
  iVar4 = *piVar6;
  param_2[3] = -1;
  (**(code **)(iVar4 + 0x20))(piVar6);
  if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  }
  uVar2 = *(uint4 *)((int8)param_2 + 0x1c);
  if (uVar2 == 0xffffffff) {
    iVar8 = param_2[1];
    iVar4 = *param_2;
    if ((uint8)param_2[2] < iVar8 + 3U) {
      uVar5 = param_2[2] * 2;
      if (uVar5 <= iVar8 + 0x3e3U) {
        uVar5 = iVar8 + 0x3e3U;
      }
      param_2[2] = uVar5;
      iVar4 = realloc();
      *param_2 = iVar4;
      if (iVar4 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar8 = param_2[1];
    }
    *(xunknown1 *)((xunknown2 *)(iVar4 + iVar8) + 1) = 0x2e;
    *(xunknown2 *)(iVar4 + iVar8) = 0x2e2e;
    iVar8 = param_2[1] + 3;
  }
  else if (uVar2 != 0) {
    if (1 < uVar2) {
      uVar7 = 1;
      do {
        iVar8 = param_2[1];
        iVar4 = *param_2;
        if ((uint8)param_2[2] < iVar8 + 2U) {
          uVar5 = param_2[2] * 2;
          if (uVar5 <= iVar8 + 0x3e2U) {
            uVar5 = iVar8 + 0x3e2U;
          }
          param_2[2] = uVar5;
          iVar4 = realloc();
          *param_2 = iVar4;
          if (iVar4 == 0) goto code_r0x000ca7b0;
          iVar8 = param_2[1];
        }
        *(xunknown2 *)(iVar4 + iVar8) = 0x202c;
        piVar6 = *(int8 **)(param_1 + 0x10);
        *(uint4 *)(param_2 + 3) = uVar7;
        iVar8 = *piVar6;
        param_2[1] = param_2[1] + 2;
        (**(code **)(iVar8 + 0x20))(piVar6,param_2);
        if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40) {
          (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    goto code_r0x000bab40;
  }
  param_2[1] = iVar8;
code_r0x000bab40:
  *(int4 *)(param_2 + 3) = (int4)iVar3;
  *(xunknown4 *)((int8)param_2 + 0x1c) = xVar1;
  return;
}

/* 0xbab80  size=8 */
void FUN_000bab80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbab88  size=580 */
void FUN_000bab88(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 *piVar5;
  
  iVar3 = param_2[1];
  uVar1 = param_2[2];
  iVar2 = *param_2;
  uVar4 = iVar3 + 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (uVar1 < uVar4) {
      uVar4 = uVar1 * 2;
      if (uVar1 * 2 <= iVar3 + 0x3e1U) {
        uVar4 = iVar3 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar4 = iVar3 + 1;
    }
    param_2[1] = uVar4;
    *(xunknown1 *)(iVar2 + iVar3) = 0x2e;
    piVar5 = *(int8 **)(param_1 + 0x10);
    (**(code **)(*piVar5 + 0x20))(piVar5,param_2);
    if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
    }
  }
  else {
    if (uVar1 < uVar4) {
      uVar4 = uVar1 * 2;
      if (uVar1 * 2 <= iVar3 + 0x3e1U) {
        uVar4 = iVar3 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar4 = iVar3 + 1;
    }
    param_2[1] = uVar4;
    *(xunknown1 *)(iVar2 + iVar3) = 0x5b;
    piVar5 = *(int8 **)(param_1 + 0x10);
    (**(code **)(*piVar5 + 0x20))(piVar5,param_2);
    if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
    }
    iVar3 = param_2[1];
    iVar2 = *param_2;
    uVar4 = iVar3 + 1;
    if ((uint8)param_2[2] < uVar4) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar3 + 0x3e1U) {
        uVar4 = iVar3 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar4 = iVar3 + 1;
    }
    param_2[1] = uVar4;
    *(xunknown1 *)(iVar2 + iVar3) = 0x5d;
  }
  piVar5 = *(int8 **)(param_1 + 0x18);
  if (1 < *(uint1 *)(piVar5 + 1) - 0x51) {
    iVar3 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar3 + 3U) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar3 + 0x3e3U) {
        uVar4 = iVar3 + 0x3e3U;
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
    *(xunknown1 *)((xunknown2 *)(iVar2 + iVar3) + 1) = 0x20;
    *(xunknown2 *)(iVar2 + iVar3) = 0x3d20;
    piVar5 = *(int8 **)(param_1 + 0x18);
    param_2[1] = param_2[1] + 3;
  }
  (**(code **)(*piVar5 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000badb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  return;
}

/* 0xbadcc  size=8 */
void FUN_000badcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbadd4  size=612 */
void FUN_000badd4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  if ((uint8)param_2[2] < uVar3) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc(iVar1);
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x5b;
  piVar4 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar4 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 5U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e5U) {
      uVar3 = iVar2 + 0x3e5U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
  }
  *(xunknown1 *)((xunknown4 *)(iVar1 + iVar2) + 1) = 0x20;
  *(xunknown4 *)(iVar1 + iVar2) = 0x2e2e2e20;
  piVar4 = *(int8 **)(param_1 + 0x18);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 5;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  if ((uint8)param_2[2] < uVar3) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x5d;
  piVar4 = *(int8 **)(param_1 + 0x20);
  if (1 < *(uint1 *)(piVar4 + 1) - 0x51) {
    iVar2 = param_2[1];
    iVar1 = *param_2;
    if ((uint8)param_2[2] < iVar2 + 3U) {
      uVar3 = param_2[2] * 2;
      if (uVar3 <= iVar2 + 0x3e3U) {
        uVar3 = iVar2 + 0x3e3U;
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
    *(xunknown1 *)((xunknown2 *)(iVar1 + iVar2) + 1) = 0x20;
    *(xunknown2 *)(iVar1 + iVar2) = 0x3d20;
    piVar4 = *(int8 **)(param_1 + 0x20);
    param_2[1] = param_2[1] + 3;
  }
  (**(code **)(*piVar4 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bb024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbb038  size=8 */
void FUN_000bb038(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbb040  size=480 */
void FUN_000bb040(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 *piVar6;
  bool bVar7;
  
  piVar6 = *(int8 **)(param_1 + 0x10);
  if ((piVar6 != (int8 *)0x0) &&
     ((**(code **)(*piVar6 + 0x20))(piVar6,param_2), (*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40))
  {
    (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  }
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar3 + 1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x7b;
  iVar3 = param_2[1];
  if (*(int8 *)(param_1 + 0x20) != 0) {
    iVar1 = 0;
    bVar7 = true;
    do {
      while( true ) {
        iVar2 = iVar3;
        if (!bVar7) {
          iVar2 = *param_2;
          if ((uint8)param_2[2] < iVar3 + 2U) {
            uVar5 = param_2[2] * 2;
            if (uVar5 <= iVar3 + 0x3e2U) {
              uVar5 = iVar3 + 0x3e2U;
            }
            param_2[2] = uVar5;
            iVar2 = realloc();
            *param_2 = iVar2;
            if (iVar2 == 0) goto code_r0x000ca7b0;
            iVar4 = param_2[1];
          }
          else {
            iVar4 = iVar3;
          }
          *(xunknown2 *)(iVar2 + iVar4) = 0x202c;
          iVar2 = param_2[1] + 2;
          param_2[1] = iVar2;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x18) + iVar1 * 8),param_2,0x12,0);
        iVar4 = param_2[1];
        if (iVar2 == iVar4) break;
        bVar7 = false;
        iVar1 = iVar1 + 1;
        iVar3 = iVar4;
        if (iVar1 == *(int8 *)(param_1 + 0x20)) goto code_r0x000bb1b0;
      }
      param_2[1] = iVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int8 *)(param_1 + 0x20));
  }
code_r0x000bb1b0:
  uVar5 = iVar3 + 1;
  iVar1 = *param_2;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar3 = param_2[1];
    uVar5 = iVar3 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar3) = 0x7d;
  return;
}

/* 0xbb220  size=8 */
void FUN_000bb220(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbb228  size=520 */
void FUN_000bb228(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar3) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x28;
  piVar4 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar4 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar3) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x29;
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar3) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x28;
  piVar4 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar4 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar3 = iVar2 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar3) {
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
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x29;
  return;
}

/* 0xbb430  size=8 */
void FUN_000bb430(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbb438  size=740 */
void FUN_000bb438(int8 param_1,int8 *param_2)

{
  char cVar1;
  xunknown8 xVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  uint8 uVar6;
  int8 *piVar7;
  
  iVar5 = param_2[1];
  iVar4 = *param_2;
  if ((uint8)param_2[2] < iVar5 + 1U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar5 + 0x3e1U) {
      uVar6 = iVar5 + 0x3e1U;
    }
    param_2[2] = uVar6;
    iVar4 = realloc(iVar4);
    *param_2 = iVar4;
    if (iVar4 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
  }
  *(xunknown1 *)(iVar4 + iVar5) = 0x20;
  iVar4 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x18);
  iVar5 = iVar4 + 1;
  param_2[1] = iVar5;
  if ((cVar1 != '\0') || (*(int8 *)(param_1 + 0x20) != 0)) {
    uVar6 = iVar4 + 2;
    iVar3 = *param_2;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
    if ((uint8)param_2[2] < uVar6) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar4 + 0x3e2U) {
        uVar6 = iVar4 + 0x3e2U;
      }
      param_2[2] = uVar6;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
      uVar6 = iVar5 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar3 + iVar5) = 0x7b;
  }
  piVar7 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar7 + 0x20))(piVar7,param_2);
  if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
  }
  if ((*(char *)(param_1 + 0x18) != '\0') || (*(int8 *)(param_1 + 0x20) != 0)) {
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
      if (iVar4 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
      uVar6 = iVar5 + 1;
    }
    param_2[1] = uVar6;
    *(xunknown1 *)(iVar4 + iVar5) = 0x7d;
    if (*(char *)(param_1 + 0x18) != '\0') {
      iVar5 = param_2[1];
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
      xVar2 = xRam0000000000030d55;
      *(xunknown1 *)((xunknown8 *)(iVar4 + iVar5) + 1) = 0x74;
      *(xunknown8 *)(iVar4 + iVar5) = xVar2;
      param_2[1] = param_2[1] + 9;
    }
    if (*(int8 *)(param_1 + 0x20) != 0) {
      iVar5 = param_2[1];
      iVar4 = *param_2;
      if ((uint8)param_2[2] < iVar5 + 4U) {
        uVar6 = param_2[2] * 2;
        if (uVar6 <= iVar5 + 0x3e4U) {
          uVar6 = iVar5 + 0x3e4U;
        }
        param_2[2] = uVar6;
        iVar4 = realloc();
        *param_2 = iVar4;
        if (iVar4 == 0) goto code_r0x000ca7b0;
        iVar5 = param_2[1];
      }
      *(xunknown4 *)(iVar4 + iVar5) = 0x203e2d20;
      piVar7 = *(int8 **)(param_1 + 0x20);
      iVar5 = *piVar7;
      param_2[1] = param_2[1] + 4;
      (**(code **)(iVar5 + 0x20))(piVar7,param_2);
      if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
      }
    }
  }
  iVar5 = param_2[1];
  iVar4 = *param_2;
  uVar6 = iVar5 + 1;
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
  *(xunknown1 *)(iVar4 + iVar5) = 0x3b;
  return;
}

/* 0xbb71c  size=8 */
void FUN_000bb71c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbb724  size=284 */
void FUN_000bb724(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 *piVar5;
  
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 10U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3eaU) {
      uVar4 = iVar3 + 0x3eaU;
    }
    param_2[2] = uVar4;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  xVar1 = xRam000000000003a113;
  *(xunknown2 *)((xunknown8 *)(iVar2 + iVar3) + 1) = 0x2065;
  *(xunknown8 *)(iVar2 + iVar3) = xVar1;
  piVar5 = *(int8 **)(param_1 + 0x10);
  iVar3 = *piVar5;
  param_2[1] = param_2[1] + 10;
  (**(code **)(iVar3 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  }
  iVar3 = param_2[1];
  iVar2 = *param_2;
  uVar4 = iVar3 + 1;
  if ((uint8)param_2[2] < uVar4) {
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
    uVar4 = iVar3 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar2 + iVar3) = 0x3b;
  return;
}

/* 0xbb840  size=8 */
void FUN_000bb840(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbb848  size=284 */
void FUN_000bb848(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 *piVar5;
  
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 10U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3eaU) {
      uVar4 = iVar3 + 0x3eaU;
    }
    param_2[2] = uVar4;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  xVar1 = xRam0000000000040abf;
  *(xunknown2 *)((xunknown8 *)(iVar2 + iVar3) + 1) = 0x2073;
  *(xunknown8 *)(iVar2 + iVar3) = xVar1;
  piVar5 = *(int8 **)(param_1 + 0x10);
  iVar3 = *piVar5;
  param_2[1] = param_2[1] + 10;
  (**(code **)(iVar3 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  }
  iVar3 = param_2[1];
  iVar2 = *param_2;
  uVar4 = iVar3 + 1;
  if ((uint8)param_2[2] < uVar4) {
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
    uVar4 = iVar3 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar2 + iVar3) = 0x3b;
  return;
}

/* 0xbb964  size=8 */
void FUN_000bb964(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbb96c  size=1052 */
void FUN_000bb96c(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 iVar5;
  int8 *piVar6;
  xunknown8 *pxVar7;
  bool bVar8;
  
  iVar3 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 8U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 1000U) {
      uVar4 = iVar3 + 1000U;
    }
    param_2[2] = uVar4;
    iVar1 = realloc(iVar1);
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  *(xunknown8 *)(iVar1 + iVar3) = 0x7365726975716572;
  iVar1 = param_2[1];
  iVar5 = *(int8 *)(param_1 + 0x18);
  iVar3 = iVar1 + 8;
  param_2[1] = iVar3;
  if (iVar5 != 0) {
    uVar4 = iVar1 + 9;
    iVar5 = *param_2;
    if ((uint8)param_2[2] < uVar4) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar1 + 0x3e9U) {
        uVar4 = iVar1 + 0x3e9U;
      }
      param_2[2] = uVar4;
      iVar5 = realloc();
      *param_2 = iVar5;
      if (iVar5 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar4 = iVar3 + 1;
    }
    param_2[1] = uVar4;
    *(xunknown1 *)(iVar5 + iVar3) = 0x20;
    iVar3 = param_2[1];
    iVar1 = *param_2;
    uVar4 = iVar3 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
    if ((uint8)param_2[2] < uVar4) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar3 + 0x3e1U) {
        uVar4 = iVar3 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar4 = iVar3 + 1;
    }
    param_2[1] = uVar4;
    *(xunknown1 *)(iVar1 + iVar3) = 0x28;
    iVar3 = param_2[1];
    if (*(int8 *)(param_1 + 0x18) != 0) {
      iVar1 = 0;
      bVar8 = true;
      do {
        while( true ) {
          iVar5 = iVar3;
          if (!bVar8) {
            iVar5 = *param_2;
            if ((uint8)param_2[2] < iVar3 + 2U) {
              uVar4 = param_2[2] * 2;
              if (uVar4 <= iVar3 + 0x3e2U) {
                uVar4 = iVar3 + 0x3e2U;
              }
              param_2[2] = uVar4;
              iVar5 = realloc();
              *param_2 = iVar5;
              if (iVar5 == 0) goto code_r0x000ca7b0;
              iVar2 = param_2[1];
            }
            else {
              iVar2 = iVar3;
            }
            *(xunknown2 *)(iVar5 + iVar2) = 0x202c;
            iVar5 = param_2[1] + 2;
            param_2[1] = iVar5;
          }
          FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar1 * 8),param_2,0x12,0);
          iVar2 = param_2[1];
          if (iVar5 == iVar2) break;
          bVar8 = false;
          iVar1 = iVar1 + 1;
          iVar3 = iVar2;
          if (iVar1 == *(int8 *)(param_1 + 0x18)) goto code_r0x000bbb58;
        }
        param_2[1] = iVar3;
        iVar1 = iVar1 + 1;
      } while (iVar1 != *(int8 *)(param_1 + 0x18));
    }
code_r0x000bbb58:
    uVar4 = iVar3 + 1;
    iVar1 = *param_2;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
    if ((uint8)param_2[2] < uVar4) {
      uVar4 = param_2[2] * 2;
      if (uVar4 <= iVar3 + 0x3e1U) {
        uVar4 = iVar3 + 0x3e1U;
      }
      param_2[2] = uVar4;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
      uVar4 = iVar3 + 1;
    }
    param_2[1] = uVar4;
    *(xunknown1 *)(iVar1 + iVar3) = 0x29;
    iVar3 = param_2[1];
  }
  uVar4 = iVar3 + 1;
  iVar1 = *param_2;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e1U) {
      uVar4 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar4 = iVar3 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar1 + iVar3) = 0x20;
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar4 = iVar3 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e1U) {
      uVar4 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar4 = iVar3 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar1 + iVar3) = 0x7b;
  if (*(int8 *)(param_1 + 0x28) != 0) {
    pxVar7 = *(xunknown8 **)(param_1 + 0x20);
    iVar3 = *(int8 *)(param_1 + 0x28) << 3;
    do {
      piVar6 = (int8 *)*pxVar7;
      (**(code **)(*piVar6 + 0x20))(piVar6,param_2);
      if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40) {
        (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
      }
      iVar3 = iVar3 + -8;
      pxVar7 = pxVar7 + 1;
    } while (iVar3 != 0);
  }
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar4 = iVar3 + 1;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e1U) {
      uVar4 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
    uVar4 = iVar3 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar1 + iVar3) = 0x20;
  iVar3 = param_2[1];
  iVar1 = *param_2;
  uVar4 = iVar3 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e1U) {
      uVar4 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar4;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar3 = param_2[1];
    uVar4 = iVar3 + 1;
  }
  param_2[1] = uVar4;
  *(xunknown1 *)(iVar1 + iVar3) = 0x7d;
  return;
}

/* 0xbbd88  size=8 */
void FUN_000bbd88(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbbd90  size=776 */
void FUN_000bbd90(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 uVar6;
  int8 iVar7;
  int8 *piVar8;
  char *pcVar9;
  
  piVar8 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar8 + 0x20))(piVar8);
  if ((*(uint2 *)((int8)piVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar8 + 0x28))(piVar8,param_2);
  }
  iVar4 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 2U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e2U) {
      uVar6 = iVar4 + 0x3e2U;
    }
    param_2[2] = uVar6;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown2 *)(iVar2 + iVar4) = 0x3c2e;
  piVar8 = *(int8 **)(param_1 + 0x10);
  iVar4 = *piVar8;
  param_2[1] = param_2[1] + 2;
  (**(code **)(iVar4 + 0x20))(piVar8,param_2);
  if ((*(uint2 *)((int8)piVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar8 + 0x28))(piVar8,param_2);
  }
  iVar4 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 0xbU) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3ebU) {
      uVar6 = iVar4 + 0x3ebU;
    }
    param_2[2] = uVar6;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown8 *)(iVar2 + iVar4) = xRam0000000000036fdb;
  *(xunknown4 *)(iVar2 + iVar4 + 7) = 0x20746573;
  iVar7 = param_2[1];
  iVar4 = iVar7 + 0xb;
  param_2[1] = iVar4;
  iVar2 = *(int8 *)(param_1 + 0x28);
  if (iVar2 == 0) {
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar7 + 0xcU) {
      uVar6 = param_2[2] * 2;
      if (uVar6 <= iVar7 + 0x3ecU) {
        uVar6 = iVar7 + 0x3ecU;
      }
      param_2[2] = uVar6;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown1 *)(iVar2 + iVar4) = 0x30;
    iVar2 = 1;
code_r0x000bc010:
    iVar4 = param_2[1] + iVar2;
    param_2[1] = iVar4;
  }
  else {
    pcVar9 = *(char **)(param_1 + 0x20);
    uVar6 = param_2[2];
    iVar3 = *param_2;
    if (*pcVar9 != 'n') {
      if (uVar6 < (uint8)(iVar4 + iVar2)) {
        uVar5 = iVar4 + iVar2 + 0x3e0;
        uVar1 = uVar6 * 2;
        if (uVar6 * 2 <= uVar5) {
          uVar1 = uVar5;
        }
        param_2[2] = uVar1;
        iVar3 = realloc();
        *param_2 = iVar3;
        if (iVar3 == 0) goto code_r0x000ca7b0;
        iVar4 = param_2[1];
      }
      iVar3 = iVar3 + iVar4;
code_r0x000bc008:
      memcpy(iVar3,pcVar9,iVar2);
      goto code_r0x000bc010;
    }
    if (uVar6 < iVar7 + 0xcU) {
      uVar5 = uVar6 * 2;
      if (uVar6 * 2 <= iVar7 + 0x3ecU) {
        uVar5 = iVar7 + 0x3ecU;
      }
      param_2[2] = uVar5;
      iVar3 = realloc();
      *param_2 = iVar3;
      if (iVar3 == 0) goto code_r0x000ca7b0;
      iVar4 = param_2[1];
    }
    *(xunknown1 *)(iVar3 + iVar4) = 0x2d;
    iVar7 = param_2[1];
    iVar3 = *(int8 *)(param_1 + 0x28);
    iVar4 = iVar7 + 1;
    iVar2 = iVar3 + -1;
    param_2[1] = iVar4;
    if (iVar2 != 0) {
      uVar6 = iVar7 + iVar3;
      iVar7 = *(int8 *)(param_1 + 0x20);
      iVar3 = *param_2;
      if ((uint8)param_2[2] < uVar6) {
        uVar5 = param_2[2] * 2;
        uVar6 = uVar6 + 0x3e0;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        param_2[2] = uVar5;
        iVar3 = realloc();
        *param_2 = iVar3;
        if (iVar3 == 0) goto code_r0x000ca7b0;
        iVar4 = param_2[1];
      }
      iVar3 = iVar3 + iVar4;
      pcVar9 = (char *)(iVar7 + 1);
      goto code_r0x000bc008;
    }
  }
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 1U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e1U) {
      uVar6 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar6;
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
  *(xunknown1 *)(iVar2 + iVar4) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xbc098  size=8 */
void FUN_000bc098(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbc0a0  size=376 */
void FUN_000bc0a0(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  xunknown8 xStack_38;
  xunknown1 xStack_30;
  xunknown2 xStack_2f;
  xunknown8 xStack_28;
  
  iVar4 = param_2[1];
  iVar3 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 9U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 0x3e9U) {
      uVar5 = iVar4 + 0x3e9U;
    }
    param_2[2] = uVar5;
    iVar3 = realloc(iVar3);
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  xVar1 = xRam000000000002ba5e;
  *(xunknown1 *)((xunknown8 *)(iVar3 + iVar4) + 1) = 0x2e;
  *(xunknown8 *)(iVar3 + iVar4) = xVar1;
  iVar3 = param_2[1];
  iVar2 = *param_2;
  uVar5 = iVar3 + 10;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  iVar4 = iVar3 + 9;
  param_2[1] = iVar4;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3eaU) {
      uVar5 = iVar3 + 0x3eaU;
    }
    param_2[2] = uVar5;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
    uVar5 = iVar4 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar2 + iVar4) = 0x28;
  xStack_30 = 0x2a;
  xStack_28 = *(xunknown8 *)(param_1 + 0x10);
  xStack_2f = 0x540;
  xStack_38 = 0xd1798;
  FUN_000ba9c0(&xStack_38,param_2);
  iVar4 = param_2[1];
  iVar3 = *param_2;
  uVar5 = iVar4 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 0x3e1U) {
      uVar5 = iVar4 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar3 = realloc();
    *param_2 = iVar3;
    if (iVar3 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar4 = param_2[1];
    uVar5 = iVar4 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar3 + iVar4) = 0x29;
  return;
}

/* 0xbc218  size=8 */
void FUN_000bc218(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbc220  size=264 */
void FUN_000bc220(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  uint8 uVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  bool bVar6;
  
  if (*(int8 *)(param_1 + 0x18) != 0) {
    iVar4 = 0;
    bVar6 = true;
    iVar5 = param_2[1];
    do {
      while( true ) {
        iVar1 = iVar5;
        if (!bVar6) {
          iVar1 = *param_2;
          if ((uint8)param_2[2] < iVar5 + 2U) {
            uVar2 = param_2[2] * 2;
            if (uVar2 <= iVar5 + 0x3e2U) {
              uVar2 = iVar5 + 0x3e2U;
            }
            param_2[2] = uVar2;
            iVar1 = realloc();
            *param_2 = iVar1;
            if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*got_abort)();
              return;
            }
            iVar3 = param_2[1];
          }
          else {
            iVar3 = iVar5;
          }
          *(xunknown2 *)(iVar1 + iVar3) = 0x202c;
          iVar1 = param_2[1] + 2;
          param_2[1] = iVar1;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar4 * 8),param_2,0x12,0);
        if (iVar1 == param_2[1]) break;
        bVar6 = false;
        iVar4 = iVar4 + 1;
        iVar5 = param_2[1];
        if (iVar4 == *(int8 *)(param_1 + 0x18)) {
          return;
        }
      }
      param_2[1] = iVar5;
      iVar4 = iVar4 + 1;
    } while (iVar4 != *(int8 *)(param_1 + 0x18));
  }
  return;
}

/* 0xbc328  size=8 */
void FUN_000bc328(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbc330  size=216 */
void FUN_000bc330(int8 param_1,int8 *param_2)

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
  *(xunknown2 *)((xunknown4 *)(iVar1 + iVar2) + 1) = 0x2077;
  *(xunknown4 *)(iVar1 + iVar2) = 0x6f726874;
  piVar4 = *(int8 **)(param_1 + 0x10);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 6;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bc400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

