/* module: ripples  (4 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x78944  size=28  ripples::Texture()  [_ZN7ripples7TextureEv] */
xunknown4 ripples__Texture(void)

{
  xunknown4 xVar1;
  
  xVar1 = xRam000000000010c1e8;
  if (cRam000000000010c1e4 == '\0') {
    xVar1 = 0;
  }
  return xVar1;
}

/* 0x78960  size=12  ripples::PuddleTexture()  [_ZN7ripples13PuddleTextureEv] */
xunknown4 ripples__PuddleTexture(void)

{
  return xRam000000000010c1ec;
}

/* 0x7896c  size=12  ripples::Strength()  [_ZN7ripples8StrengthEv] */
xunknown4 ripples__Strength(void)

{
  return xRam00000000000d8c7c;
}

/* 0x78978  size=284  ripples::Install(void (*)(bool, char const*, ...), float)  [_ZN7ripples7InstallEPFvbPKczEf] */
void ripples__Install(float4 param_1,code *param_2)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  
  xRam00000000000d8c7c = param_1;
  pcRam000000000010c1f0 = param_2;
  if (param_1 <= 0.0) {
    (*param_2)(0,0x36af2 /* "ripples: off ([Wet] Ripples = 0) - the puddle layout is still baked he..." */);
  }
  pxVar1 = pxRam00000000000d31f8;
  iVar2 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                    ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
  if (iVar2 != 0) {
    iRam000000000010c1f8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x32316 /* "_ZN8CWeather4RainE" */);
    xRam000000000010c200 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x2b83e /* "_ZN8CWeather8WetRoadsE" */);
    xRam000000000010c208 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x30f9e /* "_ZN5CGame8currAreaE" */);
  }
  if (iRam000000000010c1f8 == 0) {
    (*pcRam000000000010c1f0)(1,0x3805e /* "ripples: CWeather::Rain missing - rain ripples off" */);
    xRam00000000000d8c7c = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x000c99dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c50)(4,FUN_00078a94);
  return;
}

