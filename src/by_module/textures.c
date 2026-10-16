/* module: textures  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x755fc  size=404  textures::Install(void (*)(bool, char const*, ...), textures::Settings const&)  [_ZN8textures7InstallEPFvbPKczERKNS_8SettingsE] */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

xunknown8 textures__Install(code *param_1,uint1 *param_2)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  int8 iVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  
  pxVar1 = pxRam00000000000d31f8;
  xRam00000000000d8c5c = *(xunknown8 *)param_2;
  _cRam00000000000d8c64 = *(xunknown2 *)(param_2 + 8);
  pcRam000000000010c030 = param_1;
  if ((*param_2 & 1) == 0) {
    xVar5 = 0x23b81 /* "textures: off ([Textures] Enable = 0)" */;
    xVar4 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    if (iVar2 != 0) {
      iVar3 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x3fdd2 /* "_Z27RQ_Command_rqTextureMipModeRPc" */);
      iVar2 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x39412 /* "_Z23RQ_Command_rqTextureMipRPc" */);
      if ((iVar3 != 0) && (iVar2 != 0)) {
        boot__PrologueOk_plt(iVar3,0x3fdd2 /* "_Z27RQ_Command_rqTextureMipModeRPc" */,0x2ea24 /* "hooked anyway (used since 0.8)" */);
        boot__PrologueOk_plt(iVar2,0x39412 /* "_Z23RQ_Command_rqTextureMipRPc" */,0x2ea24 /* "hooked anyway (used since 0.8)" */);
        (**(code **)(*(int8 *)*pxVar1 + 0x30))
                  ((int8 *)*pxVar1,iVar3,xRam00000000000d3678,pxRam00000000000d3680);
        (**(code **)(*(int8 *)*pxVar1 + 0x30))
                  ((int8 *)*pxVar1,iVar2,xRam00000000000d3688,pxRam00000000000d3690);
        (*pcRam000000000010c030)(0,0x30466 /* "textures: trilinear %d, anisotropy %dx, generate missing mips %d" */,param_2[9],*(xunknown4 *)(param_2 + 4),param_2[8]);
        return 1;
      }
    }
    xVar5 = 0x38c78 /* "textures: RQ texture commands missing - off" */;
    xVar4 = 1;
  }
  (*pcRam000000000010c030)(xVar4,xVar5);
  return 0;
}

