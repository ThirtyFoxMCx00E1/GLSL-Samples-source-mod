/* module: waterbake  (2 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x795d0  size=168  waterbake::Install(void (*)(bool, char const*, ...))  [_ZN9waterbake7InstallEPFvbPKczE] */
void waterbake__Install(xunknown8 param_1)

{
  int8 iVar1;
  int4 iVar2;
  xunknown1 axStack_30 [8];
  int8 iStack_28;
  
  iVar1 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar1 + 0x28);
  xRam000000000010c258 = param_1;
  iVar2 = FUN_000c4e90(0,1,0x10c268);
  if (iVar2 == 0) {
    FUN_0007a2b4(axStack_30,FUN_00079678);
    std____ndk1__thread__detach_plt(axStack_30);
    std____ndk1__thread__dtor_thread_plt(axStack_30);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7a3a8  size=832  waterbake::Texture()  [_ZN9waterbake7TextureEv] */
void waterbake__Texture(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  xunknown8 *pxVar4;
  xunknown8 *pxVar5;
  int8 iVar6;
  int8 iVar7;
  uint1 uVar8;
  int4 iVar9;
  int4 iVar10;
  xunknown4 xVar11;
  xunknown4 xStack_74;
  xunknown8 xStack_70;
  xunknown8 xStack_68;
  xunknown1 xStack_60;
  xunknown4 xStack_5c;
  int8 iStack_58;
  
  iVar1 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  if (xRam000000000010c268 == 2) {
    if ((uRam000000000010c264 & 1) == 0) {
      xStack_5c = 0;
      xStack_70 = CONCAT44(2,(int4)xStack_70);
      xStack_68 = 0;
      xStack_60 = 0;
      uVar8 = gl__Load_plt((int8)&xStack_70 + 4,xRam000000000010c258);
      uRam000000000010c264 = uVar8 & 1;
      if ((uVar8 & 1) == 0) {
        xVar11 = 0;
        xRam000000000010c268 = 4;
        goto code_r0x0007a6a8;
      }
    }
    pxVar2 = pxRam00000000000d3208;
    xStack_70 = 0;
    xStack_74 = 4;
    (*(code *)*pxRam00000000000d3208)(0x8069,(int8)&xStack_70 + 4);
    (*(code *)*pxVar2)(0x88ef,&xStack_70);
    (*(code *)*pxVar2)(0xcf5,&xStack_74);
    pxVar2 = pxRam00000000000d34c8;
    if ((int4)xStack_70 != 0) {
      (*(code *)*pxRam00000000000d34c8)(0x88ec,0);
    }
    pxVar3 = pxRam00000000000d3220;
    (*(code *)*pxRam00000000000d3220)(0xcf5,4);
    (*(code *)*pxRam00000000000d32f8)(1,0x10c260);
    pxVar4 = pxRam00000000000d3300;
    (*(code *)*pxRam00000000000d3300)(0xde1,xRam000000000010c260);
    (*(code *)*pxRam00000000000d3318)(0xde1,9,0x8058,0x100,0x100);
    (*(code *)*pxRam00000000000d3328)(0xde1,0,0,0,0x100,0x100,0x1908,0x1401,iRam000000000010c240);
    pxVar5 = pxRam00000000000d3338;
    (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2703);
    (*(code *)*pxVar5)(0xde1,0x2800,0x2601);
    (*(code *)*pxVar5)(0xde1,0x2802,0x2901);
    (*(code *)*pxVar5)(0xde1,0x2803,0x2901);
    (*(code *)*pxRam00000000000d3348)(0xde1);
    (*(code *)*pxVar3)(0xcf5,xStack_74);
    if ((int4)xStack_70 != 0) {
      (*(code *)*pxVar2)(0x88ec);
    }
    (*(code *)*pxVar4)(0xde1,xStack_70._4_4_);
    pxVar2 = pxRam00000000000d3228;
    iVar9 = (*(code *)*pxRam00000000000d3228)();
    do {
      iVar10 = (*(code *)*pxVar2)();
      iVar7 = uRam000000000010c250;
      iVar6 = iRam000000000010c240;
    } while (iVar10 != 0);
    if (iVar9 != 0) {
      (*(code *)*pxRam00000000000d3308)(1,0x10c260);
      xRam000000000010c260 = 0;
      xRam000000000010c268 = 4;
      (*xRam000000000010c258)(1,0x36d7e /* "water: detail texture upload failed (GL 0x%X) - no detail ripples / ca..." */,iVar9);
      xVar11 = 0;
      goto code_r0x0007a6a8;
    }
    xRam000000000010c268 = 3;
    iRam000000000010c240 = 0;
    iRam000000000010c248 = 0;
    uRam000000000010c250 = 0;
    if (iVar6 != 0) {
      operator_delete_plt(iVar6,iVar7 - iVar6);
    }
    (*xRam000000000010c258)(0,0x310b9 /* "water: detail texture ready - %dx%d RGBA8 + %d mips (small ripples + c..." */,0x100,0x100,9);
  }
  else if (xRam000000000010c268 != 3) {
    xVar11 = 0;
    goto code_r0x0007a6a8;
  }
  xVar11 = xRam000000000010c260;
code_r0x0007a6a8:
  if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar11);
  return;
}

