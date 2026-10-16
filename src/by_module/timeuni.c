/* module: timeuni  (6 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x768bc  size=184  timeuni::EnableMaterial()  [_ZN7timeuni14EnableMaterialEv] */
xunknown8 timeuni__EnableMaterial(void)

{
  xunknown8 xVar1;
  int8 iVar2;
  
  if ((uRam000000000010c0f8 & 1) == 0) {
    if (cRam000000000010c0f9 == '\x01') {
      xVar1 = 0x26290 /* "material: no glUseProgram hook - glass / metal off" */;
    }
    else {
      iVar2 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x22dee /* "glDrawElements" */);
      if (iVar2 != 0) {
        (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0x38))
                  ((int8 *)*pxRam00000000000d31f8,iVar2,xRam00000000000d36b8,pxRam00000000000d36c0);
        uRam000000000010c0f8 = 1;
        return 1;
      }
      xVar1 = 0x39de3 /* "material: glDrawElements GOT slot not found - glass / metal off" */;
    }
    (*pcRam000000000010c0d8)(1,xVar1);
    xVar1 = 0;
  }
  else {
    xVar1 = 1;
  }
  return xVar1;
}

/* 0x76974  size=60  timeuni::SsrWanted()  [_ZN7timeuni9SsrWantedEv] */
xunknown1 timeuni__SsrWanted(void)

{
  xunknown1 xVar1;
  
  if ((cRam000000000010c0f9 & 1) != 0) {
    return 1;
  }
  xVar1 = 0;
  if ((uint4)(iRam000000000010c0fc - iRam000000000010c100) < 0x3c) {
    xVar1 = xRam000000000010c0fa;
  }
  return xVar1;
}

/* 0x769b0  size=12  timeuni::SetWetForce(float)  [_ZN7timeuni11SetWetForceEf] */
void timeuni__SetWetForce(xunknown4 param_1)

{
  xRam000000000010c104 = param_1;
  return;
}

/* 0x769bc  size=12  timeuni::SetSsrDebug(bool)  [_ZN7timeuni11SetSsrDebugEb] */
void timeuni__SetSsrDebug(xunknown1 param_1)

{
  xRam000000000010c108 = param_1;
  return;
}

/* 0x769c8  size=36  timeuni::SetSsr(float)  [_ZN7timeuni6SetSsrEf] */
void timeuni__SetSsr(float4 param_1)

{
  fRam000000000010c10c = 1.0;
  if (param_1 <= 1.0) {
    fRam000000000010c10c = param_1;
  }
  if (param_1 <= 0.0) {
    fRam000000000010c10c = 0.0;
  }
  return;
}

/* 0x769ec  size=712  timeuni::Install(void (*)(bool, char const*, ...))  [_ZN7timeuni7InstallEPFvbPKczE] */
bool timeuni__Install(code *param_1)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  int8 iVar3;
  
  pcRam000000000010c0d8 = param_1;
  iVar2 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x39044 /* "glLinkProgram" */);
  pxVar1 = pxRam00000000000d31f8;
  if (iVar2 == 0) {
    (*pcRam000000000010c0d8)(1,0x39e23 /* "world: glLinkProgram GOT slot not found - wind / shine off" */);
  }
  else {
    (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0x38))
              ((int8 *)*pxRam00000000000d31f8,iVar2,xRam00000000000d3698,pxRam00000000000d36a0);
    iVar3 = (**(code **)(*(int8 *)*pxVar1 + 0xe0))((int8 *)*pxVar1,0x3d204 /* "libGTASA.so" */);
    if (iVar3 == 0) {
      xRam000000000010c110 = 0;
    }
    else {
      xRam000000000010c110 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x352d7 /* "_ZN8CWeather4WindE" */);
      iRam000000000010c118 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x23f86 /* "_ZN10CTimeCycle13m_VectorToSunE" */);
      iRam000000000010c120 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x2db67 /* "_ZN10CTimeCycle20m_CurrentStoredValueE" */);
      iRam000000000010c128 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x2991d /* "_Z23emu_DistanceFogGetColorv" */);
      xRam000000000010c130 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x25caf /* "_ZN8CWeather9FoggynessE" */);
      xRam000000000010c138 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x2b83e /* "_ZN8CWeather8WetRoadsE" */);
      xRam000000000010c140 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x32316 /* "_ZN8CWeather4RainE" */);
      xRam000000000010c148 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar3,0x30f9e /* "_ZN5CGame8currAreaE" */);
    }
    if ((iRam000000000010c118 == 0 || iRam000000000010c120 == 0) || (iRam000000000010c128 == 0)) {
      (*pcRam000000000010c0d8)
                (1,0x2d6a0 /* "world: sun %d / fog colour %d symbols missing - water uses a fixed sky..." */,iRam000000000010c118 != 0 && iRam000000000010c120 != 0,
                 iRam000000000010c128 != 0);
    }
    rq__Listen_plt(1,FUN_00076cb4);
    rq__Listen_plt(2,FUN_00077c0c);
    iVar3 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x30e3f /* "glUseProgram" */);
    if (iVar3 == 0) {
      cRam000000000010c0f9 = 1;
    }
    else {
      (**(code **)(*(int8 *)*pxVar1 + 0x38))
                ((int8 *)*pxVar1,iVar3,xRam00000000000d36a8,pxRam00000000000d36b0);
    }
    (*pcRam000000000010c0d8)(0,0x3f5ef /* "world: time uniform on (glLinkProgram GOT slot %p)" */,iVar2);
  }
  return iVar2 != 0;
}

