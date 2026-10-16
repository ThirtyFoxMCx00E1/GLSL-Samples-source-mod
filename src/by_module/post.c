/* module: post  (3 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x5c9f4  size=2752  post::Install(void (*)(bool, char const*, ...), post::Settings const&)  [_ZN4post7InstallEPFvbPKczERKNS_8SettingsE] */
uint8 post__Install(code *param_1,uint1 *param_2)

{
  int4 *piVar1;
  unkbyte6 *pVar2;
  uint1 uVar3;
  int8 iVar4;
  xunknown8 *pxVar5;
  int8 iVar6;
  int8 iVar7;
  int4 *piVar8;
  xunknown8 xVar9;
  xunknown8 xVar10;
  uint4 uVar11;
  uint8 uVar12;
  uint8 uVar13;
  uint8 uVar14;
  uint8 uVar15;
  uint1 *puVar16;
  int8 *piVar17;
  xunknown1 axStack_20d8 [8];
  uint8 uStack_20d0;
  unkbyte6 *pStack_20c8;
  xunknown8 xStack_20c0;
  xunknown8 xStack_20b8;
  int8 iStack_20b0;
  xunknown4 xStack_20a4;
  uint1 uStack_20a0;
  unkbyte6 Stack_209f;
  xunknown1 xStack_2099;
  xunknown1 xStack_2098;
  unkbyte6 Stack_2097;
  xunknown1 xStack_2091;
  unkbyte6 *pStack_2090;
  xunknown8 xStack_2088;
  uint8 uStack_2080;
  int8 iStack_2078;
  xunknown8 xStack_2070;
  int8 iStack_2068;
  int8 iStack_2060;
  int8 iStack_2058;
  int8 iStack_70;
  
  iVar4 = tpidr_el0;
  iStack_70 = *(int8 *)(iVar4 + 0x28);
  pcRam00000000000d9690 = param_1;
  memcpy(0xd8698,param_2,0x2a1);
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
    (*param_1)(0,0x371ce /* "post: off ([Post] Enable = 0)" */);
    goto code_r0x0005d2e4;
  }
  std____ndk1__basic_string__assign_plt(0xd9648,0x2790b /* "uniform vec4 uP0;      // x tonemap strength, y exposure, z saturation..." */);
  puVar16 = param_2 + 0x14;
  if (*puVar16 != 0) {
    iVar6 = fopen(puVar16,0x2db4a);
    if (iVar6 != 0) {
      xStack_2088 = 0;
      uStack_2080 = 0;
      iStack_2078 = 0;
      while (iVar7 = fread(&xStack_2070,1,0x1000,iVar6), iVar7 != 0) {
        std____ndk1__basic_string__append_plt(&xStack_2088,&xStack_2070,iVar7);
      }
      fclose(iVar6);
      if ((xStack_2088 & 1) == 0) {
        uVar13 = xStack_2088 >> 1 & 0x7f;
        iVar6 = (int8)&xStack_2088 + 1;
      }
      else {
        uVar13 = uStack_2080;
        iVar6 = iStack_2078;
      }
      if (5 < (int8)uVar13) {
        piVar1 = (int4 *)(iVar6 + uVar13);
        iVar7 = iVar6;
        uVar12 = uVar13;
        do {
          piVar8 = (int4 *)memchr(iVar7,0x47,uVar12 - 5);
          if (piVar8 == (int4 *)0x0) break;
          if (*piVar8 == 0x64617247 && (int2)piVar8[1] == 0x2865) {
            xVar10 = 0x2ad85 /* "post: %s needs Grade() and the uP0/uP1/uP2 uniforms - using the built-..." */;
            xVar9 = 1;
            if ((piVar8 == piVar1) || ((int8)piVar8 - iVar6 == -1)) goto code_r0x0005cb80;
            iVar7 = iVar6;
            goto code_r0x0005d34c;
          }
          iVar7 = (int8)piVar8 + 1;
          uVar12 = (int8)piVar1 - iVar7;
        } while (5 < (int8)uVar12);
      }
code_r0x0005cb7c:
      xVar10 = 0x2ad85 /* "post: %s needs Grade() and the uP0/uP1/uP2 uniforms - using the built-..." */;
      xVar9 = 1;
      goto code_r0x0005cb80;
    }
    (*pcRam00000000000d9690)(1,0x22e0b /* "post: grading file %s not found - built-in grading" */,puVar16);
  }
  goto code_r0x0005cba8;
  while( true ) {
    iVar7 = (int8)piVar8 + 1;
    xVar9 = 1;
    uVar13 = (int8)piVar1 - iVar7;
    if ((int8)uVar13 < 3) break;
code_r0x0005d34c:
    piVar8 = (int4 *)memchr(iVar7,0x75,uVar13 - 2);
    if (piVar8 == (int4 *)0x0) goto code_r0x0005cb7c;
    if ((int2)*piVar8 == 0x5075 && *(char *)((int8)piVar8 + 2) == '1') {
      xVar10 = 0x2ad85 /* "post: %s needs Grade() and the uP0/uP1/uP2 uniforms - using the built-..." */;
      xVar9 = 1;
      if ((piVar8 != piVar1) && ((int8)piVar8 - iVar6 != -1)) {
        std____ndk1__basic_string__operator_plt(0xd9648,&xStack_2088);
        xVar9 = 0;
        xVar10 = 0x2660a /* "post: grading from %s" */;
      }
      break;
    }
  }
code_r0x0005cb80:
  (*pcRam00000000000d9690)(xVar9,xVar10,puVar16);
  if ((xStack_2088 & 1) != 0) {
    operator_delete_plt(iStack_2078,xStack_2088 & 0xfffffffffffffffe);
  }
code_r0x0005cba8:
  if (((param_2[0x114] != 0) || ((*pcRam00000000000d9690)(0,0x27896 /* "post: LUT off ([LUT] File is empty - e.g. File = Cinematic/Cinematic 1..." */), param_2[0x114] != 0)) &&
     (0.0 < *(float4 *)(param_2 + 0x214))) {
    xStack_2088 = 0;
    uStack_2080 = 0;
    iStack_2078 = 0;
    iVar6 = fopen(param_2 + 0x114,0x2db4a);
    if (iVar6 != 0) {
      while (iVar7 = fread(&xStack_2070,1,0x2000,iVar6), iVar7 != 0) {
        std____ndk1____wrap_iter_std____ndk1__vector____insert_with_size_abi_ne180000_plt
                  (&xStack_2088,uStack_2080,&xStack_2070,(int8)&xStack_2070 + iVar7);
      }
      fclose(iVar6);
    }
    iStack_2068 = 0;
    xStack_2070 = 0;
    iStack_2058 = 0;
    iStack_2060 = 0;
    if (xStack_2088 == uStack_2080) {
      uVar13 = 0x1c;
      uStack_20a0 = 0x1c;
      xStack_2091 = 0;
      Stack_209f = Ram0000000000023f77;
      xStack_2099 = (xunknown1)xRam0000000000023f7d;
      xStack_2098 = (xunknown1)((uint2)xRam0000000000023f7d >> 8);
      Stack_2097 = Ram0000000000023f7f;
    }
    else {
      png__Decode_plt(&uStack_20a0,&xStack_2088,&xStack_2070);
      uVar13 = (uint8)uStack_20a0;
    }
    uVar14 = CONCAT17(xStack_2091,CONCAT61(Stack_2097,xStack_2098));
    uVar15 = uVar13 >> 1;
    uVar11 = (uint4)uVar13;
    xStack_20a4 = 0;
    uVar12 = uVar15;
    if ((uVar13 & 1) != 0) {
      uVar12 = uVar14;
    }
    xStack_20c0 = 0;
    xStack_20b8 = 0;
    iStack_20b0 = 0;
    if (uVar12 == 0) {
      lut__Build_plt(axStack_20d8,&xStack_2070,0xd9678,&xStack_20a4,&xStack_20c0);
      if ((uStack_20a0 & 1) != 0) {
        operator_delete_plt(pStack_2090,
                            CONCAT17(xStack_2099,CONCAT61(Stack_209f,uStack_20a0)) &
                            0xfffffffffffffffe);
      }
      xStack_2098 = (xunknown1)uStack_20d0;
      Stack_2097 = (unkbyte6)(uStack_20d0 >> 8);
      xStack_2091 = (xunknown1)(uStack_20d0 >> 0x38);
      uStack_20a0 = axStack_20d8[0];
      Stack_209f = axStack_20d8._1_6_;
      xStack_2099 = axStack_20d8[7];
      pStack_2090 = pStack_20c8;
      uVar15 = (uint8)(uStack_20a0 >> 1);
      uVar11 = (uint4)uStack_20a0;
      uVar14 = uStack_20d0;
    }
    if ((uVar11 & 1) != 0) {
      uVar15 = uVar14;
    }
    if (uVar15 == 0) {
      xRam00000000000d9698 = xStack_20a4;
      iVar6 = iStack_20b0;
      if ((xStack_20c0 & 1) == 0) {
        iVar6 = (int8)&xStack_20c0 + 1;
      }
      (*pcRam00000000000d9690)
                ((float8)*(float4 *)(param_2 + 0x214),0,0x383d6 /* "post: LUT %s - %dx%d %s -> %d^3, strength %.2f" */,param_2 + 0x114,
                 xStack_2070 & 0xffffffff,xStack_2070._4_4_,iVar6);
    }
    else {
      xRam00000000000d9680 = xRam00000000000d9678;
      pVar2 = pStack_2090;
      if ((uVar11 & 1) == 0) {
        pVar2 = &Stack_209f;
      }
      (*pcRam00000000000d9690)(1,0x2a6ad /* "post: LUT %s - %s" */,param_2 + 0x114,pVar2);
    }
    if ((xStack_20c0 & 1) != 0) {
      operator_delete_plt(iStack_20b0,xStack_20c0 & 0xfffffffffffffffe);
    }
    if ((uStack_20a0 & 1) != 0) {
      operator_delete_plt(pStack_2090,
                          CONCAT17(xStack_2099,CONCAT61(Stack_209f,uStack_20a0)) &
                          0xfffffffffffffffe);
    }
    if (iStack_2068 != 0) {
      iStack_2060 = iStack_2068;
      operator_delete_plt(iStack_2068,iStack_2058 - iStack_2068);
    }
    if (xStack_2088 != 0) {
      uStack_2080 = xStack_2088;
      operator_delete_plt(xStack_2088,iStack_2078 - xStack_2088);
    }
  }
  pxVar5 = pxRam00000000000d31f8;
  if (param_2[0x228] == 1) {
    xVar9 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    iRam00000000000d96a0 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x30e8b /* "_ZN8CCoronas10SunScreenXE" */);
    iRam00000000000d96a8 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x2db4d /* "_ZN8CCoronas10SunScreenYE" */);
    xRam00000000000d96b0 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x291d1 /* "_ZN8CCoronas18SunBlockedByCloudsE" */);
    xRam00000000000d96b8 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x23f86 /* "_ZN10CTimeCycle13m_VectorToSunE" */);
    xRam00000000000d96c0 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x2db67 /* "_ZN10CTimeCycle20m_CurrentStoredValueE" */);
    xRam00000000000d96c8 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x223de /* "TheCamera" */);
    if ((iRam00000000000d96a0 == 0) || (iRam00000000000d96a8 == 0)) {
      (*pcRam00000000000d9690)(1,0x404d5 /* "post: sun position symbols missing - sun rays off" */);
    }
    (*pcRam00000000000d9690)
              ((float8)*(float4 *)(param_2 + 0x22c),(float8)*(float4 *)(param_2 + 0x230),
               (float8)*(float4 *)(param_2 + 0x234),(float8)*(float4 *)(param_2 + 0x238),0,0x2c070 /* "post: sun rays intensity %.2f radius %.2f density %.2f decay %.2f" */);
  }
  piVar17 = (int8 *)*pxVar5;
  xVar9 = (**(code **)(*piVar17 + 0xe0))(piVar17,0x3d204 /* "libGTASA.so" */);
  iRam00000000000d96d0 = (**(code **)(*piVar17 + 0x28))(piVar17,xVar9,0x2991d /* "_Z23emu_DistanceFogGetColorv" */);
  piVar17 = (int8 *)*pxVar5;
  xVar9 = (**(code **)(*piVar17 + 0xe0))(piVar17,0x3d204 /* "libGTASA.so" */);
  iRam00000000000d96d8 = (**(code **)(*piVar17 + 0x28))(piVar17,xVar9,0x322d2 /* "_ZN10CTimeCycle16m_CurrentColoursE" */);
  xVar9 = 0x2a6bf /* "MISSING - fog colour instead" */;
  if (iRam00000000000d96d8 != 0) {
    xVar9 = 0x2c0b2 /* "found" */;
  }
  (*pcRam00000000000d9690)((float8)*(float4 *)(param_2 + 600),0,0x32de4 /* "post: ambient (sky / ground light) %.2f - sky light from the game's sk..." */,xVar9);
  if (param_2[0x278] == 1) {
    xVar9 = (**(code **)(*(int8 *)*pxVar5 + 0xe0))((int8 *)*pxVar5,0x3d204 /* "libGTASA.so" */);
    iRam00000000000d96d0 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x2991d /* "_Z23emu_DistanceFogGetColorv" */);
    xRam00000000000d96e0 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x3580f /* "_Z28emu_DistanceFogGetParametersv" */);
    xRam00000000000d96e8 = (**(code **)(*(int8 *)*pxVar5 + 0x28))((int8 *)*pxVar5,xVar9,0x25caf /* "_ZN8CWeather9FoggynessE" */);
    if (iRam00000000000d96d0 == 0) {
      xVar10 = 0x30ea5 /* "post: emu_DistanceFogGetColor missing - fog off" */;
      xVar9 = 1;
      goto code_r0x0005d144;
    }
    (*pcRam00000000000d9690)
              ((float8)*(float4 *)(param_2 + 0x27c),(float8)*(float4 *)(param_2 + 0x280),
               (float8)*(float4 *)(param_2 + 0x284),(float8)*(float4 *)(param_2 + 0x288),
               (float8)*(float4 *)(param_2 + 0x28c),(float8)*(float4 *)(param_2 + 0x290),
               (float8)(*(float4 *)(param_2 + 0x294) + 1.0),0,0x25cc7 /* "post: fog - height fog %.4f/m (falloff %.3f/m above z %.0f m), haze %...." */);
  }
  else {
    xVar10 = 0x322f5 /* "post: fog off ([Fog] Enable = 0)" */;
    xVar9 = 0;
code_r0x0005d144:
    (*pcRam00000000000d9690)(xVar9,xVar10);
  }
  piVar17 = (int8 *)*pxVar5;
  iRam00000000000d8934 = 4;
  if (*(int4 *)(param_2 + 0x29c) < 3) {
    iRam00000000000d8934 = 2;
  }
  xVar9 = (**(code **)(*piVar17 + 0xe0))(piVar17,0x3d204 /* "libGTASA.so" */);
  xRam00000000000d96f0 = (**(code **)(*piVar17 + 0x28))(piVar17,xVar9,0x32316 /* "_ZN8CWeather4RainE" */);
  xVar9 = 0x32329 /* "on (quarter-res scene for the water / wet reflections)" */;
  if (iRam00000000000d8934 != 4) {
    xVar9 = 0x223e8 /* "on (half-res scene for the water / wet reflections)" */;
  }
  if (param_2[0x298] == 0) {
    xVar9 = 0x2c0b8;
  }
  (*pcRam00000000000d9690)(0,0x35831 /* "post: SSR prep %s" */,xVar9);
  (*pcRam00000000000d9690)
            ((float8)*(float4 *)(param_2 + 0x224),0,0x3d2a2 /* "post: FXAA %d, TAA %d (history %.2f; TAA replaces FXAA while it runs)" */,param_2[0x220],param_2[0x221]);
  rq__Listen_plt(4,FUN_0005e694);
  (*pcRam00000000000d9690)
            ((float8)*(float4 *)(param_2 + 4),(float8)*(float4 *)(param_2 + 8),
             (float8)*(float4 *)(param_2 + 0xc),(float8)*(float4 *)(param_2 + 0x10),0,0x26620 /* "post: on - tonemap %.2f exposure %.2f saturation %.2f contrast %.2f di..." */,
             param_2[1]);
  xVar9 = 0x38405 /* " - copy path" */;
  if (*(float4 *)(param_2 + 0x218) <= 0.0) {
    xVar9 = 0x29893;
  }
  (*pcRam00000000000d9690)
            ((float8)*(float4 *)(param_2 + 0x218),(float8)*(float4 *)(param_2 + 0x21c),0,0x2db8e /* "post: sharpen (CAS) %.2f%s, film grain %.3f" */,
             xVar9);
  (*pcRam00000000000d9690)
            ((float8)*(float4 *)(param_2 + 0x240),(float8)*(float4 *)(param_2 + 0x244),
             (float8)*(float4 *)(param_2 + 0x248),(float8)*(float4 *)(param_2 + 0x264),
             (float8)*(float4 *)(param_2 + 0x268),(float8)*(float4 *)(param_2 + 0x26c),
             (float8)*(float4 *)(param_2 + 0x270),(float8)*(float4 *)(param_2 + 0x274),0,0x2ec4f /* "post: bloom %d (intensity %.2f threshold %.2f knee %.2f), auto exposur..." */,
             param_2[0x23c],param_2[0x260]);
code_r0x0005d2e4:
  if (*(int8 *)(iVar4 + 0x28) == iStack_70) {
    return (uint8)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar13 = (*got___stack_chk_fail)();
  return uVar13;
}

/* 0x5e73c  size=48  post::DrainGpu(double&, int&)  [_ZN4post8DrainGpuERdRi] */
xunknown1 post__DrainGpu(xunknown8 *param_1,xunknown4 *param_2)

{
  xunknown1 xVar1;
  
  xVar1 = xRam00000000000d9704;
  *param_1 = xRam00000000000d96f8;
  *param_2 = xRam00000000000d9700;
  xRam00000000000d96f8 = 0;
  xRam00000000000d9700 = 0;
  return xVar1;
}

/* 0x5e76c  size=204  post::SsrData(float*, float*, unsigned int&, int&, int&, unsigned int&, float*)  [_ZN4post7SsrDataEPfS0_RjRiS2_S1_S0_] */
char post__SsrData(xunknown8 *param_1,xunknown4 *param_2,int4 *param_3,xunknown4 *param_4,
                  xunknown4 *param_5,xunknown4 *param_6,xunknown4 *param_7)

{
  char cVar1;
  int4 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  xunknown8 xVar9;
  xunknown4 xVar10;
  xunknown4 xVar11;
  char cVar12;
  xunknown4 xVar13;
  
  xVar9 = xRam00000000000d9750;
  xVar8 = xRam00000000000d9748;
  xVar7 = xRam00000000000d9740;
  xVar6 = xRam00000000000d9738;
  xVar5 = xRam00000000000d9730;
  xVar4 = xRam00000000000d9728;
  xVar3 = xRam00000000000d9718;
  cVar1 = '\0';
  if (iRam00000000000d9708 != 0) {
    cVar1 = cRam00000000000d9705;
  }
  if (cVar1 == '\x01') {
    param_1[1] = xRam00000000000d9720;
    *param_1 = xVar3;
    param_1[3] = xVar5;
    param_1[2] = xVar4;
    xVar13 = xRam00000000000d9758;
    iVar2 = iRam00000000000d9708;
    param_1[5] = xVar7;
    param_1[4] = xVar6;
    param_1[7] = xVar9;
    param_1[6] = xVar8;
    *param_2 = xVar13;
    *param_3 = iVar2;
    cVar12 = cRam00000000000d9764;
    xVar11 = xRam00000000000d9760;
    xVar10 = xRam00000000000d975c;
    *param_4 = xRam00000000000d9710;
    xVar13 = xRam00000000000d9714;
    param_2[1] = xVar10;
    param_2[2] = xVar11;
    *param_5 = xVar13;
    if (cVar12 == '\x01') {
      xVar13 = *(xunknown4 *)((uint8)uRam00000000000d9788 * 0x10 + 0xd9768);
    }
    else {
      xVar13 = 0;
    }
    *param_6 = xVar13;
    *param_7 = xRam00000000000d978c;
    param_7[1] = xRam00000000000d9790;
  }
  return cVar1;
}

