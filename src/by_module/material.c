/* module: material  (3 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x7a95c  size=12  material::Class0()  [_ZN8material6Class0Ev] */
xunknown4 material__Class0(void)

{
  return xRam000000000010c2b0;
}

/* 0x7a968  size=140  material::CountDraw(float)  [_ZN8material9CountDrawEf] */
void material__CountDraw(float4 param_1)

{
  xunknown8 xVar1;
  
  FUN_000c53a0(1,0x11c2d0);
  if (-1 < (int4)uRam00000000000d8c88) {
    FUN_000c53a0(1,(int8)iRam000000000011c2b4 * 0x8000 + 0x10c2b4 + (uint8)uRam00000000000d8c88 * 4)
    ;
  }
  if (param_1 <= 1.5) {
    if (param_1 <= 0.5) {
      return;
    }
    xVar1 = 0x11c2d8;
  }
  else {
    xVar1 = 0x11c2d4;
  }
  FUN_000c53a0(1,xVar1);
  return;
}

/* 0x7a9f4  size=256  material::Install(void (*)(bool, char const*, ...))  [_ZN8material7InstallEPFvbPKczE] */
xunknown8 material__Install(code *param_1)

{
  xunknown8 *pxVar1;
  bool bVar2;
  bool bVar3;
  int8 iVar4;
  int8 *piVar5;
  
  pxVar1 = pxRam00000000000d31f8;
  pcRam000000000011c2b8 = param_1;
  iVar4 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                    ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
  if (iVar4 == 0) {
    bVar3 = false;
    bVar2 = false;
    iRam000000000011c2c0 = 0;
    iRam000000000011c2c8 = 0;
  }
  else {
    piVar5 = (int8 *)*pxVar1;
    iRam000000000011c2c0 = (**(code **)(*piVar5 + 0x28))(piVar5,iVar4,0x3feab /* "_ZN22TextureDatabaseRuntime10registeredE" */);
    piVar5 = (int8 *)*pxVar1;
    iRam000000000011c2c8 = (**(code **)(*piVar5 + 0x28))(piVar5,iVar4,0x28ebf /* "RasterExtOffset" */);
    bVar2 = iRam000000000011c2c0 != 0;
    bVar3 = iRam000000000011c2c8 != 0;
    if ((iRam000000000011c2c8 != 0) && (iRam000000000011c2c0 != 0)) {
      frame__OnPostBeginGame_plt(FUN_0007aaf4);
      return 1;
    }
  }
  (*pcRam000000000011c2b8)(1,0x3fed4 /* "material: texture database %d / RasterExtOffset %d symbols missing - g..." */,bVar2,bVar3);
  return 0;
}

