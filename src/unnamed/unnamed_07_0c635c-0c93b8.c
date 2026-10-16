/* unexported functions 0xc635c..0xc93b8
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0xc635c  size=12 */
xunknown1 FUN_000c635c(int8 param_1)

{
  return *(xunknown1 *)(param_1 + 0x269);
}

/* 0xc6368  size=44 */
xunknown8 FUN_000c6368(int8 *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}

/* 0xc6394  size=640 */
void FUN_000c6394(int8 *param_1,uint8 param_2)

{
  int4 iVar1;
  xunknown4 xVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 iVar5;
  uint8 uVar6;
  int8 aiStack_6e0 [4];
  int8 iStack_6c0;
  int4 iStack_6a8;
  int4 iStack_6a4;
  xunknown4 xStack_6a0;
  int8 iStack_690;
  int8 iStack_688;
  int8 iStack_680;
  xunknown1 axStack_678 [16];
  int8 iStack_668;
  int4 *piStack_648;
  xunknown1 *pxStack_640;
  uint8 uStack_638;
  
  *(xunknown1 *)((int8)param_1 + 0x26a) = 0;
  iVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar3 == 0) {
    *(xunknown1 *)(param_1 + 0x4d) = 1;
    return;
  }
  piStack_648 = (int4 *)param_1[1];
  pxStack_640 = axStack_678;
  uVar6 = iVar3 - (param_2 & 1);
  uStack_638 = uVar6;
  iVar1 = dl_iterate_phdr(FUN_000c8d38,&piStack_648);
  if (((iVar1 == 0) || (iStack_668 == 0)) ||
     (uVar4 = FUN_000c8a64(param_1,uVar6,axStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock(0x173304);
    for (uVar4 = uRam00000000000d8f40; uVar4 < uRam00000000000d8f48; uVar4 = uVar4 + 0x20) {
      if ((*(uint8 *)(uVar4 + 8) <= uVar6) && (uVar6 < *(uint8 *)(uVar4 + 0x10))) {
        iVar3 = *(int8 *)(uVar4 + 0x18);
        pthread_rwlock_unlock(0x173304);
        if ((iVar3 != 0) &&
           (iVar3 = FUN_000c5b6c(param_1[1],iVar3,&iStack_6a8,aiStack_6e0,0), iVar3 == 0)) {
          memset(&piStack_648,0,0x618);
          uVar6 = FUN_000c6bc8(param_1[1],&iStack_6a8,aiStack_6e0,uVar6,4,&piStack_648);
          if ((uVar6 & 1) != 0) {
            param_1[0x49] = 0;
            param_1[0x46] = iStack_680;
            param_1[0x47] = iStack_6c0;
            param_1[0x48] = uStack_638 & 0xffffffff;
            *(xunknown4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x45] = iStack_688;
            param_1[0x44] = iStack_690;
            param_1[0x4c] = 0;
            param_1[0x4b] = CONCAT44(iStack_6a4,iStack_6a8);
            *(xunknown4 *)((int8)param_1 + 0x254) = xStack_6a0;
            return;
          }
        }
        goto code_r0x000c651c;
      }
    }
    pthread_rwlock_unlock(0x173304);
code_r0x000c651c:
    iVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    piStack_648 = &iStack_6a8;
    pxStack_640 = (xunknown1 *)0x8;
    aiStack_6e0[1] = 8;
    aiStack_6e0[0] = iVar3;
    xVar2 = getpid();
    iVar5 = syscall(0x10e,xVar2,&piStack_648,1,aiStack_6e0,1,0);
    if (((iVar5 != 8) || (iStack_6a8 != -0x2d7fee98)) || (iStack_6a4 != -0x2bffffff)) {
      *(xunknown1 *)(param_1 + 0x4d) = 1;
      return;
    }
    param_1[0x4c] = 0;
    param_1[0x45] = iVar3 + 4;
    param_1[0x44] = iVar3;
    *(xunknown1 *)((int8)param_1 + 0x26a) = 1;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
  }
  return;
}

/* 0xc6614  size=12 */
int8 FUN_000c6614(xunknown8 param_1,int4 param_2)

{
  if (param_2 + 2U < 0x62) {
    return (int8)*(int4 *)((uint8)(param_2 + 2U) * 4 + 0x43fac) + 0x43fac;
  }
  return 0x38399 /* "unknown register" */;
}

/* 0xc6620  size=288 */
xunknown8 FUN_000c6620(int8 param_1)

{
  int8 iVar1;
  xunknown8 xVar2;
  
  iVar1 = *(int8 *)(param_1 + 0x108);
  *(xunknown8 *)(param_1 + 0x10) = *(xunknown8 *)(iVar1 + 0x138);
  *(xunknown8 *)(param_1 + 0x18) = *(xunknown8 *)(iVar1 + 0x140);
  *(xunknown8 *)(param_1 + 0x20) = *(xunknown8 *)(iVar1 + 0x148);
  *(xunknown8 *)(param_1 + 0x28) = *(xunknown8 *)(iVar1 + 0x150);
  *(xunknown8 *)(param_1 + 0x30) = *(xunknown8 *)(iVar1 + 0x158);
  *(xunknown8 *)(param_1 + 0x38) = *(xunknown8 *)(iVar1 + 0x160);
  *(xunknown8 *)(param_1 + 0x40) = *(xunknown8 *)(iVar1 + 0x168);
  *(xunknown8 *)(param_1 + 0x48) = *(xunknown8 *)(iVar1 + 0x170);
  *(xunknown8 *)(param_1 + 0x50) = *(xunknown8 *)(iVar1 + 0x178);
  *(xunknown8 *)(param_1 + 0x58) = *(xunknown8 *)(iVar1 + 0x180);
  *(xunknown8 *)(param_1 + 0x60) = *(xunknown8 *)(iVar1 + 0x188);
  *(xunknown8 *)(param_1 + 0x68) = *(xunknown8 *)(iVar1 + 400);
  *(xunknown8 *)(param_1 + 0x70) = *(xunknown8 *)(iVar1 + 0x198);
  *(xunknown8 *)(param_1 + 0x78) = *(xunknown8 *)(iVar1 + 0x1a0);
  *(xunknown8 *)(param_1 + 0x80) = *(xunknown8 *)(iVar1 + 0x1a8);
  *(xunknown8 *)(param_1 + 0x88) = *(xunknown8 *)(iVar1 + 0x1b0);
  *(xunknown8 *)(param_1 + 0x90) = *(xunknown8 *)(iVar1 + 0x1b8);
  *(xunknown8 *)(param_1 + 0x98) = *(xunknown8 *)(iVar1 + 0x1c0);
  *(xunknown8 *)(param_1 + 0xa0) = *(xunknown8 *)(iVar1 + 0x1c8);
  *(xunknown8 *)(param_1 + 0xa8) = *(xunknown8 *)(iVar1 + 0x1d0);
  *(xunknown8 *)(param_1 + 0xb0) = *(xunknown8 *)(iVar1 + 0x1d8);
  *(xunknown8 *)(param_1 + 0xb8) = *(xunknown8 *)(iVar1 + 0x1e0);
  *(xunknown8 *)(param_1 + 0xc0) = *(xunknown8 *)(iVar1 + 0x1e8);
  *(xunknown8 *)(param_1 + 200) = *(xunknown8 *)(iVar1 + 0x1f0);
  *(xunknown8 *)(param_1 + 0xd0) = *(xunknown8 *)(iVar1 + 0x1f8);
  *(xunknown8 *)(param_1 + 0xd8) = *(xunknown8 *)(iVar1 + 0x200);
  *(xunknown8 *)(param_1 + 0xe0) = *(xunknown8 *)(iVar1 + 0x208);
  *(xunknown8 *)(param_1 + 0xe8) = *(xunknown8 *)(iVar1 + 0x210);
  *(xunknown8 *)(param_1 + 0xf0) = *(xunknown8 *)(iVar1 + 0x218);
  *(xunknown8 *)(param_1 + 0xf8) = *(xunknown8 *)(iVar1 + 0x220);
  *(xunknown8 *)(param_1 + 0x100) = *(xunknown8 *)(iVar1 + 0x228);
  *(xunknown8 *)(param_1 + 0x108) = *(xunknown8 *)(iVar1 + 0x230);
  xVar2 = *(xunknown8 *)(iVar1 + 0x238);
  *(xunknown1 *)(param_1 + 0x269) = 1;
  *(xunknown8 *)(param_1 + 0x110) = xVar2;
  return 1;
}

/* 0xc6740  size=1160 */
xunknown8 FUN_000c6740(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,int8 param_4,
                      xunknown1 *param_5,uint8 param_6)

{
  bool bVar1;
  int4 iVar2;
  xunknown8 xVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 *puVar6;
  uint8 uVar7;
  xunknown8 *pxVar8;
  xunknown8 xVar9;
  int4 *piVar10;
  uint4 uVar11;
  uint8 *puVar12;
  uint8 uVar13;
  xunknown1 axStack_b20 [288];
  uint8 auStack_a00 [96];
  xunknown1 axStack_700 [24];
  int4 aiStack_6e8 [2];
  int8 aiStack_6e0 [67];
  xunknown8 xStack_4c8;
  xunknown8 xStack_4c0;
  xunknown1 axStack_e8 [48];
  xunknown1 xStack_b8;
  uint1 uStack_b6;
  char cStack_b4;
  xunknown1 axStack_b0 [48];
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  
  iVar4 = FUN_000c5b6c(param_1,param_3,axStack_b0,axStack_e8,0);
  if (iVar4 == 0) {
    memset(axStack_700,0,0x618);
    uVar5 = FUN_000c6bc8(param_1,axStack_b0,axStack_e8,param_2,4,axStack_700);
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_000c7810(param_1,axStack_700,param_4);
      if (((param_6 & 1) != 0) && (cStack_b4 != '\0')) {
        for (uVar7 = *(uint8 *)(param_4 + 0xf8) & 0xfffffffffffffff0; uVar7 < uVar5;
            uVar7 = uVar7 + 0x10) {
        }
      }
      memcpy(auStack_a00 + 0x1e,param_4,0x210);
      uVar7 = 0;
      xVar9 = 0;
      piVar10 = aiStack_6e8;
      puVar12 = auStack_a00 + 0x1e;
      auStack_a00[0x3d] = uVar5;
      do {
        iVar4 = got___sF;
        iVar2 = *piVar10;
        if (iVar2 == 0) {
          if (uVar7 == uStack_b6) {
            if (uStack_b6 < 0x1f) {
              pxVar8 = (xunknown8 *)(param_4 + 0xe8);
              if ((uStack_b6 != 0x1d) && (pxVar8 = (xunknown8 *)(param_4 + 0xf0), uStack_b6 != 0x1e)
                 ) goto code_r0x000c6a20;
            }
            else {
              pxVar8 = (xunknown8 *)(param_4 + 0x108);
              if ((uStack_b6 != 0x22) &&
                 ((pxVar8 = (xunknown8 *)(param_4 + 0x100), uStack_b6 != 0x20 &&
                  (pxVar8 = (xunknown8 *)(param_4 + 0xf8), uStack_b6 != 0x1f)))) {
code_r0x000c6a20:
                if (0x1c < uStack_b6) {
                  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
                  fflush(iVar4 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  xVar9 = (*got_abort)();
                  return xVar9;
                }
                pxVar8 = (xunknown8 *)(param_4 + (uint8)uStack_b6 * 8);
              }
            }
            xVar9 = *pxVar8;
          }
        }
        else {
          uVar11 = (uint4)uVar7;
          if ((uVar11 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar13 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
code_r0x000c6b2c:
                  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x25c25 /* "getSavedFloatRegister" */,0x2bf97 /* "unsupported restore location for float register" */);
                  fflush(iVar4 + 0x130);
                  goto code_r0x000ca7b0;
                }
                uVar13 = *(uint8 *)(*(int8 *)(piVar10 + 2) + uVar5);
              }
            }
            else if (iVar2 == 5) {
              uVar13 = *(uint8 *)(param_4 + ((*(int8 *)(piVar10 + 2) << 0x20) + -0x4000000000 >>
                                            0x1d) + 0x110);
            }
            else {
              if (iVar2 != 6) goto code_r0x000c6b2c;
              puVar6 = (uint8 *)FUN_000c80a8(*(xunknown8 *)(piVar10 + 2),param_1,param_4,uVar5);
              uVar13 = *puVar6;
            }
            auStack_a00[uVar7] = uVar13;
          }
          else if (uVar7 == uStack_b6) {
            xVar9 = FUN_000c7944(param_1,param_4,uVar5,piVar10);
          }
          else if (uVar7 == 0x22) {
            auStack_a00[0x3f] = FUN_000c7944(param_1,param_4,uVar5,piVar10);
          }
          else {
            if (0xffffffe0 < uVar11 - 0x40) {
              return 0xffffe672;
            }
            uVar13 = FUN_000c7944(param_1,param_4,uVar5,piVar10);
            iVar4 = got___sF;
            if ((int4)uVar11 < 0x1f) {
              if (uVar11 == 0x1d) {
                auStack_a00[0x3b] = uVar13;
              }
              else if (uVar11 == 0x1e) {
                auStack_a00[0x3c] = uVar13;
              }
              else {
code_r0x000c6a74:
                if (0x1c < uVar7) {
                  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x350f0 /* "setRegister" */,0x2ac9b /* "unsupported arm64 register" */);
                  fflush(iVar4 + 0x130);
                  goto code_r0x000ca7b0;
                }
                *puVar12 = uVar13;
              }
            }
            else if (uVar11 == 0x1f) {
              auStack_a00[0x3d] = uVar13;
            }
            else if (uVar11 == 0x22) {
              auStack_a00[0x3f] = uVar13;
            }
            else if (uVar11 != 0x20) goto code_r0x000c6a74;
          }
        }
        uVar7 = uVar7 + 1;
        piVar10 = piVar10 + 4;
        puVar12 = puVar12 + 1;
        if (uVar7 == 0x60) {
          *param_5 = xStack_b8;
          memcpy(axStack_b20,param_4,0x210);
          xStack_78 = xStack_4c0;
          xStack_80 = xStack_4c8;
          xVar3 = xStack_80;
          xStack_80._0_4_ = (int4)xStack_4c8;
          bVar1 = (int4)xStack_80 != 0;
          if (bVar1) {
            xStack_80 = xVar3;
            FUN_000c7944(param_1,axStack_b20,uVar5,&xStack_80);
          }
          auStack_a00[0x3e] = xVar9;
          memcpy(param_4,auStack_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}

/* 0xc6bc8  size=3144 */
/* WARNING: Type propagation algorithm not settling */

xunknown8 FUN_000c6bc8(xunknown8 param_1,int8 *param_2,int8 *param_3,int8 param_4,int4 param_5,
                      xunknown4 *param_6)

{
  uint1 uVar1;
  uint1 *puVar2;
  uint1 uVar3;
  char cVar4;
  xunknown8 *pxVar5;
  xunknown4 xVar6;
  int8 iVar7;
  xunknown8 xVar8;
  xunknown8 xVar9;
  uint4 uVar10;
  uint1 *puVar11;
  uint8 uVar12;
  xunknown4 *pxVar13;
  int4 iVar14;
  uint8 uVar15;
  uint8 uVar16;
  uint8 uVar17;
  uint8 uVar18;
  xunknown8 *pxVar19;
  uint8 uVar20;
  int8 iVar21;
  uint1 *puVar22;
  xunknown1 axStack_6e0 [4];
  int4 iStack_6dc;
  uint1 **ppuStack_6d8;
  xunknown8 *pxStack_6d0;
  xunknown8 xStack_6c8;
  xunknown8 *pxStack_6c0;
  uint1 *apuStack_6a0 [193];
  uint8 auStack_98 [7];
  
  pxVar5 = (xunknown8 *)axStack_6e0;
  iVar21 = 0;
  auStack_98[0] = param_3[2];
  auStack_98[1] = param_3[1] + *param_3;
  auStack_98[2] = 0xffffffffffffffff;
  auStack_98[3] = param_2[2];
  xStack_6c8 = param_1;
  pxStack_6c0 = (xunknown8 *)0x0;
  auStack_98[4] = param_2[1] + *param_2;
  auStack_98[5] = param_4 - param_2[3];
  ppuStack_6d8 = apuStack_6a0 + 0x44;
  pxStack_6d0 = (xunknown8 *)(param_6 + 0x8e);
  while( true ) {
    puVar22 = *(uint1 **)((int8)auStack_98 + iVar21);
    puVar2 = *(uint1 **)((int8)auStack_98 + iVar21 + 8);
    uVar17 = *(uint8 *)((int8)auStack_98 + iVar21 + 0x10);
    apuStack_6a0[0xc0] = puVar22;
    if (puVar22 < puVar2 && uVar17 != 0) break;
code_r0x000c6c4c:
    iVar21 = iVar21 + 0x18;
    if (iVar21 == 0x30) {
      return 1;
    }
  }
  uVar18 = 0;
code_r0x000c6c7c:
  pxVar19 = pxStack_6c0;
  iVar7 = got___sF;
  puVar11 = puVar22 + 1;
  uVar3 = *puVar22;
  apuStack_6a0[0xc0] = puVar11;
  switch((uint8)uVar3) {
  case 0:
    goto code_r0x000c7550;
  case 1:
    uVar18 = FUN_000c7b54(xStack_6c8,apuStack_6a0 + 0xc0,puVar2,(char)param_3[3],0);
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 2:
    uVar10 = (uint4)puVar22[1];
    iVar14 = (int4)param_3[5];
    apuStack_6a0[0xc0] = puVar22 + 2;
    goto code_r0x000c7104;
  case 3:
    uVar10 = (uint4)*(uint2 *)(puVar22 + 1);
    iVar14 = (int4)param_3[5];
    apuStack_6a0[0xc0] = puVar22 + 3;
    goto code_r0x000c7104;
  case 4:
    uVar10 = *(uint4 *)(puVar22 + 1);
    iVar14 = (int4)param_3[5];
    apuStack_6a0[0xc0] = puVar22 + 5;
code_r0x000c7104:
    uVar18 = uVar18 + iVar14 * uVar10;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 5:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    iVar7 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x29fea /* "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\..." */;
      xVar9 = 0x46;
      iVar21 = got___sF + 0x130;
      goto code_r0x000c7700;
    }
    pxVar13 = param_6 + uVar20 * 4;
    iVar14 = *(int4 *)((int8)param_3 + 0x2c);
    if (*(char *)(pxVar13 + 7) == '\0') {
      puVar11 = *(uint1 **)(param_6 + uVar20 * 4 + 8);
      puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
      *(char *)(pxVar13 + 7) = '\x01';
      apuStack_6a0[uVar20 * 2 + 1] = puVar11;
      apuStack_6a0[uVar20 * 2] = puVar22;
    }
    iVar7 = iVar7 * iVar14;
code_r0x000c70a0:
    pxVar13[6] = 2;
    *(int8 *)(pxVar13 + 8) = iVar7;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 6:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x3568d /* "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big..." */;
code_r0x000c75f0:
      iVar21 = got___sF + 0x130;
      xVar9 = 0x47;
      goto code_r0x000c7700;
    }
    cVar4 = *(char *)(param_6 + uVar20 * 4 + 7);
joined_r0x000c7530:
    if (cVar4 != '\0') {
      puVar22 = apuStack_6a0[uVar20 * 2];
      *(uint1 **)(param_6 + uVar20 * 4 + 8) = apuStack_6a0[uVar20 * 2 + 1];
      *(uint1 **)(param_6 + uVar20 * 4 + 6) = puVar22;
    }
    goto code_r0x000c7550;
  case 7:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x3d1ad /* "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n" */;
code_r0x000c76f4:
      iVar21 = got___sF + 0x130;
      xVar9 = 0x40;
      goto code_r0x000c7700;
    }
    if (*(char *)(param_6 + uVar20 * 4 + 7) == '\0') {
      puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
      *(char *)(param_6 + uVar20 * 4 + 7) = '\x01';
      apuStack_6a0[uVar20 * 2 + 1] = *(uint1 **)(param_6 + uVar20 * 4 + 8);
      apuStack_6a0[uVar20 * 2] = puVar22;
    }
    param_6[uVar20 * 4 + 6] = 1;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 8:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x41457 /* "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n" */;
code_r0x000c76d8:
      iVar21 = got___sF + 0x130;
      xVar9 = 0x41;
      goto code_r0x000c7700;
    }
    if (*(char *)(param_6 + uVar20 * 4 + 7) == '\0') {
      puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
      *(char *)(param_6 + uVar20 * 4 + 7) = '\x01';
      apuStack_6a0[uVar20 * 2 + 1] = *(uint1 **)(param_6 + uVar20 * 4 + 8);
      apuStack_6a0[uVar20 * 2] = puVar22;
    }
    param_6[uVar20 * 4 + 6] = 0;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 9:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    uVar15 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x3a163 /* "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n" */;
      xVar9 = 0x3f;
      iVar21 = got___sF + 0x130;
      goto code_r0x000c7700;
    }
    if (0x5f < uVar15) {
      xVar8 = 0x2d3a1 /* "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n" */;
      goto code_r0x000c76f4;
    }
    if (*(char *)(param_6 + uVar20 * 4 + 7) == '\0') {
      puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
      *(char *)(param_6 + uVar20 * 4 + 7) = '\x01';
      apuStack_6a0[uVar20 * 2 + 1] = *(uint1 **)(param_6 + uVar20 * 4 + 8);
      apuStack_6a0[uVar20 * 2] = puVar22;
    }
    *(uint8 *)(param_6 + uVar20 * 4 + 8) = uVar15;
    param_6[uVar20 * 4 + 6] = 5;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 10:
    pxVar19 = (xunknown8 *)((int8)pxVar5 + 0xfffffffffffff9e0);
    *pxVar19 = pxStack_6c0;
    memcpy((xunknown1 *)((int8)pxVar5 + 0xfffffffffffff9e8),param_6,0x618);
    pxStack_6c0 = pxVar19;
    pxVar5 = pxVar19;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0xb:
    if (pxStack_6c0 == (xunknown8 *)0x0) {
      return 0;
    }
    memcpy(param_6,pxStack_6c0 + 1,0x618);
    pxStack_6c0 = (xunknown8 *)*pxVar19;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0xc:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    xVar6 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x26515 /* "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n" */;
      xVar9 = 0x3e;
      iVar21 = got___sF + 0x130;
      goto code_r0x000c7700;
    }
    *param_6 = (int4)uVar20;
    param_6[1] = xVar6;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0xd:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x3a1a3 /* "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big..." */;
      goto code_r0x000c75f0;
    }
    *param_6 = (int4)uVar20;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0xe:
    xVar6 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    param_6[1] = xVar6;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(uint1 **)(param_6 + 2) = puVar11;
    goto code_r0x000c7484;
  case 0x10:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      xVar8 = 0x30d96 /* "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n" */;
      goto code_r0x000c76d8;
    }
    pxVar13 = param_6 + uVar20 * 4;
    if (*(char *)(pxVar13 + 7) == '\0') {
      puVar11 = *(uint1 **)(param_6 + uVar20 * 4 + 8);
      puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
      *(char *)(pxVar13 + 7) = '\x01';
      apuStack_6a0[uVar20 * 2 + 1] = puVar11;
      apuStack_6a0[uVar20 * 2] = puVar22;
    }
    xVar6 = 6;
code_r0x000c747c:
    pxVar13[6] = xVar6;
    *(uint1 **)(pxVar13 + 8) = apuStack_6a0[0xc0];
code_r0x000c7484:
    iVar7 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    apuStack_6a0[0xc0] = apuStack_6a0[0xc0] + iVar7;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0x11:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    iVar7 = got___sF;
    if (0x5f < uVar20) {
      xVar8 = 0x3221e /* "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too b..." */;
      xVar9 = 0x49;
      iVar21 = got___sF + 0x130;
      goto code_r0x000c7700;
    }
    uVar15 = 0;
    uVar12 = 0;
    puVar22 = apuStack_6a0[0xc0];
    puVar11 = apuStack_6a0[0xc0];
    do {
      if (puVar11 == puVar2) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
        fflush(iVar7 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        xVar8 = (*got_abort)();
        return xVar8;
      }
      uVar3 = *puVar11;
      puVar22 = puVar22 + 1;
      uVar16 = uVar15 & 0x3f;
      uVar15 = uVar15 + 7;
      uVar12 = ((uint8)uVar3 & 0x7f) << uVar16 | uVar12;
      puVar11 = puVar11 + 1;
    } while ((char)uVar3 < '\0');
    pxVar13 = param_6 + uVar20 * 4;
    uVar16 = -1L << (uVar15 & 0x3f);
    iVar14 = *(int4 *)((int8)param_3 + 0x2c);
    if (0x38 < (int4)uVar15 - 7U || uVar3 < 0x40) {
      uVar16 = 0;
    }
    apuStack_6a0[0xc0] = puVar22;
    if (*(char *)(pxVar13 + 7) == '\0') {
      puVar11 = *(uint1 **)(param_6 + uVar20 * 4 + 8);
      puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
      *(char *)(pxVar13 + 7) = '\x01';
      apuStack_6a0[uVar20 * 2 + 1] = puVar11;
      apuStack_6a0[uVar20 * 2] = puVar22;
    }
    uVar12 = uVar12 | uVar16;
    xVar6 = 2;
code_r0x000c7410:
    pxVar13[6] = xVar6;
    *(uint8 *)(pxVar13 + 8) = uVar12 * (int8)iVar14;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0x12:
    uVar15 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    iVar7 = got___sF;
    uVar20 = 0;
    uVar12 = 0;
    puVar22 = apuStack_6a0[0xc0];
    puVar11 = apuStack_6a0[0xc0];
    do {
      if (puVar11 == puVar2) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
        fflush(iVar7 + 0x130);
        goto code_r0x000ca7b0;
      }
      uVar3 = *puVar11;
      puVar22 = puVar22 + 1;
      uVar16 = uVar20 & 0x3f;
      uVar20 = uVar20 + 7;
      uVar12 = ((uint8)uVar3 & 0x7f) << uVar16 | uVar12;
      puVar11 = puVar11 + 1;
    } while ((char)uVar3 < '\0');
    apuStack_6a0[0xc0] = puVar22;
    if (0x5f < uVar15) {
      xVar8 = 0x29088 /* "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n" */;
      goto code_r0x000c76d8;
    }
    iVar14 = *(int4 *)((int8)param_3 + 0x2c);
    uVar10 = (uint4)(-1L << (uVar20 & 0x3f));
    if (0x38 < (int4)uVar20 - 7U || uVar3 < 0x40) {
      uVar10 = 0;
    }
    *param_6 = (int4)uVar15;
    param_6[1] = iVar14 * ((uint4)uVar12 | uVar10);
    break;
  case 0x13:
    uVar20 = 0;
    uVar15 = 0;
    puVar22 = puVar11;
    do {
      if (puVar22 == puVar2) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
        fflush(iVar7 + 0x130);
        goto code_r0x000ca7b0;
      }
      uVar3 = *puVar22;
      puVar11 = puVar11 + 1;
      uVar12 = uVar20 & 0x3f;
      uVar20 = uVar20 + 7;
      uVar15 = ((uint8)uVar3 & 0x7f) << uVar12 | uVar15;
      puVar22 = puVar22 + 1;
    } while ((char)uVar3 < '\0');
    apuStack_6a0[0xc0] = puVar11;
    uVar10 = (uint4)(-1L << (uVar20 & 0x3f));
    if (0x38 < (int4)uVar20 - 7U || uVar3 < 0x40) {
      uVar10 = 0;
    }
    param_6[1] = *(int4 *)((int8)param_3 + 0x2c) * ((uint4)uVar15 | uVar10);
    puVar22 = puVar11;
    break;
  case 0x14:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (0x5f < uVar20) {
      fprintf(got___sF + 0x130,0x27793 /* "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of ..." */,uVar20);
      goto code_r0x000c7708;
    }
    iVar7 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    iVar14 = *(int4 *)((int8)param_3 + 0x2c);
    if (*(char *)(param_6 + uVar20 * 4 + 7) == '\0') {
      puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
      *(char *)(param_6 + uVar20 * 4 + 7) = '\x01';
      apuStack_6a0[uVar20 * 2 + 1] = *(uint1 **)(param_6 + uVar20 * 4 + 8);
      apuStack_6a0[uVar20 * 2] = puVar22;
    }
    param_6[uVar20 * 4 + 6] = 4;
    *(int8 *)(param_6 + uVar20 * 4 + 8) = iVar7 * iVar14;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0x15:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    iVar7 = got___sF;
    if (uVar20 < 0x60) {
      uVar15 = 0;
      uVar12 = 0;
      puVar22 = apuStack_6a0[0xc0];
      puVar11 = apuStack_6a0[0xc0];
      do {
        if (puVar11 == puVar2) {
          fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
          fflush(iVar7 + 0x130);
          goto code_r0x000ca7b0;
        }
        uVar3 = *puVar11;
        puVar22 = puVar22 + 1;
        uVar16 = uVar15 & 0x3f;
        uVar15 = uVar15 + 7;
        uVar12 = ((uint8)uVar3 & 0x7f) << uVar16 | uVar12;
        puVar11 = puVar11 + 1;
      } while ((char)uVar3 < '\0');
      pxVar13 = param_6 + uVar20 * 4;
      uVar16 = -1L << (uVar15 & 0x3f);
      iVar14 = *(int4 *)((int8)param_3 + 0x2c);
      if (0x38 < (int4)uVar15 - 7U || uVar3 < 0x40) {
        uVar16 = 0;
      }
      apuStack_6a0[0xc0] = puVar22;
      if (*(char *)(pxVar13 + 7) == '\0') {
        puVar11 = *(uint1 **)(param_6 + uVar20 * 4 + 8);
        puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
        *(char *)(pxVar13 + 7) = '\x01';
        apuStack_6a0[uVar20 * 2 + 1] = puVar11;
        apuStack_6a0[uVar20 * 2] = puVar22;
      }
      uVar12 = uVar12 | uVar16;
      xVar6 = 4;
      goto code_r0x000c7410;
    }
    xVar8 = 0x40afd /* "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n" */;
    xVar9 = 0x44;
    iVar21 = got___sF + 0x130;
    goto code_r0x000c7700;
  case 0x16:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (uVar20 < 0x60) {
      pxVar13 = param_6 + uVar20 * 4;
      if (*(char *)(pxVar13 + 7) == '\0') {
        puVar11 = *(uint1 **)(param_6 + uVar20 * 4 + 8);
        puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
        *(char *)(pxVar13 + 7) = '\x01';
        apuStack_6a0[uVar20 * 2 + 1] = puVar11;
        apuStack_6a0[uVar20 * 2] = puVar22;
      }
      xVar6 = 7;
      goto code_r0x000c747c;
    }
    xVar8 = 0x37042 /* "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n" */;
    xVar9 = 0x45;
    iVar21 = got___sF + 0x130;
    goto code_r0x000c7700;
  default:
    uVar1 = uVar3 & 0xc0;
    uVar20 = (uint8)uVar3 & 0x3f;
    if (uVar1 == 0x40) {
      uVar18 = uVar18 + (uint4)((int4)param_3[5] * (int4)uVar20);
      puVar22 = puVar11;
    }
    else {
      if (uVar1 == 0xc0) {
        cVar4 = *(char *)(param_6 + uVar20 * 4 + 7);
        goto joined_r0x000c7530;
      }
      if (uVar1 != 0x80) {
        return 0;
      }
      iStack_6dc = param_5;
      iVar7 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
      iVar14 = *(int4 *)((int8)param_3 + 0x2c);
      if (*(char *)(param_6 + uVar20 * 4 + 7) == '\0') {
        puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
        apuStack_6a0[uVar20 * 2 + 1] = *(uint1 **)(param_6 + uVar20 * 4 + 8);
        apuStack_6a0[uVar20 * 2] = puVar22;
        *(char *)(param_6 + uVar20 * 4 + 7) = '\x01';
      }
      param_6[uVar20 * 4 + 6] = 2;
      *(int8 *)(param_6 + uVar20 * 4 + 8) = iVar7 * iVar14;
      param_5 = iStack_6dc;
      puVar22 = apuStack_6a0[0xc0];
    }
    break;
  case 0x2d:
    if (param_5 != 4) goto code_r0x000c7550;
    if (*(char *)(param_6 + 0x8f) == '\0') {
      puVar11 = (uint1 *)pxStack_6d0[1];
      puVar22 = (uint1 *)*pxStack_6d0;
      *(xunknown1 *)(param_6 + 0x8f) = 1;
      ppuStack_6d8[1] = puVar11;
      *ppuStack_6d8 = puVar22;
    }
    *(uint8 *)(param_6 + 0x90) = *(uint8 *)(param_6 + 0x90) ^ 1;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0x2e:
    xVar6 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    param_6[4] = xVar6;
    puVar22 = apuStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar20 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
    if (uVar20 < 0x60) {
      iVar7 = FUN_000c7ee0(apuStack_6a0 + 0xc0,puVar2);
      pxVar13 = param_6 + uVar20 * 4;
      iVar14 = *(int4 *)((int8)param_3 + 0x2c);
      if (*(char *)(pxVar13 + 7) == '\0') {
        puVar11 = *(uint1 **)(param_6 + uVar20 * 4 + 8);
        puVar22 = *(uint1 **)(param_6 + uVar20 * 4 + 6);
        *(char *)(pxVar13 + 7) = '\x01';
        apuStack_6a0[uVar20 * 2 + 1] = puVar11;
        apuStack_6a0[uVar20 * 2] = puVar22;
      }
      iVar7 = -(iVar7 * iVar14);
      goto code_r0x000c70a0;
    }
    xVar8 = 0x397e0 /* "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind,..." */;
    xVar9 = 0x53;
    iVar21 = got___sF + 0x130;
code_r0x000c7700:
    fwrite(xVar8,xVar9,1,iVar21);
code_r0x000c7708:
    fflush(got___sF + 0x130);
    return 0;
  }
joined_r0x000c7038:
  if ((puVar2 <= puVar22) || (uVar17 <= uVar18)) goto code_r0x000c6c4c;
  goto code_r0x000c6c7c;
code_r0x000c7550:
  puVar22 = apuStack_6a0[0xc0];
  goto joined_r0x000c7038;
}

/* 0xc7810  size=308 */
uint8 FUN_000c7810(xunknown8 param_1,uint4 *param_2,int8 param_3)

{
  uint8 *puVar1;
  uint8 *puVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  uint1 *puVar6;
  uint1 uVar7;
  uint1 uVar8;
  uint4 uVar9;
  int8 iVar10;
  uint8 uVar11;
  uint8 uVar12;
  uint1 *puVar13;
  uint8 *puVar14;
  uint4 uVar15;
  uint8 uVar16;
  uint1 *puVar17;
  uint8 *puVar18;
  xunknown1 axVar19 [16];
  uint8 auStack_380 [99];
  uint1 *puStack_68;
  
  iVar10 = got___sF;
  uVar9 = *param_2;
  if (0x1d < (int4)uVar9) {
    if ((int4)uVar9 < 0x20) {
      if (uVar9 == 0x1e) {
        return *(int8 *)(param_3 + 0xf0) + (int8)(int4)param_2[1];
      }
      if (uVar9 == 0x1f) goto code_r0x000c7850;
    }
    else {
      if (uVar9 == 0x22) {
        return *(int8 *)(param_3 + 0x108) + (int8)(int4)param_2[1];
      }
      if (uVar9 == 0x20) {
code_r0x000c7894:
        return *(int8 *)(param_3 + 0x100) + (int8)(int4)param_2[1];
      }
    }
code_r0x000c78e4:
    if (uVar9 < 0x1d) {
      return *(int8 *)(param_3 + (uint8)uVar9 * 8) + (int8)(int4)param_2[1];
    }
    fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
    fflush(iVar10 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*got_abort)();
    return uVar11;
  }
  if ((int4)uVar9 < 0) {
    if (uVar9 == 0xfffffffe) {
code_r0x000c7850:
      return *(int8 *)(param_3 + 0xf8) + (int8)(int4)param_2[1];
    }
    if (uVar9 == 0xffffffff) goto code_r0x000c7894;
    goto code_r0x000c78e4;
  }
  if (uVar9 != 0) {
    if (uVar9 == 0x1d) {
      return *(int8 *)(param_3 + 0xe8) + (int8)(int4)param_2[1];
    }
    goto code_r0x000c78e4;
  }
  puStack_68 = *(uint1 **)(param_2 + 2);
  iVar10 = FUN_000c7ee0(&puStack_68,puStack_68 + 0x14);
  auStack_380[0] = 0;
  puVar6 = puStack_68 + iVar10;
  if (puVar6 <= puStack_68) {
    return 0;
  }
  puVar1 = (uint8 *)(param_3 + 0xf0);
  puVar2 = (uint8 *)(param_3 + 0xe8);
  puVar3 = (uint8 *)(param_3 + 0x108);
  puVar4 = (uint8 *)(param_3 + 0xf8);
  puVar18 = auStack_380;
  puVar5 = (uint8 *)(param_3 + 0x100);
  puVar17 = puStack_68;
code_r0x000c8138:
  iVar10 = got___sF;
  puVar13 = puVar17 + 1;
  puStack_68 = puVar13;
  uVar8 = *puVar17;
  uVar9 = (uint4)uVar8;
  if (0x91 < uVar9 - 3) {
code_r0x000c8924:
    fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x35705 /* "DWARF opcode not implemented" */);
    fflush(iVar10 + 0x130);
    goto code_r0x000ca7b0;
  }
  uVar15 = (uint4)uVar8;
  puVar14 = puVar4;
  switch(uVar9) {
  case 3:
  case 0xe:
  case 0xf:
    uVar11 = *(uint8 *)(puVar17 + 1);
    puStack_68 = puVar17 + 9;
    goto code_r0x000c8590;
  case 4:
  case 5:
  case 7:
    goto code_r0x000c8924;
  case 6:
    puVar14 = (uint8 *)*puVar18;
code_r0x000c8520:
    *puVar18 = *puVar14;
    goto code_r0x000c812c;
  case 8:
    uVar11 = (uint8)puVar17[1];
    goto code_r0x000c84f4;
  case 9:
    uVar11 = (uint8)(char)puVar17[1];
code_r0x000c84f4:
    puStack_68 = puVar17 + 2;
    goto code_r0x000c8590;
  case 10:
    uVar11 = (uint8)*(uint2 *)(puVar17 + 1);
    puStack_68 = puVar17 + 3;
    goto code_r0x000c8590;
  case 0xb:
    uVar11 = (uint8)*(int2 *)(puVar17 + 1);
    puStack_68 = puVar17 + 3;
    goto code_r0x000c8590;
  case 0xc:
    uVar11 = (uint8)*(uint4 *)(puVar17 + 1);
    puStack_68 = puVar17 + 5;
    goto code_r0x000c8590;
  case 0xd:
    uVar11 = (uint8)*(int4 *)(puVar17 + 1);
    puStack_68 = puVar17 + 5;
    goto code_r0x000c8590;
  case 0x10:
    uVar11 = FUN_000c7ee0(&puStack_68,puVar6);
    puVar18 = puVar18 + 1;
    *puVar18 = uVar11;
    goto code_r0x000c812c;
  case 0x11:
    uVar11 = 0;
    uVar12 = 0;
    puVar17 = puVar13;
    do {
      if (puVar17 == puVar6) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
        fflush(iVar10 + 0x130);
        goto code_r0x000ca7b0;
      }
      uVar8 = *puVar17;
      puVar13 = puVar13 + 1;
      uVar16 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar12 = ((uint8)uVar8 & 0x7f) << uVar16 | uVar12;
      puVar17 = puVar17 + 1;
    } while ((char)uVar8 < '\0');
    puStack_68 = puVar13;
    uVar16 = -1L << (uVar11 & 0x3f);
    if (0x38 < (int4)uVar11 - 7U || uVar8 < 0x40) {
      uVar16 = 0;
    }
    puVar18 = puVar18 + 1;
    *puVar18 = uVar12 | uVar16;
    goto code_r0x000c812c;
  case 0x12:
    uVar11 = *puVar18;
    goto code_r0x000c8128;
  case 0x13:
    puVar18 = puVar18 + -1;
    goto code_r0x000c812c;
  case 0x14:
    uVar11 = puVar18[-1];
    goto code_r0x000c8128;
  case 0x15:
    puStack_68 = puVar17 + 2;
    uVar11 = puVar18[-(uint8)puVar17[1]];
code_r0x000c8590:
code_r0x000c8128:
    puVar18[1] = uVar11;
    puVar18 = puVar18 + 1;
    goto code_r0x000c812c;
  case 0x16:
    axVar19 = NEON_ext(*(xunknown1 (*) [16])(puVar18 + -1),*(xunknown1 (*) [16])(puVar18 + -1),8,1);
    *puVar18 = axVar19._8_8_;
    puVar18[-1] = axVar19._0_8_;
    goto code_r0x000c812c;
  case 0x17:
    uVar11 = *puVar18;
    *puVar18 = SUB168(*(xunknown1 (*) [16])(puVar18 + -2),8);
    puVar18[-1] = SUB168(*(xunknown1 (*) [16])(puVar18 + -2),0);
    puVar18[-2] = uVar11;
    goto code_r0x000c812c;
  case 0x18:
    puVar14 = (uint8 *)*puVar18;
    puVar18 = puVar18 + -1;
    *puVar18 = *puVar14;
    goto code_r0x000c812c;
  case 0x19:
    uVar11 = *puVar18;
    if ((int8)uVar11 < 0) goto code_r0x000c86c8;
    goto code_r0x000c812c;
  case 0x1a:
    uVar11 = puVar18[-1] & *puVar18;
    break;
  case 0x1b:
    uVar11 = 0;
    if (*puVar18 != 0) {
      uVar11 = (int8)puVar18[-1] / (int8)*puVar18;
    }
    break;
  case 0x1c:
    uVar11 = puVar18[-1] - *puVar18;
    break;
  case 0x1d:
    uVar11 = *puVar18;
    iVar10 = 0;
    if (uVar11 != 0) {
      iVar10 = (int8)puVar18[-1] / (int8)uVar11;
    }
    uVar11 = puVar18[-1] - iVar10 * uVar11;
    break;
  case 0x1e:
    uVar11 = puVar18[-1] * *puVar18;
    break;
  case 0x1f:
    uVar11 = *puVar18;
code_r0x000c86c8:
    *puVar18 = -uVar11;
    goto code_r0x000c812c;
  case 0x20:
    *puVar18 = ~*puVar18;
    goto code_r0x000c812c;
  case 0x21:
    uVar11 = puVar18[-1] | *puVar18;
    break;
  case 0x22:
    uVar11 = puVar18[-1] + *puVar18;
    break;
  case 0x23:
    iVar10 = FUN_000c7ee0(&puStack_68,puVar6);
    *puVar18 = *puVar18 + iVar10;
    goto code_r0x000c812c;
  case 0x24:
    uVar11 = puVar18[-1] << (*puVar18 & 0x3f);
    break;
  case 0x25:
    uVar11 = puVar18[-1] >> (*puVar18 & 0x3f);
    break;
  case 0x26:
    uVar11 = (int8)puVar18[-1] >> (*puVar18 & 0x3f);
    break;
  case 0x27:
    uVar11 = puVar18[-1] ^ *puVar18;
    break;
  case 0x28:
    puVar14 = puVar18 + -1;
    uVar11 = *puVar18;
    puStack_68 = puVar17 + 3;
    puVar18 = puVar14;
    if (uVar11 != 0) {
      puStack_68 = puVar17 + 3 + *(int2 *)(puVar17 + 1);
    }
    goto code_r0x000c812c;
  case 0x29:
    uVar11 = (uint8)(puVar18[-1] == *puVar18);
    break;
  case 0x2a:
    uVar11 = (uint8)(*puVar18 <= puVar18[-1]);
    break;
  case 0x2b:
    uVar11 = (uint8)(*puVar18 < puVar18[-1]);
    break;
  case 0x2c:
    uVar11 = (uint8)(puVar18[-1] <= *puVar18);
    break;
  case 0x2d:
    uVar11 = (uint8)(puVar18[-1] < *puVar18);
    break;
  case 0x2e:
    uVar11 = (uint8)(puVar18[-1] != *puVar18);
    break;
  case 0x2f:
    puStack_68 = puVar17 + (int8)*(int2 *)(puVar17 + 1) + 3;
    goto code_r0x000c812c;
  default:
    uVar11 = (uint8)(uVar15 - 0x30);
    goto code_r0x000c8128;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    if (((uVar15 != 0x6f) && (puVar14 = puVar1, uVar8 != 0x6e)) && (puVar14 = puVar2, uVar8 != 0x6d)
       ) {
      puVar14 = (uint8 *)(param_3 + (uint8)(uVar15 - 0x50) * 8);
    }
    goto code_r0x000c8124;
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
    uVar11 = 0;
    uVar12 = 0;
    puVar17 = puVar13;
    do {
      if (puVar17 == puVar6) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
        fflush(iVar10 + 0x130);
        goto code_r0x000ca7b0;
      }
      uVar7 = *puVar17;
      puVar13 = puVar13 + 1;
      uVar16 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar12 = ((uint8)uVar7 & 0x7f) << uVar16 | uVar12;
      puVar17 = puVar17 + 1;
    } while ((char)uVar7 < '\0');
    puStack_68 = puVar13;
    uVar16 = -1L << (uVar11 & 0x3f);
    if (0x38 < (int4)uVar11 - 7U || uVar7 < 0x40) {
      uVar16 = 0;
    }
    if (uVar8 < 0x8e) {
      if (((uVar8 != 0x6e) && (puVar14 = puVar5, uVar8 != 0x6f)) &&
         (puVar14 = puVar2, uVar8 != 0x8d)) goto code_r0x000c8264;
    }
    else if (uVar8 < 0x90) {
      puVar14 = puVar1;
      if ((uVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) goto code_r0x000c8264;
    }
    else {
      puVar14 = puVar5;
      if ((uVar8 != 0x90) && (puVar14 = puVar3, uVar8 != 0x92)) {
code_r0x000c8264:
        if (0x1c < uVar9 - 0x70) {
          fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
          fflush(iVar10 + 0x130);
          goto code_r0x000ca7b0;
        }
        puVar14 = (uint8 *)(param_3 + (uint8)(uVar9 - 0x70) * 8);
      }
    }
    uVar11 = *puVar14 + (uVar12 | uVar16);
    goto code_r0x000c8128;
  case 0x90:
    uVar9 = FUN_000c7ee0(&puStack_68,puVar6);
    iVar10 = got___sF;
    if ((int4)uVar9 < 0x1e) {
      if (((uVar9 != 0xfffffffe) && (puVar14 = puVar5, uVar9 != 0xffffffff)) &&
         (puVar14 = puVar2, uVar9 != 0x1d)) goto code_r0x000c87c8;
    }
    else if ((int4)uVar9 < 0x20) {
      puVar14 = puVar1;
      if ((uVar9 != 0x1e) && (puVar14 = puVar4, uVar9 != 0x1f)) goto code_r0x000c87c8;
    }
    else {
      puVar14 = puVar5;
      if ((uVar9 != 0x20) && (puVar14 = puVar3, uVar9 != 0x22)) {
code_r0x000c87c8:
        if (0x1c < uVar9) {
          fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
          fflush(iVar10 + 0x130);
          goto code_r0x000ca7b0;
        }
        puVar14 = (uint8 *)(param_3 + (uint8)uVar9 * 8);
      }
    }
code_r0x000c8124:
    uVar11 = *puVar14;
    goto code_r0x000c8128;
  case 0x91:
    fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x40b4e /* "DW_OP_fbreg not implemented" */);
    fflush(iVar10 + 0x130);
    goto code_r0x000ca7b0;
  case 0x92:
    uVar9 = FUN_000c7ee0(&puStack_68,puVar6);
    iVar10 = got___sF;
    uVar11 = 0;
    uVar12 = 0;
    puVar17 = puStack_68;
    puVar13 = puStack_68;
    do {
      if (puVar13 == puVar6) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
        fflush(iVar10 + 0x130);
        goto code_r0x000ca7b0;
      }
      uVar8 = *puVar13;
      puVar17 = puVar17 + 1;
      uVar16 = uVar11 & 0x3f;
      uVar11 = uVar11 + 7;
      uVar12 = ((uint8)uVar8 & 0x7f) << uVar16 | uVar12;
      puVar13 = puVar13 + 1;
    } while ((char)uVar8 < '\0');
    puStack_68 = puVar17;
    uVar16 = -1L << (uVar11 & 0x3f);
    if (0x38 < (int4)uVar11 - 7U || uVar8 < 0x40) {
      uVar16 = 0;
    }
    if ((int4)uVar9 < 0x1e) {
      if (((uVar9 != 0xfffffffe) && (puVar14 = puVar5, uVar9 != 0xffffffff)) &&
         (puVar14 = puVar2, uVar9 != 0x1d)) goto code_r0x000c87f0;
    }
    else if ((int4)uVar9 < 0x20) {
      puVar14 = puVar1;
      if ((uVar9 != 0x1e) && (puVar14 = puVar4, uVar9 != 0x1f)) goto code_r0x000c87f0;
    }
    else {
      puVar14 = puVar5;
      if ((uVar9 != 0x20) && (puVar14 = puVar3, uVar9 != 0x22)) {
code_r0x000c87f0:
        if (0x1c < uVar9) {
          fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
          fflush(iVar10 + 0x130);
          goto code_r0x000ca7b0;
        }
        puVar14 = (uint8 *)(param_3 + (uint8)uVar9 * 8);
      }
    }
    uVar11 = *puVar14 + (uVar12 | uVar16);
    goto code_r0x000c8128;
  case 0x93:
    fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x2b38d /* "DW_OP_piece not implemented" */);
    fflush(iVar10 + 0x130);
    goto code_r0x000ca7b0;
  case 0x94:
    puStack_68 = puVar17 + 2;
    puVar14 = (uint8 *)*puVar18;
    uVar8 = puVar17[1];
    if (3 < uVar8) {
      if (uVar8 == 4) {
        *puVar18 = (uint8)(uint4)*puVar14;
        goto code_r0x000c812c;
      }
      if (uVar8 == 8) goto code_r0x000c8520;
code_r0x000c89c8:
      fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x32d42 /* "DW_OP_deref_size with bad size" */);
      fflush(iVar10 + 0x130);
      goto code_r0x000ca7b0;
    }
    if (uVar8 == 1) {
      *puVar18 = (uint8)(uint1)*puVar14;
    }
    else {
      if (uVar8 != 2) goto code_r0x000c89c8;
      *puVar18 = (uint8)(uint2)*puVar14;
    }
    goto code_r0x000c812c;
  }
  puVar18[-1] = uVar11;
  puVar18 = puVar18 + -1;
code_r0x000c812c:
  puVar17 = puStack_68;
  if (puVar6 <= puStack_68) {
    return *puVar18;
  }
  goto code_r0x000c8138;
}

/* 0xc7944  size=528 */
uint8 FUN_000c7944(xunknown8 param_1,int8 param_2,uint8 param_3,int4 *param_4)

{
  uint8 *puVar1;
  uint8 *puVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint1 *puVar5;
  int4 iVar6;
  uint1 uVar7;
  uint1 uVar8;
  uint4 uVar9;
  uint8 *puVar10;
  int8 iVar11;
  uint8 uVar12;
  uint8 uVar13;
  uint1 *puVar14;
  uint8 *puVar15;
  uint4 uVar16;
  uint8 uVar17;
  uint1 *puVar18;
  uint8 *puVar19;
  xunknown1 axVar20 [16];
  uint8 auStack_380 [99];
  uint1 *apuStack_68 [3];
  
  iVar11 = got___sF;
  iVar6 = *param_4;
  if (iVar6 < 5) {
    if (iVar6 == 1) {
      return 0;
    }
    if ((iVar6 == 2) || (iVar6 == 3)) {
      return *(uint8 *)(*(int8 *)(param_4 + 2) + param_3);
    }
  }
  else {
    if (iVar6 == 5) {
      uVar9 = (uint4)*(uint8 *)(param_4 + 2);
      if ((int4)uVar9 < 0x1e) {
        if (uVar9 == 0xfffffffe) {
code_r0x000c7a80:
          return *(uint8 *)(param_2 + 0xf8);
        }
        if (uVar9 == 0xffffffff) goto code_r0x000c7a68;
        if (uVar9 == 0x1d) {
          return *(uint8 *)(param_2 + 0xe8);
        }
      }
      else if ((int4)uVar9 < 0x20) {
        if (uVar9 == 0x1e) {
          return *(uint8 *)(param_2 + 0xf0);
        }
        if (uVar9 == 0x1f) goto code_r0x000c7a80;
      }
      else {
        if (uVar9 == 0x22) {
          return *(uint8 *)(param_2 + 0x108);
        }
        if (uVar9 == 0x20) {
code_r0x000c7a68:
          return *(uint8 *)(param_2 + 0x100);
        }
      }
      if (uVar9 < 0x1d) {
        return *(uint8 *)(param_2 + (*(uint8 *)(param_4 + 2) & 0xffffffff) * 8);
      }
      fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
      fflush(iVar11 + 0x130);
      goto code_r0x000ca7b0;
    }
    if (iVar6 == 6) {
      puVar10 = (uint8 *)FUN_000c80a8(*(xunknown8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar10;
    }
    if (iVar6 == 7) {
      apuStack_68[0] = *(uint1 **)(param_4 + 2);
      iVar11 = FUN_000c7ee0(apuStack_68,apuStack_68[0] + 0x14);
      auStack_380[0] = param_3;
      puVar5 = apuStack_68[0] + iVar11;
      if (puVar5 <= apuStack_68[0]) {
        return param_3;
      }
      puVar10 = (uint8 *)(param_2 + 0xf0);
      puVar1 = (uint8 *)(param_2 + 0xe8);
      puVar2 = (uint8 *)(param_2 + 0x108);
      puVar3 = (uint8 *)(param_2 + 0xf8);
      puVar19 = auStack_380;
      puVar4 = (uint8 *)(param_2 + 0x100);
      puVar18 = apuStack_68[0];
code_r0x000c8138:
      iVar11 = got___sF;
      puVar14 = puVar18 + 1;
      apuStack_68[0] = puVar14;
      uVar8 = *puVar18;
      uVar9 = (uint4)uVar8;
      if (0x91 < uVar9 - 3) {
code_r0x000c8924:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x35705 /* "DWARF opcode not implemented" */);
        fflush(iVar11 + 0x130);
        goto code_r0x000ca7b0;
      }
      uVar16 = (uint4)uVar8;
      puVar15 = puVar3;
      switch(uVar9) {
      case 3:
      case 0xe:
      case 0xf:
        uVar12 = *(uint8 *)(puVar18 + 1);
        apuStack_68[0] = puVar18 + 9;
        goto code_r0x000c8590;
      case 4:
      case 5:
      case 7:
        goto code_r0x000c8924;
      case 6:
        puVar15 = (uint8 *)*puVar19;
code_r0x000c8520:
        *puVar19 = *puVar15;
        goto code_r0x000c812c;
      case 8:
        uVar12 = (uint8)puVar18[1];
        goto code_r0x000c84f4;
      case 9:
        uVar12 = (uint8)(char)puVar18[1];
code_r0x000c84f4:
        apuStack_68[0] = puVar18 + 2;
        goto code_r0x000c8590;
      case 10:
        uVar12 = (uint8)*(uint2 *)(puVar18 + 1);
        apuStack_68[0] = puVar18 + 3;
        goto code_r0x000c8590;
      case 0xb:
        uVar12 = (uint8)*(int2 *)(puVar18 + 1);
        apuStack_68[0] = puVar18 + 3;
        goto code_r0x000c8590;
      case 0xc:
        uVar12 = (uint8)*(uint4 *)(puVar18 + 1);
        apuStack_68[0] = puVar18 + 5;
        goto code_r0x000c8590;
      case 0xd:
        uVar12 = (uint8)*(int4 *)(puVar18 + 1);
        apuStack_68[0] = puVar18 + 5;
        goto code_r0x000c8590;
      case 0x10:
        uVar12 = FUN_000c7ee0(apuStack_68,puVar5);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar12;
        goto code_r0x000c812c;
      case 0x11:
        uVar12 = 0;
        uVar13 = 0;
        puVar18 = puVar14;
        do {
          if (puVar18 == puVar5) {
            fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
            fflush(iVar11 + 0x130);
            goto code_r0x000ca7b0;
          }
          uVar8 = *puVar18;
          puVar14 = puVar14 + 1;
          uVar17 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar13 = ((uint8)uVar8 & 0x7f) << uVar17 | uVar13;
          puVar18 = puVar18 + 1;
        } while ((char)uVar8 < '\0');
        apuStack_68[0] = puVar14;
        uVar17 = -1L << (uVar12 & 0x3f);
        if (0x38 < (int4)uVar12 - 7U || uVar8 < 0x40) {
          uVar17 = 0;
        }
        puVar19 = puVar19 + 1;
        *puVar19 = uVar13 | uVar17;
        goto code_r0x000c812c;
      case 0x12:
        uVar12 = *puVar19;
        goto code_r0x000c8128;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto code_r0x000c812c;
      case 0x14:
        uVar12 = puVar19[-1];
        goto code_r0x000c8128;
      case 0x15:
        apuStack_68[0] = puVar18 + 2;
        uVar12 = puVar19[-(uint8)puVar18[1]];
code_r0x000c8590:
code_r0x000c8128:
        puVar19[1] = uVar12;
        puVar19 = puVar19 + 1;
        goto code_r0x000c812c;
      case 0x16:
        axVar20 = NEON_ext(*(xunknown1 (*) [16])(puVar19 + -1),*(xunknown1 (*) [16])(puVar19 + -1),8
                           ,1);
        *puVar19 = axVar20._8_8_;
        puVar19[-1] = axVar20._0_8_;
        goto code_r0x000c812c;
      case 0x17:
        uVar12 = *puVar19;
        *puVar19 = SUB168(*(xunknown1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(xunknown1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar12;
        goto code_r0x000c812c;
      case 0x18:
        puVar15 = (uint8 *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar15;
        goto code_r0x000c812c;
      case 0x19:
        uVar12 = *puVar19;
        if ((int8)uVar12 < 0) goto code_r0x000c86c8;
        goto code_r0x000c812c;
      case 0x1a:
        uVar12 = puVar19[-1] & *puVar19;
        break;
      case 0x1b:
        uVar12 = 0;
        if (*puVar19 != 0) {
          uVar12 = (int8)puVar19[-1] / (int8)*puVar19;
        }
        break;
      case 0x1c:
        uVar12 = puVar19[-1] - *puVar19;
        break;
      case 0x1d:
        uVar12 = *puVar19;
        iVar11 = 0;
        if (uVar12 != 0) {
          iVar11 = (int8)puVar19[-1] / (int8)uVar12;
        }
        uVar12 = puVar19[-1] - iVar11 * uVar12;
        break;
      case 0x1e:
        uVar12 = puVar19[-1] * *puVar19;
        break;
      case 0x1f:
        uVar12 = *puVar19;
code_r0x000c86c8:
        *puVar19 = -uVar12;
        goto code_r0x000c812c;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto code_r0x000c812c;
      case 0x21:
        uVar12 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar12 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        iVar11 = FUN_000c7ee0(apuStack_68,puVar5);
        *puVar19 = *puVar19 + iVar11;
        goto code_r0x000c812c;
      case 0x24:
        uVar12 = puVar19[-1] << (*puVar19 & 0x3f);
        break;
      case 0x25:
        uVar12 = puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x26:
        uVar12 = (int8)puVar19[-1] >> (*puVar19 & 0x3f);
        break;
      case 0x27:
        uVar12 = puVar19[-1] ^ *puVar19;
        break;
      case 0x28:
        puVar15 = puVar19 + -1;
        uVar12 = *puVar19;
        apuStack_68[0] = puVar18 + 3;
        puVar19 = puVar15;
        if (uVar12 != 0) {
          apuStack_68[0] = puVar18 + 3 + *(int2 *)(puVar18 + 1);
        }
        goto code_r0x000c812c;
      case 0x29:
        uVar12 = (uint8)(puVar19[-1] == *puVar19);
        break;
      case 0x2a:
        uVar12 = (uint8)(*puVar19 <= puVar19[-1]);
        break;
      case 0x2b:
        uVar12 = (uint8)(*puVar19 < puVar19[-1]);
        break;
      case 0x2c:
        uVar12 = (uint8)(puVar19[-1] <= *puVar19);
        break;
      case 0x2d:
        uVar12 = (uint8)(puVar19[-1] < *puVar19);
        break;
      case 0x2e:
        uVar12 = (uint8)(puVar19[-1] != *puVar19);
        break;
      case 0x2f:
        apuStack_68[0] = puVar18 + (int8)*(int2 *)(puVar18 + 1) + 3;
        goto code_r0x000c812c;
      default:
        uVar12 = (uint8)(uVar16 - 0x30);
        goto code_r0x000c8128;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar16 != 0x6f) && (puVar15 = puVar10, uVar8 != 0x6e)) &&
           (puVar15 = puVar1, uVar8 != 0x6d)) {
          puVar15 = (uint8 *)(param_2 + (uint8)(uVar16 - 0x50) * 8);
        }
        goto code_r0x000c8124;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar12 = 0;
        uVar13 = 0;
        puVar18 = puVar14;
        do {
          if (puVar18 == puVar5) {
            fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
            fflush(iVar11 + 0x130);
            goto code_r0x000ca7b0;
          }
          uVar7 = *puVar18;
          puVar14 = puVar14 + 1;
          uVar17 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar13 = ((uint8)uVar7 & 0x7f) << uVar17 | uVar13;
          puVar18 = puVar18 + 1;
        } while ((char)uVar7 < '\0');
        apuStack_68[0] = puVar14;
        uVar17 = -1L << (uVar12 & 0x3f);
        if (0x38 < (int4)uVar12 - 7U || uVar7 < 0x40) {
          uVar17 = 0;
        }
        if (uVar8 < 0x8e) {
          if (((uVar8 != 0x6e) && (puVar15 = puVar4, uVar8 != 0x6f)) &&
             (puVar15 = puVar1, uVar8 != 0x8d)) goto code_r0x000c8264;
        }
        else if (uVar8 < 0x90) {
          puVar15 = puVar10;
          if ((uVar8 != 0x8e) && (puVar15 = puVar3, uVar16 != 0x8f)) goto code_r0x000c8264;
        }
        else {
          puVar15 = puVar4;
          if ((uVar8 != 0x90) && (puVar15 = puVar2, uVar8 != 0x92)) {
code_r0x000c8264:
            if (0x1c < uVar9 - 0x70) {
              fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
              fflush(iVar11 + 0x130);
              goto code_r0x000ca7b0;
            }
            puVar15 = (uint8 *)(param_2 + (uint8)(uVar9 - 0x70) * 8);
          }
        }
        uVar12 = *puVar15 + (uVar13 | uVar17);
        goto code_r0x000c8128;
      case 0x90:
        uVar9 = FUN_000c7ee0(apuStack_68,puVar5);
        iVar11 = got___sF;
        if ((int4)uVar9 < 0x1e) {
          if (((uVar9 != 0xfffffffe) && (puVar15 = puVar4, uVar9 != 0xffffffff)) &&
             (puVar15 = puVar1, uVar9 != 0x1d)) goto code_r0x000c87c8;
        }
        else if ((int4)uVar9 < 0x20) {
          puVar15 = puVar10;
          if ((uVar9 != 0x1e) && (puVar15 = puVar3, uVar9 != 0x1f)) goto code_r0x000c87c8;
        }
        else {
          puVar15 = puVar4;
          if ((uVar9 != 0x20) && (puVar15 = puVar2, uVar9 != 0x22)) {
code_r0x000c87c8:
            if (0x1c < uVar9) {
              fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
              fflush(iVar11 + 0x130);
              goto code_r0x000ca7b0;
            }
            puVar15 = (uint8 *)(param_2 + (uint8)uVar9 * 8);
          }
        }
code_r0x000c8124:
        uVar12 = *puVar15;
        goto code_r0x000c8128;
      case 0x91:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x40b4e /* "DW_OP_fbreg not implemented" */);
        fflush(iVar11 + 0x130);
        goto code_r0x000ca7b0;
      case 0x92:
        uVar9 = FUN_000c7ee0(apuStack_68,puVar5);
        iVar11 = got___sF;
        uVar12 = 0;
        uVar13 = 0;
        puVar18 = apuStack_68[0];
        puVar14 = apuStack_68[0];
        do {
          if (puVar14 == puVar5) {
            fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
            fflush(iVar11 + 0x130);
            goto code_r0x000ca7b0;
          }
          uVar8 = *puVar14;
          puVar18 = puVar18 + 1;
          uVar17 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar13 = ((uint8)uVar8 & 0x7f) << uVar17 | uVar13;
          puVar14 = puVar14 + 1;
        } while ((char)uVar8 < '\0');
        apuStack_68[0] = puVar18;
        uVar17 = -1L << (uVar12 & 0x3f);
        if (0x38 < (int4)uVar12 - 7U || uVar8 < 0x40) {
          uVar17 = 0;
        }
        if ((int4)uVar9 < 0x1e) {
          if (((uVar9 != 0xfffffffe) && (puVar15 = puVar4, uVar9 != 0xffffffff)) &&
             (puVar15 = puVar1, uVar9 != 0x1d)) goto code_r0x000c87f0;
        }
        else if ((int4)uVar9 < 0x20) {
          puVar15 = puVar10;
          if ((uVar9 != 0x1e) && (puVar15 = puVar3, uVar9 != 0x1f)) goto code_r0x000c87f0;
        }
        else {
          puVar15 = puVar4;
          if ((uVar9 != 0x20) && (puVar15 = puVar2, uVar9 != 0x22)) {
code_r0x000c87f0:
            if (0x1c < uVar9) {
              fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
              fflush(iVar11 + 0x130);
              goto code_r0x000ca7b0;
            }
            puVar15 = (uint8 *)(param_2 + (uint8)uVar9 * 8);
          }
        }
        uVar12 = *puVar15 + (uVar13 | uVar17);
        goto code_r0x000c8128;
      case 0x93:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x2b38d /* "DW_OP_piece not implemented" */);
        fflush(iVar11 + 0x130);
        goto code_r0x000ca7b0;
      case 0x94:
        apuStack_68[0] = puVar18 + 2;
        puVar15 = (uint8 *)*puVar19;
        uVar8 = puVar18[1];
        if (3 < uVar8) {
          if (uVar8 == 4) {
            *puVar19 = (uint8)(uint4)*puVar15;
            goto code_r0x000c812c;
          }
          if (uVar8 == 8) goto code_r0x000c8520;
code_r0x000c89c8:
          fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x32d42 /* "DW_OP_deref_size with bad size" */);
          fflush(iVar11 + 0x130);
          goto code_r0x000ca7b0;
        }
        if (uVar8 == 1) {
          *puVar19 = (uint8)(uint1)*puVar15;
        }
        else {
          if (uVar8 != 2) goto code_r0x000c89c8;
          *puVar19 = (uint8)(uint2)*puVar15;
        }
        goto code_r0x000c812c;
      }
      puVar19[-1] = uVar12;
      puVar19 = puVar19 + -1;
code_r0x000c812c:
      puVar18 = apuStack_68[0];
      if (puVar5 <= apuStack_68[0]) {
        return *puVar19;
      }
      goto code_r0x000c8138;
    }
  }
  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2d412 /* "getSavedRegister" */,0x2acb6 /* "unsupported restore location for register" */);
  fflush(iVar11 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar12 = (*got_abort)();
  return uVar12;
}

/* 0xc7b54  size=908 */
xunknown8 * FUN_000c7b54(xunknown8 param_1,int8 *param_2,uint8 *param_3,uint4 param_4,int8 param_5)

{
  uint1 uVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  uint4 uVar4;
  uint8 uVar5;
  uint8 *puVar6;
  uint8 uVar7;
  uint8 uVar8;
  uint8 *puVar9;
  uint8 *puVar10;
  
  iVar2 = got___sF;
  uVar4 = param_4 & 0xf;
  puVar10 = (uint8 *)*param_2;
  if (uVar4 < 4) {
    if (uVar4 < 2) {
      if ((param_4 & 0xf) == 0) goto code_r0x000c7ca0;
      if (uVar4 != 1) goto code_r0x000c7eac;
      pxVar3 = (xunknown8 *)FUN_000c7ee0(param_2,param_3);
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          pxVar3 = (xunknown8 *)(uint8)(uint4)*puVar10;
          *param_2 = (int8)((int8)puVar10 + 4);
          goto joined_r0x000c7c08;
        }
code_r0x000c7eac:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x40b42 /* "getEncodedP" */,0x32d1e /* "unknown pointer encoding" */);
        fflush(iVar2 + 0x130);
        goto code_r0x000ca7b0;
      }
      pxVar3 = (xunknown8 *)(uint8)(uint2)*puVar10;
      *param_2 = (int8)puVar10 + 2;
    }
joined_r0x000c7bd8:
    uVar4 = (param_4 & 0xff) >> 4 & 7;
    if (uVar4 < 2) goto code_r0x000c7d1c;
code_r0x000c7c88:
    iVar2 = got___sF;
    if (uVar4 < 4) {
      if (uVar4 == 3) {
        if (param_5 == 0) {
          fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x40b42 /* "getEncodedP" */,0x38faa /* "DW_EH_PE_datarel is invalid with a datarelBase of 0" */);
          fflush(iVar2 + 0x130);
          goto code_r0x000ca7b0;
        }
        pxVar3 = (xunknown8 *)((int8)pxVar3 + param_5);
        goto code_r0x000c7d2c;
      }
      if (uVar4 == 2) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x40b42 /* "getEncodedP" */,0x356d5 /* "DW_EH_PE_textrel pointer encoding not supported" */);
        fflush(iVar2 + 0x130);
        goto code_r0x000ca7b0;
      }
    }
    else {
      if (uVar4 == 4) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x40b42 /* "getEncodedP" */,0x23e9e /* "DW_EH_PE_funcrel pointer encoding not supported" */);
        fflush(iVar2 + 0x130);
        goto code_r0x000ca7b0;
      }
      if (uVar4 == 5) {
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x40b42 /* "getEncodedP" */,0x2d3e2 /* "DW_EH_PE_aligned pointer encoding not supported" */);
        fflush(iVar2 + 0x130);
        goto code_r0x000ca7b0;
      }
    }
  }
  else {
    if (uVar4 < 10) {
      if (uVar4 == 4) {
code_r0x000c7ca0:
        pxVar3 = (xunknown8 *)*puVar10;
        *param_2 = (int8)(puVar10 + 1);
      }
      else {
        if (uVar4 != 9) goto code_r0x000c7eac;
        uVar7 = 0;
        uVar5 = 0;
        puVar6 = puVar10;
        puVar9 = puVar10;
        do {
          if (puVar9 == param_3) {
            fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
            fflush(iVar2 + 0x130);
            goto code_r0x000ca7b0;
          }
          uVar1 = (uint1)*puVar9;
          puVar6 = (uint8 *)((int8)puVar6 + 1);
          uVar8 = uVar7 & 0x3f;
          uVar7 = uVar7 + 7;
          uVar5 = ((uint8)uVar1 & 0x7f) << uVar8 | uVar5;
          puVar9 = (uint8 *)((int8)puVar9 + 1);
        } while ((char)uVar1 < '\0');
        *param_2 = (int8)puVar6;
        uVar8 = -1L << (uVar7 & 0x3f);
        if (0x38 < (int4)uVar7 - 7U || uVar1 < 0x40) {
          uVar8 = 0;
        }
        pxVar3 = (xunknown8 *)(uVar5 | uVar8);
      }
      goto joined_r0x000c7bd8;
    }
    if (uVar4 != 10) {
      if (uVar4 != 0xb) {
        if (uVar4 != 0xc) goto code_r0x000c7eac;
        goto code_r0x000c7ca0;
      }
      pxVar3 = (xunknown8 *)(int8)(int4)(uint4)*puVar10;
      *param_2 = (int8)((int8)puVar10 + 4);
      goto joined_r0x000c7bd8;
    }
    pxVar3 = (xunknown8 *)(int8)(int2)*puVar10;
    *param_2 = (int8)puVar10 + 2;
joined_r0x000c7c08:
    uVar4 = (param_4 & 0xff) >> 4 & 7;
    if (1 < uVar4) goto code_r0x000c7c88;
code_r0x000c7d1c:
    if (uVar4 == 0) {
code_r0x000c7d2c:
      if ((param_4 >> 7 & 1) == 0) {
        return pxVar3;
      }
      return (xunknown8 *)*pxVar3;
    }
    if (uVar4 == 1) {
      pxVar3 = (xunknown8 *)((int8)pxVar3 + (int8)puVar10);
      goto code_r0x000c7d2c;
    }
  }
  iVar2 = got___sF;
  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x40b42 /* "getEncodedP" */,0x32d1e /* "unknown pointer encoding" */);
  fflush(iVar2 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pxVar3 = (xunknown8 *)(*got_abort)();
  return pxVar3;
}

/* 0xc7ee0  size=456 */
uint8 FUN_000c7ee0(int8 *param_1,uint1 *param_2)

{
  uint1 uVar1;
  int8 iVar2;
  uint8 uVar3;
  uint1 *puVar4;
  uint1 *puVar5;
  
  iVar2 = got___sF;
  puVar4 = (uint1 *)*param_1;
  if (puVar4 != param_2) {
    puVar5 = puVar4 + 1;
    uVar3 = (uint8)*puVar4 & 0x7f;
    if (-1 < (char)*puVar4) {
code_r0x000c7f10:
      *param_1 = (int8)puVar5;
      return uVar3;
    }
    if (puVar5 != param_2) {
      uVar3 = uVar3 | (uint8)((int4)(char)puVar4[1] & 0x7f) << 7;
      puVar5 = puVar4 + 2;
      if (-1 < (char)puVar4[1]) goto code_r0x000c7f10;
      if (puVar5 != param_2) {
        uVar3 = uVar3 | (uint8)((int4)(char)puVar4[2] & 0x7f) << 0xe;
        puVar5 = puVar4 + 3;
        if (-1 < (char)puVar4[2]) goto code_r0x000c7f10;
        if (puVar5 != param_2) {
          uVar3 = uVar3 | (uint8)((int4)(char)puVar4[3] & 0x7f) << 0x15;
          puVar5 = puVar4 + 4;
          if (-1 < (char)puVar4[3]) goto code_r0x000c7f10;
          if (puVar5 != param_2) {
            uVar3 = uVar3 | (uint8)((int4)(char)puVar4[4] & 0x7f) << 0x1c;
            puVar5 = puVar4 + 5;
            if (-1 < (char)puVar4[4]) goto code_r0x000c7f10;
            if (puVar5 != param_2) {
              uVar3 = uVar3 | (uint8)((int4)(char)puVar4[5] & 0x7f) << 0x23;
              puVar5 = puVar4 + 6;
              if (-1 < (char)puVar4[5]) goto code_r0x000c7f10;
              if (puVar5 != param_2) {
                uVar3 = uVar3 | (uint8)((int4)(char)puVar4[6] & 0x7f) << 0x2a;
                puVar5 = puVar4 + 7;
                if (-1 < (char)puVar4[6]) goto code_r0x000c7f10;
                if (puVar5 != param_2) {
                  uVar3 = uVar3 | (uint8)((int4)(char)puVar4[7] & 0x7f) << 0x31;
                  puVar5 = puVar4 + 8;
                  if (-1 < (char)puVar4[7]) goto code_r0x000c7f10;
                  if (puVar5 != param_2) {
                    uVar3 = uVar3 | (uint8)((int4)(char)puVar4[8] & 0x7f) << 0x38;
                    puVar5 = puVar4 + 9;
                    if (-1 < (char)puVar4[8]) goto code_r0x000c7f10;
                    if (puVar5 != param_2) {
                      uVar1 = *puVar5;
                      if ((uVar1 & 0x7e) == 0) {
                        if (-1 < (char)uVar1) {
                          *param_1 = (int8)(puVar4 + 10);
                          return uVar3 | (uint8)uVar1 << 0x3f;
                        }
                        if (puVar4 + 10 == param_2) goto code_r0x000c8040;
                      }
                      fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x29882 /* "getULEB128" */,0x2bf7a /* "malformed uleb128 expression" */);
                      fflush(iVar2 + 0x130);
                      goto code_r0x000ca7b0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000c8040:
  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x29882 /* "getULEB128" */,0x2a52f /* "truncated uleb128 expression" */);
  fflush(iVar2 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*got_abort)();
  return uVar3;
}

/* 0xc80a8  size=2492 */
uint8 FUN_000c80a8(uint1 *param_1,xunknown8 param_2,int8 param_3,uint8 param_4)

{
  uint8 *puVar1;
  uint8 *puVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 *puVar5;
  uint1 *puVar6;
  uint1 uVar7;
  uint1 uVar8;
  uint4 uVar9;
  int8 iVar10;
  uint8 uVar11;
  uint8 uVar12;
  uint1 *puVar13;
  uint8 *puVar14;
  uint4 uVar15;
  uint8 uVar16;
  uint1 *puVar17;
  uint8 *puVar18;
  xunknown1 axVar19 [16];
  uint8 auStack_380 [99];
  uint1 *puStack_68;
  
  puStack_68 = param_1;
  iVar10 = FUN_000c7ee0(&puStack_68,param_1 + 0x14);
  auStack_380[0] = param_4;
  puVar6 = puStack_68 + iVar10;
  if (puStack_68 < puVar6) {
    puVar1 = (uint8 *)(param_3 + 0xf0);
    puVar2 = (uint8 *)(param_3 + 0xe8);
    puVar3 = (uint8 *)(param_3 + 0x108);
    puVar4 = (uint8 *)(param_3 + 0xf8);
    puVar18 = auStack_380;
    puVar5 = (uint8 *)(param_3 + 0x100);
    puVar17 = puStack_68;
    do {
      iVar10 = got___sF;
      puVar13 = puVar17 + 1;
      puStack_68 = puVar13;
      uVar8 = *puVar17;
      uVar9 = (uint4)uVar8;
      if (0x91 < uVar9 - 3) {
code_r0x000c8924:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x35705 /* "DWARF opcode not implemented" */);
        fflush(iVar10 + 0x130);
        goto code_r0x000ca7b0;
      }
      uVar15 = (uint4)uVar8;
      puVar14 = puVar4;
      switch(uVar9) {
      case 3:
      case 0xe:
      case 0xf:
        uVar11 = *(uint8 *)(puVar17 + 1);
        puStack_68 = puVar17 + 9;
        goto code_r0x000c8590;
      case 4:
      case 5:
      case 7:
        goto code_r0x000c8924;
      case 6:
        puVar14 = (uint8 *)*puVar18;
code_r0x000c8520:
        *puVar18 = *puVar14;
        goto code_r0x000c812c;
      case 8:
        uVar11 = (uint8)puVar17[1];
        goto code_r0x000c84f4;
      case 9:
        uVar11 = (uint8)(char)puVar17[1];
code_r0x000c84f4:
        puStack_68 = puVar17 + 2;
        goto code_r0x000c8590;
      case 10:
        uVar11 = (uint8)*(uint2 *)(puVar17 + 1);
        puStack_68 = puVar17 + 3;
        goto code_r0x000c8590;
      case 0xb:
        uVar11 = (uint8)*(int2 *)(puVar17 + 1);
        puStack_68 = puVar17 + 3;
        goto code_r0x000c8590;
      case 0xc:
        uVar11 = (uint8)*(uint4 *)(puVar17 + 1);
        puStack_68 = puVar17 + 5;
        goto code_r0x000c8590;
      case 0xd:
        uVar11 = (uint8)*(int4 *)(puVar17 + 1);
        puStack_68 = puVar17 + 5;
        goto code_r0x000c8590;
      case 0x10:
        uVar11 = FUN_000c7ee0(&puStack_68,puVar6);
        puVar18 = puVar18 + 1;
        *puVar18 = uVar11;
        goto code_r0x000c812c;
      case 0x11:
        uVar11 = 0;
        uVar12 = 0;
        puVar17 = puVar13;
        do {
          if (puVar17 == puVar6) {
            fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
            fflush(iVar10 + 0x130);
            goto code_r0x000ca7b0;
          }
          uVar8 = *puVar17;
          puVar13 = puVar13 + 1;
          uVar16 = uVar11 & 0x3f;
          uVar11 = uVar11 + 7;
          uVar12 = ((uint8)uVar8 & 0x7f) << uVar16 | uVar12;
          puVar17 = puVar17 + 1;
        } while ((char)uVar8 < '\0');
        puStack_68 = puVar13;
        uVar16 = -1L << (uVar11 & 0x3f);
        if (0x38 < (int4)uVar11 - 7U || uVar8 < 0x40) {
          uVar16 = 0;
        }
        puVar18 = puVar18 + 1;
        *puVar18 = uVar12 | uVar16;
        goto code_r0x000c812c;
      case 0x12:
        uVar11 = *puVar18;
        goto code_r0x000c8128;
      case 0x13:
        puVar18 = puVar18 + -1;
        goto code_r0x000c812c;
      case 0x14:
        uVar11 = puVar18[-1];
        goto code_r0x000c8128;
      case 0x15:
        puStack_68 = puVar17 + 2;
        uVar11 = puVar18[-(uint8)puVar17[1]];
code_r0x000c8590:
code_r0x000c8128:
        puVar18[1] = uVar11;
        puVar18 = puVar18 + 1;
        goto code_r0x000c812c;
      case 0x16:
        axVar19 = NEON_ext(*(xunknown1 (*) [16])(puVar18 + -1),*(xunknown1 (*) [16])(puVar18 + -1),8
                           ,1);
        *puVar18 = axVar19._8_8_;
        puVar18[-1] = axVar19._0_8_;
        goto code_r0x000c812c;
      case 0x17:
        uVar11 = *puVar18;
        *puVar18 = SUB168(*(xunknown1 (*) [16])(puVar18 + -2),8);
        puVar18[-1] = SUB168(*(xunknown1 (*) [16])(puVar18 + -2),0);
        puVar18[-2] = uVar11;
        goto code_r0x000c812c;
      case 0x18:
        puVar14 = (uint8 *)*puVar18;
        puVar18 = puVar18 + -1;
        *puVar18 = *puVar14;
        goto code_r0x000c812c;
      case 0x19:
        uVar11 = *puVar18;
        if ((int8)uVar11 < 0) goto code_r0x000c86c8;
        goto code_r0x000c812c;
      case 0x1a:
        uVar11 = puVar18[-1] & *puVar18;
        break;
      case 0x1b:
        uVar11 = 0;
        if (*puVar18 != 0) {
          uVar11 = (int8)puVar18[-1] / (int8)*puVar18;
        }
        break;
      case 0x1c:
        uVar11 = puVar18[-1] - *puVar18;
        break;
      case 0x1d:
        uVar11 = *puVar18;
        iVar10 = 0;
        if (uVar11 != 0) {
          iVar10 = (int8)puVar18[-1] / (int8)uVar11;
        }
        uVar11 = puVar18[-1] - iVar10 * uVar11;
        break;
      case 0x1e:
        uVar11 = puVar18[-1] * *puVar18;
        break;
      case 0x1f:
        uVar11 = *puVar18;
code_r0x000c86c8:
        *puVar18 = -uVar11;
        goto code_r0x000c812c;
      case 0x20:
        *puVar18 = ~*puVar18;
        goto code_r0x000c812c;
      case 0x21:
        uVar11 = puVar18[-1] | *puVar18;
        break;
      case 0x22:
        uVar11 = puVar18[-1] + *puVar18;
        break;
      case 0x23:
        iVar10 = FUN_000c7ee0(&puStack_68,puVar6);
        *puVar18 = *puVar18 + iVar10;
        goto code_r0x000c812c;
      case 0x24:
        uVar11 = puVar18[-1] << (*puVar18 & 0x3f);
        break;
      case 0x25:
        uVar11 = puVar18[-1] >> (*puVar18 & 0x3f);
        break;
      case 0x26:
        uVar11 = (int8)puVar18[-1] >> (*puVar18 & 0x3f);
        break;
      case 0x27:
        uVar11 = puVar18[-1] ^ *puVar18;
        break;
      case 0x28:
        puVar14 = puVar18 + -1;
        uVar11 = *puVar18;
        puStack_68 = puVar17 + 3;
        puVar18 = puVar14;
        if (uVar11 != 0) {
          puStack_68 = puVar17 + 3 + *(int2 *)(puVar17 + 1);
        }
        goto code_r0x000c812c;
      case 0x29:
        uVar11 = (uint8)(puVar18[-1] == *puVar18);
        break;
      case 0x2a:
        uVar11 = (uint8)(*puVar18 <= puVar18[-1]);
        break;
      case 0x2b:
        uVar11 = (uint8)(*puVar18 < puVar18[-1]);
        break;
      case 0x2c:
        uVar11 = (uint8)(puVar18[-1] <= *puVar18);
        break;
      case 0x2d:
        uVar11 = (uint8)(puVar18[-1] < *puVar18);
        break;
      case 0x2e:
        uVar11 = (uint8)(puVar18[-1] != *puVar18);
        break;
      case 0x2f:
        puStack_68 = puVar17 + (int8)*(int2 *)(puVar17 + 1) + 3;
        goto code_r0x000c812c;
      default:
        uVar11 = (uint8)(uVar15 - 0x30);
        goto code_r0x000c8128;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar15 != 0x6f) && (puVar14 = puVar1, uVar8 != 0x6e)) &&
           (puVar14 = puVar2, uVar8 != 0x6d)) {
          puVar14 = (uint8 *)(param_3 + (uint8)(uVar15 - 0x50) * 8);
        }
        goto code_r0x000c8124;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar11 = 0;
        uVar12 = 0;
        puVar17 = puVar13;
        do {
          if (puVar17 == puVar6) {
            fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
            fflush(iVar10 + 0x130);
            goto code_r0x000ca7b0;
          }
          uVar7 = *puVar17;
          puVar13 = puVar13 + 1;
          uVar16 = uVar11 & 0x3f;
          uVar11 = uVar11 + 7;
          uVar12 = ((uint8)uVar7 & 0x7f) << uVar16 | uVar12;
          puVar17 = puVar17 + 1;
        } while ((char)uVar7 < '\0');
        puStack_68 = puVar13;
        uVar16 = -1L << (uVar11 & 0x3f);
        if (0x38 < (int4)uVar11 - 7U || uVar7 < 0x40) {
          uVar16 = 0;
        }
        if (uVar8 < 0x8e) {
          if (((uVar8 != 0x6e) && (puVar14 = puVar5, uVar8 != 0x6f)) &&
             (puVar14 = puVar2, uVar8 != 0x8d)) goto code_r0x000c8264;
        }
        else if (uVar8 < 0x90) {
          puVar14 = puVar1;
          if ((uVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) goto code_r0x000c8264;
        }
        else {
          puVar14 = puVar5;
          if ((uVar8 != 0x90) && (puVar14 = puVar3, uVar8 != 0x92)) {
code_r0x000c8264:
            if (0x1c < uVar9 - 0x70) {
              fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
              fflush(iVar10 + 0x130);
              goto code_r0x000ca7b0;
            }
            puVar14 = (uint8 *)(param_3 + (uint8)(uVar9 - 0x70) * 8);
          }
        }
        uVar11 = *puVar14 + (uVar12 | uVar16);
        goto code_r0x000c8128;
      case 0x90:
        uVar9 = FUN_000c7ee0(&puStack_68,puVar6);
        iVar10 = got___sF;
        if ((int4)uVar9 < 0x1e) {
          if (((uVar9 != 0xfffffffe) && (puVar14 = puVar5, uVar9 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar9 != 0x1d)) goto code_r0x000c87c8;
        }
        else if ((int4)uVar9 < 0x20) {
          puVar14 = puVar1;
          if ((uVar9 != 0x1e) && (puVar14 = puVar4, uVar9 != 0x1f)) goto code_r0x000c87c8;
        }
        else {
          puVar14 = puVar5;
          if ((uVar9 != 0x20) && (puVar14 = puVar3, uVar9 != 0x22)) {
code_r0x000c87c8:
            if (0x1c < uVar9) {
              fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
              fflush(iVar10 + 0x130);
              goto code_r0x000ca7b0;
            }
            puVar14 = (uint8 *)(param_3 + (uint8)uVar9 * 8);
          }
        }
code_r0x000c8124:
        uVar11 = *puVar14;
        goto code_r0x000c8128;
      case 0x91:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x40b4e /* "DW_OP_fbreg not implemented" */);
        fflush(iVar10 + 0x130);
        goto code_r0x000ca7b0;
      case 0x92:
        uVar9 = FUN_000c7ee0(&puStack_68,puVar6);
        iVar10 = got___sF;
        uVar11 = 0;
        uVar12 = 0;
        puVar17 = puStack_68;
        puVar13 = puStack_68;
        do {
          if (puVar13 == puVar6) {
            fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x32d37 /* "getSLEB128" */,0x2b370 /* "truncated sleb128 expression" */);
            fflush(iVar10 + 0x130);
            goto code_r0x000ca7b0;
          }
          uVar8 = *puVar13;
          puVar17 = puVar17 + 1;
          uVar16 = uVar11 & 0x3f;
          uVar11 = uVar11 + 7;
          uVar12 = ((uint8)uVar8 & 0x7f) << uVar16 | uVar12;
          puVar13 = puVar13 + 1;
        } while ((char)uVar8 < '\0');
        puStack_68 = puVar17;
        uVar16 = -1L << (uVar11 & 0x3f);
        if (0x38 < (int4)uVar11 - 7U || uVar8 < 0x40) {
          uVar16 = 0;
        }
        if ((int4)uVar9 < 0x1e) {
          if (((uVar9 != 0xfffffffe) && (puVar14 = puVar5, uVar9 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar9 != 0x1d)) goto code_r0x000c87f0;
        }
        else if ((int4)uVar9 < 0x20) {
          puVar14 = puVar1;
          if ((uVar9 != 0x1e) && (puVar14 = puVar4, uVar9 != 0x1f)) goto code_r0x000c87f0;
        }
        else {
          puVar14 = puVar5;
          if ((uVar9 != 0x20) && (puVar14 = puVar3, uVar9 != 0x22)) {
code_r0x000c87f0:
            if (0x1c < uVar9) {
              fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2da7a /* "getRegister" */,0x2ac9b /* "unsupported arm64 register" */);
              fflush(iVar10 + 0x130);
              goto code_r0x000ca7b0;
            }
            puVar14 = (uint8 *)(param_3 + (uint8)uVar9 * 8);
          }
        }
        uVar11 = *puVar14 + (uVar12 | uVar16);
        goto code_r0x000c8128;
      case 0x93:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x2b38d /* "DW_OP_piece not implemented" */);
        fflush(iVar10 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*got_abort)();
        return uVar11;
      case 0x94:
        puStack_68 = puVar17 + 2;
        puVar14 = (uint8 *)*puVar18;
        uVar8 = puVar17[1];
        if (uVar8 < 4) {
          if (uVar8 == 1) {
            *puVar18 = (uint8)(uint1)*puVar14;
          }
          else {
            if (uVar8 != 2) goto code_r0x000c89c8;
            *puVar18 = (uint8)(uint2)*puVar14;
          }
        }
        else {
          if (uVar8 != 4) {
            if (uVar8 != 8) {
code_r0x000c89c8:
              fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ba9a /* "evaluateExpression" */,0x32d42 /* "DW_OP_deref_size with bad size" */);
              fflush(iVar10 + 0x130);
              goto code_r0x000ca7b0;
            }
            goto code_r0x000c8520;
          }
          *puVar18 = (uint8)(uint4)*puVar14;
        }
        goto code_r0x000c812c;
      }
      puVar18[-1] = uVar11;
      puVar18 = puVar18 + -1;
code_r0x000c812c:
      puVar17 = puStack_68;
    } while (puStack_68 < puVar6);
    param_4 = *puVar18;
  }
  return param_4;
}

/* 0xc8a64  size=724 */
xunknown8 FUN_000c8a64(int8 param_1,uint8 param_2,int8 *param_3,uint4 param_4)

{
  bool bVar1;
  uint8 uVar2;
  int8 *piVar3;
  int8 *piVar4;
  int8 iVar5;
  int8 iVar6;
  uint1 uVar7;
  xunknown1 axStack_6e8 [32];
  xunknown8 xStack_6c8;
  int8 iStack_6b0;
  xunknown4 xStack_6a8;
  int8 iStack_698;
  int8 iStack_690;
  xunknown8 xStack_688;
  xunknown1 axStack_680 [16];
  uint4 uStack_670;
  
  if (((param_4 == 0) ||
      (uVar2 = FUN_000c8f8c(*(xunknown8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (uint8)param_4,&iStack_6b0,axStack_6e8), (uVar2 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar2 = FUN_000c9154(*(xunknown8 *)(param_1 + 8),param_2,param_3[4],(int4)param_3[5],
                               &iStack_6b0,axStack_6e8), (uVar2 & 1) == 0)))) {
    iVar6 = *param_3;
    pthread_rwlock_rdlock(0x173304);
    if (uRam00000000000d8f40 < uRam00000000000d8f48) {
      piVar4 = uRam00000000000d8f40;
      if (iVar6 == -1) {
        do {
          if (((uint8)piVar4[1] <= param_2) && (param_2 < (uint8)piVar4[2])) goto code_r0x000c8b6c;
          piVar4 = piVar4 + 4;
        } while (piVar4 < uRam00000000000d8f48);
      }
      else {
        do {
          if (((*piVar4 == iVar6) && ((uint8)piVar4[1] <= param_2)) && (param_2 < (uint8)piVar4[2]))
          goto code_r0x000c8b6c;
          piVar4 = piVar4 + 4;
        } while (piVar4 < uRam00000000000d8f48);
      }
    }
    pthread_rwlock_unlock(0x173304);
    goto code_r0x000c8bb4;
  }
code_r0x000c8bd4:
  uVar7 = 1;
code_r0x000c8bd8:
  iVar6 = *param_3;
  memset(axStack_680,0,0x618);
  uVar2 = FUN_000c6bc8(*(xunknown8 *)(param_1 + 8),&iStack_6b0,axStack_6e8,param_2,4,axStack_680);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(xunknown8 *)(param_1 + 0x230) = xStack_688;
  *(int8 *)(param_1 + 0x228) = iStack_690;
  *(xunknown8 *)(param_1 + 0x238) = xStack_6c8;
  bVar1 = (bool)(uVar7 ^ 1);
  *(uint8 *)(param_1 + 0x240) = (uint8)uStack_670;
  *(xunknown4 *)(param_1 + 0x250) = 0x3000000;
  *(int8 *)(param_1 + 0x220) = iStack_698;
  *(xunknown8 *)(param_1 + 0x248) = 0;
  *(xunknown4 *)(param_1 + 0x254) = xStack_6a8;
  if (param_4 != 0) {
    bVar1 = true;
  }
  *(int8 *)(param_1 + 600) = iStack_6b0;
  *(int8 *)(param_1 + 0x260) = iVar6;
  if (bVar1) {
    return 1;
  }
  if (param_3[4] != 0) {
    return 1;
  }
  iVar6 = *param_3;
  pthread_rwlock_wrlock(0x173304);
  piVar4 = uRam00000000000d8f40;
  if (piRam00000000000d8f50 <= uRam00000000000d8f48) {
    iVar5 = (int8)piRam00000000000d8f50 - (int8)uRam00000000000d8f40;
    piVar3 = (int8 *)malloc(iVar5 * 4);
    memcpy(piVar3,piVar4,iVar5);
    if (piVar4 != (int8 *)0x173340) {
      free(piVar4);
    }
    piRam00000000000d8f50 = piVar3 + (iVar5 >> 3) * 4;
    uRam00000000000d8f48 = (int8 *)((int8)piVar3 + iVar5);
    uRam00000000000d8f40 = piVar3;
  }
  *uRam00000000000d8f48 = iVar6;
  uRam00000000000d8f48[1] = iStack_698;
  uRam00000000000d8f48[3] = iStack_6b0;
  uRam00000000000d8f48[2] = iStack_690;
  uRam00000000000d8f48 = uRam00000000000d8f48 + 4;
  pthread_rwlock_unlock(0x173304);
  return 1;
code_r0x000c8b6c:
  iVar6 = piVar4[3];
  pthread_rwlock_unlock(0x173304);
  if ((iVar6 != 0) &&
     (uVar2 = FUN_000c8f8c(*(xunknown8 *)(param_1 + 8),param_2,param_3[2],param_3[3],iVar6,
                           &iStack_6b0,axStack_6e8), (uVar2 & 1) != 0)) {
    uVar7 = 0;
    goto code_r0x000c8bd8;
  }
code_r0x000c8bb4:
  uVar2 = FUN_000c8f8c(*(xunknown8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&iStack_6b0,
                       axStack_6e8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  goto code_r0x000c8bd4;
}

/* 0xc8d38  size=308 */
xunknown8 FUN_000c8d38(uint8 *param_1,xunknown8 param_2,xunknown8 *param_3)

{
  uint8 uVar1;
  xunknown8 xVar2;
  int8 iVar3;
  uint4 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint8 *puVar7;
  int8 iVar8;
  int8 iVar9;
  int4 *piVar10;
  uint8 uVar11;
  uint8 uVar12;
  uint8 uVar13;
  xunknown8 axStack_70 [4];
  
  uVar12 = (uint8)(uint2)param_1[3];
  if (uVar12 != 0) {
    uVar6 = param_3[2];
    uVar13 = *param_1;
    if (uVar13 <= uVar6) {
      uVar5 = uVar12;
      piVar10 = (int4 *)param_1[2];
      do {
        if (((*piVar10 == 1) && (uVar1 = *(int8 *)(piVar10 + 4) + uVar13, uVar1 <= uVar6)) &&
           (uVar11 = *(uint8 *)(piVar10 + 10), uVar6 < uVar11 + uVar1)) {
          puVar7 = (uint8 *)param_3[1];
          uVar6 = uVar12 + 0xffffffff;
          *puVar7 = uVar1;
          puVar7[1] = uVar11;
          do {
            if (*(int4 *)(param_1[2] + (uVar6 & 0xffffffff) * 0x38) == 0x6474e550) {
              iVar8 = param_1[2] + (uVar6 & 0xffffffff) * 0x38;
              xVar2 = *param_3;
              iVar3 = param_3[1];
              iVar9 = *(int8 *)(iVar8 + 0x28);
              iVar8 = *(int8 *)(iVar8 + 0x10) + uVar13;
              *(int8 *)(iVar3 + 0x20) = iVar8;
              *(int8 *)(iVar3 + 0x28) = iVar9;
              uVar5 = FUN_000c8e6c(xVar2,iVar8,iVar9 + iVar8,axStack_70);
              if ((uVar5 & 1) != 0) {
                iVar8 = param_3[1];
                *(xunknown8 *)(iVar8 + 0x10) = axStack_70[0];
                *(xunknown8 *)(iVar8 + 0x18) = 0xffffffffffffffff;
                return 1;
              }
            }
            uVar4 = (int4)uVar12 - 1;
            uVar12 = (uint8)uVar4;
            uVar6 = uVar6 - 1;
          } while ((uVar4 & 0xffff) != 0);
          return 0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 0xe;
      } while (uVar5 != 0);
    }
  }
  return 0;
}

/* 0xc8e6c  size=288 */
xunknown8 FUN_000c8e6c(xunknown8 param_1,char *param_2,char *param_3,xunknown8 *param_4)

{
  char cVar1;
  char cVar2;
  int8 iVar3;
  xunknown8 xVar4;
  char *pcStack_28;
  
  iVar3 = got___sF;
  if ((uint8)((int8)param_3 - (int8)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf(got___sF + 0x130,0x34ad1 /* "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of ..." */,param_2);
  }
  else {
    if (*param_2 == '\x01') {
      pcStack_28 = param_2 + 4;
      cVar1 = param_2[2];
      cVar2 = param_2[1];
      *(char *)(param_4 + 3) = param_2[3];
      xVar4 = FUN_000c7b54(param_1,&pcStack_28,param_3,cVar2,param_2);
      *param_4 = xVar4;
      if (cVar1 == -1) {
        xVar4 = 0;
      }
      else {
        xVar4 = FUN_000c7b54(param_1,&pcStack_28,param_3,cVar1,param_2);
      }
      param_4[1] = xVar4;
      param_4[2] = pcStack_28;
      return 1;
    }
    fprintf(got___sF + 0x130,0x2a54c /* "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n" */,*param_2,param_2);
  }
  fflush(iVar3 + 0x130);
  return 0;
}

/* 0xc8f8c  size=456 */
xunknown8 FUN_000c8f8c(xunknown8 param_1,uint8 param_2,uint4 *param_3,int8 param_4,uint4 *param_5,
                      xunknown8 *param_6,int8 param_7)

{
  uint4 *puVar1;
  char cVar2;
  uint4 *puVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  uint4 *puVar7;
  uint8 uVar8;
  uint4 *puVar9;
  uint4 *puStack_68;
  
  puVar9 = (uint4 *)(param_4 + (int8)param_3);
  puVar1 = param_3;
  if (param_5 != (uint4 *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar9 = (uint4 *)0xffffffffffffffff;
  }
  while( true ) {
    puVar3 = puVar1;
    if (puVar9 <= puVar3) {
      return 0;
    }
    puStack_68 = puVar3 + 1;
    uVar8 = (uint8)*puVar3;
    if (*puVar3 == 0xffffffff) {
      uVar8 = *(uint8 *)(puVar3 + 1);
      puStack_68 = puVar3 + 3;
    }
    if (uVar8 == 0) break;
    puVar1 = (uint4 *)((int8)puStack_68 + uVar8);
    if ((((*puStack_68 != 0) &&
         (puVar7 = (uint4 *)((int8)puStack_68 - (uint8)*puStack_68), param_3 <= puVar7)) &&
        (puVar7 < puVar9)) && (iVar4 = FUN_000c5cfc(param_1,puVar7,param_7), iVar4 == 0)) {
      puStack_68 = puStack_68 + 1;
      uVar8 = FUN_000c7b54(param_1,&puStack_68,puVar1,*(xunknown1 *)(param_7 + 0x18),0);
      iVar4 = FUN_000c7b54(param_1,&puStack_68,puVar1,*(uint1 *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= iVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        if (cVar2 == '\0') {
          puVar9 = puStack_68;
        }
        else {
          iVar5 = FUN_000c7ee0(&puStack_68,puVar1);
          puVar7 = puStack_68;
          puVar9 = (uint4 *)((int8)puStack_68 + iVar5);
          if ((*(uint1 *)(param_7 + 0x19) != 0xff) &&
             (iVar5 = FUN_000c7b54(param_1,&puStack_68,puVar1,*(uint1 *)(param_7 + 0x19) & 0xf,0),
             iVar5 != 0)) {
            puStack_68 = puVar7;
            xVar6 = FUN_000c7b54(param_1,&puStack_68,puVar1,*(xunknown1 *)(param_7 + 0x19),0);
            param_6[5] = xVar6;
          }
        }
        param_6[2] = puVar9;
        param_6[3] = uVar8;
        *param_6 = puVar3;
        param_6[1] = (int8)puVar1 - (int8)puVar3;
        param_6[4] = iVar4 + uVar8;
        return 1;
      }
    }
  }
  return 0;
}

/* 0xc9154  size=360 */
xunknown8 FUN_000c9154(xunknown8 param_1,uint8 param_2,int8 param_3,uint8 param_4,int8 param_5,
                      xunknown8 param_6)

{
  uint8 uVar1;
  int8 iVar2;
  xunknown8 xVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 uVar6;
  int8 iVar7;
  int8 iVar8;
  int8 iStack_88;
  xunknown1 axStack_80 [8];
  uint8 uStack_78;
  int8 iStack_70;
  xunknown1 xStack_68;
  
  iVar4 = param_3 + (param_4 & 0xffffffff);
  uVar1 = FUN_000c8e6c(param_1,param_3,iVar4,axStack_80);
  if (((uVar1 & 1) != 0) && (uStack_78 != 0)) {
    iVar2 = FUN_000c92bc(xStack_68);
    iVar7 = 0;
    do {
      if (uStack_78 < 2) {
        iVar8 = iVar7 * iVar2;
        break;
      }
      uVar6 = uStack_78 >> 1;
      iVar8 = (uVar6 + iVar7) * iVar2;
      iStack_88 = iStack_70 + iVar8;
      uVar1 = FUN_000c7b54(param_1,&iStack_88,iVar4,xStack_68,param_3);
      uVar5 = uStack_78 - uVar6;
      uStack_78 = uVar6;
      if (uVar1 < param_2) {
        uStack_78 = uVar5;
        iVar7 = uVar6 + iVar7;
      }
    } while (uVar1 != param_2);
    iStack_88 = iStack_70 + iVar8;
    FUN_000c7b54(param_1,&iStack_88,iVar4,xStack_68,param_3);
    xVar3 = FUN_000c7b54(param_1,&iStack_88,iVar4,xStack_68,param_3);
    iVar4 = FUN_000c5b6c(param_1,xVar3,param_5,param_6,0);
    if (((iVar4 == 0) && (*(uint8 *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(uint8 *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}

/* 0xc92bc  size=252 */
xunknown8 FUN_000c92bc(uint4 param_1)

{
  int8 iVar1;
  xunknown8 xVar2;
  
  iVar1 = got___sF;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
code_r0x000c9384:
        fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ace0 /* "getTableEntrySize" */,0x290ca /* "Can't binary search on variable length encoded data." */);
        fflush(iVar1 + 0x130);
        goto code_r0x000ca7b0;
      }
    }
    else {
      if (param_1 == 3) {
        return 8;
      }
      if (param_1 == 4) {
        return 0x10;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 10) {
      return 4;
    }
    if (param_1 == 9) goto code_r0x000c9384;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf(got___sF + 0x130,0x23e8a /* "libunwind: %s - %s\n" */,0x2ace0 /* "getTableEntrySize" */,0x38fde /* "Unknown DWARF encoding for search table." */);
  fflush(iVar1 + 0x130);
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xVar2 = (*got_abort)();
  return xVar2;
}

/* 0xc93b8  size=48 */
int8 FUN_000c93b8(int4 param_1)

{
  if (param_1 + 2U < 0x62) {
    return (int8)*(int4 *)((uint8)(param_1 + 2U) * 4 + 0x43fac) + 0x43fac;
  }
  return 0x38399 /* "unknown register" */;
}

