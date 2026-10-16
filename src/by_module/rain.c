/* module: rain  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x69e74  size=664  rain::Install(void (*)(bool, char const*, ...), rain::Settings const&)  [_ZN4rain7InstallEPFvbPKczERKNS_8SettingsE] */
void rain__Install(code *param_1,uint1 *param_2)

{
  int4 iVar1;
  xunknown8 *pxVar2;
  uint8 uVar3;
  xunknown8 xVar4;
  int8 iVar5;
  xunknown8 xVar6;
  float4 fVar7;
  
  xRam00000000000d8b6c = *(xunknown8 *)(param_2 + 8);
  xRam00000000000d8b64 = *(xunknown8 *)param_2;
  pcRam000000000010bd40 = param_1;
  if ((*param_2 & 1) == 0) {
    xVar6 = 0x2a15f /* "rain: 3D rain off ([Rain] Enable = 0)" */;
    xVar4 = 0;
  }
  else {
    uVar3 = boot__Safe_plt();
    pxVar2 = pxRam00000000000d31f8;
    if ((uVar3 & 1) == 0) {
      iVar5 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                        ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
      if (iVar5 == 0) {
        return;
      }
      iRam000000000010bd48 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x32316 /* "_ZN8CWeather4RainE" */);
      xRam000000000010bd50 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x352d7 /* "_ZN8CWeather4WindE" */);
      xRam000000000010bd58 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x2bb13 /* "_ZN8CWeather7WindDirE" */);
      xRam000000000010bd60 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x292b1 /* "_ZN8CWeather14UnderWaternessE" */);
      xRam000000000010bd68 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x30f9e /* "_ZN5CGame8currAreaE" */);
      iRam000000000010bd70 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x352ea /* "_ZN10CCullZones9CamNoRainEv" */);
      xRam000000000010bd78 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x35306 /* "_ZN10CCullZones12PlayerNoRainEv" */);
      xRam000000000010bd80 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar5,0x2991d /* "_Z23emu_DistanceFogGetColorv" */);
      if (iRam000000000010bd48 != 0) {
        rq__Listen_plt(3,FUN_0006a10c);
        fVar7 = *(float4 *)(param_2 + 4);
        iVar1 = 6000;
        if (fVar7 <= 2.0) {
          iVar1 = (int4)(fVar7 * 6000.0 * 0.5);
        }
        xVar4 = 0x38812 /* "no-rain zones unknown" */;
        if (iRam000000000010bd70 != 0) {
          xVar4 = 0x35326 /* "game no-rain zones respected" */;
        }
                    /* WARNING: Could not recover jumptable at 0x0006a0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000010bd40)
                  ((float8)fVar7,(float8)*(float4 *)(param_2 + 8),(float8)*(float4 *)(param_2 + 0xc)
                   ,0,0x341db /* "rain: 3D rain on - up to %d streaks (amount %.2f, brightness %.2f, len..." */,iVar1,xVar4);
        return;
      }
      xVar6 = 0x2d5d4 /* "rain: CWeather::Rain missing - 3D rain off" */;
    }
    else {
      xVar6 = 0x323eb /* "rain: 3D rain off - safe start (the last start did not reach the game)" */;
    }
    xVar4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00069ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000010bd40)(xVar4,xVar6);
  return;
}

