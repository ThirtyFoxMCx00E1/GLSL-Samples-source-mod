/* unexported functions 0xaa0f8..0xb5bec
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0xaa0f8  size=496 */
void FUN_000aa0f8(int8 param_1,int8 *param_2,int8 param_3,uint8 param_4,uint4 param_5)

{
  int4 iVar1;
  int8 iVar2;
  xunknown8 xVar3;
  
  iVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(int8 *)(param_1 + 8) != *(int8 *)(iVar2 + 8)) {
      if (*(int8 *)(param_1 + 8) != *(int8 *)(*param_2 + 8)) {
code_r0x000aa1f8:
                    /* WARNING: Could not recover jumptable at 0x000aa224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int8 **)(param_1 + 0x10) + 0x30))
                  (*(int8 **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
code_r0x000aa16c:
      if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
        if ((int4)param_4 == 1) {
          *(xunknown4 *)(param_2 + 7) = 1;
          return;
        }
        return;
      }
      *(int4 *)(param_2 + 7) = (int4)param_4;
      if (*(int4 *)((int8)param_2 + 0x44) != 4) {
        *(xunknown2 *)((int8)param_2 + 0x4c) = 0;
        (**(code **)(**(int8 **)(param_1 + 0x10) + 0x28))
                  (*(int8 **)(param_1 + 0x10),param_2,param_3,param_3,1,param_5 & 1);
        if (*(char *)((int8)param_2 + 0x4d) == '\0') {
          *(xunknown4 *)((int8)param_2 + 0x44) = 4;
        }
        else {
          *(xunknown4 *)((int8)param_2 + 0x44) = 3;
          if (*(char *)((int8)param_2 + 0x4c) != '\0') {
            return;
          }
        }
      }
      param_2[5] = param_3;
      *(int4 *)(param_2 + 8) = (int4)param_2[8] + 1;
      if (*(int4 *)((int8)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int4)param_2[6] == 2) {
        *(xunknown1 *)((int8)param_2 + 0x4e) = 1;
        return;
      }
      return;
    }
  }
  else if (iVar2 != param_1) {
    xVar3 = *(xunknown8 *)(param_1 + 8);
    param_4 = param_4 & 0xffffffff;
    iVar1 = strcmp(xVar3,*(xunknown8 *)(iVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(xVar3,*(xunknown8 *)(*param_2 + 8)), iVar1 != 0))
      goto code_r0x000aa1f8;
      goto code_r0x000aa16c;
    }
  }
  if ((param_2[1] == param_3) && (*(int4 *)((int8)param_2 + 0x34) != 1)) {
    *(int4 *)((int8)param_2 + 0x34) = (int4)param_4;
    return;
  }
  return;
}

/* 0xaa2e8  size=356 */
void FUN_000aa2e8(int8 param_1,int8 *param_2,int8 param_3,int4 param_4,uint4 param_5)

{
  int4 iVar1;
  int8 iVar2;
  xunknown8 xVar3;
  
  iVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(int8 *)(param_1 + 8) != *(int8 *)(iVar2 + 8)) {
      if (*(int8 *)(param_1 + 8) != *(int8 *)(*param_2 + 8)) {
        return;
      }
code_r0x000aa388:
      if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
        if (param_4 == 1) {
          *(xunknown4 *)(param_2 + 7) = 1;
          return;
        }
        return;
      }
      *(int4 *)(param_2 + 7) = param_4;
      param_2[5] = param_3;
      *(int4 *)(param_2 + 8) = (int4)param_2[8] + 1;
      if ((*(int4 *)((int8)param_2 + 0x3c) == 1) && ((int4)param_2[6] == 2)) {
        *(xunknown1 *)((int8)param_2 + 0x4e) = 1;
      }
      *(xunknown4 *)((int8)param_2 + 0x44) = 4;
      return;
    }
  }
  else if (iVar2 != param_1) {
    xVar3 = *(xunknown8 *)(param_1 + 8);
    iVar1 = strcmp(xVar3,*(xunknown8 *)(iVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(xVar3,*(xunknown8 *)(*param_2 + 8)), iVar1 != 0))
      {
        return;
      }
      goto code_r0x000aa388;
    }
  }
  if ((param_2[1] == param_3) && (*(int4 *)((int8)param_2 + 0x34) != 1)) {
    *(int4 *)((int8)param_2 + 0x34) = param_4;
    return;
  }
  return;
}

/* 0xaa44c  size=596 */
void FUN_000aa44c(int8 param_1,int8 param_2,int8 param_3,int8 *param_4,int4 param_5,uint4 param_6)

{
  uint4 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint1 uVar6;
  bool bVar7;
  bool bVar8;
  int4 iVar9;
  int8 iVar10;
  uint8 uVar11;
  xunknown8 *pxVar12;
  xunknown8 *pxVar13;
  
  iVar10 = *(int8 *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(int8 *)(param_1 + 8) != *(int8 *)(iVar10 + 8)) goto code_r0x000aa4ec;
  }
  else if ((iVar10 != param_1) &&
          (iVar9 = strcmp(*(xunknown8 *)(param_1 + 8),*(xunknown8 *)(iVar10 + 8)), iVar9 != 0)) {
code_r0x000aa4ec:
    cVar2 = *(char *)(param_2 + 0x4c);
    cVar3 = *(char *)(param_2 + 0x4d);
    uVar1 = *(uint4 *)(param_1 + 0x14);
    *(xunknown2 *)(param_2 + 0x4c) = 0;
    uVar11 = *(uint8 *)(param_1 + 0x20);
    iVar10 = (int8)uVar11 >> 8;
    if ((uVar11 & 1) != 0) {
      iVar10 = *(int8 *)(*param_4 + iVar10);
    }
    iVar9 = 2;
    if ((uVar11 & 2) != 0) {
      iVar9 = param_5;
    }
    (**(code **)(**(int8 **)(param_1 + 0x18) + 0x28))
              (*(int8 **)(param_1 + 0x18),param_2,param_3,(int8)param_4 + iVar10,iVar9,param_6 & 1);
    cVar4 = *(char *)(param_2 + 0x4d);
    cVar5 = *(char *)(param_2 + 0x4c);
    bVar7 = cVar4 != '\0' || cVar3 != '\0';
    bVar8 = cVar5 != '\0' || cVar2 != '\0';
    if (1 < uVar1) {
      pxVar13 = (xunknown8 *)(param_1 + 0x28);
      do {
        if (*(char *)(param_2 + 0x4e) != '\0') break;
        if (cVar5 == '\0') {
          if (cVar4 != '\0') {
            uVar6 = *(uint1 *)(param_1 + 0x10);
            goto joined_r0x000aa604;
          }
        }
        else {
          if (*(int4 *)(param_2 + 0x30) == 1) break;
          uVar6 = *(uint1 *)(param_1 + 0x10) >> 1;
joined_r0x000aa604:
          if ((uVar6 & 1) == 0) break;
        }
        *(xunknown2 *)(param_2 + 0x4c) = 0;
        uVar11 = pxVar13[1];
        iVar10 = (int8)uVar11 >> 8;
        if ((uVar11 & 1) != 0) {
          iVar10 = *(int8 *)(*param_4 + iVar10);
        }
        pxVar12 = pxVar13 + 2;
        iVar9 = 2;
        if ((uVar11 & 2) != 0) {
          iVar9 = param_5;
        }
        (**(code **)(*(int8 *)*pxVar13 + 0x28))
                  ((int8 *)*pxVar13,param_2,param_3,(int8)param_4 + iVar10,iVar9,param_6 & 1);
        cVar5 = *(char *)(param_2 + 0x4c);
        cVar4 = *(char *)(param_2 + 0x4d);
        bVar8 = cVar5 != '\0' || bVar8;
        bVar7 = cVar4 != '\0' || bVar7;
        pxVar13 = pxVar12;
      } while (pxVar12 < (xunknown8 *)(param_1 + (uint8)uVar1 * 0x10 + 0x18));
    }
    *(bool *)(param_2 + 0x4c) = bVar8;
    *(bool *)(param_2 + 0x4d) = bVar7;
    return;
  }
  *(xunknown1 *)(param_2 + 0x4d) = 1;
  if (*(int8 **)(param_2 + 8) != param_4) {
    return;
  }
  *(xunknown1 *)(param_2 + 0x4c) = 1;
  if (*(int8 *)(param_2 + 0x20) == 0) {
    *(int8 *)(param_2 + 0x20) = param_3;
    *(int4 *)(param_2 + 0x30) = param_5;
    *(xunknown4 *)(param_2 + 0x3c) = 1;
    iVar9 = param_5;
  }
  else {
    if (*(int8 *)(param_2 + 0x20) != param_3) {
      *(int4 *)(param_2 + 0x3c) = *(int4 *)(param_2 + 0x3c) + 1;
      goto code_r0x000aa678;
    }
    iVar9 = *(int4 *)(param_2 + 0x30);
    if (*(int4 *)(param_2 + 0x30) == 2) {
      *(int4 *)(param_2 + 0x30) = param_5;
      iVar9 = param_5;
    }
  }
  if (iVar9 != 1) {
    return;
  }
  if (*(int4 *)(param_2 + 0x48) != 1) {
    return;
  }
code_r0x000aa678:
  *(xunknown1 *)(param_2 + 0x4e) = 1;
  return;
}

/* 0xaa6a0  size=348 */
void FUN_000aa6a0(int8 param_1,int8 param_2,int8 param_3,int8 param_4,int4 param_5,uint8 param_6)

{
  int4 iVar1;
  int8 iVar2;
  
  iVar2 = *(int8 *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(int8 *)(param_1 + 8) != *(int8 *)(iVar2 + 8)) goto code_r0x000aa750;
  }
  else if ((iVar2 != param_1) &&
          (iVar1 = strcmp(*(xunknown8 *)(param_1 + 8),*(xunknown8 *)(iVar2 + 8)), iVar1 != 0)) {
code_r0x000aa750:
                    /* WARNING: Could not recover jumptable at 0x000aa774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int8 **)(param_1 + 0x10) + 0x28))();
    return;
  }
  *(xunknown1 *)(param_2 + 0x4d) = 1;
  if (*(int8 *)(param_2 + 8) == param_4) {
    *(xunknown1 *)(param_2 + 0x4c) = 1;
    if (*(int8 *)(param_2 + 0x20) == 0) {
      *(int8 *)(param_2 + 0x20) = param_3;
      *(int4 *)(param_2 + 0x30) = param_5;
      *(xunknown4 *)(param_2 + 0x3c) = 1;
      iVar1 = param_5;
    }
    else {
      if (*(int8 *)(param_2 + 0x20) != param_3) {
        *(int4 *)(param_2 + 0x3c) = *(int4 *)(param_2 + 0x3c) + 1;
        goto code_r0x000aa7dc;
      }
      iVar1 = *(int4 *)(param_2 + 0x30);
      if (*(int4 *)(param_2 + 0x30) == 2) {
        *(int4 *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
    }
    if ((iVar1 == 1) && (*(int4 *)(param_2 + 0x48) == 1)) {
code_r0x000aa7dc:
      *(xunknown1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  return;
}

/* 0xaa7fc  size=268 */
void FUN_000aa7fc(int8 param_1,int8 param_2,int8 param_3,int8 param_4,int4 param_5,uint4 param_6)

{
  int4 iVar1;
  int8 iVar2;
  
  iVar2 = *(int8 *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(int8 *)(param_1 + 8) != *(int8 *)(iVar2 + 8)) {
      return;
    }
  }
  else if ((iVar2 != param_1) &&
          (iVar1 = strcmp(*(xunknown8 *)(param_1 + 8),*(xunknown8 *)(iVar2 + 8)), iVar1 != 0)) {
    return;
  }
  *(xunknown1 *)(param_2 + 0x4d) = 1;
  if (*(int8 *)(param_2 + 8) == param_4) {
    *(xunknown1 *)(param_2 + 0x4c) = 1;
    if (*(int8 *)(param_2 + 0x20) == 0) {
      *(int8 *)(param_2 + 0x20) = param_3;
      *(int4 *)(param_2 + 0x30) = param_5;
      *(xunknown4 *)(param_2 + 0x3c) = 1;
      iVar1 = param_5;
    }
    else {
      if (*(int8 *)(param_2 + 0x20) != param_3) {
        *(int4 *)(param_2 + 0x3c) = *(int4 *)(param_2 + 0x3c) + 1;
        *(xunknown1 *)(param_2 + 0x4e) = 1;
        return;
      }
      iVar1 = *(int4 *)(param_2 + 0x30);
      if (*(int4 *)(param_2 + 0x30) == 2) {
        *(int4 *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
    }
    if ((iVar1 == 1) && (*(int4 *)(param_2 + 0x48) == 1)) {
      *(xunknown1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  return;
}

/* 0xaafec  size=208 */
void FUN_000aafec(int8 param_1)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  
  pxVar1 = (xunknown8 *)(param_1 + 0x330);
  pxVar2 = *(xunknown8 **)(param_1 + 0x1330);
  while (pxVar2 != (xunknown8 *)0x0) {
    while( true ) {
      pxVar3 = (xunknown8 *)*pxVar2;
      *(xunknown8 **)(param_1 + 0x1330) = pxVar3;
      if (pxVar2 != pxVar1) break;
      pxVar2 = pxVar3;
      if (pxVar3 == (xunknown8 *)0x0) goto code_r0x000ab034;
    }
    free();
    pxVar2 = *(xunknown8 **)(param_1 + 0x1330);
  }
code_r0x000ab034:
  *pxVar1 = 0;
  *(xunknown8 *)(param_1 + 0x338) = 0;
  *(xunknown8 **)(param_1 + 0x1330) = pxVar1;
  if (*(int8 *)(param_1 + 0x2d0) != param_1 + 0x2e8) {
    free();
  }
  if (*(int8 *)(param_1 + 0x298) != param_1 + 0x2b0) {
    free();
  }
  if (*(int8 *)(param_1 + 0x240) != param_1 + 600) {
    free();
  }
  if (*(int8 *)(param_1 + 0x128) != param_1 + 0x140) {
    free();
  }
  if (*(int8 *)(param_1 + 0x10) == param_1 + 0x28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_free)();
  return;
}

/* 0xab0bc  size=136 */
xunknown8 FUN_000ab0bc(int8 *param_1,xunknown8 param_2,uint8 param_3)

{
  int8 iVar1;
  int4 iVar2;
  
  iVar1 = *param_1;
  if ((uint8)(param_1[1] - iVar1) < param_3) {
    return 0;
  }
  iVar2 = memcmp(iVar1);
  if (iVar2 == 0) {
    *param_1 = iVar1 + param_3;
    return 1;
  }
  return 0;
}

/* 0xab144  size=2776 */
xunknown8 * FUN_000ab144(int8 *param_1)

{
  uint1 uVar1;
  char cVar2;
  xunknown1 xVar3;
  xunknown1 axVar4 [16];
  xunknown1 axVar5 [16];
  xunknown1 axVar6 [16];
  xunknown1 axVar7 [16];
  xunknown1 axVar8 [16];
  xunknown1 axVar9 [16];
  bool bVar10;
  uint4 uVar11;
  uint8 uVar12;
  xunknown8 *pxVar13;
  int8 iVar14;
  int8 extraout_x1;
  int8 iVar15;
  uint1 *puVar16;
  int8 iVar17;
  char *pcVar18;
  uint1 *puVar19;
  char *pcVar20;
  xunknown8 *pxVar21;
  int8 iVar22;
  int8 *piVar23;
  uint8 uVar24;
  uint8 uVar25;
  int8 iVar26;
  int8 *piVar27;
  int8 *piVar28;
  xunknown1 axVar29 [16];
  int8 iStack_150;
  int8 iStack_148;
  xunknown1 axStack_140 [16];
  xunknown8 xStack_130;
  xunknown8 *pxStack_128;
  xunknown8 xStack_120;
  xunknown1 axStack_118 [8];
  uint8 uStack_110;
  char cStack_108;
  xunknown1 axStack_100 [160];
  
  FUN_000ad0e0(axStack_100,param_1);
  axVar7._8_8_ = axStack_140._8_8_;
  axVar7._0_8_ = axStack_140._0_8_;
  axVar29._8_8_ = axStack_140._8_8_;
  axVar29._0_8_ = axStack_140._0_8_;
  pcVar20 = (char *)*param_1;
  pcVar18 = (char *)param_1[1];
  if (pcVar18 == pcVar20) {
code_r0x000ab20c:
    xStack_120 = (xStack_120 >> 0x10 & 0xffff) << 0x10;
    uStack_110 = param_1[0x5b] - param_1[0x5a] >> 3;
    axStack_118[0] = 0;
    cStack_108 = '\0';
    pxVar13 = (xunknown8 *)FUN_000ad294(param_1,&xStack_120);
    axVar29._8_8_ = axStack_140._8_8_;
    axVar29._0_8_ = axStack_140._0_8_;
    axVar4._8_8_ = axStack_140._8_8_;
    axVar4._0_8_ = axStack_140._0_8_;
    pxStack_128 = pxVar13;
    if (pxVar13 == (xunknown8 *)0x0) goto code_r0x000abab4;
    iVar15 = param_1[0x5a];
    uVar12 = param_1[0x5b] - iVar15 >> 3;
    if (uStack_110 < uVar12) {
      pxVar21 = (xunknown8 *)param_1[0x53];
      if ((pxVar21 != (xunknown8 *)param_1[0x54]) &&
         (piVar23 = (int8 *)*pxVar21, piVar23 != (int8 *)0x0)) {
        piVar28 = (int8 *)(iVar15 + uStack_110 * 8);
        iVar17 = *piVar23;
        iVar22 = *piVar28;
        uVar24 = *(uint8 *)(iVar22 + 0x10);
        if (uVar24 < (uint8)(piVar23[1] - iVar17 >> 3)) {
          uVar25 = uStack_110;
          do {
            uVar25 = uVar25 + 1;
            *(xunknown8 *)(iVar22 + 0x18) = *(xunknown8 *)(iVar17 + uVar24 * 8);
            if (uVar12 == uVar25) goto code_r0x000ab3ac;
            piVar23 = (int8 *)*pxVar21;
            if (piVar23 == (int8 *)0x0) break;
            iVar22 = *(int8 *)(iVar15 + uVar25 * 8);
            iVar17 = *piVar23;
            uVar24 = *(uint8 *)(iVar22 + 0x10);
          } while (uVar24 < (uint8)(piVar23[1] - iVar17 >> 3));
          if (uVar12 <= uVar25) goto code_r0x000ab3b0;
        }
      }
    }
    else {
      if (uVar12 < uStack_110) {
        FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0x88,0x32169 /* "shrinkToSize() can't expand!" */);
code_r0x000abb3c:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar13 = (xunknown8 *)(*pcRam00000000000d4468)();
        return pxVar13;
      }
      piVar28 = (int8 *)(iVar15 + uStack_110 * 8);
code_r0x000ab3ac:
      param_1[0x5b] = (int8)piVar28;
code_r0x000ab3b0:
      puVar16 = (uint1 *)*param_1;
      puVar19 = (uint1 *)param_1[1];
      axStack_140 = axVar4;
      if ((puVar19 == puVar16) ||
         ((axStack_140 = axVar29, *puVar16 - 0x2e < 0x32 &&
          ((1L << ((uint8)(*puVar16 - 0x2e) & 0x3f) & 0x2000000800001U) != 0))))
      goto code_r0x000abab4;
      xStack_130 = 0;
      if (((uint8)((int8)puVar19 - (int8)puVar16) < 0xd) ||
         (*(int8 *)puVar16 != 0x6c62616e65396155 || *(int8 *)(puVar16 + 5) != 0x4966695f656c6261)) {
        uVar12 = xStack_120;
joined_r0x000abb14:
        iStack_148 = 0;
        bVar10 = (char)xStack_120 == '\0';
        xStack_120 = uVar12;
        if (bVar10) {
          iStack_148 = 0;
          xStack_120._1_1_ = (char)(uVar12 >> 8);
          bVar10 = xStack_120._1_1_ != '\0';
          if (bVar10) {
            iStack_148 = FUN_000abd5c(param_1);
            axVar29 = axStack_140;
            if (iStack_148 == 0) goto code_r0x000abab0;
          }
        }
        pcVar20 = (char *)*param_1;
        pcVar18 = (char *)param_1[1];
        axStack_140._0_8_ = 0;
        axStack_140._8_8_ = 0;
        axVar29 = ZEXT816(0);
        if ((pcVar20 == pcVar18) || (*pcVar20 != 'v')) {
          piVar23 = param_1 + 5;
          iVar15 = param_1[3] - param_1[2] >> 3;
          do {
            pxVar13 = (xunknown8 *)FUN_000abd5c(param_1);
            axVar29._8_8_ = axStack_140._8_8_;
            axVar29._0_8_ = axStack_140._0_8_;
            if (pxVar13 == (xunknown8 *)0x0) goto code_r0x000abab0;
            piVar28 = (int8 *)param_1[3];
            pxVar21 = pxVar13;
            if ((cStack_108 != '\0') && (iVar15 == (int8)piVar28 - param_1[2] >> 3)) {
              piVar27 = (int8 *)param_1[0x266];
              iVar17 = piVar27[1];
              piVar28 = piVar27;
              if (iVar17 - 0xfd0U < 0xfffffffffffff00f || iVar17 == -0x21) {
                piVar28 = (int8 *)malloc(0x1000);
                if (piVar28 == (int8 *)0x0) goto code_r0x000abb3c;
                iVar17 = 0;
                *piVar28 = (int8)piVar27;
                piVar28[1] = 0;
                param_1[0x266] = (int8)piVar28;
              }
              piVar28[1] = iVar17 + 0x20;
              pxVar21 = (xunknown8 *)((int8)piVar28 + iVar17 + 0x10);
              *pxVar21 = 0xd2608;
              *(xunknown1 *)((int8)piVar28 + iVar17 + 0x18) = 0x57;
              *(xunknown8 **)((int8)piVar28 + iVar17 + 0x20) = pxVar13;
              *(uint2 *)((int8)piVar28 + iVar17 + 0x19) =
                   *(uint2 *)((int8)piVar28 + iVar17 + 0x19) & 0xf000 | 0x540;
              piVar28 = (int8 *)param_1[3];
            }
            if (piVar28 == (int8 *)param_1[4]) {
              iVar17 = (int8)piVar28 - param_1[2];
              if ((int8 *)param_1[2] == piVar23) {
                iVar22 = malloc(iVar17 * 2);
                if (iVar22 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pxVar13 = (xunknown8 *)(*got_abort)();
                  return pxVar13;
                }
                if (piVar28 != piVar23) {
                  memcpy(iVar22,piVar23,iVar17);
                }
                param_1[2] = iVar22;
              }
              else {
                iVar22 = realloc();
                param_1[2] = iVar22;
                if (iVar22 == 0) goto code_r0x000ca7b0;
              }
              piVar28 = (int8 *)(iVar22 + iVar17);
              param_1[3] = (int8)piVar28;
              param_1[4] = iVar22 + (iVar17 >> 2) * 8;
            }
            param_1[3] = (int8)(piVar28 + 1);
            *piVar28 = (int8)pxVar21;
          } while (((uint1 *)param_1[1] != (uint1 *)*param_1) &&
                  ((uVar11 = *(uint1 *)*param_1 - 0x2e, 0x31 < uVar11 ||
                   ((1L << ((uint8)uVar11 & 0x3f) & 0x2000800800001U) == 0))));
          axVar29 = FUN_000adec4(param_1,iVar15);
          pcVar20 = (char *)*param_1;
          pcVar18 = (char *)param_1[1];
        }
        else {
          pcVar20 = pcVar20 + 1;
          *param_1 = (int8)pcVar20;
        }
        iStack_150 = 0;
        axStack_140 = axVar29;
        if ((pcVar20 != pcVar18) && (*pcVar20 == 'Q')) {
          xVar3 = *(xunknown1 *)((int8)param_1 + 0x30a);
          *param_1 = (int8)(pcVar20 + 1);
          *(xunknown1 *)((int8)param_1 + 0x30a) = 1;
          iStack_150 = FUN_000b0fa8(param_1);
          *(xunknown1 *)((int8)param_1 + 0x30a) = xVar3;
          axVar29 = axStack_140;
          if (iStack_150 == 0) goto code_r0x000abab0;
        }
        pxVar13 = (xunknown8 *)
                  FUN_000ae020(param_1,&iStack_148,&pxStack_128,axStack_140,&xStack_130,&iStack_150,
                               (uint8)&xStack_120 | 4,axStack_118);
        goto code_r0x000ab9e8;
      }
      iVar15 = param_1[2];
      iVar17 = param_1[3];
      puVar16 = puVar16 + 0xd;
      piVar23 = param_1 + 5;
      *param_1 = (int8)puVar16;
      while( true ) {
        if ((puVar16 != puVar19) && (*puVar16 == 0x45)) {
          *param_1 = (int8)(puVar16 + 1);
          axStack_140 = FUN_000adec4(param_1,iVar17 - iVar15 >> 3);
          xStack_130 = FUN_000ade24(param_1,axStack_140);
          uVar12 = xStack_120;
          goto joined_r0x000abb14;
        }
        iVar22 = FUN_000ad9d8(param_1);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
        if (iVar22 == 0) break;
        piVar28 = (int8 *)param_1[3];
        if (piVar28 == (int8 *)param_1[4]) {
          iVar26 = (int8)piVar28 - param_1[2];
          if ((int8 *)param_1[2] == piVar23) {
            iVar14 = malloc(iVar26 * 2);
            if (iVar14 == 0) goto code_r0x000ca7b0;
            if (piVar28 != piVar23) {
              memcpy(iVar14,piVar23,iVar26);
            }
            param_1[2] = iVar14;
          }
          else {
            iVar14 = realloc();
            param_1[2] = iVar14;
            if (iVar14 == 0) goto code_r0x000ca7b0;
          }
          piVar28 = (int8 *)(iVar14 + iVar26);
          param_1[3] = (int8)piVar28;
          param_1[4] = iVar14 + (iVar26 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar28 + 1);
        *piVar28 = iVar22;
        puVar16 = (uint1 *)*param_1;
        puVar19 = (uint1 *)param_1[1];
      }
    }
code_r0x000abab0:
    pxVar13 = (xunknown8 *)0x0;
    axStack_140 = axVar29;
  }
  else {
    if (*pcVar20 == 'G') {
      if (1 < (uint8)((int8)pcVar18 - (int8)pcVar20)) {
        cVar2 = pcVar20[1];
        if (cVar2 == 'I') {
          xStack_120 = 0;
          *param_1 = (int8)(pcVar20 + 2);
          uVar11 = FUN_000aec2c(param_1,&xStack_120);
          uVar12 = xStack_120;
          axVar29._8_8_ = axStack_140._8_8_;
          axVar29._0_8_ = axStack_140._0_8_;
          if ((uVar11 & 1) == 0 && xStack_120 != 0) {
            piVar28 = (int8 *)param_1[0x266];
            iVar15 = piVar28[1];
            piVar23 = piVar28;
            if (iVar15 - 0xfc0U < 0xfffffffffffff00f || iVar15 == -0x31) {
              piVar23 = (int8 *)malloc(0x1000);
              if (piVar23 == (int8 *)0x0) goto code_r0x000abb3c;
              iVar15 = 0;
              *piVar23 = (int8)piVar28;
              piVar23[1] = 0;
              param_1[0x266] = (int8)piVar23;
            }
            piVar23[1] = iVar15 + 0x30;
            pxVar13 = (xunknown8 *)((int8)piVar23 + iVar15 + 0x10);
            *pxVar13 = 0xd0458;
            *(uint8 *)((int8)piVar23 + iVar15 + 0x30) = uVar12;
            *(xunknown1 *)((int8)piVar23 + iVar15 + 0x18) = 0x15;
            *(xunknown8 *)((int8)piVar23 + iVar15 + 0x20) = 0x2da3c;
            *(xunknown8 *)((int8)piVar23 + iVar15 + 0x28) = 0x17;
            *(uint2 *)((int8)piVar23 + iVar15 + 0x19) =
                 *(uint2 *)((int8)piVar23 + iVar15 + 0x19) & 0xf000 | 0x540;
            goto code_r0x000abab4;
          }
        }
        else if (cVar2 == 'R') {
          *param_1 = (int8)(pcVar20 + 2);
          xStack_120 = FUN_000ad294(param_1,0);
          axVar9._8_8_ = axStack_140._8_8_;
          axVar9._0_8_ = axStack_140._0_8_;
          axVar8._8_8_ = axStack_140._8_8_;
          axVar8._0_8_ = axStack_140._0_8_;
          axVar29._8_8_ = axStack_140._8_8_;
          axVar29._0_8_ = axStack_140._0_8_;
          if (xStack_120 != 0) {
            puVar16 = (uint1 *)*param_1;
            puVar19 = (uint1 *)param_1[1];
            if (((puVar19 == puVar16) || (uVar1 = *puVar16, uVar1 < 0x30)) ||
               ((0x39 < uVar1 && (0x19 < uVar1 - 0x41)))) {
              bVar10 = true;
joined_r0x000ab59c:
              if ((puVar16 == puVar19) || (*puVar16 != 0x5f)) {
                axVar29 = axVar8;
                if (!bVar10) goto code_r0x000abab0;
              }
              else {
                *param_1 = (int8)(puVar16 + 1);
              }
              pxVar13 = (xunknown8 *)FUN_000aeb7c(param_1,&xStack_120);
              goto code_r0x000ab9e8;
            }
            do {
              uVar1 = *puVar16;
              if ((uVar1 < 0x30) || ((0x39 < uVar1 && (0x19 < uVar1 - 0x41)))) {
                bVar10 = false;
                goto joined_r0x000ab59c;
              }
              puVar16 = puVar16 + 1;
              *param_1 = (int8)puVar16;
              axVar29 = axVar9;
            } while (puVar16 != puVar19);
          }
        }
        else {
          axVar29 = axVar7;
          if (cVar2 == 'V') {
            *param_1 = (int8)(pcVar20 + 2);
            iVar15 = FUN_000ad294(param_1,0);
            axVar29._8_8_ = axStack_140._8_8_;
            axVar29._0_8_ = axStack_140._0_8_;
            if (iVar15 != 0) {
              piVar28 = (int8 *)param_1[0x266];
              iVar17 = piVar28[1];
              piVar23 = piVar28;
              if (iVar17 - 0xfc0U < 0xfffffffffffff00f || iVar17 == -0x31) {
                piVar23 = (int8 *)malloc(0x1000);
                if (piVar23 == (int8 *)0x0) goto code_r0x000abb3c;
                iVar17 = 0;
                *piVar23 = (int8)piVar28;
                piVar23[1] = 0;
                param_1[0x266] = (int8)piVar23;
              }
              piVar23[1] = iVar17 + 0x30;
              pxVar13 = (xunknown8 *)((int8)piVar23 + iVar17 + 0x10);
              *pxVar13 = 0xd0458;
              *(int8 *)((int8)piVar23 + iVar17 + 0x30) = iVar15;
              *(xunknown1 *)((int8)piVar23 + iVar17 + 0x18) = 0x15;
              *(xunknown8 *)((int8)piVar23 + iVar17 + 0x20) = 0x2eb8b;
              *(xunknown8 *)((int8)piVar23 + iVar17 + 0x28) = 0x13;
              *(uint2 *)((int8)piVar23 + iVar17 + 0x19) =
                   *(uint2 *)((int8)piVar23 + iVar17 + 0x19) & 0xf000 | 0x540;
              goto code_r0x000abab4;
            }
          }
        }
      }
      goto code_r0x000abab0;
    }
    if (*pcVar20 != 'T') goto code_r0x000ab20c;
    if ((uint8)((int8)pcVar18 - (int8)pcVar20) < 2) {
code_r0x000ab6cc:
      pcVar20 = pcVar20 + 1;
      *param_1 = (int8)pcVar20;
      if (pcVar18 == pcVar20) {
        bVar10 = false;
        uVar12 = FUN_000ae668(param_1);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
      }
      else {
        bVar10 = *pcVar20 == 'v';
        uVar12 = FUN_000ae668(param_1);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
      }
      if ((uVar12 & 1) == 0) {
        xStack_120 = FUN_000ab144(param_1);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
        if (xStack_120 != 0) {
          if (bVar10) {
            pxVar13 = (xunknown8 *)FUN_000aea20();
          }
          else {
            pxVar13 = (xunknown8 *)FUN_000aead0(param_1,&xStack_120);
          }
          goto code_r0x000ab9e8;
        }
      }
      goto code_r0x000abab0;
    }
    uVar1 = pcVar20[1];
    if (uVar1 < 0x53) {
      if (uVar1 < 0x48) {
        if (uVar1 == 0x41) {
          *param_1 = (int8)(pcVar20 + 2);
          xStack_120 = FUN_000ad9d8(param_1);
          axVar29._8_8_ = axStack_140._8_8_;
          axVar29._0_8_ = axStack_140._0_8_;
          if (xStack_120 != 0) {
            pxVar13 = (xunknown8 *)FUN_000ae2f8(param_1,&xStack_120);
            goto code_r0x000ab9e8;
          }
        }
        else {
          if (uVar1 != 0x43) goto code_r0x000ab6cc;
          *param_1 = (int8)(pcVar20 + 2);
          xStack_120 = FUN_000abd5c(param_1);
          axVar29._8_8_ = axStack_140._8_8_;
          axVar29._0_8_ = axStack_140._0_8_;
          if (xStack_120 != 0) {
            FUN_000abc1c(param_1,1);
            axVar6._8_8_ = axStack_140._8_8_;
            axVar6._0_8_ = axStack_140._0_8_;
            axVar5._8_8_ = axStack_140._8_8_;
            axVar5._0_8_ = axStack_140._0_8_;
            axVar29._8_8_ = axStack_140._8_8_;
            axVar29._0_8_ = axStack_140._0_8_;
            if (((extraout_x1 != 0) &&
                (pcVar20 = (char *)*param_1, axVar29 = axVar5, pcVar20 != (char *)param_1[1])) &&
               (axVar29 = axVar6, *pcVar20 == '_')) {
              *param_1 = (int8)(pcVar20 + 1);
              axStack_140._0_8_ = FUN_000abd5c(param_1);
              axVar29._8_8_ = axStack_140._8_8_;
              axVar29._0_8_ = axStack_140._0_8_;
              if (axStack_140._0_8_ != 0) {
                pxVar13 = (xunknown8 *)FUN_000ae8c8(param_1,axStack_140,&xStack_120);
                goto code_r0x000ab9e8;
              }
            }
          }
        }
        goto code_r0x000abab0;
      }
      if (uVar1 == 0x48) {
        *param_1 = (int8)(pcVar20 + 2);
        xStack_120 = FUN_000ad294(param_1,0);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
        if (xStack_120 == 0) goto code_r0x000abab0;
        pxVar13 = (xunknown8 *)FUN_000ae970(param_1,&xStack_120);
      }
      else {
        if (uVar1 != 0x49) goto code_r0x000ab6cc;
        *param_1 = (int8)(pcVar20 + 2);
        xStack_120 = FUN_000abd5c(param_1);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
        if (xStack_120 == 0) goto code_r0x000abab0;
        pxVar13 = (xunknown8 *)FUN_000ae508(param_1,&xStack_120);
      }
    }
    else {
      if (0x55 < uVar1) {
        if (uVar1 == 0x56) {
          *param_1 = (int8)(pcVar20 + 2);
          xStack_120 = FUN_000abd5c(param_1);
          axVar29._8_8_ = axStack_140._8_8_;
          axVar29._0_8_ = axStack_140._0_8_;
          if (xStack_120 != 0) {
            pxVar13 = (xunknown8 *)FUN_000ae3a8(param_1,&xStack_120);
            goto code_r0x000ab9e8;
          }
        }
        else if (uVar1 == 0x57) {
          *param_1 = (int8)(pcVar20 + 2);
          xStack_120 = FUN_000ad294(param_1,0);
          axVar29._8_8_ = axStack_140._8_8_;
          axVar29._0_8_ = axStack_140._0_8_;
          if (xStack_120 != 0) {
            pxVar13 = (xunknown8 *)FUN_000abca8(param_1,0x35660 /* "thread-local wrapper routine for " */,&xStack_120);
            goto code_r0x000ab9e8;
          }
        }
        else {
          if (uVar1 != 99) goto code_r0x000ab6cc;
          *param_1 = (int8)(pcVar20 + 2);
          uVar12 = FUN_000ae668(param_1);
          axVar29._8_8_ = axStack_140._8_8_;
          axVar29._0_8_ = axStack_140._0_8_;
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_000ae668(param_1);
            axVar29._8_8_ = axStack_140._8_8_;
            axVar29._0_8_ = axStack_140._0_8_;
            if ((uVar12 & 1) == 0) {
              xStack_120 = FUN_000ab144(param_1);
              axVar29._8_8_ = axStack_140._8_8_;
              axVar29._0_8_ = axStack_140._0_8_;
              if (xStack_120 != 0) {
                pxVar13 = (xunknown8 *)FUN_000ae818(param_1,&xStack_120);
                goto code_r0x000ab9e8;
              }
            }
          }
        }
        goto code_r0x000abab0;
      }
      if (uVar1 == 0x53) {
        *param_1 = (int8)(pcVar20 + 2);
        xStack_120 = FUN_000abd5c(param_1);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
        if (xStack_120 == 0) goto code_r0x000abab0;
        pxVar13 = (xunknown8 *)FUN_000ae5b8(param_1,&xStack_120);
      }
      else {
        if (uVar1 != 0x54) goto code_r0x000ab6cc;
        *param_1 = (int8)(pcVar20 + 2);
        xStack_120 = FUN_000abd5c(param_1);
        axVar29._8_8_ = axStack_140._8_8_;
        axVar29._0_8_ = axStack_140._0_8_;
        if (xStack_120 == 0) goto code_r0x000abab0;
        pxVar13 = (xunknown8 *)FUN_000ae458(param_1,&xStack_120);
      }
    }
code_r0x000ab9e8:
  }
code_r0x000abab4:
  FUN_000ae114(axStack_100);
  return pxVar13;
}

/* 0xabc1c  size=140 */
xunknown1  [16] FUN_000abc1c(int8 *param_1,uint8 param_2)

{
  uint1 *puVar1;
  uint1 *puVar2;
  xunknown1 axVar3 [16];
  
  axVar3._0_8_ = (uint1 *)*param_1;
  puVar1 = (uint1 *)param_1[1];
  puVar2 = axVar3._0_8_;
  if ((((param_2 & 1) != 0) && (axVar3._0_8_ != puVar1)) && (*axVar3._0_8_ == 0x6e)) {
    puVar2 = axVar3._0_8_ + 1;
    *param_1 = (int8)puVar2;
  }
  if ((puVar1 == puVar2) || (*puVar2 - 0x3a < 0xfffffff6)) {
    return ZEXT816(0);
  }
  do {
    if (*puVar2 - 0x3a < 0xfffffff6) goto code_r0x000abca0;
    puVar2 = puVar2 + 1;
    *param_1 = (int8)puVar2;
  } while (puVar2 != puVar1);
  puVar2 = puVar1;
code_r0x000abca0:
  axVar3._8_8_ = (int8)puVar2 - (int8)axVar3._0_8_;
  return axVar3;
}

/* 0xabca8  size=180 */
xunknown8 * FUN_000abca8(int8 param_1,xunknown8 param_2,xunknown8 *param_3)

{
  int8 *piVar1;
  xunknown8 xVar2;
  int8 iVar3;
  xunknown8 xVar4;
  xunknown8 *pxVar5;
  int8 *piVar6;
  
  piVar6 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar6[1];
  piVar1 = piVar6;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
    piVar1 = (int8 *)malloc(0x1000);
    if (piVar1 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pxVar5 = (xunknown8 *)(*pcRam00000000000d4468)();
      return pxVar5;
    }
    iVar3 = 0;
    *piVar1 = (int8)piVar6;
    piVar1[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar1;
  }
  piVar1[1] = iVar3 + 0x30;
  xVar2 = strlen(param_2);
  xVar4 = *param_3;
  pxVar5 = (xunknown8 *)((int8)piVar1 + iVar3 + 0x10);
  *pxVar5 = 0xd0458;
  *(xunknown8 *)((int8)piVar1 + iVar3 + 0x20) = param_2;
  *(xunknown8 *)((int8)piVar1 + iVar3 + 0x28) = xVar2;
  *(xunknown1 *)((int8)piVar1 + iVar3 + 0x18) = 0x15;
  *(uint2 *)((int8)piVar1 + iVar3 + 0x19) = *(uint2 *)((int8)piVar1 + iVar3 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar3 + 0x30) = xVar4;
  return pxVar5;
}

/* 0xabd5c  size=4996 */
xunknown8 * FUN_000abd5c(int8 *param_1)

{
  char *pcVar1;
  uint1 *puVar2;
  uint1 uVar3;
  int8 *piVar4;
  xunknown8 *pxVar5;
  int8 iVar6;
  uint8 uVar7;
  uint1 *puVar8;
  uint2 uVar9;
  xunknown8 xVar10;
  uint4 uVar11;
  xunknown8 xVar12;
  uint8 uVar13;
  uint1 *puVar14;
  int8 iVar15;
  int8 *piVar16;
  xunknown8 *pxStack_58;
  xunknown1 axStack_50 [16];
  uint8 uStack_28;
  
  puVar8 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  pxStack_58 = (xunknown8 *)0x0;
  uVar7 = (int8)puVar2 - (int8)puVar8;
  if (puVar2 == puVar8) {
code_r0x000ac978:
    pxVar5 = (xunknown8 *)FUN_000c0548(param_1);
    goto joined_r0x000ace20;
  }
  uVar3 = *puVar8;
  uVar11 = 0;
  switch(uVar3) {
  case 0x41:
    puVar14 = puVar8 + 1;
    uStack_28 = 0;
    *param_1 = (int8)puVar14;
    if (puVar2 == puVar14) {
code_r0x000acc60:
      uVar7 = FUN_000b0fa8(param_1);
      pxVar5 = (xunknown8 *)0x0;
      if (uVar7 == 0) goto joined_r0x000ace20;
      pcVar1 = (char *)*param_1;
      if ((pcVar1 == (char *)param_1[1]) || (*pcVar1 != '_')) {
        return (xunknown8 *)0x0;
      }
      puVar8 = (uint1 *)(pcVar1 + 1);
      uStack_28 = uVar7;
    }
    else if (*puVar14 - 0x3a < 0xfffffff6) {
      if (*puVar14 != 0x5f) goto code_r0x000acc60;
      puVar8 = puVar8 + 2;
    }
    else {
      axStack_50 = FUN_000abc1c(param_1,0);
      uStack_28 = FUN_000b0a7c(param_1,axStack_50);
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 != '_') {
        return (xunknown8 *)0x0;
      }
      puVar8 = (uint1 *)(pcVar1 + 1);
    }
    *param_1 = (int8)puVar8;
    puVar8 = (uint1 *)FUN_000abd5c(param_1);
    pxVar5 = (xunknown8 *)0x0;
    axStack_50._0_8_ = puVar8;
    if (puVar8 != (uint1 *)0x0) {
      pxVar5 = (xunknown8 *)FUN_000c1fe4(param_1,axStack_50,&uStack_28);
    }
    goto joined_r0x000ace20;
  default:
    goto code_r0x000ac978;
  case 0x43:
    *param_1 = (int8)(puVar8 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar5 = (xunknown8 *)FUN_000c0844(param_1,axStack_50);
    goto code_r0x000ac984;
  case 0x44:
    if (uVar7 < 2) {
      return (xunknown8 *)0x0;
    }
    uVar3 = puVar8[1];
    pxVar5 = (xunknown8 *)0x0;
    switch(uVar3) {
    case 0x42:
    case 0x55:
      puVar8 = puVar8 + 2;
      *param_1 = (int8)puVar8;
      if ((puVar2 == puVar8) || (*puVar8 - 0x3a < 0xfffffff6)) {
        axStack_50._0_8_ = FUN_000b0fa8(param_1);
        if (axStack_50._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
      }
      else {
        axStack_50 = FUN_000abc1c(param_1,0);
        iVar15 = FUN_000b0a7c(param_1,axStack_50);
        axStack_50._0_8_ = iVar15;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 == '_') {
        *param_1 = (int8)(pcVar1 + 1);
        pxVar5 = (xunknown8 *)FUN_000c00dc(param_1,axStack_50,uVar3 == 0x42);
        return pxVar5;
      }
      return (xunknown8 *)0x0;
    default:
      goto code_r0x000acb48;
    case 0x46:
      *param_1 = (int8)(puVar8 + 2);
      axStack_50 = FUN_000abc1c(param_1,0);
      xVar12 = FUN_000b0a7c(param_1,axStack_50);
      pcVar1 = (char *)*param_1;
      if ((pcVar1 == (char *)param_1[1]) || (*pcVar1 != '_')) {
        return (xunknown8 *)0x0;
      }
      *param_1 = (int8)(pcVar1 + 1);
      axStack_50._0_8_ = xVar12;
      pxVar5 = (xunknown8 *)FUN_000c003c(param_1,axStack_50);
      return pxVar5;
    case 0x4b:
    case 0x6b:
      axStack_50._0_8_ = 0x3d198 /* " auto" */;
      if (uVar3 != 0x6b) {
        axStack_50._0_8_ = 0x22cea /* " decltype(auto)" */;
      }
      axStack_50._8_8_ = 5;
      if (uVar3 != 0x6b) {
        axStack_50._8_8_ = 0xf;
      }
      *param_1 = (int8)(puVar8 + 2);
      uStack_28 = FUN_000ad294(param_1,0);
      if (uStack_28 == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar5 = (xunknown8 *)FUN_000c018c(param_1,&uStack_28,axStack_50);
      return pxVar5;
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto code_r0x000ac6ec;
    case 0x54:
    case 0x74:
      pxVar5 = (xunknown8 *)FUN_000b007c(param_1);
      break;
    case 0x61:
      xVar12 = 0x25c16 /* "auto" */;
      goto code_r0x000acfdc;
    case 99:
      xVar12 = 0x23e70 /* "decltype(auto)" */;
      goto code_r0x000ad054;
    case 100:
      xVar12 = 0x38fa0 /* "decimal64" */;
      goto code_r0x000acfa8;
    case 0x65:
      *param_1 = (int8)(puVar8 + 2);
      piVar16 = (int8 *)param_1[0x266];
      iVar15 = piVar16[1];
      piVar4 = piVar16;
      if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
        piVar4 = (int8 *)malloc(0x1000);
        if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
        iVar15 = 0;
        *piVar4 = (int8)piVar16;
        piVar4[1] = 0;
        param_1[0x266] = (int8)piVar4;
      }
      piVar4[1] = iVar15 + 0x20;
      xVar12 = strlen(0x2b35f /* "decimal128" */);
      pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
      *pxVar5 = 0xd0548;
      *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar4 + iVar15 + 0x20) = 0x2b35f;
      *(xunknown8 *)((int8)piVar4 + iVar15 + 0x28) = xVar12;
      *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
           *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
      return pxVar5;
    case 0x66:
      xVar12 = 0x350e6 /* "decimal32" */;
code_r0x000acfa8:
      *param_1 = (int8)(puVar8 + 2);
      piVar16 = (int8 *)param_1[0x266];
      iVar15 = piVar16[1];
      piVar4 = piVar16;
      if (0xfffffffffffff00e < iVar15 - 0xfd0U && iVar15 != -0x21) {
code_r0x000bfde4:
        piVar4[1] = iVar15 + 0x20;
        xVar10 = strlen(xVar12);
        pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
        *pxVar5 = 0xd0548;
        *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar4 + iVar15 + 0x20) = xVar12;
        *(xunknown8 *)((int8)piVar4 + iVar15 + 0x28) = xVar10;
        *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
             *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
        return pxVar5;
      }
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 != (int8 *)0x0) {
        iVar15 = 0;
        *piVar4 = (int8)piVar16;
        piVar4[1] = 0;
        param_1[0x266] = (int8)piVar4;
        goto code_r0x000bfde4;
      }
      goto code_r0x000caa00;
    case 0x68:
      xVar12 = 0x38598 /* "half" */;
code_r0x000acfdc:
      *param_1 = (int8)(puVar8 + 2);
      piVar16 = (int8 *)param_1[0x266];
      iVar15 = piVar16[1];
      piVar4 = piVar16;
      if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
        piVar4 = (int8 *)malloc(0x1000);
        if (piVar4 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar5 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar5;
        }
        iVar15 = 0;
        *piVar4 = (int8)piVar16;
        piVar4[1] = 0;
        param_1[0x266] = (int8)piVar4;
      }
      piVar4[1] = iVar15 + 0x20;
      xVar10 = strlen(xVar12);
      pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
      *pxVar5 = 0xd0548;
      *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar4 + iVar15 + 0x20) = xVar12;
      *(xunknown8 *)((int8)piVar4 + iVar15 + 0x28) = xVar10;
      *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
           *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
      return pxVar5;
    case 0x69:
      xVar12 = 0x30d72 /* "char32_t" */;
      goto code_r0x000ad010;
    case 0x6e:
      xVar12 = 0x2905b /* "std::nullptr_t" */;
code_r0x000ad054:
      *param_1 = (int8)(puVar8 + 2);
      piVar16 = (int8 *)param_1[0x266];
      iVar15 = piVar16[1];
      piVar4 = piVar16;
      if (0xfffffffffffff00e < iVar15 - 0xfd0U && iVar15 != -0x21) {
code_r0x000be0dc:
        piVar4[1] = iVar15 + 0x20;
        xVar10 = strlen(xVar12);
        pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
        *pxVar5 = 0xd0548;
        *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar4 + iVar15 + 0x20) = xVar12;
        *(xunknown8 *)((int8)piVar4 + iVar15 + 0x28) = xVar10;
        *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
             *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
        return pxVar5;
      }
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 != (int8 *)0x0) {
        iVar15 = 0;
        *piVar4 = (int8)piVar16;
        piVar4[1] = 0;
        param_1[0x266] = (int8)piVar4;
        goto code_r0x000be0dc;
      }
      goto code_r0x000caa00;
    case 0x70:
      *param_1 = (int8)(puVar8 + 2);
      axStack_50._0_8_ = FUN_000abd5c(param_1);
      if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pxVar5 = (xunknown8 *)FUN_000b4a94(param_1,axStack_50);
      goto code_r0x000ac984;
    case 0x73:
      xVar12 = 0x40acf /* "char16_t" */;
code_r0x000ad010:
      *param_1 = (int8)(puVar8 + 2);
      piVar16 = (int8 *)param_1[0x266];
      iVar15 = piVar16[1];
      piVar4 = piVar16;
      if (0xfffffffffffff00e < iVar15 - 0xfd0U && iVar15 != -0x21) {
code_r0x000bfe8c:
        piVar4[1] = iVar15 + 0x20;
        xVar10 = strlen(xVar12);
        pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
        *pxVar5 = 0xd0548;
        *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar4 + iVar15 + 0x20) = xVar12;
        *(xunknown8 *)((int8)piVar4 + iVar15 + 0x28) = xVar10;
        *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
             *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
        return pxVar5;
      }
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 != (int8 *)0x0) {
        iVar15 = 0;
        *piVar4 = (int8)piVar16;
        piVar4[1] = 0;
        param_1[0x266] = (int8)piVar4;
        goto code_r0x000bfe8c;
      }
      goto code_r0x000caa00;
    case 0x75:
      *param_1 = (int8)(puVar8 + 2);
      piVar16 = (int8 *)param_1[0x266];
      iVar15 = piVar16[1];
      piVar4 = piVar16;
      if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
        piVar4 = (int8 *)malloc(0x1000);
        if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
        iVar15 = 0;
        *piVar4 = (int8)piVar16;
        piVar4[1] = 0;
        param_1[0x266] = (int8)piVar4;
      }
      piVar4[1] = iVar15 + 0x20;
      xVar12 = strlen(0x29053 /* "char8_t" */);
      pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
      *pxVar5 = 0xd0548;
      *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar4 + iVar15 + 0x20) = 0x29053;
      *(xunknown8 *)((int8)piVar4 + iVar15 + 0x28) = xVar12;
      *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
           *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
      return pxVar5;
    case 0x76:
      pxVar5 = (xunknown8 *)FUN_000c0238(param_1);
    }
    goto joined_r0x000ace20;
  case 0x46:
    goto code_r0x000ac6ec;
  case 0x47:
    *param_1 = (int8)(puVar8 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar5 = (xunknown8 *)FUN_000c08f4(param_1,axStack_50);
    goto code_r0x000ac984;
  case 0x4b:
  case 0x56:
code_r0x000ac3bc:
    if (uVar3 == 0x56) {
      uVar11 = uVar11 + 1;
    }
    uVar13 = (uint8)uVar11;
    if (uVar13 < uVar7) {
code_r0x000ac3d4:
      if (puVar8[uVar13] == 0x4b) {
        uVar11 = uVar11 + 1;
      }
      uVar13 = (uint8)uVar11;
    }
    goto code_r0x000ac3e8;
  case 0x4d:
    *param_1 = (int8)(puVar8 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    pxVar5 = (xunknown8 *)0x0;
    if ((uint1 *)axStack_50._0_8_ != (uint1 *)0x0) {
      uStack_28 = FUN_000abd5c(param_1);
      pxVar5 = (xunknown8 *)0x0;
      if (uStack_28 != 0) {
        pxVar5 = (xunknown8 *)FUN_000c2260(param_1,axStack_50,&uStack_28);
      }
    }
    goto joined_r0x000ace20;
  case 0x4f:
    *param_1 = (int8)(puVar8 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    uStack_28 = CONCAT44(uStack_28._4_4_,1);
    goto code_r0x000aca30;
  case 0x50:
    *param_1 = (int8)(puVar8 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar5 = (xunknown8 *)FUN_000c06dc(param_1,axStack_50);
    goto code_r0x000ac984;
  case 0x52:
    *param_1 = (int8)(puVar8 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    uStack_28 = uStack_28 & 0xffffffff00000000;
code_r0x000aca30:
    pxVar5 = (xunknown8 *)FUN_000c0788(param_1,axStack_50,&uStack_28);
    goto code_r0x000ac984;
  case 0x53:
    if ((1 < uVar7) && (puVar8[1] == 0x74)) goto code_r0x000ac978;
    uStack_28 = uStack_28 & 0xffffffffffffff00;
    pxVar5 = (xunknown8 *)FUN_000af4e8(param_1,0,&uStack_28);
    if (pxVar5 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxStack_58 = pxVar5;
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((uStack_28 & 0xff) != 0) {
        return pxVar5;
      }
    }
    else {
      if (((char)uStack_28 != '\0') && ((char)param_1[0x61] == '\0')) {
        return pxVar5;
      }
      if ((char)uStack_28 == '\0') {
        FUN_000add4c(param_1 + 0x25,&pxStack_58);
      }
      axStack_50._0_8_ = FUN_000af668(param_1,0);
      if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
        return (xunknown8 *)0x0;
      }
code_r0x000acc4c:
      pxVar5 = (xunknown8 *)FUN_000afc04(param_1,&pxStack_58,axStack_50);
    }
    goto code_r0x000ac984;
  case 0x54:
    if (((1 < uVar7) && (puVar8[1] - 0x65 < 0x11)) &&
       ((1 << (uint8)(puVar8[1] - 0x65 & 0x1f) & 0x14001U) != 0)) goto code_r0x000ac978;
    pxVar5 = (xunknown8 *)FUN_000afcac(param_1);
    if (pxVar5 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxStack_58 = pxVar5;
    if ((((char)param_1[0x61] != '\0') && ((char *)param_1[1] != (char *)*param_1)) &&
       (*(char *)*param_1 == 'I')) {
      axStack_50._0_8_ = FUN_000af668(param_1,0);
      if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
        return (xunknown8 *)0x0;
      }
      goto code_r0x000acc4c;
    }
    goto code_r0x000ac984;
  case 0x55:
    goto code_r0x000ac440;
  case 0x61:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x38f8a /* "signed char" */;
    goto code_r0x000ac2a0;
  case 0x62:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x29875 /* "bool" */;
    goto code_r0x000acb30;
  case 99:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x30d50 /* "char" */;
    goto code_r0x000acb30;
  case 100:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x2d39a /* "double" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 6;
    break;
  case 0x65:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x29f9b /* "long double" */;
code_r0x000ac2a0:
    *(uint2 *)((int8)pxVar5 + 9) = uVar9 & 0xf000 | 0x540;
    xVar10 = 0xb;
    break;
  case 0x66:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x3a12a /* "float" */;
    goto code_r0x000ac858;
  case 0x67:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x23e65 /* "__float128" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 10;
    break;
  case 0x68:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x2ebb2 /* "unsigned char" */;
    goto code_r0x000ac390;
  case 0x69:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x30d6e;
    goto code_r0x000ac768;
  case 0x6a:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x36ff1 /* "unsigned int" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 0xc;
    break;
  case 0x6c:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x23e60 /* "long" */;
    goto code_r0x000acb30;
  case 0x6d:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x3fb6b /* "unsigned long" */;
code_r0x000ac390:
    *(uint2 *)((int8)pxVar5 + 9) = uVar9 & 0xf000 | 0x540;
    xVar10 = 0xd;
    break;
  case 0x6e:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    *(xunknown8 *)((int8)piVar4 + iVar15 + 0x20) = 0x2650c;
    *(xunknown8 *)((int8)piVar4 + iVar15 + 0x28) = 8;
    return pxVar5;
  case 0x6f:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x2bf5a /* "unsigned __int128" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 0x11;
    break;
  case 0x72:
    if (1 < uVar7) {
      uVar3 = puVar8[1];
      uVar11 = 1;
      goto code_r0x000ac3bc;
    }
    uVar11 = 1;
    uVar13 = 1;
    if (1 < uVar7) goto code_r0x000ac3d4;
code_r0x000ac3e8:
    if ((uVar13 < uVar7) &&
       ((puVar8[uVar13] == 0x46 ||
        ((((puVar8[uVar13] == 0x44 && ((uint8)uVar11 + 1 < uVar7)) &&
          (puVar8[(uint8)uVar11 + 1] - 0x4f < 0x2a)) &&
         ((1L << ((uint8)(puVar8[(uint8)uVar11 + 1] - 0x4f) & 0x3f) & 0x30100000001U) != 0)))))) {
code_r0x000ac6ec:
      pxVar5 = (xunknown8 *)FUN_000bf34c(param_1);
    }
    else {
code_r0x000ac440:
      pxVar5 = (xunknown8 *)FUN_000bf93c(param_1);
    }
joined_r0x000ace20:
    if (pxVar5 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    goto code_r0x000ac984;
  case 0x73:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x2bf54 /* "short" */;
code_r0x000ac858:
    *(uint2 *)((int8)pxVar5 + 9) = uVar9 & 0xf000 | 0x540;
    xVar10 = 5;
    break;
  case 0x74:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x22cc8 /* "unsigned short" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 0xe;
    break;
  case 0x75:
    puVar14 = puVar8 + 1;
    *param_1 = (int8)puVar14;
    if (puVar2 == puVar14) {
      return (xunknown8 *)0x0;
    }
    if (*puVar14 - 0x3a < 0xfffffff6) {
      return (xunknown8 *)0x0;
    }
    axStack_50._8_8_ = 0;
    axStack_50._0_8_ = puVar8 + 1;
    puVar8 = puVar8 + 2;
    do {
      puVar14 = puVar8;
      *param_1 = (int8)puVar14;
      axStack_50._8_8_ = ((uint8)puVar14[-1] + axStack_50._8_8_ * 10) - 0x30;
      if (puVar14 == puVar2) {
        axStack_50._0_8_ = puVar2;
        puVar14 = puVar2;
        goto code_r0x000acd2c;
      }
      axStack_50._0_8_ = axStack_50._0_8_ + 1;
      puVar8 = puVar14 + 1;
    } while (*puVar14 - 0x30 < 10);
code_r0x000acd2c:
    if ((uint8)((int8)puVar2 - axStack_50._0_8_) < (uint8)axStack_50._8_8_) {
      return (xunknown8 *)0x0;
    }
    puVar14 = puVar14 + axStack_50._8_8_;
    *param_1 = (int8)puVar14;
    if (axStack_50._8_8_ == 0) {
      return (xunknown8 *)0x0;
    }
    if ((puVar14 == puVar2) || (*puVar14 != 0x49)) {
      pxVar5 = (xunknown8 *)FUN_000af270(param_1,axStack_50);
    }
    else {
      *param_1 = (int8)(puVar14 + 1);
      uStack_28 = FUN_000abd5c(param_1);
      if (uStack_28 == 0) {
        return (xunknown8 *)0x0;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 != 'E') {
        return (xunknown8 *)0x0;
      }
      *param_1 = (int8)(pcVar1 + 1);
      pxVar5 = (xunknown8 *)FUN_000bff90(param_1,axStack_50,&uStack_28);
    }
code_r0x000ac984:
    piVar4 = (int8 *)param_1[0x26];
    if (piVar4 == (int8 *)param_1[0x27]) {
      piVar16 = (int8 *)param_1[0x25];
      iVar15 = (int8)piVar4 - (int8)piVar16;
      if (piVar16 == param_1 + 0x28) {
        iVar6 = malloc(iVar15 * 2);
        if (iVar6 == 0) goto code_r0x000ca7b0;
        if (piVar4 != piVar16) {
          memmove(iVar6,piVar16,iVar15);
        }
        param_1[0x25] = iVar6;
      }
      else {
        iVar6 = realloc(piVar16);
        param_1[0x25] = iVar6;
        if (iVar6 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar5 = (xunknown8 *)(*got_abort)();
          return pxVar5;
        }
      }
      piVar4 = (int8 *)(iVar6 + iVar15);
      param_1[0x27] = iVar6 + (iVar15 >> 2) * 8;
    }
    param_1[0x26] = (int8)(piVar4 + 1);
    *piVar4 = (int8)pxVar5;
    return pxVar5;
  case 0x76:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x3fb66 /* "void" */;
code_r0x000acb30:
    *(uint2 *)((int8)pxVar5 + 9) = uVar9 & 0xf000 | 0x540;
    xVar10 = 4;
    break;
  case 0x77:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x22cc0 /* "wchar_t" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 7;
    break;
  case 0x78:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x38f96 /* "long long" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 9;
    break;
  case 0x79:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x22cd7 /* "unsigned long long" */;
    *(uint2 *)((int8)piVar4 + iVar15 + 0x19) =
         *(uint2 *)((int8)piVar4 + iVar15 + 0x19) & 0xf000 | 0x540;
    xVar10 = 0x12;
    break;
  case 0x7a:
    piVar16 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar8 + 1);
    iVar15 = piVar16[1];
    piVar4 = piVar16;
    if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
      piVar4 = (int8 *)malloc(0x1000);
      if (piVar4 == (int8 *)0x0) goto code_r0x000caa00;
      iVar15 = 0;
      *piVar4 = (int8)piVar16;
      piVar4[1] = 0;
      param_1[0x266] = (int8)piVar4;
    }
    piVar4[1] = iVar15 + 0x20;
    pxVar5 = (xunknown8 *)((int8)piVar4 + iVar15 + 0x10);
    *pxVar5 = 0xd0548;
    uVar9 = *(uint2 *)((int8)piVar4 + iVar15 + 0x19);
    *(xunknown1 *)((int8)piVar4 + iVar15 + 0x18) = 8;
    xVar12 = 0x2b35b;
code_r0x000ac768:
    *(uint2 *)((int8)pxVar5 + 9) = uVar9 & 0xf000 | 0x540;
    xVar10 = 3;
  }
  pxVar5[2] = xVar12;
  pxVar5[3] = xVar10;
code_r0x000acb48:
  return pxVar5;
}

/* 0xad0e0  size=436 */
void FUN_000ad0e0(int8 *param_1,int8 param_2)

{
  int8 *piVar1;
  int8 iVar2;
  int8 iVar3;
  int8 *piVar4;
  int8 *piVar5;
  
  iVar3 = param_2 + 0x2b0;
  piVar1 = param_1 + 4;
  param_1[5] = 0;
  *piVar1 = 0;
  *param_1 = param_2;
  param_1[1] = (int8)piVar1;
  piVar4 = param_1 + 0xb;
  param_1[0xc] = 0;
  *piVar4 = 0;
  piVar5 = param_1 + 8;
  *piVar5 = (int8)piVar4;
  param_1[2] = (int8)piVar1;
  param_1[3] = (int8)piVar5;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = (int8)piVar4;
  param_1[10] = (int8)(param_1 + 0x13);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  iVar2 = *(int8 *)(param_2 + 0x298);
  if (iVar2 == iVar3) {
    iVar3 = *(int8 *)(param_2 + 0x2a0) - iVar2;
    if (iVar3 == 0) {
      iVar3 = iVar2;
    }
    else {
      memmove(piVar1,iVar2,iVar3);
      iVar2 = *(int8 *)(param_2 + 0x2a0);
      iVar3 = *(int8 *)(param_2 + 0x298);
    }
    param_1[2] = (int8)piVar1 + (iVar2 - iVar3);
    *(int8 *)(param_2 + 0x2a0) = iVar3;
    iVar3 = *(int8 *)(param_2 + 0x240);
    piVar1 = (int8 *)*piVar5;
    if (iVar3 == param_2 + 600) goto code_r0x000ad21c;
code_r0x000ad17c:
    *piVar5 = iVar3;
    if (piVar1 == piVar4) {
      iVar3 = *(int8 *)(param_2 + 0x248);
      param_1[10] = *(int8 *)(param_2 + 0x250);
      param_1[9] = iVar3;
      *(int8 *)(param_2 + 0x240) = param_2 + 600;
      *(int8 *)(param_2 + 0x248) = param_2 + 600;
      *(int8 *)(param_2 + 0x250) = param_2 + 0x298;
      goto code_r0x000ad268;
    }
    *(int8 **)(param_2 + 0x240) = piVar1;
    iVar3 = param_1[9];
    param_1[9] = *(int8 *)(param_2 + 0x248);
    *(int8 *)(param_2 + 0x248) = iVar3;
    iVar3 = param_1[10];
    param_1[10] = *(int8 *)(param_2 + 0x250);
    iVar2 = *(int8 *)(param_2 + 0x240);
    *(int8 *)(param_2 + 0x250) = iVar3;
  }
  else {
    param_1[1] = iVar2;
    iVar2 = *(int8 *)(param_2 + 0x2a0);
    param_1[3] = *(int8 *)(param_2 + 0x2a8);
    param_1[2] = iVar2;
    *(int8 *)(param_2 + 0x298) = iVar3;
    *(int8 *)(param_2 + 0x2a0) = iVar3;
    *(int8 *)(param_2 + 0x2a8) = param_2 + 0x2d0;
    iVar3 = *(int8 *)(param_2 + 0x240);
    piVar1 = (int8 *)*piVar5;
    if (iVar3 != param_2 + 600) goto code_r0x000ad17c;
code_r0x000ad21c:
    if (piVar1 != piVar4) {
      free();
      param_1[8] = (int8)piVar4;
      param_1[9] = (int8)piVar4;
      iVar3 = *(int8 *)(param_2 + 0x240);
      param_1[10] = (int8)(param_1 + 0x13);
    }
    iVar2 = *(int8 *)(param_2 + 0x248) - iVar3;
    if (iVar2 == 0) {
      iVar2 = iVar3;
    }
    else {
      memmove(piVar4,iVar3,iVar2);
      iVar3 = *(int8 *)(param_2 + 0x248);
      iVar2 = *(int8 *)(param_2 + 0x240);
    }
    param_1[9] = (int8)piVar4 + (iVar3 - iVar2);
  }
  *(int8 *)(param_2 + 0x248) = iVar2;
code_r0x000ad268:
  iVar3 = *param_1;
  *(xunknown8 *)(iVar3 + 0x2a0) = *(xunknown8 *)(iVar3 + 0x298);
  *(xunknown8 *)(iVar3 + 0x248) = *(xunknown8 *)(iVar3 + 0x240);
  return;
}

/* 0xad294  size=1860 */
xunknown8 * FUN_000ad294(int8 *param_1,int8 param_2)

{
  char *pcVar1;
  uint1 *puVar2;
  char *pcVar3;
  uint1 uVar4;
  int8 iVar5;
  int8 *piVar6;
  xunknown8 *pxVar7;
  xunknown8 *pxVar8;
  uint1 *puVar9;
  int8 iVar10;
  uint1 *puVar11;
  uint4 uVar12;
  int8 *piVar13;
  int8 *piVar14;
  int8 iStack_110;
  uint8 auStack_108 [19];
  int8 aiStack_70 [2];
  
  puVar2 = (uint1 *)*param_1;
  puVar11 = (uint1 *)param_1[1];
  if (puVar11 == puVar2) {
code_r0x000ad314:
    auStack_108[0] = auStack_108[0] & 0xffffffffffffff00;
    pxVar7 = (xunknown8 *)FUN_000af4e8(param_1,param_2,auStack_108);
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((char)auStack_108[0] != '\0') {
        pxVar7 = (xunknown8 *)0x0;
      }
      return pxVar7;
    }
    if ((char)auStack_108[0] == '\0') {
      piVar13 = (int8 *)param_1[0x26];
      if (piVar13 == (int8 *)param_1[0x27]) {
        piVar6 = param_1 + 0x28;
        iVar5 = (int8)piVar13 - param_1[0x25];
        if ((int8 *)param_1[0x25] == piVar6) {
          iVar10 = malloc(iVar5 * 2);
          if (iVar10 == 0) goto code_r0x000ca7b0;
          if (piVar13 != piVar6) {
            memcpy(iVar10,piVar6,iVar5);
          }
          param_1[0x25] = iVar10;
        }
        else {
          iVar10 = realloc();
          param_1[0x25] = iVar10;
          if (iVar10 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pxVar7 = (xunknown8 *)(*got_abort)();
            return pxVar7;
          }
        }
        piVar13 = (int8 *)(iVar10 + iVar5);
        param_1[0x26] = (int8)piVar13;
        param_1[0x27] = iVar10 + (iVar5 >> 2) * 8;
      }
      param_1[0x26] = (int8)(piVar13 + 1);
      *piVar13 = (int8)pxVar7;
    }
    iVar5 = FUN_000af668(param_1,param_2 != 0);
    if (iVar5 == 0) {
      return (xunknown8 *)0x0;
    }
    if (param_2 != 0) {
      *(xunknown1 *)(param_2 + 1) = 1;
    }
    piVar13 = (int8 *)param_1[0x266];
    iVar10 = piVar13[1];
    if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
      piVar6 = (int8 *)malloc(0x1000);
      if (piVar6 == (int8 *)0x0) {
code_r0x000ad9a8:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
        return pxVar7;
      }
      iVar10 = 0;
      *piVar6 = (int8)piVar13;
      piVar6[1] = 0;
      param_1[0x266] = (int8)piVar6;
      piVar13 = piVar6;
    }
    piVar13[1] = iVar10 + 0x20;
    pxVar8 = (xunknown8 *)((int8)piVar13 + iVar10 + 0x10);
    *pxVar8 = 0xd2448;
    *(xunknown8 **)((int8)piVar13 + iVar10 + 0x20) = pxVar7;
    *(int8 *)((int8)piVar13 + iVar10 + 0x28) = iVar5;
    *(xunknown1 *)((int8)piVar13 + iVar10 + 0x18) = 0x2d;
    *(uint2 *)((int8)piVar13 + iVar10 + 0x19) =
         *(uint2 *)((int8)piVar13 + iVar10 + 0x19) & 0xf000 | 0x540;
    return pxVar8;
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
      iVar5 = FUN_000bdfe0();
      *param_1 = iVar5;
      auStack_108[0] = FUN_000be090(param_1,0x30d5f /* "string literal" */);
      pxVar7 = (xunknown8 *)FUN_000be138(param_1,aiStack_70,auStack_108);
      return pxVar7;
    }
    FUN_000ad0e0(auStack_108,param_1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
      iStack_110 = FUN_000ad294(param_1,param_2);
      if (iStack_110 != 0) {
        iVar5 = FUN_000bdfe0(*param_1,param_1[1]);
        *param_1 = iVar5;
code_r0x000ad85c:
        pxVar7 = (xunknown8 *)FUN_000be138(param_1,aiStack_70,&iStack_110);
        goto code_r0x000ad878;
      }
    }
    else {
      *param_1 = (int8)(pcVar3 + 1);
      FUN_000abc1c(param_1,1);
      pcVar3 = (char *)*param_1;
      if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
        *param_1 = (int8)(pcVar3 + 1);
        iStack_110 = FUN_000ad294(param_1,param_2);
        if (iStack_110 != 0) goto code_r0x000ad85c;
      }
    }
    pxVar7 = (xunknown8 *)0x0;
code_r0x000ad878:
    FUN_000ae114(auStack_108);
    return pxVar7;
  }
  if (*puVar2 != 0x4e) goto code_r0x000ad314;
  puVar9 = puVar2 + 1;
  *param_1 = (int8)puVar9;
  if (puVar9 == puVar11) {
    uVar12 = 0;
    goto code_r0x000ad420;
  }
  if (*puVar9 == 0x48) {
    puVar9 = puVar2 + 2;
    *param_1 = (int8)puVar9;
    if (param_2 != 0) {
      *(xunknown1 *)(param_2 + 0x18) = 1;
    }
    goto code_r0x000ad4a8;
  }
  if (*puVar9 == 0x72) {
    puVar9 = puVar2 + 2;
    uVar12 = 4;
    *param_1 = (int8)puVar9;
    if (puVar9 != puVar11) goto code_r0x000ad790;
code_r0x000ad420:
    puVar9 = puVar11;
  }
  else {
    uVar12 = 0;
    if (puVar9 == puVar11) goto code_r0x000ad420;
code_r0x000ad790:
    if (*puVar9 == 0x56) {
      puVar9 = puVar9 + 1;
      uVar12 = uVar12 | 2;
      *param_1 = (int8)puVar9;
    }
    if (puVar9 == puVar11) goto code_r0x000ad420;
    if (*puVar9 == 0x4b) {
      puVar9 = puVar9 + 1;
      uVar12 = uVar12 | 1;
      *param_1 = (int8)puVar9;
    }
  }
  if (param_2 != 0) {
    *(uint4 *)(param_2 + 4) = uVar12;
  }
  if (puVar9 != puVar11) {
    if (*puVar9 == 0x4f) {
      puVar9 = puVar9 + 1;
      *param_1 = (int8)puVar9;
      if (param_2 != 0) {
        *(xunknown1 *)(param_2 + 8) = 2;
      }
      goto code_r0x000ad4a8;
    }
    if (*puVar9 == 0x52) {
      puVar9 = puVar9 + 1;
      *param_1 = (int8)puVar9;
      if (param_2 != 0) {
        *(xunknown1 *)(param_2 + 8) = 1;
      }
      goto code_r0x000ad4a8;
    }
  }
  if (param_2 != 0) {
    *(xunknown1 *)(param_2 + 8) = 0;
  }
code_r0x000ad4a8:
  piVar13 = param_1 + 0x28;
  pxVar7 = (xunknown8 *)0x0;
code_r0x000ad4c4:
  do {
    if ((puVar9 != puVar11) && (*puVar9 == 0x45)) {
      *param_1 = (int8)(puVar9 + 1);
      if (pxVar7 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      if (param_1[0x25] == param_1[0x26]) {
        return (xunknown8 *)0x0;
      }
      param_1[0x26] = param_1[0x26] + -8;
      return pxVar7;
    }
    if (param_2 != 0) {
      *(xunknown1 *)(param_2 + 1) = 0;
    }
    if (puVar11 == puVar9) {
code_r0x000ad5e0:
      pxVar8 = (xunknown8 *)0x0;
      goto code_r0x000ad5e4;
    }
    uVar4 = *puVar9;
    pxVar8 = (xunknown8 *)0x0;
    if (uVar4 < 0x53) {
      if (uVar4 == 0x44) {
        if ((1 < (uint8)((int8)puVar11 - (int8)puVar9)) && ((puVar9[1] | 0x20) == 0x74)) {
          if (pxVar7 != (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
          pxVar8 = (xunknown8 *)FUN_000b007c(param_1);
          goto code_r0x000ad5f4;
        }
        goto code_r0x000ad5e0;
      }
      if (uVar4 != 0x49) goto code_r0x000ad5e4;
      if (pxVar7 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iVar5 = FUN_000af668(param_1,param_2 != 0);
      if (iVar5 == 0) {
        return (xunknown8 *)0x0;
      }
      if (*(char *)(pxVar7 + 1) == '-') {
        return (xunknown8 *)0x0;
      }
      if (param_2 != 0) {
        *(xunknown1 *)(param_2 + 1) = 1;
      }
      piVar14 = (int8 *)param_1[0x266];
      iVar10 = piVar14[1];
      piVar6 = piVar14;
      if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000ad9a8;
        iVar10 = 0;
        *piVar6 = (int8)piVar14;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar10 + 0x20;
      pxVar8 = (xunknown8 *)((int8)piVar6 + iVar10 + 0x10);
      *pxVar8 = 0xd2448;
      *(xunknown8 **)((int8)piVar6 + iVar10 + 0x20) = pxVar7;
      *(int8 *)((int8)piVar6 + iVar10 + 0x28) = iVar5;
      *(xunknown1 *)((int8)piVar6 + iVar10 + 0x18) = 0x2d;
      *(uint2 *)((int8)piVar6 + iVar10 + 0x19) =
           *(uint2 *)((int8)piVar6 + iVar10 + 0x19) & 0xf000 | 0x540;
    }
    else {
      if (uVar4 == 0x53) {
        if (((uint8)((int8)puVar11 - (int8)puVar9) < 2) || (puVar9[1] != 0x74)) {
          pxVar8 = (xunknown8 *)FUN_000b01c0(param_1);
          if (pxVar8 == (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
        }
        else {
          piVar14 = (int8 *)param_1[0x266];
          *param_1 = (int8)(puVar9 + 2);
          iVar5 = piVar14[1];
          piVar6 = piVar14;
          if (iVar5 - 0xfd0U < 0xfffffffffffff00f || iVar5 == -0x21) {
            piVar6 = (int8 *)malloc(0x1000);
            if (piVar6 == (int8 *)0x0) goto code_r0x000ad9a8;
            iVar5 = 0;
            *piVar6 = (int8)piVar14;
            piVar6[1] = 0;
            param_1[0x266] = (int8)piVar6;
          }
          piVar6[1] = iVar5 + 0x20;
          pxVar8 = (xunknown8 *)((int8)piVar6 + iVar5 + 0x10);
          *pxVar8 = 0xd0548;
          *(xunknown1 *)((int8)piVar6 + iVar5 + 0x18) = 8;
          *(uint2 *)((int8)piVar6 + iVar5 + 0x19) =
               *(uint2 *)((int8)piVar6 + iVar5 + 0x19) & 0xf000 | 0x540;
          *(xunknown8 *)((int8)piVar6 + iVar5 + 0x20) = 0x3836c;
          *(xunknown8 *)((int8)piVar6 + iVar5 + 0x28) = 3;
        }
        if (*(char *)(pxVar8 + 1) != '\x1b') {
          if (pxVar7 != (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
          puVar9 = (uint1 *)*param_1;
          puVar11 = (uint1 *)param_1[1];
          pxVar7 = pxVar8;
          goto code_r0x000ad4c4;
        }
code_r0x000ad5e4:
        pxVar8 = (xunknown8 *)FUN_000b049c(param_1,param_2,pxVar7,pxVar8);
      }
      else {
        if (uVar4 != 0x54) goto code_r0x000ad5e4;
        if (pxVar7 != (xunknown8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        pxVar8 = (xunknown8 *)FUN_000afcac(param_1);
      }
code_r0x000ad5f4:
      if (pxVar8 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
    }
    piVar6 = (int8 *)param_1[0x26];
    if (piVar6 == (int8 *)param_1[0x27]) {
      iVar5 = (int8)piVar6 - param_1[0x25];
      if ((int8 *)param_1[0x25] == piVar13) {
        iVar10 = malloc(iVar5 * 2);
        if (iVar10 == 0) goto code_r0x000ca7b0;
        if (piVar6 != piVar13) {
          memcpy(iVar10,piVar13,iVar5);
        }
        param_1[0x25] = iVar10;
      }
      else {
        iVar10 = realloc();
        param_1[0x25] = iVar10;
        if (iVar10 == 0) goto code_r0x000ca7b0;
      }
      piVar6 = (int8 *)(iVar10 + iVar5);
      param_1[0x26] = (int8)piVar6;
      param_1[0x27] = iVar10 + (iVar5 >> 2) * 8;
    }
    param_1[0x26] = (int8)(piVar6 + 1);
    *piVar6 = (int8)pxVar8;
    puVar9 = (uint1 *)*param_1;
    puVar2 = (uint1 *)param_1[1];
    puVar11 = puVar9;
    pxVar7 = pxVar8;
    if ((puVar9 != puVar2) && (puVar11 = puVar2, *puVar9 == 0x4d)) {
      puVar9 = puVar9 + 1;
      *param_1 = (int8)puVar9;
    }
  } while( true );
}

/* 0xad9d8  size=884 */
/* WARNING: Removing unreachable block (ram,0x000acc20) */
/* WARNING: Type propagation algorithm not settling */

xunknown8 * FUN_000ad9d8(int8 *param_1)

{
  char *pcVar1;
  int2 *piVar2;
  int2 *piVar3;
  char cVar4;
  int8 iVar5;
  uint1 *puVar6;
  xunknown8 *pxVar7;
  int8 iVar8;
  int8 iVar9;
  int8 *piVar10;
  int8 iVar11;
  uint8 uVar12;
  uint1 uVar13;
  xunknown8 xVar14;
  uint2 uVar15;
  xunknown8 xVar16;
  int2 *piVar17;
  xunknown1 xVar18;
  uint4 uVar19;
  uint1 *puVar20;
  int4 iVar21;
  uint8 uVar22;
  uint1 *puVar23;
  int8 *piVar24;
  int8 iVar25;
  xunknown1 axVar26 [16];
  xunknown8 *pxStack_58;
  xunknown1 axStack_50 [16];
  
  puVar6 = (uint1 *)*param_1;
  puVar20 = (uint1 *)param_1[1];
  if (puVar20 != puVar6) {
    iVar21 = (int4)(CONCAT14(*puVar6,*puVar6 - 0x4a) >> 1);
    if (4 < iVar21) goto code_r0x000ada78;
    if (iVar21 == 0) {
      iVar11 = param_1[2];
      iVar5 = param_1[3];
      puVar6 = puVar6 + 1;
      piVar10 = param_1 + 5;
      *param_1 = (int8)puVar6;
      while ((puVar6 == puVar20 || (*puVar6 != 0x45))) {
        iVar8 = FUN_000ad9d8(param_1);
        if (iVar8 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar24 = (int8 *)param_1[3];
        if (piVar24 == (int8 *)param_1[4]) {
          iVar25 = (int8)piVar24 - param_1[2];
          if ((int8 *)param_1[2] == piVar10) {
            iVar9 = malloc(iVar25 * 2);
            if (iVar9 == 0) goto code_r0x000ca7b0;
            if (piVar24 != piVar10) {
              memcpy(iVar9,piVar10,iVar25);
            }
            param_1[2] = iVar9;
          }
          else {
            iVar9 = realloc();
            param_1[2] = iVar9;
            if (iVar9 == 0) goto code_r0x000ca7b0;
          }
          piVar24 = (int8 *)(iVar9 + iVar25);
          param_1[4] = iVar9 + (iVar25 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar24 + 1);
        *piVar24 = iVar8;
        puVar20 = (uint1 *)param_1[1];
        puVar6 = (uint1 *)*param_1;
      }
      *param_1 = (int8)(puVar6 + 1);
      axVar26 = FUN_000adec4(param_1,iVar5 - iVar11 >> 3);
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
        piVar10 = (int8 *)malloc(0x1000);
        if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
      }
      iVar5 = (int8)piVar10 + iVar11;
      xVar16 = 0xd24b8;
      piVar10[1] = iVar11 + 0x20;
      xVar18 = 0x29;
      goto code_r0x000adc54;
    }
    if (iVar21 != 1) goto code_r0x000abd60;
    if ((1 < (uint8)((int8)puVar20 - (int8)puVar6)) && (puVar6[1] == 0x5a)) {
      *param_1 = (int8)(puVar6 + 2);
      pxVar7 = (xunknown8 *)FUN_000ab144(param_1);
      if (pxVar7 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      cVar4 = *pcVar1;
      goto joined_r0x000ada5c;
    }
    piVar2 = (int2 *)*param_1;
    piVar3 = (int2 *)param_1[1];
    if (piVar2 == piVar3) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar2 != 'L') {
      return (xunknown8 *)0x0;
    }
    piVar17 = (int2 *)((int8)piVar2 + 1);
    uVar12 = (int8)piVar3 - (int8)piVar17;
    *param_1 = (int8)piVar17;
    if (piVar3 == piVar17) {
code_r0x000b2ad4:
      iVar11 = FUN_000abd5c();
      if (iVar11 == 0) {
        return (xunknown8 *)0x0;
      }
      puVar20 = (uint1 *)*param_1;
      puVar23 = (uint1 *)param_1[1];
      puVar6 = puVar20;
      if ((puVar20 != puVar23) && (*puVar20 == 0x6e)) {
        puVar6 = puVar20 + 1;
        *param_1 = (int8)puVar6;
      }
      if (puVar23 == puVar6) {
        return (xunknown8 *)0x0;
      }
      if (*puVar6 - 0x3a < 0xfffffff6) {
        return (xunknown8 *)0x0;
      }
      do {
        if (*puVar6 - 0x3a < 0xfffffff6) goto code_r0x000b2b68;
        puVar6 = puVar6 + 1;
        *param_1 = (int8)puVar6;
      } while (puVar6 != puVar23);
      puVar6 = puVar23;
code_r0x000b2b68:
      if (puVar6 == puVar20) {
        return (xunknown8 *)0x0;
      }
      if (puVar6 == puVar23) {
        return (xunknown8 *)0x0;
      }
      if (*puVar6 == 0x45) {
        *param_1 = (int8)(puVar6 + 1);
        pxVar7 = (xunknown8 *)FUN_000b798c(param_1,axStack_50 + 0x28,axStack_50 + 0x18);
        return pxVar7;
      }
      return (xunknown8 *)0x0;
    }
    switch(*(char *)piVar17) {
    case 'A':
      iVar11 = FUN_000abd5c();
      if (iVar11 == 0) {
        return (xunknown8 *)0x0;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 == 'E') {
        *param_1 = (int8)(pcVar1 + 1);
        pxVar7 = (xunknown8 *)FUN_000b7048(param_1,axStack_50 + 0x18);
        return pxVar7;
      }
      return (xunknown8 *)0x0;
    default:
      goto code_r0x000b2ad4;
    case 'D':
      if (uVar12 < 2) {
        return (xunknown8 *)0x0;
      }
      if (*piVar17 != 0x6e44) {
        return (xunknown8 *)0x0;
      }
      piVar17 = (int2 *)((int8)piVar2 + 3);
      *param_1 = (int8)piVar17;
      if (piVar17 == piVar3) {
        return (xunknown8 *)0x0;
      }
      if (*(char *)piVar17 == '0') {
        piVar17 = piVar2 + 2;
        *param_1 = (int8)piVar17;
      }
      if (piVar17 == piVar3) {
        return (xunknown8 *)0x0;
      }
      if ((char)*piVar17 != 'E') {
        return (xunknown8 *)0x0;
      }
      xVar16 = 0x3a10b /* "nullptr" */;
      *param_1 = (int8)((int8)piVar17 + 1);
      goto code_r0x000b70ec;
    case 'T':
      return (xunknown8 *)0x0;
    case 'U':
      if (uVar12 < 2) {
        return (xunknown8 *)0x0;
      }
      if ((char)piVar2[1] != 'l') {
        return (xunknown8 *)0x0;
      }
      iVar11 = FUN_000b7190(param_1,0);
      if (iVar11 == 0) {
        return (xunknown8 *)0x0;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 == 'E') {
        *param_1 = (int8)(pcVar1 + 1);
        pxVar7 = (xunknown8 *)FUN_000b78ec(param_1,axStack_50 + 0x18);
        return pxVar7;
      }
      return (xunknown8 *)0x0;
    case '_':
      if (uVar12 < 2) {
        return (xunknown8 *)0x0;
      }
      if (*piVar17 != 0x5a5f) {
        return (xunknown8 *)0x0;
      }
      *param_1 = (int8)((int8)piVar2 + 3);
      pxVar7 = (xunknown8 *)FUN_000ab144();
      if (pxVar7 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 == 'E') {
        *param_1 = (int8)(pcVar1 + 1);
        return pxVar7;
      }
      return (xunknown8 *)0x0;
    case 'a':
      xVar16 = 0x38f8a /* "signed char" */;
      xVar14 = 0xb;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'b':
      if ((uVar12 < 3) || (*piVar17 != 0x3062 || *(char *)((int8)piVar2 + 3) != 'E')) {
        uVar12 = FUN_000ab0bc(param_1,0x2da76,3);
        if ((uVar12 & 1) == 0) {
          return (xunknown8 *)0x0;
        }
        xVar18 = 1;
      }
      else {
        xVar18 = 0;
        *param_1 = (int8)(piVar2 + 2);
      }
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (0xfffffffffffff00e < iVar11 - 0xfe0U && iVar11 != -0x11) {
code_r0x000b6ff0:
        piVar10[1] = iVar11 + 0x10;
        pxVar7 = (xunknown8 *)(iVar11 + 0x10 + (int8)piVar10);
        *(xunknown1 *)(pxVar7 + 1) = 0x49;
        *pxVar7 = 0xd1028;
        *(uint2 *)((int8)pxVar7 + 9) = *(uint2 *)((int8)pxVar7 + 9) & 0xf000 | 0x540;
        *(xunknown1 *)((int8)pxVar7 + 0xb) = xVar18;
        return pxVar7;
      }
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 != (int8 *)0x0) {
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
        goto code_r0x000b6ff0;
      }
      goto code_r0x000caa00;
    case 'c':
      xVar16 = 0x30d50 /* "char" */;
      xVar14 = 4;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'd':
      *param_1 = (int8)(piVar2 + 1);
      if ((uint8)((int8)piVar3 - (int8)(piVar2 + 1)) < 0x11) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 1) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 3) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 2) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 5) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 3) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 7) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 4) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 9) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 5) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0xb) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 6) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0xd) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 7) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0xf) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 8) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x11) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      piVar17 = piVar2 + 9;
      *param_1 = (int8)piVar17;
      if (piVar17 == piVar3) {
        return (xunknown8 *)0x0;
      }
      if ((char)*piVar17 != 'E') {
        return (xunknown8 *)0x0;
      }
      piVar24 = (int8 *)param_1[0x266];
      *param_1 = (int8)((int8)piVar2 + 0x13);
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
        piVar10 = (int8 *)malloc(0x1000);
        if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
      }
      piVar10[1] = iVar11 + 0x20;
      pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
      *pxVar7 = 0xd1108;
      *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 0x4f;
      *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
           *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
      xVar16 = 0x10;
      goto code_r0x000b2dbc;
    case 'e':
      *param_1 = (int8)(piVar2 + 1);
      if ((uint8)((int8)piVar3 - (int8)(piVar2 + 1)) < 0x21) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 1) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 3) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 2) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 5) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 3) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 7) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 4) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 9) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 5) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0xb) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 6) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0xd) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 7) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0xf) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 8) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x11) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 9) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x13) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x13) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 10) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x15) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x15) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 0xb) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x17) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x17) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 0xc) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 0xc) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x19) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x19) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 0xd) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x1b) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x1b) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 0xe) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 0xe) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x1d) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x1d) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 0xf) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x1f) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x1f) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)(piVar2 + 0x10) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)(piVar2 + 0x10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      if ((*(uint1 *)((int8)piVar2 + 0x21) - 0x3a < 0xfffffff6) &&
         ((*(uint1 *)((int8)piVar2 + 0x21) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
        return (xunknown8 *)0x0;
      }
      piVar17 = piVar2 + 0x11;
      *param_1 = (int8)piVar17;
      if (piVar17 == piVar3) {
        return (xunknown8 *)0x0;
      }
      if ((char)*piVar17 != 'E') {
        return (xunknown8 *)0x0;
      }
      piVar24 = (int8 *)param_1[0x266];
      *param_1 = (int8)((int8)piVar2 + 0x23);
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
        piVar10 = (int8 *)malloc(0x1000);
        if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
      }
      piVar10[1] = iVar11 + 0x20;
      pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
      *pxVar7 = 0xd1178;
      *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 0x50;
      *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
           *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
      xVar16 = 0x20;
code_r0x000b2dbc:
      pxVar7[2] = piVar2 + 1;
      pxVar7[3] = xVar16;
      return pxVar7;
    case 'f':
      *param_1 = (int8)(piVar2 + 1);
      if ((((((8 < (uint8)((int8)piVar3 - (int8)(piVar2 + 1))) &&
             ((0xfffffff5 < *(uint1 *)(piVar2 + 1) - 0x3a ||
              (0xfffffff9 < (*(uint1 *)(piVar2 + 1) & 0xffffffdf) - 0x47)))) &&
            ((0xfffffff5 < *(uint1 *)((int8)piVar2 + 3) - 0x3a ||
             (0xfffffff9 < (*(uint1 *)((int8)piVar2 + 3) & 0xffffffdf) - 0x47)))) &&
           ((((0xfffffff5 < *(uint1 *)(piVar2 + 2) - 0x3a ||
              (0xfffffff9 < (*(uint1 *)(piVar2 + 2) & 0xffffffdf) - 0x47)) &&
             ((0xfffffff5 < *(uint1 *)((int8)piVar2 + 5) - 0x3a ||
              (0xfffffff9 < (*(uint1 *)((int8)piVar2 + 5) & 0xffffffdf) - 0x47)))) &&
            ((0xfffffff5 < *(uint1 *)(piVar2 + 3) - 0x3a ||
             (0xfffffff9 < (*(uint1 *)(piVar2 + 3) & 0xffffffdf) - 0x47)))))) &&
          ((0xfffffff5 < *(uint1 *)((int8)piVar2 + 7) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)((int8)piVar2 + 7) & 0xffffffdf) - 0x47)))) &&
         (((0xfffffff5 < *(uint1 *)(piVar2 + 4) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)(piVar2 + 4) & 0xffffffdf) - 0x47)) &&
          ((0xfffffff5 < *(uint1 *)((int8)piVar2 + 9) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)((int8)piVar2 + 9) & 0xffffffdf) - 0x47)))))) {
        piVar17 = piVar2 + 5;
        *param_1 = (int8)piVar17;
        if ((piVar17 != piVar3) && ((char)*piVar17 == 'E')) {
          piVar24 = (int8 *)param_1[0x266];
          *param_1 = (int8)((int8)piVar2 + 0xb);
          iVar11 = piVar24[1];
          piVar10 = piVar24;
          if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
            piVar10 = (int8 *)malloc(0x1000);
            if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
            iVar11 = 0;
            *piVar10 = (int8)piVar24;
            piVar10[1] = 0;
            param_1[0x266] = (int8)piVar10;
          }
          piVar10[1] = iVar11 + 0x20;
          pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
          *pxVar7 = 0xd1098;
          *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 0x4e;
          *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
               *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
          xVar16 = 8;
          goto code_r0x000b2dbc;
        }
      }
      return (xunknown8 *)0x0;
    case 'h':
      xVar16 = 0x2ebb2 /* "unsigned char" */;
      xVar14 = 0xd;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'i':
      xVar16 = 0x29893;
      xVar14 = 0;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'j':
      xVar16 = 0x40abd;
      goto code_r0x000b308c;
    case 'l':
      xVar16 = 0x2ba59;
code_r0x000b308c:
      xVar14 = 1;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'm':
      xVar16 = 0x3fb59;
      goto code_r0x000b30b8;
    case 'n':
      xVar16 = 0x2650c /* "__int128" */;
      xVar14 = 8;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'o':
      xVar16 = 0x2bf5a /* "unsigned __int128" */;
      xVar14 = 0x11;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 's':
      xVar16 = 0x2bf54 /* "short" */;
      xVar14 = 5;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 't':
      xVar16 = 0x22cc8 /* "unsigned short" */;
      xVar14 = 0xe;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'w':
      xVar16 = 0x22cc0 /* "wchar_t" */;
      xVar14 = 7;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'x':
      xVar16 = 0x2ba5b;
code_r0x000b30b8:
      xVar14 = 2;
      *param_1 = (int8)(piVar2 + 1);
      break;
    case 'y':
      xVar16 = 0x350e2;
      xVar14 = 3;
      *param_1 = (int8)(piVar2 + 1);
    }
    puVar20 = (uint1 *)*param_1;
    puVar23 = (uint1 *)param_1[1];
    puVar6 = puVar20;
    if ((puVar20 != puVar23) && (*puVar20 == 0x6e)) {
      puVar6 = puVar20 + 1;
      *param_1 = (int8)puVar6;
    }
    if ((puVar23 == puVar6) || (*puVar6 - 0x3a < 0xfffffff6)) {
      return (xunknown8 *)0x0;
    }
    do {
      if (*puVar6 - 0x3a < 0xfffffff6) goto code_r0x000b6ef4;
      puVar6 = puVar6 + 1;
      *param_1 = (int8)puVar6;
    } while (puVar6 != puVar23);
    puVar6 = puVar23;
code_r0x000b6ef4:
    if ((int8)puVar6 - (int8)puVar20 == 0) {
      return (xunknown8 *)0x0;
    }
    if (puVar6 == puVar23) {
      return (xunknown8 *)0x0;
    }
    if (*puVar6 != 0x45) {
      return (xunknown8 *)0x0;
    }
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (0xfffffffffffff00e < iVar11 - 0xfc0U && iVar11 != -0x31) {
code_r0x000b6f60:
      piVar10[1] = iVar11 + 0x30;
      pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
      *pxVar7 = 0xd0fb8;
      *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 0x4d;
      *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = xVar16;
      *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = xVar14;
      *(uint1 **)((int8)piVar10 + iVar11 + 0x30) = puVar20;
      *(int8 *)((int8)piVar10 + iVar11 + 0x38) = (int8)puVar6 - (int8)puVar20;
      *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
           *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    }
    piVar10 = (int8 *)malloc(0x1000);
    if (piVar10 != (int8 *)0x0) {
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
      goto code_r0x000b6f60;
    }
    goto code_r0x000caa00;
  }
  iVar21 = 0x7fffffdb;
code_r0x000ada78:
  if (iVar21 == 5) {
    if ((puVar20 != puVar6) && (*puVar6 == 0x54)) {
      if ((uint8)((int8)puVar20 - (int8)puVar6) < 2) {
        uVar13 = 0;
      }
      else {
        uVar13 = puVar6[1];
      }
      iVar11 = memchr(0x29043 /* "yptnk" */,uVar13,5);
      if ((iVar11 != 0) && (iVar11 != 0x29042)) {
        iVar11 = FUN_000b86a8(param_1,0);
        if (iVar11 == 0) {
          return (xunknown8 *)0x0;
        }
        iVar5 = FUN_000ad9d8(param_1);
        axVar26._8_8_ = iVar5;
        axVar26._0_8_ = iVar11;
        if (iVar5 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar24 = (int8 *)param_1[0x266];
        iVar11 = piVar24[1];
        piVar10 = piVar24;
        if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
          piVar10 = (int8 *)malloc(0x1000);
          if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
          iVar11 = 0;
          *piVar10 = (int8)piVar24;
          piVar10[1] = 0;
          param_1[0x266] = (int8)piVar10;
        }
        iVar5 = (int8)piVar10 + iVar11;
        xVar16 = 0xd2528;
        piVar10[1] = iVar11 + 0x20;
        xVar18 = 0x22;
code_r0x000adc54:
        *(xunknown8 *)(iVar5 + 0x10) = xVar16;
        *(xunknown1 *)(iVar5 + 0x18) = xVar18;
        *(xunknown1 (*) [16])(iVar5 + 0x20) = axVar26;
        *(uint2 *)(iVar5 + 0x19) = *(uint2 *)(iVar5 + 0x19) & 0xf000 | 0x540;
        return (xunknown8 *)(iVar5 + 0x10);
      }
    }
  }
  else if (iVar21 == 7) {
    *param_1 = (int8)(puVar6 + 1);
    pxVar7 = (xunknown8 *)FUN_000b0fa8(param_1);
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pcVar1 = (char *)*param_1;
    if (pcVar1 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    cVar4 = *pcVar1;
joined_r0x000ada5c:
    if (cVar4 == 'E') {
      *param_1 = (int8)(pcVar1 + 1);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  }
code_r0x000abd60:
  puVar6 = (uint1 *)*param_1;
  puVar20 = (uint1 *)param_1[1];
  pxStack_58 = (xunknown8 *)0x0;
  uVar12 = (int8)puVar20 - (int8)puVar6;
  if (puVar20 == puVar6) {
code_r0x000ac978:
    pxVar7 = (xunknown8 *)FUN_000c0548(param_1);
    goto joined_r0x000ace20;
  }
  uVar13 = *puVar6;
  uVar19 = 0;
  switch(uVar13) {
  case 0x41:
    puVar23 = puVar6 + 1;
    *param_1 = (int8)puVar23;
    if (puVar20 == puVar23) {
code_r0x000acc60:
      iVar11 = FUN_000b0fa8(param_1);
      pxVar7 = (xunknown8 *)0x0;
      if (iVar11 == 0) goto joined_r0x000ace20;
      pcVar1 = (char *)*param_1;
      if ((pcVar1 == (char *)param_1[1]) || (*pcVar1 != '_')) {
        return (xunknown8 *)0x0;
      }
      puVar6 = (uint1 *)(pcVar1 + 1);
    }
    else if (*puVar23 - 0x3a < 0xfffffff6) {
      if (*puVar23 != 0x5f) goto code_r0x000acc60;
      puVar6 = puVar6 + 2;
    }
    else {
      axStack_50 = FUN_000abc1c(param_1,0);
      FUN_000b0a7c(param_1,axStack_50);
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 != '_') {
        return (xunknown8 *)0x0;
      }
      puVar6 = (uint1 *)(pcVar1 + 1);
    }
    *param_1 = (int8)puVar6;
    puVar6 = (uint1 *)FUN_000abd5c(param_1);
    pxVar7 = (xunknown8 *)0x0;
    axStack_50._0_8_ = puVar6;
    if (puVar6 != (uint1 *)0x0) {
      pxVar7 = (xunknown8 *)FUN_000c1fe4(param_1,axStack_50,axStack_50 + 0x28);
    }
    goto joined_r0x000ace20;
  default:
    goto code_r0x000ac978;
  case 0x43:
    *param_1 = (int8)(puVar6 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar7 = (xunknown8 *)FUN_000c0844(param_1,axStack_50);
    goto code_r0x000ac984;
  case 0x44:
    if (uVar12 < 2) {
      return (xunknown8 *)0x0;
    }
    uVar13 = puVar6[1];
    pxVar7 = (xunknown8 *)0x0;
    switch(uVar13) {
    case 0x42:
    case 0x55:
      puVar6 = puVar6 + 2;
      *param_1 = (int8)puVar6;
      if ((puVar20 == puVar6) || (*puVar6 - 0x3a < 0xfffffff6)) {
        axStack_50._0_8_ = FUN_000b0fa8(param_1);
        if (axStack_50._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
      }
      else {
        axStack_50 = FUN_000abc1c(param_1,0);
        iVar11 = FUN_000b0a7c(param_1,axStack_50);
        axStack_50._0_8_ = iVar11;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 == '_') {
        *param_1 = (int8)(pcVar1 + 1);
        pxVar7 = (xunknown8 *)FUN_000c00dc(param_1,axStack_50,uVar13 == 0x42);
        return pxVar7;
      }
      return (xunknown8 *)0x0;
    default:
      goto code_r0x000acb48;
    case 0x46:
      *param_1 = (int8)(puVar6 + 2);
      axStack_50 = FUN_000abc1c(param_1,0);
      xVar16 = FUN_000b0a7c(param_1,axStack_50);
      pcVar1 = (char *)*param_1;
      if ((pcVar1 == (char *)param_1[1]) || (*pcVar1 != '_')) {
        return (xunknown8 *)0x0;
      }
      *param_1 = (int8)(pcVar1 + 1);
      axStack_50._0_8_ = xVar16;
      pxVar7 = (xunknown8 *)FUN_000c003c(param_1,axStack_50);
      return pxVar7;
    case 0x4b:
    case 0x6b:
      axStack_50._0_8_ = 0x3d198 /* " auto" */;
      if (uVar13 != 0x6b) {
        axStack_50._0_8_ = 0x22cea /* " decltype(auto)" */;
      }
      axStack_50._8_8_ = 5;
      if (uVar13 != 0x6b) {
        axStack_50._8_8_ = 0xf;
      }
      *param_1 = (int8)(puVar6 + 2);
      iVar11 = FUN_000ad294(param_1,0);
      if (iVar11 == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar7 = (xunknown8 *)FUN_000c018c(param_1,axStack_50 + 0x28,axStack_50);
      return pxVar7;
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto code_r0x000ac6ec;
    case 0x54:
    case 0x74:
      pxVar7 = (xunknown8 *)FUN_000b007c(param_1);
      break;
    case 0x61:
      xVar16 = 0x25c16 /* "auto" */;
      goto code_r0x000acfdc;
    case 99:
      xVar16 = 0x23e70 /* "decltype(auto)" */;
      goto code_r0x000ad054;
    case 100:
      xVar16 = 0x38fa0 /* "decimal64" */;
      goto code_r0x000acfa8;
    case 0x65:
      *param_1 = (int8)(puVar6 + 2);
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
        piVar10 = (int8 *)malloc(0x1000);
        if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
      }
      piVar10[1] = iVar11 + 0x20;
      xVar16 = strlen(0x2b35f /* "decimal128" */);
      pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
      *pxVar7 = 0xd0548;
      *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = 0x2b35f;
      *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = xVar16;
      *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
           *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    case 0x66:
      xVar16 = 0x350e6 /* "decimal32" */;
code_r0x000acfa8:
      *param_1 = (int8)(puVar6 + 2);
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (0xfffffffffffff00e < iVar11 - 0xfd0U && iVar11 != -0x21) {
code_r0x000bfde4:
        piVar10[1] = iVar11 + 0x20;
        xVar14 = strlen(xVar16);
        pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
        *pxVar7 = 0xd0548;
        *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = xVar16;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = xVar14;
        *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
             *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
        return pxVar7;
      }
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 != (int8 *)0x0) {
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
        goto code_r0x000bfde4;
      }
      goto code_r0x000caa00;
    case 0x68:
      xVar16 = 0x38598 /* "half" */;
code_r0x000acfdc:
      *param_1 = (int8)(puVar6 + 2);
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
        piVar10 = (int8 *)malloc(0x1000);
        if (piVar10 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar7;
        }
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
      }
      piVar10[1] = iVar11 + 0x20;
      xVar14 = strlen(xVar16);
      pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
      *pxVar7 = 0xd0548;
      *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = xVar16;
      *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = xVar14;
      *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
           *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    case 0x69:
      xVar16 = 0x30d72 /* "char32_t" */;
      goto code_r0x000ad010;
    case 0x6e:
      xVar16 = 0x2905b /* "std::nullptr_t" */;
code_r0x000ad054:
      *param_1 = (int8)(puVar6 + 2);
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (0xfffffffffffff00e < iVar11 - 0xfd0U && iVar11 != -0x21) {
code_r0x000be0dc:
        piVar10[1] = iVar11 + 0x20;
        xVar14 = strlen(xVar16);
        pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
        *pxVar7 = 0xd0548;
        *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = xVar16;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = xVar14;
        *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
             *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
        return pxVar7;
      }
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 != (int8 *)0x0) {
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
        goto code_r0x000be0dc;
      }
      goto code_r0x000caa00;
    case 0x70:
      *param_1 = (int8)(puVar6 + 2);
      axStack_50._0_8_ = FUN_000abd5c(param_1);
      if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pxVar7 = (xunknown8 *)FUN_000b4a94(param_1,axStack_50);
      goto code_r0x000ac984;
    case 0x73:
      xVar16 = 0x40acf /* "char16_t" */;
code_r0x000ad010:
      *param_1 = (int8)(puVar6 + 2);
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (0xfffffffffffff00e < iVar11 - 0xfd0U && iVar11 != -0x21) {
code_r0x000bfe8c:
        piVar10[1] = iVar11 + 0x20;
        xVar14 = strlen(xVar16);
        pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
        *pxVar7 = 0xd0548;
        *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = xVar16;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = xVar14;
        *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
             *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
        return pxVar7;
      }
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 != (int8 *)0x0) {
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
        goto code_r0x000bfe8c;
      }
      goto code_r0x000caa00;
    case 0x75:
      xVar16 = 0x29053 /* "char8_t" */;
      *param_1 = (int8)(puVar6 + 2);
code_r0x000b70ec:
      piVar24 = (int8 *)param_1[0x266];
      iVar11 = piVar24[1];
      piVar10 = piVar24;
      if (0xfffffffffffff00e < iVar11 - 0xfd0U && iVar11 != -0x21) {
code_r0x000b7134:
        piVar10[1] = iVar11 + 0x20;
        xVar14 = strlen(xVar16);
        pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
        *pxVar7 = 0xd0548;
        *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = xVar16;
        *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = xVar14;
        *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
             *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
        return pxVar7;
      }
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 != (int8 *)0x0) {
        iVar11 = 0;
        *piVar10 = (int8)piVar24;
        piVar10[1] = 0;
        param_1[0x266] = (int8)piVar10;
        goto code_r0x000b7134;
      }
      goto code_r0x000caa00;
    case 0x76:
      pxVar7 = (xunknown8 *)FUN_000c0238(param_1);
    }
    goto joined_r0x000ace20;
  case 0x46:
    goto code_r0x000ac6ec;
  case 0x47:
    *param_1 = (int8)(puVar6 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar7 = (xunknown8 *)FUN_000c08f4(param_1,axStack_50);
    goto code_r0x000ac984;
  case 0x4b:
  case 0x56:
code_r0x000ac3bc:
    if (uVar13 == 0x56) {
      uVar19 = uVar19 + 1;
    }
    uVar22 = (uint8)uVar19;
    if (uVar22 < uVar12) {
code_r0x000ac3d4:
      if (puVar6[uVar22] == 0x4b) {
        uVar19 = uVar19 + 1;
      }
      uVar22 = (uint8)uVar19;
    }
    goto code_r0x000ac3e8;
  case 0x4d:
    *param_1 = (int8)(puVar6 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    pxVar7 = (xunknown8 *)0x0;
    if ((uint1 *)axStack_50._0_8_ != (uint1 *)0x0) {
      iVar11 = FUN_000abd5c(param_1);
      pxVar7 = (xunknown8 *)0x0;
      if (iVar11 != 0) {
        pxVar7 = (xunknown8 *)FUN_000c2260(param_1,axStack_50,axStack_50 + 0x28);
      }
    }
    goto joined_r0x000ace20;
  case 0x4f:
    *param_1 = (int8)(puVar6 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    goto joined_r0x000aca28;
  case 0x50:
    *param_1 = (int8)(puVar6 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar7 = (xunknown8 *)FUN_000c06dc(param_1,axStack_50);
    goto code_r0x000ac984;
  case 0x52:
    *param_1 = (int8)(puVar6 + 1);
    axStack_50._0_8_ = FUN_000abd5c(param_1);
joined_r0x000aca28:
    if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar7 = (xunknown8 *)FUN_000c0788(param_1,axStack_50,axStack_50 + 0x28);
    goto code_r0x000ac984;
  case 0x53:
    if ((1 < uVar12) && (puVar6[1] == 0x74)) goto code_r0x000ac978;
    pxVar7 = (xunknown8 *)FUN_000af4e8(param_1,0,axStack_50 + 0x28);
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxStack_58 = pxVar7;
    if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
      FUN_000add4c(param_1 + 0x25,&pxStack_58);
      axStack_50._0_8_ = FUN_000af668(param_1,0);
      if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
        return (xunknown8 *)0x0;
      }
code_r0x000acc4c:
      pxVar7 = (xunknown8 *)FUN_000afc04(param_1,&pxStack_58,axStack_50);
    }
    goto code_r0x000ac984;
  case 0x54:
    if (((1 < uVar12) && (puVar6[1] - 0x65 < 0x11)) &&
       ((1 << (uint8)(puVar6[1] - 0x65 & 0x1f) & 0x14001U) != 0)) goto code_r0x000ac978;
    pxVar7 = (xunknown8 *)FUN_000afcac(param_1);
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxStack_58 = pxVar7;
    if ((((char)param_1[0x61] != '\0') && ((char *)param_1[1] != (char *)*param_1)) &&
       (*(char *)*param_1 == 'I')) {
      axStack_50._0_8_ = FUN_000af668(param_1,0);
      if ((uint1 *)axStack_50._0_8_ == (uint1 *)0x0) {
        return (xunknown8 *)0x0;
      }
      goto code_r0x000acc4c;
    }
    goto code_r0x000ac984;
  case 0x55:
    goto code_r0x000ac440;
  case 0x61:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x38f8a /* "signed char" */;
    goto code_r0x000ac2a0;
  case 0x62:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x29875 /* "bool" */;
    goto code_r0x000acb30;
  case 99:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x30d50 /* "char" */;
    goto code_r0x000acb30;
  case 100:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x2d39a /* "double" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 6;
    break;
  case 0x65:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x29f9b /* "long double" */;
code_r0x000ac2a0:
    *(uint2 *)((int8)pxVar7 + 9) = uVar15 & 0xf000 | 0x540;
    xVar14 = 0xb;
    break;
  case 0x66:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x3a12a /* "float" */;
    goto code_r0x000ac858;
  case 0x67:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x23e65 /* "__float128" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 10;
    break;
  case 0x68:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x2ebb2 /* "unsigned char" */;
    goto code_r0x000ac390;
  case 0x69:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x30d6e;
    goto code_r0x000ac768;
  case 0x6a:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x36ff1 /* "unsigned int" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 0xc;
    break;
  case 0x6c:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x23e60 /* "long" */;
    goto code_r0x000acb30;
  case 0x6d:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x3fb6b /* "unsigned long" */;
code_r0x000ac390:
    *(uint2 *)((int8)pxVar7 + 9) = uVar15 & 0xf000 | 0x540;
    xVar14 = 0xd;
    break;
  case 0x6e:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    *(xunknown8 *)((int8)piVar10 + iVar11 + 0x20) = 0x2650c;
    *(xunknown8 *)((int8)piVar10 + iVar11 + 0x28) = 8;
    return pxVar7;
  case 0x6f:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x2bf5a /* "unsigned __int128" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 0x11;
    break;
  case 0x72:
    if (1 < uVar12) {
      uVar13 = puVar6[1];
      uVar19 = 1;
      goto code_r0x000ac3bc;
    }
    uVar19 = 1;
    uVar22 = 1;
    if (1 < uVar12) goto code_r0x000ac3d4;
code_r0x000ac3e8:
    if ((uVar22 < uVar12) &&
       ((puVar6[uVar22] == 0x46 ||
        ((((puVar6[uVar22] == 0x44 && ((uint8)uVar19 + 1 < uVar12)) &&
          (puVar6[(uint8)uVar19 + 1] - 0x4f < 0x2a)) &&
         ((1L << ((uint8)(puVar6[(uint8)uVar19 + 1] - 0x4f) & 0x3f) & 0x30100000001U) != 0)))))) {
code_r0x000ac6ec:
      pxVar7 = (xunknown8 *)FUN_000bf34c(param_1);
    }
    else {
code_r0x000ac440:
      pxVar7 = (xunknown8 *)FUN_000bf93c(param_1);
    }
joined_r0x000ace20:
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    goto code_r0x000ac984;
  case 0x73:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x2bf54 /* "short" */;
code_r0x000ac858:
    *(uint2 *)((int8)pxVar7 + 9) = uVar15 & 0xf000 | 0x540;
    xVar14 = 5;
    break;
  case 0x74:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x22cc8 /* "unsigned short" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 0xe;
    break;
  case 0x75:
    puVar23 = puVar6 + 1;
    *param_1 = (int8)puVar23;
    if (puVar20 == puVar23) {
      return (xunknown8 *)0x0;
    }
    if (*puVar23 - 0x3a < 0xfffffff6) {
      return (xunknown8 *)0x0;
    }
    axStack_50._8_8_ = 0;
    axStack_50._0_8_ = puVar6 + 1;
    puVar6 = puVar6 + 2;
    do {
      puVar23 = puVar6;
      *param_1 = (int8)puVar23;
      axStack_50._8_8_ = ((uint8)puVar23[-1] + axStack_50._8_8_ * 10) - 0x30;
      if (puVar23 == puVar20) {
        axStack_50._0_8_ = puVar20;
        puVar23 = puVar20;
        goto code_r0x000acd2c;
      }
      axStack_50._0_8_ = axStack_50._0_8_ + 1;
      puVar6 = puVar23 + 1;
    } while (*puVar23 - 0x30 < 10);
code_r0x000acd2c:
    if ((uint8)((int8)puVar20 - axStack_50._0_8_) < (uint8)axStack_50._8_8_) {
      return (xunknown8 *)0x0;
    }
    puVar23 = puVar23 + axStack_50._8_8_;
    *param_1 = (int8)puVar23;
    if (axStack_50._8_8_ == 0) {
      return (xunknown8 *)0x0;
    }
    if ((puVar23 == puVar20) || (*puVar23 != 0x49)) {
      pxVar7 = (xunknown8 *)FUN_000af270(param_1,axStack_50);
    }
    else {
      *param_1 = (int8)(puVar23 + 1);
      iVar11 = FUN_000abd5c(param_1);
      if (iVar11 == 0) {
        return (xunknown8 *)0x0;
      }
      pcVar1 = (char *)*param_1;
      if (pcVar1 == (char *)param_1[1]) {
        return (xunknown8 *)0x0;
      }
      if (*pcVar1 != 'E') {
        return (xunknown8 *)0x0;
      }
      *param_1 = (int8)(pcVar1 + 1);
      pxVar7 = (xunknown8 *)FUN_000bff90(param_1,axStack_50,axStack_50 + 0x28);
    }
code_r0x000ac984:
    piVar10 = (int8 *)param_1[0x26];
    if (piVar10 == (int8 *)param_1[0x27]) {
      piVar24 = (int8 *)param_1[0x25];
      iVar11 = (int8)piVar10 - (int8)piVar24;
      if (piVar24 == param_1 + 0x28) {
        iVar5 = malloc(iVar11 * 2);
        if (iVar5 == 0) goto code_r0x000ca7b0;
        if (piVar10 != piVar24) {
          memmove(iVar5,piVar24,iVar11);
        }
        param_1[0x25] = iVar5;
      }
      else {
        iVar5 = realloc(piVar24);
        param_1[0x25] = iVar5;
        if (iVar5 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar7 = (xunknown8 *)(*got_abort)();
          return pxVar7;
        }
      }
      piVar10 = (int8 *)(iVar5 + iVar11);
      param_1[0x27] = iVar5 + (iVar11 >> 2) * 8;
    }
    param_1[0x26] = (int8)(piVar10 + 1);
    *piVar10 = (int8)pxVar7;
    return pxVar7;
  case 0x76:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x3fb66 /* "void" */;
code_r0x000acb30:
    *(uint2 *)((int8)pxVar7 + 9) = uVar15 & 0xf000 | 0x540;
    xVar14 = 4;
    break;
  case 0x77:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x22cc0 /* "wchar_t" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 7;
    break;
  case 0x78:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x38f96 /* "long long" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 9;
    break;
  case 0x79:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x22cd7 /* "unsigned long long" */;
    *(uint2 *)((int8)piVar10 + iVar11 + 0x19) =
         *(uint2 *)((int8)piVar10 + iVar11 + 0x19) & 0xf000 | 0x540;
    xVar14 = 0x12;
    break;
  case 0x7a:
    piVar24 = (int8 *)param_1[0x266];
    *param_1 = (int8)(puVar6 + 1);
    iVar11 = piVar24[1];
    piVar10 = piVar24;
    if (iVar11 - 0xfd0U < 0xfffffffffffff00f || iVar11 == -0x21) {
      piVar10 = (int8 *)malloc(0x1000);
      if (piVar10 == (int8 *)0x0) goto code_r0x000caa00;
      iVar11 = 0;
      *piVar10 = (int8)piVar24;
      piVar10[1] = 0;
      param_1[0x266] = (int8)piVar10;
    }
    piVar10[1] = iVar11 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar10 + iVar11 + 0x10);
    *pxVar7 = 0xd0548;
    uVar15 = *(uint2 *)((int8)piVar10 + iVar11 + 0x19);
    *(xunknown1 *)((int8)piVar10 + iVar11 + 0x18) = 8;
    xVar16 = 0x2b35b;
code_r0x000ac768:
    *(uint2 *)((int8)pxVar7 + 9) = uVar15 & 0xf000 | 0x540;
    xVar14 = 3;
  }
  pxVar7[2] = xVar16;
  pxVar7[3] = xVar14;
code_r0x000acb48:
  return pxVar7;
}

/* 0xadd4c  size=216 */
void FUN_000add4c(int8 *param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 *piVar3;
  int8 *piVar4;
  
  piVar4 = (int8 *)param_1[1];
  if (piVar4 == (int8 *)param_1[2]) {
    piVar3 = (int8 *)*param_1;
    iVar2 = (int8)piVar4 - (int8)piVar3;
    if (piVar3 == param_1 + 3) {
      iVar1 = malloc(iVar2 * 2);
      if (iVar1 == 0) goto code_r0x000ca7b0;
      if (piVar4 != piVar3) {
        memmove(iVar1,piVar3,iVar2);
      }
      *param_1 = iVar1;
    }
    else {
      iVar1 = realloc(piVar3);
      *param_1 = iVar1;
      if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
    }
    piVar4 = (int8 *)(iVar1 + iVar2);
    param_1[1] = (int8)piVar4;
    param_1[2] = iVar1 + (iVar2 >> 2) * 8;
  }
  iVar2 = *param_2;
  param_1[1] = (int8)(piVar4 + 1);
  *piVar4 = iVar2;
  return;
}

/* 0xade24  size=160 */
void FUN_000ade24(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2598;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 10;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar4;
  return;
}

/* 0xadec4  size=348 */
xunknown1  [16] FUN_000adec4(int8 param_1,uint8 param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 *piVar3;
  int8 iVar4;
  int8 iVar5;
  int8 *piVar6;
  int8 iVar7;
  uint8 uVar8;
  uint8 uVar9;
  xunknown1 axVar10 [16];
  
  iVar7 = *(int8 *)(param_1 + 0x10);
  iVar2 = *(int8 *)(param_1 + 0x18);
  uVar8 = iVar2 - iVar7 >> 3;
  if (uVar8 < param_2) {
    FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0xaa1,0x29893);
  }
  else {
    iVar1 = iVar7 + param_2 * 8;
    piVar6 = *(int8 **)(param_1 + 0x1330);
    iVar5 = iVar2 - iVar1;
    iVar4 = piVar6[1];
    uVar9 = (uint8)((int4)iVar5 + 0xf) & 0xfffffff0;
    piVar3 = piVar6;
    if (iVar4 + uVar9 < 0xff0) {
code_r0x000adf70:
      piVar3[1] = iVar4 + uVar9;
      piVar3 = (int8 *)((int8)piVar3 + iVar4 + 0x10);
    }
    else {
      if (uVar9 < 0xff1) {
        piVar3 = (int8 *)malloc(0x1000);
        if (piVar3 == (int8 *)0x0) goto code_r0x000ae01c;
        iVar4 = 0;
        *piVar3 = (int8)piVar6;
        piVar3[1] = 0;
        *(int8 **)(param_1 + 0x1330) = piVar3;
        goto code_r0x000adf70;
      }
      piVar3 = (int8 *)malloc(uVar9 + 0x10);
      if (piVar3 == (int8 *)0x0) goto code_r0x000ae01c;
      *piVar3 = *piVar6;
      piVar3[1] = 0;
      *piVar6 = (int8)piVar3;
      piVar3 = piVar3 + 2;
    }
    if (iVar2 != iVar1) {
      memmove(piVar3,iVar1,iVar5);
      iVar7 = *(int8 *)(param_1 + 0x10);
      uVar8 = *(int8 *)(param_1 + 0x18) - iVar7 >> 3;
    }
    if (param_2 <= uVar8) {
      axVar10._8_8_ = iVar5 >> 3;
      *(uint8 *)(param_1 + 0x18) = iVar7 + param_2 * 8;
      axVar10._0_8_ = piVar3;
      return axVar10;
    }
  }
  FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0x88,0x32169 /* "shrinkToSize() can't expand!" */);
code_r0x000ae01c:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  axVar10 = (*pcRam00000000000d4468)();
  return axVar10;
}

/* 0xae020  size=244 */
void FUN_000ae020(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,
                 xunknown8 *param_5,xunknown8 *param_6,xunknown4 *param_7,xunknown1 *param_8)

{
  xunknown4 xVar1;
  xunknown1 xVar2;
  int8 *piVar3;
  int8 iVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  int8 *piVar9;
  xunknown8 xVar10;
  xunknown8 xVar11;
  
  piVar9 = *(int8 **)(param_1 + 0x1330);
  iVar4 = piVar9[1];
  piVar3 = piVar9;
  if (iVar4 - 4000U < 0xfffffffffffff00f || iVar4 == -0x51) {
    piVar3 = (int8 *)malloc(0x1000);
    if (piVar3 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar4 = 0;
    *piVar3 = (int8)piVar9;
    piVar3[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar3;
  }
  piVar3[1] = iVar4 + 0x50;
  xVar11 = param_4[1];
  xVar10 = *param_4;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x10) = 0xd2678;
  xVar5 = *param_2;
  xVar6 = *param_3;
  xVar1 = *param_7;
  xVar2 = *param_8;
  *(xunknown1 *)((int8)piVar3 + iVar4 + 0x18) = 0x13;
  xVar7 = *param_5;
  xVar8 = *param_6;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x20) = xVar5;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x28) = xVar6;
  *(uint2 *)((int8)piVar3 + iVar4 + 0x19) = *(uint2 *)((int8)piVar3 + iVar4 + 0x19) & 0xf000 | 0x100
  ;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x38) = xVar11;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x30) = xVar10;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x40) = xVar7;
  *(xunknown8 *)((int8)piVar3 + iVar4 + 0x48) = xVar8;
  *(xunknown4 *)((int8)piVar3 + iVar4 + 0x50) = xVar1;
  *(xunknown1 *)((int8)piVar3 + iVar4 + 0x54) = xVar2;
  return;
}

/* 0xae114  size=484 */
void FUN_000ae114(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  int8 iVar3;
  int8 *piVar4;
  int8 *piVar5;
  int8 *piVar6;
  int8 iVar7;
  
  iVar3 = *param_1;
  piVar4 = (int8 *)param_1[1];
  piVar1 = param_1 + 4;
  iVar2 = *(int8 *)(iVar3 + 0x298);
  iVar7 = iVar3 + 0x2b0;
  if (piVar4 == piVar1) {
    if (iVar2 != iVar7) {
      free();
      *(int8 *)(iVar3 + 0x298) = iVar7;
      piVar4 = (int8 *)param_1[1];
      *(int8 *)(iVar3 + 0x2a0) = iVar7;
      *(int8 *)(iVar3 + 0x2a8) = iVar3 + 0x2d0;
    }
    if (param_1[2] - (int8)piVar4 == 0) {
      piVar6 = piVar4;
    }
    else {
      memmove(iVar7,piVar4,param_1[2] - (int8)piVar4);
      piVar4 = (int8 *)param_1[2];
      piVar6 = (int8 *)param_1[1];
    }
    *(int8 *)(iVar3 + 0x2a0) = (int8)piVar4 + (iVar7 - (int8)piVar6);
code_r0x000ae1e4:
    param_1[2] = (int8)piVar6;
  }
  else {
    *(int8 **)(iVar3 + 0x298) = piVar4;
    if (iVar2 != iVar7) {
      param_1[1] = iVar2;
      iVar7 = *(int8 *)(iVar3 + 0x2a0);
      *(int8 *)(iVar3 + 0x2a0) = param_1[2];
      param_1[2] = iVar7;
      iVar7 = *(int8 *)(iVar3 + 0x2a8);
      *(int8 *)(iVar3 + 0x2a8) = param_1[3];
      piVar6 = (int8 *)param_1[1];
      param_1[3] = iVar7;
      goto code_r0x000ae1e4;
    }
    iVar7 = param_1[2];
    *(int8 *)(iVar3 + 0x2a8) = param_1[3];
    *(int8 *)(iVar3 + 0x2a0) = iVar7;
    param_1[1] = (int8)piVar1;
    param_1[2] = (int8)piVar1;
    param_1[3] = (int8)(param_1 + 8);
  }
  iVar2 = *param_1;
  piVar6 = (int8 *)param_1[8];
  piVar4 = param_1 + 0xb;
  iVar3 = *(int8 *)(iVar2 + 0x240);
  iVar7 = iVar2 + 600;
  if (piVar6 == piVar4) {
    if (iVar3 != iVar7) {
      free();
      *(int8 *)(iVar2 + 0x240) = iVar7;
      piVar6 = (int8 *)param_1[8];
      *(int8 *)(iVar2 + 0x248) = iVar7;
      *(int8 *)(iVar2 + 0x250) = iVar2 + 0x298;
    }
    if (param_1[9] - (int8)piVar6 == 0) {
      piVar5 = piVar6;
    }
    else {
      memmove(iVar7,piVar6,param_1[9] - (int8)piVar6);
      piVar6 = (int8 *)param_1[8];
      piVar5 = (int8 *)param_1[9];
    }
    *(int8 *)(iVar2 + 0x248) = (int8)piVar5 + (iVar7 - (int8)piVar6);
    param_1[9] = (int8)piVar6;
  }
  else {
    *(int8 **)(iVar2 + 0x240) = piVar6;
    if (iVar3 == iVar7) {
      iVar7 = param_1[9];
      *(int8 *)(iVar2 + 0x250) = param_1[10];
      *(int8 *)(iVar2 + 0x248) = iVar7;
      param_1[8] = (int8)piVar4;
      param_1[9] = (int8)piVar4;
      param_1[10] = (int8)(param_1 + 0x13);
      goto code_r0x000ae2bc;
    }
    param_1[8] = iVar3;
    iVar7 = *(int8 *)(iVar2 + 0x248);
    *(int8 *)(iVar2 + 0x248) = param_1[9];
    param_1[9] = iVar7;
    iVar7 = *(int8 *)(iVar2 + 0x250);
    *(int8 *)(iVar2 + 0x250) = param_1[10];
    piVar6 = (int8 *)param_1[8];
    param_1[9] = (int8)piVar6;
    param_1[10] = iVar7;
  }
  if (piVar6 != piVar4) {
    free();
  }
code_r0x000ae2bc:
  if ((int8 *)param_1[1] == piVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_free)();
  return;
}

/* 0xae2f8  size=176 */
void FUN_000ae2f8(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x39770;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x1e;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xae3a8  size=176 */
void FUN_000ae3a8(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x30d36;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0xb;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xae458  size=176 */
void FUN_000ae458(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x22cac;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 8;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xae508  size=176 */
void FUN_000ae508(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x3215b;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0xd;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xae5b8  size=176 */
void FUN_000ae5b8(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x2ac60;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x12;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xae668  size=432 */
xunknown8 FUN_000ae668(int8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  uint1 *puVar3;
  uint1 *puVar4;
  uint1 *puVar5;
  
  puVar1 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if (puVar1 == puVar2) {
    return 1;
  }
  if (*puVar1 == 0x68) {
    puVar3 = puVar1 + 1;
    *param_1 = (int8)puVar3;
    if (puVar3 == puVar2) {
      return 1;
    }
    puVar4 = puVar3;
    if (*puVar3 == 0x6e) {
      puVar4 = puVar1 + 2;
      *param_1 = (int8)puVar4;
    }
    if (puVar2 == puVar4) {
      return 1;
    }
    if (*puVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      if (*puVar4 - 0x3a < 0xfffffff6) goto code_r0x000ae6e8;
      puVar4 = puVar4 + 1;
      *param_1 = (int8)puVar4;
    } while (puVar4 != puVar2);
  }
  else {
    if (*puVar1 != 0x76) {
      return 1;
    }
    puVar3 = puVar1 + 1;
    *param_1 = (int8)puVar3;
    if (puVar3 == puVar2) {
      return 1;
    }
    puVar5 = puVar3;
    if (*puVar3 == 0x6e) {
      puVar5 = puVar1 + 2;
      *param_1 = (int8)puVar5;
    }
    if (puVar2 == puVar5) {
      return 1;
    }
    if (*puVar5 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      if (*puVar5 - 0x3a < 0xfffffff6) goto code_r0x000ae794;
      puVar5 = puVar5 + 1;
      *param_1 = (int8)puVar5;
    } while (puVar5 != puVar2);
    puVar5 = puVar2;
code_r0x000ae794:
    if (puVar5 == puVar3) {
      return 1;
    }
    if (puVar5 == puVar2) {
      return 1;
    }
    if (*puVar5 != 0x5f) {
      return 1;
    }
    puVar3 = puVar5 + 1;
    *param_1 = (int8)puVar3;
    if (puVar3 == puVar2) {
      return 1;
    }
    puVar4 = puVar3;
    if (*puVar3 == 0x6e) {
      puVar4 = puVar5 + 2;
      *param_1 = (int8)puVar4;
    }
    if (puVar2 == puVar4) {
      return 1;
    }
    if (*puVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      if (*puVar4 - 0x3a < 0xfffffff6) goto code_r0x000ae6e8;
      puVar4 = puVar4 + 1;
      *param_1 = (int8)puVar4;
    } while (puVar4 != puVar2);
  }
  puVar4 = puVar2;
code_r0x000ae6e8:
  if (((puVar4 == puVar3) || (puVar4 == puVar2)) || (*puVar4 != 0x5f)) {
    return 1;
  }
  *param_1 = (int8)(puVar4 + 1);
  return 0;
}

/* 0xae818  size=176 */
void FUN_000ae818(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x38f62;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x1a;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xae8c8  size=168 */
void FUN_000ae8c8(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd04d8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x16;
  xVar3 = *param_2;
  xVar4 = *param_3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar4;
  return;
}

/* 0xae970  size=176 */
void FUN_000ae970(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x2eb62;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x28;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xaea20  size=176 */
void FUN_000aea20(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x40a81;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x11;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xaead0  size=172 */
void FUN_000aead0(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x2a467;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x15;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xaeb7c  size=176 */
void FUN_000aeb7c(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0458;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x15;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x41416;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 0x18;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xaec2c  size=476 */
xunknown8 FUN_000aec2c(int8 *param_1,xunknown8 *param_2)

{
  int8 *piVar1;
  char *pcVar2;
  int8 iVar3;
  int8 *piVar4;
  xunknown8 xVar5;
  char *pcVar6;
  int8 iVar7;
  char *pcVar8;
  xunknown1 xVar9;
  xunknown8 *pxVar10;
  int8 *piVar11;
  
  pcVar6 = (char *)*param_1;
  pcVar8 = (char *)param_1[1];
  if (pcVar6 != pcVar8) {
    piVar1 = param_1 + 0x28;
    do {
      while( true ) {
        if (*pcVar6 != 'W') {
          return 0;
        }
        pcVar2 = pcVar6 + 1;
        *param_1 = (int8)pcVar2;
        if ((pcVar2 == pcVar8) || (*pcVar2 != 'P')) {
          xVar9 = 0;
          iVar3 = FUN_000af0b4(param_1);
        }
        else {
          xVar9 = 1;
          *param_1 = (int8)(pcVar6 + 2);
          iVar3 = FUN_000af0b4(param_1);
        }
        if (iVar3 == 0) {
          return 1;
        }
        piVar11 = (int8 *)param_1[0x266];
        iVar7 = piVar11[1];
        piVar4 = piVar11;
        if (iVar7 - 0xfc0U < 0xfffffffffffff00f || iVar7 == -0x31) {
          piVar4 = (int8 *)malloc(0x1000);
          if (piVar4 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            xVar5 = (*pcRam00000000000d4468)();
            return xVar5;
          }
          iVar7 = 0;
          *piVar4 = (int8)piVar11;
          piVar4[1] = 0;
          param_1[0x266] = (int8)piVar4;
        }
        xVar5 = *param_2;
        piVar4[1] = iVar7 + 0x30;
        pxVar10 = (xunknown8 *)((int8)piVar4 + iVar7 + 0x10);
        *pxVar10 = 0xd05b8;
        *(xunknown8 *)((int8)piVar4 + iVar7 + 0x20) = xVar5;
        *(int8 *)((int8)piVar4 + iVar7 + 0x28) = iVar3;
        *(xunknown1 *)((int8)piVar4 + iVar7 + 0x18) = 0x1b;
        *(xunknown1 *)((int8)piVar4 + iVar7 + 0x30) = xVar9;
        *(uint2 *)((int8)piVar4 + iVar7 + 0x19) =
             *(uint2 *)((int8)piVar4 + iVar7 + 0x19) & 0xf000 | 0x540;
        *param_2 = pxVar10;
        piVar4 = (int8 *)param_1[0x26];
        if (piVar4 == (int8 *)param_1[0x27]) break;
        param_1[0x26] = (int8)(piVar4 + 1);
        *piVar4 = (int8)pxVar10;
        pcVar6 = (char *)*param_1;
        pcVar8 = (char *)param_1[1];
        if (pcVar6 == pcVar8) {
          return 0;
        }
      }
      iVar3 = (int8)piVar4 - param_1[0x25];
      if ((int8 *)param_1[0x25] == piVar1) {
        iVar7 = malloc(iVar3 * 2);
        if (iVar7 == 0) goto code_r0x000ca7b0;
        if (piVar4 != piVar1) {
          memcpy(iVar7,piVar1,iVar3);
        }
        param_1[0x25] = iVar7;
      }
      else {
        iVar7 = realloc();
        param_1[0x25] = iVar7;
        if (iVar7 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          xVar5 = (*got_abort)();
          return xVar5;
        }
      }
      param_1[0x26] = (int8)((xunknown8 *)(iVar7 + iVar3) + 1);
      param_1[0x27] = iVar7 + (iVar3 >> 2) * 8;
      *(xunknown8 *)(iVar7 + iVar3) = pxVar10;
      pcVar6 = (char *)*param_1;
      pcVar8 = (char *)param_1[1];
    } while (pcVar6 != pcVar8);
  }
  return 0;
}

/* 0xaee08  size=12 */
xunknown8 FUN_000aee08(void)

{
  return 0;
}

/* 0xaee14  size=12 */
xunknown8 FUN_000aee14(void)

{
  return 0;
}

/* 0xaee20  size=12 */
xunknown8 FUN_000aee20(void)

{
  return 0;
}

/* 0xaee2c  size=8 */
void FUN_000aee2c(void)

{
  return;
}

/* 0xaee34  size=224 */
void FUN_000aee34(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 *piVar5;
  int8 iVar6;
  xunknown8 xVar7;
  
  iVar6 = *(int8 *)(param_1 + 0x18);
  if (iVar6 != 0) {
    iVar4 = param_2[1];
    iVar2 = *param_2;
    xVar7 = *(xunknown8 *)(param_1 + 0x10);
    if ((uint8)param_2[2] < (uint8)(iVar4 + iVar6)) {
      uVar3 = param_2[2] * 2;
      uVar1 = iVar4 + iVar6 + 0x3e0;
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
    memcpy(iVar2 + iVar4,xVar7,iVar6);
    param_2[1] = param_2[1] + iVar6;
  }
  piVar5 = *(int8 **)(param_1 + 0x20);
  (**(code **)(*piVar5 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000aef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  return;
}

/* 0xaef14  size=8 */
void FUN_000aef14(void)

{
  return;
}

/* 0xaef1c  size=16 */
xunknown1  [16] FUN_000aef1c(void)

{
  return ZEXT816(0);
}

/* 0xaef2c  size=8 */
void FUN_000aef2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xaef34  size=376 */
void FUN_000aef34(int8 param_1,int8 *param_2)

{
  xunknown8 *pxVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  int8 iVar4;
  int8 iVar5;
  uint8 uVar6;
  int8 *piVar7;
  
  iVar5 = param_2[1];
  iVar4 = *param_2;
  if ((uint8)param_2[2] < iVar5 + 0x18U) {
    uVar6 = param_2[2] * 2;
    if (uVar6 <= iVar5 + 0x3f8U) {
      uVar6 = iVar5 + 0x3f8U;
    }
    param_2[2] = uVar6;
    iVar4 = realloc(iVar4);
    *param_2 = iVar4;
    if (iVar4 == 0) goto code_r0x000ca7b0;
    iVar5 = param_2[1];
  }
  xVar3 = xRam000000000003979f;
  xVar2 = xRam000000000003978f;
  pxVar1 = (xunknown8 *)(iVar4 + iVar5);
  pxVar1[1] = xRam0000000000039797;
  *pxVar1 = xVar2;
  pxVar1[2] = xVar3;
  piVar7 = *(int8 **)(param_1 + 0x10);
  iVar5 = *piVar7;
  param_2[1] = param_2[1] + 0x18;
  (**(code **)(iVar5 + 0x20))(piVar7,param_2);
  if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
  }
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
    if (iVar4 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*got_abort)();
      return;
    }
    iVar5 = param_2[1];
  }
  *(xunknown4 *)(iVar4 + iVar5) = 0x2d6e692d;
  piVar7 = *(int8 **)(param_1 + 0x18);
  iVar5 = *piVar7;
  param_2[1] = param_2[1] + 4;
  (**(code **)(iVar5 + 0x20))(piVar7,param_2);
  if ((*(uint2 *)((int8)piVar7 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000af0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar7 + 0x28))(piVar7,param_2);
  return;
}

/* 0xaf0ac  size=8 */
void FUN_000af0ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xaf0b4  size=444 */
xunknown8 * FUN_000af0b4(int8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  uint1 *puVar3;
  int8 *piVar4;
  xunknown8 *pxVar5;
  uint1 *puVar6;
  int8 iVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint1 *puVar10;
  int8 *piVar11;
  
  puVar1 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if ((puVar2 == puVar1) || (*puVar1 - 0x3a < 0xfffffff6)) {
    return (xunknown8 *)0x0;
  }
  puVar3 = puVar1 + 1;
  puVar1 = puVar1 + 1;
  uVar9 = 0;
  do {
    uVar8 = uVar9;
    puVar6 = puVar1;
    puVar10 = puVar3;
    *param_1 = (int8)puVar6;
    iVar7 = (uint8)puVar6[-1] + uVar8 * 10;
    uVar9 = iVar7 - 0x30;
    if (puVar6 == puVar2) break;
    puVar3 = puVar10 + 1;
    puVar1 = puVar6 + 1;
  } while (*puVar6 - 0x30 < 10);
  if ((uint8)((int8)puVar2 - (int8)puVar10) <= iVar7 - 0x31U) {
    return (xunknown8 *)0x0;
  }
  *param_1 = (int8)(puVar6 + (uint8)puVar6[-1] + uVar8 * 10 + -0x30);
  if ((uVar9 < 10) || (*(int8 *)puVar6 != 0x5f4c41424f4c475f || *(int2 *)(puVar6 + 8) != 0x4e5f)) {
    piVar11 = (int8 *)param_1[0x266];
    iVar7 = piVar11[1];
    if (0xfffffffffffff00e < iVar7 - 0xfd0U && iVar7 != -0x21) goto code_r0x000af1bc;
    piVar4 = (int8 *)malloc(0x1000);
    if (piVar4 == (int8 *)0x0) goto code_r0x000af26c;
    *piVar4 = (int8)piVar11;
    piVar4[1] = 0;
  }
  else {
    piVar11 = (int8 *)param_1[0x266];
    iVar7 = piVar11[1];
    if (0xfffffffffffff00e < iVar7 - 0xfd0U && iVar7 != -0x21) {
      puVar10 = (uint1 *)0x2da54 /* "(anonymous namespace)" */;
      uVar9 = 0x15;
      goto code_r0x000af1bc;
    }
    piVar4 = (int8 *)malloc(0x1000);
    if (piVar4 == (int8 *)0x0) {
code_r0x000af26c:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pxVar5 = (xunknown8 *)(*pcRam00000000000d4468)();
      return pxVar5;
    }
    *piVar4 = (int8)piVar11;
    piVar4[1] = 0;
    puVar10 = (uint1 *)0x2da54 /* "(anonymous namespace)" */;
    uVar9 = 0x15;
  }
  iVar7 = 0;
  param_1[0x266] = (int8)piVar4;
  piVar11 = piVar4;
code_r0x000af1bc:
  piVar11[1] = iVar7 + 0x20;
  pxVar5 = (xunknown8 *)((int8)piVar11 + iVar7 + 0x10);
  *pxVar5 = 0xd0548;
  *(uint1 **)((int8)piVar11 + iVar7 + 0x20) = puVar10;
  *(uint8 *)((int8)piVar11 + iVar7 + 0x28) = uVar9;
  *(xunknown1 *)((int8)piVar11 + iVar7 + 0x18) = 8;
  *(uint2 *)((int8)piVar11 + iVar7 + 0x19) =
       *(uint2 *)((int8)piVar11 + iVar7 + 0x19) & 0xf000 | 0x540;
  return pxVar5;
}

/* 0xaf270  size=160 */
void FUN_000af270(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0548;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 8;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar4;
  return;
}

/* 0xaf310  size=148 */
void FUN_000af310(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  
  iVar5 = *(int8 *)(param_1 + 0x18);
  if (iVar5 != 0) {
    iVar4 = param_2[1];
    iVar2 = *param_2;
    xVar6 = *(xunknown8 *)(param_1 + 0x10);
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

/* 0xaf3a4  size=16 */
xunknown1  [16] FUN_000af3a4(int8 param_1)

{
  return *(xunknown1 (*) [16])(param_1 + 0x10);
}

/* 0xaf3b4  size=8 */
void FUN_000af3b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xaf3bc  size=292 */
void FUN_000af3bc(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  xunknown1 xVar4;
  int8 *piVar5;
  
  piVar5 = *(int8 **)(param_1 + 0x10);
  if ((piVar5 != (int8 *)0x0) &&
     ((**(code **)(*piVar5 + 0x20))(piVar5,param_2), (*(uint2 *)((int8)piVar5 + 9) & 0xc0) != 0x40))
  {
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  }
  if ((*(int8 *)(param_1 + 0x10) != 0) || (*(char *)(param_1 + 0x20) != '\0')) {
    iVar2 = param_2[1];
    iVar1 = *param_2;
    xVar4 = 0x2e;
    if (*(char *)(param_1 + 0x20) != '\0') {
      xVar4 = 0x3a;
    }
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
    *(xunknown1 *)(iVar1 + iVar2) = xVar4;
  }
  piVar5 = *(int8 **)(param_1 + 0x18);
  (**(code **)(*piVar5 + 0x20))(piVar5,param_2);
  if ((*(uint2 *)((int8)piVar5 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000af4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
  return;
}

/* 0xaf4e0  size=8 */
void FUN_000af4e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xaf4e8  size=384 */
xunknown8 * FUN_000af4e8(int8 *param_1,xunknown1 *param_2,xunknown1 *param_3)

{
  char *pcVar1;
  int8 iVar2;
  uint1 uVar3;
  uint8 uVar4;
  xunknown8 *pxVar5;
  int8 *piVar6;
  int8 iVar7;
  int8 iVar8;
  xunknown8 *pxVar9;
  xunknown8 xVar10;
  bool bVar11;
  int2 *piVar12;
  uint1 *puVar13;
  int8 iVar14;
  xunknown8 *pxVar15;
  uint2 uVar16;
  uint4 uVar17;
  uint1 *puVar18;
  xunknown1 xVar19;
  uint1 *puVar20;
  xunknown8 *pxVar21;
  int8 *piVar22;
  int8 iVar23;
  bool bVar24;
  xunknown1 axVar25 [16];
  xunknown8 *pxStack_60;
  xunknown8 *apxStack_58 [3];
  
  piVar12 = (int2 *)*param_1;
  if (((uint8)(param_1[1] - (int8)piVar12) < 2) || (*piVar12 != 0x7453)) {
    pxVar21 = (xunknown8 *)0x0;
    if ((int2 *)param_1[1] != piVar12) goto code_r0x000af528;
code_r0x000af61c:
    pxStack_60 = (xunknown8 *)0x0;
  }
  else {
    piVar22 = (int8 *)param_1[0x266];
    *param_1 = (int8)(piVar12 + 1);
    iVar14 = piVar22[1];
    piVar6 = piVar22;
    if (iVar14 - 0xfd0U < 0xfffffffffffff00f || iVar14 == -0x21) {
      piVar6 = (int8 *)malloc(0x1000);
      if (piVar6 == (int8 *)0x0) goto code_r0x000caa00;
      iVar14 = 0;
      *piVar6 = (int8)piVar22;
      piVar6[1] = 0;
      param_1[0x266] = (int8)piVar6;
    }
    piVar6[1] = iVar14 + 0x20;
    pxVar21 = (xunknown8 *)((int8)piVar6 + iVar14 + 0x10);
    *pxVar21 = 0xd0548;
    *(xunknown1 *)((int8)piVar6 + iVar14 + 0x18) = 8;
    *(uint2 *)((int8)piVar6 + iVar14 + 0x19) =
         *(uint2 *)((int8)piVar6 + iVar14 + 0x19) & 0xf000 | 0x540;
    *(xunknown8 *)((int8)piVar6 + iVar14 + 0x20) = 0x3836c;
    *(xunknown8 *)((int8)piVar6 + iVar14 + 0x28) = 3;
    piVar12 = (int2 *)*param_1;
    if ((int2 *)param_1[1] == piVar12) goto code_r0x000af61c;
code_r0x000af528:
    if ((char)*piVar12 != 'S') goto code_r0x000af61c;
    pxStack_60 = (xunknown8 *)FUN_000b01c0();
    if (pxStack_60 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    if (*(char *)(pxStack_60 + 1) != '\x1b') {
      if (param_3 == (xunknown1 *)0x0) {
        return (xunknown8 *)0x0;
      }
      if (pxVar21 == (xunknown8 *)0x0) {
        *param_3 = 1;
        return pxStack_60;
      }
      return (xunknown8 *)0x0;
    }
  }
  apxStack_58[0] = pxVar21;
  uVar4 = FUN_000aec2c(param_1,&pxStack_60);
  if ((uVar4 & 1) != 0) goto code_r0x000b04d8;
  puVar13 = (uint1 *)*param_1;
  puVar18 = (uint1 *)param_1[1];
  if (pxVar21 == (xunknown8 *)0x0) {
code_r0x000b0514:
    bVar24 = true;
    if (puVar13 == puVar18) goto code_r0x000b06a4;
code_r0x000b0520:
    if (*puVar13 == 0x4c) {
      puVar13 = puVar13 + 1;
      *param_1 = (int8)puVar13;
    }
    if ((puVar18 != puVar13) && (uVar3 = *puVar13, 0x30 < uVar3)) {
      if (uVar3 < 0x3a) {
        pxVar5 = (xunknown8 *)FUN_000af0b4(param_1);
        pxVar9 = pxStack_60;
      }
      else {
        if (uVar3 != 0x55) goto code_r0x000b05a0;
        pxVar5 = (xunknown8 *)FUN_000b7190(param_1,param_2);
        pxVar9 = pxStack_60;
      }
      goto joined_r0x000b0884;
    }
code_r0x000b05a0:
    if ((1 < (uint8)((int8)puVar18 - (int8)puVar13)) && (*(int2 *)puVar13 == 0x4344)) {
      iVar14 = param_1[2];
      iVar2 = param_1[3];
      *param_1 = (int8)(puVar13 + 2);
      iVar7 = FUN_000af0b4(param_1);
      if (iVar7 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar6 = param_1 + 5;
      do {
        piVar22 = (int8 *)param_1[3];
        if (piVar22 == (int8 *)param_1[4]) {
          iVar23 = (int8)piVar22 - param_1[2];
          if ((int8 *)param_1[2] == piVar6) {
            iVar8 = malloc(iVar23 * 2);
            if (iVar8 == 0) goto code_r0x000ca7b0;
            if (piVar22 != piVar6) {
              memcpy(iVar8,piVar6,iVar23);
            }
            param_1[2] = iVar8;
          }
          else {
            iVar8 = realloc();
            param_1[2] = iVar8;
            if (iVar8 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar21 = (xunknown8 *)(*got_abort)();
              return pxVar21;
            }
          }
          piVar22 = (int8 *)(iVar8 + iVar23);
          param_1[4] = iVar8 + (iVar23 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar22 + 1);
        *piVar22 = iVar7;
        pcVar1 = (char *)*param_1;
        if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 'E')) {
          *param_1 = (int8)(pcVar1 + 1);
          axVar25 = FUN_000adec4(param_1,iVar2 - iVar14 >> 3);
          piVar22 = (int8 *)param_1[0x266];
          iVar14 = piVar22[1];
          piVar6 = piVar22;
          if (iVar14 - 0xfd0U < 0xfffffffffffff00f || iVar14 == -0x21) {
            piVar6 = (int8 *)malloc(0x1000);
            if (piVar6 == (int8 *)0x0) goto code_r0x000caa00;
            iVar14 = 0;
            *piVar6 = (int8)piVar22;
            piVar6[1] = 0;
            param_1[0x266] = (int8)piVar6;
          }
          piVar6[1] = iVar14 + 0x20;
          pxVar5 = (xunknown8 *)((int8)piVar6 + iVar14 + 0x10);
          *pxVar5 = 0xd20c8;
          *(xunknown1 (*) [16])((int8)piVar6 + iVar14 + 0x20) = axVar25;
          *(xunknown1 *)((int8)piVar6 + iVar14 + 0x18) = 0x35;
          *(uint2 *)((int8)piVar6 + iVar14 + 0x19) =
               *(uint2 *)((int8)piVar6 + iVar14 + 0x19) & 0xf000 | 0x540;
          pxVar9 = pxStack_60;
          goto joined_r0x000b0884;
        }
        iVar7 = FUN_000af0b4(param_1);
        if (iVar7 == 0) {
          return (xunknown8 *)0x0;
        }
      } while( true );
    }
    if ((puVar18 == puVar13) || (1 < *puVar13 - 0x43)) goto code_r0x000b06a4;
    if (pxVar21 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    if (pxStack_60 != (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pxVar9 = pxVar21;
    if (*(char *)(pxVar21 + 1) == '0') {
      piVar22 = (int8 *)param_1[0x266];
      iVar14 = piVar22[1];
      piVar6 = piVar22;
      if (iVar14 - 0xfe0U < 0xfffffffffffff00f || iVar14 == -0x11) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000caa00;
        iVar14 = 0;
        *piVar6 = (int8)piVar22;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar14 + 0x10;
      pxVar9 = (xunknown8 *)(iVar14 + 0x10 + (int8)piVar6);
      *(xunknown1 *)(pxVar9 + 1) = 0x2f;
      *(xunknown4 *)((int8)pxVar9 + 0xc) = *(xunknown4 *)((int8)pxVar21 + 0xc);
      *(uint2 *)((int8)pxVar9 + 9) = *(uint2 *)((int8)pxVar9 + 9) & 0xf000 | 0x540;
      *pxVar9 = 0xd2000;
      puVar13 = (uint1 *)*param_1;
      puVar18 = (uint1 *)param_1[1];
      apxStack_58[0] = pxVar9;
    }
    if (puVar13 != puVar18) {
      if (*puVar13 == 0x43) {
        puVar20 = puVar13 + 1;
        *param_1 = (int8)puVar20;
        if (puVar20 == puVar18) {
          bVar11 = false;
          puVar20 = puVar18;
        }
        else if (*puVar20 == 0x49) {
          bVar11 = true;
          *param_1 = (int8)(puVar13 + 2);
          puVar20 = puVar13 + 2;
        }
        else {
          bVar11 = false;
        }
        if ((puVar18 == puVar20) || (uVar17 = (uint4)*puVar20, 4 < uVar17 - 0x31))
        goto code_r0x000b04d8;
        *param_1 = (int8)(puVar20 + 1);
        if (param_2 != (xunknown1 *)0x0) {
          *param_2 = 1;
        }
        if ((bVar11) && (iVar14 = FUN_000ad294(param_1,param_2), iVar14 == 0)) {
          return (xunknown8 *)0x0;
        }
        xVar10 = 0;
      }
      else {
        if ((uint8)((int8)puVar18 - (int8)puVar13) < 2) {
          return (xunknown8 *)0x0;
        }
        if (*puVar13 != 0x44) {
          return (xunknown8 *)0x0;
        }
        uVar3 = puVar13[1];
        if (0x35 < uVar3) {
          return (xunknown8 *)0x0;
        }
        if ((1L << ((uint8)uVar3 & 0x3f) & 0x37000000000000U) == 0) {
          return (xunknown8 *)0x0;
        }
        uVar17 = (uint4)uVar3;
        *param_1 = (int8)(puVar13 + 2);
        if (param_2 != (xunknown1 *)0x0) {
          *param_2 = 1;
        }
        xVar10 = 1;
      }
      pxVar5 = (xunknown8 *)FUN_000bdaa4(param_1,apxStack_58,xVar10,uVar17 - 0x30);
      pxVar21 = pxVar9;
      pxVar9 = pxStack_60;
      goto joined_r0x000b0884;
    }
code_r0x000b04d8:
    pxVar5 = (xunknown8 *)0x0;
  }
  else {
    if (puVar13 == puVar18) {
      bVar24 = true;
      pxVar5 = (xunknown8 *)FUN_000bc9c0(param_1,param_2);
      pxVar9 = pxStack_60;
      goto joined_r0x000b0884;
    }
    if (*puVar13 != 0x46) goto code_r0x000b0514;
    bVar24 = false;
    puVar13 = puVar13 + 1;
    *param_1 = (int8)puVar13;
    if (puVar13 != puVar18) goto code_r0x000b0520;
code_r0x000b06a4:
    pxVar5 = (xunknown8 *)FUN_000bc9c0(param_1,param_2);
    pxVar9 = pxStack_60;
joined_r0x000b0884:
    pxStack_60 = pxVar9;
    if ((pxVar5 == (xunknown8 *)0x0) || (pxVar9 == (xunknown8 *)0x0)) {
      if (pxVar5 == (xunknown8 *)0x0) goto code_r0x000b04d8;
    }
    else {
      piVar22 = (int8 *)param_1[0x266];
      iVar14 = piVar22[1];
      piVar6 = piVar22;
      if (iVar14 - 0xfd0U < 0xfffffffffffff00f || iVar14 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000caa00;
        iVar14 = 0;
        *piVar6 = (int8)piVar22;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar14 + 0x20;
      pxVar15 = (xunknown8 *)((int8)piVar6 + iVar14 + 0x10);
      *pxVar15 = 0xd21a8;
      *(xunknown8 **)((int8)piVar6 + iVar14 + 0x20) = pxVar9;
      *(xunknown8 **)((int8)piVar6 + iVar14 + 0x28) = pxVar5;
      *(xunknown1 *)((int8)piVar6 + iVar14 + 0x18) = 0x1c;
      *(uint2 *)((int8)piVar6 + iVar14 + 0x19) =
           *(uint2 *)((int8)piVar6 + iVar14 + 0x19) & 0xf000 | 0x540;
      pxVar5 = pxVar15;
    }
    pxVar9 = (xunknown8 *)FUN_000bd0c4(param_1,pxVar5);
    if (pxVar9 == (xunknown8 *)0x0) {
      bVar24 = true;
    }
    if (bVar24) {
      if (pxVar21 == (xunknown8 *)0x0) {
        return pxVar9;
      }
      if (pxVar9 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      piVar22 = (int8 *)param_1[0x266];
      iVar14 = piVar22[1];
      piVar6 = piVar22;
      if (iVar14 - 0xfd0U < 0xfffffffffffff00f || iVar14 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000caa00;
        iVar14 = 0;
        *piVar6 = (int8)piVar22;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar14 + 0x20;
      pxVar5 = (xunknown8 *)((int8)piVar6 + iVar14 + 0x10);
      *pxVar5 = 0xd2288;
      uVar16 = *(uint2 *)((int8)piVar6 + iVar14 + 0x19);
      xVar19 = 0x18;
    }
    else {
      piVar22 = (int8 *)param_1[0x266];
      iVar14 = piVar22[1];
      piVar6 = piVar22;
      if (iVar14 - 0xfd0U < 0xfffffffffffff00f || iVar14 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar21 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar21;
        }
        iVar14 = 0;
        *piVar6 = (int8)piVar22;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar14 + 0x20;
      pxVar5 = (xunknown8 *)((int8)piVar6 + iVar14 + 0x10);
      *pxVar5 = 0xd2218;
      uVar16 = *(uint2 *)((int8)piVar6 + iVar14 + 0x19);
      xVar19 = 0x19;
    }
    pxVar5[2] = pxVar21;
    pxVar5[3] = pxVar9;
    *(xunknown1 *)(pxVar5 + 1) = xVar19;
    *(uint2 *)((int8)pxVar5 + 9) = uVar16 & 0xf000 | 0x540;
  }
  return pxVar5;
}

/* 0xaf668  size=1436 */
xunknown8 * FUN_000af668(int8 *param_1,uint8 param_2)

{
  int8 *piVar1;
  xunknown8 *pxVar2;
  uint2 uVar3;
  xunknown1 xVar4;
  int8 *piVar5;
  int8 *piVar6;
  int8 iVar7;
  xunknown8 *pxVar8;
  char cVar9;
  uint2 uVar10;
  int8 iVar11;
  char *pcVar12;
  int8 iVar13;
  char *pcVar14;
  int8 iVar15;
  int8 iVar16;
  int8 *piVar17;
  int8 *piVar18;
  xunknown1 axVar19 [16];
  
  pcVar12 = (char *)*param_1;
  if (pcVar12 == (char *)param_1[1]) {
    return (xunknown8 *)0x0;
  }
  if (*pcVar12 != 'I') {
    return (xunknown8 *)0x0;
  }
  *param_1 = (int8)(pcVar12 + 1);
  if ((param_2 & 1) != 0) {
    piVar5 = (int8 *)param_1[0x53];
    param_1[0x54] = (int8)piVar5;
    if (piVar5 == (int8 *)param_1[0x55]) {
      if (piVar5 == param_1 + 0x56) {
        piVar5 = (int8 *)malloc(0);
        if (piVar5 == (int8 *)0x0) goto code_r0x000ca7b0;
        param_1[0x53] = (int8)piVar5;
      }
      else {
        piVar5 = (int8 *)realloc(piVar5,0);
        param_1[0x53] = (int8)piVar5;
        if (piVar5 == (int8 *)0x0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar8 = (xunknown8 *)(*got_abort)();
          return pxVar8;
        }
      }
      param_1[0x54] = (int8)piVar5;
      param_1[0x55] = (int8)piVar5;
    }
    param_1[0x54] = (int8)(piVar5 + 1);
    piVar17 = param_1 + 5;
    piVar1 = param_1 + 0x4b;
    *piVar5 = (int8)(param_1 + 0x48);
    param_1[0x49] = param_1[0x48];
    iVar11 = param_1[3] - param_1[2] >> 3;
    pcVar12 = (char *)*param_1;
    pcVar14 = (char *)param_1[1];
code_r0x000af84c:
    if ((pcVar12 != pcVar14) && (*pcVar12 == 'E')) goto code_r0x000afae0;
    pxVar8 = (xunknown8 *)FUN_000ad9d8(param_1);
    if (pxVar8 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    piVar5 = (int8 *)param_1[3];
    if (piVar5 == (int8 *)param_1[4]) {
      iVar7 = (int8)piVar5 - param_1[2];
      if ((int8 *)param_1[2] == piVar17) {
        iVar13 = malloc(iVar7 * 2);
        if (iVar13 == 0) goto code_r0x000ca7b0;
        if (piVar5 != piVar17) {
          memcpy(iVar13,piVar17,iVar7);
        }
        param_1[2] = iVar13;
      }
      else {
        iVar13 = realloc();
        param_1[2] = iVar13;
        if (iVar13 == 0) goto code_r0x000ca7b0;
      }
      pxVar2 = (xunknown8 *)(iVar13 + iVar7);
      param_1[3] = (int8)pxVar2;
      param_1[4] = iVar13 + (iVar7 >> 2) * 8;
      cVar9 = *(char *)(pxVar8 + 1);
      param_1[3] = (int8)(pxVar2 + 1);
      *pxVar2 = pxVar8;
      if (cVar9 != '\"') goto code_r0x000af894;
code_r0x000afa48:
      pxVar8 = (xunknown8 *)pxVar8[3];
      piVar5 = (int8 *)param_1[0x49];
      if (piVar5 == (int8 *)param_1[0x4a]) goto code_r0x000afa5c;
      goto code_r0x000af9b4;
    }
    cVar9 = *(char *)(pxVar8 + 1);
    param_1[3] = (int8)(piVar5 + 1);
    *piVar5 = (int8)pxVar8;
    if (cVar9 == '\"') goto code_r0x000afa48;
code_r0x000af894:
    if (cVar9 != ')') goto code_r0x000af9a4;
    piVar18 = (int8 *)param_1[0x266];
    piVar5 = (int8 *)pxVar8[2];
    iVar7 = pxVar8[3];
    iVar13 = piVar18[1];
    piVar6 = piVar18;
    if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
      piVar6 = (int8 *)malloc(0x1000);
      if (piVar6 == (int8 *)0x0) goto code_r0x000afbe8;
      iVar13 = 0;
      *piVar6 = (int8)piVar18;
      piVar6[1] = 0;
      param_1[0x266] = (int8)piVar6;
    }
    piVar6[1] = iVar13 + 0x20;
    iVar15 = iVar7 << 3;
    pxVar8 = (xunknown8 *)((int8)piVar6 + iVar13 + 0x10);
    *pxVar8 = 0xd2368;
    *(xunknown1 *)((int8)piVar6 + iVar13 + 0x18) = 0x28;
    uVar3 = *(uint2 *)((int8)piVar6 + iVar13 + 0x19) & 0xf000;
    *(int8 **)((int8)piVar6 + iVar13 + 0x20) = piVar5;
    *(int8 *)((int8)piVar6 + iVar13 + 0x28) = iVar7;
    uVar10 = uVar3 | 0xa80;
    *(uint2 *)((int8)piVar6 + iVar13 + 0x19) = uVar10;
    if (iVar7 != 0) {
      iVar16 = iVar15;
      piVar18 = piVar5;
      do {
        if ((*(uint2 *)(*piVar18 + 9) & 0x300) != 0x100) goto code_r0x000af93c;
        iVar16 = iVar16 + -8;
        piVar18 = piVar18 + 1;
      } while (iVar16 != 0);
    }
    uVar10 = uVar3 | 0x980;
    *(uint2 *)((int8)piVar6 + iVar13 + 0x19) = uVar10;
code_r0x000af93c:
    if (iVar7 != 0) {
      iVar16 = iVar15;
      piVar18 = piVar5;
      do {
        if ((*(uint2 *)(*piVar18 + 9) & 0xc00) != 0x400) goto joined_r0x000af974;
        iVar16 = iVar16 + -8;
        piVar18 = piVar18 + 1;
      } while (iVar16 != 0);
    }
    uVar10 = uVar10 & 0xf3ff | 0x400;
    *(uint2 *)((int8)piVar6 + iVar13 + 0x19) = uVar10;
joined_r0x000af974:
    do {
      if (iVar7 == 0) goto code_r0x000af998;
      if ((*(uint2 *)(*piVar5 + 9) & 0xc0) != 0x40) goto code_r0x000af9a4;
      iVar15 = iVar15 + -8;
      piVar5 = piVar5 + 1;
      iVar7 = iVar15;
    } while( true );
  }
  piVar5 = param_1 + 5;
  iVar11 = param_1[3] - param_1[2] >> 3;
  pcVar12 = (char *)*param_1;
  pcVar14 = (char *)param_1[1];
code_r0x000af714:
  do {
    if ((pcVar12 != pcVar14) && (*pcVar12 == 'E')) goto code_r0x000afae0;
    iVar7 = FUN_000ad9d8(param_1);
    if (iVar7 == 0) {
      return (xunknown8 *)0x0;
    }
    piVar17 = (int8 *)param_1[3];
    if (piVar17 == (int8 *)param_1[4]) {
      iVar13 = (int8)piVar17 - param_1[2];
      if ((int8 *)param_1[2] == piVar5) {
        iVar15 = malloc(iVar13 * 2);
        if (iVar15 == 0) goto code_r0x000ca7b0;
        if (piVar17 != piVar5) {
          memcpy(iVar15,piVar5,iVar13);
        }
        param_1[2] = iVar15;
      }
      else {
        iVar15 = realloc();
        param_1[2] = iVar15;
        if (iVar15 == 0) goto code_r0x000ca7b0;
      }
      piVar17 = (int8 *)(iVar15 + iVar13);
      param_1[3] = (int8)piVar17;
      param_1[4] = iVar15 + (iVar13 >> 2) * 8;
      param_1[3] = (int8)(piVar17 + 1);
      *piVar17 = iVar7;
      pcVar12 = (char *)*param_1;
      pcVar14 = (char *)param_1[1];
      if (pcVar12 == pcVar14) goto code_r0x000af714;
    }
    else {
      param_1[3] = (int8)(piVar17 + 1);
      *piVar17 = iVar7;
      pcVar12 = (char *)*param_1;
      pcVar14 = (char *)param_1[1];
      if (pcVar12 == pcVar14) goto code_r0x000af714;
    }
  } while (*pcVar12 != 'Q');
code_r0x000afb74:
  xVar4 = *(xunknown1 *)((int8)param_1 + 0x30a);
  *param_1 = (int8)(pcVar12 + 1);
  *(xunknown1 *)((int8)param_1 + 0x30a) = 1;
  iVar7 = FUN_000b0fa8(param_1);
  *(xunknown1 *)((int8)param_1 + 0x30a) = xVar4;
  if (((iVar7 == 0) || (pcVar12 = (char *)*param_1, pcVar12 == (char *)param_1[1])) ||
     (*pcVar12 != 'E')) {
    return (xunknown8 *)0x0;
  }
code_r0x000afae4:
  *param_1 = (int8)(pcVar12 + 1);
  axVar19 = FUN_000adec4(param_1,iVar11);
  piVar17 = (int8 *)param_1[0x266];
  iVar11 = piVar17[1];
  piVar5 = piVar17;
  if (iVar11 - 0xfc0U < 0xfffffffffffff00f || iVar11 == -0x31) {
    piVar5 = (int8 *)malloc(0x1000);
    if (piVar5 == (int8 *)0x0) {
code_r0x000afbe8:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pxVar8 = (xunknown8 *)(*pcRam00000000000d4468)();
      return pxVar8;
    }
    iVar11 = 0;
    *piVar5 = (int8)piVar17;
    piVar5[1] = 0;
    param_1[0x266] = (int8)piVar5;
  }
  piVar5[1] = iVar11 + 0x30;
  pxVar8 = (xunknown8 *)((int8)piVar5 + iVar11 + 0x10);
  *pxVar8 = 0xd23d8;
  *(xunknown1 *)((int8)piVar5 + iVar11 + 0x18) = 0x2b;
  *(xunknown1 (*) [16])((int8)piVar5 + iVar11 + 0x20) = axVar19;
  *(int8 *)((int8)piVar5 + iVar11 + 0x30) = iVar7;
  *(uint2 *)((int8)piVar5 + iVar11 + 0x19) =
       *(uint2 *)((int8)piVar5 + iVar11 + 0x19) & 0xf000 | 0x540;
  return pxVar8;
code_r0x000af998:
  *(uint2 *)((int8)piVar6 + iVar13 + 0x19) = uVar10 & 0xff7f | 0x40;
code_r0x000af9a4:
  piVar5 = (int8 *)param_1[0x49];
  if (piVar5 == (int8 *)param_1[0x4a]) {
code_r0x000afa5c:
    iVar7 = (int8)piVar5 - param_1[0x48];
    if ((int8 *)param_1[0x48] == piVar1) {
      iVar13 = malloc(iVar7 * 2);
      if (iVar13 == 0) goto code_r0x000ca7b0;
      if (piVar5 != piVar1) {
        memcpy(iVar13,piVar1,iVar7);
      }
      param_1[0x48] = iVar13;
    }
    else {
      iVar13 = realloc();
      param_1[0x48] = iVar13;
      if (iVar13 == 0) goto code_r0x000ca7b0;
    }
    pxVar2 = (xunknown8 *)(iVar13 + iVar7);
    param_1[0x49] = (int8)pxVar2;
    param_1[0x4a] = iVar13 + (iVar7 >> 2) * 8;
    param_1[0x49] = (int8)(pxVar2 + 1);
    *pxVar2 = pxVar8;
    pcVar12 = (char *)*param_1;
    pcVar14 = (char *)param_1[1];
    if (pcVar12 == pcVar14) goto code_r0x000af84c;
  }
  else {
code_r0x000af9b4:
    param_1[0x49] = (int8)(piVar5 + 1);
    *piVar5 = (int8)pxVar8;
    pcVar12 = (char *)*param_1;
    pcVar14 = (char *)param_1[1];
    if (pcVar12 == pcVar14) goto code_r0x000af84c;
  }
  if (*pcVar12 == 'Q') goto code_r0x000afb74;
  goto code_r0x000af84c;
code_r0x000afae0:
  iVar7 = 0;
  goto code_r0x000afae4;
}

/* 0xafc04  size=168 */
void FUN_000afc04(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd2448;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x2d;
  xVar3 = *param_2;
  xVar4 = *param_3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar4;
  return;
}

/* 0xafcac  size=976 */
xunknown8 * FUN_000afcac(int8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  char cVar3;
  uint1 *puVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  int8 *piVar7;
  uint8 uVar8;
  int8 iVar9;
  int8 iVar10;
  uint8 uVar11;
  uint1 *puVar12;
  uint1 *puVar13;
  xunknown8 *pxVar14;
  uint8 uVar15;
  int8 *piVar16;
  xunknown8 xStack_48;
  
  puVar1 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if ((puVar1 != puVar2) && (*puVar1 == 0x54)) {
    puVar13 = puVar1 + 1;
    *param_1 = (int8)puVar13;
    if (puVar13 != puVar2) {
      if (*puVar13 == 0x4c) {
        puVar13 = puVar1 + 2;
        *param_1 = (int8)puVar13;
        if (puVar2 == puVar13) {
          return (xunknown8 *)0x0;
        }
        if (*puVar13 - 0x3a < 0xfffffff6) {
          return (xunknown8 *)0x0;
        }
        iVar9 = 0;
        puVar4 = puVar1 + 4;
        do {
          puVar13 = puVar4;
          puVar12 = puVar13 + -1;
          *param_1 = (int8)puVar12;
          iVar10 = (uint8)puVar13[-2] + iVar9 * 10;
          iVar9 = iVar10 + -0x30;
          if (puVar12 == puVar2) break;
          puVar4 = puVar13 + 1;
        } while (puVar13[-1] - 0x30 < 10);
        if (puVar12 == puVar2) {
          return (xunknown8 *)0x0;
        }
        if (puVar13[-1] != 0x5f) {
          return (xunknown8 *)0x0;
        }
        uVar11 = iVar10 - 0x2f;
        *param_1 = (int8)puVar13;
      }
      else {
        uVar11 = 0;
      }
      if (puVar13 != puVar2) {
        if (*puVar13 == 0x5f) {
          uVar15 = 0;
          cVar3 = *(char *)((int8)param_1 + 0x30a);
          *param_1 = (int8)(puVar13 + 1);
        }
        else {
          if (*puVar13 - 0x3a < 0xfffffff6) {
            return (xunknown8 *)0x0;
          }
          iVar9 = 0;
          do {
            puVar4 = puVar13;
            puVar13 = puVar4 + 1;
            *param_1 = (int8)puVar13;
            iVar10 = (uint8)*puVar4 + iVar9 * 10;
            iVar9 = iVar10 + -0x30;
            if (puVar13 == puVar2) break;
          } while (*puVar13 - 0x30 < 10);
          if (puVar13 == puVar2) {
            return (xunknown8 *)0x0;
          }
          if (*puVar13 != 0x5f) {
            return (xunknown8 *)0x0;
          }
          uVar15 = iVar10 - 0x2f;
          cVar3 = *(char *)((int8)param_1 + 0x30a);
          *param_1 = (int8)(puVar4 + 2);
        }
        if (cVar3 != '\0') {
          piVar16 = (int8 *)param_1[0x266];
          iVar9 = piVar16[1];
          piVar5 = piVar16;
          if (iVar9 - 0xfd0U < 0xfffffffffffff00f || iVar9 == -0x21) {
            piVar5 = (int8 *)malloc(0x1000);
            if (piVar5 == (int8 *)0x0) goto code_r0x000caa00;
            iVar9 = 0;
            *piVar5 = (int8)piVar16;
            piVar5[1] = 0;
            param_1[0x266] = (int8)piVar5;
          }
          piVar5[1] = iVar9 + 0x20;
          pxVar14 = (xunknown8 *)((int8)piVar5 + iVar9 + 0x10);
          *pxVar14 = 0xd0548;
          *(xunknown1 *)((int8)piVar5 + iVar9 + 0x18) = 8;
          *(uint2 *)((int8)piVar5 + iVar9 + 0x19) =
               *(uint2 *)((int8)piVar5 + iVar9 + 0x19) & 0xf000 | 0x540;
          *(uint1 **)((int8)piVar5 + iVar9 + 0x20) = puVar1;
          *(int8 *)((int8)piVar5 + iVar9 + 0x28) = (int8)puVar13 - (int8)puVar1;
          return pxVar14;
        }
        if ((*(char *)((int8)param_1 + 0x309) == '\0') || (uVar11 != 0)) {
          uVar8 = param_1[0x54] - param_1[0x53] >> 3;
          if ((uVar11 < uVar8) &&
             ((piVar5 = *(int8 **)(param_1[0x53] + uVar11 * 8), piVar5 != (int8 *)0x0 &&
              (uVar15 < (uint8)(piVar5[1] - *piVar5 >> 3))))) {
            return *(xunknown8 **)(*piVar5 + uVar15 * 8);
          }
          if (uVar8 < uVar11) {
            return (xunknown8 *)0x0;
          }
          if (param_1[0x62] != uVar11) {
            return (xunknown8 *)0x0;
          }
          if (uVar11 == uVar8) {
            xStack_48 = 0;
            FUN_000b0b1c(param_1 + 0x53,&xStack_48);
          }
          piVar16 = (int8 *)param_1[0x266];
          iVar9 = piVar16[1];
          piVar5 = piVar16;
          if (iVar9 - 0xfd0U < 0xfffffffffffff00f || iVar9 == -0x21) {
            piVar5 = (int8 *)malloc(0x1000);
            if (piVar5 == (int8 *)0x0) goto code_r0x000caa00;
            iVar9 = 0;
            *piVar5 = (int8)piVar16;
            piVar5[1] = 0;
            param_1[0x266] = (int8)piVar5;
          }
          piVar5[1] = iVar9 + 0x20;
          xVar6 = strlen(0x25c16 /* "auto" */);
          pxVar14 = (xunknown8 *)((int8)piVar5 + iVar9 + 0x10);
          *pxVar14 = 0xd0548;
          *(xunknown1 *)((int8)piVar5 + iVar9 + 0x18) = 8;
          *(xunknown8 *)((int8)piVar5 + iVar9 + 0x20) = 0x25c16;
          *(xunknown8 *)((int8)piVar5 + iVar9 + 0x28) = xVar6;
          *(uint2 *)((int8)piVar5 + iVar9 + 0x19) =
               *(uint2 *)((int8)piVar5 + iVar9 + 0x19) & 0xf000 | 0x540;
          return pxVar14;
        }
        piVar16 = (int8 *)param_1[0x266];
        iVar9 = piVar16[1];
        piVar5 = piVar16;
        if (iVar9 - 0xfc0U < 0xfffffffffffff00f || iVar9 == -0x31) {
          piVar5 = (int8 *)malloc(0x1000);
          if (piVar5 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pxVar14 = (xunknown8 *)(*pcRam00000000000d4468)();
            return pxVar14;
          }
          iVar9 = 0;
          *piVar5 = (int8)piVar16;
          piVar5[1] = 0;
          param_1[0x266] = (int8)piVar5;
        }
        piVar5[1] = iVar9 + 0x30;
        pxVar14 = (xunknown8 *)((int8)piVar5 + iVar9 + 0x10);
        *pxVar14 = 0xd0628;
        *(uint8 *)((int8)piVar5 + iVar9 + 0x20) = uVar15;
        *(xunknown8 *)((int8)piVar5 + iVar9 + 0x28) = 0;
        *(xunknown1 *)((int8)piVar5 + iVar9 + 0x30) = 0;
        *(uint2 *)((int8)piVar5 + iVar9 + 0x19) =
             *(uint2 *)((int8)piVar5 + iVar9 + 0x19) & 0xf000 | 0xa80;
        piVar16 = (int8 *)param_1[0x5b];
        piVar7 = (int8 *)param_1[0x5c];
        *(xunknown1 *)((int8)piVar5 + iVar9 + 0x18) = 0x2c;
        if (piVar16 == piVar7) {
          piVar5 = (int8 *)param_1[0x5a];
          iVar9 = (int8)piVar16 - (int8)piVar5;
          if (piVar5 == param_1 + 0x5d) {
            iVar10 = malloc(iVar9 * 2);
            if (iVar10 == 0) goto code_r0x000ca7b0;
            if (piVar16 != piVar5) {
              memmove(iVar10,piVar5,iVar9);
            }
            param_1[0x5a] = iVar10;
          }
          else {
            iVar10 = realloc(piVar5);
            param_1[0x5a] = iVar10;
            if (iVar10 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar14 = (xunknown8 *)(*got_abort)();
              return pxVar14;
            }
          }
          piVar16 = (int8 *)(iVar10 + iVar9);
          param_1[0x5c] = iVar10 + (iVar9 >> 2) * 8;
        }
        param_1[0x5b] = (int8)(piVar16 + 1);
        *piVar16 = (int8)pxVar14;
        return pxVar14;
      }
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb007c  size=324 */
xunknown8 * FUN_000b007c(int8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int8 iVar3;
  int8 *piVar4;
  int8 iVar5;
  xunknown8 *pxVar6;
  int8 *piVar7;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (int8)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (int8)(pcVar2 + 2);
      iVar3 = FUN_000b0fa8();
      pxVar6 = (xunknown8 *)0x0;
      if (iVar3 != 0) {
        pcVar2 = (char *)*param_1;
        if (pcVar2 == (char *)param_1[1]) {
          return (xunknown8 *)0x0;
        }
        if (*pcVar2 != 'E') {
          return (xunknown8 *)0x0;
        }
        piVar7 = (int8 *)param_1[0x266];
        *param_1 = (int8)(pcVar2 + 1);
        iVar5 = piVar7[1];
        piVar4 = piVar7;
        if (iVar5 - 0xfb0U < 0xfffffffffffff00f || iVar5 == -0x41) {
          piVar4 = (int8 *)malloc(0x1000);
          if (piVar4 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pxVar6 = (xunknown8 *)(*pcRam00000000000d4468)();
            return pxVar6;
          }
          iVar5 = 0;
          *piVar4 = (int8)piVar7;
          piVar4[1] = 0;
          param_1[0x266] = (int8)piVar4;
        }
        piVar4[1] = iVar5 + 0x40;
        pxVar6 = (xunknown8 *)((int8)piVar4 + iVar5 + 0x10);
        *pxVar6 = 0xd0f48;
        *(xunknown1 *)((int8)piVar4 + iVar5 + 0x18) = 0x3c;
        *(int8 *)((int8)piVar4 + iVar5 + 0x30) = iVar3;
        *(xunknown8 *)((int8)piVar4 + iVar5 + 0x20) = 0x2d350;
        *(xunknown8 *)((int8)piVar4 + iVar5 + 0x28) = 8;
        *(xunknown8 *)((int8)piVar4 + iVar5 + 0x38) = 0;
        *(xunknown8 *)((int8)piVar4 + iVar5 + 0x40) = 0;
        *(uint2 *)((int8)piVar4 + iVar5 + 0x19) =
             *(uint2 *)((int8)piVar4 + iVar5 + 0x19) & 0xf000 | 0x540;
      }
      return pxVar6;
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb01c0  size=732 */
xunknown8 * FUN_000b01c0(int8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  uint1 uVar3;
  int8 *piVar4;
  xunknown8 *pxVar5;
  int8 iVar6;
  xunknown8 *pxVar7;
  uint1 *puVar8;
  int8 iVar9;
  uint4 uVar10;
  xunknown4 xVar11;
  int8 *piVar12;
  
  puVar1 = (uint1 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if ((puVar1 != puVar2) && (*puVar1 == 0x53)) {
    puVar8 = puVar1 + 1;
    *param_1 = (int8)puVar8;
    if (puVar2 != puVar8) {
      uVar3 = *puVar8;
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
        piVar12 = (int8 *)param_1[0x266];
        *param_1 = (int8)(puVar1 + 2);
        iVar9 = piVar12[1];
        piVar4 = piVar12;
        if (iVar9 - 0xfe0U < 0xfffffffffffff00f || iVar9 == -0x11) {
          piVar4 = (int8 *)malloc(0x1000);
          if (piVar4 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
            return pxVar7;
          }
          iVar9 = 0;
          *piVar4 = (int8)piVar12;
          piVar4[1] = 0;
          param_1[0x266] = (int8)piVar4;
        }
        piVar4[1] = iVar9 + 0x10;
        pxVar7 = (xunknown8 *)(iVar9 + 0x10 + (int8)piVar4);
        *(xunknown1 *)(pxVar7 + 1) = 0x30;
        *(xunknown4 *)((int8)pxVar7 + 0xc) = xVar11;
        *(uint2 *)((int8)pxVar7 + 9) = *(uint2 *)((int8)pxVar7 + 9) & 0xf000 | 0x540;
        *pxVar7 = 0xd1f78;
        pxVar5 = (xunknown8 *)FUN_000bd0c4(param_1,pxVar7);
        if (pxVar5 == pxVar7) {
          return pxVar7;
        }
        piVar4 = (int8 *)param_1[0x26];
        if (piVar4 == (int8 *)param_1[0x27]) {
          piVar12 = (int8 *)param_1[0x25];
          iVar9 = (int8)piVar4 - (int8)piVar12;
          if (piVar12 == param_1 + 0x28) {
            iVar6 = malloc(iVar9 * 2);
            if (iVar6 == 0) goto code_r0x000ca7b0;
            if (piVar4 != piVar12) {
              memmove(iVar6,piVar12,iVar9);
            }
            param_1[0x25] = iVar6;
          }
          else {
            iVar6 = realloc(piVar12);
            param_1[0x25] = iVar6;
            if (iVar6 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar7 = (xunknown8 *)(*got_abort)();
              return pxVar7;
            }
          }
          piVar4 = (int8 *)(iVar6 + iVar9);
          param_1[0x27] = iVar6 + (iVar9 >> 2) * 8;
        }
        param_1[0x26] = (int8)(piVar4 + 1);
        *piVar4 = (int8)pxVar5;
        return pxVar5;
      }
      if ((uVar10 < 0x3a) || (uVar10 - 0x41 < 0x1a)) {
        iVar9 = 0;
        while( true ) {
          uVar3 = *puVar8;
          if (uVar3 < 0x30) break;
          if (uVar3 < 0x3a) {
            iVar6 = -0x30;
          }
          else {
            if (0x19 < uVar3 - 0x41) break;
            iVar6 = -0x37;
          }
          puVar8 = puVar8 + 1;
          *param_1 = (int8)puVar8;
          iVar9 = (uint8)uVar3 + iVar9 * 0x24 + iVar6;
          if (puVar8 == puVar2) {
            return (xunknown8 *)0x0;
          }
        }
        if ((puVar8 != puVar2) && (*puVar8 == 0x5f)) {
          *param_1 = (int8)(puVar8 + 1);
          if (iVar9 + 1U < (uint8)(param_1[0x26] - param_1[0x25] >> 3)) {
            return *(xunknown8 **)(param_1[0x25] + (iVar9 + 1U) * 8);
          }
        }
      }
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb049c  size=1504 */
xunknown8 * FUN_000b049c(int8 *param_1,xunknown1 *param_2,xunknown8 *param_3,int8 param_4)

{
  char *pcVar1;
  uint1 uVar2;
  uint8 uVar3;
  xunknown8 *pxVar4;
  xunknown8 *pxVar5;
  int8 *piVar6;
  int8 iVar7;
  int8 iVar8;
  xunknown8 xVar9;
  bool bVar10;
  uint1 *puVar11;
  int8 iVar12;
  int8 iVar13;
  uint2 uVar14;
  uint4 uVar15;
  uint1 *puVar16;
  xunknown1 xVar17;
  uint1 *puVar18;
  int8 *piVar19;
  int8 iVar20;
  bool bVar21;
  xunknown1 axVar22 [16];
  int8 iStack_60;
  xunknown8 *pxStack_58;
  
  iStack_60 = param_4;
  pxStack_58 = param_3;
  uVar3 = FUN_000aec2c(param_1,&iStack_60);
  if ((uVar3 & 1) != 0) goto code_r0x000b04d8;
  puVar11 = (uint1 *)*param_1;
  puVar16 = (uint1 *)param_1[1];
  if (param_3 == (xunknown8 *)0x0) {
code_r0x000b0514:
    bVar21 = true;
    if (puVar11 == puVar16) goto code_r0x000b06a4;
code_r0x000b0520:
    if (*puVar11 == 0x4c) {
      puVar11 = puVar11 + 1;
      *param_1 = (int8)puVar11;
    }
    if ((puVar16 != puVar11) && (uVar2 = *puVar11, 0x30 < uVar2)) {
      if (uVar2 < 0x3a) {
        pxVar5 = (xunknown8 *)FUN_000af0b4(param_1);
        iVar13 = iStack_60;
      }
      else {
        if (uVar2 != 0x55) goto code_r0x000b05a0;
        pxVar5 = (xunknown8 *)FUN_000b7190(param_1,param_2);
        iVar13 = iStack_60;
      }
      goto joined_r0x000b0884;
    }
code_r0x000b05a0:
    if ((1 < (uint8)((int8)puVar16 - (int8)puVar11)) && (*(int2 *)puVar11 == 0x4344)) {
      iVar13 = param_1[2];
      iVar12 = param_1[3];
      *param_1 = (int8)(puVar11 + 2);
      iVar7 = FUN_000af0b4(param_1);
      if (iVar7 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar6 = param_1 + 5;
      do {
        piVar19 = (int8 *)param_1[3];
        if (piVar19 == (int8 *)param_1[4]) {
          iVar20 = (int8)piVar19 - param_1[2];
          if ((int8 *)param_1[2] == piVar6) {
            iVar8 = malloc(iVar20 * 2);
            if (iVar8 == 0) goto code_r0x000ca7b0;
            if (piVar19 != piVar6) {
              memcpy(iVar8,piVar6,iVar20);
            }
            param_1[2] = iVar8;
          }
          else {
            iVar8 = realloc();
            param_1[2] = iVar8;
            if (iVar8 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar5 = (xunknown8 *)(*got_abort)();
              return pxVar5;
            }
          }
          piVar19 = (int8 *)(iVar8 + iVar20);
          param_1[4] = iVar8 + (iVar20 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar19 + 1);
        *piVar19 = iVar7;
        pcVar1 = (char *)*param_1;
        if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 'E')) {
          *param_1 = (int8)(pcVar1 + 1);
          axVar22 = FUN_000adec4(param_1,iVar12 - iVar13 >> 3);
          piVar19 = (int8 *)param_1[0x266];
          iVar13 = piVar19[1];
          piVar6 = piVar19;
          if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
            piVar6 = (int8 *)malloc(0x1000);
            if (piVar6 == (int8 *)0x0) goto code_r0x000b0a70;
            iVar13 = 0;
            *piVar6 = (int8)piVar19;
            piVar6[1] = 0;
            param_1[0x266] = (int8)piVar6;
          }
          piVar6[1] = iVar13 + 0x20;
          pxVar5 = (xunknown8 *)((int8)piVar6 + iVar13 + 0x10);
          *pxVar5 = 0xd20c8;
          *(xunknown1 (*) [16])((int8)piVar6 + iVar13 + 0x20) = axVar22;
          *(xunknown1 *)((int8)piVar6 + iVar13 + 0x18) = 0x35;
          *(uint2 *)((int8)piVar6 + iVar13 + 0x19) =
               *(uint2 *)((int8)piVar6 + iVar13 + 0x19) & 0xf000 | 0x540;
          iVar13 = iStack_60;
          goto joined_r0x000b0884;
        }
        iVar7 = FUN_000af0b4(param_1);
        if (iVar7 == 0) {
          return (xunknown8 *)0x0;
        }
      } while( true );
    }
    if ((puVar16 == puVar11) || (1 < *puVar11 - 0x43)) goto code_r0x000b06a4;
    if (param_3 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    if (iStack_60 != 0) {
      return (xunknown8 *)0x0;
    }
    pxVar4 = param_3;
    if (*(char *)(param_3 + 1) == '0') {
      piVar19 = (int8 *)param_1[0x266];
      iVar13 = piVar19[1];
      piVar6 = piVar19;
      if (iVar13 - 0xfe0U < 0xfffffffffffff00f || iVar13 == -0x11) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000b0a70;
        iVar13 = 0;
        *piVar6 = (int8)piVar19;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar13 + 0x10;
      pxVar4 = (xunknown8 *)(iVar13 + 0x10 + (int8)piVar6);
      *(xunknown1 *)(pxVar4 + 1) = 0x2f;
      *(xunknown4 *)((int8)pxVar4 + 0xc) = *(xunknown4 *)((int8)param_3 + 0xc);
      *(uint2 *)((int8)pxVar4 + 9) = *(uint2 *)((int8)pxVar4 + 9) & 0xf000 | 0x540;
      *pxVar4 = 0xd2000;
      puVar11 = (uint1 *)*param_1;
      puVar16 = (uint1 *)param_1[1];
      pxStack_58 = pxVar4;
    }
    if (puVar11 != puVar16) {
      if (*puVar11 == 0x43) {
        puVar18 = puVar11 + 1;
        *param_1 = (int8)puVar18;
        if (puVar18 == puVar16) {
          bVar10 = false;
          puVar18 = puVar16;
        }
        else if (*puVar18 == 0x49) {
          bVar10 = true;
          *param_1 = (int8)(puVar11 + 2);
          puVar18 = puVar11 + 2;
        }
        else {
          bVar10 = false;
        }
        if ((puVar16 == puVar18) || (uVar15 = (uint4)*puVar18, 4 < uVar15 - 0x31))
        goto code_r0x000b04d8;
        *param_1 = (int8)(puVar18 + 1);
        if (param_2 != (xunknown1 *)0x0) {
          *param_2 = 1;
        }
        if ((bVar10) && (iVar13 = FUN_000ad294(param_1,param_2), iVar13 == 0)) {
          return (xunknown8 *)0x0;
        }
        xVar9 = 0;
      }
      else {
        if ((uint8)((int8)puVar16 - (int8)puVar11) < 2) {
          return (xunknown8 *)0x0;
        }
        if (*puVar11 != 0x44) {
          return (xunknown8 *)0x0;
        }
        uVar2 = puVar11[1];
        if (0x35 < uVar2) {
          return (xunknown8 *)0x0;
        }
        if ((1L << ((uint8)uVar2 & 0x3f) & 0x37000000000000U) == 0) {
          return (xunknown8 *)0x0;
        }
        uVar15 = (uint4)uVar2;
        *param_1 = (int8)(puVar11 + 2);
        if (param_2 != (xunknown1 *)0x0) {
          *param_2 = 1;
        }
        xVar9 = 1;
      }
      pxVar5 = (xunknown8 *)FUN_000bdaa4(param_1,&pxStack_58,xVar9,uVar15 - 0x30);
      param_3 = pxVar4;
      iVar13 = iStack_60;
      goto joined_r0x000b0884;
    }
code_r0x000b04d8:
    pxVar4 = (xunknown8 *)0x0;
  }
  else {
    if (puVar11 == puVar16) {
      bVar21 = true;
      pxVar5 = (xunknown8 *)FUN_000bc9c0(param_1,param_2);
      iVar13 = iStack_60;
      goto joined_r0x000b0884;
    }
    if (*puVar11 != 0x46) goto code_r0x000b0514;
    bVar21 = false;
    puVar11 = puVar11 + 1;
    *param_1 = (int8)puVar11;
    if (puVar11 != puVar16) goto code_r0x000b0520;
code_r0x000b06a4:
    pxVar5 = (xunknown8 *)FUN_000bc9c0(param_1,param_2);
    iVar13 = iStack_60;
joined_r0x000b0884:
    iStack_60 = iVar13;
    if ((pxVar5 == (xunknown8 *)0x0) || (iVar13 == 0)) {
      if (pxVar5 == (xunknown8 *)0x0) goto code_r0x000b04d8;
    }
    else {
      piVar19 = (int8 *)param_1[0x266];
      iVar12 = piVar19[1];
      piVar6 = piVar19;
      if (iVar12 - 0xfd0U < 0xfffffffffffff00f || iVar12 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000b0a70;
        iVar12 = 0;
        *piVar6 = (int8)piVar19;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar12 + 0x20;
      pxVar4 = (xunknown8 *)((int8)piVar6 + iVar12 + 0x10);
      *pxVar4 = 0xd21a8;
      *(int8 *)((int8)piVar6 + iVar12 + 0x20) = iVar13;
      *(xunknown8 **)((int8)piVar6 + iVar12 + 0x28) = pxVar5;
      *(xunknown1 *)((int8)piVar6 + iVar12 + 0x18) = 0x1c;
      *(uint2 *)((int8)piVar6 + iVar12 + 0x19) =
           *(uint2 *)((int8)piVar6 + iVar12 + 0x19) & 0xf000 | 0x540;
      pxVar5 = pxVar4;
    }
    pxVar5 = (xunknown8 *)FUN_000bd0c4(param_1,pxVar5);
    if (pxVar5 == (xunknown8 *)0x0) {
      bVar21 = true;
    }
    if (bVar21) {
      if (param_3 == (xunknown8 *)0x0) {
        return pxVar5;
      }
      if (pxVar5 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      piVar19 = (int8 *)param_1[0x266];
      iVar13 = piVar19[1];
      piVar6 = piVar19;
      if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) {
code_r0x000b0a70:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar5 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar5;
        }
        iVar13 = 0;
        *piVar6 = (int8)piVar19;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar13 + 0x20;
      pxVar4 = (xunknown8 *)((int8)piVar6 + iVar13 + 0x10);
      *pxVar4 = 0xd2288;
      uVar14 = *(uint2 *)((int8)piVar6 + iVar13 + 0x19);
      xVar17 = 0x18;
    }
    else {
      piVar19 = (int8 *)param_1[0x266];
      iVar13 = piVar19[1];
      piVar6 = piVar19;
      if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
        piVar6 = (int8 *)malloc(0x1000);
        if (piVar6 == (int8 *)0x0) goto code_r0x000b0a70;
        iVar13 = 0;
        *piVar6 = (int8)piVar19;
        piVar6[1] = 0;
        param_1[0x266] = (int8)piVar6;
      }
      piVar6[1] = iVar13 + 0x20;
      pxVar4 = (xunknown8 *)((int8)piVar6 + iVar13 + 0x10);
      *pxVar4 = 0xd2218;
      uVar14 = *(uint2 *)((int8)piVar6 + iVar13 + 0x19);
      xVar17 = 0x19;
    }
    pxVar4[2] = param_3;
    pxVar4[3] = pxVar5;
    *(xunknown1 *)(pxVar4 + 1) = xVar17;
    *(uint2 *)((int8)pxVar4 + 9) = uVar14 & 0xf000 | 0x540;
  }
  return pxVar4;
}

/* 0xb0a7c  size=160 */
void FUN_000b0a7c(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0548;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 8;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar4;
  return;
}

/* 0xb0b1c  size=216 */
void FUN_000b0b1c(int8 *param_1,int8 *param_2)

{
  int8 iVar1;
  int8 iVar2;
  int8 *piVar3;
  int8 *piVar4;
  
  piVar4 = (int8 *)param_1[1];
  if (piVar4 == (int8 *)param_1[2]) {
    piVar3 = (int8 *)*param_1;
    iVar2 = (int8)piVar4 - (int8)piVar3;
    if (piVar3 == param_1 + 3) {
      iVar1 = malloc(iVar2 * 2);
      if (iVar1 == 0) goto code_r0x000ca7b0;
      if (piVar4 != piVar3) {
        memmove(iVar1,piVar3,iVar2);
      }
      *param_1 = iVar1;
    }
    else {
      iVar1 = realloc(piVar3);
      *param_1 = iVar1;
      if (iVar1 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*got_abort)();
        return;
      }
    }
    piVar4 = (int8 *)(iVar1 + iVar2);
    param_1[1] = (int8)piVar4;
    param_1[2] = iVar1 + (iVar2 >> 2) * 8;
  }
  iVar2 = *param_2;
  param_1[1] = (int8)(piVar4 + 1);
  *piVar4 = iVar2;
  return;
}

/* 0xb0bf4  size=168 */
xunknown8 * FUN_000b0bf4(int8 param_1,xunknown8 param_2)

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

/* 0xb0c9c  size=160 */
bool FUN_000b0c9c(int8 param_1)

{
  uint1 uVar1;
  xunknown8 *pxVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return false;
  }
  pxVar2 = *(xunknown8 **)(param_1 + 0x18);
  *(xunknown1 *)(param_1 + 0x20) = 1;
  uVar1 = *(uint1 *)((int8)pxVar2 + 9);
  if ((uVar1 & 0xc0) == 0x80) {
    uVar1 = (**(code **)*pxVar2)(pxVar2);
    *(xunknown1 *)(param_1 + 0x20) = 0;
    return (bool)(uVar1 & 1);
  }
  *(xunknown1 *)(param_1 + 0x20) = 0;
  return uVar1 < 0x40;
}

/* 0xb0d3c  size=160 */
bool FUN_000b0d3c(int8 param_1)

{
  uint1 uVar1;
  int8 *piVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return false;
  }
  piVar2 = *(int8 **)(param_1 + 0x18);
  *(xunknown1 *)(param_1 + 0x20) = 1;
  uVar1 = *(uint1 *)((int8)piVar2 + 10);
  if ((uVar1 & 3) == 2) {
    uVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    *(xunknown1 *)(param_1 + 0x20) = 0;
    return (bool)(uVar1 & 1);
  }
  *(xunknown1 *)(param_1 + 0x20) = 0;
  return (uVar1 & 3) == 0;
}

/* 0xb0ddc  size=160 */
bool FUN_000b0ddc(int8 param_1)

{
  uint2 uVar1;
  uint1 uVar2;
  int8 *piVar3;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return false;
  }
  piVar3 = *(int8 **)(param_1 + 0x18);
  *(xunknown1 *)(param_1 + 0x20) = 1;
  uVar1 = *(uint2 *)((int8)piVar3 + 9) >> 10 & 3;
  if (uVar1 == 2) {
    uVar2 = (**(code **)(*piVar3 + 0x10))(piVar3);
    *(xunknown1 *)(param_1 + 0x20) = 0;
    return (bool)(uVar2 & 1);
  }
  *(xunknown1 *)(param_1 + 0x20) = 0;
  return uVar1 == 0;
}

/* 0xb0e7c  size=100 */
void FUN_000b0e7c(int8 param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(xunknown1 *)(param_1 + 0x20) = 1;
    (**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))(*(int8 **)(param_1 + 0x18));
    *(xunknown1 *)(param_1 + 0x20) = 0;
    return;
  }
  return;
}

/* 0xb0ee0  size=96 */
void FUN_000b0ee0(int8 param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(xunknown1 *)(param_1 + 0x20) = 1;
    (**(code **)(**(int8 **)(param_1 + 0x18) + 0x20))();
    *(xunknown1 *)(param_1 + 0x20) = 0;
    return;
  }
  return;
}

/* 0xb0f40  size=96 */
void FUN_000b0f40(int8 param_1)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(xunknown1 *)(param_1 + 0x20) = 1;
    (**(code **)(**(int8 **)(param_1 + 0x18) + 0x28))();
    *(xunknown1 *)(param_1 + 0x20) = 0;
    return;
  }
  return;
}

/* 0xb0fa0  size=8 */
void FUN_000b0fa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb0fa8  size=5136 */
/* WARNING: Type propagation algorithm not settling */

xunknown8 * FUN_000b0fa8(int8 *param_1,xunknown8 param_2,xunknown8 *param_3,uint2 *param_4)

{
  uint1 uVar1;
  char cVar2;
  uint1 uVar3;
  uint2 uVar4;
  bool bVar5;
  int8 iVar6;
  xunknown8 *pxVar7;
  int8 iVar8;
  xunknown8 *pxVar9;
  int8 **ppiVar10;
  xunknown8 xVar11;
  int4 iVar12;
  int8 iVar13;
  int2 *piVar14;
  int2 *piVar15;
  int8 iVar16;
  xunknown8 *pxVar17;
  char *pcVar18;
  xunknown1 xVar19;
  uint1 *puVar20;
  char *pcVar21;
  int2 *piVar22;
  uint1 *puVar23;
  uint8 uVar24;
  xunknown8 xVar25;
  uint1 *puVar26;
  uint8 uVar27;
  uint8 uVar28;
  uint8 uVar29;
  uint8 uVar30;
  int8 *piVar31;
  int8 *piVar32;
  int8 iVar33;
  int8 *piVar34;
  uint1 *puVar35;
  int8 iVar36;
  uint1 *puVar37;
  xunknown8 xVar38;
  xunknown1 axVar39 [16];
  xunknown1 axStack_a0 [16];
  int8 *piStack_90;
  uint8 uStack_88;
  int8 iStack_80;
  xunknown8 xStack_78;
  xunknown1 axStack_70 [16];
  
  ppiVar10 = (int8 **)axStack_a0;
  puVar35 = (uint1 *)*param_1;
  puVar37 = (uint1 *)param_1[1];
  uVar24 = (int8)puVar37 - (int8)puVar35;
  if (uVar24 < 2) {
    return (xunknown8 *)0x0;
  }
  bVar5 = *(int2 *)puVar35 == 0x7367;
  if (bVar5) {
    puVar35 = puVar35 + 2;
    uVar24 = (int8)puVar37 - (int8)puVar35;
    *param_1 = (int8)puVar35;
    if (uVar24 < 2) {
      return (xunknown8 *)0x0;
    }
    xVar19 = 1;
  }
  else {
    xVar19 = 0;
  }
  uVar27 = 0;
  uVar29 = 0x3d;
  puVar20 = puVar35 + 1;
  uVar1 = *puVar35;
  do {
    uVar30 = uVar27 + uVar29 >> 1;
    uVar3 = *(uint1 *)(uVar30 * 0x10 + 0xd0688);
    if ((uVar3 < uVar1) || ((uVar1 == uVar3 && (*(uint1 *)(uVar30 * 0x10 + 0xd0689) < *puVar20)))) {
      uVar27 = uVar30 + 1;
      uVar30 = uVar29;
    }
    uVar29 = uVar30;
  } while (uVar29 != uVar27);
  iVar13 = uVar27 * 0x10;
  if ((uVar1 == *(uint1 *)(iVar13 + 0xd0688)) && (*puVar20 == *(uint1 *)(iVar13 + 0xd0689))) {
    piVar32 = *(int8 **)(iVar13 + 0xd0690);
    puVar20 = puVar35 + 2;
    uVar1 = *(uint1 *)(iVar13 + 0xd068a);
    *param_1 = (int8)puVar20;
    uVar24 = strlen(piVar32);
    if (uVar1 < 0xb) {
      if ((uVar24 < 8) || (*piVar32 != 0x726f74617265706f)) goto code_r0x000b2364;
      uVar27 = uVar24 - 8;
      piVar34 = piVar32 + 1;
      if (uVar27 != 0) {
        if ((char)*piVar34 == ' ') {
          piVar34 = (int8 *)((int8)piVar32 + 9);
          uVar27 = uVar24 - 9;
        }
      }
    }
    else {
      piVar34 = piVar32;
      uVar27 = uVar24;
    }
    piStack_90 = piVar34;
    uStack_88 = uVar27;
    switch(uVar1) {
    case 0:
      uVar1 = *(uint1 *)(iVar13 + 0xd068b);
      iVar13 = FUN_000b0fa8(param_1);
      if (iVar13 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar31 = (int8 *)param_1[0x266];
      iVar36 = piVar31[1];
      piVar32 = piVar31;
      if (0xfffffffffffff00e < iVar36 - 0xfc0U && iVar36 != -0x31) {
code_r0x000b12c8:
        piVar32[1] = iVar36 + 0x30;
        pxVar7 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
        *pxVar7 = 0xd0ae8;
        *(xunknown1 *)((int8)piVar32 + iVar36 + 0x18) = 0x42;
        *(int8 **)((int8)piVar32 + iVar36 + 0x20) = piVar34;
        *(uint8 *)((int8)piVar32 + iVar36 + 0x28) = uVar27;
        *(int8 *)((int8)piVar32 + iVar36 + 0x30) = iVar13;
        *(uint2 *)((int8)piVar32 + iVar36 + 0x19) =
             *(uint2 *)((int8)piVar32 + iVar36 + 0x19) & 0xf000 | uVar1 >> 1 | 0x540;
        return pxVar7;
      }
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 != (int8 *)0x0) {
        iVar36 = 0;
        *piVar32 = (int8)piVar31;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
        goto code_r0x000b12c8;
      }
      goto code_r0x000caa00;
    case 1:
      if ((puVar20 == puVar37) || (*puVar20 != 0x5f)) {
        axStack_70._0_8_ = FUN_000b0fa8(param_1);
        if (axStack_70._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
        axStack_a0._0_4_ = (int4)*(char *)(iVar13 + 0xd068b) >> 1;
        pxVar7 = (xunknown8 *)FUN_000b23b8(param_1,axStack_70,&piStack_90,axStack_a0);
        return pxVar7;
      }
      cVar2 = *(char *)(iVar13 + 0xd068b);
      *param_1 = (int8)(puVar35 + 3);
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)cVar2 >> 1);
      axStack_70._0_8_ = piVar34;
      axStack_70._8_8_ = uVar27;
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pxVar7 = (xunknown8 *)FUN_000b59d4(param_1,axStack_70,axStack_a0,&iStack_80);
      return pxVar7;
    case 2:
      xStack_78 = CONCAT44((int4)*(char *)(iVar13 + 0xd068b) >> 1,(xunknown4)xStack_78);
      axStack_70._0_8_ = piVar34;
      axStack_70._8_8_ = uVar27;
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = FUN_000b0fa8(param_1);
      if (iStack_80 == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar7 = (xunknown8 *)
               FUN_000b54c4(param_1,axStack_a0,axStack_70,&iStack_80,(int8)&xStack_78 + 4);
      return pxVar7;
    case 3:
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar13 + 0xd068b) >> 1);
      pxVar7 = (xunknown8 *)FUN_000b2478(param_1,axStack_70,axStack_a0,&iStack_80);
      return pxVar7;
    case 4:
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar13 + 0xd068b) >> 1);
      pxVar7 = (xunknown8 *)FUN_000b2534(param_1,axStack_70,&piStack_90,axStack_a0,&iStack_80);
      return pxVar7;
    case 5:
      iVar36 = param_1[2];
      iVar16 = param_1[3];
      piVar32 = param_1 + 5;
      while ((puVar20 == puVar37 || (*puVar20 != 0x5f))) {
        iVar33 = FUN_000b0fa8(param_1);
        if (iVar33 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar8 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar32) {
            iVar6 = malloc(iVar8 * 2);
            if (iVar6 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar32) {
              memcpy(iVar6,piVar32,iVar8);
            }
            param_1[2] = iVar6;
          }
          else {
            iVar6 = realloc();
            param_1[2] = iVar6;
            if (iVar6 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar6 + iVar8);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar6 + (iVar8 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar33;
        puVar37 = (uint1 *)param_1[1];
        puVar20 = (uint1 *)*param_1;
      }
      *param_1 = (int8)(puVar20 + 1);
      axStack_70 = FUN_000adec4(param_1,iVar16 - iVar36 >> 3);
      iStack_80 = FUN_000abd5c(param_1);
      if (iStack_80 == 0) {
        return (xunknown8 *)0x0;
      }
      uVar24 = FUN_000ab0bc(param_1,0x30d42,2);
      iVar36 = param_1[2];
      iVar16 = param_1[3];
      if ((uVar24 & 1) != 0) {
        do {
          pcVar18 = (char *)*param_1;
          if ((pcVar18 != (char *)param_1[1]) && (*pcVar18 == 'E')) goto code_r0x000b1d14;
          iVar33 = FUN_000b0fa8(param_1);
          if (iVar33 == 0) {
            return (xunknown8 *)0x0;
          }
          piVar34 = (int8 *)param_1[3];
          if (piVar34 == (int8 *)param_1[4]) {
            iVar8 = (int8)piVar34 - param_1[2];
            if ((int8 *)param_1[2] == piVar32) {
              iVar6 = malloc(iVar8 * 2);
              if (iVar6 == 0) goto code_r0x000ca7b0;
              if (piVar34 != piVar32) {
                memcpy(iVar6,piVar32,iVar8);
              }
              param_1[2] = iVar6;
            }
            else {
              iVar6 = realloc();
              param_1[2] = iVar6;
              if (iVar6 == 0) goto code_r0x000ca7b0;
            }
            piVar34 = (int8 *)(iVar6 + iVar8);
            param_1[3] = (int8)piVar34;
            param_1[4] = iVar6 + (iVar8 >> 2) * 8;
          }
          param_1[3] = (int8)(piVar34 + 1);
          *piVar34 = iVar33;
        } while( true );
      }
      pcVar18 = (char *)*param_1;
      if ((pcVar18 != (char *)param_1[1]) && (*pcVar18 == 'E')) {
code_r0x000b1d14:
        *param_1 = (int8)(pcVar18 + 1);
        axStack_a0 = FUN_000adec4(param_1,iVar16 - iVar36 >> 3);
        xStack_78 = CONCAT44((int4)*(char *)(iVar13 + 0xd068b) >> 1,(xunknown4)xStack_78);
        pxVar7 = (xunknown8 *)
                 FUN_000b2600(param_1,axStack_70,&iStack_80,axStack_a0,xVar19,
                              (int4)*(char *)(iVar13 + 0xd068b) & 1,(int8)&xStack_78 + 4);
        return pxVar7;
      }
      break;
    case 6:
      iVar36 = FUN_000b0fa8(param_1);
      if (iVar36 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar34 = (int8 *)param_1[0x266];
      uVar1 = *(uint1 *)(iVar13 + 0xd068b);
      iVar13 = piVar34[1];
      piVar32 = piVar34;
      if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
        iVar13 = 0;
        *piVar32 = (int8)piVar34;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
      }
      piVar32[1] = iVar13 + 0x20;
      pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
      *pxVar7 = 0xd0d18;
      *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x41;
      *(int8 *)((int8)piVar32 + iVar13 + 0x20) = iVar36;
      *(xunknown1 *)((int8)piVar32 + iVar13 + 0x28) = xVar19;
      *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
           *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | uVar1 >> 1 | 0x540;
      *(uint1 *)((int8)piVar32 + iVar13 + 0x29) = uVar1 & 1;
      return pxVar7;
    case 7:
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iVar36 = param_1[2];
      iVar16 = param_1[3];
      piVar32 = param_1 + 5;
      while ((pcVar18 = (char *)*param_1, pcVar18 == (char *)param_1[1] || (*pcVar18 != 'E'))) {
        iVar33 = FUN_000b0fa8(param_1);
        if (iVar33 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar8 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar32) {
            iVar6 = malloc(iVar8 * 2);
            if (iVar6 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar32) {
              memcpy(iVar6,piVar32,iVar8);
            }
            param_1[2] = iVar6;
          }
          else {
            iVar6 = realloc();
            param_1[2] = iVar6;
            if (iVar6 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar6 + iVar8);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar6 + (iVar8 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar33;
      }
      *param_1 = (int8)(pcVar18 + 1);
      axStack_70 = FUN_000adec4(param_1,iVar16 - iVar36 >> 3);
      iVar12 = (int4)*(char *)(iVar13 + 0xd068b) >> 1;
      goto code_r0x000b1ea4;
    case 8:
      iVar36 = param_1[0x61];
      *(xunknown1 *)(param_1 + 0x61) = 0;
      axStack_a0._0_8_ = FUN_000abd5c(param_1);
      *(char *)(param_1 + 0x61) = (char)iVar36;
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pcVar18 = (char *)*param_1;
      pcVar21 = (char *)param_1[1];
      iVar36 = param_1[3] - param_1[2] >> 3;
      if (pcVar18 == pcVar21) {
code_r0x000b1ee8:
        iVar16 = FUN_000b0fa8(param_1);
        if (iVar16 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar32 = (int8 *)param_1[3];
        if (piVar32 == (int8 *)param_1[4]) {
          piVar34 = param_1 + 5;
          iVar33 = (int8)piVar32 - param_1[2];
          if ((int8 *)param_1[2] == piVar34) {
            iVar8 = malloc(iVar33 * 2);
            if (iVar8 == 0) goto code_r0x000ca7b0;
            if (piVar32 != piVar34) {
              memcpy(iVar8,piVar34,iVar33);
            }
            param_1[2] = iVar8;
          }
          else {
            iVar8 = realloc();
            param_1[2] = iVar8;
            if (iVar8 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar7 = (xunknown8 *)(*got_abort)();
              return pxVar7;
            }
          }
          piVar32 = (int8 *)(iVar8 + iVar33);
          param_1[3] = (int8)piVar32;
          param_1[4] = iVar8 + (iVar33 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar32 + 1);
        *piVar32 = iVar16;
        axStack_70 = FUN_000adec4(param_1,iVar36);
      }
      else {
        cVar2 = *pcVar18;
        if (cVar2 == '_') {
          pcVar18 = pcVar18 + 1;
          piVar32 = param_1 + 5;
          *param_1 = (int8)pcVar18;
          do {
            if ((pcVar18 != pcVar21) && (*pcVar18 == 'E')) goto code_r0x000b1ec4;
            iVar16 = FUN_000b0fa8(param_1);
            if (iVar16 == 0) {
              return (xunknown8 *)0x0;
            }
            piVar34 = (int8 *)param_1[3];
            if (piVar34 == (int8 *)param_1[4]) {
              iVar33 = (int8)piVar34 - param_1[2];
              if ((int8 *)param_1[2] == piVar32) {
                iVar8 = malloc(iVar33 * 2);
                if (iVar8 == 0) goto code_r0x000ca7b0;
                if (piVar34 != piVar32) {
                  memcpy(iVar8,piVar32,iVar33);
                }
                param_1[2] = iVar8;
              }
              else {
                iVar8 = realloc();
                param_1[2] = iVar8;
                if (iVar8 == 0) goto code_r0x000ca7b0;
              }
              piVar34 = (int8 *)(iVar8 + iVar33);
              param_1[3] = (int8)piVar34;
              param_1[4] = iVar8 + (iVar33 >> 2) * 8;
            }
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = iVar16;
            pcVar18 = (char *)*param_1;
            pcVar21 = (char *)param_1[1];
          } while( true );
        }
        if (cVar2 != 'E') goto code_r0x000b1ee8;
code_r0x000b1ec4:
        *param_1 = (int8)(pcVar18 + 1);
        axStack_70 = FUN_000adec4(param_1,iVar36);
        if (cVar2 == '_') goto code_r0x000b21a8;
      }
      if (axStack_70._8_8_ == 1) {
code_r0x000b21a8:
        iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar13 + 0xd068b) >> 1);
        pxVar7 = (xunknown8 *)FUN_000b27b4(param_1,axStack_a0,axStack_70,&iStack_80);
        return pxVar7;
      }
      break;
    case 9:
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = FUN_000b0fa8(param_1);
      if (iStack_80 == 0) {
        return (xunknown8 *)0x0;
      }
      xStack_78 = CONCAT44((int4)*(char *)(iVar13 + 0xd068b) >> 1,(xunknown4)xStack_78);
      pxVar7 = (xunknown8 *)
               FUN_000b2874(param_1,axStack_70,axStack_a0,&iStack_80,(int8)&xStack_78 + 4);
      return pxVar7;
    case 10:
      return (xunknown8 *)0x0;
    case 0xb:
      axStack_70._0_8_ = FUN_000abd5c(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar13 + 0xd068b) >> 1);
      pxVar7 = (xunknown8 *)FUN_000b293c(param_1,&piStack_90,axStack_70,axStack_a0,&iStack_80);
      return pxVar7;
    case 0xc:
      uVar1 = *(uint1 *)(iVar13 + 0xd068b);
      if ((uVar1 & 1) == 0) {
        iVar13 = FUN_000b0fa8(param_1);
      }
      else {
        iVar13 = FUN_000abd5c(param_1);
      }
      if (iVar13 != 0) {
        piVar31 = (int8 *)param_1[0x266];
        iVar36 = piVar31[1];
        piVar32 = piVar31;
        if (iVar36 - 0xfb0U < 0xfffffffffffff00f || iVar36 == -0x41) {
          piVar32 = (int8 *)malloc(0x1000);
          if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
          iVar36 = 0;
          *piVar32 = (int8)piVar31;
          piVar32[1] = 0;
          param_1[0x266] = (int8)piVar32;
        }
        piVar32[1] = iVar36 + 0x40;
        pxVar7 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
        *pxVar7 = 0xd0f48;
        *(xunknown1 *)((int8)piVar32 + iVar36 + 0x18) = 0x3c;
        *(int8 **)((int8)piVar32 + iVar36 + 0x20) = piVar34;
        *(uint8 *)((int8)piVar32 + iVar36 + 0x28) = uVar27;
        *(xunknown8 *)((int8)piVar32 + iVar36 + 0x38) = 0;
        *(xunknown8 *)((int8)piVar32 + iVar36 + 0x40) = 0;
        *(int8 *)((int8)piVar32 + iVar36 + 0x30) = iVar13;
        *(uint2 *)((int8)piVar32 + iVar36 + 0x19) =
             *(uint2 *)((int8)piVar32 + iVar36 + 0x19) & 0xf000 | (uint2)(uVar1 >> 1) | 0x540;
        return pxVar7;
      }
      break;
    default:
      *(xunknown1 *)(param_1 + 0x61) = xVar19;
      axVar39 = FUN_000c5688();
      piVar34 = *(int8 **)(axVar39._0_8_ + 0x1330);
      iVar13 = piVar34[1];
      piVar32 = piVar34;
      if (iVar13 - 0xfc0U < 0xfffffffffffff00f || iVar13 == -0x31) {
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
        iVar13 = 0;
        *piVar32 = (int8)piVar34;
        piVar32[1] = 0;
        *(int8 **)(axVar39._0_8_ + 0x1330) = piVar32;
      }
      piVar32[1] = iVar13 + 0x30;
      xVar25 = *axVar39._8_8_;
      xVar38 = param_3[1];
      xVar11 = *param_3;
      pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
      *pxVar7 = 0xd0b58;
      uVar4 = *param_4;
      *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x38;
      *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = xVar25;
      *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
           *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | uVar4 & 0x3f | 0x540;
      *(xunknown8 *)((int8)piVar32 + iVar13 + 0x30) = xVar38;
      *(xunknown8 *)((int8)piVar32 + iVar13 + 0x28) = xVar11;
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  }
  if (uVar1 == 0x66) {
    if ((*puVar20 == 0x70) ||
       (((uVar24 != 2 && (*puVar20 == 0x4c)) && (0xfffffff5 < puVar35[2] - 0x3a)))) {
      piVar15 = (int2 *)*param_1;
      puVar35 = (uint1 *)param_1[1];
      if ((uint8)((int8)puVar35 - (int8)piVar15) < 3) {
        if ((int8)puVar35 - (int8)piVar15 != 2) {
          return (xunknown8 *)0x0;
        }
      }
      else if (*piVar15 == 0x7066 && (char)piVar15[1] == 'T') {
        piVar34 = (int8 *)param_1[0x266];
        *param_1 = (int8)piVar15 + 3;
        iVar13 = piVar34[1];
        piVar32 = piVar34;
        if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
          piVar32 = (int8 *)malloc(0x1000);
          if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
          iVar13 = 0;
          *piVar32 = (int8)piVar34;
          piVar32[1] = 0;
          param_1[0x266] = (int8)piVar32;
        }
        piVar32[1] = iVar13 + 0x20;
        pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
        *pxVar7 = 0xd0548;
        *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 8;
        *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
             *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
        *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = 0x40aca;
        *(xunknown8 *)((int8)piVar32 + iVar13 + 0x28) = 4;
        return pxVar7;
      }
      if (*piVar15 != 0x7066) {
        if (*piVar15 == 0x4c66) {
          puVar37 = (uint1 *)(piVar15 + 1);
          *param_1 = (int8)puVar37;
          if ((puVar35 != puVar37) && (0xfffffff5 < *puVar37 - 0x3a)) {
            puVar20 = puVar37;
            do {
              if (*puVar20 - 0x3a < 0xfffffff6) goto code_r0x000b39a4;
              puVar20 = puVar20 + 1;
              *param_1 = (int8)puVar20;
            } while (puVar20 != puVar35);
            puVar20 = puVar35;
code_r0x000b39a4:
            if (puVar20 == puVar37) {
              return (xunknown8 *)0x0;
            }
            if (puVar20 == puVar35) {
              return (xunknown8 *)0x0;
            }
            if (*puVar20 == 0x70) {
              puVar37 = puVar20 + 1;
              *param_1 = (int8)puVar37;
              if (puVar37 != puVar35) {
                if (*puVar37 == 0x72) {
                  puVar37 = puVar20 + 2;
                  *param_1 = (int8)puVar37;
                }
                if (puVar37 != puVar35) {
                  if (*puVar37 == 0x56) {
                    puVar37 = puVar37 + 1;
                    *param_1 = (int8)puVar37;
                  }
                  if (puVar37 != puVar35) {
                    if (*puVar37 == 0x4b) {
                      puVar37 = puVar37 + 1;
                      *param_1 = (int8)puVar37;
                    }
                    if (puVar35 != puVar37) {
                      if (0xfffffff5 < *puVar37 - 0x3a) {
                        do {
                          if (*puVar37 - 0x3a < 0xfffffff6) goto code_r0x000b3c54;
                          puVar37 = puVar37 + 1;
                          *param_1 = (int8)puVar37;
                        } while (puVar37 != puVar35);
                        puVar37 = puVar35;
                      }
code_r0x000b3c54:
                      if ((puVar37 != puVar35) && (*puVar37 == 0x5f)) {
                        *param_1 = (int8)(puVar37 + 1);
                        pxVar7 = (xunknown8 *)FUN_000ba324(param_1,axStack_70 + 0x30);
                        return pxVar7;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return (xunknown8 *)0x0;
      }
      puVar37 = (uint1 *)(piVar15 + 1);
      *param_1 = (int8)puVar37;
      if (puVar37 == puVar35) {
        return (xunknown8 *)0x0;
      }
      if (*puVar37 == 0x72) {
        puVar37 = (uint1 *)((int8)piVar15 + 3);
        *param_1 = (int8)puVar37;
      }
      if (puVar37 == puVar35) {
        return (xunknown8 *)0x0;
      }
      if (*puVar37 == 0x56) {
        puVar37 = puVar37 + 1;
        *param_1 = (int8)puVar37;
      }
      if (puVar37 == puVar35) {
        return (xunknown8 *)0x0;
      }
      if (*puVar37 == 0x4b) {
        puVar37 = puVar37 + 1;
        *param_1 = (int8)puVar37;
      }
      if (puVar35 == puVar37) {
        return (xunknown8 *)0x0;
      }
      puVar20 = puVar37;
      if (*puVar37 - 0x3a < 0xfffffff6) {
        iVar13 = 0;
        puVar37 = (uint1 *)0x0;
      }
      else {
        puVar23 = puVar37;
        do {
          if (*puVar20 - 0x3a < 0xfffffff6) goto code_r0x000b3b7c;
          puVar20 = puVar20 + 1;
          puVar23 = puVar23 + 1;
          *param_1 = (int8)puVar20;
        } while (puVar20 != puVar35);
        puVar23 = puVar35;
        puVar20 = puVar35;
code_r0x000b3b7c:
        iVar13 = (int8)puVar23 - (int8)puVar37;
      }
      if (puVar20 == puVar35) {
        return (xunknown8 *)0x0;
      }
      if (*puVar20 != 0x5f) {
        return (xunknown8 *)0x0;
      }
      piVar34 = (int8 *)param_1[0x266];
      *param_1 = (int8)(puVar20 + 1);
      iVar36 = piVar34[1];
      piVar32 = piVar34;
      if (iVar36 - 0xfd0U < 0xfffffffffffff00f || iVar36 == -0x21) {
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
        iVar36 = 0;
        *piVar32 = (int8)piVar34;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
      }
      piVar32[1] = iVar36 + 0x20;
      pxVar7 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
      *pxVar7 = 0xd16b8;
      *(uint1 **)((int8)piVar32 + iVar36 + 0x20) = puVar37;
      *(int8 *)((int8)piVar32 + iVar36 + 0x28) = iVar13;
      *(xunknown1 *)((int8)piVar32 + iVar36 + 0x18) = 0x43;
      *(uint2 *)((int8)piVar32 + iVar36 + 0x19) =
           *(uint2 *)((int8)piVar32 + iVar36 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    }
    if (puVar35 == puVar37) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)puVar20;
    if (puVar37 == puVar20) {
      return (xunknown8 *)0x0;
    }
    uVar24 = (uint8)(*puVar20 - 0x4c);
    if (0x26 < *puVar20 - 0x4c) {
      return (xunknown8 *)0x0;
    }
    if ((0x4100000041U >> (uVar24 & 0x3f) & 1) == 0) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)(puVar35 + 2);
    if ((uint8)((int8)puVar37 - (int8)(puVar35 + 2)) < 2) {
      return (xunknown8 *)0x0;
    }
    uVar27 = 0;
    uVar1 = puVar35[2];
    uVar30 = 0x3fffffffbfU >> (uVar24 & 0x3f) & 1;
    uVar29 = 0x3d;
    do {
      uVar28 = uVar27 + uVar29 >> 1;
      uVar3 = *(uint1 *)(uVar28 * 0x10 + 0xd0688);
      if ((uVar3 < uVar1) ||
         ((uVar1 == uVar3 && (*(uint1 *)(uVar28 * 0x10 + 0xd0689) < puVar35[3])))) {
        uVar27 = uVar28 + 1;
        uVar28 = uVar29;
      }
      uVar29 = uVar28;
    } while (uVar29 != uVar27);
    iVar13 = uVar27 * 0x10;
    if (uVar1 != *(uint1 *)(iVar13 + 0xd0688)) {
      return (xunknown8 *)0x0;
    }
    if (puVar35[3] != *(uint1 *)(iVar13 + 0xd0689)) {
      return (xunknown8 *)0x0;
    }
    cVar2 = *(char *)(iVar13 + 0xd068a);
    *param_1 = (int8)(puVar35 + 4);
    if (cVar2 != '\x02') {
      if (cVar2 != '\x04') {
        return (xunknown8 *)0x0;
      }
      iVar16 = *(int8 *)(iVar13 + 0xd0690);
      iVar36 = strlen(iVar16);
      if (*(char *)(iVar16 + iVar36 + -1) != '*') {
        return (xunknown8 *)0x0;
      }
    }
    iVar36 = FUN_000b0fa8(param_1);
    if (iVar36 == 0) {
      return (xunknown8 *)0x0;
    }
    iVar16 = iVar36;
    if ((0x3effffffffU >> (uVar24 & 0x3f) & 1) == 0) {
      iVar33 = 0;
    }
    else {
      iVar33 = FUN_000b0fa8(param_1);
      if (iVar33 == 0) {
        return (xunknown8 *)0x0;
      }
      if (uVar30 != 0) {
        iVar16 = iVar33;
        iVar33 = iVar36;
      }
    }
    piVar32 = *(int8 **)(iVar13 + 0xd0690);
    uVar24 = strlen(piVar32);
    if ((7 < uVar24) && (*piVar32 == 0x726f74617265706f)) {
      iVar13 = uVar24 - 8;
      piVar34 = piVar32 + 1;
      if ((iVar13 != 0) && ((char)*piVar34 == ' ')) {
        piVar34 = (int8 *)((int8)piVar32 + 9);
        iVar13 = uVar24 - 9;
      }
      piVar31 = (int8 *)param_1[0x266];
      iVar36 = piVar31[1];
      piVar32 = piVar31;
      if (iVar36 - 0xfb0U < 0xfffffffffffff00f || iVar36 == -0x41) {
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
        iVar36 = 0;
        *piVar32 = (int8)piVar31;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
      }
      piVar32[1] = iVar36 + 0x40;
      pxVar7 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
      *pxVar7 = 0xd1728;
      *(xunknown1 *)((int8)piVar32 + iVar36 + 0x18) = 0x47;
      *(int8 *)((int8)piVar32 + iVar36 + 0x20) = iVar16;
      *(int8 *)((int8)piVar32 + iVar36 + 0x28) = iVar33;
      *(int8 **)((int8)piVar32 + iVar36 + 0x30) = piVar34;
      *(int8 *)((int8)piVar32 + iVar36 + 0x38) = iVar13;
      *(uint2 *)((int8)piVar32 + iVar36 + 0x19) =
           *(uint2 *)((int8)piVar32 + iVar36 + 0x19) & 0xf000 | 0x540;
      *(char *)((int8)piVar32 + iVar36 + 0x40) = (char)uVar30;
      return pxVar7;
    }
code_r0x000b2364:
    FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0xb4a,0x2d36d /* "operator name does not start with 'operator'" */);
    goto code_r0x000ca7b0;
  }
  if (uVar1 == 0x54) {
    puVar35 = (uint1 *)*param_1;
    puVar37 = (uint1 *)param_1[1];
    if ((puVar35 == puVar37) || (*puVar35 != 0x54)) {
      return (xunknown8 *)0x0;
    }
    puVar20 = puVar35 + 1;
    *param_1 = (int8)puVar20;
    if (puVar20 == puVar37) {
      return (xunknown8 *)0x0;
    }
    if (*puVar20 == 0x4c) {
      puVar20 = puVar35 + 2;
      *param_1 = (int8)puVar20;
      if (puVar37 == puVar20) {
        return (xunknown8 *)0x0;
      }
      if (*puVar20 - 0x3a < 0xfffffff6) {
        return (xunknown8 *)0x0;
      }
      iVar13 = 0;
      puVar23 = puVar35 + 4;
      do {
        puVar20 = puVar23;
        puVar26 = puVar20 + -1;
        *param_1 = (int8)puVar26;
        iVar36 = (uint8)puVar20[-2] + iVar13 * 10;
        iVar13 = iVar36 + -0x30;
        if (puVar26 == puVar37) break;
        puVar23 = puVar20 + 1;
      } while (puVar20[-1] - 0x30 < 10);
      if (puVar26 == puVar37) {
        return (xunknown8 *)0x0;
      }
      if (puVar20[-1] != 0x5f) {
        return (xunknown8 *)0x0;
      }
      uVar24 = iVar36 - 0x2f;
      *param_1 = (int8)puVar20;
    }
    else {
      uVar24 = 0;
    }
    if (puVar20 == puVar37) {
      return (xunknown8 *)0x0;
    }
    if (*puVar20 == 0x5f) {
      uVar27 = 0;
      cVar2 = *(char *)((int8)param_1 + 0x30a);
      *param_1 = (int8)(puVar20 + 1);
    }
    else {
      if (*puVar20 - 0x3a < 0xfffffff6) {
        return (xunknown8 *)0x0;
      }
      iVar13 = 0;
      do {
        puVar23 = puVar20;
        puVar20 = puVar23 + 1;
        *param_1 = (int8)puVar20;
        iVar36 = (uint8)*puVar23 + iVar13 * 10;
        iVar13 = iVar36 + -0x30;
        if (puVar20 == puVar37) break;
      } while (*puVar20 - 0x30 < 10);
      if (puVar20 == puVar37) {
        return (xunknown8 *)0x0;
      }
      if (*puVar20 != 0x5f) {
        return (xunknown8 *)0x0;
      }
      uVar27 = iVar36 - 0x2f;
      cVar2 = *(char *)((int8)param_1 + 0x30a);
      *param_1 = (int8)(puVar23 + 2);
    }
    if (cVar2 != '\0') {
      piVar34 = (int8 *)param_1[0x266];
      iVar13 = piVar34[1];
      piVar32 = piVar34;
      if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
        iVar13 = 0;
        *piVar32 = (int8)piVar34;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
      }
      piVar32[1] = iVar13 + 0x20;
      pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
      *pxVar7 = 0xd0548;
      *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 8;
      *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
           *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
      *(uint1 **)((int8)piVar32 + iVar13 + 0x20) = puVar35;
      *(int8 *)((int8)piVar32 + iVar13 + 0x28) = (int8)puVar20 - (int8)puVar35;
      return pxVar7;
    }
    if ((*(char *)((int8)param_1 + 0x309) == '\0') || (uVar24 != 0)) {
      uVar29 = param_1[0x54] - param_1[0x53] >> 3;
      if ((uVar24 < uVar29) &&
         ((piVar32 = *(int8 **)(param_1[0x53] + uVar24 * 8), piVar32 != (int8 *)0x0 &&
          (uVar27 < (uint8)(piVar32[1] - *piVar32 >> 3))))) {
        return *(xunknown8 **)(*piVar32 + uVar27 * 8);
      }
      if (uVar29 < uVar24) {
        return (xunknown8 *)0x0;
      }
      if (param_1[0x62] != uVar24) {
        return (xunknown8 *)0x0;
      }
      if (uVar24 == uVar29) {
        FUN_000b0b1c(param_1 + 0x53,axStack_70 + 0x28);
      }
      piVar34 = (int8 *)param_1[0x266];
      iVar13 = piVar34[1];
      piVar32 = piVar34;
      if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
        iVar13 = 0;
        *piVar32 = (int8)piVar34;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
      }
      piVar32[1] = iVar13 + 0x20;
      xVar25 = strlen(0x25c16 /* "auto" */);
      pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
      *pxVar7 = 0xd0548;
      *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = 0x25c16;
      *(xunknown8 *)((int8)piVar32 + iVar13 + 0x28) = xVar25;
      *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
           *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    }
    piVar34 = (int8 *)param_1[0x266];
    iVar13 = piVar34[1];
    piVar32 = piVar34;
    if (iVar13 - 0xfc0U < 0xfffffffffffff00f || iVar13 == -0x31) {
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
      iVar13 = 0;
      *piVar32 = (int8)piVar34;
      piVar32[1] = 0;
      param_1[0x266] = (int8)piVar32;
    }
    piVar32[1] = iVar13 + 0x30;
    pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
    *pxVar7 = 0xd0628;
    *(uint8 *)((int8)piVar32 + iVar13 + 0x20) = uVar27;
    *(xunknown8 *)((int8)piVar32 + iVar13 + 0x28) = 0;
    *(xunknown1 *)((int8)piVar32 + iVar13 + 0x30) = 0;
    *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
         *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0xa80;
    piVar34 = (int8 *)param_1[0x5b];
    piVar31 = (int8 *)param_1[0x5c];
    *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x2c;
    if (piVar34 == piVar31) {
      piVar32 = (int8 *)param_1[0x5a];
      iVar13 = (int8)piVar34 - (int8)piVar32;
      if (piVar32 == param_1 + 0x5d) {
        iVar36 = malloc(iVar13 * 2);
        if (iVar36 == 0) goto code_r0x000ca7b0;
        if (piVar34 != piVar32) {
          memmove(iVar36,piVar32,iVar13);
        }
        param_1[0x5a] = iVar36;
      }
      else {
        iVar36 = realloc(piVar32);
        param_1[0x5a] = iVar36;
        if (iVar36 == 0) goto code_r0x000ca7b0;
      }
      piVar34 = (int8 *)(iVar36 + iVar13);
      param_1[0x5c] = iVar36 + (iVar13 >> 2) * 8;
    }
    param_1[0x5b] = (int8)(piVar34 + 1);
    *piVar34 = (int8)pxVar7;
    return pxVar7;
  }
  if (uVar1 != 0x4c) {
    if (*(int2 *)puVar35 == 0x6c69) {
      iVar13 = param_1[2];
      iVar36 = param_1[3];
      piVar32 = param_1 + 5;
      puVar35 = puVar35 + 2;
      *param_1 = (int8)puVar35;
      do {
        if ((puVar35 != puVar37) && (*puVar35 == 0x45)) {
          *param_1 = (int8)(puVar35 + 1);
          axStack_70 = FUN_000adec4(param_1,iVar36 - iVar13 >> 3);
          pxVar7 = (xunknown8 *)FUN_000b3f3c(param_1,axStack_70);
          return pxVar7;
        }
        iVar16 = FUN_000b3ca8(param_1);
        if (iVar16 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar33 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar32) {
            iVar8 = malloc(iVar33 * 2);
            if (iVar8 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar32) {
              memcpy(iVar8,piVar32,iVar33);
            }
            param_1[2] = iVar8;
          }
          else {
            iVar8 = realloc();
            param_1[2] = iVar8;
            if (iVar8 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar8 + iVar33);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar8 + (iVar33 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar16;
        puVar35 = (uint1 *)*param_1;
        puVar37 = (uint1 *)param_1[1];
      } while( true );
    }
    uVar24 = (int8)puVar37 - (int8)puVar35;
    if (1 < uVar24) {
      if (*(int2 *)puVar35 == 0x636d) {
        *param_1 = (int8)(puVar35 + 2);
        iVar13 = FUN_000abd5c();
        if ((iVar13 == 0) || (iVar36 = FUN_000b0fa8(param_1), iVar36 == 0)) {
          return (xunknown8 *)0x0;
        }
        puVar37 = (uint1 *)*param_1;
        puVar20 = (uint1 *)param_1[1];
        puVar35 = puVar37;
        if ((puVar37 != puVar20) && (*puVar37 == 0x6e)) {
          puVar35 = puVar37 + 1;
          *param_1 = (int8)puVar35;
        }
        if (puVar20 != puVar35) {
          if (*puVar35 - 0x3a < 0xfffffff6) {
            puVar37 = (uint1 *)0x0;
            iVar16 = 0;
          }
          else {
            do {
              if (*puVar35 - 0x3a < 0xfffffff6) goto code_r0x000b408c;
              puVar35 = puVar35 + 1;
              *param_1 = (int8)puVar35;
            } while (puVar35 != puVar20);
            puVar35 = puVar20;
code_r0x000b408c:
            iVar16 = (int8)puVar35 - (int8)puVar37;
          }
          if ((puVar35 != puVar20) && (*puVar35 == 0x45)) {
            piVar34 = (int8 *)param_1[0x266];
            *param_1 = (int8)(puVar35 + 1);
            iVar33 = piVar34[1];
            piVar32 = piVar34;
            if (iVar33 - 0xfc0U < 0xfffffffffffff00f || iVar33 == -0x31) {
              piVar32 = (int8 *)malloc(0x1000);
              if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
              iVar33 = 0;
              *piVar32 = (int8)piVar34;
              piVar32[1] = 0;
              param_1[0x266] = (int8)piVar32;
            }
            piVar32[1] = iVar33 + 0x30;
            pxVar7 = (xunknown8 *)((int8)piVar32 + iVar33 + 0x10);
            *pxVar7 = 0xd1958;
            *(xunknown1 *)((int8)piVar32 + iVar33 + 0x18) = 0x45;
            *(int8 *)((int8)piVar32 + iVar33 + 0x20) = iVar13;
            *(int8 *)((int8)piVar32 + iVar33 + 0x28) = iVar36;
            *(uint1 **)((int8)piVar32 + iVar33 + 0x30) = puVar37;
            *(int8 *)((int8)piVar32 + iVar33 + 0x38) = iVar16;
            *(uint2 *)((int8)piVar32 + iVar33 + 0x19) =
                 *(uint2 *)((int8)piVar32 + iVar33 + 0x19) & 0xf000 | 0x542;
            return pxVar7;
          }
        }
        return (xunknown8 *)0x0;
      }
      if (*(int2 *)puVar35 == 0x786e) {
        *param_1 = (int8)(puVar35 + 2);
        axStack_70._0_8_ = FUN_000b0fa8(param_1);
        if (axStack_70._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
        piStack_90 = (int8 *)CONCAT44(piStack_90._4_4_,2);
        pxVar7 = (xunknown8 *)FUN_000b415c(param_1,axStack_70,&piStack_90);
        return pxVar7;
      }
    }
    if (((puVar37 == puVar35) || (uVar24 < 2)) || (uVar1 != 0x72)) {
      if (1 < uVar24) goto code_r0x000b14b0;
    }
    else {
      if ((*puVar20 | 0x20) == 0x71) {
        piVar15 = (int2 *)*param_1;
        piVar22 = (int2 *)param_1[1];
        if ((uint8)((int8)piVar22 - (int8)piVar15) < 2) {
          return (xunknown8 *)0x0;
        }
        if (*piVar15 == 0x5172) {
          iVar13 = param_1[2];
          iVar36 = param_1[3];
          piVar15 = piVar15 + 1;
          piVar32 = param_1 + 5;
          *param_1 = (int8)piVar15;
          while ((piVar15 == piVar22 || ((char)*piVar15 != '_'))) {
            iVar16 = FUN_000abd5c(param_1);
            if (iVar16 == 0) {
              return (xunknown8 *)0x0;
            }
            piVar34 = (int8 *)param_1[3];
            if (piVar34 == (int8 *)param_1[4]) {
              iVar33 = (int8)piVar34 - param_1[2];
              if ((int8 *)param_1[2] == piVar32) {
                iVar8 = malloc(iVar33 * 2);
                if (iVar8 == 0) goto code_r0x000ca7b0;
                if (piVar34 != piVar32) {
                  memcpy(iVar8,piVar32,iVar33);
                }
                param_1[2] = iVar8;
              }
              else {
                iVar8 = realloc();
                param_1[2] = iVar8;
                if (iVar8 == 0) goto code_r0x000ca7b0;
              }
              piVar34 = (int8 *)(iVar8 + iVar33);
              param_1[4] = iVar8 + (iVar33 >> 2) * 8;
            }
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = iVar16;
            piVar22 = (int2 *)param_1[1];
            piVar15 = (int2 *)*param_1;
          }
          *param_1 = (int8)((int8)piVar15 + 1);
          axVar39 = FUN_000adec4(param_1,iVar36 - iVar13 >> 3);
          piVar15 = (int2 *)*param_1;
          if (piVar15 == (int2 *)param_1[1]) {
            return (xunknown8 *)0x0;
          }
        }
        else {
          if (*piVar15 != 0x7172) {
            return (xunknown8 *)0x0;
          }
          axVar39 = ZEXT816(0);
          piVar15 = piVar15 + 1;
          *param_1 = (int8)piVar15;
          if (piVar15 == piVar22) {
            return (xunknown8 *)0x0;
          }
        }
        piVar32 = param_1 + 5;
        axStack_70._8_8_ = param_1[3] - param_1[2] >> 3;
        do {
          xStack_78 = axVar39._8_8_;
          axStack_70._0_8_ = axVar39._0_8_;
          if ((char)*piVar15 == 'X') {
            *param_1 = (int8)((int8)piVar15 + 1);
            iVar13 = FUN_000b0fa8(param_1);
            if (iVar13 == 0) {
              return (xunknown8 *)0x0;
            }
            pcVar18 = (char *)*param_1;
            pcVar21 = (char *)param_1[1];
            if ((pcVar18 == pcVar21) || (*pcVar18 != 'N')) {
              xVar19 = 0;
              if (pcVar18 != pcVar21) goto code_r0x000b44a0;
code_r0x000b441c:
              iVar36 = 0;
code_r0x000b44c8:
              piVar31 = (int8 *)param_1[0x266];
              iVar16 = piVar31[1];
              piVar34 = piVar31;
              if (iVar16 - 0xfc0U < 0xfffffffffffff00f || iVar16 == -0x31) {
code_r0x000b45b0:
                piVar31 = (int8 *)malloc(0x1000);
                if (piVar31 == (int8 *)0x0) goto code_r0x000caa00;
                iVar16 = 0;
                *piVar31 = (int8)piVar34;
                piVar31[1] = 0;
                param_1[0x266] = (int8)piVar31;
              }
            }
            else {
              pcVar18 = pcVar18 + 1;
              xVar19 = 1;
              *param_1 = (int8)pcVar18;
              if (pcVar18 == pcVar21) goto code_r0x000b441c;
code_r0x000b44a0:
              if (*pcVar18 == 'R') {
                *param_1 = (int8)(pcVar18 + 1);
                iVar36 = FUN_000ad294(param_1,0);
                if (iVar36 == 0) {
                  return (xunknown8 *)0x0;
                }
                goto code_r0x000b44c8;
              }
              iVar36 = 0;
              piVar31 = (int8 *)param_1[0x266];
              iVar16 = piVar31[1];
              piVar34 = piVar31;
              if (iVar16 - 0xfc0U < 0xfffffffffffff00f || iVar16 == -0x31) goto code_r0x000b45b0;
            }
            piVar31[1] = iVar16 + 0x30;
            pxVar7 = (xunknown8 *)((int8)piVar31 + iVar16 + 0x10);
            *pxVar7 = 0xd19c8;
            *(xunknown1 *)((int8)piVar31 + iVar16 + 0x18) = 0x54;
            *(int8 *)((int8)piVar31 + iVar16 + 0x20) = iVar13;
            *(xunknown1 *)((int8)piVar31 + iVar16 + 0x28) = xVar19;
            *(uint2 *)((int8)piVar31 + iVar16 + 0x19) =
                 *(uint2 *)((int8)piVar31 + iVar16 + 0x19) & 0xf000 | 0x540;
            *(int8 *)((int8)piVar31 + iVar16 + 0x30) = iVar36;
            piVar34 = (int8 *)param_1[3];
            if (piVar34 == (int8 *)param_1[4]) goto code_r0x000b4574;
code_r0x000b4608:
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = (int8)pxVar7;
            piVar15 = (int2 *)*param_1;
            piVar22 = (int2 *)param_1[1];
            if (piVar15 != piVar22) {
code_r0x000b4674:
              if ((char)*piVar15 == 'E') {
                *param_1 = (int8)((int8)piVar15 + 1);
                axVar39 = FUN_000adec4(param_1,axStack_70._8_8_);
                piVar34 = (int8 *)param_1[0x266];
                iVar13 = piVar34[1];
                piVar32 = piVar34;
                if (iVar13 - 0xfc0U < 0xfffffffffffff00f || iVar13 == -0x31) {
                  piVar32 = (int8 *)malloc(0x1000);
                  if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
                  iVar13 = 0;
                  *piVar32 = (int8)piVar34;
                  piVar32[1] = 0;
                  param_1[0x266] = (int8)piVar32;
                }
                piVar32[1] = iVar13 + 0x30;
                pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
                *pxVar7 = 0xd1b18;
                *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x53;
                *(xunknown1 (*) [16])((int8)piVar32 + iVar13 + 0x30) = axVar39;
                *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = axStack_70._0_8_;
                *(int8 *)((int8)piVar32 + iVar13 + 0x28) = xStack_78;
                *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
                     *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
                return pxVar7;
              }
            }
          }
          else {
            if ((char)*piVar15 == 'T') {
              *param_1 = (int8)((int8)piVar15 + 1);
              iVar13 = FUN_000abd5c(param_1);
              if (iVar13 == 0) {
                return (xunknown8 *)0x0;
              }
              piVar31 = (int8 *)param_1[0x266];
              iVar36 = piVar31[1];
              piVar34 = piVar31;
              if (iVar36 - 0xfd0U < 0xfffffffffffff00f || iVar36 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (int8 *)0x0) goto code_r0x000caa00;
                iVar36 = 0;
                *piVar34 = (int8)piVar31;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              iVar16 = (int8)piVar34 + iVar36;
              xVar25 = 0xd1a38;
              piVar34[1] = iVar36 + 0x20;
              xVar19 = 0x55;
            }
            else {
              if ((char)*piVar15 != 'Q') {
                return (xunknown8 *)0x0;
              }
              *param_1 = (int8)((int8)piVar15 + 1);
              iVar13 = FUN_000b0fa8(param_1);
              if (iVar13 == 0) {
                return (xunknown8 *)0x0;
              }
              piVar31 = (int8 *)param_1[0x266];
              iVar36 = piVar31[1];
              piVar34 = piVar31;
              if (iVar36 - 0xfd0U < 0xfffffffffffff00f || iVar36 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (int8 *)0x0) goto code_r0x000caa00;
                iVar36 = 0;
                *piVar34 = (int8)piVar31;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              iVar16 = (int8)piVar34 + iVar36;
              xVar25 = 0xd1aa8;
              piVar34[1] = iVar36 + 0x20;
              xVar19 = 0x56;
            }
            pxVar7 = (xunknown8 *)(iVar16 + 0x10);
            *pxVar7 = xVar25;
            *(xunknown1 *)(iVar16 + 0x18) = xVar19;
            *(uint2 *)(iVar16 + 0x19) = *(uint2 *)(iVar16 + 0x19) & 0xf000 | 0x540;
            *(int8 *)(iVar16 + 0x20) = iVar13;
            piVar34 = (int8 *)param_1[3];
            if (piVar34 != (int8 *)param_1[4]) goto code_r0x000b4608;
code_r0x000b4574:
            iVar13 = (int8)piVar34 - param_1[2];
            if ((int8 *)param_1[2] == piVar32) {
              iVar36 = malloc(iVar13 * 2);
              if (iVar36 == 0) goto code_r0x000ca7b0;
              if (piVar34 != piVar32) {
                memcpy(iVar36,piVar32,iVar13);
              }
              param_1[2] = iVar36;
            }
            else {
              iVar36 = realloc();
              param_1[2] = iVar36;
              if (iVar36 == 0) goto code_r0x000ca7b0;
            }
            param_1[3] = (int8)((xunknown8 *)(iVar36 + iVar13) + 1);
            param_1[4] = iVar36 + (iVar13 >> 2) * 8;
            *(xunknown8 *)(iVar36 + iVar13) = pxVar7;
            piVar15 = (int2 *)*param_1;
            piVar22 = (int2 *)param_1[1];
            if (piVar15 != piVar22) goto code_r0x000b4674;
          }
          axVar39._8_8_ = xStack_78;
          axVar39._0_8_ = axStack_70._0_8_;
          if (piVar15 == piVar22) {
            return (xunknown8 *)0x0;
          }
        } while( true );
      }
code_r0x000b14b0:
      if (*(int2 *)puVar35 == 0x6f73) {
        *param_1 = (int8)(puVar35 + 2);
        axStack_70._8_8_ = FUN_000abd5c();
        if ((axStack_70._8_8_ == 0) || (xStack_78 = FUN_000b0fa8(param_1), xStack_78 == 0)) {
          return (xunknown8 *)0x0;
        }
        puVar37 = (uint1 *)*param_1;
        puVar20 = (uint1 *)param_1[1];
        puVar35 = puVar37;
        if ((puVar37 != puVar20) && (*puVar37 == 0x6e)) {
          puVar35 = puVar37 + 1;
          *param_1 = (int8)puVar35;
        }
        if (puVar20 == puVar35) {
          return (xunknown8 *)0x0;
        }
        if (*puVar35 - 0x3a < 0xfffffff6) {
          puVar37 = (uint1 *)0x0;
          iStack_80 = 0;
        }
        else {
          do {
            if (*puVar35 - 0x3a < 0xfffffff6) goto code_r0x000b47dc;
            puVar35 = puVar35 + 1;
            *param_1 = (int8)puVar35;
          } while (puVar35 != puVar20);
          puVar35 = puVar20;
code_r0x000b47dc:
          iStack_80 = (int8)puVar35 - (int8)puVar37;
        }
        if (puVar35 == puVar20) {
          return (xunknown8 *)0x0;
        }
        piVar32 = param_1 + 5;
        axStack_70._0_8_ = param_1[3] - param_1[2] >> 3;
        while (*puVar35 == 0x5f) {
          puVar35 = puVar35 + 1;
          *param_1 = (int8)puVar35;
          if ((puVar20 == puVar35) || (*puVar35 - 0x3a < 0xfffffff6)) {
            puVar35 = (uint1 *)0x0;
            iVar36 = 0;
            piVar34 = (int8 *)param_1[0x266];
            iVar13 = piVar34[1];
            if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) goto code_r0x000b48b8;
          }
          else {
            puVar23 = puVar35;
            do {
              if (*puVar23 - 0x3a < 0xfffffff6) goto code_r0x000b48a0;
              puVar23 = puVar23 + 1;
              *param_1 = (int8)puVar23;
            } while (puVar23 != puVar20);
            puVar23 = puVar20;
code_r0x000b48a0:
            iVar36 = (int8)puVar23 - (int8)puVar35;
            piVar34 = (int8 *)param_1[0x266];
            iVar13 = piVar34[1];
            if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
code_r0x000b48b8:
              piVar31 = (int8 *)malloc(0x1000);
              if (piVar31 == (int8 *)0x0) goto code_r0x000caa00;
              iVar13 = 0;
              *piVar31 = (int8)piVar34;
              piVar31[1] = 0;
              param_1[0x266] = (int8)piVar31;
              piVar34 = piVar31;
            }
          }
          piVar34[1] = iVar13 + 0x20;
          pxVar7 = (xunknown8 *)((int8)piVar34 + iVar13 + 0x10);
          *pxVar7 = 0xd0548;
          *(uint1 **)((int8)piVar34 + iVar13 + 0x20) = puVar35;
          *(int8 *)((int8)piVar34 + iVar13 + 0x28) = iVar36;
          *(xunknown1 *)((int8)piVar34 + iVar13 + 0x18) = 8;
          *(uint2 *)((int8)piVar34 + iVar13 + 0x19) =
               *(uint2 *)((int8)piVar34 + iVar13 + 0x19) & 0xf000 | 0x540;
          piVar34 = (int8 *)param_1[3];
          if (piVar34 == (int8 *)param_1[4]) {
            iVar13 = (int8)piVar34 - param_1[2];
            if ((int8 *)param_1[2] == piVar32) {
              iVar36 = malloc(iVar13 * 2);
              if (iVar36 == 0) goto code_r0x000ca7b0;
              if (piVar34 != piVar32) {
                memcpy(iVar36,piVar32,iVar13);
              }
              param_1[2] = iVar36;
            }
            else {
              iVar36 = realloc();
              param_1[2] = iVar36;
              if (iVar36 == 0) goto code_r0x000ca7b0;
            }
            param_1[3] = (int8)((xunknown8 *)(iVar36 + iVar13) + 1);
            param_1[4] = iVar36 + (iVar13 >> 2) * 8;
            *(xunknown8 *)(iVar36 + iVar13) = pxVar7;
            puVar35 = (uint1 *)*param_1;
            puVar20 = (uint1 *)param_1[1];
            if (puVar35 == puVar20) {
              return (xunknown8 *)0x0;
            }
          }
          else {
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = (int8)pxVar7;
            puVar35 = (uint1 *)*param_1;
            puVar20 = (uint1 *)param_1[1];
            if (puVar35 == puVar20) {
              return (xunknown8 *)0x0;
            }
          }
        }
        if ((puVar35 == puVar20) || (*puVar35 != 0x70)) {
          xVar19 = 0;
        }
        else {
          puVar35 = puVar35 + 1;
          xVar19 = 1;
          *param_1 = (int8)puVar35;
        }
        if (puVar35 == puVar20) {
          return (xunknown8 *)0x0;
        }
        if (*puVar35 != 0x45) {
          return (xunknown8 *)0x0;
        }
        *param_1 = (int8)(puVar35 + 1);
        axVar39 = FUN_000adec4(param_1,axStack_70._0_8_);
        piVar34 = (int8 *)param_1[0x266];
        iVar13 = piVar34[1];
        piVar32 = piVar34;
        if (0xfffffffffffff00e < iVar13 - 4000U && iVar13 != -0x51) {
code_r0x000b4a10:
          piVar32[1] = iVar13 + 0x50;
          pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
          *pxVar7 = 0xd1b88;
          *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x3b;
          *(xunknown1 (*) [16])((int8)piVar32 + iVar13 + 0x40) = axVar39;
          *(xunknown1 *)((int8)piVar32 + iVar13 + 0x50) = xVar19;
          *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
               *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
          *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = axStack_70._8_8_;
          *(int8 *)((int8)piVar32 + iVar13 + 0x28) = xStack_78;
          *(uint1 **)((int8)piVar32 + iVar13 + 0x30) = puVar37;
          *(int8 *)((int8)piVar32 + iVar13 + 0x38) = iStack_80;
          return pxVar7;
        }
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 != (int8 *)0x0) {
          iVar13 = 0;
          *piVar32 = (int8)piVar34;
          piVar32[1] = 0;
          param_1[0x266] = (int8)piVar32;
          goto code_r0x000b4a10;
        }
        goto code_r0x000caa00;
      }
    }
    uVar24 = FUN_000ab0bc(param_1,0x32cd8,2);
    if ((uVar24 & 1) != 0) {
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar7 = (xunknown8 *)FUN_000b4a94(param_1,axStack_70);
      return pxVar7;
    }
    uVar24 = FUN_000ab0bc(param_1,0x264ea,2);
    if ((uVar24 & 1) != 0) {
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
        axStack_70._0_8_ = FUN_000afcac(param_1);
        if (axStack_70._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
        pxVar7 = (xunknown8 *)FUN_000b4b34(param_1,axStack_70);
        return pxVar7;
      }
      axStack_70._0_8_ = FUN_000b38ec(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
code_r0x000b2018:
      pxVar7 = (xunknown8 *)FUN_000b4bd4(param_1,axStack_70);
      return pxVar7;
    }
    uVar24 = FUN_000ab0bc(param_1,0x29f98,2);
    if ((uVar24 & 1) != 0) {
      iVar13 = param_1[2];
      iVar36 = param_1[3];
      piVar32 = param_1 + 5;
      while ((pcVar18 = (char *)*param_1, pcVar18 == (char *)param_1[1] || (*pcVar18 != 'E'))) {
        iVar16 = FUN_000ad9d8(param_1);
        if (iVar16 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar33 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar32) {
            iVar8 = malloc(iVar33 * 2);
            if (iVar8 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar32) {
              memcpy(iVar8,piVar32,iVar33);
            }
            param_1[2] = iVar8;
          }
          else {
            iVar8 = realloc();
            param_1[2] = iVar8;
            if (iVar8 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar8 + iVar33);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar8 + (iVar33 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar16;
      }
      *param_1 = (int8)(pcVar18 + 1);
      axStack_70 = FUN_000adec4(param_1,iVar36 - iVar13 >> 3);
      iVar13 = FUN_000b4c88(param_1,axStack_70);
      axStack_70._0_8_ = iVar13;
      goto code_r0x000b2018;
    }
    uVar24 = FUN_000ab0bc(param_1,0x3a0e2,2);
    if ((uVar24 & 1) != 0) {
      piStack_90 = (int8 *)FUN_000abd5c(param_1);
      if (piStack_90 == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iVar13 = param_1[2];
      iVar36 = param_1[3];
      pcVar18 = (char *)*param_1;
      if (pcVar18 == (char *)param_1[1]) goto code_r0x000b1e54;
      do {
        if (*pcVar18 == 'E') {
          *param_1 = (int8)(pcVar18 + 1);
          axStack_70 = FUN_000adec4(param_1,iVar36 - iVar13 >> 3);
          pxVar7 = (xunknown8 *)FUN_000b4d24(param_1,&piStack_90,axStack_70);
          return pxVar7;
        }
code_r0x000b1e54:
        do {
          axStack_70._0_8_ = FUN_000b3ca8(param_1);
          if (axStack_70._0_8_ == 0) {
            return (xunknown8 *)0x0;
          }
          FUN_000add4c(param_1 + 2,axStack_70);
          pcVar18 = (char *)*param_1;
        } while (pcVar18 == (char *)param_1[1]);
      } while( true );
    }
    uVar24 = FUN_000ab0bc(param_1,0x38f7d,2);
    if ((uVar24 & 1) != 0) {
      piVar34 = (int8 *)param_1[0x266];
      iVar13 = piVar34[1];
      piVar32 = piVar34;
      if (0xfffffffffffff00e < iVar13 - 0xfd0U && iVar13 != -0x21) {
code_r0x000b4e1c:
        piVar32[1] = iVar13 + 0x20;
        xVar25 = strlen(0x3a0e5 /* "throw" */);
        pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
        *pxVar7 = 0xd0548;
        *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = 0x3a0e5;
        *(xunknown8 *)((int8)piVar32 + iVar13 + 0x28) = xVar25;
        *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
             *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
        return pxVar7;
      }
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 != (int8 *)0x0) {
        iVar13 = 0;
        *piVar32 = (int8)piVar34;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
        goto code_r0x000b4e1c;
      }
      goto code_r0x000caa00;
    }
    uVar24 = FUN_000ab0bc(param_1,0x3a0eb,2);
    if ((uVar24 & 1) != 0) {
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar7 = (xunknown8 *)FUN_000b4e78(param_1,axStack_70);
      return pxVar7;
    }
    pcVar18 = (char *)*param_1;
    if ((pcVar18 != (char *)param_1[1]) && (*pcVar18 == 'u')) {
      *param_1 = (int8)(pcVar18 + 1);
      piStack_90 = (int8 *)FUN_000af0b4(param_1);
      if (piStack_90 == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      axVar39 = (**(code **)(*piStack_90 + 0x30))();
      if (((axVar39._8_8_ == 8) && (*axVar39._0_8_ == 0x666f646975755f5f)) &&
         (pcVar18 = (char *)*param_1, pcVar18 != (char *)param_1[1])) {
        if (*pcVar18 == 'z') {
          *param_1 = (int8)(pcVar18 + 1);
          axStack_a0._0_8_ = FUN_000b0fa8(param_1);
        }
        else {
          if (*pcVar18 != 't') goto code_r0x000b20c0;
          *param_1 = (int8)(pcVar18 + 1);
          axStack_a0._0_8_ = FUN_000abd5c(param_1);
        }
        if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        iVar13 = param_1[3] - param_1[2];
        FUN_000add4c(param_1 + 2,axStack_a0);
      }
      else {
code_r0x000b20c0:
        iVar13 = param_1[3] - param_1[2];
        pcVar18 = (char *)*param_1;
        if (pcVar18 == (char *)param_1[1]) goto code_r0x000b20e4;
        while (*pcVar18 != 'E') {
code_r0x000b20e4:
          do {
            axStack_70._0_8_ = FUN_000ad9d8(param_1);
            if (axStack_70._0_8_ == 0) {
              return (xunknown8 *)0x0;
            }
            FUN_000add4c(param_1 + 2,axStack_70);
            pcVar18 = (char *)*param_1;
          } while (pcVar18 == (char *)param_1[1]);
        }
        *param_1 = (int8)(pcVar18 + 1);
      }
      axStack_70 = FUN_000adec4(param_1,iVar13 >> 3);
      iVar12 = 1;
      ppiVar10 = &piStack_90;
code_r0x000b1ea4:
      iStack_80 = CONCAT44(iStack_80._4_4_,iVar12);
      pxVar7 = (xunknown8 *)FUN_000b26f4(param_1,ppiVar10,axStack_70,&iStack_80);
      return pxVar7;
    }
    piVar15 = (int2 *)*param_1;
    uVar24 = param_1[1] - (int8)piVar15;
    if (uVar24 < 3) {
      if (uVar24 == 2) goto code_r0x000b4f7c;
    }
    else {
      if (*piVar15 == 0x7273 && (char)piVar15[1] == 'N') {
        *param_1 = (int8)piVar15 + 3;
        pxVar7 = (xunknown8 *)FUN_000bc410(param_1);
        if (pxVar7 == (xunknown8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        pxVar17 = pxVar7;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          iVar13 = FUN_000af668(param_1,0);
          if (iVar13 == 0) {
            return (xunknown8 *)0x0;
          }
          piVar34 = (int8 *)param_1[0x266];
          iVar36 = piVar34[1];
          piVar32 = piVar34;
          if (iVar36 - 0xfd0U < 0xfffffffffffff00f || iVar36 == -0x21) {
            piVar32 = (int8 *)malloc(0x1000);
            if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
            iVar36 = 0;
            *piVar32 = (int8)piVar34;
            piVar32[1] = 0;
            param_1[0x266] = (int8)piVar32;
          }
          piVar32[1] = iVar36 + 0x20;
          pxVar17 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
          *pxVar17 = 0xd2448;
          *(xunknown8 **)((int8)piVar32 + iVar36 + 0x20) = pxVar7;
          *(int8 *)((int8)piVar32 + iVar36 + 0x28) = iVar13;
          *(xunknown1 *)((int8)piVar32 + iVar36 + 0x18) = 0x2d;
          *(uint2 *)((int8)piVar32 + iVar36 + 0x19) =
               *(uint2 *)((int8)piVar32 + iVar36 + 0x19) & 0xf000 | 0x540;
        }
        while ((pcVar18 = (char *)*param_1, pcVar18 == (char *)param_1[1] || (*pcVar18 != 'E'))) {
          iVar13 = FUN_000bc594(param_1);
          if (iVar13 == 0) {
            return (xunknown8 *)0x0;
          }
          piVar34 = (int8 *)param_1[0x266];
          iVar36 = piVar34[1];
          piVar32 = piVar34;
          if (iVar36 - 0xfd0U < 0xfffffffffffff00f || iVar36 == -0x21) {
            piVar32 = (int8 *)malloc(0x1000);
            if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
            iVar36 = 0;
            *piVar32 = (int8)piVar34;
            piVar32[1] = 0;
            param_1[0x266] = (int8)piVar32;
          }
          piVar32[1] = iVar36 + 0x20;
          pxVar7 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
          *pxVar7 = 0xd1d48;
          *(xunknown1 *)((int8)piVar32 + iVar36 + 0x18) = 0x17;
          *(xunknown8 **)((int8)piVar32 + iVar36 + 0x20) = pxVar17;
          *(int8 *)((int8)piVar32 + iVar36 + 0x28) = iVar13;
          *(uint2 *)((int8)piVar32 + iVar36 + 0x19) =
               *(uint2 *)((int8)piVar32 + iVar36 + 0x19) & 0xf000 | 0x540;
          pxVar17 = pxVar7;
        }
        *param_1 = (int8)(pcVar18 + 1);
        iVar13 = FUN_000bc66c(param_1);
        if (iVar13 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[0x266];
        iVar36 = piVar34[1];
        piVar32 = piVar34;
        if (iVar36 - 0xfd0U < 0xfffffffffffff00f || iVar36 == -0x21) {
          piVar32 = (int8 *)malloc(0x1000);
          if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
          iVar36 = 0;
          *piVar32 = (int8)piVar34;
          piVar32[1] = 0;
          param_1[0x266] = (int8)piVar32;
        }
        piVar32[1] = iVar36 + 0x20;
        pxVar7 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
        *pxVar7 = 0xd1d48;
        goto code_r0x000b547c;
      }
code_r0x000b4f7c:
      if (*piVar15 == 0x7273) {
        puVar35 = (uint1 *)(piVar15 + 1);
        *param_1 = (int8)puVar35;
        if (((uint1 *)param_1[1] != puVar35) && (0xfffffff5 < *puVar35 - 0x3a)) {
          pxVar17 = (xunknown8 *)FUN_000bc594(param_1);
          if (pxVar17 == (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
          if (!bVar5) {
            pxVar7 = (xunknown8 *)0x0;
            do {
              if (pxVar7 == (xunknown8 *)0x0) {
                pcVar18 = (char *)*param_1;
                pxVar9 = pxVar17;
                if (pcVar18 != (char *)param_1[1]) goto code_r0x000b5410;
              }
              else {
                piVar34 = (int8 *)param_1[0x266];
                iVar13 = piVar34[1];
                piVar32 = piVar34;
                if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
                  piVar32 = (int8 *)malloc(0x1000);
                  if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
                  iVar13 = 0;
                  *piVar32 = (int8)piVar34;
                  piVar32[1] = 0;
                  param_1[0x266] = (int8)piVar32;
                }
                piVar32[1] = iVar13 + 0x20;
                pxVar9 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
                *pxVar9 = 0xd1d48;
                *(xunknown8 **)((int8)piVar32 + iVar13 + 0x20) = pxVar7;
                *(xunknown8 **)((int8)piVar32 + iVar13 + 0x28) = pxVar17;
                *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x17;
                *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
                     *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
                pcVar18 = (char *)*param_1;
                pxVar17 = pxVar9;
                if (pcVar18 != (char *)param_1[1]) {
code_r0x000b5410:
                  pxVar9 = pxVar17;
                  if (*pcVar18 == 'E') goto code_r0x000b541c;
                }
              }
              pxVar17 = (xunknown8 *)FUN_000bc594(param_1);
              pxVar7 = pxVar9;
              if (pxVar17 == (xunknown8 *)0x0) {
                return (xunknown8 *)0x0;
              }
            } while( true );
          }
          pxVar7 = (xunknown8 *)0x0;
          pxVar9 = pxVar17;
          do {
            piVar32 = (int8 *)param_1[0x266];
            iVar13 = piVar32[1];
            bVar5 = iVar13 - 0xfd0U < 0xfffffffffffff00f;
            if (pxVar7 == (xunknown8 *)0x0) {
              piVar34 = piVar32;
              if (bVar5 || iVar13 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (xunknown8 *)0x0) goto code_r0x000caa00;
                iVar13 = 0;
                *piVar34 = (int8)piVar32;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              piVar34[1] = iVar13 + 0x20;
              pxVar17 = (xunknown8 *)((int8)piVar34 + iVar13 + 0x10);
              *pxVar17 = 0xd1f08;
              *(xunknown1 *)((int8)piVar34 + iVar13 + 0x18) = 0x2e;
              *(uint2 *)((int8)piVar34 + iVar13 + 0x19) =
                   *(uint2 *)((int8)piVar34 + iVar13 + 0x19) & 0xf000 | 0x540;
              *(xunknown8 **)((int8)piVar34 + iVar13 + 0x20) = pxVar9;
              pcVar18 = (char *)*param_1;
              if (pcVar18 != (char *)param_1[1]) goto code_r0x000b52f8;
            }
            else {
              piVar34 = piVar32;
              if (bVar5 || iVar13 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (int8 *)0x0) goto code_r0x000caa00;
                iVar13 = 0;
                *piVar34 = (int8)piVar32;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              piVar34[1] = iVar13 + 0x20;
              pxVar17 = (xunknown8 *)((int8)piVar34 + iVar13 + 0x10);
              *pxVar17 = 0xd1d48;
              *(xunknown1 *)((int8)piVar34 + iVar13 + 0x18) = 0x17;
              *(xunknown8 **)((int8)piVar34 + iVar13 + 0x20) = pxVar7;
              *(uint2 *)((int8)piVar34 + iVar13 + 0x19) =
                   *(uint2 *)((int8)piVar34 + iVar13 + 0x19) & 0xf000 | 0x540;
              *(xunknown8 **)((int8)piVar34 + iVar13 + 0x28) = pxVar9;
              pcVar18 = (char *)*param_1;
              if (pcVar18 != (char *)param_1[1]) {
code_r0x000b52f8:
                if (*pcVar18 == 'E') goto code_r0x000b541c;
              }
            }
            pxVar9 = (xunknown8 *)FUN_000bc594(param_1);
            pxVar7 = pxVar17;
            if (pxVar9 == (xunknown8 *)0x0) {
              return (xunknown8 *)0x0;
            }
          } while( true );
        }
        pxVar17 = (xunknown8 *)FUN_000bc410(param_1);
        if (pxVar17 == (xunknown8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          axStack_70._8_8_ = FUN_000af668(param_1,0);
          if (axStack_70._8_8_ == 0) {
            return (xunknown8 *)0x0;
          }
          pxVar17 = (xunknown8 *)FUN_000afc04(param_1,axStack_70 + 0x28,axStack_70 + 8);
        }
        goto code_r0x000b5424;
      }
    }
    pxVar7 = (xunknown8 *)FUN_000bc66c(param_1);
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    if (!bVar5) {
      return pxVar7;
    }
    piVar34 = (int8 *)param_1[0x266];
    iVar13 = piVar34[1];
    piVar32 = piVar34;
    if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
      iVar13 = 0;
      *piVar32 = (int8)piVar34;
      piVar32[1] = 0;
      param_1[0x266] = (int8)piVar32;
    }
    piVar32[1] = iVar13 + 0x20;
    pxVar17 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
    *pxVar17 = 0xd1f08;
    *(xunknown8 **)((int8)piVar32 + iVar13 + 0x20) = pxVar7;
    *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x2e;
    *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
         *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
    return pxVar17;
  }
  piVar15 = (int2 *)*param_1;
  piVar22 = (int2 *)param_1[1];
  if (piVar15 == piVar22) {
    return (xunknown8 *)0x0;
  }
  if ((char)*piVar15 != 'L') {
    return (xunknown8 *)0x0;
  }
  piVar14 = (int2 *)((int8)piVar15 + 1);
  uVar24 = (int8)piVar22 - (int8)piVar14;
  *param_1 = (int8)piVar14;
  if (piVar22 == piVar14) {
code_r0x000b2ad4:
    iVar13 = FUN_000abd5c();
    if (iVar13 == 0) {
      return (xunknown8 *)0x0;
    }
    puVar37 = (uint1 *)*param_1;
    puVar20 = (uint1 *)param_1[1];
    puVar35 = puVar37;
    if ((puVar37 != puVar20) && (*puVar37 == 0x6e)) {
      puVar35 = puVar37 + 1;
      *param_1 = (int8)puVar35;
    }
    if (puVar20 == puVar35) {
      return (xunknown8 *)0x0;
    }
    if (*puVar35 - 0x3a < 0xfffffff6) {
      return (xunknown8 *)0x0;
    }
    do {
      if (*puVar35 - 0x3a < 0xfffffff6) goto code_r0x000b2b68;
      puVar35 = puVar35 + 1;
      *param_1 = (int8)puVar35;
    } while (puVar35 != puVar20);
    puVar35 = puVar20;
code_r0x000b2b68:
    if (puVar35 == puVar37) {
      return (xunknown8 *)0x0;
    }
    if (puVar35 == puVar20) {
      return (xunknown8 *)0x0;
    }
    if (*puVar35 == 0x45) {
      *param_1 = (int8)(puVar35 + 1);
      pxVar7 = (xunknown8 *)FUN_000b798c(param_1,axStack_70 + 0x48,axStack_70 + 0x38);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  }
  switch(*(char *)piVar14) {
  case 'A':
    iVar13 = FUN_000abd5c();
    if (iVar13 == 0) {
      return (xunknown8 *)0x0;
    }
    pcVar18 = (char *)*param_1;
    if (pcVar18 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar18 == 'E') {
      *param_1 = (int8)(pcVar18 + 1);
      pxVar7 = (xunknown8 *)FUN_000b7048(param_1,axStack_70 + 0x38);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  default:
    goto code_r0x000b2ad4;
  case 'D':
    if (uVar24 < 2) {
      return (xunknown8 *)0x0;
    }
    if (*piVar14 != 0x6e44) {
      return (xunknown8 *)0x0;
    }
    piVar14 = (int2 *)((int8)piVar15 + 3);
    *param_1 = (int8)piVar14;
    if (piVar14 == piVar22) {
      return (xunknown8 *)0x0;
    }
    if (*(char *)piVar14 == '0') {
      piVar14 = piVar15 + 2;
      *param_1 = (int8)piVar14;
    }
    if (piVar14 == piVar22) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar14 != 'E') {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)((int8)piVar14 + 1);
    piVar34 = (int8 *)param_1[0x266];
    iVar13 = piVar34[1];
    piVar32 = piVar34;
    if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
      iVar13 = 0;
      *piVar32 = (int8)piVar34;
      piVar32[1] = 0;
      param_1[0x266] = (int8)piVar32;
    }
    piVar32[1] = iVar13 + 0x20;
    xVar25 = strlen(0x3a10b /* "nullptr" */);
    pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
    *pxVar7 = 0xd0548;
    *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 8;
    *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = 0x3a10b;
    *(xunknown8 *)((int8)piVar32 + iVar13 + 0x28) = xVar25;
    *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
         *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
    return pxVar7;
  case 'T':
    return (xunknown8 *)0x0;
  case 'U':
    if (uVar24 < 2) {
      return (xunknown8 *)0x0;
    }
    if ((char)piVar15[1] != 'l') {
      return (xunknown8 *)0x0;
    }
    iVar13 = FUN_000b7190(param_1,0);
    if (iVar13 == 0) {
      return (xunknown8 *)0x0;
    }
    pcVar18 = (char *)*param_1;
    if (pcVar18 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar18 == 'E') {
      *param_1 = (int8)(pcVar18 + 1);
      pxVar7 = (xunknown8 *)FUN_000b78ec(param_1,axStack_70 + 0x38);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  case '_':
    if (uVar24 < 2) {
      return (xunknown8 *)0x0;
    }
    if (*piVar14 != 0x5a5f) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)((int8)piVar15 + 3);
    pxVar7 = (xunknown8 *)FUN_000ab144();
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pcVar18 = (char *)*param_1;
    if (pcVar18 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar18 == 'E') {
      *param_1 = (int8)(pcVar18 + 1);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  case 'a':
    xVar25 = 0x38f8a /* "signed char" */;
    xVar11 = 0xb;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'b':
    if ((uVar24 < 3) || (*piVar14 != 0x3062 || *(char *)((int8)piVar15 + 3) != 'E')) {
      uVar24 = FUN_000ab0bc(param_1,0x2da76,3);
      if ((uVar24 & 1) == 0) {
        return (xunknown8 *)0x0;
      }
      xVar19 = 1;
    }
    else {
      xVar19 = 0;
      *param_1 = (int8)(piVar15 + 2);
    }
    piVar34 = (int8 *)param_1[0x266];
    iVar13 = piVar34[1];
    piVar32 = piVar34;
    if (iVar13 - 0xfe0U < 0xfffffffffffff00f || iVar13 == -0x11) {
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
      iVar13 = 0;
      *piVar32 = (int8)piVar34;
      piVar32[1] = 0;
      param_1[0x266] = (int8)piVar32;
    }
    piVar32[1] = iVar13 + 0x10;
    pxVar7 = (xunknown8 *)(iVar13 + 0x10 + (int8)piVar32);
    *(xunknown1 *)(pxVar7 + 1) = 0x49;
    *pxVar7 = 0xd1028;
    *(uint2 *)((int8)pxVar7 + 9) = *(uint2 *)((int8)pxVar7 + 9) & 0xf000 | 0x540;
    *(xunknown1 *)((int8)pxVar7 + 0xb) = xVar19;
    return pxVar7;
  case 'c':
    xVar25 = 0x30d50 /* "char" */;
    xVar11 = 4;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'd':
    *param_1 = (int8)(piVar15 + 1);
    if ((uint8)((int8)piVar22 - (int8)(piVar15 + 1)) < 0x11) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 1) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 2) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 4) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 6) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 8) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    piVar14 = piVar15 + 9;
    *param_1 = (int8)piVar14;
    if (piVar14 == piVar22) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar14 != 'E') {
      return (xunknown8 *)0x0;
    }
    piVar34 = (int8 *)param_1[0x266];
    *param_1 = (int8)((int8)piVar15 + 0x13);
    iVar13 = piVar34[1];
    piVar32 = piVar34;
    if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
      iVar13 = 0;
      *piVar32 = (int8)piVar34;
      piVar32[1] = 0;
      param_1[0x266] = (int8)piVar32;
    }
    piVar32[1] = iVar13 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
    *pxVar7 = 0xd1108;
    *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x4f;
    *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
         *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
    xVar25 = 0x10;
    goto code_r0x000b2dbc;
  case 'e':
    *param_1 = (int8)(piVar15 + 1);
    if ((uint8)((int8)piVar22 - (int8)(piVar15 + 1)) < 0x21) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 1) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 2) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 4) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 6) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 8) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x13) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x13) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 10) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x15) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x15) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x17) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x17) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 0xc) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 0xc) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x19) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x19) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x1b) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x1b) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 0xe) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 0xe) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x1d) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x1d) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x1f) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x1f) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar15 + 0x10) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar15 + 0x10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar15 + 0x21) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar15 + 0x21) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    piVar14 = piVar15 + 0x11;
    *param_1 = (int8)piVar14;
    if (piVar14 == piVar22) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar14 != 'E') {
      return (xunknown8 *)0x0;
    }
    piVar34 = (int8 *)param_1[0x266];
    *param_1 = (int8)((int8)piVar15 + 0x23);
    iVar13 = piVar34[1];
    piVar32 = piVar34;
    if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
      piVar32 = (int8 *)malloc(0x1000);
      if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
      iVar13 = 0;
      *piVar32 = (int8)piVar34;
      piVar32[1] = 0;
      param_1[0x266] = (int8)piVar32;
    }
    piVar32[1] = iVar13 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
    *pxVar7 = 0xd1178;
    *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x50;
    *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
         *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
    xVar25 = 0x20;
code_r0x000b2dbc:
    pxVar7[2] = piVar15 + 1;
    pxVar7[3] = xVar25;
    return pxVar7;
  case 'f':
    *param_1 = (int8)(piVar15 + 1);
    if ((((((8 < (uint8)((int8)piVar22 - (int8)(piVar15 + 1))) &&
           ((0xfffffff5 < *(uint1 *)(piVar15 + 1) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)(piVar15 + 1) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(uint1 *)((int8)piVar15 + 3) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)((int8)piVar15 + 3) & 0xffffffdf) - 0x47)))) &&
         ((((0xfffffff5 < *(uint1 *)(piVar15 + 2) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)(piVar15 + 2) & 0xffffffdf) - 0x47)) &&
           ((0xfffffff5 < *(uint1 *)((int8)piVar15 + 5) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)((int8)piVar15 + 5) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(uint1 *)(piVar15 + 3) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)(piVar15 + 3) & 0xffffffdf) - 0x47)))))) &&
        ((0xfffffff5 < *(uint1 *)((int8)piVar15 + 7) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)((int8)piVar15 + 7) & 0xffffffdf) - 0x47)))) &&
       (((0xfffffff5 < *(uint1 *)(piVar15 + 4) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)(piVar15 + 4) & 0xffffffdf) - 0x47)) &&
        ((0xfffffff5 < *(uint1 *)((int8)piVar15 + 9) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)((int8)piVar15 + 9) & 0xffffffdf) - 0x47)))))) {
      piVar14 = piVar15 + 5;
      *param_1 = (int8)piVar14;
      if ((piVar14 != piVar22) && ((char)*piVar14 == 'E')) {
        piVar34 = (int8 *)param_1[0x266];
        *param_1 = (int8)((int8)piVar15 + 0xb);
        iVar13 = piVar34[1];
        piVar32 = piVar34;
        if (iVar13 - 0xfd0U < 0xfffffffffffff00f || iVar13 == -0x21) {
          piVar32 = (int8 *)malloc(0x1000);
          if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
          iVar13 = 0;
          *piVar32 = (int8)piVar34;
          piVar32[1] = 0;
          param_1[0x266] = (int8)piVar32;
        }
        piVar32[1] = iVar13 + 0x20;
        pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
        *pxVar7 = 0xd1098;
        *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x4e;
        *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
             *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
        xVar25 = 8;
        goto code_r0x000b2dbc;
      }
    }
    return (xunknown8 *)0x0;
  case 'h':
    xVar25 = 0x2ebb2 /* "unsigned char" */;
    xVar11 = 0xd;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'i':
    xVar25 = 0x29893;
    xVar11 = 0;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'j':
    xVar25 = 0x40abd;
    goto code_r0x000b308c;
  case 'l':
    xVar25 = 0x2ba59;
code_r0x000b308c:
    xVar11 = 1;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'm':
    xVar25 = 0x3fb59;
    goto code_r0x000b30b8;
  case 'n':
    xVar25 = 0x2650c /* "__int128" */;
    xVar11 = 8;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'o':
    xVar25 = 0x2bf5a /* "unsigned __int128" */;
    xVar11 = 0x11;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 's':
    xVar25 = 0x2bf54 /* "short" */;
    xVar11 = 5;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 't':
    xVar25 = 0x22cc8 /* "unsigned short" */;
    xVar11 = 0xe;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'w':
    xVar25 = 0x22cc0 /* "wchar_t" */;
    xVar11 = 7;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'x':
    xVar25 = 0x2ba5b;
code_r0x000b30b8:
    xVar11 = 2;
    *param_1 = (int8)(piVar15 + 1);
    break;
  case 'y':
    xVar25 = 0x350e2;
    xVar11 = 3;
    *param_1 = (int8)(piVar15 + 1);
  }
  puVar37 = (uint1 *)*param_1;
  puVar20 = (uint1 *)param_1[1];
  puVar35 = puVar37;
  if ((puVar37 != puVar20) && (*puVar37 == 0x6e)) {
    puVar35 = puVar37 + 1;
    *param_1 = (int8)puVar35;
  }
  if ((puVar20 != puVar35) && (0xfffffff5 < *puVar35 - 0x3a)) {
    do {
      if (*puVar35 - 0x3a < 0xfffffff6) goto code_r0x000b6ef4;
      puVar35 = puVar35 + 1;
      *param_1 = (int8)puVar35;
    } while (puVar35 != puVar20);
    puVar35 = puVar20;
code_r0x000b6ef4:
    if ((int8)puVar35 - (int8)puVar37 == 0) {
      return (xunknown8 *)0x0;
    }
    if (puVar35 == puVar20) {
      return (xunknown8 *)0x0;
    }
    if (*puVar35 == 0x45) {
      piVar34 = (int8 *)param_1[0x266];
      *param_1 = (int8)(puVar35 + 1);
      iVar13 = piVar34[1];
      piVar32 = piVar34;
      if (iVar13 - 0xfc0U < 0xfffffffffffff00f || iVar13 == -0x31) {
        piVar32 = (int8 *)malloc(0x1000);
        if (piVar32 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar7;
        }
        iVar13 = 0;
        *piVar32 = (int8)piVar34;
        piVar32[1] = 0;
        param_1[0x266] = (int8)piVar32;
      }
      piVar32[1] = iVar13 + 0x30;
      pxVar7 = (xunknown8 *)((int8)piVar32 + iVar13 + 0x10);
      *pxVar7 = 0xd0fb8;
      *(xunknown1 *)((int8)piVar32 + iVar13 + 0x18) = 0x4d;
      *(xunknown8 *)((int8)piVar32 + iVar13 + 0x20) = xVar25;
      *(xunknown8 *)((int8)piVar32 + iVar13 + 0x28) = xVar11;
      *(uint1 **)((int8)piVar32 + iVar13 + 0x30) = puVar37;
      *(int8 *)((int8)piVar32 + iVar13 + 0x38) = (int8)puVar35 - (int8)puVar37;
      *(uint2 *)((int8)piVar32 + iVar13 + 0x19) =
           *(uint2 *)((int8)piVar32 + iVar13 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    }
  }
  return (xunknown8 *)0x0;
code_r0x000b541c:
  *param_1 = (int8)(pcVar18 + 1);
code_r0x000b5424:
  iVar13 = FUN_000bc66c(param_1);
  if (iVar13 == 0) {
    return (xunknown8 *)0x0;
  }
  piVar34 = (int8 *)param_1[0x266];
  iVar36 = piVar34[1];
  piVar32 = piVar34;
  if (iVar36 - 0xfd0U < 0xfffffffffffff00f || iVar36 == -0x21) {
    piVar32 = (int8 *)malloc(0x1000);
    if (piVar32 == (int8 *)0x0) goto code_r0x000caa00;
    iVar36 = 0;
    *piVar32 = (int8)piVar34;
    piVar32[1] = 0;
    param_1[0x266] = (int8)piVar32;
  }
  piVar32[1] = iVar36 + 0x20;
  pxVar7 = (xunknown8 *)((int8)piVar32 + iVar36 + 0x10);
  *pxVar7 = 0xd1d48;
code_r0x000b547c:
  *(xunknown1 *)(pxVar7 + 1) = 0x17;
  pxVar7[2] = pxVar17;
  pxVar7[3] = iVar13;
  *(uint2 *)((int8)pxVar7 + 9) = *(uint2 *)((int8)pxVar7 + 9) & 0xf000 | 0x540;
  return pxVar7;
}

/* 0xb23b8  size=192 */
void FUN_000b23b8(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,uint2 *param_4)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar2 = piVar5;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
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
  piVar2[1] = iVar3 + 0x30;
  xVar4 = *param_2;
  xVar7 = param_3[1];
  xVar6 = *param_3;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0b58;
  uVar1 = *param_4;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x38;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar4;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar7;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar6;
  return;
}

/* 0xb2478  size=188 */
void FUN_000b2478(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,uint2 *param_4)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
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
  piVar2[1] = iVar3 + 0x20;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0bc8;
  uVar1 = *param_4;
  xVar5 = *param_2;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x37;
  xVar4 = *param_3;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar5;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar4;
  return;
}

/* 0xb2534  size=204 */
void FUN_000b2534(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,
                 uint2 *param_5)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  int8 *piVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  
  piVar6 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar6[1];
  piVar2 = piVar6;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
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
  piVar2[1] = iVar3 + 0x30;
  xVar8 = param_3[1];
  xVar7 = *param_3;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0c38;
  uVar1 = *param_5;
  xVar5 = *param_2;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x3a;
  xVar4 = *param_4;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar5;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar8;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar7;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x38) = xVar4;
  return;
}

/* 0xb2600  size=244 */
void FUN_000b2600(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,char param_5
                 ,char param_6,uint2 *param_7)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  xunknown8 xVar9;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar2 = piVar5;
  if (iVar3 - 0xfb0U < 0xfffffffffffff00f || iVar3 == -0x41) {
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
  piVar2[1] = iVar3 + 0x40;
  xVar4 = *param_3;
  xVar7 = param_2[1];
  xVar6 = *param_2;
  xVar9 = param_4[1];
  xVar8 = *param_4;
  uVar1 = *param_7;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0ca8;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar4;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x40;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar7;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar6;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x40) = xVar9;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x38) = xVar8;
  *(bool *)((int8)piVar2 + iVar3 + 0x48) = param_5 != '\0';
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(bool *)((int8)piVar2 + iVar3 + 0x49) = param_6 != '\0';
  return;
}

/* 0xb26f4  size=192 */
void FUN_000b26f4(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,uint2 *param_4)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar2 = piVar5;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
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
  piVar2[1] = iVar3 + 0x30;
  xVar4 = *param_2;
  xVar7 = param_3[1];
  xVar6 = *param_3;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0d88;
  uVar1 = *param_4;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x3f;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar4;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar7;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar6;
  return;
}

/* 0xb27b4  size=192 */
void FUN_000b27b4(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,uint2 *param_4)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar2 = piVar5;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
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
  piVar2[1] = iVar3 + 0x30;
  xVar4 = *param_2;
  xVar7 = param_3[1];
  xVar6 = *param_3;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0df8;
  uVar1 = *param_4;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x44;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar4;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar7;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar6;
  return;
}

/* 0xb2874  size=200 */
void FUN_000b2874(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,
                 uint2 *param_5)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  int8 *piVar7;
  
  piVar7 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar7[1];
  piVar2 = piVar7;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
    piVar2 = (int8 *)malloc(0x1000);
    if (piVar2 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d4468)();
      return;
    }
    iVar3 = 0;
    *piVar2 = (int8)piVar7;
    piVar2[1] = 0;
    *(int8 **)(param_1 + 0x1330) = piVar2;
  }
  piVar2[1] = iVar3 + 0x30;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0e68;
  uVar1 = *param_5;
  xVar5 = *param_2;
  xVar6 = *param_3;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x39;
  xVar4 = *param_4;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar5;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar6;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar4;
  return;
}

/* 0xb293c  size=200 */
void FUN_000b293c(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,
                 uint2 *param_5)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  int8 *piVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  
  piVar6 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar6[1];
  piVar2 = piVar6;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
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
  piVar2[1] = iVar3 + 0x30;
  xVar8 = param_2[1];
  xVar7 = *param_2;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0ed8;
  uVar1 = *param_5;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x3d;
  xVar5 = *param_4;
  xVar4 = *param_3;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar8;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar7;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar4;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x38) = xVar5;
  return;
}

/* 0xb2a04  size=3816 */
xunknown8 * FUN_000b2a04(int8 *param_1)

{
  int2 *piVar1;
  char *pcVar2;
  int2 *piVar3;
  uint1 *puVar4;
  uint1 *puVar5;
  int8 iVar6;
  xunknown8 *pxVar7;
  uint8 uVar8;
  int8 *piVar9;
  xunknown1 xVar10;
  xunknown8 xVar11;
  xunknown8 xVar12;
  int2 *piVar13;
  uint1 *puVar14;
  int8 *piVar15;
  xunknown8 xStack_38;
  
  piVar1 = (int2 *)*param_1;
  piVar3 = (int2 *)param_1[1];
  if (piVar1 == piVar3) {
    return (xunknown8 *)0x0;
  }
  if ((char)*piVar1 != 'L') {
    return (xunknown8 *)0x0;
  }
  piVar13 = (int2 *)((int8)piVar1 + 1);
  uVar8 = (int8)piVar3 - (int8)piVar13;
  *param_1 = (int8)piVar13;
  if (piVar3 == piVar13) {
code_r0x000b2ad4:
    iVar6 = FUN_000abd5c();
    if (iVar6 == 0) {
      return (xunknown8 *)0x0;
    }
    xStack_38 = (uint1 *)*param_1;
    puVar4 = (uint1 *)param_1[1];
    puVar14 = xStack_38;
    if ((xStack_38 != puVar4) && (*xStack_38 == 0x6e)) {
      puVar14 = xStack_38 + 1;
      *param_1 = (int8)puVar14;
    }
    if (puVar4 == puVar14) {
      return (xunknown8 *)0x0;
    }
    if (*puVar14 - 0x3a < 0xfffffff6) {
      return (xunknown8 *)0x0;
    }
    do {
      if (*puVar14 - 0x3a < 0xfffffff6) goto code_r0x000b2b68;
      puVar14 = puVar14 + 1;
      *param_1 = (int8)puVar14;
    } while (puVar14 != puVar4);
    puVar14 = puVar4;
code_r0x000b2b68:
    if (puVar14 == xStack_38) {
      return (xunknown8 *)0x0;
    }
    if (puVar14 == puVar4) {
      return (xunknown8 *)0x0;
    }
    if (*puVar14 == 0x45) {
      *param_1 = (int8)(puVar14 + 1);
      pxVar7 = (xunknown8 *)FUN_000b798c(param_1,(int8)register_sp + -0x28,&xStack_38);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  }
  switch(*(char *)piVar13) {
  case 'A':
    xStack_38 = (uint1 *)FUN_000abd5c();
    if (xStack_38 == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar2 == 'E') {
      *param_1 = (int8)(pcVar2 + 1);
      pxVar7 = (xunknown8 *)FUN_000b7048(param_1,&xStack_38);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  default:
    goto code_r0x000b2ad4;
  case 'D':
    if (uVar8 < 2) {
      return (xunknown8 *)0x0;
    }
    if (*piVar13 != 0x6e44) {
      return (xunknown8 *)0x0;
    }
    piVar13 = (int2 *)((int8)piVar1 + 3);
    *param_1 = (int8)piVar13;
    if (piVar13 == piVar3) {
      return (xunknown8 *)0x0;
    }
    if (*(char *)piVar13 == '0') {
      piVar13 = piVar1 + 2;
      *param_1 = (int8)piVar13;
    }
    if (piVar13 == piVar3) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar13 != 'E') {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)((int8)piVar13 + 1);
    piVar15 = (int8 *)param_1[0x266];
    iVar6 = piVar15[1];
    piVar9 = piVar15;
    if (0xfffffffffffff00e < iVar6 - 0xfd0U && iVar6 != -0x21) {
code_r0x000b7134:
      piVar9[1] = iVar6 + 0x20;
      xVar11 = strlen(0x3a10b /* "nullptr" */);
      pxVar7 = (xunknown8 *)((int8)piVar9 + iVar6 + 0x10);
      *pxVar7 = 0xd0548;
      *(xunknown1 *)((int8)piVar9 + iVar6 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar9 + iVar6 + 0x20) = 0x3a10b;
      *(xunknown8 *)((int8)piVar9 + iVar6 + 0x28) = xVar11;
      *(uint2 *)((int8)piVar9 + iVar6 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar6 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    }
    piVar9 = (int8 *)malloc(0x1000);
    if (piVar9 != (int8 *)0x0) {
      iVar6 = 0;
      *piVar9 = (int8)piVar15;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
      goto code_r0x000b7134;
    }
    goto code_r0x000caa00;
  case 'T':
    return (xunknown8 *)0x0;
  case 'U':
    if (uVar8 < 2) {
      return (xunknown8 *)0x0;
    }
    if ((char)piVar1[1] != 'l') {
      return (xunknown8 *)0x0;
    }
    xStack_38 = (uint1 *)FUN_000b7190(param_1,0);
    if (xStack_38 == (uint1 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar2 == 'E') {
      *param_1 = (int8)(pcVar2 + 1);
      pxVar7 = (xunknown8 *)FUN_000b78ec(param_1,&xStack_38);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  case '_':
    if (uVar8 < 2) {
      return (xunknown8 *)0x0;
    }
    if (*piVar13 != 0x5a5f) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)((int8)piVar1 + 3);
    pxVar7 = (xunknown8 *)FUN_000ab144();
    if (pxVar7 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar2 == 'E') {
      *param_1 = (int8)(pcVar2 + 1);
      return pxVar7;
    }
    return (xunknown8 *)0x0;
  case 'a':
    xVar11 = 0x38f8a /* "signed char" */;
    xVar12 = 0xb;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'b':
    if ((uVar8 < 3) || (*piVar13 != 0x3062 || *(char *)((int8)piVar1 + 3) != 'E')) {
      uVar8 = FUN_000ab0bc(param_1,0x2da76,3);
      if ((uVar8 & 1) == 0) {
        return (xunknown8 *)0x0;
      }
      xVar10 = 1;
    }
    else {
      xVar10 = 0;
      *param_1 = (int8)(piVar1 + 2);
    }
    piVar15 = (int8 *)param_1[0x266];
    iVar6 = piVar15[1];
    piVar9 = piVar15;
    if (iVar6 - 0xfe0U < 0xfffffffffffff00f || iVar6 == -0x11) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar6 = 0;
      *piVar9 = (int8)piVar15;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar6 + 0x10;
    pxVar7 = (xunknown8 *)(iVar6 + 0x10 + (int8)piVar9);
    *(xunknown1 *)(pxVar7 + 1) = 0x49;
    *pxVar7 = 0xd1028;
    *(uint2 *)((int8)pxVar7 + 9) = *(uint2 *)((int8)pxVar7 + 9) & 0xf000 | 0x540;
    *(xunknown1 *)((int8)pxVar7 + 0xb) = xVar10;
    return pxVar7;
  case 'c':
    xVar11 = 0x30d50 /* "char" */;
    xVar12 = 4;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'd':
    *param_1 = (int8)(piVar1 + 1);
    if ((uint8)((int8)piVar3 - (int8)(piVar1 + 1)) < 0x11) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 1) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 2) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 4) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 6) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 8) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    piVar13 = piVar1 + 9;
    *param_1 = (int8)piVar13;
    if (piVar13 == piVar3) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar13 != 'E') {
      return (xunknown8 *)0x0;
    }
    piVar15 = (int8 *)param_1[0x266];
    *param_1 = (int8)((int8)piVar1 + 0x13);
    iVar6 = piVar15[1];
    piVar9 = piVar15;
    if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar6 = 0;
      *piVar9 = (int8)piVar15;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar6 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar9 + iVar6 + 0x10);
    *pxVar7 = 0xd1108;
    *(xunknown1 *)((int8)piVar9 + iVar6 + 0x18) = 0x4f;
    *(uint2 *)((int8)piVar9 + iVar6 + 0x19) =
         *(uint2 *)((int8)piVar9 + iVar6 + 0x19) & 0xf000 | 0x540;
    xVar11 = 0x10;
    goto code_r0x000b2dbc;
  case 'e':
    *param_1 = (int8)(piVar1 + 1);
    if ((uint8)((int8)piVar3 - (int8)(piVar1 + 1)) < 0x21) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 1) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 2) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 4) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 6) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 8) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x13) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x13) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 10) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x15) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x15) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x17) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x17) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 0xc) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 0xc) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x19) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x19) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x1b) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x1b) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 0xe) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 0xe) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x1d) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x1d) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x1f) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x1f) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar1 + 0x10) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar1 + 0x10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar1 + 0x21) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar1 + 0x21) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    piVar13 = piVar1 + 0x11;
    *param_1 = (int8)piVar13;
    if (piVar13 == piVar3) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar13 != 'E') {
      return (xunknown8 *)0x0;
    }
    piVar15 = (int8 *)param_1[0x266];
    *param_1 = (int8)((int8)piVar1 + 0x23);
    iVar6 = piVar15[1];
    piVar9 = piVar15;
    if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar6 = 0;
      *piVar9 = (int8)piVar15;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar6 + 0x20;
    pxVar7 = (xunknown8 *)((int8)piVar9 + iVar6 + 0x10);
    *pxVar7 = 0xd1178;
    *(xunknown1 *)((int8)piVar9 + iVar6 + 0x18) = 0x50;
    *(uint2 *)((int8)piVar9 + iVar6 + 0x19) =
         *(uint2 *)((int8)piVar9 + iVar6 + 0x19) & 0xf000 | 0x540;
    xVar11 = 0x20;
code_r0x000b2dbc:
    pxVar7[2] = piVar1 + 1;
    pxVar7[3] = xVar11;
    return pxVar7;
  case 'f':
    *param_1 = (int8)(piVar1 + 1);
    if ((((((8 < (uint8)((int8)piVar3 - (int8)(piVar1 + 1))) &&
           ((0xfffffff5 < *(uint1 *)(piVar1 + 1) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)(piVar1 + 1) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(uint1 *)((int8)piVar1 + 3) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)((int8)piVar1 + 3) & 0xffffffdf) - 0x47)))) &&
         ((((0xfffffff5 < *(uint1 *)(piVar1 + 2) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)(piVar1 + 2) & 0xffffffdf) - 0x47)) &&
           ((0xfffffff5 < *(uint1 *)((int8)piVar1 + 5) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)((int8)piVar1 + 5) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(uint1 *)(piVar1 + 3) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)(piVar1 + 3) & 0xffffffdf) - 0x47)))))) &&
        ((0xfffffff5 < *(uint1 *)((int8)piVar1 + 7) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)((int8)piVar1 + 7) & 0xffffffdf) - 0x47)))) &&
       (((0xfffffff5 < *(uint1 *)(piVar1 + 4) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)(piVar1 + 4) & 0xffffffdf) - 0x47)) &&
        ((0xfffffff5 < *(uint1 *)((int8)piVar1 + 9) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)((int8)piVar1 + 9) & 0xffffffdf) - 0x47)))))) {
      piVar13 = piVar1 + 5;
      *param_1 = (int8)piVar13;
      if ((piVar13 != piVar3) && ((char)*piVar13 == 'E')) {
        piVar15 = (int8 *)param_1[0x266];
        *param_1 = (int8)((int8)piVar1 + 0xb);
        iVar6 = piVar15[1];
        piVar9 = piVar15;
        if (iVar6 - 0xfd0U < 0xfffffffffffff00f || iVar6 == -0x21) {
          piVar9 = (int8 *)malloc(0x1000);
          if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
          iVar6 = 0;
          *piVar9 = (int8)piVar15;
          piVar9[1] = 0;
          param_1[0x266] = (int8)piVar9;
        }
        piVar9[1] = iVar6 + 0x20;
        pxVar7 = (xunknown8 *)((int8)piVar9 + iVar6 + 0x10);
        *pxVar7 = 0xd1098;
        *(xunknown1 *)((int8)piVar9 + iVar6 + 0x18) = 0x4e;
        *(uint2 *)((int8)piVar9 + iVar6 + 0x19) =
             *(uint2 *)((int8)piVar9 + iVar6 + 0x19) & 0xf000 | 0x540;
        xVar11 = 8;
        goto code_r0x000b2dbc;
      }
    }
    return (xunknown8 *)0x0;
  case 'h':
    xVar11 = 0x2ebb2 /* "unsigned char" */;
    xVar12 = 0xd;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'i':
    xVar11 = 0x29893;
    xVar12 = 0;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'j':
    xVar11 = 0x40abd;
    goto code_r0x000b308c;
  case 'l':
    xVar11 = 0x2ba59;
code_r0x000b308c:
    xVar12 = 1;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'm':
    xVar11 = 0x3fb59;
    goto code_r0x000b30b8;
  case 'n':
    xVar11 = 0x2650c /* "__int128" */;
    xVar12 = 8;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'o':
    xVar11 = 0x2bf5a /* "unsigned __int128" */;
    xVar12 = 0x11;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 's':
    xVar11 = 0x2bf54 /* "short" */;
    xVar12 = 5;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 't':
    xVar11 = 0x22cc8 /* "unsigned short" */;
    xVar12 = 0xe;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'w':
    xVar11 = 0x22cc0 /* "wchar_t" */;
    xVar12 = 7;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'x':
    xVar11 = 0x2ba5b;
code_r0x000b30b8:
    xVar12 = 2;
    *param_1 = (int8)(piVar1 + 1);
    break;
  case 'y':
    xVar11 = 0x350e2;
    xVar12 = 3;
    *param_1 = (int8)(piVar1 + 1);
  }
  puVar4 = (uint1 *)*param_1;
  puVar5 = (uint1 *)param_1[1];
  puVar14 = puVar4;
  if ((puVar4 != puVar5) && (*puVar4 == 0x6e)) {
    puVar14 = puVar4 + 1;
    *param_1 = (int8)puVar14;
  }
  if ((puVar5 != puVar14) && (0xfffffff5 < *puVar14 - 0x3a)) {
    do {
      if (*puVar14 - 0x3a < 0xfffffff6) goto code_r0x000b6ef4;
      puVar14 = puVar14 + 1;
      *param_1 = (int8)puVar14;
    } while (puVar14 != puVar5);
    puVar14 = puVar5;
code_r0x000b6ef4:
    if ((int8)puVar14 - (int8)puVar4 == 0) {
      return (xunknown8 *)0x0;
    }
    if (puVar14 == puVar5) {
      return (xunknown8 *)0x0;
    }
    if (*puVar14 == 0x45) {
      piVar15 = (int8 *)param_1[0x266];
      *param_1 = (int8)(puVar14 + 1);
      iVar6 = piVar15[1];
      piVar9 = piVar15;
      if (iVar6 - 0xfc0U < 0xfffffffffffff00f || iVar6 == -0x31) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar7;
        }
        iVar6 = 0;
        *piVar9 = (int8)piVar15;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar6 + 0x30;
      pxVar7 = (xunknown8 *)((int8)piVar9 + iVar6 + 0x10);
      *pxVar7 = 0xd0fb8;
      *(xunknown1 *)((int8)piVar9 + iVar6 + 0x18) = 0x4d;
      *(xunknown8 *)((int8)piVar9 + iVar6 + 0x20) = xVar11;
      *(xunknown8 *)((int8)piVar9 + iVar6 + 0x28) = xVar12;
      *(uint1 **)((int8)piVar9 + iVar6 + 0x30) = puVar4;
      *(int8 *)((int8)piVar9 + iVar6 + 0x38) = (int8)puVar14 - (int8)puVar4;
      *(uint2 *)((int8)piVar9 + iVar6 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar6 + 0x19) & 0xf000 | 0x540;
      return pxVar7;
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb38ec  size=956 */
xunknown8 * FUN_000b38ec(int8 *param_1)

{
  int2 *piVar1;
  uint1 *puVar2;
  int8 *piVar3;
  xunknown8 *pxVar4;
  uint1 *puVar5;
  uint1 *puVar6;
  int8 iVar7;
  uint1 *puVar8;
  int8 iVar9;
  int8 *piVar10;
  uint1 *puStack_40;
  int8 iStack_38;
  
  piVar1 = (int2 *)*param_1;
  puVar2 = (uint1 *)param_1[1];
  if ((uint8)((int8)puVar2 - (int8)piVar1) < 3) {
    if ((int8)puVar2 - (int8)piVar1 != 2) {
      return (xunknown8 *)0x0;
    }
  }
  else if (*piVar1 == 0x7066 && (char)piVar1[1] == 'T') {
    piVar10 = (int8 *)param_1[0x266];
    *param_1 = (int8)piVar1 + 3;
    iVar9 = piVar10[1];
    piVar3 = piVar10;
    if (0xfffffffffffff00e < iVar9 - 0xfd0U && iVar9 != -0x21) {
code_r0x000b3b00:
      piVar3[1] = iVar9 + 0x20;
      pxVar4 = (xunknown8 *)((int8)piVar3 + iVar9 + 0x10);
      *pxVar4 = 0xd0548;
      *(xunknown1 *)((int8)piVar3 + iVar9 + 0x18) = 8;
      *(uint2 *)((int8)piVar3 + iVar9 + 0x19) =
           *(uint2 *)((int8)piVar3 + iVar9 + 0x19) & 0xf000 | 0x540;
      *(xunknown8 *)((int8)piVar3 + iVar9 + 0x20) = 0x40aca;
      *(xunknown8 *)((int8)piVar3 + iVar9 + 0x28) = 4;
      return pxVar4;
    }
    piVar3 = (int8 *)malloc(0x1000);
    if (piVar3 != (int8 *)0x0) {
      iVar9 = 0;
      *piVar3 = (int8)piVar10;
      piVar3[1] = 0;
      param_1[0x266] = (int8)piVar3;
      goto code_r0x000b3b00;
    }
    goto code_r0x000b3ca4;
  }
  if (*piVar1 == 0x7066) {
    puVar6 = (uint1 *)(piVar1 + 1);
    *param_1 = (int8)puVar6;
    if (puVar6 != puVar2) {
      if (*puVar6 == 0x72) {
        puVar6 = (uint1 *)((int8)piVar1 + 3);
        *param_1 = (int8)puVar6;
      }
      if (puVar6 != puVar2) {
        if (*puVar6 == 0x56) {
          puVar6 = puVar6 + 1;
          *param_1 = (int8)puVar6;
        }
        if (puVar6 != puVar2) {
          if (*puVar6 == 0x4b) {
            puVar6 = puVar6 + 1;
            *param_1 = (int8)puVar6;
          }
          if (puVar2 != puVar6) {
            puVar5 = puVar6;
            if (*puVar6 - 0x3a < 0xfffffff6) {
              iVar9 = 0;
              puVar6 = (uint1 *)0x0;
            }
            else {
              puVar8 = puVar6;
              do {
                if (*puVar5 - 0x3a < 0xfffffff6) goto code_r0x000b3b7c;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
                *param_1 = (int8)puVar5;
              } while (puVar5 != puVar2);
              puVar8 = puVar2;
              puVar5 = puVar2;
code_r0x000b3b7c:
              iVar9 = (int8)puVar8 - (int8)puVar6;
            }
            if ((puVar5 != puVar2) && (*puVar5 == 0x5f)) {
              piVar10 = (int8 *)param_1[0x266];
              *param_1 = (int8)(puVar5 + 1);
              iVar7 = piVar10[1];
              piVar3 = piVar10;
              if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
                piVar3 = (int8 *)malloc(0x1000);
                if (piVar3 == (int8 *)0x0) {
code_r0x000b3ca4:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pxVar4 = (xunknown8 *)(*pcRam00000000000d4468)();
                  return pxVar4;
                }
                iVar7 = 0;
                *piVar3 = (int8)piVar10;
                piVar3[1] = 0;
                param_1[0x266] = (int8)piVar3;
              }
              piVar3[1] = iVar7 + 0x20;
              pxVar4 = (xunknown8 *)((int8)piVar3 + iVar7 + 0x10);
              *pxVar4 = 0xd16b8;
              *(uint1 **)((int8)piVar3 + iVar7 + 0x20) = puVar6;
              *(int8 *)((int8)piVar3 + iVar7 + 0x28) = iVar9;
              *(xunknown1 *)((int8)piVar3 + iVar7 + 0x18) = 0x43;
              *(uint2 *)((int8)piVar3 + iVar7 + 0x19) =
                   *(uint2 *)((int8)piVar3 + iVar7 + 0x19) & 0xf000 | 0x540;
              return pxVar4;
            }
          }
        }
      }
    }
  }
  else if (*piVar1 == 0x4c66) {
    puVar6 = (uint1 *)(piVar1 + 1);
    *param_1 = (int8)puVar6;
    if ((puVar2 != puVar6) && (0xfffffff5 < *puVar6 - 0x3a)) {
      puVar5 = puVar6;
      do {
        if (*puVar5 - 0x3a < 0xfffffff6) goto code_r0x000b39a4;
        puVar5 = puVar5 + 1;
        *param_1 = (int8)puVar5;
      } while (puVar5 != puVar2);
      puVar5 = puVar2;
code_r0x000b39a4:
      if (puVar5 == puVar6) {
        return (xunknown8 *)0x0;
      }
      if (puVar5 == puVar2) {
        return (xunknown8 *)0x0;
      }
      if (*puVar5 == 0x70) {
        puStack_40 = puVar5 + 1;
        *param_1 = (int8)puStack_40;
        if (puStack_40 != puVar2) {
          if (*puStack_40 == 0x72) {
            puStack_40 = puVar5 + 2;
            *param_1 = (int8)puStack_40;
          }
          if (puStack_40 != puVar2) {
            if (*puStack_40 == 0x56) {
              puStack_40 = puStack_40 + 1;
              *param_1 = (int8)puStack_40;
            }
            if (puStack_40 != puVar2) {
              if (*puStack_40 == 0x4b) {
                puStack_40 = puStack_40 + 1;
                *param_1 = (int8)puStack_40;
              }
              if (puVar2 != puStack_40) {
                puVar6 = puStack_40;
                if (*puStack_40 - 0x3a < 0xfffffff6) {
                  iStack_38 = 0;
                  puStack_40 = (uint1 *)0x0;
                }
                else {
                  puVar5 = puStack_40;
                  do {
                    if (*puVar6 - 0x3a < 0xfffffff6) goto code_r0x000b3c48;
                    puVar6 = puVar6 + 1;
                    puVar5 = puVar5 + 1;
                    *param_1 = (int8)puVar6;
                  } while (puVar6 != puVar2);
                  puVar5 = puVar2;
                  puVar6 = puVar2;
code_r0x000b3c48:
                  iStack_38 = (int8)puVar5 - (int8)puStack_40;
                }
                if ((puVar6 != puVar2) && (*puVar6 == 0x5f)) {
                  *param_1 = (int8)(puVar6 + 1);
                  pxVar4 = (xunknown8 *)FUN_000ba324(param_1,&puStack_40);
                  return pxVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb3ca8  size=660 */
/* WARNING: Type propagation algorithm not settling */

xunknown8 * FUN_000b3ca8(int8 *param_1,xunknown8 param_2,xunknown8 *param_3,uint2 *param_4)

{
  uint1 uVar1;
  uint1 uVar2;
  char cVar3;
  uint2 uVar4;
  bool bVar5;
  int8 iVar6;
  int8 iVar7;
  int8 iVar8;
  int8 *piVar9;
  xunknown8 *pxVar10;
  int8 iVar11;
  xunknown8 *pxVar12;
  int8 **ppiVar13;
  xunknown8 xVar14;
  int4 iVar15;
  int2 *piVar16;
  int8 iVar17;
  int2 *piVar18;
  xunknown8 *pxVar19;
  char *pcVar20;
  xunknown1 xVar21;
  uint1 *puVar22;
  char *pcVar23;
  int2 *piVar24;
  uint1 *puVar25;
  uint8 uVar26;
  xunknown8 xVar27;
  uint1 *puVar28;
  uint8 uVar29;
  uint8 uVar30;
  uint8 uVar31;
  uint8 uVar32;
  int8 *piVar33;
  int8 *piVar34;
  int8 iVar35;
  xunknown8 unaff_x23;
  uint1 *puVar36;
  uint1 *puVar37;
  xunknown8 unaff_x30;
  xunknown8 xVar38;
  xunknown1 axVar39 [16];
  xunknown1 axStack_a0 [16];
  int8 *piStack_90;
  uint8 uStack_88;
  int8 iStack_80;
  xunknown8 xStack_78;
  xunknown1 axStack_70 [16];
  xunknown8 xStack_58;
  xunknown8 xStack_28;
  
  pcVar20 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar20) && (1 < (uint8)(param_1[1] - (int8)pcVar20))) &&
     (*pcVar20 == 'd')) {
    cVar3 = pcVar20[1];
    if (cVar3 == 'X') {
      *param_1 = (int8)(pcVar20 + 2);
      iVar7 = FUN_000b0fa8();
      if (iVar7 == 0) {
        return (xunknown8 *)0x0;
      }
      iVar8 = FUN_000b0fa8(param_1);
      if (iVar8 == 0) {
        return (xunknown8 *)0x0;
      }
      iVar17 = FUN_000b3ca8(param_1);
      if (iVar17 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar34 = (int8 *)param_1[0x266];
      iVar35 = piVar34[1];
      piVar9 = piVar34;
      if (0xfffffffffffff00e < iVar35 - 0xfc0U && iVar35 != -0x31) {
code_r0x000b3ee4:
        piVar9[1] = iVar35 + 0x30;
        pxVar10 = (xunknown8 *)((int8)piVar9 + iVar35 + 0x10);
        *pxVar10 = 0xd1878;
        *(xunknown1 *)((int8)piVar9 + iVar35 + 0x18) = 0x52;
        *(int8 *)((int8)piVar9 + iVar35 + 0x20) = iVar7;
        *(int8 *)((int8)piVar9 + iVar35 + 0x28) = iVar8;
        *(int8 *)((int8)piVar9 + iVar35 + 0x30) = iVar17;
        *(uint2 *)((int8)piVar9 + iVar35 + 0x19) =
             *(uint2 *)((int8)piVar9 + iVar35 + 0x19) & 0xf000 | 0x540;
        return pxVar10;
      }
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 != (int8 *)0x0) {
        iVar35 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
        goto code_r0x000b3ee4;
      }
      goto code_r0x000caa00;
    }
    if (cVar3 == 'x') {
      *param_1 = (int8)(pcVar20 + 2);
      iVar7 = FUN_000b0fa8();
      if (iVar7 == 0) {
        return (xunknown8 *)0x0;
      }
      iVar8 = FUN_000b3ca8(param_1);
      if (iVar8 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar34 = (int8 *)param_1[0x266];
      iVar17 = piVar34[1];
      piVar9 = piVar34;
      if (iVar17 - 0xfc0U < 0xfffffffffffff00f || iVar17 == -0x31) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar17 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar17 + 0x30;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar17 + 0x10);
      *pxVar10 = 0xd1808;
      *(xunknown1 *)((int8)piVar9 + iVar17 + 0x18) = 0x51;
      *(int8 *)((int8)piVar9 + iVar17 + 0x20) = iVar7;
      *(int8 *)((int8)piVar9 + iVar17 + 0x28) = iVar8;
      *(uint2 *)((int8)piVar9 + iVar17 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar17 + 0x19) & 0xf000 | 0x540;
      *(xunknown1 *)((int8)piVar9 + iVar17 + 0x30) = 1;
      return pxVar10;
    }
    if (cVar3 == 'i') {
      *param_1 = (int8)(pcVar20 + 2);
      iVar7 = FUN_000af0b4();
      if (iVar7 == 0) {
        return (xunknown8 *)0x0;
      }
      iVar8 = FUN_000b3ca8(param_1);
      if (iVar8 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar34 = (int8 *)param_1[0x266];
      iVar17 = piVar34[1];
      piVar9 = piVar34;
      if (iVar17 - 0xfc0U < 0xfffffffffffff00f || iVar17 == -0x31) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar17 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar17 + 0x30;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar17 + 0x10);
      *pxVar10 = 0xd1808;
      *(xunknown1 *)((int8)piVar9 + iVar17 + 0x18) = 0x51;
      *(int8 *)((int8)piVar9 + iVar17 + 0x20) = iVar7;
      *(int8 *)((int8)piVar9 + iVar17 + 0x28) = iVar8;
      *(xunknown1 *)((int8)piVar9 + iVar17 + 0x30) = 0;
      *(uint2 *)((int8)piVar9 + iVar17 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar17 + 0x19) & 0xf000 | 0x540;
      return pxVar10;
    }
  }
  ppiVar13 = (int8 **)axStack_a0;
  puVar36 = (uint1 *)*param_1;
  puVar37 = (uint1 *)param_1[1];
  uVar26 = (int8)puVar37 - (int8)puVar36;
  if (uVar26 < 2) {
    return (xunknown8 *)0x0;
  }
  bVar5 = *(int2 *)puVar36 == 0x7367;
  if (bVar5) {
    puVar36 = puVar36 + 2;
    uVar26 = (int8)puVar37 - (int8)puVar36;
    *param_1 = (int8)puVar36;
    if (uVar26 < 2) {
      return (xunknown8 *)0x0;
    }
    xVar21 = 1;
  }
  else {
    xVar21 = 0;
  }
  uVar29 = 0;
  uVar31 = 0x3d;
  puVar22 = puVar36 + 1;
  uVar1 = *puVar36;
  do {
    uVar32 = uVar29 + uVar31 >> 1;
    uVar2 = *(uint1 *)(uVar32 * 0x10 + 0xd0688);
    if ((uVar2 < uVar1) || ((uVar1 == uVar2 && (*(uint1 *)(uVar32 * 0x10 + 0xd0689) < *puVar22)))) {
      uVar29 = uVar32 + 1;
      uVar32 = uVar31;
    }
    uVar31 = uVar32;
  } while (uVar31 != uVar29);
  iVar7 = uVar29 * 0x10;
  if ((uVar1 == *(uint1 *)(iVar7 + 0xd0688)) && (*puVar22 == *(uint1 *)(iVar7 + 0xd0689))) {
    piVar9 = *(int8 **)(iVar7 + 0xd0690);
    puVar22 = puVar36 + 2;
    uVar1 = *(uint1 *)(iVar7 + 0xd068a);
    *param_1 = (int8)puVar22;
    xStack_28 = unaff_x23;
    uVar26 = strlen(piVar9);
    if (uVar1 < 0xb) {
      if ((uVar26 < 8) || (*piVar9 != 0x726f74617265706f)) goto code_r0x000b2364;
      uVar29 = uVar26 - 8;
      piVar34 = piVar9 + 1;
      if (uVar29 != 0) {
        if ((char)*piVar34 == ' ') {
          piVar34 = (int8 *)((int8)piVar9 + 9);
          uVar29 = uVar26 - 9;
        }
      }
    }
    else {
      piVar34 = piVar9;
      uVar29 = uVar26;
    }
    piStack_90 = piVar34;
    uStack_88 = uVar29;
    switch(uVar1) {
    case 0:
      uVar1 = *(uint1 *)(iVar7 + 0xd068b);
      iVar7 = FUN_000b0fa8(param_1);
      if (iVar7 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar33 = (int8 *)param_1[0x266];
      iVar8 = piVar33[1];
      piVar9 = piVar33;
      if (0xfffffffffffff00e < iVar8 - 0xfc0U && iVar8 != -0x31) {
code_r0x000b12c8:
        piVar9[1] = iVar8 + 0x30;
        pxVar10 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
        *pxVar10 = 0xd0ae8;
        *(xunknown1 *)((int8)piVar9 + iVar8 + 0x18) = 0x42;
        *(int8 **)((int8)piVar9 + iVar8 + 0x20) = piVar34;
        *(uint8 *)((int8)piVar9 + iVar8 + 0x28) = uVar29;
        *(int8 *)((int8)piVar9 + iVar8 + 0x30) = iVar7;
        *(uint2 *)((int8)piVar9 + iVar8 + 0x19) =
             *(uint2 *)((int8)piVar9 + iVar8 + 0x19) & 0xf000 | uVar1 >> 1 | 0x540;
        return pxVar10;
      }
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 != (int8 *)0x0) {
        iVar8 = 0;
        *piVar9 = (int8)piVar33;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
        goto code_r0x000b12c8;
      }
      goto code_r0x000caa00;
    case 1:
      if ((puVar22 == puVar37) || (*puVar22 != 0x5f)) {
        axStack_70._0_8_ = FUN_000b0fa8(param_1);
        if (axStack_70._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
        axStack_a0._0_4_ = (int4)*(char *)(iVar7 + 0xd068b) >> 1;
        pxVar10 = (xunknown8 *)FUN_000b23b8(param_1,axStack_70,&piStack_90,axStack_a0);
        return pxVar10;
      }
      cVar3 = *(char *)(iVar7 + 0xd068b);
      *param_1 = (int8)(puVar36 + 3);
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)cVar3 >> 1);
      axStack_70._0_8_ = piVar34;
      axStack_70._8_8_ = uVar29;
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pxVar10 = (xunknown8 *)FUN_000b59d4(param_1,axStack_70,axStack_a0,&iStack_80);
      return pxVar10;
    case 2:
      xStack_78 = CONCAT44((int4)*(char *)(iVar7 + 0xd068b) >> 1,(xunknown4)xStack_78);
      axStack_70._0_8_ = piVar34;
      axStack_70._8_8_ = uVar29;
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = FUN_000b0fa8(param_1);
      if (iStack_80 == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar10 = (xunknown8 *)
                FUN_000b54c4(param_1,axStack_a0,axStack_70,&iStack_80,(int8)&xStack_78 + 4);
      return pxVar10;
    case 3:
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar7 + 0xd068b) >> 1);
      pxVar10 = (xunknown8 *)FUN_000b2478(param_1,axStack_70,axStack_a0,&iStack_80);
      return pxVar10;
    case 4:
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar7 + 0xd068b) >> 1);
      pxVar10 = (xunknown8 *)FUN_000b2534(param_1,axStack_70,&piStack_90,axStack_a0,&iStack_80);
      return pxVar10;
    case 5:
      iVar8 = param_1[2];
      iVar17 = param_1[3];
      piVar9 = param_1 + 5;
      while ((puVar22 == puVar37 || (*puVar22 != 0x5f))) {
        iVar35 = FUN_000b0fa8(param_1);
        if (iVar35 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar11 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar9) {
            iVar6 = malloc(iVar11 * 2);
            if (iVar6 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar9) {
              memcpy(iVar6,piVar9,iVar11);
            }
            param_1[2] = iVar6;
          }
          else {
            iVar6 = realloc();
            param_1[2] = iVar6;
            if (iVar6 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar6 + iVar11);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar6 + (iVar11 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar35;
        puVar37 = (uint1 *)param_1[1];
        puVar22 = (uint1 *)*param_1;
      }
      *param_1 = (int8)(puVar22 + 1);
      axStack_70 = FUN_000adec4(param_1,iVar17 - iVar8 >> 3);
      iStack_80 = FUN_000abd5c(param_1);
      if (iStack_80 == 0) {
        return (xunknown8 *)0x0;
      }
      uVar26 = FUN_000ab0bc(param_1,0x30d42,2);
      iVar8 = param_1[2];
      iVar17 = param_1[3];
      if ((uVar26 & 1) != 0) {
        do {
          pcVar20 = (char *)*param_1;
          if ((pcVar20 != (char *)param_1[1]) && (*pcVar20 == 'E')) goto code_r0x000b1d14;
          iVar35 = FUN_000b0fa8(param_1);
          if (iVar35 == 0) {
            return (xunknown8 *)0x0;
          }
          piVar34 = (int8 *)param_1[3];
          if (piVar34 == (int8 *)param_1[4]) {
            iVar11 = (int8)piVar34 - param_1[2];
            if ((int8 *)param_1[2] == piVar9) {
              iVar6 = malloc(iVar11 * 2);
              if (iVar6 == 0) goto code_r0x000ca7b0;
              if (piVar34 != piVar9) {
                memcpy(iVar6,piVar9,iVar11);
              }
              param_1[2] = iVar6;
            }
            else {
              iVar6 = realloc();
              param_1[2] = iVar6;
              if (iVar6 == 0) goto code_r0x000ca7b0;
            }
            piVar34 = (int8 *)(iVar6 + iVar11);
            param_1[3] = (int8)piVar34;
            param_1[4] = iVar6 + (iVar11 >> 2) * 8;
          }
          param_1[3] = (int8)(piVar34 + 1);
          *piVar34 = iVar35;
        } while( true );
      }
      pcVar20 = (char *)*param_1;
      if ((pcVar20 != (char *)param_1[1]) && (*pcVar20 == 'E')) {
code_r0x000b1d14:
        *param_1 = (int8)(pcVar20 + 1);
        axStack_a0 = FUN_000adec4(param_1,iVar17 - iVar8 >> 3);
        xStack_78 = CONCAT44((int4)*(char *)(iVar7 + 0xd068b) >> 1,(xunknown4)xStack_78);
        pxVar10 = (xunknown8 *)
                  FUN_000b2600(param_1,axStack_70,&iStack_80,axStack_a0,xVar21,
                               (int4)*(char *)(iVar7 + 0xd068b) & 1,(int8)&xStack_78 + 4);
        return pxVar10;
      }
      break;
    case 6:
      iVar8 = FUN_000b0fa8(param_1);
      if (iVar8 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar34 = (int8 *)param_1[0x266];
      uVar1 = *(uint1 *)(iVar7 + 0xd068b);
      iVar7 = piVar34[1];
      piVar9 = piVar34;
      if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar7 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar7 + 0x20;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
      *pxVar10 = 0xd0d18;
      *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x41;
      *(int8 *)((int8)piVar9 + iVar7 + 0x20) = iVar8;
      *(xunknown1 *)((int8)piVar9 + iVar7 + 0x28) = xVar21;
      *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | uVar1 >> 1 | 0x540;
      *(uint1 *)((int8)piVar9 + iVar7 + 0x29) = uVar1 & 1;
      return pxVar10;
    case 7:
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iVar8 = param_1[2];
      iVar17 = param_1[3];
      piVar9 = param_1 + 5;
      while ((pcVar20 = (char *)*param_1, pcVar20 == (char *)param_1[1] || (*pcVar20 != 'E'))) {
        iVar35 = FUN_000b0fa8(param_1);
        if (iVar35 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar11 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar9) {
            iVar6 = malloc(iVar11 * 2);
            if (iVar6 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar9) {
              memcpy(iVar6,piVar9,iVar11);
            }
            param_1[2] = iVar6;
          }
          else {
            iVar6 = realloc();
            param_1[2] = iVar6;
            if (iVar6 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar6 + iVar11);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar6 + (iVar11 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar35;
      }
      *param_1 = (int8)(pcVar20 + 1);
      axStack_70 = FUN_000adec4(param_1,iVar17 - iVar8 >> 3);
      iVar15 = (int4)*(char *)(iVar7 + 0xd068b) >> 1;
      goto code_r0x000b1ea4;
    case 8:
      iVar8 = param_1[0x61];
      *(xunknown1 *)(param_1 + 0x61) = 0;
      axStack_a0._0_8_ = FUN_000abd5c(param_1);
      *(char *)(param_1 + 0x61) = (char)iVar8;
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pcVar20 = (char *)*param_1;
      pcVar23 = (char *)param_1[1];
      iVar8 = param_1[3] - param_1[2] >> 3;
      if (pcVar20 == pcVar23) {
code_r0x000b1ee8:
        iVar17 = FUN_000b0fa8(param_1);
        if (iVar17 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar9 = (int8 *)param_1[3];
        if (piVar9 == (int8 *)param_1[4]) {
          piVar34 = param_1 + 5;
          iVar35 = (int8)piVar9 - param_1[2];
          if ((int8 *)param_1[2] == piVar34) {
            iVar11 = malloc(iVar35 * 2);
            if (iVar11 == 0) goto code_r0x000ca7b0;
            if (piVar9 != piVar34) {
              memcpy(iVar11,piVar34,iVar35);
            }
            param_1[2] = iVar11;
          }
          else {
            iVar11 = realloc();
            param_1[2] = iVar11;
            if (iVar11 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar10 = (xunknown8 *)(*got_abort)();
              return pxVar10;
            }
          }
          piVar9 = (int8 *)(iVar11 + iVar35);
          param_1[3] = (int8)piVar9;
          param_1[4] = iVar11 + (iVar35 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar9 + 1);
        *piVar9 = iVar17;
        axStack_70 = FUN_000adec4(param_1,iVar8);
      }
      else {
        cVar3 = *pcVar20;
        if (cVar3 == '_') {
          pcVar20 = pcVar20 + 1;
          piVar9 = param_1 + 5;
          *param_1 = (int8)pcVar20;
          do {
            if ((pcVar20 != pcVar23) && (*pcVar20 == 'E')) goto code_r0x000b1ec4;
            iVar17 = FUN_000b0fa8(param_1);
            if (iVar17 == 0) {
              return (xunknown8 *)0x0;
            }
            piVar34 = (int8 *)param_1[3];
            if (piVar34 == (int8 *)param_1[4]) {
              iVar35 = (int8)piVar34 - param_1[2];
              if ((int8 *)param_1[2] == piVar9) {
                iVar11 = malloc(iVar35 * 2);
                if (iVar11 == 0) goto code_r0x000ca7b0;
                if (piVar34 != piVar9) {
                  memcpy(iVar11,piVar9,iVar35);
                }
                param_1[2] = iVar11;
              }
              else {
                iVar11 = realloc();
                param_1[2] = iVar11;
                if (iVar11 == 0) goto code_r0x000ca7b0;
              }
              piVar34 = (int8 *)(iVar11 + iVar35);
              param_1[3] = (int8)piVar34;
              param_1[4] = iVar11 + (iVar35 >> 2) * 8;
            }
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = iVar17;
            pcVar20 = (char *)*param_1;
            pcVar23 = (char *)param_1[1];
          } while( true );
        }
        if (cVar3 != 'E') goto code_r0x000b1ee8;
code_r0x000b1ec4:
        *param_1 = (int8)(pcVar20 + 1);
        axStack_70 = FUN_000adec4(param_1,iVar8);
        if (cVar3 == '_') goto code_r0x000b21a8;
      }
      if (axStack_70._8_8_ == 1) {
code_r0x000b21a8:
        iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar7 + 0xd068b) >> 1);
        pxVar10 = (xunknown8 *)FUN_000b27b4(param_1,axStack_a0,axStack_70,&iStack_80);
        return pxVar10;
      }
      break;
    case 9:
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = FUN_000b0fa8(param_1);
      if (iStack_80 == 0) {
        return (xunknown8 *)0x0;
      }
      xStack_78 = CONCAT44((int4)*(char *)(iVar7 + 0xd068b) >> 1,(xunknown4)xStack_78);
      pxVar10 = (xunknown8 *)
                FUN_000b2874(param_1,axStack_70,axStack_a0,&iStack_80,(int8)&xStack_78 + 4);
      return pxVar10;
    case 10:
      return (xunknown8 *)0x0;
    case 0xb:
      axStack_70._0_8_ = FUN_000abd5c(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      axStack_a0._0_8_ = FUN_000b0fa8(param_1);
      if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iStack_80 = CONCAT44(iStack_80._4_4_,(int4)*(char *)(iVar7 + 0xd068b) >> 1);
      pxVar10 = (xunknown8 *)FUN_000b293c(param_1,&piStack_90,axStack_70,axStack_a0,&iStack_80);
      return pxVar10;
    case 0xc:
      uVar1 = *(uint1 *)(iVar7 + 0xd068b);
      if ((uVar1 & 1) == 0) {
        iVar7 = FUN_000b0fa8(param_1);
      }
      else {
        iVar7 = FUN_000abd5c(param_1);
      }
      if (iVar7 != 0) {
        piVar33 = (int8 *)param_1[0x266];
        iVar8 = piVar33[1];
        piVar9 = piVar33;
        if (iVar8 - 0xfb0U < 0xfffffffffffff00f || iVar8 == -0x41) {
          piVar9 = (int8 *)malloc(0x1000);
          if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
          iVar8 = 0;
          *piVar9 = (int8)piVar33;
          piVar9[1] = 0;
          param_1[0x266] = (int8)piVar9;
        }
        piVar9[1] = iVar8 + 0x40;
        pxVar10 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
        *pxVar10 = 0xd0f48;
        *(xunknown1 *)((int8)piVar9 + iVar8 + 0x18) = 0x3c;
        *(int8 **)((int8)piVar9 + iVar8 + 0x20) = piVar34;
        *(uint8 *)((int8)piVar9 + iVar8 + 0x28) = uVar29;
        *(xunknown8 *)((int8)piVar9 + iVar8 + 0x38) = 0;
        *(xunknown8 *)((int8)piVar9 + iVar8 + 0x40) = 0;
        *(int8 *)((int8)piVar9 + iVar8 + 0x30) = iVar7;
        *(uint2 *)((int8)piVar9 + iVar8 + 0x19) =
             *(uint2 *)((int8)piVar9 + iVar8 + 0x19) & 0xf000 | (uint2)(uVar1 >> 1) | 0x540;
        return pxVar10;
      }
      break;
    default:
      *(xunknown1 *)(param_1 + 0x61) = xVar21;
      axVar39 = FUN_000c5688();
      piVar34 = *(int8 **)(axVar39._0_8_ + 0x1330);
      iVar7 = piVar34[1];
      piVar9 = piVar34;
      if (iVar7 - 0xfc0U < 0xfffffffffffff00f || iVar7 == -0x31) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar7 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        *(int8 **)(axVar39._0_8_ + 0x1330) = piVar9;
      }
      piVar9[1] = iVar7 + 0x30;
      xVar27 = *axVar39._8_8_;
      xVar38 = param_3[1];
      xVar14 = *param_3;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
      *pxVar10 = 0xd0b58;
      uVar4 = *param_4;
      *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x38;
      *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = xVar27;
      *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | uVar4 & 0x3f | 0x540;
      *(xunknown8 *)((int8)piVar9 + iVar7 + 0x30) = xVar38;
      *(xunknown8 *)((int8)piVar9 + iVar7 + 0x28) = xVar14;
      return pxVar10;
    }
    return (xunknown8 *)0x0;
  }
  xStack_28 = unaff_x30;
  if (uVar1 == 0x66) {
    if ((*puVar22 == 0x70) ||
       (((uVar26 != 2 && (*puVar22 == 0x4c)) && (0xfffffff5 < puVar36[2] - 0x3a)))) {
      piVar18 = (int2 *)*param_1;
      puVar36 = (uint1 *)param_1[1];
      if ((uint8)((int8)puVar36 - (int8)piVar18) < 3) {
        if ((int8)puVar36 - (int8)piVar18 != 2) {
          return (xunknown8 *)0x0;
        }
      }
      else if (*piVar18 == 0x7066 && (char)piVar18[1] == 'T') {
        piVar34 = (int8 *)param_1[0x266];
        *param_1 = (int8)piVar18 + 3;
        iVar7 = piVar34[1];
        piVar9 = piVar34;
        if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
          piVar9 = (int8 *)malloc(0x1000);
          if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
          iVar7 = 0;
          *piVar9 = (int8)piVar34;
          piVar9[1] = 0;
          param_1[0x266] = (int8)piVar9;
        }
        piVar9[1] = iVar7 + 0x20;
        pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
        *pxVar10 = 0xd0548;
        *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 8;
        *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
             *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
        *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = 0x40aca;
        *(xunknown8 *)((int8)piVar9 + iVar7 + 0x28) = 4;
        return pxVar10;
      }
      if (*piVar18 != 0x7066) {
        if (*piVar18 == 0x4c66) {
          puVar37 = (uint1 *)(piVar18 + 1);
          *param_1 = (int8)puVar37;
          if ((puVar36 != puVar37) && (0xfffffff5 < *puVar37 - 0x3a)) {
            puVar22 = puVar37;
            do {
              if (*puVar22 - 0x3a < 0xfffffff6) goto code_r0x000b39a4;
              puVar22 = puVar22 + 1;
              *param_1 = (int8)puVar22;
            } while (puVar22 != puVar36);
            puVar22 = puVar36;
code_r0x000b39a4:
            if (puVar22 == puVar37) {
              return (xunknown8 *)0x0;
            }
            if (puVar22 == puVar36) {
              return (xunknown8 *)0x0;
            }
            if (*puVar22 == 0x70) {
              puVar37 = puVar22 + 1;
              *param_1 = (int8)puVar37;
              if (puVar37 != puVar36) {
                if (*puVar37 == 0x72) {
                  puVar37 = puVar22 + 2;
                  *param_1 = (int8)puVar37;
                }
                if (puVar37 != puVar36) {
                  if (*puVar37 == 0x56) {
                    puVar37 = puVar37 + 1;
                    *param_1 = (int8)puVar37;
                  }
                  if (puVar37 != puVar36) {
                    if (*puVar37 == 0x4b) {
                      puVar37 = puVar37 + 1;
                      *param_1 = (int8)puVar37;
                    }
                    if (puVar36 != puVar37) {
                      if (0xfffffff5 < *puVar37 - 0x3a) {
                        do {
                          if (*puVar37 - 0x3a < 0xfffffff6) goto code_r0x000b3c54;
                          puVar37 = puVar37 + 1;
                          *param_1 = (int8)puVar37;
                        } while (puVar37 != puVar36);
                        puVar37 = puVar36;
                      }
code_r0x000b3c54:
                      if ((puVar37 != puVar36) && (*puVar37 == 0x5f)) {
                        *param_1 = (int8)(puVar37 + 1);
                        pxVar10 = (xunknown8 *)FUN_000ba324(param_1,axStack_70 + 0x30);
                        return pxVar10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return (xunknown8 *)0x0;
      }
      puVar37 = (uint1 *)(piVar18 + 1);
      *param_1 = (int8)puVar37;
      if (puVar37 == puVar36) {
        return (xunknown8 *)0x0;
      }
      if (*puVar37 == 0x72) {
        puVar37 = (uint1 *)((int8)piVar18 + 3);
        *param_1 = (int8)puVar37;
      }
      if (puVar37 == puVar36) {
        return (xunknown8 *)0x0;
      }
      if (*puVar37 == 0x56) {
        puVar37 = puVar37 + 1;
        *param_1 = (int8)puVar37;
      }
      if (puVar37 == puVar36) {
        return (xunknown8 *)0x0;
      }
      if (*puVar37 == 0x4b) {
        puVar37 = puVar37 + 1;
        *param_1 = (int8)puVar37;
      }
      if (puVar36 == puVar37) {
        return (xunknown8 *)0x0;
      }
      puVar22 = puVar37;
      if (*puVar37 - 0x3a < 0xfffffff6) {
        iVar7 = 0;
        puVar37 = (uint1 *)0x0;
      }
      else {
        puVar25 = puVar37;
        do {
          if (*puVar22 - 0x3a < 0xfffffff6) goto code_r0x000b3b7c;
          puVar22 = puVar22 + 1;
          puVar25 = puVar25 + 1;
          *param_1 = (int8)puVar22;
        } while (puVar22 != puVar36);
        puVar25 = puVar36;
        puVar22 = puVar36;
code_r0x000b3b7c:
        iVar7 = (int8)puVar25 - (int8)puVar37;
      }
      if (puVar22 == puVar36) {
        return (xunknown8 *)0x0;
      }
      if (*puVar22 != 0x5f) {
        return (xunknown8 *)0x0;
      }
      piVar34 = (int8 *)param_1[0x266];
      *param_1 = (int8)(puVar22 + 1);
      iVar8 = piVar34[1];
      piVar9 = piVar34;
      if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar8 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar8 + 0x20;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
      *pxVar10 = 0xd16b8;
      *(uint1 **)((int8)piVar9 + iVar8 + 0x20) = puVar37;
      *(int8 *)((int8)piVar9 + iVar8 + 0x28) = iVar7;
      *(xunknown1 *)((int8)piVar9 + iVar8 + 0x18) = 0x43;
      *(uint2 *)((int8)piVar9 + iVar8 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar8 + 0x19) & 0xf000 | 0x540;
      return pxVar10;
    }
    if (puVar36 == puVar37) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)puVar22;
    if (puVar37 == puVar22) {
      return (xunknown8 *)0x0;
    }
    uVar26 = (uint8)(*puVar22 - 0x4c);
    if (0x26 < *puVar22 - 0x4c) {
      return (xunknown8 *)0x0;
    }
    if ((0x4100000041U >> (uVar26 & 0x3f) & 1) == 0) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)(puVar36 + 2);
    if ((uint8)((int8)puVar37 - (int8)(puVar36 + 2)) < 2) {
      return (xunknown8 *)0x0;
    }
    uVar29 = 0;
    uVar1 = puVar36[2];
    uVar32 = 0x3fffffffbfU >> (uVar26 & 0x3f) & 1;
    uVar31 = 0x3d;
    do {
      uVar30 = uVar29 + uVar31 >> 1;
      uVar2 = *(uint1 *)(uVar30 * 0x10 + 0xd0688);
      if ((uVar2 < uVar1) ||
         ((uVar1 == uVar2 && (*(uint1 *)(uVar30 * 0x10 + 0xd0689) < puVar36[3])))) {
        uVar29 = uVar30 + 1;
        uVar30 = uVar31;
      }
      uVar31 = uVar30;
    } while (uVar31 != uVar29);
    iVar7 = uVar29 * 0x10;
    if (uVar1 != *(uint1 *)(iVar7 + 0xd0688)) {
      return (xunknown8 *)0x0;
    }
    if (puVar36[3] != *(uint1 *)(iVar7 + 0xd0689)) {
      return (xunknown8 *)0x0;
    }
    cVar3 = *(char *)(iVar7 + 0xd068a);
    *param_1 = (int8)(puVar36 + 4);
    xStack_28 = unaff_x23;
    if (cVar3 != '\x02') {
      if (cVar3 != '\x04') {
        return (xunknown8 *)0x0;
      }
      iVar17 = *(int8 *)(iVar7 + 0xd0690);
      iVar8 = strlen(iVar17);
      if (*(char *)(iVar17 + iVar8 + -1) != '*') {
        return (xunknown8 *)0x0;
      }
    }
    iVar8 = FUN_000b0fa8(param_1);
    if (iVar8 == 0) {
      return (xunknown8 *)0x0;
    }
    iVar17 = iVar8;
    if ((0x3effffffffU >> (uVar26 & 0x3f) & 1) == 0) {
      iVar35 = 0;
    }
    else {
      iVar35 = FUN_000b0fa8(param_1);
      if (iVar35 == 0) {
        return (xunknown8 *)0x0;
      }
      if (uVar32 != 0) {
        iVar17 = iVar35;
        iVar35 = iVar8;
      }
    }
    piVar9 = *(int8 **)(iVar7 + 0xd0690);
    uVar26 = strlen(piVar9);
    if ((7 < uVar26) && (*piVar9 == 0x726f74617265706f)) {
      iVar7 = uVar26 - 8;
      piVar34 = piVar9 + 1;
      if ((iVar7 != 0) && ((char)*piVar34 == ' ')) {
        piVar34 = (int8 *)((int8)piVar9 + 9);
        iVar7 = uVar26 - 9;
      }
      piVar33 = (int8 *)param_1[0x266];
      iVar8 = piVar33[1];
      piVar9 = piVar33;
      if (iVar8 - 0xfb0U < 0xfffffffffffff00f || iVar8 == -0x41) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar8 = 0;
        *piVar9 = (int8)piVar33;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar8 + 0x40;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
      *pxVar10 = 0xd1728;
      *(xunknown1 *)((int8)piVar9 + iVar8 + 0x18) = 0x47;
      *(int8 *)((int8)piVar9 + iVar8 + 0x20) = iVar17;
      *(int8 *)((int8)piVar9 + iVar8 + 0x28) = iVar35;
      *(int8 **)((int8)piVar9 + iVar8 + 0x30) = piVar34;
      *(int8 *)((int8)piVar9 + iVar8 + 0x38) = iVar7;
      *(uint2 *)((int8)piVar9 + iVar8 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar8 + 0x19) & 0xf000 | 0x540;
      *(char *)((int8)piVar9 + iVar8 + 0x40) = (char)uVar32;
      return pxVar10;
    }
code_r0x000b2364:
    FUN_000a8dc8(0x23e56 /* "%s:%d: %s" */,0x32121 /* "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h" */,0xb4a,0x2d36d /* "operator name does not start with 'operator'" */);
    goto code_r0x000ca7b0;
  }
  if (uVar1 == 0x54) {
    puVar36 = (uint1 *)*param_1;
    puVar37 = (uint1 *)param_1[1];
    if ((puVar36 == puVar37) || (*puVar36 != 0x54)) {
      return (xunknown8 *)0x0;
    }
    puVar22 = puVar36 + 1;
    *param_1 = (int8)puVar22;
    if (puVar22 == puVar37) {
      return (xunknown8 *)0x0;
    }
    if (*puVar22 == 0x4c) {
      puVar22 = puVar36 + 2;
      *param_1 = (int8)puVar22;
      if (puVar37 == puVar22) {
        return (xunknown8 *)0x0;
      }
      if (*puVar22 - 0x3a < 0xfffffff6) {
        return (xunknown8 *)0x0;
      }
      iVar7 = 0;
      puVar25 = puVar36 + 4;
      do {
        puVar22 = puVar25;
        puVar28 = puVar22 + -1;
        *param_1 = (int8)puVar28;
        iVar8 = (uint8)puVar22[-2] + iVar7 * 10;
        iVar7 = iVar8 + -0x30;
        if (puVar28 == puVar37) break;
        puVar25 = puVar22 + 1;
      } while (puVar22[-1] - 0x30 < 10);
      if (puVar28 == puVar37) {
        return (xunknown8 *)0x0;
      }
      if (puVar22[-1] != 0x5f) {
        return (xunknown8 *)0x0;
      }
      uVar26 = iVar8 - 0x2f;
      *param_1 = (int8)puVar22;
    }
    else {
      uVar26 = 0;
    }
    if (puVar22 == puVar37) {
      return (xunknown8 *)0x0;
    }
    if (*puVar22 == 0x5f) {
      uVar29 = 0;
      cVar3 = *(char *)((int8)param_1 + 0x30a);
      *param_1 = (int8)(puVar22 + 1);
    }
    else {
      if (*puVar22 - 0x3a < 0xfffffff6) {
        return (xunknown8 *)0x0;
      }
      iVar7 = 0;
      do {
        puVar25 = puVar22;
        puVar22 = puVar25 + 1;
        *param_1 = (int8)puVar22;
        iVar8 = (uint8)*puVar25 + iVar7 * 10;
        iVar7 = iVar8 + -0x30;
        if (puVar22 == puVar37) break;
      } while (*puVar22 - 0x30 < 10);
      if (puVar22 == puVar37) {
        return (xunknown8 *)0x0;
      }
      if (*puVar22 != 0x5f) {
        return (xunknown8 *)0x0;
      }
      uVar29 = iVar8 - 0x2f;
      cVar3 = *(char *)((int8)param_1 + 0x30a);
      *param_1 = (int8)(puVar25 + 2);
    }
    if (cVar3 != '\0') {
      piVar34 = (int8 *)param_1[0x266];
      iVar7 = piVar34[1];
      piVar9 = piVar34;
      if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
        xStack_28 = unaff_x23;
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar7 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar7 + 0x20;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
      *pxVar10 = 0xd0548;
      *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 8;
      *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
      *(uint1 **)((int8)piVar9 + iVar7 + 0x20) = puVar36;
      *(int8 *)((int8)piVar9 + iVar7 + 0x28) = (int8)puVar22 - (int8)puVar36;
      return pxVar10;
    }
    if ((*(char *)((int8)param_1 + 0x309) == '\0') || (uVar26 != 0)) {
      uVar31 = param_1[0x54] - param_1[0x53] >> 3;
      if ((uVar26 < uVar31) &&
         ((piVar9 = *(int8 **)(param_1[0x53] + uVar26 * 8), piVar9 != (int8 *)0x0 &&
          (uVar29 < (uint8)(piVar9[1] - *piVar9 >> 3))))) {
        return *(xunknown8 **)(*piVar9 + uVar29 * 8);
      }
      if (uVar31 < uVar26) {
        return (xunknown8 *)0x0;
      }
      if (param_1[0x62] != uVar26) {
        return (xunknown8 *)0x0;
      }
      if (uVar26 == uVar31) {
        FUN_000b0b1c(param_1 + 0x53,axStack_70 + 0x28);
      }
      piVar34 = (int8 *)param_1[0x266];
      iVar7 = piVar34[1];
      piVar9 = piVar34;
      if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
        iVar7 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar7 + 0x20;
      xVar27 = strlen(0x25c16 /* "auto" */);
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
      *pxVar10 = 0xd0548;
      *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 8;
      *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = 0x25c16;
      *(xunknown8 *)((int8)piVar9 + iVar7 + 0x28) = xVar27;
      *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
      return pxVar10;
    }
    piVar34 = (int8 *)param_1[0x266];
    iVar7 = piVar34[1];
    piVar9 = piVar34;
    if (iVar7 - 0xfc0U < 0xfffffffffffff00f || iVar7 == -0x31) {
      xStack_28 = unaff_x23;
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar7 = 0;
      *piVar9 = (int8)piVar34;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar7 + 0x30;
    pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
    *pxVar10 = 0xd0628;
    *(uint8 *)((int8)piVar9 + iVar7 + 0x20) = uVar29;
    *(xunknown8 *)((int8)piVar9 + iVar7 + 0x28) = 0;
    *(xunknown1 *)((int8)piVar9 + iVar7 + 0x30) = 0;
    *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
         *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0xa80;
    piVar34 = (int8 *)param_1[0x5b];
    piVar33 = (int8 *)param_1[0x5c];
    *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x2c;
    if (piVar34 == piVar33) {
      piVar9 = (int8 *)param_1[0x5a];
      iVar7 = (int8)piVar34 - (int8)piVar9;
      if (piVar9 == param_1 + 0x5d) {
        iVar8 = malloc(iVar7 * 2);
        if (iVar8 == 0) goto code_r0x000ca7b0;
        if (piVar34 != piVar9) {
          memmove(iVar8,piVar9,iVar7);
        }
        param_1[0x5a] = iVar8;
      }
      else {
        iVar8 = realloc(piVar9);
        param_1[0x5a] = iVar8;
        if (iVar8 == 0) goto code_r0x000ca7b0;
      }
      piVar34 = (int8 *)(iVar8 + iVar7);
      param_1[0x5c] = iVar8 + (iVar7 >> 2) * 8;
    }
    param_1[0x5b] = (int8)(piVar34 + 1);
    *piVar34 = (int8)pxVar10;
    return pxVar10;
  }
  if (uVar1 != 0x4c) {
    if (*(int2 *)puVar36 == 0x6c69) {
      iVar7 = param_1[2];
      iVar8 = param_1[3];
      piVar9 = param_1 + 5;
      puVar36 = puVar36 + 2;
      *param_1 = (int8)puVar36;
      do {
        if ((puVar36 != puVar37) && (*puVar36 == 0x45)) {
          *param_1 = (int8)(puVar36 + 1);
          axStack_70 = FUN_000adec4(param_1,iVar8 - iVar7 >> 3);
          pxVar10 = (xunknown8 *)FUN_000b3f3c(param_1,axStack_70);
          return pxVar10;
        }
        iVar17 = FUN_000b3ca8(param_1);
        if (iVar17 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar35 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar9) {
            iVar11 = malloc(iVar35 * 2);
            if (iVar11 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar9) {
              memcpy(iVar11,piVar9,iVar35);
            }
            param_1[2] = iVar11;
          }
          else {
            iVar11 = realloc();
            param_1[2] = iVar11;
            if (iVar11 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar11 + iVar35);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar11 + (iVar35 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar17;
        puVar36 = (uint1 *)*param_1;
        puVar37 = (uint1 *)param_1[1];
      } while( true );
    }
    uVar26 = (int8)puVar37 - (int8)puVar36;
    if (1 < uVar26) {
      if (*(int2 *)puVar36 == 0x636d) {
        *param_1 = (int8)(puVar36 + 2);
        xStack_28 = unaff_x23;
        iVar7 = FUN_000abd5c();
        if ((iVar7 == 0) || (iVar8 = FUN_000b0fa8(param_1), iVar8 == 0)) {
          return (xunknown8 *)0x0;
        }
        puVar37 = (uint1 *)*param_1;
        puVar22 = (uint1 *)param_1[1];
        puVar36 = puVar37;
        if ((puVar37 != puVar22) && (*puVar37 == 0x6e)) {
          puVar36 = puVar37 + 1;
          *param_1 = (int8)puVar36;
        }
        if (puVar22 != puVar36) {
          if (*puVar36 - 0x3a < 0xfffffff6) {
            puVar37 = (uint1 *)0x0;
            iVar17 = 0;
          }
          else {
            do {
              if (*puVar36 - 0x3a < 0xfffffff6) goto code_r0x000b408c;
              puVar36 = puVar36 + 1;
              *param_1 = (int8)puVar36;
            } while (puVar36 != puVar22);
            puVar36 = puVar22;
code_r0x000b408c:
            iVar17 = (int8)puVar36 - (int8)puVar37;
          }
          if ((puVar36 != puVar22) && (*puVar36 == 0x45)) {
            piVar34 = (int8 *)param_1[0x266];
            *param_1 = (int8)(puVar36 + 1);
            iVar35 = piVar34[1];
            piVar9 = piVar34;
            if (iVar35 - 0xfc0U < 0xfffffffffffff00f || iVar35 == -0x31) {
              piVar9 = (int8 *)malloc(0x1000);
              if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
              iVar35 = 0;
              *piVar9 = (int8)piVar34;
              piVar9[1] = 0;
              param_1[0x266] = (int8)piVar9;
            }
            piVar9[1] = iVar35 + 0x30;
            pxVar10 = (xunknown8 *)((int8)piVar9 + iVar35 + 0x10);
            *pxVar10 = 0xd1958;
            *(xunknown1 *)((int8)piVar9 + iVar35 + 0x18) = 0x45;
            *(int8 *)((int8)piVar9 + iVar35 + 0x20) = iVar7;
            *(int8 *)((int8)piVar9 + iVar35 + 0x28) = iVar8;
            *(uint1 **)((int8)piVar9 + iVar35 + 0x30) = puVar37;
            *(int8 *)((int8)piVar9 + iVar35 + 0x38) = iVar17;
            *(uint2 *)((int8)piVar9 + iVar35 + 0x19) =
                 *(uint2 *)((int8)piVar9 + iVar35 + 0x19) & 0xf000 | 0x542;
            return pxVar10;
          }
        }
        return (xunknown8 *)0x0;
      }
      if (*(int2 *)puVar36 == 0x786e) {
        *param_1 = (int8)(puVar36 + 2);
        axStack_70._0_8_ = FUN_000b0fa8(param_1);
        if (axStack_70._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
        piStack_90 = (int8 *)CONCAT44(piStack_90._4_4_,2);
        pxVar10 = (xunknown8 *)FUN_000b415c(param_1,axStack_70,&piStack_90);
        return pxVar10;
      }
    }
    if (((puVar37 == puVar36) || (uVar26 < 2)) || (uVar1 != 0x72)) {
      if (1 < uVar26) goto code_r0x000b14b0;
    }
    else {
      if ((*puVar22 | 0x20) == 0x71) {
        piVar18 = (int2 *)*param_1;
        piVar24 = (int2 *)param_1[1];
        if ((uint8)((int8)piVar24 - (int8)piVar18) < 2) {
          return (xunknown8 *)0x0;
        }
        if (*piVar18 == 0x5172) {
          iVar7 = param_1[2];
          iVar8 = param_1[3];
          piVar18 = piVar18 + 1;
          piVar9 = param_1 + 5;
          *param_1 = (int8)piVar18;
          xStack_28 = unaff_x23;
          while ((piVar18 == piVar24 || ((char)*piVar18 != '_'))) {
            iVar17 = FUN_000abd5c(param_1);
            if (iVar17 == 0) {
              return (xunknown8 *)0x0;
            }
            piVar34 = (int8 *)param_1[3];
            if (piVar34 == (int8 *)param_1[4]) {
              iVar35 = (int8)piVar34 - param_1[2];
              if ((int8 *)param_1[2] == piVar9) {
                iVar11 = malloc(iVar35 * 2);
                if (iVar11 == 0) goto code_r0x000ca7b0;
                if (piVar34 != piVar9) {
                  memcpy(iVar11,piVar9,iVar35);
                }
                param_1[2] = iVar11;
              }
              else {
                iVar11 = realloc();
                param_1[2] = iVar11;
                if (iVar11 == 0) goto code_r0x000ca7b0;
              }
              piVar34 = (int8 *)(iVar11 + iVar35);
              param_1[4] = iVar11 + (iVar35 >> 2) * 8;
            }
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = iVar17;
            piVar24 = (int2 *)param_1[1];
            piVar18 = (int2 *)*param_1;
          }
          *param_1 = (int8)((int8)piVar18 + 1);
          axVar39 = FUN_000adec4(param_1,iVar8 - iVar7 >> 3);
          piVar18 = (int2 *)*param_1;
          if (piVar18 == (int2 *)param_1[1]) {
            return (xunknown8 *)0x0;
          }
        }
        else {
          if (*piVar18 != 0x7172) {
            return (xunknown8 *)0x0;
          }
          axVar39 = ZEXT816(0);
          piVar18 = piVar18 + 1;
          *param_1 = (int8)piVar18;
          xStack_28 = unaff_x23;
          if (piVar18 == piVar24) {
            return (xunknown8 *)0x0;
          }
        }
        piVar9 = param_1 + 5;
        axStack_70._8_8_ = param_1[3] - param_1[2] >> 3;
        do {
          xStack_78 = axVar39._8_8_;
          axStack_70._0_8_ = axVar39._0_8_;
          if ((char)*piVar18 == 'X') {
            *param_1 = (int8)((int8)piVar18 + 1);
            iVar7 = FUN_000b0fa8(param_1);
            if (iVar7 == 0) {
              return (xunknown8 *)0x0;
            }
            pcVar20 = (char *)*param_1;
            pcVar23 = (char *)param_1[1];
            if ((pcVar20 == pcVar23) || (*pcVar20 != 'N')) {
              xVar21 = 0;
              if (pcVar20 != pcVar23) goto code_r0x000b44a0;
code_r0x000b441c:
              iVar8 = 0;
code_r0x000b44c8:
              piVar33 = (int8 *)param_1[0x266];
              iVar17 = piVar33[1];
              piVar34 = piVar33;
              if (iVar17 - 0xfc0U < 0xfffffffffffff00f || iVar17 == -0x31) {
code_r0x000b45b0:
                piVar33 = (int8 *)malloc(0x1000);
                if (piVar33 == (int8 *)0x0) goto code_r0x000caa00;
                iVar17 = 0;
                *piVar33 = (int8)piVar34;
                piVar33[1] = 0;
                param_1[0x266] = (int8)piVar33;
              }
            }
            else {
              pcVar20 = pcVar20 + 1;
              xVar21 = 1;
              *param_1 = (int8)pcVar20;
              if (pcVar20 == pcVar23) goto code_r0x000b441c;
code_r0x000b44a0:
              if (*pcVar20 == 'R') {
                *param_1 = (int8)(pcVar20 + 1);
                iVar8 = FUN_000ad294(param_1,0);
                if (iVar8 == 0) {
                  return (xunknown8 *)0x0;
                }
                goto code_r0x000b44c8;
              }
              iVar8 = 0;
              piVar33 = (int8 *)param_1[0x266];
              iVar17 = piVar33[1];
              piVar34 = piVar33;
              if (iVar17 - 0xfc0U < 0xfffffffffffff00f || iVar17 == -0x31) goto code_r0x000b45b0;
            }
            piVar33[1] = iVar17 + 0x30;
            pxVar10 = (xunknown8 *)((int8)piVar33 + iVar17 + 0x10);
            *pxVar10 = 0xd19c8;
            *(xunknown1 *)((int8)piVar33 + iVar17 + 0x18) = 0x54;
            *(int8 *)((int8)piVar33 + iVar17 + 0x20) = iVar7;
            *(xunknown1 *)((int8)piVar33 + iVar17 + 0x28) = xVar21;
            *(uint2 *)((int8)piVar33 + iVar17 + 0x19) =
                 *(uint2 *)((int8)piVar33 + iVar17 + 0x19) & 0xf000 | 0x540;
            *(int8 *)((int8)piVar33 + iVar17 + 0x30) = iVar8;
            piVar34 = (int8 *)param_1[3];
            if (piVar34 == (int8 *)param_1[4]) goto code_r0x000b4574;
code_r0x000b4608:
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = (int8)pxVar10;
            piVar18 = (int2 *)*param_1;
            piVar24 = (int2 *)param_1[1];
            if (piVar18 != piVar24) {
code_r0x000b4674:
              if ((char)*piVar18 == 'E') {
                *param_1 = (int8)((int8)piVar18 + 1);
                axVar39 = FUN_000adec4(param_1,axStack_70._8_8_);
                piVar34 = (int8 *)param_1[0x266];
                iVar7 = piVar34[1];
                piVar9 = piVar34;
                if (iVar7 - 0xfc0U < 0xfffffffffffff00f || iVar7 == -0x31) {
                  piVar9 = (int8 *)malloc(0x1000);
                  if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
                  iVar7 = 0;
                  *piVar9 = (int8)piVar34;
                  piVar9[1] = 0;
                  param_1[0x266] = (int8)piVar9;
                }
                piVar9[1] = iVar7 + 0x30;
                pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
                *pxVar10 = 0xd1b18;
                *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x53;
                *(xunknown1 (*) [16])((int8)piVar9 + iVar7 + 0x30) = axVar39;
                *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = axStack_70._0_8_;
                *(int8 *)((int8)piVar9 + iVar7 + 0x28) = xStack_78;
                *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
                     *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
                return pxVar10;
              }
            }
          }
          else {
            if ((char)*piVar18 == 'T') {
              *param_1 = (int8)((int8)piVar18 + 1);
              iVar7 = FUN_000abd5c(param_1);
              if (iVar7 == 0) {
                return (xunknown8 *)0x0;
              }
              piVar33 = (int8 *)param_1[0x266];
              iVar8 = piVar33[1];
              piVar34 = piVar33;
              if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (int8 *)0x0) goto code_r0x000caa00;
                iVar8 = 0;
                *piVar34 = (int8)piVar33;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              iVar17 = (int8)piVar34 + iVar8;
              xVar27 = 0xd1a38;
              piVar34[1] = iVar8 + 0x20;
              xVar21 = 0x55;
            }
            else {
              if ((char)*piVar18 != 'Q') {
                return (xunknown8 *)0x0;
              }
              *param_1 = (int8)((int8)piVar18 + 1);
              iVar7 = FUN_000b0fa8(param_1);
              if (iVar7 == 0) {
                return (xunknown8 *)0x0;
              }
              piVar33 = (int8 *)param_1[0x266];
              iVar8 = piVar33[1];
              piVar34 = piVar33;
              if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (int8 *)0x0) goto code_r0x000caa00;
                iVar8 = 0;
                *piVar34 = (int8)piVar33;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              iVar17 = (int8)piVar34 + iVar8;
              xVar27 = 0xd1aa8;
              piVar34[1] = iVar8 + 0x20;
              xVar21 = 0x56;
            }
            pxVar10 = (xunknown8 *)(iVar17 + 0x10);
            *pxVar10 = xVar27;
            *(xunknown1 *)(iVar17 + 0x18) = xVar21;
            *(uint2 *)(iVar17 + 0x19) = *(uint2 *)(iVar17 + 0x19) & 0xf000 | 0x540;
            *(int8 *)(iVar17 + 0x20) = iVar7;
            piVar34 = (int8 *)param_1[3];
            if (piVar34 != (int8 *)param_1[4]) goto code_r0x000b4608;
code_r0x000b4574:
            iVar7 = (int8)piVar34 - param_1[2];
            if ((int8 *)param_1[2] == piVar9) {
              iVar8 = malloc(iVar7 * 2);
              if (iVar8 == 0) goto code_r0x000ca7b0;
              if (piVar34 != piVar9) {
                memcpy(iVar8,piVar9,iVar7);
              }
              param_1[2] = iVar8;
            }
            else {
              iVar8 = realloc();
              param_1[2] = iVar8;
              if (iVar8 == 0) goto code_r0x000ca7b0;
            }
            param_1[3] = (int8)((xunknown8 *)(iVar8 + iVar7) + 1);
            param_1[4] = iVar8 + (iVar7 >> 2) * 8;
            *(xunknown8 *)(iVar8 + iVar7) = pxVar10;
            piVar18 = (int2 *)*param_1;
            piVar24 = (int2 *)param_1[1];
            if (piVar18 != piVar24) goto code_r0x000b4674;
          }
          axVar39._8_8_ = xStack_78;
          axVar39._0_8_ = axStack_70._0_8_;
          if (piVar18 == piVar24) {
            return (xunknown8 *)0x0;
          }
        } while( true );
      }
code_r0x000b14b0:
      if (*(int2 *)puVar36 == 0x6f73) {
        *param_1 = (int8)(puVar36 + 2);
        xStack_28 = unaff_x23;
        axStack_70._8_8_ = FUN_000abd5c();
        if ((axStack_70._8_8_ == 0) || (xStack_78 = FUN_000b0fa8(param_1), xStack_78 == 0)) {
          return (xunknown8 *)0x0;
        }
        puVar37 = (uint1 *)*param_1;
        puVar22 = (uint1 *)param_1[1];
        puVar36 = puVar37;
        if ((puVar37 != puVar22) && (*puVar37 == 0x6e)) {
          puVar36 = puVar37 + 1;
          *param_1 = (int8)puVar36;
        }
        if (puVar22 == puVar36) {
          return (xunknown8 *)0x0;
        }
        if (*puVar36 - 0x3a < 0xfffffff6) {
          puVar37 = (uint1 *)0x0;
          iStack_80 = 0;
        }
        else {
          do {
            if (*puVar36 - 0x3a < 0xfffffff6) goto code_r0x000b47dc;
            puVar36 = puVar36 + 1;
            *param_1 = (int8)puVar36;
          } while (puVar36 != puVar22);
          puVar36 = puVar22;
code_r0x000b47dc:
          iStack_80 = (int8)puVar36 - (int8)puVar37;
        }
        if (puVar36 == puVar22) {
          return (xunknown8 *)0x0;
        }
        piVar9 = param_1 + 5;
        axStack_70._0_8_ = param_1[3] - param_1[2] >> 3;
        while (*puVar36 == 0x5f) {
          puVar36 = puVar36 + 1;
          *param_1 = (int8)puVar36;
          if ((puVar22 == puVar36) || (*puVar36 - 0x3a < 0xfffffff6)) {
            puVar36 = (uint1 *)0x0;
            iVar8 = 0;
            piVar34 = (int8 *)param_1[0x266];
            iVar7 = piVar34[1];
            if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) goto code_r0x000b48b8;
          }
          else {
            puVar25 = puVar36;
            do {
              if (*puVar25 - 0x3a < 0xfffffff6) goto code_r0x000b48a0;
              puVar25 = puVar25 + 1;
              *param_1 = (int8)puVar25;
            } while (puVar25 != puVar22);
            puVar25 = puVar22;
code_r0x000b48a0:
            iVar8 = (int8)puVar25 - (int8)puVar36;
            piVar34 = (int8 *)param_1[0x266];
            iVar7 = piVar34[1];
            if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
code_r0x000b48b8:
              piVar33 = (int8 *)malloc(0x1000);
              if (piVar33 == (int8 *)0x0) goto code_r0x000caa00;
              iVar7 = 0;
              *piVar33 = (int8)piVar34;
              piVar33[1] = 0;
              param_1[0x266] = (int8)piVar33;
              piVar34 = piVar33;
            }
          }
          piVar34[1] = iVar7 + 0x20;
          pxVar10 = (xunknown8 *)((int8)piVar34 + iVar7 + 0x10);
          *pxVar10 = 0xd0548;
          *(uint1 **)((int8)piVar34 + iVar7 + 0x20) = puVar36;
          *(int8 *)((int8)piVar34 + iVar7 + 0x28) = iVar8;
          *(xunknown1 *)((int8)piVar34 + iVar7 + 0x18) = 8;
          *(uint2 *)((int8)piVar34 + iVar7 + 0x19) =
               *(uint2 *)((int8)piVar34 + iVar7 + 0x19) & 0xf000 | 0x540;
          piVar34 = (int8 *)param_1[3];
          if (piVar34 == (int8 *)param_1[4]) {
            iVar7 = (int8)piVar34 - param_1[2];
            if ((int8 *)param_1[2] == piVar9) {
              iVar8 = malloc(iVar7 * 2);
              if (iVar8 == 0) goto code_r0x000ca7b0;
              if (piVar34 != piVar9) {
                memcpy(iVar8,piVar9,iVar7);
              }
              param_1[2] = iVar8;
            }
            else {
              iVar8 = realloc();
              param_1[2] = iVar8;
              if (iVar8 == 0) goto code_r0x000ca7b0;
            }
            param_1[3] = (int8)((xunknown8 *)(iVar8 + iVar7) + 1);
            param_1[4] = iVar8 + (iVar7 >> 2) * 8;
            *(xunknown8 *)(iVar8 + iVar7) = pxVar10;
            puVar36 = (uint1 *)*param_1;
            puVar22 = (uint1 *)param_1[1];
            if (puVar36 == puVar22) {
              return (xunknown8 *)0x0;
            }
          }
          else {
            param_1[3] = (int8)(piVar34 + 1);
            *piVar34 = (int8)pxVar10;
            puVar36 = (uint1 *)*param_1;
            puVar22 = (uint1 *)param_1[1];
            if (puVar36 == puVar22) {
              return (xunknown8 *)0x0;
            }
          }
        }
        if ((puVar36 == puVar22) || (*puVar36 != 0x70)) {
          xVar21 = 0;
        }
        else {
          puVar36 = puVar36 + 1;
          xVar21 = 1;
          *param_1 = (int8)puVar36;
        }
        if (puVar36 == puVar22) {
          return (xunknown8 *)0x0;
        }
        if (*puVar36 != 0x45) {
          return (xunknown8 *)0x0;
        }
        *param_1 = (int8)(puVar36 + 1);
        axVar39 = FUN_000adec4(param_1,axStack_70._0_8_);
        piVar34 = (int8 *)param_1[0x266];
        iVar7 = piVar34[1];
        piVar9 = piVar34;
        if (0xfffffffffffff00e < iVar7 - 4000U && iVar7 != -0x51) {
code_r0x000b4a10:
          piVar9[1] = iVar7 + 0x50;
          pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
          *pxVar10 = 0xd1b88;
          *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x3b;
          *(xunknown1 (*) [16])((int8)piVar9 + iVar7 + 0x40) = axVar39;
          *(xunknown1 *)((int8)piVar9 + iVar7 + 0x50) = xVar21;
          *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
               *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
          *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = axStack_70._8_8_;
          *(int8 *)((int8)piVar9 + iVar7 + 0x28) = xStack_78;
          *(uint1 **)((int8)piVar9 + iVar7 + 0x30) = puVar37;
          *(int8 *)((int8)piVar9 + iVar7 + 0x38) = iStack_80;
          return pxVar10;
        }
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 != (int8 *)0x0) {
          iVar7 = 0;
          *piVar9 = (int8)piVar34;
          piVar9[1] = 0;
          param_1[0x266] = (int8)piVar9;
          goto code_r0x000b4a10;
        }
        goto code_r0x000caa00;
      }
    }
    xStack_58 = unaff_x30;
    xStack_28 = unaff_x23;
    uVar26 = FUN_000ab0bc(param_1,0x32cd8,2);
    if ((uVar26 & 1) != 0) {
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar10 = (xunknown8 *)FUN_000b4a94(param_1,axStack_70);
      return pxVar10;
    }
    uVar26 = FUN_000ab0bc(param_1,0x264ea,2);
    if ((uVar26 & 1) != 0) {
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
        axStack_70._0_8_ = FUN_000afcac(param_1);
        if (axStack_70._0_8_ == 0) {
          return (xunknown8 *)0x0;
        }
        pxVar10 = (xunknown8 *)FUN_000b4b34(param_1,axStack_70);
        return pxVar10;
      }
      axStack_70._0_8_ = FUN_000b38ec(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
code_r0x000b2018:
      pxVar10 = (xunknown8 *)FUN_000b4bd4(param_1,axStack_70);
      return pxVar10;
    }
    uVar26 = FUN_000ab0bc(param_1,0x29f98,2);
    if ((uVar26 & 1) != 0) {
      iVar7 = param_1[2];
      iVar8 = param_1[3];
      piVar9 = param_1 + 5;
      while ((pcVar20 = (char *)*param_1, pcVar20 == (char *)param_1[1] || (*pcVar20 != 'E'))) {
        iVar17 = FUN_000ad9d8(param_1);
        if (iVar17 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[3];
        if (piVar34 == (int8 *)param_1[4]) {
          iVar35 = (int8)piVar34 - param_1[2];
          if ((int8 *)param_1[2] == piVar9) {
            iVar11 = malloc(iVar35 * 2);
            if (iVar11 == 0) goto code_r0x000ca7b0;
            if (piVar34 != piVar9) {
              memcpy(iVar11,piVar9,iVar35);
            }
            param_1[2] = iVar11;
          }
          else {
            iVar11 = realloc();
            param_1[2] = iVar11;
            if (iVar11 == 0) goto code_r0x000ca7b0;
          }
          piVar34 = (int8 *)(iVar11 + iVar35);
          param_1[3] = (int8)piVar34;
          param_1[4] = iVar11 + (iVar35 >> 2) * 8;
        }
        param_1[3] = (int8)(piVar34 + 1);
        *piVar34 = iVar17;
      }
      *param_1 = (int8)(pcVar20 + 1);
      axStack_70 = FUN_000adec4(param_1,iVar8 - iVar7 >> 3);
      iVar7 = FUN_000b4c88(param_1,axStack_70);
      axStack_70._0_8_ = iVar7;
      goto code_r0x000b2018;
    }
    uVar26 = FUN_000ab0bc(param_1,0x3a0e2,2);
    if ((uVar26 & 1) != 0) {
      piStack_90 = (int8 *)FUN_000abd5c(param_1);
      if (piStack_90 == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      iVar7 = param_1[2];
      iVar8 = param_1[3];
      pcVar20 = (char *)*param_1;
      if (pcVar20 == (char *)param_1[1]) goto code_r0x000b1e54;
      do {
        if (*pcVar20 == 'E') {
          *param_1 = (int8)(pcVar20 + 1);
          axStack_70 = FUN_000adec4(param_1,iVar8 - iVar7 >> 3);
          pxVar10 = (xunknown8 *)FUN_000b4d24(param_1,&piStack_90,axStack_70);
          return pxVar10;
        }
code_r0x000b1e54:
        do {
          axStack_70._0_8_ = FUN_000b3ca8(param_1);
          if (axStack_70._0_8_ == 0) {
            return (xunknown8 *)0x0;
          }
          FUN_000add4c(param_1 + 2,axStack_70);
          pcVar20 = (char *)*param_1;
        } while (pcVar20 == (char *)param_1[1]);
      } while( true );
    }
    uVar26 = FUN_000ab0bc(param_1,0x38f7d,2);
    if ((uVar26 & 1) != 0) {
      xStack_28 = xStack_58;
      piVar34 = (int8 *)param_1[0x266];
      iVar7 = piVar34[1];
      piVar9 = piVar34;
      if (0xfffffffffffff00e < iVar7 - 0xfd0U && iVar7 != -0x21) {
code_r0x000b4e1c:
        piVar9[1] = iVar7 + 0x20;
        xVar27 = strlen(0x3a0e5 /* "throw" */);
        pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
        *pxVar10 = 0xd0548;
        *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 8;
        *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = 0x3a0e5;
        *(xunknown8 *)((int8)piVar9 + iVar7 + 0x28) = xVar27;
        *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
             *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
        return pxVar10;
      }
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 != (int8 *)0x0) {
        iVar7 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
        goto code_r0x000b4e1c;
      }
      goto code_r0x000caa00;
    }
    uVar26 = FUN_000ab0bc(param_1,0x3a0eb,2);
    if ((uVar26 & 1) != 0) {
      axStack_70._0_8_ = FUN_000b0fa8(param_1);
      if (axStack_70._0_8_ == 0) {
        return (xunknown8 *)0x0;
      }
      pxVar10 = (xunknown8 *)FUN_000b4e78(param_1,axStack_70);
      return pxVar10;
    }
    pcVar20 = (char *)*param_1;
    if ((pcVar20 != (char *)param_1[1]) && (*pcVar20 == 'u')) {
      *param_1 = (int8)(pcVar20 + 1);
      piStack_90 = (int8 *)FUN_000af0b4(param_1);
      if (piStack_90 == (int8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      axVar39 = (**(code **)(*piStack_90 + 0x30))();
      if (((axVar39._8_8_ == 8) && (*axVar39._0_8_ == 0x666f646975755f5f)) &&
         (pcVar20 = (char *)*param_1, pcVar20 != (char *)param_1[1])) {
        if (*pcVar20 == 'z') {
          *param_1 = (int8)(pcVar20 + 1);
          axStack_a0._0_8_ = FUN_000b0fa8(param_1);
        }
        else {
          if (*pcVar20 != 't') goto code_r0x000b20c0;
          *param_1 = (int8)(pcVar20 + 1);
          axStack_a0._0_8_ = FUN_000abd5c(param_1);
        }
        if ((int8 *)axStack_a0._0_8_ == (int8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        iVar7 = param_1[3] - param_1[2];
        FUN_000add4c(param_1 + 2,axStack_a0);
      }
      else {
code_r0x000b20c0:
        iVar7 = param_1[3] - param_1[2];
        pcVar20 = (char *)*param_1;
        if (pcVar20 == (char *)param_1[1]) goto code_r0x000b20e4;
        while (*pcVar20 != 'E') {
code_r0x000b20e4:
          do {
            axStack_70._0_8_ = FUN_000ad9d8(param_1);
            if (axStack_70._0_8_ == 0) {
              return (xunknown8 *)0x0;
            }
            FUN_000add4c(param_1 + 2,axStack_70);
            pcVar20 = (char *)*param_1;
          } while (pcVar20 == (char *)param_1[1]);
        }
        *param_1 = (int8)(pcVar20 + 1);
      }
      axStack_70 = FUN_000adec4(param_1,iVar7 >> 3);
      iVar15 = 1;
      ppiVar13 = &piStack_90;
code_r0x000b1ea4:
      iStack_80 = CONCAT44(iStack_80._4_4_,iVar15);
      pxVar10 = (xunknown8 *)FUN_000b26f4(param_1,ppiVar13,axStack_70,&iStack_80);
      return pxVar10;
    }
    piVar18 = (int2 *)*param_1;
    uVar26 = param_1[1] - (int8)piVar18;
    if (uVar26 < 3) {
      if (uVar26 == 2) goto code_r0x000b4f7c;
    }
    else {
      if (*piVar18 == 0x7273 && (char)piVar18[1] == 'N') {
        *param_1 = (int8)piVar18 + 3;
        pxVar10 = (xunknown8 *)FUN_000bc410(param_1);
        if (pxVar10 == (xunknown8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        pxVar19 = pxVar10;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          iVar7 = FUN_000af668(param_1,0);
          if (iVar7 == 0) {
            return (xunknown8 *)0x0;
          }
          piVar34 = (int8 *)param_1[0x266];
          iVar8 = piVar34[1];
          piVar9 = piVar34;
          if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
            piVar9 = (int8 *)malloc(0x1000);
            if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
            iVar8 = 0;
            *piVar9 = (int8)piVar34;
            piVar9[1] = 0;
            param_1[0x266] = (int8)piVar9;
          }
          piVar9[1] = iVar8 + 0x20;
          pxVar19 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
          *pxVar19 = 0xd2448;
          *(xunknown8 **)((int8)piVar9 + iVar8 + 0x20) = pxVar10;
          *(int8 *)((int8)piVar9 + iVar8 + 0x28) = iVar7;
          *(xunknown1 *)((int8)piVar9 + iVar8 + 0x18) = 0x2d;
          *(uint2 *)((int8)piVar9 + iVar8 + 0x19) =
               *(uint2 *)((int8)piVar9 + iVar8 + 0x19) & 0xf000 | 0x540;
        }
        while ((pcVar20 = (char *)*param_1, pcVar20 == (char *)param_1[1] || (*pcVar20 != 'E'))) {
          iVar7 = FUN_000bc594(param_1);
          if (iVar7 == 0) {
            return (xunknown8 *)0x0;
          }
          piVar34 = (int8 *)param_1[0x266];
          iVar8 = piVar34[1];
          piVar9 = piVar34;
          if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
            piVar9 = (int8 *)malloc(0x1000);
            if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
            iVar8 = 0;
            *piVar9 = (int8)piVar34;
            piVar9[1] = 0;
            param_1[0x266] = (int8)piVar9;
          }
          piVar9[1] = iVar8 + 0x20;
          pxVar10 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
          *pxVar10 = 0xd1d48;
          *(xunknown1 *)((int8)piVar9 + iVar8 + 0x18) = 0x17;
          *(xunknown8 **)((int8)piVar9 + iVar8 + 0x20) = pxVar19;
          *(int8 *)((int8)piVar9 + iVar8 + 0x28) = iVar7;
          *(uint2 *)((int8)piVar9 + iVar8 + 0x19) =
               *(uint2 *)((int8)piVar9 + iVar8 + 0x19) & 0xf000 | 0x540;
          pxVar19 = pxVar10;
        }
        *param_1 = (int8)(pcVar20 + 1);
        iVar7 = FUN_000bc66c(param_1);
        if (iVar7 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar34 = (int8 *)param_1[0x266];
        iVar8 = piVar34[1];
        piVar9 = piVar34;
        if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
          piVar9 = (int8 *)malloc(0x1000);
          if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
          iVar8 = 0;
          *piVar9 = (int8)piVar34;
          piVar9[1] = 0;
          param_1[0x266] = (int8)piVar9;
        }
        piVar9[1] = iVar8 + 0x20;
        pxVar10 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
        *pxVar10 = 0xd1d48;
        goto code_r0x000b547c;
      }
code_r0x000b4f7c:
      if (*piVar18 == 0x7273) {
        puVar36 = (uint1 *)(piVar18 + 1);
        *param_1 = (int8)puVar36;
        if (((uint1 *)param_1[1] != puVar36) && (0xfffffff5 < *puVar36 - 0x3a)) {
          pxVar19 = (xunknown8 *)FUN_000bc594(param_1);
          if (pxVar19 == (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
          if (!bVar5) {
            pxVar10 = (xunknown8 *)0x0;
            do {
              if (pxVar10 == (xunknown8 *)0x0) {
                pcVar20 = (char *)*param_1;
                pxVar12 = pxVar19;
                if (pcVar20 != (char *)param_1[1]) goto code_r0x000b5410;
              }
              else {
                piVar34 = (int8 *)param_1[0x266];
                iVar7 = piVar34[1];
                piVar9 = piVar34;
                if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
                  piVar9 = (int8 *)malloc(0x1000);
                  if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
                  iVar7 = 0;
                  *piVar9 = (int8)piVar34;
                  piVar9[1] = 0;
                  param_1[0x266] = (int8)piVar9;
                }
                piVar9[1] = iVar7 + 0x20;
                pxVar12 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
                *pxVar12 = 0xd1d48;
                *(xunknown8 **)((int8)piVar9 + iVar7 + 0x20) = pxVar10;
                *(xunknown8 **)((int8)piVar9 + iVar7 + 0x28) = pxVar19;
                *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x17;
                *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
                     *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
                pcVar20 = (char *)*param_1;
                pxVar19 = pxVar12;
                if (pcVar20 != (char *)param_1[1]) {
code_r0x000b5410:
                  pxVar12 = pxVar19;
                  if (*pcVar20 == 'E') goto code_r0x000b541c;
                }
              }
              pxVar19 = (xunknown8 *)FUN_000bc594(param_1);
              pxVar10 = pxVar12;
              if (pxVar19 == (xunknown8 *)0x0) {
                return (xunknown8 *)0x0;
              }
            } while( true );
          }
          pxVar10 = (xunknown8 *)0x0;
          pxVar12 = pxVar19;
          do {
            piVar9 = (int8 *)param_1[0x266];
            iVar7 = piVar9[1];
            bVar5 = iVar7 - 0xfd0U < 0xfffffffffffff00f;
            if (pxVar10 == (xunknown8 *)0x0) {
              piVar34 = piVar9;
              if (bVar5 || iVar7 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (xunknown8 *)0x0) goto code_r0x000caa00;
                iVar7 = 0;
                *piVar34 = (int8)piVar9;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              piVar34[1] = iVar7 + 0x20;
              pxVar19 = (xunknown8 *)((int8)piVar34 + iVar7 + 0x10);
              *pxVar19 = 0xd1f08;
              *(xunknown1 *)((int8)piVar34 + iVar7 + 0x18) = 0x2e;
              *(uint2 *)((int8)piVar34 + iVar7 + 0x19) =
                   *(uint2 *)((int8)piVar34 + iVar7 + 0x19) & 0xf000 | 0x540;
              *(xunknown8 **)((int8)piVar34 + iVar7 + 0x20) = pxVar12;
              pcVar20 = (char *)*param_1;
              if (pcVar20 != (char *)param_1[1]) goto code_r0x000b52f8;
            }
            else {
              piVar34 = piVar9;
              if (bVar5 || iVar7 == -0x21) {
                piVar34 = (int8 *)malloc(0x1000);
                if (piVar34 == (int8 *)0x0) goto code_r0x000caa00;
                iVar7 = 0;
                *piVar34 = (int8)piVar9;
                piVar34[1] = 0;
                param_1[0x266] = (int8)piVar34;
              }
              piVar34[1] = iVar7 + 0x20;
              pxVar19 = (xunknown8 *)((int8)piVar34 + iVar7 + 0x10);
              *pxVar19 = 0xd1d48;
              *(xunknown1 *)((int8)piVar34 + iVar7 + 0x18) = 0x17;
              *(xunknown8 **)((int8)piVar34 + iVar7 + 0x20) = pxVar10;
              *(uint2 *)((int8)piVar34 + iVar7 + 0x19) =
                   *(uint2 *)((int8)piVar34 + iVar7 + 0x19) & 0xf000 | 0x540;
              *(xunknown8 **)((int8)piVar34 + iVar7 + 0x28) = pxVar12;
              pcVar20 = (char *)*param_1;
              if (pcVar20 != (char *)param_1[1]) {
code_r0x000b52f8:
                if (*pcVar20 == 'E') goto code_r0x000b541c;
              }
            }
            pxVar12 = (xunknown8 *)FUN_000bc594(param_1);
            pxVar10 = pxVar19;
            if (pxVar12 == (xunknown8 *)0x0) {
              return (xunknown8 *)0x0;
            }
          } while( true );
        }
        pxVar19 = (xunknown8 *)FUN_000bc410(param_1);
        if (pxVar19 == (xunknown8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          axStack_70._8_8_ = FUN_000af668(param_1,0);
          if (axStack_70._8_8_ == 0) {
            return (xunknown8 *)0x0;
          }
          pxVar19 = (xunknown8 *)FUN_000afc04(param_1,axStack_70 + 0x28,axStack_70 + 8);
        }
        goto code_r0x000b5424;
      }
    }
    pxVar10 = (xunknown8 *)FUN_000bc66c(param_1);
    if (pxVar10 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    if (!bVar5) {
      return pxVar10;
    }
    piVar34 = (int8 *)param_1[0x266];
    iVar7 = piVar34[1];
    piVar9 = piVar34;
    if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar7 = 0;
      *piVar9 = (int8)piVar34;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar7 + 0x20;
    pxVar19 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
    *pxVar19 = 0xd1f08;
    *(xunknown8 **)((int8)piVar9 + iVar7 + 0x20) = pxVar10;
    *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x2e;
    *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
         *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
    return pxVar19;
  }
  piVar18 = (int2 *)*param_1;
  piVar24 = (int2 *)param_1[1];
  if (piVar18 == piVar24) {
    return (xunknown8 *)0x0;
  }
  if ((char)*piVar18 != 'L') {
    return (xunknown8 *)0x0;
  }
  piVar16 = (int2 *)((int8)piVar18 + 1);
  uVar26 = (int8)piVar24 - (int8)piVar16;
  *param_1 = (int8)piVar16;
  if (piVar24 == piVar16) {
code_r0x000b2ad4:
    xStack_28 = FUN_000abd5c();
    if (xStack_28 == 0) {
      return (xunknown8 *)0x0;
    }
    puVar37 = (uint1 *)*param_1;
    puVar22 = (uint1 *)param_1[1];
    puVar36 = puVar37;
    if ((puVar37 != puVar22) && (*puVar37 == 0x6e)) {
      puVar36 = puVar37 + 1;
      *param_1 = (int8)puVar36;
    }
    if (puVar22 == puVar36) {
      return (xunknown8 *)0x0;
    }
    if (*puVar36 - 0x3a < 0xfffffff6) {
      return (xunknown8 *)0x0;
    }
    do {
      if (*puVar36 - 0x3a < 0xfffffff6) goto code_r0x000b2b68;
      puVar36 = puVar36 + 1;
      *param_1 = (int8)puVar36;
    } while (puVar36 != puVar22);
    puVar36 = puVar22;
code_r0x000b2b68:
    if (puVar36 == puVar37) {
      return (xunknown8 *)0x0;
    }
    if (puVar36 == puVar22) {
      return (xunknown8 *)0x0;
    }
    if (*puVar36 == 0x45) {
      *param_1 = (int8)(puVar36 + 1);
      pxVar10 = (xunknown8 *)FUN_000b798c(param_1,&xStack_28,axStack_70 + 0x38);
      return pxVar10;
    }
    return (xunknown8 *)0x0;
  }
  switch(*(char *)piVar16) {
  case 'A':
    iVar7 = FUN_000abd5c();
    if (iVar7 == 0) {
      return (xunknown8 *)0x0;
    }
    pcVar20 = (char *)*param_1;
    if (pcVar20 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar20 == 'E') {
      *param_1 = (int8)(pcVar20 + 1);
      pxVar10 = (xunknown8 *)FUN_000b7048(param_1,axStack_70 + 0x38);
      return pxVar10;
    }
    return (xunknown8 *)0x0;
  default:
    goto code_r0x000b2ad4;
  case 'D':
    if (uVar26 < 2) {
      return (xunknown8 *)0x0;
    }
    if (*piVar16 != 0x6e44) {
      return (xunknown8 *)0x0;
    }
    piVar16 = (int2 *)((int8)piVar18 + 3);
    *param_1 = (int8)piVar16;
    if (piVar16 == piVar24) {
      return (xunknown8 *)0x0;
    }
    if (*(char *)piVar16 == '0') {
      piVar16 = piVar18 + 2;
      *param_1 = (int8)piVar16;
    }
    if (piVar16 == piVar24) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar16 != 'E') {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)((int8)piVar16 + 1);
    piVar34 = (int8 *)param_1[0x266];
    iVar7 = piVar34[1];
    piVar9 = piVar34;
    if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar7 = 0;
      *piVar9 = (int8)piVar34;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar7 + 0x20;
    xVar27 = strlen(0x3a10b /* "nullptr" */);
    pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
    *pxVar10 = 0xd0548;
    *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 8;
    *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = 0x3a10b;
    *(xunknown8 *)((int8)piVar9 + iVar7 + 0x28) = xVar27;
    *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
         *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
    return pxVar10;
  case 'T':
    return (xunknown8 *)0x0;
  case 'U':
    if (uVar26 < 2) {
      return (xunknown8 *)0x0;
    }
    if ((char)piVar18[1] != 'l') {
      return (xunknown8 *)0x0;
    }
    iVar7 = FUN_000b7190(param_1,0);
    if (iVar7 == 0) {
      return (xunknown8 *)0x0;
    }
    pcVar20 = (char *)*param_1;
    if (pcVar20 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar20 == 'E') {
      *param_1 = (int8)(pcVar20 + 1);
      pxVar10 = (xunknown8 *)FUN_000b78ec(param_1,axStack_70 + 0x38);
      return pxVar10;
    }
    return (xunknown8 *)0x0;
  case '_':
    if (uVar26 < 2) {
      return (xunknown8 *)0x0;
    }
    if (*piVar16 != 0x5a5f) {
      return (xunknown8 *)0x0;
    }
    *param_1 = (int8)((int8)piVar18 + 3);
    pxVar10 = (xunknown8 *)FUN_000ab144();
    if (pxVar10 == (xunknown8 *)0x0) {
      return (xunknown8 *)0x0;
    }
    pcVar20 = (char *)*param_1;
    if (pcVar20 == (char *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
    if (*pcVar20 == 'E') {
      *param_1 = (int8)(pcVar20 + 1);
      return pxVar10;
    }
    return (xunknown8 *)0x0;
  case 'a':
    xVar27 = 0x38f8a /* "signed char" */;
    xVar14 = 0xb;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'b':
    if ((uVar26 < 3) || (*piVar16 != 0x3062 || *(char *)((int8)piVar18 + 3) != 'E')) {
      uVar26 = FUN_000ab0bc(param_1,0x2da76,3);
      if ((uVar26 & 1) == 0) {
        return (xunknown8 *)0x0;
      }
      xVar21 = 1;
    }
    else {
      xVar21 = 0;
      *param_1 = (int8)(piVar18 + 2);
    }
    piVar34 = (int8 *)param_1[0x266];
    iVar7 = piVar34[1];
    piVar9 = piVar34;
    if (iVar7 - 0xfe0U < 0xfffffffffffff00f || iVar7 == -0x11) {
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar7 = 0;
      *piVar9 = (int8)piVar34;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar7 + 0x10;
    pxVar10 = (xunknown8 *)(iVar7 + 0x10 + (int8)piVar9);
    *(xunknown1 *)(pxVar10 + 1) = 0x49;
    *pxVar10 = 0xd1028;
    *(uint2 *)((int8)pxVar10 + 9) = *(uint2 *)((int8)pxVar10 + 9) & 0xf000 | 0x540;
    *(xunknown1 *)((int8)pxVar10 + 0xb) = xVar21;
    return pxVar10;
  case 'c':
    xVar27 = 0x30d50 /* "char" */;
    xVar14 = 4;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'd':
    *param_1 = (int8)(piVar18 + 1);
    if ((uint8)((int8)piVar24 - (int8)(piVar18 + 1)) < 0x11) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 1) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 2) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 4) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 6) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 8) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    piVar16 = piVar18 + 9;
    *param_1 = (int8)piVar16;
    if (piVar16 == piVar24) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar16 != 'E') {
      return (xunknown8 *)0x0;
    }
    piVar34 = (int8 *)param_1[0x266];
    *param_1 = (int8)((int8)piVar18 + 0x13);
    iVar7 = piVar34[1];
    piVar9 = piVar34;
    if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
      xStack_28 = unaff_x23;
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar7 = 0;
      *piVar9 = (int8)piVar34;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar7 + 0x20;
    pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
    *pxVar10 = 0xd1108;
    *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x4f;
    *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
         *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
    xVar27 = 0x10;
    goto code_r0x000b2dbc;
  case 'e':
    *param_1 = (int8)(piVar18 + 1);
    if ((uint8)((int8)piVar24 - (int8)(piVar18 + 1)) < 0x21) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 1) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 2) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 3) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 4) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 5) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 6) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 7) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 8) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 9) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x13) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x13) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 10) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x15) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x15) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x17) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x17) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 0xc) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 0xc) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x19) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x19) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x1b) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x1b) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 0xe) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 0xe) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x1d) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x1d) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x1f) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x1f) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)(piVar18 + 0x10) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)(piVar18 + 0x10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    if ((*(uint1 *)((int8)piVar18 + 0x21) - 0x3a < 0xfffffff6) &&
       ((*(uint1 *)((int8)piVar18 + 0x21) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (xunknown8 *)0x0;
    }
    piVar16 = piVar18 + 0x11;
    *param_1 = (int8)piVar16;
    if (piVar16 == piVar24) {
      return (xunknown8 *)0x0;
    }
    if ((char)*piVar16 != 'E') {
      return (xunknown8 *)0x0;
    }
    piVar34 = (int8 *)param_1[0x266];
    *param_1 = (int8)((int8)piVar18 + 0x23);
    iVar7 = piVar34[1];
    piVar9 = piVar34;
    if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
      xStack_28 = unaff_x23;
      piVar9 = (int8 *)malloc(0x1000);
      if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
      iVar7 = 0;
      *piVar9 = (int8)piVar34;
      piVar9[1] = 0;
      param_1[0x266] = (int8)piVar9;
    }
    piVar9[1] = iVar7 + 0x20;
    pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
    *pxVar10 = 0xd1178;
    *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x50;
    *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
         *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
    xVar27 = 0x20;
code_r0x000b2dbc:
    pxVar10[2] = piVar18 + 1;
    pxVar10[3] = xVar27;
    return pxVar10;
  case 'f':
    *param_1 = (int8)(piVar18 + 1);
    if ((((((8 < (uint8)((int8)piVar24 - (int8)(piVar18 + 1))) &&
           ((0xfffffff5 < *(uint1 *)(piVar18 + 1) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)(piVar18 + 1) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(uint1 *)((int8)piVar18 + 3) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)((int8)piVar18 + 3) & 0xffffffdf) - 0x47)))) &&
         ((((0xfffffff5 < *(uint1 *)(piVar18 + 2) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)(piVar18 + 2) & 0xffffffdf) - 0x47)) &&
           ((0xfffffff5 < *(uint1 *)((int8)piVar18 + 5) - 0x3a ||
            (0xfffffff9 < (*(uint1 *)((int8)piVar18 + 5) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(uint1 *)(piVar18 + 3) - 0x3a ||
           (0xfffffff9 < (*(uint1 *)(piVar18 + 3) & 0xffffffdf) - 0x47)))))) &&
        ((0xfffffff5 < *(uint1 *)((int8)piVar18 + 7) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)((int8)piVar18 + 7) & 0xffffffdf) - 0x47)))) &&
       (((0xfffffff5 < *(uint1 *)(piVar18 + 4) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)(piVar18 + 4) & 0xffffffdf) - 0x47)) &&
        ((0xfffffff5 < *(uint1 *)((int8)piVar18 + 9) - 0x3a ||
         (0xfffffff9 < (*(uint1 *)((int8)piVar18 + 9) & 0xffffffdf) - 0x47)))))) {
      piVar16 = piVar18 + 5;
      *param_1 = (int8)piVar16;
      if ((piVar16 != piVar24) && ((char)*piVar16 == 'E')) {
        piVar34 = (int8 *)param_1[0x266];
        *param_1 = (int8)((int8)piVar18 + 0xb);
        iVar7 = piVar34[1];
        piVar9 = piVar34;
        if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
          xStack_28 = unaff_x23;
          piVar9 = (int8 *)malloc(0x1000);
          if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
          iVar7 = 0;
          *piVar9 = (int8)piVar34;
          piVar9[1] = 0;
          param_1[0x266] = (int8)piVar9;
        }
        piVar9[1] = iVar7 + 0x20;
        pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
        *pxVar10 = 0xd1098;
        *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x4e;
        *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
             *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
        xVar27 = 8;
        goto code_r0x000b2dbc;
      }
    }
    return (xunknown8 *)0x0;
  case 'h':
    xVar27 = 0x2ebb2 /* "unsigned char" */;
    xVar14 = 0xd;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'i':
    xVar27 = 0x29893;
    xVar14 = 0;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'j':
    xVar27 = 0x40abd;
    goto code_r0x000b308c;
  case 'l':
    xVar27 = 0x2ba59;
code_r0x000b308c:
    xVar14 = 1;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'm':
    xVar27 = 0x3fb59;
    goto code_r0x000b30b8;
  case 'n':
    xVar27 = 0x2650c /* "__int128" */;
    xVar14 = 8;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'o':
    xVar27 = 0x2bf5a /* "unsigned __int128" */;
    xVar14 = 0x11;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 's':
    xVar27 = 0x2bf54 /* "short" */;
    xVar14 = 5;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 't':
    xVar27 = 0x22cc8 /* "unsigned short" */;
    xVar14 = 0xe;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'w':
    xVar27 = 0x22cc0 /* "wchar_t" */;
    xVar14 = 7;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'x':
    xVar27 = 0x2ba5b;
code_r0x000b30b8:
    xVar14 = 2;
    *param_1 = (int8)(piVar18 + 1);
    break;
  case 'y':
    xVar27 = 0x350e2;
    xVar14 = 3;
    *param_1 = (int8)(piVar18 + 1);
  }
  puVar37 = (uint1 *)*param_1;
  puVar22 = (uint1 *)param_1[1];
  puVar36 = puVar37;
  if ((puVar37 != puVar22) && (*puVar37 == 0x6e)) {
    puVar36 = puVar37 + 1;
    *param_1 = (int8)puVar36;
  }
  if ((puVar22 != puVar36) && (0xfffffff5 < *puVar36 - 0x3a)) {
    do {
      if (*puVar36 - 0x3a < 0xfffffff6) goto code_r0x000b6ef4;
      puVar36 = puVar36 + 1;
      *param_1 = (int8)puVar36;
    } while (puVar36 != puVar22);
    puVar36 = puVar22;
code_r0x000b6ef4:
    if ((int8)puVar36 - (int8)puVar37 == 0) {
      return (xunknown8 *)0x0;
    }
    if (puVar36 == puVar22) {
      return (xunknown8 *)0x0;
    }
    if (*puVar36 == 0x45) {
      piVar34 = (int8 *)param_1[0x266];
      *param_1 = (int8)(puVar36 + 1);
      iVar7 = piVar34[1];
      piVar9 = piVar34;
      if (iVar7 - 0xfc0U < 0xfffffffffffff00f || iVar7 == -0x31) {
        xStack_28 = unaff_x23;
        piVar9 = (int8 *)malloc(0x1000);
        if (piVar9 == (int8 *)0x0) {
code_r0x000caa00:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar10 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar10;
        }
        iVar7 = 0;
        *piVar9 = (int8)piVar34;
        piVar9[1] = 0;
        param_1[0x266] = (int8)piVar9;
      }
      piVar9[1] = iVar7 + 0x30;
      pxVar10 = (xunknown8 *)((int8)piVar9 + iVar7 + 0x10);
      *pxVar10 = 0xd0fb8;
      *(xunknown1 *)((int8)piVar9 + iVar7 + 0x18) = 0x4d;
      *(xunknown8 *)((int8)piVar9 + iVar7 + 0x20) = xVar27;
      *(xunknown8 *)((int8)piVar9 + iVar7 + 0x28) = xVar14;
      *(uint1 **)((int8)piVar9 + iVar7 + 0x30) = puVar37;
      *(int8 *)((int8)piVar9 + iVar7 + 0x38) = (int8)puVar36 - (int8)puVar37;
      *(uint2 *)((int8)piVar9 + iVar7 + 0x19) =
           *(uint2 *)((int8)piVar9 + iVar7 + 0x19) & 0xf000 | 0x540;
      return pxVar10;
    }
  }
  return (xunknown8 *)0x0;
code_r0x000b541c:
  *param_1 = (int8)(pcVar20 + 1);
code_r0x000b5424:
  iVar7 = FUN_000bc66c(param_1);
  if (iVar7 == 0) {
    return (xunknown8 *)0x0;
  }
  piVar34 = (int8 *)param_1[0x266];
  iVar8 = piVar34[1];
  piVar9 = piVar34;
  if (iVar8 - 0xfd0U < 0xfffffffffffff00f || iVar8 == -0x21) {
    piVar9 = (int8 *)malloc(0x1000);
    if (piVar9 == (int8 *)0x0) goto code_r0x000caa00;
    iVar8 = 0;
    *piVar9 = (int8)piVar34;
    piVar9[1] = 0;
    param_1[0x266] = (int8)piVar9;
  }
  piVar9[1] = iVar8 + 0x20;
  pxVar10 = (xunknown8 *)((int8)piVar9 + iVar8 + 0x10);
  *pxVar10 = 0xd1d48;
code_r0x000b547c:
  *(xunknown1 *)(pxVar10 + 1) = 0x17;
  pxVar10[2] = pxVar19;
  pxVar10[3] = iVar7;
  *(uint2 *)((int8)pxVar10 + 9) = *(uint2 *)((int8)pxVar10 + 9) & 0xf000 | 0x540;
  return pxVar10;
}

/* 0xb3f3c  size=164 */
void FUN_000b3f3c(int8 param_1,xunknown8 *param_2)

{
  int8 *piVar1;
  int8 iVar2;
  int8 *piVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  
  piVar3 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar3[1];
  piVar1 = piVar3;
  if (iVar2 - 0xfc0U < 0xfffffffffffff00f || iVar2 == -0x31) {
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
  piVar1[1] = iVar2 + 0x30;
  xVar5 = param_2[1];
  xVar4 = *param_2;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd18e8;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x46;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar4;
  return;
}

/* 0xb3fe0  size=380 */
xunknown8 * FUN_000b3fe0(int8 *param_1)

{
  uint1 *puVar1;
  int8 iVar2;
  int8 iVar3;
  int8 *piVar4;
  uint1 *puVar5;
  int8 iVar6;
  xunknown8 *pxVar7;
  uint1 *puVar8;
  int8 iVar9;
  int8 *piVar10;
  
  iVar2 = FUN_000abd5c();
  if ((iVar2 == 0) || (iVar3 = FUN_000b0fa8(param_1), iVar3 == 0)) {
    return (xunknown8 *)0x0;
  }
  puVar8 = (uint1 *)*param_1;
  puVar1 = (uint1 *)param_1[1];
  puVar5 = puVar8;
  if ((puVar8 != puVar1) && (*puVar8 == 0x6e)) {
    puVar5 = puVar8 + 1;
    *param_1 = (int8)puVar5;
  }
  if (puVar1 != puVar5) {
    if (*puVar5 - 0x3a < 0xfffffff6) {
      puVar8 = (uint1 *)0x0;
      iVar9 = 0;
    }
    else {
      do {
        if (*puVar5 - 0x3a < 0xfffffff6) goto code_r0x000b408c;
        puVar5 = puVar5 + 1;
        *param_1 = (int8)puVar5;
      } while (puVar5 != puVar1);
      puVar5 = puVar1;
code_r0x000b408c:
      iVar9 = (int8)puVar5 - (int8)puVar8;
    }
    if ((puVar5 != puVar1) && (*puVar5 == 0x45)) {
      piVar10 = (int8 *)param_1[0x266];
      *param_1 = (int8)(puVar5 + 1);
      iVar6 = piVar10[1];
      piVar4 = piVar10;
      if (iVar6 - 0xfc0U < 0xfffffffffffff00f || iVar6 == -0x31) {
        piVar4 = (int8 *)malloc(0x1000);
        if (piVar4 == (int8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar7 = (xunknown8 *)(*pcRam00000000000d4468)();
          return pxVar7;
        }
        iVar6 = 0;
        *piVar4 = (int8)piVar10;
        piVar4[1] = 0;
        param_1[0x266] = (int8)piVar4;
      }
      piVar4[1] = iVar6 + 0x30;
      pxVar7 = (xunknown8 *)((int8)piVar4 + iVar6 + 0x10);
      *pxVar7 = 0xd1958;
      *(xunknown1 *)((int8)piVar4 + iVar6 + 0x18) = 0x45;
      *(int8 *)((int8)piVar4 + iVar6 + 0x20) = iVar2;
      *(int8 *)((int8)piVar4 + iVar6 + 0x28) = iVar3;
      *(uint1 **)((int8)piVar4 + iVar6 + 0x30) = puVar8;
      *(int8 *)((int8)piVar4 + iVar6 + 0x38) = iVar9;
      *(uint2 *)((int8)piVar4 + iVar6 + 0x19) =
           *(uint2 *)((int8)piVar4 + iVar6 + 0x19) & 0xf000 | 0x542;
      return pxVar7;
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb415c  size=192 */
void FUN_000b415c(int8 param_1,xunknown8 *param_2,uint2 *param_3)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar2 = piVar5;
  if (iVar3 - 0xfb0U < 0xfffffffffffff00f || iVar3 == -0x41) {
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
  piVar2[1] = iVar3 + 0x40;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0f48;
  uVar1 = *param_3;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x3c;
  xVar4 = *param_2;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x38) = 0;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x40) = 0;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = 0x36fc1;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = 9;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar4;
  return;
}

/* 0xb421c  size=1288 */
xunknown8 * FUN_000b421c(int8 *param_1)

{
  int8 iVar1;
  char *pcVar2;
  int8 iVar3;
  int8 *piVar4;
  int2 *piVar5;
  xunknown8 xVar6;
  char *pcVar7;
  int8 iVar8;
  int8 iVar9;
  xunknown1 xVar10;
  int2 *piVar11;
  int8 *piVar12;
  int8 *piVar13;
  xunknown8 *pxVar14;
  int8 iVar15;
  xunknown1 axVar16 [16];
  xunknown1 axVar17 [16];
  
  piVar5 = (int2 *)*param_1;
  piVar11 = (int2 *)param_1[1];
  if ((uint8)((int8)piVar11 - (int8)piVar5) < 2) {
    return (xunknown8 *)0x0;
  }
  if (*piVar5 == 0x5172) {
    iVar9 = param_1[2];
    iVar1 = param_1[3];
    piVar5 = piVar5 + 1;
    piVar4 = param_1 + 5;
    *param_1 = (int8)piVar5;
    while ((piVar5 == piVar11 || ((char)*piVar5 != '_'))) {
      iVar3 = FUN_000abd5c(param_1);
      if (iVar3 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar13 = (int8 *)param_1[3];
      if (piVar13 == (int8 *)param_1[4]) {
        iVar15 = (int8)piVar13 - param_1[2];
        if ((int8 *)param_1[2] == piVar4) {
          iVar8 = malloc(iVar15 * 2);
          if (iVar8 == 0) goto code_r0x000ca7b0;
          if (piVar13 != piVar4) {
            memcpy(iVar8,piVar4,iVar15);
          }
          param_1[2] = iVar8;
        }
        else {
          iVar8 = realloc();
          param_1[2] = iVar8;
          if (iVar8 == 0) goto code_r0x000ca7b0;
        }
        piVar13 = (int8 *)(iVar8 + iVar15);
        param_1[4] = iVar8 + (iVar15 >> 2) * 8;
      }
      param_1[3] = (int8)(piVar13 + 1);
      *piVar13 = iVar3;
      piVar11 = (int2 *)param_1[1];
      piVar5 = (int2 *)*param_1;
    }
    *param_1 = (int8)((int8)piVar5 + 1);
    axVar16 = FUN_000adec4(param_1,iVar1 - iVar9 >> 3);
    piVar5 = (int2 *)*param_1;
    if (piVar5 == (int2 *)param_1[1]) {
      return (xunknown8 *)0x0;
    }
  }
  else {
    if (*piVar5 != 0x7172) {
      return (xunknown8 *)0x0;
    }
    axVar16 = ZEXT816(0);
    piVar5 = piVar5 + 1;
    *param_1 = (int8)piVar5;
    if (piVar5 == piVar11) {
      return (xunknown8 *)0x0;
    }
  }
  iVar9 = param_1[2];
  iVar1 = param_1[3];
  piVar4 = param_1 + 5;
  do {
    if ((char)*piVar5 == 'X') {
      *param_1 = (int8)((int8)piVar5 + 1);
      iVar3 = FUN_000b0fa8(param_1);
      if (iVar3 == 0) {
        return (xunknown8 *)0x0;
      }
      pcVar7 = (char *)*param_1;
      pcVar2 = (char *)param_1[1];
      if ((pcVar7 == pcVar2) || (*pcVar7 != 'N')) {
        xVar10 = 0;
        if (pcVar7 == pcVar2) goto code_r0x000b441c;
code_r0x000b44a0:
        if (*pcVar7 == 'R') {
          *param_1 = (int8)(pcVar7 + 1);
          iVar15 = FUN_000ad294(param_1,0);
          if (iVar15 == 0) {
            return (xunknown8 *)0x0;
          }
          goto code_r0x000b44c8;
        }
        iVar15 = 0;
        piVar12 = (int8 *)param_1[0x266];
        iVar8 = piVar12[1];
        piVar13 = piVar12;
        if (iVar8 - 0xfc0U < 0xfffffffffffff00f || iVar8 == -0x31) goto code_r0x000b45b0;
      }
      else {
        pcVar7 = pcVar7 + 1;
        xVar10 = 1;
        *param_1 = (int8)pcVar7;
        if (pcVar7 != pcVar2) goto code_r0x000b44a0;
code_r0x000b441c:
        iVar15 = 0;
code_r0x000b44c8:
        piVar12 = (int8 *)param_1[0x266];
        iVar8 = piVar12[1];
        piVar13 = piVar12;
        if (iVar8 - 0xfc0U < 0xfffffffffffff00f || iVar8 == -0x31) {
code_r0x000b45b0:
          piVar12 = (int8 *)malloc(0x1000);
          if (piVar12 == (int8 *)0x0) goto code_r0x000b4714;
          iVar8 = 0;
          *piVar12 = (int8)piVar13;
          piVar12[1] = 0;
          param_1[0x266] = (int8)piVar12;
        }
      }
      piVar12[1] = iVar8 + 0x30;
      pxVar14 = (xunknown8 *)((int8)piVar12 + iVar8 + 0x10);
      *pxVar14 = 0xd19c8;
      *(xunknown1 *)((int8)piVar12 + iVar8 + 0x18) = 0x54;
      *(int8 *)((int8)piVar12 + iVar8 + 0x20) = iVar3;
      *(xunknown1 *)((int8)piVar12 + iVar8 + 0x28) = xVar10;
      *(uint2 *)((int8)piVar12 + iVar8 + 0x19) =
           *(uint2 *)((int8)piVar12 + iVar8 + 0x19) & 0xf000 | 0x540;
      *(int8 *)((int8)piVar12 + iVar8 + 0x30) = iVar15;
      piVar13 = (int8 *)param_1[3];
      if (piVar13 == (int8 *)param_1[4]) goto code_r0x000b4574;
code_r0x000b4608:
      param_1[3] = (int8)(piVar13 + 1);
      *piVar13 = (int8)pxVar14;
      piVar5 = (int2 *)*param_1;
      piVar11 = (int2 *)param_1[1];
      if (piVar5 != piVar11) goto code_r0x000b4674;
    }
    else {
      if ((char)*piVar5 == 'T') {
        *param_1 = (int8)((int8)piVar5 + 1);
        iVar3 = FUN_000abd5c(param_1);
        if (iVar3 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar12 = (int8 *)param_1[0x266];
        iVar15 = piVar12[1];
        piVar13 = piVar12;
        if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
          piVar13 = (int8 *)malloc(0x1000);
          if (piVar13 == (int8 *)0x0) goto code_r0x000b4714;
          iVar15 = 0;
          *piVar13 = (int8)piVar12;
          piVar13[1] = 0;
          param_1[0x266] = (int8)piVar13;
        }
        iVar8 = (int8)piVar13 + iVar15;
        xVar6 = 0xd1a38;
        piVar13[1] = iVar15 + 0x20;
        xVar10 = 0x55;
      }
      else {
        if ((char)*piVar5 != 'Q') {
          return (xunknown8 *)0x0;
        }
        *param_1 = (int8)((int8)piVar5 + 1);
        iVar3 = FUN_000b0fa8(param_1);
        if (iVar3 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar12 = (int8 *)param_1[0x266];
        iVar15 = piVar12[1];
        piVar13 = piVar12;
        if (iVar15 - 0xfd0U < 0xfffffffffffff00f || iVar15 == -0x21) {
          piVar13 = (int8 *)malloc(0x1000);
          if (piVar13 == (int8 *)0x0) goto code_r0x000b4714;
          iVar15 = 0;
          *piVar13 = (int8)piVar12;
          piVar13[1] = 0;
          param_1[0x266] = (int8)piVar13;
        }
        iVar8 = (int8)piVar13 + iVar15;
        xVar6 = 0xd1aa8;
        piVar13[1] = iVar15 + 0x20;
        xVar10 = 0x56;
      }
      pxVar14 = (xunknown8 *)(iVar8 + 0x10);
      *pxVar14 = xVar6;
      *(xunknown1 *)(iVar8 + 0x18) = xVar10;
      *(uint2 *)(iVar8 + 0x19) = *(uint2 *)(iVar8 + 0x19) & 0xf000 | 0x540;
      *(int8 *)(iVar8 + 0x20) = iVar3;
      piVar13 = (int8 *)param_1[3];
      if (piVar13 != (int8 *)param_1[4]) goto code_r0x000b4608;
code_r0x000b4574:
      iVar3 = (int8)piVar13 - param_1[2];
      if ((int8 *)param_1[2] == piVar4) {
        iVar15 = malloc(iVar3 * 2);
        if (iVar15 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pxVar14 = (xunknown8 *)(*got_abort)();
          return pxVar14;
        }
        if (piVar13 != piVar4) {
          memcpy(iVar15,piVar4,iVar3);
        }
        param_1[2] = iVar15;
      }
      else {
        iVar15 = realloc();
        param_1[2] = iVar15;
        if (iVar15 == 0) goto code_r0x000ca7b0;
      }
      param_1[3] = (int8)((xunknown8 *)(iVar15 + iVar3) + 1);
      param_1[4] = iVar15 + (iVar3 >> 2) * 8;
      *(xunknown8 *)(iVar15 + iVar3) = pxVar14;
      piVar5 = (int2 *)*param_1;
      piVar11 = (int2 *)param_1[1];
      if (piVar5 != piVar11) {
code_r0x000b4674:
        if ((char)*piVar5 == 'E') {
          *param_1 = (int8)((int8)piVar5 + 1);
          axVar17 = FUN_000adec4(param_1,iVar1 - iVar9 >> 3);
          piVar13 = (int8 *)param_1[0x266];
          iVar9 = piVar13[1];
          piVar4 = piVar13;
          if (iVar9 - 0xfc0U < 0xfffffffffffff00f || iVar9 == -0x31) {
            piVar4 = (int8 *)malloc(0x1000);
            if (piVar4 == (int8 *)0x0) {
code_r0x000b4714:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pxVar14 = (xunknown8 *)(*pcRam00000000000d4468)();
              return pxVar14;
            }
            iVar9 = 0;
            *piVar4 = (int8)piVar13;
            piVar4[1] = 0;
            param_1[0x266] = (int8)piVar4;
          }
          piVar4[1] = iVar9 + 0x30;
          pxVar14 = (xunknown8 *)((int8)piVar4 + iVar9 + 0x10);
          *pxVar14 = 0xd1b18;
          *(xunknown1 *)((int8)piVar4 + iVar9 + 0x18) = 0x53;
          *(xunknown1 (*) [16])((int8)piVar4 + iVar9 + 0x30) = axVar17;
          *(xunknown1 (*) [16])((int8)piVar4 + iVar9 + 0x20) = axVar16;
          *(uint2 *)((int8)piVar4 + iVar9 + 0x19) =
               *(uint2 *)((int8)piVar4 + iVar9 + 0x19) & 0xf000 | 0x540;
          return pxVar14;
        }
      }
    }
    if (piVar5 == piVar11) {
      return (xunknown8 *)0x0;
    }
  } while( true );
}

/* 0xb4724  size=880 */
xunknown8 * FUN_000b4724(int8 *param_1)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 *piVar4;
  int8 *piVar5;
  uint1 *puVar6;
  int8 iVar7;
  int8 iVar8;
  uint1 *puVar9;
  int8 iVar10;
  int8 *piVar11;
  xunknown1 xVar12;
  uint1 *puVar13;
  int8 iVar14;
  uint1 *puVar15;
  xunknown8 *pxVar16;
  xunknown1 axVar17 [16];
  
  iVar2 = FUN_000abd5c();
  if ((iVar2 != 0) && (iVar3 = FUN_000b0fa8(param_1), iVar3 != 0)) {
    puVar15 = (uint1 *)*param_1;
    puVar6 = (uint1 *)param_1[1];
    puVar13 = puVar15;
    if ((puVar15 != puVar6) && (*puVar15 == 0x6e)) {
      puVar13 = puVar15 + 1;
      *param_1 = (int8)puVar13;
    }
    if (puVar6 != puVar13) {
      if (*puVar13 - 0x3a < 0xfffffff6) {
        puVar15 = (uint1 *)0x0;
        iVar10 = 0;
      }
      else {
        do {
          if (*puVar13 - 0x3a < 0xfffffff6) goto code_r0x000b47dc;
          puVar13 = puVar13 + 1;
          *param_1 = (int8)puVar13;
        } while (puVar13 != puVar6);
        puVar13 = puVar6;
code_r0x000b47dc:
        iVar10 = (int8)puVar13 - (int8)puVar15;
      }
      if (puVar13 != puVar6) {
        iVar8 = param_1[2];
        iVar1 = param_1[3];
        piVar5 = param_1 + 5;
code_r0x000b482c:
        do {
          if (*puVar13 != 0x5f) {
            if ((puVar13 == puVar6) || (*puVar13 != 0x70)) {
              xVar12 = 0;
            }
            else {
              puVar13 = puVar13 + 1;
              xVar12 = 1;
              *param_1 = (int8)puVar13;
            }
            if (puVar13 == puVar6) {
              return (xunknown8 *)0x0;
            }
            if (*puVar13 != 0x45) {
              return (xunknown8 *)0x0;
            }
            *param_1 = (int8)(puVar13 + 1);
            axVar17 = FUN_000adec4(param_1,iVar1 - iVar8 >> 3);
            piVar11 = (int8 *)param_1[0x266];
            iVar8 = piVar11[1];
            piVar5 = piVar11;
            if (0xfffffffffffff00e < iVar8 - 4000U && iVar8 != -0x51) {
code_r0x000b4a10:
              piVar5[1] = iVar8 + 0x50;
              pxVar16 = (xunknown8 *)((int8)piVar5 + iVar8 + 0x10);
              *pxVar16 = 0xd1b88;
              *(xunknown1 *)((int8)piVar5 + iVar8 + 0x18) = 0x3b;
              *(xunknown1 (*) [16])((int8)piVar5 + iVar8 + 0x40) = axVar17;
              *(xunknown1 *)((int8)piVar5 + iVar8 + 0x50) = xVar12;
              *(uint2 *)((int8)piVar5 + iVar8 + 0x19) =
                   *(uint2 *)((int8)piVar5 + iVar8 + 0x19) & 0xf000 | 0x540;
              *(int8 *)((int8)piVar5 + iVar8 + 0x20) = iVar2;
              *(int8 *)((int8)piVar5 + iVar8 + 0x28) = iVar3;
              *(uint1 **)((int8)piVar5 + iVar8 + 0x30) = puVar15;
              *(int8 *)((int8)piVar5 + iVar8 + 0x38) = iVar10;
              return pxVar16;
            }
            piVar5 = (int8 *)malloc(0x1000);
            if (piVar5 != (int8 *)0x0) {
              iVar8 = 0;
              *piVar5 = (int8)piVar11;
              piVar5[1] = 0;
              param_1[0x266] = (int8)piVar5;
              goto code_r0x000b4a10;
            }
            goto code_r0x000b4a88;
          }
          puVar13 = puVar13 + 1;
          *param_1 = (int8)puVar13;
          if ((puVar6 == puVar13) || (*puVar13 - 0x3a < 0xfffffff6)) {
            puVar13 = (uint1 *)0x0;
            iVar14 = 0;
            piVar11 = (int8 *)param_1[0x266];
            iVar7 = piVar11[1];
            if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) goto code_r0x000b48b8;
          }
          else {
            puVar9 = puVar13;
            do {
              if (*puVar9 - 0x3a < 0xfffffff6) goto code_r0x000b48a0;
              puVar9 = puVar9 + 1;
              *param_1 = (int8)puVar9;
            } while (puVar9 != puVar6);
            puVar9 = puVar6;
code_r0x000b48a0:
            iVar14 = (int8)puVar9 - (int8)puVar13;
            piVar11 = (int8 *)param_1[0x266];
            iVar7 = piVar11[1];
            if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
code_r0x000b48b8:
              piVar4 = (int8 *)malloc(0x1000);
              if (piVar4 == (int8 *)0x0) {
code_r0x000b4a88:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pxVar16 = (xunknown8 *)(*pcRam00000000000d4468)();
                return pxVar16;
              }
              iVar7 = 0;
              *piVar4 = (int8)piVar11;
              piVar4[1] = 0;
              param_1[0x266] = (int8)piVar4;
              piVar11 = piVar4;
            }
          }
          piVar11[1] = iVar7 + 0x20;
          pxVar16 = (xunknown8 *)((int8)piVar11 + iVar7 + 0x10);
          *pxVar16 = 0xd0548;
          *(uint1 **)((int8)piVar11 + iVar7 + 0x20) = puVar13;
          *(int8 *)((int8)piVar11 + iVar7 + 0x28) = iVar14;
          *(xunknown1 *)((int8)piVar11 + iVar7 + 0x18) = 8;
          *(uint2 *)((int8)piVar11 + iVar7 + 0x19) =
               *(uint2 *)((int8)piVar11 + iVar7 + 0x19) & 0xf000 | 0x540;
          piVar11 = (int8 *)param_1[3];
          if (piVar11 == (int8 *)param_1[4]) {
            iVar7 = (int8)piVar11 - param_1[2];
            if ((int8 *)param_1[2] == piVar5) {
              iVar14 = malloc(iVar7 * 2);
              if (iVar14 == 0) goto code_r0x000ca7b0;
              if (piVar11 != piVar5) {
                memcpy(iVar14,piVar5,iVar7);
              }
              param_1[2] = iVar14;
            }
            else {
              iVar14 = realloc();
              param_1[2] = iVar14;
              if (iVar14 == 0) {
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pxVar16 = (xunknown8 *)(*got_abort)();
                return pxVar16;
              }
            }
            param_1[3] = (int8)((xunknown8 *)(iVar14 + iVar7) + 1);
            param_1[4] = iVar14 + (iVar7 >> 2) * 8;
            *(xunknown8 *)(iVar14 + iVar7) = pxVar16;
            puVar13 = (uint1 *)*param_1;
            puVar6 = (uint1 *)param_1[1];
            if (puVar13 == puVar6) {
              return (xunknown8 *)0x0;
            }
            goto code_r0x000b482c;
          }
          param_1[3] = (int8)(piVar11 + 1);
          *piVar11 = (int8)pxVar16;
          puVar13 = (uint1 *)*param_1;
          puVar6 = (uint1 *)param_1[1];
          if (puVar13 == puVar6) {
            return (xunknown8 *)0x0;
          }
        } while( true );
      }
    }
  }
  return (xunknown8 *)0x0;
}

/* 0xb4a94  size=160 */
void FUN_000b4a94(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd1798;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x2a;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xb4b34  size=160 */
void FUN_000b4b34(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd1bf8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x3e;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xb4bd4  size=180 */
void FUN_000b4bd4(int8 param_1,xunknown8 *param_2)

{
  int8 *piVar1;
  int8 iVar2;
  xunknown8 xVar3;
  int8 *piVar4;
  
  piVar4 = *(int8 **)(param_1 + 0x1330);
  iVar2 = piVar4[1];
  piVar1 = piVar4;
  if (iVar2 - 0xfb0U < 0xfffffffffffff00f || iVar2 == -0x41) {
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
  piVar1[1] = iVar2 + 0x40;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd0f48;
  xVar3 = *param_2;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x3c;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = 0x2bf28;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = 10;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x38) = 0;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x40) = 0;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar3;
  return;
}

/* 0xb4c88  size=156 */
void FUN_000b4c88(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd1c68;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar4;
  return;
}

/* 0xb4d24  size=172 */
void FUN_000b4d24(int8 param_1,xunknown8 *param_2,xunknown8 *param_3)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd18e8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x46;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x30) = xVar6;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x28) = xVar5;
  return;
}

/* 0xb4dd0  size=168 */
xunknown8 * FUN_000b4dd0(int8 param_1,xunknown8 param_2)

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

/* 0xb4e78  size=160 */
void FUN_000b4e78(int8 param_1,xunknown8 *param_2)

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
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x10) = 0xd1cd8;
  *(xunknown1 *)((int8)piVar1 + iVar2 + 0x18) = 0x48;
  xVar3 = *param_2;
  *(uint2 *)((int8)piVar1 + iVar2 + 0x19) = *(uint2 *)((int8)piVar1 + iVar2 + 0x19) & 0xf000 | 0x540
  ;
  *(xunknown8 *)((int8)piVar1 + iVar2 + 0x20) = xVar3;
  return;
}

/* 0xb4f18  size=1452 */
xunknown8 * FUN_000b4f18(int8 *param_1,uint8 param_2)

{
  uint1 *puVar1;
  int2 *piVar2;
  bool bVar3;
  xunknown8 *pxVar4;
  int8 *piVar5;
  xunknown8 *pxVar6;
  int8 iVar7;
  xunknown8 *pxVar8;
  char *pcVar9;
  int8 iVar10;
  uint8 uVar11;
  int8 *piVar12;
  int8 iStack_68;
  xunknown8 *pxStack_48;
  
  piVar2 = (int2 *)*param_1;
  uVar11 = param_1[1] - (int8)piVar2;
  if (uVar11 < 3) {
    if (uVar11 == 2) goto code_r0x000b4f7c;
  }
  else {
    if (*piVar2 == 0x7273 && (char)piVar2[1] == 'N') {
      *param_1 = (int8)piVar2 + 3;
      pxVar8 = (xunknown8 *)FUN_000bc410(param_1);
      if (pxVar8 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pxVar4 = pxVar8;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        iVar7 = FUN_000af668(param_1,0);
        if (iVar7 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar12 = (int8 *)param_1[0x266];
        iVar10 = piVar12[1];
        piVar5 = piVar12;
        if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
          piVar5 = (int8 *)malloc(0x1000);
          if (piVar5 == (int8 *)0x0) goto code_r0x000b54c0;
          iVar10 = 0;
          *piVar5 = (int8)piVar12;
          piVar5[1] = 0;
          param_1[0x266] = (int8)piVar5;
        }
        piVar5[1] = iVar10 + 0x20;
        pxVar4 = (xunknown8 *)((int8)piVar5 + iVar10 + 0x10);
        *pxVar4 = 0xd2448;
        *(xunknown8 **)((int8)piVar5 + iVar10 + 0x20) = pxVar8;
        *(int8 *)((int8)piVar5 + iVar10 + 0x28) = iVar7;
        *(xunknown1 *)((int8)piVar5 + iVar10 + 0x18) = 0x2d;
        *(uint2 *)((int8)piVar5 + iVar10 + 0x19) =
             *(uint2 *)((int8)piVar5 + iVar10 + 0x19) & 0xf000 | 0x540;
      }
      while ((pcVar9 = (char *)*param_1, pcVar9 == (char *)param_1[1] || (*pcVar9 != 'E'))) {
        iVar7 = FUN_000bc594(param_1);
        if (iVar7 == 0) {
          return (xunknown8 *)0x0;
        }
        piVar12 = (int8 *)param_1[0x266];
        iVar10 = piVar12[1];
        piVar5 = piVar12;
        if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
          piVar5 = (int8 *)malloc(0x1000);
          if (piVar5 == (int8 *)0x0) goto code_r0x000b54c0;
          iVar10 = 0;
          *piVar5 = (int8)piVar12;
          piVar5[1] = 0;
          param_1[0x266] = (int8)piVar5;
        }
        piVar5[1] = iVar10 + 0x20;
        pxVar8 = (xunknown8 *)((int8)piVar5 + iVar10 + 0x10);
        *pxVar8 = 0xd1d48;
        *(xunknown1 *)((int8)piVar5 + iVar10 + 0x18) = 0x17;
        *(xunknown8 **)((int8)piVar5 + iVar10 + 0x20) = pxVar4;
        *(int8 *)((int8)piVar5 + iVar10 + 0x28) = iVar7;
        *(uint2 *)((int8)piVar5 + iVar10 + 0x19) =
             *(uint2 *)((int8)piVar5 + iVar10 + 0x19) & 0xf000 | 0x540;
        pxVar4 = pxVar8;
      }
      *param_1 = (int8)(pcVar9 + 1);
      iVar7 = FUN_000bc66c(param_1);
      if (iVar7 == 0) {
        return (xunknown8 *)0x0;
      }
      piVar12 = (int8 *)param_1[0x266];
      iVar10 = piVar12[1];
      piVar5 = piVar12;
      if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
        piVar5 = (int8 *)malloc(0x1000);
        if (piVar5 == (int8 *)0x0) goto code_r0x000b54c0;
        iVar10 = 0;
        *piVar5 = (int8)piVar12;
        piVar5[1] = 0;
        param_1[0x266] = (int8)piVar5;
      }
      piVar5[1] = iVar10 + 0x20;
      pxVar8 = (xunknown8 *)((int8)piVar5 + iVar10 + 0x10);
      *pxVar8 = 0xd1d48;
      goto code_r0x000b547c;
    }
code_r0x000b4f7c:
    if (*piVar2 == 0x7273) {
      puVar1 = (uint1 *)(piVar2 + 1);
      *param_1 = (int8)puVar1;
      if (((uint1 *)param_1[1] != puVar1) && (0xfffffff5 < *puVar1 - 0x3a)) {
        pxVar4 = (xunknown8 *)FUN_000bc594(param_1);
        if (pxVar4 == (xunknown8 *)0x0) {
          return (xunknown8 *)0x0;
        }
        if ((param_2 & 1) == 0) {
          pxVar8 = (xunknown8 *)0x0;
          do {
            if (pxVar8 == (xunknown8 *)0x0) {
              pcVar9 = (char *)*param_1;
              pxVar6 = pxVar4;
              if (pcVar9 != (char *)param_1[1]) goto code_r0x000b5410;
            }
            else {
              piVar12 = (int8 *)param_1[0x266];
              iVar7 = piVar12[1];
              piVar5 = piVar12;
              if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
                piVar5 = (int8 *)malloc(0x1000);
                if (piVar5 == (int8 *)0x0) goto code_r0x000b54c0;
                iVar7 = 0;
                *piVar5 = (int8)piVar12;
                piVar5[1] = 0;
                param_1[0x266] = (int8)piVar5;
              }
              piVar5[1] = iVar7 + 0x20;
              pxVar6 = (xunknown8 *)((int8)piVar5 + iVar7 + 0x10);
              *pxVar6 = 0xd1d48;
              *(xunknown8 **)((int8)piVar5 + iVar7 + 0x20) = pxVar8;
              *(xunknown8 **)((int8)piVar5 + iVar7 + 0x28) = pxVar4;
              *(xunknown1 *)((int8)piVar5 + iVar7 + 0x18) = 0x17;
              *(uint2 *)((int8)piVar5 + iVar7 + 0x19) =
                   *(uint2 *)((int8)piVar5 + iVar7 + 0x19) & 0xf000 | 0x540;
              pcVar9 = (char *)*param_1;
              pxVar4 = pxVar6;
              if (pcVar9 != (char *)param_1[1]) {
code_r0x000b5410:
                pxVar6 = pxVar4;
                if (*pcVar9 == 'E') goto code_r0x000b541c;
              }
            }
            pxVar4 = (xunknown8 *)FUN_000bc594(param_1);
            pxVar8 = pxVar6;
            if (pxVar4 == (xunknown8 *)0x0) {
              return (xunknown8 *)0x0;
            }
          } while( true );
        }
        pxVar8 = (xunknown8 *)0x0;
        pxVar6 = pxVar4;
        do {
          piVar5 = (int8 *)param_1[0x266];
          iVar7 = piVar5[1];
          bVar3 = iVar7 - 0xfd0U < 0xfffffffffffff00f;
          if (pxVar8 == (xunknown8 *)0x0) {
            piVar12 = piVar5;
            if (bVar3 || iVar7 == -0x21) {
              piVar12 = (int8 *)malloc(0x1000);
              if (piVar12 == (xunknown8 *)0x0) goto code_r0x000b54c0;
              iVar7 = 0;
              *piVar12 = (int8)piVar5;
              piVar12[1] = 0;
              param_1[0x266] = (int8)piVar12;
            }
            piVar12[1] = iVar7 + 0x20;
            pxVar4 = (xunknown8 *)((int8)piVar12 + iVar7 + 0x10);
            *pxVar4 = 0xd1f08;
            *(xunknown1 *)((int8)piVar12 + iVar7 + 0x18) = 0x2e;
            *(uint2 *)((int8)piVar12 + iVar7 + 0x19) =
                 *(uint2 *)((int8)piVar12 + iVar7 + 0x19) & 0xf000 | 0x540;
            *(xunknown8 **)((int8)piVar12 + iVar7 + 0x20) = pxVar6;
            pcVar9 = (char *)*param_1;
            if (pcVar9 != (char *)param_1[1]) {
code_r0x000b52f8:
              if (*pcVar9 == 'E') goto code_r0x000b541c;
            }
          }
          else {
            piVar12 = piVar5;
            if (bVar3 || iVar7 == -0x21) {
              piVar12 = (int8 *)malloc(0x1000);
              if (piVar12 == (int8 *)0x0) goto code_r0x000b54c0;
              iVar7 = 0;
              *piVar12 = (int8)piVar5;
              piVar12[1] = 0;
              param_1[0x266] = (int8)piVar12;
            }
            piVar12[1] = iVar7 + 0x20;
            pxVar4 = (xunknown8 *)((int8)piVar12 + iVar7 + 0x10);
            *pxVar4 = 0xd1d48;
            *(xunknown1 *)((int8)piVar12 + iVar7 + 0x18) = 0x17;
            *(xunknown8 **)((int8)piVar12 + iVar7 + 0x20) = pxVar8;
            *(uint2 *)((int8)piVar12 + iVar7 + 0x19) =
                 *(uint2 *)((int8)piVar12 + iVar7 + 0x19) & 0xf000 | 0x540;
            *(xunknown8 **)((int8)piVar12 + iVar7 + 0x28) = pxVar6;
            pcVar9 = (char *)*param_1;
            if (pcVar9 != (char *)param_1[1]) goto code_r0x000b52f8;
          }
          pxVar6 = (xunknown8 *)FUN_000bc594(param_1);
          pxVar8 = pxVar4;
          if (pxVar6 == (xunknown8 *)0x0) {
            return (xunknown8 *)0x0;
          }
        } while( true );
      }
      pxVar4 = (xunknown8 *)FUN_000bc410(param_1);
      if (pxVar4 == (xunknown8 *)0x0) {
        return (xunknown8 *)0x0;
      }
      pxStack_48 = pxVar4;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        iStack_68 = FUN_000af668(param_1,0);
        if (iStack_68 == 0) {
          return (xunknown8 *)0x0;
        }
        pxVar4 = (xunknown8 *)FUN_000afc04(param_1,&pxStack_48,&iStack_68);
      }
      goto code_r0x000b5424;
    }
  }
  pxVar4 = (xunknown8 *)FUN_000bc66c(param_1);
  if (pxVar4 == (xunknown8 *)0x0) {
    return (xunknown8 *)0x0;
  }
  if ((param_2 & 1) == 0) {
    return pxVar4;
  }
  piVar12 = (int8 *)param_1[0x266];
  iVar7 = piVar12[1];
  piVar5 = piVar12;
  if (iVar7 - 0xfd0U < 0xfffffffffffff00f || iVar7 == -0x21) {
    piVar5 = (int8 *)malloc(0x1000);
    if (piVar5 == (int8 *)0x0) {
code_r0x000b54c0:
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pxVar4 = (xunknown8 *)(*pcRam00000000000d4468)();
      return pxVar4;
    }
    iVar7 = 0;
    *piVar5 = (int8)piVar12;
    piVar5[1] = 0;
    param_1[0x266] = (int8)piVar5;
  }
  piVar5[1] = iVar7 + 0x20;
  pxVar8 = (xunknown8 *)((int8)piVar5 + iVar7 + 0x10);
  *pxVar8 = 0xd1f08;
  *(xunknown8 **)((int8)piVar5 + iVar7 + 0x20) = pxVar4;
  *(xunknown1 *)((int8)piVar5 + iVar7 + 0x18) = 0x2e;
  *(uint2 *)((int8)piVar5 + iVar7 + 0x19) = *(uint2 *)((int8)piVar5 + iVar7 + 0x19) & 0xf000 | 0x540
  ;
  return pxVar8;
code_r0x000b541c:
  *param_1 = (int8)(pcVar9 + 1);
code_r0x000b5424:
  iVar7 = FUN_000bc66c(param_1);
  if (iVar7 == 0) {
    return (xunknown8 *)0x0;
  }
  piVar12 = (int8 *)param_1[0x266];
  iVar10 = piVar12[1];
  piVar5 = piVar12;
  if (iVar10 - 0xfd0U < 0xfffffffffffff00f || iVar10 == -0x21) {
    piVar5 = (int8 *)malloc(0x1000);
    if (piVar5 == (int8 *)0x0) goto code_r0x000b54c0;
    iVar10 = 0;
    *piVar5 = (int8)piVar12;
    piVar5[1] = 0;
    param_1[0x266] = (int8)piVar5;
  }
  piVar5[1] = iVar10 + 0x20;
  pxVar8 = (xunknown8 *)((int8)piVar5 + iVar10 + 0x10);
  *pxVar8 = 0xd1d48;
code_r0x000b547c:
  *(xunknown1 *)(pxVar8 + 1) = 0x17;
  pxVar8[2] = pxVar4;
  pxVar8[3] = iVar7;
  *(uint2 *)((int8)pxVar8 + 9) = *(uint2 *)((int8)pxVar8 + 9) & 0xf000 | 0x540;
  return pxVar8;
}

/* 0xb54c4  size=204 */
void FUN_000b54c4(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,
                 uint2 *param_5)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  int8 *piVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  
  piVar6 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar6[1];
  piVar2 = piVar6;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
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
  piVar2[1] = iVar3 + 0x30;
  xVar8 = param_3[1];
  xVar7 = *param_3;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0a78;
  uVar1 = *param_5;
  xVar5 = *param_2;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x36;
  xVar4 = *param_4;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar5;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar8;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar7;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x38) = xVar4;
  return;
}

/* 0xb5590  size=720 */
void FUN_000b5590(int8 param_1,int8 *param_2)

{
  int4 iVar1;
  uint8 uVar2;
  uint4 uVar3;
  bool bVar4;
  bool bVar5;
  int8 iVar6;
  int8 iVar7;
  xunknown8 xVar8;
  uint8 uVar9;
  uint8 uVar10;
  int8 iVar11;
  char *pcVar12;
  
  if ((int4)param_2[4] == 0) {
    if (*(int8 *)(param_1 + 0x20) == 2) {
      if (**(int2 **)(param_1 + 0x18) == 0x3e3e) goto code_r0x000b57f4;
      goto code_r0x000b55b8;
    }
    if ((*(int8 *)(param_1 + 0x20) != 1) || ((char)**(int2 **)(param_1 + 0x18) != '>'))
    goto code_r0x000b55b8;
code_r0x000b57f4:
    iVar11 = param_2[1];
    iVar7 = *param_2;
    *(xunknown4 *)(param_2 + 4) = 1;
    uVar10 = iVar11 + 1;
    if ((uint8)param_2[2] < uVar10) {
      uVar10 = param_2[2] * 2;
      if (uVar10 <= iVar11 + 0x3e1U) {
        uVar10 = iVar11 + 0x3e1U;
      }
      param_2[2] = uVar10;
      iVar7 = realloc();
      *param_2 = iVar7;
      if (iVar7 == 0) goto code_r0x000ca7b0;
      iVar11 = param_2[1];
      uVar10 = iVar11 + 1;
    }
    bVar4 = true;
    param_2[1] = uVar10;
    *(xunknown1 *)(iVar7 + iVar11) = 0x28;
  }
  else {
code_r0x000b55b8:
    bVar4 = false;
  }
  uVar3 = (uint4)*(uint2 *)(param_1 + 9) << 10;
  bVar5 = (uVar3 & 0xfc00) != 0x4400;
  iVar1 = 0xf;
  if (bVar5) {
    iVar1 = (int4)((uint4)*(uint2 *)(param_1 + 9) << 0x1a) >> 0x1a;
  }
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x10),param_2,iVar1,bVar5);
  if ((*(int8 *)(param_1 + 0x20) == 1) && (pcVar12 = *(char **)(param_1 + 0x18), *pcVar12 == ',')) {
    iVar11 = 1;
    iVar7 = param_2[1];
    uVar9 = param_2[2];
    iVar6 = *param_2;
    uVar10 = iVar7 + 1;
    if (uVar9 < uVar10) {
code_r0x000b5690:
      uVar2 = uVar9 * 2;
      if (uVar9 * 2 <= uVar10 + 0x3e0) {
        uVar2 = uVar10 + 0x3e0;
      }
      param_2[2] = uVar2;
      iVar6 = realloc();
      *param_2 = iVar6;
      if (iVar6 == 0) goto code_r0x000ca7b0;
      iVar7 = param_2[1];
    }
code_r0x000b56b4:
    memcpy(iVar6 + iVar7,pcVar12,iVar11);
    uVar10 = param_2[2];
    iVar11 = param_2[1] + iVar11;
    param_2[1] = iVar11;
    iVar7 = *param_2;
    if (uVar10 < iVar11 + 1U) {
code_r0x000b571c:
      uVar9 = uVar10 * 2;
      if (uVar10 * 2 <= iVar11 + 0x3e1U) {
        uVar9 = iVar11 + 0x3e1U;
      }
      param_2[2] = uVar9;
      iVar7 = realloc();
      *param_2 = iVar7;
      if (iVar7 == 0) goto code_r0x000ca7b0;
      iVar11 = param_2[1];
    }
  }
  else {
    iVar11 = param_2[1];
    iVar7 = *param_2;
    if ((uint8)param_2[2] < iVar11 + 1U) {
      uVar10 = param_2[2] * 2;
      if (uVar10 <= iVar11 + 0x3e1U) {
        uVar10 = iVar11 + 0x3e1U;
      }
      param_2[2] = uVar10;
      iVar7 = realloc();
      *param_2 = iVar7;
      if (iVar7 == 0) goto code_r0x000ca7b0;
      iVar11 = param_2[1];
    }
    *(xunknown1 *)(iVar7 + iVar11) = 0x20;
    param_2[1] = param_2[1] + 1;
    iVar11 = *(int8 *)(param_1 + 0x20);
    if (iVar11 != 0) {
      pcVar12 = *(char **)(param_1 + 0x18);
      iVar7 = param_2[1];
      uVar9 = param_2[2];
      iVar6 = *param_2;
      uVar10 = iVar7 + iVar11;
      if (uVar9 < uVar10) goto code_r0x000b5690;
      goto code_r0x000b56b4;
    }
    iVar11 = param_2[1];
    uVar10 = param_2[2];
    iVar7 = *param_2;
    if (uVar10 < iVar11 + 1U) goto code_r0x000b571c;
  }
  *(xunknown1 *)(iVar7 + iVar11) = 0x20;
  xVar8 = *(xunknown8 *)(param_1 + 0x28);
  param_2[1] = param_2[1] + 1;
  FUN_000b5868(xVar8,param_2,(int4)((uint4)*(uint2 *)(param_1 + 9) << 0x1a) >> 0x1a,
               (uVar3 & 0xffff) == 0x4400);
  if (bVar4) {
    iVar11 = param_2[1];
    iVar7 = *param_2;
    uVar10 = iVar11 + 1;
    *(int4 *)(param_2 + 4) = (int4)param_2[4] + -1;
    if ((uint8)param_2[2] < uVar10) {
      uVar10 = param_2[2] * 2;
      if (uVar10 <= iVar11 + 0x3e1U) {
        uVar10 = iVar11 + 0x3e1U;
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
      iVar11 = param_2[1];
      uVar10 = iVar11 + 1;
    }
    param_2[1] = uVar10;
    *(xunknown1 *)(iVar7 + iVar11) = 0x29;
  }
  return;
}

/* 0xb5860  size=8 */
void FUN_000b5860(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb5868  size=364 */
void FUN_000b5868(int8 *param_1,int8 *param_2,int4 param_3,uint4 param_4)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  
  if ((uint4)((int4)((uint4)*(uint2 *)((int8)param_1 + 9) << 0x1a) >> 0x1a) <
      (param_4 & 1) + param_3) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    if ((*(uint2 *)((int8)param_1 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000b58d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
      return;
    }
  }
  else {
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
    iVar4 = *param_1;
    *(xunknown1 *)(iVar1 + iVar2) = 0x28;
    (**(code **)(iVar4 + 0x20))(param_1,param_2);
    if ((*(uint2 *)((int8)param_1 + 9) & 0xc0) != 0x40) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
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
  }
  return;
}

/* 0xb59d4  size=192 */
void FUN_000b59d4(int8 param_1,xunknown8 *param_2,xunknown8 *param_3,uint2 *param_4)

{
  uint2 uVar1;
  int8 *piVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  
  piVar5 = *(int8 **)(param_1 + 0x1330);
  iVar3 = piVar5[1];
  piVar2 = piVar5;
  if (iVar3 - 0xfc0U < 0xfffffffffffff00f || iVar3 == -0x31) {
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
  piVar2[1] = iVar3 + 0x30;
  xVar7 = param_2[1];
  xVar6 = *param_2;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x10) = 0xd0ae8;
  uVar1 = *param_4;
  *(xunknown1 *)((int8)piVar2 + iVar3 + 0x18) = 0x42;
  xVar4 = *param_3;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x28) = xVar7;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x20) = xVar6;
  *(uint2 *)((int8)piVar2 + iVar3 + 0x19) =
       *(uint2 *)((int8)piVar2 + iVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(xunknown8 *)((int8)piVar2 + iVar3 + 0x30) = xVar4;
  return;
}

/* 0xb5a94  size=168 */
void FUN_000b5a94(int8 param_1,int8 *param_2)

{
  int8 iVar1;
  int8 *piVar2;
  uint8 uVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 iVar6;
  xunknown8 xVar7;
  
  iVar6 = *(int8 *)(param_1 + 0x18);
  if (iVar6 != 0) {
    iVar4 = param_2[1];
    iVar1 = *param_2;
    xVar7 = *(xunknown8 *)(param_1 + 0x10);
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
  piVar2 = *(int8 **)(param_1 + 0x20);
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

/* 0xb5b3c  size=8 */
void FUN_000b5b3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xb5b44  size=168 */
void FUN_000b5b44(int8 param_1,int8 *param_2)

{
  uint8 uVar1;
  int8 iVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  
  FUN_000b5868(*(xunknown8 *)(param_1 + 0x10),param_2,
               (int4)((uint4)*(uint2 *)(param_1 + 9) << 0x1a) >> 0x1a,1);
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

/* 0xb5bec  size=8 */
void FUN_000b5bec(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

