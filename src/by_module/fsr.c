/* module: fsr  (6 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x6b278  size=804  fsr::Install(void (*)(bool, char const*, ...), fsr::Settings const&)  [_ZN3fsr7InstallEPFvbPKczERKNS_8SettingsE] */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fsr__Install(code *UNRECOVERED_JUMPTABLE,uint1 *param_2)

{
  bool bVar1;
  int8 iVar2;
  uint8 uVar3;
  xunknown8 *pxVar4;
  int4 iVar5;
  xunknown8 xVar6;
  int8 iVar7;
  int8 iVar8;
  int8 iVar9;
  xunknown4 xVar10;
  xunknown8 xStack_70;
  xunknown8 xStack_68;
  xunknown8 xStack_60;
  xunknown8 xStack_58;
  int8 iStack_48;
  
  pxVar4 = pxRam00000000000d31f8;
  iVar2 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar2 + 0x28);
  xRam00000000000d8b94 = *(xunknown8 *)(param_2 + 8);
  xVar6 = *(xunknown8 *)param_2;
  xRam00000000000d8b9c = *(xunknown4 *)(param_2 + 0x10);
  xVar10 = 0x3f000000;
  fRam00000000000d8b90 = (float4)((uint8)xVar6 >> 0x20);
  if ((fRam00000000000d8b90 < 0.5) ||
     (xVar10 = 0x3f800000, bVar1 = 1.0 < fRam00000000000d8b90, _uRam00000000000d8b8c = xVar6, bVar1)
     ) {
    _uRam00000000000d8b8c = CONCAT44(xVar10,(int4)xVar6);
  }
  xVar10 = 0;
  if (((float4)xRam00000000000d8b94 < 0.0) ||
     (xVar10 = 0x3f800000, 1.0 < (float4)xRam00000000000d8b94)) {
    uVar3 = (uint8)xRam00000000000d8b94 >> 0x20;
    xRam00000000000d8b94 = CONCAT44((int4)uVar3,xVar10);
  }
  pcRam000000000010be18 = UNRECOVERED_JUMPTABLE;
  if ((*param_2 & 1) == 0) {
    if (*(int8 *)(iVar2 + 0x28) == iStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0006b508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0,0x26222 /* "fsr: off ([FSR] Enable = 0) - the game's own bilinear stretch where it..." */);
      return;
    }
  }
  else {
    xVar6 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    pcRam000000000010be08 = (**(code **)(*(int8 *)*pxVar4 + 0x28))((int8 *)*pxVar4,xVar6,0x2d5ff /* "_Z17OS_ScreenGetWidthv" */);
    iVar7 = (**(code **)(*(int8 *)*pxVar4 + 0x28))((int8 *)*pxVar4,xVar6,0x26d71 /* "_Z11RenderSceneb" */);
    if (iVar7 != 0) {
      xStack_68 = 0;
      xStack_70 = 0;
      xStack_58 = 0;
      xStack_60 = 0;
      iVar5 = dladdr(iVar7,&xStack_70);
      if (iVar5 != 0) {
        uRam000000000010be20 = xStack_68;
      }
    }
    iVar7 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2c020 /* "glBindTexture" */);
    iVar8 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2c03e /* "glDrawArrays" */);
    iVar9 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x22dee /* "glDrawElements" */);
    if ((iVar7 == 0) || (iVar8 == 0 && iVar9 == 0)) {
      (*pcRam000000000010be18)(1,0x303a9 /* "fsr: glBindTexture / glDraw* not imported - FSR off" */);
      xRam000000000010be28 = 1;
    }
    else {
      (**(code **)(*(int8 *)*pxVar4 + 0x38))
                ((int8 *)*pxVar4,iVar7,xRam00000000000d3620,pxRam00000000000d3628);
      if (iVar8 != 0) {
        (**(code **)(*(int8 *)*pxVar4 + 0x38))
                  ((int8 *)*pxVar4,iVar8,xRam00000000000d3630,pxRam00000000000d3638);
      }
      if (iVar9 != 0) {
        (**(code **)(*(int8 *)*pxVar4 + 0x38))
                  ((int8 *)*pxVar4,iVar9,xRam00000000000d3640,pxRam00000000000d3648);
      }
      rq__Listen_plt(1,FUN_0006b59c);
      if (0.999 <= fRam00000000000d8b90) {
        xVar6 = 0x363de /* " (native size; FSR only where the game scales itself)" */;
      }
      else {
        iVar7 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x372e4 /* "_Z22emu_SetAltRenderTargetii" */);
        if (iVar7 == 0) {
          xVar6 = 0x2bb29 /* " - emu_SetAltRenderTarget NOT imported: can't lower the resolution, FS..." */;
        }
        else {
          (**(code **)(*(int8 *)*pxVar4 + 0x38))
                    ((int8 *)*pxVar4,iVar7,xRam00000000000d3650,pxRam00000000000d3658);
          xVar6 = 0x23a45 /* " (emu_SetAltRenderTarget hooked)" */;
        }
      }
      (*pcRam000000000010be18)
                ((float8)fRam00000000000d8b90,(float8)(float4)xRam00000000000d8b94,0,0x2b4c0 /* "fsr: on - render scale %.2f%s, sharpness %.2f, fast sharpen %d (RCAS i..." */,xVar6,
                 xRam00000000000d8b94._4_1_);
    }
    if (*(int8 *)(iVar2 + 0x28) == iStack_48) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6b6ac  size=244  fsr::Active(int, int)  [_ZN3fsr6ActiveEii] */
bool fsr__Active(int4 param_1,int4 param_2)

{
  bool bVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  
  bVar1 = false;
  if ((uRam00000000000d8b8c == '\x01') && ((xRam000000000010be28 & 1) == 0)) {
    xVar2 = eglGetCurrentDisplay(0);
    xVar3 = eglGetCurrentSurface(0x3059);
    iRam000000000010be2c = 0;
    iRam000000000010be30 = 0;
    eglQuerySurface(xVar2,xVar3,0x3057,&iRam000000000010be2c);
    eglQuerySurface(xVar2,xVar3,0x3056,&iRam000000000010be30);
    bVar1 = false;
    if (((param_1 < iRam000000000010be2c) &&
        (((0 < param_2 && (0 < param_1)) && (0 < iRam000000000010be2c)))) &&
       (((0 < iRam000000000010be30 && (param_2 < iRam000000000010be30)) &&
        (iRam000000000010be2c <= param_1 * 2)))) {
      bVar1 = iRam000000000010be30 <= param_2 * 2;
    }
  }
  return bVar1;
}

/* 0x6b7a0  size=2516  fsr::Run(unsigned int, int, int, int, bool, bool)  [_ZN3fsr3RunEjiiibb] */
void fsr__Run(xunknown4 param_1,xunknown4 param_2,int4 param_3,int4 param_4,uint1 param_5,
             uint1 param_6)

{
  int4 iVar1;
  uint1 uVar2;
  uint1 uVar3;
  xunknown4 *pxVar4;
  xunknown4 *pxVar5;
  xunknown4 *pxVar6;
  int8 iVar7;
  xunknown8 *pxVar8;
  xunknown8 *pxVar9;
  xunknown8 *pxVar10;
  bool bVar11;
  bool bVar12;
  xunknown4 xVar13;
  xunknown4 xVar14;
  xunknown8 xVar15;
  uint8 uVar16;
  uint4 uVar17;
  code *pcVar18;
  uint4 uVar19;
  xunknown8 *pxVar20;
  xunknown8 *pxVar21;
  xunknown4 xStack_8c;
  int8 iStack_88;
  
  iVar7 = tpidr_el0;
  iStack_88 = *(int8 *)(iVar7 + 0x28);
  if (cRam000000000010bdd0 == '\x01') {
    if (uRam000000000010bdd8 != 0) {
      xStack_8c = 0x84c0;
      (*(code *)*pxRam00000000000d3208)(0x84e0,&xStack_8c);
      pxVar21 = pxRam00000000000d3310;
      pxVar8 = pxRam00000000000d3300;
      uVar19 = 0;
      uVar17 = uRam000000000010bdd8;
      do {
        if ((uVar17 >> (uint8)(uVar19 & 0x1f) & 1) != 0) {
          (*(code *)*pxVar21)(uVar19 + 0x84c0);
          (*(code *)*pxVar8)(0xde1,iRam000000000010bdd4);
          uVar17 = uRam000000000010bdd8;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x20);
      (*(code *)*pxVar21)(xStack_8c);
    }
    uRam000000000010bdd8 = 0;
    cRam000000000010bdd0 = '\0';
  }
  if ((uRam000000000010be80 & 1) == 0) {
    uRam000000000010be80 = 1;
    xVar13 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x292cf /* "fsr-easu" */,pcRam000000000010be18);
    xVar14 = gl__Compile_plt(0x8b30,0x247b5 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x292cf /* "fsr-easu" */,pcRam000000000010be18);
    iRam000000000010be4c = gl__Link_plt(xVar13,xVar14,0x292cf /* "fsr-easu" */,pcRam000000000010be18);
    xVar13 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x292d8 /* "fsr-rcas" */,pcRam000000000010be18);
    xVar14 = gl__Compile_plt(0x8b30,0x3a2b7 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x292d8 /* "fsr-rcas" */,pcRam000000000010be18);
    iRam000000000010be7c = gl__Link_plt(xVar13,xVar14,0x292d8 /* "fsr-rcas" */,pcRam000000000010be18);
    pxVar8 = pxRam00000000000d3408;
    if ((iRam000000000010be7c != 0) && (iRam000000000010be4c != 0)) {
      xRam00000000000d8bac = (*(code *)*pxRam00000000000d3408)(iRam000000000010be4c,0x39c2f /* "uCon" */);
      xRam00000000000d8bb4 = (*(code *)*pxVar8)(iRam000000000010be4c,0x2a15a /* "uMax" */);
      xRam00000000000d8bbc = (*(code *)*pxVar8)(iRam000000000010be7c,0x2a15a /* "uMax" */);
      xRam00000000000d8bc0 = (*(code *)*pxVar8)(iRam000000000010be7c,0x3fc5d);
      pxVar10 = pxRam00000000000d33d8;
      pxVar9 = pxRam00000000000d3360;
      pxVar20 = pxRam00000000000d3410;
      pxVar21 = pxRam00000000000d3350;
      if (xRam00000000000d8b9c == 0) {
        xVar13 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x2b529 /* "fsr-fast" */,pcRam000000000010be18);
        xVar14 = gl__Compile_plt(0x8b30,0x286f9 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x2b529 /* "fsr-fast" */,pcRam000000000010be18);
        xVar15 = gl__Link_plt(xVar13,xVar14,0x2b529 /* "fsr-fast" */,pcRam000000000010be18);
        iRam000000000010be48 = (int4)xVar15;
        if (iRam000000000010be48 == 0) {
          (*pcRam000000000010be18)(1,0x24786 /* "fsr: fast upscale shader failed - EASU instead" */);
          xRam00000000000d8b9c = 1;
          pxVar20 = pxRam00000000000d3410;
          pxVar21 = pxRam00000000000d3350;
        }
        else {
          xRam00000000000d8ba8 = (*(code *)*pxVar8)(xVar15,0x39c2f /* "uCon" */);
          xRam00000000000d8bb0 = (*(code *)*pxVar8)(iRam000000000010be48,0x2a15a /* "uMax" */);
          xRam00000000000d8bb8 = (*(code *)*pxVar8)(iRam000000000010be48,0x26270 /* "uInv" */);
          (*(code *)*pxVar10)(iRam000000000010be48);
          pcVar18 = (code *)*pxRam00000000000d3410;
          xVar15 = (*(code *)*pxVar8)(iRam000000000010be48,0x40be1 /* "uTex" */);
          (*pcVar18)(xVar15,0);
          pxVar21 = pxRam00000000000d3350;
          (*(code *)*pxRam00000000000d3350)(1,0x10be50);
          (*(code *)*pxVar9)(xRam000000000010be50,0x2801,0x2601);
          (*(code *)*pxVar9)(xRam000000000010be50,0x2800,0x2601);
          (*(code *)*pxVar9)(xRam000000000010be50,0x2802,0x812f);
          pxVar20 = pxRam00000000000d3410;
          (*(code *)*pxVar9)(xRam000000000010be50,0x2803,0x812f);
        }
      }
      (*(code *)*pxVar10)(iRam000000000010be4c);
      pcVar18 = (code *)*pxVar20;
      xVar15 = (*(code *)*pxVar8)(iRam000000000010be4c,0x40be1 /* "uTex" */);
      (*pcVar18)(xVar15,0);
      (*(code *)*pxVar10)(iRam000000000010be7c);
      pcVar18 = (code *)*pxVar20;
      xVar15 = (*(code *)*pxVar8)(iRam000000000010be7c,0x40be1 /* "uTex" */);
      (*pcVar18)(xVar15,0);
      (*(code *)*pxVar21)(1,0x10be54);
      (*(code *)*pxVar9)(xRam000000000010be54,0x2801,0x2600);
      (*(code *)*pxVar9)(xRam000000000010be54,0x2800,0x2600);
      (*(code *)*pxVar9)(xRam000000000010be54,0x2802,0x812f);
      (*(code *)*pxVar9)(xRam000000000010be54,0x2803,0x812f);
      xVar15 = 0x37301 /* "fast upscale (Mode 0: 5-tap Catmull-Rom, clamped)" */;
      if (xRam00000000000d8b9c != 0) {
        xVar15 = 0x3fd58 /* "EASU (Mode 1)" */;
      }
      (*pcRam000000000010be18)((float8)(float4)xRam00000000000d8b94,0,0x3fd32 /* "fsr: %s + RCAS ready (sharpness %.2f)" */,xVar15);
      goto code_r0x0006bce0;
    }
    (*pcRam000000000010be18)(1,0x2a189 /* "fsr: shaders failed - FSR off (the game's own stretch is used)" */);
code_r0x0006c12c:
    xVar15 = 0;
    xRam000000000010be28 = 1;
  }
  else {
    if ((xRam000000000010be28 & 1) != 0) {
      xVar15 = 0;
      goto code_r0x0006c138;
    }
code_r0x0006bce0:
    uVar2 = 0.001 < (float4)xRam00000000000d8b94 & (param_6 ^ 1);
    uRam000000000010be34 = uVar2;
    if ((iRam000000000010bde8 == iRam000000000010be2c) &&
       (iRam000000000010bdec == iRam000000000010be30)) {
      uVar3 = 0;
      if (iRam000000000010be40 != iRam000000000010bde8) {
        uVar3 = uVar2;
      }
      if (uVar3 == 1) goto code_r0x0006bd54;
    }
    else {
code_r0x0006bd54:
      if (((uVar2 != 0) && (uVar16 = FUN_0006c174(0x10be38), (uVar16 & 1) == 0)) ||
         (uVar16 = FUN_0006c174(&uRam000000000010bde0,iRam000000000010be2c,iRam000000000010be30),
         (uVar16 & 1) == 0)) {
        (*pcRam000000000010be18)(1,0x3423c /* "fsr: %dx%d targets failed - FSR off" */,iRam000000000010be2c,iRam000000000010be30);
        goto code_r0x0006c12c;
      }
      xVar15 = 0x2a887 /* " (EASU + RCAS)" */;
      if (uVar2 == 0) {
        xVar15 = 0x3882e /* " (EASU only, Sharpness 0)" */;
      }
      (*pcRam000000000010be18)(0,0x39c1b /* "fsr: output %dx%d%s" */,iRam000000000010be2c,iRam000000000010be30,xVar15);
    }
    xStack_8c = 0x8ce0;
    pxVar4 = (xunknown4 *)0x10be3c;
    if (uVar2 == 0) {
      pxVar4 = (xunknown4 *)0x10bde4;
    }
    (*(code *)*pxRam00000000000d3248)(0x8ca9,*pxVar4);
    (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&xStack_8c);
    (*(code *)*pxRam00000000000d3520)(0,0,iRam000000000010be2c,iRam000000000010be30);
    bVar11 = xRam00000000000d8b9c != 0;
    bVar12 = iRam000000000010be48 == 0;
    iVar1 = iRam000000000010be48;
    if (bVar11 || bVar12) {
      iVar1 = iRam000000000010be4c;
    }
    pxVar4 = (xunknown4 *)0x10be50;
    if (bVar11 || bVar12) {
      pxVar4 = (xunknown4 *)0x10be54;
    }
    pxVar5 = (xunknown4 *)0xd8ba8;
    if (bVar11 || bVar12) {
      pxVar5 = (xunknown4 *)0xd8bac;
    }
    pxVar6 = (xunknown4 *)0xd8bb0;
    if (bVar11 || bVar12) {
      pxVar6 = (xunknown4 *)0xd8bb4;
    }
    (*(code *)*pxRam00000000000d33d8)(iVar1);
    (*(code *)*pxRam00000000000d3310)(0x84c0);
    (*(code *)*pxRam00000000000d3300)(0xde1,param_1);
    (*(code *)*pxRam00000000000d3358)(0,*pxVar4);
    xVar15 = 0x3f800000;
    if ((param_5 & (uVar2 ^ 1)) == 0) {
      xVar15 = 0;
    }
    (*(code *)*pxRam00000000000d3480)
              ((float4)param_3 / (float4)iRam000000000010be2c,
               (float4)param_4 / (float4)iRam000000000010be30,xVar15,0,*pxVar5);
    (*(code *)*pxRam00000000000d3468)(*pxVar6,param_3 + -1,param_4 + -1);
    if (!bVar11 && !bVar12) {
      (*(code *)*pxRam00000000000d3420)
                (1.0 / (float4)param_3,1.0 / (float4)param_4,xRam00000000000d8bb8);
    }
    (*(code *)*pxRam00000000000d3518)(4,0,3);
    cRam000000000010bdd0 = '\0';
    uRam000000000010bdd8 = 0;
    xRam000000000010be59 = 1;
    iRam000000000010be5c = iRam000000000010be5c + 1;
    iRam00000000000d8b88 = param_2;
    iRam000000000010bdd4 = param_1;
    uRam000000000010be58 = param_5 & 1;
    if ((param_3 != iRam000000000010be60) || (param_4 != iRam000000000010be64)) {
      iRam000000000010be60 = param_3;
      iRam000000000010be64 = param_4;
      (*pcRam000000000010be18)
                (((float8)param_3 * 100.0) / (float8)iRam000000000010be2c,0,0x2a896 /* "fsr: scene %dx%d -> screen %dx%d (%.0f %% of the width)" */,param_3,param_4,
                 iRam000000000010be2c,iRam000000000010be30);
    }
    iVar1 = iRam000000000010be68 + 1;
    bVar11 = 0x256 < iRam000000000010be68;
    iRam000000000010be68 = iVar1;
    if ((bVar11) && (iRam000000000010be6c < 0x1e)) {
      iRam000000000010be6c = iRam000000000010be6c + 1;
      xVar15 = 0x2dcef /* " - OUR IMAGE NEVER REACHED THE SCREEN (the game's stretch is used)" */;
      if (iRam000000000010be70 != 0) {
        xVar15 = 0x29893;
      }
      (*pcRam000000000010be18)
                (iRam000000000010be70 == 0,0x34d69 /* "fsr: %d frames upscaled, %d handed to the game's screen quad (%d via i..." */,iRam000000000010be5c,iRam000000000010be70,
                 iRam000000000010bddc,iRam000000000010be74,xRam000000000010be78,xVar15);
      iRam000000000010be68 = 0;
      iRam000000000010be5c = 0;
      iRam000000000010be70 = 0;
      iRam000000000010bddc = 0;
      iRam000000000010be74 = 0;
      xRam000000000010be78 = 0;
    }
    xVar15 = 1;
  }
code_r0x0006c138:
  if (*(int8 *)(iVar7 + 0x28) == iStack_88) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar15);
  return;
}

/* 0x6c314  size=52  fsr::TaaSharpness()  [_ZN3fsr12TaaSharpnessEv] */
xunknown4 fsr__TaaSharpness(void)

{
  xunknown4 xVar1;
  
  xVar1 = (xunknown4)xRam00000000000d8b94;
  if ((uRam00000000000d8b8c & (xRam000000000010be28 ^ 0xff) & xRam00000000000d8b94._4_1_ & 1) == 0)
  {
    xVar1 = 0;
  }
  return xVar1;
}

/* 0x6c348  size=460  fsr::Sharpen()  [_ZN3fsr7SharpenEv] */
uint8 fsr__Sharpen(void)

{
  uint4 uVar1;
  int8 iVar2;
  uint8 uVar3;
  xunknown4 xVar4;
  xunknown4 xStack_3c;
  int8 iStack_38;
  
  iVar2 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar2 + 0x28);
  uVar1 = (uint4)(xRam000000000010be59 & uRam000000000010be34 & iRam000000000010be3c != 0);
  if (uVar1 == 1) {
    xStack_3c = 0x8ce0;
    (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam000000000010bde4);
    (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&xStack_3c);
    (*(code *)*pxRam00000000000d3520)(0,0,iRam000000000010be2c,iRam000000000010be30);
    (*(code *)*pxRam00000000000d33d8)(iRam000000000010be7c);
    (*(code *)*pxRam00000000000d3310)(0x84c0);
    (*(code *)*pxRam00000000000d3300)(0xde1,xRam000000000010be38);
    (*(code *)*pxRam00000000000d3358)(0,xRam000000000010be54);
    (*(code *)*pxRam00000000000d3468)
              (xRam00000000000d8bbc,iRam000000000010be2c + -1,iRam000000000010be30 + -1);
    xVar4 = 0x3f800000;
    if (uRam000000000010be58 == '\0') {
      xVar4 = 0;
    }
    (*(code *)*pxRam00000000000d3480)
              ((xunknown4)xRam00000000000d8b94,xVar4,0,0,xRam00000000000d8bc0);
    (*(code *)*pxRam00000000000d3518)(4,0,3);
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_38) {
    return (uint8)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*got___stack_chk_fail)();
  return uVar3;
}

/* 0x6c514  size=572  fsr::Rebind(gl::SavedState const&, unsigned int)  [_ZN3fsr6RebindERKN2gl10SavedStateEj] */
void fsr__Rebind(int8 param_1,int4 param_2)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  
  pxVar2 = pxRam00000000000d3310;
  pxVar1 = pxRam00000000000d3300;
  if (xRam000000000010be59 != '\x01') {
    return;
  }
  xRam000000000010be59 = 0;
  if (uRam000000000010bde0 == 0) {
    xRam000000000010be59 = 0;
    return;
  }
  if (param_2 == 0) {
    xRam000000000010be59 = 0;
    return;
  }
  if (iRam000000000010bdd4 != param_2) {
    xRam000000000010be59 = 0;
    return;
  }
  if (*(int4 *)(param_1 + 0x18) == param_2) {
    (*(code *)*pxRam00000000000d3310)(0x84c0);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 1;
  }
  if (*(int4 *)(param_1 + 0x1c) == param_2) {
    (*(code *)*pxVar2)(0x84c1);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 2;
  }
  if (*(int4 *)(param_1 + 0x20) == param_2) {
    (*(code *)*pxVar2)(0x84c2);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 4;
  }
  if (*(int4 *)(param_1 + 0x24) == param_2) {
    (*(code *)*pxVar2)(0x84c3);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 8;
  }
  if (*(int4 *)(param_1 + 0x28) == param_2) {
    (*(code *)*pxVar2)(0x84c4);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 0x10;
  }
  if (*(int4 *)(param_1 + 0x2c) == param_2) {
    (*(code *)*pxVar2)(0x84c5);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 0x20;
  }
  if (*(int4 *)(param_1 + 0x30) == param_2) {
    (*(code *)*pxVar2)(0x84c6);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 0x40;
  }
  if (*(int4 *)(param_1 + 0x34) == param_2) {
    (*(code *)*pxVar2)(0x84c7);
    (*(code *)*pxVar1)(0xde1,uRam000000000010bde0);
    uRam000000000010bdd8 = uRam000000000010bdd8 | 0x80;
  }
  else if (uRam000000000010bdd8 == 0) {
    cRam000000000010bdd0 = 1;
    return;
  }
  (*(code *)*pxVar2)(*(xunknown4 *)(param_1 + 0x10));
  cRam000000000010bdd0 = 1;
  return;
}

