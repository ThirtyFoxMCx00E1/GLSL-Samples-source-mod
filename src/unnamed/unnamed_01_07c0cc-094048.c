/* unexported functions 0x7c0cc..0x94048
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x7c0cc  size=204 */
void FUN_0007c0cc(int8 *param_1,int8 *param_2,int8 *param_3)

{
  bool bVar1;
  uint4 *puVar2;
  uint8 uVar3;
  uint8 uVar4;
  xunknown8 xVar5;
  int8 iVar6;
  xunknown8 xVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint8 uVar10;
  xunknown8 *pxVar11;
  uint4 uVar12;
  int8 *piVar13;
  uint8 uVar14;
  xunknown8 *pxVar15;
  xunknown8 *pxVar16;
  xunknown8 xVar17;
  int8 iVar18;
  xunknown8 *pxVar19;
  xunknown8 *pxVar20;
  int8 iVar21;
  xunknown8 xVar22;
  xunknown8 *pxVar23;
  xunknown8 *pxVar24;
  int8 iVar25;
  xunknown1 axVar26 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    iVar25 = 0;
    uVar10 = 0xffffffffffffffff;
    piVar13 = param_2;
    do {
      piVar13 = (int8 *)*piVar13;
      uVar10 = uVar10 + 1;
      iVar25 = iVar25 + 0x10;
    } while (piVar13 != param_3);
    if (0xffffffffffffffe < uVar10) {
      xVar7 = FUN_0007c3f4();
      iVar25 = *param_1;
      if (iVar25 != 0) {
        param_1[1] = iVar25;
        operator_delete_plt(iVar25,param_1[2] - iVar25);
      }
      axVar26 = FUN_000c5688(xVar7);
      iVar25 = 0;
      if (axVar26._8_8_ != axVar26._0_8_) {
        iVar25 = LZCOUNT(axVar26._8_8_ - axVar26._0_8_ >> 4) * -2 + 0x7e;
      }
      bVar1 = true;
      do {
        pxVar24 = axVar26._8_8_;
        pxVar11 = pxVar24 + -2;
        pxVar15 = axVar26._0_8_;
code_r0x0007c444:
        pxVar23 = pxVar15;
        uVar10 = (int8)pxVar24 - (int8)pxVar23 >> 4;
        if (uVar10 - 2 == 0 || (int8)uVar10 < 2) {
          if (uVar10 < 2) {
            return;
          }
          if (uVar10 == 2) {
            if (*(uint4 *)((int8)pxVar23 + 0xc) < *(uint4 *)((int8)pxVar24 + -4)) {
              xVar7 = *pxVar23;
              *pxVar23 = pxVar24[-2];
              pxVar24[-2] = xVar7;
              xVar7 = pxVar23[1];
              pxVar23[1] = pxVar24[-1];
              pxVar24[-1] = xVar7;
              return;
            }
            return;
          }
        }
        else {
          if (uVar10 == 3) {
            pxVar15 = pxVar23 + 2;
            uVar12 = *(uint4 *)((int8)pxVar23 + 0x1c);
            if (*(uint4 *)((int8)pxVar23 + 0xc) < uVar12) {
              xVar7 = *pxVar23;
              if (uVar12 < *(uint4 *)((int8)pxVar24 + -4)) {
                *pxVar23 = *pxVar11;
                *pxVar11 = xVar7;
                xVar7 = pxVar23[1];
                pxVar23[1] = pxVar24[-1];
              }
              else {
                *pxVar23 = *pxVar15;
                *pxVar15 = xVar7;
                xVar7 = pxVar23[1];
                pxVar23[1] = pxVar23[3];
                pxVar23[3] = xVar7;
                if (*(uint4 *)((int8)pxVar24 + -4) <= (uint4)((uint8)xVar7 >> 0x20)) {
                  return;
                }
                xVar7 = *pxVar15;
                *pxVar15 = *pxVar11;
                *pxVar11 = xVar7;
                xVar7 = pxVar23[3];
                pxVar23[3] = pxVar24[-1];
              }
              pxVar24[-1] = xVar7;
            }
            else if (uVar12 < *(uint4 *)((int8)pxVar24 + -4)) {
              xVar7 = *pxVar15;
              *pxVar15 = *pxVar11;
              *pxVar11 = xVar7;
              xVar7 = pxVar23[3];
              pxVar23[3] = pxVar24[-1];
              pxVar24[-1] = xVar7;
              if (*(uint4 *)((int8)pxVar23 + 0xc) < *(uint4 *)((int8)pxVar23 + 0x1c)) {
                xVar7 = *pxVar23;
                *pxVar23 = *pxVar15;
                *pxVar15 = xVar7;
                xVar7 = pxVar23[1];
                pxVar23[1] = pxVar23[3];
                pxVar23[3] = xVar7;
                return;
              }
            }
            return;
          }
          if (uVar10 == 4) {
            FUN_0007cd00(pxVar23,pxVar23 + 2,pxVar23 + 4);
            if (*(uint4 *)((int8)pxVar24 + -4) <= *(uint4 *)((int8)pxVar23 + 0x2c)) {
              return;
            }
            xVar7 = pxVar23[4];
            pxVar23[4] = pxVar24[-2];
            pxVar24[-2] = xVar7;
            xVar7 = pxVar23[5];
            pxVar23[5] = pxVar24[-1];
            pxVar24[-1] = xVar7;
            if (*(uint4 *)((int8)pxVar23 + 0x2c) <= *(uint4 *)((int8)pxVar23 + 0x1c)) {
              return;
            }
            xVar7 = pxVar23[4];
            xVar22 = pxVar23[5];
            xVar17 = pxVar23[2];
            xVar5 = pxVar23[3];
            pxVar23[2] = xVar7;
            pxVar23[3] = xVar22;
            pxVar23[4] = xVar17;
            pxVar23[5] = xVar5;
            if (*(uint4 *)((int8)pxVar23 + 0xc) < (uint4)((uint8)xVar22 >> 0x20)) {
              xVar17 = *pxVar23;
              xVar5 = pxVar23[1];
              *pxVar23 = xVar7;
              pxVar23[1] = xVar22;
              pxVar23[2] = xVar17;
              pxVar23[3] = xVar5;
              return;
            }
            return;
          }
          if (uVar10 == 5) {
            pxVar15 = pxVar23 + 2;
            pxVar16 = pxVar23 + 4;
            pxVar19 = pxVar23 + 6;
            FUN_0007cd00();
            if (*(uint4 *)((int8)pxVar23 + 0x2c) < *(uint4 *)((int8)pxVar23 + 0x3c)) {
              xVar7 = *pxVar16;
              *pxVar16 = *pxVar19;
              *pxVar19 = xVar7;
              xVar7 = pxVar23[5];
              pxVar23[5] = pxVar23[7];
              pxVar23[7] = xVar7;
              if (*(uint4 *)((int8)pxVar23 + 0x1c) < *(uint4 *)((int8)pxVar23 + 0x2c)) {
                xVar7 = *pxVar15;
                *pxVar15 = *pxVar16;
                *pxVar16 = xVar7;
                xVar7 = pxVar23[3];
                pxVar23[3] = pxVar23[5];
                pxVar23[5] = xVar7;
                if (*(uint4 *)((int8)pxVar23 + 0xc) < *(uint4 *)((int8)pxVar23 + 0x1c)) {
                  xVar7 = *pxVar23;
                  *pxVar23 = *pxVar15;
                  *pxVar15 = xVar7;
                  xVar7 = pxVar23[1];
                  pxVar23[1] = pxVar23[3];
                  pxVar23[3] = xVar7;
                }
              }
            }
            if (*(uint4 *)((int8)pxVar23 + 0x3c) < *(uint4 *)((int8)pxVar24 + -4)) {
              xVar7 = *pxVar19;
              *pxVar19 = *pxVar11;
              *pxVar11 = xVar7;
              xVar7 = pxVar23[7];
              pxVar23[7] = pxVar24[-1];
              pxVar24[-1] = xVar7;
              if (*(uint4 *)((int8)pxVar23 + 0x2c) < *(uint4 *)((int8)pxVar23 + 0x3c)) {
                xVar7 = *pxVar16;
                *pxVar16 = *pxVar19;
                *pxVar19 = xVar7;
                xVar7 = pxVar23[5];
                pxVar23[5] = pxVar23[7];
                pxVar23[7] = xVar7;
                if (*(uint4 *)((int8)pxVar23 + 0x1c) < *(uint4 *)((int8)pxVar23 + 0x2c)) {
                  xVar7 = *pxVar15;
                  *pxVar15 = *pxVar16;
                  *pxVar16 = xVar7;
                  xVar7 = pxVar23[3];
                  pxVar23[3] = pxVar23[5];
                  pxVar23[5] = xVar7;
                  if (*(uint4 *)((int8)pxVar23 + 0xc) < *(uint4 *)((int8)pxVar23 + 0x1c)) {
                    xVar7 = *pxVar23;
                    *pxVar23 = *pxVar15;
                    *pxVar15 = xVar7;
                    xVar7 = pxVar23[1];
                    pxVar23[1] = pxVar23[3];
                    pxVar23[3] = xVar7;
                  }
                }
              }
            }
            return;
          }
        }
        if ((int8)uVar10 < 0x18) {
          pxVar15 = pxVar23 + 2;
          if (bVar1 == false) {
            if (!(pxVar23 == pxVar24 || pxVar15 == pxVar24)) {
              pxVar11 = pxVar23 + 3;
              do {
                pxVar16 = pxVar15;
                if (*(uint4 *)((int8)pxVar23 + 0xc) < *(uint4 *)((int8)pxVar23 + 0x1c)) {
                  xVar7 = pxVar23[3];
                  xVar17 = *pxVar16;
                  pxVar15 = pxVar11;
                  do {
                    pxVar23 = pxVar15;
                    pxVar23[-1] = pxVar23[-3];
                    *pxVar23 = pxVar23[-2];
                    pxVar15 = pxVar23 + -2;
                  } while (*(uint4 *)((int8)pxVar23 + -0x1c) < (uint4)((uint8)xVar7 >> 0x20));
                  pxVar23[-3] = xVar17;
                  pxVar23[-2] = xVar7;
                }
                pxVar11 = pxVar11 + 2;
                pxVar15 = pxVar16 + 2;
                pxVar23 = pxVar16;
              } while (pxVar16 + 2 != pxVar24);
              return;
            }
            return;
          }
          if (pxVar23 == pxVar24 || pxVar15 == pxVar24) {
            return;
          }
          iVar25 = 0;
          pxVar11 = pxVar23;
          goto code_r0x0007c898;
        }
        if (iVar25 == 0) {
          if (pxVar23 == pxVar24) {
            return;
          }
          uVar14 = uVar10 - 2 >> 1;
          uVar8 = uVar14;
          goto code_r0x0007c910;
        }
        pxVar15 = pxVar23 + (uVar10 & 0xfffffffffffffffe);
        if (uVar10 < 0x81) {
          FUN_0007cd00(pxVar15,pxVar23,pxVar11);
          if (bVar1 == false) goto code_r0x0007c514;
        }
        else {
          FUN_0007cd00(pxVar23,pxVar15,pxVar11);
          FUN_0007cd00(pxVar23 + 2,pxVar15 + -2,pxVar24 + -4);
          FUN_0007cd00(pxVar23 + 4,pxVar15 + 2,pxVar24 + -6);
          FUN_0007cd00(pxVar15 + -2,pxVar15,pxVar15 + 2);
          xVar17 = pxVar15[1];
          xVar7 = *pxVar23;
          xVar22 = pxVar23[1];
          *pxVar23 = *pxVar15;
          pxVar23[1] = xVar17;
          *pxVar15 = xVar7;
          pxVar15[1] = xVar22;
          if (!bVar1) {
code_r0x0007c514:
            if (*(uint4 *)((int8)pxVar23 - 4) <= *(uint4 *)((int8)pxVar23 + 0xc)) {
              xVar7 = pxVar23[1];
              uVar12 = (uint4)((uint8)xVar7 >> 0x20);
              pxVar16 = pxVar23;
              if (*(uint4 *)((int8)pxVar24 + -4) < uVar12) {
                pxVar15 = pxVar23;
                do {
                  puVar2 = (uint4 *)((int8)pxVar15 + 0x1c);
                  pxVar15 = pxVar15 + 2;
                } while (uVar12 <= *puVar2);
              }
              else {
                do {
                  pxVar15 = pxVar16 + 2;
                  if (pxVar24 <= pxVar15) break;
                  puVar2 = (uint4 *)((int8)pxVar16 + 0x1c);
                  pxVar16 = pxVar15;
                } while (uVar12 <= *puVar2);
              }
              pxVar16 = pxVar24;
              if (pxVar15 < pxVar24) {
                do {
                  puVar2 = (uint4 *)((int8)pxVar16 + -4);
                  pxVar16 = pxVar16 + -2;
                } while (*puVar2 < uVar12);
              }
              xVar17 = *pxVar23;
              while (pxVar15 < pxVar16) {
                xVar22 = *pxVar15;
                *pxVar15 = *pxVar16;
                *pxVar16 = xVar22;
                xVar22 = pxVar15[1];
                pxVar15[1] = pxVar16[1];
                pxVar16[1] = xVar22;
                do {
                  puVar2 = (uint4 *)((int8)pxVar15 + 0x1c);
                  pxVar15 = pxVar15 + 2;
                } while (uVar12 <= *puVar2);
                do {
                  puVar2 = (uint4 *)((int8)pxVar16 + -4);
                  pxVar16 = pxVar16 + -2;
                } while (*puVar2 < uVar12);
              }
              if (pxVar23 != pxVar15 + -2) {
                *pxVar23 = pxVar15[-2];
                pxVar23[1] = pxVar15[-1];
              }
              bVar1 = false;
              pxVar15[-2] = xVar17;
              pxVar15[-1] = xVar7;
              iVar25 = iVar25 + -1;
              goto code_r0x0007c444;
            }
          }
        }
        iVar25 = iVar25 + -1;
        xVar7 = *pxVar23;
        xVar17 = pxVar23[1];
        iVar18 = 0;
        do {
          iVar21 = iVar18 + 0x10;
          iVar6 = iVar18 + 0x1c;
          uVar12 = (uint4)((uint8)xVar17 >> 0x20);
          iVar18 = iVar21;
        } while (uVar12 < *(uint4 *)((int8)pxVar23 + iVar6));
        pxVar16 = (xunknown8 *)((int8)pxVar23 + iVar21);
        pxVar19 = pxVar24;
        if (iVar21 == 0x10) {
          do {
            if (pxVar19 <= pxVar16) break;
            puVar2 = (uint4 *)((int8)pxVar19 + -4);
            pxVar19 = pxVar19 + -2;
          } while (*puVar2 <= uVar12);
        }
        else {
          do {
            puVar2 = (uint4 *)((int8)pxVar19 + -4);
            pxVar19 = pxVar19 + -2;
          } while (*puVar2 <= uVar12);
        }
        pxVar15 = pxVar16;
        if (pxVar16 < pxVar19) {
          pxVar20 = pxVar19;
          do {
            xVar22 = *pxVar15;
            *pxVar15 = *pxVar20;
            *pxVar20 = xVar22;
            xVar22 = pxVar15[1];
            pxVar15[1] = pxVar20[1];
            pxVar20[1] = xVar22;
            do {
              puVar2 = (uint4 *)((int8)pxVar15 + 0x1c);
              pxVar15 = pxVar15 + 2;
            } while (uVar12 < *puVar2);
            do {
              puVar2 = (uint4 *)((int8)pxVar20 + -4);
              pxVar20 = pxVar20 + -2;
            } while (*puVar2 <= uVar12);
          } while (pxVar15 < pxVar20);
        }
        pxVar20 = pxVar15 + -2;
        axVar26._8_8_ = pxVar20;
        axVar26._0_8_ = pxVar23;
        if (pxVar23 != pxVar20) {
          *pxVar23 = pxVar15[-2];
          pxVar23[1] = pxVar15[-1];
        }
        pxVar15[-2] = xVar7;
        pxVar15[-1] = xVar17;
        if (pxVar16 < pxVar19) goto code_r0x0007c638;
        uVar10 = FUN_0007cde8(pxVar23,pxVar20);
        uVar8 = FUN_0007cde8(pxVar15,pxVar24);
        if ((uVar8 & 1) == 0) goto code_r0x0007c634;
        if ((uVar10 & 1) != 0) {
          return;
        }
      } while( true );
    }
    piVar13 = (int8 *)operator_new_plt(iVar25);
    *param_1 = (int8)piVar13;
    param_1[1] = (int8)piVar13;
    param_1[2] = (int8)piVar13 + iVar25;
    do {
      *piVar13 = param_2[2];
      piVar13[1] = param_2[3];
      piVar13 = piVar13 + 2;
      param_2 = (int8 *)*param_2;
    } while (param_2 != param_3);
    param_1[1] = (int8)piVar13;
  }
  return;
code_r0x0007c898:
  pxVar16 = pxVar15;
  if (*(uint4 *)((int8)pxVar11 + 0xc) < *(uint4 *)((int8)pxVar11 + 0x1c)) {
    xVar7 = pxVar11[3];
    xVar17 = *pxVar16;
    iVar18 = iVar25;
    do {
      iVar21 = iVar18;
      pxVar15 = (xunknown8 *)((int8)pxVar23 + iVar21);
      pxVar15[2] = *pxVar15;
      pxVar15[3] = pxVar15[1];
      if (iVar21 == 0) {
        pxVar15 = pxVar23;
        goto code_r0x0007c880;
      }
      iVar18 = iVar21 + -0x10;
    } while (*(uint4 *)((int8)pxVar15 + -4) < (uint4)((uint8)xVar7 >> 0x20));
    pxVar15 = (xunknown8 *)((int8)pxVar23 + iVar21);
code_r0x0007c880:
    *pxVar15 = xVar17;
    pxVar15[1] = xVar7;
  }
  iVar25 = iVar25 + 0x10;
  pxVar15 = pxVar16 + 2;
  pxVar11 = pxVar16;
  if (pxVar16 + 2 == pxVar24) {
    return;
  }
  goto code_r0x0007c898;
code_r0x0007c910:
  do {
    if (uVar8 <= uVar14) {
      uVar4 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
      uVar3 = uVar8 * 2 + 2;
      pxVar15 = pxVar23 + uVar4 * 2;
      uVar9 = uVar4;
      if ((int8)uVar3 < (int8)uVar10) {
        iVar25 = 0x10;
        uVar9 = uVar3;
        if (*(uint4 *)((int8)pxVar15 + 0xc) <= *(uint4 *)((int8)pxVar15 + 0x1c)) {
          iVar25 = 0;
          uVar9 = uVar4;
        }
        pxVar15 = (xunknown8 *)((int8)pxVar15 + iVar25);
      }
      pxVar11 = pxVar23 + uVar8 * 2;
      if (*(uint4 *)((int8)pxVar15 + 0xc) <= *(uint4 *)((int8)pxVar11 + 0xc)) {
        xVar7 = *pxVar11;
        xVar17 = pxVar11[1];
        do {
          pxVar16 = pxVar15;
          *pxVar11 = *pxVar16;
          pxVar11[1] = pxVar16[1];
          if ((int8)uVar14 < (int8)uVar9) break;
          uVar4 = uVar9 << 1 | 1;
          uVar3 = uVar9 * 2 + 2;
          pxVar15 = pxVar23 + uVar4 * 2;
          uVar9 = uVar4;
          if ((int8)uVar3 < (int8)uVar10) {
            iVar25 = 0x10;
            uVar9 = uVar3;
            if (*(uint4 *)((int8)pxVar15 + 0xc) <= *(uint4 *)((int8)pxVar15 + 0x1c)) {
              iVar25 = 0;
              uVar9 = uVar4;
            }
            pxVar15 = (xunknown8 *)((int8)pxVar15 + iVar25);
          }
          pxVar11 = pxVar16;
        } while (*(uint4 *)((int8)pxVar15 + 0xc) <= (uint4)((uint8)xVar17 >> 0x20));
        *pxVar16 = xVar7;
        pxVar16[1] = xVar17;
      }
    }
    bVar1 = 0 < (int8)uVar8;
    uVar8 = uVar8 - 1;
  } while (bVar1);
  do {
    xVar7 = *pxVar23;
    xVar17 = pxVar23[1];
    uVar8 = 0;
    pxVar15 = pxVar23;
    do {
      uVar3 = uVar8 << 1 | 1;
      uVar14 = uVar8 * 2 + 2;
      pxVar11 = pxVar15 + uVar8 * 2 + 2;
      if ((int8)uVar14 < (int8)uVar10) {
        iVar25 = uVar8 * 0x10;
        iVar18 = uVar8 * 0x10;
        iVar21 = uVar8 * 2;
        uVar8 = uVar14;
        pxVar16 = pxVar15 + iVar21 + 4;
        if (*(uint4 *)((int8)pxVar15 + iVar25 + 0x1c) <= *(uint4 *)((int8)pxVar15 + iVar18 + 0x2c))
        {
          uVar8 = uVar3;
          pxVar16 = pxVar11;
        }
        pxVar11 = pxVar16;
      }
      else {
        uVar8 = uVar3;
      }
      *pxVar15 = *pxVar11;
      pxVar15[1] = pxVar11[1];
      pxVar15 = pxVar11;
    } while ((int8)uVar8 <= (int8)(uVar10 - 2 >> 1));
    if (pxVar11 == pxVar24 + -2) {
      *pxVar11 = xVar7;
      pxVar11[1] = xVar17;
    }
    else {
      *pxVar11 = pxVar24[-2];
      iVar25 = (int8)pxVar11 + (0x10 - (int8)pxVar23) >> 4;
      pxVar11[1] = pxVar24[-1];
      pxVar24[-2] = xVar7;
      pxVar24[-1] = xVar17;
      if (1 < iVar25) {
        uVar8 = iVar25 - 2U >> 1;
        if (*(uint4 *)((int8)pxVar11 + 0xc) < *(uint4 *)((int8)(pxVar23 + uVar8 * 2) + 0xc)) {
          xVar7 = *pxVar11;
          xVar17 = pxVar11[1];
          pxVar15 = pxVar23 + uVar8 * 2;
          do {
            pxVar16 = pxVar15;
            *pxVar11 = *pxVar16;
            pxVar11[1] = pxVar16[1];
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1 >> 1;
            pxVar11 = pxVar16;
            pxVar15 = pxVar23 + uVar8 * 2;
          } while ((uint4)((uint8)xVar17 >> 0x20) < *(uint4 *)((int8)(pxVar23 + uVar8 * 2) + 0xc));
          *pxVar16 = xVar7;
          pxVar16[1] = xVar17;
        }
      }
    }
    bVar1 = (int8)uVar10 < 3;
    uVar10 = uVar10 - 1;
    pxVar24 = pxVar24 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
code_r0x0007c634:
  if ((uVar10 & 1) == 0) {
code_r0x0007c638:
    FUN_0007c408(pxVar23,pxVar20,iVar25,bVar1);
    bVar1 = false;
  }
  goto code_r0x0007c444;
}

/* 0x7c198  size=36 */
void FUN_0007c198(xunknown8 *param_1,xunknown8 *param_2)

{
  bool bVar1;
  uint4 *puVar2;
  uint8 uVar3;
  uint8 uVar4;
  xunknown8 xVar5;
  int8 iVar6;
  uint8 uVar7;
  uint8 uVar8;
  uint8 uVar9;
  xunknown8 *pxVar10;
  uint4 uVar11;
  xunknown8 xVar12;
  uint8 uVar13;
  xunknown8 *pxVar14;
  xunknown8 *pxVar15;
  xunknown8 xVar16;
  int8 iVar17;
  xunknown8 *pxVar18;
  xunknown8 *pxVar19;
  int8 iVar20;
  int8 iVar21;
  xunknown8 xVar22;
  
  iVar21 = 0;
  if (param_2 != param_1) {
    iVar21 = LZCOUNT((int8)param_2 - (int8)param_1 >> 4) * -2 + 0x7e;
  }
  bVar1 = true;
  do {
    pxVar10 = param_2 + -2;
    pxVar14 = param_1;
code_r0x0007c444:
    param_1 = pxVar14;
    uVar9 = (int8)param_2 - (int8)param_1 >> 4;
    if (uVar9 - 2 == 0 || (int8)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_2 + -4)) {
          xVar12 = *param_1;
          *param_1 = param_2[-2];
          param_2[-2] = xVar12;
          xVar12 = param_1[1];
          param_1[1] = param_2[-1];
          param_2[-1] = xVar12;
          return;
        }
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        pxVar14 = param_1 + 2;
        uVar11 = *(uint4 *)((int8)param_1 + 0x1c);
        if (*(uint4 *)((int8)param_1 + 0xc) < uVar11) {
          xVar12 = *param_1;
          if (uVar11 < *(uint4 *)((int8)param_2 + -4)) {
            *param_1 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = param_1[1];
            param_1[1] = param_2[-1];
          }
          else {
            *param_1 = *pxVar14;
            *pxVar14 = xVar12;
            xVar12 = param_1[1];
            param_1[1] = param_1[3];
            param_1[3] = xVar12;
            if (*(uint4 *)((int8)param_2 + -4) <= (uint4)((uint8)xVar12 >> 0x20)) {
              return;
            }
            xVar12 = *pxVar14;
            *pxVar14 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = param_1[3];
            param_1[3] = param_2[-1];
          }
          param_2[-1] = xVar12;
        }
        else if (uVar11 < *(uint4 *)((int8)param_2 + -4)) {
          xVar12 = *pxVar14;
          *pxVar14 = *pxVar10;
          *pxVar10 = xVar12;
          xVar12 = param_1[3];
          param_1[3] = param_2[-1];
          param_2[-1] = xVar12;
          if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
            xVar12 = *param_1;
            *param_1 = *pxVar14;
            *pxVar14 = xVar12;
            xVar12 = param_1[1];
            param_1[1] = param_1[3];
            param_1[3] = xVar12;
            return;
          }
        }
        return;
      }
      if (uVar9 == 4) {
        FUN_0007cd00(param_1,param_1 + 2,param_1 + 4);
        if (*(uint4 *)((int8)param_2 + -4) <= *(uint4 *)((int8)param_1 + 0x2c)) {
          return;
        }
        xVar12 = param_1[4];
        param_1[4] = param_2[-2];
        param_2[-2] = xVar12;
        xVar12 = param_1[5];
        param_1[5] = param_2[-1];
        param_2[-1] = xVar12;
        if (*(uint4 *)((int8)param_1 + 0x2c) <= *(uint4 *)((int8)param_1 + 0x1c)) {
          return;
        }
        xVar12 = param_1[4];
        xVar22 = param_1[5];
        xVar16 = param_1[2];
        xVar5 = param_1[3];
        param_1[2] = xVar12;
        param_1[3] = xVar22;
        param_1[4] = xVar16;
        param_1[5] = xVar5;
        if (*(uint4 *)((int8)param_1 + 0xc) < (uint4)((uint8)xVar22 >> 0x20)) {
          xVar16 = *param_1;
          xVar5 = param_1[1];
          *param_1 = xVar12;
          param_1[1] = xVar22;
          param_1[2] = xVar16;
          param_1[3] = xVar5;
          return;
        }
        return;
      }
      if (uVar9 == 5) {
        pxVar14 = param_1 + 2;
        pxVar15 = param_1 + 4;
        pxVar18 = param_1 + 6;
        FUN_0007cd00();
        if (*(uint4 *)((int8)param_1 + 0x2c) < *(uint4 *)((int8)param_1 + 0x3c)) {
          xVar12 = *pxVar15;
          *pxVar15 = *pxVar18;
          *pxVar18 = xVar12;
          xVar12 = param_1[5];
          param_1[5] = param_1[7];
          param_1[7] = xVar12;
          if (*(uint4 *)((int8)param_1 + 0x1c) < *(uint4 *)((int8)param_1 + 0x2c)) {
            xVar12 = *pxVar14;
            *pxVar14 = *pxVar15;
            *pxVar15 = xVar12;
            xVar12 = param_1[3];
            param_1[3] = param_1[5];
            param_1[5] = xVar12;
            if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
              xVar12 = *param_1;
              *param_1 = *pxVar14;
              *pxVar14 = xVar12;
              xVar12 = param_1[1];
              param_1[1] = param_1[3];
              param_1[3] = xVar12;
            }
          }
        }
        if (*(uint4 *)((int8)param_1 + 0x3c) < *(uint4 *)((int8)param_2 + -4)) {
          xVar12 = *pxVar18;
          *pxVar18 = *pxVar10;
          *pxVar10 = xVar12;
          xVar12 = param_1[7];
          param_1[7] = param_2[-1];
          param_2[-1] = xVar12;
          if (*(uint4 *)((int8)param_1 + 0x2c) < *(uint4 *)((int8)param_1 + 0x3c)) {
            xVar12 = *pxVar15;
            *pxVar15 = *pxVar18;
            *pxVar18 = xVar12;
            xVar12 = param_1[5];
            param_1[5] = param_1[7];
            param_1[7] = xVar12;
            if (*(uint4 *)((int8)param_1 + 0x1c) < *(uint4 *)((int8)param_1 + 0x2c)) {
              xVar12 = *pxVar14;
              *pxVar14 = *pxVar15;
              *pxVar15 = xVar12;
              xVar12 = param_1[3];
              param_1[3] = param_1[5];
              param_1[5] = xVar12;
              if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
                xVar12 = *param_1;
                *param_1 = *pxVar14;
                *pxVar14 = xVar12;
                xVar12 = param_1[1];
                param_1[1] = param_1[3];
                param_1[3] = xVar12;
              }
            }
          }
        }
        return;
      }
    }
    if ((int8)uVar9 < 0x18) {
      pxVar14 = param_1 + 2;
      if (bVar1 == false) {
        if (!(param_1 == param_2 || pxVar14 == param_2)) {
          pxVar10 = param_1 + 3;
          do {
            pxVar15 = pxVar14;
            if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
              xVar12 = param_1[3];
              xVar16 = *pxVar15;
              pxVar14 = pxVar10;
              do {
                pxVar18 = pxVar14;
                pxVar18[-1] = pxVar18[-3];
                *pxVar18 = pxVar18[-2];
                pxVar14 = pxVar18 + -2;
              } while (*(uint4 *)((int8)pxVar18 + -0x1c) < (uint4)((uint8)xVar12 >> 0x20));
              pxVar18[-3] = xVar16;
              pxVar18[-2] = xVar12;
            }
            pxVar10 = pxVar10 + 2;
            pxVar14 = pxVar15 + 2;
            param_1 = pxVar15;
          } while (pxVar15 + 2 != param_2);
          return;
        }
        return;
      }
      if (param_1 == param_2 || pxVar14 == param_2) {
        return;
      }
      iVar21 = 0;
      pxVar10 = param_1;
      break;
    }
    if (iVar21 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar13 = uVar9 - 2 >> 1;
      uVar7 = uVar13;
      goto code_r0x0007c910;
    }
    pxVar14 = param_1 + (uVar9 & 0xfffffffffffffffe);
    if (uVar9 < 0x81) {
      FUN_0007cd00(pxVar14,param_1,pxVar10);
      if (bVar1 == false) goto code_r0x0007c514;
    }
    else {
      FUN_0007cd00(param_1,pxVar14,pxVar10);
      FUN_0007cd00(param_1 + 2,pxVar14 + -2,param_2 + -4);
      FUN_0007cd00(param_1 + 4,pxVar14 + 2,param_2 + -6);
      FUN_0007cd00(pxVar14 + -2,pxVar14,pxVar14 + 2);
      xVar16 = pxVar14[1];
      xVar12 = *param_1;
      xVar22 = param_1[1];
      *param_1 = *pxVar14;
      param_1[1] = xVar16;
      *pxVar14 = xVar12;
      pxVar14[1] = xVar22;
      if (!bVar1) {
code_r0x0007c514:
        if (*(uint4 *)((int8)param_1 - 4) <= *(uint4 *)((int8)param_1 + 0xc)) {
          xVar12 = param_1[1];
          uVar11 = (uint4)((uint8)xVar12 >> 0x20);
          pxVar15 = param_1;
          if (*(uint4 *)((int8)param_2 + -4) < uVar11) {
            pxVar14 = param_1;
            do {
              puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
              pxVar14 = pxVar14 + 2;
            } while (uVar11 <= *puVar2);
          }
          else {
            do {
              pxVar14 = pxVar15 + 2;
              if (param_2 <= pxVar14) break;
              puVar2 = (uint4 *)((int8)pxVar15 + 0x1c);
              pxVar15 = pxVar14;
            } while (uVar11 <= *puVar2);
          }
          pxVar15 = param_2;
          if (pxVar14 < param_2) {
            do {
              puVar2 = (uint4 *)((int8)pxVar15 + -4);
              pxVar15 = pxVar15 + -2;
            } while (*puVar2 < uVar11);
          }
          xVar16 = *param_1;
          while (pxVar14 < pxVar15) {
            xVar22 = *pxVar14;
            *pxVar14 = *pxVar15;
            *pxVar15 = xVar22;
            xVar22 = pxVar14[1];
            pxVar14[1] = pxVar15[1];
            pxVar15[1] = xVar22;
            do {
              puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
              pxVar14 = pxVar14 + 2;
            } while (uVar11 <= *puVar2);
            do {
              puVar2 = (uint4 *)((int8)pxVar15 + -4);
              pxVar15 = pxVar15 + -2;
            } while (*puVar2 < uVar11);
          }
          if (param_1 != pxVar14 + -2) {
            *param_1 = pxVar14[-2];
            param_1[1] = pxVar14[-1];
          }
          bVar1 = false;
          pxVar14[-2] = xVar16;
          pxVar14[-1] = xVar12;
          iVar21 = iVar21 + -1;
          goto code_r0x0007c444;
        }
      }
    }
    iVar21 = iVar21 + -1;
    xVar12 = *param_1;
    xVar16 = param_1[1];
    iVar17 = 0;
    do {
      iVar20 = iVar17 + 0x10;
      iVar6 = iVar17 + 0x1c;
      uVar11 = (uint4)((uint8)xVar16 >> 0x20);
      iVar17 = iVar20;
    } while (uVar11 < *(uint4 *)((int8)param_1 + iVar6));
    pxVar15 = (xunknown8 *)((int8)param_1 + iVar20);
    pxVar18 = param_2;
    if (iVar20 == 0x10) {
      do {
        if (pxVar18 <= pxVar15) break;
        puVar2 = (uint4 *)((int8)pxVar18 + -4);
        pxVar18 = pxVar18 + -2;
      } while (*puVar2 <= uVar11);
    }
    else {
      do {
        puVar2 = (uint4 *)((int8)pxVar18 + -4);
        pxVar18 = pxVar18 + -2;
      } while (*puVar2 <= uVar11);
    }
    pxVar14 = pxVar15;
    if (pxVar15 < pxVar18) {
      pxVar19 = pxVar18;
      do {
        xVar22 = *pxVar14;
        *pxVar14 = *pxVar19;
        *pxVar19 = xVar22;
        xVar22 = pxVar14[1];
        pxVar14[1] = pxVar19[1];
        pxVar19[1] = xVar22;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 < *puVar2);
        do {
          puVar2 = (uint4 *)((int8)pxVar19 + -4);
          pxVar19 = pxVar19 + -2;
        } while (*puVar2 <= uVar11);
      } while (pxVar14 < pxVar19);
    }
    pxVar19 = pxVar14 + -2;
    if (param_1 != pxVar19) {
      *param_1 = pxVar14[-2];
      param_1[1] = pxVar14[-1];
    }
    pxVar14[-2] = xVar12;
    pxVar14[-1] = xVar16;
    if (pxVar15 < pxVar18) goto code_r0x0007c638;
    uVar9 = FUN_0007cde8(param_1,pxVar19);
    uVar7 = FUN_0007cde8(pxVar14,param_2);
    if ((uVar7 & 1) == 0) goto code_r0x0007c634;
    param_2 = pxVar19;
    if ((uVar9 & 1) != 0) {
      return;
    }
  } while( true );
code_r0x0007c898:
  pxVar15 = pxVar14;
  if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)pxVar10 + 0x1c)) {
    xVar12 = pxVar10[3];
    xVar16 = *pxVar15;
    iVar17 = iVar21;
    do {
      iVar20 = iVar17;
      pxVar14 = (xunknown8 *)((int8)param_1 + iVar20);
      pxVar14[2] = *pxVar14;
      pxVar14[3] = pxVar14[1];
      if (iVar20 == 0) {
        pxVar14 = param_1;
        goto code_r0x0007c880;
      }
      iVar17 = iVar20 + -0x10;
    } while (*(uint4 *)((int8)pxVar14 + -4) < (uint4)((uint8)xVar12 >> 0x20));
    pxVar14 = (xunknown8 *)((int8)param_1 + iVar20);
code_r0x0007c880:
    *pxVar14 = xVar16;
    pxVar14[1] = xVar12;
  }
  iVar21 = iVar21 + 0x10;
  pxVar14 = pxVar15 + 2;
  pxVar10 = pxVar15;
  if (pxVar15 + 2 == param_2) {
    return;
  }
  goto code_r0x0007c898;
code_r0x0007c910:
  do {
    if (uVar7 <= uVar13) {
      uVar4 = (uVar7 & 0x3fffffffffffffff) << 1 | 1;
      uVar3 = uVar7 * 2 + 2;
      pxVar14 = param_1 + uVar4 * 2;
      uVar8 = uVar4;
      if ((int8)uVar3 < (int8)uVar9) {
        iVar21 = 0x10;
        uVar8 = uVar3;
        if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
          iVar21 = 0;
          uVar8 = uVar4;
        }
        pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar21);
      }
      pxVar10 = param_1 + uVar7 * 2;
      if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar10 + 0xc)) {
        xVar12 = *pxVar10;
        xVar16 = pxVar10[1];
        do {
          pxVar15 = pxVar14;
          *pxVar10 = *pxVar15;
          pxVar10[1] = pxVar15[1];
          if ((int8)uVar13 < (int8)uVar8) break;
          uVar4 = uVar8 << 1 | 1;
          uVar3 = uVar8 * 2 + 2;
          pxVar14 = param_1 + uVar4 * 2;
          uVar8 = uVar4;
          if ((int8)uVar3 < (int8)uVar9) {
            iVar21 = 0x10;
            uVar8 = uVar3;
            if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
              iVar21 = 0;
              uVar8 = uVar4;
            }
            pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar21);
          }
          pxVar10 = pxVar15;
        } while (*(uint4 *)((int8)pxVar14 + 0xc) <= (uint4)((uint8)xVar16 >> 0x20));
        *pxVar15 = xVar12;
        pxVar15[1] = xVar16;
      }
    }
    bVar1 = 0 < (int8)uVar7;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  do {
    xVar12 = *param_1;
    xVar16 = param_1[1];
    uVar7 = 0;
    pxVar14 = param_1;
    do {
      uVar3 = uVar7 << 1 | 1;
      uVar13 = uVar7 * 2 + 2;
      pxVar10 = pxVar14 + uVar7 * 2 + 2;
      if ((int8)uVar13 < (int8)uVar9) {
        iVar21 = uVar7 * 0x10;
        iVar17 = uVar7 * 0x10;
        iVar20 = uVar7 * 2;
        uVar7 = uVar13;
        pxVar15 = pxVar14 + iVar20 + 4;
        if (*(uint4 *)((int8)pxVar14 + iVar21 + 0x1c) <= *(uint4 *)((int8)pxVar14 + iVar17 + 0x2c))
        {
          uVar7 = uVar3;
          pxVar15 = pxVar10;
        }
        pxVar10 = pxVar15;
      }
      else {
        uVar7 = uVar3;
      }
      *pxVar14 = *pxVar10;
      pxVar14[1] = pxVar10[1];
      pxVar14 = pxVar10;
    } while ((int8)uVar7 <= (int8)(uVar9 - 2 >> 1));
    if (pxVar10 == param_2 + -2) {
      *pxVar10 = xVar12;
      pxVar10[1] = xVar16;
    }
    else {
      *pxVar10 = param_2[-2];
      iVar21 = (int8)pxVar10 + (0x10 - (int8)param_1) >> 4;
      pxVar10[1] = param_2[-1];
      param_2[-2] = xVar12;
      param_2[-1] = xVar16;
      if (1 < iVar21) {
        uVar7 = iVar21 - 2U >> 1;
        if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)(param_1 + uVar7 * 2) + 0xc)) {
          xVar12 = *pxVar10;
          xVar16 = pxVar10[1];
          pxVar14 = param_1 + uVar7 * 2;
          do {
            pxVar15 = pxVar14;
            *pxVar10 = *pxVar15;
            pxVar10[1] = pxVar15[1];
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            pxVar10 = pxVar15;
            pxVar14 = param_1 + uVar7 * 2;
          } while ((uint4)((uint8)xVar16 >> 0x20) < *(uint4 *)((int8)(param_1 + uVar7 * 2) + 0xc));
          *pxVar15 = xVar12;
          pxVar15[1] = xVar16;
        }
      }
    }
    bVar1 = (int8)uVar9 < 3;
    uVar9 = uVar9 - 1;
    param_2 = param_2 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
code_r0x0007c634:
  if ((uVar9 & 1) == 0) {
code_r0x0007c638:
    FUN_0007c408(param_1,pxVar19,iVar21,bVar1);
    bVar1 = false;
  }
  goto code_r0x0007c444;
}

/* 0x7c1bc  size=164 */
void FUN_0007c1bc(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7c260  size=112 */
void FUN_0007c260(void)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = piRam000000000010c298;
  if (uRam000000000010c2a0 != 0) {
    while (piVar1 != (int8 *)0x0) {
      iVar2 = *piVar1;
      operator_delete_plt(piVar1,0x20);
      piVar1 = (int8 *)iVar2;
    }
    piRam000000000010c298 = (int8 *)0x0;
    if (uRam000000000010c290 != 0) {
      memset(iRam000000000010c288,0,uRam000000000010c290 << 3);
    }
    uRam000000000010c2a0 = 0;
  }
  return;
}

/* 0x7c2d0  size=20 */
xunknown8 FUN_0007c2d0(void)

{
  int8 iVar1;
  int8 iVar2;
  xunknown1 axVar3 [16];
  
  axVar3 = FUN_0005eb94(0x371ec /* "vector" */);
  iVar1 = strlen(axVar3._8_8_);
  iVar2 = axVar3._0_8_;
  while( true ) {
    iVar2 = strstr(iVar2,axVar3._8_8_);
    if (iVar2 == 0) {
      return 0;
    }
    if (((iVar2 == axVar3._0_8_) || ((*(uint1 *)(iVar2 + -1) & 0xffffffdf) - 0x5b < 0xffffffe6)) &&
       ((*(uint1 *)(iVar2 + iVar1) & 0xffffffdf) - 0x5b < 0xffffffe6)) break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}

/* 0x7c2e4  size=132 */
xunknown8 FUN_0007c2e4(int8 param_1,xunknown8 param_2)

{
  int8 iVar1;
  int8 iVar2;
  
  iVar1 = strlen(param_2);
  iVar2 = param_1;
  while( true ) {
    iVar2 = strstr(iVar2,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    if (((iVar2 == param_1) || ((*(uint1 *)(iVar2 + -1) & 0xffffffdf) - 0x5b < 0xffffffe6)) &&
       ((*(uint1 *)(iVar2 + iVar1) & 0xffffffdf) - 0x5b < 0xffffffe6)) break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}

/* 0x7c368  size=120 */
bool FUN_0007c368(int8 param_1,xunknown8 param_2)

{
  bool bVar1;
  int8 iVar2;
  
  iVar2 = strstr();
  bVar1 = iVar2 != 0;
  if ((iVar2 != param_1) && (iVar2 != 0)) {
    while (0xffffffe5 < (*(uint1 *)(iVar2 + -1) & 0xffffffdf) - 0x5b) {
      iVar2 = strstr(iVar2 + 1,param_2);
      if (iVar2 == param_1) {
        return iVar2 != 0;
      }
      if (iVar2 == 0) {
        return false;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

/* 0x7c3e0  size=20 */
void FUN_0007c3e0(xunknown8 param_1,xunknown8 param_2,int8 param_3,uint8 param_4)

{
  bool bVar1;
  uint4 *puVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  uint8 uVar7;
  uint8 uVar8;
  uint8 uVar9;
  xunknown8 *pxVar10;
  uint4 uVar11;
  xunknown8 xVar12;
  uint8 uVar13;
  xunknown8 *pxVar14;
  xunknown8 *pxVar15;
  xunknown8 xVar16;
  xunknown8 *pxVar17;
  xunknown8 *pxVar18;
  int8 iVar19;
  int8 iVar20;
  xunknown8 xVar21;
  xunknown8 *pxVar22;
  xunknown8 *pxVar23;
  xunknown1 axVar24 [16];
  
  FUN_0005eb94(0x371ec /* "vector" */);
  axVar24 = FUN_0005eb94(0x371ec /* "vector" */);
  param_4 = param_4 & 0xffffffff;
  do {
    pxVar23 = axVar24._8_8_;
    pxVar10 = pxVar23 + -2;
    pxVar14 = axVar24._0_8_;
code_r0x0007c444:
    while( true ) {
      pxVar22 = pxVar14;
      uVar9 = (int8)pxVar23 - (int8)pxVar22 >> 4;
      if (uVar9 - 2 == 0 || (int8)uVar9 < 2) {
        if (uVar9 < 2) {
          return;
        }
        if (uVar9 == 2) {
          if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar23 + -4)) {
            xVar12 = *pxVar22;
            *pxVar22 = pxVar23[-2];
            pxVar23[-2] = xVar12;
            xVar12 = pxVar22[1];
            pxVar22[1] = pxVar23[-1];
            pxVar23[-1] = xVar12;
            return;
          }
          return;
        }
      }
      else {
        if (uVar9 == 3) {
          pxVar14 = pxVar22 + 2;
          uVar11 = *(uint4 *)((int8)pxVar22 + 0x1c);
          if (*(uint4 *)((int8)pxVar22 + 0xc) < uVar11) {
            xVar12 = *pxVar22;
            if (uVar11 < *(uint4 *)((int8)pxVar23 + -4)) {
              *pxVar22 = *pxVar10;
              *pxVar10 = xVar12;
              xVar12 = pxVar22[1];
              pxVar22[1] = pxVar23[-1];
            }
            else {
              *pxVar22 = *pxVar14;
              *pxVar14 = xVar12;
              xVar12 = pxVar22[1];
              pxVar22[1] = pxVar22[3];
              pxVar22[3] = xVar12;
              if (*(uint4 *)((int8)pxVar23 + -4) <= (uint4)((uint8)xVar12 >> 0x20)) {
                return;
              }
              xVar12 = *pxVar14;
              *pxVar14 = *pxVar10;
              *pxVar10 = xVar12;
              xVar12 = pxVar22[3];
              pxVar22[3] = pxVar23[-1];
            }
            pxVar23[-1] = xVar12;
          }
          else if (uVar11 < *(uint4 *)((int8)pxVar23 + -4)) {
            xVar12 = *pxVar14;
            *pxVar14 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = pxVar22[3];
            pxVar22[3] = pxVar23[-1];
            pxVar23[-1] = xVar12;
            if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
              xVar12 = *pxVar22;
              *pxVar22 = *pxVar14;
              *pxVar14 = xVar12;
              xVar12 = pxVar22[1];
              pxVar22[1] = pxVar22[3];
              pxVar22[3] = xVar12;
              return;
            }
          }
          return;
        }
        if (uVar9 == 4) {
          FUN_0007cd00(pxVar22,pxVar22 + 2,pxVar22 + 4);
          if (*(uint4 *)((int8)pxVar23 + -4) <= *(uint4 *)((int8)pxVar22 + 0x2c)) {
            return;
          }
          xVar12 = pxVar22[4];
          pxVar22[4] = pxVar23[-2];
          pxVar23[-2] = xVar12;
          xVar12 = pxVar22[5];
          pxVar22[5] = pxVar23[-1];
          pxVar23[-1] = xVar12;
          if (*(uint4 *)((int8)pxVar22 + 0x2c) <= *(uint4 *)((int8)pxVar22 + 0x1c)) {
            return;
          }
          xVar12 = pxVar22[4];
          xVar21 = pxVar22[5];
          xVar16 = pxVar22[2];
          xVar6 = pxVar22[3];
          pxVar22[2] = xVar12;
          pxVar22[3] = xVar21;
          pxVar22[4] = xVar16;
          pxVar22[5] = xVar6;
          if (*(uint4 *)((int8)pxVar22 + 0xc) < (uint4)((uint8)xVar21 >> 0x20)) {
            xVar16 = *pxVar22;
            xVar6 = pxVar22[1];
            *pxVar22 = xVar12;
            pxVar22[1] = xVar21;
            pxVar22[2] = xVar16;
            pxVar22[3] = xVar6;
            return;
          }
          return;
        }
        if (uVar9 == 5) {
          pxVar14 = pxVar22 + 2;
          pxVar15 = pxVar22 + 4;
          pxVar17 = pxVar22 + 6;
          FUN_0007cd00();
          if (*(uint4 *)((int8)pxVar22 + 0x2c) < *(uint4 *)((int8)pxVar22 + 0x3c)) {
            xVar12 = *pxVar15;
            *pxVar15 = *pxVar17;
            *pxVar17 = xVar12;
            xVar12 = pxVar22[5];
            pxVar22[5] = pxVar22[7];
            pxVar22[7] = xVar12;
            if (*(uint4 *)((int8)pxVar22 + 0x1c) < *(uint4 *)((int8)pxVar22 + 0x2c)) {
              xVar12 = *pxVar14;
              *pxVar14 = *pxVar15;
              *pxVar15 = xVar12;
              xVar12 = pxVar22[3];
              pxVar22[3] = pxVar22[5];
              pxVar22[5] = xVar12;
              if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
                xVar12 = *pxVar22;
                *pxVar22 = *pxVar14;
                *pxVar14 = xVar12;
                xVar12 = pxVar22[1];
                pxVar22[1] = pxVar22[3];
                pxVar22[3] = xVar12;
              }
            }
          }
          if (*(uint4 *)((int8)pxVar22 + 0x3c) < *(uint4 *)((int8)pxVar23 + -4)) {
            xVar12 = *pxVar17;
            *pxVar17 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = pxVar22[7];
            pxVar22[7] = pxVar23[-1];
            pxVar23[-1] = xVar12;
            if (*(uint4 *)((int8)pxVar22 + 0x2c) < *(uint4 *)((int8)pxVar22 + 0x3c)) {
              xVar12 = *pxVar15;
              *pxVar15 = *pxVar17;
              *pxVar17 = xVar12;
              xVar12 = pxVar22[5];
              pxVar22[5] = pxVar22[7];
              pxVar22[7] = xVar12;
              if (*(uint4 *)((int8)pxVar22 + 0x1c) < *(uint4 *)((int8)pxVar22 + 0x2c)) {
                xVar12 = *pxVar14;
                *pxVar14 = *pxVar15;
                *pxVar15 = xVar12;
                xVar12 = pxVar22[3];
                pxVar22[3] = pxVar22[5];
                pxVar22[5] = xVar12;
                if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
                  xVar12 = *pxVar22;
                  *pxVar22 = *pxVar14;
                  *pxVar14 = xVar12;
                  xVar12 = pxVar22[1];
                  pxVar22[1] = pxVar22[3];
                  pxVar22[3] = xVar12;
                }
              }
            }
          }
          return;
        }
      }
      if ((int8)uVar9 < 0x18) {
        pxVar14 = pxVar22 + 2;
        if ((param_4 & 1) == 0) {
          if (!(pxVar22 == pxVar23 || pxVar14 == pxVar23)) {
            pxVar10 = pxVar22 + 3;
            do {
              pxVar15 = pxVar14;
              if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
                xVar12 = pxVar22[3];
                xVar16 = *pxVar15;
                pxVar14 = pxVar10;
                do {
                  pxVar22 = pxVar14;
                  pxVar22[-1] = pxVar22[-3];
                  *pxVar22 = pxVar22[-2];
                  pxVar14 = pxVar22 + -2;
                } while (*(uint4 *)((int8)pxVar22 + -0x1c) < (uint4)((uint8)xVar12 >> 0x20));
                pxVar22[-3] = xVar16;
                pxVar22[-2] = xVar12;
              }
              pxVar10 = pxVar10 + 2;
              pxVar14 = pxVar15 + 2;
              pxVar22 = pxVar15;
            } while (pxVar15 + 2 != pxVar23);
            return;
          }
          return;
        }
        if (pxVar22 == pxVar23 || pxVar14 == pxVar23) {
          return;
        }
        iVar20 = 0;
        pxVar10 = pxVar22;
        goto code_r0x0007c898;
      }
      if (param_3 == 0) {
        if (pxVar22 == pxVar23) {
          return;
        }
        uVar13 = uVar9 - 2 >> 1;
        uVar7 = uVar13;
        goto code_r0x0007c910;
      }
      pxVar14 = pxVar22 + (uVar9 & 0xfffffffffffffffe);
      if (uVar9 < 0x81) {
        FUN_0007cd00(pxVar14,pxVar22,pxVar10);
      }
      else {
        FUN_0007cd00(pxVar22,pxVar14,pxVar10);
        FUN_0007cd00(pxVar22 + 2,pxVar14 + -2,pxVar23 + -4);
        FUN_0007cd00(pxVar22 + 4,pxVar14 + 2,pxVar23 + -6);
        FUN_0007cd00(pxVar14 + -2,pxVar14,pxVar14 + 2);
        xVar16 = pxVar14[1];
        xVar12 = *pxVar22;
        xVar21 = pxVar22[1];
        *pxVar22 = *pxVar14;
        pxVar22[1] = xVar16;
        *pxVar14 = xVar12;
        pxVar14[1] = xVar21;
      }
      if (((param_4 & 1) != 0) || (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 - 4)))
      break;
      xVar12 = pxVar22[1];
      uVar11 = (uint4)((uint8)xVar12 >> 0x20);
      pxVar15 = pxVar22;
      if (*(uint4 *)((int8)pxVar23 + -4) < uVar11) {
        pxVar14 = pxVar22;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 <= *puVar2);
      }
      else {
        do {
          pxVar14 = pxVar15 + 2;
          if (pxVar23 <= pxVar14) break;
          puVar2 = (uint4 *)((int8)pxVar15 + 0x1c);
          pxVar15 = pxVar14;
        } while (uVar11 <= *puVar2);
      }
      pxVar15 = pxVar23;
      if (pxVar14 < pxVar23) {
        do {
          puVar2 = (uint4 *)((int8)pxVar15 + -4);
          pxVar15 = pxVar15 + -2;
        } while (*puVar2 < uVar11);
      }
      xVar16 = *pxVar22;
      while (pxVar14 < pxVar15) {
        xVar21 = *pxVar14;
        *pxVar14 = *pxVar15;
        *pxVar15 = xVar21;
        xVar21 = pxVar14[1];
        pxVar14[1] = pxVar15[1];
        pxVar15[1] = xVar21;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 <= *puVar2);
        do {
          puVar2 = (uint4 *)((int8)pxVar15 + -4);
          pxVar15 = pxVar15 + -2;
        } while (*puVar2 < uVar11);
      }
      if (pxVar22 != pxVar14 + -2) {
        *pxVar22 = pxVar14[-2];
        pxVar22[1] = pxVar14[-1];
      }
      param_4 = 0;
      pxVar14[-2] = xVar16;
      pxVar14[-1] = xVar12;
      param_3 = param_3 + -1;
    }
    param_3 = param_3 + -1;
    xVar12 = *pxVar22;
    xVar16 = pxVar22[1];
    iVar20 = 0;
    do {
      iVar3 = iVar20 + 0x10;
      iVar19 = iVar20 + 0x1c;
      uVar11 = (uint4)((uint8)xVar16 >> 0x20);
      iVar20 = iVar3;
    } while (uVar11 < *(uint4 *)((int8)pxVar22 + iVar19));
    pxVar15 = (xunknown8 *)((int8)pxVar22 + iVar3);
    pxVar17 = pxVar23;
    if (iVar3 == 0x10) {
      do {
        if (pxVar17 <= pxVar15) break;
        puVar2 = (uint4 *)((int8)pxVar17 + -4);
        pxVar17 = pxVar17 + -2;
      } while (*puVar2 <= uVar11);
    }
    else {
      do {
        puVar2 = (uint4 *)((int8)pxVar17 + -4);
        pxVar17 = pxVar17 + -2;
      } while (*puVar2 <= uVar11);
    }
    pxVar14 = pxVar15;
    if (pxVar15 < pxVar17) {
      pxVar18 = pxVar17;
      do {
        xVar21 = *pxVar14;
        *pxVar14 = *pxVar18;
        *pxVar18 = xVar21;
        xVar21 = pxVar14[1];
        pxVar14[1] = pxVar18[1];
        pxVar18[1] = xVar21;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 < *puVar2);
        do {
          puVar2 = (uint4 *)((int8)pxVar18 + -4);
          pxVar18 = pxVar18 + -2;
        } while (*puVar2 <= uVar11);
      } while (pxVar14 < pxVar18);
    }
    pxVar18 = pxVar14 + -2;
    axVar24._8_8_ = pxVar18;
    axVar24._0_8_ = pxVar22;
    if (pxVar22 != pxVar18) {
      *pxVar22 = pxVar14[-2];
      pxVar22[1] = pxVar14[-1];
    }
    pxVar14[-2] = xVar12;
    pxVar14[-1] = xVar16;
    if (pxVar15 < pxVar17) goto code_r0x0007c638;
    uVar9 = FUN_0007cde8(pxVar22,pxVar18);
    uVar7 = FUN_0007cde8(pxVar14,pxVar23);
    if ((uVar7 & 1) == 0) goto code_r0x0007c634;
    if ((uVar9 & 1) != 0) {
      return;
    }
  } while( true );
code_r0x0007c898:
  pxVar15 = pxVar14;
  if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)pxVar10 + 0x1c)) {
    xVar12 = pxVar10[3];
    xVar16 = *pxVar15;
    iVar3 = iVar20;
    do {
      iVar19 = iVar3;
      pxVar14 = (xunknown8 *)((int8)pxVar22 + iVar19);
      pxVar14[2] = *pxVar14;
      pxVar14[3] = pxVar14[1];
      if (iVar19 == 0) {
        pxVar14 = pxVar22;
        goto code_r0x0007c880;
      }
      iVar3 = iVar19 + -0x10;
    } while (*(uint4 *)((int8)pxVar14 + -4) < (uint4)((uint8)xVar12 >> 0x20));
    pxVar14 = (xunknown8 *)((int8)pxVar22 + iVar19);
code_r0x0007c880:
    *pxVar14 = xVar16;
    pxVar14[1] = xVar12;
  }
  iVar20 = iVar20 + 0x10;
  pxVar14 = pxVar15 + 2;
  pxVar10 = pxVar15;
  if (pxVar15 + 2 == pxVar23) {
    return;
  }
  goto code_r0x0007c898;
code_r0x0007c910:
  do {
    if (uVar7 <= uVar13) {
      uVar5 = (uVar7 & 0x3fffffffffffffff) << 1 | 1;
      uVar4 = uVar7 * 2 + 2;
      pxVar14 = pxVar22 + uVar5 * 2;
      uVar8 = uVar5;
      if ((int8)uVar4 < (int8)uVar9) {
        iVar20 = 0x10;
        uVar8 = uVar4;
        if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
          iVar20 = 0;
          uVar8 = uVar5;
        }
        pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar20);
      }
      pxVar10 = pxVar22 + uVar7 * 2;
      if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar10 + 0xc)) {
        xVar12 = *pxVar10;
        xVar16 = pxVar10[1];
        do {
          pxVar15 = pxVar14;
          *pxVar10 = *pxVar15;
          pxVar10[1] = pxVar15[1];
          if ((int8)uVar13 < (int8)uVar8) break;
          uVar5 = uVar8 << 1 | 1;
          uVar4 = uVar8 * 2 + 2;
          pxVar14 = pxVar22 + uVar5 * 2;
          uVar8 = uVar5;
          if ((int8)uVar4 < (int8)uVar9) {
            iVar20 = 0x10;
            uVar8 = uVar4;
            if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
              iVar20 = 0;
              uVar8 = uVar5;
            }
            pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar20);
          }
          pxVar10 = pxVar15;
        } while (*(uint4 *)((int8)pxVar14 + 0xc) <= (uint4)((uint8)xVar16 >> 0x20));
        *pxVar15 = xVar12;
        pxVar15[1] = xVar16;
      }
    }
    bVar1 = 0 < (int8)uVar7;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  do {
    xVar12 = *pxVar22;
    xVar16 = pxVar22[1];
    uVar7 = 0;
    pxVar14 = pxVar22;
    do {
      uVar4 = uVar7 << 1 | 1;
      uVar13 = uVar7 * 2 + 2;
      pxVar10 = pxVar14 + uVar7 * 2 + 2;
      if ((int8)uVar13 < (int8)uVar9) {
        iVar20 = uVar7 * 0x10;
        iVar3 = uVar7 * 0x10;
        iVar19 = uVar7 * 2;
        uVar7 = uVar13;
        pxVar15 = pxVar14 + iVar19 + 4;
        if (*(uint4 *)((int8)pxVar14 + iVar20 + 0x1c) <= *(uint4 *)((int8)pxVar14 + iVar3 + 0x2c)) {
          uVar7 = uVar4;
          pxVar15 = pxVar10;
        }
        pxVar10 = pxVar15;
      }
      else {
        uVar7 = uVar4;
      }
      *pxVar14 = *pxVar10;
      pxVar14[1] = pxVar10[1];
      pxVar14 = pxVar10;
    } while ((int8)uVar7 <= (int8)(uVar9 - 2 >> 1));
    if (pxVar10 == pxVar23 + -2) {
      *pxVar10 = xVar12;
      pxVar10[1] = xVar16;
    }
    else {
      *pxVar10 = pxVar23[-2];
      iVar20 = (int8)pxVar10 + (0x10 - (int8)pxVar22) >> 4;
      pxVar10[1] = pxVar23[-1];
      pxVar23[-2] = xVar12;
      pxVar23[-1] = xVar16;
      if (1 < iVar20) {
        uVar7 = iVar20 - 2U >> 1;
        if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)(pxVar22 + uVar7 * 2) + 0xc)) {
          xVar12 = *pxVar10;
          xVar16 = pxVar10[1];
          pxVar14 = pxVar22 + uVar7 * 2;
          do {
            pxVar15 = pxVar14;
            *pxVar10 = *pxVar15;
            pxVar10[1] = pxVar15[1];
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            pxVar10 = pxVar15;
            pxVar14 = pxVar22 + uVar7 * 2;
          } while ((uint4)((uint8)xVar16 >> 0x20) < *(uint4 *)((int8)(pxVar22 + uVar7 * 2) + 0xc));
          *pxVar15 = xVar12;
          pxVar15[1] = xVar16;
        }
      }
    }
    bVar1 = (int8)uVar9 < 3;
    uVar9 = uVar9 - 1;
    pxVar23 = pxVar23 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
code_r0x0007c634:
  if ((uVar9 & 1) == 0) {
code_r0x0007c638:
    FUN_0007c408(pxVar22,pxVar18,param_3,(uint4)param_4 & 1);
    param_4 = 0;
  }
  goto code_r0x0007c444;
}

/* 0x7c3f4  size=20 */
void FUN_0007c3f4(xunknown8 param_1,xunknown8 param_2,int8 param_3,uint8 param_4)

{
  bool bVar1;
  uint4 *puVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  uint8 uVar7;
  uint8 uVar8;
  uint8 uVar9;
  xunknown8 *pxVar10;
  uint4 uVar11;
  xunknown8 xVar12;
  uint8 uVar13;
  xunknown8 *pxVar14;
  xunknown8 *pxVar15;
  xunknown8 xVar16;
  xunknown8 *pxVar17;
  xunknown8 *pxVar18;
  int8 iVar19;
  int8 iVar20;
  xunknown8 xVar21;
  xunknown8 *pxVar22;
  xunknown8 *pxVar23;
  xunknown1 axVar24 [16];
  
  axVar24 = FUN_0005eb94(0x371ec /* "vector" */);
  param_4 = param_4 & 0xffffffff;
  do {
    pxVar23 = axVar24._8_8_;
    pxVar10 = pxVar23 + -2;
    pxVar14 = axVar24._0_8_;
code_r0x0007c444:
    while( true ) {
      pxVar22 = pxVar14;
      uVar9 = (int8)pxVar23 - (int8)pxVar22 >> 4;
      if (uVar9 - 2 == 0 || (int8)uVar9 < 2) {
        if (uVar9 < 2) {
          return;
        }
        if (uVar9 == 2) {
          if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar23 + -4)) {
            xVar12 = *pxVar22;
            *pxVar22 = pxVar23[-2];
            pxVar23[-2] = xVar12;
            xVar12 = pxVar22[1];
            pxVar22[1] = pxVar23[-1];
            pxVar23[-1] = xVar12;
            return;
          }
          return;
        }
      }
      else {
        if (uVar9 == 3) {
          pxVar14 = pxVar22 + 2;
          uVar11 = *(uint4 *)((int8)pxVar22 + 0x1c);
          if (*(uint4 *)((int8)pxVar22 + 0xc) < uVar11) {
            xVar12 = *pxVar22;
            if (uVar11 < *(uint4 *)((int8)pxVar23 + -4)) {
              *pxVar22 = *pxVar10;
              *pxVar10 = xVar12;
              xVar12 = pxVar22[1];
              pxVar22[1] = pxVar23[-1];
            }
            else {
              *pxVar22 = *pxVar14;
              *pxVar14 = xVar12;
              xVar12 = pxVar22[1];
              pxVar22[1] = pxVar22[3];
              pxVar22[3] = xVar12;
              if (*(uint4 *)((int8)pxVar23 + -4) <= (uint4)((uint8)xVar12 >> 0x20)) {
                return;
              }
              xVar12 = *pxVar14;
              *pxVar14 = *pxVar10;
              *pxVar10 = xVar12;
              xVar12 = pxVar22[3];
              pxVar22[3] = pxVar23[-1];
            }
            pxVar23[-1] = xVar12;
          }
          else if (uVar11 < *(uint4 *)((int8)pxVar23 + -4)) {
            xVar12 = *pxVar14;
            *pxVar14 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = pxVar22[3];
            pxVar22[3] = pxVar23[-1];
            pxVar23[-1] = xVar12;
            if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
              xVar12 = *pxVar22;
              *pxVar22 = *pxVar14;
              *pxVar14 = xVar12;
              xVar12 = pxVar22[1];
              pxVar22[1] = pxVar22[3];
              pxVar22[3] = xVar12;
              return;
            }
          }
          return;
        }
        if (uVar9 == 4) {
          FUN_0007cd00(pxVar22,pxVar22 + 2,pxVar22 + 4);
          if (*(uint4 *)((int8)pxVar23 + -4) <= *(uint4 *)((int8)pxVar22 + 0x2c)) {
            return;
          }
          xVar12 = pxVar22[4];
          pxVar22[4] = pxVar23[-2];
          pxVar23[-2] = xVar12;
          xVar12 = pxVar22[5];
          pxVar22[5] = pxVar23[-1];
          pxVar23[-1] = xVar12;
          if (*(uint4 *)((int8)pxVar22 + 0x2c) <= *(uint4 *)((int8)pxVar22 + 0x1c)) {
            return;
          }
          xVar12 = pxVar22[4];
          xVar21 = pxVar22[5];
          xVar16 = pxVar22[2];
          xVar6 = pxVar22[3];
          pxVar22[2] = xVar12;
          pxVar22[3] = xVar21;
          pxVar22[4] = xVar16;
          pxVar22[5] = xVar6;
          if (*(uint4 *)((int8)pxVar22 + 0xc) < (uint4)((uint8)xVar21 >> 0x20)) {
            xVar16 = *pxVar22;
            xVar6 = pxVar22[1];
            *pxVar22 = xVar12;
            pxVar22[1] = xVar21;
            pxVar22[2] = xVar16;
            pxVar22[3] = xVar6;
            return;
          }
          return;
        }
        if (uVar9 == 5) {
          pxVar14 = pxVar22 + 2;
          pxVar15 = pxVar22 + 4;
          pxVar17 = pxVar22 + 6;
          FUN_0007cd00();
          if (*(uint4 *)((int8)pxVar22 + 0x2c) < *(uint4 *)((int8)pxVar22 + 0x3c)) {
            xVar12 = *pxVar15;
            *pxVar15 = *pxVar17;
            *pxVar17 = xVar12;
            xVar12 = pxVar22[5];
            pxVar22[5] = pxVar22[7];
            pxVar22[7] = xVar12;
            if (*(uint4 *)((int8)pxVar22 + 0x1c) < *(uint4 *)((int8)pxVar22 + 0x2c)) {
              xVar12 = *pxVar14;
              *pxVar14 = *pxVar15;
              *pxVar15 = xVar12;
              xVar12 = pxVar22[3];
              pxVar22[3] = pxVar22[5];
              pxVar22[5] = xVar12;
              if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
                xVar12 = *pxVar22;
                *pxVar22 = *pxVar14;
                *pxVar14 = xVar12;
                xVar12 = pxVar22[1];
                pxVar22[1] = pxVar22[3];
                pxVar22[3] = xVar12;
              }
            }
          }
          if (*(uint4 *)((int8)pxVar22 + 0x3c) < *(uint4 *)((int8)pxVar23 + -4)) {
            xVar12 = *pxVar17;
            *pxVar17 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = pxVar22[7];
            pxVar22[7] = pxVar23[-1];
            pxVar23[-1] = xVar12;
            if (*(uint4 *)((int8)pxVar22 + 0x2c) < *(uint4 *)((int8)pxVar22 + 0x3c)) {
              xVar12 = *pxVar15;
              *pxVar15 = *pxVar17;
              *pxVar17 = xVar12;
              xVar12 = pxVar22[5];
              pxVar22[5] = pxVar22[7];
              pxVar22[7] = xVar12;
              if (*(uint4 *)((int8)pxVar22 + 0x1c) < *(uint4 *)((int8)pxVar22 + 0x2c)) {
                xVar12 = *pxVar14;
                *pxVar14 = *pxVar15;
                *pxVar15 = xVar12;
                xVar12 = pxVar22[3];
                pxVar22[3] = pxVar22[5];
                pxVar22[5] = xVar12;
                if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
                  xVar12 = *pxVar22;
                  *pxVar22 = *pxVar14;
                  *pxVar14 = xVar12;
                  xVar12 = pxVar22[1];
                  pxVar22[1] = pxVar22[3];
                  pxVar22[3] = xVar12;
                }
              }
            }
          }
          return;
        }
      }
      if ((int8)uVar9 < 0x18) {
        pxVar14 = pxVar22 + 2;
        if ((param_4 & 1) == 0) {
          if (!(pxVar22 == pxVar23 || pxVar14 == pxVar23)) {
            pxVar10 = pxVar22 + 3;
            do {
              pxVar15 = pxVar14;
              if (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 + 0x1c)) {
                xVar12 = pxVar22[3];
                xVar16 = *pxVar15;
                pxVar14 = pxVar10;
                do {
                  pxVar22 = pxVar14;
                  pxVar22[-1] = pxVar22[-3];
                  *pxVar22 = pxVar22[-2];
                  pxVar14 = pxVar22 + -2;
                } while (*(uint4 *)((int8)pxVar22 + -0x1c) < (uint4)((uint8)xVar12 >> 0x20));
                pxVar22[-3] = xVar16;
                pxVar22[-2] = xVar12;
              }
              pxVar10 = pxVar10 + 2;
              pxVar14 = pxVar15 + 2;
              pxVar22 = pxVar15;
            } while (pxVar15 + 2 != pxVar23);
            return;
          }
          return;
        }
        if (pxVar22 == pxVar23 || pxVar14 == pxVar23) {
          return;
        }
        iVar20 = 0;
        pxVar10 = pxVar22;
        goto code_r0x0007c898;
      }
      if (param_3 == 0) {
        if (pxVar22 == pxVar23) {
          return;
        }
        uVar13 = uVar9 - 2 >> 1;
        uVar7 = uVar13;
        goto code_r0x0007c910;
      }
      pxVar14 = pxVar22 + (uVar9 & 0xfffffffffffffffe);
      if (uVar9 < 0x81) {
        FUN_0007cd00(pxVar14,pxVar22,pxVar10);
      }
      else {
        FUN_0007cd00(pxVar22,pxVar14,pxVar10);
        FUN_0007cd00(pxVar22 + 2,pxVar14 + -2,pxVar23 + -4);
        FUN_0007cd00(pxVar22 + 4,pxVar14 + 2,pxVar23 + -6);
        FUN_0007cd00(pxVar14 + -2,pxVar14,pxVar14 + 2);
        xVar16 = pxVar14[1];
        xVar12 = *pxVar22;
        xVar21 = pxVar22[1];
        *pxVar22 = *pxVar14;
        pxVar22[1] = xVar16;
        *pxVar14 = xVar12;
        pxVar14[1] = xVar21;
      }
      if (((param_4 & 1) != 0) || (*(uint4 *)((int8)pxVar22 + 0xc) < *(uint4 *)((int8)pxVar22 - 4)))
      break;
      xVar12 = pxVar22[1];
      uVar11 = (uint4)((uint8)xVar12 >> 0x20);
      pxVar15 = pxVar22;
      if (*(uint4 *)((int8)pxVar23 + -4) < uVar11) {
        pxVar14 = pxVar22;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 <= *puVar2);
      }
      else {
        do {
          pxVar14 = pxVar15 + 2;
          if (pxVar23 <= pxVar14) break;
          puVar2 = (uint4 *)((int8)pxVar15 + 0x1c);
          pxVar15 = pxVar14;
        } while (uVar11 <= *puVar2);
      }
      pxVar15 = pxVar23;
      if (pxVar14 < pxVar23) {
        do {
          puVar2 = (uint4 *)((int8)pxVar15 + -4);
          pxVar15 = pxVar15 + -2;
        } while (*puVar2 < uVar11);
      }
      xVar16 = *pxVar22;
      while (pxVar14 < pxVar15) {
        xVar21 = *pxVar14;
        *pxVar14 = *pxVar15;
        *pxVar15 = xVar21;
        xVar21 = pxVar14[1];
        pxVar14[1] = pxVar15[1];
        pxVar15[1] = xVar21;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 <= *puVar2);
        do {
          puVar2 = (uint4 *)((int8)pxVar15 + -4);
          pxVar15 = pxVar15 + -2;
        } while (*puVar2 < uVar11);
      }
      if (pxVar22 != pxVar14 + -2) {
        *pxVar22 = pxVar14[-2];
        pxVar22[1] = pxVar14[-1];
      }
      param_4 = 0;
      pxVar14[-2] = xVar16;
      pxVar14[-1] = xVar12;
      param_3 = param_3 + -1;
    }
    param_3 = param_3 + -1;
    xVar12 = *pxVar22;
    xVar16 = pxVar22[1];
    iVar20 = 0;
    do {
      iVar3 = iVar20 + 0x10;
      iVar19 = iVar20 + 0x1c;
      uVar11 = (uint4)((uint8)xVar16 >> 0x20);
      iVar20 = iVar3;
    } while (uVar11 < *(uint4 *)((int8)pxVar22 + iVar19));
    pxVar15 = (xunknown8 *)((int8)pxVar22 + iVar3);
    pxVar17 = pxVar23;
    if (iVar3 == 0x10) {
      do {
        if (pxVar17 <= pxVar15) break;
        puVar2 = (uint4 *)((int8)pxVar17 + -4);
        pxVar17 = pxVar17 + -2;
      } while (*puVar2 <= uVar11);
    }
    else {
      do {
        puVar2 = (uint4 *)((int8)pxVar17 + -4);
        pxVar17 = pxVar17 + -2;
      } while (*puVar2 <= uVar11);
    }
    pxVar14 = pxVar15;
    if (pxVar15 < pxVar17) {
      pxVar18 = pxVar17;
      do {
        xVar21 = *pxVar14;
        *pxVar14 = *pxVar18;
        *pxVar18 = xVar21;
        xVar21 = pxVar14[1];
        pxVar14[1] = pxVar18[1];
        pxVar18[1] = xVar21;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 < *puVar2);
        do {
          puVar2 = (uint4 *)((int8)pxVar18 + -4);
          pxVar18 = pxVar18 + -2;
        } while (*puVar2 <= uVar11);
      } while (pxVar14 < pxVar18);
    }
    pxVar18 = pxVar14 + -2;
    axVar24._8_8_ = pxVar18;
    axVar24._0_8_ = pxVar22;
    if (pxVar22 != pxVar18) {
      *pxVar22 = pxVar14[-2];
      pxVar22[1] = pxVar14[-1];
    }
    pxVar14[-2] = xVar12;
    pxVar14[-1] = xVar16;
    if (pxVar15 < pxVar17) goto code_r0x0007c638;
    uVar9 = FUN_0007cde8(pxVar22,pxVar18);
    uVar7 = FUN_0007cde8(pxVar14,pxVar23);
    if ((uVar7 & 1) == 0) goto code_r0x0007c634;
    if ((uVar9 & 1) != 0) {
      return;
    }
  } while( true );
code_r0x0007c898:
  pxVar15 = pxVar14;
  if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)pxVar10 + 0x1c)) {
    xVar12 = pxVar10[3];
    xVar16 = *pxVar15;
    iVar3 = iVar20;
    do {
      iVar19 = iVar3;
      pxVar14 = (xunknown8 *)((int8)pxVar22 + iVar19);
      pxVar14[2] = *pxVar14;
      pxVar14[3] = pxVar14[1];
      if (iVar19 == 0) {
        pxVar14 = pxVar22;
        goto code_r0x0007c880;
      }
      iVar3 = iVar19 + -0x10;
    } while (*(uint4 *)((int8)pxVar14 + -4) < (uint4)((uint8)xVar12 >> 0x20));
    pxVar14 = (xunknown8 *)((int8)pxVar22 + iVar19);
code_r0x0007c880:
    *pxVar14 = xVar16;
    pxVar14[1] = xVar12;
  }
  iVar20 = iVar20 + 0x10;
  pxVar14 = pxVar15 + 2;
  pxVar10 = pxVar15;
  if (pxVar15 + 2 == pxVar23) {
    return;
  }
  goto code_r0x0007c898;
code_r0x0007c910:
  do {
    if (uVar7 <= uVar13) {
      uVar5 = (uVar7 & 0x3fffffffffffffff) << 1 | 1;
      uVar4 = uVar7 * 2 + 2;
      pxVar14 = pxVar22 + uVar5 * 2;
      uVar8 = uVar5;
      if ((int8)uVar4 < (int8)uVar9) {
        iVar20 = 0x10;
        uVar8 = uVar4;
        if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
          iVar20 = 0;
          uVar8 = uVar5;
        }
        pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar20);
      }
      pxVar10 = pxVar22 + uVar7 * 2;
      if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar10 + 0xc)) {
        xVar12 = *pxVar10;
        xVar16 = pxVar10[1];
        do {
          pxVar15 = pxVar14;
          *pxVar10 = *pxVar15;
          pxVar10[1] = pxVar15[1];
          if ((int8)uVar13 < (int8)uVar8) break;
          uVar5 = uVar8 << 1 | 1;
          uVar4 = uVar8 * 2 + 2;
          pxVar14 = pxVar22 + uVar5 * 2;
          uVar8 = uVar5;
          if ((int8)uVar4 < (int8)uVar9) {
            iVar20 = 0x10;
            uVar8 = uVar4;
            if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
              iVar20 = 0;
              uVar8 = uVar5;
            }
            pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar20);
          }
          pxVar10 = pxVar15;
        } while (*(uint4 *)((int8)pxVar14 + 0xc) <= (uint4)((uint8)xVar16 >> 0x20));
        *pxVar15 = xVar12;
        pxVar15[1] = xVar16;
      }
    }
    bVar1 = 0 < (int8)uVar7;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  do {
    xVar12 = *pxVar22;
    xVar16 = pxVar22[1];
    uVar7 = 0;
    pxVar14 = pxVar22;
    do {
      uVar4 = uVar7 << 1 | 1;
      uVar13 = uVar7 * 2 + 2;
      pxVar10 = pxVar14 + uVar7 * 2 + 2;
      if ((int8)uVar13 < (int8)uVar9) {
        iVar20 = uVar7 * 0x10;
        iVar3 = uVar7 * 0x10;
        iVar19 = uVar7 * 2;
        uVar7 = uVar13;
        pxVar15 = pxVar14 + iVar19 + 4;
        if (*(uint4 *)((int8)pxVar14 + iVar20 + 0x1c) <= *(uint4 *)((int8)pxVar14 + iVar3 + 0x2c)) {
          uVar7 = uVar4;
          pxVar15 = pxVar10;
        }
        pxVar10 = pxVar15;
      }
      else {
        uVar7 = uVar4;
      }
      *pxVar14 = *pxVar10;
      pxVar14[1] = pxVar10[1];
      pxVar14 = pxVar10;
    } while ((int8)uVar7 <= (int8)(uVar9 - 2 >> 1));
    if (pxVar10 == pxVar23 + -2) {
      *pxVar10 = xVar12;
      pxVar10[1] = xVar16;
    }
    else {
      *pxVar10 = pxVar23[-2];
      iVar20 = (int8)pxVar10 + (0x10 - (int8)pxVar22) >> 4;
      pxVar10[1] = pxVar23[-1];
      pxVar23[-2] = xVar12;
      pxVar23[-1] = xVar16;
      if (1 < iVar20) {
        uVar7 = iVar20 - 2U >> 1;
        if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)(pxVar22 + uVar7 * 2) + 0xc)) {
          xVar12 = *pxVar10;
          xVar16 = pxVar10[1];
          pxVar14 = pxVar22 + uVar7 * 2;
          do {
            pxVar15 = pxVar14;
            *pxVar10 = *pxVar15;
            pxVar10[1] = pxVar15[1];
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            pxVar10 = pxVar15;
            pxVar14 = pxVar22 + uVar7 * 2;
          } while ((uint4)((uint8)xVar16 >> 0x20) < *(uint4 *)((int8)(pxVar22 + uVar7 * 2) + 0xc));
          *pxVar15 = xVar12;
          pxVar15[1] = xVar16;
        }
      }
    }
    bVar1 = (int8)uVar9 < 3;
    uVar9 = uVar9 - 1;
    pxVar23 = pxVar23 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
code_r0x0007c634:
  if ((uVar9 & 1) == 0) {
code_r0x0007c638:
    FUN_0007c408(pxVar22,pxVar18,param_3,(uint4)param_4 & 1);
    param_4 = 0;
  }
  goto code_r0x0007c444;
}

/* 0x7c408  size=1896 */
void FUN_0007c408(xunknown8 *param_1,xunknown8 *param_2,int8 param_3,uint4 param_4)

{
  bool bVar1;
  uint4 *puVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  uint8 uVar7;
  uint8 uVar8;
  uint8 uVar9;
  xunknown8 *pxVar10;
  uint4 uVar11;
  xunknown8 xVar12;
  uint8 uVar13;
  xunknown8 *pxVar14;
  xunknown8 *pxVar15;
  xunknown8 xVar16;
  xunknown8 *pxVar17;
  xunknown8 *pxVar18;
  int8 iVar19;
  int8 iVar20;
  xunknown8 xVar21;
  
  do {
    pxVar10 = param_2 + -2;
    pxVar14 = param_1;
code_r0x0007c444:
    while( true ) {
      param_1 = pxVar14;
      uVar9 = (int8)param_2 - (int8)param_1 >> 4;
      if (uVar9 - 2 == 0 || (int8)uVar9 < 2) {
        if (uVar9 < 2) {
          return;
        }
        if (uVar9 == 2) {
          if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_2 + -4)) {
            xVar12 = *param_1;
            *param_1 = param_2[-2];
            param_2[-2] = xVar12;
            xVar12 = param_1[1];
            param_1[1] = param_2[-1];
            param_2[-1] = xVar12;
            return;
          }
          return;
        }
      }
      else {
        if (uVar9 == 3) {
          pxVar14 = param_1 + 2;
          uVar11 = *(uint4 *)((int8)param_1 + 0x1c);
          if (*(uint4 *)((int8)param_1 + 0xc) < uVar11) {
            xVar12 = *param_1;
            if (uVar11 < *(uint4 *)((int8)param_2 + -4)) {
              *param_1 = *pxVar10;
              *pxVar10 = xVar12;
              xVar12 = param_1[1];
              param_1[1] = param_2[-1];
            }
            else {
              *param_1 = *pxVar14;
              *pxVar14 = xVar12;
              xVar12 = param_1[1];
              param_1[1] = param_1[3];
              param_1[3] = xVar12;
              if (*(uint4 *)((int8)param_2 + -4) <= (uint4)((uint8)xVar12 >> 0x20)) {
                return;
              }
              xVar12 = *pxVar14;
              *pxVar14 = *pxVar10;
              *pxVar10 = xVar12;
              xVar12 = param_1[3];
              param_1[3] = param_2[-1];
            }
            param_2[-1] = xVar12;
          }
          else if (uVar11 < *(uint4 *)((int8)param_2 + -4)) {
            xVar12 = *pxVar14;
            *pxVar14 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = param_1[3];
            param_1[3] = param_2[-1];
            param_2[-1] = xVar12;
            if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
              xVar12 = *param_1;
              *param_1 = *pxVar14;
              *pxVar14 = xVar12;
              xVar12 = param_1[1];
              param_1[1] = param_1[3];
              param_1[3] = xVar12;
              return;
            }
          }
          return;
        }
        if (uVar9 == 4) {
          FUN_0007cd00(param_1,param_1 + 2,param_1 + 4);
          if (*(uint4 *)((int8)param_2 + -4) <= *(uint4 *)((int8)param_1 + 0x2c)) {
            return;
          }
          xVar12 = param_1[4];
          param_1[4] = param_2[-2];
          param_2[-2] = xVar12;
          xVar12 = param_1[5];
          param_1[5] = param_2[-1];
          param_2[-1] = xVar12;
          if (*(uint4 *)((int8)param_1 + 0x2c) <= *(uint4 *)((int8)param_1 + 0x1c)) {
            return;
          }
          xVar12 = param_1[4];
          xVar21 = param_1[5];
          xVar16 = param_1[2];
          xVar6 = param_1[3];
          param_1[2] = xVar12;
          param_1[3] = xVar21;
          param_1[4] = xVar16;
          param_1[5] = xVar6;
          if (*(uint4 *)((int8)param_1 + 0xc) < (uint4)((uint8)xVar21 >> 0x20)) {
            xVar16 = *param_1;
            xVar6 = param_1[1];
            *param_1 = xVar12;
            param_1[1] = xVar21;
            param_1[2] = xVar16;
            param_1[3] = xVar6;
            return;
          }
          return;
        }
        if (uVar9 == 5) {
          pxVar14 = param_1 + 2;
          pxVar15 = param_1 + 4;
          pxVar17 = param_1 + 6;
          FUN_0007cd00();
          if (*(uint4 *)((int8)param_1 + 0x2c) < *(uint4 *)((int8)param_1 + 0x3c)) {
            xVar12 = *pxVar15;
            *pxVar15 = *pxVar17;
            *pxVar17 = xVar12;
            xVar12 = param_1[5];
            param_1[5] = param_1[7];
            param_1[7] = xVar12;
            if (*(uint4 *)((int8)param_1 + 0x1c) < *(uint4 *)((int8)param_1 + 0x2c)) {
              xVar12 = *pxVar14;
              *pxVar14 = *pxVar15;
              *pxVar15 = xVar12;
              xVar12 = param_1[3];
              param_1[3] = param_1[5];
              param_1[5] = xVar12;
              if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
                xVar12 = *param_1;
                *param_1 = *pxVar14;
                *pxVar14 = xVar12;
                xVar12 = param_1[1];
                param_1[1] = param_1[3];
                param_1[3] = xVar12;
              }
            }
          }
          if (*(uint4 *)((int8)param_1 + 0x3c) < *(uint4 *)((int8)param_2 + -4)) {
            xVar12 = *pxVar17;
            *pxVar17 = *pxVar10;
            *pxVar10 = xVar12;
            xVar12 = param_1[7];
            param_1[7] = param_2[-1];
            param_2[-1] = xVar12;
            if (*(uint4 *)((int8)param_1 + 0x2c) < *(uint4 *)((int8)param_1 + 0x3c)) {
              xVar12 = *pxVar15;
              *pxVar15 = *pxVar17;
              *pxVar17 = xVar12;
              xVar12 = param_1[5];
              param_1[5] = param_1[7];
              param_1[7] = xVar12;
              if (*(uint4 *)((int8)param_1 + 0x1c) < *(uint4 *)((int8)param_1 + 0x2c)) {
                xVar12 = *pxVar14;
                *pxVar14 = *pxVar15;
                *pxVar15 = xVar12;
                xVar12 = param_1[3];
                param_1[3] = param_1[5];
                param_1[5] = xVar12;
                if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
                  xVar12 = *param_1;
                  *param_1 = *pxVar14;
                  *pxVar14 = xVar12;
                  xVar12 = param_1[1];
                  param_1[1] = param_1[3];
                  param_1[3] = xVar12;
                }
              }
            }
          }
          return;
        }
      }
      if ((int8)uVar9 < 0x18) {
        pxVar14 = param_1 + 2;
        if ((param_4 & 1) == 0) {
          if (!(param_1 == param_2 || pxVar14 == param_2)) {
            pxVar10 = param_1 + 3;
            do {
              pxVar15 = pxVar14;
              if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 + 0x1c)) {
                xVar12 = param_1[3];
                xVar16 = *pxVar15;
                pxVar14 = pxVar10;
                do {
                  pxVar17 = pxVar14;
                  pxVar17[-1] = pxVar17[-3];
                  *pxVar17 = pxVar17[-2];
                  pxVar14 = pxVar17 + -2;
                } while (*(uint4 *)((int8)pxVar17 + -0x1c) < (uint4)((uint8)xVar12 >> 0x20));
                pxVar17[-3] = xVar16;
                pxVar17[-2] = xVar12;
              }
              pxVar10 = pxVar10 + 2;
              pxVar14 = pxVar15 + 2;
              param_1 = pxVar15;
            } while (pxVar15 + 2 != param_2);
            return;
          }
          return;
        }
        if (param_1 == param_2 || pxVar14 == param_2) {
          return;
        }
        iVar20 = 0;
        pxVar10 = param_1;
        goto code_r0x0007c898;
      }
      if (param_3 == 0) {
        if (param_1 == param_2) {
          return;
        }
        uVar13 = uVar9 - 2 >> 1;
        uVar7 = uVar13;
        goto code_r0x0007c910;
      }
      pxVar14 = param_1 + (uVar9 & 0xfffffffffffffffe);
      if (uVar9 < 0x81) {
        FUN_0007cd00(pxVar14,param_1,pxVar10);
      }
      else {
        FUN_0007cd00(param_1,pxVar14,pxVar10);
        FUN_0007cd00(param_1 + 2,pxVar14 + -2,param_2 + -4);
        FUN_0007cd00(param_1 + 4,pxVar14 + 2,param_2 + -6);
        FUN_0007cd00(pxVar14 + -2,pxVar14,pxVar14 + 2);
        xVar16 = pxVar14[1];
        xVar12 = *param_1;
        xVar21 = param_1[1];
        *param_1 = *pxVar14;
        param_1[1] = xVar16;
        *pxVar14 = xVar12;
        pxVar14[1] = xVar21;
      }
      if (((param_4 & 1) != 0) || (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_1 - 4)))
      break;
      xVar12 = param_1[1];
      uVar11 = (uint4)((uint8)xVar12 >> 0x20);
      pxVar15 = param_1;
      if (*(uint4 *)((int8)param_2 + -4) < uVar11) {
        pxVar14 = param_1;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 <= *puVar2);
      }
      else {
        do {
          pxVar14 = pxVar15 + 2;
          if (param_2 <= pxVar14) break;
          puVar2 = (uint4 *)((int8)pxVar15 + 0x1c);
          pxVar15 = pxVar14;
        } while (uVar11 <= *puVar2);
      }
      pxVar15 = param_2;
      if (pxVar14 < param_2) {
        do {
          puVar2 = (uint4 *)((int8)pxVar15 + -4);
          pxVar15 = pxVar15 + -2;
        } while (*puVar2 < uVar11);
      }
      xVar16 = *param_1;
      while (pxVar14 < pxVar15) {
        xVar21 = *pxVar14;
        *pxVar14 = *pxVar15;
        *pxVar15 = xVar21;
        xVar21 = pxVar14[1];
        pxVar14[1] = pxVar15[1];
        pxVar15[1] = xVar21;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 <= *puVar2);
        do {
          puVar2 = (uint4 *)((int8)pxVar15 + -4);
          pxVar15 = pxVar15 + -2;
        } while (*puVar2 < uVar11);
      }
      if (param_1 != pxVar14 + -2) {
        *param_1 = pxVar14[-2];
        param_1[1] = pxVar14[-1];
      }
      param_4 = 0;
      pxVar14[-2] = xVar16;
      pxVar14[-1] = xVar12;
      param_3 = param_3 + -1;
    }
    param_3 = param_3 + -1;
    xVar12 = *param_1;
    xVar16 = param_1[1];
    iVar20 = 0;
    do {
      iVar3 = iVar20 + 0x10;
      iVar19 = iVar20 + 0x1c;
      uVar11 = (uint4)((uint8)xVar16 >> 0x20);
      iVar20 = iVar3;
    } while (uVar11 < *(uint4 *)((int8)param_1 + iVar19));
    pxVar15 = (xunknown8 *)((int8)param_1 + iVar3);
    pxVar17 = param_2;
    if (iVar3 == 0x10) {
      do {
        if (pxVar17 <= pxVar15) break;
        puVar2 = (uint4 *)((int8)pxVar17 + -4);
        pxVar17 = pxVar17 + -2;
      } while (*puVar2 <= uVar11);
    }
    else {
      do {
        puVar2 = (uint4 *)((int8)pxVar17 + -4);
        pxVar17 = pxVar17 + -2;
      } while (*puVar2 <= uVar11);
    }
    pxVar14 = pxVar15;
    if (pxVar15 < pxVar17) {
      pxVar18 = pxVar17;
      do {
        xVar21 = *pxVar14;
        *pxVar14 = *pxVar18;
        *pxVar18 = xVar21;
        xVar21 = pxVar14[1];
        pxVar14[1] = pxVar18[1];
        pxVar18[1] = xVar21;
        do {
          puVar2 = (uint4 *)((int8)pxVar14 + 0x1c);
          pxVar14 = pxVar14 + 2;
        } while (uVar11 < *puVar2);
        do {
          puVar2 = (uint4 *)((int8)pxVar18 + -4);
          pxVar18 = pxVar18 + -2;
        } while (*puVar2 <= uVar11);
      } while (pxVar14 < pxVar18);
    }
    pxVar18 = pxVar14 + -2;
    if (param_1 != pxVar18) {
      *param_1 = pxVar14[-2];
      param_1[1] = pxVar14[-1];
    }
    pxVar14[-2] = xVar12;
    pxVar14[-1] = xVar16;
    if (pxVar15 < pxVar17) goto code_r0x0007c638;
    uVar9 = FUN_0007cde8(param_1,pxVar18);
    uVar7 = FUN_0007cde8(pxVar14,param_2);
    if ((uVar7 & 1) == 0) goto code_r0x0007c634;
    param_2 = pxVar18;
    if ((uVar9 & 1) != 0) {
      return;
    }
  } while( true );
code_r0x0007c898:
  pxVar15 = pxVar14;
  if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)pxVar10 + 0x1c)) {
    xVar12 = pxVar10[3];
    xVar16 = *pxVar15;
    iVar3 = iVar20;
    do {
      iVar19 = iVar3;
      pxVar14 = (xunknown8 *)((int8)param_1 + iVar19);
      pxVar14[2] = *pxVar14;
      pxVar14[3] = pxVar14[1];
      if (iVar19 == 0) {
        pxVar14 = param_1;
        goto code_r0x0007c880;
      }
      iVar3 = iVar19 + -0x10;
    } while (*(uint4 *)((int8)pxVar14 + -4) < (uint4)((uint8)xVar12 >> 0x20));
    pxVar14 = (xunknown8 *)((int8)param_1 + iVar19);
code_r0x0007c880:
    *pxVar14 = xVar16;
    pxVar14[1] = xVar12;
  }
  iVar20 = iVar20 + 0x10;
  pxVar14 = pxVar15 + 2;
  pxVar10 = pxVar15;
  if (pxVar15 + 2 == param_2) {
    return;
  }
  goto code_r0x0007c898;
code_r0x0007c910:
  do {
    if (uVar7 <= uVar13) {
      uVar5 = (uVar7 & 0x3fffffffffffffff) << 1 | 1;
      uVar4 = uVar7 * 2 + 2;
      pxVar14 = param_1 + uVar5 * 2;
      uVar8 = uVar5;
      if ((int8)uVar4 < (int8)uVar9) {
        iVar20 = 0x10;
        uVar8 = uVar4;
        if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
          iVar20 = 0;
          uVar8 = uVar5;
        }
        pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar20);
      }
      pxVar10 = param_1 + uVar7 * 2;
      if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar10 + 0xc)) {
        xVar12 = *pxVar10;
        xVar16 = pxVar10[1];
        do {
          pxVar15 = pxVar14;
          *pxVar10 = *pxVar15;
          pxVar10[1] = pxVar15[1];
          if ((int8)uVar13 < (int8)uVar8) break;
          uVar5 = uVar8 << 1 | 1;
          uVar4 = uVar8 * 2 + 2;
          pxVar14 = param_1 + uVar5 * 2;
          uVar8 = uVar5;
          if ((int8)uVar4 < (int8)uVar9) {
            iVar20 = 0x10;
            uVar8 = uVar4;
            if (*(uint4 *)((int8)pxVar14 + 0xc) <= *(uint4 *)((int8)pxVar14 + 0x1c)) {
              iVar20 = 0;
              uVar8 = uVar5;
            }
            pxVar14 = (xunknown8 *)((int8)pxVar14 + iVar20);
          }
          pxVar10 = pxVar15;
        } while (*(uint4 *)((int8)pxVar14 + 0xc) <= (uint4)((uint8)xVar16 >> 0x20));
        *pxVar15 = xVar12;
        pxVar15[1] = xVar16;
      }
    }
    bVar1 = 0 < (int8)uVar7;
    uVar7 = uVar7 - 1;
  } while (bVar1);
  do {
    xVar12 = *param_1;
    xVar16 = param_1[1];
    uVar7 = 0;
    pxVar14 = param_1;
    do {
      uVar4 = uVar7 << 1 | 1;
      uVar13 = uVar7 * 2 + 2;
      pxVar10 = pxVar14 + uVar7 * 2 + 2;
      if ((int8)uVar13 < (int8)uVar9) {
        iVar20 = uVar7 * 0x10;
        iVar3 = uVar7 * 0x10;
        iVar19 = uVar7 * 2;
        uVar7 = uVar13;
        pxVar15 = pxVar14 + iVar19 + 4;
        if (*(uint4 *)((int8)pxVar14 + iVar20 + 0x1c) <= *(uint4 *)((int8)pxVar14 + iVar3 + 0x2c)) {
          uVar7 = uVar4;
          pxVar15 = pxVar10;
        }
        pxVar10 = pxVar15;
      }
      else {
        uVar7 = uVar4;
      }
      *pxVar14 = *pxVar10;
      pxVar14[1] = pxVar10[1];
      pxVar14 = pxVar10;
    } while ((int8)uVar7 <= (int8)(uVar9 - 2 >> 1));
    if (pxVar10 == param_2 + -2) {
      *pxVar10 = xVar12;
      pxVar10[1] = xVar16;
    }
    else {
      *pxVar10 = param_2[-2];
      iVar20 = (int8)pxVar10 + (0x10 - (int8)param_1) >> 4;
      pxVar10[1] = param_2[-1];
      param_2[-2] = xVar12;
      param_2[-1] = xVar16;
      if (1 < iVar20) {
        uVar7 = iVar20 - 2U >> 1;
        if (*(uint4 *)((int8)pxVar10 + 0xc) < *(uint4 *)((int8)(param_1 + uVar7 * 2) + 0xc)) {
          xVar12 = *pxVar10;
          xVar16 = pxVar10[1];
          pxVar14 = param_1 + uVar7 * 2;
          do {
            pxVar15 = pxVar14;
            *pxVar10 = *pxVar15;
            pxVar10[1] = pxVar15[1];
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            pxVar10 = pxVar15;
            pxVar14 = param_1 + uVar7 * 2;
          } while ((uint4)((uint8)xVar16 >> 0x20) < *(uint4 *)((int8)(param_1 + uVar7 * 2) + 0xc));
          *pxVar15 = xVar12;
          pxVar15[1] = xVar16;
        }
      }
    }
    bVar1 = (int8)uVar9 < 3;
    uVar9 = uVar9 - 1;
    param_2 = param_2 + -2;
    if (bVar1) {
      return;
    }
  } while( true );
code_r0x0007c634:
  if ((uVar9 & 1) == 0) {
code_r0x0007c638:
    FUN_0007c408(param_1,pxVar18,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto code_r0x0007c444;
}

/* 0x7cb70  size=400 */
void FUN_0007cb70(xunknown8 *param_1,xunknown8 *param_2,xunknown8 *param_3,xunknown8 *param_4,
                 xunknown8 *param_5)

{
  xunknown8 xVar1;
  
  FUN_0007cd00();
  if (*(uint4 *)((int8)param_3 + 0xc) < *(uint4 *)((int8)param_4 + 0xc)) {
    xVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = xVar1;
    xVar1 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = xVar1;
    if (*(uint4 *)((int8)param_2 + 0xc) < *(uint4 *)((int8)param_3 + 0xc)) {
      xVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = xVar1;
      xVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = xVar1;
      if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_2 + 0xc)) {
        xVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = xVar1;
        xVar1 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = xVar1;
      }
    }
  }
  if (*(uint4 *)((int8)param_4 + 0xc) < *(uint4 *)((int8)param_5 + 0xc)) {
    xVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = xVar1;
    xVar1 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = xVar1;
    if (*(uint4 *)((int8)param_3 + 0xc) < *(uint4 *)((int8)param_4 + 0xc)) {
      xVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = xVar1;
      xVar1 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = xVar1;
      if (*(uint4 *)((int8)param_2 + 0xc) < *(uint4 *)((int8)param_3 + 0xc)) {
        xVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = xVar1;
        xVar1 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = xVar1;
        if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_2 + 0xc)) {
          xVar1 = *param_1;
          *param_1 = *param_2;
          *param_2 = xVar1;
          xVar1 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = xVar1;
        }
      }
    }
  }
  return;
}

/* 0x7cd00  size=232 */
void FUN_0007cd00(xunknown8 *param_1,xunknown8 *param_2,xunknown8 *param_3)

{
  uint4 uVar1;
  xunknown8 xVar2;
  
  uVar1 = *(uint4 *)((int8)param_2 + 0xc);
  if (*(uint4 *)((int8)param_1 + 0xc) < uVar1) {
    xVar2 = *param_1;
    if (uVar1 < *(uint4 *)((int8)param_3 + 0xc)) {
      *param_1 = *param_3;
      *param_3 = xVar2;
      xVar2 = param_1[1];
      param_1[1] = param_3[1];
    }
    else {
      *param_1 = *param_2;
      *param_2 = xVar2;
      xVar2 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = xVar2;
      if (*(uint4 *)((int8)param_3 + 0xc) <= (uint4)((uint8)xVar2 >> 0x20)) {
        return;
      }
      xVar2 = *param_2;
      *param_2 = *param_3;
      *param_3 = xVar2;
      xVar2 = param_2[1];
      param_2[1] = param_3[1];
    }
    param_3[1] = xVar2;
  }
  else if (uVar1 < *(uint4 *)((int8)param_3 + 0xc)) {
    xVar2 = *param_2;
    *param_2 = *param_3;
    *param_3 = xVar2;
    xVar2 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = xVar2;
    if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_2 + 0xc)) {
      xVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = xVar2;
      xVar2 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = xVar2;
      return;
    }
  }
  return;
}

/* 0x7cde8  size=504 */
bool FUN_0007cde8(xunknown8 *param_1,xunknown8 *param_2)

{
  xunknown8 xVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  int8 iVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  xunknown8 *pxVar7;
  int8 iVar8;
  int4 iVar9;
  xunknown8 *pxVar10;
  int8 iVar11;
  xunknown8 *pxVar12;
  
  uVar5 = (int8)param_2 - (int8)param_1 >> 4;
  if ((int8)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      if (*(uint4 *)((int8)param_1 + 0xc) < *(uint4 *)((int8)param_2 + -4)) {
        xVar6 = *param_1;
        *param_1 = param_2[-2];
        param_2[-2] = xVar6;
        xVar6 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = xVar6;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      FUN_0007cd00(param_1,param_1 + 2,param_2 + -2);
      return true;
    }
    if (uVar5 == 4) {
      FUN_0007cd00(param_1,param_1 + 2,param_1 + 4);
      if (*(uint4 *)((int8)param_2 + -4) <= *(uint4 *)((int8)param_1 + 0x2c)) {
        return true;
      }
      xVar6 = param_1[4];
      param_1[4] = param_2[-2];
      param_2[-2] = xVar6;
      xVar6 = param_1[5];
      param_1[5] = param_2[-1];
      param_2[-1] = xVar6;
      if (*(uint4 *)((int8)param_1 + 0x2c) <= *(uint4 *)((int8)param_1 + 0x1c)) {
        return true;
      }
      xVar6 = param_1[4];
      xVar2 = param_1[5];
      xVar1 = param_1[2];
      xVar3 = param_1[3];
      param_1[2] = xVar6;
      param_1[3] = xVar2;
      param_1[4] = xVar1;
      param_1[5] = xVar3;
      if (*(uint4 *)((int8)param_1 + 0xc) < (uint4)((uint8)xVar2 >> 0x20)) {
        xVar1 = *param_1;
        xVar3 = param_1[1];
        *param_1 = xVar6;
        param_1[1] = xVar2;
        param_1[2] = xVar1;
        param_1[3] = xVar3;
        return true;
      }
      return true;
    }
    if (uVar5 == 5) {
      FUN_0007cb70(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  FUN_0007cd00(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    iVar8 = 0;
    iVar9 = 0;
    pxVar10 = param_1 + 6;
    pxVar12 = param_1 + 4;
    do {
      pxVar7 = pxVar10;
      if (*(uint4 *)((int8)pxVar12 + 0xc) < *(uint4 *)((int8)pxVar7 + 0xc)) {
        xVar6 = *pxVar7;
        xVar1 = pxVar7[1];
        iVar4 = iVar8;
        do {
          iVar11 = iVar4;
          *(xunknown8 *)((int8)param_1 + iVar11 + 0x30) =
               *(xunknown8 *)((int8)param_1 + iVar11 + 0x20);
          *(xunknown8 *)((int8)param_1 + iVar11 + 0x38) =
               *(xunknown8 *)((int8)param_1 + iVar11 + 0x28);
          if (iVar11 == -0x20) {
            pxVar10 = param_1;
            goto code_r0x0007cec0;
          }
          iVar4 = iVar11 + -0x10;
        } while (*(uint4 *)((int8)param_1 + iVar11 + 0x1c) < (uint4)((uint8)xVar1 >> 0x20));
        pxVar10 = (xunknown8 *)((int8)param_1 + iVar11 + 0x20);
code_r0x0007cec0:
        iVar9 = iVar9 + 1;
        *pxVar10 = xVar6;
        pxVar10[1] = xVar1;
        if (iVar9 == 8) {
          return pxVar7 + 2 == param_2;
        }
      }
      iVar8 = iVar8 + 0x10;
      pxVar10 = pxVar7 + 2;
      pxVar12 = pxVar7;
    } while (pxVar7 + 2 != param_2);
  }
  return true;
}

/* 0x7cfe0  size=100 */
void FUN_0007cfe0(void)

{
  puRam000000000010c270 = 0;
  puRam000000000010c278 = 0;
  puRam000000000010c280 = 0;
  __cxa_atexit(FUN_0007a864,&puRam000000000010c270,0xcee00);
  fRam000000000010c2a8 = 0x3f800000;
  uRam000000000010c290 = 0;
  iRam000000000010c288 = 0;
  uRam000000000010c2a0 = 0;
  piRam000000000010c298 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0007a904,&iRam000000000010c288,0xcee00);
  return;
}

/* 0x7d0a0  size=628 */
xunknown8 FUN_0007d0a0(uint8 *param_1,xunknown8 param_2,xunknown8 *param_3)

{
  int8 iVar1;
  int4 iVar2;
  int8 iVar3;
  xunknown8 xVar4;
  uint8 uVar5;
  int8 *piVar6;
  uint8 uVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint8 uVar10;
  uint8 *puVar11;
  uint8 uVar12;
  uint8 uVar13;
  uint8 uVar14;
  int8 *piVar15;
  
  if (param_1[1] == 0) {
    return 0;
  }
  iVar3 = strstr(param_1[1],*param_3);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = (uint8)(uint2)param_1[3];
  if (uVar5 != 0) {
    uVar13 = *param_1;
    iVar3 = 0;
    piVar6 = (int8 *)(param_1[2] + 0x10);
    do {
      if ((int4)piVar6[-2] == 2) {
        iVar3 = *piVar6 + uVar13;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 7;
    } while (uVar5 != 0);
    if (iVar3 != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar14 = 0;
      uVar9 = 0;
      uVar5 = 0;
      uVar10 = 0;
      puVar11 = (uint8 *)(iVar3 + 8);
code_r0x0007d140:
      while (uVar12 = puVar11[-1], 6 < (int8)uVar12) {
        if (uVar12 == 7) {
          uVar9 = *puVar11;
          puVar11 = puVar11 + 2;
        }
        else if (uVar12 == 8) {
          uVar14 = *puVar11;
          puVar11 = puVar11 + 2;
        }
        else {
          if (uVar12 != 0x17) goto code_r0x0007d1a0;
          uVar10 = *puVar11;
          puVar11 = puVar11 + 2;
        }
      }
      if ((int8)uVar12 < 5) {
        if (uVar12 == 2) {
          uVar5 = *puVar11;
          puVar11 = puVar11 + 2;
          goto code_r0x0007d140;
        }
        if (uVar12 == 0) goto code_r0x0007d1b4;
      }
      else if (uVar12 == 5) {
        uVar7 = *puVar11;
      }
      else if (uVar12 == 6) {
        uVar8 = *puVar11;
        puVar11 = puVar11 + 2;
        goto code_r0x0007d140;
      }
code_r0x0007d1a0:
      puVar11 = puVar11 + 2;
      goto code_r0x0007d140;
    }
  }
  return 0;
code_r0x0007d1b4:
  xVar4 = 0;
  uVar12 = uVar13;
  if (uVar13 <= uVar10) {
    uVar12 = 0;
  }
  piVar6 = (int8 *)0x0;
  if (uVar10 != 0) {
    piVar6 = (int8 *)(uVar12 + uVar10);
  }
  uVar10 = uVar13;
  if (uVar13 <= uVar9) {
    uVar10 = 0;
  }
  piVar15 = (int8 *)0x0;
  if (uVar9 != 0) {
    piVar15 = (int8 *)(uVar10 + uVar9);
  }
  uVar9 = uVar13;
  if (uVar13 <= uVar8) {
    uVar9 = 0;
  }
  iVar3 = 0;
  if (uVar8 != 0) {
    iVar3 = uVar9 + uVar8;
  }
  if (uVar7 != 0) {
    uVar8 = uVar13;
    if (uVar13 <= uVar7) {
      uVar8 = 0;
    }
    if ((iVar3 != 0) && (iVar1 = uVar8 + uVar7, iVar1 != 0)) {
      if ((piVar6 != (int8 *)0x0) && (0x17 < uVar5)) {
        uVar5 = uVar5 / 0x18;
        do {
          uVar7 = (uint8)piVar6[1] >> 0x20;
          iVar2 = (int4)piVar6[1];
          if ((uVar7 != 0 && (iVar2 == 0x401 || iVar2 == 0x402)) &&
             (iVar2 = strcmp(iVar1 + (uint8)*(uint4 *)(iVar3 + uVar7 * 0x18),param_3[1]), iVar2 == 0
             )) goto code_r0x0007d300;
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 3;
        } while (uVar5 != 0);
      }
      if ((piVar15 == (int8 *)0x0) || (uVar14 < 0x18)) {
        xVar4 = 1;
      }
      else {
        uVar14 = uVar14 / 0x18;
        do {
          uVar5 = (uint8)piVar15[1] >> 0x20;
          iVar2 = (int4)piVar15[1];
          if ((uVar5 != 0 && (iVar2 == 0x401 || iVar2 == 0x402)) &&
             (iVar2 = strcmp(iVar1 + (uint8)*(uint4 *)(iVar3 + uVar5 * 0x18),param_3[1]),
             piVar6 = piVar15, iVar2 == 0)) {
code_r0x0007d300:
            param_3[2] = *piVar6 + uVar13;
            return 1;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 3;
          xVar4 = 1;
        } while (uVar14 != 0);
      }
    }
  }
  return xVar4;
}

/* 0x7d314  size=8 */
void FUN_0007d314(int8 param_1)

{
  xunknown8 *pxVar1;
  
  pxVar1 = *(xunknown8 **)(param_1 + 8);
  if (pxVar1 == (xunknown8 *)0x0) {
    return;
  }
  FUN_00081714(param_1,*pxVar1);
  FUN_00081714(param_1,pxVar1[1]);
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(pxVar1,0x28);
  return;
}

/* 0x7d31c  size=88 */
void FUN_0007d31c(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)param_1[2];
  while (piVar1 != (int8 *)0x0) {
    iVar2 = *piVar1;
    operator_delete_plt(piVar1,0x20);
    piVar1 = (int8 *)iVar2;
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,param_1[1] << 3);
  return;
}

/* 0x7d374  size=88 */
void FUN_0007d374(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)param_1[2];
  while (piVar1 != (int8 *)0x0) {
    iVar2 = *piVar1;
    operator_delete_plt(piVar1,0x18);
    piVar1 = (int8 *)iVar2;
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,param_1[1] << 3);
  return;
}

/* 0x7e108  size=164 */
void FUN_0007e108(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7e720  size=356 */
void FUN_0007e720(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  uint1 uVar3;
  uint8 uVar4;
  int8 iVar5;
  uint8 uVar6;
  xunknown4 *pxVar7;
  uint8 uVar8;
  uint4 uStack_4c;
  int4 iStack_48;
  int4 aiStack_44 [7];
  int8 iStack_28;
  
  iVar1 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar1 + 0x28);
  if ((uRam00000000001622fc & 1) == 0) {
    aiStack_44[5] = 0;
    aiStack_44[1] = 2;
    aiStack_44[2] = 0;
    aiStack_44[3] = 0;
    aiStack_44[4] = aiStack_44[4] & 0xffffff00;
    uVar3 = gl__Load_plt(aiStack_44 + 1,xRam00000000001622b8);
    uRam00000000001622fc = uVar3 & 1;
    if ((uVar3 & 1) == 0) goto code_r0x0007e860;
  }
  pxVar2 = pxRam00000000000d3208;
  aiStack_44[0] = 0;
  (*(code *)*pxRam00000000000d3208)(0x8ca6,aiStack_44);
  if (aiStack_44[0] == 0) {
    cRam0000000000161d40 = 0;
  }
  else {
    aiStack_44[1] = 0;
    aiStack_44[2] = 0;
    aiStack_44[3] = 0;
    aiStack_44[4] = 0;
    (*(code *)*pxVar2)(0xba2,aiStack_44 + 1);
    uStack_4c = 0;
    iStack_48 = 0;
    compat__SceneSize_plt(&iStack_48,&uStack_4c);
    cRam0000000000161d40 = aiStack_44[3] == iStack_48 && aiStack_44[4] == uStack_4c;
    if (aiStack_44[3] == iStack_48 && aiStack_44[4] == uStack_4c) {
      uVar4 = (uint8)iRam0000000000161d44;
      uRam000000000016206c = 0;
      if (0 < (int4)iRam0000000000161d44) {
        if (iRam0000000000161d44 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar4 & 0x7ffffffe;
          pxVar7 = (xunknown4 *)0x161dd0;
          uVar8 = uVar6;
          do {
            uVar8 = uVar8 - 2;
            pxVar7[-0x12] = 0;
            *pxVar7 = 0;
            pxVar7 = pxVar7 + 0x24;
          } while (uVar8 != 0);
          if (uVar6 == uVar4) goto code_r0x0007e860;
        }
        iVar5 = uVar4 - uVar6;
        pxVar7 = (xunknown4 *)(uVar6 * 0x48 + 0x161d88);
        do {
          iVar5 = iVar5 + -1;
          *pxVar7 = 0;
          pxVar7 = pxVar7 + 0x12;
        } while (iVar5 != 0);
      }
    }
  }
code_r0x0007e860:
  if (*(int8 *)(iVar1 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7e884  size=2220 */
void FUN_0007e884(void)

{
  int8 iVar1;
  uint1 uVar2;
  code *pcVar3;
  bool bVar4;
  int4 iVar5;
  xunknown1 *pxVar6;
  uint4 uVar7;
  uint8 uVar8;
  uint8 uVar9;
  int8 iVar10;
  int4 *piVar11;
  int4 iVar12;
  float4 *pfVar13;
  uint8 uVar14;
  float4 fVar15;
  float4 fVar16;
  float4 fVar17;
  float4 fVar18;
  float4 fVar19;
  float4 fVar20;
  float4 fVar21;
  float4 fVar22;
  float4 fVar23;
  float8 fVar24;
  float8 fVar25;
  float4 fVar26;
  float8 fVar27;
  float4 fVar28;
  float4 fVar29;
  float4 fVar30;
  float4 fVar31;
  float4 fVar32;
  float4 fVar33;
  xunknown1 axStack_300 [400];
  xunknown8 xStack_170;
  xunknown8 xStack_168;
  xunknown8 xStack_160;
  xunknown8 xStack_158;
  xunknown8 xStack_150;
  xunknown8 xStack_148;
  xunknown8 xStack_140;
  xunknown8 xStack_138;
  float4 fStack_130;
  float4 fStack_12c;
  float4 fStack_128;
  float4 fStack_124;
  float4 fStack_120;
  float4 fStack_11c;
  float4 fStack_118;
  float4 fStack_114;
  float4 fStack_110;
  float4 fStack_10c;
  float4 fStack_108;
  float4 fStack_104;
  float4 fStack_100;
  float4 fStack_fc;
  float4 fStack_f8;
  float4 fStack_f4;
  xunknown1 axStack_f0 [48];
  float4 fStack_c0;
  float4 fStack_bc;
  float4 fStack_b8;
  int8 iStack_b0;
  
  uVar2 = uRam0000000000162224;
  uVar7 = uRam000000000016206c;
  iVar1 = tpidr_el0;
  iStack_b0 = *(int8 *)(iVar1 + 0x28);
  if (cRam0000000000161d40 == '\x01') {
    cRam0000000000161d40 = '\0';
    uRam0000000000162225 = 0;
    if ((xRam0000000000162068 == '\x01') && ((xRam000000000016201c & 1) != 0)) {
      uVar14 = (uint8)uRam000000000016206c;
      if (0 < (int4)uRam000000000016206c) {
        if (uRam000000000016206c == 1) {
          iVar12 = 0;
        }
        else {
          fVar15 = (float4)xRam0000000000162270;
          fVar17 = (float4)xRam0000000000162280;
          fVar16 = (float4)xRam0000000000162290;
          uVar8 = 0;
          piVar11 = (int4 *)0x1620f4;
          uVar9 = 1;
          do {
            iVar10 = (int8)(int4)uVar8 * 0x44;
            iVar12 = *piVar11;
            iVar5 = *(int4 *)(iVar10 + 0x1620b0);
            if (iVar12 == iVar5 || iVar12 < iVar5) {
              if ((iVar12 == iVar5 & uVar2) == 1) {
                fVar19 = (float4)piVar11[-10] * fVar17 + fVar15 * (float4)piVar11[-0xe] +
                         fVar16 * (float4)piVar11[-6];
                fVar18 = -1.0;
                if (-1.0 <= fVar19) {
                  fVar18 = fVar19;
                }
                fVar20 = 1.0;
                if (fVar19 <= 1.0) {
                  fVar20 = fVar18;
                }
                fVar19 = (float4)acosf(fVar20);
                fVar20 = fVar17 * *(float4 *)(iVar10 + 0x162088) +
                         fVar15 * *(float4 *)(iVar10 + 0x162078) +
                         fVar16 * *(float4 *)(iVar10 + 0x162098);
                fVar18 = -1.0;
                if (-1.0 <= fVar20) {
                  fVar18 = fVar20;
                }
                fVar21 = 1.0;
                if (fVar20 <= 1.0) {
                  fVar21 = fVar18;
                }
                fVar18 = (float4)acosf(fVar21);
                if (fVar19 * 57.2958 < fVar18 * 57.2958) goto code_r0x0007e990;
              }
            }
            else {
code_r0x0007e990:
              uVar8 = uVar9 & 0xffffffff;
            }
            uVar9 = uVar9 + 1;
            piVar11 = piVar11 + 0x11;
          } while (uVar14 != uVar9);
          iVar12 = (int4)uVar8;
        }
        iVar10 = (int8)iVar12 * 0x44;
        xRam0000000000162030 = *(xunknown8 *)(iVar10 + 0x162078);
        xRam0000000000162028 = *(xunknown8 *)(iVar10 + 0x162070);
        iRam0000000000162040 = *(xunknown8 *)(iVar10 + 0x162088);
        uRam0000000000162038 = *(xunknown8 *)(iVar10 + 0x162080);
        iRam0000000000162050 = *(xunknown8 *)(iVar10 + 0x162098);
        iRam0000000000162048 = *(xunknown8 *)(iVar10 + 0x162090);
        iRam0000000000162060 = *(xunknown8 *)(iVar10 + 0x1620a8);
        iRam0000000000162058 = *(xunknown8 *)(iVar10 + 0x1620a0);
      }
      uVar14 = (uint8)iRam0000000000161d44;
      if ((int4)iRam0000000000161d44 < 1) {
        pfVar13 = (float4 *)&xRam0000000000161fdc;
      }
      else {
        uVar9 = 0;
        piVar11 = (int4 *)0x161d8c;
        uVar8 = 0xffffffff;
        do {
          iVar12 = piVar11[-1];
          *piVar11 = *piVar11 + iVar12;
          if ((0 < iVar12) && (((int4)uVar8 < 0 || (*(int4 *)(uVar8 * 0x48 + 0x161d88) < iVar12))))
          {
            uVar8 = uVar9 & 0xffffffff;
          }
          uVar9 = uVar9 + 1;
          piVar11 = piVar11 + 0x12;
        } while (uVar14 != uVar9);
        if ((int4)uVar8 < 0) {
          pfVar13 = (float4 *)&xRam0000000000161fdc;
        }
        else {
          iVar10 = 0;
          pfVar13 = (float4 *)(uVar8 * 0x48 + 0x161d48);
          do {
            fVar15 = ABS(*(float4 *)((int8)pfVar13 + iVar10) -
                         *(float4 *)((int8)&xRam0000000000161fdc + iVar10));
            fVar17 = (ABS(*(float4 *)((int8)pfVar13 + iVar10)) + 1.0) * 1e-05;
            if (fVar17 < fVar15) break;
            bVar4 = iVar10 != 0x3c;
            iVar10 = iVar10 + 4;
          } while (bVar4);
          piVar11 = (int4 *)0x162304;
          if (fVar17 < fVar15) {
            piVar11 = (int4 *)0x162308;
          }
          *piVar11 = *piVar11 + 1;
        }
      }
      uVar14 = FUN_000811d0(&xRam0000000000162028,axStack_f0);
      if ((uVar14 & 1) != 0) {
        if ((iRam0000000000162020 == 0) ||
           (iVar10 = *(int8 *)(iRam0000000000162020 + 0x18), iVar10 == 0)) {
          iRam0000000000162300 = iRam0000000000162300 + 1;
          xRam0000000000162214 = xRam0000000000162214 + 1;
          goto code_r0x0007f094;
        }
        fVar16 = fStack_b8 - *(float4 *)(iVar10 + 0x38);
        fVar15 = fStack_bc - *(float4 *)(iVar10 + 0x34);
        fVar17 = fStack_c0 - *(float4 *)(iVar10 + 0x30);
        fVar15 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
        if (100.0 < fVar15) {
          fRam000000000016221c = SQRT(fVar15);
          iRam0000000000162300 = iRam0000000000162300 + 1;
          xRam0000000000162218 = xRam0000000000162218 + 1;
          xRam0000000000162220 = uVar7;
          goto code_r0x0007f094;
        }
        fVar29 = *pfVar13;
        fVar22 = pfVar13[1];
        fVar21 = pfVar13[2];
        fVar19 = pfVar13[3];
        fVar17 = pfVar13[4];
        fVar18 = pfVar13[5];
        fVar33 = pfVar13[6];
        fVar32 = pfVar13[7];
        fVar16 = pfVar13[8];
        fVar15 = pfVar13[9];
        fVar31 = pfVar13[10];
        fVar28 = pfVar13[0xb];
        fVar20 = pfVar13[0xc];
        fVar26 = pfVar13[0xd];
        fVar23 = pfVar13[0xe];
        fVar30 = pfVar13[0xf];
        fStack_130 = (float4)xRam0000000000162028 * fVar29 + 0.0 +
                     xRam0000000000162028._4_4_ * fVar17 + (float4)xRam0000000000162030 * fVar16 +
                     xRam0000000000162030._4_4_ * fVar20;
        fStack_12c = (float4)xRam0000000000162028 * fVar22 + 0.0 +
                     xRam0000000000162028._4_4_ * fVar18 + (float4)xRam0000000000162030 * fVar15 +
                     xRam0000000000162030._4_4_ * fVar26;
        fStack_128 = (float4)xRam0000000000162028 * fVar21 + 0.0 +
                     xRam0000000000162028._4_4_ * fVar33 + (float4)xRam0000000000162030 * fVar31 +
                     xRam0000000000162030._4_4_ * fVar23;
        fStack_124 = (float4)xRam0000000000162028 * fVar19 + 0.0 +
                     xRam0000000000162028._4_4_ * fVar32 + (float4)xRam0000000000162030 * fVar28 +
                     xRam0000000000162030._4_4_ * fVar30;
        fStack_120 = (float4)uRam0000000000162038 * fVar29 + 0.0 +
                     uRam0000000000162038._4_4_ * fVar17 + (float4)iRam0000000000162040 * fVar16 +
                     iRam0000000000162040._4_4_ * fVar20;
        fStack_11c = (float4)uRam0000000000162038 * fVar22 + 0.0 +
                     uRam0000000000162038._4_4_ * fVar18 + (float4)iRam0000000000162040 * fVar15 +
                     iRam0000000000162040._4_4_ * fVar26;
        fStack_118 = (float4)uRam0000000000162038 * fVar21 + 0.0 +
                     uRam0000000000162038._4_4_ * fVar33 + (float4)iRam0000000000162040 * fVar31 +
                     iRam0000000000162040._4_4_ * fVar23;
        fStack_114 = (float4)uRam0000000000162038 * fVar19 + 0.0 +
                     uRam0000000000162038._4_4_ * fVar32 + (float4)iRam0000000000162040 * fVar28 +
                     iRam0000000000162040._4_4_ * fVar30;
        fStack_10c = (float4)iRam0000000000162048 * fVar22 + 0.0 +
                     iRam0000000000162048._4_4_ * fVar18 + (float4)iRam0000000000162050 * fVar15 +
                     iRam0000000000162050._4_4_ * fVar26;
        fStack_110 = (float4)iRam0000000000162048 * fVar29 + 0.0 +
                     iRam0000000000162048._4_4_ * fVar17 + (float4)iRam0000000000162050 * fVar16 +
                     iRam0000000000162050._4_4_ * fVar20;
        fStack_108 = (float4)iRam0000000000162048 * fVar21 + 0.0 +
                     iRam0000000000162048._4_4_ * fVar33 + (float4)iRam0000000000162050 * fVar31 +
                     iRam0000000000162050._4_4_ * fVar23;
        fStack_104 = (float4)iRam0000000000162048 * fVar19 + 0.0 +
                     iRam0000000000162048._4_4_ * fVar32 + (float4)iRam0000000000162050 * fVar28 +
                     iRam0000000000162050._4_4_ * fVar30;
        fStack_100 = (float4)iRam0000000000162058 * fVar29 + 0.0 +
                     iRam0000000000162058._4_4_ * fVar17 + (float4)iRam0000000000162060 * fVar16 +
                     iRam0000000000162060._4_4_ * fVar20;
        fStack_fc = (float4)iRam0000000000162058 * fVar22 + 0.0 +
                    iRam0000000000162058._4_4_ * fVar18 + (float4)iRam0000000000162060 * fVar15 +
                    iRam0000000000162060._4_4_ * fVar26;
        fStack_f8 = (float4)iRam0000000000162058 * fVar21 + 0.0 +
                    iRam0000000000162058._4_4_ * fVar33 + (float4)iRam0000000000162060 * fVar31 +
                    iRam0000000000162060._4_4_ * fVar23;
        fStack_f4 = (float4)iRam0000000000162058 * fVar19 + 0.0 +
                    iRam0000000000162058._4_4_ * fVar32 + (float4)iRam0000000000162060 * fVar28 +
                    iRam0000000000162060._4_4_ * fVar30;
        uVar14 = FUN_000811d0(&fStack_130,&xStack_170);
        pcVar3 = xRam00000000001622b8;
        if ((uVar14 & 1) != 0) {
          xRam0000000000162318 = CONCAT44(fStack_124,fStack_128);
          xRam0000000000162310 = CONCAT44(fStack_12c,fStack_130);
          xRam0000000000162328 = CONCAT44(fStack_114,fStack_118);
          xRam0000000000162320 = CONCAT44(fStack_11c,fStack_120);
          xRam0000000000162338 = CONCAT44(fStack_104,fStack_108);
          xRam0000000000162330 = CONCAT44(fStack_10c,fStack_110);
          xRam0000000000162348 = CONCAT44(fStack_f4,fStack_f8);
          xRam0000000000162340 = CONCAT44(fStack_fc,fStack_100);
          xRam0000000000162358 = xStack_168;
          xRam0000000000162350 = xStack_170;
          xRam0000000000162368 = xStack_158;
          xRam0000000000162360 = xStack_160;
          xRam0000000000162378 = xStack_148;
          xRam0000000000162370 = xStack_150;
          xRam0000000000162388 = xStack_138;
          xRam0000000000162380 = xStack_140;
          xRam0000000000162250 = *(xunknown8 *)(pfVar13 + 10);
          xRam0000000000162248 = *(xunknown8 *)(pfVar13 + 8);
          xRam0000000000162260 = *(xunknown8 *)(pfVar13 + 0xe);
          xRam0000000000162258 = *(xunknown8 *)(pfVar13 + 0xc);
          xRam0000000000162230 = *(xunknown8 *)(pfVar13 + 2);
          xRam0000000000162228 = *(xunknown8 *)pfVar13;
          xRam0000000000162240 = *(xunknown8 *)(pfVar13 + 6);
          xRam0000000000162238 = *(xunknown8 *)(pfVar13 + 4);
          uRam0000000000162224 = 1;
          uRam0000000000162225 = 1;
          xRam0000000000162270 = xRam0000000000162030;
          xRam0000000000162268 = xRam0000000000162028;
          xRam0000000000162280 = iRam0000000000162040;
          xRam0000000000162278 = uRam0000000000162038;
          iRam0000000000162390 = iRam0000000000162390 + 1;
          xRam0000000000162290 = iRam0000000000162050;
          xRam0000000000162288 = iRam0000000000162048;
          xRam00000000001622a0 = iRam0000000000162060;
          xRam0000000000162298 = iRam0000000000162058;
          xRam00000000001622a8._0_4_ = fStack_c0;
          xRam00000000001622a8._4_4_ = fStack_bc;
          xRam00000000001622b0 = fStack_b8;
          iVar12 = iRam0000000000162394 + 1;
          bVar4 = 0x256 < iRam0000000000162394;
          iRam0000000000162394 = iVar12;
          if ((bVar4) && (iRam0000000000162398 < 0x14)) {
            fVar24 = 0.0;
            fVar25 = 0.0;
            iRam0000000000162398 = iRam0000000000162398 + 1;
            fVar15 = pfVar13[10] + -1.0;
            if (fVar15 != 0.0) {
              fVar25 = (float8)(pfVar13[0xe] / fVar15);
            }
            fVar15 = pfVar13[10] + 1.0;
            if (fVar15 != 0.0) {
              fVar24 = (float8)(pfVar13[0xe] / fVar15);
            }
            fVar17 = (float4)iRam0000000000161f90;
            fVar16 = (float4)iRam0000000000161fd4;
            fVar27 = (float8)fRam0000000000161fd8;
            fVar15 = fRam00000000000d8c98;
            if (1e+08 <= fRam00000000000d8c98) {
              fVar15 = 0.0;
            }
            fVar18 = (float4)atanf(1.0 / ABS(pfVar13[5]));
            (*pcVar3)((float8)(fVar17 / 600.0),(float8)(fVar16 / 600.0),(float8)fVar15,fVar27,fVar25
                      ,fVar24,(float8)(fVar18 * 114.59156),0,0x2b8d8 /* "camera: main-scene projection uploads %.1f per frame, %.1f of them cha..." */);
            if ((int4)iRam0000000000161d44 < 1) {
              axStack_300[0] = 0;
              pxVar6 = (xunknown1 *)0x2a2e4 /* " (none)" */;
            }
            else {
              iVar12 = 0;
              piVar11 = (int4 *)0x161d8c;
              iVar10 = 1;
              uVar7 = iRam0000000000161d44;
              do {
                iVar5 = *piVar11;
                if (iVar5 != 0) {
                  fVar24 = 0.0;
                  fVar25 = 0.0;
                  fVar15 = (float4)piVar11[-7] + -1.0;
                  if (fVar15 != 0.0) {
                    fVar25 = (float8)((float4)piVar11[-3] / fVar15);
                  }
                  fVar15 = (float4)piVar11[-7] + 1.0;
                  if (fVar15 != 0.0) {
                    fVar24 = (float8)((float4)piVar11[-3] / fVar15);
                  }
                  fVar15 = (float4)atanf(1.0 / ABS((float4)piVar11[-0xc]));
                  iVar5 = FUN_0007e108(fVar25,fVar24,(float8)(fVar15 * 114.59156),
                                       (float8)((float4)iVar5 / 600.0),axStack_300 + iVar12,
                                       0xffffffffffffffff,400 - (int8)iVar12,0x3f62a /* " [near %.2f far %.0f fov %.1f: %.0f draws/frame]" */);
                  uVar7 = iRam0000000000161d44;
                  iVar12 = iVar5 + iVar12;
                  *piVar11 = 0;
                }
                if ((int4)uVar7 <= iVar10) break;
                piVar11 = piVar11 + 0x12;
                iVar10 = iVar10 + 1;
              } while (iVar12 < 0x154);
              axStack_300[iVar12] = 0;
              pxVar6 = (xunknown1 *)0x2a2e4 /* " (none)" */;
              if (iVar12 != 0) {
                pxVar6 = axStack_300;
              }
            }
            (*xRam00000000001622b8)(0,0x29555 /* "camera: projections by draws%s | the most drawn = the last upload in %..." */,pxVar6,xRam0000000000162304,xRam0000000000162308);
            xRam0000000000162304 = 0;
            xRam0000000000162308 = 0;
            iRam0000000000162394 = 0;
            iRam0000000000161f90 = 0;
            iRam0000000000161fd4 = 0;
            fRam00000000000d8c98 = 1e+09;
            fRam0000000000161fd8 = 0.0;
          }
          goto code_r0x0007f094;
        }
      }
      iRam0000000000162300 = iRam0000000000162300 + 1;
      xRam0000000000162210 = xRam0000000000162210 + 1;
    }
    else {
      iRam0000000000162300 = iRam0000000000162300 + 1;
      xRam000000000016220c = xRam000000000016220c + 1;
    }
  }
code_r0x0007f094:
  if (*(int8 *)(iVar1 + 0x28) == iStack_b0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7f130  size=236 */
void FUN_0007f130(int8 param_1)

{
  xunknown4 xVar1;
  xunknown4 xVar2;
  int8 *piVar3;
  uint4 uVar4;
  int8 iVar5;
  char *pcVar6;
  uint4 uVar7;
  
  if (iRam00000000001622c0 == (uint4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *iRam00000000001622c0 & ((int4)*iRam00000000001622c0 >> 0x1f ^ 0xffffffffU);
  }
  (*pcRam00000000001622e8)(param_1);
  xVar2 = xRam00000000000d8ce0;
  if (((param_1 != 0) && (iRam00000000001622c0 != (uint4 *)0x0)) && (iRam00000000001622c8 != 0)) {
    uVar4 = *iRam00000000001622c0;
    if (0x1f < (int4)uVar4) {
      uVar4 = 0x20;
    }
    if ((int4)uVar7 < (int4)uVar4) {
      piVar3 = (int8 *)((uint8)uVar7 * 0x18 + 0x1623a0);
      iVar5 = (uint8)uVar4 - (uint8)uVar7;
      pcVar6 = (char *)(iRam00000000001622c8 + (uint8)uVar7 * 0x38 + 0x30);
      do {
        if ((*pcVar6 == '\x01') && (*(int8 *)(pcVar6 + -8) == 0)) {
          *piVar3 = param_1;
          xVar1 = *(xunknown4 *)(pcVar6 + -0x28);
          piVar3[1] = *(int8 *)(pcVar6 + -0x30);
          *(xunknown4 *)(piVar3 + 2) = xVar1;
          *(xunknown4 *)((int8)piVar3 + 0x14) = xVar2;
        }
        iVar5 = iVar5 + -1;
        piVar3 = piVar3 + 3;
        pcVar6 = pcVar6 + 0x38;
      } while (iVar5 != 0);
    }
  }
  return;
}

/* 0x7f21c  size=2404 */
void FUN_0007f21c(void)

{
  char cVar1;
  int8 iVar2;
  code *pcVar3;
  int8 iVar4;
  uint4 uVar5;
  float4 *pfVar6;
  uint8 uVar7;
  uint4 uVar8;
  int8 iVar9;
  xunknown8 xVar10;
  char *pcVar11;
  uint8 uVar12;
  float4 *pfVar13;
  xunknown8 *pxVar14;
  float4 *pfVar15;
  uint4 *puVar16;
  int8 iVar17;
  float4 fVar18;
  float4 fVar19;
  float4 fVar20;
  float4 fVar21;
  float4 fVar22;
  xunknown8 xVar23;
  uint1 uVar24;
  float4 fVar25;
  float4 fVar26;
  float4 fVar27;
  float4 fVar28;
  
  if ((iRam00000000001622c0 == (uint4 *)0x0) || (iRam00000000001622c8 == 0)) {
    return;
  }
  uVar12 = (uint8)uRam00000000001626a0;
  iVar2 = (uint8)uRam00000000001626a0 * 0x1504;
  puVar16 = (uint4 *)(iVar2 + 0x15c8b0);
  uVar8 = *iRam00000000001622c0;
  uRam00000000001626a0 = uRam00000000001626a0 + 1 & 3;
  *puVar16 = 0;
  if ((int4)uVar8 < 1) {
    uVar8 = 0;
  }
  else {
    if (0x1f < uVar8) {
      uVar8 = 0x20;
    }
    iVar17 = 0;
    pfVar15 = (float4 *)0x1623ac;
    do {
      iVar4 = iRam00000000001622c8;
      uVar5 = *puVar16;
      pxVar14 = (xunknown8 *)(iRam00000000001622c8 + iVar17);
      pfVar13 = (float4 *)(iVar2 + 0x15c8b4 + (int8)(int4)uVar5 * 0x38);
      fVar18 = *(float4 *)(pxVar14 + 1);
      *(xunknown8 *)pfVar13 = *pxVar14;
      pfVar13[2] = fVar18;
      fVar18 = *(float4 *)((int8)pxVar14 + 0x14);
      *(xunknown8 *)(pfVar13 + 3) = *(xunknown8 *)((int8)pxVar14 + 0xc);
      pfVar13[5] = fVar18;
      fVar18 = *(float4 *)(pxVar14 + 3);
      pfVar13[6] = fVar18;
      xVar10 = *(xunknown8 *)((int8)pxVar14 + 0x1c);
      pfVar13[9] = *(float4 *)((int8)pxVar14 + 0x24);
      *(xunknown8 *)(pfVar13 + 7) = xVar10;
      cVar1 = *(char *)(pxVar14 + 6);
      *(char *)(pfVar13 + 10) = cVar1;
      if ((cVar1 != '\x02') && (0.1 < fVar18)) {
        fVar18 = (float4)*(xunknown8 *)(pfVar13 + 7);
        fVar19 = (float4)((uint8)*(xunknown8 *)(pfVar13 + 7) >> 0x20);
        if (0.003 < fVar18 + fVar19 + pfVar13[9]) {
          *(xunknown1 *)((int8)pfVar13 + 0x29) = 0;
          pcVar3 = xRam00000000001622d8;
          if (cVar1 == '\x01') {
            if (*(int8 *)(iVar4 + iVar17 + 0x28) == 0) {
              if ((((pfVar15[2] != xRam00000000000d8ce0) ||
                   (iVar4 = *(int8 *)(pfVar15 + -3), iVar4 == 0)) ||
                  (0.01 < ABS(pfVar15[-1] - *pfVar13))) ||
                 ((0.01 < ABS(*pfVar15 - pfVar13[1]) ||
                  (fVar20 = pfVar13[2], 0.01 < ABS(pfVar15[1] - fVar20))))) {
                FUN_000c53d0(1,0x1626a8);
                uVar5 = *puVar16;
                goto code_r0x0007f334;
              }
              if ((int4)uVar5 < 0x60) {
                fVar25 = (float4)xRam00000000000d8cac * 0.6;
                pfVar13[6] = xRam00000000000d8ca4._4_4_;
                *(uint8 *)(pfVar13 + 7) = CONCAT44(fVar19 * fVar25,fVar18 * fVar25);
                pfVar13[9] = fVar25 * pfVar13[9];
                if (pcVar3 == (code *)0x0) {
                  xVar10 = CONCAT44(pfVar13[1],*pfVar13);
                }
                else {
                  pfVar6 = *(float4 **)(iVar4 + 0x18);
                  iVar4 = (*pcVar3)();
                  if ((pfVar6 != (float4 *)0x0) && (iVar4 != 0)) {
                    fVar25 = pfVar6[6];
                    fVar28 = pfVar6[10];
                    fVar18 = *(float4 *)(iVar4 + 0x10) + 0.05;
                    xVar10 = *(xunknown8 *)(pfVar6 + 4);
                    fVar26 = *(float4 *)(iVar4 + 8) +
                             (*(float4 *)(iVar4 + 0x14) - *(float4 *)(iVar4 + 8)) * 0.35;
                    fVar20 = (float4)xVar10;
                    xVar23 = *(xunknown8 *)(pfVar6 + 8);
                    fVar27 = *(float4 *)(iVar4 + 0xc) * 0.65;
                    fVar21 = (float4)xVar23;
                    fVar19 = pfVar6[0xc] + fVar18 * fVar20 + fVar26 * fVar21;
                    *pfVar13 = fVar19 - fVar27 * *pfVar6;
                    pfVar13[0xb] = fVar19 + fVar27 * *pfVar6;
                    fVar20 = fVar20 + fVar21 * -0.12;
                    fVar19 = (float4)((uint8)xVar10 >> 0x20) +
                             (float4)((uint8)xVar23 >> 0x20) * -0.12;
                    fVar22 = pfVar6[0xd] + fVar18 * pfVar6[5] + fVar26 * pfVar6[9];
                    fVar25 = fVar25 + fVar28 * -0.12;
                    pfVar13[1] = fVar22 - fVar27 * pfVar6[1];
                    fVar21 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar25 * fVar25);
                    pfVar13[0xc] = fVar22 + fVar27 * pfVar6[1];
                    fVar18 = pfVar6[0xe] + fVar18 * pfVar6[6] + fVar26 * pfVar6[10];
                    pfVar13[2] = fVar18 - fVar27 * pfVar6[2];
                    pfVar13[0xd] = fVar18 + fVar27 * pfVar6[2];
                    if (0.0001 < fVar21) {
                      *(uint8 *)(pfVar13 + 3) = CONCAT44(fVar19 / fVar21,fVar20 / fVar21);
                      pfVar13[5] = fVar25 / fVar21;
                    }
                    uVar5 = *puVar16;
                    *(xunknown2 *)(pfVar13 + 10) = 0x101;
                    *puVar16 = uVar5 + 1;
                    FUN_000c53d0(2,0x1626ac);
                    goto code_r0x0007f628;
                  }
                  xVar10 = *(xunknown8 *)pfVar13;
                  fVar20 = pfVar13[2];
                  uVar5 = *puVar16;
                }
                xVar23 = *(xunknown8 *)(pfVar13 + 3);
                fVar18 = pfVar13[5];
                *puVar16 = uVar5 + 1;
                *(uint8 *)pfVar13 =
                     CONCAT44((float4)((uint8)xVar10 >> 0x20) +
                              (float4)((uint8)xVar23 >> 0x20) * 2.0,
                              (float4)xVar10 + (float4)xVar23 * 2.0);
                pfVar13[2] = fVar20 + fVar18 * 2.0;
              }
code_r0x0007f628:
              FUN_000c53d0(1,0x1626a4);
            }
          }
          else {
code_r0x0007f334:
            *puVar16 = uVar5 + 1;
          }
        }
      }
      iVar17 = iVar17 + 0x38;
      pfVar15 = pfVar15 + 6;
    } while ((uint8)uVar8 * 0x38 != iVar17);
    uVar8 = *puVar16;
  }
  if ((((iRam00000000001622d0 != 0) && (iRam00000000001622e0 != 0)) &&
      (iVar17 = *(int8 *)(iRam00000000001622d0 + 0x18), iVar17 != 0)) &&
     ((xRam00000000000d8cb4._4_1_ & 1) != 0)) {
    fVar18 = (float4)xRam00000000000d8cc4 * (float4)xRam00000000000d8cc4;
    iVar4 = 0;
    do {
      fVar20 = xRam00000000000d8cbc._4_4_;
      fVar19 = (float4)xRam00000000000d8cbc;
      if (0x5f < (int4)*puVar16) break;
      pfVar15 = (float4 *)(iRam00000000001622e0 + iVar4 * 0x50);
      if (((*(int8 *)(pfVar15 + 4) != 0) && (7 < *(uint1 *)((int8)pfVar15 + 0x3b))) &&
         (pfVar15[10] <= 200.0)) {
        fVar25 = pfVar15[1] - *(float4 *)(iVar17 + 0x34);
        fVar21 = *pfVar15 - *(float4 *)(iVar17 + 0x30);
        fVar22 = pfVar15[2] - *(float4 *)(iVar17 + 0x38);
        if (fVar25 * fVar25 + fVar21 * fVar21 + fVar22 * fVar22 <= fVar18) {
          if (0 < (int4)uVar8) {
            iVar9 = 1;
            pfVar13 = (float4 *)(uVar12 * 0x1504 + 0x15c8bc);
            do {
              fVar25 = pfVar13[-1] - pfVar15[1];
              fVar21 = pfVar13[-2] - *pfVar15;
              fVar22 = *pfVar13 - pfVar15[2];
              fVar25 = fVar25 * fVar25 + fVar21 * fVar21 + fVar22 * fVar22;
              if ((int4)uVar8 <= iVar9) break;
              iVar9 = iVar9 + 1;
              pfVar13 = pfVar13 + 0xe;
            } while (2.25 <= fVar25);
            if (fVar25 < 2.25) goto code_r0x0007f718;
          }
          pxVar14 = (xunknown8 *)(iVar2 + 0x15c8b4 + (int8)(int4)*puVar16 * 0x38);
          fVar25 = pfVar15[2];
          fVar21 = (float4)*(uint1 *)((int8)pfVar15 + 0x3b) / 255.0;
          *pxVar14 = *(xunknown8 *)pfVar15;
          pxVar14[2] = 0;
          *(float4 *)(pxVar14 + 1) = fVar25;
          *(xunknown4 *)((int8)pxVar14 + 0xc) = 0;
          fVar20 = pfVar15[8] * fVar20;
          fVar25 = 12.0;
          if (fVar20 <= 12.0) {
            fVar25 = fVar20;
          }
          fVar22 = 1.5;
          if (1.5 <= fVar20) {
            fVar22 = fVar25;
          }
          fVar25 = (fVar21 * fVar19) / 255.0;
          *(float4 *)(pxVar14 + 3) = fVar22;
          fVar19 = (float4)NEON_ucvtf((uint4)*(uint1 *)(pfVar15 + 0xe));
          fVar19 = fVar25 * fVar19;
          *(float4 *)((int8)pxVar14 + 0x1c) = fVar19;
          fVar20 = (float4)NEON_ucvtf((uint4)*(uint1 *)((int8)pfVar15 + 0x39));
          fVar20 = fVar25 * fVar20;
          *(float4 *)(pxVar14 + 4) = fVar20;
          uVar24 = *(uint1 *)((int8)pfVar15 + 0x3a);
          *(xunknown2 *)(pxVar14 + 5) = 0;
          iVar9 = *(int8 *)(pfVar15 + 0x12);
          fVar26 = (float4)NEON_ucvtf((uint4)uVar24);
          fVar25 = fVar25 * fVar26;
          *(float4 *)((int8)pxVar14 + 0x24) = fVar25;
          if ((iVar9 != 0) && (iVar9 = *(int8 *)(iVar9 + 0x18), iVar9 != 0)) {
            fVar27 = (float4)((uint8)*(xunknown8 *)(iVar9 + 0x10) >> 0x20);
            fVar26 = (float4)*(xunknown8 *)(iVar9 + 0x10);
            fVar28 = (pfVar15[1] - *(float4 *)(iVar9 + 0x34)) * fVar27 +
                     fVar26 * (*pfVar15 - *(float4 *)(iVar9 + 0x30)) +
                     *(float4 *)(iVar9 + 0x18) * (pfVar15[2] - *(float4 *)(iVar9 + 0x38));
            if ((*(uint1 *)(pfVar15 + 0xe) < 0x97) ||
               (((*(uint1 *)((int8)pfVar15 + 0x39) < 0x97 || (fVar28 <= 0.5)) ||
                (*(uint1 *)((int8)pfVar15 + 0x3a) < 0x6f)))) {
              if (fVar28 < -0.5) {
                fVar21 = 3.0;
                if (fVar22 <= 3.0) {
                  fVar21 = fVar22;
                }
                *(float4 *)(pxVar14 + 3) = fVar21;
              }
            }
            else {
              fVar26 = fVar26 + (float4)*(xunknown8 *)(iVar9 + 0x20) * -0.12;
              fVar27 = fVar27 + (float4)((uint8)*(xunknown8 *)(iVar9 + 0x20) >> 0x20) * -0.12;
              fVar19 = *(float4 *)(iVar9 + 0x18) + *(float4 *)(iVar9 + 0x28) * -0.12;
              fVar20 = SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar19 * fVar19);
              if (0.0001 < fVar20) {
                *(float4 *)((int8)pxVar14 + 0x14) = fVar19 / fVar20;
                *(uint8 *)((int8)pxVar14 + 0xc) = CONCAT44(fVar27 / fVar20,fVar26 / fVar20);
              }
              fVar19 = (float4)xRam00000000000d8cac;
              *(xunknown1 *)(pxVar14 + 5) = 1;
              fVar19 = (fVar21 * fVar19) / 255.0;
              *(float4 *)(pxVar14 + 3) = xRam00000000000d8ca4._4_4_;
              fVar20 = (float4)NEON_ucvtf((uint4)*(uint1 *)(pfVar15 + 0xe));
              *(float4 *)((int8)pxVar14 + 0x1c) = fVar19 * fVar20;
              fVar20 = (float4)NEON_ucvtf((uint4)*(uint1 *)((int8)pfVar15 + 0x39));
              *(float4 *)(pxVar14 + 4) = fVar19 * fVar20;
              fVar20 = (float4)NEON_ucvtf((uint4)*(uint1 *)((int8)pfVar15 + 0x3a));
              *(float4 *)((int8)pxVar14 + 0x24) = fVar19 * fVar20;
              FUN_000c53d0(1,0x1626ac);
              fVar19 = *(float4 *)((int8)pxVar14 + 0x1c);
              fVar20 = *(float4 *)(pxVar14 + 4);
              fVar25 = *(float4 *)((int8)pxVar14 + 0x24);
            }
          }
          if (0.01 < fVar19 + fVar20 + fVar25) {
            *puVar16 = *puVar16 + 1;
            FUN_000c53d0(1,0x1626b0);
          }
        }
      }
code_r0x0007f718:
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x40);
  }
  if (0 < (int4)uVar8) {
    uVar7 = 0;
    do {
      pfVar15 = (float4 *)(iVar2 + 0x15c8b4 + uVar7 * 0x38);
      if ((*(char *)(pfVar15 + 10) == '\x01') && ((int4)uVar8 < (int4)*puVar16)) {
        pcVar11 = (char *)(uVar12 * 0x1504 + (uint8)uVar8 * 0x38 + 0x15c8dc);
        uVar5 = uVar8;
        do {
          if ((*pcVar11 == '\x01') &&
             ((pfVar15[1] - *(float4 *)(pcVar11 + -0x24)) *
              (pfVar15[1] - *(float4 *)(pcVar11 + -0x24)) +
              (*pfVar15 - *(float4 *)(pcVar11 + -0x28)) * (*pfVar15 - *(float4 *)(pcVar11 + -0x28))
              + (pfVar15[2] - *(float4 *)(pcVar11 + -0x20)) *
                (pfVar15[2] - *(float4 *)(pcVar11 + -0x20)) < 16.0)) {
            pfVar15[8] = 0.0;
            pfVar15[9] = 0.0;
            pfVar15[7] = 0.0;
            break;
          }
          uVar5 = uVar5 + 1;
          pcVar11 = pcVar11 + 0x38;
        } while ((int4)uVar5 < (int4)*puVar16);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  xRam00000000000d8ce0 = (float4)((int4)xRam00000000000d8ce0 + 1);
                    /* WARNING: Could not recover jumptable at 0x000ca0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3fc0)(6,uVar12);
  return;
}

/* 0x7fb80  size=16 */
void FUN_0007fb80(xunknown8 param_1,uint4 param_2)

{
  uRam00000000000d8ce4 = param_2 & 3;
  return;
}

/* 0x7fb90  size=5696 */
void FUN_0007fb90(void)

{
  bool bVar1;
  uint8 uVar2;
  int8 iVar3;
  xunknown1 axVar4 [16];
  xunknown1 axVar5 [16];
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  code *pcVar8;
  bool bVar9;
  int4 iVar10;
  xunknown4 xVar11;
  xunknown4 xVar12;
  int4 iVar13;
  int4 iVar14;
  xunknown8 xVar15;
  int8 iVar16;
  float4 *pfVar17;
  int4 iVar18;
  int4 iVar19;
  int4 iVar20;
  uint8 uVar21;
  int8 iVar22;
  int4 *piVar23;
  float4 *pfVar24;
  float4 fVar25;
  xunknown1 axVar26 [16];
  xunknown1 axVar27 [16];
  xunknown1 axVar28 [16];
  xunknown1 axVar29 [16];
  uint2 uVar30;
  float4 fVar31;
  float4 fVar32;
  float4 fVar33;
  float4 fVar34;
  float4 fVar35;
  float4 fVar36;
  float4 fVar37;
  float4 fVar38;
  float4 fVar39;
  float4 fVar40;
  float4 fVar41;
  int2 iVar42;
  float4 fVar43;
  int2 iVar44;
  int2 iVar45;
  float4 fVar46;
  float4 fVar47;
  float4 fVar48;
  float4 fVar49;
  float4 fVar50;
  int4 iStack_1ec;
  xunknown8 xStack_1e8;
  xunknown8 xStack_1e0;
  xunknown8 xStack_1d8;
  xunknown8 xStack_188;
  float4 fStack_128;
  float4 fStack_124;
  float4 fStack_120;
  float4 fStack_11c;
  float4 fStack_118;
  float4 fStack_114;
  float4 fStack_110;
  float4 fStack_10c;
  float4 fStack_108;
  float4 fStack_104;
  float4 fStack_100;
  float4 fStack_fc;
  float4 fStack_f8;
  float4 fStack_f4;
  float4 fStack_f0;
  xunknown8 xStack_ec;
  float4 fStack_e4;
  float4 fStack_e0;
  float4 fStack_dc;
  float4 fStack_d8;
  float4 fStack_d4;
  float4 fStack_d0;
  float4 fStack_cc;
  float4 fStack_c8;
  float4 fStack_c4;
  float4 fStack_c0;
  float4 fStack_bc;
  float4 fStack_b8;
  float4 fStack_b4;
  int8 iStack_b0;
  
  pxVar6 = pxRam00000000000d3208;
  iVar3 = tpidr_el0;
  iStack_b0 = *(int8 *)(iVar3 + 0x28);
  xRam0000000000162208 = 0;
  if (((((*puRam00000000000d3610 >> 2 & 1) != 0) || ((uRam00000000001626b4 & 1) != 0)) ||
      (uRam0000000000162224 == '\0')) ||
     ((uRam0000000000162225 == '\0' || ((int4)uRam00000000000d8ce4 < 0)))) goto code_r0x00081160;
  uVar2 = (uint8)uRam00000000000d8ce4;
  piVar23 = (int4 *)(uVar2 * 0x1504 + 0x15c8b0);
  if (*piVar23 == 0) goto code_r0x00081160;
  fStack_128 = 0.0;
  (*(code *)*pxRam00000000000d3208)(0x8ca6,&fStack_128);
  if (fStack_128 == 0.0) goto code_r0x00081160;
  xStack_1e0 = 0;
  xStack_1d8 = 0;
  (*(code *)*pxVar6)(0xba2,&xStack_1e0);
  xStack_1e8 = 0;
  compat__SceneSize_plt((int8)&xStack_1e8 + 4,&xStack_1e8);
  iVar13 = xStack_1e8._4_4_;
  if ((int4)xStack_1d8 != xStack_1e8._4_4_) goto code_r0x00081160;
  iVar14 = (int4)xStack_1e8;
  if (xStack_1d8._4_4_ != (int4)xStack_1e8) goto code_r0x00081160;
  iVar10 = scene__DepthTexture_plt();
  if (iVar10 == 0) goto code_r0x00081160;
  xStack_188 = 0;
  gl__SavedState__Save_plt(&xStack_1e0);
  if ((uRam00000000001626b5 & 1) == 0) {
    uRam00000000001626b5 = 1;
    fStack_128 = 2.8026e-45;
    fStack_118 = 0.0;
    fStack_124 = 0.0;
    fStack_120 = 0.0;
    fStack_11c = (float4)((uint4)fStack_11c & 0xffffff00);
    uVar21 = gl__Load_plt(&fStack_128,xRam00000000001622b8);
    if (((uVar21 & 1) != 0) && (((uint4)fStack_120 & 1) != 0)) {
      xVar11 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x23c8a /* "lights" */,xRam00000000001622b8);
      xVar12 = gl__Compile_plt(0x8b30,0x31186 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x23c8a /* "lights" */,xRam00000000001622b8);
      xVar15 = gl__Link_plt(xVar11,xVar12,0x23c8a /* "lights" */,xRam00000000001622b8);
      pxVar6 = pxRam00000000000d3408;
      iRam00000000001626e0 = (int4)xVar15;
      if (iRam00000000001626e0 != 0) {
        xRam00000000000d8ce8 = (*(code *)*pxRam00000000000d3408)(xVar15,0x2d517 /* "uDepth" */);
        xRam00000000000d8cec = (*(code *)*pxVar6)(iRam00000000001626e0,0x23c91 /* "uInvVP" */);
        xRam00000000000d8d00 = (*(code *)*pxVar6)(iRam00000000001626e0,0x34704);
        xRam00000000000d8d08 = (*(code *)*pxVar6)(iRam00000000001626e0,0x39ec9);
        xRam00000000000d8d0c = (*(code *)*pxVar6)(iRam00000000001626e0,0x3a9af);
        xRam00000000000d8cf4 = (*(code *)*pxVar6)(iRam00000000001626e0,0x30ff1 /* "uCam" */);
        xRam00000000000d8cf8 = (*(code *)*pxVar6)(iRam00000000001626e0,0x274f3 /* "uSize" */);
        xRam00000000000d8cf0 = (*(code *)*pxVar6)(iRam00000000001626e0,0x2a185);
        xRam00000000000d8d18 = (*(code *)*pxVar6)(iRam00000000001626e0,0x23c98);
        xRam00000000000d8cfc = (*(code *)*pxVar6)(iRam00000000001626e0,0x2b972 /* "uOcc" */);
        xRam00000000000d8d10 = (*(code *)*pxVar6)(iRam00000000001626e0,0x39ecd);
        xRam00000000000d8d14 = (*(code *)*pxVar6)(iRam00000000001626e0,0x2b977);
        xRam00000000000d8d04 = (*(code *)*pxVar6)(iRam00000000001626e0,0x2d0bb);
        xVar11 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x34708 /* "lights-blur" */,xRam00000000001622b8);
        xVar12 = gl__Compile_plt(0x8b30,0x3a9b3 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x34708 /* "lights-blur" */,xRam00000000001622b8);
        xVar15 = gl__Link_plt(xVar11,xVar12,0x34708 /* "lights-blur" */,xRam00000000001622b8);
        iRam00000000001626f8 = (int4)xVar15;
        if (iRam00000000001626f8 != 0) {
          xRam00000000000d8d1c = (*(code *)*pxVar6)(xVar15,0x40be1 /* "uTex" */);
          xRam00000000000d8d20 = (*(code *)*pxVar6)(iRam00000000001626f8,0x2a153 /* "uTexel" */);
          pxVar6 = pxRam00000000000d3350;
          (*(code *)*pxRam00000000000d3350)(1,0x162700);
          pxVar7 = pxRam00000000000d3360;
          (*(code *)*pxRam00000000000d3360)(xRam0000000000162700,0x2801,0x2601);
          (*(code *)*pxVar7)(xRam0000000000162700,0x2800,0x2601);
          (*(code *)*pxVar7)(xRam0000000000162700,0x2802,0x812f);
          (*(code *)*pxVar7)(xRam0000000000162700,0x2803,0x812f);
          (*(code *)*pxRam00000000000d3500)(1,0x1626e4);
          (*(code *)*pxVar6)(1,0x1626e8);
          (*(code *)*pxVar7)(xRam00000000001626e8,0x2801,0x2600);
          (*(code *)*pxVar7)(xRam00000000001626e8,0x2800,0x2600);
          (*(code *)*pxVar7)(xRam00000000001626e8,0x2802,0x812f);
          (*(code *)*pxVar7)(xRam00000000001626e8,0x2803,0x812f);
          xVar15 = 0x3a2a5 /* "unavailable" */;
          uRam00000000001626b8 = fStack_11c._0_1_;
          if (fStack_11c._0_1_ == 1) {
            (*(code *)*pxRam00000000000d35a8)(4,0x1626c4);
            xVar15 = 0x3721d;
            if (uRam00000000001626b8 == 0) {
              xVar15 = 0x3a2a5 /* "unavailable" */;
            }
          }
          (*xRam00000000001622b8)(0,0x3112d /* "lights: ready - screen-space lights at 1/2 res, up to %d per frame (ga..." */,0x60,xVar15);
          goto code_r0x0007fcb8;
        }
      }
    }
    uRam00000000001626b4 = 1;
    gl__SavedState__Restore_plt(&xStack_1e0);
    xVar15 = 0x40737 /* "lights: shader failed - off" */;
  }
  else {
code_r0x0007fcb8:
    iVar19 = iVar13 / 2;
    iVar20 = iVar14 / 2;
    if (((iRam00000000001626fc != 0) && (iVar19 == iRam00000000001626d8)) &&
       (iVar20 == iRam00000000001626dc)) {
code_r0x0007fcf4:
      if ((uRam00000000001626b8 & 1) == 0) {
        bVar1 = false;
        uRam00000000001626bc = uRam00000000001626bc + 1 & 3;
      }
      else {
        FUN_000815d8();
        uVar21 = (uint8)uRam00000000001626bc;
        uRam00000000001626bc = uRam00000000001626bc + 1 & 3;
        if ((uRam00000000001626b8 == 1) && ((*(uint1 *)(uVar21 + 0x1626c0) & 1) == 0)) {
          (*(code *)*pxRam00000000000d35b8)(0x88bf,*(xunknown4 *)(uVar21 * 4 + 0x1626c4));
          bVar1 = true;
          *(xunknown1 *)(uVar21 + 0x1626c0) = 1;
        }
        else {
          bVar1 = false;
        }
      }
      (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000001626d4);
      (*(code *)*pxRam00000000000d3520)(0,0,iRam00000000001626d8,iRam00000000001626dc);
      pxVar6 = pxRam00000000000d3530;
      (*(code *)*pxRam00000000000d3530)(0xc11);
      (*(code *)*pxVar6)(0xb71);
      (*(code *)*pxVar6)(0xb44);
      (*(code *)*pxVar6)(0xb90);
      bVar9 = true;
      (*(code *)*pxRam00000000000d3540)(1,1,1,1);
      (*(code *)*pxRam00000000000d3548)(0);
      (*(code *)*pxRam00000000000d3560)(ZEXT816(0),0,0,0x3f800000);
      (*(code *)*pxRam00000000000d3558)(0x4000);
      (*(code *)*pxRam00000000000d33d8)(iRam00000000001626e0);
      (*(code *)*pxRam00000000000d3508)(xRam00000000001626e4);
      (*(code *)*pxRam00000000000d3310)(0x84c0);
      (*(code *)*pxRam00000000000d3300)(0xde1,iVar10);
      (*(code *)*pxRam00000000000d3358)(0,xRam00000000001626e8);
      (*(code *)*pxRam00000000000d3410)(xRam00000000000d8ce8,0);
      pxVar6 = pxRam00000000000d34a8;
      (*(code *)*pxRam00000000000d34a8)(xRam00000000000d8cec,1,0,&xRam0000000000162350);
      (*(code *)*pxVar6)(xRam00000000000d8cf0,1,0,&xRam0000000000162310);
      (*(code *)*pxRam00000000000d3478)
                ((float4)xRam00000000001622a8,xRam00000000001622a8._4_4_,xRam00000000001622b0,
                 xRam00000000000d8cf4);
      pxVar6 = pxRam00000000000d3480;
      (*(code *)*pxRam00000000000d3480)
                (1.0 / (float4)iRam00000000001626d8,1.0 / (float4)iRam00000000001626dc,
                 1.0 / (float4)iVar13,1.0 / (float4)iVar14,xRam00000000000d8cf8);
      xVar11 = (xunknown4)xRam00000000000d8ccc;
      if (xRam00000000000d8cc4._4_1_ == '\0') {
        xVar11 = 0;
      }
      (*(code *)*pxVar6)(xVar11,xRam00000000000d8ccc._4_4_,0,0,xRam00000000000d8cfc);
      pxVar6 = pxRam00000000000d3528;
      (*(code *)*pxRam00000000000d3528)(0xbe2);
      (*(code *)*pxRam00000000000d32b8)(1,1,0,1);
      (*(code *)*pxRam00000000000d32c0)(0x8006,0x8006);
      (*(code *)*pxVar6)(0xc11);
      if (*piVar23 < 1) {
        iStack_1ec = 0;
      }
      else {
        iVar22 = 0;
        iStack_1ec = 0;
        do {
          fVar40 = 1.0;
          pfVar24 = (float4 *)(uVar2 * 0x1504 + 0x15c8b4 + iVar22 * 0x38);
          if (0.05 <= (pfVar24[7] + pfVar24[8] + pfVar24[9]) * fRam00000000000d8ca0) {
            fVar25 = pfVar24[6] * (float4)xRam00000000000d8ca4;
            if (*(char *)(pfVar24 + 10) == '\x01') {
              fVar35 = pfVar24[3];
              fVar33 = pfVar24[4];
              fVar31 = pfVar24[5];
              fVar34 = SQRT(fVar33 * fVar33 + fVar35 * fVar35 + fVar31 * fVar31);
              if (fVar34 <= 0.0001) goto code_r0x000809f4;
              fVar35 = fVar35 / fVar34;
              fStack_f8 = *pfVar24;
              fStack_f4 = pfVar24[1];
              fStack_f0 = pfVar24[2];
              fStack_120 = pfVar24[2];
              fVar33 = fVar33 / fVar34;
              fVar31 = fVar31 / fVar34;
              fVar36 = SQRT(fVar35 * fVar35 + fVar33 * fVar33);
              fVar34 = fVar40;
              fVar32 = fVar40;
              if (0.0001 <= fVar36) {
                fVar34 = fVar36;
                fVar32 = fVar33;
              }
              fVar37 = 0.0;
              if (0.0001 <= fVar36) {
                fVar37 = -fVar35;
              }
              fVar32 = fVar32 / fVar34;
              fVar37 = fVar37 / fVar34;
              fVar38 = xRam00000000000d8cac._4_4_ * 1.05;
              fStack_128 = (float4)*(xunknown8 *)pfVar24;
              fStack_124 = (float4)((uint8)*(xunknown8 *)pfVar24 >> 0x20);
              fVar47 = (float4)xRam00000000000d8cb4 * 1.05;
              fVar48 = -(fVar31 * fVar32) + fVar35 * 0.0;
              fVar34 = fVar31 + fVar38 * -0.0;
              fVar36 = fVar35 + fVar38 * fVar32;
              fVar50 = fVar31 + fVar38 * 0.0;
              fVar46 = fVar33 * -0.0 + fVar31 * fVar37;
              fVar39 = fVar35 - fVar38 * fVar32;
              fVar41 = fVar33 - fVar38 * fVar37;
              fVar49 = fVar33 + fVar38 * fVar37;
              fVar43 = -(fVar35 * fVar37) + fVar33 * fVar32;
              fVar32 = fVar36 - fVar47 * fVar46;
              fVar31 = fVar39 - fVar47 * fVar46;
              fVar33 = fVar41 - fVar47 * fVar48;
              fVar39 = fVar39 + fVar47 * fVar46;
              fVar41 = fVar41 + fVar47 * fVar48;
              fVar37 = fVar49 - fVar47 * fVar48;
              fVar35 = fVar34 - fVar47 * fVar43;
              fVar38 = fVar50 - fVar47 * fVar43;
              fStack_11c = fStack_f8 + fVar31 * fVar25;
              fStack_118 = fStack_f4 + fVar33 * fVar25;
              fVar34 = fVar34 + fVar47 * fVar43;
              fVar36 = fVar36 + fVar47 * fVar46;
              fStack_100 = fStack_f4 + fVar41 * fVar25;
              fVar49 = fVar49 + fVar47 * fVar48;
              fVar50 = fVar50 + fVar47 * fVar43;
              fStack_114 = fStack_f0 + fVar35 * fVar25;
              fStack_104 = fStack_f8 + fVar39 * fVar25;
              fStack_110 = fStack_f8 + fVar32 * fVar25;
              fStack_10c = fStack_f4 + fVar37 * fVar25;
              fStack_108 = fStack_f0 + fVar38 * fVar25;
              fStack_fc = fStack_f0 + fVar34 * fVar25;
              fStack_f8 = fStack_f8 + fVar36 * fVar25;
              fStack_f0 = fStack_f0 + fVar50 * fVar25;
              fStack_f4 = fStack_f4 + fVar49 * fVar25;
              if (*(char *)((int8)pfVar24 + 0x29) == '\0') {
                iVar16 = 5;
              }
              else {
                fStack_bc = pfVar24[0xb];
                fStack_b8 = pfVar24[0xc];
                fStack_b4 = pfVar24[0xd];
                xStack_ec = *(xunknown8 *)(pfVar24 + 0xb);
                fStack_e4 = pfVar24[0xd];
                fStack_e0 = fStack_bc + fVar31 * fVar25;
                fStack_dc = fStack_b8 + fVar33 * fVar25;
                fStack_d8 = fStack_b4 + fVar35 * fVar25;
                fStack_d4 = fStack_bc + fVar32 * fVar25;
                iVar16 = 10;
                fStack_d0 = fStack_b8 + fVar37 * fVar25;
                fStack_cc = fStack_b4 + fVar38 * fVar25;
                fStack_c8 = fStack_bc + fVar39 * fVar25;
                fStack_c4 = fStack_b8 + fVar41 * fVar25;
                fStack_c0 = fStack_b4 + fVar34 * fVar25;
                fStack_bc = fStack_bc + fVar36 * fVar25;
                fStack_b8 = fStack_b8 + fVar49 * fVar25;
                fStack_b4 = fStack_b4 + fVar50 * fVar25;
              }
            }
            else {
code_r0x000809f4:
              iVar16 = 8;
              fStack_128 = *pfVar24 - fVar25;
              fStack_124 = pfVar24[1] - fVar25;
              fStack_120 = pfVar24[2] - fVar25;
              fStack_11c = fVar25 + *pfVar24;
              fStack_10c = fVar25 + pfVar24[1];
              fStack_f0 = fVar25 + pfVar24[2];
              xStack_ec = CONCAT44(fStack_124,fStack_11c);
              fStack_118 = fStack_124;
              fStack_114 = fStack_120;
              fStack_110 = fStack_128;
              fStack_108 = fStack_120;
              fStack_104 = fStack_11c;
              fStack_100 = fStack_10c;
              fStack_fc = fStack_120;
              fStack_f8 = fStack_128;
              fStack_f4 = fStack_124;
              fStack_e4 = fStack_f0;
              fStack_e0 = fStack_128;
              fStack_dc = fStack_10c;
              fStack_d8 = fStack_f0;
              fStack_d4 = fStack_11c;
              fStack_d0 = fStack_10c;
              fStack_cc = fStack_f0;
            }
            axVar26._8_8_ = xRam0000000000021f88;
            axVar26._0_8_ = xRam0000000000021f80;
            pfVar17 = &fStack_120;
            do {
              fVar34 = pfVar17[-2];
              fVar33 = pfVar17[-1];
              fVar25 = *pfVar17;
              fVar31 = xRam0000000000162348._4_4_ +
                       xRam0000000000162328._4_4_ * fVar33 + fVar34 * xRam0000000000162318._4_4_ +
                       fVar25 * xRam0000000000162338._4_4_;
              if (fVar31 <= 0.01) {
                iVar13 = 0;
                iVar14 = 0;
                iVar19 = iRam00000000001626dc;
                iVar10 = iRam00000000001626d8;
                goto code_r0x00080bdc;
              }
              iVar16 = iVar16 + -1;
              fVar35 = (float4)xRam0000000000162340 +
                       (float4)xRam0000000000162320 * fVar33 + (float4)xRam0000000000162310 * fVar34
                       + (float4)xRam0000000000162330 * fVar25;
              fVar25 = (float4)((uint8)xRam0000000000162340 >> 0x20) +
                       (float4)((uint8)xRam0000000000162320 >> 0x20) * fVar33 +
                       (float4)((uint8)xRam0000000000162310 >> 0x20) * fVar34 +
                       (float4)((uint8)xRam0000000000162330 >> 0x20) * fVar25;
              fVar33 = fVar35 / fVar31;
              fVar34 = fVar25 / fVar31;
              fVar35 = fVar35 / fVar31;
              fVar25 = fVar25 / fVar31;
              iVar42 = -(uint2)(fVar34 < axVar26._4_4_);
              iVar44 = -(uint2)(axVar26._8_4_ < fVar35);
              iVar45 = -(uint2)(axVar26._12_4_ < fVar25);
              axVar4._4_4_ = fVar34;
              axVar4._0_4_ = fVar33;
              axVar4._8_4_ = fVar35;
              axVar4._12_4_ = fVar25;
              axVar5._4_2_ = iVar42;
              axVar5._0_4_ = (int4)(int2)-(uint2)(fVar33 < axVar26._0_4_);
              axVar5._6_2_ = iVar42 >> 0xf;
              axVar5._8_2_ = iVar44;
              axVar5._10_2_ = iVar44 >> 0xf;
              axVar5._12_2_ = iVar45;
              axVar5._14_2_ = iVar45 >> 0xf;
              axVar26 = axVar26 ^ (axVar26 ^ axVar4) & axVar5;
              pfVar17 = pfVar17 + 3;
            } while (iVar16 != 0);
            uVar30 = NEON_umaxv(CONCAT44(CONCAT22(-(uint2)(axVar26._12_4_ <
                                                          (float4)((uint8)xRam0000000000022088 >>
                                                                  0x20)),
                                                  -(uint2)(axVar26._8_4_ <
                                                          (float4)xRam0000000000022088)),
                                         CONCAT22(-(uint2)((float4)((uint8)xRam0000000000022080 >>
                                                                   0x20) < axVar26._4_4_),
                                                  -(uint2)((float4)xRam0000000000022080 <
                                                          axVar26._0_4_))),2);
            if ((uVar30 & 1) == 0) {
              iVar10 = (int4)((axVar26._0_4_ * 0.5 + 0.5) * (float4)iRam00000000001626d8);
              iVar19 = (int4)((axVar26._8_4_ * 0.5 + 0.5) * (float4)iRam00000000001626d8);
              iVar20 = (int4)((axVar26._4_4_ * 0.5 + 0.5) * (float4)iRam00000000001626dc);
              iVar14 = iRam00000000001626d8;
              if (iVar10 <= iRam00000000001626d8) {
                iVar14 = iVar10;
              }
              iVar18 = (int4)((axVar26._12_4_ * 0.5 + 0.5) * (float4)iRam00000000001626dc);
              iVar13 = 0;
              if (-1 < iVar10) {
                iVar13 = iVar14;
              }
              iVar14 = iRam00000000001626d8;
              if (iVar19 <= iRam00000000001626d8) {
                iVar14 = iVar19;
              }
              iVar10 = 1;
              if (-1 < iVar19) {
                iVar10 = iVar14 + 1;
              }
              iVar19 = iRam00000000001626dc;
              if (iVar20 <= iRam00000000001626dc) {
                iVar19 = iVar20;
              }
              iVar14 = 0;
              if (-1 < iVar20) {
                iVar14 = iVar19;
              }
              iVar20 = iRam00000000001626dc;
              if (iVar18 <= iRam00000000001626dc) {
                iVar20 = iVar18;
              }
              iVar19 = 1;
              if (-1 < iVar18) {
                iVar19 = iVar20 + 1;
              }
              if (iRam00000000001626d8 <= iVar10) {
                iVar10 = iRam00000000001626d8;
              }
              if (iRam00000000001626dc <= iVar19) {
                iVar19 = iRam00000000001626dc;
              }
              if (iVar13 < iVar10 && iVar14 < iVar19) {
code_r0x00080bdc:
                (*(code *)*pxRam00000000000d32e8)(iVar13,iVar14,iVar10 - iVar13,iVar19 - iVar14);
                pxVar6 = pxRam00000000000d3480;
                (*(code *)*pxRam00000000000d3480)
                          (*pfVar24,pfVar24[1],pfVar24[2],pfVar24[6] * (float4)xRam00000000000d8ca4,
                           xRam00000000000d8d00);
                fVar25 = 0.0;
                xVar15 = 0;
                if (*(char *)((int8)pfVar24 + 0x29) != '\0') {
                  xVar15 = 0x3f800000;
                }
                (*(code *)*pxVar6)(pfVar24[0xb],pfVar24[0xc],pfVar24[0xd],xVar15,
                                   xRam00000000000d8d04);
                xVar15 = 0x3f800000;
                if (*(char *)(pfVar24 + 10) != '\x01') {
                  xVar15 = 0;
                }
                (*(code *)*pxVar6)(pfVar24[7] * fRam00000000000d8ca0,
                                   fRam00000000000d8ca0 * pfVar24[8],
                                   fRam00000000000d8ca0 * pfVar24[9],xVar15,xRam00000000000d8d08);
                pxVar6 = pxRam00000000000d3480;
                fVar35 = pfVar24[3];
                fVar33 = pfVar24[4];
                fVar34 = -1.0;
                fVar32 = pfVar24[5];
                fVar36 = SQRT(fVar33 * fVar33 + fVar35 * fVar35 + fVar32 * fVar32);
                fVar31 = 0.0;
                if (0.0001 < fVar36) {
                  fVar31 = fVar35 / fVar36;
                  fVar25 = fVar33 / fVar36;
                  fVar34 = fVar32 / fVar36;
                }
                fVar33 = SQRT(fVar31 * fVar31 + fVar25 * fVar25);
                bVar9 = 0.0001 <= fVar33;
                if (bVar9) {
                  fVar40 = fVar25;
                }
                fVar35 = 1.0;
                if (bVar9) {
                  fVar35 = fVar33;
                }
                fVar40 = fVar40 / fVar35;
                fVar33 = 0.0;
                if (bVar9) {
                  fVar33 = -fVar31;
                }
                fVar33 = fVar33 / fVar35;
                (*(code *)*pxRam00000000000d3480)
                          (fVar31,fVar25,fVar34,xRam00000000000d8cac._4_4_,xRam00000000000d8d0c);
                pxVar7 = pxRam00000000000d3478;
                (*(code *)*pxRam00000000000d3478)(fVar40,fVar33,0,xRam00000000000d8d10);
                (*(code *)*pxVar7)(fVar25 * -0.0 + fVar34 * fVar33,-(fVar34 * fVar40) + fVar31 * 0.0
                                   ,-(fVar31 * fVar33) + fVar25 * fVar40,xRam00000000000d8d14);
                xVar15 = 0;
                if (*(char *)(pfVar24 + 10) != '\x01') {
                  xVar15 = 0x3f800000;
                }
                (*(code *)*pxVar6)((float4)xRam00000000000d8cb4,0,0,xVar15,xRam00000000000d8d18);
                (*(code *)*pxRam00000000000d3518)(4,0,3);
                iStack_1ec = iStack_1ec + 1;
                if ((*(char *)(pfVar24 + 10) == '\x01') &&
                   (iRam00000000001626ec = iRam00000000001626ec + 1, iRam00000000001626f0 < 3)) {
                  iRam00000000001626f0 = iRam00000000001626f0 + 1;
                  axVar27._0_8_ = (float8)*pfVar24;
                  axVar27._8_8_ = 0;
                  (*xRam00000000001622b8)
                            (axVar27,(float8)pfVar24[1],(float8)pfVar24[2],
                             (float8)(float4)xRam00000000001622a8,(float8)xRam00000000001622a8._4_4_
                             ,(float8)xRam00000000001622b0,(float8)pfVar24[3],(float8)pfVar24[4],0,
                             0x3944c /* "lights: spot #%d at %.1f %.1f %.1f (camera %.1f %.1f %.1f) dir %.2f %...." */);
                }
              }
            }
          }
          pxVar6 = pxRam00000000000d3530;
          iVar22 = iVar22 + 1;
        } while (iVar22 < *piVar23);
        if (iStack_1ec == 0) {
          bVar9 = true;
        }
        else {
          (*(code *)*pxRam00000000000d3530)(0xc11);
          (*(code *)*pxVar6)(0xbe2);
          (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000001626f4);
          (*(code *)*pxRam00000000000d33d8)(iRam00000000001626f8);
          (*(code *)*pxRam00000000000d3310)(0x84c0);
          (*(code *)*pxRam00000000000d3300)(0xde1,iRam00000000001626fc);
          (*(code *)*pxRam00000000000d3358)(0,xRam0000000000162700);
          (*(code *)*pxRam00000000000d3410)(xRam00000000000d8d1c,0);
          (*(code *)*pxRam00000000000d3420)
                    (1.0 / (float4)iRam00000000001626d8,1.0 / (float4)iRam00000000001626dc,
                     xRam00000000000d8d20);
          (*(code *)*pxRam00000000000d3518)(4,0,3);
          bVar9 = false;
        }
      }
      if (bVar1) {
        (*(code *)*pxRam00000000000d35c0)(0x88bf);
      }
      gl__SavedState__Restore_plt(&xStack_1e0);
      pxVar6 = pxRam00000000000d3228;
      do {
        iVar13 = (*(code *)*pxVar6)();
        pcVar8 = xRam00000000001622b8;
      } while (iVar13 != 0);
      if (!bVar9) {
        xRam0000000000162208 = iRam0000000000162704;
      }
      iRam0000000000162708 = iRam0000000000162708 + iStack_1ec;
      iVar13 = iRam000000000016270c + 1;
      bVar1 = 0x256 < iRam000000000016270c;
      iRam000000000016270c = iVar13;
      if (bVar1) {
        fVar40 = (float4)iRam0000000000162708;
        fVar25 = (float4)iRam00000000001626ec;
        iVar13 = FUN_000c5310(0,0x1626b0);
        iVar14 = FUN_000c5310(0,0x1626ac);
        iVar10 = FUN_000c5310(0,0x1626a4);
        iVar19 = FUN_000c5310(0,0x1626a8);
        axVar28._8_8_ = 0;
        axVar28._0_8_ = (float8)(fVar40 / 600.0);
        (*pcVar8)(axVar28,(float8)(fVar25 / 600.0),(float8)((float4)iVar13 / 600.0),
                  (float8)((float4)iVar14 / 600.0),(float8)((float4)iVar10 / 600.0),
                  (float8)((float4)iVar19 / 600.0),(float8)(float4)xRam00000000001622a8,
                  (float8)xRam00000000001622a8._4_4_,0,0x3ff2b /* "lights: %.1f drawn per frame (%.1f spot, %.1f from coronas, %.1f headl..." */,*piVar23,iRam0000000000162390,
                  iRam0000000000162300);
        if (iRam0000000000162710 != 0) {
          axVar29._0_8_ = fRam0000000000162718 / (float8)iRam0000000000162710;
          axVar29._8_8_ = 0;
          (*xRam00000000001622b8)(axVar29,0,0x262d1 /* "lights: GPU %.3f ms per frame (avg of %d)" */);
        }
        fRam0000000000162718 = 0.0;
        iRam0000000000162710 = 0;
        iRam0000000000162708 = 0;
        iRam000000000016270c = 0;
        iRam0000000000162390 = 0;
        iRam0000000000162300 = 0;
        iRam00000000001626ec = 0;
      }
      goto code_r0x00081160;
    }
    if (iRam0000000000162704 != 0) {
      (*(code *)*pxRam00000000000d3308)(1,0x162704);
      (*(code *)*pxRam00000000000d3250)(1,0x1626f4);
    }
    (*(code *)*pxRam00000000000d32f8)(1,0x162704);
    (*(code *)*pxRam00000000000d3300)(0xde1,iRam0000000000162704);
    (*(code *)*pxRam00000000000d3318)(0xde1,1,0x881a,iVar19,iVar20);
    pxVar6 = pxRam00000000000d3338;
    (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2601);
    (*(code *)*pxVar6)(0xde1,0x2800,0x2601);
    (*(code *)*pxVar6)(0xde1,0x2802,0x812f);
    (*(code *)*pxVar6)(0xde1,0x2803,0x812f);
    (*(code *)*pxRam00000000000d3240)(1,0x1626f4);
    (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000001626f4);
    (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,iRam0000000000162704,0);
    iVar18 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
    if (iVar18 == 0x8cd5) {
      if (iRam00000000001626fc != 0) {
        (*(code *)*pxRam00000000000d3308)(1,0x1626fc);
        (*(code *)*pxRam00000000000d3250)(1,0x1626d4);
      }
      (*(code *)*pxRam00000000000d32f8)(1,0x1626fc);
      (*(code *)*pxRam00000000000d3300)(0xde1,iRam00000000001626fc);
      (*(code *)*pxRam00000000000d3318)(0xde1,1,0x881a,iVar19,iVar20);
      (*(code *)*pxVar6)(0xde1,0x2801,0x2601);
      (*(code *)*pxVar6)(0xde1,0x2800,0x2601);
      (*(code *)*pxVar6)(0xde1,0x2802,0x812f);
      (*(code *)*pxVar6)(0xde1,0x2803,0x812f);
      (*(code *)*pxRam00000000000d3240)(1,0x1626d4);
      (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000001626d4);
      (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,iRam00000000001626fc,0);
      iRam00000000001626d8 = iVar19;
      iRam00000000001626dc = iVar20;
      iVar19 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
      if (iVar19 == 0x8cd5) goto code_r0x0007fcf4;
    }
    uRam00000000001626b4 = 1;
    gl__SavedState__Restore_plt(&xStack_1e0);
    xVar15 = 0x22aa7 /* "lights: target failed - off" */;
  }
  (*xRam00000000001622b8)(1,xVar15);
code_r0x00081160:
  if (*(int8 *)(iVar3 + 0x28) == iStack_b0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x811d0  size=1032 */
bool FUN_000811d0(float4 *param_1,xunknown8 *param_2)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float4 fVar4;
  float4 fVar5;
  float4 fVar6;
  float4 fVar7;
  float4 fVar8;
  float4 fVar9;
  float4 fVar10;
  float4 fVar11;
  float4 fVar12;
  float4 fVar13;
  float4 fVar14;
  float4 fVar15;
  float4 fVar16;
  float4 fVar17;
  float4 fVar18;
  float4 fVar19;
  float4 fVar20;
  float4 fVar21;
  float4 fVar22;
  float4 fVar23;
  
  fVar3 = param_1[10];
  fVar5 = param_1[0xb];
  fVar11 = param_1[4];
  fVar1 = param_1[5];
  fVar7 = param_1[0xe];
  fVar18 = param_1[0xf];
  fVar9 = param_1[8];
  fVar4 = param_1[9];
  fVar2 = param_1[6];
  fVar8 = param_1[7];
  fVar14 = param_1[0xc];
  fVar6 = param_1[0xd];
  fVar17 = fVar7 * fVar5 * fVar11 + fVar18 * -(fVar11 * fVar3) + fVar18 * fVar2 * fVar9 +
           fVar7 * -(fVar8 * fVar9) + fVar5 * -(fVar2 * fVar14) + fVar3 * fVar8 * fVar14;
  fVar12 = -(fVar7 * fVar1 * fVar5) + fVar18 * fVar1 * fVar3 + fVar18 * -(fVar2 * fVar4) +
           fVar7 * fVar4 * fVar8 + fVar5 * fVar2 * fVar6 + fVar3 * -(fVar8 * fVar6);
  fVar21 = *param_1;
  fVar19 = param_1[1];
  fVar16 = -(fVar6 * fVar5 * fVar11) + fVar18 * fVar4 * fVar11 + fVar18 * -(fVar1 * fVar9) +
           fVar6 * fVar8 * fVar9 + fVar5 * fVar1 * fVar14 + fVar4 * -(fVar8 * fVar14);
  fVar23 = param_1[2];
  fVar22 = param_1[3];
  fVar15 = fVar6 * fVar3 * fVar11 + fVar7 * -(fVar11 * fVar4) + fVar7 * fVar1 * fVar9 +
           fVar6 * -(fVar2 * fVar9) + fVar3 * -(fVar1 * fVar14) + fVar4 * fVar2 * fVar14;
  fVar10 = fVar19 * fVar17 + fVar12 * fVar21 + fVar16 * fVar23 + fVar15 * fVar22;
  if (1e-12 <= ABS(fVar10)) {
    fVar20 = fVar8 * fVar21;
    fVar13 = fVar2 * fVar21;
    param_2[1] = CONCAT44((fVar3 * fVar8 * fVar19 + fVar5 * -(fVar19 * fVar2) +
                           fVar5 * fVar1 * fVar23 + fVar3 * -(fVar22 * fVar1) +
                           fVar8 * -(fVar23 * fVar4) + fVar2 * fVar4 * fVar22) / fVar10,
                          (fVar8 * fVar19 * -fVar7 + fVar18 * fVar2 * fVar19 +
                           fVar18 * -(fVar23 * fVar1) + fVar7 * fVar1 * fVar22 +
                           fVar8 * fVar6 * fVar23 + fVar2 * -(fVar22 * fVar6)) / fVar10);
    *param_2 = CONCAT44((fVar7 * fVar5 * fVar19 + fVar18 * -(fVar19 * fVar3) +
                         fVar18 * fVar4 * fVar23 + fVar7 * -(fVar22 * fVar4) +
                         fVar5 * -(fVar23 * fVar6) + fVar3 * fVar6 * fVar22) / fVar10,
                        fVar12 / fVar10);
    param_2[3] = CONCAT44((-(fVar3 * fVar20) + fVar5 * fVar13 + fVar5 * -(fVar23 * fVar11) +
                           fVar3 * fVar11 * fVar22 + fVar8 * fVar9 * fVar23 +
                          fVar2 * -(fVar22 * fVar9)) / fVar10,
                          (fVar7 * fVar20 + fVar18 * -(fVar21 * fVar2) + fVar18 * fVar11 * fVar23 +
                           fVar7 * -(fVar22 * fVar11) + fVar8 * -(fVar23 * fVar14) +
                          fVar2 * fVar14 * fVar22) / fVar10);
    param_2[2] = CONCAT44((fVar5 * fVar21 * -fVar7 + fVar18 * fVar3 * fVar21 +
                           fVar18 * -(fVar23 * fVar9) + fVar7 * fVar9 * fVar22 +
                           fVar5 * fVar14 * fVar23 + fVar3 * -(fVar22 * fVar14)) / fVar10,
                          fVar17 / fVar10);
    param_2[5] = CONCAT44((fVar4 * fVar20 + fVar5 * -(fVar21 * fVar1) + fVar5 * fVar11 * fVar19 +
                           fVar4 * -(fVar22 * fVar11) + fVar8 * -(fVar19 * fVar9) +
                          fVar1 * fVar9 * fVar22) / fVar10,
                          (fVar20 * -fVar6 + fVar18 * fVar1 * fVar21 + fVar18 * -(fVar19 * fVar11) +
                           fVar6 * fVar11 * fVar22 + fVar8 * fVar14 * fVar19 +
                          fVar1 * -(fVar22 * fVar14)) / fVar10);
    param_2[4] = CONCAT44((fVar6 * fVar5 * fVar21 + fVar18 * -(fVar21 * fVar4) +
                           fVar18 * fVar9 * fVar19 + fVar6 * -(fVar22 * fVar9) +
                           fVar5 * -(fVar19 * fVar14) + fVar4 * fVar14 * fVar22) / fVar10,
                          fVar16 / fVar10);
    param_2[7] = CONCAT44((-(fVar4 * fVar13) + fVar3 * fVar1 * fVar21 + fVar3 * -(fVar19 * fVar11) +
                           fVar4 * fVar11 * fVar23 + fVar2 * fVar9 * fVar19 +
                          fVar1 * -(fVar23 * fVar9)) / fVar10,
                          (fVar6 * fVar13 + fVar7 * -(fVar21 * fVar1) + fVar7 * fVar11 * fVar19 +
                           fVar6 * -(fVar23 * fVar11) + fVar2 * -(fVar19 * fVar14) +
                          fVar1 * fVar14 * fVar23) / fVar10);
    param_2[6] = CONCAT44((fVar3 * fVar21 * -fVar6 + fVar7 * fVar4 * fVar21 +
                           fVar7 * -(fVar19 * fVar9) + fVar6 * fVar9 * fVar23 +
                           fVar3 * fVar14 * fVar19 + fVar4 * -(fVar23 * fVar14)) / fVar10,
                          fVar15 / fVar10);
  }
  return 1e-12 <= ABS(fVar10);
}

/* 0x815d8  size=316 */
void FUN_000815d8(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  float8 fVar5;
  xunknown8 xStack_78;
  int4 iStack_70;
  int4 iStack_6c;
  int8 iStack_68;
  
  iVar1 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar1 + 0x28);
  iStack_6c = 0;
  (*(code *)*pxRam00000000000d3208)(0x8fbb,&iStack_6c);
  pxVar3 = pxRam00000000000d35d8;
  pxVar2 = pxRam00000000000d35d0;
  iVar4 = 0;
  do {
    if (*(char *)(iVar4 + 0x1626c0) == '\x01') {
      iStack_70 = 0;
      (*(code *)*pxVar2)(*(xunknown4 *)(iVar4 * 4 + 0x1626c4),0x8867,&iStack_70);
      if (iStack_70 != 0) {
        xStack_78 = 0;
        (*(code *)*pxVar3)(*(xunknown4 *)(iVar4 * 4 + 0x1626c4),0x8866,&xStack_78);
        if (iStack_6c == 0) {
          fVar5 = (float8)NEON_ucvtf(xStack_78);
          iRam0000000000162710 = iRam0000000000162710 + 1;
          fRam0000000000162718 = fRam0000000000162718 + fVar5 / 1000000.0;
        }
        *(xunknown1 *)(iVar4 + 0x1626c0) = 0;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (*(int8 *)(iVar1 + 0x28) == iStack_68) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x81714  size=72 */
void FUN_00081714(xunknown8 param_1,xunknown8 *param_2)

{
  if (param_2 == (xunknown8 *)0x0) {
    return;
  }
  FUN_00081714(param_1,*param_2);
  FUN_00081714(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(param_2,0x28);
  return;
}

/* 0x81c78  size=300 */
void FUN_00081c78(xunknown8 *param_1,int8 *param_2,int8 *param_3)

{
  uint8 uVar1;
  int8 *piVar2;
  uint8 uVar3;
  uint8 uVar4;
  int8 *piVar5;
  uint8 uVar6;
  int8 iVar7;
  uint8 uVar8;
  int8 iVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar6 = uVar4 - 1;
  if ((uVar4 & uVar6) == 0) {
    uVar3 = uVar6 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  iVar7 = *param_2;
  piVar2 = *(int8 **)(iVar7 + uVar3 * 8);
  do {
    piVar5 = piVar2;
    piVar2 = (int8 *)*piVar5;
  } while ((int8 *)*piVar5 != param_3);
  if (piVar5 != param_2 + 2) {
    uVar8 = piVar5[1];
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto code_r0x00081d2c;
  }
  if (*param_3 != 0) {
    uVar8 = *(uint8 *)(*param_3 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto code_r0x00081d2c;
  }
  *(xunknown8 *)(iVar7 + uVar3 * 8) = 0;
code_r0x00081d2c:
  iVar9 = *param_3;
  if (iVar9 != 0) {
    uVar8 = *(uint8 *)(iVar9 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar6 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(int8 **)(iVar7 + uVar8 * 8) = piVar5;
      iVar9 = *param_3;
    }
  }
  iVar7 = param_2[3];
  *piVar5 = iVar9;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = iVar7 + -1;
  *(xunknown1 *)(param_1 + 2) = 1;
  return;
}

/* 0x81da4  size=168 */
void FUN_00081da4(void)

{
  xRam000000000015c8b0 = 0;
  xRam000000000015ddb4 = 0;
  xRam000000000015f2b8 = 0;
  xRam00000000001607bc = 0;
  xRam0000000000161cd0 = 0;
  xRam0000000000161cc8 = 0;
  xRam0000000000161cc0 = 0x161cc8;
  __cxa_atexit(FUN_0007d314,0x161cc0,0xcee00);
  fRam0000000000161cf8 = 0x3f800000;
  uRam0000000000161ce0 = 0;
  iRam0000000000161cd8 = 0;
  uRam0000000000161cf0 = 0;
  piRam0000000000161ce8 = 0;
  __cxa_atexit(FUN_0007d31c,&iRam0000000000161cd8,0xcee00);
  xRam0000000000161d20 = 0x3f800000;
  uRam0000000000161d08 = 0;
  iRam0000000000161d00 = 0;
  iRam0000000000161d18 = 0;
  piRam0000000000161d10 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0007d374,&iRam0000000000161d00,0xcee00);
  return;
}

/* 0x81e4c  size=32 */
void FUN_00081e4c(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x81e6c  size=32 */
void FUN_00081e6c(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x81e8c  size=32 */
void FUN_00081e8c(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x81eac  size=88 */
void FUN_00081eac(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)param_1[2];
  while (piVar1 != (int8 *)0x0) {
    iVar2 = *piVar1;
    operator_delete_plt(piVar1,0x20);
    piVar1 = (int8 *)iVar2;
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,param_1[1] << 3);
  return;
}

/* 0x81f04  size=32 */
void FUN_00081f04(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x81f24  size=88 */
void FUN_00081f24(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)param_1[2];
  while (piVar1 != (int8 *)0x0) {
    iVar2 = *piVar1;
    operator_delete_plt(piVar1,0x18);
    piVar1 = (int8 *)iVar2;
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,param_1[1] << 3);
  return;
}

/* 0x81f7c  size=88 */
void FUN_00081f7c(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)param_1[2];
  while (piVar1 != (int8 *)0x0) {
    iVar2 = *piVar1;
    operator_delete_plt(piVar1,0x28);
    piVar1 = (int8 *)iVar2;
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,param_1[1] << 3);
  return;
}

/* 0x81fd4  size=32 */
void FUN_00081fd4(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x8318c  size=120 */
xunknown1  [16] FUN_0008318c(void)

{
  int8 iVar1;
  xunknown1 axVar2 [16];
  int8 iStack_38;
  int8 iStack_30;
  int8 iStack_28;
  
  iVar1 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar1 + 0x28);
  clock_gettime(1,&iStack_38);
  if (*(int8 *)(iVar1 + 0x28) == iStack_28) {
    axVar2._0_8_ = (float8)iStack_30 / 1000.0 + (float8)iStack_38 * 1000000.0;
    axVar2._8_8_ = 0;
    return axVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  axVar2 = (*got___stack_chk_fail)();
  return axVar2;
}

/* 0x83204  size=480 */
void FUN_00083204(xunknown8 *param_1)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  int8 *piVar4;
  int8 iVar5;
  xunknown8 *pxVar6;
  uint8 uVar7;
  uint8 uVar8;
  int8 iVar9;
  xunknown8 *pxVar10;
  int8 iVar11;
  xunknown8 xVar12;
  xunknown8 xVar13;
  xunknown8 xVar14;
  xunknown8 xVar15;
  xunknown8 xVar16;
  xunknown8 xVar17;
  xunknown8 xVar18;
  xunknown8 xVar19;
  
  pxVar10 = iRam0000000000162728;
  pxVar3 = iRam0000000000162720;
  if (iRam0000000000162728 < pxRam0000000000162730) {
    xVar12 = *param_1;
    iRam0000000000162728[1] = param_1[1];
    *iRam0000000000162728 = xVar12;
    xVar14 = param_1[6];
    xVar13 = param_1[9];
    xVar12 = param_1[8];
    xVar16 = param_1[3];
    xVar15 = param_1[2];
    xVar18 = param_1[5];
    xVar17 = param_1[4];
    iRam0000000000162728[7] = param_1[7];
    iRam0000000000162728[6] = xVar14;
    iRam0000000000162728[9] = xVar13;
    iRam0000000000162728[8] = xVar12;
    iRam0000000000162728[3] = xVar16;
    iRam0000000000162728[2] = xVar15;
    iRam0000000000162728[5] = xVar18;
    iRam0000000000162728[4] = xVar17;
    xVar14 = param_1[0xe];
    xVar13 = param_1[0x11];
    xVar12 = param_1[0x10];
    xVar16 = param_1[0xb];
    xVar15 = param_1[10];
    xVar18 = param_1[0xd];
    xVar17 = param_1[0xc];
    iRam0000000000162728[0xf] = param_1[0xf];
    iRam0000000000162728[0xe] = xVar14;
    iRam0000000000162728[0x11] = xVar13;
    iRam0000000000162728[0x10] = xVar12;
    iRam0000000000162728[0xb] = xVar16;
    iRam0000000000162728[10] = xVar15;
    iRam0000000000162728[0xd] = xVar18;
    iRam0000000000162728[0xc] = xVar17;
    xVar14 = param_1[0x16];
    xVar13 = param_1[0x19];
    xVar12 = param_1[0x18];
    xVar16 = param_1[0x13];
    xVar15 = param_1[0x12];
    xVar18 = param_1[0x15];
    xVar17 = param_1[0x14];
    iRam0000000000162728[0x17] = param_1[0x17];
    iRam0000000000162728[0x16] = xVar14;
    iRam0000000000162728[0x19] = xVar13;
    iRam0000000000162728[0x18] = xVar12;
    iRam0000000000162728[0x13] = xVar16;
    iRam0000000000162728[0x12] = xVar15;
    iRam0000000000162728[0x15] = xVar18;
    iRam0000000000162728[0x14] = xVar17;
    iRam0000000000162728 = iRam0000000000162728 + 0x1a;
    return;
  }
  iVar11 = (int8)iRam0000000000162728 - (int8)iRam0000000000162720;
  uVar7 = (iVar11 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar7 < 0x13b13b13b13b13c) {
    iVar9 = (int8)pxRam0000000000162730 - (int8)iRam0000000000162720;
    iVar5 = iVar9 >> 4;
    uVar8 = iVar5 * -0x6276276276276276;
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x9d89d89d89d89c < (uint8)(iVar5 * 0x4ec4ec4ec4ec4ec5)) {
      uVar8 = 0x13b13b13b13b13b;
    }
    if (uVar8 < 0x13b13b13b13b13c) {
      iVar5 = operator_new_plt(uVar8 * 0xd0);
      xVar12 = param_1[0x14];
      xVar14 = param_1[0x17];
      xVar13 = param_1[0x16];
      iRam0000000000162720 = (xunknown8 *)(iVar5 + iVar11);
      xVar17 = param_1[0x19];
      xVar16 = param_1[0x18];
      xVar19 = param_1[0xb];
      xVar18 = param_1[10];
      pxRam0000000000162730 = (xunknown8 *)(iVar5 + uVar8 * 0xd0);
      iRam0000000000162720[0x15] = param_1[0x15];
      iRam0000000000162720[0x14] = xVar12;
      iRam0000000000162720[0x17] = xVar14;
      iRam0000000000162720[0x16] = xVar13;
      xVar13 = param_1[0xd];
      xVar12 = param_1[0xc];
      xVar15 = param_1[0xf];
      xVar14 = param_1[0xe];
      iRam0000000000162720[0x19] = xVar17;
      iRam0000000000162720[0x18] = xVar16;
      iRam0000000000162720[0xb] = xVar19;
      iRam0000000000162720[10] = xVar18;
      iRam0000000000162720[0xd] = xVar13;
      iRam0000000000162720[0xc] = xVar12;
      iRam0000000000162720[0xf] = xVar15;
      iRam0000000000162720[0xe] = xVar14;
      xVar12 = param_1[0x10];
      xVar14 = param_1[0x13];
      xVar13 = param_1[0x12];
      iRam0000000000162720[0x11] = param_1[0x11];
      iRam0000000000162720[0x10] = xVar12;
      iRam0000000000162720[0x13] = xVar14;
      iRam0000000000162720[0x12] = xVar13;
      xVar14 = param_1[2];
      xVar13 = param_1[5];
      xVar12 = param_1[4];
      xVar17 = param_1[1];
      xVar16 = *param_1;
      iRam0000000000162720[3] = param_1[3];
      iRam0000000000162720[2] = xVar14;
      iRam0000000000162720[5] = xVar13;
      iRam0000000000162720[4] = xVar12;
      xVar15 = param_1[7];
      xVar14 = param_1[6];
      xVar13 = param_1[9];
      xVar12 = param_1[8];
      pxVar1 = iRam0000000000162720 + 0x1a;
      iRam0000000000162720[1] = xVar17;
      *iRam0000000000162720 = xVar16;
      iRam0000000000162720[7] = xVar15;
      iRam0000000000162720[6] = xVar14;
      iRam0000000000162720[9] = xVar13;
      iRam0000000000162720[8] = xVar12;
      pxVar6 = iRam0000000000162720;
      if (pxVar10 != pxVar3) {
        do {
          xVar12 = pxVar10[-0x1a];
          iRam0000000000162720 = pxVar6 + -0x1a;
          pxVar6[-0x19] = pxVar10[-0x19];
          pxVar6[-0x1a] = xVar12;
          xVar14 = pxVar10[-0x14];
          xVar13 = pxVar10[-0x11];
          xVar12 = pxVar10[-0x12];
          xVar16 = pxVar10[-0x17];
          xVar15 = pxVar10[-0x18];
          xVar18 = pxVar10[-0x15];
          xVar17 = pxVar10[-0x16];
          pxVar6[-0x13] = pxVar10[-0x13];
          pxVar6[-0x14] = xVar14;
          pxVar6[-0x11] = xVar13;
          pxVar6[-0x12] = xVar12;
          pxVar6[-0x17] = xVar16;
          pxVar6[-0x18] = xVar15;
          pxVar6[-0x15] = xVar18;
          pxVar6[-0x16] = xVar17;
          xVar14 = pxVar10[-0xc];
          xVar13 = pxVar10[-9];
          xVar12 = pxVar10[-10];
          xVar16 = pxVar10[-0xf];
          xVar15 = pxVar10[-0x10];
          xVar18 = pxVar10[-0xd];
          xVar17 = pxVar10[-0xe];
          pxVar6[-0xb] = pxVar10[-0xb];
          pxVar6[-0xc] = xVar14;
          pxVar6[-9] = xVar13;
          pxVar6[-10] = xVar12;
          pxVar6[-0xf] = xVar16;
          pxVar6[-0x10] = xVar15;
          pxVar6[-0xd] = xVar18;
          pxVar6[-0xe] = xVar17;
          pxVar2 = pxVar10 + -3;
          xVar14 = pxVar10[-4];
          xVar13 = pxVar10[-1];
          xVar12 = pxVar10[-2];
          xVar16 = pxVar10[-7];
          xVar15 = pxVar10[-8];
          xVar18 = pxVar10[-5];
          xVar17 = pxVar10[-6];
          pxVar10 = pxVar10 + -0x1a;
          pxVar6[-3] = *pxVar2;
          pxVar6[-4] = xVar14;
          pxVar6[-1] = xVar13;
          pxVar6[-2] = xVar12;
          pxVar6[-7] = xVar16;
          pxVar6[-8] = xVar15;
          pxVar6[-5] = xVar18;
          pxVar6[-6] = xVar17;
          pxVar6 = iRam0000000000162720;
        } while (pxVar10 != pxVar3);
      }
      if (pxVar3 == (xunknown8 *)0x0) {
        iRam0000000000162728 = pxVar1;
        return;
      }
      iRam0000000000162728 = pxVar1;
      operator_delete_plt(pxVar3,iVar9);
      iRam0000000000162728 = pxVar1;
      return;
    }
  }
  else {
    FUN_0008e360();
  }
  piVar4 = (int8 *)FUN_0005ec14();
  iVar11 = *piVar4;
  if (iVar11 == 0) {
    return;
  }
  piVar4[1] = iVar11;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar11,piVar4[2] - iVar11);
  return;
}

/* 0x833e4  size=32 */
void FUN_000833e4(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x83ba8  size=988 */
void FUN_00083ba8(void)

{
  bool bVar1;
  int4 iVar2;
  int8 iVar3;
  xunknown8 *pxVar4;
  uint1 uVar5;
  float8 fVar6;
  xunknown8 xStack_1b8;
  xunknown8 xStack_1b0;
  xunknown1 axStack_1a8 [8];
  int4 iStack_1a0;
  int4 iStack_19c;
  xunknown4 xStack_198;
  xunknown4 xStack_194;
  xunknown4 xStack_190;
  uint4 uStack_18c;
  xunknown4 xStack_188;
  int8 iStack_68;
  
  iVar3 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar3 + 0x28);
  if ((uRam0000000000162c5a & 1) != 0) goto code_r0x00083ddc;
  if ((uRam0000000000170c70 & 1) == 0) {
    xStack_188 = 0;
    xStack_198 = 2;
    xStack_194 = 0;
    xStack_190 = 0;
    uStack_18c = uStack_18c & 0xffffff00;
    uVar5 = gl__Load_plt(&xStack_198,pcRam0000000000162c30);
    uRam0000000000170c70 = uVar5 & 1;
    if ((uVar5 & 1) == 0) {
      uRam0000000000162c5a = 1;
      goto code_r0x00083ddc;
    }
  }
  pxVar4 = pxRam00000000000d3208;
  (*(code *)*pxRam00000000000d3208)(0xba2,axStack_1a8);
  xStack_1b8 = 0;
  compat__SceneSize_plt((int8)&xStack_1b8 + 4,&xStack_1b8);
  iVar2 = iRam0000000000170c74 + 1;
  if (5 < iRam0000000000170c74) {
    uRam0000000000170c78 = 0;
  }
  uVar5 = uRam0000000000170c78;
  iRam0000000000170c74 = iVar2;
  if (iStack_1a0 == xStack_1b8._4_4_) {
    cRam0000000000162b98 = iStack_19c == (int4)xStack_1b8 & (uRam0000000000170c78 ^ 1);
    if (iStack_19c == (int4)xStack_1b8) {
      uRam0000000000170c78 = 1;
      iRam0000000000170c7c = iStack_1a0;
      iRam0000000000170c80 = iStack_19c;
      if ((uVar5 & 1) == 0) {
        clock_gettime(1,&xStack_198);
        fRam0000000000170c88 =
             (float8)CONCAT44(uStack_18c,xStack_190) / 1000.0 +
             (float8)CONCAT44(xStack_194,xStack_198) * 1000000.0;
      }
    }
    else {
      iRam0000000000170c7c = iStack_1a0;
      iRam0000000000170c80 = iStack_19c;
    }
  }
  else {
    cRam0000000000162b98 = 0;
    iRam0000000000170c7c = iStack_1a0;
    iRam0000000000170c80 = iStack_19c;
  }
  clock_gettime(1,&xStack_198);
  fVar6 = (float8)CONCAT44(uStack_18c,xStack_190) / 1000.0 +
          (float8)CONCAT44(xStack_194,xStack_198) * 1000000.0;
  if (fRam0000000000170c90 == 0.0) {
    fRam0000000000170c88 = fVar6;
    fRam0000000000170c90 = fVar6;
    fRam0000000000170c98 = fVar6;
  }
  else {
    fRam0000000000170c98 = fVar6 - fRam0000000000170c98;
    if (500000.0 < fRam0000000000170c98) {
      fRam0000000000170c90 = fRam0000000000170c90 + fRam0000000000170c98;
      fRam0000000000170c88 = fRam0000000000170c98 + fRam0000000000170c88;
    }
    if (fVar6 - fRam0000000000170c88 <= 2000000.0) {
      if ((uRam0000000000170ca0 < 7) &&
         (fRam0000000000170c98 = fVar6, (1 << (uint8)(uRam0000000000170ca0 & 0x1f) & 0x49U) != 0))
      goto code_r0x00083da0;
    }
    else {
      uRam0000000000170ca0 = 1;
    }
    fRam0000000000170c98 = fVar6;
    if ((3000000.0 < fVar6 - fRam0000000000170c90) && ((uRam0000000000170ca4 & 1) == 0)) {
      uRam0000000000170ca4 = 1;
      iVar2 = iRam0000000000170cb0 + 1;
      bVar1 = iRam0000000000170cb0 < 0x14;
      fRam0000000000170ca8 = fRam0000000000170c90;
      iRam0000000000170cb0 = iVar2;
      if (bVar1) {
        lights__CameraDiag_plt(&xStack_198,300);
        xStack_1b0 = 0;
        compat__SceneSize_plt((int8)&xStack_1b0 + 4,&xStack_1b0);
        (*pcRam0000000000162c30)
                  ((fVar6 - fRam0000000000170c88) / 1000000.0,1,0x3f6a2 /* "shadows: NONE for 3 s - %s | last scene viewport %dx%d, scene size %dx..." */,
                   *(xunknown8 *)((uint8)uRam0000000000170ca0 * 8 + 0xceea8),iRam0000000000170c7c,
                   iRam0000000000170c80,xStack_1b0._4_4_,xStack_1b0 & 0xffffffff,
                   uRam0000000000170c78,iRam0000000000170c74,xRam0000000000170cb8,
                   uRam0000000000162c5a,&xStack_198);
      }
    }
  }
code_r0x00083da0:
  if (cRam0000000000162b98 == 1) {
    iRam0000000000162728 = iRam0000000000162720;
    (*(code *)*pxVar4)(0x8ca6,&xRam00000000000d8d24);
  }
  cRam0000000000162878 = 1;
code_r0x00083ddc:
  if (*(int8 *)(iVar3 + 0x28) == iStack_68) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x83f84  size=20 */
void FUN_00083f84(void)

{
  uRam0000000000170c78 = 0;
  iRam0000000000170c74 = 0;
  return;
}

/* 0x83f98  size=22120 */
void FUN_00083f98(void)

{
  float8 *pfVar1;
  uint1 uVar2;
  int4 iVar3;
  xunknown8 *pxVar4;
  xunknown4 *pxVar5;
  int4 iVar6;
  int4 iVar7;
  int4 iVar8;
  int4 iVar9;
  int4 iVar10;
  int4 iVar11;
  int4 iVar12;
  int4 iVar13;
  xunknown1 xVar14;
  char cVar15;
  char cVar16;
  xunknown2 xVar17;
  uint4 uVar18;
  uint8 uVar19;
  int8 iVar20;
  float8 fVar21;
  float8 fVar22;
  xunknown1 axVar23 [16];
  bool bVar24;
  uint1 uVar25;
  uint1 uVar26;
  xunknown8 *pxVar27;
  xunknown8 *pxVar28;
  xunknown8 *pxVar29;
  xunknown8 *pxVar30;
  code *pcVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  uint1 uVar35;
  char cVar36;
  int4 iVar37;
  int4 iVar38;
  uint8 uVar39;
  xunknown1 (*paxVar40) [16];
  xunknown1 (*paxVar41) [16];
  float4 *pfVar42;
  int8 iVar43;
  xunknown8 xVar44;
  xunknown1 *pxVar45;
  uint8 *puVar46;
  uint8 *puVar47;
  uint8 *puVar48;
  uint4 uVar49;
  uint4 uVar50;
  xunknown8 *pxVar51;
  xunknown1 (*paxVar52) [16];
  uint8 uVar53;
  uint8 *puVar54;
  uint8 uVar55;
  xunknown1 (*paxVar56) [16];
  uint8 *puVar57;
  uint8 uVar58;
  float8 *pfVar59;
  xunknown1 (*paxVar60) [16];
  uint8 uVar61;
  uint4 uVar62;
  xunknown1 (*paxVar63) [16];
  int8 *piVar64;
  uint8 uVar65;
  int8 iVar66;
  uint8 uVar67;
  int8 iVar68;
  float8 *pfVar69;
  xunknown1 (*paxVar70) [16];
  xunknown1 (*paxVar71) [16];
  float8 *pfVar72;
  float8 *pfVar73;
  int8 iVar74;
  xunknown1 (*paxVar75) [16];
  int8 iVar76;
  uint8 *puVar77;
  int8 iVar78;
  xunknown1 (*paxVar79) [16];
  int8 iVar80;
  uint4 *puVar81;
  xunknown4 *pxVar82;
  int8 iVar83;
  uint4 *puVar84;
  xunknown1 (*paxVar85) [16];
  uint4 *puVar86;
  uint4 uVar87;
  uint8 *puVar88;
  uint4 *puVar89;
  int4 iVar90;
  xunknown1 (*paxVar91) [16];
  uint8 uVar92;
  xunknown4 xVar93;
  float4 fVar94;
  uint8 *puVar95;
  xunknown1 axVar100 [16];
  xunknown1 axVar101 [16];
  float8 fVar96;
  float8 fVar97;
  float8 fVar98;
  float8 fVar99;
  float8 fVar115;
  float8 fVar116;
  float8 fVar117;
  xunknown1 axVar102 [16];
  xunknown1 axVar103 [16];
  xunknown1 axVar104 [16];
  xunknown1 axVar105 [16];
  xunknown1 axVar106 [16];
  xunknown1 axVar107 [16];
  xunknown1 axVar108 [16];
  xunknown1 axVar109 [16];
  xunknown1 axVar110 [16];
  xunknown1 axVar111 [16];
  xunknown1 axVar112 [16];
  xunknown1 axVar113 [16];
  xunknown1 axVar114 [16];
  float4 fVar118;
  xunknown8 xVar119;
  xunknown8 xVar120;
  xunknown8 xVar121;
  float8 fVar122;
  xunknown8 xVar123;
  float8 fVar124;
  float4 fVar125;
  xunknown8 xVar126;
  float8 fVar127;
  float4 fVar128;
  float8 fVar129;
  xunknown8 xVar130;
  xunknown8 xVar131;
  float8 fVar132;
  xunknown8 xVar133;
  float8 fVar134;
  float8 fVar135;
  xunknown8 xVar136;
  float8 fVar137;
  float8 fVar138;
  float8 fVar139;
  xunknown8 xVar140;
  float8 fVar141;
  float8 fVar142;
  float8 fVar143;
  float8 fVar144;
  xunknown8 xVar145;
  float8 fVar146;
  float8 fVar147;
  float4 fVar148;
  float8 fVar149;
  float8 fVar150;
  float8 fVar154;
  xunknown1 axVar151 [16];
  xunknown1 axVar152 [16];
  xunknown1 axVar153 [16];
  float4 fVar155;
  xunknown4 xVar156;
  float4 fVar157;
  float4 fVar158;
  float8 fVar159;
  xunknown4 xVar160;
  float4 fVar161;
  float4 fVar162;
  float8 fVar163;
  float8 fVar164;
  float8 fVar165;
  float8 fVar166;
  int8 iVar167;
  float4 fVar168;
  float8 fVar169;
  float8 fVar170;
  float8 fVar171;
  float8 fVar172;
  xunknown1 *pxVar173;
  xunknown8 xVar174;
  float8 fVar175;
  float8 fVar176;
  xunknown8 xVar177;
  float8 fVar178;
  float8 fVar179;
  xunknown8 xVar180;
  float8 fVar181;
  xunknown8 xVar182;
  float8 fVar183;
  xunknown8 xVar184;
  float8 fVar185;
  xunknown8 xVar186;
  float8 fVar187;
  xunknown8 xVar188;
  float8 fVar189;
  float8 fVar190;
  xunknown8 xVar191;
  xunknown8 xVar192;
  float8 fVar193;
  float8 fVar194;
  float8 fVar195;
  float8 fVar196;
  float8 fVar197;
  float8 fVar198;
  float8 fVar199;
  float8 fVar200;
  float8 fVar201;
  float8 fVar202;
  float8 fVar203;
  float8 fVar204;
  float8 fVar205;
  float8 fVar206;
  float8 fVar207;
  int8 iStack_4f8;
  int8 iStack_4a0;
  xunknown4 xStack_46c;
  xunknown8 xStack_468;
  xunknown4 xStack_460;
  xunknown4 xStack_45c;
  xunknown8 xStack_458;
  xunknown8 xStack_450;
  float4 fStack_444;
  xunknown8 xStack_440;
  float4 fStack_434;
  xunknown8 xStack_430;
  float4 fStack_424;
  xunknown8 xStack_420;
  float4 fStack_414;
  xunknown8 xStack_3f8;
  float4 fStack_39c;
  float4 fStack_398;
  xunknown8 xStack_394;
  float4 fStack_38c;
  float4 fStack_388;
  xunknown8 xStack_384;
  float4 fStack_37c;
  float4 fStack_378;
  xunknown8 xStack_374;
  float4 fStack_36c;
  float4 fStack_368;
  xunknown8 xStack_364;
  float4 fStack_35c;
  float4 fStack_358;
  xunknown8 xStack_354;
  float4 fStack_34c;
  float4 fStack_348;
  xunknown8 xStack_344;
  float4 fStack_33c;
  float4 fStack_338;
  xunknown8 xStack_334;
  float4 fStack_32c;
  float4 fStack_328;
  xunknown8 xStack_324;
  float4 fStack_31c;
  float4 fStack_318;
  float4 fStack_314;
  xunknown8 xStack_310;
  xunknown8 xStack_308;
  xunknown8 xStack_300;
  xunknown8 xStack_2f8;
  xunknown8 xStack_2f0;
  xunknown8 xStack_2e8;
  xunknown8 xStack_2e0;
  xunknown8 xStack_2d8;
  xunknown8 xStack_2d0;
  xunknown8 xStack_2c8;
  xunknown8 xStack_2c0;
  xunknown8 xStack_2b8;
  xunknown8 xStack_2b0;
  xunknown8 xStack_2a8;
  xunknown8 xStack_2a0;
  xunknown8 xStack_298;
  float4 fStack_290;
  float4 fStack_28c;
  float4 fStack_288;
  float4 fStack_284;
  float4 fStack_280;
  float4 fStack_27c;
  float4 fStack_278;
  float4 fStack_274;
  float4 fStack_270;
  xunknown8 xStack_26c;
  xunknown8 xStack_264;
  float4 fStack_25c;
  float4 fStack_258;
  float4 fStack_254;
  xunknown8 xStack_250;
  xunknown8 xStack_248;
  xunknown8 xStack_240;
  xunknown8 xStack_238;
  xunknown8 xStack_230;
  xunknown8 xStack_228;
  xunknown8 xStack_220;
  xunknown8 xStack_218;
  uint8 uStack_210;
  xunknown8 xStack_208;
  xunknown8 xStack_200;
  xunknown8 xStack_1f8;
  xunknown8 xStack_1f0;
  xunknown8 xStack_1e8;
  xunknown8 xStack_1e0;
  xunknown8 xStack_1d8;
  xunknown1 axStack_1d0 [16];
  xunknown8 xStack_1c0;
  xunknown8 xStack_1b8;
  xunknown1 (*paxStack_1b0) [16];
  float8 afStack_1a8 [30];
  int8 iStack_b8;
  
  iVar20 = tpidr_el0;
  iStack_b8 = *(int8 *)(iVar20 + 0x28);
  xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
  xStack_1b8 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
  if (cRam0000000000162b98 == '\x01') {
    xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
    xStack_1b8 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
    if ((uRam0000000000162c5a & 1) == 0) {
      cRam0000000000162b98 = '\0';
      axVar111._0_8_ = (fRam0000000000162c10 - fRam0000000000170cc0) / 1000.0;
      axVar111._8_8_ = 0;
      budget__CpuMs_plt(axVar111,0);
      fRam0000000000170cc0 = fRam0000000000162c10;
      xRam0000000000170cb8 =
           ((int8)iRam0000000000162728 - (int8)iRam0000000000162720 >> 4) * 0x4ec4ec4ec4ec4ec5;
      if ((*puRam00000000000d3610 >> 1 & 1) == 0) {
        boot__R_plt(0x2eae6 /* "ZyZ: shadows - cascades" */);
        if (iRam0000000000170ccc != 0) {
code_r0x00084080:
          iVar37 = iRam0000000000170cd8;
          paxVar79 = (xunknown1 (*) [16])0x170000;
          xRam0000000000170cc8 = 0;
          xRam0000000000162c59 = 0;
          fRam0000000000170cd0 = (float4)xRam00000000000d8d34;
          fRam0000000000170cd4 = xRam00000000000d8d34._4_4_;
          uVar39 = lights__Camera_plt(&xStack_2d0,&xStack_310,&fStack_31c);
          if ((uVar39 & 1) == 0) {
            cRam0000000000170ce0 = '\0';
            uRam0000000000170cdc = uRam0000000000170cdc + 1;
            iRam0000000000170f18 = iRam0000000000170f18 + 1;
            uRam0000000000170ca0 = 2;
            goto code_r0x0008446c;
          }
          uVar39 = FUN_00089920(&fStack_31c,&fStack_35c,xRam00000000000d8d2c._4_4_);
          if (((uVar39 & 1) == 0) ||
             (uVar39 = FUN_00089920(&fStack_31c,&fStack_39c,xRam00000000000d8d2c._4_4_),
             (uVar39 & 1) == 0)) {
            uRam0000000000170ca0 = 3;
            if (iRam0000000000170cd8 == iVar37) {
              uRam0000000000170ca0 = 4;
            }
            uRam0000000000170cdc = uRam0000000000170cdc + 1;
            cRam0000000000170ce0 = '\0';
            *(int8 *)((uint8)uRam0000000000170ca0 * 8 + 0x170f08) =
                 *(int8 *)((uint8)uRam0000000000170ca0 * 8 + 0x170f08) + 1;
            iVar37 = iRam0000000000170ec8 + 1;
            bVar34 = iRam0000000000170f40 <= iRam0000000000170ec8;
            iRam0000000000170ec8 = iVar37;
            xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
            xStack_1b8 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
            if (bVar34) {
              iRam0000000000170f40 = iVar37;
              uRam0000000000170f44 = uRam0000000000170ca0;
              xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
              xStack_1b8 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
            }
            goto code_r0x00084b84;
          }
          xRam0000000000170d00 = CONCAT44(fStack_358,fStack_35c);
          xRam0000000000170d10 = CONCAT44(fStack_348,fStack_34c);
          xRam0000000000170d20 = CONCAT44(fStack_338,fStack_33c);
          xRam0000000000170d08 = xStack_354;
          xRam0000000000170d18 = xStack_344;
          xRam0000000000170d30 = CONCAT44(fStack_328,fStack_32c);
          xRam0000000000170d28 = xStack_334;
          xRam0000000000170d38 = xStack_324;
          iRam00000000000d8d54 = iRam00000000000d8d54 + 1;
          iRam0000000000170d80 = iRam0000000000170d80 + 1;
          if ((iRam0000000000170da8 < 0x3c) || (uRam0000000000170ce4 - uRam0000000000170d88 < 0x14))
          {
            if (225.0 < (fStack_318 - xRam0000000000170d8c._4_4_) *
                        (fStack_318 - xRam0000000000170d8c._4_4_) +
                        (fStack_31c - (float4)xRam0000000000170d8c) *
                        (fStack_31c - (float4)xRam0000000000170d8c)) goto code_r0x000841a8;
            if (((fRam0000000000170cec * xRam0000000000170d98._4_4_ +
                  (float4)xRam0000000000170d98 * fRam0000000000170ce8 +
                  fRam0000000000170da0 * fRam0000000000170cf0 < 0.99998) ||
                (cRam0000000000170ce0 == '\0')) ||
               (0x59 < uRam0000000000170ce4 - uRam0000000000170d88)) goto code_r0x000841a8;
            bVar34 = false;
          }
          else {
            iRam0000000000170db0 = iRam0000000000170db0 + 1;
code_r0x000841a8:
            uRam0000000000170d88 = uRam0000000000170ce4;
            xRam0000000000170d40 = CONCAT44(fStack_398,fStack_39c);
            xRam0000000000170d50 = CONCAT44(fStack_388,fStack_38c);
            xRam0000000000170d60 = CONCAT44(fStack_378,fStack_37c);
            xRam0000000000170d98 = CONCAT44(fRam0000000000170cec,fRam0000000000170ce8);
            xRam0000000000170d48 = xStack_394;
            xRam0000000000170d58 = xStack_384;
            xRam0000000000170d70 = CONCAT44(fStack_368,fStack_36c);
            xRam0000000000170d8c = CONCAT44(fStack_318,fStack_31c);
            fRam0000000000170d94 = fStack_314;
            iRam0000000000170db8 = iRam0000000000170db8 + 1;
            fRam0000000000170da0 = fRam0000000000170cf0;
            xRam0000000000170d68 = xStack_374;
            xRam0000000000170d78 = xStack_364;
            iRam0000000000170da8 = 0;
            bVar34 = true;
          }
          paxVar40 = (xunknown1 (*) [16])clock_gettime(1,&xStack_1c0);
          fVar161 = fRam0000000000170cd4;
          paxVar41 = iRam0000000000162728;
          pxVar173 = (xunknown1 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
          iVar78 = CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
          uVar50 = uRam0000000000170ce4 + 1;
          paxRam0000000000162740 = paxRam0000000000162738;
          uRam0000000000170ce4 = uVar50;
          if (uRam0000000000162c58 == '\x01') {
            puRam0000000000162778 = puRam0000000000162770;
            puRam0000000000162860 = puRam0000000000162858;
            paxVar40 = (xunknown1 (*) [16])FUN_00089cd8(&xStack_2d0,&xStack_310,&xStack_450);
            paxVar71 = iRam0000000000162728;
            for (paxVar41 = iRam0000000000162720; paxVar41 != paxVar71; paxVar41 = paxVar41 + 0xd) {
              uVar39 = (uint8)(uint1)paxVar41[0xc][9];
              *(int8 *)(uVar39 * 8 + 0x170dc0) = *(int8 *)(uVar39 * 8 + 0x170dc0) + 1;
              paxVar85 = paxRam0000000000162838;
              if (uVar39 == 3) {
                uVar49 = *(uint4 *)(paxVar41[0xc] + 0xc);
                paxVar91 = (xunknown1 (*) [16])(uint8)uVar49;
                if (paxRam0000000000162838 != (xunknown1 (*) [16])0x0) {
                  pxVar45 = paxRam0000000000162838[-1] + 0xf;
                  uVar62 = (uint4)paxRam0000000000162838;
                  if (((uint8)paxRam0000000000162838 & (uint8)pxVar45) == 0) {
                    paxVar79 = (xunknown1 (*) [16])(uint8)(uVar62 - 1 & uVar49);
                  }
                  else {
                    paxVar79 = paxVar91;
                    if (paxRam0000000000162838 <= paxVar91) {
                      uVar87 = 0;
                      if (uVar62 != 0) {
                        uVar87 = uVar49 / uVar62;
                      }
                      paxVar79 = (xunknown1 (*) [16])(uint8)(uVar49 - uVar87 * uVar62);
                    }
                  }
                  pxVar51 = *(xunknown8 **)(iRam0000000000162830 + (int8)paxVar79 * 8);
                  if (pxVar51 != (xunknown8 *)0x0) {
                    for (paxVar75 = (xunknown1 (*) [16])*pxVar51;
                        paxVar75 != (xunknown1 (*) [16])0x0;
                        paxVar75 = *(xunknown1 (**) [16])*paxVar75) {
                      paxVar70 = *(xunknown1 (**) [16])(*paxVar75 + 8);
                      if (paxVar70 == paxVar91) {
                        if (*(uint4 *)paxVar75[1] == uVar49) goto code_r0x000850e8;
                      }
                      else {
                        if (((uint8)paxRam0000000000162838 & (uint8)pxVar45) == 0) {
                          paxVar70 = (xunknown1 (*) [16])((uint8)paxVar70 & (uint8)pxVar45);
                        }
                        else if (paxRam0000000000162838 <= paxVar70) {
                          uVar39 = 0;
                          if (paxRam0000000000162838 != (xunknown1 (*) [16])0x0) {
                            uVar39 = (uint8)paxVar70 / (uint8)paxRam0000000000162838;
                          }
                          paxVar70 = (xunknown1 (*) [16])
                                     ((int8)paxVar70 - uVar39 * (int8)paxRam0000000000162838);
                        }
                        if (paxVar70 != paxVar79) break;
                      }
                    }
                  }
                }
                paxVar75 = (xunknown1 (*) [16])operator_new_plt(0x28);
                fVar94 = fRam0000000000162850;
                uVar39 = uRam0000000000162848;
                *(xunknown8 *)*paxVar75 = 0;
                *(xunknown1 (**) [16])(*paxVar75 + 8) = paxVar91;
                *(uint4 *)paxVar75[1] = uVar49;
                *(xunknown8 *)(paxVar75[1] + 0xc) = 0;
                *(xunknown8 *)(paxVar75[1] + 4) = 0;
                *(xunknown4 *)(paxVar75[2] + 4) = 0;
                paxVar40 = paxVar75;
                if ((paxVar85 == (xunknown1 (*) [16])0x0) ||
                   (fVar94 * (float4)paxVar85 < (float4)(uVar39 + 1))) {
                  if (paxVar85 < (xunknown1 (*) [16])0x3) {
                    uVar53 = 1;
                  }
                  else {
                    uVar53 = (uint8)(((uint8)paxVar85 & (uint8)(paxVar85[-1] + 0xf)) != 0);
                  }
                  paxVar70 = (xunknown1 (*) [16])(uVar53 | (int8)paxVar85 << 1);
                  paxVar52 = (xunknown1 (*) [16])(int8)((float4)(uVar39 + 1) / fVar94);
                  if (paxVar70 <= paxVar52) {
                    paxVar70 = paxVar52;
                  }
                  if (paxVar70[-1] + 0xf == (xunknown1 *)0x0) {
                    paxVar70 = (xunknown1 (*) [16])0x2;
                  }
                  else if (((uint8)paxVar70 & (uint8)(paxVar70[-1] + 0xf)) != 0) {
                    paxVar40 = (xunknown1 (*) [16])std____ndk1____next_prime_plt(paxVar70);
                    paxVar70 = paxVar40;
                    paxVar85 = paxRam0000000000162838;
                  }
                  if (paxVar85 < paxVar70) {
code_r0x00084e80:
                    if ((uint8)paxVar70 >> 0x3d != 0) goto code_r0x0008959c;
                    paxVar79 = (xunknown1 (*) [16])((int8)paxVar70 << 3);
                    iVar76 = operator_new_plt(paxVar79);
                    iVar80 = iRam0000000000162830;
                    bVar32 = iRam0000000000162830 != 0;
                    iRam0000000000162830 = iVar76;
                    if (bVar32) {
                      operator_delete_plt(iVar80,(int8)paxRam0000000000162838 << 3);
                    }
                    iVar80 = iRam0000000000162830;
                    paxRam0000000000162838 = paxVar70;
                    paxVar40 = (xunknown1 (*) [16])memset(iRam0000000000162830,0,paxVar79);
                    paxVar52 = paxRam0000000000162840;
                    paxVar85 = paxVar70;
                    if (paxRam0000000000162840 != (xunknown1 (*) [16])0x0) {
                      pxVar45 = paxVar70[-1] + 0xf;
                      paxVar56 = *(xunknown1 (**) [16])(*paxRam0000000000162840 + 8);
                      if (((uint8)paxVar70 & (uint8)pxVar45) == 0) {
                        paxVar56 = (xunknown1 (*) [16])((uint8)paxVar56 & (uint8)pxVar45);
                      }
                      else if (paxVar70 <= paxVar56) {
                        uVar39 = 0;
                        if (paxVar70 != (xunknown1 (*) [16])0x0) {
                          uVar39 = (uint8)paxVar56 / (uint8)paxVar70;
                        }
                        paxVar56 = (xunknown1 (*) [16])((int8)paxVar56 - uVar39 * (int8)paxVar70);
                      }
                      *(xunknown8 *)(iVar80 + (int8)paxVar56 * 8) = 0x162840;
                      paxVar60 = *(xunknown1 (**) [16])*paxVar52;
                      if (paxVar60 != (xunknown1 (*) [16])0x0) {
                        do {
                          paxVar63 = *(xunknown1 (**) [16])(*paxVar60 + 8);
                          if (((uint8)paxVar70 & (uint8)pxVar45) == 0) {
                            paxVar63 = (xunknown1 (*) [16])((uint8)paxVar63 & (uint8)pxVar45);
                            if (paxVar63 == paxVar56) goto code_r0x00084fa8;
code_r0x00084ff0:
                            if (*(int8 *)(iVar80 + (int8)paxVar63 * 8) == 0) {
                              *(xunknown1 (**) [16])(iVar80 + (int8)paxVar63 * 8) = paxVar52;
                              paxVar52 = paxVar60;
                              paxVar56 = paxVar63;
                            }
                            else {
                              *(xunknown8 *)*paxVar52 = *(xunknown8 *)*paxVar60;
                              *(xunknown8 *)*paxVar60 =
                                   **(xunknown8 **)(iVar80 + (int8)paxVar63 * 8);
                              **(xunknown8 **)(iVar80 + (int8)paxVar63 * 8) = paxVar60;
                            }
                          }
                          else {
                            if (paxVar70 <= paxVar63) {
                              uVar39 = 0;
                              if (paxVar70 != (xunknown1 (*) [16])0x0) {
                                uVar39 = (uint8)paxVar63 / (uint8)paxVar70;
                              }
                              paxVar63 = (xunknown1 (*) [16])
                                         ((int8)paxVar63 - uVar39 * (int8)paxVar70);
                            }
                            if (paxVar63 != paxVar56) goto code_r0x00084ff0;
code_r0x00084fa8:
                            paxVar52 = paxVar60;
                          }
                          paxVar60 = *(xunknown1 (**) [16])*paxVar52;
                        } while (paxVar60 != (xunknown1 (*) [16])0x0);
                      }
                    }
                  }
                  else if (paxVar70 < paxVar85) {
                    paxVar40 = (xunknown1 (*) [16])
                               (int8)((float4)uRam0000000000162848 / fRam0000000000162850);
                    if ((paxVar85 < (xunknown1 (*) [16])0x3) ||
                       (((uint8)paxVar85 & (uint8)(paxVar85[-1] + 0xf)) != 0)) {
                      paxVar40 = (xunknown1 (*) [16])std____ndk1____next_prime_plt();
                    }
                    else if ((xunknown1 (*) [16])0x1 < paxVar40) {
                      paxVar40 = (xunknown1 (*) [16])(1L << (-LZCOUNT(paxVar40[-1] + 0xf) & 0x3fU));
                    }
                    iVar80 = iRam0000000000162830;
                    if (paxVar70 <= paxVar40) {
                      paxVar70 = paxVar40;
                    }
                    if (paxVar70 < paxVar85) {
                      if (paxVar70 != (xunknown1 (*) [16])0x0) goto code_r0x00084e80;
                      iRam0000000000162830 = 0;
                      paxVar40 = (xunknown1 (*) [16])0x0;
                      if (iVar80 != 0) {
                        paxVar40 = (xunknown1 (*) [16])
                                   operator_delete_plt(iVar80,(int8)paxRam0000000000162838 << 3);
                      }
                      paxRam0000000000162838 = (xunknown1 (*) [16])0x0;
                      paxVar85 = (xunknown1 (*) [16])0x0;
                    }
                    else {
                      paxVar85 = paxRam0000000000162838;
                    }
                  }
                  if (((uint8)paxVar85 & (uint8)(paxVar85[-1] + 0xf)) == 0) {
                    paxVar91 = (xunknown1 (*) [16])(uint8)((int4)paxVar85 - 1U & uVar49);
                  }
                  else if (paxVar85 <= paxVar91) {
                    uVar39 = 0;
                    if (paxVar85 != (xunknown1 (*) [16])0x0) {
                      uVar39 = (uint8)paxVar91 / (uint8)paxVar85;
                    }
                    paxVar91 = (xunknown1 (*) [16])((int8)paxVar91 - uVar39 * (int8)paxVar85);
                  }
                }
                else {
                  paxVar91 = paxVar79;
                }
                iVar80 = iRam0000000000162830;
                pxVar51 = *(xunknown8 **)(iRam0000000000162830 + (int8)paxVar91 * 8);
                if (pxVar51 == (xunknown8 *)0x0) {
                  paxVar70 = paxVar75;
                  *(xunknown1 (**) [16])*paxVar75 = paxRam0000000000162840;
                  paxRam0000000000162840 = paxVar70;
                  *(xunknown8 *)(iVar80 + (int8)paxVar91 * 8) = 0x162840;
                  if (*(int8 *)*paxVar75 != 0) {
                    paxVar91 = *(xunknown1 (**) [16])(*(int8 *)*paxVar75 + 8);
                    if (((uint8)paxVar85 & (uint8)(paxVar85[-1] + 0xf)) == 0) {
                      *(xunknown1 (**) [16])
                       (iVar80 + ((uint8)paxVar91 & (uint8)(paxVar85[-1] + 0xf)) * 8) = paxVar75;
                    }
                    else {
                      if (paxVar85 <= paxVar91) {
                        uVar39 = 0;
                        if (paxVar85 != (xunknown1 (*) [16])0x0) {
                          uVar39 = (uint8)paxVar91 / (uint8)paxVar85;
                        }
                        paxVar91 = (xunknown1 (*) [16])((int8)paxVar91 - uVar39 * (int8)paxVar85);
                      }
                      *(xunknown1 (**) [16])(iVar80 + (int8)paxVar91 * 8) = paxVar75;
                    }
                  }
                }
                else {
                  *(xunknown8 *)*paxVar75 = *pxVar51;
                  *pxVar51 = paxVar75;
                }
                uRam0000000000162848 = uRam0000000000162848 + 1;
                uVar50 = uRam0000000000170ce4;
code_r0x000850e8:
                if (*(uint4 *)paxVar75[2] != uVar50) {
                  if (*(uint4 *)paxVar75[2] == 0) {
                    *(xunknown4 *)(paxVar75[2] + 4) = 0;
                    fVar94 = *(float4 *)(paxVar41[7] + 0xc);
                  }
                  else {
                    fVar94 = *(float4 *)(paxVar41[7] + 0xc);
                    fVar118 = *(float4 *)paxVar41[8] - *(float4 *)(paxVar75[1] + 8);
                    fVar128 = *(float4 *)(paxVar41[8] + 4) - *(float4 *)(paxVar75[1] + 0xc);
                    fVar125 = fVar94 - *(float4 *)(paxVar75[1] + 4);
                    if (0.0025000002 < fVar118 * fVar118 + fVar125 * fVar125 + fVar128 * fVar128) {
                      if (*(uint4 *)(paxVar75[2] + 4) <= uVar50) {
                        iRam0000000000170de8 = iRam0000000000170de8 + 1;
                      }
                      *(uint4 *)(paxVar75[2] + 4) = uVar50 + 900;
                    }
                  }
                  *(float4 *)(paxVar75[1] + 4) = fVar94;
                  *(xunknown4 *)(paxVar75[1] + 8) = *(xunknown4 *)paxVar41[8];
                  xVar93 = *(xunknown4 *)(paxVar41[8] + 4);
                  *(uint4 *)paxVar75[2] = uVar50;
                  *(xunknown4 *)(paxVar75[1] + 0xc) = xVar93;
                }
              }
            }
            paxVar75 = iRam0000000000162720;
            paxVar79 = iRam0000000000162728;
            puVar95 = puRam0000000000162770;
            puVar88 = puRam0000000000162778;
            paxVar41 = paxRam0000000000162840;
            if ((uVar50 * -0x69d0369d >> 3 | uVar50 * 0x60000000) < 0x6d3a07) {
              while( true ) {
                paxVar40 = (xunknown1 (*) [16])0x0;
                paxVar75 = iRam0000000000162720;
                paxVar79 = iRam0000000000162728;
                puVar95 = puRam0000000000162770;
                puVar88 = puRam0000000000162778;
                if (paxVar41 == (xunknown1 (*) [16])0x0) break;
                while( true ) {
                  paxVar79 = paxRam0000000000162838;
                  iVar80 = iRam0000000000162830;
                  if ((uVar50 - *(int4 *)paxVar41[2] < 0xe11) ||
                     (uVar50 < *(uint4 *)(paxVar41[2] + 4))) break;
                  paxVar40 = *(xunknown1 (**) [16])(*paxVar41 + 8);
                  pxVar45 = paxRam0000000000162838[-1] + 0xf;
                  if (((uint8)paxRam0000000000162838 & (uint8)pxVar45) == 0) {
                    paxVar40 = (xunknown1 (*) [16])((uint8)pxVar45 & (uint8)paxVar40);
                  }
                  else if (paxRam0000000000162838 <= paxVar40) {
                    uVar39 = 0;
                    if (paxRam0000000000162838 != (xunknown1 (*) [16])0x0) {
                      uVar39 = (uint8)paxVar40 / (uint8)paxRam0000000000162838;
                    }
                    paxVar40 = (xunknown1 (*) [16])
                               ((int8)paxVar40 - uVar39 * (int8)paxRam0000000000162838);
                  }
                  paxVar85 = *(xunknown1 (**) [16])*paxVar41;
                  paxVar71 = *(xunknown1 (**) [16])(iRam0000000000162830 + (int8)paxVar40 * 8);
                  do {
                    paxVar75 = paxVar71;
                    paxVar71 = *(xunknown1 (**) [16])*paxVar75;
                  } while (*(xunknown1 (**) [16])*paxVar75 != paxVar41);
                  paxVar71 = paxVar85;
                  if (paxVar75 == (xunknown1 (*) [16])0x162840) {
code_r0x000853d8:
                    if (paxVar85 == (xunknown1 (*) [16])0x0) {
code_r0x00085410:
                      *(xunknown8 *)(iRam0000000000162830 + (int8)paxVar40 * 8) = 0;
                      paxVar71 = *(xunknown1 (**) [16])*paxVar41;
                      goto code_r0x00085418;
                    }
                    paxVar91 = *(xunknown1 (**) [16])(*paxVar85 + 8);
                    if (((uint8)paxRam0000000000162838 & (uint8)pxVar45) == 0) {
                      paxVar70 = (xunknown1 (*) [16])((uint8)paxVar91 & (uint8)pxVar45);
                    }
                    else {
                      paxVar70 = paxVar91;
                      if (paxRam0000000000162838 <= paxVar91) {
                        uVar39 = 0;
                        if (paxRam0000000000162838 != (xunknown1 (*) [16])0x0) {
                          uVar39 = (uint8)paxVar91 / (uint8)paxRam0000000000162838;
                        }
                        paxVar70 = (xunknown1 (*) [16])
                                   ((int8)paxVar91 - uVar39 * (int8)paxRam0000000000162838);
                      }
                    }
                    if (paxVar70 != paxVar40) goto code_r0x00085410;
code_r0x00085420:
                    if (((uint8)paxVar79 & (uint8)pxVar45) == 0) {
                      paxVar91 = (xunknown1 (*) [16])((uint8)paxVar91 & (uint8)pxVar45);
                    }
                    else if (paxVar79 <= paxVar91) {
                      uVar39 = 0;
                      if (paxVar79 != (xunknown1 (*) [16])0x0) {
                        uVar39 = (uint8)paxVar91 / (uint8)paxVar79;
                      }
                      paxVar91 = (xunknown1 (*) [16])((int8)paxVar91 - uVar39 * (int8)paxVar79);
                    }
                    if (paxVar91 != paxVar40) {
                      *(xunknown1 (**) [16])(iVar80 + (int8)paxVar91 * 8) = paxVar75;
                      paxVar71 = *(xunknown1 (**) [16])*paxVar41;
                    }
                  }
                  else {
                    paxVar91 = *(xunknown1 (**) [16])(*paxVar75 + 8);
                    if (((uint8)paxRam0000000000162838 & (uint8)pxVar45) == 0) {
                      paxVar91 = (xunknown1 (*) [16])((uint8)paxVar91 & (uint8)pxVar45);
                    }
                    else if (paxRam0000000000162838 <= paxVar91) {
                      uVar39 = 0;
                      if (paxRam0000000000162838 != (xunknown1 (*) [16])0x0) {
                        uVar39 = (uint8)paxVar91 / (uint8)paxRam0000000000162838;
                      }
                      paxVar91 = (xunknown1 (*) [16])
                                 ((int8)paxVar91 - uVar39 * (int8)paxRam0000000000162838);
                    }
                    if (paxVar91 != paxVar40) goto code_r0x000853d8;
code_r0x00085418:
                    if (paxVar71 != (xunknown1 (*) [16])0x0) {
                      paxVar91 = *(xunknown1 (**) [16])(*paxVar71 + 8);
                      goto code_r0x00085420;
                    }
                  }
                  *(xunknown1 (**) [16])*paxVar75 = paxVar71;
                  *(xunknown8 *)*paxVar41 = 0;
                  uRam0000000000162848 = uRam0000000000162848 - 1;
                  operator_delete_plt(paxVar41,0x28);
                  paxVar40 = (xunknown1 (*) [16])0x0;
                  paxVar41 = paxVar85;
                  uVar50 = uRam0000000000170ce4;
                  paxVar75 = iRam0000000000162720;
                  paxVar79 = iRam0000000000162728;
                  puVar95 = puRam0000000000162770;
                  puVar88 = puRam0000000000162778;
                  if (paxVar85 == (xunknown1 (*) [16])0x0) goto joined_r0x00085494;
                }
                paxVar41 = *(xunknown1 (**) [16])*paxVar41;
              }
            }
joined_r0x00085494:
            do {
              paxVar41 = iRam0000000000162728;
              puRam0000000000162770 = puVar95;
              puRam0000000000162778 = puVar88;
              if (paxVar75 == iRam0000000000162728) goto code_r0x00086274;
              fVar94 = *(float4 *)(paxVar75[7] + 0xc);
              fVar118 = *(float4 *)paxVar75[8];
              fVar125 = *(float4 *)(paxVar75[8] + 4);
              uStack_210 = ((((((((((uint8)*(uint4 *)(paxVar75[1] + 8) ^ 0x14650fb0739d0383) *
                                   0x100000001b3 ^ *(uint8 *)paxVar75[1]) * 0x100000001b3 ^
                                 (int8)*(int4 *)(*paxVar75 + 8)) * 0x100000001b3 ^
                                (uint8)*(uint4 *)paxVar75[2]) * 0x100000001b3 ^
                               *(uint8 *)(paxVar75[3] + 8)) * 0x100000001b3 ^
                              (int8)*(int4 *)paxVar75[3]) * 0x100000001b3 ^
                             (int8)(float4)(int4)(fVar94 * 50.0)) * 0x100000001b3 ^
                            (int8)(float4)(int4)(fVar118 * 50.0)) * 0x100000001b3 ^
                           (int8)(float4)(int4)(fVar125 * 50.0)) * 0x100000001b3;
              if ((paxVar75[0xc][8] & 1) == 0) {
                uStack_210 = (((int8)(float4)(int4)(*(float4 *)(paxVar75[4] + 0xc) * 1000.0) ^
                              uStack_210) * 0x100000001b3 ^
                             (int8)(float4)(int4)(*(float4 *)paxVar75[5] * 1000.0)) * 0x100000001b3;
              }
              xVar14 = paxVar75[0xc][9];
              uVar39 = (((((((uint8)*(uint4 *)(paxVar75[1] + 8) ^ 0x100000001b3) *
                            0x14650fb0739d0383 ^ *(uint8 *)paxVar75[1]) * 0x14650fb0739d0383 ^
                          (int8)*(int4 *)(*paxVar75 + 8)) * 0x14650fb0739d0383 ^
                         (uint8)*(uint4 *)paxVar75[2]) * 0x14650fb0739d0383 ^
                        *(uint8 *)(paxVar75[3] + 8)) * 0x14650fb0739d0383 ^
                       (int8)*(int4 *)paxVar75[3]) * 0x14650fb0739d0383;
              if (puVar88 < puRam0000000000162780) {
                iRam0000000000162728 = paxVar79;
                *puVar88 = uVar39;
                puVar77 = puVar88 + 3;
                *(float4 *)(puVar88 + 1) = fVar94;
                *(float4 *)((int8)puVar88 + 0xc) = fVar118;
                *(float4 *)(puVar88 + 2) = fVar125;
                *(xunknown1 *)((int8)puVar88 + 0x14) = xVar14;
              }
              else {
                uVar53 = ((int8)puVar88 - (int8)puVar95 >> 3) * -0x5555555555555555 + 1;
                iRam0000000000162728 = paxVar79;
                if (0xaaaaaaaaaaaaaaa < uVar53) goto code_r0x00089564;
                iVar76 = (int8)puRam0000000000162780 - (int8)puVar95;
                iVar80 = iVar76 >> 3;
                uVar61 = iVar80 * 0x5555555555555556;
                if (uVar61 <= uVar53) {
                  uVar61 = uVar53;
                }
                if (0x555555555555554 < (uint8)(iVar80 * -0x5555555555555555)) {
                  uVar61 = 0xaaaaaaaaaaaaaaa;
                }
                pxVar45 = (xunknown1 *)xStack_1c0;
                if (0xaaaaaaaaaaaaaaa < uVar61) goto code_r0x00089534;
                paxVar40 = (xunknown1 (*) [16])operator_new_plt(uVar61 * 0x18);
                puVar77 = (uint8 *)((int8)paxVar40 + ((int8)puVar88 - (int8)puVar95));
                *puVar77 = uVar39;
                *(float4 *)(puVar77 + 1) = fVar94;
                *(float4 *)((int8)puVar77 + 0xc) = fVar118;
                *(float4 *)(puVar77 + 2) = fVar125;
                *(xunknown1 *)((int8)puVar77 + 0x14) = xVar14;
                if (puVar88 == puVar95) {
                  puRam0000000000162770 = puVar77;
                }
                else {
                  puVar54 = puVar77;
                  do {
                    puVar48 = puVar88 + -1;
                    axVar111 = *(xunknown1 (*) [16])(puVar88 + -3);
                    puVar88 = puVar88 + -3;
                    puRam0000000000162770 = puVar54 + -3;
                    puVar54[-1] = *puVar48;
                    puVar54[-2] = axVar111._8_8_;
                    puVar54[-3] = axVar111._0_8_;
                    puVar54 = puRam0000000000162770;
                  } while (puVar88 != puVar95);
                }
                puVar77 = puVar77 + 3;
                puRam0000000000162780 = (uint8 *)((int8)paxVar40 + uVar61 * 0x18);
                if (puVar95 != (uint8 *)0x0) {
                  puRam0000000000162778 = puVar77;
                  paxVar40 = (xunknown1 (*) [16])operator_delete_plt(puVar95,iVar76);
                }
              }
              puVar88 = puRam0000000000162790;
              puVar95 = puRam0000000000162788;
              puRam0000000000162778 = puVar77;
              if (uRam00000000001627e8 == 0) {
code_r0x000857c0:
                piVar64 = (int8 *)0x0;
              }
              else {
                uVar53 = uRam00000000001627e8 - 1;
                if ((uRam00000000001627e8 & uVar53) == 0) {
                  uVar61 = uVar53 & uStack_210;
                }
                else {
                  uVar61 = uStack_210;
                  if (uRam00000000001627e8 <= uStack_210) {
                    uVar61 = 0;
                    if (uRam00000000001627e8 != 0) {
                      uVar61 = uStack_210 / uRam00000000001627e8;
                    }
                    uVar61 = uStack_210 - uVar61 * uRam00000000001627e8;
                  }
                }
                piVar64 = *(int8 **)(iRam00000000001627e0 + uVar61 * 8);
                if (piVar64 == (int8 *)0x0) goto code_r0x000857c0;
                for (piVar64 = (int8 *)*piVar64; piVar64 != (int8 *)0x0; piVar64 = (int8 *)*piVar64)
                {
                  uVar67 = piVar64[1];
                  if (uVar67 == uStack_210) {
                    if (piVar64[2] == uStack_210) {
                      uVar53 = (uint8)*(uint4 *)(piVar64 + 3);
                      uVar50 = uRam0000000000170ce4 - 1;
                      if (*(uint4 *)(paxRam00000000001627c8[uVar53 * 0x10 + 0xd] + 8) == uVar50)
                      goto code_r0x000857f8;
                      break;
                    }
                  }
                  else {
                    if ((uRam00000000001627e8 & uVar53) == 0) {
                      uVar67 = uVar67 & uVar53;
                    }
                    else if (uRam00000000001627e8 <= uVar67) {
                      uVar92 = 0;
                      if (uRam00000000001627e8 != 0) {
                        uVar92 = uVar67 / uRam00000000001627e8;
                      }
                      uVar67 = uVar67 - uVar92 * uRam00000000001627e8;
                    }
                    if (uVar67 != uVar61) goto code_r0x000857c0;
                  }
                }
              }
              if (paxVar75[0xc][8] == '\x01') {
                iRam0000000000170df0 = iRam0000000000170df0 + 1;
                if (piVar64 != (int8 *)0x0) goto code_r0x000857e4;
code_r0x00085afc:
                paxVar40 = (xunknown1 (*) [16])FUN_00089e50(paxVar75,uVar39);
                puVar81 = puRam0000000000162860;
                puVar84 = puRam0000000000162858;
                if (((uint8)paxVar40 & 1) == 0) {
                  iVar80 = (int8)paxRam00000000001627d0 - (int8)paxRam00000000001627c8;
                  if ((uint8)(iVar80 >> 8) >> 5 < 0x177) {
                    xStack_1c0 = &uStack_210;
                    iVar76 = std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt_2
                                       (0x1627e0,&uStack_210,xRam00000000000d3708,&xStack_1c0,
                                        &xStack_250);
                    uVar53 = uStack_210;
                    *(int4 *)(iVar76 + 0x18) = (int4)((uint8)iVar80 >> 8);
                    uVar50 = uRam0000000000170ce4;
                    paxVar71 = paxRam00000000001627d0;
                    paxVar79 = paxRam00000000001627c8;
                    afStack_1a8[0xf] = *(float8 *)paxVar75[9];
                    afStack_1a8[0x10] = *(float8 *)(paxVar75[9] + 8);
                    paxVar40 = (xunknown1 (*) [16])(uint8)uRam0000000000170ce4;
                    afStack_1a8[0x11] = *(float8 *)paxVar75[10];
                    afStack_1a8[0x12] = *(float8 *)(paxVar75[10] + 8);
                    afStack_1a8[0x13] = *(float8 *)paxVar75[0xb];
                    afStack_1a8[0x14] = *(float8 *)(paxVar75[0xb] + 8);
                    afStack_1a8[0x15] = *(float8 *)paxVar75[0xc];
                    afStack_1a8[0x16] = *(float8 *)(paxVar75[0xc] + 8);
                    afStack_1a8[7] = *(float8 *)paxVar75[5];
                    afStack_1a8[8] = *(float8 *)(paxVar75[5] + 8);
                    afStack_1a8[9] = *(float8 *)paxVar75[6];
                    afStack_1a8[10] = *(float8 *)(paxVar75[6] + 8);
                    afStack_1a8[0xb] = *(float8 *)paxVar75[7];
                    afStack_1a8[0xc] = *(float8 *)(paxVar75[7] + 8);
                    afStack_1a8[0xd] = *(float8 *)paxVar75[8];
                    afStack_1a8[0xe] = *(float8 *)(paxVar75[8] + 8);
                    paxStack_1b0 = *(xunknown1 (**) [16])paxVar75[1];
                    afStack_1a8[0] = *(float8 *)(paxVar75[1] + 8);
                    afStack_1a8[1] = *(float8 *)paxVar75[2];
                    afStack_1a8[2] = *(float8 *)(paxVar75[2] + 8);
                    afStack_1a8[3] = *(float8 *)paxVar75[3];
                    afStack_1a8[4] = *(float8 *)(paxVar75[3] + 8);
                    afStack_1a8[5] = *(float8 *)paxVar75[4];
                    afStack_1a8[6] = *(float8 *)(paxVar75[4] + 8);
                    axVar111 = *paxVar75;
                    xStack_1b8._0_4_ = axVar111._8_4_;
                    xStack_1b8._4_4_ = axVar111._12_4_;
                    xStack_1c0._0_4_ = axVar111._0_4_;
                    xStack_1c0._4_4_ = axVar111._4_4_;
                    if (uRam0000000000162810 == 0) {
                      xVar93 = 0;
                      xVar156 = 0;
                    }
                    else {
                      uVar61 = uRam0000000000162810 - 1;
                      uVar49 = *(uint4 *)paxVar75[2];
                      uVar67 = (uint8)uVar49;
                      uVar62 = (uint4)uRam0000000000162810;
                      if ((uRam0000000000162810 & uVar61) == 0) {
                        uVar92 = (uint8)(uVar62 - 1 & uVar49);
                      }
                      else {
                        uVar92 = uVar67;
                        if (uRam0000000000162810 <= uVar67) {
                          uVar87 = 0;
                          if (uVar62 != 0) {
                            uVar87 = uVar49 / uVar62;
                          }
                          uVar92 = (uint8)(uVar49 - uVar87 * uVar62);
                        }
                      }
                      piVar64 = *(int8 **)(iRam0000000000162808 + uVar92 * 8);
                      if (piVar64 != (int8 *)0x0) {
                        for (piVar64 = (int8 *)*piVar64; piVar64 != (int8 *)0x0;
                            piVar64 = (int8 *)*piVar64) {
                          uVar55 = piVar64[1];
                          if (uVar55 == uVar67) {
                            if (*(uint4 *)(piVar64 + 2) == uVar49) {
                              xVar93 = *(xunknown4 *)((int8)piVar64 + 0x14);
                              goto code_r0x00085f80;
                            }
                          }
                          else {
                            if ((uRam0000000000162810 & uVar61) == 0) {
                              uVar55 = uVar55 & uVar61;
                            }
                            else if (uRam0000000000162810 <= uVar55) {
                              uVar58 = 0;
                              if (uRam0000000000162810 != 0) {
                                uVar58 = uVar55 / uRam0000000000162810;
                              }
                              uVar55 = uVar55 - uVar58 * uRam0000000000162810;
                            }
                            if (uVar55 != uVar92) break;
                          }
                        }
                      }
                      xVar93 = 0;
code_r0x00085f80:
                      uVar49 = *(uint4 *)(paxVar75[1] + 8);
                      uVar67 = (uint8)uVar49;
                      if ((uRam0000000000162810 & uVar61) == 0) {
                        uVar92 = (uint8)(uVar62 - 1 & uVar49);
                      }
                      else {
                        uVar92 = uVar67;
                        if (uRam0000000000162810 <= uVar67) {
                          uVar87 = 0;
                          if (uVar62 != 0) {
                            uVar87 = uVar49 / uVar62;
                          }
                          uVar92 = (uint8)(uVar49 - uVar87 * uVar62);
                        }
                      }
                      piVar64 = *(int8 **)(iRam0000000000162808 + uVar92 * 8);
                      if (piVar64 != (int8 *)0x0) {
                        for (piVar64 = (int8 *)*piVar64; piVar64 != (int8 *)0x0;
                            piVar64 = (int8 *)*piVar64) {
                          uVar55 = piVar64[1];
                          if (uVar55 == uVar67) {
                            if (*(uint4 *)(piVar64 + 2) == uVar49) {
                              xVar156 = *(xunknown4 *)((int8)piVar64 + 0x14);
                              goto code_r0x0008600c;
                            }
                          }
                          else {
                            if ((uRam0000000000162810 & uVar61) == 0) {
                              uVar55 = uVar55 & uVar61;
                            }
                            else if (uRam0000000000162810 <= uVar55) {
                              uVar58 = 0;
                              if (uRam0000000000162810 != 0) {
                                uVar58 = uVar55 / uRam0000000000162810;
                              }
                              uVar55 = uVar55 - uVar58 * uRam0000000000162810;
                            }
                            if (uVar55 != uVar92) break;
                          }
                        }
                      }
                      xVar156 = 0;
                    }
code_r0x0008600c:
                    if (paxRam00000000001627d0 < paxRam00000000001627d8) {
                      axVar111 = *paxVar75;
                      xVar121 = *(xunknown8 *)paxVar75[1];
                      xVar126 = *(xunknown8 *)(paxVar75[2] + 8);
                      xVar44 = *(xunknown8 *)paxVar75[2];
                      xVar131 = *(xunknown8 *)(paxVar75[3] + 8);
                      xVar130 = *(xunknown8 *)paxVar75[3];
                      xVar188 = *(xunknown8 *)(paxVar75[8] + 8);
                      xVar119 = *(xunknown8 *)paxVar75[8];
                      xVar133 = *(xunknown8 *)(paxVar75[4] + 8);
                      xVar120 = *(xunknown8 *)paxVar75[4];
                      xVar136 = *(xunknown8 *)(paxVar75[5] + 8);
                      xVar123 = *(xunknown8 *)paxVar75[5];
                      xVar186 = *(xunknown8 *)(paxVar75[0xb] + 8);
                      xVar184 = *(xunknown8 *)paxVar75[0xb];
                      xVar145 = *(xunknown8 *)(paxVar75[0xc] + 8);
                      xVar140 = *(xunknown8 *)paxVar75[0xc];
                      axVar100 = paxVar75[6];
                      xVar177 = *(xunknown8 *)(paxVar75[7] + 8);
                      xVar174 = *(xunknown8 *)paxVar75[7];
                      xVar192 = *(xunknown8 *)(paxVar75[9] + 8);
                      xVar191 = *(xunknown8 *)paxVar75[9];
                      xVar182 = *(xunknown8 *)(paxVar75[10] + 8);
                      xVar180 = *(xunknown8 *)paxVar75[10];
                      *(xunknown8 *)(paxRam00000000001627d0[1] + 8) =
                           *(xunknown8 *)(paxVar75[1] + 8);
                      *(xunknown8 *)paxRam00000000001627d0[1] = xVar121;
                      *(xunknown8 *)(paxRam00000000001627d0[2] + 8) = xVar126;
                      *(xunknown8 *)paxRam00000000001627d0[2] = xVar44;
                      *(xunknown8 *)(paxRam00000000001627d0[3] + 8) = xVar131;
                      *(xunknown8 *)paxRam00000000001627d0[3] = xVar130;
                      *(xunknown8 *)(paxRam00000000001627d0[4] + 8) = xVar133;
                      *(xunknown8 *)paxRam00000000001627d0[4] = xVar120;
                      *(xunknown8 *)(paxRam00000000001627d0[5] + 8) = xVar136;
                      *(xunknown8 *)paxRam00000000001627d0[5] = xVar123;
                      *(int8 *)(paxRam00000000001627d0[6] + 8) = axVar100._8_8_;
                      *(int8 *)paxRam00000000001627d0[6] = axVar100._0_8_;
                      *(xunknown8 *)(paxRam00000000001627d0[7] + 8) = xVar177;
                      *(xunknown8 *)paxRam00000000001627d0[7] = xVar174;
                      *(xunknown8 *)(paxRam00000000001627d0[8] + 8) = xVar188;
                      *(xunknown8 *)paxRam00000000001627d0[8] = xVar119;
                      *(xunknown8 *)(paxRam00000000001627d0[9] + 8) = xVar192;
                      *(xunknown8 *)paxRam00000000001627d0[9] = xVar191;
                      *(xunknown8 *)(paxRam00000000001627d0[10] + 8) = xVar182;
                      *(xunknown8 *)paxRam00000000001627d0[10] = xVar180;
                      *(xunknown8 *)(paxRam00000000001627d0[0xb] + 8) = xVar186;
                      *(xunknown8 *)paxRam00000000001627d0[0xb] = xVar184;
                      *(xunknown8 *)(paxRam00000000001627d0[0xc] + 8) = xVar145;
                      *(xunknown8 *)paxRam00000000001627d0[0xc] = xVar140;
                      *(int8 *)(*paxRam00000000001627d0 + 8) = axVar111._8_8_;
                      *(int8 *)*paxRam00000000001627d0 = axVar111._0_8_;
                      *(uint8 *)paxRam00000000001627d0[0xd] = uStack_210;
                      paxVar85 = paxRam00000000001627d0 + 0x10;
                      *(uint4 *)(paxRam00000000001627d0[0xd] + 8) = uVar50;
                      *(xunknown4 *)(paxRam00000000001627d0[0xd] + 0xc) = 1;
                      *(xunknown4 *)paxRam00000000001627d0[0xe] = xVar93;
                      *(xunknown4 *)(paxRam00000000001627d0[0xe] + 4) = xVar156;
                      *(xunknown4 *)(paxRam00000000001627d0[0xe] + 8) = 0;
                      *(uint8 *)paxRam00000000001627d0[0xf] = uVar39;
                      *(xunknown4 *)(paxRam00000000001627d0[0xf] + 8) = 0;
                    }
                    else {
                      iVar80 = (int8)paxRam00000000001627d0 - (int8)paxRam00000000001627c8;
                      uVar61 = (iVar80 >> 8) + 1;
                      pxVar45 = axVar111._0_8_;
                      if (uVar61 >> 0x38 != 0) goto code_r0x000895b4;
                      uVar92 = (int8)paxRam00000000001627d8 - (int8)paxRam00000000001627c8;
                      uVar67 = (int8)uVar92 >> 7;
                      if ((uint8)((int8)uVar92 >> 7) <= uVar61) {
                        uVar67 = uVar61;
                      }
                      if (0x7ffffffffffffeff < uVar92) {
                        uVar67 = 0xffffffffffffff;
                      }
                      if (uVar67 >> 0x38 != 0) goto code_r0x00089534;
                      paxVar40 = (xunknown1 (*) [16])operator_new_plt();
                      paxVar85 = (xunknown1 (*) [16])((int8)paxVar40 + iVar80);
                      *(uint8 *)paxVar85[0xd] = uVar53;
                      *(uint4 *)(paxVar85[0xd] + 8) = uVar50;
                      *(xunknown4 *)(paxVar85[0xd] + 0xc) = 1;
                      *(float8 *)(paxVar85[10] + 8) = afStack_1a8[0x12];
                      *(float8 *)paxVar85[10] = afStack_1a8[0x11];
                      *(float8 *)(paxVar85[0xb] + 8) = afStack_1a8[0x14];
                      *(float8 *)paxVar85[0xb] = afStack_1a8[0x13];
                      *(float8 *)(paxVar85[0xc] + 8) = afStack_1a8[0x16];
                      *(float8 *)paxVar85[0xc] = afStack_1a8[0x15];
                      *(xunknown4 *)paxVar85[0xe] = xVar93;
                      *(xunknown4 *)(paxVar85[0xe] + 4) = xVar156;
                      *(float8 *)(paxVar85[6] + 8) = afStack_1a8[10];
                      *(float8 *)paxVar85[6] = afStack_1a8[9];
                      *(float8 *)(paxVar85[7] + 8) = afStack_1a8[0xc];
                      *(float8 *)paxVar85[7] = afStack_1a8[0xb];
                      *(xunknown4 *)(paxVar85[0xe] + 8) = 0;
                      *(uint8 *)paxVar85[0xf] = uVar39;
                      *(float8 *)(paxVar85[8] + 8) = afStack_1a8[0xe];
                      *(float8 *)paxVar85[8] = afStack_1a8[0xd];
                      *(float8 *)(paxVar85[9] + 8) = afStack_1a8[0x10];
                      *(float8 *)paxVar85[9] = afStack_1a8[0xf];
                      *(xunknown4 *)(paxVar85[0xf] + 8) = 0;
                      *(float8 *)(paxVar85[2] + 8) = afStack_1a8[2];
                      *(float8 *)paxVar85[2] = afStack_1a8[1];
                      *(float8 *)(paxVar85[3] + 8) = afStack_1a8[4];
                      *(float8 *)paxVar85[3] = afStack_1a8[3];
                      *(float8 *)(paxVar85[4] + 8) = afStack_1a8[6];
                      *(float8 *)paxVar85[4] = afStack_1a8[5];
                      *(float8 *)(paxVar85[5] + 8) = afStack_1a8[8];
                      *(float8 *)paxVar85[5] = afStack_1a8[7];
                      axVar23._8_4_ = (float4)xStack_1b8;
                      axVar23._0_8_ = CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
                      axVar23._12_4_ = xStack_1b8._4_4_;
                      *(int8 *)(*paxVar85 + 8) = axVar23._8_8_;
                      *(uint8 *)*paxVar85 = CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
                      *(float8 *)(paxVar85[1] + 8) = afStack_1a8[0];
                      *(xunknown1 (**) [16])paxVar85[1] = paxStack_1b0;
                      if (paxVar71 == paxVar79) {
                        paxRam00000000001627c8 = paxVar85;
                      }
                      else {
                        paxVar91 = paxVar85;
                        do {
                          xVar119 = *(xunknown8 *)paxVar71[-0xe];
                          xVar120 = *(xunknown8 *)paxVar71[-0xd];
                          xVar123 = *(xunknown8 *)(paxVar71[-0xd] + 8);
                          paxRam00000000001627c8 = paxVar91 + -0x10;
                          xVar121 = *(xunknown8 *)(paxVar71[-0x10] + 8);
                          xVar44 = *(xunknown8 *)paxVar71[-0x10];
                          xVar130 = *(xunknown8 *)(paxVar71[-0xf] + 8);
                          xVar126 = *(xunknown8 *)paxVar71[-0xf];
                          *(xunknown8 *)(paxVar91[-0xe] + 8) = *(xunknown8 *)(paxVar71[-0xe] + 8);
                          *(xunknown8 *)paxVar91[-0xe] = xVar119;
                          *(xunknown8 *)(paxVar91[-0xd] + 8) = xVar123;
                          *(xunknown8 *)paxVar91[-0xd] = xVar120;
                          *(xunknown8 *)(paxVar91[-0x10] + 8) = xVar121;
                          *(xunknown8 *)paxVar91[-0x10] = xVar44;
                          *(xunknown8 *)(paxVar91[-0xf] + 8) = xVar130;
                          *(xunknown8 *)paxVar91[-0xf] = xVar126;
                          xVar119 = *(xunknown8 *)paxVar71[-10];
                          xVar120 = *(xunknown8 *)paxVar71[-9];
                          xVar123 = *(xunknown8 *)(paxVar71[-9] + 8);
                          xVar121 = *(xunknown8 *)(paxVar71[-0xc] + 8);
                          xVar44 = *(xunknown8 *)paxVar71[-0xc];
                          xVar130 = *(xunknown8 *)(paxVar71[-0xb] + 8);
                          xVar126 = *(xunknown8 *)paxVar71[-0xb];
                          *(xunknown8 *)(paxVar91[-10] + 8) = *(xunknown8 *)(paxVar71[-10] + 8);
                          *(xunknown8 *)paxVar91[-10] = xVar119;
                          *(xunknown8 *)(paxVar91[-9] + 8) = xVar123;
                          *(xunknown8 *)paxVar91[-9] = xVar120;
                          *(xunknown8 *)(paxVar91[-0xc] + 8) = xVar121;
                          *(xunknown8 *)paxVar91[-0xc] = xVar44;
                          *(xunknown8 *)(paxVar91[-0xb] + 8) = xVar130;
                          *(xunknown8 *)paxVar91[-0xb] = xVar126;
                          xVar119 = *(xunknown8 *)paxVar71[-6];
                          xVar120 = *(xunknown8 *)paxVar71[-5];
                          xVar123 = *(xunknown8 *)(paxVar71[-5] + 8);
                          xVar121 = *(xunknown8 *)(paxVar71[-8] + 8);
                          xVar44 = *(xunknown8 *)paxVar71[-8];
                          xVar130 = *(xunknown8 *)(paxVar71[-7] + 8);
                          xVar126 = *(xunknown8 *)paxVar71[-7];
                          *(xunknown8 *)(paxVar91[-6] + 8) = *(xunknown8 *)(paxVar71[-6] + 8);
                          *(xunknown8 *)paxVar91[-6] = xVar119;
                          *(xunknown8 *)(paxVar91[-5] + 8) = xVar123;
                          *(xunknown8 *)paxVar91[-5] = xVar120;
                          *(xunknown8 *)(paxVar91[-8] + 8) = xVar121;
                          *(xunknown8 *)paxVar91[-8] = xVar44;
                          *(xunknown8 *)(paxVar91[-7] + 8) = xVar130;
                          *(xunknown8 *)paxVar91[-7] = xVar126;
                          paxVar70 = paxVar71 + -2;
                          xVar120 = *(xunknown8 *)paxVar71[-2];
                          axVar111 = paxVar71[-1];
                          xVar123 = *(xunknown8 *)(paxVar71[-4] + 8);
                          xVar44 = *(xunknown8 *)paxVar71[-4];
                          xVar121 = *(xunknown8 *)(paxVar71[-3] + 8);
                          xVar119 = *(xunknown8 *)paxVar71[-3];
                          paxVar71 = paxVar71 + -0x10;
                          *(xunknown8 *)(paxVar91[-2] + 8) = *(xunknown8 *)(*paxVar70 + 8);
                          *(xunknown8 *)paxVar91[-2] = xVar120;
                          *(int8 *)(paxVar91[-1] + 8) = axVar111._8_8_;
                          *(int8 *)paxVar91[-1] = axVar111._0_8_;
                          *(xunknown8 *)(paxVar91[-4] + 8) = xVar123;
                          *(xunknown8 *)paxVar91[-4] = xVar44;
                          *(xunknown8 *)(paxVar91[-3] + 8) = xVar121;
                          *(xunknown8 *)paxVar91[-3] = xVar119;
                          paxVar91 = paxRam00000000001627c8;
                        } while (paxVar71 != paxVar79);
                      }
                      paxVar85 = paxVar85 + 0x10;
                      paxRam00000000001627d8 = paxVar40 + uVar67 * 0x10;
                      if (paxVar79 != (xunknown1 (*) [16])0x0) {
                        paxRam00000000001627d0 = paxVar85;
                        paxVar40 = (xunknown1 (*) [16])operator_delete_plt(paxVar79,uVar92);
                      }
                    }
                    paxRam00000000001627d0 = paxVar85;
                  }
                  else {
                    uVar50 = (int4)((uint8)((int8)paxVar75 - (int8)iRam0000000000162720) >> 4) *
                             -0x3b13b13b;
                    if (puRam0000000000162860 < puRam0000000000162868) {
                      puVar86 = puRam0000000000162860 + 1;
                      *puRam0000000000162860 = uVar50;
                    }
                    else {
                      iVar80 = (int8)puRam0000000000162860 - (int8)puRam0000000000162858;
                      uVar39 = (iVar80 >> 2) + 1;
                      if (uVar39 >> 0x3e != 0) goto code_r0x0008957c;
                      uVar61 = (int8)puRam0000000000162868 - (int8)puRam0000000000162858;
                      uVar53 = (int8)uVar61 >> 1;
                      if ((uint8)((int8)uVar61 >> 1) <= uVar39) {
                        uVar53 = uVar39;
                      }
                      if (0x7ffffffffffffffb < uVar61) {
                        uVar53 = 0x3fffffffffffffff;
                      }
                      pxVar45 = (xunknown1 *)xStack_1c0;
                      if (uVar53 >> 0x3e != 0) goto code_r0x00089534;
                      paxVar40 = (xunknown1 (*) [16])operator_new_plt(uVar53 * 4);
                      puRam0000000000162858 = (uint4 *)((int8)paxVar40 + iVar80);
                      puVar86 = puRam0000000000162858 + 1;
                      *puRam0000000000162858 = uVar50;
                      if ((int8)puVar81 - (int8)puVar84 != 0) {
                        uVar39 = ((int8)puVar81 - (int8)puVar84) - 4;
                        puVar89 = puVar81;
                        if ((0x1b < uVar39) && (0x1f < (uint8)((int8)puVar84 - (int8)paxVar40))) {
                          uVar39 = (uVar39 >> 2) + 1;
                          uVar92 = uVar39 & 0x7ffffffffffffff8;
                          puVar89 = puVar81 + -uVar92;
                          puRam0000000000162858 = puRam0000000000162858 + -uVar92;
                          pxVar51 = (xunknown8 *)((int8)paxVar40 + iVar80 + -0x10);
                          paxVar79 = (xunknown1 (*) [16])(puVar81 + -4);
                          uVar67 = uVar92;
                          do {
                            paxVar71 = paxVar79 + -1;
                            xVar44 = *(xunknown8 *)paxVar79[-1];
                            axVar111 = *paxVar79;
                            uVar67 = uVar67 - 8;
                            paxVar79 = paxVar79 + -2;
                            pxVar51[-1] = *(xunknown8 *)((int8)*paxVar71 + 8);
                            pxVar51[-2] = xVar44;
                            pxVar51[1] = axVar111._8_8_;
                            *pxVar51 = axVar111._0_8_;
                            pxVar51 = pxVar51 + -4;
                          } while (uVar67 != 0);
                          if (uVar39 == uVar92) goto code_r0x000861a0;
                        }
                        do {
                          puVar89 = puVar89 + -1;
                          puRam0000000000162858 = puRam0000000000162858 + -1;
                          *puRam0000000000162858 = *puVar89;
                        } while (puVar89 != puVar84);
                      }
code_r0x000861a0:
                      puRam0000000000162868 = (uint4 *)(*paxVar40 + uVar53 * 4);
                      if (puVar84 != (uint4 *)0x0) {
                        puRam0000000000162860 = puVar86;
                        paxVar40 = (xunknown1 (*) [16])operator_delete_plt(puVar84,uVar61);
                      }
                    }
                    iRam0000000000170e00 = iRam0000000000170e00 + 1;
                    puRam0000000000162860 = puVar86;
                  }
                }
                else {
                  uVar50 = (int4)((uint8)((int8)paxVar75 - (int8)iRam0000000000162720) >> 4) *
                           -0x3b13b13b;
                  if (puRam0000000000162860 < puRam0000000000162868) {
                    puVar86 = puRam0000000000162860 + 1;
                    *puRam0000000000162860 = uVar50;
                  }
                  else {
                    iVar80 = (int8)puRam0000000000162860 - (int8)puRam0000000000162858;
                    uVar39 = (iVar80 >> 2) + 1;
                    if (uVar39 >> 0x3e != 0) goto code_r0x0008957c;
                    uVar61 = (int8)puRam0000000000162868 - (int8)puRam0000000000162858;
                    uVar53 = (int8)uVar61 >> 1;
                    if ((uint8)((int8)uVar61 >> 1) <= uVar39) {
                      uVar53 = uVar39;
                    }
                    if (0x7ffffffffffffffb < uVar61) {
                      uVar53 = 0x3fffffffffffffff;
                    }
                    pxVar45 = (xunknown1 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
                    if (uVar53 >> 0x3e != 0) goto code_r0x00089534;
                    paxVar40 = (xunknown1 (*) [16])operator_new_plt(uVar53 * 4);
                    puRam0000000000162858 = (uint4 *)((int8)paxVar40 + iVar80);
                    puVar86 = puRam0000000000162858 + 1;
                    *puRam0000000000162858 = uVar50;
                    if ((int8)puVar81 - (int8)puVar84 != 0) {
                      uVar39 = ((int8)puVar81 - (int8)puVar84) - 4;
                      puVar89 = puVar81;
                      if ((0x1b < uVar39) && (0x1f < (uint8)((int8)puVar84 - (int8)paxVar40))) {
                        uVar39 = (uVar39 >> 2) + 1;
                        uVar92 = uVar39 & 0x7ffffffffffffff8;
                        puVar89 = puVar81 + -uVar92;
                        puRam0000000000162858 = puRam0000000000162858 + -uVar92;
                        pxVar51 = (xunknown8 *)((int8)paxVar40 + iVar80 + -0x10);
                        paxVar79 = (xunknown1 (*) [16])(puVar81 + -4);
                        uVar67 = uVar92;
                        do {
                          paxVar71 = paxVar79 + -1;
                          xVar44 = *(xunknown8 *)paxVar79[-1];
                          axVar111 = *paxVar79;
                          uVar67 = uVar67 - 8;
                          paxVar79 = paxVar79 + -2;
                          pxVar51[-1] = *(xunknown8 *)((int8)*paxVar71 + 8);
                          pxVar51[-2] = xVar44;
                          pxVar51[1] = axVar111._8_8_;
                          *pxVar51 = axVar111._0_8_;
                          pxVar51 = pxVar51 + -4;
                        } while (uVar67 != 0);
                        if (uVar39 == uVar92) goto code_r0x00085ea8;
                      }
                      do {
                        puVar89 = puVar89 + -1;
                        puRam0000000000162858 = puRam0000000000162858 + -1;
                        *puRam0000000000162858 = *puVar89;
                      } while (puVar89 != puVar84);
                    }
code_r0x00085ea8:
                    puRam0000000000162868 = (uint4 *)(*paxVar40 + uVar53 * 4);
                    if (puVar84 != (uint4 *)0x0) {
                      puRam0000000000162860 = puVar86;
                      paxVar40 = (xunknown1 (*) [16])operator_delete_plt(puVar84,uVar61);
                    }
                  }
                  iRam0000000000170df8 = iRam0000000000170df8 + 1;
                  puRam0000000000162860 = puVar86;
                }
              }
              else {
                xVar93 = *(xunknown4 *)(paxVar75[8] + 4);
                xVar14 = paxVar75[0xc][9];
                xVar160 = *(xunknown4 *)(paxVar75[7] + 0xc);
                xVar156 = *(xunknown4 *)paxVar75[8];
                if (puRam0000000000162790 < puRam0000000000162798) {
                  *puRam0000000000162790 = uVar39;
                  puVar77 = puRam0000000000162790 + 3;
                  *(xunknown4 *)(puRam0000000000162790 + 1) = xVar160;
                  *(xunknown4 *)((int8)puRam0000000000162790 + 0xc) = xVar156;
                  *(xunknown4 *)(puRam0000000000162790 + 2) = xVar93;
                  *(xunknown1 *)((int8)puRam0000000000162790 + 0x14) = xVar14;
                }
                else {
                  iVar80 = (int8)puRam0000000000162790 - (int8)puRam0000000000162788;
                  uVar53 = (iVar80 >> 3) * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar53) goto code_r0x00089564;
                  iVar83 = (int8)puRam0000000000162798 - (int8)puRam0000000000162788;
                  iVar76 = iVar83 >> 3;
                  uVar61 = iVar76 * 0x5555555555555556;
                  if (uVar61 <= uVar53) {
                    uVar61 = uVar53;
                  }
                  if (0x555555555555554 < (uint8)(iVar76 * -0x5555555555555555)) {
                    uVar61 = 0xaaaaaaaaaaaaaaa;
                  }
                  pxVar45 = (xunknown1 *)xStack_1c0;
                  if (0xaaaaaaaaaaaaaaa < uVar61) goto code_r0x00089534;
                  paxVar40 = (xunknown1 (*) [16])operator_new_plt(uVar61 * 0x18);
                  puVar77 = (uint8 *)((int8)paxVar40 + iVar80);
                  *puVar77 = uVar39;
                  *(xunknown4 *)(puVar77 + 1) = xVar160;
                  *(xunknown4 *)((int8)puVar77 + 0xc) = xVar156;
                  *(xunknown4 *)(puVar77 + 2) = xVar93;
                  *(xunknown1 *)((int8)puVar77 + 0x14) = xVar14;
                  if (puVar88 == puVar95) {
                    puRam0000000000162788 = puVar77;
                  }
                  else {
                    puVar54 = puVar77;
                    do {
                      puVar48 = puVar88 + -1;
                      axVar111 = *(xunknown1 (*) [16])(puVar88 + -3);
                      puVar88 = puVar88 + -3;
                      puRam0000000000162788 = puVar54 + -3;
                      puVar54[-1] = *puVar48;
                      puVar54[-2] = axVar111._8_8_;
                      puVar54[-3] = axVar111._0_8_;
                      puVar54 = puRam0000000000162788;
                    } while (puVar88 != puVar95);
                  }
                  puVar77 = puVar77 + 3;
                  puRam0000000000162798 = (uint8 *)((int8)paxVar40 + uVar61 * 0x18);
                  if (puVar95 != (uint8 *)0x0) {
                    puRam0000000000162790 = puVar77;
                    paxVar40 = (xunknown1 (*) [16])operator_delete_plt(puVar95,iVar83);
                  }
                }
                puRam0000000000162790 = puVar77;
                if (piVar64 == (int8 *)0x0) goto code_r0x00085afc;
code_r0x000857e4:
                uVar53 = (uint8)*(uint4 *)((int8)piVar64 + 0x18);
                uVar50 = uRam0000000000170ce4 - 1;
code_r0x000857f8:
                uVar49 = uRam0000000000170ce4;
                paxVar79 = paxRam00000000001627c8 + uVar53 * 0x10;
                iVar37 = 1;
                if (*(uint4 *)(paxVar79[0xd] + 8) == uVar50 ||
                    *(uint4 *)(paxVar79[0xd] + 8) == uRam0000000000170ce4) {
                  iVar37 = *(int4 *)(paxVar79[0xd] + 0xc) + 1;
                }
                *(int4 *)(paxVar79[0xd] + 0xc) = iVar37;
                if (iVar37 == 2) {
                  iRam0000000000170da8 = iRam0000000000170da8 + 1;
                }
                xVar44 = *(xunknown8 *)*paxVar75;
                *(xunknown8 *)(*paxVar79 + 8) = *(xunknown8 *)(*paxVar75 + 8);
                *(xunknown8 *)*paxVar79 = xVar44;
                xVar119 = *(xunknown8 *)paxVar75[3];
                xVar120 = *(xunknown8 *)paxVar75[4];
                xVar123 = *(xunknown8 *)(paxVar75[4] + 8);
                xVar121 = *(xunknown8 *)(paxVar75[1] + 8);
                xVar44 = *(xunknown8 *)paxVar75[1];
                xVar130 = *(xunknown8 *)(paxVar75[2] + 8);
                xVar126 = *(xunknown8 *)paxVar75[2];
                *(xunknown8 *)(paxVar79[3] + 8) = *(xunknown8 *)(paxVar75[3] + 8);
                *(xunknown8 *)paxVar79[3] = xVar119;
                *(xunknown8 *)(paxVar79[4] + 8) = xVar123;
                *(xunknown8 *)paxVar79[4] = xVar120;
                *(xunknown8 *)(paxVar79[1] + 8) = xVar121;
                *(xunknown8 *)paxVar79[1] = xVar44;
                *(xunknown8 *)(paxVar79[2] + 8) = xVar130;
                *(xunknown8 *)paxVar79[2] = xVar126;
                xVar119 = *(xunknown8 *)paxVar75[7];
                xVar120 = *(xunknown8 *)paxVar75[8];
                xVar123 = *(xunknown8 *)(paxVar75[8] + 8);
                xVar121 = *(xunknown8 *)(paxVar75[5] + 8);
                xVar44 = *(xunknown8 *)paxVar75[5];
                xVar130 = *(xunknown8 *)(paxVar75[6] + 8);
                xVar126 = *(xunknown8 *)paxVar75[6];
                *(xunknown8 *)(paxVar79[7] + 8) = *(xunknown8 *)(paxVar75[7] + 8);
                *(xunknown8 *)paxVar79[7] = xVar119;
                *(xunknown8 *)(paxVar79[8] + 8) = xVar123;
                *(xunknown8 *)paxVar79[8] = xVar120;
                *(xunknown8 *)(paxVar79[5] + 8) = xVar121;
                *(xunknown8 *)paxVar79[5] = xVar44;
                *(xunknown8 *)(paxVar79[6] + 8) = xVar130;
                *(xunknown8 *)paxVar79[6] = xVar126;
                axVar111 = paxVar75[0xb];
                xVar123 = *(xunknown8 *)(paxVar75[0xc] + 8);
                xVar120 = *(xunknown8 *)paxVar75[0xc];
                xVar119 = *(xunknown8 *)(paxVar75[9] + 8);
                xVar44 = *(xunknown8 *)paxVar75[9];
                xVar126 = *(xunknown8 *)(paxVar75[10] + 8);
                xVar121 = *(xunknown8 *)paxVar75[10];
                *(uint4 *)(paxVar79[0xd] + 8) = uVar49;
                uVar39 = uRam0000000000162810;
                *(int8 *)(paxVar79[0xb] + 8) = axVar111._8_8_;
                *(int8 *)paxVar79[0xb] = axVar111._0_8_;
                *(xunknown8 *)(paxVar79[0xc] + 8) = xVar123;
                *(xunknown8 *)paxVar79[0xc] = xVar120;
                *(xunknown8 *)(paxVar79[9] + 8) = xVar119;
                *(xunknown8 *)paxVar79[9] = xVar44;
                *(xunknown8 *)(paxVar79[10] + 8) = xVar126;
                *(xunknown8 *)paxVar79[10] = xVar121;
                iVar80 = iRam0000000000162808;
                if (uVar39 == 0) {
                  *(xunknown4 *)paxVar79[0xe] = 0;
                  xVar93 = 0;
                }
                else {
                  uVar53 = uVar39 - 1;
                  uVar50 = *(uint4 *)paxVar75[2];
                  uVar61 = (uint8)uVar50;
                  uVar49 = (uint4)uVar39;
                  if ((uVar39 & uVar53) == 0) {
                    uVar67 = (uint8)(uVar49 - 1 & uVar50);
                  }
                  else {
                    uVar67 = uVar61;
                    if (uVar39 <= uVar61) {
                      uVar62 = 0;
                      if (uVar49 != 0) {
                        uVar62 = uVar50 / uVar49;
                      }
                      uVar67 = (uint8)(uVar50 - uVar62 * uVar49);
                    }
                  }
                  piVar64 = *(int8 **)(iRam0000000000162808 + uVar67 * 8);
                  if (piVar64 != (int8 *)0x0) {
                    for (piVar64 = (int8 *)*piVar64; piVar64 != (int8 *)0x0;
                        piVar64 = (int8 *)*piVar64) {
                      uVar92 = piVar64[1];
                      if (uVar92 == uVar61) {
                        if (*(uint4 *)(piVar64 + 2) == uVar50) {
                          xVar93 = *(xunknown4 *)((int8)piVar64 + 0x14);
                          goto code_r0x000859b0;
                        }
                      }
                      else {
                        if ((uVar39 & uVar53) == 0) {
                          uVar92 = uVar92 & uVar53;
                        }
                        else if (uVar39 <= uVar92) {
                          uVar55 = 0;
                          if (uVar39 != 0) {
                            uVar55 = uVar92 / uVar39;
                          }
                          uVar92 = uVar92 - uVar55 * uVar39;
                        }
                        if (uVar92 != uVar67) break;
                      }
                    }
                  }
                  xVar93 = 0;
code_r0x000859b0:
                  *(xunknown4 *)paxVar79[0xe] = xVar93;
                  uVar50 = *(uint4 *)(paxVar75[1] + 8);
                  uVar61 = (uint8)uVar50;
                  if ((uVar39 & uVar53) == 0) {
                    uVar67 = (uint8)(uVar49 - 1 & uVar50);
                  }
                  else {
                    uVar67 = uVar61;
                    if (uVar39 <= uVar61) {
                      uVar62 = 0;
                      if (uVar49 != 0) {
                        uVar62 = uVar50 / uVar49;
                      }
                      uVar67 = (uint8)(uVar50 - uVar62 * uVar49);
                    }
                  }
                  piVar64 = *(int8 **)(iVar80 + uVar67 * 8);
                  if (piVar64 != (int8 *)0x0) {
                    for (piVar64 = (int8 *)*piVar64; piVar64 != (int8 *)0x0;
                        piVar64 = (int8 *)*piVar64) {
                      uVar92 = piVar64[1];
                      if (uVar92 == uVar61) {
                        if (*(uint4 *)(piVar64 + 2) == uVar50) {
                          xVar93 = *(xunknown4 *)((int8)piVar64 + 0x14);
                          goto code_r0x000854d0;
                        }
                      }
                      else {
                        if ((uVar39 & uVar53) == 0) {
                          uVar92 = uVar92 & uVar53;
                        }
                        else if (uVar39 <= uVar92) {
                          uVar55 = 0;
                          if (uVar39 != 0) {
                            uVar55 = uVar92 / uVar39;
                          }
                          uVar92 = uVar92 - uVar55 * uVar39;
                        }
                        if (uVar92 != uVar67) break;
                      }
                    }
                  }
                  xVar93 = 0;
                }
code_r0x000854d0:
                *(xunknown4 *)(paxVar79[0xe] + 4) = xVar93;
                *(xunknown4 *)(paxVar79[0xf] + 8) = 0;
              }
              paxVar75 = paxVar75 + 0xd;
              paxVar79 = iRam0000000000162728;
              puVar95 = puRam0000000000162770;
              puVar88 = puRam0000000000162778;
              iRam0000000000162728 = paxVar41;
            } while( true );
          }
          xStack_1c0 = (uint8 *)pxVar173;
          if (iRam0000000000162720 != iRam0000000000162728) {
            paxVar71 = paxRam0000000000162748;
            paxVar79 = iRam0000000000162720;
            do {
              paxVar75 = paxRam0000000000162740;
              paxVar85 = paxRam0000000000162738;
              fVar161 = *(float4 *)paxVar79[8] - fStack_318;
              fVar94 = *(float4 *)(paxVar79[7] + 0xc) - fStack_31c;
              fVar161 = fVar161 * fVar161 + fVar94 * fVar94;
              if (paxRam0000000000162740 < paxVar71) {
                *(xunknown1 (**) [16])*paxRam0000000000162740 = paxVar79;
                *(float4 *)(*paxRam0000000000162740 + 8) = fVar161;
                (*paxRam0000000000162740)[0xc] = 0;
                *(xunknown8 *)paxRam0000000000162740[1] = 0;
                *(xunknown2 *)(paxRam0000000000162740[1] + 8) = 0;
                *(xunknown4 *)(paxRam0000000000162740[1] + 0xc) = 0;
                paxVar91 = paxRam0000000000162740 + 2;
              }
              else {
                iVar80 = (int8)paxRam0000000000162740 - (int8)paxRam0000000000162738;
                uVar39 = (iVar80 >> 5) + 1;
                if (uVar39 >> 0x3b != 0) goto code_r0x0008954c;
                uVar61 = (int8)paxVar71 - (int8)paxRam0000000000162738;
                uVar53 = (int8)uVar61 >> 4;
                if ((uint8)((int8)uVar61 >> 4) <= uVar39) {
                  uVar53 = uVar39;
                }
                if (0x7fffffffffffffdf < uVar61) {
                  uVar53 = 0x7ffffffffffffff;
                }
                pxVar45 = (xunknown1 *)xStack_1c0;
                if (uVar53 >> 0x3b != 0) goto code_r0x00089534;
                paxVar40 = (xunknown1 (*) [16])operator_new_plt(uVar53 * 0x20);
                paxVar91 = (xunknown1 (*) [16])((int8)paxVar40 + iVar80);
                *(xunknown1 (**) [16])*paxVar91 = paxVar79;
                *(float4 *)(*paxVar91 + 8) = fVar161;
                (*paxVar91)[0xc] = 0;
                *(xunknown8 *)paxVar91[1] = 0;
                *(xunknown2 *)(paxVar91[1] + 8) = 0;
                *(xunknown4 *)(paxVar91[1] + 0xc) = 0;
                if (paxVar75 == paxVar85) {
                  paxRam0000000000162738 = paxVar91;
                }
                else {
                  paxVar71 = paxVar91;
                  do {
                    paxVar70 = paxVar75 + -2;
                    xVar44 = *(xunknown8 *)*paxVar70;
                    axVar111 = paxVar75[-1];
                    paxRam0000000000162738 = paxVar71 + -2;
                    *(xunknown8 *)(paxVar71[-2] + 8) = *(xunknown8 *)(paxVar75[-2] + 8);
                    *(xunknown8 *)paxVar71[-2] = xVar44;
                    *(int8 *)(paxVar71[-1] + 8) = axVar111._8_8_;
                    *(int8 *)paxVar71[-1] = axVar111._0_8_;
                    paxVar71 = paxRam0000000000162738;
                    paxVar75 = paxVar70;
                  } while (paxVar70 != paxVar85);
                }
                paxVar91 = paxVar91 + 2;
                paxRam0000000000162748 = paxVar40 + uVar53 * 2;
                paxVar71 = paxRam0000000000162748;
                if (paxVar85 != (xunknown1 (*) [16])0x0) {
                  paxRam0000000000162740 = paxVar91;
                  paxVar40 = (xunknown1 (*) [16])operator_delete_plt(paxVar85,uVar61);
                  paxVar71 = paxRam0000000000162748;
                }
              }
              paxVar79 = paxVar79 + 0xd;
              paxRam0000000000162740 = paxVar91;
            } while (paxVar79 != paxVar41);
          }
          goto code_r0x00086fdc;
        }
        xVar93 = gl__Compile_plt(0x8b31,0x2633b /* "#version 300 es\nlayout(location = 0) in vec3 Position;\nuniform highp..." */,0x2d0c9 /* "shadow" */,pcRam0000000000162c30);
        xVar156 = gl__Compile_plt(0x8b30,0x25bb2 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nvoid ..." */,0x2d0c9 /* "shadow" */,pcRam0000000000162c30);
        iRam0000000000170ccc = gl__Link_plt(xVar93,xVar156,0x2d0c9 /* "shadow" */,pcRam0000000000162c30);
        xVar93 = gl__Compile_plt(0x8b31,0x30edb /* "#version 300 es\nout vec2 vUV;\nvoid main(){ vec2 p = vec2(float((gl_V..." */,0x3f924 /* "shadow-debug" */,pcRam0000000000162c30);
        xVar156 = gl__Compile_plt(0x8b30,0x394e2 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nin vec2..." */,0x3f924 /* "shadow-debug" */,pcRam0000000000162c30);
        iRam0000000000170f48 = gl__Link_plt(xVar93,xVar156,0x3f924 /* "shadow-debug" */,pcRam0000000000162c30);
        pxVar51 = pxRam00000000000d3408;
        if ((iRam0000000000170f48 != 0) && (iRam0000000000170ccc != 0)) {
          xRam00000000000d8d64 = (*(code *)*pxRam00000000000d3408)(iRam0000000000170ccc,0x36dcb /* "uMVP" */);
          xRam00000000000d8d68 = (*(code *)*pxVar51)(iRam0000000000170f48,0x40be1 /* "uTex" */);
          xVar93 = gl__Compile_plt(0x8b31,0x30b3e /* "#version 300 es\nlayout(location = 0) in vec3 Position;\nlayout(locati..." */,0x295de /* "shadow-alpha" */,pcRam0000000000162c30);
          xVar156 = gl__Compile_plt(0x8b30,0x34e8f /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x295de /* "shadow-alpha" */,pcRam0000000000162c30);
          xVar44 = gl__Link_plt(xVar93,xVar156,0x295de /* "shadow-alpha" */,pcRam0000000000162c30);
          iRam0000000000170eb0 = (int4)xVar44;
          if (iRam0000000000170eb0 == 0) {
            (*pcRam0000000000162c30)(1,0x262fb /* "shadows: alpha-test caster program failed - foliage casts solid" */);
          }
          else {
            xRam00000000000d8d60 = (*(code *)*pxVar51)(xVar44,0x36dcb /* "uMVP" */);
            xRam00000000000d8d58 = (*(code *)*pxVar51)(iRam0000000000170eb0,0x23d90 /* "uUVS" */);
            xRam00000000000d8d5c = (*(code *)*pxVar51)(iRam0000000000170eb0,0x3f931 /* "uRef" */);
            (*(code *)*pxVar51)(iRam0000000000170eb0,0x40be1 /* "uTex" */);
          }
          (*(code *)*pxRam00000000000d32f8)(1,0x170f4c);
          (*(code *)*pxRam00000000000d3300)(0xde1,xRam0000000000170f4c);
          (*(code *)*pxRam00000000000d3318)
                    (0xde1,1,0x81a5,xRam00000000000d8d2c._4_4_,xRam00000000000d8d2c._4_4_);
          pxVar30 = pxRam00000000000d3338;
          (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2600);
          (*(code *)*pxVar30)(0xde1,0x2800,0x2600);
          (*(code *)*pxVar30)(0xde1,0x2802,0x812f);
          (*(code *)*pxVar30)(0xde1,0x2803,0x812f);
          pxVar51 = pxRam00000000000d3240;
          (*(code *)*pxRam00000000000d3240)(1,0x170ea8);
          pxVar4 = pxRam00000000000d3248;
          (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam0000000000170ea8);
          pxVar27 = pxRam00000000000d3258;
          (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8d00,0xde1,xRam0000000000170f4c,0);
          pxVar29 = pxRam00000000000d3268;
          xStack_1c0._0_4_ = 0.0;
          (*(code *)*pxRam00000000000d3268)(1,&xStack_1c0);
          pxVar28 = pxRam00000000000d3260;
          iVar37 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
          if (iVar37 == 0x8cd5) {
            (*(code *)*pxRam00000000000d32f8)(1,0x170f50);
            (*(code *)*pxRam00000000000d3300)(0xde1,xRam0000000000170f50);
            (*(code *)*pxRam00000000000d3318)
                      (0xde1,1,0x81a5,xRam00000000000d8d2c._4_4_,xRam00000000000d8d2c._4_4_);
            (*(code *)*pxVar30)(0xde1,0x2801,0x2600);
            (*(code *)*pxVar30)(0xde1,0x2800,0x2600);
            (*(code *)*pxVar30)(0xde1,0x2802,0x812f);
            (*(code *)*pxVar30)(0xde1,0x2803,0x812f);
            (*(code *)*pxVar51)(1,0x170eac);
            (*(code *)*pxVar4)(0x8ca9,xRam0000000000170eac);
            (*(code *)*pxVar27)(0x8ca9,0x8d00,0xde1,xRam0000000000170f50,0);
            xStack_1c0._0_4_ = 0.0;
            (*(code *)*pxVar29)(1,&xStack_1c0);
            iVar37 = (*(code *)*pxVar28)(0x8ca9);
            pxVar51 = pxRam00000000000d3500;
            if (iVar37 == 0x8cd5) {
              (*(code *)*pxRam00000000000d3500)(1,0x170ea4);
              (*(code *)*pxVar51)(1,0x170f54);
              (*(code *)*pxVar51)(1,0x170f58);
              uVar35 = gl__HasExtension_plt(0x23f58 /* "GL_EXT_disjoint_timer_query" */);
              uRam0000000000170e80 = uVar35 & 1;
              if ((uVar35 & 1) != 0) {
                (*(code *)*pxRam00000000000d35a8)(4,0x170e8c);
              }
              xVar93 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x32b03 /* "shadow-mask" */,pcRam0000000000162c30);
              xVar156 = gl__Compile_plt(0x8b30,0x3ab86 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x32b03 /* "shadow-mask" */,pcRam0000000000162c30);
              xVar44 = gl__Link_plt(xVar93,xVar156,0x32b03 /* "shadow-mask" */,pcRam0000000000162c30);
              pxVar51 = pxRam00000000000d3408;
              iRam0000000000170f5c = (int4)xVar44;
              if (iRam0000000000170f5c != 0) {
                xRam00000000000d8d6c = (*(code *)*pxRam00000000000d3408)(xVar44,0x2d517 /* "uDepth" */);
                xRam00000000000d8d70 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x30b39 /* "uMap" */);
                xRam00000000000d8d74 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x2a132 /* "uIVP" */);
                xRam00000000000d8d78 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x3721a);
                xRam00000000000d8d7c = (*(code *)*pxVar51)(iRam0000000000170f5c,0x3fc5d);
                xRam00000000000d8d80 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x23d95 /* "uSun" */);
                xRam00000000000d8d84 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x2b127 /* "uMap1" */);
                xRam00000000000d8d88 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x39ec9);
                xRam00000000000d8d8c = (*(code *)*pxVar51)(iRam0000000000170f5c,0x32030 /* "uOff" */);
                xRam00000000000d8d90 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x39ed4 /* "uFog" */);
                xRam00000000000d8d94 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x2a185);
                xRam00000000000d8d98 = (*(code *)*pxVar51)(iRam0000000000170f5c,0x2bdb7);
                pxVar51 = pxRam00000000000d3350;
                (*(code *)*pxRam00000000000d3350)(1,0x170f60);
                pxVar4 = pxRam00000000000d3360;
                (*(code *)*pxRam00000000000d3360)(xRam0000000000170f60,0x2801,0x2601);
                (*(code *)*pxVar4)(xRam0000000000170f60,0x2800,0x2601);
                (*(code *)*pxVar4)(xRam0000000000170f60,0x2802,0x812f);
                (*(code *)*pxVar4)(xRam0000000000170f60,0x2803,0x812f);
                (*(code *)*pxVar4)(xRam0000000000170f60,0x884c,0x884e);
                (*(code *)*pxVar4)(xRam0000000000170f60,0x884d,0x203);
                (*(code *)*pxVar51)(1,0x170f64);
                (*(code *)*pxVar4)(xRam0000000000170f64,0x2801,0x2600);
                (*(code *)*pxVar4)(xRam0000000000170f64,0x2800,0x2600);
                (*(code *)*pxVar4)(xRam0000000000170f64,0x2802,0x812f);
                (*(code *)*pxVar4)(xRam0000000000170f64,0x2803,0x812f);
                axVar100._0_8_ = (float8)(float4)xRam00000000000d8d34;
                axVar100._8_8_ = 0;
                xVar44 = 0x3721d;
                if (uRam0000000000162c58 == '\0') {
                  xVar44 = 0x22b3e /* "off (buffer hooks missing)" */;
                }
                (*pcRam0000000000162c30)
                          (axVar100,(float8)xRam00000000000d8d34._4_4_,0,0x2b12d /* "shadows: ready - 2 cascades %d^2 D16 (near %.0f m, far %.0f m), caster..." */,
                           xRam00000000000d8d2c._4_4_,xVar44);
                goto code_r0x00084080;
              }
              goto code_r0x00084b68;
            }
          }
          (*pcRam0000000000162c30)(1,0x394bc /* "shadows: %d^2 depth target incomplete" */,xRam00000000000d8d2c._4_4_);
        }
code_r0x00084b68:
        uRam0000000000162c5a = 1;
        (*pcRam0000000000162c30)(1,0x40753 /* "shadows: init failed - off" */);
      }
      else {
        xRam0000000000170cc8 = 0;
        iRam0000000000170f38 = iRam0000000000170f38 + 1;
        xRam0000000000162c59 = 0;
        uRam0000000000170ca0 = 6;
code_r0x0008446c:
        iVar37 = iRam0000000000170ec8 + 1;
        bVar34 = iRam0000000000170f40 <= iRam0000000000170ec8;
        iRam0000000000170ec8 = iVar37;
        xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
        xStack_1b8 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
        if (bVar34) {
          iRam0000000000170f40 = iVar37;
          uRam0000000000170f44 = uRam0000000000170ca0;
          xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
          xStack_1b8 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
        }
      }
    }
  }
  goto code_r0x00084b84;
code_r0x00086274:
  iRam0000000000162728 = paxVar79;
  paxVar40 = (xunknown1 (*) [16])FUN_00089fe8(puVar95,puVar88);
  fVar128 = fStack_414;
  fVar125 = fStack_424;
  xVar119 = xStack_430;
  fVar118 = fStack_434;
  xVar123 = xStack_440;
  fVar94 = fStack_444;
  xVar120 = xStack_450;
  puVar77 = puRam0000000000162790;
  xVar44 = xRam00000000000d3708;
  puVar95 = puRam0000000000162750;
  puVar88 = puRam0000000000162758;
  if (puRam0000000000162788 != puRam0000000000162790) {
    fVar148 = (float4)xStack_420;
    uVar39 = (uint8)xStack_420 >> 0x20;
    paxVar40 = (xunknown1 (*) [16])0x170000;
    puVar54 = puRam0000000000162788;
    do {
      if ((int8)puVar88 - (int8)puVar95 != 0) {
        uVar53 = ((int8)puVar88 - (int8)puVar95 >> 3) * -0x5555555555555555;
        uVar61 = *puVar54;
        puVar46 = puVar88;
        puVar48 = puVar95;
        while( true ) {
          uVar67 = uVar53 >> 1;
          puVar47 = puVar48 + uVar67 * 3;
          if (uVar61 <= *puVar47) break;
          puVar48 = puVar47 + 3;
          uVar67 = uVar53 + ~uVar67;
          puVar47 = puVar46;
joined_r0x0008635c:
          puVar46 = puVar47;
          uVar53 = uVar67;
          if (uVar53 == 0) goto code_r0x00086320;
        }
        if (uVar61 < *puVar47) goto joined_r0x0008635c;
        puVar57 = puVar47;
        if (uVar53 != 1) {
          do {
            uVar53 = uVar67 >> 1;
            puVar57 = puVar48 + uVar53 * 3 + 3;
            uVar67 = uVar67 + ~uVar53;
            if (uVar61 <= puVar48[uVar53 * 3]) {
              puVar57 = puVar48;
              uVar67 = uVar53;
            }
            puVar48 = puVar57;
          } while (uVar67 != 0);
        }
        iVar80 = (int8)puVar46 - (int8)(puVar47 + 3);
        if (iVar80 != 0) {
          uVar53 = (iVar80 >> 3) * -0x5555555555555555;
          puVar46 = puVar47 + 3;
          do {
            uVar92 = uVar53 >> 1;
            uVar67 = uVar53 + ~uVar92;
            uVar53 = uVar92;
            if (puVar46[uVar92 * 3] <= uVar61) {
              puVar46 = puVar46 + uVar92 * 3 + 3;
              uVar53 = uVar67;
            }
          } while (uVar53 != 0);
        }
        if (puVar57 != puVar46) {
          do {
            fVar155 = *(float4 *)(puVar57 + 1);
            fVar168 = *(float4 *)((int8)puVar57 + 0xc);
            fVar157 = fVar168 - *(float4 *)((int8)puVar54 + 0xc);
            fVar162 = *(float4 *)(puVar57 + 2);
            fVar157 = fVar157 * fVar157 +
                      (fVar155 - *(float4 *)(puVar54 + 1)) * (fVar155 - *(float4 *)(puVar54 + 1)) +
                      (fVar162 - *(float4 *)(puVar54 + 2)) * (fVar162 - *(float4 *)(puVar54 + 2));
            bVar32 = false;
            if ((0.0004 < fVar157) && (bVar32 = false, !NAN(fVar157))) {
              bVar32 = fVar157 < 16.0;
            }
            if (bVar32) {
              if ((int8)puRam0000000000162778 - (int8)puRam0000000000162770 == 0) {
                puVar48 = puRam0000000000162770;
                puVar46 = puRam0000000000162778;
                if (puRam0000000000162778 != puRam0000000000162770) {
code_r0x00086538:
                  do {
                    fVar157 = *(float4 *)((int8)puVar46 + 0xc) - fVar168;
                    fVar157 = fVar157 * fVar157 +
                              (*(float4 *)(puVar46 + 1) - fVar155) *
                              (*(float4 *)(puVar46 + 1) - fVar155) +
                              (*(float4 *)(puVar46 + 2) - fVar162) *
                              (*(float4 *)(puVar46 + 2) - fVar162);
                    bVar32 = false;
                    if ((-1.0 < fVar157) && (bVar32 = false, !NAN(fVar157))) {
                      bVar32 = fVar157 < 0.0004;
                    }
                    if (bVar32) goto code_r0x00086320;
                    puVar46 = puVar46 + 3;
                  } while (puVar46 != puVar48);
                }
              }
              else {
                uVar53 = ((int8)puRam0000000000162778 - (int8)puRam0000000000162770 >> 3) *
                         -0x5555555555555555;
                uVar61 = *puVar57;
                puVar47 = puRam0000000000162770;
                puVar57 = puRam0000000000162778;
                do {
                  uVar67 = uVar53 >> 1;
                  puVar48 = puVar47 + uVar67 * 3;
                  if (*puVar48 < uVar61) {
                    puVar47 = puVar48 + 3;
                    uVar67 = uVar53 + ~uVar67;
                    puVar48 = puVar57;
                  }
                  else if (*puVar48 <= uVar61) {
                    puVar46 = puVar48;
                    if (uVar53 != 1) {
                      do {
                        uVar53 = uVar67 >> 1;
                        puVar46 = puVar47 + uVar53 * 3 + 3;
                        uVar67 = uVar67 + ~uVar53;
                        if (uVar61 <= puVar47[uVar53 * 3]) {
                          puVar46 = puVar47;
                          uVar67 = uVar53;
                        }
                        puVar47 = puVar46;
                      } while (uVar67 != 0);
                    }
                    puVar48 = puVar48 + 3;
                    if ((int8)puVar57 - (int8)puVar48 == 0) {
                      puVar48 = puVar57;
                    }
                    else {
                      uVar53 = ((int8)puVar57 - (int8)puVar48 >> 3) * -0x5555555555555555;
                      do {
                        uVar92 = uVar53 >> 1;
                        uVar67 = uVar53 + ~uVar92;
                        uVar53 = uVar92;
                        if (puVar48[uVar92 * 3] <= uVar61) {
                          puVar48 = puVar48 + uVar92 * 3 + 3;
                          uVar53 = uVar67;
                        }
                      } while (uVar53 != 0);
                    }
                    if (puVar46 != puVar48) goto code_r0x00086538;
                    break;
                  }
                  puVar57 = puVar48;
                  uVar53 = uVar67;
                } while (uVar53 != 0);
              }
              fVar157 = fVar128 + fVar168 * fVar118 + fVar155 * fVar94 + fVar162 * fVar125;
              if ((fVar157 <= 1.0) ||
                 (fVar157 = fVar157 * 0.85,
                 fVar157 <=
                 ABS(fVar148 + (float4)xVar123 * fVar168 + (float4)xVar120 * fVar155 +
                               (float4)xVar119 * fVar162) ||
                 fVar157 <=
                 ABS((float4)uVar39 +
                     (float4)((uint8)xVar123 >> 0x20) * fVar168 +
                     (float4)((uint8)xVar120 >> 0x20) * fVar155 +
                     (float4)((uint8)xVar119 >> 0x20) * fVar162))) {
                iRam0000000000170e08 = iRam0000000000170e08 + 1;
              }
              else if (*(uint1 *)((int8)puVar54 + 0x14) - 1 < 3) {
                iRam0000000000170e10 = iRam0000000000170e10 + 1;
              }
              else {
                uVar53 = FUN_0008a018(*puVar54);
                if ((uVar53 & 1) == 0) {
                  iRam0000000000170e18 = iRam0000000000170e18 + 1;
                }
                iVar37 = uRam0000000000170ce4 + 900;
                xStack_1c0._0_4_ = SUB84(puVar54,0);
                xStack_1c0._4_4_ = (float4)((uint8)puVar54 >> 0x20);
                iVar80 = std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt_2
                                   (0x1627a0,puVar54,xVar44,&xStack_1c0,&uStack_210);
                puVar88 = puRam0000000000162758;
                puVar95 = puRam0000000000162750;
                *(int4 *)(iVar80 + 0x18) = iVar37;
              }
              break;
            }
            puVar57 = puVar57 + 3;
          } while (puVar57 != puVar46);
        }
      }
code_r0x00086320:
      puVar54 = puVar54 + 3;
    } while (puVar54 != puVar77);
  }
  puVar77 = puRam0000000000162760;
  puRam0000000000162760 = puRam0000000000162780;
  puRam0000000000162758 = puRam0000000000162778;
  puRam0000000000162750 = puRam0000000000162770;
  puRam0000000000162780 = puVar77;
  puRam0000000000162770 = puVar95;
  puRam0000000000162778 = puVar88;
  puRam0000000000162790 = puRam0000000000162788;
  if (((uRam0000000000170ce4 * -0x69d0369d >> 3 | uRam0000000000170ce4 * 0x60000000) < 0x6d3a07) &&
     (piVar64 = piRam00000000001627b0, piRam00000000001627b0 != (int8 *)0x0)) {
    do {
      while (*(uint4 *)(piVar64 + 3) <= uRam0000000000170ce4) {
        piVar64 = (int8 *)*piVar64;
        FUN_0008c250(&xStack_1c0,0x1627a0);
        iVar80 = CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0);
        xStack_1c0._0_4_ = 0.0;
        xStack_1c0._4_4_ = 0.0;
        paxVar40 = (xunknown1 (*) [16])0x0;
        if (iVar80 != 0) {
          paxVar40 = (xunknown1 (*) [16])operator_delete_plt(iVar80,0x20);
        }
        if (piVar64 == (int8 *)0x0) goto code_r0x00086730;
      }
      piVar64 = (int8 *)*piVar64;
    } while (piVar64 != (int8 *)0x0);
  }
code_r0x00086730:
  fVar118 = fStack_318;
  fVar94 = fStack_31c;
  uVar50 = uRam0000000000170ce4;
  uVar39 = uRam0000000000162810;
  iVar80 = iRam0000000000162808;
  paxVar79 = paxRam00000000001627c8;
  fVar161 = fVar161 + 80.0;
  if (((uRam0000000000170ce4 * -0x11111111 >> 2 | uRam0000000000170ce4 * -0x40000000) < 0x4444445)
     || ((xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0),
         (uRam0000000000170ce4 * -0x33333333 >> 1 | uRam0000000000170ce4 * -0x80000000) < 0x1999999a
         && (xStack_1c0 = (uint8 *)CONCAT44(xStack_1c0._4_4_,(float4)xStack_1c0),
            0x2af700 < (uint8)((int8)paxRam00000000001627d0 - (int8)paxRam00000000001627c8))))) {
    uVar53 = (int8)paxRam00000000001627d0 - (int8)paxRam00000000001627c8 >> 8;
    uVar49 = 300;
    if (uVar53 < 0x1f41) {
      uVar49 = 0x4b0;
    }
    if (paxRam00000000001627d0 == paxRam00000000001627c8) {
      iVar83 = 0;
      iVar76 = 0;
    }
    else {
      iVar76 = 0;
      iVar83 = 0;
      uVar61 = 0;
      uVar67 = uRam0000000000162810 + 0xffffffff;
      uVar92 = uRam0000000000162810 - 1;
      do {
        paxVar40 = paxVar79 + uVar61 * 0x10;
        iVar37 = *(int4 *)paxVar40[0xe];
        if (uVar39 == 0) {
          if (iVar37 == 0) {
            iVar37 = *(int4 *)(paxVar40[0xe] + 4);
            goto joined_r0x00086894;
          }
        }
        else {
          uVar62 = *(uint4 *)paxVar40[2];
          uVar55 = (uint8)uVar62;
          uVar87 = (uint4)uVar39;
          if ((uVar39 & uVar92) == 0) {
            uVar58 = uVar67 & uVar55;
          }
          else {
            uVar58 = uVar55;
            if (uVar39 <= uVar55) {
              uVar18 = 0;
              if (uVar87 != 0) {
                uVar18 = uVar62 / uVar87;
              }
              uVar58 = (uint8)(uVar62 - uVar18 * uVar87);
            }
          }
          piVar64 = *(int8 **)(iVar80 + uVar58 * 8);
          if (piVar64 != (int8 *)0x0) {
            for (piVar64 = (int8 *)*piVar64; piVar64 != (int8 *)0x0; piVar64 = (int8 *)*piVar64) {
              uVar65 = piVar64[1];
              if (uVar65 == uVar55) {
                if (*(uint4 *)(piVar64 + 2) == uVar62) {
                  if (iVar37 != *(int4 *)((int8)piVar64 + 0x14)) goto code_r0x00086848;
                  goto code_r0x000868bc;
                }
              }
              else {
                if ((uVar39 & uVar92) == 0) {
                  uVar65 = uVar65 & uVar92;
                }
                else if (uVar39 <= uVar65) {
                  uVar19 = 0;
                  if (uVar39 != 0) {
                    uVar19 = uVar65 / uVar39;
                  }
                  uVar65 = uVar65 - uVar19 * uVar39;
                }
                if (uVar65 != uVar58) break;
              }
            }
          }
          if (iVar37 == 0) {
code_r0x000868bc:
            uVar62 = *(uint4 *)(paxVar40[1] + 8);
            uVar55 = (uint8)uVar62;
            if ((uVar39 & uVar92) == 0) {
              uVar58 = uVar67 & uVar55;
            }
            else {
              uVar58 = uVar55;
              if (uVar39 <= uVar55) {
                uVar18 = 0;
                if (uVar87 != 0) {
                  uVar18 = uVar62 / uVar87;
                }
                uVar58 = (uint8)(uVar62 - uVar18 * uVar87);
              }
            }
            piVar64 = *(int8 **)(iVar80 + uVar58 * 8);
            iVar37 = *(int4 *)(paxVar40[0xe] + 4);
            if (piVar64 != (int8 *)0x0) {
              for (piVar64 = (int8 *)*piVar64; piVar64 != (int8 *)0x0; piVar64 = (int8 *)*piVar64) {
                uVar65 = piVar64[1];
                if (uVar65 == uVar55) {
                  if (*(uint4 *)(piVar64 + 2) == uVar62) {
                    if (iVar37 != *(int4 *)((int8)piVar64 + 0x14)) goto code_r0x00086848;
                    goto code_r0x00086958;
                  }
                }
                else {
                  if ((uVar39 & uVar92) == 0) {
                    uVar65 = uVar65 & uVar92;
                  }
                  else if (uVar39 <= uVar65) {
                    uVar19 = 0;
                    if (uVar39 != 0) {
                      uVar19 = uVar65 / uVar39;
                    }
                    uVar65 = uVar65 - uVar19 * uVar39;
                  }
                  if (uVar65 != uVar58) break;
                }
              }
            }
joined_r0x00086894:
            if (iVar37 == 0) {
code_r0x00086958:
              uVar62 = uVar50 - *(uint4 *)(paxVar40[0xd] + 8);
              fVar125 = *(float4 *)paxVar40[8] - fVar118;
              fVar128 = *(float4 *)(paxVar40[7] + 0xc) - fVar94;
              fVar125 = fVar125 * fVar125 + fVar128 * fVar128;
              if (uVar49 < uVar62) {
                if (fVar125 <= 8100.0) {
                  bVar32 = (uVar53 >= 0x1f41 && 0x4af < uVar62) &&
                           (uVar53 < 0x1f41 || uVar62 != 0x4b0);
                }
                else {
                  bVar32 = true;
                }
              }
              else {
                bVar32 = false;
              }
              if (uVar50 != *(uint4 *)(paxVar40[0xd] + 8)) {
                bVar33 = bVar32;
                if (uVar62 <= uVar49) {
                  bVar33 = true;
                }
                if ((!bVar33) && (1 < *(uint4 *)(paxVar40[0xd] + 0xc))) {
                  iVar83 = iVar83 + 1;
                }
                if ((bVar32) ||
                   ((((1 < uVar62 && (*(uint4 *)(paxVar40[0xd] + 0xc) < 2)) ||
                     (uVar55 = FUN_00089e50(paxVar40,*(xunknown8 *)paxVar40[0xf]), (uVar55 & 1) != 0
                     )) || ((fVar161 + 60.0) * (fVar161 + 60.0) < fVar125)))) goto code_r0x00086848;
              }
              xVar119 = *(xunknown8 *)paxVar40[2];
              xVar120 = *(xunknown8 *)paxVar40[3];
              xVar123 = *(xunknown8 *)(paxVar40[3] + 8);
              paxVar41 = paxVar79 + iVar76 * 0x10;
              xVar121 = *(xunknown8 *)(*paxVar40 + 8);
              xVar44 = *(xunknown8 *)*paxVar40;
              xVar130 = *(xunknown8 *)(paxVar40[1] + 8);
              xVar126 = *(xunknown8 *)paxVar40[1];
              iVar76 = iVar76 + 1;
              *(xunknown8 *)(paxVar41[2] + 8) = *(xunknown8 *)(paxVar40[2] + 8);
              *(xunknown8 *)paxVar41[2] = xVar119;
              *(xunknown8 *)(paxVar41[3] + 8) = xVar123;
              *(xunknown8 *)paxVar41[3] = xVar120;
              *(xunknown8 *)(*paxVar41 + 8) = xVar121;
              *(xunknown8 *)*paxVar41 = xVar44;
              *(xunknown8 *)(paxVar41[1] + 8) = xVar130;
              *(xunknown8 *)paxVar41[1] = xVar126;
              xVar119 = *(xunknown8 *)paxVar40[6];
              xVar120 = *(xunknown8 *)paxVar40[7];
              xVar123 = *(xunknown8 *)(paxVar40[7] + 8);
              xVar121 = *(xunknown8 *)(paxVar40[4] + 8);
              xVar44 = *(xunknown8 *)paxVar40[4];
              xVar130 = *(xunknown8 *)(paxVar40[5] + 8);
              xVar126 = *(xunknown8 *)paxVar40[5];
              *(xunknown8 *)(paxVar41[6] + 8) = *(xunknown8 *)(paxVar40[6] + 8);
              *(xunknown8 *)paxVar41[6] = xVar119;
              *(xunknown8 *)(paxVar41[7] + 8) = xVar123;
              *(xunknown8 *)paxVar41[7] = xVar120;
              *(xunknown8 *)(paxVar41[4] + 8) = xVar121;
              *(xunknown8 *)paxVar41[4] = xVar44;
              *(xunknown8 *)(paxVar41[5] + 8) = xVar130;
              *(xunknown8 *)paxVar41[5] = xVar126;
              xVar119 = *(xunknown8 *)paxVar40[10];
              xVar120 = *(xunknown8 *)paxVar40[0xb];
              xVar123 = *(xunknown8 *)(paxVar40[0xb] + 8);
              xVar121 = *(xunknown8 *)(paxVar40[8] + 8);
              xVar44 = *(xunknown8 *)paxVar40[8];
              xVar130 = *(xunknown8 *)(paxVar40[9] + 8);
              xVar126 = *(xunknown8 *)paxVar40[9];
              *(xunknown8 *)(paxVar41[10] + 8) = *(xunknown8 *)(paxVar40[10] + 8);
              *(xunknown8 *)paxVar41[10] = xVar119;
              *(xunknown8 *)(paxVar41[0xb] + 8) = xVar123;
              *(xunknown8 *)paxVar41[0xb] = xVar120;
              *(xunknown8 *)(paxVar41[8] + 8) = xVar121;
              *(xunknown8 *)paxVar41[8] = xVar44;
              *(xunknown8 *)(paxVar41[9] + 8) = xVar130;
              *(xunknown8 *)paxVar41[9] = xVar126;
              xVar120 = *(xunknown8 *)paxVar40[0xe];
              axVar111 = paxVar40[0xf];
              xVar123 = *(xunknown8 *)(paxVar40[0xc] + 8);
              xVar44 = *(xunknown8 *)paxVar40[0xc];
              xVar121 = *(xunknown8 *)(paxVar40[0xd] + 8);
              xVar119 = *(xunknown8 *)paxVar40[0xd];
              *(xunknown8 *)(paxVar41[0xe] + 8) = *(xunknown8 *)(paxVar40[0xe] + 8);
              *(xunknown8 *)paxVar41[0xe] = xVar120;
              *(int8 *)(paxVar41[0xf] + 8) = axVar111._8_8_;
              *(int8 *)paxVar41[0xf] = axVar111._0_8_;
              *(xunknown8 *)(paxVar41[0xc] + 8) = xVar123;
              *(xunknown8 *)paxVar41[0xc] = xVar44;
              *(xunknown8 *)(paxVar41[0xd] + 8) = xVar121;
              *(xunknown8 *)paxVar41[0xd] = xVar119;
            }
          }
        }
code_r0x00086848:
        uVar61 = uVar61 + 1;
      } while (uVar61 != uVar53);
    }
    FUN_0008a0c8(iVar76);
    iRam0000000000170e20 = iVar83;
    paxVar40 = (xunknown1 (*) [16])FUN_0008a248(0x1627e0);
    xVar44 = xRam00000000000d3708;
    if (iVar76 != 0) {
      iVar80 = 0;
      iVar83 = 0xd0;
      do {
        xStack_1c0 = (uint8 *)(*paxRam00000000001627c8 + iVar83);
        paxVar40 = (xunknown1 (*) [16])
                   std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt_2
                             (0x1627e0,xStack_1c0,xVar44,&xStack_1c0,&uStack_210);
        *(int4 *)(paxVar40[1] + 8) = (int4)iVar80;
        iVar80 = iVar80 + 1;
        iVar83 = iVar83 + 0x100;
      } while (iVar76 != iVar80);
    }
  }
  fVar94 = fStack_444;
  paxVar79 = paxRam00000000001627d0;
  if (paxRam00000000001627c8 != paxRam00000000001627d0) {
    paxVar75 = paxRam00000000001627c8;
    do {
      paxVar71 = paxRam0000000000162740;
      paxVar41 = paxRam0000000000162738;
      if (*(uint4 *)(paxVar75[0xd] + 8) == uRam0000000000170ce4) {
        fVar118 = *(float4 *)paxVar75[8] - fStack_318;
        fVar125 = *(float4 *)(paxVar75[7] + 0xc) - fStack_31c;
        fVar118 = fVar118 * fVar118 + fVar125 * fVar125;
        if (paxRam0000000000162740 < paxRam0000000000162748) {
          *(xunknown1 (**) [16])*paxRam0000000000162740 = paxVar75;
          paxVar85 = paxRam0000000000162740 + 2;
          *(float4 *)(*paxRam0000000000162740 + 8) = fVar118;
          (*paxRam0000000000162740)[0xc] = 0;
          *(xunknown1 (**) [16])paxRam0000000000162740[1] = paxVar75;
          *(xunknown2 *)(paxRam0000000000162740[1] + 8) = 0;
          *(xunknown4 *)(paxRam0000000000162740[1] + 0xc) = 0;
        }
        else {
          iVar80 = (int8)paxRam0000000000162740 - (int8)paxRam0000000000162738;
          uVar39 = (iVar80 >> 5) + 1;
          if (uVar39 >> 0x3b != 0) goto code_r0x0008954c;
          uVar61 = (int8)paxRam0000000000162748 - (int8)paxRam0000000000162738;
          uVar53 = (int8)uVar61 >> 4;
          if ((uint8)((int8)uVar61 >> 4) <= uVar39) {
            uVar53 = uVar39;
          }
          if (0x7fffffffffffffdf < uVar61) {
            uVar53 = 0x7ffffffffffffff;
          }
          pxVar45 = (xunknown1 *)xStack_1c0;
          if (uVar53 >> 0x3b != 0) goto code_r0x00089534;
          paxVar40 = (xunknown1 (*) [16])operator_new_plt(uVar53 * 0x20);
          paxVar85 = (xunknown1 (*) [16])((int8)paxVar40 + iVar80);
          *(xunknown1 (**) [16])*paxVar85 = paxVar75;
          *(float4 *)(*paxVar85 + 8) = fVar118;
          (*paxVar85)[0xc] = 0;
          *(xunknown1 (**) [16])paxVar85[1] = paxVar75;
          *(xunknown2 *)(paxVar85[1] + 8) = 0;
          *(xunknown4 *)(paxVar85[1] + 0xc) = 0;
          if (paxVar71 == paxVar41) {
            paxRam0000000000162738 = paxVar85;
          }
          else {
            paxVar91 = paxVar85;
            do {
              paxVar70 = paxVar71 + -2;
              xVar44 = *(xunknown8 *)*paxVar70;
              axVar111 = paxVar71[-1];
              paxRam0000000000162738 = paxVar91 + -2;
              *(xunknown8 *)(paxVar91[-2] + 8) = *(xunknown8 *)(paxVar71[-2] + 8);
              *(xunknown8 *)paxVar91[-2] = xVar44;
              *(int8 *)(paxVar91[-1] + 8) = axVar111._8_8_;
              *(int8 *)paxVar91[-1] = axVar111._0_8_;
              paxVar91 = paxRam0000000000162738;
              paxVar71 = paxVar70;
            } while (paxVar70 != paxVar41);
          }
          paxVar85 = paxVar85 + 2;
          paxRam0000000000162748 = paxVar40 + uVar53 * 2;
          if (paxVar41 != (xunknown1 (*) [16])0x0) {
            paxRam0000000000162740 = paxVar85;
            paxVar40 = (xunknown1 (*) [16])operator_delete_plt(paxVar41,uVar61);
          }
        }
        paxRam0000000000162740 = paxVar85;
      }
      else if (1 < *(uint4 *)(paxVar75[0xd] + 0xc)) {
        paxVar40 = (xunknown1 (*) [16])FUN_00089e50(paxVar75,*(xunknown8 *)paxVar75[0xf]);
        if (((uint8)paxVar40 & 1) == 0) {
          fVar148 = *(float4 *)(paxVar75[7] + 0xc);
          fVar128 = *(float4 *)paxVar75[8];
          fVar125 = *(float4 *)(paxVar75[8] + 4);
          fVar118 = fStack_414 + fVar128 * fStack_434 + fVar148 * fVar94 + fVar125 * fStack_424;
          if ((fVar118 <= 2.0) ||
             (fVar118 = fVar118 * 0.9,
             fVar118 <=
             ABS((float4)xStack_420 +
                 (float4)xStack_440 * fVar128 + (float4)xStack_450 * fVar148 +
                 (float4)xStack_430 * fVar125) ||
             fVar118 <=
             ABS((float4)((uint8)xStack_420 >> 0x20) +
                 (float4)((uint8)xStack_440 >> 0x20) * fVar128 +
                 (float4)((uint8)xStack_450 >> 0x20) * fVar148 +
                 (float4)((uint8)xStack_430 >> 0x20) * fVar125))) {
            *(xunknown4 *)(paxVar75[0xf] + 8) = 0;
          }
          else {
            if (1 < (uint1)paxVar75[0xc][9] - 1) {
              fVar118 = (fVar128 - fStack_318) * (fVar128 - fStack_318) +
                        (fVar148 - fStack_31c) * (fVar148 - fStack_31c);
              if ((uint1)paxVar75[0xc][9] == 3) {
                if (fVar118 <= 900.0) {
                  uVar50 = *(int4 *)(paxVar75[0xf] + 8) + 1;
                  bVar32 = 7 < uVar50;
                  goto code_r0x00086e54;
                }
              }
              else if ((fVar118 <= 6400.0) && (*(int4 *)(*paxVar75 + 8) < 6000)) {
                uVar50 = *(int4 *)(paxVar75[0xf] + 8) + 1;
                bVar32 = 3 < uVar50;
code_r0x00086e54:
                *(uint4 *)(paxVar75[0xf] + 8) = uVar50;
                if (bVar32) {
                  *(xunknown8 *)(paxVar75[0xd] + 8) = 0;
                  *(xunknown4 *)(paxVar75[0xf] + 8) = 0;
                  iRam0000000000170e30 = iRam0000000000170e30 + 1;
                  goto code_r0x00086b9c;
                }
                goto code_r0x00086d28;
              }
            }
            iRam0000000000170e28 = iRam0000000000170e28 + 1;
          }
code_r0x00086d28:
          iVar37 = *(int4 *)paxVar75[0xe];
          paxVar40 = (xunknown1 (*) [16])FUN_00089da8(*(xunknown4 *)paxVar75[2]);
          if (iVar37 == (int4)paxVar40) {
            iVar37 = *(int4 *)(paxVar75[0xe] + 4);
            paxVar40 = (xunknown1 (*) [16])FUN_00089da8(*(xunknown4 *)(paxVar75[1] + 8));
            if (iVar37 == (int4)paxVar40) {
              fVar118 = (fVar128 - fStack_318) * (fVar128 - fStack_318) +
                        (fVar148 - fStack_31c) * (fVar148 - fStack_31c);
              if (fVar118 <= fVar161 * fVar161) {
                xStack_1c0._0_4_ = SUB84(paxVar75,0);
                xStack_1c0._4_4_ = (float4)((uint8)paxVar75 >> 0x20);
                xStack_1b8._4_4_ = (float4)CONCAT31(xStack_1b8._5_3_,1);
                afStack_1a8[0] = (float8)(((uint8)afStack_1a8[0] >> 0x10 & 0xffff) << 0x10);
                xStack_1b8._0_4_ = fVar118;
                paxStack_1b0 = paxVar75;
                paxVar40 = (xunknown1 (*) [16])FUN_0008a2a8(&xStack_1c0);
              }
              goto code_r0x00086b9c;
            }
          }
          iRam0000000000170e38 = iRam0000000000170e38 + 1;
        }
      }
code_r0x00086b9c:
      paxVar75 = paxVar75 + 0x10;
    } while (paxVar75 != paxVar79);
  }
  puVar84 = puRam0000000000162860;
  if (puRam0000000000162858 == puRam0000000000162860) {
  }
  else {
    paxVar79 = paxRam0000000000162748;
    puVar81 = puRam0000000000162858;
    do {
      paxVar71 = paxRam0000000000162740;
      paxVar41 = paxRam0000000000162738;
      paxVar85 = iRam0000000000162720 + (uint8)*puVar81 * 0xd;
      fVar161 = *(float4 *)paxVar85[8] - fStack_318;
      fVar94 = *(float4 *)(paxVar85[7] + 0xc) - fStack_31c;
      fVar161 = fVar161 * fVar161 + fVar94 * fVar94;
      if (paxRam0000000000162740 < paxVar79) {
        *(xunknown1 (**) [16])*paxRam0000000000162740 = paxVar85;
        *(float4 *)(*paxRam0000000000162740 + 8) = fVar161;
        (*paxRam0000000000162740)[0xc] = 0;
        *(xunknown8 *)paxRam0000000000162740[1] = 0;
        *(xunknown2 *)(paxRam0000000000162740[1] + 8) = 0;
        *(xunknown4 *)(paxRam0000000000162740[1] + 0xc) = 0;
        paxVar75 = paxRam0000000000162740 + 2;
      }
      else {
        iVar80 = (int8)paxRam0000000000162740 - (int8)paxRam0000000000162738;
        uVar39 = (iVar80 >> 5) + 1;
        paxVar75 = paxRam0000000000162740;
        if (uVar39 >> 0x3b != 0) goto code_r0x0008954c;
        uVar61 = (int8)paxVar79 - (int8)paxRam0000000000162738;
        uVar53 = (int8)uVar61 >> 4;
        if ((uint8)((int8)uVar61 >> 4) <= uVar39) {
          uVar53 = uVar39;
        }
        if (0x7fffffffffffffdf < uVar61) {
          uVar53 = 0x7ffffffffffffff;
        }
        pxVar45 = (xunknown1 *)xStack_1c0;
        if (uVar53 >> 0x3b != 0) goto code_r0x00089534;
        paxVar40 = (xunknown1 (*) [16])operator_new_plt(uVar53 * 0x20);
        paxVar75 = (xunknown1 (*) [16])((int8)paxVar40 + iVar80);
        *(xunknown1 (**) [16])*paxVar75 = paxVar85;
        *(float4 *)(*paxVar75 + 8) = fVar161;
        (*paxVar75)[0xc] = 0;
        *(xunknown8 *)paxVar75[1] = 0;
        *(xunknown2 *)(paxVar75[1] + 8) = 0;
        *(xunknown4 *)(paxVar75[1] + 0xc) = 0;
        if (paxVar71 == paxVar41) {
          paxRam0000000000162738 = paxVar75;
        }
        else {
          paxVar79 = paxVar75;
          do {
            paxVar85 = paxVar71 + -2;
            xVar44 = *(xunknown8 *)*paxVar85;
            axVar111 = paxVar71[-1];
            paxRam0000000000162738 = paxVar79 + -2;
            *(xunknown8 *)(paxVar79[-2] + 8) = *(xunknown8 *)(paxVar71[-2] + 8);
            *(xunknown8 *)paxVar79[-2] = xVar44;
            *(int8 *)(paxVar79[-1] + 8) = axVar111._8_8_;
            *(int8 *)paxVar79[-1] = axVar111._0_8_;
            paxVar79 = paxRam0000000000162738;
            paxVar71 = paxVar85;
          } while (paxVar85 != paxVar41);
        }
        paxVar75 = paxVar75 + 2;
        paxRam0000000000162748 = paxVar40 + uVar53 * 2;
        paxVar79 = paxRam0000000000162748;
        if (paxVar41 != (xunknown1 (*) [16])0x0) {
          paxRam0000000000162740 = paxVar75;
          paxVar40 = (xunknown1 (*) [16])operator_delete_plt(paxVar41,uVar61);
          paxVar79 = paxRam0000000000162748;
        }
      }
      puVar81 = puVar81 + 1;
      paxRam0000000000162740 = paxVar75;
    } while (puVar81 != puVar84);
  }
code_r0x00086fdc:
  fVar125 = fRam0000000000170e44;
  fVar118 = fRam0000000000170e40;
  fVar94 = fRam0000000000170cd4;
  fVar161 = fRam0000000000170cd0;
  puVar84 = puRam00000000000d3610;
  if (paxRam0000000000162740 == paxRam0000000000162738) {
    paxVar40 = (xunknown1 (*) [16])0x0;
    iVar80 = 0;
code_r0x0008734c:
    puVar84 = puRam00000000000d3610;
  }
  else {
    fVar128 = fRam0000000000170cd0 + 120.0;
    fVar148 = fRam0000000000170cd4 + 120.0;
    iVar83 = 0;
    uVar53 = 0;
    paxVar40 = (xunknown1 (*) [16])0x0;
    iVar80 = 0;
    uVar39 = 0;
    iVar76 = iRam0000000000170e58;
    iVar66 = iRam0000000000170e48;
    iVar68 = iRam0000000000170e50;
    paxVar75 = paxRam0000000000162740;
    paxVar79 = paxRam0000000000162738;
    do {
      piVar64 = (int8 *)(*paxVar79 + iVar83);
      iVar74 = *piVar64;
      fVar157 = *(float4 *)(iVar74 + 0x7c);
      fVar162 = *(float4 *)(iVar74 + 0x80);
      fVar155 = (fVar162 - fVar125) * (fVar162 - fVar125) +
                (fVar157 - fVar118) * (fVar157 - fVar118);
      iVar167 = piVar64[2];
      xStack_1c0 = (uint8 *)piVar64[1];
      xStack_1b8._0_4_ = (float4)iVar167;
      xStack_1b8._4_4_ = (float4)((uint8)iVar167 >> 0x20);
      if (fVar128 * fVar128 < fVar155) {
code_r0x0008713c:
        uVar61 = 0;
      }
      else {
        fVar168 = 12.0;
        if (3999 < *(int4 *)(iVar74 + 8)) {
          fVar168 = 90.0;
        }
        fVar168 = fVar168 / fVar161 + 1.0;
        if (fVar168 < ABS(fVar162 * fStack_34c + fVar157 * fStack_35c +
                          *(float4 *)(iVar74 + 0x84) * fStack_33c + fStack_32c))
        goto code_r0x0008713c;
        uVar61 = (uint8)(ABS(fStack_328 +
                             fVar162 * fStack_348 + fVar157 * fStack_358 +
                             *(float4 *)(iVar74 + 0x84) * fStack_338) <= fVar168);
      }
      xVar17 = *(xunknown2 *)((int8)piVar64 + 0x1a);
      bVar32 = false;
      if (fVar155 <= fVar148 * fVar148) {
        bVar32 = bVar34;
      }
      if (bVar32) {
        fVar168 = 12.0;
        if (3999 < *(int4 *)(iVar74 + 8)) {
          fVar168 = 90.0;
        }
        fVar158 = ABS(fStack_368 +
                      fVar162 * fStack_388 + fVar157 * fStack_398 +
                      *(float4 *)(iVar74 + 0x84) * fStack_378);
        fVar168 = fVar168 / fVar94 + 1.0;
        bVar32 = false;
        bVar33 = true;
        if (ABS(fVar162 * fStack_38c + fVar157 * fStack_39c +
                *(float4 *)(iVar74 + 0x84) * fStack_37c + fStack_36c) <= fVar168) {
          bVar32 = false;
          bVar33 = true;
          if (!NAN(fVar158) && !NAN(fVar168)) {
            bVar32 = fVar158 == fVar168;
            bVar33 = fVar168 <= fVar158;
          }
        }
        if (bVar33 && !bVar32) {
          iVar66 = iVar66 + 1;
          iRam0000000000170e48 = iVar66;
          goto code_r0x000871d0;
        }
        if ((fVar155 <= 8100.0) || (299 < *(int4 *)(iVar74 + 8))) {
          iVar43 = 1;
          goto code_r0x000871d8;
        }
        iVar68 = iVar68 + 1;
        iRam0000000000170e50 = iVar68;
        if (uVar61 != 0) goto code_r0x000871d4;
code_r0x000870b8:
        iVar76 = iVar76 + 1;
        iRam0000000000170e58 = iVar76;
      }
      else {
code_r0x000871d0:
        if ((int4)uVar61 == 0) goto code_r0x000870b8;
code_r0x000871d4:
        iVar43 = 0;
code_r0x000871d8:
        paxVar79 = paxVar79 + uVar53 * 2;
        paxVar40 = (xunknown1 (*) [16])(*paxVar40 + uVar61);
        uVar53 = uVar53 + 1;
        iVar80 = iVar80 + iVar43;
        *(int8 *)*paxVar79 = iVar74;
        paxVar79[1][8] = (char)uVar61;
        paxVar79[1][9] = (char)iVar43;
        *(xunknown2 *)(paxVar79[1] + 10) = xVar17;
        *(int8 *)paxVar79[1] = iVar167;
        *(uint8 **)(*paxVar79 + 8) = xStack_1c0;
        *(float4 *)(paxVar79[1] + 0xc) = fVar155;
        paxVar75 = paxRam0000000000162740;
        paxVar79 = paxRam0000000000162738;
      }
      uVar39 = uVar39 + 1;
      iVar83 = iVar83 + 0x20;
      uVar61 = (int8)paxVar75 - (int8)paxVar79 >> 5;
    } while (uVar39 < uVar61);
    uVar39 = uVar53 - uVar61;
    if (uVar61 <= uVar53 && uVar39 != 0) {
      if ((uint8)((int8)paxRam0000000000162748 - (int8)paxVar75 >> 5) < uVar39) {
        if (uVar53 >> 0x3b == 0) {
          uVar67 = (int8)paxRam0000000000162748 - (int8)paxVar79;
          uVar61 = (int8)uVar67 >> 4;
          if ((uint8)((int8)uVar67 >> 4) <= uVar53) {
            uVar61 = uVar53;
          }
          if (0x7fffffffffffffdf < uVar67) {
            uVar61 = 0x7ffffffffffffff;
          }
          pxVar45 = (xunknown1 *)xStack_1c0;
          if (uVar61 >> 0x3b == 0) {
            iVar76 = operator_new_plt(uVar61 * 0x20);
            paxVar41 = (xunknown1 (*) [16])(iVar76 + ((int8)paxVar75 - (int8)paxVar79));
            paxVar71 = (xunknown1 (*) [16])(iVar76 + uVar61 * 0x20);
            memset(paxVar41,0,uVar39 * 0x20);
            paxRam0000000000162740 = paxVar41 + uVar39 * 2;
            paxVar85 = paxVar41;
            if (paxVar75 != paxVar79) {
              do {
                paxVar91 = paxVar75 + -2;
                xVar44 = *(xunknown8 *)*paxVar91;
                axVar111 = paxVar75[-1];
                paxVar41 = paxVar85 + -2;
                *(xunknown8 *)(paxVar85[-2] + 8) = *(xunknown8 *)(paxVar75[-2] + 8);
                *(xunknown8 *)paxVar85[-2] = xVar44;
                *(int8 *)(paxVar85[-1] + 8) = axVar111._8_8_;
                *(int8 *)paxVar85[-1] = axVar111._0_8_;
                paxVar75 = paxVar91;
                paxVar85 = paxVar41;
              } while (paxVar91 != paxVar79);
            }
            paxRam0000000000162738 = paxVar41;
            paxRam0000000000162748 = paxVar71;
            if (paxVar79 != (xunknown1 (*) [16])0x0) {
              operator_delete_plt(paxVar79,uVar67);
            }
            goto code_r0x0008734c;
          }
code_r0x00089534:
          xStack_1c0 = (uint8 *)pxVar45;
          if (*(int8 *)(iVar20 + 0x28) != iStack_b8) goto code_r0x000895fc;
          FUN_0005ec14(paxVar40);
        }
code_r0x0008954c:
        if (*(int8 *)(iVar20 + 0x28) == iStack_b8) {
          FUN_0008c37c();
code_r0x00089564:
          if (*(int8 *)(iVar20 + 0x28) == iStack_b8) {
            FUN_0008a91c();
code_r0x0008957c:
            if (*(int8 *)(iVar20 + 0x28) == iStack_b8) {
              FUN_0007c3e0(0x162858);
code_r0x0008959c:
              if (*(int8 *)(iVar20 + 0x28) == iStack_b8) {
                FUN_0005ec14();
                pxVar45 = (xunknown1 *)xStack_1c0;
code_r0x000895b4:
                xStack_1c0 = (uint8 *)pxVar45;
                if (*(int8 *)(iVar20 + 0x28) == iStack_b8) {
                  xVar44 = FUN_0008ad44();
                  operator_delete_plt(paxVar75,0x28);
                  if (*(int8 *)(iVar20 + 0x28) == iStack_b8) {
                    FUN_000c5688(xVar44);
                  }
                }
              }
            }
          }
        }
        goto code_r0x000895fc;
      }
      memset(paxVar75,0,uVar39 * 0x20);
      paxRam0000000000162740 = paxVar75 + uVar39 * 2;
    }
    else if (uVar61 > uVar53) {
      paxRam0000000000162740 = paxVar79 + uVar53 * 2;
    }
  }
  uVar50 = xRam00000000000d8d3c._4_4_;
  if ((int4)xRam00000000000d8d3c._4_4_ < 0x12d) {
    uVar50 = 300;
  }
  uVar49 = uVar50;
  if (0x9c3 < uVar50) {
    uVar49 = 0x9c4;
  }
  if (2999 < uVar50) {
    uVar50 = 3000;
  }
  FUN_0008a3b4(paxVar40,uVar49,0x18,0x170e60);
  FUN_0008a3b4(iVar80,uVar50,0x19,0x170e68);
  if (paxRam0000000000162738 != paxRam0000000000162740) {
    paxVar79 = paxRam0000000000162738;
    do {
      uVar39 = (uint8)(uint1)paxVar79[1][8];
      if (((*paxVar79)[0xc] & 1) == 0) {
        uVar53 = 0;
      }
      else if ((paxVar79[1][8] & 1) == 0) {
        uVar53 = (uint8)(uint1)paxVar79[1][9];
        uVar39 = 0;
      }
      else {
        uVar39 = 1;
        uVar53 = 1;
      }
      paxVar79 = paxVar79 + 2;
      iRam0000000000170e70 = iRam0000000000170e70 + uVar53;
      iRam0000000000170e78 = iRam0000000000170e78 + uVar39;
    } while (paxVar79 != paxRam0000000000162740);
  }
  iVar80 = 0;
  if (paxRam0000000000162740 != paxRam0000000000162738) {
    iVar80 = LZCOUNT((int8)paxRam0000000000162740 - (int8)paxRam0000000000162738 >> 5) * -2 + 0x7e;
  }
  FUN_0008c6f8(paxRam0000000000162738,paxRam0000000000162740,iVar80,1);
  xStack_3f8 = 0;
  gl__SavedState__Save_plt(&xStack_450);
  pxVar51 = pxRam00000000000d3208;
  xStack_45c = 0x201;
  (*(code *)*pxRam00000000000d3208)(0xb74,&xStack_45c);
  pxVar4 = pxRam00000000000d3230;
  xStack_460 = 0x3f800000;
  (*(code *)*pxRam00000000000d3230)(0xb73,&xStack_460);
  cVar36 = (*(code *)*pxRam00000000000d3538)(0x8037);
  xStack_468 = 0;
  (*(code *)*pxVar4)(0x8038,(int8)&xStack_468 + 4);
  (*(code *)*pxVar4)(0x2a00,&xStack_468);
  xStack_46c = 0;
  (*(code *)*pxVar51)(0x8895,&xStack_46c);
  if ((uRam0000000000170e80 & 1) == 0) {
    bVar32 = false;
    uRam0000000000170e84 = uRam0000000000170e84 + 1 & 3;
  }
  else {
    FUN_0008a67c();
    uVar39 = (uint8)uRam0000000000170e84;
    uRam0000000000170e84 = uRam0000000000170e84 + 1 & 3;
    if ((uRam0000000000170e80 == 1) && ((*(uint1 *)(uVar39 + 0x170e88) & 1) == 0)) {
      (*(code *)*pxRam00000000000d35b8)(0x88bf,*(xunknown4 *)(uVar39 * 4 + 0x170e8c));
      *(xunknown1 *)(uVar39 + 0x170e88) = 1;
      iRam0000000000170e9c = iRam0000000000170e9c + 1;
      if ((float4)xRam00000000000d8d4c <= 0.0) {
        bVar32 = false;
      }
      else {
        bVar32 = (*puVar84 & 0x800) == 0;
      }
      *(bool *)(uVar39 + 0x170ea0) = bVar32;
      bVar32 = true;
    }
    else {
      bVar32 = false;
    }
  }
  fVar163 = (float8)iVar78 / 1000.0 + (float8)(int8)pxVar173 * 1000000.0;
  (*(code *)*pxRam00000000000d3520)(0,0,xRam00000000000d8d2c._4_4_,xRam00000000000d8d2c._4_4_);
  pxVar51 = pxRam00000000000d3530;
  (*(code *)*pxRam00000000000d3530)(0xc11);
  (*(code *)*pxVar51)(0xbe2);
  (*(code *)*pxVar51)(0xb44);
  pxVar51 = pxRam00000000000d3528;
  (*(code *)*pxRam00000000000d3528)(0xb71);
  (*(code *)*pxRam00000000000d3460)(0x203);
  (*(code *)*pxRam00000000000d3548)(1);
  (*(code *)*pxRam00000000000d3540)(0,0,0,0);
  (*(code *)*pxRam00000000000d3458)();
  (*(code *)*pxVar51)(0x8037);
  (*(code *)*pxRam00000000000d3450)(ZEXT816(0x40000000),0x3f800000);
  (*(code *)*pxRam00000000000d33d8)(iRam0000000000170ccc);
  (*(code *)*pxRam00000000000d3508)(xRam0000000000170ea4);
  (*(code *)*pxRam00000000000d3440)(0);
  (*(code *)*pxRam00000000000d3310)(0x84c0);
  (*(code *)*pxRam00000000000d3358)(0,0);
  iVar78 = 0;
  bVar33 = true;
  do {
    bVar24 = bVar33;
    if (!bVar34 && !bVar24) break;
    (*(code *)*pxRam00000000000d3248)(0x8ca9,*(xunknown4 *)(iVar78 * 4 + 0x170ea8));
    (*(code *)*pxRam00000000000d3520)(0,0,xRam00000000000d8d2c._4_4_,xRam00000000000d8d2c._4_4_);
    (*(code *)*pxRam00000000000d3558)(0x100);
    paxVar79 = paxRam0000000000162740;
    if (paxRam0000000000162738 != paxRam0000000000162740) {
      uVar25 = 0;
      iVar13 = 0;
      iVar8 = 0;
      iVar90 = 0;
      uVar35 = 0;
      uVar26 = 0;
      iVar37 = 0;
      paxVar40 = paxRam0000000000162738 + 1;
      iStack_4f8 = 0;
      iVar12 = 0;
      cVar16 = '\0';
      iVar11 = 0;
      iVar7 = 0;
      iVar38 = 0;
      iStack_4a0 = 0;
      iVar10 = 0;
      cVar15 = '\0';
      iVar9 = 0;
      iVar6 = 0;
      pxVar51 = pxRam00000000000d34c8;
      do {
        iVar80 = 8;
        if (!bVar24) {
          iVar80 = 9;
        }
        pxVar82 = *(xunknown4 **)paxVar40[-1];
        if (((*paxVar40)[iVar80] & 1) != 0) {
          uVar2 = 0;
          if (iRam0000000000170eb0 != 0) {
            uVar2 = *(uint1 *)(pxVar82 + 0x23);
          }
          if ((uVar25 & 1) != uVar2) {
            iVar3 = iRam0000000000170eb0;
            if (uVar2 == 0) {
              iVar3 = iRam0000000000170ccc;
            }
            pxVar4 = pxRam00000000000d3440;
            if (uVar2 == 0) {
              pxVar4 = pxRam00000000000d3448;
            }
            (*(code *)*pxRam00000000000d33d8)(iVar3);
            pxVar51 = pxRam00000000000d34c8;
            (*(code *)*pxVar4)(1);
            uVar25 = uVar2;
          }
          if (pxVar82[6] != iVar8) {
            (*(code *)*pxVar51)(0x8893);
            iVar8 = pxVar82[6];
          }
          if ((((!(bool)(uVar35 & iVar37 == pxVar82[8])) || (iStack_4a0 != *(int8 *)(pxVar82 + 0xe))
               ) || (iVar10 != pxVar82[0xc])) ||
             (((iVar6 != pxVar82[9] || (iVar9 != pxVar82[10])) ||
              (cVar15 != *(char *)(pxVar82 + 0xb))))) {
            if (pxVar82[8] != iVar90) {
              (*(code *)*pxVar51)(0x8892);
              iVar90 = pxVar82[8];
            }
            (*(code *)*pxRam00000000000d3438)
                      (0,pxVar82[9],pxVar82[10],*(xunknown1 *)(pxVar82 + 0xb),pxVar82[0xc],
                       *(xunknown8 *)(pxVar82 + 0xe));
            iVar37 = pxVar82[8];
            iVar6 = pxVar82[9];
            iVar9 = pxVar82[10];
            cVar15 = *(char *)(pxVar82 + 0xb);
            iVar10 = pxVar82[0xc];
            iStack_4a0 = *(int8 *)(pxVar82 + 0xe);
          }
          if (uVar2 != 0) {
            if (((!(bool)(uVar26 & iVar38 == pxVar82[0x26])) ||
                (iStack_4f8 != *(int8 *)(pxVar82 + 0x2c))) ||
               ((iVar12 != pxVar82[0x2a] ||
                (((iVar7 != pxVar82[0x27] || (iVar11 != pxVar82[0x28])) ||
                 (cVar16 != *(char *)(pxVar82 + 0x29))))))) {
              if (pxVar82[0x26] != iVar90) {
                (*(code *)*pxVar51)(0x8892);
                iVar90 = pxVar82[0x26];
              }
              (*(code *)*pxRam00000000000d3438)
                        (1,pxVar82[0x27],pxVar82[0x28],*(xunknown1 *)(pxVar82 + 0x29),pxVar82[0x2a],
                         *(xunknown8 *)(pxVar82 + 0x2c));
              iVar38 = pxVar82[0x26];
              iVar7 = pxVar82[0x27];
              iVar11 = pxVar82[0x28];
              cVar16 = *(char *)(pxVar82 + 0x29);
              iVar12 = pxVar82[0x2a];
              iStack_4f8 = *(int8 *)(pxVar82 + 0x2c);
            }
            if (pxVar82[0x24] != iVar13) {
              (*(code *)*pxRam00000000000d3300)(0xde1);
              iVar13 = pxVar82[0x24];
            }
            pxVar4 = pxRam00000000000d3418;
            (*(code *)*pxRam00000000000d3418)(xRam00000000000d8d58);
            (*(code *)*pxVar4)(xRam00000000000d8d5c);
            iRam0000000000170eb8 = iRam0000000000170eb8 + 1;
            uVar26 = 1;
          }
          FUN_00089cd8(iVar78 * 0x40 + 0x170d00,pxVar82 + 0x13,&xStack_1c0);
          pxVar5 = (xunknown4 *)0xd8d60;
          if (uVar2 == 0) {
            pxVar5 = (xunknown4 *)0xd8d64;
          }
          uVar35 = 1;
          (*(code *)*pxRam00000000000d34a8)(*pxVar5,1,0,&xStack_1c0);
          (*(code *)*pxRam00000000000d3430)
                    (*pxVar82,pxVar82[2],pxVar82[1],*(xunknown8 *)(pxVar82 + 4));
          iRam0000000000170ec0 = iRam0000000000170ec0 + 1;
          if ((bVar24) && (*(int8 *)*paxVar40 != 0)) {
            *(int4 *)(*(int8 *)*paxVar40 + 0xe8) = iRam00000000000d8d54;
          }
        }
        paxVar41 = paxVar40 + 1;
        paxVar40 = paxVar40 + 2;
      } while (paxVar41 != paxVar79);
      if ((uVar25 & 1) != 0) {
        (*(code *)*pxRam00000000000d33d8)(iRam0000000000170ccc);
        (*(code *)*pxRam00000000000d3448)(1);
      }
    }
    iVar78 = 1;
    bVar33 = false;
  } while (bVar24);
  (*(code *)*pxRam00000000000d3448)(0);
  if (bVar34) {
    cRam0000000000170ce0 = '\x01';
  }
  boot__R_plt(0x4076e /* "ZyZ: shadows - mask" */);
  (*(code *)*pxRam00000000000d3208)(0xba2,axStack_1d0);
  xStack_458 = 0;
  compat__SceneSize_plt((int8)&xStack_458 + 4,&xStack_458);
  iVar37 = scene__DepthTexture_plt();
  fVar203 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
  if (iVar37 == 0) {
code_r0x00088bb8:
    xRam0000000000162c59 = 0;
    iRam0000000000170f30 = iRam0000000000170f30 + 1;
    uRam0000000000170ca0 = 5;
    iVar37 = iRam0000000000170ec8 + 1;
    bVar34 = iRam0000000000170f40 <= iRam0000000000170ec8;
    iRam0000000000170ec8 = iVar37;
    if (bVar34) {
      uRam0000000000170f44 = 5;
      iRam0000000000170f40 = iVar37;
    }
  }
  else {
    fVar203 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
    if ((int4)xStack_458._4_4_ < 0x40) goto code_r0x00088bb8;
    fVar203 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
    if (((int4)(uint4)xStack_458 < 0x40) ||
       (fVar203 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8),
       uRam00000000000d8d44._4_4_ <= 0.0)) goto code_r0x00088bb8;
    uVar50 = xStack_458._4_4_ >> 1;
    uVar49 = (uint4)xStack_458 >> 1;
    if ((uVar50 != uRam0000000000170f68) || (uVar49 != uRam0000000000170f6c)) {
      if (iRam0000000000162c5c != 0) {
        (*(code *)*pxRam00000000000d3308)(1,0x162c5c);
        (*(code *)*pxRam00000000000d3250)(1,0x170f70);
      }
      (*(code *)*pxRam00000000000d32f8)(1,0x162c5c);
      (*(code *)*pxRam00000000000d3300)(0xde1,iRam0000000000162c5c);
      (*(code *)*pxRam00000000000d3318)(0xde1,1,0x881a,uVar50,uVar49);
      pxVar51 = pxRam00000000000d3338;
      (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2600);
      (*(code *)*pxVar51)(0xde1,0x2800,0x2600);
      (*(code *)*pxVar51)(0xde1,0x2802,0x812f);
      (*(code *)*pxVar51)(0xde1,0x2803,0x812f);
      (*(code *)*pxRam00000000000d3240)(1,0x170f70);
      (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam0000000000170f70);
      (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,iRam0000000000162c5c,0);
      iVar38 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
      if (iVar38 != 0x8cd5) {
        (*pcRam0000000000162c30)(1,0x2753b /* "shadows: mask target incomplete - off" */);
        fVar203 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
        uRam0000000000162c5a = 1;
        goto code_r0x00088bb8;
      }
      axVar101._0_8_ = (float8)uRam00000000000d8d44._4_4_;
      axVar101._8_8_ = 0;
      uRam0000000000170f68 = uVar50;
      uRam0000000000170f6c = uVar49;
      (*pcRam0000000000162c30)
                (axVar101,(float8)(float4)xRam00000000000d8d4c,
                 SUB84((float8)xRam00000000000d8d4c._4_4_,0),0,0x32035 /* "shadows: mask %dx%d (RGBA16F: visibility + depth key + normal z, upsam..." */,uVar50,uVar49);
    }
    pxVar51 = pxRam00000000000d3310;
    fVar175 = (float8)(float4)xStack_310;
    fVar178 = (float8)(float4)((uint8)xStack_310 >> 0x20);
    fVar135 = (float8)(float4)xStack_300;
    fVar189 = (float8)(float4)((uint8)xStack_300 >> 0x20);
    fVar200 = (float8)(float4)xStack_308;
    fVar201 = (float8)(float4)((uint8)xStack_308 >> 0x20);
    fVar96 = (float8)(float4)xStack_2d0;
    fVar115 = (float8)(float4)((uint8)xStack_2d0 >> 0x20);
    fVar169 = (float8)(float4)xStack_2c8;
    fVar171 = (float8)(float4)((uint8)xStack_2c8 >> 0x20);
    fVar144 = (float8)(float4)xStack_2c0;
    fVar137 = (float8)(float4)((uint8)xStack_2c0 >> 0x20);
    fVar203 = (float8)(float4)xStack_2b8;
    fVar127 = (float8)(float4)((uint8)xStack_2b8 >> 0x20);
    fVar149 = (float8)(float4)xStack_2b0;
    fVar154 = (float8)(float4)((uint8)xStack_2b0 >> 0x20);
    fVar139 = (float8)(float4)xStack_2a8;
    fVar207 = (float8)(float4)((uint8)xStack_2a8 >> 0x20);
    fVar150 = (float8)(float4)xStack_298;
    fVar172 = (float8)(float4)((uint8)xStack_298 >> 0x20);
    fVar122 = (float8)(float4)xStack_2f8;
    fVar124 = (float8)(float4)((uint8)xStack_2f8 >> 0x20);
    fVar185 = (float8)(float4)xStack_2f0;
    fVar187 = (float8)(float4)((uint8)xStack_2f0 >> 0x20);
    fVar166 = (float8)(float4)xStack_2a0;
    fVar134 = (float8)(float4)((uint8)xStack_2a0 >> 0x20);
    fVar176 = (float8)(float4)xStack_2e0;
    fVar179 = (float8)(float4)((uint8)xStack_2e0 >> 0x20);
    fVar181 = (float8)(float4)xStack_2e8;
    fVar183 = (float8)(float4)((uint8)xStack_2e8 >> 0x20);
    fVar141 = (float8)(float4)xStack_2d8;
    fVar146 = (float8)(float4)((uint8)xStack_2d8 >> 0x20);
    fVar194 = fVar175 * fVar169 + 0.0 + fVar203 * fVar178 + fVar200 * fVar139 + fVar150 * fVar201;
    pxVar173 = (xunknown1 *)
               (fVar175 * fVar96 + 0.0 + fVar144 * fVar178 + fVar200 * fVar149 + fVar166 * fVar201);
    fVar22 = fVar135 * fVar96 + 0.0 + fVar144 * fVar189 + fVar122 * fVar149 + fVar166 * fVar124;
    fVar97 = (float8)(float4)xRam0000000000170d08;
    fVar116 = (float8)(float4)((uint8)xRam0000000000170d08 >> 0x20);
    fVar164 = fVar135 * fVar169 + 0.0 + fVar203 * fVar189 + fVar122 * fVar139 + fVar150 * fVar124;
    xStack_1c0._0_4_ = SUB84(pxVar173,0);
    xStack_1c0._4_4_ = (float4)((uint8)pxVar173 >> 0x20);
    xStack_1b8._0_4_ = SUB84(fVar22,0);
    xStack_1b8._4_4_ = (float4)((uint8)fVar22 >> 0x20);
    fVar98 = (float8)(float4)xRam0000000000170d00;
    fVar117 = (float8)(float4)((uint8)xRam0000000000170d00 >> 0x20);
    paxVar79 = (xunknown1 (*) [16])
               (fVar185 * fVar96 + 0.0 + fVar144 * fVar187 + fVar181 * fVar149 + fVar166 * fVar183);
    fVar159 = fVar175 * fVar115 + 0.0 + fVar178 * fVar137 + fVar200 * fVar154 + fVar201 * fVar134;
    fVar195 = fVar176 * fVar96 + 0.0 + fVar144 * fVar179 + fVar141 * fVar149 + fVar166 * fVar146;
    fVar204 = fVar175 * fVar171 + 0.0 + fVar178 * fVar127 + fVar200 * fVar207 + fVar201 * fVar172;
    fVar175 = fVar135 * fVar115 + 0.0 + fVar189 * fVar137 + fVar122 * fVar154 + fVar124 * fVar134;
    fVar189 = fVar135 * fVar171 + 0.0 + fVar189 * fVar127 + fVar122 * fVar207 + fVar124 * fVar172;
    fVar122 = (float8)(float4)xRam0000000000170d58;
    fVar198 = (float8)(float4)((uint8)xRam0000000000170d58 >> 0x20);
    fVar135 = fVar185 * fVar115 + 0.0 + fVar187 * fVar137 + fVar181 * fVar154 + fVar183 * fVar134;
    fVar144 = (float8)(float4)xRam0000000000170d50;
    fVar178 = (float8)(float4)((uint8)xRam0000000000170d50 >> 0x20);
    fVar205 = fVar176 * fVar115 + 0.0 + fVar179 * fVar137 + fVar141 * fVar154 + fVar146 * fVar134;
    paxStack_1b0 = paxVar79;
    afStack_1a8[0] = fVar195;
    fVar134 = (float8)(float4)xRam0000000000170d18;
    fVar149 = (float8)(float4)((uint8)xRam0000000000170d18 >> 0x20);
    afStack_1a8[0x1a] = 0.0;
    afStack_1a8[0x19] = 0.0;
    afStack_1a8[0x1c] = fRam0000000000022188;
    afStack_1a8[0x1b] = fRam0000000000022180;
    fVar196 = (float8)(float4)xRam0000000000170d20;
    fVar197 = (float8)(float4)((uint8)xRam0000000000170d20 >> 0x20);
    afStack_1a8[2] = fRam0000000000022098;
    afStack_1a8[1] = fRam0000000000022090;
    afStack_1a8[4] = 0.0;
    afStack_1a8[3] = 0.0;
    fVar96 = (float8)(float4)xRam0000000000170d48;
    fVar190 = (float8)(float4)((uint8)xRam0000000000170d48 >> 0x20);
    fVar200 = (float8)(float4)xRam0000000000170d40;
    fVar201 = (float8)(float4)((uint8)xRam0000000000170d40 >> 0x20);
    afStack_1a8[10] = fRam0000000000022188;
    afStack_1a8[9] = fRam0000000000022180;
    afStack_1a8[0xc] = 0.0;
    afStack_1a8[0xb] = 0.0;
    fVar166 = (float8)(float4)xRam0000000000170d28;
    fVar154 = (float8)(float4)((uint8)xRam0000000000170d28 >> 0x20);
    fVar124 = fVar185 * fVar169 + 0.0 + fVar203 * fVar187 + fVar181 * fVar139 + fVar150 * fVar183;
    fVar181 = fVar185 * fVar171 + 0.0 + fVar187 * fVar127 + fVar181 * fVar207 + fVar183 * fVar172;
    fVar206 = fVar176 * fVar171 + 0.0 + fVar179 * fVar127 + fVar141 * fVar207 + fVar146 * fVar172;
    fVar115 = (float8)(float4)xRam0000000000170d38;
    fVar199 = (float8)(float4)((uint8)xRam0000000000170d38 >> 0x20);
    afStack_1a8[5] = fVar159;
    fVar171 = (float8)(float4)xRam0000000000170d10;
    fVar172 = (float8)(float4)((uint8)xRam0000000000170d10 >> 0x20);
    fVar127 = fVar176 * fVar169 + 0.0 + fVar203 * fVar179 + fVar141 * fVar139 + fVar150 * fVar146;
    afStack_1a8[0x12] = 0.0;
    afStack_1a8[0x11] = 0.0;
    afStack_1a8[0x14] = fRam0000000000022098;
    afStack_1a8[0x13] = fRam0000000000022090;
    fVar150 = (float8)(float4)xRam0000000000170d30;
    fVar146 = (float8)(float4)((uint8)xRam0000000000170d30 >> 0x20);
    afStack_1a8[6] = fVar175;
    afStack_1a8[7] = fVar135;
    fVar169 = (float8)(float4)xRam0000000000170d68;
    fVar176 = (float8)(float4)((uint8)xRam0000000000170d68 >> 0x20);
    fVar207 = (float8)(float4)xRam0000000000170d60;
    fVar193 = (float8)(float4)((uint8)xRam0000000000170d60 >> 0x20);
    afStack_1a8[0xd] = fVar194;
    afStack_1a8[0xe] = fVar164;
    fVar179 = (float8)(float4)xRam0000000000170d78;
    fVar183 = (float8)(float4)((uint8)xRam0000000000170d78 >> 0x20);
    fVar185 = (float8)(float4)xRam0000000000170d70;
    fVar187 = (float8)(float4)((uint8)xRam0000000000170d70 >> 0x20);
    afStack_1a8[0xf] = fVar124;
    afStack_1a8[0x10] = fVar127;
    fVar139 = (float8)fStack_31c;
    fVar141 = (float8)fStack_318;
    fVar137 = (float8)fStack_314;
    afStack_1a8[8] = fVar205;
    uVar39 = 0;
    pfVar59 = afStack_1a8 + 5;
    afStack_1a8[0x15] = fVar204;
    iVar78 = -3;
    afStack_1a8[0x16] = fVar189;
    afStack_1a8[0x17] = fVar181;
    afStack_1a8[0x18] = fVar206;
    xStack_1c0 = (uint8 *)pxVar173;
    fVar203 = fVar22;
    do {
      uVar53 = uVar39 & 0xffffffff;
      pfVar69 = pfVar59;
      iVar80 = iVar78;
      if (uVar39 < 3) {
        do {
          uVar62 = (int4)iVar80 + 4;
          if (ABS(*pfVar69) <= ABS(*(float8 *)(axStack_1d0 + uVar39 * 8 + uVar53 * 0x40 + 0x10))) {
            uVar62 = (uint4)uVar53;
          }
          uVar53 = (uint8)uVar62;
          bVar34 = iVar80 != -1;
          iVar80 = iVar80 + 1;
          pfVar69 = pfVar69 + 8;
        } while (bVar34);
      }
      pfVar69 = (float8 *)(axStack_1d0 + uVar53 * 0x40 + 0x10);
      if (ABS(pfVar69[uVar39]) < fRam00000000000222c8) goto code_r0x00088bb8;
      pfVar1 = (float8 *)(axStack_1d0 + uVar39 * 0x40 + 0x10);
      xStack_1b8 = fVar203;
      if (uVar39 != uVar53) {
        fVar129 = *pfVar69;
        fVar132 = afStack_1a8[uVar53 * 8];
        fVar203 = afStack_1a8[uVar53 * 8 + -1];
        fVar142 = afStack_1a8[uVar39 * 8 + -2];
        fVar99 = *pfVar1;
        fVar143 = afStack_1a8[uVar39 * 8];
        fVar21 = afStack_1a8[uVar39 * 8 + -1];
        afStack_1a8[uVar39 * 8 + -2] = afStack_1a8[uVar53 * 8 + -2];
        *pfVar1 = fVar129;
        afStack_1a8[uVar39 * 8] = fVar132;
        afStack_1a8[uVar39 * 8 + -1] = fVar203;
        fVar129 = afStack_1a8[uVar53 * 8 + 1];
        fVar132 = afStack_1a8[uVar53 * 8 + 2];
        fVar138 = afStack_1a8[uVar53 * 8 + 4];
        fVar203 = afStack_1a8[uVar53 * 8 + 3];
        afStack_1a8[uVar53 * 8 + -2] = fVar142;
        *pfVar69 = fVar99;
        afStack_1a8[uVar53 * 8] = fVar143;
        afStack_1a8[uVar53 * 8 + -1] = fVar21;
        fVar142 = afStack_1a8[uVar39 * 8 + 2];
        fVar99 = afStack_1a8[uVar39 * 8 + 1];
        fVar143 = afStack_1a8[uVar39 * 8 + 4];
        fVar21 = afStack_1a8[uVar39 * 8 + 3];
        afStack_1a8[uVar39 * 8 + 2] = fVar132;
        afStack_1a8[uVar39 * 8 + 1] = fVar129;
        afStack_1a8[uVar39 * 8 + 4] = fVar138;
        afStack_1a8[uVar39 * 8 + 3] = fVar203;
        afStack_1a8[uVar53 * 8 + 2] = fVar142;
        afStack_1a8[uVar53 * 8 + 1] = fVar99;
        afStack_1a8[uVar53 * 8 + 4] = fVar143;
        afStack_1a8[uVar53 * 8 + 3] = fVar21;
      }
      fVar132 = *pfVar1;
      fVar138 = afStack_1a8[uVar39 * 8 + -2];
      fVar99 = pfVar1[uVar39];
      pfVar73 = afStack_1a8 + uVar39 * 8 + 1;
      fVar147 = afStack_1a8[uVar39 * 8 + 2];
      fVar21 = *pfVar73;
      pfVar69 = afStack_1a8 + uVar39 * 8 + 3;
      fVar165 = afStack_1a8[uVar39 * 8 + 4];
      fVar129 = *pfVar69;
      pfVar72 = afStack_1a8 + uVar39 * 8 + -1;
      fVar142 = *pfVar72;
      fVar143 = afStack_1a8[uVar39 * 8];
      afStack_1a8[uVar39 * 8 + -2] = fVar138 / fVar99;
      *pfVar1 = fVar132 / fVar99;
      afStack_1a8[uVar39 * 8] = fVar143 / fVar99;
      *pfVar72 = fVar142 / fVar99;
      afStack_1a8[uVar39 * 8 + 2] = fVar147 / fVar99;
      *pfVar73 = fVar21 / fVar99;
      afStack_1a8[uVar39 * 8 + 4] = fVar165 / fVar99;
      *pfVar69 = fVar129 / fVar99;
      fVar203 = xStack_1b8;
      if (uVar39 == 0) {
code_r0x000881d8:
        fVar99 = afStack_1a8[uVar39 + 5];
        if (fVar99 != 0.0) {
          afStack_1a8[6] = afStack_1a8[6] - afStack_1a8[uVar39 * 8 + -2] * fVar99;
          afStack_1a8[5] = afStack_1a8[5] - *pfVar1 * fVar99;
          afStack_1a8[8] = afStack_1a8[8] - afStack_1a8[uVar39 * 8] * fVar99;
          afStack_1a8[7] = afStack_1a8[7] - *pfVar72 * fVar99;
          afStack_1a8[10] = afStack_1a8[10] - afStack_1a8[uVar39 * 8 + 2] * fVar99;
          afStack_1a8[9] = afStack_1a8[9] - *pfVar73 * fVar99;
          afStack_1a8[0xc] = afStack_1a8[0xc] - afStack_1a8[uVar39 * 8 + 4] * fVar99;
          afStack_1a8[0xb] = afStack_1a8[0xb] - *pfVar69 * fVar99;
        }
        if (uVar39 != 2) goto code_r0x0008821c;
      }
      else {
        fVar170 = afStack_1a8[uVar39 - 3];
        if (fVar170 != 0.0) {
          pxVar45 = (xunknown1 *)((float8)xStack_1c0 - (fVar132 / fVar99) * fVar170);
          fVar203 = xStack_1b8 - (fVar138 / fVar99) * fVar170;
          xStack_1b8._0_4_ = SUB84(fVar203,0);
          xStack_1b8._4_4_ = (float4)((uint8)fVar203 >> 0x20);
          xStack_1c0._0_4_ = SUB84(pxVar45,0);
          xStack_1c0._4_4_ = (float4)((uint8)pxVar45 >> 0x20);
          afStack_1a8[0] = afStack_1a8[0] - (fVar143 / fVar99) * fVar170;
          paxStack_1b0 = (xunknown1 (*) [16])((float8)paxStack_1b0 - (fVar142 / fVar99) * fVar170);
          afStack_1a8[2] = afStack_1a8[2] - (fVar147 / fVar99) * fVar170;
          afStack_1a8[1] = afStack_1a8[1] - (fVar21 / fVar99) * fVar170;
          afStack_1a8[4] = afStack_1a8[4] - (fVar165 / fVar99) * fVar170;
          afStack_1a8[3] = afStack_1a8[3] - (fVar129 / fVar99) * fVar170;
          xStack_1c0 = (uint8 *)pxVar45;
        }
        if (uVar39 != 1) goto code_r0x000881d8;
code_r0x0008821c:
        fVar99 = afStack_1a8[uVar39 + 0xd];
        if (fVar99 != 0.0) {
          afStack_1a8[0xe] = afStack_1a8[0xe] - afStack_1a8[uVar39 * 8 + -2] * fVar99;
          afStack_1a8[0xd] = afStack_1a8[0xd] - *pfVar1 * fVar99;
          afStack_1a8[0x10] = afStack_1a8[0x10] - afStack_1a8[uVar39 * 8] * fVar99;
          afStack_1a8[0xf] = afStack_1a8[0xf] - *pfVar72 * fVar99;
          afStack_1a8[0x12] = afStack_1a8[0x12] - afStack_1a8[uVar39 * 8 + 2] * fVar99;
          afStack_1a8[0x11] = afStack_1a8[0x11] - *pfVar73 * fVar99;
          afStack_1a8[0x14] = afStack_1a8[0x14] - afStack_1a8[uVar39 * 8 + 4] * fVar99;
          afStack_1a8[0x13] = afStack_1a8[0x13] - *pfVar69 * fVar99;
        }
        if (uVar39 == 3) break;
      }
      fVar99 = afStack_1a8[uVar39 + 0x15];
      if (fVar99 != 0.0) {
        afStack_1a8[0x16] = afStack_1a8[0x16] - afStack_1a8[uVar39 * 8 + -2] * fVar99;
        afStack_1a8[0x15] = afStack_1a8[0x15] - *pfVar1 * fVar99;
        afStack_1a8[0x18] = afStack_1a8[0x18] - afStack_1a8[uVar39 * 8] * fVar99;
        afStack_1a8[0x17] = afStack_1a8[0x17] - *pfVar72 * fVar99;
        afStack_1a8[0x1a] = afStack_1a8[0x1a] - afStack_1a8[uVar39 * 8 + 2] * fVar99;
        afStack_1a8[0x19] = afStack_1a8[0x19] - *pfVar73 * fVar99;
        afStack_1a8[0x1c] = afStack_1a8[0x1c] - afStack_1a8[uVar39 * 8 + 4] * fVar99;
        afStack_1a8[0x1b] = afStack_1a8[0x1b] - *pfVar69 * fVar99;
      }
      uVar39 = uVar39 + 1;
      iVar78 = iVar78 + 1;
      pfVar59 = pfVar59 + 9;
    } while (uVar39 != 4);
    fVar142 = fVar96 * 0.0 + 0.0;
    fVar147 = fVar190 * 0.0 + 0.0;
    fVar21 = fVar200 * 0.0 + 0.0;
    fVar202 = fVar201 * 0.0 + 0.0;
    fVar129 = fVar97 * 0.0 + 0.0;
    fVar132 = fVar116 * 0.0 + 0.0;
    fVar203 = fVar98 * 0.0 + 0.0;
    fVar138 = fVar117 * 0.0 + 0.0;
    fVar170 = (float8)fStack_31c;
    fVar143 = (float8)fStack_314;
    fVar165 = (float8)fStack_318;
    fVar99 = afStack_1a8[3] - afStack_1a8[0x1b] * fVar170;
    xStack_1c0._0_4_ = (float4)(afStack_1a8[1] - afStack_1a8[0x19] * fVar170);
    xStack_1c0._4_4_ = (float4)(afStack_1a8[9] - afStack_1a8[0x19] * fVar165);
    paxStack_1b0 = (xunknown1 (*) [16])
                   CONCAT44((float4)(afStack_1a8[10] - afStack_1a8[0x1a] * fVar165),
                            (float4)(afStack_1a8[2] - afStack_1a8[0x1a] * fVar170));
    xStack_200 = CONCAT44((float4)(fVar172 + fVar138 + fVar197 * 0.0 + fVar146 * 0.0),
                          (float4)(fVar171 + fVar203 + fVar196 * 0.0 + fVar150 * 0.0));
    xStack_1e8 = CONCAT44((float4)(fVar154 + fVar132 + fVar149 * 0.0 + fVar199 * 0.0),
                          (float4)(fVar166 + fVar129 + fVar134 * 0.0 + fVar115 * 0.0));
    xStack_1b8._0_4_ = (float4)(afStack_1a8[0x11] - afStack_1a8[0x19] * fVar143);
    xStack_1b8._4_4_ = (float4)afStack_1a8[0x19];
    xStack_208 = CONCAT44((float4)(fVar116 + 0.0 + fVar149 * 0.0 + fVar154 * 0.0 + fVar199 * 0.0),
                          (float4)(fVar97 + 0.0 + fVar134 * 0.0 + fVar166 * 0.0 + fVar115 * 0.0));
    xStack_240 = CONCAT44((float4)(fVar178 + fVar202 + fVar193 * 0.0 + fVar187 * 0.0),
                          (float4)(fVar144 + fVar21 + fVar207 * 0.0 + fVar185 * 0.0));
    xStack_250 = CONCAT44((float4)(fVar201 + 0.0 + fVar178 * 0.0 + fVar193 * 0.0 + fVar187 * 0.0),
                          (float4)(fVar200 + 0.0 + fVar144 * 0.0 + fVar207 * 0.0 + fVar185 * 0.0));
    afStack_1a8[0] =
         (float8)CONCAT44((float4)afStack_1a8[0x1a],
                          (float4)(afStack_1a8[0x12] - afStack_1a8[0x1a] * fVar143));
    xStack_1f8 = CONCAT44((float4)(fVar149 + fVar132 + fVar154 * 0.0 + fVar199 * 0.0),
                          (float4)(fVar134 + fVar129 + fVar166 * 0.0 + fVar115 * 0.0));
    xStack_230 = CONCAT44((float4)(fVar193 + fVar202 + fVar178 * 0.0 + fVar187 * 0.0),
                          (float4)(fVar207 + fVar21 + fVar144 * 0.0 + fVar185 * 0.0));
    xStack_238 = CONCAT44((float4)(fVar198 + fVar147 + fVar176 * 0.0 + fVar183 * 0.0),
                          (float4)(fVar122 + fVar142 + fVar169 * 0.0 + fVar179 * 0.0));
    xStack_248 = CONCAT44((float4)(fVar190 + 0.0 + fVar198 * 0.0 + fVar176 * 0.0 + fVar183 * 0.0),
                          (float4)(fVar96 + 0.0 + fVar122 * 0.0 + fVar169 * 0.0 + fVar179 * 0.0));
    afStack_1a8[3] =
         (float8)CONCAT44((float4)(afStack_1a8[0xc] - afStack_1a8[0x1c] * fVar165),
                          (float4)(afStack_1a8[4] - afStack_1a8[0x1c] * fVar170));
    uStack_210 = CONCAT44((float4)(fVar117 + 0.0 + fVar172 * 0.0 + fVar197 * 0.0 + fVar146 * 0.0),
                          (float4)(fVar98 + 0.0 + fVar171 * 0.0 + fVar196 * 0.0 + fVar150 * 0.0));
    xStack_1e0 = CONCAT44((float4)(fVar146 +
                                  fVar139 * fVar117 + 0.0 + fVar141 * fVar172 + fVar137 * fVar197),
                          (float4)(fVar150 +
                                  fVar139 * fVar98 + 0.0 + fVar141 * fVar171 + fVar137 * fVar196));
    xStack_228 = CONCAT44((float4)(fVar176 + fVar147 + fVar198 * 0.0 + fVar183 * 0.0),
                          (float4)(fVar169 + fVar142 + fVar122 * 0.0 + fVar179 * 0.0));
    afStack_1a8[2] =
         (float8)CONCAT44((float4)afStack_1a8[0x1b],
                          (float4)(afStack_1a8[0x13] - afStack_1a8[0x1b] * fVar143));
    afStack_1a8[4] =
         (float8)CONCAT44((float4)afStack_1a8[0x1c],
                          (float4)(afStack_1a8[0x14] - afStack_1a8[0x1c] * fVar143));
    xStack_1d8 = CONCAT44((float4)(fVar199 +
                                  fVar139 * fVar116 + 0.0 + fVar141 * fVar149 + fVar137 * fVar154),
                          (float4)(fVar115 +
                                  fVar139 * fVar97 + 0.0 + fVar141 * fVar134 + fVar137 * fVar166));
    afStack_1a8[1] =
         (float8)CONCAT44((float4)(afStack_1a8[0xb] - afStack_1a8[0x1b] * fVar165),(float4)fVar99);
    xStack_218 = CONCAT44((float4)(fVar183 +
                                  fVar139 * fVar190 + 0.0 + fVar141 * fVar198 + fVar137 * fVar176),
                          (float4)(fVar179 +
                                  fVar139 * fVar96 + 0.0 + fVar141 * fVar122 + fVar137 * fVar169));
    xStack_1f0 = CONCAT44((float4)(fVar197 + fVar138 + fVar172 * 0.0 + fVar146 * 0.0),
                          (float4)(fVar196 + fVar203 + fVar171 * 0.0 + fVar150 * 0.0));
    xStack_220 = CONCAT44((float4)(fVar187 +
                                  fVar139 * fVar201 + 0.0 + fVar141 * fVar178 + fVar137 * fVar193),
                          (float4)(fVar185 +
                                  fVar139 * fVar200 + 0.0 + fVar141 * fVar144 + fVar137 * fVar207));
    (*(code *)*pxRam00000000000d3508)(xRam0000000000170f58);
    (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam0000000000170f70);
    (*(code *)*pxRam00000000000d3520)(0,0,uVar50,uVar49);
    pxVar4 = pxRam00000000000d3530;
    (*(code *)*pxRam00000000000d3530)(0xb71);
    (*(code *)*pxRam00000000000d3548)(0);
    (*(code *)*pxVar4)(0x8037);
    (*(code *)*pxRam00000000000d3540)(1,1,1,1);
    fStack_290 = 5.05364e-41;
    (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&fStack_290);
    (*(code *)*pxRam00000000000d33d8)(iRam0000000000170f5c);
    (*(code *)*pxVar51)(0x84c0);
    pxVar4 = pxRam00000000000d3300;
    (*(code *)*pxRam00000000000d3300)(0xde1,iVar37);
    pxVar27 = pxRam00000000000d3358;
    (*(code *)*pxRam00000000000d3358)(0,xRam0000000000170f64);
    (*(code *)*pxVar51)(0x84c1);
    (*(code *)*pxVar4)(0xde1,xRam0000000000170f4c);
    (*(code *)*pxVar27)(1,xRam0000000000170f60);
    (*(code *)*pxVar51)(0x84c2);
    (*(code *)*pxVar4)(0xde1,xRam0000000000170f50);
    (*(code *)*pxVar27)(2,xRam0000000000170f60);
    pxVar4 = pxRam00000000000d3410;
    (*(code *)*pxRam00000000000d3410)(xRam00000000000d8d6c,0);
    (*(code *)*pxVar4)(xRam00000000000d8d70,1);
    (*(code *)*pxVar4)(xRam00000000000d8d84,2);
    pxVar27 = pxRam00000000000d34a8;
    (*(code *)*pxRam00000000000d34a8)(xRam00000000000d8d88,1,0,&xStack_250);
    pxVar4 = pxRam00000000000d3480;
    fVar161 = (float4)xRam00000000000d8d2c._4_4_;
    (*(code *)*pxRam00000000000d3480)
              (fRam0000000000170cd0 / fVar161 + 0.02,fRam0000000000170cd4 / fVar161 + 0.02,
               (fRam0000000000170cd0 + fRam0000000000170cd0) / fVar161,
               (fRam0000000000170cd4 + fRam0000000000170cd4) / fVar161,
               fRam0000000000170cd0 / fVar161,xRam00000000000d8d8c);
    (*(code *)*pxVar27)(xRam00000000000d8d74,1,0,&xStack_1c0);
    (*(code *)*pxVar27)(xRam00000000000d8d78,1,0,&uStack_210);
    fVar166 = fVar159 * 0.0 + 0.0;
    fVar203 = (float8)pxVar173 * 0.0 + 0.0;
    fVar144 = fVar194 * 0.0 + 0.0;
    fVar150 = fVar204 * 0.0 + 0.0;
    fStack_28c = (float4)(fVar159 + 0.0 + fVar175 * 0.0 + fVar135 * 0.0 + fVar205 * 0.0);
    fStack_290 = (float4)((float8)pxVar173 + 0.0 + fVar22 * 0.0 + (float8)paxVar79 * 0.0 +
                         fVar195 * 0.0);
    fStack_288 = (float4)(fVar194 + 0.0 + fVar164 * 0.0 + fVar124 * 0.0 + fVar127 * 0.0);
    fStack_284 = (float4)(fVar204 + 0.0 + fVar189 * 0.0 + fVar181 * 0.0 + fVar206 * 0.0);
    fStack_27c = (float4)(fVar166 + fVar175 + fVar135 * 0.0 + fVar205 * 0.0);
    fStack_278 = (float4)(fVar144 + fVar164 + fVar124 * 0.0 + fVar127 * 0.0);
    xStack_26c = CONCAT44((float4)(fVar144 + fVar164 * 0.0 + fVar124 + fVar127 * 0.0),
                          (float4)(fVar166 + fVar175 * 0.0 + fVar135 + fVar205 * 0.0));
    fStack_274 = (float4)(fVar150 + fVar189 + fVar181 * 0.0 + fVar206 * 0.0);
    fStack_280 = (float4)(fVar203 + fVar22 + (float8)paxVar79 * 0.0 + fVar195 * 0.0);
    fStack_270 = (float4)(fVar203 + fVar22 * 0.0 + (float8)paxVar79 + fVar195 * 0.0);
    fStack_25c = (float4)(fVar139 * fVar159 + 0.0 + fVar141 * fVar175 + fVar137 * fVar135 + fVar205)
    ;
    xStack_264 = CONCAT44((float4)(fVar139 * (float8)pxVar173 + 0.0 + fVar141 * fVar22 +
                                   fVar137 * (float8)paxVar79 + fVar195),
                          (float4)(fVar150 + fVar189 * 0.0 + fVar181 + fVar206 * 0.0));
    fStack_258 = (float4)(fVar139 * fVar194 + 0.0 + fVar141 * fVar164 + fVar137 * fVar124 + fVar127)
    ;
    fStack_254 = (float4)(fVar139 * fVar204 + 0.0 + fVar141 * fVar189 + fVar137 * fVar181 + fVar206)
    ;
    (*(code *)*pxVar27)(xRam00000000000d8d94,1,0,&fStack_290);
    fVar94 = 0.0;
    fVar161 = (float4)xRam00000000000d8d4c;
    if ((*puRam00000000000d3610 & 0x800) != 0) {
      fVar161 = 0.0;
    }
    (*(code *)*pxVar4)(fVar161,xRam00000000000d8d4c._4_4_,(float4)xStack_2a8,(float4)xStack_298,
                       xRam00000000000d8d98);
    if ((((xRam0000000000162c50 == (code *)0x0) ||
         (pfVar42 = (float4 *)(*xRam0000000000162c50)(), pfVar42 == (float4 *)0x0)) ||
        (fVar161 = *pfVar42, NAN(fVar161))) ||
       ((fVar118 = pfVar42[1], 100000.0 <= fVar118 || (fVar161 <= -1000.0)))) {
      fVar125 = 0.0;
    }
    else {
      fVar125 = 0.0;
      if (fVar161 + 1.0 < fVar118) {
        fVar125 = 1.0 / (fVar118 - fVar161);
        fVar94 = fVar161;
      }
    }
    (*(code *)*pxRam00000000000d3420)(fVar94,fVar125,xRam00000000000d8d90);
    if ((iRam0000000000170f74 < 3) && (uRam0000000000170f78 % 0xe10 == 1)) {
      axVar102._0_8_ = (float8)fVar94;
      axVar102._8_8_ = 0;
      iRam0000000000170f74 = iRam0000000000170f74 + 1;
      if (fVar125 <= 0.0) {
        fVar203 = 0.0;
        xVar44 = 0x38d26 /* " (fog parameters not readable - no fade)" */;
      }
      else {
        xVar44 = 0x29893;
        fVar203 = (float8)(fVar94 + 1.0 / fVar125);
      }
      (*pcRam0000000000162c30)(axVar102,fVar203,fVar125 <= 0.0,0x34f53 /* "shadows: fading out with the game's fog - start %.0f m, fully fogged a..." */,xVar44);
    }
    uRam0000000000170f78 = uRam0000000000170f78 + 1;
    if (NAN(fStack_314)) {
      fStack_314 = 0.0;
    }
    (*(code *)*pxVar4)(1.0 / (float4)(int4)xStack_458._4_4_,1.0 / (float4)(int4)(uint4)xStack_458,
                       1.0 / (float4)xRam00000000000d8d2c._4_4_,fStack_314,xRam00000000000d8d7c);
    (*(code *)*pxVar4)(fRam0000000000170ce8,fRam0000000000170cec,fRam0000000000170cf0,0x3ada740e,
                       xRam00000000000d8d80);
    (*(code *)*pxRam00000000000d3518)(4,0,3);
    (*(code *)*pxVar51)(0x84c0);
    xRam0000000000162c59 = 1;
    FUN_0008a830();
    fVar203 = (float8)CONCAT44(xStack_1b8._4_4_,(float4)xStack_1b8);
    iRam0000000000170ec8 = 0;
  }
  pxVar51 = pxRam00000000000d34c8;
  xStack_1b8 = fVar203;
  if (bVar32) {
    (*(code *)*pxRam00000000000d35c0)(0x88bf);
  }
  (*(code *)*pxRam00000000000d3508)(fStack_444);
  (*(code *)*pxVar51)(0x8893,xStack_46c);
  (*(code *)*pxRam00000000000d3460)(xStack_45c);
  (*(code *)*pxRam00000000000d3458)();
  (*(code *)*pxRam00000000000d3450)(xStack_468._4_4_,xStack_468 & 0xffffffff);
  pxVar51 = pxRam00000000000d3530;
  if (cVar36 != '\0') {
    pxVar51 = pxRam00000000000d3528;
  }
  (*(code *)*pxVar51)(0x8037);
  gl__SavedState__Restore_plt(&xStack_450);
  clock_gettime(1,&xStack_1c0);
  fRam0000000000170ed0 =
       fRam0000000000170ed0 +
       (((float8)(int8)xStack_1b8 / 1000.0 + (float8)(int8)xStack_1c0 * 1000000.0) - fVar163);
  clock_gettime(1,&xStack_1c0);
  axVar103._0_8_ =
       (((float8)(int8)xStack_1b8 / 1000.0 + (float8)(int8)xStack_1c0 * 1000000.0) - fVar163) /
       1000.0;
  axVar103._8_8_ = 0;
  budget__CpuMs_plt(axVar103,1);
  xRam0000000000170cc8 = 1;
  uVar50 = uRam0000000000170cdc + 1;
  bVar34 = 0x256 < (int4)uRam0000000000170cdc;
  uRam0000000000170cdc = uVar50;
  if (bVar34) {
    fVar166 = (float8)uVar50;
    axVar104._0_8_ = (float8)iRam0000000000170e70 / fVar166;
    axVar104._8_8_ = 0;
    axVar151._0_8_ = (float8)iRam0000000000162bb8 / fVar166;
    axVar151._8_8_ = 0;
    (*pcRam0000000000162c30)
              (axVar104,(float8)iRam0000000000170e38 / fVar166,
               SUB84((float8)iRam0000000000170e30 / fVar166,0),
               (float8)iRam0000000000162ba0 / fVar166,
               SUB84((float8)iRam0000000000162c00 / fVar166,0),
               SUB84((float8)iRam0000000000170ec0 / fVar166,0),
               (float8)iRam0000000000162bb0 / fVar166,axVar151,0,0x2afb4 /* "shadows: per frame - cache %zu entries, %.0f from cache (not drawn by ..." */,
               (int8)paxRam00000000001627d0 - (int8)paxRam00000000001627c8 >> 8,iRam0000000000170cd8
              );
    fVar163 = (float8)FUN_0008318c();
    fVar203 = 0.0;
    if (0.0 < fRam0000000000170ed8) {
      fVar203 = fVar166 / ((fVar163 - fRam0000000000170ed8) / 1000000.0);
    }
    axVar105._8_8_ = 0;
    axVar105._0_8_ = (float8)iRam0000000000162bc8 / fVar166;
    (*pcRam0000000000162c30)(axVar105,fVar203,0,0x31f9e /* "shadows: draws into other targets than the scene (the game's ped-shado..." */,uRam0000000000170cdc);
    iRam0000000000162bc8 = 0;
    fRam0000000000170ed8 = fVar163;
    if ((iRam0000000000170ee0 == 0) || (iRam0000000000170ee4 == 0)) {
      if (iRam0000000000170ee0 == 0 && iRam0000000000170ee4 == 0) {
        (*pcRam0000000000162c30)
                  (0,0x3ffeb /* "shadows: GPU timer - no result (timer %d, %d begun, %d disjoint, %d ga..." */,uRam0000000000170e80,iRam0000000000170e9c,xRam0000000000170ef8,
                   xRam0000000000170efc);
      }
      else {
        iVar37 = iRam0000000000170ee4;
        if (iRam0000000000170ee0 != 0) {
          iVar37 = iRam0000000000170ee0;
        }
        pfVar59 = (float8 *)0x170ee8;
        if (iRam0000000000170ee0 == 0) {
          pfVar59 = (float8 *)0x170ef0;
        }
        axVar107._0_8_ = *pfVar59 / (float8)iVar37;
        axVar107._8_8_ = 0;
        (*pcRam0000000000162c30)(axVar107,0,0x274ff /* "shadows: GPU %.3f ms per frame (cascades + mask, avg of %d)" */,iVar37);
      }
    }
    else {
      axVar106._0_8_ = fRam0000000000170ee8 / (float8)iRam0000000000170ee0;
      axVar106._8_8_ = 0;
      (*pcRam0000000000162c30)
                (axVar106,fRam0000000000170ef0 / (float8)iRam0000000000170ee4,0,0x25b3f /* "shadows: GPU %.3f ms per frame (cascades + mask, avg of %d) | contact ..." */);
    }
    iRam0000000000170e9c = 0;
    xRam0000000000170ef8 = 0;
    xRam0000000000170efc = 0;
    axVar108._0_8_ = (float8)iRam0000000000170e48 / (float8)(int4)uRam0000000000170cdc;
    axVar108._8_8_ = 0;
    (*pcRam0000000000162c30)(axVar108,0,0x34728 /* "shadows: far cascade re-rendered %ld times in %d frames, %.0f draws pe..." */,iRam0000000000170db8);
    fVar163 = (float8)(int4)uRam0000000000170cdc;
    axVar109._0_8_ = (float8)iRam0000000000162b40 / fVar163;
    axVar109._8_8_ = 0;
    axVar152._0_8_ = (float8)iRam0000000000162c08 / fVar163;
    axVar152._8_8_ = 0;
    (*pcRam0000000000162c30)
              (axVar109,(float8)iRam0000000000170e28 / fVar163,
               SUB84((float8)iRam0000000000170e30 / fVar163,0),
               (float8)iRam0000000000170df8 / fVar163,
               SUB84((float8)iRam0000000000170e00 / fVar163,0),
               SUB84((float8)iRam0000000000170e08 / fVar163,0),
               (float8)iRam0000000000170df0 / fVar163,axVar152,0,0x40038 /* "shadows: near map every frame (1.5.1), %zu moving meshes (%ld new, nev..." */,xRam00000000001627b8,
               iRam0000000000170e18,iRam0000000000170e20,iRam0000000000170db0);
    xVar120 = xRam0000000000170f00;
    pcVar31 = pcRam0000000000162c30;
    iRam0000000000162b40 = 0;
    fVar163 = (float8)iRam0000000000170e78;
    fVar203 = (float8)iRam0000000000170e60;
    fVar144 = (float8)iRam0000000000170e68;
    uVar39 = iRam0000000000170dc0 + iRam0000000000170dd0 +
             iRam0000000000170dc8 + iRam0000000000170dd8 + iRam0000000000170de0;
    uVar53 = wind__Tags_plt();
    xVar44 = 0x3721d;
    if ((uVar53 & 1) == 0) {
      xVar44 = 0x22b3a;
    }
    if ((int8)uVar39 < 1) {
      xVar93 = 0;
      fVar135 = 0.0;
      fVar150 = 0.0;
      xVar156 = 0;
      fVar139 = 0.0;
    }
    else {
      axVar110._8_8_ = iRam0000000000170de0;
      axVar110._0_8_ = iRam0000000000170dd8;
      fVar150 = (float8)uVar39;
      axVar111 = NEON_scvtf(axVar110,8);
      xVar156 = SUB84((axVar111._0_8_ * 100.0) / fVar150,0);
      fVar139 = (axVar111._8_8_ * 100.0) / fVar150;
      axVar112._8_8_ = iRam0000000000170dd0;
      axVar112._0_8_ = iRam0000000000170dc8;
      axVar111 = NEON_scvtf(axVar112,8);
      xVar93 = SUB84((axVar111._0_8_ * 100.0) / fVar150,0);
      fVar135 = (axVar111._8_8_ * 100.0) / fVar150;
      fVar150 = ((float8)iRam0000000000170dc0 * 100.0) / fVar150;
    }
    axVar153._8_8_ = 0;
    axVar153._0_8_ = fVar150;
    axVar113._8_8_ = 0;
    axVar113._0_8_ = fVar163 / fVar166;
    (*pcVar31)(axVar113,fVar203 / fVar166,SUB84(fVar144 / fVar166,0),fVar135,xVar93,xVar156,fVar139,
               axVar153,0,0x3f76b /* "shadows: 1.00 casters - near map %.0f per frame (square + cap by dista..." */,xVar120,xVar44,iRam0000000000170de8);
    if (iRam0000000000170f20 + iRam0000000000170f18 + iRam0000000000170f28 + iRam0000000000170f30 +
        iRam0000000000170f38 == 0) {
      (*pcRam0000000000162c30)(0,0x38163 /* "shadows: shadows on in every main-scene frame of this window" */,0);
    }
    else {
      (*pcRam0000000000162c30)(0,0x34799 /* "shadows: frames WITHOUT shadows in this window %ld - PerfCycle %ld, su..." */);
    }
    iRam0000000000170f38 = 0;
    iRam0000000000170e60 = 0;
    iRam0000000000170de0 = 0;
    iRam0000000000170e10 = 0;
    axVar114._0_8_ = (float8)iRam0000000000170eb8 / (float8)(int4)uRam0000000000170cdc;
    axVar114._8_8_ = 0;
    iRam0000000000170de8 = 0;
    iRam0000000000170f20 = 0;
    iRam0000000000170f18 = 0;
    iRam0000000000170f30 = 0;
    iRam0000000000170f28 = 0;
    xRam0000000000170f10 = 0;
    xRam0000000000170f08 = 0;
    iRam0000000000170f40 = 0;
    iRam0000000000170e78 = 0;
    iRam0000000000170e68 = 0;
    iRam0000000000170dc8 = 0;
    iRam0000000000170dc0 = 0;
    iRam0000000000170dd8 = 0;
    iRam0000000000170dd0 = 0;
    xRam0000000000170f00 = 0;
    xVar14 = 0;
    if (iRam0000000000170c6c == 0 && iRam0000000000162bf0 == 0) {
      xVar14 = cRam0000000000162bf8;
    }
    (*pcRam0000000000162c30)
              (axVar114,(float8)iRam0000000000162bf0 / (float8)(int4)uRam0000000000170cdc,xVar14,
               0x381a0 /* "shadows: alpha-tested casters %.0f per frame (foliage / fences, cut ou..." */,iRam0000000000170c6c,iRam0000000000170c68,
               piRam0000000000162be0 != 0 && pfRam0000000000162be8 != 0);
    iRam0000000000170eb8 = 0;
    iRam0000000000170e18 = 0;
    iRam0000000000170db8 = 0;
    iRam0000000000170e48 = 0;
    fRam0000000000170ee8 = 0.0;
    iRam0000000000170ee0 = 0;
    fRam0000000000170ef0 = 0.0;
    iRam0000000000170ee4 = 0;
    iRam0000000000170db0 = 0;
    iRam0000000000170e08 = 0;
    iRam0000000000170df8 = 0;
    iRam0000000000170e00 = 0;
    iRam0000000000170e50 = 0;
    iRam0000000000170e38 = 0;
    iRam0000000000170e70 = 0;
    iRam0000000000170df0 = 0;
    iRam0000000000162c08 = 0;
    iRam0000000000170e58 = 0;
    iRam0000000000162ba8 = 0;
    iRam0000000000162bd0 = 0;
    iRam0000000000162bd8 = 0;
    iRam0000000000162bb8 = 0;
    iRam0000000000162bb0 = 0;
    iRam0000000000170ec0 = 0;
    iRam0000000000162c00 = 0;
    iRam0000000000162ba0 = 0;
    fRam0000000000170ed0 = 0.0;
    fRam0000000000162c10 = 0.0;
    fRam0000000000170cc0 = 0.0;
    iRam0000000000162bf0 = 0;
    iRam0000000000170d80 = 0;
    iRam0000000000170e28 = 0;
    iRam0000000000170e30 = 0;
    uRam0000000000170cdc = 0;
    iRam0000000000170cd8 = 0;
  }
code_r0x00084b84:
  if (*(int8 *)(iVar20 + 0x28) == iStack_b8) {
    return;
  }
code_r0x000895fc:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x89920  size=952 */
xunknown8 FUN_00089920(float4 param_1,float4 *param_2,float4 *param_3,int4 param_4)

{
  xunknown8 xVar1;
  float4 *pfVar2;
  float4 fVar3;
  float4 fVar4;
  float4 fVar5;
  float4 fVar6;
  float4 fVar7;
  float4 fVar8;
  float4 fVar9;
  float4 fVar10;
  float4 fVar11;
  float4 fVar12;
  float4 fVar13;
  float4 fVar14;
  float4 fVar15;
  float4 fVar16;
  float4 fVar17;
  float4 fVar18;
  float4 fVar19;
  float4 fVar20;
  float4 fVar21;
  float4 fVar22;
  
  xVar1 = 0;
  if ((iRam0000000000162c38 != 0) && (iRam0000000000162c40 != (uint4 *)0x0)) {
    if (0xf < *iRam0000000000162c40) {
      return 0;
    }
    pfVar2 = (float4 *)(iRam0000000000162c38 + (uint8)*iRam0000000000162c40 * 0xc);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar4 = pfVar2[2];
    fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    if (fVar7 < 0.0001) {
      return 0;
    }
    fVar4 = fVar4 / fVar7;
    if (fVar4 < 0.02) {
      iRam0000000000170cd8 = iRam0000000000170cd8 + 1;
      return 0;
    }
    fVar5 = fVar5 / fVar7;
    fRam0000000000170cec = fVar6 / fVar7;
    fRam0000000000162c60 = 1.0;
    if (fVar4 <= 0.12) {
      fRam0000000000162c60 = (fVar4 + -0.02) / 0.1;
    }
    fVar21 = -fVar5;
    fVar18 = -fRam0000000000170cec;
    fVar22 = -fVar4;
    fVar6 = param_2[2];
    fVar15 = *param_2;
    fVar7 = param_2[1];
    fVar10 = 0.0;
    if (ABS(fVar4) <= 0.95) {
      fVar10 = 1.0;
    }
    fVar19 = 1.0;
    if (ABS(fVar4) <= 0.95) {
      fVar19 = 0.0;
    }
    fVar9 = fRam0000000000170cec * 0.0 - fVar19 * fVar5;
    fVar13 = fVar10 * fVar5 - fVar4 * 0.0;
    fVar10 = fVar4 * fVar19 - fVar10 * fRam0000000000170cec;
    fVar19 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar9 * fVar9);
    fVar10 = fVar10 / fVar19;
    fVar13 = fVar13 / fVar19;
    fVar9 = fVar9 / fVar19;
    fVar17 = fVar5 * fVar13 - fRam0000000000170cec * fVar10;
    fVar19 = (param_1 + param_1) / (float4)param_4;
    fVar16 = fVar4 * fVar10 - fVar5 * fVar9;
    fVar20 = fRam0000000000170cec * fVar9 - fVar4 * fVar13;
    fRam0000000000170ce8 = fVar5;
    fRam0000000000170cf0 = fVar4;
    if ((xRam0000000000162c48 != (code *)0x0) &&
       (fVar3 = (float4)(*xRam0000000000162c48)(0xffffffff),
       (fVar4 - param_2[1]) * (fVar4 - param_2[1]) + (fVar3 - *param_2) * (fVar3 - *param_2) +
       (fVar5 - param_2[2]) * (fVar5 - param_2[2]) < 3600.0)) {
      fVar6 = fVar5;
      fVar7 = fVar4;
      fVar15 = fVar3;
    }
    fVar5 = fVar7 * fVar18 + fVar21 * fVar15 + fVar22 * fVar6;
    fVar11 = fVar5 + 200.0;
    fVar8 = 1.0 / param_1;
    fVar5 = fVar5 + -400.0;
    fRam0000000000170e40 = fVar15;
    fRam0000000000170e44 = fVar7;
    param_3[0xf] = 1.0;
    xVar1 = 1;
    fVar14 = fVar11 - fVar5;
    fVar12 = fVar10 * 0.0 + 0.0;
    fVar4 = -(fVar19 * (float4)(int4)((fVar13 * fVar7 + fVar10 * fVar15 + fVar9 * fVar6) / fVar19))
            / param_1;
    fVar3 = 2.0 / fVar14;
    param_1 = -(fVar19 * (float4)(int4)((fVar16 * fVar7 + fVar20 * fVar15 + fVar17 * fVar6) / fVar19
                                       )) / param_1;
    fVar14 = -(fVar11 + fVar5) / fVar14;
    fVar5 = fVar12 + fVar20 * 0.0;
    fVar6 = fVar13 * 0.0 + 0.0;
    fVar15 = fVar9 * 0.0 + 0.0;
    fVar7 = fVar6 + fVar16 * 0.0;
    fVar19 = fVar15 + fVar17 * 0.0;
    *param_3 = fVar10 * fVar8 + 0.0 + fVar20 * 0.0 + fVar21 * 0.0 + fVar4 * 0.0;
    param_3[1] = fVar12 + fVar20 * fVar8 + fVar21 * 0.0 + param_1 * 0.0;
    param_3[2] = fVar5 + fVar21 * fVar3 + fVar14 * 0.0;
    param_3[3] = fVar5 + fVar21 * 0.0 + 0.0;
    fVar5 = fVar8 * 0.0 + 0.0 + 0.0;
    param_3[4] = fVar13 * fVar8 + 0.0 + fVar16 * 0.0 + fVar18 * 0.0 + fVar4 * 0.0;
    param_3[5] = fVar6 + fVar16 * fVar8 + fVar18 * 0.0 + param_1 * 0.0;
    param_3[6] = fVar7 + fVar18 * fVar3 + fVar14 * 0.0;
    param_3[7] = fVar7 + fVar18 * 0.0 + 0.0;
    param_3[8] = fVar9 * fVar8 + 0.0 + fVar17 * 0.0 + fVar22 * 0.0 + fVar4 * 0.0;
    param_3[9] = fVar15 + fVar17 * fVar8 + fVar22 * 0.0 + param_1 * 0.0;
    param_3[10] = fVar19 + fVar22 * fVar3 + fVar14 * 0.0;
    param_3[0xb] = fVar19 + fVar22 * 0.0 + 0.0;
    param_3[0xc] = fVar4 + fVar5;
    param_3[0xd] = param_1 + fVar5;
    param_3[0xe] = fVar14 + fVar3 * 0.0 + 0.0;
  }
  return xVar1;
}

/* 0x89cd8  size=208 */
void FUN_00089cd8(float4 *param_1,int8 param_2,int8 param_3)

{
  float4 *pfVar1;
  float4 *pfVar2;
  int8 iVar3;
  
  pfVar1 = (float4 *)(param_3 + 8);
  iVar3 = 4;
  pfVar2 = (float4 *)(param_2 + 8);
  do {
    iVar3 = iVar3 + -1;
    pfVar1[-2] = pfVar2[-2] * *param_1 + 0.0 + pfVar2[-1] * param_1[4] + *pfVar2 * param_1[8] +
                 pfVar2[1] * param_1[0xc];
    pfVar1[-1] = pfVar2[-2] * param_1[1] + 0.0 + pfVar2[-1] * param_1[5] + *pfVar2 * param_1[9] +
                 pfVar2[1] * param_1[0xd];
    *pfVar1 = pfVar2[-2] * param_1[2] + 0.0 + pfVar2[-1] * param_1[6] + *pfVar2 * param_1[10] +
              pfVar2[1] * param_1[0xe];
    pfVar1[1] = pfVar2[-2] * param_1[3] + 0.0 + pfVar2[-1] * param_1[7] + *pfVar2 * param_1[0xb] +
                pfVar2[1] * param_1[0xf];
    pfVar1 = pfVar1 + 4;
    pfVar2 = pfVar2 + 4;
  } while (iVar3 != 0);
  return;
}

/* 0x89da8  size=168 */
xunknown4 FUN_00089da8(uint4 param_1)

{
  uint4 uVar1;
  uint8 uVar2;
  uint4 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  int8 *piVar7;
  uint8 uVar8;
  
  if (uRam0000000000162810 != 0) {
    uVar4 = uRam0000000000162810 - 1;
    uVar5 = (uint8)param_1;
    uVar3 = (uint4)uRam0000000000162810;
    if ((uRam0000000000162810 & uVar4) == 0) {
      uVar6 = (uint8)(uVar3 - 1 & param_1);
    }
    else {
      uVar6 = uVar5;
      if (uRam0000000000162810 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_1 / uVar3;
        }
        uVar6 = (uint8)(param_1 - uVar1 * uVar3);
      }
    }
    piVar7 = *(int8 **)(iRam0000000000162808 + uVar6 * 8);
    if (piVar7 != (int8 *)0x0) {
      do {
        while( true ) {
          piVar7 = (int8 *)*piVar7;
          if (piVar7 == (int8 *)0x0) {
            return 0;
          }
          uVar8 = piVar7[1];
          if (uVar8 != uVar5) break;
          if (*(uint4 *)(piVar7 + 2) == param_1) {
            return *(xunknown4 *)((int8)piVar7 + 0x14);
          }
        }
        if ((uRam0000000000162810 & uVar4) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (uRam0000000000162810 <= uVar8) {
          uVar2 = 0;
          if (uRam0000000000162810 != 0) {
            uVar2 = uVar8 / uRam0000000000162810;
          }
          uVar8 = uVar8 - uVar2 * uRam0000000000162810;
        }
      } while (uVar8 == uVar6);
    }
  }
  return 0;
}

/* 0x89e50  size=408 */
bool FUN_00089e50(int8 param_1,uint8 param_2)

{
  uint4 uVar1;
  uint8 uVar2;
  uint4 uVar3;
  uint4 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint8 uVar7;
  int8 *piVar8;
  uint8 uVar9;
  
  if (1 < *(uint1 *)(param_1 + 0xc9) - 1) {
    if (*(uint1 *)(param_1 + 0xc9) == 3) {
      if (paxRam0000000000162838 != 0) {
        uVar5 = paxRam0000000000162838 - 1;
        uVar4 = *(uint4 *)(param_1 + 0xcc);
        uVar6 = (uint8)uVar4;
        uVar3 = (uint4)paxRam0000000000162838;
        if ((paxRam0000000000162838 & uVar5) == 0) {
          uVar7 = (uint8)(uVar3 - 1 & uVar4);
        }
        else {
          uVar7 = uVar6;
          if (paxRam0000000000162838 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar4 / uVar3;
            }
            uVar7 = (uint8)(uVar4 - uVar1 * uVar3);
          }
        }
        piVar8 = *(int8 **)(iRam0000000000162830 + uVar7 * 8);
        if ((piVar8 != (int8 *)0x0) && (piVar8 = (int8 *)*piVar8, piVar8 != (int8 *)0x0)) {
          do {
            uVar9 = piVar8[1];
            if (uVar9 == uVar6) {
              if (*(uint4 *)(piVar8 + 2) == uVar4) {
                uVar4 = *(uint4 *)((int8)piVar8 + 0x24);
code_r0x00089fd4:
                return uRam0000000000170ce4 < uVar4;
              }
            }
            else {
              if ((paxRam0000000000162838 & uVar5) == 0) {
                uVar9 = uVar9 & uVar5;
              }
              else if (paxRam0000000000162838 <= uVar9) {
                uVar2 = 0;
                if (paxRam0000000000162838 != 0) {
                  uVar2 = uVar9 / paxRam0000000000162838;
                }
                uVar9 = uVar9 - uVar2 * paxRam0000000000162838;
              }
              if (uVar9 != uVar7) {
                return false;
              }
            }
            piVar8 = (int8 *)*piVar8;
            if (piVar8 == (int8 *)0x0) {
              return false;
            }
          } while( true );
        }
      }
    }
    else if (uRam00000000001627a8 != 0) {
      uVar5 = uRam00000000001627a8 - 1;
      if ((uRam00000000001627a8 & uVar5) == 0) {
        uVar6 = uVar5 & param_2;
      }
      else {
        uVar6 = param_2;
        if (uRam00000000001627a8 <= param_2) {
          uVar6 = 0;
          if (uRam00000000001627a8 != 0) {
            uVar6 = param_2 / uRam00000000001627a8;
          }
          uVar6 = param_2 - uVar6 * uRam00000000001627a8;
        }
      }
      piVar8 = *(int8 **)(iRam00000000001627a0 + uVar6 * 8);
      if ((piVar8 != (int8 *)0x0) && (piVar8 = (int8 *)*piVar8, piVar8 != (int8 *)0x0)) {
        do {
          uVar7 = piVar8[1];
          if (uVar7 == param_2) {
            if (piVar8[2] == param_2) {
              uVar4 = *(uint4 *)(piVar8 + 3);
              goto code_r0x00089fd4;
            }
          }
          else {
            if ((uRam00000000001627a8 & uVar5) == 0) {
              uVar7 = uVar7 & uVar5;
            }
            else if (uRam00000000001627a8 <= uVar7) {
              uVar9 = 0;
              if (uRam00000000001627a8 != 0) {
                uVar9 = uVar7 / uRam00000000001627a8;
              }
              uVar7 = uVar7 - uVar9 * uRam00000000001627a8;
            }
            if (uVar7 != uVar6) {
              return false;
            }
          }
          piVar8 = (int8 *)*piVar8;
          if (piVar8 == (int8 *)0x0) {
            return false;
          }
        } while( true );
      }
    }
  }
  return false;
}

/* 0x89fe8  size=48 */
void FUN_00089fe8(uint8 *param_1,uint8 *param_2)

{
  bool bVar1;
  xunknown8 *pxVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  int8 iVar7;
  uint8 uVar8;
  uint8 uVar9;
  int8 iVar10;
  uint8 *puVar11;
  uint8 *puVar12;
  int8 iVar13;
  int8 iVar14;
  uint8 *puVar15;
  uint8 *puVar16;
  uint8 uVar17;
  uint8 *puVar18;
  uint8 uVar19;
  uint8 uVar20;
  uint8 uVar21;
  int8 iVar22;
  uint8 *puVar23;
  uint8 *puVar24;
  uint8 uVar25;
  uint8 uVar26;
  uint8 uVar27;
  uint8 uStack_80;
  uint8 uStack_78;
  uint8 uStack_70;
  
  iVar22 = 0;
  if (param_2 != param_1) {
    iVar22 = LZCOUNT(((int8)param_2 - (int8)param_1 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  iVar14 = tpidr_el0;
  bVar1 = true;
  iVar7 = *(int8 *)(iVar14 + 0x28);
code_r0x0008ad98:
  puVar18 = param_2 + -3;
  puVar23 = param_2 + -6;
  puVar24 = param_2 + -9;
  puVar12 = param_1;
code_r0x0008ada8:
  do {
    param_1 = puVar12;
    uVar9 = (int8)param_2 - (int8)param_1;
    uVar8 = ((int8)uVar9 >> 3) * -0x5555555555555555;
    if (uVar8 - 2 != 0 && 1 < (int8)uVar8) {
      if (uVar8 != 3) {
        if (uVar8 != 4) {
          if (uVar8 != 5) goto code_r0x0008adf0;
          FUN_0008c09c(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
          puVar12 = param_2 + -3;
          if (*puVar12 < param_1[9]) {
            uVar17 = param_1[10];
            uVar25 = param_1[9];
            uVar8 = param_1[0xb];
            uVar19 = *puVar12;
            uVar9 = param_2[-1];
            param_1[10] = param_2[-2];
            param_1[9] = uVar19;
            param_1[0xb] = uVar9;
            param_2[-1] = uVar8;
            param_2[-2] = uVar17;
            *puVar12 = uVar25;
            if (param_1[9] < param_1[6]) {
              uVar25 = param_1[7];
              uVar9 = param_1[6];
              uVar8 = param_1[8];
              param_1[7] = param_1[10];
              param_1[6] = param_1[9];
              param_1[8] = param_1[0xb];
              param_1[10] = uVar25;
              param_1[9] = uVar9;
              param_1[0xb] = uVar8;
              if (param_1[6] < param_1[3]) {
                uVar25 = param_1[4];
                uVar9 = param_1[3];
                uVar8 = param_1[5];
                param_1[4] = param_1[7];
                param_1[3] = param_1[6];
                param_1[5] = param_1[8];
                param_1[7] = uVar25;
                param_1[6] = uVar9;
                param_1[8] = uVar8;
                if (param_1[3] < *param_1) {
                  uVar8 = param_1[2];
                  uVar25 = param_1[1];
                  uVar9 = *param_1;
                  param_1[1] = param_1[4];
                  *param_1 = param_1[3];
                  param_1[2] = param_1[5];
                  param_1[4] = uVar25;
                  param_1[3] = uVar9;
                  param_1[5] = uVar8;
                }
              }
            }
          }
          goto code_r0x0008bc30;
        }
        if (*(int8 *)(iVar14 + 0x28) == iVar7) {
          puVar12 = param_1 + 3;
          puVar23 = param_1 + 6;
          iVar22 = tpidr_el0;
          iVar14 = *(int8 *)(iVar22 + 0x28);
          uVar8 = *puVar12;
          if (uVar8 < *param_1) {
            if (*puVar23 < uVar8) {
              uVar25 = param_1[1];
              uVar9 = *param_1;
              uVar8 = param_1[2];
              param_1[1] = param_1[7];
              *param_1 = *puVar23;
              param_1[2] = param_1[8];
            }
            else {
              uVar25 = param_1[1];
              uVar9 = *param_1;
              uVar8 = param_1[2];
              param_1[1] = param_1[4];
              *param_1 = *puVar12;
              param_1[2] = param_1[5];
              param_1[4] = uVar25;
              *puVar12 = uVar9;
              param_1[5] = uVar8;
              if (*puVar12 <= *puVar23) goto code_r0x0008c19c;
              uVar25 = param_1[4];
              uVar9 = *puVar12;
              uVar8 = param_1[5];
              param_1[4] = param_1[7];
              *puVar12 = *puVar23;
              param_1[5] = param_1[8];
            }
            param_1[7] = uVar25;
            *puVar23 = uVar9;
            param_1[8] = uVar8;
          }
          else if (*puVar23 < uVar8) {
            uVar25 = param_1[4];
            uVar9 = *puVar12;
            uVar8 = param_1[5];
            param_1[4] = param_1[7];
            *puVar12 = *puVar23;
            param_1[5] = param_1[8];
            param_1[7] = uVar25;
            *puVar23 = uVar9;
            param_1[8] = uVar8;
            if (*puVar12 < *param_1) {
              uVar25 = param_1[1];
              uVar9 = *param_1;
              uVar8 = param_1[2];
              param_1[1] = param_1[4];
              *param_1 = *puVar12;
              param_1[2] = param_1[5];
              param_1[4] = uVar25;
              *puVar12 = uVar9;
              param_1[5] = uVar8;
            }
          }
code_r0x0008c19c:
          if (*puVar18 < *puVar23) {
            uVar25 = *puVar18;
            uVar8 = param_2[-1];
            uVar19 = param_1[7];
            uVar17 = *puVar23;
            uVar9 = param_1[8];
            param_1[7] = param_2[-2];
            *puVar23 = uVar25;
            param_1[8] = uVar8;
            param_2[-2] = uVar19;
            *puVar18 = uVar17;
            param_2[-1] = uVar9;
            if (*puVar23 < *puVar12) {
              uVar25 = param_1[4];
              uVar9 = *puVar12;
              uVar8 = param_1[5];
              param_1[4] = param_1[7];
              *puVar12 = *puVar23;
              param_1[5] = param_1[8];
              param_1[7] = uVar25;
              *puVar23 = uVar9;
              param_1[8] = uVar8;
              if (*puVar12 < *param_1) {
                uVar25 = param_1[1];
                uVar9 = *param_1;
                uVar8 = param_1[2];
                param_1[1] = param_1[4];
                *param_1 = *puVar12;
                param_1[2] = param_1[5];
                param_1[4] = uVar25;
                *puVar12 = uVar9;
                param_1[5] = uVar8;
              }
            }
          }
          if (*(int8 *)(iVar22 + 0x28) == iVar14) {
            return;
          }
        }
        goto code_r0x000c9620;
      }
      puVar12 = param_1 + 3;
      uVar8 = *puVar12;
      puVar18 = param_2 + -3;
      if (uVar8 < *param_1) {
        if (*puVar18 < uVar8) goto code_r0x0008b768;
        uVar25 = param_1[1];
        uVar9 = *param_1;
        uVar8 = param_1[2];
        param_1[1] = param_1[4];
        *param_1 = *puVar12;
        param_1[2] = param_1[5];
        param_1[4] = uVar25;
        *puVar12 = uVar9;
        param_1[5] = uVar8;
        if (*puVar18 < param_1[3]) {
          uVar17 = param_1[4];
          uVar25 = *puVar12;
          uVar8 = param_1[5];
          uVar19 = *puVar18;
          uVar9 = param_2[-1];
          param_1[4] = param_2[-2];
          *puVar12 = uVar19;
          param_1[5] = uVar9;
          param_2[-1] = uVar8;
code_r0x0008b794:
          param_2[-2] = uVar17;
          param_2[-3] = uVar25;
        }
      }
      else if (*puVar18 < uVar8) {
        uVar17 = param_1[4];
        uVar25 = *puVar12;
        uVar8 = param_1[5];
        uVar19 = *puVar18;
        uVar9 = param_2[-1];
        param_1[4] = param_2[-2];
        *puVar12 = uVar19;
        param_1[5] = uVar9;
        param_2[-1] = uVar8;
        param_2[-2] = uVar17;
        *puVar18 = uVar25;
        if (param_1[3] < *param_1) {
          uVar8 = param_1[2];
          uVar25 = param_1[1];
          uVar9 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = *puVar12;
          param_1[2] = param_1[5];
          param_1[4] = uVar25;
          *puVar12 = uVar9;
          param_1[5] = uVar8;
        }
      }
      goto code_r0x0008bc30;
    }
    if (uVar8 < 2) goto code_r0x0008bc30;
    if (uVar8 == 2) {
      if (param_2[-3] < *param_1) {
code_r0x0008b768:
        uVar8 = param_1[2];
        uVar17 = param_1[1];
        uVar25 = *param_1;
        uVar19 = param_2[-2];
        uVar9 = param_2[-3];
        param_1[2] = param_2[-1];
        param_1[1] = uVar19;
        *param_1 = uVar9;
        param_2[-1] = uVar8;
        goto code_r0x0008b794;
      }
      goto code_r0x0008bc30;
    }
code_r0x0008adf0:
    if ((int8)uVar9 < 0x240) {
      puVar12 = param_1 + 3;
      if (bVar1 == false) {
        if (param_1 != param_2 && puVar12 != param_2) {
          do {
            puVar18 = puVar12;
            uVar8 = param_1[3];
            if (uVar8 < *param_1) {
              uVar25 = param_1[5];
              uVar9 = param_1[4];
              puVar12 = puVar18;
              do {
                puVar23 = puVar12;
                puVar23[1] = puVar23[-2];
                *puVar23 = puVar23[-3];
                puVar23[2] = puVar23[-1];
                puVar12 = puVar23 + -3;
              } while (uVar8 < puVar23[-6]);
              puVar23[-3] = uVar8;
              puVar23[-1] = uVar25;
              puVar23[-2] = uVar9;
            }
            puVar12 = puVar18 + 3;
            param_1 = puVar18;
          } while (puVar18 + 3 != param_2);
        }
        goto code_r0x0008bc30;
      }
      if (param_1 == param_2 || puVar12 == param_2) goto code_r0x0008bc30;
      iVar22 = 0;
      puVar18 = param_1;
      break;
    }
    if (iVar22 == 0) {
      if (param_1 == param_2) goto code_r0x0008bc30;
      uVar17 = uVar8 - 2 >> 1;
      uVar25 = uVar17;
      goto code_r0x0008b8ac;
    }
    puVar12 = param_1 + (uVar8 >> 1) * 3;
    uVar8 = *puVar18;
    if (uVar9 < 0xc01) {
      uVar9 = *param_1;
      if (uVar9 < *puVar12) {
        if (uVar8 < uVar9) {
          uStack_70 = puVar12[2];
          uStack_78 = puVar12[1];
          uStack_80 = *puVar12;
          uVar9 = param_2[-2];
          uVar8 = *puVar18;
          puVar12[2] = param_2[-1];
          puVar12[1] = uVar9;
          *puVar12 = uVar8;
        }
        else {
          uVar8 = puVar12[2];
          uVar17 = puVar12[1];
          uVar9 = *puVar12;
          uVar19 = param_1[1];
          uVar25 = *param_1;
          puVar12[2] = param_1[2];
          puVar12[1] = uVar19;
          *puVar12 = uVar25;
          param_1[2] = uVar8;
          param_1[1] = uVar17;
          *param_1 = uVar9;
          if (*param_1 <= *puVar18) goto code_r0x0008b410;
          uStack_70 = param_1[2];
          uStack_78 = param_1[1];
          uStack_80 = *param_1;
          uVar9 = param_2[-2];
          uVar8 = *puVar18;
          param_1[2] = param_2[-1];
          param_1[1] = uVar9;
          *param_1 = uVar8;
        }
        param_2[-1] = uStack_70;
        param_2[-2] = uStack_78;
        *puVar18 = uStack_80;
      }
      else if (uVar8 < uVar9) {
        uVar8 = param_1[2];
        uVar17 = param_1[1];
        uVar9 = *param_1;
        uVar19 = param_2[-2];
        uVar25 = *puVar18;
        param_1[2] = param_2[-1];
        param_1[1] = uVar19;
        *param_1 = uVar25;
        param_2[-1] = uVar8;
        param_2[-2] = uVar17;
        *puVar18 = uVar9;
        if (*param_1 < *puVar12) {
          uVar8 = puVar12[2];
          uVar17 = puVar12[1];
          uVar9 = *puVar12;
          uVar19 = param_1[1];
          uVar25 = *param_1;
          puVar12[2] = param_1[2];
          puVar12[1] = uVar19;
          *puVar12 = uVar25;
          param_1[2] = uVar8;
          param_1[1] = uVar17;
          *param_1 = uVar9;
        }
      }
    }
    else {
      uVar9 = *puVar12;
      if (uVar9 < *param_1) {
        if (uVar8 < uVar9) {
          uStack_70 = param_1[2];
          uStack_78 = param_1[1];
          uStack_80 = *param_1;
          uVar9 = param_2[-2];
          uVar8 = *puVar18;
          param_1[2] = param_2[-1];
          param_1[1] = uVar9;
          *param_1 = uVar8;
        }
        else {
          uVar8 = param_1[2];
          uVar17 = param_1[1];
          uVar9 = *param_1;
          uVar19 = puVar12[1];
          uVar25 = *puVar12;
          param_1[2] = puVar12[2];
          param_1[1] = uVar19;
          *param_1 = uVar25;
          puVar12[2] = uVar8;
          puVar12[1] = uVar17;
          *puVar12 = uVar9;
          if (*puVar12 <= *puVar18) goto code_r0x0008aff4;
          uStack_70 = puVar12[2];
          uStack_78 = puVar12[1];
          uStack_80 = *puVar12;
          uVar9 = param_2[-2];
          uVar8 = *puVar18;
          puVar12[2] = param_2[-1];
          puVar12[1] = uVar9;
          *puVar12 = uVar8;
        }
        param_2[-1] = uStack_70;
        param_2[-2] = uStack_78;
        *puVar18 = uStack_80;
      }
      else if (uVar8 < uVar9) {
        uVar8 = puVar12[2];
        uVar17 = puVar12[1];
        uVar9 = *puVar12;
        uVar19 = param_2[-2];
        uVar25 = *puVar18;
        puVar12[2] = param_2[-1];
        puVar12[1] = uVar19;
        *puVar12 = uVar25;
        param_2[-1] = uVar8;
        param_2[-2] = uVar17;
        *puVar18 = uVar9;
        if (*puVar12 < *param_1) {
          uVar8 = param_1[2];
          uVar17 = param_1[1];
          uVar9 = *param_1;
          uVar19 = puVar12[1];
          uVar25 = *puVar12;
          param_1[2] = puVar12[2];
          param_1[1] = uVar19;
          *param_1 = uVar25;
          puVar12[2] = uVar8;
          puVar12[1] = uVar17;
          *puVar12 = uVar9;
        }
      }
code_r0x0008aff4:
      puVar15 = param_1 + 3;
      puVar11 = puVar12 + -3;
      uVar8 = *puVar11;
      if (uVar8 < *puVar15) {
        if (*puVar23 < uVar8) {
          uVar19 = param_1[4];
          uVar25 = *puVar15;
          uVar8 = param_1[5];
          uVar17 = *puVar23;
          uVar9 = param_2[-4];
          param_1[4] = param_2[-5];
          *puVar15 = uVar17;
          param_1[5] = uVar9;
          param_2[-4] = uVar8;
        }
        else {
          uVar17 = param_1[4];
          uVar25 = *puVar15;
          uVar8 = param_1[5];
          uVar19 = *puVar11;
          uVar9 = puVar12[-1];
          param_1[4] = puVar12[-2];
          *puVar15 = uVar19;
          param_1[5] = uVar9;
          puVar12[-1] = uVar8;
          puVar12[-2] = uVar17;
          *puVar11 = uVar25;
          if (*puVar11 <= *puVar23) goto code_r0x0008b190;
          uVar8 = puVar12[-1];
          uVar19 = puVar12[-2];
          uVar25 = *puVar11;
          uVar17 = param_2[-5];
          uVar9 = *puVar23;
          puVar12[-1] = param_2[-4];
          puVar12[-2] = uVar17;
          *puVar11 = uVar9;
          param_2[-4] = uVar8;
        }
        param_2[-5] = uVar19;
        *puVar23 = uVar25;
      }
      else if (*puVar23 < uVar8) {
        uVar8 = puVar12[-1];
        uVar17 = puVar12[-2];
        uVar9 = *puVar11;
        uVar19 = param_2[-5];
        uVar25 = *puVar23;
        puVar12[-1] = param_2[-4];
        puVar12[-2] = uVar19;
        *puVar11 = uVar25;
        param_2[-4] = uVar8;
        param_2[-5] = uVar17;
        *puVar23 = uVar9;
        if (*puVar11 < *puVar15) {
          uVar17 = param_1[4];
          uVar25 = *puVar15;
          uVar8 = param_1[5];
          uVar19 = *puVar11;
          uVar9 = puVar12[-1];
          param_1[4] = puVar12[-2];
          *puVar15 = uVar19;
          param_1[5] = uVar9;
          puVar12[-1] = uVar8;
          puVar12[-2] = uVar17;
          *puVar11 = uVar25;
        }
      }
code_r0x0008b190:
      puVar16 = param_1 + 6;
      puVar15 = puVar12 + 3;
      uVar8 = *puVar15;
      if (uVar8 < *puVar16) {
        if (*puVar24 < uVar8) {
          uVar19 = param_1[7];
          uVar25 = *puVar16;
          uVar8 = param_1[8];
          uVar17 = *puVar24;
          uVar9 = param_2[-7];
          param_1[7] = param_2[-8];
          *puVar16 = uVar17;
          param_1[8] = uVar9;
          param_2[-7] = uVar8;
        }
        else {
          uVar17 = param_1[7];
          uVar25 = *puVar16;
          uVar8 = param_1[8];
          uVar19 = *puVar15;
          uVar9 = puVar12[5];
          param_1[7] = puVar12[4];
          *puVar16 = uVar19;
          param_1[8] = uVar9;
          puVar12[5] = uVar8;
          puVar12[4] = uVar17;
          *puVar15 = uVar25;
          if (*puVar15 <= *puVar24) goto code_r0x0008b2b8;
          uVar8 = puVar12[5];
          uVar19 = puVar12[4];
          uVar25 = *puVar15;
          uVar17 = param_2[-8];
          uVar9 = *puVar24;
          puVar12[5] = param_2[-7];
          puVar12[4] = uVar17;
          *puVar15 = uVar9;
          param_2[-7] = uVar8;
        }
        param_2[-8] = uVar19;
        *puVar24 = uVar25;
      }
      else if (*puVar24 < uVar8) {
        uVar8 = puVar12[5];
        uVar17 = puVar12[4];
        uVar9 = *puVar15;
        uVar19 = param_2[-8];
        uVar25 = *puVar24;
        puVar12[5] = param_2[-7];
        puVar12[4] = uVar19;
        *puVar15 = uVar25;
        param_2[-7] = uVar8;
        param_2[-8] = uVar17;
        *puVar24 = uVar9;
        if (*puVar15 < *puVar16) {
          uVar17 = param_1[7];
          uVar25 = *puVar16;
          uVar8 = param_1[8];
          uVar19 = *puVar15;
          uVar9 = puVar12[5];
          param_1[7] = puVar12[4];
          *puVar16 = uVar19;
          param_1[8] = uVar9;
          puVar12[5] = uVar8;
          puVar12[4] = uVar17;
          *puVar15 = uVar25;
        }
      }
code_r0x0008b2b8:
      uVar8 = *puVar12;
      if (uVar8 < puVar12[-3]) {
        if (puVar12[3] < uVar8) {
          uStack_70 = puVar12[-1];
          uStack_78 = puVar12[-2];
          uStack_80 = *puVar11;
          puVar12[-2] = puVar12[4];
          *puVar11 = *puVar15;
          puVar12[-1] = puVar12[5];
        }
        else {
          uVar8 = puVar12[-1];
          uVar25 = puVar12[-2];
          uVar9 = *puVar11;
          puVar12[-2] = puVar12[1];
          *puVar11 = *puVar12;
          puVar12[-1] = puVar12[2];
          puVar12[1] = uVar25;
          *puVar12 = uVar9;
          puVar12[2] = uVar8;
          if (*puVar12 <= puVar12[3]) goto code_r0x0008b3e0;
          uStack_70 = puVar12[2];
          uStack_78 = puVar12[1];
          uStack_80 = *puVar12;
          puVar12[1] = puVar12[4];
          *puVar12 = *puVar15;
          puVar12[2] = puVar12[5];
        }
        puVar12[5] = uStack_70;
        puVar12[4] = uStack_78;
        *puVar15 = uStack_80;
      }
      else if (puVar12[3] < uVar8) {
        uVar8 = puVar12[2];
        uVar25 = puVar12[1];
        uVar9 = *puVar12;
        puVar12[1] = puVar12[4];
        *puVar12 = *puVar15;
        puVar12[2] = puVar12[5];
        puVar12[5] = uVar8;
        puVar12[4] = uVar25;
        *puVar15 = uVar9;
        if (*puVar12 < puVar12[-3]) {
          uVar8 = puVar12[-1];
          uVar25 = puVar12[-2];
          uVar9 = *puVar11;
          puVar12[-2] = puVar12[1];
          *puVar11 = *puVar12;
          puVar12[-1] = puVar12[2];
          puVar12[2] = uVar8;
          puVar12[1] = uVar25;
          *puVar12 = uVar9;
        }
      }
code_r0x0008b3e0:
      uVar8 = param_1[2];
      uVar17 = param_1[1];
      uVar9 = *param_1;
      uVar19 = puVar12[1];
      uVar25 = *puVar12;
      param_1[2] = puVar12[2];
      param_1[1] = uVar19;
      *param_1 = uVar25;
      puVar12[2] = uVar8;
      puVar12[1] = uVar17;
      *puVar12 = uVar9;
    }
code_r0x0008b410:
    uVar8 = *param_1;
    iVar22 = iVar22 + -1;
    if ((bVar1) || (param_1[-3] < uVar8)) {
      uVar25 = param_1[2];
      uVar9 = param_1[1];
      iVar10 = 0;
      do {
        iVar13 = iVar10 + 0x18;
        iVar3 = iVar10 + 0x18;
        iVar10 = iVar13;
      } while (*(uint8 *)((int8)param_1 + iVar3) < uVar8);
      puVar11 = (uint8 *)((int8)param_1 + iVar13);
      puVar15 = param_2;
      if (iVar13 == 0x18) {
        do {
          if (puVar15 <= puVar11) break;
          puVar15 = puVar15 + -3;
        } while (uVar8 <= *puVar15);
      }
      else {
        do {
          puVar15 = puVar15 + -3;
        } while (uVar8 <= *puVar15);
      }
      puVar12 = puVar11;
      if (puVar11 < puVar15) {
        puVar16 = puVar15;
        do {
          uVar17 = puVar12[2];
          uVar21 = puVar12[1];
          uVar19 = *puVar12;
          uVar4 = puVar16[1];
          uVar26 = *puVar16;
          puVar12[2] = puVar16[2];
          puVar12[1] = uVar4;
          *puVar12 = uVar26;
          puVar16[2] = uVar17;
          puVar16[1] = uVar21;
          *puVar16 = uVar19;
          do {
            puVar12 = puVar12 + 3;
          } while (*puVar12 < uVar8);
          do {
            puVar16 = puVar16 + -3;
          } while (uVar8 <= *puVar16);
        } while (puVar12 < puVar16);
      }
      puVar16 = puVar12 + -3;
      if (param_1 != puVar16) {
        uVar19 = puVar12[-2];
        uVar17 = *puVar16;
        param_1[2] = puVar12[-1];
        param_1[1] = uVar19;
        *param_1 = uVar17;
      }
      puVar12[-3] = uVar8;
      puVar12[-1] = uVar25;
      puVar12[-2] = uVar9;
      if (puVar15 <= puVar11) {
        uVar8 = FUN_0008bc68(param_1,puVar16);
        uVar9 = FUN_0008bc68(puVar12,param_2);
        if ((uVar9 & 1) != 0) goto code_r0x0008b638;
        if ((uVar8 & 1) != 0) goto code_r0x0008ada8;
      }
      FUN_0008ad58(param_1,puVar16,iVar22,bVar1);
      bVar1 = false;
      goto code_r0x0008ada8;
    }
    uVar25 = param_1[2];
    uVar9 = param_1[1];
    puVar12 = param_1;
    if (uVar8 < param_2[-3]) {
      do {
        puVar12 = puVar12 + 3;
      } while (*puVar12 <= uVar8);
    }
    else {
      do {
        puVar12 = puVar12 + 3;
        if (param_2 <= puVar12) break;
      } while (*puVar12 <= uVar8);
    }
    puVar11 = param_2;
    if (puVar12 < param_2) {
      do {
        puVar11 = puVar11 + -3;
      } while (uVar8 < *puVar11);
    }
    while (puVar12 < puVar11) {
      uVar17 = puVar12[2];
      uVar21 = puVar12[1];
      uVar19 = *puVar12;
      uVar4 = puVar11[1];
      uVar26 = *puVar11;
      puVar12[2] = puVar11[2];
      puVar12[1] = uVar4;
      *puVar12 = uVar26;
      puVar11[2] = uVar17;
      puVar11[1] = uVar21;
      *puVar11 = uVar19;
      do {
        puVar12 = puVar12 + 3;
      } while (*puVar12 <= uVar8);
      do {
        puVar11 = puVar11 + -3;
      } while (uVar8 < *puVar11);
    }
    if (param_1 != puVar12 + -3) {
      uVar19 = puVar12[-2];
      uVar17 = puVar12[-3];
      param_1[2] = puVar12[-1];
      param_1[1] = uVar19;
      *param_1 = uVar17;
    }
    puVar12[-3] = uVar8;
    bVar1 = false;
    puVar12[-1] = uVar25;
    puVar12[-2] = uVar9;
  } while( true );
  do {
    puVar23 = puVar12;
    uVar8 = puVar18[3];
    if (uVar8 < *puVar18) {
      uVar25 = puVar18[5];
      uVar9 = puVar18[4];
      iVar10 = iVar22;
      do {
        iVar13 = iVar10;
        pxVar2 = (xunknown8 *)((int8)param_1 + iVar13);
        pxVar2[4] = pxVar2[1];
        pxVar2[3] = *pxVar2;
        pxVar2[5] = pxVar2[2];
        if (iVar13 == 0) {
          puVar12 = param_1;
          goto code_r0x0008b808;
        }
        iVar10 = iVar13 + -0x18;
      } while (uVar8 < (uint8)pxVar2[-3]);
      puVar12 = (uint8 *)((int8)param_1 + iVar13);
code_r0x0008b808:
      *puVar12 = uVar8;
      puVar12[2] = uVar25;
      puVar12[1] = uVar9;
    }
    puVar12 = puVar23 + 3;
    iVar22 = iVar22 + 0x18;
    puVar18 = puVar23;
  } while (puVar12 != param_2);
  goto code_r0x0008bc30;
code_r0x0008b638:
  param_2 = puVar16;
  if ((uVar8 & 1) != 0) goto code_r0x0008bc30;
  goto code_r0x0008ad98;
code_r0x0008b8ac:
  do {
    if (uVar25 <= uVar17) {
      uVar26 = (uVar25 & 0x3fffffffffffffff) << 1 | 1;
      uVar19 = uVar25 * 2 + 2;
      puVar12 = param_1 + uVar26 * 3;
      if ((int8)uVar19 < (int8)uVar8) {
        uVar20 = *puVar12;
        uVar4 = puVar12[3];
        uVar21 = uVar20;
        if (uVar20 <= uVar4) {
          uVar21 = uVar4;
        }
        puVar18 = puVar12 + 3;
        if (uVar4 <= uVar20) {
          uVar19 = uVar26;
          puVar18 = puVar12;
        }
        puVar12 = puVar18;
        uVar26 = uVar19;
      }
      else {
        uVar21 = *puVar12;
      }
      puVar18 = param_1 + uVar25 * 3;
      uVar19 = *puVar18;
      if (uVar19 <= uVar21) {
        uVar4 = puVar18[2];
        uVar21 = puVar18[1];
        do {
          while( true ) {
            puVar23 = puVar12;
            uVar27 = puVar23[1];
            uVar20 = *puVar23;
            puVar18[2] = puVar23[2];
            puVar18[1] = uVar27;
            *puVar18 = uVar20;
            if ((int8)uVar17 < (int8)uVar26) goto code_r0x0008b894;
            uVar20 = uVar26 << 1 | 1;
            puVar24 = param_1 + uVar20 * 3;
            uVar26 = uVar26 * 2 + 2;
            puVar18 = puVar23;
            if ((int8)uVar26 < (int8)uVar8) break;
            puVar12 = puVar24;
            uVar26 = uVar20;
            if (*puVar24 < uVar19) goto code_r0x0008b894;
          }
          uVar5 = *puVar24;
          uVar6 = puVar24[3];
          uVar27 = uVar5;
          if (uVar5 <= uVar6) {
            uVar27 = uVar6;
          }
          puVar12 = puVar24 + 3;
          if (uVar6 <= uVar5) {
            uVar26 = uVar20;
            puVar12 = puVar24;
          }
        } while (uVar19 <= uVar27);
code_r0x0008b894:
        *puVar23 = uVar19;
        puVar23[2] = uVar4;
        puVar23[1] = uVar21;
      }
    }
    bVar1 = 0 < (int8)uVar25;
    uVar25 = uVar25 - 1;
  } while (bVar1);
  iVar22 = (uVar9 >> 3) * -0x5555555555555555;
  do {
    uVar9 = param_1[2];
    uVar17 = param_1[1];
    uVar25 = *param_1;
    uVar8 = 0;
    puVar12 = param_1;
    do {
      uVar26 = uVar8 << 1 | 1;
      uVar19 = uVar8 * 2 + 2;
      puVar18 = puVar12 + uVar8 * 3 + 3;
      if ((int8)uVar19 < iVar22) {
        iVar10 = uVar8 * 3;
        iVar13 = uVar8 * 3;
        uVar8 = uVar19;
        puVar23 = puVar12 + iVar10 + 6;
        if (puVar12[iVar10 + 6] <= puVar12[iVar13 + 3]) {
          uVar8 = uVar26;
          puVar23 = puVar18;
        }
        puVar18 = puVar23;
      }
      else {
        uVar8 = uVar26;
      }
      uVar26 = puVar18[1];
      uVar19 = *puVar18;
      puVar12[2] = puVar18[2];
      puVar12[1] = uVar26;
      *puVar12 = uVar19;
      puVar12 = puVar18;
    } while ((int8)uVar8 <= (int8)(iVar22 - 2U >> 1));
    puVar12 = param_2 + -3;
    if (puVar18 == puVar12) {
      puVar18[2] = uVar9;
      puVar18[1] = uVar17;
      *puVar18 = uVar25;
    }
    else {
      uVar19 = param_2[-2];
      uVar8 = *puVar12;
      puVar18[2] = param_2[-1];
      puVar18[1] = uVar19;
      *puVar18 = uVar8;
      uVar8 = (int8)puVar18 + (0x18 - (int8)param_1);
      param_2[-1] = uVar9;
      param_2[-2] = uVar17;
      *puVar12 = uVar25;
      if (0x18 < (int8)uVar8) {
        uVar9 = *puVar18;
        uVar8 = (uVar8 >> 3) * -0x5555555555555555 - 2 >> 1;
        if (param_1[uVar8 * 3] < uVar9) {
          uVar17 = puVar18[2];
          uVar25 = puVar18[1];
          puVar23 = param_1 + uVar8 * 3;
          do {
            puVar24 = puVar23;
            uVar26 = puVar24[1];
            uVar19 = *puVar24;
            puVar18[2] = puVar24[2];
            puVar18[1] = uVar26;
            *puVar18 = uVar19;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1 >> 1;
            puVar18 = puVar24;
            puVar23 = param_1 + uVar8 * 3;
          } while (param_1[uVar8 * 3] < uVar9);
          *puVar24 = uVar9;
          puVar24[2] = uVar17;
          puVar24[1] = uVar25;
        }
      }
    }
    bVar1 = 2 < iVar22;
    iVar22 = iVar22 + -1;
    param_2 = puVar12;
  } while (bVar1);
code_r0x0008bc30:
  if (*(int8 *)(iVar14 + 0x28) == iVar7) {
    return;
  }
code_r0x000c9620:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8a018  size=176 */
bool FUN_0008a018(uint8 param_1)

{
  uint8 uVar1;
  uint8 uVar2;
  uint8 uVar3;
  int8 *piVar4;
  uint8 uVar5;
  
  if (uRam00000000001627a8 != 0) {
    uVar2 = uRam00000000001627a8 - 1;
    if ((uRam00000000001627a8 & uVar2) == 0) {
      uVar3 = uVar2 & param_1;
    }
    else {
      uVar3 = param_1;
      if (uRam00000000001627a8 <= param_1) {
        uVar3 = 0;
        if (uRam00000000001627a8 != 0) {
          uVar3 = param_1 / uRam00000000001627a8;
        }
        uVar3 = param_1 - uVar3 * uRam00000000001627a8;
      }
    }
    piVar4 = *(int8 **)(iRam00000000001627a0 + uVar3 * 8);
    if (piVar4 != (int8 *)0x0) {
      do {
        while( true ) {
          piVar4 = (int8 *)*piVar4;
          if (piVar4 == (int8 *)0x0) {
            return false;
          }
          uVar5 = piVar4[1];
          if (uVar5 != param_1) break;
          if (piVar4[2] == param_1) {
            return uRam0000000000170ce4 < *(uint4 *)(piVar4 + 3);
          }
        }
        if ((uRam00000000001627a8 & uVar2) == 0) {
          uVar5 = uVar5 & uVar2;
        }
        else if (uRam00000000001627a8 <= uVar5) {
          uVar1 = 0;
          if (uRam00000000001627a8 != 0) {
            uVar1 = uVar5 / uRam00000000001627a8;
          }
          uVar5 = uVar5 - uVar1 * uRam00000000001627a8;
        }
      } while (uVar5 == uVar3);
    }
  }
  return false;
}

/* 0x8a0c8  size=384 */
void FUN_0008a0c8(uint8 param_1)

{
  uint8 uVar1;
  int8 *piVar2;
  int8 iVar3;
  int8 iVar4;
  xunknown8 *pxVar5;
  uint8 uVar6;
  int8 iVar7;
  uint8 uVar8;
  int8 iVar9;
  int8 iVar10;
  xunknown8 xVar11;
  xunknown8 xVar12;
  xunknown8 xVar13;
  xunknown8 xVar14;
  xunknown8 xVar15;
  xunknown8 xVar16;
  xunknown8 xVar17;
  
  iVar7 = paxRam00000000001627d0;
  iVar3 = paxRam00000000001627c8;
  iVar9 = paxRam00000000001627d0 - paxRam00000000001627c8;
  uVar6 = iVar9 >> 8;
  uVar1 = param_1 - uVar6;
  if (uVar6 <= param_1 && uVar1 != 0) {
    if ((uint8)(paxRam00000000001627d8 - paxRam00000000001627d0 >> 8) < uVar1) {
      if (param_1 >> 0x38 == 0) {
        uVar8 = paxRam00000000001627d8 - paxRam00000000001627c8;
        uVar6 = (int8)uVar8 >> 7;
        if ((uint8)((int8)uVar8 >> 7) <= param_1) {
          uVar6 = param_1;
        }
        if (0x7ffffffffffffeff < uVar8) {
          uVar6 = 0xffffffffffffff;
        }
        if (uVar6 >> 0x38 == 0) {
          iVar4 = operator_new_plt(uVar6 * 0x100);
          iVar9 = iVar4 + iVar9;
          iVar4 = iVar4 + uVar6 * 0x100;
          memset(iVar9,0,uVar1 * 0x100);
          paxRam00000000001627d0 = iVar9 + uVar1 * 0x100;
          iVar10 = iVar9;
          if (iVar7 != iVar3) {
            do {
              xVar13 = *(xunknown8 *)(iVar7 + -0xe0);
              xVar12 = *(xunknown8 *)(iVar7 + -200);
              xVar11 = *(xunknown8 *)(iVar7 + -0xd0);
              iVar9 = iVar10 + -0x100;
              xVar15 = *(xunknown8 *)(iVar7 + -0xf8);
              xVar14 = *(xunknown8 *)(iVar7 + -0x100);
              xVar17 = *(xunknown8 *)(iVar7 + -0xe8);
              xVar16 = *(xunknown8 *)(iVar7 + -0xf0);
              *(xunknown8 *)(iVar10 + -0xd8) = *(xunknown8 *)(iVar7 + -0xd8);
              *(xunknown8 *)(iVar10 + -0xe0) = xVar13;
              *(xunknown8 *)(iVar10 + -200) = xVar12;
              *(xunknown8 *)(iVar10 + -0xd0) = xVar11;
              *(xunknown8 *)(iVar10 + -0xf8) = xVar15;
              *(xunknown8 *)(iVar10 + -0x100) = xVar14;
              *(xunknown8 *)(iVar10 + -0xe8) = xVar17;
              *(xunknown8 *)(iVar10 + -0xf0) = xVar16;
              xVar13 = *(xunknown8 *)(iVar7 + -0xa0);
              xVar12 = *(xunknown8 *)(iVar7 + -0x88);
              xVar11 = *(xunknown8 *)(iVar7 + -0x90);
              xVar15 = *(xunknown8 *)(iVar7 + -0xb8);
              xVar14 = *(xunknown8 *)(iVar7 + -0xc0);
              xVar17 = *(xunknown8 *)(iVar7 + -0xa8);
              xVar16 = *(xunknown8 *)(iVar7 + -0xb0);
              *(xunknown8 *)(iVar10 + -0x98) = *(xunknown8 *)(iVar7 + -0x98);
              *(xunknown8 *)(iVar10 + -0xa0) = xVar13;
              *(xunknown8 *)(iVar10 + -0x88) = xVar12;
              *(xunknown8 *)(iVar10 + -0x90) = xVar11;
              *(xunknown8 *)(iVar10 + -0xb8) = xVar15;
              *(xunknown8 *)(iVar10 + -0xc0) = xVar14;
              *(xunknown8 *)(iVar10 + -0xa8) = xVar17;
              *(xunknown8 *)(iVar10 + -0xb0) = xVar16;
              xVar13 = *(xunknown8 *)(iVar7 + -0x60);
              xVar12 = *(xunknown8 *)(iVar7 + -0x48);
              xVar11 = *(xunknown8 *)(iVar7 + -0x50);
              xVar15 = *(xunknown8 *)(iVar7 + -0x78);
              xVar14 = *(xunknown8 *)(iVar7 + -0x80);
              xVar17 = *(xunknown8 *)(iVar7 + -0x68);
              xVar16 = *(xunknown8 *)(iVar7 + -0x70);
              *(xunknown8 *)(iVar10 + -0x58) = *(xunknown8 *)(iVar7 + -0x58);
              *(xunknown8 *)(iVar10 + -0x60) = xVar13;
              *(xunknown8 *)(iVar10 + -0x48) = xVar12;
              *(xunknown8 *)(iVar10 + -0x50) = xVar11;
              *(xunknown8 *)(iVar10 + -0x78) = xVar15;
              *(xunknown8 *)(iVar10 + -0x80) = xVar14;
              *(xunknown8 *)(iVar10 + -0x68) = xVar17;
              *(xunknown8 *)(iVar10 + -0x70) = xVar16;
              pxVar5 = (xunknown8 *)(iVar7 + -0x18);
              xVar13 = *(xunknown8 *)(iVar7 + -0x20);
              xVar12 = *(xunknown8 *)(iVar7 + -8);
              xVar11 = *(xunknown8 *)(iVar7 + -0x10);
              xVar15 = *(xunknown8 *)(iVar7 + -0x38);
              xVar14 = *(xunknown8 *)(iVar7 + -0x40);
              xVar17 = *(xunknown8 *)(iVar7 + -0x28);
              xVar16 = *(xunknown8 *)(iVar7 + -0x30);
              iVar7 = iVar7 + -0x100;
              *(xunknown8 *)(iVar10 + -0x18) = *pxVar5;
              *(xunknown8 *)(iVar10 + -0x20) = xVar13;
              *(xunknown8 *)(iVar10 + -8) = xVar12;
              *(xunknown8 *)(iVar10 + -0x10) = xVar11;
              *(xunknown8 *)(iVar10 + -0x38) = xVar15;
              *(xunknown8 *)(iVar10 + -0x40) = xVar14;
              *(xunknown8 *)(iVar10 + -0x28) = xVar17;
              *(xunknown8 *)(iVar10 + -0x30) = xVar16;
              iVar10 = iVar9;
            } while (iVar7 != iVar3);
          }
          if (iVar3 == 0) {
            paxRam00000000001627c8 = iVar9;
            paxRam00000000001627d8 = iVar4;
            return;
          }
          paxRam00000000001627c8 = iVar9;
          paxRam00000000001627d8 = iVar4;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam00000000000d3c08)(iVar3,uVar8);
          return;
        }
      }
      else {
        FUN_0008ad44();
      }
      pxVar5 = (xunknown8 *)FUN_0005ec14();
      if (pxVar5[3] != 0) {
        piVar2 = (int8 *)pxVar5[2];
        while (piVar2 != (int8 *)0x0) {
          iVar9 = *piVar2;
          operator_delete_plt(piVar2,0x20);
          piVar2 = (int8 *)iVar9;
        }
        pxVar5[2] = 0;
        if (pxVar5[1] != 0) {
          memset(*pxVar5,0,pxVar5[1] << 3);
        }
        pxVar5[3] = 0;
      }
      return;
    }
    memset(paxRam00000000001627d0,0,uVar1 * 0x100);
    paxRam00000000001627d0 = iVar7 + uVar1 * 0x100;
  }
  else {
    if (uVar6 <= param_1) {
      return;
    }
    paxRam00000000001627d0 = paxRam00000000001627c8 + param_1 * 0x100;
  }
  return;
}

/* 0x8a248  size=96 */
void FUN_0008a248(xunknown8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  if (param_1[3] != 0) {
    piVar1 = (int8 *)param_1[2];
    while (piVar1 != (int8 *)0x0) {
      iVar2 = *piVar1;
      operator_delete_plt(piVar1,0x20);
      piVar1 = (int8 *)iVar2;
    }
    param_1[2] = 0;
    if (param_1[1] != 0) {
      memset(*param_1,0,param_1[1] << 3);
    }
    param_1[3] = 0;
  }
  return;
}

/* 0x8a2a8  size=268 */
void FUN_0008a2a8(xunknown8 *param_1,xunknown8 param_2,int8 param_3,int8 *param_4)

{
  xunknown4 *pxVar1;
  xunknown8 *pxVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  uint8 uVar8;
  xunknown4 *pxVar9;
  uint8 uVar10;
  xunknown8 *pxVar11;
  uint8 uVar12;
  uint8 uVar13;
  xunknown4 *pxVar14;
  xunknown8 *pxVar15;
  int8 iVar16;
  uint8 uVar17;
  float4 fVar18;
  xunknown8 xVar19;
  xunknown8 xVar20;
  xunknown8 xVar21;
  xunknown1 axVar22 [16];
  xunknown1 xStack_a9;
  int8 iStack_a8;
  xunknown1 *pxStack_a0;
  code *pcStack_98;
  
  pxVar6 = paxRam0000000000162740;
  pxVar2 = paxRam0000000000162738;
  if (paxRam0000000000162740 < paxRam0000000000162748) {
    xVar21 = *param_1;
    xVar20 = param_1[3];
    xVar19 = param_1[2];
    paxRam0000000000162740[1] = param_1[1];
    *paxRam0000000000162740 = xVar21;
    paxRam0000000000162740[3] = xVar20;
    paxRam0000000000162740[2] = xVar19;
    paxRam0000000000162740 = paxRam0000000000162740 + 4;
    return;
  }
  iVar16 = (int8)paxRam0000000000162740 - (int8)paxRam0000000000162738;
  uVar5 = (iVar16 >> 5) + 1;
  if (uVar5 >> 0x3b == 0) {
    uVar13 = (int8)paxRam0000000000162748 - (int8)paxRam0000000000162738;
    uVar8 = (int8)uVar13 >> 4;
    if ((uint8)((int8)uVar13 >> 4) <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x7fffffffffffffdf < uVar13) {
      uVar8 = 0x7ffffffffffffff;
    }
    if (uVar8 >> 0x3b == 0) {
      iVar3 = operator_new_plt(uVar8 * 0x20);
      xVar19 = *param_1;
      xVar21 = param_1[3];
      xVar20 = param_1[2];
      paxRam0000000000162738 = (xunknown8 *)(iVar3 + iVar16);
      paxRam0000000000162748 = (xunknown8 *)(iVar3 + uVar8 * 0x20);
      pxVar11 = paxRam0000000000162738 + 4;
      paxRam0000000000162738[1] = param_1[1];
      *paxRam0000000000162738 = xVar19;
      paxRam0000000000162738[3] = xVar21;
      paxRam0000000000162738[2] = xVar20;
      pxVar7 = paxRam0000000000162738;
      if (pxVar6 != pxVar2) {
        do {
          pxVar15 = pxVar6 + -4;
          xVar21 = *pxVar15;
          xVar20 = pxVar6[-1];
          xVar19 = pxVar6[-2];
          paxRam0000000000162738 = pxVar7 + -4;
          pxVar7[-3] = pxVar6[-3];
          pxVar7[-4] = xVar21;
          pxVar7[-1] = xVar20;
          pxVar7[-2] = xVar19;
          pxVar7 = paxRam0000000000162738;
          pxVar6 = pxVar15;
        } while (pxVar15 != pxVar2);
      }
      if (pxVar2 == (xunknown8 *)0x0) {
        paxRam0000000000162740 = pxVar11;
        return;
      }
      paxRam0000000000162740 = pxVar11;
      operator_delete_plt(pxVar2,uVar13);
      paxRam0000000000162740 = pxVar11;
      return;
    }
  }
  else {
    FUN_0008c37c();
  }
  axVar22 = FUN_0005ec14();
  pxVar2 = paxRam0000000000162740;
  uVar5 = axVar22._8_8_;
  pcStack_98 = FUN_0008a3b4;
  iVar16 = tpidr_el0;
  iStack_a8 = *(int8 *)(iVar16 + 0x28);
  pxStack_a0 = (xunknown1 *)((int8)register_sp + -0x40);
  if (uVar5 < axVar22._0_8_) {
    pxRam0000000000162c20 = pxRam0000000000162c18;
    pxVar9 = pxRam0000000000162c18;
    pxVar1 = pxRam0000000000162c18;
    pxStack_a0 = (xunknown1 *)((int8)register_sp + -0x40);
    for (pxVar6 = paxRam0000000000162738; pxRam0000000000162c18 = pxVar1, pxVar6 != pxVar2;
        pxVar6 = pxVar6 + 4) {
      pxVar14 = pxVar9;
      if (*(char *)((int8)pxVar6 + param_3) == '\x01') {
        if (pxRam0000000000162c28 <= pxVar9) {
          iVar3 = (int8)pxVar9 - (int8)pxVar1;
          uVar8 = (iVar3 >> 2) + 1;
          if (uVar8 >> 0x3e == 0) {
            uVar17 = (int8)pxRam0000000000162c28 - (int8)pxVar1;
            uVar13 = (int8)uVar17 >> 1;
            if ((uint8)((int8)uVar17 >> 1) <= uVar8) {
              uVar13 = uVar8;
            }
            if (0x7ffffffffffffffb < uVar17) {
              uVar13 = 0x3fffffffffffffff;
            }
            if (uVar13 >> 0x3e == 0) {
              iVar4 = operator_new_plt();
              pxRam0000000000162c18 = (xunknown4 *)(iVar4 + iVar3);
              pxVar14 = pxRam0000000000162c18 + 1;
              *pxRam0000000000162c18 = *(xunknown4 *)((int8)pxVar6 + 0x1c);
              if ((int8)pxVar9 - (int8)pxVar1 != 0) {
                uVar8 = ((int8)pxVar9 - (int8)pxVar1) - 4;
                if ((0x1b < uVar8) && (0x1f < (uint8)((int8)pxVar1 - iVar4))) {
                  uVar8 = (uVar8 >> 2) + 1;
                  uVar10 = uVar8 & 0x7ffffffffffffff8;
                  pxRam0000000000162c18 = pxRam0000000000162c18 + -uVar10;
                  pxVar11 = (xunknown8 *)(iVar4 + iVar3 + -0x10);
                  pxVar7 = (xunknown8 *)(pxVar9 + -4);
                  uVar12 = uVar10;
                  do {
                    pxVar15 = pxVar7 + -1;
                    xVar21 = pxVar7[-2];
                    xVar20 = pxVar7[1];
                    xVar19 = *pxVar7;
                    uVar12 = uVar12 - 8;
                    pxVar7 = pxVar7 + -4;
                    pxVar11[-1] = *pxVar15;
                    pxVar11[-2] = xVar21;
                    pxVar11[1] = xVar20;
                    *pxVar11 = xVar19;
                    pxVar11 = pxVar11 + -4;
                  } while (uVar12 != 0);
                  pxVar9 = pxVar9 + -uVar10;
                  if (uVar8 == uVar10) goto code_r0x0008a550;
                }
                do {
                  pxVar9 = pxVar9 + -1;
                  pxRam0000000000162c18 = pxRam0000000000162c18 + -1;
                  *pxRam0000000000162c18 = *pxVar9;
                } while (pxVar9 != pxVar1);
              }
code_r0x0008a550:
              pxRam0000000000162c28 = (xunknown4 *)(iVar4 + uVar13 * 4);
              if (pxVar1 != (xunknown4 *)0x0) {
                pxRam0000000000162c20 = pxVar14;
                operator_delete_plt(pxVar1,uVar17);
              }
              goto code_r0x0008a430;
            }
            if (*(int8 *)(iVar16 + 0x28) != iStack_a8) goto code_r0x0008a678;
            FUN_0005ec14();
          }
          if (*(int8 *)(iVar16 + 0x28) == iStack_a8) {
            FUN_0008c390(0x162c18);
          }
          goto code_r0x0008a678;
        }
        pxVar14 = pxVar9 + 1;
        *pxVar9 = *(xunknown4 *)((int8)pxVar6 + 0x1c);
code_r0x0008a430:
        pxRam0000000000162c20 = pxVar14;
      }
      pxVar9 = pxVar14;
      pxVar1 = pxRam0000000000162c18;
    }
    if (pxVar9 != pxVar1 + uVar5) {
      FUN_0008c3a4(pxVar1,pxVar1 + uVar5,pxVar9,&xStack_a9);
    }
    pxVar2 = paxRam0000000000162740;
    if (paxRam0000000000162738 != paxRam0000000000162740) {
      fVar18 = (float4)pxRam0000000000162c18[uVar5];
      iVar3 = *param_4;
      pxVar6 = paxRam0000000000162738;
      do {
        if ((*(char *)((int8)pxVar6 + param_3) == '\x01') &&
           (fVar18 <= *(float4 *)((int8)pxVar6 + 0x1c))) {
          iVar3 = iVar3 + 1;
          *(xunknown1 *)((int8)pxVar6 + param_3) = 0;
          *param_4 = iVar3;
        }
        pxVar6 = pxVar6 + 4;
      } while (pxVar6 != pxVar2);
    }
    xRam0000000000170f00 = xRam0000000000170f00 + 1;
  }
  if (*(int8 *)(iVar16 + 0x28) == iStack_a8) {
    return;
  }
code_r0x0008a678:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8a3b4  size=712 */
void FUN_0008a3b4(uint8 param_1,uint8 param_2,int8 param_3,int8 *param_4)

{
  uint8 uVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  xunknown4 *pxVar4;
  int8 iVar5;
  int8 iVar6;
  int8 iVar7;
  uint8 uVar8;
  xunknown4 *pxVar9;
  uint8 uVar10;
  xunknown8 *pxVar11;
  xunknown8 *pxVar12;
  uint8 uVar13;
  int8 iVar14;
  xunknown4 *pxVar15;
  uint8 uVar16;
  float4 fVar17;
  xunknown8 xVar18;
  xunknown8 xVar19;
  xunknown8 xVar20;
  xunknown1 xStack_69;
  int8 iStack_68;
  
  iVar5 = paxRam0000000000162740;
  iVar2 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar2 + 0x28);
  if (param_2 < param_1) {
    pxRam0000000000162c20 = pxRam0000000000162c18;
    pxVar9 = pxRam0000000000162c18;
    pxVar4 = pxRam0000000000162c18;
    for (iVar7 = paxRam0000000000162738; pxRam0000000000162c18 = pxVar4, iVar7 != iVar5;
        iVar7 = iVar7 + 0x20) {
      pxVar15 = pxVar9;
      if (*(char *)(iVar7 + param_3) == '\x01') {
        if (pxRam0000000000162c28 <= pxVar9) {
          iVar14 = (int8)pxVar9 - (int8)pxVar4;
          uVar8 = (iVar14 >> 2) + 1;
          if (uVar8 >> 0x3e == 0) {
            uVar16 = (int8)pxRam0000000000162c28 - (int8)pxVar4;
            uVar1 = (int8)uVar16 >> 1;
            if ((uint8)((int8)uVar16 >> 1) <= uVar8) {
              uVar1 = uVar8;
            }
            if (0x7ffffffffffffffb < uVar16) {
              uVar1 = 0x3fffffffffffffff;
            }
            if (uVar1 >> 0x3e == 0) {
              iVar6 = operator_new_plt();
              pxRam0000000000162c18 = (xunknown4 *)(iVar6 + iVar14);
              pxVar15 = pxRam0000000000162c18 + 1;
              *pxRam0000000000162c18 = *(xunknown4 *)(iVar7 + 0x1c);
              if ((int8)pxVar9 - (int8)pxVar4 != 0) {
                uVar8 = ((int8)pxVar9 - (int8)pxVar4) - 4;
                if ((0x1b < uVar8) && (0x1f < (uint8)((int8)pxVar4 - iVar6))) {
                  uVar8 = (uVar8 >> 2) + 1;
                  uVar10 = uVar8 & 0x7ffffffffffffff8;
                  pxRam0000000000162c18 = pxRam0000000000162c18 + -uVar10;
                  pxVar11 = (xunknown8 *)(iVar6 + iVar14 + -0x10);
                  pxVar12 = (xunknown8 *)(pxVar9 + -4);
                  uVar13 = uVar10;
                  do {
                    pxVar3 = pxVar12 + -1;
                    xVar20 = pxVar12[-2];
                    xVar19 = pxVar12[1];
                    xVar18 = *pxVar12;
                    uVar13 = uVar13 - 8;
                    pxVar12 = pxVar12 + -4;
                    pxVar11[-1] = *pxVar3;
                    pxVar11[-2] = xVar20;
                    pxVar11[1] = xVar19;
                    *pxVar11 = xVar18;
                    pxVar11 = pxVar11 + -4;
                  } while (uVar13 != 0);
                  pxVar9 = pxVar9 + -uVar10;
                  if (uVar8 == uVar10) goto code_r0x0008a550;
                }
                do {
                  pxVar9 = pxVar9 + -1;
                  pxRam0000000000162c18 = pxRam0000000000162c18 + -1;
                  *pxRam0000000000162c18 = *pxVar9;
                } while (pxVar9 != pxVar4);
              }
code_r0x0008a550:
              pxRam0000000000162c28 = (xunknown4 *)(iVar6 + uVar1 * 4);
              if (pxVar4 != (xunknown4 *)0x0) {
                pxRam0000000000162c20 = pxVar15;
                operator_delete_plt(pxVar4,uVar16);
              }
              goto code_r0x0008a430;
            }
            if (*(int8 *)(iVar2 + 0x28) != iStack_68) goto code_r0x0008a678;
            FUN_0005ec14();
          }
          if (*(int8 *)(iVar2 + 0x28) == iStack_68) {
            FUN_0008c390(&pxRam0000000000162c18);
          }
          goto code_r0x0008a678;
        }
        pxVar15 = pxVar9 + 1;
        *pxVar9 = *(xunknown4 *)(iVar7 + 0x1c);
code_r0x0008a430:
        pxRam0000000000162c20 = pxVar15;
      }
      pxVar9 = pxVar15;
      pxVar4 = pxRam0000000000162c18;
    }
    if (pxVar9 != pxVar4 + param_2) {
      FUN_0008c3a4(pxVar4,pxVar4 + param_2,pxVar9,&xStack_69);
    }
    iVar5 = paxRam0000000000162740;
    if (paxRam0000000000162738 != paxRam0000000000162740) {
      fVar17 = (float4)pxRam0000000000162c18[param_2];
      iVar14 = *param_4;
      iVar7 = paxRam0000000000162738;
      do {
        if ((*(char *)(iVar7 + param_3) == '\x01') && (fVar17 <= *(float4 *)(iVar7 + 0x1c))) {
          iVar14 = iVar14 + 1;
          *(xunknown1 *)(iVar7 + param_3) = 0;
          *param_4 = iVar14;
        }
        iVar7 = iVar7 + 0x20;
      } while (iVar7 != iVar5);
    }
    xRam0000000000170f00 = xRam0000000000170f00 + 1;
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_68) {
    return;
  }
code_r0x0008a678:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8a67c  size=436 */
void FUN_0008a67c(void)

{
  float8 *pfVar1;
  int4 *piVar2;
  int8 iVar3;
  xunknown8 *pxVar4;
  xunknown8 *pxVar5;
  bool bVar6;
  int8 iVar7;
  float8 fVar8;
  uint8 uStack_78;
  int4 iStack_70;
  int4 iStack_6c;
  int8 iStack_68;
  
  iVar3 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar3 + 0x28);
  iStack_6c = 0;
  (*(code *)*pxRam00000000000d3208)(0x8fbb,&iStack_6c);
  pxVar5 = pxRam00000000000d35d8;
  pxVar4 = pxRam00000000000d35d0;
  iVar7 = 0;
  do {
    if (*(char *)(iVar7 + 0x170e88) == '\x01') {
      iStack_70 = 0;
      (*(code *)*pxVar4)(*(xunknown4 *)(iVar7 * 4 + 0x170e8c),0x8867,&iStack_70);
      if (iStack_70 != 0) {
        uStack_78 = 0;
        (*(code *)*pxVar5)(*(xunknown4 *)(iVar7 * 4 + 0x170e8c),0x8866,&uStack_78);
        if ((iStack_6c == 0) && (uStack_78 < 100000000)) {
          bVar6 = *(char *)(iVar7 + 0x170ea0) == '\0';
          pfVar1 = &fRam0000000000170ee8;
          if (bVar6) {
            pfVar1 = &fRam0000000000170ef0;
          }
          piVar2 = &iRam0000000000170ee0;
          if (bVar6) {
            piVar2 = &iRam0000000000170ee4;
          }
          fVar8 = *pfVar1;
          *piVar2 = *piVar2 + 1;
          *pfVar1 = (float8)uStack_78 / 1000000.0 + fVar8;
          budget__GpuMs_plt(2);
        }
        else if (iStack_6c == 0) {
          xRam0000000000170efc = xRam0000000000170efc + 1;
        }
        else {
          xRam0000000000170ef8 = xRam0000000000170ef8 + 1;
        }
        *(xunknown1 *)(iVar7 + 0x170e88) = 0;
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 4);
  if (*(int8 *)(iVar3 + 0x28) == iStack_68) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8a830  size=236 */
void FUN_0008a830(void)

{
  int8 iVar1;
  float8 fVar2;
  int8 iStack_48;
  int8 iStack_40;
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  clock_gettime(1,&iStack_48);
  fVar2 = (float8)iStack_40 / 1000.0 + (float8)iStack_48 * 1000000.0;
  if ((uRam0000000000170ca4 == '\x01') && (iRam0000000000170cb0 < 0x15)) {
    (*pcRam0000000000162c30)((fVar2 - fRam0000000000170ca8) / 1000000.0,0,0x29e13 /* "shadows: back after %.1f s" */);
  }
  uRam0000000000170ca4 = 0;
  fRam0000000000170c90 = fVar2;
  uRam0000000000170ca0 = 0;
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8a91c  size=20 */
int8 * FUN_0008a91c(void)

{
  uint8 uVar1;
  int8 *piVar2;
  xunknown8 *in_x3;
  uint8 uVar3;
  int8 iVar4;
  int8 *piVar5;
  int8 *piVar6;
  int8 iVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint8 uVar10;
  uint8 unaff_x24;
  float4 fVar11;
  xunknown1 axVar12 [16];
  
  axVar12 = FUN_0005eb94(0x371ec /* "vector" */);
  piVar2 = axVar12._0_8_;
  uVar9 = piVar2[1];
  uVar10 = *axVar12._8_8_;
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar8 * uVar9;
      }
    }
    piVar5 = *(int8 **)(*piVar2 + unaff_x24 * 8);
    if (piVar5 != (int8 *)0x0) {
      for (piVar5 = (int8 *)*piVar5; piVar5 != (int8 *)0x0; piVar5 = (int8 *)*piVar5) {
        uVar8 = piVar5[1];
        if (uVar8 == uVar10) {
          if (piVar5[2] == uVar10) {
            return piVar5;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (uVar9 <= uVar8) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar8 / uVar9;
            }
            uVar8 = uVar8 - uVar1 * uVar9;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  piVar5 = (int8 *)operator_new_plt(0x20);
  iVar4 = piVar2[3];
  piVar6 = (int8 *)*in_x3;
  piVar5[1] = uVar10;
  fVar11 = *(float4 *)(piVar2 + 4);
  iVar7 = *piVar6;
  *piVar5 = 0;
  *(xunknown4 *)(piVar5 + 3) = 0;
  piVar5[2] = iVar7;
  if ((uVar9 != 0) && ((float4)(iVar4 + 1) <= fVar11 * (float4)uVar9)) goto code_r0x0008ab40;
  if (uVar9 < 3) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint8)((uVar9 & uVar9 - 1) != 0);
  }
  uVar3 = uVar3 | uVar9 << 1;
  uVar8 = (uint8)((float4)(iVar4 + 1) / fVar11);
  if (uVar3 <= uVar8) {
    uVar3 = uVar8;
  }
  if (uVar3 - 1 == 0) {
    uVar3 = 2;
  }
  else if ((uVar3 & uVar3 - 1) != 0) {
    uVar3 = std____ndk1____next_prime_plt(uVar3);
    uVar9 = piVar2[1];
  }
  if (uVar9 < uVar3) {
code_r0x0008aa98:
    void_std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______do_rehash_plt_1
              (piVar2,uVar3);
  }
  else if (uVar3 < uVar9) {
    uVar8 = (uint8)((float4)(uint8)piVar2[3] / *(float4 *)(piVar2 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      uVar8 = std____ndk1____next_prime_plt();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar3 < uVar9) goto code_r0x0008aa98;
  }
  uVar9 = piVar2[1];
  if ((uVar9 & uVar9 - 1) == 0) {
    unaff_x24 = uVar9 - 1 & uVar10;
  }
  else if (uVar10 < uVar9) {
    unaff_x24 = uVar10;
  }
  else {
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = uVar10 / uVar9;
    }
    unaff_x24 = uVar10 - uVar3 * uVar9;
  }
code_r0x0008ab40:
  iVar4 = *piVar2;
  piVar6 = *(int8 **)(iVar4 + unaff_x24 * 8);
  if (piVar6 == (int8 *)0x0) {
    piVar6 = piVar2 + 2;
    iVar7 = *piVar6;
    *piVar6 = (int8)piVar5;
    *piVar5 = iVar7;
    *(int8 **)(iVar4 + unaff_x24 * 8) = piVar6;
    if (*piVar5 != 0) {
      uVar10 = *(uint8 *)(*piVar5 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        *(int8 **)(iVar4 + (uVar10 & uVar9 - 1) * 8) = piVar5;
      }
      else {
        if (uVar9 <= uVar10) {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar10 / uVar9;
          }
          uVar10 = uVar10 - uVar3 * uVar9;
        }
        *(int8 **)(iVar4 + uVar10 * 8) = piVar5;
      }
    }
  }
  else {
    *piVar5 = *piVar6;
    *piVar6 = (int8)piVar5;
  }
  piVar2[3] = piVar2[3] + 1;
  return piVar5;
}

/* 0x8ad44  size=20 */
void FUN_0008ad44(xunknown8 param_1,xunknown8 param_2,int8 param_3,uint8 param_4)

{
  bool bVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint8 uVar7;
  int8 iVar8;
  uint8 uVar9;
  int8 iVar10;
  uint8 uVar11;
  uint8 *puVar12;
  uint8 *puVar13;
  int8 iVar14;
  uint8 *puVar15;
  uint8 *puVar16;
  uint8 uVar17;
  uint8 *puVar18;
  uint8 uVar19;
  uint8 uVar20;
  uint8 uVar21;
  uint8 *puVar22;
  uint8 *puVar23;
  uint8 *puVar24;
  uint8 *puVar25;
  uint8 uVar26;
  uint8 uVar27;
  uint8 uVar28;
  xunknown1 axVar29 [16];
  uint8 uStack_90;
  uint8 uStack_88;
  uint8 uStack_80;
  
  axVar29 = FUN_0005eb94(0x371ec /* "vector" */);
  iVar4 = tpidr_el0;
  param_4 = param_4 & 0xffffffff;
  iVar8 = *(int8 *)(iVar4 + 0x28);
code_r0x0008ad98:
  puVar23 = axVar29._8_8_;
  puVar18 = puVar23 + -3;
  puVar24 = puVar23 + -6;
  puVar25 = puVar23 + -9;
  puVar13 = axVar29._0_8_;
code_r0x0008ada8:
  do {
    puVar22 = puVar13;
    uVar11 = (int8)puVar23 - (int8)puVar22;
    uVar9 = ((int8)uVar11 >> 3) * -0x5555555555555555;
    if (uVar9 - 2 != 0 && 1 < (int8)uVar9) {
      if (uVar9 != 3) {
        if (uVar9 != 4) {
          if (uVar9 != 5) goto code_r0x0008adf0;
          FUN_0008c09c(puVar22,puVar22 + 3,puVar22 + 6,puVar22 + 9);
          puVar13 = puVar23 + -3;
          if (*puVar13 < puVar22[9]) {
            uVar17 = puVar22[10];
            uVar26 = puVar22[9];
            uVar9 = puVar22[0xb];
            uVar19 = *puVar13;
            uVar11 = puVar23[-1];
            puVar22[10] = puVar23[-2];
            puVar22[9] = uVar19;
            puVar22[0xb] = uVar11;
            puVar23[-1] = uVar9;
            puVar23[-2] = uVar17;
            *puVar13 = uVar26;
            if (puVar22[9] < puVar22[6]) {
              uVar26 = puVar22[7];
              uVar11 = puVar22[6];
              uVar9 = puVar22[8];
              puVar22[7] = puVar22[10];
              puVar22[6] = puVar22[9];
              puVar22[8] = puVar22[0xb];
              puVar22[10] = uVar26;
              puVar22[9] = uVar11;
              puVar22[0xb] = uVar9;
              if (puVar22[6] < puVar22[3]) {
                uVar26 = puVar22[4];
                uVar11 = puVar22[3];
                uVar9 = puVar22[5];
                puVar22[4] = puVar22[7];
                puVar22[3] = puVar22[6];
                puVar22[5] = puVar22[8];
                puVar22[7] = uVar26;
                puVar22[6] = uVar11;
                puVar22[8] = uVar9;
                if (puVar22[3] < *puVar22) {
                  uVar9 = puVar22[2];
                  uVar26 = puVar22[1];
                  uVar11 = *puVar22;
                  puVar22[1] = puVar22[4];
                  *puVar22 = puVar22[3];
                  puVar22[2] = puVar22[5];
                  puVar22[4] = uVar26;
                  puVar22[3] = uVar11;
                  puVar22[5] = uVar9;
                }
              }
            }
          }
          goto code_r0x0008bc30;
        }
        if (*(int8 *)(iVar4 + 0x28) == iVar8) {
          puVar13 = puVar22 + 3;
          puVar24 = puVar22 + 6;
          iVar4 = tpidr_el0;
          iVar8 = *(int8 *)(iVar4 + 0x28);
          uVar9 = *puVar13;
          if (uVar9 < *puVar22) {
            if (*puVar24 < uVar9) {
              uVar26 = puVar22[1];
              uVar11 = *puVar22;
              uVar9 = puVar22[2];
              puVar22[1] = puVar22[7];
              *puVar22 = *puVar24;
              puVar22[2] = puVar22[8];
            }
            else {
              uVar26 = puVar22[1];
              uVar11 = *puVar22;
              uVar9 = puVar22[2];
              puVar22[1] = puVar22[4];
              *puVar22 = *puVar13;
              puVar22[2] = puVar22[5];
              puVar22[4] = uVar26;
              *puVar13 = uVar11;
              puVar22[5] = uVar9;
              if (*puVar13 <= *puVar24) goto code_r0x0008c19c;
              uVar26 = puVar22[4];
              uVar11 = *puVar13;
              uVar9 = puVar22[5];
              puVar22[4] = puVar22[7];
              *puVar13 = *puVar24;
              puVar22[5] = puVar22[8];
            }
            puVar22[7] = uVar26;
            *puVar24 = uVar11;
            puVar22[8] = uVar9;
          }
          else if (*puVar24 < uVar9) {
            uVar26 = puVar22[4];
            uVar11 = *puVar13;
            uVar9 = puVar22[5];
            puVar22[4] = puVar22[7];
            *puVar13 = *puVar24;
            puVar22[5] = puVar22[8];
            puVar22[7] = uVar26;
            *puVar24 = uVar11;
            puVar22[8] = uVar9;
            if (*puVar13 < *puVar22) {
              uVar26 = puVar22[1];
              uVar11 = *puVar22;
              uVar9 = puVar22[2];
              puVar22[1] = puVar22[4];
              *puVar22 = *puVar13;
              puVar22[2] = puVar22[5];
              puVar22[4] = uVar26;
              *puVar13 = uVar11;
              puVar22[5] = uVar9;
            }
          }
code_r0x0008c19c:
          if (*puVar18 < *puVar24) {
            uVar26 = *puVar18;
            uVar9 = puVar23[-1];
            uVar19 = puVar22[7];
            uVar17 = *puVar24;
            uVar11 = puVar22[8];
            puVar22[7] = puVar23[-2];
            *puVar24 = uVar26;
            puVar22[8] = uVar9;
            puVar23[-2] = uVar19;
            *puVar18 = uVar17;
            puVar23[-1] = uVar11;
            if (*puVar24 < *puVar13) {
              uVar26 = puVar22[4];
              uVar11 = *puVar13;
              uVar9 = puVar22[5];
              puVar22[4] = puVar22[7];
              *puVar13 = *puVar24;
              puVar22[5] = puVar22[8];
              puVar22[7] = uVar26;
              *puVar24 = uVar11;
              puVar22[8] = uVar9;
              if (*puVar13 < *puVar22) {
                uVar26 = puVar22[1];
                uVar11 = *puVar22;
                uVar9 = puVar22[2];
                puVar22[1] = puVar22[4];
                *puVar22 = *puVar13;
                puVar22[2] = puVar22[5];
                puVar22[4] = uVar26;
                *puVar13 = uVar11;
                puVar22[5] = uVar9;
              }
            }
          }
          if (*(int8 *)(iVar4 + 0x28) == iVar8) {
            return;
          }
        }
        goto code_r0x000c9620;
      }
      puVar13 = puVar22 + 3;
      uVar9 = *puVar13;
      puVar18 = puVar23 + -3;
      if (uVar9 < *puVar22) {
        if (*puVar18 < uVar9) goto code_r0x0008b768;
        uVar26 = puVar22[1];
        uVar11 = *puVar22;
        uVar9 = puVar22[2];
        puVar22[1] = puVar22[4];
        *puVar22 = *puVar13;
        puVar22[2] = puVar22[5];
        puVar22[4] = uVar26;
        *puVar13 = uVar11;
        puVar22[5] = uVar9;
        if (*puVar18 < puVar22[3]) {
          uVar17 = puVar22[4];
          uVar26 = *puVar13;
          uVar9 = puVar22[5];
          uVar19 = *puVar18;
          uVar11 = puVar23[-1];
          puVar22[4] = puVar23[-2];
          *puVar13 = uVar19;
          puVar22[5] = uVar11;
          puVar23[-1] = uVar9;
code_r0x0008b794:
          puVar23[-2] = uVar17;
          puVar23[-3] = uVar26;
        }
      }
      else if (*puVar18 < uVar9) {
        uVar17 = puVar22[4];
        uVar26 = *puVar13;
        uVar9 = puVar22[5];
        uVar19 = *puVar18;
        uVar11 = puVar23[-1];
        puVar22[4] = puVar23[-2];
        *puVar13 = uVar19;
        puVar22[5] = uVar11;
        puVar23[-1] = uVar9;
        puVar23[-2] = uVar17;
        *puVar18 = uVar26;
        if (puVar22[3] < *puVar22) {
          uVar9 = puVar22[2];
          uVar26 = puVar22[1];
          uVar11 = *puVar22;
          puVar22[1] = puVar22[4];
          *puVar22 = *puVar13;
          puVar22[2] = puVar22[5];
          puVar22[4] = uVar26;
          *puVar13 = uVar11;
          puVar22[5] = uVar9;
        }
      }
      goto code_r0x0008bc30;
    }
    if (uVar9 < 2) goto code_r0x0008bc30;
    if (uVar9 == 2) {
      if (puVar23[-3] < *puVar22) {
code_r0x0008b768:
        uVar9 = puVar22[2];
        uVar17 = puVar22[1];
        uVar26 = *puVar22;
        uVar19 = puVar23[-2];
        uVar11 = puVar23[-3];
        puVar22[2] = puVar23[-1];
        puVar22[1] = uVar19;
        *puVar22 = uVar11;
        puVar23[-1] = uVar9;
        goto code_r0x0008b794;
      }
      goto code_r0x0008bc30;
    }
code_r0x0008adf0:
    if ((int8)uVar11 < 0x240) {
      puVar13 = puVar22 + 3;
      if ((param_4 & 1) == 0) {
        if (puVar22 != puVar23 && puVar13 != puVar23) {
          do {
            puVar18 = puVar13;
            uVar9 = puVar22[3];
            if (uVar9 < *puVar22) {
              uVar26 = puVar22[5];
              uVar11 = puVar22[4];
              puVar13 = puVar18;
              do {
                puVar24 = puVar13;
                puVar24[1] = puVar24[-2];
                *puVar24 = puVar24[-3];
                puVar24[2] = puVar24[-1];
                puVar13 = puVar24 + -3;
              } while (uVar9 < puVar24[-6]);
              puVar24[-3] = uVar9;
              puVar24[-1] = uVar26;
              puVar24[-2] = uVar11;
            }
            puVar13 = puVar18 + 3;
            puVar22 = puVar18;
          } while (puVar18 + 3 != puVar23);
        }
        goto code_r0x0008bc30;
      }
      if (puVar22 == puVar23 || puVar13 == puVar23) goto code_r0x0008bc30;
      iVar10 = 0;
      puVar18 = puVar22;
      break;
    }
    if (param_3 == 0) {
      if (puVar22 == puVar23) goto code_r0x0008bc30;
      uVar17 = uVar9 - 2 >> 1;
      uVar26 = uVar17;
      goto code_r0x0008b8ac;
    }
    puVar13 = puVar22 + (uVar9 >> 1) * 3;
    uVar9 = *puVar18;
    if (uVar11 < 0xc01) {
      uVar11 = *puVar22;
      if (uVar11 < *puVar13) {
        if (uVar9 < uVar11) {
          uStack_80 = puVar13[2];
          uStack_88 = puVar13[1];
          uStack_90 = *puVar13;
          uVar11 = puVar23[-2];
          uVar9 = *puVar18;
          puVar13[2] = puVar23[-1];
          puVar13[1] = uVar11;
          *puVar13 = uVar9;
        }
        else {
          uVar9 = puVar13[2];
          uVar17 = puVar13[1];
          uVar11 = *puVar13;
          uVar19 = puVar22[1];
          uVar26 = *puVar22;
          puVar13[2] = puVar22[2];
          puVar13[1] = uVar19;
          *puVar13 = uVar26;
          puVar22[2] = uVar9;
          puVar22[1] = uVar17;
          *puVar22 = uVar11;
          if (*puVar22 <= *puVar18) goto code_r0x0008b410;
          uStack_80 = puVar22[2];
          uStack_88 = puVar22[1];
          uStack_90 = *puVar22;
          uVar11 = puVar23[-2];
          uVar9 = *puVar18;
          puVar22[2] = puVar23[-1];
          puVar22[1] = uVar11;
          *puVar22 = uVar9;
        }
        puVar23[-1] = uStack_80;
        puVar23[-2] = uStack_88;
        *puVar18 = uStack_90;
      }
      else if (uVar9 < uVar11) {
        uVar9 = puVar22[2];
        uVar17 = puVar22[1];
        uVar11 = *puVar22;
        uVar19 = puVar23[-2];
        uVar26 = *puVar18;
        puVar22[2] = puVar23[-1];
        puVar22[1] = uVar19;
        *puVar22 = uVar26;
        puVar23[-1] = uVar9;
        puVar23[-2] = uVar17;
        *puVar18 = uVar11;
        if (*puVar22 < *puVar13) {
          uVar9 = puVar13[2];
          uVar17 = puVar13[1];
          uVar11 = *puVar13;
          uVar19 = puVar22[1];
          uVar26 = *puVar22;
          puVar13[2] = puVar22[2];
          puVar13[1] = uVar19;
          *puVar13 = uVar26;
          puVar22[2] = uVar9;
          puVar22[1] = uVar17;
          *puVar22 = uVar11;
        }
      }
    }
    else {
      uVar11 = *puVar13;
      if (uVar11 < *puVar22) {
        if (uVar9 < uVar11) {
          uStack_80 = puVar22[2];
          uStack_88 = puVar22[1];
          uStack_90 = *puVar22;
          uVar11 = puVar23[-2];
          uVar9 = *puVar18;
          puVar22[2] = puVar23[-1];
          puVar22[1] = uVar11;
          *puVar22 = uVar9;
        }
        else {
          uVar9 = puVar22[2];
          uVar17 = puVar22[1];
          uVar11 = *puVar22;
          uVar19 = puVar13[1];
          uVar26 = *puVar13;
          puVar22[2] = puVar13[2];
          puVar22[1] = uVar19;
          *puVar22 = uVar26;
          puVar13[2] = uVar9;
          puVar13[1] = uVar17;
          *puVar13 = uVar11;
          if (*puVar13 <= *puVar18) goto code_r0x0008aff4;
          uStack_80 = puVar13[2];
          uStack_88 = puVar13[1];
          uStack_90 = *puVar13;
          uVar11 = puVar23[-2];
          uVar9 = *puVar18;
          puVar13[2] = puVar23[-1];
          puVar13[1] = uVar11;
          *puVar13 = uVar9;
        }
        puVar23[-1] = uStack_80;
        puVar23[-2] = uStack_88;
        *puVar18 = uStack_90;
      }
      else if (uVar9 < uVar11) {
        uVar9 = puVar13[2];
        uVar17 = puVar13[1];
        uVar11 = *puVar13;
        uVar19 = puVar23[-2];
        uVar26 = *puVar18;
        puVar13[2] = puVar23[-1];
        puVar13[1] = uVar19;
        *puVar13 = uVar26;
        puVar23[-1] = uVar9;
        puVar23[-2] = uVar17;
        *puVar18 = uVar11;
        if (*puVar13 < *puVar22) {
          uVar9 = puVar22[2];
          uVar17 = puVar22[1];
          uVar11 = *puVar22;
          uVar19 = puVar13[1];
          uVar26 = *puVar13;
          puVar22[2] = puVar13[2];
          puVar22[1] = uVar19;
          *puVar22 = uVar26;
          puVar13[2] = uVar9;
          puVar13[1] = uVar17;
          *puVar13 = uVar11;
        }
      }
code_r0x0008aff4:
      puVar15 = puVar22 + 3;
      puVar12 = puVar13 + -3;
      uVar9 = *puVar12;
      if (uVar9 < *puVar15) {
        if (*puVar24 < uVar9) {
          uVar19 = puVar22[4];
          uVar26 = *puVar15;
          uVar9 = puVar22[5];
          uVar17 = *puVar24;
          uVar11 = puVar23[-4];
          puVar22[4] = puVar23[-5];
          *puVar15 = uVar17;
          puVar22[5] = uVar11;
          puVar23[-4] = uVar9;
        }
        else {
          uVar17 = puVar22[4];
          uVar26 = *puVar15;
          uVar9 = puVar22[5];
          uVar19 = *puVar12;
          uVar11 = puVar13[-1];
          puVar22[4] = puVar13[-2];
          *puVar15 = uVar19;
          puVar22[5] = uVar11;
          puVar13[-1] = uVar9;
          puVar13[-2] = uVar17;
          *puVar12 = uVar26;
          if (*puVar12 <= *puVar24) goto code_r0x0008b190;
          uVar9 = puVar13[-1];
          uVar19 = puVar13[-2];
          uVar26 = *puVar12;
          uVar17 = puVar23[-5];
          uVar11 = *puVar24;
          puVar13[-1] = puVar23[-4];
          puVar13[-2] = uVar17;
          *puVar12 = uVar11;
          puVar23[-4] = uVar9;
        }
        puVar23[-5] = uVar19;
        *puVar24 = uVar26;
      }
      else if (*puVar24 < uVar9) {
        uVar9 = puVar13[-1];
        uVar17 = puVar13[-2];
        uVar11 = *puVar12;
        uVar19 = puVar23[-5];
        uVar26 = *puVar24;
        puVar13[-1] = puVar23[-4];
        puVar13[-2] = uVar19;
        *puVar12 = uVar26;
        puVar23[-4] = uVar9;
        puVar23[-5] = uVar17;
        *puVar24 = uVar11;
        if (*puVar12 < *puVar15) {
          uVar17 = puVar22[4];
          uVar26 = *puVar15;
          uVar9 = puVar22[5];
          uVar19 = *puVar12;
          uVar11 = puVar13[-1];
          puVar22[4] = puVar13[-2];
          *puVar15 = uVar19;
          puVar22[5] = uVar11;
          puVar13[-1] = uVar9;
          puVar13[-2] = uVar17;
          *puVar12 = uVar26;
        }
      }
code_r0x0008b190:
      puVar16 = puVar22 + 6;
      puVar15 = puVar13 + 3;
      uVar9 = *puVar15;
      if (uVar9 < *puVar16) {
        if (*puVar25 < uVar9) {
          uVar19 = puVar22[7];
          uVar26 = *puVar16;
          uVar9 = puVar22[8];
          uVar17 = *puVar25;
          uVar11 = puVar23[-7];
          puVar22[7] = puVar23[-8];
          *puVar16 = uVar17;
          puVar22[8] = uVar11;
          puVar23[-7] = uVar9;
        }
        else {
          uVar17 = puVar22[7];
          uVar26 = *puVar16;
          uVar9 = puVar22[8];
          uVar19 = *puVar15;
          uVar11 = puVar13[5];
          puVar22[7] = puVar13[4];
          *puVar16 = uVar19;
          puVar22[8] = uVar11;
          puVar13[5] = uVar9;
          puVar13[4] = uVar17;
          *puVar15 = uVar26;
          if (*puVar15 <= *puVar25) goto code_r0x0008b2b8;
          uVar9 = puVar13[5];
          uVar19 = puVar13[4];
          uVar26 = *puVar15;
          uVar17 = puVar23[-8];
          uVar11 = *puVar25;
          puVar13[5] = puVar23[-7];
          puVar13[4] = uVar17;
          *puVar15 = uVar11;
          puVar23[-7] = uVar9;
        }
        puVar23[-8] = uVar19;
        *puVar25 = uVar26;
      }
      else if (*puVar25 < uVar9) {
        uVar9 = puVar13[5];
        uVar17 = puVar13[4];
        uVar11 = *puVar15;
        uVar19 = puVar23[-8];
        uVar26 = *puVar25;
        puVar13[5] = puVar23[-7];
        puVar13[4] = uVar19;
        *puVar15 = uVar26;
        puVar23[-7] = uVar9;
        puVar23[-8] = uVar17;
        *puVar25 = uVar11;
        if (*puVar15 < *puVar16) {
          uVar17 = puVar22[7];
          uVar26 = *puVar16;
          uVar9 = puVar22[8];
          uVar19 = *puVar15;
          uVar11 = puVar13[5];
          puVar22[7] = puVar13[4];
          *puVar16 = uVar19;
          puVar22[8] = uVar11;
          puVar13[5] = uVar9;
          puVar13[4] = uVar17;
          *puVar15 = uVar26;
        }
      }
code_r0x0008b2b8:
      uVar9 = *puVar13;
      if (uVar9 < puVar13[-3]) {
        if (puVar13[3] < uVar9) {
          uStack_80 = puVar13[-1];
          uStack_88 = puVar13[-2];
          uStack_90 = *puVar12;
          puVar13[-2] = puVar13[4];
          *puVar12 = *puVar15;
          puVar13[-1] = puVar13[5];
        }
        else {
          uVar9 = puVar13[-1];
          uVar26 = puVar13[-2];
          uVar11 = *puVar12;
          puVar13[-2] = puVar13[1];
          *puVar12 = *puVar13;
          puVar13[-1] = puVar13[2];
          puVar13[1] = uVar26;
          *puVar13 = uVar11;
          puVar13[2] = uVar9;
          if (*puVar13 <= puVar13[3]) goto code_r0x0008b3e0;
          uStack_80 = puVar13[2];
          uStack_88 = puVar13[1];
          uStack_90 = *puVar13;
          puVar13[1] = puVar13[4];
          *puVar13 = *puVar15;
          puVar13[2] = puVar13[5];
        }
        puVar13[5] = uStack_80;
        puVar13[4] = uStack_88;
        *puVar15 = uStack_90;
      }
      else if (puVar13[3] < uVar9) {
        uVar9 = puVar13[2];
        uVar26 = puVar13[1];
        uVar11 = *puVar13;
        puVar13[1] = puVar13[4];
        *puVar13 = *puVar15;
        puVar13[2] = puVar13[5];
        puVar13[5] = uVar9;
        puVar13[4] = uVar26;
        *puVar15 = uVar11;
        if (*puVar13 < puVar13[-3]) {
          uVar9 = puVar13[-1];
          uVar26 = puVar13[-2];
          uVar11 = *puVar12;
          puVar13[-2] = puVar13[1];
          *puVar12 = *puVar13;
          puVar13[-1] = puVar13[2];
          puVar13[2] = uVar9;
          puVar13[1] = uVar26;
          *puVar13 = uVar11;
        }
      }
code_r0x0008b3e0:
      uVar9 = puVar22[2];
      uVar17 = puVar22[1];
      uVar11 = *puVar22;
      uVar19 = puVar13[1];
      uVar26 = *puVar13;
      puVar22[2] = puVar13[2];
      puVar22[1] = uVar19;
      *puVar22 = uVar26;
      puVar13[2] = uVar9;
      puVar13[1] = uVar17;
      *puVar13 = uVar11;
    }
code_r0x0008b410:
    uVar9 = *puVar22;
    param_3 = param_3 + -1;
    if (((param_4 & 1) != 0) || (puVar22[-3] < uVar9)) {
      uVar26 = puVar22[2];
      uVar11 = puVar22[1];
      iVar10 = 0;
      do {
        iVar2 = iVar10 + 0x18;
        iVar14 = iVar10 + 0x18;
        iVar10 = iVar2;
      } while (*(uint8 *)((int8)puVar22 + iVar14) < uVar9);
      puVar12 = (uint8 *)((int8)puVar22 + iVar2);
      puVar15 = puVar23;
      if (iVar2 == 0x18) {
        do {
          if (puVar15 <= puVar12) break;
          puVar15 = puVar15 + -3;
        } while (uVar9 <= *puVar15);
      }
      else {
        do {
          puVar15 = puVar15 + -3;
        } while (uVar9 <= *puVar15);
      }
      puVar13 = puVar12;
      if (puVar12 < puVar15) {
        puVar16 = puVar15;
        do {
          uVar17 = puVar13[2];
          uVar21 = puVar13[1];
          uVar19 = *puVar13;
          uVar5 = puVar16[1];
          uVar27 = *puVar16;
          puVar13[2] = puVar16[2];
          puVar13[1] = uVar5;
          *puVar13 = uVar27;
          puVar16[2] = uVar17;
          puVar16[1] = uVar21;
          *puVar16 = uVar19;
          do {
            puVar13 = puVar13 + 3;
          } while (*puVar13 < uVar9);
          do {
            puVar16 = puVar16 + -3;
          } while (uVar9 <= *puVar16);
        } while (puVar13 < puVar16);
      }
      puVar16 = puVar13 + -3;
      axVar29._8_8_ = puVar16;
      axVar29._0_8_ = puVar22;
      if (puVar22 != puVar16) {
        uVar19 = puVar13[-2];
        uVar17 = *puVar16;
        puVar22[2] = puVar13[-1];
        puVar22[1] = uVar19;
        *puVar22 = uVar17;
      }
      puVar13[-3] = uVar9;
      puVar13[-1] = uVar26;
      puVar13[-2] = uVar11;
      if (puVar15 <= puVar12) {
        uVar9 = FUN_0008bc68(puVar22,puVar16);
        uVar11 = FUN_0008bc68(puVar13,puVar23);
        if ((uVar11 & 1) != 0) goto code_r0x0008b638;
        if ((uVar9 & 1) != 0) goto code_r0x0008ada8;
      }
      FUN_0008ad58(puVar22,puVar16,param_3,(uint4)param_4 & 1);
      param_4 = 0;
      goto code_r0x0008ada8;
    }
    uVar26 = puVar22[2];
    uVar11 = puVar22[1];
    puVar13 = puVar22;
    if (uVar9 < puVar23[-3]) {
      do {
        puVar13 = puVar13 + 3;
      } while (*puVar13 <= uVar9);
    }
    else {
      do {
        puVar13 = puVar13 + 3;
        if (puVar23 <= puVar13) break;
      } while (*puVar13 <= uVar9);
    }
    puVar12 = puVar23;
    if (puVar13 < puVar23) {
      do {
        puVar12 = puVar12 + -3;
      } while (uVar9 < *puVar12);
    }
    while (puVar13 < puVar12) {
      uVar17 = puVar13[2];
      uVar21 = puVar13[1];
      uVar19 = *puVar13;
      uVar5 = puVar12[1];
      uVar27 = *puVar12;
      puVar13[2] = puVar12[2];
      puVar13[1] = uVar5;
      *puVar13 = uVar27;
      puVar12[2] = uVar17;
      puVar12[1] = uVar21;
      *puVar12 = uVar19;
      do {
        puVar13 = puVar13 + 3;
      } while (*puVar13 <= uVar9);
      do {
        puVar12 = puVar12 + -3;
      } while (uVar9 < *puVar12);
    }
    if (puVar22 != puVar13 + -3) {
      uVar19 = puVar13[-2];
      uVar17 = puVar13[-3];
      puVar22[2] = puVar13[-1];
      puVar22[1] = uVar19;
      *puVar22 = uVar17;
    }
    puVar13[-3] = uVar9;
    param_4 = 0;
    puVar13[-1] = uVar26;
    puVar13[-2] = uVar11;
  } while( true );
  do {
    puVar24 = puVar13;
    uVar9 = puVar18[3];
    if (uVar9 < *puVar18) {
      uVar26 = puVar18[5];
      uVar11 = puVar18[4];
      iVar2 = iVar10;
      do {
        iVar14 = iVar2;
        pxVar3 = (xunknown8 *)((int8)puVar22 + iVar14);
        pxVar3[4] = pxVar3[1];
        pxVar3[3] = *pxVar3;
        pxVar3[5] = pxVar3[2];
        if (iVar14 == 0) {
          puVar13 = puVar22;
          goto code_r0x0008b808;
        }
        iVar2 = iVar14 + -0x18;
      } while (uVar9 < (uint8)pxVar3[-3]);
      puVar13 = (uint8 *)((int8)puVar22 + iVar14);
code_r0x0008b808:
      *puVar13 = uVar9;
      puVar13[2] = uVar26;
      puVar13[1] = uVar11;
    }
    puVar13 = puVar24 + 3;
    iVar10 = iVar10 + 0x18;
    puVar18 = puVar24;
  } while (puVar13 != puVar23);
  goto code_r0x0008bc30;
code_r0x0008b638:
  if ((uVar9 & 1) != 0) goto code_r0x0008bc30;
  goto code_r0x0008ad98;
code_r0x0008b8ac:
  do {
    if (uVar26 <= uVar17) {
      uVar27 = (uVar26 & 0x3fffffffffffffff) << 1 | 1;
      uVar19 = uVar26 * 2 + 2;
      puVar13 = puVar22 + uVar27 * 3;
      if ((int8)uVar19 < (int8)uVar9) {
        uVar20 = *puVar13;
        uVar5 = puVar13[3];
        uVar21 = uVar20;
        if (uVar20 <= uVar5) {
          uVar21 = uVar5;
        }
        puVar18 = puVar13 + 3;
        if (uVar5 <= uVar20) {
          uVar19 = uVar27;
          puVar18 = puVar13;
        }
        puVar13 = puVar18;
        uVar27 = uVar19;
      }
      else {
        uVar21 = *puVar13;
      }
      puVar18 = puVar22 + uVar26 * 3;
      uVar19 = *puVar18;
      if (uVar19 <= uVar21) {
        uVar5 = puVar18[2];
        uVar21 = puVar18[1];
        do {
          while( true ) {
            puVar24 = puVar13;
            uVar28 = puVar24[1];
            uVar20 = *puVar24;
            puVar18[2] = puVar24[2];
            puVar18[1] = uVar28;
            *puVar18 = uVar20;
            if ((int8)uVar17 < (int8)uVar27) goto code_r0x0008b894;
            uVar20 = uVar27 << 1 | 1;
            puVar25 = puVar22 + uVar20 * 3;
            uVar27 = uVar27 * 2 + 2;
            puVar18 = puVar24;
            if ((int8)uVar27 < (int8)uVar9) break;
            puVar13 = puVar25;
            uVar27 = uVar20;
            if (*puVar25 < uVar19) goto code_r0x0008b894;
          }
          uVar6 = *puVar25;
          uVar7 = puVar25[3];
          uVar28 = uVar6;
          if (uVar6 <= uVar7) {
            uVar28 = uVar7;
          }
          puVar13 = puVar25 + 3;
          if (uVar7 <= uVar6) {
            uVar27 = uVar20;
            puVar13 = puVar25;
          }
        } while (uVar19 <= uVar28);
code_r0x0008b894:
        *puVar24 = uVar19;
        puVar24[2] = uVar5;
        puVar24[1] = uVar21;
      }
    }
    bVar1 = 0 < (int8)uVar26;
    uVar26 = uVar26 - 1;
  } while (bVar1);
  iVar10 = (uVar11 >> 3) * -0x5555555555555555;
  do {
    uVar11 = puVar22[2];
    uVar17 = puVar22[1];
    uVar26 = *puVar22;
    uVar9 = 0;
    puVar13 = puVar22;
    do {
      uVar27 = uVar9 << 1 | 1;
      uVar19 = uVar9 * 2 + 2;
      puVar18 = puVar13 + uVar9 * 3 + 3;
      if ((int8)uVar19 < iVar10) {
        iVar2 = uVar9 * 3;
        iVar14 = uVar9 * 3;
        uVar9 = uVar19;
        puVar24 = puVar13 + iVar2 + 6;
        if (puVar13[iVar2 + 6] <= puVar13[iVar14 + 3]) {
          uVar9 = uVar27;
          puVar24 = puVar18;
        }
        puVar18 = puVar24;
      }
      else {
        uVar9 = uVar27;
      }
      uVar27 = puVar18[1];
      uVar19 = *puVar18;
      puVar13[2] = puVar18[2];
      puVar13[1] = uVar27;
      *puVar13 = uVar19;
      puVar13 = puVar18;
    } while ((int8)uVar9 <= (int8)(iVar10 - 2U >> 1));
    puVar13 = puVar23 + -3;
    if (puVar18 == puVar13) {
      puVar18[2] = uVar11;
      puVar18[1] = uVar17;
      *puVar18 = uVar26;
    }
    else {
      uVar19 = puVar23[-2];
      uVar9 = *puVar13;
      puVar18[2] = puVar23[-1];
      puVar18[1] = uVar19;
      *puVar18 = uVar9;
      uVar9 = (int8)puVar18 + (0x18 - (int8)puVar22);
      puVar23[-1] = uVar11;
      puVar23[-2] = uVar17;
      *puVar13 = uVar26;
      if (0x18 < (int8)uVar9) {
        uVar11 = *puVar18;
        uVar9 = (uVar9 >> 3) * -0x5555555555555555 - 2 >> 1;
        if (puVar22[uVar9 * 3] < uVar11) {
          uVar17 = puVar18[2];
          uVar26 = puVar18[1];
          puVar23 = puVar22 + uVar9 * 3;
          do {
            puVar24 = puVar23;
            uVar27 = puVar24[1];
            uVar19 = *puVar24;
            puVar18[2] = puVar24[2];
            puVar18[1] = uVar27;
            *puVar18 = uVar19;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar18 = puVar24;
            puVar23 = puVar22 + uVar9 * 3;
          } while (puVar22[uVar9 * 3] < uVar11);
          *puVar24 = uVar11;
          puVar24[2] = uVar17;
          puVar24[1] = uVar26;
        }
      }
    }
    bVar1 = 2 < iVar10;
    iVar10 = iVar10 + -1;
    puVar23 = puVar13;
  } while (bVar1);
code_r0x0008bc30:
  if (*(int8 *)(iVar4 + 0x28) == iVar8) {
    return;
  }
code_r0x000c9620:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8ad58  size=3856 */
void FUN_0008ad58(uint8 *param_1,uint8 *param_2,int8 param_3,uint4 param_4)

{
  bool bVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint8 uVar7;
  int8 iVar8;
  uint8 uVar9;
  int8 iVar10;
  uint8 uVar11;
  uint8 *puVar12;
  uint8 *puVar13;
  int8 iVar14;
  uint8 *puVar15;
  uint8 *puVar16;
  uint8 uVar17;
  uint8 *puVar18;
  uint8 uVar19;
  uint8 uVar20;
  uint8 uVar21;
  uint8 *puVar22;
  uint8 *puVar23;
  uint8 uVar24;
  uint8 uVar25;
  uint8 uVar26;
  uint8 uStack_80;
  uint8 uStack_78;
  uint8 uStack_70;
  
  iVar4 = tpidr_el0;
  iVar8 = *(int8 *)(iVar4 + 0x28);
code_r0x0008ad98:
  puVar18 = param_2 + -3;
  puVar22 = param_2 + -6;
  puVar23 = param_2 + -9;
  puVar13 = param_1;
code_r0x0008ada8:
  do {
    param_1 = puVar13;
    uVar11 = (int8)param_2 - (int8)param_1;
    uVar9 = ((int8)uVar11 >> 3) * -0x5555555555555555;
    if (uVar9 - 2 != 0 && 1 < (int8)uVar9) {
      if (uVar9 != 3) {
        if (uVar9 != 4) {
          if (uVar9 != 5) goto code_r0x0008adf0;
          FUN_0008c09c(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
          puVar13 = param_2 + -3;
          if (*puVar13 < param_1[9]) {
            uVar17 = param_1[10];
            uVar24 = param_1[9];
            uVar9 = param_1[0xb];
            uVar19 = *puVar13;
            uVar11 = param_2[-1];
            param_1[10] = param_2[-2];
            param_1[9] = uVar19;
            param_1[0xb] = uVar11;
            param_2[-1] = uVar9;
            param_2[-2] = uVar17;
            *puVar13 = uVar24;
            if (param_1[9] < param_1[6]) {
              uVar24 = param_1[7];
              uVar11 = param_1[6];
              uVar9 = param_1[8];
              param_1[7] = param_1[10];
              param_1[6] = param_1[9];
              param_1[8] = param_1[0xb];
              param_1[10] = uVar24;
              param_1[9] = uVar11;
              param_1[0xb] = uVar9;
              if (param_1[6] < param_1[3]) {
                uVar24 = param_1[4];
                uVar11 = param_1[3];
                uVar9 = param_1[5];
                param_1[4] = param_1[7];
                param_1[3] = param_1[6];
                param_1[5] = param_1[8];
                param_1[7] = uVar24;
                param_1[6] = uVar11;
                param_1[8] = uVar9;
                if (param_1[3] < *param_1) {
                  uVar9 = param_1[2];
                  uVar24 = param_1[1];
                  uVar11 = *param_1;
                  param_1[1] = param_1[4];
                  *param_1 = param_1[3];
                  param_1[2] = param_1[5];
                  param_1[4] = uVar24;
                  param_1[3] = uVar11;
                  param_1[5] = uVar9;
                }
              }
            }
          }
          goto code_r0x0008bc30;
        }
        if (*(int8 *)(iVar4 + 0x28) == iVar8) {
          puVar13 = param_1 + 3;
          puVar22 = param_1 + 6;
          iVar4 = tpidr_el0;
          iVar8 = *(int8 *)(iVar4 + 0x28);
          uVar9 = *puVar13;
          if (uVar9 < *param_1) {
            if (*puVar22 < uVar9) {
              uVar24 = param_1[1];
              uVar11 = *param_1;
              uVar9 = param_1[2];
              param_1[1] = param_1[7];
              *param_1 = *puVar22;
              param_1[2] = param_1[8];
            }
            else {
              uVar24 = param_1[1];
              uVar11 = *param_1;
              uVar9 = param_1[2];
              param_1[1] = param_1[4];
              *param_1 = *puVar13;
              param_1[2] = param_1[5];
              param_1[4] = uVar24;
              *puVar13 = uVar11;
              param_1[5] = uVar9;
              if (*puVar13 <= *puVar22) goto code_r0x0008c19c;
              uVar24 = param_1[4];
              uVar11 = *puVar13;
              uVar9 = param_1[5];
              param_1[4] = param_1[7];
              *puVar13 = *puVar22;
              param_1[5] = param_1[8];
            }
            param_1[7] = uVar24;
            *puVar22 = uVar11;
            param_1[8] = uVar9;
          }
          else if (*puVar22 < uVar9) {
            uVar24 = param_1[4];
            uVar11 = *puVar13;
            uVar9 = param_1[5];
            param_1[4] = param_1[7];
            *puVar13 = *puVar22;
            param_1[5] = param_1[8];
            param_1[7] = uVar24;
            *puVar22 = uVar11;
            param_1[8] = uVar9;
            if (*puVar13 < *param_1) {
              uVar24 = param_1[1];
              uVar11 = *param_1;
              uVar9 = param_1[2];
              param_1[1] = param_1[4];
              *param_1 = *puVar13;
              param_1[2] = param_1[5];
              param_1[4] = uVar24;
              *puVar13 = uVar11;
              param_1[5] = uVar9;
            }
          }
code_r0x0008c19c:
          if (*puVar18 < *puVar22) {
            uVar24 = *puVar18;
            uVar9 = param_2[-1];
            uVar19 = param_1[7];
            uVar17 = *puVar22;
            uVar11 = param_1[8];
            param_1[7] = param_2[-2];
            *puVar22 = uVar24;
            param_1[8] = uVar9;
            param_2[-2] = uVar19;
            *puVar18 = uVar17;
            param_2[-1] = uVar11;
            if (*puVar22 < *puVar13) {
              uVar24 = param_1[4];
              uVar11 = *puVar13;
              uVar9 = param_1[5];
              param_1[4] = param_1[7];
              *puVar13 = *puVar22;
              param_1[5] = param_1[8];
              param_1[7] = uVar24;
              *puVar22 = uVar11;
              param_1[8] = uVar9;
              if (*puVar13 < *param_1) {
                uVar24 = param_1[1];
                uVar11 = *param_1;
                uVar9 = param_1[2];
                param_1[1] = param_1[4];
                *param_1 = *puVar13;
                param_1[2] = param_1[5];
                param_1[4] = uVar24;
                *puVar13 = uVar11;
                param_1[5] = uVar9;
              }
            }
          }
          if (*(int8 *)(iVar4 + 0x28) == iVar8) {
            return;
          }
        }
        goto code_r0x000c9620;
      }
      puVar13 = param_1 + 3;
      uVar9 = *puVar13;
      puVar18 = param_2 + -3;
      if (uVar9 < *param_1) {
        if (*puVar18 < uVar9) goto code_r0x0008b768;
        uVar24 = param_1[1];
        uVar11 = *param_1;
        uVar9 = param_1[2];
        param_1[1] = param_1[4];
        *param_1 = *puVar13;
        param_1[2] = param_1[5];
        param_1[4] = uVar24;
        *puVar13 = uVar11;
        param_1[5] = uVar9;
        if (*puVar18 < param_1[3]) {
          uVar17 = param_1[4];
          uVar24 = *puVar13;
          uVar9 = param_1[5];
          uVar19 = *puVar18;
          uVar11 = param_2[-1];
          param_1[4] = param_2[-2];
          *puVar13 = uVar19;
          param_1[5] = uVar11;
          param_2[-1] = uVar9;
code_r0x0008b794:
          param_2[-2] = uVar17;
          param_2[-3] = uVar24;
        }
      }
      else if (*puVar18 < uVar9) {
        uVar17 = param_1[4];
        uVar24 = *puVar13;
        uVar9 = param_1[5];
        uVar19 = *puVar18;
        uVar11 = param_2[-1];
        param_1[4] = param_2[-2];
        *puVar13 = uVar19;
        param_1[5] = uVar11;
        param_2[-1] = uVar9;
        param_2[-2] = uVar17;
        *puVar18 = uVar24;
        if (param_1[3] < *param_1) {
          uVar9 = param_1[2];
          uVar24 = param_1[1];
          uVar11 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = *puVar13;
          param_1[2] = param_1[5];
          param_1[4] = uVar24;
          *puVar13 = uVar11;
          param_1[5] = uVar9;
        }
      }
      goto code_r0x0008bc30;
    }
    if (uVar9 < 2) goto code_r0x0008bc30;
    if (uVar9 == 2) {
      if (param_2[-3] < *param_1) {
code_r0x0008b768:
        uVar9 = param_1[2];
        uVar17 = param_1[1];
        uVar24 = *param_1;
        uVar19 = param_2[-2];
        uVar11 = param_2[-3];
        param_1[2] = param_2[-1];
        param_1[1] = uVar19;
        *param_1 = uVar11;
        param_2[-1] = uVar9;
        goto code_r0x0008b794;
      }
      goto code_r0x0008bc30;
    }
code_r0x0008adf0:
    if ((int8)uVar11 < 0x240) {
      puVar13 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 != param_2 && puVar13 != param_2) {
          do {
            puVar18 = puVar13;
            uVar9 = param_1[3];
            if (uVar9 < *param_1) {
              uVar24 = param_1[5];
              uVar11 = param_1[4];
              puVar13 = puVar18;
              do {
                puVar22 = puVar13;
                puVar22[1] = puVar22[-2];
                *puVar22 = puVar22[-3];
                puVar22[2] = puVar22[-1];
                puVar13 = puVar22 + -3;
              } while (uVar9 < puVar22[-6]);
              puVar22[-3] = uVar9;
              puVar22[-1] = uVar24;
              puVar22[-2] = uVar11;
            }
            puVar13 = puVar18 + 3;
            param_1 = puVar18;
          } while (puVar18 + 3 != param_2);
        }
        goto code_r0x0008bc30;
      }
      if (param_1 == param_2 || puVar13 == param_2) goto code_r0x0008bc30;
      iVar10 = 0;
      puVar18 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) goto code_r0x0008bc30;
      uVar17 = uVar9 - 2 >> 1;
      uVar24 = uVar17;
      goto code_r0x0008b8ac;
    }
    puVar13 = param_1 + (uVar9 >> 1) * 3;
    uVar9 = *puVar18;
    if (uVar11 < 0xc01) {
      uVar11 = *param_1;
      if (uVar11 < *puVar13) {
        if (uVar9 < uVar11) {
          uStack_70 = puVar13[2];
          uStack_78 = puVar13[1];
          uStack_80 = *puVar13;
          uVar11 = param_2[-2];
          uVar9 = *puVar18;
          puVar13[2] = param_2[-1];
          puVar13[1] = uVar11;
          *puVar13 = uVar9;
        }
        else {
          uVar9 = puVar13[2];
          uVar17 = puVar13[1];
          uVar11 = *puVar13;
          uVar19 = param_1[1];
          uVar24 = *param_1;
          puVar13[2] = param_1[2];
          puVar13[1] = uVar19;
          *puVar13 = uVar24;
          param_1[2] = uVar9;
          param_1[1] = uVar17;
          *param_1 = uVar11;
          if (*param_1 <= *puVar18) goto code_r0x0008b410;
          uStack_70 = param_1[2];
          uStack_78 = param_1[1];
          uStack_80 = *param_1;
          uVar11 = param_2[-2];
          uVar9 = *puVar18;
          param_1[2] = param_2[-1];
          param_1[1] = uVar11;
          *param_1 = uVar9;
        }
        param_2[-1] = uStack_70;
        param_2[-2] = uStack_78;
        *puVar18 = uStack_80;
      }
      else if (uVar9 < uVar11) {
        uVar9 = param_1[2];
        uVar17 = param_1[1];
        uVar11 = *param_1;
        uVar19 = param_2[-2];
        uVar24 = *puVar18;
        param_1[2] = param_2[-1];
        param_1[1] = uVar19;
        *param_1 = uVar24;
        param_2[-1] = uVar9;
        param_2[-2] = uVar17;
        *puVar18 = uVar11;
        if (*param_1 < *puVar13) {
          uVar9 = puVar13[2];
          uVar17 = puVar13[1];
          uVar11 = *puVar13;
          uVar19 = param_1[1];
          uVar24 = *param_1;
          puVar13[2] = param_1[2];
          puVar13[1] = uVar19;
          *puVar13 = uVar24;
          param_1[2] = uVar9;
          param_1[1] = uVar17;
          *param_1 = uVar11;
        }
      }
    }
    else {
      uVar11 = *puVar13;
      if (uVar11 < *param_1) {
        if (uVar9 < uVar11) {
          uStack_70 = param_1[2];
          uStack_78 = param_1[1];
          uStack_80 = *param_1;
          uVar11 = param_2[-2];
          uVar9 = *puVar18;
          param_1[2] = param_2[-1];
          param_1[1] = uVar11;
          *param_1 = uVar9;
        }
        else {
          uVar9 = param_1[2];
          uVar17 = param_1[1];
          uVar11 = *param_1;
          uVar19 = puVar13[1];
          uVar24 = *puVar13;
          param_1[2] = puVar13[2];
          param_1[1] = uVar19;
          *param_1 = uVar24;
          puVar13[2] = uVar9;
          puVar13[1] = uVar17;
          *puVar13 = uVar11;
          if (*puVar13 <= *puVar18) goto code_r0x0008aff4;
          uStack_70 = puVar13[2];
          uStack_78 = puVar13[1];
          uStack_80 = *puVar13;
          uVar11 = param_2[-2];
          uVar9 = *puVar18;
          puVar13[2] = param_2[-1];
          puVar13[1] = uVar11;
          *puVar13 = uVar9;
        }
        param_2[-1] = uStack_70;
        param_2[-2] = uStack_78;
        *puVar18 = uStack_80;
      }
      else if (uVar9 < uVar11) {
        uVar9 = puVar13[2];
        uVar17 = puVar13[1];
        uVar11 = *puVar13;
        uVar19 = param_2[-2];
        uVar24 = *puVar18;
        puVar13[2] = param_2[-1];
        puVar13[1] = uVar19;
        *puVar13 = uVar24;
        param_2[-1] = uVar9;
        param_2[-2] = uVar17;
        *puVar18 = uVar11;
        if (*puVar13 < *param_1) {
          uVar9 = param_1[2];
          uVar17 = param_1[1];
          uVar11 = *param_1;
          uVar19 = puVar13[1];
          uVar24 = *puVar13;
          param_1[2] = puVar13[2];
          param_1[1] = uVar19;
          *param_1 = uVar24;
          puVar13[2] = uVar9;
          puVar13[1] = uVar17;
          *puVar13 = uVar11;
        }
      }
code_r0x0008aff4:
      puVar15 = param_1 + 3;
      puVar12 = puVar13 + -3;
      uVar9 = *puVar12;
      if (uVar9 < *puVar15) {
        if (*puVar22 < uVar9) {
          uVar19 = param_1[4];
          uVar24 = *puVar15;
          uVar9 = param_1[5];
          uVar17 = *puVar22;
          uVar11 = param_2[-4];
          param_1[4] = param_2[-5];
          *puVar15 = uVar17;
          param_1[5] = uVar11;
          param_2[-4] = uVar9;
        }
        else {
          uVar17 = param_1[4];
          uVar24 = *puVar15;
          uVar9 = param_1[5];
          uVar19 = *puVar12;
          uVar11 = puVar13[-1];
          param_1[4] = puVar13[-2];
          *puVar15 = uVar19;
          param_1[5] = uVar11;
          puVar13[-1] = uVar9;
          puVar13[-2] = uVar17;
          *puVar12 = uVar24;
          if (*puVar12 <= *puVar22) goto code_r0x0008b190;
          uVar9 = puVar13[-1];
          uVar19 = puVar13[-2];
          uVar24 = *puVar12;
          uVar17 = param_2[-5];
          uVar11 = *puVar22;
          puVar13[-1] = param_2[-4];
          puVar13[-2] = uVar17;
          *puVar12 = uVar11;
          param_2[-4] = uVar9;
        }
        param_2[-5] = uVar19;
        *puVar22 = uVar24;
      }
      else if (*puVar22 < uVar9) {
        uVar9 = puVar13[-1];
        uVar17 = puVar13[-2];
        uVar11 = *puVar12;
        uVar19 = param_2[-5];
        uVar24 = *puVar22;
        puVar13[-1] = param_2[-4];
        puVar13[-2] = uVar19;
        *puVar12 = uVar24;
        param_2[-4] = uVar9;
        param_2[-5] = uVar17;
        *puVar22 = uVar11;
        if (*puVar12 < *puVar15) {
          uVar17 = param_1[4];
          uVar24 = *puVar15;
          uVar9 = param_1[5];
          uVar19 = *puVar12;
          uVar11 = puVar13[-1];
          param_1[4] = puVar13[-2];
          *puVar15 = uVar19;
          param_1[5] = uVar11;
          puVar13[-1] = uVar9;
          puVar13[-2] = uVar17;
          *puVar12 = uVar24;
        }
      }
code_r0x0008b190:
      puVar16 = param_1 + 6;
      puVar15 = puVar13 + 3;
      uVar9 = *puVar15;
      if (uVar9 < *puVar16) {
        if (*puVar23 < uVar9) {
          uVar19 = param_1[7];
          uVar24 = *puVar16;
          uVar9 = param_1[8];
          uVar17 = *puVar23;
          uVar11 = param_2[-7];
          param_1[7] = param_2[-8];
          *puVar16 = uVar17;
          param_1[8] = uVar11;
          param_2[-7] = uVar9;
        }
        else {
          uVar17 = param_1[7];
          uVar24 = *puVar16;
          uVar9 = param_1[8];
          uVar19 = *puVar15;
          uVar11 = puVar13[5];
          param_1[7] = puVar13[4];
          *puVar16 = uVar19;
          param_1[8] = uVar11;
          puVar13[5] = uVar9;
          puVar13[4] = uVar17;
          *puVar15 = uVar24;
          if (*puVar15 <= *puVar23) goto code_r0x0008b2b8;
          uVar9 = puVar13[5];
          uVar19 = puVar13[4];
          uVar24 = *puVar15;
          uVar17 = param_2[-8];
          uVar11 = *puVar23;
          puVar13[5] = param_2[-7];
          puVar13[4] = uVar17;
          *puVar15 = uVar11;
          param_2[-7] = uVar9;
        }
        param_2[-8] = uVar19;
        *puVar23 = uVar24;
      }
      else if (*puVar23 < uVar9) {
        uVar9 = puVar13[5];
        uVar17 = puVar13[4];
        uVar11 = *puVar15;
        uVar19 = param_2[-8];
        uVar24 = *puVar23;
        puVar13[5] = param_2[-7];
        puVar13[4] = uVar19;
        *puVar15 = uVar24;
        param_2[-7] = uVar9;
        param_2[-8] = uVar17;
        *puVar23 = uVar11;
        if (*puVar15 < *puVar16) {
          uVar17 = param_1[7];
          uVar24 = *puVar16;
          uVar9 = param_1[8];
          uVar19 = *puVar15;
          uVar11 = puVar13[5];
          param_1[7] = puVar13[4];
          *puVar16 = uVar19;
          param_1[8] = uVar11;
          puVar13[5] = uVar9;
          puVar13[4] = uVar17;
          *puVar15 = uVar24;
        }
      }
code_r0x0008b2b8:
      uVar9 = *puVar13;
      if (uVar9 < puVar13[-3]) {
        if (puVar13[3] < uVar9) {
          uStack_70 = puVar13[-1];
          uStack_78 = puVar13[-2];
          uStack_80 = *puVar12;
          puVar13[-2] = puVar13[4];
          *puVar12 = *puVar15;
          puVar13[-1] = puVar13[5];
        }
        else {
          uVar9 = puVar13[-1];
          uVar24 = puVar13[-2];
          uVar11 = *puVar12;
          puVar13[-2] = puVar13[1];
          *puVar12 = *puVar13;
          puVar13[-1] = puVar13[2];
          puVar13[1] = uVar24;
          *puVar13 = uVar11;
          puVar13[2] = uVar9;
          if (*puVar13 <= puVar13[3]) goto code_r0x0008b3e0;
          uStack_70 = puVar13[2];
          uStack_78 = puVar13[1];
          uStack_80 = *puVar13;
          puVar13[1] = puVar13[4];
          *puVar13 = *puVar15;
          puVar13[2] = puVar13[5];
        }
        puVar13[5] = uStack_70;
        puVar13[4] = uStack_78;
        *puVar15 = uStack_80;
      }
      else if (puVar13[3] < uVar9) {
        uVar9 = puVar13[2];
        uVar24 = puVar13[1];
        uVar11 = *puVar13;
        puVar13[1] = puVar13[4];
        *puVar13 = *puVar15;
        puVar13[2] = puVar13[5];
        puVar13[5] = uVar9;
        puVar13[4] = uVar24;
        *puVar15 = uVar11;
        if (*puVar13 < puVar13[-3]) {
          uVar9 = puVar13[-1];
          uVar24 = puVar13[-2];
          uVar11 = *puVar12;
          puVar13[-2] = puVar13[1];
          *puVar12 = *puVar13;
          puVar13[-1] = puVar13[2];
          puVar13[2] = uVar9;
          puVar13[1] = uVar24;
          *puVar13 = uVar11;
        }
      }
code_r0x0008b3e0:
      uVar9 = param_1[2];
      uVar17 = param_1[1];
      uVar11 = *param_1;
      uVar19 = puVar13[1];
      uVar24 = *puVar13;
      param_1[2] = puVar13[2];
      param_1[1] = uVar19;
      *param_1 = uVar24;
      puVar13[2] = uVar9;
      puVar13[1] = uVar17;
      *puVar13 = uVar11;
    }
code_r0x0008b410:
    uVar9 = *param_1;
    param_3 = param_3 + -1;
    if (((param_4 & 1) != 0) || (param_1[-3] < uVar9)) {
      uVar24 = param_1[2];
      uVar11 = param_1[1];
      iVar10 = 0;
      do {
        iVar2 = iVar10 + 0x18;
        iVar14 = iVar10 + 0x18;
        iVar10 = iVar2;
      } while (*(uint8 *)((int8)param_1 + iVar14) < uVar9);
      puVar12 = (uint8 *)((int8)param_1 + iVar2);
      puVar15 = param_2;
      if (iVar2 == 0x18) {
        do {
          if (puVar15 <= puVar12) break;
          puVar15 = puVar15 + -3;
        } while (uVar9 <= *puVar15);
      }
      else {
        do {
          puVar15 = puVar15 + -3;
        } while (uVar9 <= *puVar15);
      }
      puVar13 = puVar12;
      if (puVar12 < puVar15) {
        puVar16 = puVar15;
        do {
          uVar17 = puVar13[2];
          uVar21 = puVar13[1];
          uVar19 = *puVar13;
          uVar5 = puVar16[1];
          uVar25 = *puVar16;
          puVar13[2] = puVar16[2];
          puVar13[1] = uVar5;
          *puVar13 = uVar25;
          puVar16[2] = uVar17;
          puVar16[1] = uVar21;
          *puVar16 = uVar19;
          do {
            puVar13 = puVar13 + 3;
          } while (*puVar13 < uVar9);
          do {
            puVar16 = puVar16 + -3;
          } while (uVar9 <= *puVar16);
        } while (puVar13 < puVar16);
      }
      puVar16 = puVar13 + -3;
      if (param_1 != puVar16) {
        uVar19 = puVar13[-2];
        uVar17 = *puVar16;
        param_1[2] = puVar13[-1];
        param_1[1] = uVar19;
        *param_1 = uVar17;
      }
      puVar13[-3] = uVar9;
      puVar13[-1] = uVar24;
      puVar13[-2] = uVar11;
      if (puVar15 <= puVar12) {
        uVar9 = FUN_0008bc68(param_1,puVar16);
        uVar11 = FUN_0008bc68(puVar13,param_2);
        if ((uVar11 & 1) != 0) goto code_r0x0008b638;
        if ((uVar9 & 1) != 0) goto code_r0x0008ada8;
      }
      FUN_0008ad58(param_1,puVar16,param_3,param_4 & 1);
      param_4 = 0;
      goto code_r0x0008ada8;
    }
    uVar24 = param_1[2];
    uVar11 = param_1[1];
    puVar13 = param_1;
    if (uVar9 < param_2[-3]) {
      do {
        puVar13 = puVar13 + 3;
      } while (*puVar13 <= uVar9);
    }
    else {
      do {
        puVar13 = puVar13 + 3;
        if (param_2 <= puVar13) break;
      } while (*puVar13 <= uVar9);
    }
    puVar12 = param_2;
    if (puVar13 < param_2) {
      do {
        puVar12 = puVar12 + -3;
      } while (uVar9 < *puVar12);
    }
    while (puVar13 < puVar12) {
      uVar17 = puVar13[2];
      uVar21 = puVar13[1];
      uVar19 = *puVar13;
      uVar5 = puVar12[1];
      uVar25 = *puVar12;
      puVar13[2] = puVar12[2];
      puVar13[1] = uVar5;
      *puVar13 = uVar25;
      puVar12[2] = uVar17;
      puVar12[1] = uVar21;
      *puVar12 = uVar19;
      do {
        puVar13 = puVar13 + 3;
      } while (*puVar13 <= uVar9);
      do {
        puVar12 = puVar12 + -3;
      } while (uVar9 < *puVar12);
    }
    if (param_1 != puVar13 + -3) {
      uVar19 = puVar13[-2];
      uVar17 = puVar13[-3];
      param_1[2] = puVar13[-1];
      param_1[1] = uVar19;
      *param_1 = uVar17;
    }
    puVar13[-3] = uVar9;
    param_4 = 0;
    puVar13[-1] = uVar24;
    puVar13[-2] = uVar11;
  } while( true );
  do {
    puVar22 = puVar13;
    uVar9 = puVar18[3];
    if (uVar9 < *puVar18) {
      uVar24 = puVar18[5];
      uVar11 = puVar18[4];
      iVar2 = iVar10;
      do {
        iVar14 = iVar2;
        pxVar3 = (xunknown8 *)((int8)param_1 + iVar14);
        pxVar3[4] = pxVar3[1];
        pxVar3[3] = *pxVar3;
        pxVar3[5] = pxVar3[2];
        if (iVar14 == 0) {
          puVar13 = param_1;
          goto code_r0x0008b808;
        }
        iVar2 = iVar14 + -0x18;
      } while (uVar9 < (uint8)pxVar3[-3]);
      puVar13 = (uint8 *)((int8)param_1 + iVar14);
code_r0x0008b808:
      *puVar13 = uVar9;
      puVar13[2] = uVar24;
      puVar13[1] = uVar11;
    }
    puVar13 = puVar22 + 3;
    iVar10 = iVar10 + 0x18;
    puVar18 = puVar22;
  } while (puVar13 != param_2);
  goto code_r0x0008bc30;
code_r0x0008b638:
  param_2 = puVar16;
  if ((uVar9 & 1) != 0) goto code_r0x0008bc30;
  goto code_r0x0008ad98;
code_r0x0008b8ac:
  do {
    if (uVar24 <= uVar17) {
      uVar25 = (uVar24 & 0x3fffffffffffffff) << 1 | 1;
      uVar19 = uVar24 * 2 + 2;
      puVar13 = param_1 + uVar25 * 3;
      if ((int8)uVar19 < (int8)uVar9) {
        uVar20 = *puVar13;
        uVar5 = puVar13[3];
        uVar21 = uVar20;
        if (uVar20 <= uVar5) {
          uVar21 = uVar5;
        }
        puVar18 = puVar13 + 3;
        if (uVar5 <= uVar20) {
          uVar19 = uVar25;
          puVar18 = puVar13;
        }
        puVar13 = puVar18;
        uVar25 = uVar19;
      }
      else {
        uVar21 = *puVar13;
      }
      puVar18 = param_1 + uVar24 * 3;
      uVar19 = *puVar18;
      if (uVar19 <= uVar21) {
        uVar5 = puVar18[2];
        uVar21 = puVar18[1];
        do {
          while( true ) {
            puVar22 = puVar13;
            uVar26 = puVar22[1];
            uVar20 = *puVar22;
            puVar18[2] = puVar22[2];
            puVar18[1] = uVar26;
            *puVar18 = uVar20;
            if ((int8)uVar17 < (int8)uVar25) goto code_r0x0008b894;
            uVar20 = uVar25 << 1 | 1;
            puVar23 = param_1 + uVar20 * 3;
            uVar25 = uVar25 * 2 + 2;
            puVar18 = puVar22;
            if ((int8)uVar25 < (int8)uVar9) break;
            puVar13 = puVar23;
            uVar25 = uVar20;
            if (*puVar23 < uVar19) goto code_r0x0008b894;
          }
          uVar6 = *puVar23;
          uVar7 = puVar23[3];
          uVar26 = uVar6;
          if (uVar6 <= uVar7) {
            uVar26 = uVar7;
          }
          puVar13 = puVar23 + 3;
          if (uVar7 <= uVar6) {
            uVar25 = uVar20;
            puVar13 = puVar23;
          }
        } while (uVar19 <= uVar26);
code_r0x0008b894:
        *puVar22 = uVar19;
        puVar22[2] = uVar5;
        puVar22[1] = uVar21;
      }
    }
    bVar1 = 0 < (int8)uVar24;
    uVar24 = uVar24 - 1;
  } while (bVar1);
  iVar10 = (uVar11 >> 3) * -0x5555555555555555;
  do {
    uVar11 = param_1[2];
    uVar17 = param_1[1];
    uVar24 = *param_1;
    uVar9 = 0;
    puVar13 = param_1;
    do {
      uVar25 = uVar9 << 1 | 1;
      uVar19 = uVar9 * 2 + 2;
      puVar18 = puVar13 + uVar9 * 3 + 3;
      if ((int8)uVar19 < iVar10) {
        iVar2 = uVar9 * 3;
        iVar14 = uVar9 * 3;
        uVar9 = uVar19;
        puVar22 = puVar13 + iVar2 + 6;
        if (puVar13[iVar2 + 6] <= puVar13[iVar14 + 3]) {
          uVar9 = uVar25;
          puVar22 = puVar18;
        }
        puVar18 = puVar22;
      }
      else {
        uVar9 = uVar25;
      }
      uVar25 = puVar18[1];
      uVar19 = *puVar18;
      puVar13[2] = puVar18[2];
      puVar13[1] = uVar25;
      *puVar13 = uVar19;
      puVar13 = puVar18;
    } while ((int8)uVar9 <= (int8)(iVar10 - 2U >> 1));
    puVar13 = param_2 + -3;
    if (puVar18 == puVar13) {
      puVar18[2] = uVar11;
      puVar18[1] = uVar17;
      *puVar18 = uVar24;
    }
    else {
      uVar19 = param_2[-2];
      uVar9 = *puVar13;
      puVar18[2] = param_2[-1];
      puVar18[1] = uVar19;
      *puVar18 = uVar9;
      uVar9 = (int8)puVar18 + (0x18 - (int8)param_1);
      param_2[-1] = uVar11;
      param_2[-2] = uVar17;
      *puVar13 = uVar24;
      if (0x18 < (int8)uVar9) {
        uVar11 = *puVar18;
        uVar9 = (uVar9 >> 3) * -0x5555555555555555 - 2 >> 1;
        if (param_1[uVar9 * 3] < uVar11) {
          uVar17 = puVar18[2];
          uVar24 = puVar18[1];
          puVar22 = param_1 + uVar9 * 3;
          do {
            puVar23 = puVar22;
            uVar25 = puVar23[1];
            uVar19 = *puVar23;
            puVar18[2] = puVar23[2];
            puVar18[1] = uVar25;
            *puVar18 = uVar19;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar18 = puVar23;
            puVar22 = param_1 + uVar9 * 3;
          } while (param_1[uVar9 * 3] < uVar11);
          *puVar23 = uVar11;
          puVar23[2] = uVar17;
          puVar23[1] = uVar24;
        }
      }
    }
    bVar1 = 2 < iVar10;
    iVar10 = iVar10 + -1;
    param_2 = puVar13;
  } while (bVar1);
code_r0x0008bc30:
  if (*(int8 *)(iVar4 + 0x28) == iVar8) {
    return;
  }
code_r0x000c9620:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8bc68  size=1076 */
void FUN_0008bc68(uint8 *param_1,uint8 *param_2)

{
  uint8 *puVar1;
  int8 iVar2;
  int8 iVar3;
  bool bVar4;
  uint8 uVar5;
  uint8 *puVar6;
  int8 iVar7;
  int8 iVar8;
  uint8 uVar9;
  uint8 *puVar10;
  int8 iVar11;
  int4 iVar12;
  uint8 uVar13;
  uint8 uVar14;
  uint8 uVar15;
  
  iVar2 = tpidr_el0;
  uVar5 = ((int8)param_2 - (int8)param_1 >> 3) * -0x5555555555555555;
  iVar8 = *(int8 *)(iVar2 + 0x28);
  if ((int8)uVar5 < 3) {
    if (1 < uVar5) {
      if (uVar5 == 2) {
        if (param_2[-3] < *param_1) {
code_r0x0008bde0:
          uVar13 = param_2[-3];
          uVar5 = param_2[-1];
          uVar15 = param_1[1];
          uVar14 = *param_1;
          uVar9 = param_1[2];
          param_1[1] = param_2[-2];
          *param_1 = uVar13;
          param_1[2] = uVar5;
          bVar4 = true;
          param_2[-2] = uVar15;
          param_2[-3] = uVar14;
          param_2[-1] = uVar9;
          goto code_r0x0008c064;
        }
      }
      else {
code_r0x0008be08:
        puVar10 = param_1 + 3;
        uVar9 = *puVar10;
        puVar6 = param_1 + 6;
        uVar5 = *puVar6;
        if (uVar9 < *param_1) {
          if (uVar5 < uVar9) {
            uVar13 = param_1[1];
            uVar9 = *param_1;
            uVar5 = param_1[2];
            param_1[1] = param_1[7];
            *param_1 = *puVar6;
            param_1[2] = param_1[8];
            param_1[7] = uVar13;
            *puVar6 = uVar9;
            param_1[8] = uVar5;
          }
          else {
            uVar14 = param_1[4];
            uVar13 = *puVar10;
            uVar9 = param_1[5];
            param_1[4] = param_1[1];
            *puVar10 = *param_1;
            param_1[5] = param_1[2];
            param_1[1] = uVar14;
            *param_1 = uVar13;
            param_1[2] = uVar9;
            if (uVar5 < param_1[3]) {
              uVar13 = param_1[4];
              uVar9 = *puVar10;
              uVar5 = param_1[5];
              param_1[4] = param_1[7];
              *puVar10 = *puVar6;
              param_1[5] = param_1[8];
              param_1[7] = uVar13;
              *puVar6 = uVar9;
              param_1[8] = uVar5;
            }
          }
        }
        else if (uVar5 < uVar9) {
          uVar13 = param_1[4];
          uVar9 = *puVar10;
          uVar5 = param_1[5];
          param_1[4] = param_1[7];
          *puVar10 = *puVar6;
          param_1[5] = param_1[8];
          param_1[7] = uVar13;
          *puVar6 = uVar9;
          param_1[8] = uVar5;
          if (*puVar10 < *param_1) {
            uVar13 = param_1[1];
            uVar9 = *param_1;
            uVar5 = param_1[2];
            param_1[1] = param_1[4];
            *param_1 = *puVar10;
            param_1[2] = param_1[5];
            param_1[4] = uVar13;
            *puVar10 = uVar9;
            param_1[5] = uVar5;
          }
        }
        if (param_1 + 9 != param_2) {
          iVar11 = 0;
          iVar12 = 0;
          puVar10 = param_1 + 9;
          do {
            uVar5 = *puVar10;
            if (uVar5 < *puVar6) {
              uVar13 = puVar10[2];
              uVar9 = puVar10[1];
              iVar3 = iVar11;
              do {
                iVar7 = iVar3;
                *(xunknown8 *)((int8)param_1 + iVar7 + 0x50) =
                     *(xunknown8 *)((int8)param_1 + iVar7 + 0x38);
                *(xunknown8 *)((int8)param_1 + iVar7 + 0x48) =
                     *(xunknown8 *)((int8)param_1 + iVar7 + 0x30);
                *(xunknown8 *)((int8)param_1 + iVar7 + 0x58) =
                     *(xunknown8 *)((int8)param_1 + iVar7 + 0x40);
                if (iVar7 == -0x30) {
                  puVar6 = param_1;
                  goto code_r0x0008bfdc;
                }
                iVar3 = iVar7 + -0x18;
              } while (uVar5 < *(uint8 *)((int8)param_1 + iVar7 + 0x18));
              puVar6 = (uint8 *)((int8)param_1 + iVar7 + 0x30);
code_r0x0008bfdc:
              iVar12 = iVar12 + 1;
              *puVar6 = uVar5;
              puVar6[2] = uVar13;
              puVar6[1] = uVar9;
              if (iVar12 == 8) {
                bVar4 = puVar10 + 3 == param_2;
                goto code_r0x0008c064;
              }
            }
            puVar1 = puVar10 + 3;
            iVar11 = iVar11 + 0x18;
            puVar6 = puVar10;
            puVar10 = puVar1;
          } while (puVar1 != param_2);
        }
      }
    }
  }
  else if (uVar5 == 3) {
    puVar10 = param_1 + 3;
    uVar5 = *puVar10;
    puVar6 = param_2 + -3;
    if (uVar5 < *param_1) {
      if (*puVar6 < uVar5) goto code_r0x0008bde0;
      uVar13 = param_1[1];
      uVar9 = *param_1;
      uVar5 = param_1[2];
      param_1[1] = param_1[4];
      *param_1 = *puVar10;
      param_1[2] = param_1[5];
      param_1[4] = uVar13;
      *puVar10 = uVar9;
      param_1[5] = uVar5;
      if (*puVar6 < param_1[3]) {
        uVar13 = *puVar6;
        uVar5 = param_2[-1];
        bVar4 = true;
        uVar15 = param_1[4];
        uVar14 = *puVar10;
        uVar9 = param_1[5];
        param_1[4] = param_2[-2];
        *puVar10 = uVar13;
        param_1[5] = uVar5;
        param_2[-2] = uVar15;
        *puVar6 = uVar14;
        param_2[-1] = uVar9;
        goto code_r0x0008c064;
      }
    }
    else if (*puVar6 < uVar5) {
      uVar13 = *puVar6;
      uVar5 = param_2[-1];
      uVar15 = param_1[4];
      uVar14 = *puVar10;
      uVar9 = param_1[5];
      param_1[4] = param_2[-2];
      *puVar10 = uVar13;
      param_1[5] = uVar5;
      param_2[-2] = uVar15;
      *puVar6 = uVar14;
      param_2[-1] = uVar9;
      if (param_1[3] < *param_1) {
        uVar13 = param_1[1];
        uVar9 = *param_1;
        uVar5 = param_1[2];
        param_1[1] = param_1[4];
        *param_1 = *puVar10;
        param_1[2] = param_1[5];
        bVar4 = true;
        param_1[4] = uVar13;
        *puVar10 = uVar9;
        param_1[5] = uVar5;
        goto code_r0x0008c064;
      }
    }
  }
  else if (uVar5 == 4) {
    FUN_0008c09c(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
  }
  else {
    if (uVar5 != 5) goto code_r0x0008be08;
    FUN_0008c09c(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
    puVar6 = param_2 + -3;
    if (*puVar6 < param_1[9]) {
      uVar13 = *puVar6;
      uVar5 = param_2[-1];
      uVar15 = param_1[10];
      uVar14 = param_1[9];
      uVar9 = param_1[0xb];
      param_1[10] = param_2[-2];
      param_1[9] = uVar13;
      param_1[0xb] = uVar5;
      param_2[-2] = uVar15;
      *puVar6 = uVar14;
      param_2[-1] = uVar9;
      if (param_1[9] < param_1[6]) {
        uVar13 = param_1[7];
        uVar9 = param_1[6];
        uVar5 = param_1[8];
        param_1[7] = param_1[10];
        param_1[6] = param_1[9];
        param_1[8] = param_1[0xb];
        param_1[10] = uVar13;
        param_1[9] = uVar9;
        param_1[0xb] = uVar5;
        if (param_1[6] < param_1[3]) {
          uVar13 = param_1[4];
          uVar9 = param_1[3];
          uVar5 = param_1[5];
          param_1[4] = param_1[7];
          param_1[3] = param_1[6];
          param_1[5] = param_1[8];
          param_1[7] = uVar13;
          param_1[6] = uVar9;
          param_1[8] = uVar5;
          if (param_1[3] < *param_1) {
            bVar4 = true;
            uVar13 = param_1[1];
            uVar9 = *param_1;
            uVar5 = param_1[2];
            param_1[1] = param_1[4];
            *param_1 = param_1[3];
            param_1[2] = param_1[5];
            param_1[4] = uVar13;
            param_1[3] = uVar9;
            param_1[5] = uVar5;
            goto code_r0x0008c064;
          }
        }
      }
    }
  }
  bVar4 = true;
code_r0x0008c064:
  if (*(int8 *)(iVar2 + 0x28) == iVar8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(bVar4);
  return;
}

/* 0x8c09c  size=436 */
void FUN_0008c09c(uint8 *param_1,uint8 *param_2,uint8 *param_3,uint8 *param_4)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint8 uVar7;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  uVar3 = *param_2;
  if (uVar3 < *param_1) {
    if (*param_3 < uVar3) {
      uVar5 = *param_3;
      uVar3 = param_3[2];
      uVar7 = param_1[1];
      uVar6 = *param_1;
      uVar4 = param_1[2];
      param_1[1] = param_3[1];
      *param_1 = uVar5;
      param_1[2] = uVar3;
    }
    else {
      uVar5 = *param_2;
      uVar3 = param_2[2];
      uVar7 = param_1[1];
      uVar6 = *param_1;
      uVar4 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[2] = uVar3;
      param_2[1] = uVar7;
      *param_2 = uVar6;
      param_2[2] = uVar4;
      if (*param_2 <= *param_3) goto code_r0x0008c19c;
      uVar5 = *param_3;
      uVar3 = param_3[2];
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar4 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar5;
      param_2[2] = uVar3;
    }
    param_3[1] = uVar7;
    *param_3 = uVar6;
    param_3[2] = uVar4;
  }
  else if (*param_3 < uVar3) {
    uVar5 = *param_3;
    uVar3 = param_3[2];
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar4 = param_2[2];
    param_2[1] = param_3[1];
    *param_2 = uVar5;
    param_2[2] = uVar3;
    param_3[1] = uVar7;
    *param_3 = uVar6;
    param_3[2] = uVar4;
    if (*param_2 < *param_1) {
      uVar5 = *param_2;
      uVar3 = param_2[2];
      uVar7 = param_1[1];
      uVar6 = *param_1;
      uVar4 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[2] = uVar3;
      param_2[1] = uVar7;
      *param_2 = uVar6;
      param_2[2] = uVar4;
    }
  }
code_r0x0008c19c:
  if (*param_4 < *param_3) {
    uVar5 = *param_4;
    uVar3 = param_4[2];
    uVar7 = param_3[1];
    uVar6 = *param_3;
    uVar4 = param_3[2];
    param_3[1] = param_4[1];
    *param_3 = uVar5;
    param_3[2] = uVar3;
    param_4[1] = uVar7;
    *param_4 = uVar6;
    param_4[2] = uVar4;
    if (*param_3 < *param_2) {
      uVar5 = *param_3;
      uVar3 = param_3[2];
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar4 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar5;
      param_2[2] = uVar3;
      param_3[1] = uVar7;
      *param_3 = uVar6;
      param_3[2] = uVar4;
      if (*param_2 < *param_1) {
        uVar5 = *param_2;
        uVar3 = param_2[2];
        uVar7 = param_1[1];
        uVar6 = *param_1;
        uVar4 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = uVar5;
        param_1[2] = uVar3;
        param_2[1] = uVar7;
        *param_2 = uVar6;
        param_2[2] = uVar4;
      }
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8c250  size=300 */
void FUN_0008c250(xunknown8 *param_1,int8 *param_2,int8 *param_3)

{
  uint8 uVar1;
  int8 *piVar2;
  uint8 uVar3;
  uint8 uVar4;
  int8 *piVar5;
  uint8 uVar6;
  int8 iVar7;
  uint8 uVar8;
  int8 iVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar6 = uVar4 - 1;
  if ((uVar4 & uVar6) == 0) {
    uVar3 = uVar6 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  iVar7 = *param_2;
  piVar2 = *(int8 **)(iVar7 + uVar3 * 8);
  do {
    piVar5 = piVar2;
    piVar2 = (int8 *)*piVar5;
  } while ((int8 *)*piVar5 != param_3);
  if (piVar5 != param_2 + 2) {
    uVar8 = piVar5[1];
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto code_r0x0008c304;
  }
  if (*param_3 != 0) {
    uVar8 = *(uint8 *)(*param_3 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto code_r0x0008c304;
  }
  *(xunknown8 *)(iVar7 + uVar3 * 8) = 0;
code_r0x0008c304:
  iVar9 = *param_3;
  if (iVar9 != 0) {
    uVar8 = *(uint8 *)(iVar9 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar6 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(int8 **)(iVar7 + uVar8 * 8) = piVar5;
      iVar9 = *param_3;
    }
  }
  iVar7 = param_2[3];
  *piVar5 = iVar9;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = iVar7 + -1;
  *(xunknown1 *)(param_1 + 2) = 1;
  return;
}

/* 0x8c37c  size=20 */
void FUN_0008c37c(xunknown8 param_1,xunknown8 param_2,float4 *param_3)

{
  float4 *pfVar1;
  float4 *pfVar2;
  float4 *pfVar3;
  float4 *pfVar4;
  uint8 uVar5;
  float4 *pfVar6;
  int4 iVar7;
  float4 *pfVar8;
  float4 *pfVar9;
  float4 *pfVar10;
  float4 fVar11;
  float4 fVar12;
  float4 fVar13;
  xunknown1 axVar14 [16];
  
  FUN_0005eb94(0x371ec /* "vector" */);
  axVar14 = FUN_0005eb94(0x371ec /* "vector" */);
  pfVar3 = axVar14._8_8_;
  pfVar2 = axVar14._0_8_;
code_r0x0008c3a4:
  if (pfVar3 == param_3) {
    return;
  }
  uVar5 = (int8)param_3 - (int8)pfVar2 >> 2;
  if (uVar5 < 2) {
    return;
  }
  if (uVar5 == 3) {
    fVar11 = *pfVar2;
    fVar12 = pfVar2[1];
    fVar13 = param_3[-1];
    if (fVar11 <= fVar12) {
      if (fVar12 <= fVar13) {
        return;
      }
      pfVar2[1] = fVar13;
      param_3[-1] = fVar12;
      fVar11 = *pfVar2;
      if (pfVar2[1] < fVar11) {
        *pfVar2 = pfVar2[1];
        pfVar2[1] = fVar11;
        return;
      }
      return;
    }
    if (fVar13 < fVar12) {
      *pfVar2 = fVar13;
      param_3[-1] = fVar11;
      return;
    }
    *pfVar2 = fVar12;
    pfVar2[1] = fVar11;
    if (param_3[-1] < fVar11) {
      pfVar2[1] = param_3[-1];
      param_3[-1] = fVar11;
      return;
    }
    return;
  }
  if (uVar5 == 2) {
    fVar11 = *pfVar2;
    if (param_3[-1] < fVar11) {
      *pfVar2 = param_3[-1];
      param_3[-1] = fVar11;
      return;
    }
    return;
  }
  if ((int8)uVar5 < 8) {
    while (pfVar3 = pfVar2, pfVar3 != param_3 + -1) {
      pfVar2 = pfVar3 + 1;
      if ((pfVar3 != param_3) && (pfVar2 != param_3)) {
        fVar12 = *pfVar3;
        pfVar4 = pfVar3;
        pfVar6 = pfVar2;
        fVar11 = fVar12;
        do {
          pfVar8 = pfVar6 + 1;
          pfVar9 = pfVar6;
          fVar13 = *pfVar6;
          if (fVar11 <= *pfVar6) {
            pfVar9 = pfVar4;
            fVar13 = fVar11;
          }
          fVar11 = fVar13;
          pfVar4 = pfVar9;
          pfVar6 = pfVar8;
        } while (pfVar8 != param_3);
        if (pfVar9 != pfVar3) {
          *pfVar3 = *pfVar9;
          *pfVar9 = fVar12;
        }
      }
    }
    return;
  }
  fVar11 = *pfVar2;
  pfVar6 = param_3 + -1;
  fVar13 = *pfVar6;
  pfVar4 = pfVar2 + ((uint8)((int8)param_3 - (int8)pfVar2) >> 3);
  fVar12 = *pfVar4;
  if (fVar11 <= fVar12) {
    if (fVar12 <= fVar13) {
      iVar7 = 0;
    }
    else {
      *pfVar4 = fVar13;
      *pfVar6 = fVar12;
      fVar11 = *pfVar2;
      if (fVar11 <= *pfVar4) goto code_r0x0008c464;
      *pfVar2 = *pfVar4;
      iVar7 = 2;
      *pfVar4 = fVar11;
    }
  }
  else {
    if (fVar12 <= fVar13) {
      *pfVar2 = fVar12;
      *pfVar4 = fVar11;
      if (fVar11 <= *pfVar6) {
code_r0x0008c464:
        iVar7 = 1;
        goto code_r0x0008c468;
      }
      iVar7 = 2;
      *pfVar4 = *pfVar6;
    }
    else {
      *pfVar2 = fVar13;
      iVar7 = 1;
    }
    *pfVar6 = fVar11;
  }
code_r0x0008c468:
  fVar11 = *pfVar2;
  pfVar9 = pfVar6;
  if (*pfVar4 <= fVar11) goto code_r0x0008c484;
  goto code_r0x0008c4a8;
code_r0x0008c484:
  while (pfVar9 = pfVar9 + -1, pfVar9 != pfVar2) {
    if (*pfVar9 < *pfVar4) goto code_r0x0008c49c;
  }
  pfVar4 = pfVar2 + 1;
  pfVar9 = pfVar4;
  if (*pfVar6 <= fVar11) {
    while( true ) {
      if (pfVar9 == pfVar6) {
        return;
      }
      fVar12 = *pfVar9;
      if (fVar11 < fVar12) break;
      pfVar9 = pfVar9 + 1;
    }
    pfVar4 = pfVar9 + 1;
    *pfVar9 = *pfVar6;
    *pfVar6 = fVar12;
  }
  if (pfVar4 == pfVar6) {
    return;
  }
  while( true ) {
    do {
      pfVar9 = pfVar4;
      pfVar4 = pfVar9 + 1;
      fVar11 = *pfVar9;
    } while (fVar11 <= *pfVar2);
    do {
      pfVar6 = pfVar6 + -1;
    } while (*pfVar2 < *pfVar6);
    if (pfVar6 <= pfVar9) break;
    *pfVar9 = *pfVar6;
    *pfVar6 = fVar11;
  }
  pfVar2 = pfVar9;
  if (pfVar3 < pfVar9) {
    return;
  }
  goto code_r0x0008c3a4;
code_r0x0008c49c:
  iVar7 = iVar7 + 1;
  *pfVar2 = *pfVar9;
  *pfVar9 = fVar11;
code_r0x0008c4a8:
  pfVar6 = pfVar2 + 1;
  if (pfVar6 < pfVar9) {
    pfVar10 = pfVar6;
    while( true ) {
      do {
        pfVar8 = pfVar10;
        pfVar10 = pfVar8 + 1;
        fVar11 = *pfVar8;
      } while (fVar11 < *pfVar4);
      do {
        pfVar9 = pfVar9 + -1;
      } while (*pfVar4 <= *pfVar9);
      if (pfVar9 <= pfVar8) break;
      *pfVar8 = *pfVar9;
      iVar7 = iVar7 + 1;
      *pfVar9 = fVar11;
      pfVar1 = pfVar9;
      if (pfVar8 != pfVar4) {
        pfVar1 = pfVar4;
      }
      pfVar4 = pfVar1;
    }
  }
  else {
    pfVar8 = pfVar6;
  }
  if (pfVar8 != pfVar4) {
    fVar11 = *pfVar8;
    if (*pfVar4 < fVar11) {
      iVar7 = iVar7 + 1;
      *pfVar8 = *pfVar4;
      *pfVar4 = fVar11;
    }
  }
  if (pfVar3 == pfVar8) {
    return;
  }
  if (iVar7 == 0) {
    pfVar4 = pfVar8;
    if (pfVar3 < pfVar8) {
      do {
        if (pfVar6 == pfVar8) {
          return;
        }
        pfVar4 = pfVar6 + -1;
        fVar11 = *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (*pfVar4 <= fVar11);
    }
    else {
      do {
        pfVar6 = pfVar4 + 1;
        if (pfVar6 == param_3) {
          return;
        }
        fVar11 = *pfVar4;
        pfVar4 = pfVar6;
      } while (fVar11 <= *pfVar6);
    }
  }
  if (pfVar8 <= pfVar3) {
    pfVar2 = pfVar8 + 1;
    pfVar8 = param_3;
  }
  param_3 = pfVar8;
  goto code_r0x0008c3a4;
}

/* 0x8c390  size=20 */
void FUN_0008c390(xunknown8 param_1,xunknown8 param_2,float4 *param_3)

{
  float4 *pfVar1;
  float4 *pfVar2;
  float4 *pfVar3;
  float4 *pfVar4;
  uint8 uVar5;
  float4 *pfVar6;
  int4 iVar7;
  float4 *pfVar8;
  float4 *pfVar9;
  float4 *pfVar10;
  float4 fVar11;
  float4 fVar12;
  float4 fVar13;
  xunknown1 axVar14 [16];
  
  axVar14 = FUN_0005eb94(0x371ec /* "vector" */);
  pfVar3 = axVar14._8_8_;
  pfVar2 = axVar14._0_8_;
code_r0x0008c3a4:
  if (pfVar3 == param_3) {
    return;
  }
  uVar5 = (int8)param_3 - (int8)pfVar2 >> 2;
  if (uVar5 < 2) {
    return;
  }
  if (uVar5 == 3) {
    fVar11 = *pfVar2;
    fVar12 = pfVar2[1];
    fVar13 = param_3[-1];
    if (fVar11 <= fVar12) {
      if (fVar12 <= fVar13) {
        return;
      }
      pfVar2[1] = fVar13;
      param_3[-1] = fVar12;
      fVar11 = *pfVar2;
      if (pfVar2[1] < fVar11) {
        *pfVar2 = pfVar2[1];
        pfVar2[1] = fVar11;
        return;
      }
      return;
    }
    if (fVar13 < fVar12) {
      *pfVar2 = fVar13;
      param_3[-1] = fVar11;
      return;
    }
    *pfVar2 = fVar12;
    pfVar2[1] = fVar11;
    if (param_3[-1] < fVar11) {
      pfVar2[1] = param_3[-1];
      param_3[-1] = fVar11;
      return;
    }
    return;
  }
  if (uVar5 == 2) {
    fVar11 = *pfVar2;
    if (param_3[-1] < fVar11) {
      *pfVar2 = param_3[-1];
      param_3[-1] = fVar11;
      return;
    }
    return;
  }
  if ((int8)uVar5 < 8) {
    while (pfVar3 = pfVar2, pfVar3 != param_3 + -1) {
      pfVar2 = pfVar3 + 1;
      if ((pfVar3 != param_3) && (pfVar2 != param_3)) {
        fVar12 = *pfVar3;
        pfVar4 = pfVar3;
        pfVar6 = pfVar2;
        fVar11 = fVar12;
        do {
          pfVar8 = pfVar6 + 1;
          pfVar9 = pfVar6;
          fVar13 = *pfVar6;
          if (fVar11 <= *pfVar6) {
            pfVar9 = pfVar4;
            fVar13 = fVar11;
          }
          fVar11 = fVar13;
          pfVar4 = pfVar9;
          pfVar6 = pfVar8;
        } while (pfVar8 != param_3);
        if (pfVar9 != pfVar3) {
          *pfVar3 = *pfVar9;
          *pfVar9 = fVar12;
        }
      }
    }
    return;
  }
  fVar11 = *pfVar2;
  pfVar6 = param_3 + -1;
  fVar13 = *pfVar6;
  pfVar4 = pfVar2 + ((uint8)((int8)param_3 - (int8)pfVar2) >> 3);
  fVar12 = *pfVar4;
  if (fVar11 <= fVar12) {
    if (fVar12 <= fVar13) {
      iVar7 = 0;
    }
    else {
      *pfVar4 = fVar13;
      *pfVar6 = fVar12;
      fVar11 = *pfVar2;
      if (fVar11 <= *pfVar4) goto code_r0x0008c464;
      *pfVar2 = *pfVar4;
      iVar7 = 2;
      *pfVar4 = fVar11;
    }
  }
  else {
    if (fVar12 <= fVar13) {
      *pfVar2 = fVar12;
      *pfVar4 = fVar11;
      if (fVar11 <= *pfVar6) {
code_r0x0008c464:
        iVar7 = 1;
        goto code_r0x0008c468;
      }
      iVar7 = 2;
      *pfVar4 = *pfVar6;
    }
    else {
      *pfVar2 = fVar13;
      iVar7 = 1;
    }
    *pfVar6 = fVar11;
  }
code_r0x0008c468:
  fVar11 = *pfVar2;
  pfVar9 = pfVar6;
  if (*pfVar4 <= fVar11) goto code_r0x0008c484;
  goto code_r0x0008c4a8;
code_r0x0008c484:
  while (pfVar9 = pfVar9 + -1, pfVar9 != pfVar2) {
    if (*pfVar9 < *pfVar4) goto code_r0x0008c49c;
  }
  pfVar4 = pfVar2 + 1;
  pfVar9 = pfVar4;
  if (*pfVar6 <= fVar11) {
    while( true ) {
      if (pfVar9 == pfVar6) {
        return;
      }
      fVar12 = *pfVar9;
      if (fVar11 < fVar12) break;
      pfVar9 = pfVar9 + 1;
    }
    pfVar4 = pfVar9 + 1;
    *pfVar9 = *pfVar6;
    *pfVar6 = fVar12;
  }
  if (pfVar4 == pfVar6) {
    return;
  }
  while( true ) {
    do {
      pfVar9 = pfVar4;
      pfVar4 = pfVar9 + 1;
      fVar11 = *pfVar9;
    } while (fVar11 <= *pfVar2);
    do {
      pfVar6 = pfVar6 + -1;
    } while (*pfVar2 < *pfVar6);
    if (pfVar6 <= pfVar9) break;
    *pfVar9 = *pfVar6;
    *pfVar6 = fVar11;
  }
  pfVar2 = pfVar9;
  if (pfVar3 < pfVar9) {
    return;
  }
  goto code_r0x0008c3a4;
code_r0x0008c49c:
  iVar7 = iVar7 + 1;
  *pfVar2 = *pfVar9;
  *pfVar9 = fVar11;
code_r0x0008c4a8:
  pfVar6 = pfVar2 + 1;
  if (pfVar6 < pfVar9) {
    pfVar10 = pfVar6;
    while( true ) {
      do {
        pfVar8 = pfVar10;
        pfVar10 = pfVar8 + 1;
        fVar11 = *pfVar8;
      } while (fVar11 < *pfVar4);
      do {
        pfVar9 = pfVar9 + -1;
      } while (*pfVar4 <= *pfVar9);
      if (pfVar9 <= pfVar8) break;
      *pfVar8 = *pfVar9;
      iVar7 = iVar7 + 1;
      *pfVar9 = fVar11;
      pfVar1 = pfVar9;
      if (pfVar8 != pfVar4) {
        pfVar1 = pfVar4;
      }
      pfVar4 = pfVar1;
    }
  }
  else {
    pfVar8 = pfVar6;
  }
  if (pfVar8 != pfVar4) {
    fVar11 = *pfVar8;
    if (*pfVar4 < fVar11) {
      iVar7 = iVar7 + 1;
      *pfVar8 = *pfVar4;
      *pfVar4 = fVar11;
    }
  }
  if (pfVar3 == pfVar8) {
    return;
  }
  if (iVar7 == 0) {
    pfVar4 = pfVar8;
    if (pfVar3 < pfVar8) {
      do {
        if (pfVar6 == pfVar8) {
          return;
        }
        pfVar4 = pfVar6 + -1;
        fVar11 = *pfVar6;
        pfVar6 = pfVar6 + 1;
      } while (*pfVar4 <= fVar11);
    }
    else {
      do {
        pfVar6 = pfVar4 + 1;
        if (pfVar6 == param_3) {
          return;
        }
        fVar11 = *pfVar4;
        pfVar4 = pfVar6;
      } while (fVar11 <= *pfVar6);
    }
  }
  if (pfVar8 <= pfVar3) {
    pfVar2 = pfVar8 + 1;
    pfVar8 = param_3;
  }
  param_3 = pfVar8;
  goto code_r0x0008c3a4;
}

/* 0x8c3a4  size=852 */
void FUN_0008c3a4(float4 *param_1,float4 *param_2,float4 *param_3)

{
  float4 *pfVar1;
  float4 *pfVar2;
  uint8 uVar3;
  float4 *pfVar4;
  int4 iVar5;
  float4 *pfVar6;
  float4 *pfVar7;
  float4 *pfVar8;
  float4 fVar9;
  float4 fVar10;
  float4 fVar11;
  
code_r0x0008c3a4:
  if (param_2 == param_3) {
    return;
  }
  uVar3 = (int8)param_3 - (int8)param_1 >> 2;
  if (uVar3 < 2) {
    return;
  }
  if (uVar3 == 3) {
    fVar9 = *param_1;
    fVar10 = param_1[1];
    fVar11 = param_3[-1];
    if (fVar9 <= fVar10) {
      if (fVar10 <= fVar11) {
        return;
      }
      param_1[1] = fVar11;
      param_3[-1] = fVar10;
      fVar9 = *param_1;
      if (param_1[1] < fVar9) {
        *param_1 = param_1[1];
        param_1[1] = fVar9;
        return;
      }
      return;
    }
    if (fVar11 < fVar10) {
      *param_1 = fVar11;
      param_3[-1] = fVar9;
      return;
    }
    *param_1 = fVar10;
    param_1[1] = fVar9;
    if (param_3[-1] < fVar9) {
      param_1[1] = param_3[-1];
      param_3[-1] = fVar9;
      return;
    }
    return;
  }
  if (uVar3 == 2) {
    fVar9 = *param_1;
    if (param_3[-1] < fVar9) {
      *param_1 = param_3[-1];
      param_3[-1] = fVar9;
      return;
    }
    return;
  }
  if ((int8)uVar3 < 8) {
    while (pfVar2 = param_1, pfVar2 != param_3 + -1) {
      param_1 = pfVar2 + 1;
      if ((pfVar2 != param_3) && (param_1 != param_3)) {
        fVar10 = *pfVar2;
        pfVar4 = pfVar2;
        pfVar7 = param_1;
        fVar9 = fVar10;
        do {
          pfVar8 = pfVar7 + 1;
          pfVar6 = pfVar7;
          fVar11 = *pfVar7;
          if (fVar9 <= *pfVar7) {
            pfVar6 = pfVar4;
            fVar11 = fVar9;
          }
          fVar9 = fVar11;
          pfVar4 = pfVar6;
          pfVar7 = pfVar8;
        } while (pfVar8 != param_3);
        if (pfVar6 != pfVar2) {
          *pfVar2 = *pfVar6;
          *pfVar6 = fVar10;
        }
      }
    }
    return;
  }
  fVar9 = *param_1;
  pfVar4 = param_3 + -1;
  fVar11 = *pfVar4;
  pfVar2 = param_1 + ((uint8)((int8)param_3 - (int8)param_1) >> 3);
  fVar10 = *pfVar2;
  if (fVar9 <= fVar10) {
    if (fVar10 <= fVar11) {
      iVar5 = 0;
    }
    else {
      *pfVar2 = fVar11;
      *pfVar4 = fVar10;
      fVar9 = *param_1;
      if (fVar9 <= *pfVar2) goto code_r0x0008c464;
      *param_1 = *pfVar2;
      iVar5 = 2;
      *pfVar2 = fVar9;
    }
  }
  else {
    if (fVar10 <= fVar11) {
      *param_1 = fVar10;
      *pfVar2 = fVar9;
      if (fVar9 <= *pfVar4) {
code_r0x0008c464:
        iVar5 = 1;
        goto code_r0x0008c468;
      }
      iVar5 = 2;
      *pfVar2 = *pfVar4;
    }
    else {
      *param_1 = fVar11;
      iVar5 = 1;
    }
    *pfVar4 = fVar9;
  }
code_r0x0008c468:
  fVar9 = *param_1;
  pfVar7 = pfVar4;
  if (*pfVar2 <= fVar9) goto code_r0x0008c484;
  goto code_r0x0008c4a8;
code_r0x0008c484:
  while (pfVar7 = pfVar7 + -1, pfVar7 != param_1) {
    if (*pfVar7 < *pfVar2) goto code_r0x0008c49c;
  }
  pfVar2 = param_1 + 1;
  pfVar7 = pfVar2;
  if (*pfVar4 <= fVar9) {
    while( true ) {
      if (pfVar7 == pfVar4) {
        return;
      }
      fVar10 = *pfVar7;
      if (fVar9 < fVar10) break;
      pfVar7 = pfVar7 + 1;
    }
    pfVar2 = pfVar7 + 1;
    *pfVar7 = *pfVar4;
    *pfVar4 = fVar10;
  }
  if (pfVar2 == pfVar4) {
    return;
  }
  while( true ) {
    do {
      pfVar7 = pfVar2;
      pfVar2 = pfVar7 + 1;
      fVar9 = *pfVar7;
    } while (fVar9 <= *param_1);
    do {
      pfVar4 = pfVar4 + -1;
    } while (*param_1 < *pfVar4);
    if (pfVar4 <= pfVar7) break;
    *pfVar7 = *pfVar4;
    *pfVar4 = fVar9;
  }
  param_1 = pfVar7;
  if (param_2 < pfVar7) {
    return;
  }
  goto code_r0x0008c3a4;
code_r0x0008c49c:
  iVar5 = iVar5 + 1;
  *param_1 = *pfVar7;
  *pfVar7 = fVar9;
code_r0x0008c4a8:
  pfVar4 = param_1 + 1;
  if (pfVar4 < pfVar7) {
    pfVar8 = pfVar4;
    while( true ) {
      do {
        pfVar6 = pfVar8;
        pfVar8 = pfVar6 + 1;
        fVar9 = *pfVar6;
      } while (fVar9 < *pfVar2);
      do {
        pfVar7 = pfVar7 + -1;
      } while (*pfVar2 <= *pfVar7);
      if (pfVar7 <= pfVar6) break;
      *pfVar6 = *pfVar7;
      iVar5 = iVar5 + 1;
      *pfVar7 = fVar9;
      pfVar1 = pfVar7;
      if (pfVar6 != pfVar2) {
        pfVar1 = pfVar2;
      }
      pfVar2 = pfVar1;
    }
  }
  else {
    pfVar6 = pfVar4;
  }
  if (pfVar6 != pfVar2) {
    fVar9 = *pfVar6;
    if (*pfVar2 < fVar9) {
      iVar5 = iVar5 + 1;
      *pfVar6 = *pfVar2;
      *pfVar2 = fVar9;
    }
  }
  if (param_2 == pfVar6) {
    return;
  }
  if (iVar5 == 0) {
    pfVar2 = pfVar6;
    if (param_2 < pfVar6) {
      do {
        if (pfVar4 == pfVar6) {
          return;
        }
        pfVar2 = pfVar4 + -1;
        fVar9 = *pfVar4;
        pfVar4 = pfVar4 + 1;
      } while (*pfVar2 <= fVar9);
    }
    else {
      do {
        pfVar4 = pfVar2 + 1;
        if (pfVar4 == param_3) {
          return;
        }
        fVar9 = *pfVar2;
        pfVar2 = pfVar4;
      } while (fVar9 <= *pfVar4);
    }
  }
  if (pfVar6 <= param_2) {
    param_1 = pfVar6 + 1;
    pfVar6 = param_3;
  }
  param_3 = pfVar6;
  goto code_r0x0008c3a4;
}

/* 0x8c6f8  size=4028 */
void FUN_0008c6f8(int8 *param_1,int8 *param_2,int8 param_3,uint4 param_4)

{
  uint8 uVar1;
  uint1 uVar2;
  int8 iVar3;
  bool bVar4;
  uint8 uVar5;
  int8 iVar6;
  int8 iVar7;
  uint8 uVar8;
  int8 iVar9;
  int8 iVar10;
  int8 iVar11;
  uint8 uVar12;
  int8 *piVar13;
  int8 *piVar14;
  int8 iVar15;
  int8 *piVar16;
  uint1 uVar17;
  int8 *piVar18;
  uint8 uVar19;
  int8 *piVar20;
  uint8 uVar21;
  uint4 uVar22;
  uint4 uVar23;
  int8 iVar24;
  int8 iVar25;
  int8 iVar26;
  int8 iVar27;
  int8 iVar28;
  int8 iVar29;
  
  iVar3 = tpidr_el0;
  iVar7 = *(int8 *)(iVar3 + 0x28);
  do {
    piVar14 = param_2 + -4;
    piVar13 = param_1;
code_r0x0008c748:
    param_1 = piVar13;
    uVar8 = (int8)param_2 - (int8)param_1 >> 5;
    if (uVar8 - 2 == 0 || (int8)uVar8 < 2) {
      if (uVar8 < 2) break;
      if (uVar8 == 2) {
        piVar13 = param_2 + -4;
        iVar9 = *piVar13;
        iVar11 = *param_1;
        bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
        if ((((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
             (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
             *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
            (bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
            *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38))) &&
           (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
           *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))) {
          if (*(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90)) break;
        }
        else if (bVar4) break;
        iVar25 = param_1[1];
        iVar6 = *param_1;
        iVar10 = param_1[3];
        iVar9 = param_1[2];
        iVar15 = *piVar13;
        iVar24 = param_2[-1];
        iVar11 = param_2[-2];
        param_1[1] = param_2[-3];
        *param_1 = iVar15;
        param_1[3] = iVar24;
        param_1[2] = iVar11;
        param_2[-3] = iVar25;
        *piVar13 = iVar6;
        param_2[-1] = iVar10;
        param_2[-2] = iVar9;
        break;
      }
    }
    else {
      if (uVar8 == 3) {
        if (*(int8 *)(iVar3 + 0x28) == iVar7) {
          piVar13 = param_1 + 4;
          iVar3 = tpidr_el0;
          iVar7 = *(int8 *)(iVar3 + 0x28);
          iVar9 = *piVar13;
          iVar11 = *param_1;
          uVar17 = *(uint1 *)(iVar9 + 0x8c);
          bVar4 = *(uint1 *)(iVar11 + 0x8c) <= uVar17;
          if (((uVar17 == *(uint1 *)(iVar11 + 0x8c)) &&
              (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
              *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
             ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
              *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
              (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
              *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
            bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
          }
          if (bVar4) {
            iVar11 = *piVar14;
            bVar4 = uVar17 <= *(uint1 *)(iVar11 + 0x8c);
            if (((*(uint1 *)(iVar11 + 0x8c) == uVar17) &&
                (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
                *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
               ((bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
                *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38) &&
                (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
                *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18))))) {
              if (*(uint4 *)(iVar11 + 0x90) < *(uint4 *)(iVar9 + 0x90)) goto code_r0x0008da54;
            }
            else if (!bVar4) {
code_r0x0008da54:
              iVar9 = *piVar14;
              iVar10 = param_2[-1];
              iVar11 = param_2[-2];
              iVar25 = param_1[5];
              iVar15 = *piVar13;
              iVar6 = param_1[7];
              iVar24 = param_1[6];
              param_1[5] = param_2[-3];
              *piVar13 = iVar9;
              param_1[7] = iVar10;
              param_1[6] = iVar11;
              param_2[-3] = iVar25;
              *piVar14 = iVar15;
              param_2[-1] = iVar6;
              param_2[-2] = iVar24;
              iVar9 = *piVar13;
              iVar11 = *param_1;
              bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
              if ((((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
                   (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                   *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
                  (bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                  *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38))) &&
                 (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                 *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))) {
                bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
              }
              if (!bVar4) {
                iVar24 = param_1[1];
                iVar10 = *param_1;
                iVar11 = param_1[3];
                iVar9 = param_1[2];
                param_1[1] = param_1[5];
                *param_1 = *piVar13;
                param_1[3] = param_1[7];
                param_1[2] = param_1[6];
                param_1[5] = iVar24;
                *piVar13 = iVar10;
                param_1[7] = iVar11;
                param_1[6] = iVar9;
              }
            }
            goto code_r0x0008dae4;
          }
          iVar11 = *piVar14;
          bVar4 = uVar17 <= *(uint1 *)(iVar11 + 0x8c);
          if (((*(uint1 *)(iVar11 + 0x8c) == uVar17) &&
              (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
              *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
             ((bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
              *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38) &&
              (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
              *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18))))) {
            if (*(uint4 *)(iVar11 + 0x90) < *(uint4 *)(iVar9 + 0x90)) goto code_r0x0008da40;
code_r0x0008d97c:
            iVar24 = param_1[1];
            iVar10 = *param_1;
            iVar11 = param_1[3];
            iVar9 = param_1[2];
            param_1[1] = param_1[5];
            *param_1 = *piVar13;
            param_1[3] = param_1[7];
            param_1[2] = param_1[6];
            param_1[5] = iVar24;
            *piVar13 = iVar10;
            param_1[7] = iVar11;
            param_1[6] = iVar9;
            iVar9 = *piVar14;
            iVar11 = *piVar13;
            bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
            if (((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
               ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
              if (*(uint4 *)(iVar9 + 0x90) < *(uint4 *)(iVar11 + 0x90)) goto code_r0x0008dad4;
            }
            else if (!bVar4) {
code_r0x0008dad4:
              iVar9 = *piVar14;
              iVar10 = param_2[-1];
              iVar11 = param_2[-2];
              iVar25 = param_1[5];
              iVar15 = *piVar13;
              iVar6 = param_1[7];
              iVar24 = param_1[6];
              param_1[5] = param_2[-3];
              *piVar13 = iVar9;
              param_1[7] = iVar10;
              param_1[6] = iVar11;
              goto code_r0x0008dae0;
            }
          }
          else {
            if (bVar4) goto code_r0x0008d97c;
code_r0x0008da40:
            iVar9 = *piVar14;
            iVar10 = param_2[-1];
            iVar11 = param_2[-2];
            iVar25 = param_1[1];
            iVar15 = *param_1;
            iVar6 = param_1[3];
            iVar24 = param_1[2];
            param_1[1] = param_2[-3];
            *param_1 = iVar9;
            param_1[3] = iVar10;
            param_1[2] = iVar11;
code_r0x0008dae0:
            param_2[-3] = iVar25;
            *piVar14 = iVar15;
            param_2[-1] = iVar6;
            param_2[-2] = iVar24;
          }
code_r0x0008dae4:
          if (*(int8 *)(iVar3 + 0x28) == iVar7) {
            return;
          }
        }
        goto code_r0x000c9620;
      }
      if (uVar8 == 4) {
        if (*(int8 *)(iVar3 + 0x28) == iVar7) {
          piVar13 = param_1 + 4;
          piVar20 = param_1 + 8;
          iVar3 = tpidr_el0;
          iVar7 = *(int8 *)(iVar3 + 0x28);
          FUN_0008d8bc();
          iVar9 = *piVar14;
          iVar11 = *piVar20;
          bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
          if ((((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
               (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
               *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
              (bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
              *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38))) &&
             (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
             *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))) {
            bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
          }
          if (!bVar4) {
            iVar9 = *piVar14;
            iVar10 = param_2[-1];
            iVar11 = param_2[-2];
            iVar25 = param_1[9];
            iVar15 = *piVar20;
            iVar6 = param_1[0xb];
            iVar24 = param_1[10];
            param_1[9] = param_2[-3];
            *piVar20 = iVar9;
            param_1[0xb] = iVar10;
            param_1[10] = iVar11;
            param_2[-3] = iVar25;
            *piVar14 = iVar15;
            param_2[-1] = iVar6;
            param_2[-2] = iVar24;
            iVar9 = *piVar20;
            iVar11 = *piVar13;
            bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
            if (((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
               ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
              bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
            }
            if (!bVar4) {
              iVar24 = param_1[5];
              iVar10 = *piVar13;
              iVar11 = param_1[7];
              iVar9 = param_1[6];
              param_1[5] = param_1[9];
              *piVar13 = *piVar20;
              param_1[7] = param_1[0xb];
              param_1[6] = param_1[10];
              param_1[9] = iVar24;
              *piVar20 = iVar10;
              param_1[0xb] = iVar11;
              param_1[10] = iVar9;
              iVar9 = *piVar13;
              iVar11 = *param_1;
              bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
              if (((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
                  (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                  *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
                 ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                  *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
                  (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                  *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
                bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
              }
              if (!bVar4) {
                iVar24 = param_1[1];
                iVar10 = *param_1;
                iVar11 = param_1[3];
                iVar9 = param_1[2];
                param_1[1] = param_1[5];
                *param_1 = *piVar13;
                param_1[3] = param_1[7];
                param_1[2] = param_1[6];
                param_1[5] = iVar24;
                *piVar13 = iVar10;
                param_1[7] = iVar11;
                param_1[6] = iVar9;
              }
            }
          }
          if (*(int8 *)(iVar3 + 0x28) == iVar7) {
            return;
          }
        }
        goto code_r0x000c9620;
      }
      if (uVar8 == 5) {
        if (*(int8 *)(iVar3 + 0x28) == iVar7) {
          piVar13 = param_1 + 4;
          piVar20 = param_1 + 8;
          piVar16 = param_1 + 0xc;
          iVar3 = tpidr_el0;
          iVar7 = *(int8 *)(iVar3 + 0x28);
          FUN_0008ddb0();
          iVar9 = *piVar14;
          iVar11 = *piVar16;
          bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
          if ((((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
               (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
               *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
              (bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
              *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38))) &&
             (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
             *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))) {
            bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
          }
          if (!bVar4) {
            iVar9 = *piVar14;
            iVar10 = param_2[-1];
            iVar11 = param_2[-2];
            iVar25 = param_1[0xd];
            iVar15 = *piVar16;
            iVar6 = param_1[0xf];
            iVar24 = param_1[0xe];
            param_1[0xd] = param_2[-3];
            *piVar16 = iVar9;
            param_1[0xf] = iVar10;
            param_1[0xe] = iVar11;
            param_2[-3] = iVar25;
            *piVar14 = iVar15;
            param_2[-1] = iVar6;
            param_2[-2] = iVar24;
            iVar9 = *piVar16;
            iVar11 = *piVar20;
            bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
            if (((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
               ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
              bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
            }
            if (!bVar4) {
              iVar24 = param_1[9];
              iVar10 = *piVar20;
              iVar11 = param_1[0xb];
              iVar9 = param_1[10];
              param_1[9] = param_1[0xd];
              *piVar20 = *piVar16;
              param_1[0xb] = param_1[0xf];
              param_1[10] = param_1[0xe];
              param_1[0xd] = iVar24;
              *piVar16 = iVar10;
              param_1[0xf] = iVar11;
              param_1[0xe] = iVar9;
              iVar9 = *piVar20;
              iVar11 = *piVar13;
              bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
              if (((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
                  (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                  *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
                 ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                  *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
                  (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                  *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
                bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
              }
              if (!bVar4) {
                iVar24 = param_1[5];
                iVar10 = *piVar13;
                iVar11 = param_1[7];
                iVar9 = param_1[6];
                param_1[5] = param_1[9];
                *piVar13 = *piVar20;
                param_1[7] = param_1[0xb];
                param_1[6] = param_1[10];
                param_1[9] = iVar24;
                *piVar20 = iVar10;
                param_1[0xb] = iVar11;
                param_1[10] = iVar9;
                iVar9 = *piVar13;
                iVar11 = *param_1;
                bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
                if ((((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
                     (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                     *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
                    (bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                    *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38))) &&
                   (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                   *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))) {
                  bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
                }
                if (!bVar4) {
                  iVar24 = param_1[1];
                  iVar10 = *param_1;
                  iVar11 = param_1[3];
                  iVar9 = param_1[2];
                  param_1[1] = param_1[5];
                  *param_1 = *piVar13;
                  param_1[3] = param_1[7];
                  param_1[2] = param_1[6];
                  param_1[5] = iVar24;
                  *piVar13 = iVar10;
                  param_1[7] = iVar11;
                  param_1[6] = iVar9;
                }
              }
            }
          }
          if (*(int8 *)(iVar3 + 0x28) == iVar7) {
            return;
          }
        }
        goto code_r0x000c9620;
      }
    }
    if ((int8)uVar8 < 0x18) {
      piVar13 = param_1 + 4;
      if ((param_4 & 1) == 0) {
        if (!(param_1 == param_2 || piVar13 == param_2)) goto code_r0x0008d5bc;
        break;
      }
      if (param_1 == param_2 || piVar13 == param_2) break;
      iVar9 = 0;
      piVar14 = param_1;
      goto code_r0x0008cfe0;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) break;
      uVar12 = uVar8 - 2 >> 1;
      uVar5 = uVar12;
      goto code_r0x0008d12c;
    }
    piVar13 = param_1 + (uVar8 >> 1) * 4;
    if (uVar8 < 0x81) {
      FUN_0008d8bc(piVar13,param_1,piVar14);
    }
    else {
      FUN_0008d8bc(param_1,piVar13,piVar14);
      FUN_0008d8bc(param_1 + 4,piVar13 + -4,param_2 + -8);
      FUN_0008d8bc(param_1 + 8,piVar13 + 4,param_2 + -0xc);
      FUN_0008d8bc(piVar13 + -4,piVar13,piVar13 + 4);
      iVar15 = param_1[1];
      iVar24 = *param_1;
      iVar10 = param_1[3];
      iVar9 = param_1[2];
      iVar11 = *piVar13;
      iVar25 = piVar13[3];
      iVar6 = piVar13[2];
      param_1[1] = piVar13[1];
      *param_1 = iVar11;
      param_1[3] = iVar25;
      param_1[2] = iVar6;
      piVar13[1] = iVar15;
      *piVar13 = iVar24;
      piVar13[3] = iVar10;
      piVar13[2] = iVar9;
    }
    iVar9 = *param_1;
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      iVar11 = param_1[-4];
      uVar2 = *(uint1 *)(iVar9 + 0x8c);
      uVar17 = *(uint1 *)(iVar11 + 0x8c);
      if (uVar17 == uVar2) {
        bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20);
        if (((*(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20)) &&
            (bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
            *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38))) &&
           (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
           *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18))) {
          if (*(uint4 *)(iVar11 + 0x90) < *(uint4 *)(iVar9 + 0x90)) goto code_r0x0008c88c;
        }
        else if (!bVar4) goto code_r0x0008c88c;
code_r0x0008cb98:
        iVar10 = param_1[3];
        iVar6 = param_1[2];
        iVar24 = param_1[1];
        iVar11 = *piVar14;
        uVar17 = *(uint1 *)(iVar11 + 0x8c);
        bVar4 = uVar17 <= uVar2;
        piVar13 = param_1;
        if (((uVar2 == uVar17) &&
            (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
            *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
           ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
            *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
            (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
            *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
          if (*(uint4 *)(iVar9 + 0x90) < *(uint4 *)(iVar11 + 0x90)) goto code_r0x0008ce08;
joined_r0x0008cc00:
          do {
            piVar13 = piVar13 + 4;
            if (param_2 <= piVar13) break;
            iVar15 = *piVar13;
            bVar4 = *(uint1 *)(iVar15 + 0x8c) <= uVar2;
            if ((((uVar2 == *(uint1 *)(iVar15 + 0x8c)) &&
                 (bVar4 = *(uint4 *)(iVar15 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                 *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar15 + 0x20))) &&
                (bVar4 = *(uint8 *)(iVar15 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar15 + 0x38))) &&
               (bVar4 = *(uint4 *)(iVar15 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
               *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar15 + 0x18))) {
              bVar4 = *(uint4 *)(iVar15 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
            }
          } while (bVar4);
        }
        else {
          if (bVar4) goto joined_r0x0008cc00;
code_r0x0008ce08:
          do {
            piVar13 = piVar13 + 4;
            iVar15 = *piVar13;
            bVar4 = *(uint1 *)(iVar15 + 0x8c) <= uVar2;
            if (((uVar2 == *(uint1 *)(iVar15 + 0x8c)) &&
                (bVar4 = *(uint4 *)(iVar15 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar15 + 0x20))) &&
               ((bVar4 = *(uint8 *)(iVar15 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar15 + 0x38) &&
                (bVar4 = *(uint4 *)(iVar15 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar15 + 0x18))))) {
              bVar4 = *(uint4 *)(iVar15 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
            }
          } while (bVar4);
        }
        piVar20 = param_2;
        piVar16 = piVar14;
        if (piVar13 < param_2) {
          while( true ) {
            piVar20 = piVar16;
            bVar4 = uVar17 <= uVar2;
            if (((uVar2 == uVar17) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
                *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
               ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
                *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
                (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
                *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
              bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
            }
            if (bVar4) break;
            iVar11 = piVar20[-4];
            uVar17 = *(uint1 *)(iVar11 + 0x8c);
            piVar16 = piVar20 + -4;
          }
        }
code_r0x0008cdc8:
        if (piVar13 < piVar20) {
          iVar29 = piVar13[1];
          iVar27 = *piVar13;
          iVar25 = piVar13[3];
          iVar11 = piVar13[2];
          iVar28 = *piVar20;
          iVar26 = piVar20[3];
          iVar15 = piVar20[2];
          piVar13[1] = piVar20[1];
          *piVar13 = iVar28;
          piVar13[3] = iVar26;
          piVar13[2] = iVar15;
          piVar20[1] = iVar29;
          *piVar20 = iVar27;
          piVar20[3] = iVar25;
          piVar20[2] = iVar11;
          uVar17 = *(uint1 *)(iVar9 + 0x8c);
          do {
            while( true ) {
              piVar13 = piVar13 + 4;
              iVar11 = *piVar13;
              if (uVar17 != *(uint1 *)(iVar11 + 0x8c)) break;
              if (*(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20)) {
                if (*(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38)) {
                  if (*(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18)) {
                    if (*(uint4 *)(iVar9 + 0x90) < *(uint4 *)(iVar11 + 0x90)) goto code_r0x0008cd60;
                  }
                  else if (*(uint4 *)(iVar9 + 0x18) < *(uint4 *)(iVar11 + 0x18))
                  goto code_r0x0008cd60;
                }
                else if (*(uint8 *)(iVar9 + 0x38) < *(uint8 *)(iVar11 + 0x38))
                goto code_r0x0008cd60;
              }
              else if (*(uint4 *)(iVar9 + 0x20) < *(uint4 *)(iVar11 + 0x20)) goto code_r0x0008cd60;
            }
          } while (*(uint1 *)(iVar11 + 0x8c) <= uVar17);
code_r0x0008cd60:
          do {
            piVar20 = piVar20 + -4;
            iVar11 = *piVar20;
            if (uVar17 != *(uint1 *)(iVar11 + 0x8c)) {
              if (*(uint1 *)(iVar11 + 0x8c) <= uVar17) break;
              goto code_r0x0008cd60;
            }
            if (*(uint4 *)(iVar9 + 0x20) != *(uint4 *)(iVar11 + 0x20)) {
              if (*(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20)) break;
              goto code_r0x0008cd60;
            }
            if (*(uint8 *)(iVar9 + 0x38) != *(uint8 *)(iVar11 + 0x38)) {
              if (*(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38)) break;
              goto code_r0x0008cd60;
            }
            if (*(uint4 *)(iVar9 + 0x18) != *(uint4 *)(iVar11 + 0x18)) {
              if (*(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18)) break;
              goto code_r0x0008cd60;
            }
          } while (*(uint4 *)(iVar9 + 0x90) < *(uint4 *)(iVar11 + 0x90));
          goto code_r0x0008cdc8;
        }
        if (param_1 != piVar13 + -4) {
          iVar25 = piVar13[-4];
          iVar15 = piVar13[-1];
          iVar11 = piVar13[-2];
          param_1[1] = piVar13[-3];
          *param_1 = iVar25;
          param_1[3] = iVar15;
          param_1[2] = iVar11;
        }
        piVar13[-4] = iVar9;
        param_4 = 0;
        piVar13[-1] = iVar10;
        piVar13[-2] = iVar6;
        piVar13[-3] = iVar24;
        goto code_r0x0008c748;
      }
      if (uVar2 <= uVar17) goto code_r0x0008cb98;
      uVar17 = 1;
    }
    else {
      uVar17 = *(uint1 *)(iVar9 + 0x8c);
    }
code_r0x0008c88c:
    iVar10 = param_1[3];
    iVar6 = param_1[2];
    iVar24 = param_1[1];
    iVar11 = 0x20;
    while( true ) {
      iVar15 = *(int8 *)((int8)param_1 + iVar11);
      bVar4 = uVar17 <= *(uint1 *)(iVar15 + 0x8c);
      if (((*(uint1 *)(iVar15 + 0x8c) == uVar17) &&
          (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar15 + 0x20),
          *(uint4 *)(iVar15 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
         ((bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar15 + 0x38),
          *(uint8 *)(iVar15 + 0x38) == *(uint8 *)(iVar9 + 0x38) &&
          (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar15 + 0x18),
          *(uint4 *)(iVar15 + 0x18) == *(uint4 *)(iVar9 + 0x18))))) {
        bVar4 = *(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar15 + 0x90);
      }
      if (bVar4) break;
      iVar11 = iVar11 + 0x20;
    }
    piVar20 = (int8 *)((int8)param_1 + iVar11);
    piVar16 = piVar14;
    if (iVar11 == 0x20) {
      piVar16 = param_2;
      if (piVar20 < param_2) {
        piVar16 = piVar14;
        do {
          iVar11 = *piVar16;
          if (*(uint1 *)(iVar11 + 0x8c) == uVar17) {
            uVar22 = *(uint4 *)(iVar11 + 0x20);
            uVar23 = *(uint4 *)(iVar9 + 0x20);
            if (uVar22 == uVar23) {
              if (*(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38)) {
                uVar22 = *(uint4 *)(iVar11 + 0x18);
                uVar23 = *(uint4 *)(iVar9 + 0x18);
                if (uVar22 != uVar23) goto code_r0x0008c9e8;
                if ((piVar16 <= piVar20) || (*(uint4 *)(iVar11 + 0x90) < *(uint4 *)(iVar9 + 0x90)))
                break;
              }
              else if ((piVar16 <= piVar20) ||
                      (*(uint8 *)(iVar11 + 0x38) < *(uint8 *)(iVar9 + 0x38))) break;
            }
            else {
code_r0x0008c9e8:
              if ((piVar16 <= piVar20) || (uVar22 < uVar23)) break;
            }
          }
          else if ((piVar16 <= piVar20) || (*(uint1 *)(iVar11 + 0x8c) < uVar17)) break;
          piVar16 = piVar16 + -4;
        } while( true );
      }
    }
    else {
      while( true ) {
        iVar11 = *piVar16;
        bVar4 = uVar17 <= *(uint1 *)(iVar11 + 0x8c);
        if ((((*(uint1 *)(iVar11 + 0x8c) == uVar17) &&
             (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
             *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
            (bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
            *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38))) &&
           (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
           *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18))) {
          bVar4 = *(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar11 + 0x90);
        }
        if (!bVar4) break;
        piVar16 = piVar16 + -4;
      }
    }
    piVar13 = piVar20;
    if (piVar20 < piVar16) {
      piVar18 = piVar16;
      do {
        iVar29 = piVar13[1];
        iVar27 = *piVar13;
        iVar25 = piVar13[3];
        iVar11 = piVar13[2];
        iVar28 = *piVar18;
        iVar26 = piVar18[3];
        iVar15 = piVar18[2];
        piVar13[1] = piVar18[1];
        *piVar13 = iVar28;
        piVar13[3] = iVar26;
        piVar13[2] = iVar15;
        piVar18[1] = iVar29;
        *piVar18 = iVar27;
        piVar18[3] = iVar25;
        piVar18[2] = iVar11;
        uVar17 = *(uint1 *)(iVar9 + 0x8c);
        do {
          while( true ) {
            piVar13 = piVar13 + 4;
            iVar11 = *piVar13;
            if (*(uint1 *)(iVar11 + 0x8c) != uVar17) break;
            if (*(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20)) {
              if (*(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38)) {
                if (*(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18)) {
                  if (*(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar11 + 0x90)) goto code_r0x0008cabc;
                }
                else if (*(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18))
                goto code_r0x0008cabc;
              }
              else if (*(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38)) goto code_r0x0008cabc;
            }
            else if (*(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20)) goto code_r0x0008cabc;
          }
        } while (*(uint1 *)(iVar11 + 0x8c) < uVar17);
code_r0x0008cabc:
        do {
          piVar18 = piVar18 + -4;
          iVar11 = *piVar18;
          if (*(uint1 *)(iVar11 + 0x8c) != uVar17) {
            if (*(uint1 *)(iVar11 + 0x8c) < uVar17) break;
            goto code_r0x0008cabc;
          }
          if (*(uint4 *)(iVar11 + 0x20) != *(uint4 *)(iVar9 + 0x20)) {
            if (*(uint4 *)(iVar11 + 0x20) < *(uint4 *)(iVar9 + 0x20)) break;
            goto code_r0x0008cabc;
          }
          if (*(uint8 *)(iVar11 + 0x38) != *(uint8 *)(iVar9 + 0x38)) {
            if (*(uint8 *)(iVar11 + 0x38) < *(uint8 *)(iVar9 + 0x38)) break;
            goto code_r0x0008cabc;
          }
          if (*(uint4 *)(iVar11 + 0x18) != *(uint4 *)(iVar9 + 0x18)) {
            if (*(uint4 *)(iVar11 + 0x18) < *(uint4 *)(iVar9 + 0x18)) break;
            goto code_r0x0008cabc;
          }
        } while (*(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar11 + 0x90));
      } while (piVar13 < piVar18);
    }
    piVar18 = piVar13 + -4;
    if (param_1 != piVar18) {
      iVar25 = *piVar18;
      iVar15 = piVar13[-1];
      iVar11 = piVar13[-2];
      param_1[1] = piVar13[-3];
      *param_1 = iVar25;
      param_1[3] = iVar15;
      param_1[2] = iVar11;
    }
    piVar13[-4] = iVar9;
    piVar13[-1] = iVar10;
    piVar13[-2] = iVar6;
    piVar13[-3] = iVar24;
    if (piVar20 < piVar16) goto code_r0x0008cb7c;
    uVar8 = FUN_0008db04(param_1,piVar18);
    uVar5 = FUN_0008db04(piVar13,param_2);
    if ((uVar5 & 1) == 0) goto code_r0x0008cb78;
    param_2 = piVar18;
  } while ((uVar8 & 1) == 0);
  goto code_r0x0008d568;
code_r0x0008d5bc:
  do {
    piVar14 = piVar13;
    iVar9 = param_1[4];
    iVar11 = *param_1;
    bVar4 = *(uint1 *)(iVar11 + 0x8c) <= *(uint1 *)(iVar9 + 0x8c);
    if (((*(uint1 *)(iVar9 + 0x8c) == *(uint1 *)(iVar11 + 0x8c)) &&
        (bVar4 = *(uint4 *)(iVar11 + 0x20) <= *(uint4 *)(iVar9 + 0x20),
        *(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar11 + 0x20))) &&
       ((bVar4 = *(uint8 *)(iVar11 + 0x38) <= *(uint8 *)(iVar9 + 0x38),
        *(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar11 + 0x38) &&
        (bVar4 = *(uint4 *)(iVar11 + 0x18) <= *(uint4 *)(iVar9 + 0x18),
        *(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar11 + 0x18))))) {
      bVar4 = *(uint4 *)(iVar11 + 0x90) <= *(uint4 *)(iVar9 + 0x90);
    }
    if (!bVar4) {
      iVar24 = param_1[6];
      iVar10 = param_1[5];
      iVar11 = param_1[7];
      do {
        while( true ) {
          piVar13 = param_1;
          param_1 = piVar13 + -4;
          iVar6 = *param_1;
          piVar13[5] = piVar13[1];
          piVar13[4] = *piVar13;
          piVar13[7] = piVar13[3];
          piVar13[6] = piVar13[2];
          if (*(uint1 *)(iVar9 + 0x8c) != *(uint1 *)(iVar6 + 0x8c)) break;
          if (*(uint4 *)(iVar9 + 0x20) == *(uint4 *)(iVar6 + 0x20)) {
            if (*(uint8 *)(iVar9 + 0x38) == *(uint8 *)(iVar6 + 0x38)) {
              if (*(uint4 *)(iVar9 + 0x18) == *(uint4 *)(iVar6 + 0x18)) {
                if (*(uint4 *)(iVar6 + 0x90) <= *(uint4 *)(iVar9 + 0x90)) goto code_r0x0008d59c;
              }
              else if (*(uint4 *)(iVar6 + 0x18) <= *(uint4 *)(iVar9 + 0x18)) goto code_r0x0008d59c;
            }
            else if (*(uint8 *)(iVar6 + 0x38) <= *(uint8 *)(iVar9 + 0x38)) goto code_r0x0008d59c;
          }
          else if (*(uint4 *)(iVar6 + 0x20) <= *(uint4 *)(iVar9 + 0x20)) goto code_r0x0008d59c;
        }
      } while (*(uint1 *)(iVar9 + 0x8c) < *(uint1 *)(iVar6 + 0x8c));
code_r0x0008d59c:
      *piVar13 = iVar9;
      piVar13[3] = iVar11;
      piVar13[2] = iVar24;
      piVar13[1] = iVar10;
    }
    piVar13 = piVar14 + 4;
    param_1 = piVar14;
  } while (piVar13 != param_2);
  goto code_r0x0008d568;
code_r0x0008cfe0:
  do {
    iVar11 = piVar14[4];
    iVar10 = *piVar14;
    bVar4 = *(uint1 *)(iVar10 + 0x8c) <= *(uint1 *)(iVar11 + 0x8c);
    if (((*(uint1 *)(iVar11 + 0x8c) == *(uint1 *)(iVar10 + 0x8c)) &&
        (bVar4 = *(uint4 *)(iVar10 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
        *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar10 + 0x20))) &&
       ((bVar4 = *(uint8 *)(iVar10 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
        *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar10 + 0x38) &&
        (bVar4 = *(uint4 *)(iVar10 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
        *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar10 + 0x18))))) {
      bVar4 = *(uint4 *)(iVar10 + 0x90) <= *(uint4 *)(iVar11 + 0x90);
    }
    if (!bVar4) {
      iVar15 = piVar14[6];
      iVar24 = piVar14[5];
      iVar10 = piVar14[7];
      iVar6 = *piVar14;
      iVar26 = piVar14[3];
      iVar25 = piVar14[2];
      piVar13[1] = piVar14[1];
      *piVar13 = iVar6;
      piVar13[3] = iVar26;
      piVar13[2] = iVar25;
      piVar20 = param_1;
      if (piVar14 != param_1) {
        iVar6 = iVar9;
        do {
          piVar16 = (int8 *)((int8)param_1 + iVar6);
          iVar25 = piVar16[-4];
          bVar4 = *(uint1 *)(iVar25 + 0x8c) <= *(uint1 *)(iVar11 + 0x8c);
          if (((*(uint1 *)(iVar11 + 0x8c) == *(uint1 *)(iVar25 + 0x8c)) &&
              (bVar4 = *(uint4 *)(iVar25 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
              *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar25 + 0x20))) &&
             (bVar4 = *(uint8 *)(iVar25 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
             *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar25 + 0x38))) {
            if (*(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar25 + 0x18)) {
              if (*(uint4 *)(iVar25 + 0x90) <= *(uint4 *)(iVar11 + 0x90)) goto code_r0x0008d0f0;
            }
            else if (*(uint4 *)(iVar25 + 0x18) <= *(uint4 *)(iVar11 + 0x18)) {
              piVar20 = (int8 *)((int8)param_1 + iVar6);
              break;
            }
          }
          else if (bVar4) {
code_r0x0008d0f0:
            piVar20 = piVar14;
            break;
          }
          iVar6 = iVar6 + -0x20;
          piVar14 = piVar14 + -4;
          piVar16[1] = piVar16[-3];
          *piVar16 = piVar16[-4];
          piVar16[3] = piVar16[-1];
          piVar16[2] = piVar16[-2];
        } while (iVar6 != 0);
      }
      *piVar20 = iVar11;
      piVar20[3] = iVar10;
      piVar20[2] = iVar15;
      piVar20[1] = iVar24;
    }
    piVar20 = piVar13 + 4;
    iVar9 = iVar9 + 0x20;
    piVar14 = piVar13;
    piVar13 = piVar20;
  } while (piVar20 != param_2);
  goto code_r0x0008d568;
code_r0x0008cb78:
  if ((uVar8 & 1) == 0) {
code_r0x0008cb7c:
    FUN_0008c6f8(param_1,piVar18,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto code_r0x0008c748;
code_r0x0008d12c:
  do {
    if ((int8)uVar5 <= (int8)uVar12) {
      uVar21 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
      uVar19 = uVar5 * 2 + 2;
      piVar13 = param_1 + uVar21 * 4;
      if ((int8)uVar19 < (int8)uVar8) {
        iVar11 = *piVar13;
        iVar9 = piVar13[4];
        bVar4 = *(uint1 *)(iVar9 + 0x8c) <= *(uint1 *)(iVar11 + 0x8c);
        if (((*(uint1 *)(iVar11 + 0x8c) == *(uint1 *)(iVar9 + 0x8c)) &&
            (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
            *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
           ((bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
            *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38) &&
            (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
            *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18))))) {
          bVar4 = *(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar11 + 0x90);
        }
        if (!bVar4) {
          piVar13 = piVar13 + 4;
          uVar21 = uVar19;
        }
      }
      piVar14 = param_1 + uVar5 * 4;
      iVar11 = *piVar13;
      iVar9 = *piVar14;
      bVar4 = *(uint1 *)(iVar9 + 0x8c) <= *(uint1 *)(iVar11 + 0x8c);
      if (((*(uint1 *)(iVar11 + 0x8c) == *(uint1 *)(iVar9 + 0x8c)) &&
          (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
          *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
         ((bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
          *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38) &&
          (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
          *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18))))) {
        bVar4 = *(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar11 + 0x90);
      }
      if (bVar4) {
        iVar11 = piVar14[3];
        iVar24 = piVar14[2];
        iVar10 = piVar14[1];
        do {
          while( true ) {
            piVar20 = piVar13;
            iVar25 = *piVar20;
            iVar15 = piVar20[3];
            iVar6 = piVar20[2];
            piVar14[1] = piVar20[1];
            *piVar14 = iVar25;
            piVar14[3] = iVar15;
            piVar14[2] = iVar6;
            if ((int8)uVar12 < (int8)uVar21) goto code_r0x0008d110;
            uVar1 = uVar21 << 1 | 1;
            uVar19 = uVar21 * 2 + 2;
            piVar13 = param_1 + uVar1 * 4;
            uVar21 = uVar1;
            if ((int8)uVar19 < (int8)uVar8) {
              iVar6 = *piVar13;
              iVar15 = piVar13[4];
              bVar4 = *(uint1 *)(iVar15 + 0x8c) <= *(uint1 *)(iVar6 + 0x8c);
              if ((((*(uint1 *)(iVar6 + 0x8c) == *(uint1 *)(iVar15 + 0x8c)) &&
                   (bVar4 = *(uint4 *)(iVar15 + 0x20) <= *(uint4 *)(iVar6 + 0x20),
                   *(uint4 *)(iVar6 + 0x20) == *(uint4 *)(iVar15 + 0x20))) &&
                  (bVar4 = *(uint8 *)(iVar15 + 0x38) <= *(uint8 *)(iVar6 + 0x38),
                  *(uint8 *)(iVar6 + 0x38) == *(uint8 *)(iVar15 + 0x38))) &&
                 (bVar4 = *(uint4 *)(iVar15 + 0x18) <= *(uint4 *)(iVar6 + 0x18),
                 *(uint4 *)(iVar6 + 0x18) == *(uint4 *)(iVar15 + 0x18))) {
                bVar4 = *(uint4 *)(iVar15 + 0x90) <= *(uint4 *)(iVar6 + 0x90);
              }
              if (!bVar4) {
                piVar13 = piVar13 + 4;
                uVar21 = uVar19;
              }
            }
            iVar6 = *piVar13;
            piVar14 = piVar20;
            if (*(uint1 *)(iVar6 + 0x8c) != *(uint1 *)(iVar9 + 0x8c)) break;
            if (*(uint4 *)(iVar6 + 0x20) == *(uint4 *)(iVar9 + 0x20)) {
              if (*(uint8 *)(iVar6 + 0x38) == *(uint8 *)(iVar9 + 0x38)) {
                if (*(uint4 *)(iVar6 + 0x18) == *(uint4 *)(iVar9 + 0x18)) {
                  if (*(uint4 *)(iVar6 + 0x90) < *(uint4 *)(iVar9 + 0x90)) goto code_r0x0008d110;
                }
                else if (*(uint4 *)(iVar6 + 0x18) < *(uint4 *)(iVar9 + 0x18)) goto code_r0x0008d110;
              }
              else if (*(uint8 *)(iVar6 + 0x38) < *(uint8 *)(iVar9 + 0x38)) goto code_r0x0008d110;
            }
            else if (*(uint4 *)(iVar6 + 0x20) < *(uint4 *)(iVar9 + 0x20)) goto code_r0x0008d110;
          }
        } while (*(uint1 *)(iVar9 + 0x8c) <= *(uint1 *)(iVar6 + 0x8c));
code_r0x0008d110:
        *piVar20 = iVar9;
        piVar20[3] = iVar11;
        piVar20[2] = iVar24;
        piVar20[1] = iVar10;
      }
    }
    bVar4 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar4);
  do {
    iVar24 = param_1[1];
    iVar10 = *param_1;
    iVar11 = param_1[3];
    iVar9 = param_1[2];
    piVar13 = param_1;
    uVar5 = 0;
    do {
      uVar19 = uVar5 << 1 | 1;
      uVar12 = uVar5 * 2 + 2;
      piVar14 = piVar13 + uVar5 * 4 + 4;
      if ((int8)uVar12 < (int8)uVar8) {
        iVar6 = piVar13[uVar5 * 4 + 8];
        iVar15 = piVar13[uVar5 * 4 + 4];
        bVar4 = *(uint1 *)(iVar6 + 0x8c) <= *(uint1 *)(iVar15 + 0x8c);
        if (((*(uint1 *)(iVar15 + 0x8c) == *(uint1 *)(iVar6 + 0x8c)) &&
            (bVar4 = *(uint4 *)(iVar6 + 0x20) <= *(uint4 *)(iVar15 + 0x20),
            *(uint4 *)(iVar15 + 0x20) == *(uint4 *)(iVar6 + 0x20))) &&
           ((bVar4 = *(uint8 *)(iVar6 + 0x38) <= *(uint8 *)(iVar15 + 0x38),
            *(uint8 *)(iVar15 + 0x38) == *(uint8 *)(iVar6 + 0x38) &&
            (bVar4 = *(uint4 *)(iVar6 + 0x18) <= *(uint4 *)(iVar15 + 0x18),
            *(uint4 *)(iVar15 + 0x18) == *(uint4 *)(iVar6 + 0x18))))) {
          bVar4 = *(uint4 *)(iVar6 + 0x90) <= *(uint4 *)(iVar15 + 0x90);
        }
        if (!bVar4) {
          piVar14 = piVar13 + uVar5 * 4 + 8;
          uVar19 = uVar12;
        }
      }
      iVar25 = *piVar14;
      iVar15 = piVar14[3];
      iVar6 = piVar14[2];
      piVar13[1] = piVar14[1];
      *piVar13 = iVar25;
      piVar13[3] = iVar15;
      piVar13[2] = iVar6;
      piVar13 = piVar14;
      uVar5 = uVar19;
    } while ((int8)uVar19 <= (int8)(uVar8 - 2 >> 1));
    piVar13 = param_2 + -4;
    if (piVar14 == piVar13) {
      piVar14[1] = iVar24;
      *piVar14 = iVar10;
      piVar14[3] = iVar11;
      piVar14[2] = iVar9;
    }
    else {
      iVar26 = *piVar13;
      iVar25 = param_2[-1];
      iVar15 = param_2[-2];
      iVar6 = (int8)piVar14 + (0x20 - (int8)param_1) >> 5;
      piVar14[1] = param_2[-3];
      *piVar14 = iVar26;
      piVar14[3] = iVar25;
      piVar14[2] = iVar15;
      uVar5 = iVar6 - 2;
      param_2[-3] = iVar24;
      *piVar13 = iVar10;
      param_2[-1] = iVar11;
      param_2[-2] = iVar9;
      if (1 < iVar6) {
        uVar12 = uVar5 >> 1;
        iVar9 = *piVar14;
        piVar20 = param_1 + uVar12 * 4;
        iVar11 = *piVar20;
        bVar4 = *(uint1 *)(iVar9 + 0x8c) <= *(uint1 *)(iVar11 + 0x8c);
        if (((*(uint1 *)(iVar11 + 0x8c) == *(uint1 *)(iVar9 + 0x8c)) &&
            (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar11 + 0x20),
            *(uint4 *)(iVar11 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
           ((bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar11 + 0x38),
            *(uint8 *)(iVar11 + 0x38) == *(uint8 *)(iVar9 + 0x38) &&
            (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar11 + 0x18),
            *(uint4 *)(iVar11 + 0x18) == *(uint4 *)(iVar9 + 0x18))))) {
          bVar4 = *(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar11 + 0x90);
        }
        if (!bVar4) {
          iVar11 = piVar14[3];
          iVar6 = piVar14[2];
          iVar10 = piVar14[1];
          iVar25 = *piVar20;
          iVar15 = piVar20[3];
          iVar24 = piVar20[2];
          piVar14[1] = piVar20[1];
          *piVar14 = iVar25;
          piVar14[3] = iVar15;
          piVar14[2] = iVar24;
          if (uVar5 < 2) {
code_r0x0008d4b0:
            piVar14 = piVar20;
          }
          else {
            do {
              uVar5 = uVar12 - 1;
              uVar12 = uVar5 >> 1;
              piVar14 = param_1 + uVar12 * 4;
              iVar24 = *piVar14;
              bVar4 = *(uint1 *)(iVar9 + 0x8c) <= *(uint1 *)(iVar24 + 0x8c);
              if ((((*(uint1 *)(iVar24 + 0x8c) == *(uint1 *)(iVar9 + 0x8c)) &&
                   (bVar4 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar24 + 0x20),
                   *(uint4 *)(iVar24 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
                  (bVar4 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar24 + 0x38),
                  *(uint8 *)(iVar24 + 0x38) == *(uint8 *)(iVar9 + 0x38))) &&
                 (bVar4 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar24 + 0x18),
                 *(uint4 *)(iVar24 + 0x18) == *(uint4 *)(iVar9 + 0x18))) {
                bVar4 = *(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar24 + 0x90);
              }
              if (bVar4) goto code_r0x0008d4b0;
              iVar25 = *piVar14;
              iVar15 = piVar14[3];
              iVar24 = piVar14[2];
              piVar20[1] = piVar14[1];
              *piVar20 = iVar25;
              piVar20[3] = iVar15;
              piVar20[2] = iVar24;
              piVar20 = piVar14;
            } while (1 < uVar5);
          }
          *piVar14 = iVar9;
          piVar14[3] = iVar11;
          piVar14[2] = iVar6;
          piVar14[1] = iVar10;
        }
      }
    }
    bVar4 = 2 < (int8)uVar8;
    uVar8 = uVar8 - 1;
    param_2 = piVar13;
  } while (bVar4);
code_r0x0008d568:
  if (*(int8 *)(iVar3 + 0x28) == iVar7) {
    return;
  }
code_r0x000c9620:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8d6b4  size=520 */
void FUN_0008d6b4(int8 *param_1,int8 *param_2,int8 *param_3,int8 *param_4,int8 *param_5)

{
  int8 iVar1;
  bool bVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  int8 iVar6;
  int8 iVar7;
  int8 iVar8;
  int8 iVar9;
  int8 iVar10;
  
  iVar1 = tpidr_el0;
  iVar3 = *(int8 *)(iVar1 + 0x28);
  FUN_0008ddb0();
  iVar4 = *param_5;
  iVar5 = *param_4;
  bVar2 = *(uint1 *)(iVar5 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
  if ((((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar5 + 0x8c)) &&
       (bVar2 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
       *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
      (bVar2 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
      *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar5 + 0x38))) &&
     (bVar2 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
     *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar5 + 0x18))) {
    bVar2 = *(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar4 + 0x90);
  }
  if (!bVar2) {
    iVar4 = *param_5;
    iVar6 = param_5[3];
    iVar5 = param_5[2];
    iVar10 = param_4[1];
    iVar9 = *param_4;
    iVar8 = param_4[3];
    iVar7 = param_4[2];
    param_4[1] = param_5[1];
    *param_4 = iVar4;
    param_4[3] = iVar6;
    param_4[2] = iVar5;
    param_5[1] = iVar10;
    *param_5 = iVar9;
    param_5[3] = iVar8;
    param_5[2] = iVar7;
    iVar4 = *param_4;
    iVar5 = *param_3;
    bVar2 = *(uint1 *)(iVar5 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
    if (((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar5 + 0x8c)) &&
        (bVar2 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
        *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
       ((bVar2 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
        *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar5 + 0x38) &&
        (bVar2 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
        *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar5 + 0x18))))) {
      bVar2 = *(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar4 + 0x90);
    }
    if (!bVar2) {
      iVar4 = *param_4;
      iVar6 = param_4[3];
      iVar5 = param_4[2];
      iVar10 = param_3[1];
      iVar9 = *param_3;
      iVar8 = param_3[3];
      iVar7 = param_3[2];
      param_3[1] = param_4[1];
      *param_3 = iVar4;
      param_3[3] = iVar6;
      param_3[2] = iVar5;
      param_4[1] = iVar10;
      *param_4 = iVar9;
      param_4[3] = iVar8;
      param_4[2] = iVar7;
      iVar4 = *param_3;
      iVar5 = *param_2;
      bVar2 = *(uint1 *)(iVar5 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
      if (((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar5 + 0x8c)) &&
          (bVar2 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
          *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
         ((bVar2 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
          *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar5 + 0x38) &&
          (bVar2 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
          *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar5 + 0x18))))) {
        bVar2 = *(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar4 + 0x90);
      }
      if (!bVar2) {
        iVar4 = *param_3;
        iVar6 = param_3[3];
        iVar5 = param_3[2];
        iVar10 = param_2[1];
        iVar9 = *param_2;
        iVar8 = param_2[3];
        iVar7 = param_2[2];
        param_2[1] = param_3[1];
        *param_2 = iVar4;
        param_2[3] = iVar6;
        param_2[2] = iVar5;
        param_3[1] = iVar10;
        *param_3 = iVar9;
        param_3[3] = iVar8;
        param_3[2] = iVar7;
        iVar4 = *param_2;
        iVar5 = *param_1;
        bVar2 = *(uint1 *)(iVar5 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
        if ((((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar5 + 0x8c)) &&
             (bVar2 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
             *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
            (bVar2 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
            *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar5 + 0x38))) &&
           (bVar2 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
           *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar5 + 0x18))) {
          bVar2 = *(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar4 + 0x90);
        }
        if (!bVar2) {
          iVar4 = *param_2;
          iVar6 = param_2[3];
          iVar5 = param_2[2];
          iVar10 = param_1[1];
          iVar9 = *param_1;
          iVar8 = param_1[3];
          iVar7 = param_1[2];
          param_1[1] = param_2[1];
          *param_1 = iVar4;
          param_1[3] = iVar6;
          param_1[2] = iVar5;
          param_2[1] = iVar10;
          *param_2 = iVar9;
          param_2[3] = iVar8;
          param_2[2] = iVar7;
        }
      }
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8d8bc  size=584 */
void FUN_0008d8bc(int8 *param_1,int8 *param_2,int8 *param_3)

{
  uint1 uVar1;
  int8 iVar2;
  bool bVar3;
  int8 iVar4;
  int8 iVar5;
  int8 iVar6;
  int8 iVar7;
  int8 iVar8;
  int8 iVar9;
  int8 iVar10;
  int8 iVar11;
  
  iVar2 = tpidr_el0;
  iVar4 = *(int8 *)(iVar2 + 0x28);
  iVar5 = *param_2;
  iVar6 = *param_1;
  uVar1 = *(uint1 *)(iVar5 + 0x8c);
  bVar3 = *(uint1 *)(iVar6 + 0x8c) <= uVar1;
  if ((((uVar1 == *(uint1 *)(iVar6 + 0x8c)) &&
       (bVar3 = *(uint4 *)(iVar6 + 0x20) <= *(uint4 *)(iVar5 + 0x20),
       *(uint4 *)(iVar5 + 0x20) == *(uint4 *)(iVar6 + 0x20))) &&
      (bVar3 = *(uint8 *)(iVar6 + 0x38) <= *(uint8 *)(iVar5 + 0x38),
      *(uint8 *)(iVar5 + 0x38) == *(uint8 *)(iVar6 + 0x38))) &&
     (bVar3 = *(uint4 *)(iVar6 + 0x18) <= *(uint4 *)(iVar5 + 0x18),
     *(uint4 *)(iVar5 + 0x18) == *(uint4 *)(iVar6 + 0x18))) {
    bVar3 = *(uint4 *)(iVar6 + 0x90) <= *(uint4 *)(iVar5 + 0x90);
  }
  if (bVar3) {
    iVar6 = *param_3;
    bVar3 = uVar1 <= *(uint1 *)(iVar6 + 0x8c);
    if (((*(uint1 *)(iVar6 + 0x8c) == uVar1) &&
        (bVar3 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar6 + 0x20),
        *(uint4 *)(iVar6 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
       ((bVar3 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar6 + 0x38),
        *(uint8 *)(iVar6 + 0x38) == *(uint8 *)(iVar5 + 0x38) &&
        (bVar3 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar6 + 0x18),
        *(uint4 *)(iVar6 + 0x18) == *(uint4 *)(iVar5 + 0x18))))) {
      if (*(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar6 + 0x90)) goto code_r0x0008dae4;
    }
    else if (bVar3) goto code_r0x0008dae4;
    iVar5 = *param_3;
    iVar7 = param_3[3];
    iVar6 = param_3[2];
    iVar11 = param_2[1];
    iVar10 = *param_2;
    iVar9 = param_2[3];
    iVar8 = param_2[2];
    param_2[1] = param_3[1];
    *param_2 = iVar5;
    param_2[3] = iVar7;
    param_2[2] = iVar6;
    param_3[1] = iVar11;
    *param_3 = iVar10;
    param_3[3] = iVar9;
    param_3[2] = iVar8;
    iVar5 = *param_2;
    iVar6 = *param_1;
    bVar3 = *(uint1 *)(iVar6 + 0x8c) <= *(uint1 *)(iVar5 + 0x8c);
    if (((*(uint1 *)(iVar5 + 0x8c) == *(uint1 *)(iVar6 + 0x8c)) &&
        (bVar3 = *(uint4 *)(iVar6 + 0x20) <= *(uint4 *)(iVar5 + 0x20),
        *(uint4 *)(iVar5 + 0x20) == *(uint4 *)(iVar6 + 0x20))) &&
       ((bVar3 = *(uint8 *)(iVar6 + 0x38) <= *(uint8 *)(iVar5 + 0x38),
        *(uint8 *)(iVar5 + 0x38) == *(uint8 *)(iVar6 + 0x38) &&
        (bVar3 = *(uint4 *)(iVar6 + 0x18) <= *(uint4 *)(iVar5 + 0x18),
        *(uint4 *)(iVar5 + 0x18) == *(uint4 *)(iVar6 + 0x18))))) {
      bVar3 = *(uint4 *)(iVar6 + 0x90) <= *(uint4 *)(iVar5 + 0x90);
    }
    if (!bVar3) {
      iVar5 = *param_2;
      iVar7 = param_2[3];
      iVar6 = param_2[2];
      iVar11 = param_1[1];
      iVar10 = *param_1;
      iVar9 = param_1[3];
      iVar8 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = iVar5;
      param_1[3] = iVar7;
      param_1[2] = iVar6;
      param_2[1] = iVar11;
      *param_2 = iVar10;
      param_2[3] = iVar9;
      param_2[2] = iVar8;
    }
    goto code_r0x0008dae4;
  }
  iVar6 = *param_3;
  bVar3 = uVar1 <= *(uint1 *)(iVar6 + 0x8c);
  if ((((*(uint1 *)(iVar6 + 0x8c) == uVar1) &&
       (bVar3 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar6 + 0x20),
       *(uint4 *)(iVar6 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
      (bVar3 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar6 + 0x38),
      *(uint8 *)(iVar6 + 0x38) == *(uint8 *)(iVar5 + 0x38))) &&
     (bVar3 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar6 + 0x18),
     *(uint4 *)(iVar6 + 0x18) == *(uint4 *)(iVar5 + 0x18))) {
    if (*(uint4 *)(iVar6 + 0x90) < *(uint4 *)(iVar5 + 0x90)) goto code_r0x0008da40;
code_r0x0008d97c:
    iVar5 = *param_2;
    iVar7 = param_2[3];
    iVar6 = param_2[2];
    iVar11 = param_1[1];
    iVar10 = *param_1;
    iVar9 = param_1[3];
    iVar8 = param_1[2];
    param_1[1] = param_2[1];
    *param_1 = iVar5;
    param_1[3] = iVar7;
    param_1[2] = iVar6;
    param_2[1] = iVar11;
    *param_2 = iVar10;
    param_2[3] = iVar9;
    param_2[2] = iVar8;
    iVar5 = *param_3;
    iVar6 = *param_2;
    bVar3 = *(uint1 *)(iVar6 + 0x8c) <= *(uint1 *)(iVar5 + 0x8c);
    if (((*(uint1 *)(iVar5 + 0x8c) == *(uint1 *)(iVar6 + 0x8c)) &&
        (bVar3 = *(uint4 *)(iVar6 + 0x20) <= *(uint4 *)(iVar5 + 0x20),
        *(uint4 *)(iVar5 + 0x20) == *(uint4 *)(iVar6 + 0x20))) &&
       ((bVar3 = *(uint8 *)(iVar6 + 0x38) <= *(uint8 *)(iVar5 + 0x38),
        *(uint8 *)(iVar5 + 0x38) == *(uint8 *)(iVar6 + 0x38) &&
        (bVar3 = *(uint4 *)(iVar6 + 0x18) <= *(uint4 *)(iVar5 + 0x18),
        *(uint4 *)(iVar5 + 0x18) == *(uint4 *)(iVar6 + 0x18))))) {
      if (*(uint4 *)(iVar6 + 0x90) <= *(uint4 *)(iVar5 + 0x90)) goto code_r0x0008dae4;
    }
    else if (bVar3) goto code_r0x0008dae4;
    iVar5 = *param_3;
    iVar7 = param_3[3];
    iVar6 = param_3[2];
    iVar11 = param_2[1];
    iVar10 = *param_2;
    iVar9 = param_2[3];
    iVar8 = param_2[2];
    param_2[1] = param_3[1];
    *param_2 = iVar5;
    param_2[3] = iVar7;
    param_2[2] = iVar6;
  }
  else {
    if (bVar3) goto code_r0x0008d97c;
code_r0x0008da40:
    iVar5 = *param_3;
    iVar7 = param_3[3];
    iVar6 = param_3[2];
    iVar11 = param_1[1];
    iVar10 = *param_1;
    iVar9 = param_1[3];
    iVar8 = param_1[2];
    param_1[1] = param_3[1];
    *param_1 = iVar5;
    param_1[3] = iVar7;
    param_1[2] = iVar6;
  }
  param_3[1] = iVar11;
  *param_3 = iVar10;
  param_3[3] = iVar9;
  param_3[2] = iVar8;
code_r0x0008dae4:
  if (*(int8 *)(iVar2 + 0x28) == iVar4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8db04  size=684 */
void FUN_0008db04(int8 *param_1,int8 *param_2)

{
  int8 iVar1;
  bool bVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 iVar5;
  int8 iVar6;
  int8 *piVar7;
  int4 iVar8;
  int8 iVar9;
  int8 iVar10;
  int8 *piVar11;
  int8 iVar12;
  int8 *piVar13;
  int8 iVar14;
  int8 iVar15;
  int8 iVar16;
  
  iVar1 = tpidr_el0;
  uVar3 = (int8)param_2 - (int8)param_1 >> 5;
  iVar5 = *(int8 *)(iVar1 + 0x28);
  if ((int8)uVar3 < 3) {
    if (uVar3 < 2) goto code_r0x0008db38;
    if (uVar3 != 2) goto code_r0x0008dbec;
    piVar11 = param_2 + -4;
    iVar4 = *piVar11;
    iVar6 = *param_1;
    bVar2 = *(uint1 *)(iVar6 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
    if (((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar6 + 0x8c)) &&
        (bVar2 = *(uint4 *)(iVar6 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
        *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar6 + 0x20))) &&
       ((bVar2 = *(uint8 *)(iVar6 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
        *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar6 + 0x38) &&
        (bVar2 = *(uint4 *)(iVar6 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
        *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar6 + 0x18))))) {
      if (*(uint4 *)(iVar4 + 0x90) < *(uint4 *)(iVar6 + 0x90)) {
code_r0x0008dd64:
        iVar4 = *piVar11;
        iVar9 = param_2[-1];
        iVar6 = param_2[-2];
        iVar12 = param_1[1];
        iVar15 = *param_1;
        iVar14 = param_1[3];
        iVar10 = param_1[2];
        param_1[1] = param_2[-3];
        *param_1 = iVar4;
        param_1[3] = iVar9;
        param_1[2] = iVar6;
        bVar2 = true;
        param_2[-3] = iVar12;
        *piVar11 = iVar15;
        param_2[-1] = iVar14;
        param_2[-2] = iVar10;
        goto code_r0x0008dd88;
      }
    }
    else if (!bVar2) goto code_r0x0008dd64;
  }
  else {
    if (uVar3 == 3) {
      FUN_0008d8bc(param_1,param_1 + 4,param_2 + -4);
      bVar2 = true;
      goto code_r0x0008dd88;
    }
    if (uVar3 == 4) {
      FUN_0008ddb0(param_1,param_1 + 4,param_1 + 8,param_2 + -4);
      bVar2 = true;
      goto code_r0x0008dd88;
    }
    if (uVar3 == 5) {
      FUN_0008d6b4(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
      bVar2 = true;
      goto code_r0x0008dd88;
    }
code_r0x0008dbec:
    FUN_0008d8bc(param_1,param_1 + 4,param_1 + 8);
    if (param_1 + 0xc != param_2) {
      iVar4 = 0;
      iVar8 = 0;
      piVar11 = param_1 + 0xc;
      piVar13 = param_1 + 8;
      do {
        piVar7 = piVar11;
        iVar6 = *piVar7;
        iVar9 = *piVar13;
        bVar2 = *(uint1 *)(iVar9 + 0x8c) <= *(uint1 *)(iVar6 + 0x8c);
        if ((((*(uint1 *)(iVar6 + 0x8c) == *(uint1 *)(iVar9 + 0x8c)) &&
             (bVar2 = *(uint4 *)(iVar9 + 0x20) <= *(uint4 *)(iVar6 + 0x20),
             *(uint4 *)(iVar6 + 0x20) == *(uint4 *)(iVar9 + 0x20))) &&
            (bVar2 = *(uint8 *)(iVar9 + 0x38) <= *(uint8 *)(iVar6 + 0x38),
            *(uint8 *)(iVar6 + 0x38) == *(uint8 *)(iVar9 + 0x38))) &&
           (bVar2 = *(uint4 *)(iVar9 + 0x18) <= *(uint4 *)(iVar6 + 0x18),
           *(uint4 *)(iVar6 + 0x18) == *(uint4 *)(iVar9 + 0x18))) {
          bVar2 = *(uint4 *)(iVar9 + 0x90) <= *(uint4 *)(iVar6 + 0x90);
        }
        if (!bVar2) {
          iVar15 = piVar7[2];
          iVar14 = piVar7[1];
          iVar10 = piVar7[3];
          iVar9 = *piVar13;
          iVar16 = piVar13[3];
          iVar12 = piVar13[2];
          piVar7[1] = piVar13[1];
          *piVar7 = iVar9;
          piVar7[3] = iVar16;
          piVar7[2] = iVar12;
          iVar9 = iVar4;
          do {
            piVar11 = (int8 *)((int8)param_1 + iVar9 + 0x20);
            iVar12 = *piVar11;
            bVar2 = *(uint1 *)(iVar12 + 0x8c) <= *(uint1 *)(iVar6 + 0x8c);
            if (((*(uint1 *)(iVar6 + 0x8c) == *(uint1 *)(iVar12 + 0x8c)) &&
                (bVar2 = *(uint4 *)(iVar12 + 0x20) <= *(uint4 *)(iVar6 + 0x20),
                *(uint4 *)(iVar6 + 0x20) == *(uint4 *)(iVar12 + 0x20))) &&
               ((bVar2 = *(uint8 *)(iVar12 + 0x38) <= *(uint8 *)(iVar6 + 0x38),
                *(uint8 *)(iVar6 + 0x38) == *(uint8 *)(iVar12 + 0x38) &&
                (bVar2 = *(uint4 *)(iVar12 + 0x18) <= *(uint4 *)(iVar6 + 0x18),
                *(uint4 *)(iVar6 + 0x18) == *(uint4 *)(iVar12 + 0x18))))) {
              bVar2 = *(uint4 *)(iVar12 + 0x90) <= *(uint4 *)(iVar6 + 0x90);
            }
            if (bVar2) {
              piVar11 = (int8 *)((int8)param_1 + iVar9 + 0x40);
              goto code_r0x0008dc28;
            }
            bVar2 = iVar9 != -0x20;
            *(xunknown8 *)((int8)param_1 + iVar9 + 0x48) =
                 *(xunknown8 *)((int8)param_1 + iVar9 + 0x28);
            *(int8 *)((int8)param_1 + iVar9 + 0x40) = *piVar11;
            *(xunknown8 *)((int8)param_1 + iVar9 + 0x58) =
                 *(xunknown8 *)((int8)param_1 + iVar9 + 0x38);
            *(xunknown8 *)((int8)param_1 + iVar9 + 0x50) =
                 *(xunknown8 *)((int8)param_1 + iVar9 + 0x30);
            iVar9 = iVar9 + -0x20;
          } while (bVar2);
          piVar11 = param_1;
code_r0x0008dc28:
          *piVar11 = iVar6;
          iVar8 = iVar8 + 1;
          piVar11[2] = iVar15;
          piVar11[1] = iVar14;
          piVar11[3] = iVar10;
          if (iVar8 == 8) {
            bVar2 = piVar7 + 4 == param_2;
            goto code_r0x0008dd88;
          }
        }
        iVar4 = iVar4 + 0x20;
        piVar11 = piVar7 + 4;
        piVar13 = piVar7;
      } while (piVar7 + 4 != param_2);
    }
  }
code_r0x0008db38:
  bVar2 = true;
code_r0x0008dd88:
  if (*(int8 *)(iVar1 + 0x28) == iVar5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(bVar2);
  return;
}

/* 0x8ddb0  size=412 */
void FUN_0008ddb0(int8 *param_1,int8 *param_2,int8 *param_3,int8 *param_4)

{
  int8 iVar1;
  bool bVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  int8 iVar6;
  int8 iVar7;
  int8 iVar8;
  int8 iVar9;
  int8 iVar10;
  
  iVar1 = tpidr_el0;
  iVar3 = *(int8 *)(iVar1 + 0x28);
  FUN_0008d8bc();
  iVar4 = *param_4;
  iVar5 = *param_3;
  bVar2 = *(uint1 *)(iVar5 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
  if ((((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar5 + 0x8c)) &&
       (bVar2 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
       *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
      (bVar2 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
      *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar5 + 0x38))) &&
     (bVar2 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
     *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar5 + 0x18))) {
    bVar2 = *(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar4 + 0x90);
  }
  if (!bVar2) {
    iVar4 = *param_4;
    iVar6 = param_4[3];
    iVar5 = param_4[2];
    iVar10 = param_3[1];
    iVar9 = *param_3;
    iVar8 = param_3[3];
    iVar7 = param_3[2];
    param_3[1] = param_4[1];
    *param_3 = iVar4;
    param_3[3] = iVar6;
    param_3[2] = iVar5;
    param_4[1] = iVar10;
    *param_4 = iVar9;
    param_4[3] = iVar8;
    param_4[2] = iVar7;
    iVar4 = *param_3;
    iVar5 = *param_2;
    bVar2 = *(uint1 *)(iVar5 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
    if (((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar5 + 0x8c)) &&
        (bVar2 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
        *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
       ((bVar2 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
        *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar5 + 0x38) &&
        (bVar2 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
        *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar5 + 0x18))))) {
      bVar2 = *(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar4 + 0x90);
    }
    if (!bVar2) {
      iVar4 = *param_3;
      iVar6 = param_3[3];
      iVar5 = param_3[2];
      iVar10 = param_2[1];
      iVar9 = *param_2;
      iVar8 = param_2[3];
      iVar7 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = iVar4;
      param_2[3] = iVar6;
      param_2[2] = iVar5;
      param_3[1] = iVar10;
      *param_3 = iVar9;
      param_3[3] = iVar8;
      param_3[2] = iVar7;
      iVar4 = *param_2;
      iVar5 = *param_1;
      bVar2 = *(uint1 *)(iVar5 + 0x8c) <= *(uint1 *)(iVar4 + 0x8c);
      if (((*(uint1 *)(iVar4 + 0x8c) == *(uint1 *)(iVar5 + 0x8c)) &&
          (bVar2 = *(uint4 *)(iVar5 + 0x20) <= *(uint4 *)(iVar4 + 0x20),
          *(uint4 *)(iVar4 + 0x20) == *(uint4 *)(iVar5 + 0x20))) &&
         ((bVar2 = *(uint8 *)(iVar5 + 0x38) <= *(uint8 *)(iVar4 + 0x38),
          *(uint8 *)(iVar4 + 0x38) == *(uint8 *)(iVar5 + 0x38) &&
          (bVar2 = *(uint4 *)(iVar5 + 0x18) <= *(uint4 *)(iVar4 + 0x18),
          *(uint4 *)(iVar4 + 0x18) == *(uint4 *)(iVar5 + 0x18))))) {
        bVar2 = *(uint4 *)(iVar5 + 0x90) <= *(uint4 *)(iVar4 + 0x90);
      }
      if (!bVar2) {
        iVar4 = *param_2;
        iVar6 = param_2[3];
        iVar5 = param_2[2];
        iVar10 = param_1[1];
        iVar9 = *param_1;
        iVar8 = param_1[3];
        iVar7 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = iVar4;
        param_1[3] = iVar6;
        param_1[2] = iVar5;
        param_2[1] = iVar10;
        *param_2 = iVar9;
        param_2[3] = iVar8;
        param_2[2] = iVar7;
      }
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8e360  size=20 */
void FUN_0008e360(void)

{
  FUN_0005eb94(0x371ec /* "vector" */);
  xRam0000000000162720 = 0;
  xRam0000000000162728 = 0;
  xRam0000000000162730 = 0;
  __cxa_atexit(FUN_00081e4c,&xRam0000000000162720,0xcee00);
  xRam0000000000162740 = 0;
  xRam0000000000162748 = 0;
  xRam0000000000162738 = 0;
  __cxa_atexit(FUN_00081e6c,&xRam0000000000162738,0xcee00);
  xRam0000000000162758 = 0;
  xRam0000000000162760 = 0;
  xRam0000000000162750 = 0;
  __cxa_atexit(FUN_00081e8c,&xRam0000000000162750,0xcee00);
  xRam0000000000162778 = 0;
  xRam0000000000162780 = 0;
  xRam0000000000162770 = 0;
  __cxa_atexit(FUN_00081e8c,&xRam0000000000162770,0xcee00);
  xRam0000000000162790 = 0;
  xRam0000000000162798 = 0;
  xRam0000000000162788 = 0;
  __cxa_atexit(FUN_00081e8c,&xRam0000000000162788,0xcee00);
  xRam00000000001627c0 = 0x3f800000;
  xRam00000000001627a8 = 0;
  xRam00000000001627a0 = 0;
  xRam00000000001627b8 = 0;
  xRam00000000001627b0 = 0;
  __cxa_atexit(FUN_00081eac,&xRam00000000001627a0,0xcee00);
  xRam00000000001627d0 = 0;
  xRam00000000001627d8 = 0;
  xRam00000000001627c8 = 0;
  __cxa_atexit(FUN_00081f04,&xRam00000000001627c8,0xcee00);
  xRam0000000000162800 = 0x3f800000;
  xRam00000000001627e8 = 0;
  xRam00000000001627e0 = 0;
  xRam00000000001627f8 = 0;
  xRam00000000001627f0 = 0;
  __cxa_atexit(FUN_00081eac,&xRam00000000001627e0,0xcee00);
  xRam0000000000162828 = 0x3f800000;
  xRam0000000000162810 = 0;
  xRam0000000000162808 = 0;
  xRam0000000000162820 = 0;
  xRam0000000000162818 = 0;
  __cxa_atexit(FUN_00081f24,&xRam0000000000162808,0xcee00);
  xRam0000000000162850 = 0x3f800000;
  xRam0000000000162838 = 0;
  xRam0000000000162830 = 0;
  xRam0000000000162848 = 0;
  xRam0000000000162840 = 0;
  __cxa_atexit(FUN_00081f7c,&xRam0000000000162830,0xcee00);
  xRam0000000000162860 = 0;
  xRam0000000000162868 = 0;
  xRam0000000000162858 = 0;
  __cxa_atexit(FUN_00081fd4,&xRam0000000000162858,0xcee00);
  xRam0000000000162c18 = 0;
  xRam0000000000162c20 = 0;
  xRam0000000000162c28 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_000833e4,&xRam0000000000162c18,0xcee00);
  return;
}

/* 0x8e374  size=436 */
void FUN_0008e374(void)

{
  xRam0000000000162720 = 0;
  xRam0000000000162728 = 0;
  xRam0000000000162730 = 0;
  __cxa_atexit(FUN_00081e4c,&xRam0000000000162720,0xcee00);
  xRam0000000000162740 = 0;
  xRam0000000000162748 = 0;
  xRam0000000000162738 = 0;
  __cxa_atexit(FUN_00081e6c,&xRam0000000000162738,0xcee00);
  xRam0000000000162758 = 0;
  xRam0000000000162760 = 0;
  xRam0000000000162750 = 0;
  __cxa_atexit(FUN_00081e8c,&xRam0000000000162750,0xcee00);
  xRam0000000000162778 = 0;
  xRam0000000000162780 = 0;
  xRam0000000000162770 = 0;
  __cxa_atexit(FUN_00081e8c,&xRam0000000000162770,0xcee00);
  xRam0000000000162790 = 0;
  xRam0000000000162798 = 0;
  xRam0000000000162788 = 0;
  __cxa_atexit(FUN_00081e8c,&xRam0000000000162788,0xcee00);
  xRam00000000001627c0 = 0x3f800000;
  xRam00000000001627a8 = 0;
  xRam00000000001627a0 = 0;
  xRam00000000001627b8 = 0;
  xRam00000000001627b0 = 0;
  __cxa_atexit(FUN_00081eac,&xRam00000000001627a0,0xcee00);
  xRam00000000001627d0 = 0;
  xRam00000000001627d8 = 0;
  xRam00000000001627c8 = 0;
  __cxa_atexit(FUN_00081f04,&xRam00000000001627c8,0xcee00);
  xRam0000000000162800 = 0x3f800000;
  xRam00000000001627e8 = 0;
  xRam00000000001627e0 = 0;
  xRam00000000001627f8 = 0;
  xRam00000000001627f0 = 0;
  __cxa_atexit(FUN_00081eac,&xRam00000000001627e0,0xcee00);
  xRam0000000000162828 = 0x3f800000;
  xRam0000000000162810 = 0;
  xRam0000000000162808 = 0;
  xRam0000000000162820 = 0;
  xRam0000000000162818 = 0;
  __cxa_atexit(FUN_00081f24,&xRam0000000000162808,0xcee00);
  xRam0000000000162850 = 0x3f800000;
  xRam0000000000162838 = 0;
  xRam0000000000162830 = 0;
  xRam0000000000162848 = 0;
  xRam0000000000162840 = 0;
  __cxa_atexit(FUN_00081f7c,&xRam0000000000162830,0xcee00);
  xRam0000000000162860 = 0;
  xRam0000000000162868 = 0;
  xRam0000000000162858 = 0;
  __cxa_atexit(FUN_00081fd4,&xRam0000000000162858,0xcee00);
  xRam0000000000162c18 = 0;
  xRam0000000000162c20 = 0;
  xRam0000000000162c28 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_000833e4,&xRam0000000000162c18,0xcee00);
  return;
}

/* 0x8f078  size=164 */
void FUN_0008f078(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,0x263c5 /* "%s %s%s" */,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8f11c  size=564 */
void FUN_0008f11c(xunknown4 param_1,int4 param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  xunknown8 *pxVar4;
  int4 iVar5;
  int4 iVar6;
  xunknown4 xVar7;
  xunknown4 xStack_54;
  xunknown8 xStack_50;
  int8 iStack_48;
  
  iVar2 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar2 + 0x28);
  xStack_50 = 0;
  xStack_54 = 0;
  (*(code *)*pxRam00000000000d32f8)(2,&xStack_50);
  pxVar3 = pxRam00000000000d3300;
  (*(code *)*pxRam00000000000d3300)(0xde1,xStack_50 & 0xffffffff);
  pxVar4 = pxRam00000000000d3318;
  (*(code *)*pxRam00000000000d3318)(0xde1,1,param_1,0x100,0x100);
  if (param_2 == 0) {
    (*(code *)*pxRam00000000000d3240)(1,&xStack_54);
    (*(code *)*pxRam00000000000d3248)(0x8d40,xStack_54);
    (*(code *)*pxRam00000000000d3258)(0x8d40,0x8ce0,0xde1,xStack_50 & 0xffffffff,0);
  }
  else {
    (*(code *)*pxVar3)(0xde1,xStack_50._4_4_);
    (*(code *)*pxVar4)(0xde1,1,param_2,0x100,0x100);
    (*(code *)*pxRam00000000000d3240)(1,&xStack_54);
    (*(code *)*pxRam00000000000d3248)(0x8d40,xStack_54);
    pxVar3 = pxRam00000000000d3258;
    (*(code *)*pxRam00000000000d3258)(0x8d40,0x8ce0,0xde1,xStack_50 & 0xffffffff,0);
    xVar7 = 0x821a;
    if (param_2 != 0x88f0) {
      xVar7 = 0x8d00;
    }
    (*(code *)*pxVar3)(0x8d40,xVar7,0xde1,xStack_50._4_4_,0);
  }
  iVar5 = (*(code *)*pxRam00000000000d3260)(0x8d40);
  (*(code *)*pxRam00000000000d3250)(1,&xStack_54);
  (*(code *)*pxRam00000000000d3308)(2,&xStack_50);
  pxVar3 = pxRam00000000000d3228;
  do {
    iVar6 = (*(code *)*pxVar3)();
  } while (iVar6 != 0);
  xVar1 = 0x2aba8;
  if (iVar5 != 0x8cd5) {
    xVar1 = 0x36dd0;
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar1);
  return;
}

/* 0x8f440  size=2640 */
void FUN_0008f440(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  int8 *piVar3;
  bool bVar4;
  int4 iVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  uint8 uVar8;
  int8 iVar9;
  int8 iVar10;
  int8 iVar11;
  int8 iVar12;
  xunknown8 xVar13;
  uint4 uVar14;
  uint8 uVar15;
  xunknown8 *pxVar16;
  int8 iVar17;
  float8 fVar18;
  xunknown8 in_stack_fffffffffffffb90;
  xunknown4 xVar19;
  int4 iStack_43c;
  xunknown8 xStack_438;
  uint4 uStack_430;
  int4 iStack_42c;
  xunknown8 xStack_428;
  xunknown8 xStack_420;
  xunknown8 xStack_418;
  uint4 uStack_410;
  uint4 uStack_40c;
  xunknown8 xStack_408;
  char cStack_400;
  int4 iStack_3fc;
  xunknown8 xStack_3f8;
  xunknown8 xStack_3f0;
  int8 iStack_70;
  
  pxVar16 = pxRam00000000000d3208;
  xVar19 = (xunknown4)((uint8)in_stack_fffffffffffffb90 >> 0x20);
  iVar1 = tpidr_el0;
  iStack_70 = *(int8 *)(iVar1 + 0x28);
  if (((uRam0000000000170f98 & 1) == 0) && ((code *)*pxRam00000000000d3208 != (code *)0x0)) {
    xStack_3f8 = 0;
    xStack_3f0 = 0;
    (*(code *)*pxRam00000000000d3208)(0xba2,&xStack_3f8);
    xVar6 = eglGetCurrentDisplay();
    xVar7 = eglGetCurrentSurface(0x3059);
    uStack_40c = 0;
    xStack_438 = (uint8)xStack_438._4_4_ << 0x20;
    eglQuerySurface(xVar6,xVar7,0x3057,&uStack_40c);
    eglQuerySurface(xVar6,xVar7,0x3056,&xStack_438);
    xVar19 = (xunknown4)((uint8)in_stack_fffffffffffffb90 >> 0x20);
    if ((0 < (int4)uStack_40c) && ((0 < (int4)(uint4)xStack_438 && (0 < (int4)xStack_3f0._4_4_)))) {
      if (((uint4)xStack_3f0 == uStack_40c) && (xStack_3f0._4_4_ == (uint4)xStack_438)) {
        if ((iRam0000000000170f88 != 0) && (iRam0000000000170fac < 6)) {
          iRam0000000000170fac = iRam0000000000170fac + 1;
          (*xRam0000000000170f90)(0,0x23d9a /* "compat: the scene is full size again (%dx%d) - render scaling off" */);
        }
        xRam0000000000170f8c = 0;
        iRam0000000000170f88 = 0;
      }
      else if ((((((uint4)xStack_3f0 != iRam0000000000170f88) ||
                 (xStack_3f0._4_4_ != xRam0000000000170f8c)) &&
                ((int4)(uint4)xStack_3f0 < (int4)uStack_40c)) &&
               (((int4)xStack_3f8 == 0 && (xStack_3f8._4_4_ == 0)))) &&
              ((xStack_3f0._4_4_ < (uint4)xStack_438 &&
               (((int4)uStack_40c <= (int4)((uint4)xStack_3f0 * 2) &&
                ((uint4)xStack_438 <= xStack_3f0._4_4_ << 1)))))) {
        fVar18 = (float8)uStack_40c / (float8)(xStack_438 & 0xffffffff);
        if ((fVar18 * fRam0000000000022258 <=
             (float8)(int4)(uint4)xStack_3f0 / (float8)xStack_3f0._4_4_) &&
           ((float8)(int4)(uint4)xStack_3f0 / (float8)xStack_3f0._4_4_ <=
            fVar18 * fRam0000000000022238)) {
          uStack_410 = 0;
          (*(code *)*pxVar16)(0x8ca6,&uStack_410);
          pxVar2 = pxRam00000000000d3288;
          xVar19 = (xunknown4)((uint8)in_stack_fffffffffffffb90 >> 0x20);
          if (uStack_410 != 0) {
            xStack_418 = 0;
            xStack_420 = 0;
            (*(code *)*pxRam00000000000d3288)(0x8ca9,0x8ce0,0x8cd0,(int8)&xStack_418 + 4);
            piVar3 = piRam00000000000d3290;
            xVar19 = (xunknown4)((uint8)in_stack_fffffffffffffb90 >> 0x20);
            if ((xStack_418._4_4_ == 0x1702) && (*piRam00000000000d3290 != 0)) {
              (*(code *)*pxVar2)(0x8ca9,0x8ce0,0x8cd1,&xStack_418);
              xStack_428 = xStack_428 & 0xffffffff;
              (*(code *)*pxVar16)(0x8069,(int8)&xStack_428 + 4);
              pxVar2 = pxRam00000000000d3300;
              (*(code *)*pxRam00000000000d3300)(0xde1,xStack_418 & 0xffffffff);
              (*(code *)*piVar3)(0xde1,0,0x1000,(int8)&xStack_420 + 4);
              (*(code *)*piVar3)(0xde1,0,0x1001,&xStack_420);
              (*(code *)*pxVar2)(0xde1,xStack_428._4_4_);
              pxVar2 = pxRam00000000000d3228;
              do {
                iVar5 = (*(code *)*pxVar2)();
                xVar19 = (xunknown4)((uint8)in_stack_fffffffffffffb90 >> 0x20);
              } while (iVar5 != 0);
              if ((xStack_420._4_4_ == (uint4)xStack_3f0) && ((uint4)xStack_420 == xStack_3f0._4_4_)
                 ) {
                iRam0000000000170f88 = xStack_420._4_4_;
                xRam0000000000170f8c = (uint4)xStack_420;
                if (iRam0000000000170fac < 6) {
                  iRam0000000000170fac = iRam0000000000170fac + 1;
                  (*xRam0000000000170f90)
                            (((float8)(int4)xStack_420._4_4_ * 100.0) / (float8)(int4)uStack_40c,0,
                             0x2b17f /* "compat: render scaling - the main scene is %dx%d on a %dx%d screen (%...." */,xStack_420._4_4_,xStack_420 & 0xffffffff,uStack_40c,
                             xStack_438 & 0xffffffff);
                }
              }
              else if (iRam0000000000170fac < 6) {
                iRam0000000000170fac = iRam0000000000170fac + 1;
                (*xRam0000000000170f90)
                          (1,0x3f9c4 /* "compat: scaled scene %dx%d draws into a %dx%d texture - not supported,..." */,xStack_3f0 & 0xffffffff,xStack_3f0._4_4_,xStack_420._4_4_,
                           xStack_420 & 0xffffffff);
              }
            }
          }
        }
      }
    }
  }
  if ((iRam0000000000170f9c < 5) && (0 < iRam0000000000170fa0)) {
    xStack_3f8 = 0;
    xStack_3f0 = 0;
    (*(code *)*pxVar16)(0xba2,&xStack_3f8);
    xVar6 = eglGetCurrentDisplay();
    xVar7 = eglGetCurrentSurface(0x3059);
    uStack_40c = 0;
    xStack_438 = xStack_438 & 0xffffffff00000000;
    eglQuerySurface(xVar6,xVar7,0x3057,&uStack_40c);
    eglQuerySurface(xVar6,xVar7,0x3056,&xStack_438);
    if (iRam0000000000170f88 == 0) {
      uVar14 = uStack_40c;
    }
    else {
      xStack_438 = CONCAT44(xStack_438._4_4_,xRam0000000000170f8c);
      uVar14 = iRam0000000000170f88;
    }
    iRam0000000000170fa4 = iRam0000000000170fa4 + 1;
    if ((uint4)xStack_3f0 == uVar14) {
      if (xStack_3f0._4_4_ == (uint4)xStack_438) {
        iRam0000000000170fa8 = iRam0000000000170fa8 + 1;
      }
    }
  }
  if (iRam0000000000170fa0 < 6) {
    if (iRam0000000000170fa0 == 0) {
      iStack_3fc = 0;
      uStack_40c = 2;
      xStack_408 = 0;
      cStack_400 = '\0';
      uVar8 = gl__Load_plt(&uStack_40c,xRam0000000000170f90);
      pxVar2 = pxRam00000000000d3218;
      if ((uVar8 & 1) == 0) {
        (*xRam0000000000170f90)(1,0x348d9 /* "compat: no GL context on the render thread?" */);
      }
      else {
        iVar9 = (*(code *)*pxRam00000000000d3218)(0x1f01);
        iVar10 = (*(code *)*pxVar2)(0x1f00);
        iVar11 = (*(code *)*pxVar2)(0x1f02);
        iVar12 = (*(code *)*pxVar2)(0x8b8c);
        iVar17 = 0x25c3f;
        if (iVar9 != 0) {
          iVar17 = iVar9;
        }
        iVar9 = 0x25c3f;
        if (iVar10 != 0) {
          iVar9 = iVar10;
        }
        iVar10 = 0x25c3f;
        if (iVar11 != 0) {
          iVar10 = iVar11;
        }
        iVar11 = 0x25c3f;
        if (iVar12 != 0) {
          iVar11 = iVar12;
        }
        xVar6 = 0x29893;
        if (iStack_3fc != 0) {
          xVar6 = 0x27635 /* " (SOME ES3 CORE FUNCTIONS MISSING)" */;
        }
        (*xRam0000000000170f90)
                  (0,0x35574 /* "compat: GPU '%s' by '%s' | %s | GLSL %s | ES %d.%d%s" */,iVar17,iVar9,iVar10,iVar11,uStack_40c,xStack_408 & 0xffffffff,xVar6);
        uStack_410 = 0;
        xStack_420 = 0;
        xStack_418 = 0;
        (*(code *)*pxVar16)(0xd33,&uStack_410);
        (*(code *)*pxVar16)(0x8824,(int8)&xStack_418 + 4);
        (*(code *)*pxVar16)(0x8cdf,&xStack_418);
        (*(code *)*pxVar16)(0x8872,(int8)&xStack_420 + 4);
        (*(code *)*pxVar16)(0x84e8,&xStack_420);
        (*xRam0000000000170f90)
                  (0,0x39691 /* "compat: limits - texture %d, renderbuffer %d, draw buffers %d, colour ..." */,uStack_410,xStack_420 & 0xffffffff,xStack_418._4_4_,
                   xStack_418 & 0xffffffff,xStack_420._4_4_);
        iVar17 = 0;
        iVar9 = 0;
        do {
          gl__HasExtension_plt(*(xunknown8 *)(iVar9 + 0xcef80));
          iVar5 = FUN_0008ff20((int8)&xStack_3f8 + iVar17,0xffffffffffffffff,900 - iVar17);
          iVar9 = iVar9 + 8;
          iVar17 = iVar17 + iVar5;
        } while (iVar9 != 0x60);
        (*xRam0000000000170f90)(0,0x34905 /* "compat: extensions - %s" */,&xStack_3f8);
        xVar7 = 0x2b97b;
        if (xStack_408._7_1_ == '\0') {
          xVar7 = 0x34fa4;
        }
        xVar13 = 0x2b97b;
        if (cStack_400 == '\0') {
          xVar13 = 0x3fa1c /* "NO (no per-stage GPU ms in the log on this device)" */;
        }
        (*xRam0000000000170f90)(0,0x40804 /* "compat: RGBA16F target %s, GPU timers %s" */,xVar7,xVar13);
        xVar7 = eglGetCurrentDisplay();
        xVar13 = eglGetCurrentSurface(0x3059);
        xStack_428 = 0;
        eglQuerySurface(xVar7,xVar13,0x3057,(int8)&xStack_428 + 4);
        eglQuerySurface(xVar7,xVar13,0x3056,&xStack_428);
        iStack_42c = 0;
        xVar13 = eglGetCurrentContext();
        eglQueryContext(xVar7,xVar13,0x3098,&iStack_42c);
        (*xRam0000000000170f90)(0,0x29e52 /* "compat: EGL surface %dx%d, context client version %d" */,xStack_428._4_4_,xStack_428 & 0xffffffff,iStack_42c);
        pxVar2 = pxRam00000000000d3228;
        do {
          iVar5 = (*(code *)*pxVar2)();
          pxVar16 = pxRam00000000000d3208;
          xVar19 = (xunknown4)((uint8)xVar6 >> 0x20);
        } while (iVar5 != 0);
        uStack_430 = 0;
        (*(code *)*pxRam00000000000d3208)(0x821b,&uStack_430);
        iVar5 = (*(code *)*pxVar2)();
        bVar4 = false;
        if ((iVar5 == 0) && (2 < (int4)uStack_430)) {
          uVar8 = (*(code *)*pxRam00000000000d3370)(0x8b30);
          uVar15 = uVar8 & 0xffffffff;
          xStack_438 = 0x28f41 /* "#version 300 es\nprecision mediump float;\nuniform highp sampler2D u;\..." */;
          (*(code *)*pxRam00000000000d3378)(uVar8,1,&xStack_438,0);
          (*(code *)*pxRam00000000000d3380)(uVar15);
          iStack_43c = 0;
          (*(code *)*pxRam00000000000d3388)(uVar15,0x8b81,&iStack_43c);
          bVar4 = iStack_43c != 0;
          (*(code *)*pxRam00000000000d3398)(uVar15);
        }
        if (iStack_42c - 1U < 2) {
          uVar14 = uStack_430;
          if (iVar5 != 0) {
            uVar14 = 2;
          }
          xVar6 = 0x4082d /* "valid" */;
          if (iVar5 != 0) {
            xVar6 = 0x23ddc /* "INVALID" */;
          }
          xVar7 = 0x3ceba /* "compiles" */;
          if (!bVar4) {
            xVar7 = 0x2b1e6 /* "FAILS" */;
          }
          (*xRam0000000000170f90)(0,0x2d0d0 /* "compat: the game requested an ES %d context; the driver runs it as ES ..." */,iStack_42c,uVar14,xVar6,xVar7);
        }
        if (!(bool)(((iVar5 == 0 && uStack_430 != 2) && (iVar5 != 0 || 1 < (int4)uStack_430)) &
                   bVar4)) {
          uStack_40c = uStack_430;
          if ((int4)uStack_430 < 1 || iVar5 != 0) {
            uStack_40c = 2;
          }
          xStack_408 = xStack_408 & 0xffffffff00000000;
          if ((int4)uStack_40c < 3) {
            (*xRam0000000000170f90)(1,0x2b1ec /* "compat: the game runs an OpenGL ES %d.%d context on this GPU - ZyZ Gfx..." */,uStack_40c,0);
            uRam0000000000170f98 = 1;
            rq__Shutdown_plt();
          }
        }
      }
    }
    iRam0000000000170fa0 = iRam0000000000170fa0 + 1;
    if ((uRam0000000000170f98 & 1) == 0) {
      xStack_3f8 = 0;
      xStack_3f0 = 0;
      uStack_40c = 0;
      (*(code *)*pxVar16)(0xba2,&xStack_3f8);
      (*(code *)*pxVar16)(0x8ca6,&uStack_40c);
      xVar6 = eglGetCurrentDisplay();
      xVar7 = eglGetCurrentSurface(0x3059);
      xStack_438 = xStack_438 & 0xffffffff00000000;
      uStack_410 = 0;
      eglQuerySurface(xVar6,xVar7,0x3057,&xStack_438);
      eglQuerySurface(xVar6,xVar7,0x3056,&uStack_410);
      pxVar16 = pxRam00000000000d3288;
      xVar6 = 0x3556f /* "none" */;
      xStack_418 = 0;
      if (uStack_40c == 0) {
        uVar8 = 0;
        uVar14 = 0;
      }
      else {
        (*(code *)*pxRam00000000000d3288)(0x8ca9,0x8ce0,0x8cd0,(int8)&xStack_418 + 4);
        (*(code *)*pxVar16)(0x8ca9,0x8ce0,0x8cd1,&xStack_418);
        uVar8 = xStack_418 & 0xffffffff;
        xVar7 = 0x22b59 /* "renderbuffer" */;
        if (xStack_418._4_4_ != 0x8d41) {
          xVar7 = 0x3556f /* "none" */;
        }
        xVar6 = 0x32b0f /* "texture" */;
        if (xStack_418._4_4_ != 0x1702) {
          xVar6 = xVar7;
        }
        uVar14 = uStack_40c;
      }
      if (((uint4)xStack_3f0 == (uint4)xStack_438) && (xStack_3f0._4_4_ == uStack_410)) {
        xVar7 = 0x407cf /* "counts as MAIN scene" */;
      }
      else {
        xVar7 = 0x2641d /* "counts as MAIN scene (render scaling)" */;
        if (xStack_3f0._4_4_ != xRam0000000000170f8c || (uint4)xStack_3f0 != iRam0000000000170f88) {
          xVar7 = 0x348b0 /* "NOT main (size differs from the surface)" */;
        }
      }
      (*xRam0000000000170f90)
                (0,0x36dd6 /* "compat: RenderScene #%d - FBO %d (colour %s %d), viewport %d,%d %dx%d,..." */,iRam0000000000170fa0,uVar14,xVar6,uVar8,xStack_3f8 & 0xffffffff,
                 xStack_3f8._4_4_,CONCAT44(xVar19,(uint4)xStack_3f0),xStack_3f0._4_4_,
                 (uint4)xStack_438,uStack_410,xVar7);
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_70) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8fe90  size=144 */
void FUN_0008fe90(void)

{
  xunknown8 xVar1;
  
  if (iRam0000000000170f9c < 5 && 0 < iRam0000000000170fa0) {
    xVar1 = 0x3491d /* " - MORE THAN ONE full-size scene per frame (effects use the first)" */;
    if (iRam0000000000170fa8 < 2) {
      xVar1 = 0x29893;
    }
    (*xRam0000000000170f90)(0,0x2d144 /* "compat: frame had %d RenderScene calls, %d at full surface size%s" */,iRam0000000000170fa4,iRam0000000000170fa8,xVar1);
    iRam0000000000170f9c = iRam0000000000170f9c + 1;
  }
  iRam0000000000170fa4 = 0;
  iRam0000000000170fa8 = 0;
  return;
}

/* 0x8ff20  size=164 */
void FUN_0008ff20(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,0x38dcf /* "%s %s | " */,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x902bc  size=164 */
void FUN_000902bc(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,0x39f77,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x9055c  size=68 */
void FUN_0009055c(int8 *param_1)

{
  if (*(int8 *)*param_1 == 0x5a795a4766784d6b) {
    *param_1 = (int8)((int8 *)*param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0009058c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*xRam0000000000170ff0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0009059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*iRam0000000000170fe8)();
  return;
}

/* 0x90660  size=308 */
void FUN_00090660(void)

{
  if (iRam00000000001710a0 != 0) {
    iRam00000000001710a8 = iRam00000000001710a0;
    operator_delete_plt(iRam00000000001710a0,iRam00000000001710b0 - iRam00000000001710a0);
  }
  if (iRam0000000000171088 != 0) {
    iRam0000000000171090 = iRam0000000000171088;
    operator_delete_plt(iRam0000000000171088,iRam0000000000171098 - iRam0000000000171088);
  }
  if (iRam0000000000171070 != 0) {
    iRam0000000000171078 = iRam0000000000171070;
    operator_delete_plt(iRam0000000000171070,iRam0000000000171080 - iRam0000000000171070);
  }
  if (iRam0000000000171058 != 0) {
    iRam0000000000171060 = iRam0000000000171058;
    operator_delete_plt(iRam0000000000171058,iRam0000000000171068 - iRam0000000000171058);
  }
  if (iRam0000000000171040 != 0) {
    iRam0000000000171048 = iRam0000000000171040;
    operator_delete_plt(iRam0000000000171040,iRam0000000000171050 - iRam0000000000171040);
  }
  if (iRam0000000000171028 != 0) {
    iRam0000000000171030 = iRam0000000000171028;
    operator_delete_plt(iRam0000000000171028,iRam0000000000171038 - iRam0000000000171028);
  }
  if (iRam0000000000171010 != 0) {
    iRam0000000000171018 = iRam0000000000171010;
    operator_delete_plt(iRam0000000000171010,iRam0000000000171020 - iRam0000000000171010);
  }
  if (iRam0000000000170ff8 == 0) {
    return;
  }
  iRam0000000000171000 = iRam0000000000170ff8;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iRam0000000000170ff8,iRam0000000000171008 - iRam0000000000170ff8);
  return;
}

/* 0x90794  size=116 */
void FUN_00090794(void)

{
  iRam0000000000171000 = 0;
  iRam0000000000170ff8 = 0;
  iRam0000000000171010 = 0;
  iRam0000000000171008 = 0;
  iRam0000000000171020 = 0;
  iRam0000000000171018 = 0;
  iRam0000000000171030 = 0;
  iRam0000000000171028 = 0;
  iRam0000000000171040 = 0;
  iRam0000000000171038 = 0;
  iRam0000000000171050 = 0;
  iRam0000000000171048 = 0;
  iRam0000000000171060 = 0;
  iRam0000000000171058 = 0;
  iRam0000000000171070 = 0;
  iRam0000000000171068 = 0;
  iRam0000000000171080 = 0;
  iRam0000000000171078 = 0;
  iRam0000000000171090 = 0;
  iRam0000000000171088 = 0;
  iRam00000000001710a0 = 0;
  iRam0000000000171098 = 0;
  iRam00000000001710b0 = 0;
  iRam00000000001710a8 = 0;
  __cxa_atexit(FUN_00090660,0,0xcee00);
  xRam00000000001710c0 = 0;
  xRam00000000001710c8 = 0;
  xRam00000000001710d0 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00090ca4,0x1710c0,0xcee00);
  return;
}

/* 0x90a84  size=216 */
void FUN_00090a84(int8 *param_1)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  uint8 uVar3;
  uint8 uVar4;
  
  uVar4 = *(uint8 *)*param_1;
  *param_1 = (int8)((uint8 *)*param_1 + 1);
  uVar3 = uVar4 >> 0x20;
  if (uVar4 >> 0x23 == 0) {
    boot__R_plt((int8)*(int4 *)(uVar3 * 4 + 0x418d4) + 0x418d4);
  }
  if ((uVar3 == 1) && ((xRam00000000001710b8 & 1) == 0)) {
    boot__RenderCheck_plt();
  }
  if (uVar4 >> 0x23 == 0) {
    pxVar1 = (xunknown8 *)(&iRam0000000000171000)[uVar3 * 3];
    pxVar2 = (xunknown8 *)(&iRam0000000000170ff8)[uVar3 * 3];
    while (pxVar2 != pxVar1) {
      if ((xRam00000000001710b8 & 1) != 0) break;
      (*(code *)*pxVar2)(uVar3,uVar4 & 0xffffffff);
      pxVar2 = pxVar2 + 1;
    }
  }
  boot__R_plt(0x38e0d /* "game render commands" */);
  if (uVar3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x000ca32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000000d40f8)();
    return;
  }
  return;
}

/* 0x90ca4  size=32 */
void FUN_00090ca4(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x91054  size=20 */
void FUN_00091054(void)

{
  int8 *piVar1;
  int8 iVar2;
  
  FUN_0005eb94(0x371ec /* "vector" */);
  piVar1 = (int8 *)FUN_0005eb94(0x371ec /* "vector" */);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    return;
  }
  piVar1[1] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,piVar1[2] - iVar2);
  return;
}

/* 0x91068  size=20 */
void FUN_00091068(void)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)FUN_0005eb94(0x371ec /* "vector" */);
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    return;
  }
  piVar1[1] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,piVar1[2] - iVar2);
  return;
}

/* 0x9107c  size=32 */
void FUN_0009107c(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x915e0  size=20 */
void FUN_000915e0(void)

{
  FUN_0005eb94(0x371ec /* "vector" */);
  pxRam00000000001710e8 = 0;
  pxRam00000000001710f0 = 0;
  pxRam00000000001710f8 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0009107c,&pxRam00000000001710e8,0xcee00);
  return;
}

/* 0x915f4  size=36 */
void FUN_000915f4(void)

{
  pxRam00000000001710e8 = 0;
  pxRam00000000001710f0 = 0;
  pxRam00000000001710f8 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0009107c,&pxRam00000000001710e8,0xcee00);
  return;
}

/* 0x91850  size=2356 */
void FUN_00091850(void)

{
  bool bVar1;
  int8 iVar2;
  uint8 uVar3;
  xunknown8 *pxVar4;
  xunknown8 *pxVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  int4 iVar8;
  uint1 uVar9;
  char cVar10;
  int4 iVar11;
  xunknown4 xVar12;
  xunknown8 xVar13;
  code *pcVar14;
  xunknown8 xStack_a8;
  xunknown8 xStack_a0;
  xunknown8 xStack_98;
  xunknown8 xStack_90;
  int4 iStack_88;
  xunknown4 xStack_84;
  xunknown4 xStack_80;
  xunknown4 xStack_7c;
  uint4 uStack_78;
  uint4 uStack_74;
  xunknown4 xStack_70;
  int8 iStack_68;
  
  iVar2 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar2 + 0x28);
  if ((uRam0000000000171170 & 1) != 0) goto code_r0x00091ea8;
  if ((uRam0000000000171174 & 1) == 0) {
    xStack_70 = 0;
    xStack_80 = 2;
    xStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = uStack_74 & 0xffffff00;
    uVar9 = gl__Load_plt(&xStack_80,pcRam0000000000171160);
    uRam0000000000171174 = uVar9 & 1;
    if (((uVar9 & 1) != 0) && ((uStack_78 & 1) != 0)) goto code_r0x000918cc;
code_r0x00091ea0:
    uRam0000000000171170 = 1;
  }
  else {
code_r0x000918cc:
    pxVar5 = pxRam00000000000d3208;
    iStack_88 = 0;
    (*(code *)*pxRam00000000000d3208)(0x8ca6,&iStack_88);
    if (iStack_88 == 0) goto code_r0x00091ea8;
    xStack_80 = 0;
    xStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    (*(code *)*pxVar5)(0xba2,&xStack_80);
    xStack_90 = 0;
    compat__SceneSize_plt((int8)&xStack_90 + 4,&xStack_90);
    pxVar6 = pxRam00000000000d3288;
    if ((uStack_78 != xStack_90._4_4_) || (uStack_74 != (uint4)xStack_90)) {
      if ((xRam000000000017116c == 0) &&
         (iRam0000000000171178 = iRam0000000000171178 + 1, iRam0000000000171178 == 900)) {
        (*pcRam0000000000171160)
                  (1,0x41318 /* "scene: no full-screen scene target seen yet (last: fbo %d viewport %dx..." */,iStack_88,uStack_78,uStack_74,xStack_90._4_4_,xStack_90 & 0xffffffff);
      }
      goto code_r0x00091ea8;
    }
    xStack_98 = 0;
    (*(code *)*pxRam00000000000d3288)(0x8ca9,0x8d00,0x8cd0,(int8)&xStack_98 + 4);
    if (xStack_98._4_4_ == 0) {
      xStack_a0 = 0;
      pxVar4 = pxRam00000000000d3228;
    }
    else {
      (*(code *)*pxVar6)(0x8ca9,0x8d00,0x8cd1,&xStack_98);
      if (xStack_98._4_4_ == 0x1702) {
        if ((((int4)xStack_98 == xRam0000000000171168) && (iRam000000000017117c == xStack_90._4_4_))
           && (iRam0000000000171180 == (uint4)xStack_90)) {
          FUN_0009235c(iStack_88);
          goto code_r0x00091ea8;
        }
      }
      else {
        xStack_a0 = 0;
        pxVar4 = pxRam00000000000d3228;
        if (xStack_98._4_4_ == 0) goto code_r0x00091a6c;
      }
      xStack_a0 = 0;
      (*(code *)*pxVar6)(0x8ca9,0x8d00,0x8216,(int8)&xStack_a0 + 4);
      (*(code *)*pxVar6)(0x8ca9,0x8d00,0x8217,&xStack_a0);
      pxVar4 = pxRam00000000000d3228;
    }
code_r0x00091a6c:
    do {
      iVar11 = (*(code *)*pxVar4)();
    } while (iVar11 != 0);
    if (((xStack_98._4_4_ == 0x1702) && ((int4)xStack_98 != 0)) &&
       ((int4)xStack_98 != iRam0000000000171184)) {
      xStack_84 = 0;
      xStack_a8 = 0;
      (*(code *)*pxVar5)(0x8069,&xStack_84);
      pxVar7 = pxRam00000000000d3300;
      (*(code *)*pxRam00000000000d3300)(0xde1,xStack_98 & 0xffffffff);
      pxVar6 = piRam00000000000d3290;
      (*(code *)*piRam00000000000d3290)(0xde1,0,0x1000,(int8)&xStack_a8 + 4);
      (*(code *)*pxVar6)(0xde1,0,0x1001,&xStack_a8);
      (*(code *)*pxVar7)(0xde1,xStack_84);
      do {
        iVar11 = (*(code *)*pxVar4)();
      } while (iVar11 != 0);
      if ((xStack_a8._4_4_ == xStack_90._4_4_) && ((int4)xStack_a8 == (uint4)xStack_90)) {
        iRam000000000017117c = xStack_a8._4_4_;
        iRam0000000000171180 = (int4)xStack_a8;
        xRam0000000000171168 = (int4)xStack_98;
        uRam0000000000171188 = 1;
        iRam000000000017118c = 0x1702;
        xRam000000000017116c = iStack_88;
        iRam0000000000171190 = (int4)xStack_98;
        iVar11 = iRam0000000000171194 + 1;
        bVar1 = iRam0000000000171194 < 3;
        iRam0000000000171194 = iVar11;
        iVar11 = xStack_a8._4_4_;
        uVar3 = xStack_a8;
        if (bVar1) {
          (*pcRam0000000000171160)(0,0x2973b /* "scene: FBO %d %dx%d already has a depth TEXTURE %d (%d-bit) from anoth..." */);
          iVar11 = xStack_90._4_4_;
          uVar3 = xStack_90;
        }
        FUN_0009235c(iStack_88,iVar11,uVar3 & 0xffffffff);
        goto code_r0x00091ea8;
      }
      if (iRam0000000000171194 < 3) {
        iRam0000000000171194 = iRam0000000000171194 + 1;
        (*pcRam0000000000171160)
                  (1,0x2be54 /* "scene: FBO %d has a %dx%d depth texture %d (not the %dx%d scene size) ..." */,iStack_88,xStack_a8._4_4_,xStack_a8 & 0xffffffff,xStack_98 & 0xffffffff
                   ,xStack_90._4_4_,xStack_90 & 0xffffffff);
      }
    }
    if (((xRam000000000017116c != 0) && (xRam000000000017116c != iStack_88)) &&
       ((uRam0000000000171188 & 1) == 0)) {
      cVar10 = (*(code *)*pxRam00000000000d32a8)();
      pxVar6 = pxRam00000000000d3248;
      if (cVar10 != '\0') {
        (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam000000000017116c);
        pxVar7 = pxRam00000000000d3258;
        (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8d00,0xde1,0,0);
        if (iRam000000000017118c == 0x1702) {
          (*(code *)*pxVar7)(0x8ca9,0x8d00,0xde1,iRam0000000000171190,0);
        }
        else if (iRam000000000017118c == 0x8d41) {
          (*(code *)*pxRam00000000000d3298)(0x8ca9,0x8d00,0x8d41,iRam0000000000171190);
        }
        (*(code *)*pxVar6)(0x8ca9,iStack_88);
        do {
          iVar11 = (*(code *)*pxVar4)();
        } while (iVar11 != 0);
      }
    }
    uVar3 = xStack_90;
    iVar11 = (uint4)xStack_90;
    iVar8 = xStack_90._4_4_;
    if (((iRam0000000000171184 == 0) || (xStack_90._4_4_ != iRam00000000001711b0)) ||
       ((uint4)xStack_90 != iRam00000000001711b4)) {
      xStack_84 = 0;
      (*(code *)*pxVar5)(0x8069,&xStack_84);
      if (iRam0000000000171184 != 0) {
        (*(code *)*pxRam00000000000d3308)(1,0x171184);
        iRam0000000000171184 = 0;
      }
      (*(code *)*pxRam00000000000d32f8)(1,0x171184);
      pxVar6 = pxRam00000000000d3300;
      iRam00000000001711b0 = iVar8;
      xRam0000000000171168 = iRam0000000000171184;
      iRam00000000001711b4 = iVar11;
      (*(code *)*pxRam00000000000d3300)(0xde1);
      (*(code *)*pxRam00000000000d3318)(0xde1,1,0x81a6,iVar8,uVar3 & 0xffffffff);
      pxVar7 = pxRam00000000000d3338;
      (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2600);
      (*(code *)*pxVar7)(0xde1,0x2800,0x2600);
      (*(code *)*pxVar7)(0xde1,0x2802,0x812f);
      (*(code *)*pxVar7)(0xde1,0x2803,0x812f);
      (*(code *)*pxVar6)(0xde1,xStack_84);
      iRam000000000017117c = iVar8;
      iRam0000000000171180 = iVar11;
      iVar11 = (*(code *)*pxVar4)();
      if (iVar11 != 0) {
        (*pcRam0000000000171160)(1,0x3830e /* "scene: could not create a %dx%d D24S8 texture - depth upgrade off" */,xStack_90._4_4_,xStack_90 & 0xffffffff);
        goto code_r0x00091ea0;
      }
    }
    else {
      xRam0000000000171168 = iRam0000000000171184;
      iRam000000000017117c = xStack_90._4_4_;
      iRam0000000000171180 = (uint4)xStack_90;
    }
    pxVar6 = pxRam00000000000d3258;
    (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8d00,0xde1,xRam0000000000171168,0);
    iVar11 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
    if (iVar11 == 0x8cd5) {
      xStack_84 = 1;
      (*(code *)*pxVar5)(0xb72,&xStack_84);
      cVar10 = (*(code *)*pxRam00000000000d3538)(0xc11);
      pxVar5 = pxRam00000000000d3548;
      if (cVar10 == '\0') {
        (*(code *)*pxRam00000000000d3548)(1);
        (*(code *)*pxRam00000000000d3558)(0x100);
        pcVar14 = (code *)*pxVar5;
        xVar12 = xStack_84;
      }
      else {
        (*(code *)*pxRam00000000000d3530)(0xc11);
        pxVar5 = pxRam00000000000d3548;
        (*(code *)*pxRam00000000000d3548)(1);
        (*(code *)*pxRam00000000000d3558)(0x100);
        (*(code *)*pxVar5)(xStack_84);
        pcVar14 = (code *)*pxRam00000000000d3528;
        xVar12 = 0xc11;
      }
      (*pcVar14)(xVar12);
      do {
        iVar11 = (*(code *)*pxVar4)();
      } while (iVar11 != 0);
      uRam0000000000171188 = 0;
      xRam000000000017116c = iStack_88;
      iRam000000000017118c = xStack_98._4_4_;
      iRam0000000000171190 = (int4)xStack_98;
      FUN_0009235c(iStack_88,xStack_90._4_4_,xStack_90 & 0xffffffff);
      iVar11 = iRam0000000000171198 + 1;
      if (iRam0000000000171198 < 4) {
        if (xStack_98._4_4_ == 0x1702) {
          xVar13 = 0x32b0f /* "texture" */;
        }
        else if (xStack_98._4_4_ == 0x8d41) {
          xVar13 = 0x22b59 /* "renderbuffer" */;
        }
        else {
          xVar13 = 0x3556f /* "none" */;
          if (xStack_98._4_4_ != 0) {
            xVar13 = 0x25c3f;
          }
        }
        iRam0000000000171198 = iVar11;
        (*pcRam0000000000171160)
                  (0,0x36e45 /* "scene: FBO %d %dx%d - game depth was %s %d-bit, stencil %d-bit -> our ..." */,iStack_88,xStack_90._4_4_,xStack_90 & 0xffffffff,xVar13,xStack_a0._4_4_
                   ,xStack_a0 & 0xffffffff,xRam0000000000171168);
      }
      else {
        iRam0000000000171198 = iVar11;
        if (iVar11 == 5) {
          (*pcRam0000000000171160)(1,0x3cf56 /* "scene: depth re-attached 5 times - the game keeps recreating its targe..." */);
        }
      }
    }
    else {
      (*(code *)*pxVar6)(0x8ca9,0x8d00,0xde1,0,0);
      if (xStack_98._4_4_ == 0x1702) {
        (*(code *)*pxVar6)(0x8ca9,0x8d00,0xde1,xStack_98 & 0xffffffff,0);
      }
      else if (xStack_98._4_4_ == 0x8d41) {
        (*(code *)*pxRam00000000000d3298)(0x8ca9,0x8d00,0x8d41,xStack_98 & 0xffffffff);
      }
      do {
        iVar11 = (*(code *)*pxVar4)();
      } while (iVar11 != 0);
      (*pcRam0000000000171160)(1,0x38e22 /* "scene: FBO %d incomplete with our depth - game depth restored, upgrade..." */,iStack_88);
      uRam0000000000171170 = 1;
    }
  }
code_r0x00091ea8:
  if (*(int8 *)(iVar2 + 0x28) == iStack_68) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x92184  size=472 */
void FUN_00092184(void)

{
  bool bVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  int4 iVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  int4 iStack_44;
  int4 iStack_40;
  int4 iStack_3c;
  int8 iStack_38;
  
  iVar2 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar2 + 0x28);
  if (((((uRam0000000000171170 & 1) != 0) || (xRam0000000000171168 == 0)) ||
      (iRam000000000017118c != 0x8d41)) || (iRam0000000000171190 == 0)) goto code_r0x00092334;
  iStack_3c = 0;
  (*(code *)*pxRam00000000000d3208)(0x8ca6,&iStack_3c);
  pxVar3 = pxRam00000000000d3288;
  if ((iStack_3c == 0) || (iStack_3c == xRam000000000017116c)) goto code_r0x00092334;
  iStack_44 = 0;
  iStack_40 = 0;
  (*(code *)*pxRam00000000000d3288)(0x8ca9,0x8d00,0x8cd0,&iStack_40);
  if ((iStack_40 != 0x8d41) ||
     ((*(code *)*pxVar3)(0x8ca9,0x8d00,0x8cd1,&iStack_44), iStack_44 != iRam0000000000171190))
  goto code_r0x00092334;
  (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8d00,0xde1,xRam0000000000171168,0);
  iVar4 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
  if (iVar4 == 0x8cd5) {
    iVar4 = iRam00000000001711b8 + 1;
    bVar1 = iRam00000000001711b8 < 4;
    iRam00000000001711b8 = iVar4;
    pxVar3 = pxRam00000000000d3228;
    if (bVar1) {
      xVar6 = 0x29ef1 /* "scene: FBO %d shares the scene depth (shadow pass) - now uses our dept..." */;
      xVar5 = 0;
      goto code_r0x0009231c;
    }
  }
  else {
    (*(code *)*pxRam00000000000d3298)(0x8ca9,0x8d00,0x8d41,iStack_44);
    xVar6 = 0x3fa73 /* "scene: FBO %d (shares the scene depth) incomplete with our depth - lef..." */;
    xVar5 = 1;
code_r0x0009231c:
    (*pcRam0000000000171160)(xVar5,xVar6,iStack_3c);
    pxVar3 = pxRam00000000000d3228;
  }
  do {
    iVar4 = (*(code *)*pxVar3)();
  } while (iVar4 != 0);
code_r0x00092334:
  if (*(int8 *)(iVar2 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x9235c  size=1596 */
void FUN_0009235c(int4 param_1,int4 param_2,int4 param_3)

{
  bool bVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  xunknown8 *pxVar4;
  char cVar5;
  int4 iVar6;
  xunknown8 xVar7;
  xunknown4 xVar8;
  int4 iStack_9c;
  int4 iStack_98;
  xunknown4 xStack_94;
  uint8 uStack_90;
  xunknown8 xStack_88;
  uint8 uStack_80;
  xunknown8 xStack_78;
  int8 iStack_68;
  
  pxVar4 = pxRam00000000000d3288;
  iVar2 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar2 + 0x28);
  cRam0000000000171158 = 0;
  if (((uRam000000000017119c & 1) == 0) && (((uint1)uRam00000000000d8da8 & 1) != 0)) {
    if (uRam0000000000171188 == 1) {
      uRam000000000017119c = uRam0000000000171188;
      uRam0000000000171140 = 0;
      if (*(int8 *)(iVar2 + 0x28) == iStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0009240c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000000171160)(1,0x27664 /* "scene: HDR off - %s" */,0x39f98 /* "another mod owns the scene depth (it may read the game's colour textur..." */);
        return;
      }
      goto code_r0x00092994;
    }
    iStack_9c = 0;
    iStack_98 = 0;
    (*(code *)*pxRam00000000000d3288)(0x8ca9,0x8ce0,0x8cd0,&iStack_98);
    pxVar3 = pxRam00000000000d3228;
    if (iStack_98 == 0x1702) {
      (*(code *)*pxVar4)(0x8ca9,0x8ce0,0x8cd1,&iStack_9c);
      pxVar3 = pxRam00000000000d3228;
    }
    do {
      iVar6 = (*(code *)*pxVar3)();
    } while (iVar6 != 0);
    if (iStack_98 == 0x1702) {
      if ((((iStack_9c == uRam0000000000171148) && (uRam0000000000171148 != 0)) &&
          (param_1 == iRam00000000001711a0)) &&
         ((iRam00000000001711a4 == param_2 && (iRam00000000001711a8 == param_3)))) {
        cRam0000000000171158 = 1;
        uRam0000000000171140 = 1;
        goto code_r0x00092740;
      }
      if (iStack_9c == 0) goto code_r0x0009270c;
      if (((iRam00000000001711a0 != 0) && (iRam00000000001711a0 != param_1)) &&
         ((iRam0000000000171144 != 0 &&
          (cVar5 = (*(code *)*pxRam00000000000d32a8)(), pxVar4 = pxRam00000000000d3248,
          cVar5 != '\0')))) {
        (*(code *)*pxRam00000000000d3248)(0x8ca9,iRam00000000001711a0);
        (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,iRam0000000000171144,0);
        (*(code *)*pxVar4)(0x8ca9,param_1);
        do {
          iVar6 = (*(code *)*pxVar3)();
        } while (iVar6 != 0);
      }
      if (((uRam0000000000171148 == 0) || (iRam00000000001711a4 != param_2)) ||
         (iRam00000000001711a8 != param_3)) {
        uStack_80 = uStack_80 & 0xffffffff00000000;
        (*(code *)*pxRam00000000000d3208)(0x8069,&uStack_80);
        if (uRam0000000000171148 != 0) {
          (*(code *)*pxRam00000000000d3308)(1,&uRam0000000000171148);
        }
        (*(code *)*pxRam00000000000d32f8)(1,&uRam0000000000171148);
        (*(code *)*pxRam00000000000d3300)(0xde1,uRam0000000000171148);
        xVar8 = 0x8c3a;
        if (uRam00000000000d8da8._4_4_ != 1) {
          xVar8 = 0x881a;
        }
        (*(code *)*pxRam00000000000d3318)(0xde1,1,xVar8,param_2,param_3);
        pxVar4 = pxRam00000000000d3338;
        (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2601);
        (*(code *)*pxVar4)(0xde1,0x2800,0x2601);
        (*(code *)*pxVar4)(0xde1,0x2802,0x812f);
        (*(code *)*pxVar4)(0xde1,0x2803,0x812f);
        (*(code *)*pxRam00000000000d3300)(0xde1,uStack_80 & 0xffffffff);
        iRam00000000001711a4 = param_2;
        iRam00000000001711a8 = param_3;
        iVar6 = (*(code *)*pxVar3)();
        if (iVar6 != 0) {
          xVar7 = 0x2a355 /* "could not create the float texture" */;
          goto code_r0x00092738;
        }
      }
      pxVar4 = pxRam00000000000d3258;
      (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,uRam0000000000171148,0);
      iVar6 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
      if (iVar6 == 0x8cd5) {
        xStack_78 = xRam0000000000021ff8;
        uStack_80 = uRam0000000000021ff0;
        (*(code *)*pxRam00000000000d3230)(0xc22,&uStack_80);
        xStack_94 = 0x1010101;
        (*(code *)*pxRam00000000000d3568)(0xc23,&xStack_94);
        cVar5 = (*(code *)*pxRam00000000000d3538)(0xc11);
        if (cVar5 != '\0') {
          (*(code *)*pxRam00000000000d3530)(0xc11);
        }
        pxVar4 = pxRam00000000000d3540;
        (*(code *)*pxRam00000000000d3540)(1,1,1,1);
        xStack_88 = xStack_78;
        uStack_90 = uStack_80;
        (*(code *)*pxRam00000000000d3570)(0x1800,0,&uStack_90);
        (*(code *)*pxVar4)((xunknown1)xStack_94,xStack_94._1_1_,xStack_94._2_1_,xStack_94._3_1_);
        if (cVar5 != '\0') {
          (*(code *)*pxRam00000000000d3528)(0xc11);
        }
        do {
          iVar6 = (*(code *)*pxVar3)();
        } while (iVar6 != 0);
        cRam0000000000171158 = 1;
        iRam0000000000171144 = iStack_9c;
        uRam0000000000171140 = 1;
        iVar6 = iRam00000000001711ac + 1;
        bVar1 = iRam00000000001711ac < 4;
        iRam00000000001711a0 = param_1;
        iRam00000000001711ac = iVar6;
        if (bVar1) {
          xVar7 = 0x22b9f /* "R11G11B10F" */;
          if (uRam00000000000d8da8._4_4_ != 1) {
            xVar7 = 0x320cc /* "RGBA16F" */;
          }
          (*pcRam0000000000171160)(0,0x2b287 /* "scene: HDR - FBO %d %dx%d renders into our %s texture %u (the game's t..." */,param_1,param_2,param_3,xVar7,uRam0000000000171148);
        }
        goto code_r0x00092740;
      }
      (*(code *)*pxVar4)(0x8ca9,0x8ce0,0xde1,iStack_9c,0);
      do {
        iVar6 = (*(code *)*pxVar3)();
      } while (iVar6 != 0);
      xVar7 = 0x3cfb7 /* "the scene FBO is incomplete with a float colour target (game texture r..." */;
    }
    else {
code_r0x0009270c:
      xVar7 = 0x2beb2 /* "the scene colour isn't a texture" */;
    }
code_r0x00092738:
    uRam000000000017119c = 1;
    cRam0000000000171158 = 0;
    uRam0000000000171140 = 0;
    (*pcRam0000000000171160)(1,0x27664 /* "scene: HDR off - %s" */,xVar7);
  }
code_r0x00092740:
  if (*(int8 *)(iVar2 + 0x28) == iStack_68) {
    return;
  }
code_r0x00092994:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x92998  size=140 */
void FUN_00092998(xunknown8 *param_1)

{
  uint1 *puVar1;
  uint1 *puVar2;
  uint1 *puVar3;
  
  puVar2 = (uint1 *)*param_1;
  if (puVar2 == (uint1 *)0x0) {
    return;
  }
  puVar1 = puVar2;
  if (puVar2 != (uint1 *)param_1[1]) {
    puVar1 = (uint1 *)param_1[1];
    do {
      puVar3 = puVar1 + -0x18;
      if ((*puVar3 & 1) != 0) {
        operator_delete_plt(*(xunknown8 *)(puVar1 + -8),
                            *(uint8 *)(puVar1 + -0x18) & 0xfffffffffffffffe);
      }
      puVar1 = puVar3;
    } while (puVar3 != puVar2);
    puVar1 = (uint1 *)*param_1;
  }
  param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(puVar1,param_1[2] - (int8)puVar1);
  return;
}

/* 0x92ab0  size=164 */
void FUN_00092ab0(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x92b54  size=744 */
void FUN_00092b54(xunknown8 param_1)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  uint8 uVar7;
  uint8 uStack_1d0;
  uint8 uStack_1c8;
  uint8 uStack_1c0;
  xunknown8 xStack_1b8;
  xunknown8 xStack_1b0;
  xunknown1 axStack_b8 [96];
  int8 iStack_58;
  
  pxVar2 = pxRam00000000000d3208;
  iVar1 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  if (iRam00000000001711e0 == 1) {
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0xffffffff);
    xStack_1b8 = 0;
    xStack_1b0 = 0;
    (*(code *)*pxRam00000000000d3208)(0x8ca6,&uStack_1d0);
    (*(code *)*pxVar2)(0xba2,&xStack_1b8);
    FUN_00092ab0(axStack_b8,0x60,0x60,0x38350 /* "fbo %d vp %dx%d@%d,%d" */,uStack_1d0 & 0xffffffff,xStack_1b0 & 0xffffffff,
                 xStack_1b0._4_4_,xStack_1b8 & 0xffffffff,xStack_1b8._4_4_);
    if (iRam00000000001711f8 == 0) {
code_r0x00092cdc:
      FUN_00092ab0(&xStack_1b8,0x100,0x100,0x41388 /* "   %-34s | %s" */,param_1,axStack_b8);
      uVar5 = strlen(&xStack_1b8);
      if (uVar5 < 0xfffffffffffffff0) {
        if (uVar5 < 0x17) {
          uVar7 = (uint8)&uStack_1d0 | 1;
          uStack_1d0 = CONCAT71(uStack_1d0._1_7_,(char)((int4)uVar5 << 1));
          if (uVar5 != 0) goto code_r0x00092d4c;
        }
        else {
          uVar7 = operator_new_plt((uVar5 | 0xf) + 1);
          uStack_1d0 = (uVar5 | 0xf) + 2;
          uStack_1c8 = uVar5;
          uStack_1c0 = uVar7;
code_r0x00092d4c:
          memcpy(uVar7,&xStack_1b8,uVar5);
        }
        puVar4 = puRam00000000001711d0;
        puVar3 = puRam00000000001711c8;
        *(xunknown1 *)(uVar7 + uVar5) = 0;
        if (puVar3 < puVar4) {
          puVar3[2] = uStack_1c0;
          puRam00000000001711c8 = puVar3 + 3;
          puVar3[1] = uStack_1c8;
          *puVar3 = uStack_1d0;
        }
        else {
          puRam00000000001711c8 =
               (uint8 *)std____ndk1__basic_string__std____ndk1__vector_std____ndk1__basic_string__std____ndk1__allocator_std____ndk1__basic_string________push_back_slow_path_std____ndk1__basic_string_plt
                                  (0x1711c0,&uStack_1d0);
          if ((uStack_1d0 & 1) != 0) {
            operator_delete_plt(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
          }
        }
        goto code_r0x00092dbc;
      }
    }
    else {
      FUN_00092ab0(&xStack_1b8,0x100,0x100,0x2abab /* "      ... %d draws" */);
      uVar5 = strlen(&xStack_1b8);
      if (uVar5 < 0xfffffffffffffff0) {
        if (uVar5 < 0x17) {
          uVar7 = (uint8)&uStack_1d0 | 1;
          uStack_1d0 = CONCAT71(uStack_1d0._1_7_,(char)((int4)uVar5 << 1));
          if (uVar5 != 0) goto code_r0x00092c68;
        }
        else {
          uVar7 = operator_new_plt((uVar5 | 0xf) + 1);
          uStack_1d0 = (uVar5 | 0xf) + 2;
          uStack_1c8 = uVar5;
          uStack_1c0 = uVar7;
code_r0x00092c68:
          memcpy(uVar7,&xStack_1b8,uVar5);
        }
        puVar4 = puRam00000000001711d0;
        puVar3 = puRam00000000001711c8;
        *(xunknown1 *)(uVar7 + uVar5) = 0;
        if (puVar3 < puVar4) {
          puVar3[2] = uStack_1c0;
          puRam00000000001711c8 = puVar3 + 3;
          puVar3[1] = uStack_1c8;
          *puVar3 = uStack_1d0;
        }
        else {
          puRam00000000001711c8 =
               (uint8 *)std____ndk1__basic_string__std____ndk1__vector_std____ndk1__basic_string__std____ndk1__allocator_std____ndk1__basic_string________push_back_slow_path_std____ndk1__basic_string_plt
                                  (0x1711c0,&uStack_1d0);
          if ((uStack_1d0 & 1) != 0) {
            operator_delete_plt(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
          }
        }
        iRam00000000001711f8 = 0;
        goto code_r0x00092cdc;
      }
    }
    if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
      xVar6 = FUN_000664d4(&uStack_1d0);
      if ((uStack_1d0 & 1) != 0) {
        operator_delete_plt(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
      }
      if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
        FUN_000c5688(xVar6);
      }
    }
  }
  else {
code_r0x00092dbc:
    if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x93190  size=116 */
void FUN_00093190(xunknown8 param_1)

{
  int8 iVar1;
  xunknown1 axStack_68 [64];
  int8 iStack_28;
  
  iVar1 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar1 + 0x28);
  if (iRam00000000001711e0 == 1) {
    FUN_00092ab0(axStack_68,0x40,0x40,0x2a378 /* "rqTargetSelect %p" */,param_1);
    FUN_00092b54(axStack_68);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x93204  size=1172 */
void FUN_00093204(uint4 param_1)

{
  int4 iVar1;
  int4 iVar2;
  uint8 *puVar3;
  int8 iVar4;
  uint8 *puVar5;
  uint8 uVar6;
  xunknown8 xVar7;
  uint1 *puVar8;
  uint8 uVar9;
  uint8 *puVar11;
  uint8 *puVar10;
  uint8 uVar12;
  uint8 uStack_90;
  uint8 uStack_88;
  uint8 uStack_80;
  uint4 uStack_78;
  xunknown4 xStack_74;
  xunknown1 xStack_70;
  xunknown1 xStack_6f;
  xunknown2 xStack_6e;
  uint4 uStack_6c;
  xunknown4 xStack_68;
  xunknown4 xStack_64;
  int8 iStack_48;
  
  iVar4 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar4 + 0x28);
  if ((uRam0000000000171210 & 1) == 0) {
    xStack_68 = 0;
    uStack_78 = 2;
    xStack_74 = 0;
    xStack_70 = 0;
    xStack_6f = 0;
    xStack_6e = 0;
    uStack_6c = uStack_6c & 0xffffff00;
    uRam0000000000171210 = gl__Load_plt(&uStack_78,pcRam0000000000171208);
    uRam0000000000171210 = uRam0000000000171210 & 1;
  }
  if (param_1 == 1) {
    if (iRam00000000001711e0 == 1) {
      iVar1 = iRam0000000000171220 + 1;
      if (1 < iRam0000000000171220) {
        iRam0000000000171220 = iVar1;
        if (iRam00000000001711f8 != 0) {
          FUN_00092ab0(&uStack_78,0x30,0x30,0x2abab /* "      ... %d draws" */);
          uVar6 = strlen(&uStack_78);
          if (0xffffffffffffffef < uVar6) goto code_r0x0009362c;
          if (uVar6 < 0x17) {
            uVar9 = (uint8)&uStack_90 | 1;
            uStack_90 = CONCAT71(uStack_90._1_7_,(char)((int4)uVar6 << 1));
            if (uVar6 != 0) goto code_r0x000934c4;
          }
          else {
            uVar9 = operator_new_plt((uVar6 | 0xf) + 1);
            uStack_90 = (uVar6 | 0xf) + 2;
            uStack_88 = uVar6;
            uStack_80 = uVar9;
code_r0x000934c4:
            memcpy(uVar9,&uStack_78,uVar6);
          }
          *(xunknown1 *)(uVar9 + uVar6) = 0;
          if (puRam00000000001711c8 < puRam00000000001711d0) {
            puRam00000000001711c8[2] = uStack_80;
            puRam00000000001711c8[1] = uStack_88;
            *puRam00000000001711c8 = uStack_90;
            puRam00000000001711c8 = puRam00000000001711c8 + 3;
          }
          else {
            puRam00000000001711c8 =
                 (uint8 *)std____ndk1__basic_string__std____ndk1__vector_std____ndk1__basic_string__std____ndk1__allocator_std____ndk1__basic_string________push_back_slow_path_std____ndk1__basic_string_plt
                                    (0x1711c0,&uStack_90);
            if ((uStack_90 & 1) != 0) {
              operator_delete_plt(uStack_80,uStack_90 & 0xfffffffffffffffe);
            }
          }
        }
        iRam00000000001711e0 = 2;
        (*pcRam0000000000171208)
                  (0,0x28fc9 /* "trace: %zu events over 3 frames:" */,
                   ((int8)puRam00000000001711c8 - (int8)puRam00000000001711c0 >> 3) *
                   -0x5555555555555555);
        puVar10 = puRam00000000001711c8;
        for (puVar3 = puRam00000000001711c0; puVar3 != puVar10; puVar3 = puVar3 + 3) {
          puVar8 = (uint1 *)puVar3[2];
          if ((*puVar3 & 1) == 0) {
            puVar8 = (uint1 *)((int8)puVar3 + 1);
          }
          (*pcRam0000000000171208)(0,0x2bfce,puVar8);
        }
        (*pcRam0000000000171208)(0,0x39fe5 /* "trace: done" */);
        puVar5 = puRam00000000001711d0;
        puVar10 = puRam00000000001711c8;
        puVar3 = puRam00000000001711c0;
        puRam00000000001711c0 = (uint8 *)0x0;
        puRam00000000001711c8 = (uint8 *)0x0;
        puRam00000000001711d0 = (uint8 *)0x0;
        if (puVar3 != (uint8 *)0x0) {
          if (puVar3 != puVar10) {
            do {
              puVar11 = puVar10 + -3;
              if ((*puVar11 & 1) != 0) {
                operator_delete_plt(puVar10[-1],puVar10[-3] & 0xfffffffffffffffe);
              }
              puVar10 = puVar11;
            } while (puVar11 != puVar3);
          }
          operator_delete_plt(puVar3,(int8)puVar5 - (int8)puVar3);
        }
        goto code_r0x00093480;
      }
      iVar2 = iRam0000000000171220 + 2;
      iRam0000000000171220 = iVar1;
      FUN_00092ab0(&uStack_78,0x20,0x20,0x2d88f /* "frame %d:" */,iVar2);
      uVar6 = strlen(&uStack_78);
      if (0xffffffffffffffef < uVar6) {
code_r0x0009362c:
        if (*(int8 *)(iVar4 + 0x28) == iStack_48) {
          xVar7 = FUN_000664d4(&uStack_90);
          if ((uStack_90 & 1) != 0) {
            operator_delete_plt(uStack_80,uStack_90 & 0xfffffffffffffffe);
          }
          if (*(int8 *)(iVar4 + 0x28) == iStack_48) {
            FUN_000c5688(xVar7);
          }
        }
        goto code_r0x00093694;
      }
      if (uVar6 < 0x17) {
        uVar9 = (uint8)&uStack_90 | 1;
        uStack_90 = CONCAT71(uStack_90._1_7_,(char)((int4)uVar6 << 1));
        if (uVar6 != 0) goto code_r0x000933f4;
      }
      else {
        uVar9 = operator_new_plt((uVar6 | 0xf) + 1);
        uStack_90 = (uVar6 | 0xf) + 2;
        uStack_88 = uVar6;
        uStack_80 = uVar9;
code_r0x000933f4:
        memcpy(uVar9,&uStack_78,uVar6);
      }
      *(xunknown1 *)(uVar9 + uVar6) = 0;
      if (puRam00000000001711c8 < puRam00000000001711d0) {
        uVar6 = uStack_80;
        uVar9 = uStack_90;
        uVar12 = uStack_88;
code_r0x00093424:
        puRam00000000001711c8[2] = uVar6;
        puRam00000000001711c8[1] = uVar12;
        *puRam00000000001711c8 = uVar9;
        puRam00000000001711c8 = puRam00000000001711c8 + 3;
      }
      else {
        puRam00000000001711c8 =
             (uint8 *)std____ndk1__basic_string__std____ndk1__vector_std____ndk1__basic_string__std____ndk1__allocator_std____ndk1__basic_string________push_back_slow_path_std____ndk1__basic_string_plt
                                (0x1711c0,&uStack_90);
        if ((uStack_90 & 1) != 0) {
          uVar6 = uStack_80;
          uVar9 = uStack_90;
          goto code_r0x00093464;
        }
      }
    }
    else if ((iRam00000000001711e0 == 0) &&
            (uRam0000000000171218 = uRam0000000000171218 + 1, 599 < uRam0000000000171218)) {
      iRam00000000001711e0 = 1;
      xStack_6f = 0;
      uStack_78 = 0x61726610;
      xStack_74 = 0x3120656d;
      xStack_70 = 0x3a;
      if (puRam00000000001711c8 < puRam00000000001711d0) {
        uVar6 = CONCAT44(xStack_64,xStack_68);
        uVar9 = 0x3120656d61726610;
        uVar12 = CONCAT44(uStack_6c,CONCAT22(xStack_6e,0x3a));
        goto code_r0x00093424;
      }
      puRam00000000001711c8 =
           (uint8 *)std____ndk1__basic_string__std____ndk1__vector_std____ndk1__basic_string__std____ndk1__allocator_std____ndk1__basic_string________push_back_slow_path_std____ndk1__basic_string_plt
                              (0x1711c0,&uStack_78);
      if ((uStack_78 & 1) == 0) goto code_r0x00093470;
      uVar6 = CONCAT44(xStack_64,xStack_68);
      uVar9 = CONCAT44(xStack_74,uStack_78);
code_r0x00093464:
      operator_delete_plt(uVar6,uVar9 & 0xfffffffffffffffe);
    }
code_r0x00093470:
    FUN_00092b54((int8)*(int4 *)((uint8)param_1 * 4 + 0x419a4) + 0x419a4);
  }
  else if (param_1 < 8) goto code_r0x00093470;
code_r0x00093480:
  if (*(int8 *)(iVar4 + 0x28) == iStack_48) {
    return;
  }
code_r0x00093694:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x937fc  size=20 */
void FUN_000937fc(void)

{
  FUN_0005eb94(0x371ec /* "vector" */);
  puRam00000000001711c0 = 0;
  puRam00000000001711c8 = 0;
  puRam00000000001711d0 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00092998,&puRam00000000001711c0,0xcee00);
  return;
}

/* 0x93810  size=36 */
void FUN_00093810(void)

{
  puRam00000000001711c0 = 0;
  puRam00000000001711c8 = 0;
  puRam00000000001711d0 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00092998,&puRam00000000001711c0,0xcee00);
  return;
}

/* 0x93898  size=1968 */
void FUN_00093898(void)

{
  int8 iVar1;
  bool bVar2;
  int4 iVar3;
  int4 iVar4;
  xunknown8 xVar5;
  uint8 uVar6;
  int8 iVar7;
  uint8 uVar8;
  uint8 uVar9;
  int4 iVar10;
  float8 fVar11;
  float8 fVar12;
  xunknown8 xStack_318;
  float8 fStack_310;
  float8 fStack_308;
  int8 iStack_300;
  int8 iStack_2f8;
  int8 iStack_80;
  
  iVar1 = tpidr_el0;
  iStack_80 = *(int8 *)(iVar1 + 0x28);
  if ((uRam0000000000171230 & 1) != 0) goto code_r0x00093d7c;
  clock_gettime(1,&iStack_300);
  fVar12 = (float8)iStack_300 + fRam0000000000022270 * (float8)iStack_2f8;
  if (fRam0000000000171238 == 0.0) {
    fRam0000000000171238 = fVar12;
    fRam0000000000171240 = fVar12;
    *pxRam00000000000d3610 = 0;
    goto code_r0x00093d7c;
  }
  fRam0000000000171240 = fVar12 - fRam0000000000171240;
  if (0.25 <= fRam0000000000171240) {
    cRam0000000000171248 = '\x01';
  }
  fVar11 = fVar12 - fRam0000000000171238;
  if (1.0 < fVar11) {
    bVar2 = false;
    if ((0.0 < fRam0000000000171240) && (bVar2 = false, !NAN(fRam0000000000171240))) {
      bVar2 = fRam0000000000171240 < 0.25;
    }
    if (bVar2) {
      fRam0000000000171250 = fRam0000000000171240 + fRam0000000000171250;
      iRam0000000000171258 = iRam0000000000171258 + 1;
    }
  }
  fRam0000000000171240 = fVar12;
  if (((uRam0000000000171260 & 1) == 0) && (1.0 < fVar11)) {
    gputime__Drain_plt(&iStack_300,&fStack_308);
    post__DrainGpu_plt(&iStack_300,&fStack_308);
    uRam0000000000171260 = 1;
    fVar11 = fVar12 - fRam0000000000171238;
  }
  if (fVar11 < 4.0) goto code_r0x00093d7c;
  fStack_310 = 0.0;
  fStack_308 = 0.0;
  xStack_318 = 0;
  uRam0000000000171264 = gputime__Drain_plt(&fStack_308,(int8)&xStack_318 + 4);
  uRam0000000000171264 = uRam0000000000171264 & 1;
  uRam0000000000171268 = post__DrainGpu_plt(&fStack_310,&xStack_318);
  uRam0000000000171268 = uRam0000000000171268 & 1;
  if ((cRam0000000000171248 == '\x01') && (iRam000000000017126c < 2)) {
    iRam000000000017126c = iRam000000000017126c + 1;
    fRam0000000000171250 = 0.0;
    iRam0000000000171258 = 0;
    iRam0000000000171698 = iRam0000000000171698 + 1;
    cRam0000000000171248 = '\0';
    uRam0000000000171260 = 0;
    fRam0000000000171238 = fVar12;
    goto code_r0x00093d7c;
  }
  iVar7 = (int8)iRam0000000000171320;
  *(int8 *)(iVar7 * 8 + 0x171328) = *(int8 *)(iVar7 * 8 + 0x171328) + iRam0000000000171258;
  *(float8 *)(iVar7 * 8 + 0x171270) = fRam0000000000171250 + *(float8 *)(iVar7 * 8 + 0x171270);
  iRam000000000017126c = 0;
  *(float8 *)(iVar7 * 8 + 0x1713d8) = fStack_308 + *(float8 *)(iVar7 * 8 + 0x1713d8);
  fRam0000000000171250 = 0.0;
  *(int8 *)(iVar7 * 8 + 0x171488) = *(int8 *)(iVar7 * 8 + 0x171488) + (int8)xStack_318._4_4_;
  iRam0000000000171258 = 0;
  cRam0000000000171248 = '\0';
  *(float8 *)(iVar7 * 8 + 0x171538) = fStack_310 + *(float8 *)(iVar7 * 8 + 0x171538);
  *(int8 *)(iVar7 * 8 + 0x1715e8) = *(int8 *)(iVar7 * 8 + 0x1715e8) + (int8)(int4)xStack_318;
  uRam0000000000171260 = 0;
  bVar2 = 0x14 < iRam0000000000171320;
  fRam0000000000171238 = fVar12;
  iRam0000000000171320 = iRam0000000000171320 + 1;
  if (bVar2) {
    iRam0000000000171320 = 0;
    (*pcRam0000000000171228)(0,0x23de4 /* "perf: round %d of 2 done" */,iRam000000000017169c + 1);
    fVar12 = 0.0;
    uVar6 = 0;
    uVar8 = 0;
    do {
      if ((0x155555U >> (uVar6 & 0x3f) & 1) != 0) {
        fVar12 = fVar12 + *(float8 *)(uVar6 * 8 + 0x171270);
        uVar8 = *(int8 *)(uVar6 * 8 + 0x171328) + uVar8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x16);
    if ((int8)uVar8 < 0x1e) {
      (*pcRam0000000000171228)(1,0x30c36 /* "perf: too few frames measured - was the game paused?" */);
    }
    else {
      fVar12 = (fVar12 / (float8)uVar8) * 1000.0;
      iVar3 = FUN_00094048(1000.0 / fVar12,fVar12,&iStack_300,0x280,0x280,0x38e6d /* "perf: all on %.1f fps (%.2f ms), %d spoiled windows re-measured | cost..." */,
                           iRam0000000000171698);
      uVar6 = 0;
      iVar10 = 0;
      do {
        if ((0x155555U >> (uVar6 & 0x3f) & 1) == 0) {
          uVar8 = *(uint8 *)(uVar6 * 8 + 0x171328);
          if ((int8)uVar8 < 0x1e) {
            iVar7 = (int8)iVar10;
            iVar10 = iVar10 + 1;
            iVar4 = FUN_00094048((int8)&iStack_300 + (int8)iVar3,0xffffffffffffffff,
                                 0x280 - (int8)iVar3,0x297d3 /* " %s ?" */,*(xunknown8 *)(iVar7 * 8 + 0xcefe0));
            iVar3 = iVar4 + iVar3;
          }
          else {
            iVar4 = FUN_00094048(fVar12 + (*(float8 *)(uVar6 * 8 + 0x171270) / (float8)uVar8) *
                                          -1000.0,(int8)&iStack_300 + (int8)iVar3,0xffffffffffffffff
                                 ,0x280 - (int8)iVar3,0x2d899 /* " %s %.2f" */,
                                 *(xunknown8 *)((int8)iVar10 * 8 + 0xcefe0));
            iVar3 = iVar4 + iVar3;
            if (599 < iVar3) break;
            iVar10 = iVar10 + 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x16);
      (*pcRam0000000000171228)(0,0x2bfce,&iStack_300);
      (*pcRam0000000000171228)(0,0x32b6b /* "perf: (at a 60 fps cap every feature reads ~0 - the numbers mean somet..." */);
      if (uRam0000000000171264 == 1) {
        fVar12 = 0.0;
        uVar6 = 0;
        uVar8 = 0;
        do {
          if ((0x155555U >> (uVar6 & 0x3f) & 1) != 0) {
            fVar12 = fVar12 + *(float8 *)(uVar6 * 8 + 0x1713d8);
            uVar8 = *(int8 *)(uVar6 * 8 + 0x171488) + uVar8;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x16);
        if (0x1d < (int8)uVar8) {
          iVar3 = FUN_00094048(fVar12 / (float8)uVar8,&iStack_300,0x280,0x280,0x34feb /* "perf: main scene GPU all on %.2f ms | saved by switching off:" */);
          uVar6 = 0;
          iVar10 = 0;
          do {
            if ((0x155555U >> (uVar6 & 0x3f) & 1) == 0) {
              uVar9 = *(uint8 *)(uVar6 * 8 + 0x171488);
              iVar7 = (int8)iVar3;
              xVar5 = *(xunknown8 *)((int8)iVar10 * 8 + 0xcefe0);
              if ((int8)uVar9 < 0x1e) {
                iVar4 = FUN_00094048((int8)&iStack_300 + iVar7,0xffffffffffffffff,0x280 - iVar7,
                                     0x297d3 /* " %s ?" */,xVar5);
              }
              else {
                iVar4 = FUN_00094048(fVar12 / (float8)uVar8 -
                                     *(float8 *)(uVar6 * 8 + 0x1713d8) / (float8)uVar9,
                                     (int8)&iStack_300 + iVar7,0xffffffffffffffff,0x280 - iVar7,
                                     0x2d899 /* " %s %.2f" */,xVar5);
              }
              iVar3 = iVar4 + iVar3;
              if (599 < iVar3) break;
              iVar10 = iVar10 + 1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x16);
          (*pcRam0000000000171228)(0,0x2bfce,&iStack_300);
          if (uRam0000000000171268 == 1) goto code_r0x00093f00;
        }
      }
      else if ((uRam0000000000171268 & 1) != 0) {
code_r0x00093f00:
        fVar12 = 0.0;
        uVar6 = 0;
        uVar8 = 0;
        do {
          if ((0x155555U >> (uVar6 & 0x3f) & 1) != 0) {
            fVar12 = fVar12 + *(float8 *)(uVar6 * 8 + 0x171538);
            uVar8 = *(int8 *)(uVar6 * 8 + 0x1715e8) + uVar8;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x16);
        if (0x1d < (int8)uVar8) {
          iVar3 = FUN_00094048(fVar12 / (float8)uVar8,&iStack_300,0x280,0x280,0x3d006 /* "perf: post chain GPU all on %.2f ms | saved by switching off:" */);
          uVar6 = 0;
          iVar10 = 0;
          do {
            if ((0x155555U >> (uVar6 & 0x3f) & 1) == 0) {
              uVar9 = *(uint8 *)(uVar6 * 8 + 0x1715e8);
              iVar7 = (int8)iVar3;
              xVar5 = *(xunknown8 *)((int8)iVar10 * 8 + 0xcefe0);
              if ((int8)uVar9 < 0x1e) {
                iVar4 = FUN_00094048((int8)&iStack_300 + iVar7,0xffffffffffffffff,0x280 - iVar7,
                                     0x297d3 /* " %s ?" */,xVar5);
              }
              else {
                iVar4 = FUN_00094048(fVar12 / (float8)uVar8 -
                                     *(float8 *)(uVar6 * 8 + 0x171538) / (float8)uVar9,
                                     (int8)&iStack_300 + iVar7,0xffffffffffffffff,0x280 - iVar7,
                                     0x2d899 /* " %s %.2f" */,xVar5);
              }
              iVar3 = iVar4 + iVar3;
              if (599 < iVar3) break;
              iVar10 = iVar10 + 1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x16);
          (*pcRam0000000000171228)(0,0x2bfce,&iStack_300);
        }
      }
    }
    if (0 < iRam000000000017169c) {
      iRam000000000017169c = iRam000000000017169c + 1;
      *pxRam00000000000d3610 = 0;
      uRam0000000000171230 = 1;
      goto code_r0x00093d7c;
    }
    iRam000000000017169c = iRam000000000017169c + 1;
  }
  *pxRam00000000000d3610 = *(xunknown4 *)((int8)iRam0000000000171320 * 4 + 0x41a24);
code_r0x00093d7c:
  if (*(int8 *)(iVar1 + 0x28) == iStack_80) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x94048  size=164 */
void FUN_00094048(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

