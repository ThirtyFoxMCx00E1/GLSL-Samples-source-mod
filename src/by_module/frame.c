/* module: frame  (2 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x912d4  size=420  frame::Install(void (*)(bool, char const*, ...))  [_ZN5frame7InstallEPFvbPKczE] */
xunknown8 frame__Install(code *param_1)

{
  xunknown8 *pxVar1;
  uint8 uVar2;
  xunknown8 xVar3;
  int8 iVar4;
  int8 iVar5;
  int8 iVar6;
  
  xRam0000000000171128 = param_1;
  uVar2 = rq__Init_plt();
  pxVar1 = pxRam00000000000d31f8;
  if ((uVar2 & 1) != 0) {
    xVar3 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    iVar4 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar3,0x26d71 /* "_Z11RenderSceneb" */);
    iVar5 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar3,0x2bddc /* "_ZN12CPostEffects12MobileRenderEv" */);
    iVar6 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar3,0x34988 /* "_Z19DoRWStuffEndOfFrameb" */);
    if (((iVar4 != 0) && (iVar5 != 0)) && (iVar6 != 0)) {
      boot__PrologueOk_plt(iVar4,0x26d71 /* "_Z11RenderSceneb" */,0x32b4c /* "hooked anyway (used since 0.1)" */);
      boot__PrologueOk_plt(iVar5,0x2bddc /* "_ZN12CPostEffects12MobileRenderEv" */,0x32b4c /* "hooked anyway (used since 0.1)" */);
      boot__PrologueOk_plt(iVar6,0x34988 /* "_Z19DoRWStuffEndOfFrameb" */,0x32b4c /* "hooked anyway (used since 0.1)" */);
      (**(code **)(*(int8 *)*pxVar1 + 0x30))
                ((int8 *)*pxVar1,iVar4,xRam00000000000d3800,pxRam00000000000d3808);
      (**(code **)(*(int8 *)*pxVar1 + 0x30))
                ((int8 *)*pxVar1,iVar5,xRam00000000000d3810,pxRam00000000000d3818);
      (**(code **)(*(int8 *)*pxVar1 + 0x30))
                ((int8 *)*pxVar1,iVar6,xRam00000000000d3820,pxRam00000000000d3828);
      return 1;
    }
    (*xRam0000000000171128)(1,0x39f7b /* "frame: symbols missing - off" */);
  }
  return 0;
}

/* 0x91478  size=360  frame::OnPostBeginGame(void (*)())  [_ZN5frame15OnPostBeginGameEPFvvE] */
void frame__OnPostBeginGame(xunknown8 param_1)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  uint8 uVar8;
  uint8 uVar9;
  xunknown8 *pxVar10;
  int8 iVar11;
  xunknown8 *pxVar12;
  xunknown8 xVar13;
  xunknown8 xVar14;
  xunknown8 xVar15;
  
  pxVar10 = pxRam00000000001710f0;
  pxVar2 = pxRam00000000001710e8;
  if (pxRam00000000001710f0 < pxRam00000000001710f8) {
    *pxRam00000000001710f0 = param_1;
    pxRam00000000001710f0 = pxRam00000000001710f0 + 1;
    return;
  }
  iVar11 = (int8)pxRam00000000001710f0 - (int8)pxRam00000000001710e8;
  uVar4 = (iVar11 >> 3) + 1;
  if (uVar4 >> 0x3d == 0) {
    uVar9 = (int8)pxRam00000000001710f8 - (int8)pxRam00000000001710e8;
    uVar8 = (int8)uVar9 >> 2;
    if ((uint8)((int8)uVar9 >> 2) <= uVar4) {
      uVar8 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d == 0) {
      iVar3 = operator_new_plt(uVar8 * 8);
      pxRam00000000001710e8 = (xunknown8 *)(iVar3 + iVar11);
      pxRam00000000001710f8 = (xunknown8 *)(iVar3 + uVar8 * 8);
      pxVar12 = pxRam00000000001710e8 + 1;
      *pxRam00000000001710e8 = param_1;
      if ((int8)pxVar10 - (int8)pxVar2 != 0) {
        uVar4 = ((int8)pxVar10 - (int8)pxVar2) - 8;
        if ((0x17 < uVar4) && (0x1f < (uint8)((int8)pxVar2 - iVar3))) {
          pxVar6 = pxVar10 + -2;
          uVar4 = (uVar4 >> 3) + 1;
          uVar5 = uVar4 & 0x3ffffffffffffffc;
          pxVar10 = pxVar10 + -uVar5;
          pxRam00000000001710e8 = pxRam00000000001710e8 + -uVar5;
          pxVar7 = (xunknown8 *)((int8)pxVar6 + (iVar3 - (int8)pxVar2));
          uVar8 = uVar5;
          do {
            pxVar1 = pxVar6 + -1;
            xVar15 = pxVar6[-2];
            xVar14 = pxVar6[1];
            xVar13 = *pxVar6;
            uVar8 = uVar8 - 4;
            pxVar6 = pxVar6 + -4;
            pxVar7[-1] = *pxVar1;
            pxVar7[-2] = xVar15;
            pxVar7[1] = xVar14;
            *pxVar7 = xVar13;
            pxVar7 = pxVar7 + -4;
          } while (uVar8 != 0);
          if (uVar4 == uVar5) goto code_r0x00091594;
        }
        do {
          pxVar10 = pxVar10 + -1;
          pxRam00000000001710e8 = pxRam00000000001710e8 + -1;
          *pxRam00000000001710e8 = *pxVar10;
        } while (pxVar10 != pxVar2);
      }
code_r0x00091594:
      if (pxVar2 != (xunknown8 *)0x0) {
        pxRam00000000001710f0 = pxVar12;
        operator_delete_plt(pxVar2,uVar9);
      }
      pxRam00000000001710f0 = pxVar12;
      return;
    }
  }
  else {
    FUN_000915e0(&pxRam00000000001710e8);
  }
  FUN_0005ec14();
  FUN_0005eb94(0x371ec /* "vector" */);
  pxRam00000000001710e8 = (xunknown8 *)0x0;
  pxRam00000000001710f0 = (xunknown8 *)0x0;
  pxRam00000000001710f8 = (xunknown8 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0009107c,&pxRam00000000001710e8,0xcee00);
  return;
}

