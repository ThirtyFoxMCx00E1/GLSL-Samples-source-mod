/* module: lights  (5 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x7e098  size=12  lights::Texture()  [_ZN6lights7TextureEv] */
xunknown4 lights__Texture(void)

{
  return xRam0000000000162208;
}

/* 0x7e0a4  size=100  lights::CameraDiag(char*, int)  [_ZN6lights10CameraDiagEPci] */
void lights__CameraDiag(xunknown8 param_1,int4 param_2)

{
  FUN_0007e108((float8)fRam000000000016221c,param_1,0xffffffffffffffff,(int8)param_2,0x3542e /* "camera rejected (total): no valid view yet %d, singular %d, no TheCame..." */,
               xRam000000000016220c,xRam0000000000162210,xRam0000000000162214,xRam0000000000162218,
               xRam0000000000162220);
  return;
}

/* 0x7e1ac  size=112  lights::Camera(float*, float*, float*)  [_ZN6lights6CameraEPfS0_S0_] */
uint1 lights__Camera(xunknown8 *param_1,xunknown8 *param_2,xunknown8 *param_3)

{
  uint1 uVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  
  xVar8 = xRam0000000000162260;
  xVar7 = xRam0000000000162258;
  xVar6 = xRam0000000000162248;
  xVar5 = xRam0000000000162240;
  xVar4 = xRam0000000000162238;
  xVar3 = xRam0000000000162230;
  xVar2 = xRam0000000000162228;
  uVar1 = uRam0000000000162224 & uRam0000000000162225;
  if ((uVar1 & 1) != 0) {
    param_1[5] = xRam0000000000162250;
    param_1[4] = xVar6;
    param_1[7] = xVar8;
    param_1[6] = xVar7;
    param_1[1] = xVar3;
    *param_1 = xVar2;
    param_1[3] = xVar5;
    param_1[2] = xVar4;
    xVar8 = xRam00000000001622a0;
    xVar7 = xRam0000000000162298;
    xVar6 = xRam0000000000162288;
    xVar5 = xRam0000000000162280;
    xVar4 = xRam0000000000162278;
    xVar3 = xRam0000000000162270;
    xVar2 = xRam0000000000162268;
    if (param_2 != (xunknown8 *)0x0) {
      param_2[5] = xRam0000000000162290;
      param_2[4] = xVar6;
      param_2[7] = xVar8;
      param_2[6] = xVar7;
      param_2[1] = xVar3;
      *param_2 = xVar2;
      param_2[3] = xVar5;
      param_2[2] = xVar4;
    }
    xVar2 = xRam00000000001622a8;
    if (param_3 != (xunknown8 *)0x0) {
      *(xunknown4 *)(param_3 + 1) = xRam00000000001622b0;
      *param_3 = xVar2;
    }
  }
  return uVar1 & 1;
}

/* 0x7e21c  size=28  lights::Strength()  [_ZN6lights8StrengthEv] */
xunknown1  [16] lights__Strength(void)

{
  uint8 uVar1;
  xunknown1 axVar2 [16];
  
  uVar1 = 0x3f800000;
  if (cRam00000000000d8c9c == '\0') {
    uVar1 = 0;
  }
  axVar2._8_8_ = 0;
  axVar2._0_8_ = uVar1;
  return axVar2;
}

/* 0x7e238  size=1256  lights::Install(void (*)(bool, char const*, ...), lights::Settings const&, bool)  [_ZN6lights7InstallEPFvbPKczERKNS_8SettingsEb] */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

xunknown8 lights__Install(code *param_1,uint1 *param_2,uint8 param_3)

{
  xunknown8 *pxVar1;
  xunknown8 xVar2;
  int8 iVar3;
  uint8 uVar4;
  int8 iVar5;
  xunknown8 xVar6;
  
  pxVar1 = pxRam00000000000d31f8;
  xRam00000000000d8ccc = *(xunknown8 *)(param_2 + 0x30);
  xRam00000000000d8ca4 = *(xunknown8 *)(param_2 + 8);
  _cRam00000000000d8c9c = *(xunknown8 *)param_2;
  xRam00000000000d8cb4 = *(xunknown8 *)(param_2 + 0x18);
  xRam00000000000d8cac = *(xunknown8 *)(param_2 + 0x10);
  xRam00000000000d8cc4 = *(xunknown8 *)(param_2 + 0x28);
  xRam00000000000d8cbc = *(xunknown8 *)(param_2 + 0x20);
  xRam00000000001622b8 = param_1;
  xVar2 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                    ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
  if ((*param_2 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      xVar2 = 0x2d7e5 /* "lights: off ([ExperimentalLights] Enable = 0)" */;
    }
    else {
      iRam0000000000162020 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x223de /* "TheCamera" */);
      iVar3 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x30e3f /* "glUseProgram" */);
      iVar5 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x3a281 /* "glUniformMatrix4fv" */);
      if (((iVar5 == 0) || (iVar3 == 0)) || (iRam0000000000162020 == 0)) {
        xVar2 = 0x3813b /* "lights: off; camera capture unavailable" */;
        goto code_r0x0007e700;
      }
      rq__Listen_plt(1,FUN_0007e720);
      rq__Listen_plt(2,FUN_0007e884);
      (**(code **)(*(int8 *)*pxVar1 + 0x38))
                ((int8 *)*pxVar1,iVar3,xRam00000000000d36d8,pxRam00000000000d36e0);
      (**(code **)(*(int8 *)*pxVar1 + 0x38))
                ((int8 *)*pxVar1,iVar5,xRam00000000000d36f8,pxRam00000000000d3700);
      iVar3 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x22dee /* "glDrawElements" */);
      if (iVar3 != 0) {
        (**(code **)(*(int8 *)*pxVar1 + 0x38))
                  ((int8 *)*pxVar1,iVar3,xRam00000000000d36e8,pxRam00000000000d36f0);
      }
      xVar2 = 0x354cc /* "lights: off ([ExperimentalLights] Enable = 0) - camera capture kept fo..." */;
    }
    xVar6 = 0;
  }
  else {
    iRam00000000001622c0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x39eac /* "_ZN12CPointLights9NumLightsE" */);
    iRam00000000001622c8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x2d037 /* "_ZN12CPointLights7aLightsE" */);
    iRam0000000000162020 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x223de /* "TheCamera" */);
    iRam00000000001622d0 = iRam0000000000162020;
    xRam00000000001622d8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x39431 /* "_ZN7CEntity11GetColModelEv" */);
    iRam00000000001622e0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x31116 /* "_ZN8CCoronas8aCoronasE" */);
    if (iRam00000000001622e0 == 0) {
      (*xRam00000000001622b8)(1,0x346cd /* "lights: CCoronas::aCoronas missing - corona lights off" */);
    }
    if ((iRam00000000001622c0 == 0) || (iRam00000000001622c8 == 0)) {
      xVar2 = 0x38cfb /* "lights: CPointLights symbols missing - off" */;
    }
    else {
      iVar3 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x2af00 /* "_ZN8CVehicle15DoVehicleLightsER7CMatrixj" */);
      if ((iVar3 == 0) || (uVar4 = boot__PrologueOk_plt(iVar3,0x2af00 /* "_ZN8CVehicle15DoVehicleLightsER7CMatrixj" */,0x2b8c2 /* "headlight tagging off" */), (uVar4 & 1) == 0)) {
        (*xRam00000000001622b8)(1,0x2ab12 /* "lights: CVehicle::DoVehicleLights missing - headlights stay at the car..." */);
      }
      else {
        (**(code **)(*(int8 *)*pxVar1 + 0x30))((int8 *)*pxVar1,iVar3,FUN_0007f130,0x1622e8);
        xRam00000000001622f0 = 1;
      }
      frame__OnPostBeginGame_plt(FUN_0007f21c);
      rq__Listen_plt(6,FUN_0007fb80);
      rq__Listen_plt(1,FUN_0007e720);
      rq__Listen_plt(2,FUN_0007e884);
      iVar3 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x30e3f /* "glUseProgram" */);
      iVar5 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x3a281 /* "glUniformMatrix4fv" */);
      if ((iVar3 != 0) && (iVar5 != 0)) {
        (**(code **)(*(int8 *)*pxVar1 + 0x38))
                  ((int8 *)*pxVar1,iVar3,xRam00000000000d36d8,pxRam00000000000d36e0);
        (**(code **)(*(int8 *)*pxVar1 + 0x38))
                  ((int8 *)*pxVar1,iVar5,xRam00000000000d36f8,pxRam00000000000d3700);
        iVar3 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x22dee /* "glDrawElements" */);
        if (iVar3 != 0) {
          (**(code **)(*(int8 *)*pxVar1 + 0x38))
                    ((int8 *)*pxVar1,iVar3,xRam00000000000d36e8,pxRam00000000000d36f0);
        }
        rq__Listen_plt(4,FUN_0007fb90);
        (*xRam00000000001622b8)
                  ((float8)*(float4 *)(param_2 + 4),(float8)*(float4 *)(param_2 + 8),0,0x2d052 /* "lights: on - intensity %.2f, radius x%.2f (source: CPointLights, max 3..." */,
                   xRam00000000001622f0);
        (*xRam00000000001622b8)
                  ((float8)*(float4 *)(param_2 + 0xc),(float8)*(float4 *)(param_2 + 0x10),
                   (float8)*(float4 *)(param_2 + 0x14),(float8)*(float4 *)(param_2 + 0x18),
                   (float8)*(float4 *)(param_2 + 0x30),(float8)*(float4 *)(param_2 + 0x34),0,0x29d6d /* "lights: headlights range %.1f intensity %.2f width %.2f height %.2f, s..." */
                   ,param_2[0x2c]);
        return 1;
      }
      xVar2 = 0x35517 /* "lights: glUseProgram / glUniformMatrix4fv GOT slots not found - off" */;
    }
code_r0x0007e700:
    xVar6 = 1;
  }
  (*xRam00000000001622b8)(xVar6,xVar2);
  return 0;
}

