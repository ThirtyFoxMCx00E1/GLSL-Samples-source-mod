/* unexported functions 0xbc408..0xc13a8
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0xbc408  size=8 */
void FUN_000bc408(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbc410  size=388 */
xunknown8 * FUN_000bc410(int8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  uint1 uVar3;
  char cVar4;
  int8 *piVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  int8 iVar8;
  uint1 *puVar9;
  uint4 uVar10;
  xunknown4 xVar11;
  int8 iVar12;
  int8 *piVar13;
  
  if ((char *)param_1[1] != (char *)*param_1) {
    cVar4 = *(char *)*param_1;
    if (cVar4 == 'D') {
      pxVar7 = (xunknown8 *)FUN_000b007c();
      if (pxVar7 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      piVar5 = (int8 *)param_1[0x26];
      if (piVar5 != (int8 *)param_1[0x27]) goto code_r0x000bc568;
      piVar13 = (int8 *)param_1[0x25];
      iVar12 = (int8)piVar5 - (int8)piVar13;
      if (piVar13 != param_1 + 0x28) {
        iVar8 = realloc(piVar13);
        param_1[0x25] = iVar8;
        goto joined_r0x000bc4f4;
      }
      iVar8 = malloc(iVar12 * 2);
      if (iVar8 == 0) goto code_r0x000ca7b0;
      if (piVar5 != piVar13) {
        memmove(iVar8,piVar13,iVar12);
      }
code_r0x000bc54c:
      param_1[0x25] = iVar8;
    }
    else {
      if (cVar4 != 'T') goto code_r0x000b01c4;
      pxVar7 = (xunknown8 *)FUN_000afcac();
      if (pxVar7 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      piVar5 = (int8 *)param_1[0x26];
      if (piVar5 != (int8 *)param_1[0x27]) goto code_r0x000bc568;
      piVar13 = param_1 + 0x28;
      iVar12 = (int8)piVar5 - param_1[0x25];
      if ((int8 *)param_1[0x25] == piVar13) {
        iVar8 = malloc(iVar12 * 2);
        if (iVar8 == 0) goto code_r0x000ca7b0;
        if (piVar5 != piVar13) {
          memcpy(iVar8,piVar13,iVar12);
        }
        goto code_r0x000bc54c;
      }
      iVar8 = realloc();
      param_1[0x25] = iVar8;
joined_r0x000bc4f4:
      if (iVar8 == 0) goto code_r0x000ca7b0;
    }
    piVar5 = (int8 *)(iVar8 + iVar12);
    param_1[0x27] = iVar8 + (iVar12 >> 2) * 8;
code_r0x000bc568:
    param_1[0x26] = (int8)(piVar5 + 1);
    *piVar5 = (int8)pxVar7;
    return pxVar7;
  }
code_r0x000b01c4:
  puVar1 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if ((puVar1 != puVar2) && (*puVar1 == 0x53)) {
    puVar9 = puVar1 + 1;
    *param_1 = (int8)puVar9;
    if (puVar2 != puVar9) {
      uVar3 = *puVar9;
      uVar10 = (uint4)uVar3;
      if (uVar3 < 0x61) {
        if (uVar3 == 0x5f) {
          *param_1 = (int8)(puVar1 + 2);
          if ((xunknown8 *)param_1[0x25] == (xunknown8 *)param_1[0x26]) {
            return (xunknown8 *)0x0;
          }
          return *(xunknown8 **)param_1[0x25];
        }
        if (uVar10 < 0x30) {
          return (xunknown8 *)0x0;
        }
      }
      else if (uVar10 < 0x7b) {
        if (uVar3 < 0x69) {
          if (uVar3 == 0x61) {
            xVar11 = 0;
          }
          else if (uVar3 == 0x62) {
            xVar11 = 1;
          }
          else {
            if (uVar10 != 100) {
              return (xunknown8 *)0x0;
            }
            xVar11 = 5;
          }
        }
        else if (uVar3 == 0x69) {
          xVar11 = 3;
        }
        else if (uVar3 == 0x6f) {
          xVar11 = 4;
        }
        else {
          if (uVar3 != 0x73) {
            return (xunknown8 *)0x0;
          }
          xVar11 = 2;
        }
        piVar13 = (int8 *)param_1[0x266];
        *param_1 = (int8)(puVar1 + 2);
        iVar12 = piVar13[1];
        piVar5 = piVar13;
        if (iVar12 - 0xfe0U < 0xfffffffffffff00f || iVar12 == -0x11) {
          piVar5 = (int8 *)malloc(0x1000);
          if (piVar5 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
            return pxVar7;
          }
          iVar12 = 0;
          *piVar5 = (int8)piVar13;
          piVar5[1] = 0;
          param_1[0x266] = (int8)piVar5;
        }
        piVar5[1] = iVar12 + 0x10;
        pxVar7 = (xunknown8 *)(iVar12 + 0x10 + (int8)piVar5);
        *(xunknown1 *)(pxVar7 + 1) = 0x30;
        *(xunknown4 *)((int8)pxVar7 + 0xc) = xVar11;
        *(uint2 *)((int8)pxVar7 + 9) = *(uint2 *)((int8)pxVar7 + 9) & 0xf000 | 0x540;
        *pxVar7 = 0xd1f78;
        pxVar6 = (xunknown8 *)FUN_000bd0c4(param_1,pxVar7);
        if (pxVar6 == pxVar7) {
          return pxVar7;
        }
        piVar5 = (int8 *)param_1[0x26];
        if (piVar5 == (int8 *)param_1[0x27]) {
          piVar13 = (int8 *)param_1[0x25];
          iVar12 = (int8)piVar5 - (int8)piVar13;
          if (piVar13 == param_1 + 0x28) {
            iVar8 = malloc(iVar12 * 2);
            if (iVar8 == 0) goto code_r0x000ca7b0;
            if (piVar5 != piVar13) {
              memmove(iVar8,piVar13,iVar12);
            }
            param_1[0x25] = iVar8;
          }
          else {
            iVar8 = realloc(piVar13);
            param_1[0x25] = iVar8;
            if (iVar8 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar7 = (xunknown8 *)(*got_abort)();
              return pxVar7;
            }
          }
          piVar5 = (int8 *)(iVar8 + iVar12);
          param_1[0x27] = iVar8 + (iVar12 >> 2) * 8;
        }
        param_1[0x26] = (int8)(piVar5 + 1);
        *piVar5 = (int8)pxVar6;
        return pxVar6;
      }
      if ((uVar10 < 0x3a) || (uVar10 - 0x41 < 0x1a)) {
        iVar12 = 0;
        while( true ) {
          uVar3 = *puVar9;
          if (uVar3 < 0x30) break;
          if (uVar3 < 0x3a) {
            iVar8 = -0x30;
          }
          else {
            if (0x19 < uVar3 - 0x41) break;
            iVar8 = -0x37;
          }
          puVar9 = puVar9 + 1;
          *param_1 = (int8)puVar9;
          iVar12 = (uint8)uVar3 + iVar12 * 0x24 + iVar8;
          if (puVar9 == puVar2) {
            return (xunknown8 *)0x0;
          }
        }
        if ((puVar9 != puVar2) && (*puVar9 == 0x5f)) {
          *param_1 = (int8)(puVar9 + 1);
          if (iVar12 + 1U < (uint8)(param_1[0x26] - param_1[0x25] >> 3)) {
            return *(xunknown8 **)(param_1[0x25] + (iVar12 + 1U) * 8);
          }
        }
      }
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xbc594  size=216 */
xunknown8 * FUN_000bc594(int8 *param_1)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  int8 *piVar3;
  int8 iVar4;
  xunknown8 *pxVar5;
  int8 *piVar6;
  
  pxVar1 = (xunknown8 *)FUN_000af0b4();
  pxVar5 = pxVar1;
  if ((((pxVar1 != (xunknown8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
      (*(char *)*param_1 == 'I')) &&
     (iVar2 = FUN_000af668(param_1,0), pxVar5 = (xunknown8 *)0x0, iVar2 != 0)) {
    piVar6 = (int8 *)param_1[0x266];
    iVar4 = piVar6[1];
    piVar3 = piVar6;
    if (iVar4 - 0xfd0U < 0xfffffffffffff00f || iVar4 == -0x21) {
      piVar3 = (int8 *)malloc(0x1000);
      if (piVar3 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar5 = (xunknown8 *)(*pcRam00000000000d4468)();
        return pxVar5;
      }
      iVar4 = 0;
      *piVar3 = (int8)piVar6;
      piVar3[1] = 0;
      param_1[0x266] = (int8)piVar3;
    }
    piVar3[1] = iVar4 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar3 + iVar4 + 0x10);
    *pxVar5 = 0xd2448;
    *(xunknown8 **)((int8)piVar3 + iVar4 + 0x20) = pxVar1;
    *(int8 *)((int8)piVar3 + iVar4 + 0x28) = iVar2;
    *(xunknown1 *)((int8)piVar3 + iVar4 + 0x18) = 0x2d;
    *(uint2 *)((int8)piVar3 + iVar4 + 0x19) =
         *(uint2 *)((int8)piVar3 + iVar4 + 0x19) & 0xf000 | 0x540;
  }
  return pxVar5;
}

/* 0xbc66c  size=564 */
xunknown8 * FUN_000bc66c(int8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  int8 *piVar5;
  int8 iVar6;
  xunknown8 *pxVar7;
  int8 *piVar8;
  
  puVar1 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if ((puVar2 != puVar1) && (0xfffffff5 < *puVar1 - 0x3a)) {
    pxVar7 = (xunknown8 *)FUN_000af0b4();
    pxVar3 = pxVar7;
    if ((pxVar7 != (xunknown8 *)0x0) &&
       (((char *)param_1[1] != (char *)*param_1 && (*(char *)*param_1 == 'I')))) {
      iVar4 = FUN_000af668(param_1,0);
      pxVar3 = (xunknown8 *)0x0;
      if (iVar4 != 0) {
        piVar8 = (int8 *)param_1[0x266];
        iVar6 = piVar8[1];
        piVar5 = piVar8;
        if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
          piVar5 = (int8 *)malloc(0x1000);
          if (piVar5 == (int8 *)0x0) goto code_r0x000caa00;
          iVar6 = 0;
          *piVar5 = (int8)piVar8;
          piVar5[1] = 0;
          param_1[0x266] = (int8)piVar5;
        }
        piVar5[1] = iVar6 + 0x20;
        pxVar3 = (xunknown8 *)((int8)piVar5 + iVar6 + 0x10);
        *pxVar3 = 0xd2448;
        *(xunknown8 **)((int8)piVar5 + iVar6 + 0x20) = pxVar7;
        *(int8 *)((int8)piVar5 + iVar6 + 0x28) = iVar4;
        *(xunknown1 *)((int8)piVar5 + iVar6 + 0x18) = 0x2d;
        *(uint2 *)((int8)piVar5 + iVar6 + 0x19) =
             *(uint2 *)((int8)piVar5 + iVar6 + 0x19) & 0xf000 | 0x540;
      }
    }
    return pxVar3;
  }
  if ((uint8)((int8)puVar2 - (int8)puVar1) < 2) {
code_r0x000bc6c8:
    pxVar3 = (xunknown8 *)FUN_000bc9c0(param_1,0);
  }
  else {
    if (*(int2 *)puVar1 == 0x6e64) {
      puVar1 = puVar1 + 2;
      *param_1 = (int8)puVar1;
      if ((puVar2 == puVar1) || (*puVar1 - 0x3a < 0xfffffff6)) {
        iVar4 = FUN_000bc410(param_1);
      }
      else {
        iVar4 = FUN_000bc594(param_1);
      }
      if (iVar4 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar8 = (int8 *)param_1[0x266];
      iVar6 = piVar8[1];
      piVar5 = piVar8;
      if (0xfffffffffffff00e < iVar6 - 0xfd0U && iVar6 != -0x21) {
code_r0x000bc80c:
        piVar5[1] = iVar6 + 0x20;
        pxVar3 = (xunknown8 *)((int8)piVar5 + iVar6 + 0x10);
        *pxVar3 = 0xd1db8;
        *(int8 *)((int8)piVar5 + iVar6 + 0x20) = iVar4;
        *(xunknown1 *)((int8)piVar5 + iVar6 + 0x18) = 0x32;
        *(uint2 *)((int8)piVar5 + iVar6 + 0x19) =
             *(uint2 *)((int8)piVar5 + iVar6 + 0x19) & 0xf000 | 0x540;
        return pxVar3;
      }
      piVar5 = (int8 *)malloc(0x1000);
      if (piVar5 != (int8 *)0x0) {
        iVar6 = 0;
        *piVar5 = (int8)piVar8;
        piVar5[1] = 0;
        param_1[0x266] = (int8)piVar5;
        goto code_r0x000bc80c;
      }
      goto code_r0x000caa00;
    }
    if (*(int2 *)puVar1 != 0x6e6f) goto code_r0x000bc6c8;
    *param_1 = (int8)(puVar1 + 2);
    pxVar3 = (xunknown8 *)FUN_000bc9c0(param_1,0);
  }
  pxVar7 = pxVar3;
  if (((pxVar3 != (xunknown8 *)0x0) && ((char *)param_1[1] != (char *)*param_1)) &&
     (*(char *)*param_1 == 'I')) {
    iVar4 = FUN_000af668(param_1,0);
    pxVar7 = (xunknown8 *)0x0;
    if (iVar4 != 0) {
      piVar8 = (int8 *)param_1[0x266];
      iVar6 = piVar8[1];
      piVar5 = piVar8;
      if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
        piVar5 = (int8 *)malloc(0x1000);
        if (piVar5 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar3 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar3;
        }
        iVar6 = 0;
        *piVar5 = (int8)piVar8;
        piVar5[1] = 0;
        param_1[0x266] = (int8)piVar5;
      }
      piVar5[1] = iVar6 + 0x20;
      pxVar7 = (xunknown8 *)((int8)piVar5 + iVar6 + 0x10);
      *pxVar7 = 0xd2448;
      *(xunknown8 **)((int8)piVar5 + iVar6 + 0x20) = pxVar3;
      *(int8 *)((int8)piVar5 + iVar6 + 0x28) = iVar4;
      *(xunknown1 *)((int8)piVar5 + iVar6 + 0x18) = 0x2d;
      *(uint2 *)((int8)piVar5 + iVar6 + 0x19) =
           *(uint2 *)((int8)piVar5 + iVar6 + 0x19) & 0xf000 | 0x540;
    }
  }
  return pxVar7;
}

/* 0xbc8a0  size=260 */
void FUN_000bc8a0(int8 param_1,int8 *param_2)

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
  if ((uint8)param_2[2] < iVar2 + 2U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e2U) {
      uVar3 = iVar2 + 0x3e2U;
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
  *(xunknown2 *)(iVar1 + iVar2) = 0x3a3a;
  piVar4 = *(int8 **)(param_1 + 0x18);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 2;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bc99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbc9a4  size=20 */
void FUN_000bc9a4(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000bc9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x30))();
  return;
}

/* 0xbc9b8  size=8 */
void FUN_000bc9b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbc9c0  size=952 */
xunknown8 * FUN_000bc9c0(int8 *param_1,xunknown1 *param_2)

{
  uint1 *puVar1;
  uint1 *puVar2;
  uint1 *puVar3;
  uint1 uVar4;
  uint1 uVar5;
  char cVar6;
  uint2 uVar7;
  int8 iVar8;
  int8 *piVar9;
  xunknown8 *pxVar10;
  xunknown8 xVar11;
  int8 iVar12;
  xunknown1 xVar13;
  int8 iVar14;
  uint8 uVar15;
  uint8 uVar16;
  uint8 uVar17;
  xunknown8 xVar18;
  int8 *piVar19;
  
  puVar2 = (uint1 *)*param_1;
  puVar3 = (uint1 *)param_1[1];
  if ((uint8)((int8)puVar3 - (int8)puVar2) < 2) {
code_r0x000bcb38:
    if (puVar2 == puVar3) {
      return (xunknown8 *)0x0;
    }
    if (*puVar2 != 0x76) {
      return (xunknown8 *)0x0;
    }
    puVar1 = puVar2 + 1;
    *param_1 = (int8)puVar1;
    if (puVar3 == puVar1) {
      return (xunknown8 *)0x0;
    }
    if (9 < *puVar1 - 0x30) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)(puVar2 + 2);
    iVar12 = FUN_000af0b4();
    if (iVar12 == 0) {
      return (xunknown8 *)0x0;
    }
    piVar19 = (int8 *)param_1[0x266];
    iVar8 = piVar19[1];
    piVar9 = piVar19;
    if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) {
code_r0x000bcd68:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar10 = (xunknown8 *)(*pcRam00000000000d4468)();
        return pxVar10;
      }
      iVar8 = 0;
      *piVar9 = (int8)piVar19;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    iVar14 = (int8)piVar9 + iVar8;
    xVar11 = 0xd1e28;
    piVar9[1] = iVar8 + 0x20;
    xVar13 = 4;
  }
  else {
    uVar4 = *puVar2;
    uVar15 = 0;
    uVar16 = 0x3d;
    do {
      uVar17 = uVar15 + uVar16 >> 1;
      uVar5 = *(uint1 *)(uVar17 * 0x10 + 0xd0688);
      if ((uVar5 < uVar4) || ((uVar4 == uVar5 && (*(uint1 *)(uVar17 * 0x10 + 0xd0689) < puVar2[1])))
         ) {
        uVar15 = uVar17 + 1;
        uVar17 = uVar16;
      }
      uVar16 = uVar17;
    } while (uVar16 != uVar15);
    iVar12 = uVar15 * 0x10;
    if ((uVar4 == *(uint1 *)(iVar12 + 0xd0688)) && (puVar2[1] == *(uint1 *)(iVar12 + 0xd0689))) {
      uVar4 = *(uint1 *)(iVar12 + 0xd068a);
      *param_1 = (int8)(puVar2 + 2);
      if (uVar4 == 8) {
        cVar6 = *(char *)((int8)param_1 + 0x309);
        iVar12 = param_1[0x61];
        *(xunknown1 *)(param_1 + 0x61) = 0;
        *(bool *)((int8)param_1 + 0x309) = param_2 != (xunknown1 *)0x0 || cVar6 != '\0';
        iVar8 = FUN_000abd5c();
        if (iVar8 == 0) {
          pxVar10 = (xunknown8 *)0x0;
        }
        else {
          if (param_2 != (xunknown1 *)0x0) {
            *param_2 = 1;
          }
          piVar19 = (int8 *)param_1[0x266];
          iVar14 = piVar19[1];
          piVar9 = piVar19;
          if (iVar14 - 0xfd0U < 0xfffffffffffff00f || iVar14 == -0x21) {
            piVar9 = (int8 *)malloc(0x1000);
            if (piVar9 == (int8 *)0x0) goto code_r0x000bcd68;
            iVar14 = 0;
            *piVar9 = (int8)piVar19;
            piVar9[1] = 0;
            param_1[0x266] = (int8)piVar9;
          }
          piVar9[1] = iVar14 + 0x20;
          pxVar10 = (xunknown8 *)((int8)piVar9 + iVar14 + 0x10);
          *pxVar10 = 0xd1e28;
          *(int8 *)((int8)piVar9 + iVar14 + 0x20) = iVar8;
          *(xunknown1 *)((int8)piVar9 + iVar14 + 0x18) = 4;
          *(uint2 *)((int8)piVar9 + iVar14 + 0x19) =
               *(uint2 *)((int8)piVar9 + iVar14 + 0x19) & 0xf000 | 0x540;
        }
        *(char *)((int8)param_1 + 0x309) = cVar6;
        *(char *)(param_1 + 0x61) = (char)iVar12;
        return pxVar10;
      }
      if (10 < uVar4) {
        return (xunknown8 *)0x0;
      }
      if ((uVar4 == 4) && ((*(uint1 *)(iVar12 + 0xd068b) & 1) == 0)) {
        return (xunknown8 *)0x0;
      }
      xVar18 = *(xunknown8 *)(iVar12 + 0xd0690);
      xVar11 = strlen(xVar18);
      piVar19 = (int8 *)param_1[0x266];
      iVar12 = piVar19[1];
      piVar9 = piVar19;
      if (iVar12 - 0xfd0U < 0xfffffffffffff00f || iVar12 == -0x21) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000bcd68;
        iVar12 = 0;
        *piVar9 = (int8)piVar19;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar12 + 0x20;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar12 + 0x10);
      *pxVar10 = 0xd0548;
      uVar7 = *(uint2 *)((int8)piVar9 + iVar12 + 0x19);
      *(xunknown8 *)((int8)piVar9 + iVar12 + 0x20) = xVar18;
      *(xunknown8 *)((int8)piVar9 + iVar12 + 0x28) = xVar11;
      *(xunknown1 *)((int8)piVar9 + iVar12 + 0x18) = 8;
      goto code_r0x000bcc70;
    }
    if (*(int2 *)puVar2 != 0x696c) goto code_r0x000bcb38;
    *param_1 = (int8)(puVar2 + 2);
    iVar12 = FUN_000af0b4();
    if (iVar12 == 0) {
      return (xunknown8 *)0x0;
    }
    piVar19 = (int8 *)param_1[0x266];
    iVar8 = piVar19[1];
    piVar9 = piVar19;
    if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000bcd68;
      iVar8 = 0;
      *piVar9 = (int8)piVar19;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    iVar14 = (int8)piVar9 + iVar8;
    xVar11 = 0xd1e98;
    piVar9[1] = iVar8 + 0x20;
    xVar13 = 0x14;
  }
  pxVar10 = (xunknown8 *)(iVar14 + 0x10);
  *pxVar10 = xVar11;
  uVar7 = *(uint2 *)(iVar14 + 0x19);
  *(xunknown1 *)(iVar14 + 0x18) = xVar13;
  *(int8 *)(iVar14 + 0x20) = iVar12;
code_r0x000bcc70:
  *(uint2 *)((int8)pxVar10 + 9) = uVar7 & 0xf000 | 0x540;
  return pxVar10;
}

/* 0xbcd78  size=148 */
void FUN_000bcd78(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 1U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e1U) {
      uVar3 = iVar2 + 0x3e1U;
    }
    param_2[2] = uVar3;
    iVar1 = realloc(iVar1,uVar3);
    *param_2 = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar2) = 0x7e;
  iVar2 = **(int8 **)(param_1 + 0x10);
  param_2[1] = param_2[1] + 1;
                    /* WARNING: Could not recover jumptable at 0x000bce04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0x20))();
  return;
}

/* 0xbce0c  size=8 */
void FUN_000bce0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbce14  size=220 */
void FUN_000bce14(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 *piVar5;
  
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 9U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 0x3e9U) {
      uVar4 = iVar3 + 0x3e9U;
    }
    param_2[2] = uVar4;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar3 = param_2[1];
  }
  xVar1 = xRam000000000003d176;
  *(xunknown1 *)((xunknown8 *)(iVar2 + iVar3) + 1) = 0x20;
  *(xunknown8 *)(iVar2 + iVar3) = xVar1;
  piVar5 = *(int8 **)(param_1 + 0x10);
  iVar3 = *piVar5;
  param_2[1] = param_2[1] + 9;
  (**(code **)(iVar3 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bcee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  return;
}

/* 0xbcef0  size=8 */
void FUN_000bcef0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbcef8  size=224 */
void FUN_000bcef8(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 0xbU) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3ebU) {
      uVar3 = iVar2 + 0x3ebU;
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
  *(xunknown8 *)(iVar1 + iVar2) = xRam000000000003a11e;
  *(xunknown4 *)(iVar1 + iVar2 + 7) = 0x20222272;
  piVar4 = *(int8 **)(param_1 + 0x10);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 0xb;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bcfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbcfd8  size=8 */
void FUN_000bcfd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbcfe0  size=200 */
void FUN_000bcfe0(int8 param_1,int8 *param_2)

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
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
  }
  *(xunknown2 *)(iVar1 + iVar2) = 0x3a3a;
  piVar4 = *(int8 **)(param_1 + 0x10);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 2;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bd0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbd0a8  size=20 */
void FUN_000bd0a8(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000bd0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x30))();
  return;
}

/* 0xbd0bc  size=8 */
void FUN_000bd0bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbd0c4  size=384 */
xunknown8 * FUN_000bd0c4(int8 *param_1,xunknown8 *param_2)

{
  uint2 uVar1;
  xunknown8 *pxVar2;
  int8 *piVar3;
  uint1 *puVar4;
  uint8 uVar5;
  int8 iVar6;
  uint1 *puVar7;
  uint1 *puVar8;
  uint8 uVar9;
  int8 *piVar10;
  
  puVar7 = (uint1 *)*param_1;
  puVar4 = (uint1 *)param_1[1];
  pxVar2 = param_2;
  if (puVar7 != puVar4) {
    do {
      pxVar2 = param_2;
      if (*puVar7 != 0x42) break;
      puVar8 = puVar7 + 1;
      *param_1 = (int8)puVar8;
      if ((puVar4 == puVar8) || (*puVar8 - 0x3a < 0xfffffff6)) {
        return (xunknown8 *)0x0;
      }
      uVar9 = 0;
      puVar7 = puVar7 + 2;
      do {
        puVar8 = puVar7;
        *param_1 = (int8)puVar8;
        uVar9 = ((uint8)puVar8[-1] + uVar9 * 10) - 0x30;
        if (puVar8 == puVar4) {
          if (uVar9 != 0) {
            return (xunknown8 *)0x0;
          }
          goto code_r0x000bd1d8;
        }
        puVar7 = puVar8 + 1;
      } while (*puVar8 - 0x30 < 10);
      uVar5 = (int8)puVar4 - (int8)puVar8;
      puVar4 = puVar8;
      if (uVar5 < uVar9) {
        return (xunknown8 *)0x0;
      }
code_r0x000bd1d8:
      *param_1 = (int8)(puVar4 + uVar9);
      if (uVar9 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar10 = (int8 *)param_1[0x266];
      iVar6 = piVar10[1];
      piVar3 = piVar10;
      if (iVar6 - 0xfc0U < 0xfffffffffffff00f || iVar6 == -0x31) {
        piVar3 = (int8 *)malloc(0x1000);
        if (piVar3 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar2 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar2;
        }
        iVar6 = 0;
        *piVar3 = (int8)piVar10;
        piVar3[1] = 0;
        param_1[0x266] = (int8)piVar3;
      }
      piVar3[1] = iVar6 + 0x30;
      uVar1 = *(uint2 *)((int8)param_2 + 9);
      pxVar2 = (xunknown8 *)((int8)piVar3 + iVar6 + 0x10);
      *pxVar2 = 0xd2058;
      *(uint1 **)((int8)piVar3 + iVar6 + 0x28) = puVar4;
      *(uint8 *)((int8)piVar3 + iVar6 + 0x30) = uVar9;
      *(xunknown8 **)((int8)piVar3 + iVar6 + 0x20) = param_2;
      *(xunknown1 *)((int8)piVar3 + iVar6 + 0x18) = 9;
      *(uint2 *)((int8)piVar3 + iVar6 + 0x19) =
           *(uint2 *)((int8)piVar3 + iVar6 + 0x19) & 0xf000 | uVar1 & 0xfc0;
      puVar7 = (uint1 *)*param_1;
      puVar4 = (uint1 *)param_1[1];
      param_2 = pxVar2;
    } while (puVar7 != puVar4);
  }
  return pxVar2;
}

/* 0xbd244  size=480 */
void FUN_000bd244(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int4 iVar2;
  int8 iVar3;
  int8 iVar4;
  int4 *piVar5;
  uint8 uVar6;
  uint8 uVar7;
  int8 iVar8;
  int8 iVar9;
  
  iVar4 = param_2[1];
  iVar3 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 5U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar4 + 0x3e5U) {
      uVar6 = iVar4 + 0x3e5U;
    }
    param_2[2] = uVar6;
    iVar3 = realloc(iVar3);
    *param_2 = iVar3;
    if (iVar3 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)((xunknown4 *)(iVar3 + iVar4) + 1) = 0x3a;
  *(xunknown4 *)(iVar3 + iVar4) = 0x3a647473;
  iVar3 = param_2[1];
  iVar2 = *(int4 *)(param_1 + 0xc);
  iVar4 = iVar3 + 5;
  param_2[1] = iVar4;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      iVar9 = 0x36fe7 /* "allocator" */;
      iVar8 = 9;
      uVar7 = param_2[2];
      uVar6 = iVar3 + 0xe;
      iVar3 = *param_2;
      if (uVar6 <= uVar7) goto code_r0x000bd3cc;
    }
    else {
      if (iVar2 != 1) {
        piVar5 = (int4 *)0x3919f /* "basic_string" */;
        iVar8 = 6;
        goto code_r0x000bd370;
      }
      iVar9 = 0x3919f /* "basic_string" */;
      iVar8 = 0xc;
      uVar7 = param_2[2];
      uVar6 = iVar3 + 0x11;
      iVar3 = *param_2;
      if (uVar6 <= uVar7) goto code_r0x000bd3cc;
    }
  }
  else {
    if (iVar2 == 3) {
      piVar5 = (int4 *)0x40468 /* "basic_istream" */;
      iVar8 = 7;
    }
    else if (iVar2 == 4) {
      piVar5 = (int4 *)0x3d180 /* "basic_ostream" */;
      iVar8 = 7;
    }
    else {
      piVar5 = (int4 *)0x38380 /* "basic_iostream" */;
      iVar8 = 8;
    }
code_r0x000bd370:
    if (*piVar5 != 0x69736162 || (int2)piVar5[1] != 0x5f63) {
      FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0x6aa,0x29893);
      goto code_r0x000ca7b0;
    }
    iVar9 = (int8)piVar5 + 6;
    uVar7 = param_2[2];
    uVar6 = iVar4 + iVar8;
    iVar3 = *param_2;
    if (uVar6 <= uVar7) goto code_r0x000bd3cc;
  }
  uVar1 = uVar7 * 2;
  if (uVar7 * 2 <= uVar6 + 0x3e0) {
    uVar1 = uVar6 + 0x3e0;
  }
  param_2[2] = uVar1;
  iVar3 = realloc();
  *param_2 = iVar3;
  if (iVar3 != 0) {
    iVar4 = param_2[1];
code_r0x000bd3cc:
    memcpy(iVar3 + iVar4,iVar9,iVar8);
    param_2[1] = param_2[1] + iVar8;
    return;
  }
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_abort)();
  return;
}

/* 0xbd424  size=220 */
xunknown1  [16] FUN_000bd424(int8 param_1)

{
  int4 iVar1;
  xunknown8 xVar2;
  int4 *piVar3;
  xunknown1 axVar4 [16];
  xunknown1 axVar5 [16];
  xunknown1 axVar6 [16];
  
  iVar1 = *(int4 *)(param_1 + 0xc);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      axVar6._8_8_ = 9;
      axVar6._0_8_ = 0x36fe7 /* "allocator" */;
      return axVar6;
    }
    if (iVar1 == 1) {
      axVar4._8_8_ = 0xc;
      axVar4._0_8_ = 0x3919f /* "basic_string" */;
      return axVar4;
    }
    piVar3 = (int4 *)0x3919f /* "basic_string" */;
    xVar2 = 6;
  }
  else if (iVar1 == 3) {
    piVar3 = (int4 *)0x40468 /* "basic_istream" */;
    xVar2 = 7;
  }
  else if (iVar1 == 4) {
    piVar3 = (int4 *)0x3d180 /* "basic_ostream" */;
    xVar2 = 7;
  }
  else {
    piVar3 = (int4 *)0x38380 /* "basic_iostream" */;
    xVar2 = 8;
  }
  if (*piVar3 == 0x69736162 && (int2)piVar3[1] == 0x5f63) {
    axVar5._8_8_ = xVar2;
    axVar5._0_8_ = (int8)piVar3 + 6;
    return axVar5;
  }
  FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0x6aa,0x29893);
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  axVar6 = (*pcRam00000000000d4430)();
  return axVar6;
}

/* 0xbd500  size=8 */
void FUN_000bd500(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbd508  size=572 */
void FUN_000bd508(int8 *param_1,int8 *param_2)

{
  xunknown8 *pxVar1;
  int4 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  int8 iVar6;
  int8 iVar7;
  uint8 uVar8;
  int8 iVar9;
  uint8 uVar10;
  xunknown1 axVar11 [16];
  
  iVar9 = param_2[1];
  iVar7 = *param_2;
  if ((uint8)param_2[2] < iVar9 + 5U) {
    uVar10 = param_2[2] * 2;
    if (uVar10 <= iVar9 + 0x3e5U) {
      uVar10 = iVar9 + 0x3e5U;
    }
    param_2[2] = uVar10;
    iVar7 = realloc(iVar7);
    *param_2 = iVar7;
    if (iVar7 == 0) goto code_r0x000ca7b0;
    iVar9 = param_2[1];
  }
  *(xunknown1 *)((xunknown4 *)(iVar7 + iVar9) + 1) = 0x3a;
  *(xunknown4 *)(iVar7 + iVar9) = 0x3a647473;
  iVar9 = *param_1;
  param_2[1] = param_2[1] + 5;
  axVar11 = (**(code **)(iVar9 + 0x30))(param_1);
  iVar9 = axVar11._8_8_;
  if (iVar9 != 0) {
    iVar7 = param_2[1];
    iVar6 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar7 + iVar9)) {
      uVar8 = param_2[2] * 2;
      uVar10 = iVar7 + iVar9 + 0x3e0;
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      param_2[2] = uVar8;
      iVar6 = realloc();
      *param_2 = iVar6;
      if (iVar6 == 0) goto code_r0x000ca7b0;
      iVar7 = param_2[1];
    }
    memcpy(iVar6 + iVar7,axVar11._0_8_,iVar9);
    param_2[1] = param_2[1] + iVar9;
  }
  if (1 < *(uint4 *)((int8)param_1 + 0xc)) {
    iVar9 = param_2[1];
    iVar7 = *param_2;
    if ((uint8)param_2[2] < iVar9 + 0x1dU) {
      uVar10 = param_2[2] * 2;
      if (uVar10 <= iVar9 + 0x3fdU) {
        uVar10 = iVar9 + 0x3fdU;
      }
      param_2[2] = uVar10;
      iVar7 = realloc();
      *param_2 = iVar7;
      if (iVar7 == 0) goto code_r0x000ca7b0;
      iVar9 = param_2[1];
    }
    xVar5 = xRam0000000000034a16;
    xVar4 = xRam0000000000034a01;
    pxVar1 = (xunknown8 *)(iVar7 + iVar9);
    xVar3 = CONCAT53(Ram0000000000034a11,Ram0000000000034a0e);
    pxVar1[1] = CONCAT35(Ram0000000000034a0e,Ram0000000000034a09);
    *pxVar1 = xVar4;
    *(xunknown8 *)((int8)pxVar1 + 0x15) = xVar5;
    *(xunknown8 *)((int8)pxVar1 + 0xd) = xVar3;
    iVar7 = param_2[1];
    iVar2 = *(int4 *)((int8)param_1 + 0xc);
    iVar9 = iVar7 + 0x1d;
    param_2[1] = iVar9;
    if (iVar2 == 2) {
      iVar6 = *param_2;
      if ((uint8)param_2[2] < iVar7 + 0x33U) {
        uVar10 = param_2[2] * 2;
        if (uVar10 <= iVar7 + 0x413U) {
          uVar10 = iVar7 + 0x413U;
        }
        param_2[2] = uVar10;
        iVar6 = realloc();
        *param_2 = iVar6;
        if (iVar6 == 0) goto code_r0x000ca7b0;
        iVar9 = param_2[1];
      }
      xVar4 = xRam00000000000397c9;
      pxVar1 = (xunknown8 *)(iVar6 + iVar9);
      xVar3 = CONCAT62(Ram00000000000397d9,xRam00000000000397d7);
      pxVar1[1] = CONCAT26(xRam00000000000397d7,Ram00000000000397d1);
      *pxVar1 = xVar4;
      *(xunknown8 *)((int8)pxVar1 + 0xe) = xVar3;
      iVar9 = param_2[1] + 0x16;
      param_2[1] = iVar9;
    }
    iVar7 = *param_2;
    if ((uint8)param_2[2] < iVar9 + 1U) {
      uVar10 = param_2[2] * 2;
      if (uVar10 <= iVar9 + 0x3e1U) {
        uVar10 = iVar9 + 0x3e1U;
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
      iVar9 = param_2[1];
    }
    *(xunknown1 *)(iVar7 + iVar9) = 0x3e;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

/* 0xbd744  size=40 */
xunknown1  [16] FUN_000bd744(int8 param_1)

{
  xunknown1 axVar1 [16];
  
  axVar1._8_8_ = *(xunknown8 *)((int8)*(int4 *)(param_1 + 0xc) * 8 + 0x43d78);
  axVar1._0_8_ = (int8)*(int4 *)((int8)*(int4 *)(param_1 + 0xc) * 4 + 0x43da8) + 0x43da8;
  return axVar1;
}

/* 0xbd76c  size=8 */
void FUN_000bd76c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbd774  size=340 */
void FUN_000bd774(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x20))();
  iVar3 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 5U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e5U) {
      uVar5 = iVar3 + 0x3e5U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  *(xunknown1 *)((xunknown4 *)(iVar1 + iVar3) + 1) = 0x3a;
  *(xunknown4 *)(iVar1 + iVar3) = 0x6962615b;
  iVar3 = param_2[1] + 5;
  param_2[1] = iVar3;
  iVar1 = *(int8 *)(param_1 + 0x20);
  if (iVar1 != 0) {
    xVar6 = *(xunknown8 *)(param_1 + 0x18);
    iVar2 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar3 + iVar1)) {
      uVar4 = param_2[2] * 2;
      uVar5 = iVar3 + iVar1 + 0x3e0;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      param_2[2] = uVar4;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
    }
    memcpy(iVar2 + iVar3,xVar6,iVar1);
    iVar3 = param_2[1] + iVar1;
    param_2[1] = iVar3;
  }
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 1U) {
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
  }
  *(xunknown1 *)(iVar1 + iVar3) = 0x5d;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xbd8c8  size=20 */
void FUN_000bd8c8(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000bd8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x30))();
  return;
}

/* 0xbd8dc  size=8 */
void FUN_000bd8dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbd8e4  size=440 */
void FUN_000bd8e4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  bool bVar6;
  
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
  *(xunknown1 *)(iVar1 + iVar3) = 0x5b;
  iVar3 = param_2[1];
  if (*(int8 *)(param_1 + 0x18) != 0) {
    iVar1 = 0;
    bVar6 = true;
    do {
      while( true ) {
        iVar2 = iVar3;
        if (!bVar6) {
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
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar1 * 8),param_2,0x12,0);
        iVar4 = param_2[1];
        if (iVar2 == iVar4) break;
        bVar6 = false;
        iVar1 = iVar1 + 1;
        iVar3 = iVar4;
        if (iVar1 == *(int8 *)(param_1 + 0x18)) goto code_r0x000bda20;
      }
      param_2[1] = iVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int8 *)(param_1 + 0x18));
  }
code_r0x000bda20:
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
  *(xunknown1 *)(iVar1 + iVar3) = 0x5d;
  return;
}

/* 0xbda9c  size=8 */
void FUN_000bda9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbdaa4  size=192 */
void FUN_000bdaa4(int8 param_1,xunknown8 *param_2,char param_3,xunknown4 param_4)

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
  xVar3 = *param_2;
  piVar1[1] = iVar2 + 0x20;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2138;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x31;
  *(bool *)((int8)piVar1 + iVar2 + 0x28) = param_3 != '\0';
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown4 *)((int8)piVar1 + iVar2 + 0x2c) = param_4;
  return;
}

/* 0xbdb64  size=260 */
void FUN_000bdb64(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  int8 iVar5;
  xunknown1 axVar6 [16];
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar5 = param_2[1];
    iVar1 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 1U) {
      uVar3 = param_2[2] * 2;
      if (uVar3 <= iVar5 + 0x3e1U) {
        uVar3 = iVar5 + 0x3e1U;
      }
      param_2[2] = uVar3;
      iVar1 = realloc();
      *param_2 = iVar1;
      if (iVar1 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    *(xunknown1 *)(iVar1 + iVar5) = 0x7e;
    param_2[1] = param_2[1] + 1;
  }
  axVar6 = (**(code **)(**(int8 **)(param_1 + 0x10) + 0x30))();
  iVar5 = axVar6._8_8_;
  if (iVar5 != 0) {
    iVar1 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar1 + iVar5)) {
      uVar4 = param_2[2] * 2;
      uVar3 = iVar1 + iVar5 + 0x3e0;
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
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
      iVar1 = param_2[1];
    }
    memcpy(iVar2 + iVar1,axVar6._0_8_,iVar5);
    param_2[1] = param_2[1] + iVar5;
  }
  return;
}

/* 0xbdc68  size=8 */
void FUN_000bdc68(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbdc70  size=256 */
void FUN_000bdc70(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  piVar4 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar4 + 0x20))(piVar4);
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
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar2 = param_2[1];
    uVar3 = iVar2 + 1;
  }
  param_2[1] = uVar3;
  *(xunknown1 *)(iVar1 + iVar2) = 0x40;
  piVar4 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar4 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bdd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbdd70  size=20 */
void FUN_000bdd70(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000bdd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x30))();
  return;
}

/* 0xbdd84  size=8 */
void FUN_000bdd84(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbdd8c  size=280 */
void FUN_000bdd8c(int8 param_1,int8 *param_2)

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
  xVar1 = xRam0000000000029049;
  *(xunknown1 *)((xunknown8 *)(iVar2 + iVar3) + 1) = 0x20;
  *(xunknown8 *)(iVar2 + iVar3) = xVar1;
  piVar5 = *(int8 **)(param_1 + 0x18);
  iVar3 = *piVar5;
  param_2[1] = param_2[1] + 9;
  (**(code **)(iVar3 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bde9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  return;
}

/* 0xbdea4  size=20 */
void FUN_000bdea4(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000bdeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x30))();
  return;
}

/* 0xbdeb8  size=8 */
void FUN_000bdeb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbdec0  size=260 */
void FUN_000bdec0(int8 param_1,int8 *param_2)

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
  if ((uint8)param_2[2] < iVar2 + 2U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e2U) {
      uVar3 = iVar2 + 0x3e2U;
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
  *(xunknown2 *)(iVar1 + iVar2) = 0x3a3a;
  piVar4 = *(int8 **)(param_1 + 0x18);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 2;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bdfbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbdfc4  size=20 */
void FUN_000bdfc4(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000bdfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x30))();
  return;
}

/* 0xbdfd8  size=8 */
void FUN_000bdfd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbdfe0  size=176 */
uint1 * FUN_000bdfe0(uint1 *param_1,uint1 *param_2)

{
  uint4 uVar1;
  uint1 *puVar2;
  
  if (param_1 != param_2) {
    uVar1 = (uint4)*param_1;
    puVar2 = param_1;
    if (uVar1 == 0x5f) {
      if (param_1 + 1 != param_2) {
        uVar1 = (uint4)param_1[1];
        if (0xfffffff5 < uVar1 - 0x3a) {
          return param_1 + 2;
        }
        if (uVar1 == 0x5f) {
          for (puVar2 = param_1 + 2; puVar2 != param_2; puVar2 = puVar2 + 1) {
            if (*puVar2 - 0x3a < 0xfffffff6) {
              if (*puVar2 == 0x5f) {
                param_1 = puVar2 + 1;
              }
              return param_1;
            }
          }
        }
      }
    }
    else {
      while (0xfffffff5 < uVar1 - 0x3a) {
        puVar2 = puVar2 + 1;
        if (puVar2 == param_2) {
          return param_2;
        }
        uVar1 = (uint4)*puVar2;
      }
    }
  }
  return param_1;
}

/* 0xbe090  size=168 */
xunknown8 * FUN_000be090(int8 param_1,xunknown8 param_2)

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

/* 0xbe138  size=168 */
void FUN_000be138(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd22f8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x1a;
  xVar3 = *param_2;
  xVar4 = *param_3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar4;
  return;
}

/* 0xbe1e0  size=260 */
void FUN_000be1e0(int8 param_1,int8 *param_2)

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
  if ((uint8)param_2[2] < iVar2 + 2U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e2U) {
      uVar3 = iVar2 + 0x3e2U;
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
  *(xunknown2 *)(iVar1 + iVar2) = 0x3a3a;
  piVar4 = *(int8 **)(param_1 + 0x18);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 2;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000be2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbe2e4  size=8 */
void FUN_000be2e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbe2ec  size=108 */
uint8 FUN_000be2ec(int8 param_1,int8 param_2)

{
  uint1 uVar1;
  xunknown8 *pxVar2;
  uint8 uVar3;
  int8 iVar4;
  
  if (*(int4 *)(param_2 + 0x1c) == -1) {
    iVar4 = *(int8 *)(param_1 + 0x18);
    uVar3 = 0;
    *(xunknown4 *)(param_2 + 0x18) = 0;
    *(int4 *)(param_2 + 0x1c) = (int4)iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (uint8)*(uint4 *)(param_2 + 0x18);
    if (*(uint8 *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  pxVar2 = *(xunknown8 **)(*(int8 *)(param_1 + 0x10) + uVar3 * 8);
  uVar1 = *(uint1 *)((int8)pxVar2 + 9);
  if ((uVar1 & 0xc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x000be32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)*pxVar2)();
    return uVar3;
  }
  return (uint8)(uVar1 < 0x40);
}

/* 0xbe358  size=108 */
uint8 FUN_000be358(int8 param_1,int8 param_2)

{
  uint1 uVar1;
  int8 *piVar2;
  uint8 uVar3;
  int8 iVar4;
  
  if (*(int4 *)(param_2 + 0x1c) == -1) {
    iVar4 = *(int8 *)(param_1 + 0x18);
    uVar3 = 0;
    *(xunknown4 *)(param_2 + 0x18) = 0;
    *(int4 *)(param_2 + 0x1c) = (int4)iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (uint8)*(uint4 *)(param_2 + 0x18);
    if (*(uint8 *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  piVar2 = *(int8 **)(*(int8 *)(param_1 + 0x10) + uVar3 * 8);
  uVar1 = *(uint1 *)((int8)piVar2 + 10);
  if ((uVar1 & 3) == 2) {
                    /* WARNING: Could not recover jumptable at 0x000be398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 8))();
    return uVar3;
  }
  return (uint8)((uVar1 & 3) == 0);
}

/* 0xbe3c4  size=108 */
uint8 FUN_000be3c4(int8 param_1,int8 param_2)

{
  uint2 uVar1;
  int8 *piVar2;
  uint8 uVar3;
  int8 iVar4;
  
  if (*(int4 *)(param_2 + 0x1c) == -1) {
    iVar4 = *(int8 *)(param_1 + 0x18);
    uVar3 = 0;
    *(xunknown4 *)(param_2 + 0x18) = 0;
    *(int4 *)(param_2 + 0x1c) = (int4)iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar3 = (uint8)*(uint4 *)(param_2 + 0x18);
    if (*(uint8 *)(param_1 + 0x18) <= uVar3) {
      return 0;
    }
  }
  piVar2 = *(int8 **)(*(int8 *)(param_1 + 0x10) + uVar3 * 8);
  uVar1 = *(uint2 *)((int8)piVar2 + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000be404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar2 + 0x10))();
    return uVar3;
  }
  return (uint8)(uVar1 == 0);
}

/* 0xbe430  size=76 */
void FUN_000be430(int8 param_1,int8 param_2)

{
  uint8 uVar1;
  int8 iVar2;
  
  if (*(int4 *)(param_2 + 0x1c) == -1) {
    iVar2 = *(int8 *)(param_1 + 0x18);
    uVar1 = 0;
    *(xunknown4 *)(param_2 + 0x18) = 0;
    *(int4 *)(param_2 + 0x1c) = (int4)iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (uint8)*(uint4 *)(param_2 + 0x18);
    if (*(uint8 *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000be460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(*(int8 *)(param_1 + 0x10) + uVar1 * 8) + 0x18))();
  return;
}

/* 0xbe47c  size=76 */
void FUN_000be47c(int8 param_1,int8 param_2)

{
  uint8 uVar1;
  int8 iVar2;
  
  if (*(int4 *)(param_2 + 0x1c) == -1) {
    iVar2 = *(int8 *)(param_1 + 0x18);
    uVar1 = 0;
    *(xunknown4 *)(param_2 + 0x18) = 0;
    *(int4 *)(param_2 + 0x1c) = (int4)iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (uint8)*(uint4 *)(param_2 + 0x18);
    if (*(uint8 *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000be4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(*(int8 *)(param_1 + 0x10) + uVar1 * 8) + 0x20))();
  return;
}

/* 0xbe4c8  size=76 */
void FUN_000be4c8(int8 param_1,int8 param_2)

{
  uint8 uVar1;
  int8 iVar2;
  
  if (*(int4 *)(param_2 + 0x1c) == -1) {
    iVar2 = *(int8 *)(param_1 + 0x18);
    uVar1 = 0;
    *(xunknown4 *)(param_2 + 0x18) = 0;
    *(int4 *)(param_2 + 0x1c) = (int4)iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    uVar1 = (uint8)*(uint4 *)(param_2 + 0x18);
    if (*(uint8 *)(param_1 + 0x18) <= uVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000be4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(*(int8 *)(param_1 + 0x10) + uVar1 * 8) + 0x28))();
  return;
}

/* 0xbe514  size=8 */
void FUN_000be514(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbe51c  size=448 */
void FUN_000be51c(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  uint8 uVar6;
  bool bVar7;
  
  iVar4 = param_2[1];
  iVar2 = *param_2;
  iVar1 = param_2[4];
  *(xunknown4 *)(param_2 + 4) = 0;
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
  *(xunknown1 *)(iVar2 + iVar4) = 0x3c;
  iVar2 = *(int8 *)(param_1 + 0x18);
  iVar4 = param_2[1] + 1;
  param_2[1] = iVar4;
  if (iVar2 != 0) {
    iVar2 = 0;
    bVar7 = true;
    do {
      while( true ) {
        iVar3 = iVar4;
        if (!bVar7) {
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
        bVar7 = false;
        iVar2 = iVar2 + 1;
        iVar4 = iVar5;
        if (iVar2 == *(int8 *)(param_1 + 0x18)) goto code_r0x000be654;
      }
      param_2[1] = iVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int8 *)(param_1 + 0x18));
  }
code_r0x000be654:
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
  *(int4 *)(param_2 + 4) = (int4)iVar1;
  return;
}

/* 0xbe6dc  size=8 */
void FUN_000be6dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbe6e4  size=180 */
void FUN_000be6e4(int8 param_1,xunknown8 param_2)

{
  int8 *piVar1;
  
  piVar1 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar1 + 0x20))(piVar1);
  if ((*(uint2 *)((int8)piVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  }
  piVar1 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
  if ((*(uint2 *)((int8)piVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000be794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  return;
}

/* 0xbe798  size=20 */
void FUN_000be798(int8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000be7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x30))();
  return;
}

/* 0xbe7ac  size=8 */
void FUN_000be7ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbe7b4  size=264 */
void FUN_000be7b4(int8 param_1,int8 *param_2)

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

/* 0xbe8bc  size=8 */
void FUN_000be8bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbe8c4  size=104 */
void FUN_000be8c4(int8 param_1,xunknown8 param_2)

{
  int8 *piVar1;
  
  piVar1 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 0x20))(piVar1);
  if ((*(uint2 *)((int8)piVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000be928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  return;
}

/* 0xbe92c  size=8 */
void FUN_000be92c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbe934  size=448 */
void FUN_000be934(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  bool bVar6;
  
  iVar4 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 0xcU) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 0x3ecU) {
      uVar5 = iVar4 + 0x3ecU;
    }
    param_2[2] = uVar5;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown8 *)(iVar2 + iVar4) = xRam0000000000027786;
  *(xunknown4 *)((xunknown8 *)(iVar2 + iVar4) + 1) = 0x3a66695f;
  iVar2 = *(int8 *)(param_1 + 0x18);
  iVar4 = param_2[1] + 0xc;
  param_2[1] = iVar4;
  if (iVar2 != 0) {
    iVar2 = 0;
    bVar6 = true;
    do {
      while( true ) {
        iVar1 = iVar4;
        if (!bVar6) {
          iVar1 = *param_2;
          if ((uint8)param_2[2] < iVar4 + 2U) {
            uVar5 = param_2[2] * 2;
            if (uVar5 <= iVar4 + 0x3e2U) {
              uVar5 = iVar4 + 0x3e2U;
            }
            param_2[2] = uVar5;
            iVar1 = realloc();
            *param_2 = iVar1;
            if (iVar1 == 0) goto code_r0x000ca7b0;
            iVar3 = param_2[1];
          }
          else {
            iVar3 = iVar4;
          }
          *(xunknown2 *)(iVar1 + iVar3) = 0x202c;
          iVar1 = param_2[1] + 2;
          param_2[1] = iVar1;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar2 * 8),param_2,0x12,0);
        iVar3 = param_2[1];
        if (iVar1 == iVar3) break;
        bVar6 = false;
        iVar2 = iVar2 + 1;
        iVar4 = iVar3;
        if (iVar2 == *(int8 *)(param_1 + 0x18)) goto code_r0x000bea84;
      }
      param_2[1] = iVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int8 *)(param_1 + 0x18));
  }
code_r0x000bea84:
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
  *(xunknown1 *)(iVar2 + iVar4) = 0x5d;
  return;
}

/* 0xbeaf4  size=8 */
void FUN_000beaf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbeafc  size=216 */
void FUN_000beafc(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 *piVar4;
  
  iVar2 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar2 + 5U) {
    uVar3 = param_2[2] * 2;
    if (uVar3 <= iVar2 + 0x3e5U) {
      uVar3 = iVar2 + 0x3e5U;
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
  *(xunknown1 *)((xunknown4 *)(iVar1 + iVar2) + 1) = 0x20;
  *(xunknown4 *)(iVar1 + iVar2) = 0x73696874;
  piVar4 = *(int8 **)(param_1 + 0x10);
  iVar2 = *piVar4;
  param_2[1] = param_2[1] + 5;
  (**(code **)(iVar2 + 0x20))(piVar4,param_2);
  if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000bebcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  return;
}

/* 0xbebd4  size=8 */
void FUN_000bebd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbebdc  size=12 */
xunknown8 FUN_000bebdc(void)

{
  return 1;
}

/* 0xbebe8  size=12 */
xunknown8 FUN_000bebe8(void)

{
  return 1;
}

/* 0xbebf4  size=268 */
void FUN_000bebf4(int8 param_1,int8 *param_2)

{
  int8 *piVar1;
  xunknown8 *pxVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 iVar5;
  
  piVar1 = *(int8 **)(param_1 + 0x10);
  if (piVar1 != (int8 *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
    pxVar2 = *(xunknown8 **)(param_1 + 0x10);
    if ((*(uint1 *)((int8)pxVar2 + 9) & 0xc0) == 0x80) {
      uVar3 = (**(code **)*pxVar2)(pxVar2,param_2);
      if ((uVar3 & 1) != 0) goto code_r0x000beca4;
    }
    else if (*(uint1 *)((int8)pxVar2 + 9) < 0x40) goto code_r0x000beca4;
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
    *(xunknown1 *)(iVar4 + iVar5) = 0x20;
    param_2[1] = param_2[1] + 1;
  }
code_r0x000beca4:
  piVar1 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
  if ((*(uint2 *)((int8)piVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000becf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  return;
}

/* 0xbed00  size=1232 */
void FUN_000bed00(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  int8 *piVar4;
  uint4 uVar5;
  int8 iVar6;
  int8 iVar7;
  uint8 uVar8;
  bool bVar9;
  
  iVar6 = param_2[1];
  iVar2 = *param_2;
  uVar8 = iVar6 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar8) {
    uVar8 = param_2[2] * 2;
    if (uVar8 <= iVar6 + 0x3e1U) {
      uVar8 = iVar6 + 0x3e1U;
    }
    param_2[2] = uVar8;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar6 = param_2[1];
    uVar8 = iVar6 + 1;
  }
  param_2[1] = uVar8;
  *(xunknown1 *)(iVar2 + iVar6) = 0x28;
  iVar6 = param_2[1];
  if (*(int8 *)(param_1 + 0x28) != 0) {
    iVar2 = 0;
    bVar9 = true;
    do {
      while( true ) {
        iVar3 = iVar6;
        if (!bVar9) {
          iVar3 = *param_2;
          if ((uint8)param_2[2] < iVar6 + 2U) {
            uVar8 = param_2[2] * 2;
            if (uVar8 <= iVar6 + 0x3e2U) {
              uVar8 = iVar6 + 0x3e2U;
            }
            param_2[2] = uVar8;
            iVar3 = realloc();
            *param_2 = iVar3;
            if (iVar3 == 0) goto code_r0x000ca7b0;
            iVar7 = param_2[1];
          }
          else {
            iVar7 = iVar6;
          }
          *(xunknown2 *)(iVar3 + iVar7) = 0x202c;
          iVar3 = param_2[1] + 2;
          param_2[1] = iVar3;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x20) + iVar2 * 8),param_2,0x12,0);
        iVar7 = param_2[1];
        if (iVar3 == iVar7) break;
        bVar9 = false;
        iVar2 = iVar2 + 1;
        iVar6 = iVar7;
        if (iVar2 == *(int8 *)(param_1 + 0x28)) goto code_r0x000bee3c;
      }
      param_2[1] = iVar6;
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int8 *)(param_1 + 0x28));
  }
code_r0x000bee3c:
  uVar8 = iVar6 + 1;
  iVar2 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar8) {
    uVar8 = param_2[2] * 2;
    if (uVar8 <= iVar6 + 0x3e1U) {
      uVar8 = iVar6 + 0x3e1U;
    }
    param_2[2] = uVar8;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar6 = param_2[1];
    uVar8 = iVar6 + 1;
  }
  param_2[1] = uVar8;
  *(xunknown1 *)(iVar2 + iVar6) = 0x29;
  piVar4 = *(int8 **)(param_1 + 0x10);
  if (piVar4 != (int8 *)0x0) {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  uVar5 = *(uint4 *)(param_1 + 0x40);
  if ((uVar5 & 1) != 0) {
    iVar6 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 6U) {
      uVar8 = param_2[2] * 2;
      if (uVar8 <= iVar6 + 0x3e6U) {
        uVar8 = iVar6 + 0x3e6U;
      }
      param_2[2] = uVar8;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    *(xunknown2 *)((xunknown4 *)(iVar2 + iVar6) + 1) = 0x7473;
    *(xunknown4 *)(iVar2 + iVar6) = 0x6e6f6320;
    uVar5 = *(uint4 *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    iVar6 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 9U) {
      uVar8 = param_2[2] * 2;
      if (uVar8 <= iVar6 + 0x3e9U) {
        uVar8 = iVar6 + 0x3e9U;
      }
      param_2[2] = uVar8;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    xVar1 = xRam000000000003d18e;
    *(xunknown1 *)((xunknown8 *)(iVar2 + iVar6) + 1) = 0x65;
    *(xunknown8 *)(iVar2 + iVar6) = xVar1;
    uVar5 = *(uint4 *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    iVar6 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 9U) {
      uVar8 = param_2[2] * 2;
      if (uVar8 <= iVar6 + 0x3e9U) {
        uVar8 = iVar6 + 0x3e9U;
      }
      param_2[2] = uVar8;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    xVar1 = xRam000000000003fb5c;
    *(xunknown1 *)((xunknown8 *)(iVar2 + iVar6) + 1) = 0x74;
    *(xunknown8 *)(iVar2 + iVar6) = xVar1;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x44) == '\x02') {
    iVar6 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 3U) {
      uVar8 = param_2[2] * 2;
      if (uVar8 <= iVar6 + 0x3e3U) {
        uVar8 = iVar6 + 0x3e3U;
      }
      param_2[2] = uVar8;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    *(xunknown1 *)((xunknown2 *)(iVar2 + iVar6) + 1) = 0x26;
    *(xunknown2 *)(iVar2 + iVar6) = 0x2620;
    iVar6 = 3;
code_r0x000bf088:
    param_2[1] = param_2[1] + iVar6;
  }
  else if (*(char *)(param_1 + 0x44) == '\x01') {
    iVar6 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 2U) {
      uVar8 = param_2[2] * 2;
      if (uVar8 <= iVar6 + 0x3e2U) {
        uVar8 = iVar6 + 0x3e2U;
      }
      param_2[2] = uVar8;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar6 = param_2[1];
    }
    *(xunknown2 *)(iVar2 + iVar6) = 0x2620;
    iVar6 = 2;
    goto code_r0x000bf088;
  }
  piVar4 = *(int8 **)(param_1 + 0x30);
  if ((piVar4 != (int8 *)0x0) &&
     ((**(code **)(*piVar4 + 0x20))(piVar4,param_2), (*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40))
  {
    (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
  }
  if (*(int8 *)(param_1 + 0x38) != 0) {
    iVar6 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar6 + 10U) {
      uVar8 = param_2[2] * 2;
      if (uVar8 <= iVar6 + 0x3eaU) {
        uVar8 = iVar6 + 0x3eaU;
      }
      param_2[2] = uVar8;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar6 = param_2[1];
    }
    xVar1 = xRam0000000000040abf;
    *(xunknown2 *)((xunknown8 *)(iVar2 + iVar6) + 1) = 0x2073;
    *(xunknown8 *)(iVar2 + iVar6) = xVar1;
    piVar4 = *(int8 **)(param_1 + 0x38);
    iVar6 = *piVar4;
    param_2[1] = param_2[1] + 10;
    (**(code **)(iVar6 + 0x20))(piVar4,param_2);
    if ((*(uint2 *)((int8)piVar4 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000bf1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar4 + 0x28))(piVar4,param_2);
      return;
    }
  }
  return;
}

/* 0xbf1d0  size=8 */
void FUN_000bf1d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbf1d8  size=364 */
void FUN_000bf1d8(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  int8 *piVar7;
  
  piVar7 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar7 + 0x20))(piVar7);
  if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
  }
  iVar3 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 2U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e2U) {
      uVar5 = iVar3 + 0x3e2U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  *(xunknown2 *)(iVar1 + iVar3) = 0x2820;
  iVar3 = param_2[1] + 2;
  param_2[1] = iVar3;
  iVar1 = *(int8 *)(param_1 + 0x20);
  if (iVar1 != 0) {
    xVar6 = *(xunknown8 *)(param_1 + 0x18);
    iVar2 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar3 + iVar1)) {
      uVar4 = param_2[2] * 2;
      uVar5 = iVar3 + iVar1 + 0x3e0;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      param_2[2] = uVar4;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
    }
    memcpy(iVar2 + iVar3,xVar6,iVar1);
    iVar3 = param_2[1] + iVar1;
    param_2[1] = iVar3;
  }
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 1U) {
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
  }
  *(xunknown1 *)(iVar1 + iVar3) = 0x29;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xbf344  size=8 */
void FUN_000bf344(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xbf34c  size=1520 */
xunknown8 * FUN_000bf34c(int8 *param_1)

{
  char *pcVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  int8 *piVar6;
  xunknown8 *pxVar7;
  int2 *piVar8;
  int2 *piVar9;
  int8 iVar10;
  int2 *piVar11;
  xunknown1 xVar12;
  int8 iVar13;
  int8 *piVar14;
  uint4 uVar15;
  xunknown8 *pxVar16;
  xunknown1 axVar17 [16];
  
  piVar9 = (int2 *)*param_1;
  piVar8 = (int2 *)param_1[1];
  piVar11 = piVar8;
  if ((piVar9 == piVar8) || ((char)*piVar9 != 'r')) {
    uVar15 = 0;
    if (piVar9 != piVar8) goto code_r0x000bf3b4;
joined_r0x000bf3f4:
    if ((uint8)((int8)piVar8 - (int8)piVar11) < 2) goto code_r0x000bf408;
    if (*piVar11 == 0x6f44) {
      piVar14 = (int8 *)param_1[0x266];
      *param_1 = (int8)(piVar11 + 1);
      iVar3 = piVar14[1];
      piVar6 = piVar14;
      if (iVar3 - 0xfd0U < 0xfffffffffffff00f || iVar3 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000bf938;
        iVar3 = 0;
        *piVar6 = (int8)piVar14;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar3 + 0x20;
      pxVar16 = (xunknown8 *)((int8)piVar6 + iVar3 + 0x10);
      *pxVar16 = 0xd0548;
      *(xunknown1 *)((int8)piVar6 + iVar3 + 0x18) = 8;
      *(uint2 *)((int8)piVar6 + iVar3 + 0x19) =
           *(uint2 *)((int8)piVar6 + iVar3 + 0x19) & 0xf000 | 0x540;
      *(xunknown8 *)((int8)piVar6 + iVar3 + 0x20) = 0x2a4bb;
      *(xunknown8 *)((int8)piVar6 + iVar3 + 0x28) = 8;
    }
    else if (*piVar11 == 0x4f44) {
      *param_1 = (int8)(piVar11 + 1);
      iVar3 = FUN_000b0fa8(param_1);
      if (iVar3 == 0) {
        return (xunknown8 *)0x0;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 != 'E') {
        return (xunknown8 *)0x0;
      }
      piVar14 = (int8 *)param_1[0x266];
      *param_1 = (int8)(pcVar1 + 1);
      iVar10 = piVar14[1];
      piVar6 = piVar14;
      if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000bf938;
        iVar10 = 0;
        *piVar6 = (int8)piVar14;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar10 + 0x20;
      pxVar16 = (xunknown8 *)((int8)piVar6 + iVar10 + 0x10);
      *pxVar16 = 0xd2758;
      *(int8 *)((int8)piVar6 + iVar10 + 0x20) = iVar3;
      *(xunknown1 *)((int8)piVar6 + iVar10 + 0x18) = 0x11;
      *(uint2 *)((int8)piVar6 + iVar10 + 0x19) =
           *(uint2 *)((int8)piVar6 + iVar10 + 0x19) & 0xf000 | 0x540;
    }
    else {
      if (*piVar11 != 0x7744) goto code_r0x000bf408;
      iVar3 = param_1[2];
      iVar10 = param_1[3];
      piVar11 = piVar11 + 1;
      piVar6 = param_1 + 5;
      *param_1 = (int8)piVar11;
      while ((piVar11 == piVar8 || ((char)*piVar11 != 'E'))) {
        iVar2 = FUN_000abd5c(param_1);
        if (iVar2 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar14 = (int8 *)param_1[3];
        if (piVar14 == (int8 *)param_1[4]) {
          iVar4 = (int8)piVar14 - param_1[2];
          if ((int8 *)param_1[2] == piVar6) {
            iVar13 = malloc(iVar4 * 2);
            if (iVar13 == 0) goto code_r0x000ca7b0;
            if (piVar14 != piVar6) {
              memcpy(iVar13,piVar6,iVar4);
            }
            param_1[2] = iVar13;
          }
          else {
            iVar13 = realloc();
            param_1[2] = iVar13;
            if (iVar13 == 0) goto code_r0x000ca7b0;
          }
          piVar14 = (int8 *)(iVar13 + iVar4);
          param_1[4] = iVar13 + (iVar4 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar14 + 1);
        *piVar14 = iVar2;
        piVar8 = (int2 *)param_1[1];
        piVar11 = (int2 *)*param_1;
      }
      *param_1 = (int8)((int8)piVar11 + 1);
      axVar17 = FUN_000adec4(param_1,iVar10 - iVar3 >> 3);
      piVar14 = (int8 *)param_1[0x266];
      iVar3 = piVar14[1];
      piVar6 = piVar14;
      if (iVar3 - 0xfd0U < 0xfffffffffffff00f || iVar3 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000bf938;
        iVar3 = 0;
        *piVar6 = (int8)piVar14;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar3 + 0x20;
      pxVar16 = (xunknown8 *)((int8)piVar6 + iVar3 + 0x10);
      *pxVar16 = 0xd27c8;
      *(xunknown1 (*) [16])((int8)piVar6 + iVar3 + 0x20) = axVar17;
      *(xunknown1 *)((int8)piVar6 + iVar3 + 0x18) = 0x12;
      *(uint2 *)((int8)piVar6 + iVar3 + 0x19) =
           *(uint2 *)((int8)piVar6 + iVar3 + 0x19) & 0xf000 | 0x540;
    }
  }
  else {
    piVar9 = (int2 *)((int8)piVar9 + 1);
    uVar15 = 4;
    *param_1 = (int8)piVar9;
    if (piVar9 == piVar8) goto joined_r0x000bf3f4;
code_r0x000bf3b4:
    if ((char)*piVar9 == 'V') {
      piVar9 = (int2 *)((int8)piVar9 + 1);
      uVar15 = uVar15 | 2;
      *param_1 = (int8)piVar9;
    }
    if (piVar9 != piVar8) {
      piVar11 = piVar9;
      if ((char)*piVar9 == 'K') {
        uVar15 = uVar15 | 1;
        *param_1 = (int8)piVar9 + 1;
        piVar11 = (int2 *)((int8)piVar9 + 1);
      }
      goto joined_r0x000bf3f4;
    }
code_r0x000bf408:
    pxVar16 = (xunknown8 *)0x0;
  }
  piVar9 = (int2 *)*param_1;
  piVar11 = (int2 *)param_1[1];
  if ((1 < (uint8)((int8)piVar11 - (int8)piVar9)) && (*piVar9 == 0x7844)) {
    piVar9 = piVar9 + 1;
    *param_1 = (int8)piVar9;
  }
  if ((piVar9 == piVar11) || ((char)*piVar9 != 'F')) {
    return (xunknown8 *)0x0;
  }
  piVar8 = (int2 *)((int8)piVar9 + 1);
  *param_1 = (int8)piVar8;
  if ((piVar8 != piVar11) && (*(char *)piVar8 == 'Y')) {
    *param_1 = (int8)(piVar9 + 1);
  }
  iVar3 = FUN_000abd5c(param_1);
  if (iVar3 == 0) {
    return (xunknown8 *)0x0;
  }
  iVar10 = param_1[2];
  iVar2 = param_1[3];
  piVar6 = param_1 + 5;
  piVar9 = (int2 *)*param_1;
  piVar11 = (int2 *)param_1[1];
  if (piVar9 != piVar11) goto code_r0x000bf630;
code_r0x000bf684:
  if (1 < (uint8)((int8)piVar11 - (int8)piVar9)) {
    if (*piVar9 == 0x4552) {
      xVar12 = 1;
      iVar4 = 2;
code_r0x000bf894:
      *param_1 = (int8)((int8)piVar9 + iVar4);
      axVar17 = FUN_000adec4(param_1,iVar2 - iVar10 >> 3);
      piVar14 = (int8 *)param_1[0x266];
      iVar10 = piVar14[1];
      piVar6 = piVar14;
      if (iVar10 - 0xfb0U < 0xfffffffffffff00f || iVar10 == -0x41) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) {
code_r0x000bf938:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar16 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar16;
        }
        iVar10 = 0;
        *piVar6 = (int8)piVar14;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar10 + 0x40;
      pxVar7 = (xunknown8 *)((int8)piVar6 + iVar10 + 0x10);
      *pxVar7 = 0xd2838;
      *(xunknown1 *)((int8)piVar6 + iVar10 + 0x18) = 0x10;
      *(int8 *)((int8)piVar6 + iVar10 + 0x20) = iVar3;
      *(xunknown1 (*) [16])((int8)piVar6 + iVar10 + 0x28) = axVar17;
      *(uint4 *)((int8)piVar6 + iVar10 + 0x38) = uVar15;
      *(uint2 *)((int8)piVar6 + iVar10 + 0x19) =
           *(uint2 *)((int8)piVar6 + iVar10 + 0x19) & 0xf000 | 0x100;
      *(xunknown1 *)((int8)piVar6 + iVar10 + 0x3c) = xVar12;
      *(xunknown8 **)((int8)piVar6 + iVar10 + 0x40) = pxVar16;
      return pxVar7;
    }
    if (*piVar9 == 0x454f) {
      iVar4 = 2;
      xVar12 = 2;
      goto code_r0x000bf894;
    }
  }
  iVar4 = FUN_000abd5c(param_1);
  if (iVar4 == 0) {
    return (xunknown8 *)0x0;
  }
  piVar14 = (int8 *)param_1[3];
  if (piVar14 == (int8 *)param_1[4]) {
    iVar13 = (int8)piVar14 - param_1[2];
    if ((int8 *)param_1[2] == piVar6) {
      iVar5 = malloc(iVar13 * 2);
      if (iVar5 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar16 = (xunknown8 *)(*got_abort)();
        return pxVar16;
      }
      if (piVar14 != piVar6) {
        memcpy(iVar5,piVar6,iVar13);
      }
      param_1[2] = iVar5;
    }
    else {
      iVar5 = realloc();
      param_1[2] = iVar5;
      if (iVar5 == 0) goto code_r0x000ca7b0;
    }
    piVar14 = (int8 *)(iVar5 + iVar13);
    param_1[4] = iVar5 + (iVar13 >> 2) * 8;
  }
  param_1[3] = (int8)(piVar14 + 1);
  *piVar14 = iVar4;
  piVar9 = (int2 *)*param_1;
  piVar11 = (int2 *)param_1[1];
  if (piVar9 != piVar11) {
code_r0x000bf630:
    do {
      if ((char)*piVar9 == 'E') {
        xVar12 = 0;
        iVar4 = 1;
        goto code_r0x000bf894;
      }
      if ((char)*piVar9 != 'v') break;
      *param_1 = (int8)((int8)piVar9 + 1);
      piVar9 = (int2 *)*param_1;
      piVar11 = (int2 *)param_1[1];
    } while (piVar9 != piVar11);
  }
  goto code_r0x000bf684;
}

/* 0xbf93c  size=1116 */
xunknown8 * FUN_000bf93c(int8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  uint2 uVar3;
  int8 iVar4;
  int8 iVar5;
  int8 *piVar6;
  xunknown8 *pxVar7;
  xunknown8 *pxVar8;
  int8 iVar9;
  uint1 *puVar10;
  uint8 uVar11;
  uint1 *puVar12;
  uint4 uVar13;
  uint1 *puVar14;
  uint8 uVar15;
  uint8 uVar16;
  uint1 *puVar17;
  uint1 *puVar18;
  int8 *piVar19;
  
  puVar10 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if (puVar10 == puVar2) {
code_r0x000bf9bc:
    uVar13 = 0;
  }
  else {
    if (*puVar10 == 0x55) {
      puVar18 = puVar10 + 1;
      *param_1 = (int8)puVar18;
      if (puVar2 == puVar18) {
        return (xunknown8 *)0x0;
      }
      if (*puVar18 - 0x3a < 0xfffffff6) {
        return (xunknown8 *)0x0;
      }
      iVar4 = 0;
      uVar16 = 0;
      do {
        uVar15 = uVar16;
        iVar5 = iVar4;
        puVar18 = puVar10 + iVar5 + 2;
        *param_1 = (int8)puVar18;
        uVar11 = (uint8)puVar10[iVar5 + 1];
        uVar16 = (uVar11 + uVar15 * 10) - 0x30;
        if (puVar18 == puVar2) {
          puVar18 = puVar2;
          if (uVar16 != 0) {
            return (xunknown8 *)0x0;
          }
          goto code_r0x000bfb18;
        }
        iVar4 = iVar5 + 1;
      } while (*puVar18 - 0x30 < 10);
      puVar18 = puVar10 + iVar5 + 2;
      if ((uint8)((int8)puVar2 - (int8)puVar18) < uVar16) {
        return (xunknown8 *)0x0;
      }
code_r0x000bfb18:
      puVar1 = puVar18 + uVar16;
      *param_1 = (int8)puVar1;
      if (uVar16 == 0) {
        return (xunknown8 *)0x0;
      }
      if ((uVar16 < 9) || (*(int8 *)puVar18 != 0x746f7270636a626f || puVar18[8] != 0x6f)) {
        if ((puVar2 == puVar1) || (*puVar1 != 0x49)) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_000af668(param_1,0);
          if (iVar4 == 0) {
            return (xunknown8 *)0x0;
          }
        }
        iVar5 = FUN_000bf93c(param_1);
        if (iVar5 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar19 = (int8 *)param_1[0x266];
        iVar9 = piVar19[1];
        piVar6 = piVar19;
        if (iVar9 - 0xfc0U < 0xfffffffffffff00f || iVar9 == -0x31) {
          piVar6 = (int8 *)malloc(0x1000);
          if (piVar6 == (int8 *)0x0) goto code_r0x000bfd94;
          iVar9 = 0;
          *piVar6 = (int8)piVar19;
          piVar6[1] = 0;
          param_1[0x266] = (int8)piVar6;
        }
        piVar6[1] = iVar9 + 0x30;
        pxVar7 = (xunknown8 *)((int8)piVar6 + iVar9 + 0x10);
        *pxVar7 = 0xd2918;
        uVar3 = *(uint2 *)((int8)piVar6 + iVar9 + 0x19);
        *(xunknown1 *)((int8)piVar6 + iVar9 + 0x18) = 2;
        *(int8 *)((int8)piVar6 + iVar9 + 0x20) = iVar5;
        *(uint1 **)((int8)piVar6 + iVar9 + 0x28) = puVar18;
        *(uint8 *)((int8)piVar6 + iVar9 + 0x30) = uVar16;
        *(int8 *)((int8)piVar6 + iVar9 + 0x38) = iVar4;
      }
      else {
        puVar18 = puVar10 + iVar5 + 0xb;
        puVar14 = puVar10 + uVar11 + uVar15 * 10 + iVar5 + -0x2e;
        *param_1 = (int8)puVar18;
        param_1[1] = (int8)puVar14;
        if ((puVar18 == puVar14) || (*puVar18 - 0x3a < 0xfffffff6)) {
code_r0x000bfcbc:
          *param_1 = (int8)puVar1;
          param_1[1] = (int8)puVar2;
          return (xunknown8 *)0x0;
        }
        puVar17 = (uint1 *)0x0;
        iVar4 = uVar15 * 10 + uVar11 + -0x3a;
        puVar18 = puVar10 + iVar5 + 0xc;
        do {
          puVar12 = puVar18;
          *param_1 = (int8)puVar12;
          puVar17 = (uint1 *)((uint8)puVar12[-1] + (int8)puVar17 * 10 + -0x30);
          if (iVar4 == 0) goto code_r0x000bfca0;
          iVar4 = iVar4 + -1;
          puVar18 = puVar12 + 1;
        } while (*puVar12 - 0x30 < 10);
        puVar14 = puVar12;
code_r0x000bfca0:
        if (puVar10 + iVar5 + (uVar15 * 10 - (int8)puVar14) + uVar11 + -0x2e < puVar17)
        goto code_r0x000bfcbc;
        *param_1 = (int8)puVar1;
        param_1[1] = (int8)puVar2;
        if (puVar17 == (uint1 *)0x0) {
          return (xunknown8 *)0x0;
        }
        iVar4 = FUN_000bf93c(param_1);
        if (iVar4 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar19 = (int8 *)param_1[0x266];
        iVar5 = piVar19[1];
        piVar6 = piVar19;
        if (iVar5 - 0xfc0U < 0xfffffffffffff00f || iVar5 == -0x31) {
          piVar6 = (int8 *)malloc(0x1000);
          if (piVar6 == (int8 *)0x0) goto code_r0x000bfd94;
          iVar5 = 0;
          *piVar6 = (int8)piVar19;
          piVar6[1] = 0;
          param_1[0x266] = (int8)piVar6;
        }
        piVar6[1] = iVar5 + 0x30;
        pxVar7 = (xunknown8 *)((int8)piVar6 + iVar5 + 0x10);
        *pxVar7 = 0xd28a8;
        uVar3 = *(uint2 *)((int8)piVar6 + iVar5 + 0x19);
        *(xunknown1 *)((int8)piVar6 + iVar5 + 0x18) = 0xb;
        *(int8 *)((int8)piVar6 + iVar5 + 0x20) = iVar4;
        *(uint1 **)((int8)piVar6 + iVar5 + 0x28) = puVar14;
        *(uint1 **)((int8)piVar6 + iVar5 + 0x30) = puVar17;
      }
      *(uint2 *)((int8)pxVar7 + 9) = uVar3 & 0xf000 | 0x540;
      return pxVar7;
    }
    if (*puVar10 != 0x72) goto code_r0x000bf9bc;
    puVar10 = puVar10 + 1;
    uVar13 = 4;
    *param_1 = (int8)puVar10;
  }
  if (puVar10 != puVar2) {
    if (*puVar10 == 0x56) {
      puVar10 = puVar10 + 1;
      uVar13 = uVar13 | 2;
      *param_1 = (int8)puVar10;
    }
    if ((puVar10 != puVar2) && (*puVar10 == 0x4b)) {
      uVar13 = uVar13 | 1;
      *param_1 = (int8)(puVar10 + 1);
    }
  }
  pxVar7 = (xunknown8 *)FUN_000abd5c(param_1);
  if ((pxVar7 == (xunknown8 *)0x0) || (uVar13 == 0)) {
    return pxVar7;
  }
  piVar19 = (int8 *)param_1[0x266];
  iVar4 = piVar19[1];
  piVar6 = piVar19;
  if (iVar4 - 0xfd0U < 0xfffffffffffff00f || iVar4 == -0x21) {
    piVar6 = (int8 *)malloc(0x1000);
    if (piVar6 == (int8 *)0x0) {
code_r0x000bfd94:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
      return pxVar7;
    }
    iVar4 = 0;
    *piVar6 = (int8)piVar19;
    piVar6[1] = 0;
    param_1[0x266] = (int8)piVar6;
  }
  piVar6[1] = iVar4 + 0x20;
  uVar3 = *(uint2 *)((int8)pxVar7 + 9);
  pxVar8 = (xunknown8 *)((int8)piVar6 + iVar4 + 0x10);
  *pxVar8 = 0xd2988;
  *(xunknown8 **)((int8)piVar6 + iVar4 + 0x20) = pxVar7;
  *(xunknown1 *)((int8)piVar6 + iVar4 + 0x18) = 3;
  *(uint4 *)((int8)piVar6 + iVar4 + 0x1c) = uVar13;
  *(uint2 *)((int8)piVar6 + iVar4 + 0x19) =
       *(uint2 *)((int8)piVar6 + iVar4 + 0x19) & 0xf000 | uVar3 & 0xfc0;
  return pxVar8;
}

/* 0xbfd98  size=168 */
xunknown8 * FUN_000bfd98(int8 param_1,xunknown8 param_2)

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

/* 0xbfe40  size=168 */
xunknown8 * FUN_000bfe40(int8 param_1,xunknown8 param_2)

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

/* 0xbfee8  size=168 */
xunknown8 * FUN_000bfee8(int8 param_1,xunknown8 param_2)

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

/* 0xbff90  size=172 */
void FUN_000bff90(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

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
  xVar6 = param_2[1];
  xVar5 = *param_2;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd29f8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 7;
  xVar3 = *param_3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar6;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar5;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xc003c  size=160 */
void FUN_000c003c(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2a68;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x1f;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xc00dc  size=176 */
void FUN_000c00dc(int8 param_1,xunknown8 *param_2,char param_3)

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
  xVar3 = *param_2;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2ad8;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x20;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(bool *)((int8)piVar1 + iVar2 + 0x28) = param_3 != '\0';
  return;
}

/* 0xc018c  size=172 */
void FUN_000c018c(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2b48;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar6;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  return;
}

/* 0xc0238  size=784 */
xunknown8 * FUN_000c0238(int8 *param_1)

{
  uint1 *puVar1;
  char *pcVar2;
  int2 *piVar3;
  char *pcVar4;
  uint1 *puVar5;
  uint1 uVar6;
  int8 *piVar7;
  xunknown8 *pxVar8;
  uint2 uVar9;
  int8 iVar10;
  int8 iVar11;
  uint1 *puVar12;
  int8 iVar13;
  uint1 *puVar14;
  int8 *piVar15;
  int8 iStack_40;
  xunknown8 *pxStack_38;
  
  piVar3 = (int2 *)*param_1;
  puVar5 = (uint1 *)param_1[1];
  if (1 < (uint8)((int8)puVar5 - (int8)piVar3)) {
    if (*piVar3 != 0x7644) {
      return (xunknown8 *)0x0;
    }
    puVar1 = (uint1 *)(piVar3 + 1);
    *param_1 = (int8)puVar1;
    if ((puVar5 != puVar1) && (uVar6 = *puVar1, 0x30 < uVar6)) {
      if (uVar6 < 0x3a) {
        puVar14 = (uint1 *)(piVar3 + 1);
        puVar12 = puVar1;
        do {
          if (*puVar12 - 0x3a < 0xfffffff6) goto code_r0x000c0300;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
          *param_1 = (int8)puVar12;
        } while (puVar12 != puVar5);
        puVar14 = puVar5;
code_r0x000c0300:
        piVar15 = (int8 *)param_1[0x266];
        iVar13 = piVar15[1];
        piVar7 = piVar15;
        if (0xfffffffffffff00e < iVar13 - 0xfd0U && iVar13 != -0x21) {
code_r0x000c0338:
          piVar7[1] = iVar13 + 0x20;
          pxStack_38 = (xunknown8 *)((int8)piVar7 + iVar13 + 0x10);
          *pxStack_38 = 0xd0548;
          *(xunknown1 *)((int8)piVar7 + iVar13 + 0x18) = 8;
          *(uint2 *)((int8)piVar7 + iVar13 + 0x19) =
               *(uint2 *)((int8)piVar7 + iVar13 + 0x19) & 0xf000 | 0x540;
          *(uint1 **)((int8)piVar7 + iVar13 + 0x20) = puVar1;
          *(int8 *)((int8)piVar7 + iVar13 + 0x28) = (int8)puVar14 - (int8)puVar1;
          pcVar4 = (char *)*param_1;
          if (pcVar4 == (char *)param_1[1]) {
            return (xunknown8 *)0x0;
          }
          if (*pcVar4 != '_') {
            return (xunknown8 *)0x0;
          }
          pcVar2 = pcVar4 + 1;
          *param_1 = (int8)pcVar2;
          if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'p')) {
            *param_1 = (int8)(pcVar4 + 2);
            pxVar8 = (xunknown8 *)FUN_000c1c18(param_1,&pxStack_38);
            return pxVar8;
          }
          iStack_40 = FUN_000abd5c();
          if (iStack_40 == 0) {
            return (xunknown8 *)0x0;
          }
          pxVar8 = (xunknown8 *)FUN_000c1cb8(param_1,&iStack_40,&pxStack_38);
          return pxVar8;
        }
        piVar7 = (int8 *)malloc(0x1000);
        if (piVar7 != (int8 *)0x0) {
          iVar13 = 0;
          *piVar7 = (int8)piVar15;
          piVar7[1] = 0;
          param_1[0x266] = (int8)piVar7;
          goto code_r0x000c0338;
        }
        goto code_r0x000c0544;
      }
      if (uVar6 == 0x5f) {
        *param_1 = (int8)piVar3 + 3;
        iVar13 = FUN_000abd5c();
        if (iVar13 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar15 = (int8 *)param_1[0x266];
        iVar10 = piVar15[1];
        piVar7 = piVar15;
        if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
          piVar7 = (int8 *)malloc(0x1000);
          if (piVar7 == (int8 *)0x0) goto code_r0x000c0544;
          iVar10 = 0;
          *piVar7 = (int8)piVar15;
          piVar7[1] = 0;
          param_1[0x266] = (int8)piVar7;
        }
        piVar7[1] = iVar10 + 0x20;
        pxVar8 = (xunknown8 *)((int8)piVar7 + iVar10 + 0x10);
        *pxVar8 = 0xd2c28;
        uVar9 = *(uint2 *)((int8)piVar7 + iVar10 + 0x19);
        *(int8 *)((int8)piVar7 + iVar10 + 0x20) = iVar13;
        *(xunknown8 *)((int8)piVar7 + iVar10 + 0x28) = 0;
        goto code_r0x000c04e8;
      }
    }
    iVar13 = FUN_000b0fa8();
    if (iVar13 != 0) {
      pcVar4 = (char *)*param_1;
      if (pcVar4 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar4 != '_') {
        return (xunknown8 *)0x0;
      }
      *param_1 = (int8)(pcVar4 + 1);
      iVar10 = FUN_000abd5c(param_1);
      if (iVar10 != 0) {
        piVar15 = (int8 *)param_1[0x266];
        iVar11 = piVar15[1];
        piVar7 = piVar15;
        if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
          piVar7 = (int8 *)malloc(0x1000);
          if (piVar7 == (int8 *)0x0) {
code_r0x000c0544:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pxVar8 = (xunknown8 *)(*pcRam00000000000d4468)();
            return pxVar8;
          }
          iVar11 = 0;
          *piVar7 = (int8)piVar15;
          piVar7[1] = 0;
          param_1[0x266] = (int8)piVar7;
        }
        piVar7[1] = iVar11 + 0x20;
        pxVar8 = (xunknown8 *)((int8)piVar7 + iVar11 + 0x10);
        *pxVar8 = 0xd2c28;
        uVar9 = *(uint2 *)((int8)piVar7 + iVar11 + 0x19);
        *(int8 *)((int8)piVar7 + iVar11 + 0x20) = iVar10;
        *(int8 *)((int8)piVar7 + iVar11 + 0x28) = iVar13;
code_r0x000c04e8:
        *(xunknown1 *)(pxVar8 + 1) = 0x1d;
        *(uint2 *)((int8)pxVar8 + 9) = uVar9 & 0xf000 | 0x540;
        return pxVar8;
      }
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xc0548  size=404 */
/* WARNING: Removing unreachable block (ram,0x000ad534) */
/* WARNING: Removing unreachable block (ram,0x000ad494) */
/* WARNING: Removing unreachable block (ram,0x000ad428) */
/* WARNING: Removing unreachable block (ram,0x000ad4a4) */
/* WARNING: Removing unreachable block (ram,0x000ad308) */
/* WARNING: Removing unreachable block (ram,0x000ad4dc) */
/* WARNING: Removing unreachable block (ram,0x000ad8ec) */
/* WARNING: Removing unreachable block (ram,0x000ad44c) */

xunknown8 * FUN_000c0548(int8 *param_1)

{
  char *pcVar1;
  uint1 *puVar2;
  char *pcVar3;
  int2 *piVar4;
  uint1 uVar5;
  int8 iVar6;
  int8 *piVar7;
  xunknown8 *pxVar8;
  xunknown8 *pxVar9;
  uint1 *puVar10;
  int8 iVar11;
  uint1 *puVar12;
  xunknown8 xVar13;
  int8 *piVar14;
  xunknown8 xVar15;
  int8 *piVar16;
  int8 iStack_110;
  uint8 auStack_108 [19];
  int8 aiStack_70 [4];
  
  piVar4 = (int2 *)*param_1;
  if (1 < (uint8)(param_1[1] - (int8)piVar4)) {
    if (*piVar4 == 0x7354) {
      xVar13 = 0x41450 /* "struct" */;
      xVar15 = 6;
      *param_1 = (int8)(piVar4 + 1);
      iVar6 = FUN_000ad294(param_1,0);
    }
    else if (*piVar4 == 0x7554) {
      xVar13 = 0x2b36a /* "union" */;
      xVar15 = 5;
      *param_1 = (int8)(piVar4 + 1);
      iVar6 = FUN_000ad294(param_1,0);
    }
    else {
      if (*piVar4 != 0x6554) goto code_r0x000ad298;
      xVar13 = 0x32ce6 /* "enum" */;
      xVar15 = 4;
      *param_1 = (int8)(piVar4 + 1);
      iVar6 = FUN_000ad294(param_1,0);
    }
    if (iVar6 == 0) {
      return (xunknown8 *)0x0;
    }
    piVar7 = (int8 *)param_1[0x266];
    iVar11 = piVar7[1];
    piVar14 = piVar7;
    if (0xfffffffffffff00e < iVar11 - 0xfc0U && iVar11 != -0x31) {
code_r0x000c0680:
      piVar14[1] = iVar11 + 0x30;
      pxVar8 = (xunknown8 *)((int8)piVar14 + iVar11 + 0x10);
      *pxVar8 = 0xd2d78;
      *(xunknown1 *)((int8)piVar14 + iVar11 + 0x18) = 6;
      *(int8 *)((int8)piVar14 + iVar11 + 0x30) = iVar6;
      *(xunknown8 *)((int8)piVar14 + iVar11 + 0x20) = xVar13;
      *(xunknown8 *)((int8)piVar14 + iVar11 + 0x28) = xVar15;
      *(uint2 *)((int8)piVar14 + iVar11 + 0x19) =
           *(uint2 *)((int8)piVar14 + iVar11 + 0x19) & 0xf000 | 0x540;
      return pxVar8;
    }
    piVar14 = (int8 *)malloc(0x1000);
    if (piVar14 != (int8 *)0x0) {
      iVar11 = 0;
      *piVar14 = (int8)piVar7;
      piVar14[1] = 0;
      param_1[0x266] = (int8)piVar14;
      goto code_r0x000c0680;
    }
    goto code_r0x000caa00;
  }
code_r0x000ad298:
  puVar2 = (uint1 *)*param_1;
  puVar12 = (uint1 *)param_1[1];
  if (puVar12 == puVar2) {
code_r0x000ad314:
    auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
    pxVar8 = (xunknown8 *)FUN_000af4e8(param_1,0,auStack_108);
    if (pxVar8 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((char)auStack_108[0] != '\0') {
        pxVar8 = (xunknown8 *)0x0;
      }
      return pxVar8;
    }
    if ((char)auStack_108[0] == '\0') {
      piVar14 = (int8 *)param_1[0x26];
      if (piVar14 == (int8 *)param_1[0x27]) {
        piVar7 = param_1 + 0x28;
        iVar6 = (int8)piVar14 - param_1[0x25];
        if ((int8 *)param_1[0x25] == piVar7) {
          iVar11 = malloc(iVar6 * 2);
          if (iVar11 == 0) goto code_r0x000ca7b0;
          if (piVar14 != piVar7) {
            memcpy(iVar11,piVar7,iVar6);
          }
          param_1[0x25] = iVar11;
        }
        else {
          iVar11 = realloc();
          param_1[0x25] = iVar11;
          if (iVar11 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pxVar8 = (xunknown8 *)(*got_abort)();
            return pxVar8;
          }
        }
        piVar14 = (int8 *)(iVar11 + iVar6);
        param_1[0x26] = (int8)piVar14;
        param_1[0x27] = iVar11 + (iVar6 >> 2) * 8;
      }
      param_1[0x26] = (int8)(piVar14 + 1);
      *piVar14 = (int8)pxVar8;
    }
    iVar6 = FUN_000af668(param_1,0);
    if (iVar6 == 0) {
      return (xunknown8 *)0x0;
    }
    piVar14 = (int8 *)param_1[0x266];
    iVar11 = piVar14[1];
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar7 = (int8 *)malloc(0x1000);
      if (piVar7 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar8 = (xunknown8 *)(*pcRam00000000000d4468)();
        return pxVar8;
      }
      iVar11 = 0;
      *piVar7 = (int8)piVar14;
      piVar7[1] = 0;
      param_1[0x266] = (int8)piVar7;
      piVar14 = piVar7;
    }
    piVar14[1] = iVar11 + 0x20;
    pxVar9 = (xunknown8 *)((int8)piVar14 + iVar11 + 0x10);
    *pxVar9 = 0xd2448;
    *(xunknown8 **)((int8)piVar14 + iVar11 + 0x20) = pxVar8;
    *(int8 *)((int8)piVar14 + iVar11 + 0x28) = iVar6;
    *(xunknown1 *)((int8)piVar14 + iVar11 + 0x18) = 0x2d;
    *(uint2 *)((int8)piVar14 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar14 + iVar11 + 0x19) & 0xf000 | 0x540;
    return pxVar9;
  }
  if (*puVar2 == 0x5a) {
    *param_1 = (int8)(puVar2 + 1);
    aiStack_70[0] = FUN_000ab144(param_1);
    if (aiStack_70[0] == 0) {
      return (xunknown8 *)0x0;
    }
    pcVar3 = (char *)*param_1;
    if (pcVar3 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar3 != 'E') {
      return (xunknown8 *)0x0;
    }
    pcVar1 = pcVar3 + 1;
    *param_1 = (int8)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 's')) {
      *param_1 = (int8)(pcVar3 + 2);
      iVar6 = FUN_000bdfe0();
      *param_1 = iVar6;
      auStack_108[0] = FUN_000be090(param_1,0x30d5f /* "string literal" */);
      pxVar8 = (xunknown8 *)FUN_000be138(param_1,aiStack_70,auStack_108);
      return pxVar8;
    }
    FUN_000ad0e0(auStack_108,param_1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
      iStack_110 = FUN_000ad294(param_1,0);
      if (iStack_110 != 0) {
        iVar6 = FUN_000bdfe0(*param_1,param_1[1]);
        *param_1 = iVar6;
code_r0x000ad85c:
        pxVar8 = (xunknown8 *)FUN_000be138(param_1,aiStack_70,&iStack_110);
        goto code_r0x000ad878;
      }
    }
    else {
      *param_1 = (int8)(pcVar3 + 1);
      FUN_000abc1c(param_1,1);
      pcVar3 = (char *)*param_1;
      if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
        *param_1 = (int8)(pcVar3 + 1);
        iStack_110 = FUN_000ad294(param_1,0);
        if (iStack_110 != 0) goto code_r0x000ad85c;
      }
    }
    pxVar8 = (xunknown8 *)0x0;
code_r0x000ad878:
    FUN_000ae114(auStack_108);
    return pxVar8;
  }
  if (*puVar2 != 0x4e) goto code_r0x000ad314;
  puVar10 = puVar2 + 1;
  *param_1 = (int8)puVar10;
  if (puVar10 == puVar12) goto code_r0x000ad420;
  if (*puVar10 == 0x48) {
    puVar10 = puVar2 + 2;
    *param_1 = (int8)puVar10;
    goto code_r0x000ad4a8;
  }
  if (*puVar10 == 0x72) {
    puVar10 = puVar2 + 2;
    *param_1 = (int8)puVar10;
    if (puVar10 != puVar12) goto code_r0x000ad790;
code_r0x000ad420:
    puVar10 = puVar12;
  }
  else {
    if (puVar10 == puVar12) goto code_r0x000ad420;
code_r0x000ad790:
    if (*puVar10 == 0x56) {
      puVar10 = puVar10 + 1;
      *param_1 = (int8)puVar10;
    }
    if (puVar10 == puVar12) goto code_r0x000ad420;
    if (*puVar10 == 0x4b) {
      puVar10 = puVar10 + 1;
      *param_1 = (int8)puVar10;
    }
  }
  if (puVar10 != puVar12) {
    if (*puVar10 == 0x4f) {
      puVar10 = puVar10 + 1;
      *param_1 = (int8)puVar10;
    }
    else if (*puVar10 == 0x52) {
      puVar10 = puVar10 + 1;
      *param_1 = (int8)puVar10;
    }
  }
code_r0x000ad4a8:
  piVar14 = param_1 + 0x28;
  pxVar8 = (xunknown8 *)0x0;
code_r0x000ad4c4:
  do {
    if ((puVar10 != puVar12) && (*puVar10 == 0x45)) {
      *param_1 = (int8)(puVar10 + 1);
      if (pxVar8 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      if (param_1[0x25] == param_1[0x26]) {
        return (xunknown8 *)0x0;
      }
      param_1[0x26] = param_1[0x26] + -8;
      return pxVar8;
    }
    if (puVar12 == puVar10) {
code_r0x000ad5e0:
      pxVar9 = (xunknown8 *)0x0;
      goto code_r0x000ad5e4;
    }
    uVar5 = *puVar10;
    pxVar9 = (xunknown8 *)0x0;
    if (uVar5 < 0x53) {
      if (uVar5 == 0x44) {
        if ((1 < (uint8)((int8)puVar12 - (int8)puVar10)) && ((puVar10[1] | 0x20) == 0x74)) {
          if (pxVar8 != (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
          pxVar9 = (xunknown8 *)FUN_000b007c(param_1);
          goto code_r0x000ad5f4;
        }
        goto code_r0x000ad5e0;
      }
      if (uVar5 != 0x49) goto code_r0x000ad5e4;
      if (pxVar8 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iVar6 = FUN_000af668(param_1,0);
      if (iVar6 == 0) {
        return (xunknown8 *)0x0;
      }
      if (*(char *)(pxVar8 + 1) == '-') {
        return (xunknown8 *)0x0;
      }
      piVar16 = (int8 *)param_1[0x266];
      iVar11 = piVar16[1];
      piVar7 = piVar16;
      if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
        piVar7 = (int8 *)malloc(0x1000);
        if (piVar7 == (int8 *)0x0) goto code_r0x000caa00;
        iVar11 = 0;
        *piVar7 = (int8)piVar16;
        piVar7[1] = 0;
        param_1[0x266] = (int8)piVar7;
      }
      piVar7[1] = iVar11 + 0x20;
      pxVar9 = (xunknown8 *)((int8)piVar7 + iVar11 + 0x10);
      *pxVar9 = 0xd2448;
      *(xunknown8 **)((int8)piVar7 + iVar11 + 0x20) = pxVar8;
      *(int8 *)((int8)piVar7 + iVar11 + 0x28) = iVar6;
      *(xunknown1 *)((int8)piVar7 + iVar11 + 0x18) = 0x2d;
      *(uint2 *)((int8)piVar7 + iVar11 + 0x19) =
           *(uint2 *)((int8)piVar7 + iVar11 + 0x19) & 0xf000 | 0x540;
    }
    else {
      if (uVar5 == 0x53) {
        if (((uint8)((int8)puVar12 - (int8)puVar10) < 2) || (puVar10[1] != 0x74)) {
          pxVar9 = (xunknown8 *)FUN_000b01c0(param_1);
          if (pxVar9 == (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
        }
        else {
          piVar16 = (int8 *)param_1[0x266];
          *param_1 = (int8)(puVar10 + 2);
          iVar6 = piVar16[1];
          piVar7 = piVar16;
          if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
            piVar7 = (int8 *)malloc(0x1000);
            if (piVar7 == (int8 *)0x0) goto code_r0x000caa00;
            iVar6 = 0;
            *piVar7 = (int8)piVar16;
            piVar7[1] = 0;
            param_1[0x266] = (int8)piVar7;
          }
          piVar7[1] = iVar6 + 0x20;
          pxVar9 = (xunknown8 *)((int8)piVar7 + iVar6 + 0x10);
          *pxVar9 = 0xd0548;
          *(xunknown1 *)((int8)piVar7 + iVar6 + 0x18) = 8;
          *(uint2 *)((int8)piVar7 + iVar6 + 0x19) =
               *(uint2 *)((int8)piVar7 + iVar6 + 0x19) & 0xf000 | 0x540;
          *(xunknown8 *)((int8)piVar7 + iVar6 + 0x20) = 0x3836c;
          *(xunknown8 *)((int8)piVar7 + iVar6 + 0x28) = 3;
        }
        if (*(char *)(pxVar9 + 1) != '\x1b') {
          if (pxVar8 != (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
          puVar10 = (uint1 *)*param_1;
          puVar12 = (uint1 *)param_1[1];
          pxVar8 = pxVar9;
          goto code_r0x000ad4c4;
        }
code_r0x000ad5e4:
        pxVar9 = (xunknown8 *)FUN_000b049c(param_1,0,pxVar8,pxVar9);
      }
      else {
        if (uVar5 != 0x54) goto code_r0x000ad5e4;
        if (pxVar8 != (xunknown8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        pxVar9 = (xunknown8 *)FUN_000afcac(param_1);
      }
code_r0x000ad5f4:
      if (pxVar9 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
    }
    piVar7 = (int8 *)param_1[0x26];
    if (piVar7 == (int8 *)param_1[0x27]) {
      iVar6 = (int8)piVar7 - param_1[0x25];
      if ((int8 *)param_1[0x25] == piVar14) {
        iVar11 = malloc(iVar6 * 2);
        if (iVar11 == 0) goto code_r0x000ca7b0;
        if (piVar7 != piVar14) {
          memcpy(iVar11,piVar14,iVar6);
        }
        param_1[0x25] = iVar11;
      }
      else {
        iVar11 = realloc();
        param_1[0x25] = iVar11;
        if (iVar11 == 0) goto code_r0x000ca7b0;
      }
      piVar7 = (int8 *)(iVar11 + iVar6);
      param_1[0x26] = (int8)piVar7;
      param_1[0x27] = iVar11 + (iVar6 >> 2) * 8;
    }
    param_1[0x26] = (int8)(piVar7 + 1);
    *piVar7 = (int8)pxVar9;
    puVar10 = (uint1 *)*param_1;
    puVar2 = (uint1 *)param_1[1];
    puVar12 = puVar10;
    pxVar8 = pxVar9;
    if ((puVar10 != puVar2) && (puVar12 = puVar2, *puVar10 == 0x4d)) {
      puVar10 = puVar10 + 1;
      *param_1 = (int8)puVar10;
    }
  } while( true );
}

/* 0xc06dc  size=172 */
void FUN_000c06dc(int8 param_1,int8 *param_2)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  int8 iVar4;
  int8 *piVar5;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar2 = piVar5;
  if (iVar3 - 0xfd0U < 0xfffffffffffff00f || iVar3 == -0x21) {
    piVar2 = (int8 *)malloc(0x1000);
    if (piVar2 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar3 = 0;
    *piVar2 = (int8)piVar5;
    piVar2[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar2;
  }
  iVar4 = *param_2;
  piVar2[1] = iVar3 + 0x20;
  uVar1 = *(uint2 *)(iVar4 + 9);
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd2de8;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0xc;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       uVar1 & 0xc0 | 0x500 | *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000;
  *(int8 *)((int8)piVar2 + iVar3 + 0x20) = iVar4;
  return;
}

/* 0xc0788  size=188 */
void FUN_000c0788(int8 param_1,int8 *param_2,xunknown4 *param_3)

{
  xunknown4 xVar1;
  uint2 uVar2;
  int8 *piVar3;
  int8 iVar4;
  int8 iVar5;
  int8 *piVar6;
  
  piVar6 = *(int8 **)(param_1 + 0x1330);
  iVar4 = piVar6[1];
  piVar3 = piVar6;
  if (iVar4 - 0xfd0U < 0xfffffffffffff00f || iVar4 == -0x21) {
    piVar3 = (int8 *)malloc(0x1000);
    if (piVar3 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar4 = 0;
    *piVar3 = (int8)piVar6;
    piVar3[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar3;
  }
  iVar5 = *param_2;
  piVar3[1] = iVar4 + 0x20;
  uVar2 = *(uint2 *)(iVar5 + 9);
  xVar1 = *param_3;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x10) = 0xd2e58;
  *(xunknown1 *)((int8)piVar3 + iVar4 + 0x18) = 0xd;
  *(int8 *)((int8)piVar3 + iVar4 + 0x20) = iVar5;
  *(xunknown4 *)((int8)piVar3 + iVar4 + 0x28) = xVar1;
  *(uint2 *)((int8)piVar3 + iVar4 + 0x19) =
       uVar2 & 0xc0 | 0x500 | *(uint2 *)((int8)piVar3 + iVar4 + 0x19) & 0xf000;
  *(xunknown1 *)((int8)piVar3 + iVar4 + 0x2c) = 0;
  return;
}

/* 0xc0844  size=176 */
void FUN_000c0844(int8 param_1,xunknown8 *param_2)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  int8 *piVar4;
  
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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2b48;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x29fa7;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = 8;
  return;
}

/* 0xc08f4  size=176 */
void FUN_000c08f4(int8 param_1,xunknown8 *param_2)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  int8 *piVar4;
  
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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2b48;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x23e7f;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = 10;
  return;
}

/* 0xc09a4  size=332 */
void FUN_000c09a4(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  
  iVar3 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 8U) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar3 + 1000U) {
      uVar4 = iVar3 + 1000U;
    }
    param_2[2] = uVar4;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  *(xunknown8 *)(iVar2 + iVar3) = 0x7470656378656f6e;
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar4 = iVar2 + 9;
  iVar3 = iVar2 + 8;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  param_2[1] = iVar3;
  if ((uint8)param_2[2] < uVar4) {
    uVar4 = param_2[2] * 2;
    if (uVar4 <= iVar2 + 0x3e9U) {
      uVar4 = iVar2 + 0x3e9U;
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
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x10),param_2,0x13,0);
  iVar3 = param_2[1];
  iVar2 = *param_2;
  uVar4 = iVar3 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
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
  *(xunknown1 *)(iVar2 + iVar3) = 0x29;
  return;
}

/* 0xc0af0  size=8 */
void FUN_000c0af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc0af8  size=540 */
void FUN_000c0af8(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  bool bVar6;
  
  iVar4 = param_2[1];
  iVar2 = *param_2;
  if ((uint8)param_2[2] < iVar4 + 5U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar4 + 0x3e5U) {
      uVar5 = iVar4 + 0x3e5U;
    }
    param_2[2] = uVar5;
    iVar2 = realloc(iVar2);
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
  }
  *(xunknown1 *)((xunknown4 *)(iVar2 + iVar4) + 1) = 0x77;
  *(xunknown4 *)(iVar2 + iVar4) = 0x6f726874;
  iVar2 = param_2[1];
  iVar1 = *param_2;
  uVar5 = iVar2 + 6;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  iVar4 = iVar2 + 5;
  param_2[1] = iVar4;
  if ((uint8)param_2[2] < uVar5) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar2 + 0x3e6U) {
      uVar5 = iVar2 + 0x3e6U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar4 = param_2[1];
    uVar5 = iVar4 + 1;
  }
  param_2[1] = uVar5;
  *(xunknown1 *)(iVar1 + iVar4) = 0x28;
  iVar4 = param_2[1];
  if (*(int8 *)(param_1 + 0x18) != 0) {
    iVar2 = 0;
    bVar6 = true;
    do {
      while( true ) {
        iVar1 = iVar4;
        if (!bVar6) {
          iVar1 = *param_2;
          if ((uint8)param_2[2] < iVar4 + 2U) {
            uVar5 = param_2[2] * 2;
            if (uVar5 <= iVar4 + 0x3e2U) {
              uVar5 = iVar4 + 0x3e2U;
            }
            param_2[2] = uVar5;
            iVar1 = realloc();
            *param_2 = iVar1;
            if (iVar1 == 0) goto code_r0x000ca7b0;
            iVar3 = param_2[1];
          }
          else {
            iVar3 = iVar4;
          }
          *(xunknown2 *)(iVar1 + iVar3) = 0x202c;
          iVar1 = param_2[1] + 2;
          param_2[1] = iVar1;
        }
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x10) + iVar2 * 8),param_2,0x12,0);
        iVar3 = param_2[1];
        if (iVar1 == iVar3) break;
        bVar6 = false;
        iVar2 = iVar2 + 1;
        iVar4 = iVar3;
        if (iVar2 == *(int8 *)(param_1 + 0x18)) goto code_r0x000c0c94;
      }
      param_2[1] = iVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int8 *)(param_1 + 0x18));
  }
code_r0x000c0c94:
  uVar5 = iVar4 + 1;
  iVar2 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
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
  *(xunknown1 *)(iVar2 + iVar4) = 0x29;
  return;
}

/* 0xc0d14  size=8 */
void FUN_000c0d14(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc0d1c  size=12 */
xunknown8 FUN_000c0d1c(void)

{
  return 1;
}

/* 0xc0d28  size=12 */
xunknown8 FUN_000c0d28(void)

{
  return 1;
}

/* 0xc0d34  size=132 */
void FUN_000c0d34(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x20))();
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

/* 0xc0db8  size=1140 */
void FUN_000c0db8(int8 param_1,int8 *param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  int8 iVar3;
  uint4 uVar4;
  int8 iVar5;
  int8 iVar6;
  uint8 uVar7;
  int8 *piVar8;
  bool bVar9;
  
  iVar5 = param_2[1];
  iVar2 = *param_2;
  uVar7 = iVar5 + 1;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + 1;
  if ((uint8)param_2[2] < uVar7) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar5 + 0x3e1U) {
      uVar7 = iVar5 + 0x3e1U;
    }
    param_2[2] = uVar7;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
    uVar7 = iVar5 + 1;
  }
  param_2[1] = uVar7;
  *(xunknown1 *)(iVar2 + iVar5) = 0x28;
  iVar5 = param_2[1];
  if (*(int8 *)(param_1 + 0x20) != 0) {
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
        FUN_000b5868(*(xunknown8 *)(*(int8 *)(param_1 + 0x18) + iVar2 * 8),param_2,0x12,0);
        iVar6 = param_2[1];
        if (iVar3 == iVar6) break;
        bVar9 = false;
        iVar2 = iVar2 + 1;
        iVar5 = iVar6;
        if (iVar2 == *(int8 *)(param_1 + 0x20)) goto code_r0x000c0ef4;
      }
      param_2[1] = iVar5;
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int8 *)(param_1 + 0x20));
  }
code_r0x000c0ef4:
  uVar7 = iVar5 + 1;
  iVar2 = *param_2;
  *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
  if ((uint8)param_2[2] < uVar7) {
    uVar7 = param_2[2] * 2;
    if (uVar7 <= iVar5 + 0x3e1U) {
      uVar7 = iVar5 + 0x3e1U;
    }
    param_2[2] = uVar7;
    iVar2 = realloc();
    *param_2 = iVar2;
    if (iVar2 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
    uVar7 = iVar5 + 1;
  }
  param_2[1] = uVar7;
  *(xunknown1 *)(iVar2 + iVar5) = 0x29;
  (**(code **)(**(int8 **)(param_1 + 0x10) + 0x28))(*(int8 **)(param_1 + 0x10),param_2);
  uVar4 = *(uint4 *)(param_1 + 0x28);
  if ((uVar4 & 1) != 0) {
    iVar5 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 6U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e6U) {
        uVar7 = iVar5 + 0x3e6U;
      }
      param_2[2] = uVar7;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    *(xunknown2 *)((xunknown4 *)(iVar2 + iVar5) + 1) = 0x7473;
    *(xunknown4 *)(iVar2 + iVar5) = 0x6e6f6320;
    uVar4 = *(uint4 *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    iVar5 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 9U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e9U) {
        uVar7 = iVar5 + 0x3e9U;
      }
      param_2[2] = uVar7;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    xVar1 = xRam000000000003d18e;
    *(xunknown1 *)((xunknown8 *)(iVar2 + iVar5) + 1) = 0x65;
    *(xunknown8 *)(iVar2 + iVar5) = xVar1;
    uVar4 = *(uint4 *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    iVar5 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 9U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e9U) {
        uVar7 = iVar5 + 0x3e9U;
      }
      param_2[2] = uVar7;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    xVar1 = xRam000000000003fb5c;
    *(xunknown1 *)((xunknown8 *)(iVar2 + iVar5) + 1) = 0x74;
    *(xunknown8 *)(iVar2 + iVar5) = xVar1;
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    iVar5 = param_2[1];
    iVar2 = *param_2;
    if ((uint8)param_2[2] < iVar5 + 3U) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e3U) {
        uVar7 = iVar5 + 0x3e3U;
      }
      param_2[2] = uVar7;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar5 = param_2[1];
    }
    *(xunknown1 *)((xunknown2 *)(iVar2 + iVar5) + 1) = 0x26;
    *(xunknown2 *)(iVar2 + iVar5) = 0x2620;
    iVar5 = 3;
code_r0x000c113c:
    param_2[1] = param_2[1] + iVar5;
  }
  else if (*(char *)(param_1 + 0x2c) == '\x01') {
    iVar5 = param_2[1];
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
      iVar5 = param_2[1];
    }
    *(xunknown2 *)(iVar2 + iVar5) = 0x2620;
    iVar5 = 2;
    goto code_r0x000c113c;
  }
  if (*(int8 *)(param_1 + 0x30) != 0) {
    iVar5 = param_2[1];
    iVar2 = *param_2;
    uVar7 = iVar5 + 1;
    if ((uint8)param_2[2] < uVar7) {
      uVar7 = param_2[2] * 2;
      if (uVar7 <= iVar5 + 0x3e1U) {
        uVar7 = iVar5 + 0x3e1U;
      }
      param_2[2] = uVar7;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
      iVar5 = param_2[1];
      uVar7 = iVar5 + 1;
    }
    param_2[1] = uVar7;
    *(xunknown1 *)(iVar2 + iVar5) = 0x20;
    piVar8 = *(int8 **)(param_1 + 0x30);
    (**(code **)(*piVar8 + 0x20))(piVar8,param_2);
    if ((*(uint2 *)((int8)piVar8 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000c1204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar8 + 0x28))(piVar8,param_2);
      return;
    }
  }
  return;
}

/* 0xc122c  size=8 */
void FUN_000c122c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc1234  size=364 */
void FUN_000c1234(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  int8 *piVar7;
  
  piVar7 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar7 + 0x20))(piVar7);
  if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
  }
  iVar3 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 1U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar3) = 0x3c;
  iVar3 = param_2[1] + 1;
  param_2[1] = iVar3;
  iVar1 = *(int8 *)(param_1 + 0x20);
  if (iVar1 != 0) {
    xVar6 = *(xunknown8 *)(param_1 + 0x18);
    iVar2 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar3 + iVar1)) {
      uVar4 = param_2[2] * 2;
      uVar5 = iVar3 + iVar1 + 0x3e0;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      param_2[2] = uVar4;
      iVar2 = realloc();
      *param_2 = iVar2;
      if (iVar2 == 0) goto code_r0x000ca7b0;
      iVar3 = param_2[1];
    }
    memcpy(iVar2 + iVar3,xVar6,iVar1);
    iVar3 = param_2[1] + iVar1;
    param_2[1] = iVar3;
  }
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 1U) {
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
  }
  *(xunknown1 *)(iVar1 + iVar3) = 0x3e;
  param_2[1] = param_2[1] + 1;
  return;
}

/* 0xc13a0  size=8 */
void FUN_000c13a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xc13a8  size=364 */
void FUN_000c13a8(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  int8 *piVar6;
  xunknown8 xVar7;
  
  piVar6 = *(int8 **)(param_1 + 0x10);
  (**(code **)(*piVar6 + 0x20))(piVar6);
  if ((*(uint2 *)((int8)piVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  }
  iVar3 = param_2[1];
  iVar1 = *param_2;
  if ((uint8)param_2[2] < iVar3 + 1U) {
    uVar5 = param_2[2] * 2;
    if (uVar5 <= iVar3 + 0x3e1U) {
      uVar5 = iVar3 + 0x3e1U;
    }
    param_2[2] = uVar5;
    iVar1 = realloc();
    *param_2 = iVar1;
    if (iVar1 == 0) goto code_r0x000ca7b0;
    iVar3 = param_2[1];
  }
  *(xunknown1 *)(iVar1 + iVar3) = 0x20;
  iVar3 = param_2[1] + 1;
  param_2[1] = iVar3;
  iVar1 = *(int8 *)(param_1 + 0x20);
  if (iVar1 != 0) {
    xVar7 = *(xunknown8 *)(param_1 + 0x18);
    iVar2 = *param_2;
    if ((uint8)param_2[2] < (uint8)(iVar3 + iVar1)) {
      uVar4 = param_2[2] * 2;
      uVar5 = iVar3 + iVar1 + 0x3e0;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
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
    memcpy(iVar2 + iVar3,xVar7,iVar1);
    param_2[1] = param_2[1] + iVar1;
  }
  piVar6 = *(int8 **)(param_1 + 0x28);
  if ((piVar6 == (int8 *)0x0) ||
     ((**(code **)(*piVar6 + 0x20))(piVar6,param_2), (*(uint2 *)((int8)piVar6 + 9) & 0xc0) == 0x40))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c1508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 0x28))(piVar6,param_2);
  return;
}

