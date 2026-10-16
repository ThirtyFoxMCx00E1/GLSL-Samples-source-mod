/* module: scene  (6 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x91670  size=28  scene::HdrTexture()  [_ZN5scene10HdrTextureEv] */
xunknown4 scene__HdrTexture(void)

{
  xunknown4 xVar1;
  
  xVar1 = uRam0000000000171148;
  if (cRam0000000000171158 == '\0') {
    xVar1 = 0;
  }
  return xVar1;
}

/* 0x9168c  size=28  scene::GameColorTexture()  [_ZN5scene16GameColorTextureEv] */
xunknown4 scene__GameColorTexture(void)

{
  xunknown4 xVar1;
  
  xVar1 = iRam0000000000171144;
  if (cRam0000000000171158 == '\0') {
    xVar1 = 0;
  }
  return xVar1;
}

/* 0x916a8  size=112  scene::PostDone()  [_ZN5scene8PostDoneEv] */
void scene__PostDone(void)

{
  bool bVar1;
  
  uRam0000000000171140 = 0;
  if ((cRam0000000000171158 == '\x01') &&
     (bVar1 = 0x706 < iRam000000000017115c, iRam000000000017115c = iRam000000000017115c + 1, bVar1))
  {
    iRam000000000017115c = 0;
    (*pcRam0000000000171160)(0,0x41294 /* "scene: HDR active - %ld binds of the game's scene texture redirected t..." */,iRam0000000000171150);
    iRam0000000000171150 = 0;
  }
  return;
}

/* 0x91718  size=12  scene::DepthTexture()  [_ZN5scene12DepthTextureEv] */
xunknown4 scene__DepthTexture(void)

{
  return xRam0000000000171168;
}

/* 0x91724  size=12  scene::SceneFbo()  [_ZN5scene8SceneFboEv] */
xunknown4 scene__SceneFbo(void)

{
  return xRam000000000017116c;
}

/* 0x91730  size=288  scene::Install(void (*)(bool, char const*, ...), bool, scene::Hdr const&)  [_ZN5scene7InstallEPFvbPKczEbRKNS_3HdrE] */
uint4 scene__Install(code *param_1,uint4 param_2,uint8 *param_3)

{
  int8 iVar1;
  xunknown8 xVar2;
  
  uRam00000000000d8da8 = *param_3;
  pcRam0000000000171160 = param_1;
  if ((param_2 & 1) == 0) {
    xVar2 = 0x22b66 /* "scene: depth upgrade off ([Debug] SceneDepthTexture = 0)" */;
  }
  else {
    rq__Listen_plt(1,FUN_00091850);
    rq__ListenSelect_plt(FUN_00092184);
    if ((char)uRam00000000000d8da8 == '\x01') {
      iVar1 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2c020 /* "glBindTexture" */);
      if (iVar1 == 0) {
        uRam00000000000d8da8 = uRam00000000000d8da8 & 0xffffffffffffff00;
        (*pcRam0000000000171160)(1,0x296d7 /* "scene: HDR off - glBindTexture not imported by the game (its post effe..." */);
      }
      else {
        (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0x38))
                  ((int8 *)*pxRam00000000000d31f8,iVar1,xRam00000000000d3830,pxRam00000000000d3838);
        xVar2 = 0x22b9f /* "R11G11B10F" */;
        if (uRam00000000000d8da8._4_4_ != 1) {
          xVar2 = 0x320cc /* "RGBA16F" */;
        }
        (*pcRam0000000000171160)(0,0x2bdfe /* "scene: HDR on - %s scene target (glBindTexture hooked for the game's o..." */,xVar2);
      }
    }
    xVar2 = 0x29e87 /* "scene: depth upgrade on - our 24-bit depth texture on the scene target..." */;
  }
  (*pcRam0000000000171160)(0,xVar2);
  return param_2 & 1;
}

