/* module: trace  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x92efc  size=660  trace::Install(void (*)(bool, char const*, ...))  [_ZN5trace7InstallEPFvbPKczE] */
xunknown8 trace__Install(code *param_1)

{
  xunknown8 *pxVar1;
  xunknown8 xVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 *piVar5;
  
  pxVar1 = pxRam00000000000d31f8;
  pcRam0000000000171208 = param_1;
  xVar2 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                    ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
  xVar4 = 0x2dab9 /* "_Z24RQ_Command_rqTargetClearRPc" */;
  iVar3 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x2dab9 /* "_Z24RQ_Command_rqTargetClearRPc" */);
  if (iVar3 != 0) {
    xVar4 = 0x2eb0f /* "_Z27RQ_Command_rqTargetViewportRPc" */;
    iVar3 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x2eb0f /* "_Z27RQ_Command_rqTargetViewportRPc" */);
    if (iVar3 != 0) {
      xVar4 = 0x40386 /* "_Z24RQ_Command_rqDrawIndexedRPc" */;
      iVar3 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x40386 /* "_Z24RQ_Command_rqDrawIndexedRPc" */);
      if (iVar3 != 0) {
        xVar4 = 0x2d86c /* "_Z27RQ_Command_rqDrawNonIndexedRPc" */;
        iVar3 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar2,0x2d86c /* "_Z27RQ_Command_rqDrawNonIndexedRPc" */);
        if (iVar3 != 0) {
          piVar5 = (int8 *)*pxVar1;
          xVar4 = (**(code **)(*piVar5 + 0x28))(piVar5,xVar2,0x2dab9 /* "_Z24RQ_Command_rqTargetClearRPc" */);
          (**(code **)(*piVar5 + 0x30))(piVar5,xVar4,xRam00000000000d3840,pxRam00000000000d3848);
          piVar5 = (int8 *)*pxVar1;
          xVar4 = (**(code **)(*piVar5 + 0x28))(piVar5,xVar2,0x2eb0f /* "_Z27RQ_Command_rqTargetViewportRPc" */);
          (**(code **)(*piVar5 + 0x30))(piVar5,xVar4,xRam00000000000d3850,pxRam00000000000d3858);
          piVar5 = (int8 *)*pxVar1;
          xVar4 = (**(code **)(*piVar5 + 0x28))(piVar5,xVar2,0x40386 /* "_Z24RQ_Command_rqDrawIndexedRPc" */);
          (**(code **)(*piVar5 + 0x30))(piVar5,xVar4,xRam00000000000d3860,pxRam00000000000d3868);
          piVar5 = (int8 *)*pxVar1;
          xVar2 = (**(code **)(*piVar5 + 0x28))(piVar5,xVar2,0x2d86c /* "_Z27RQ_Command_rqDrawNonIndexedRPc" */);
          (**(code **)(*piVar5 + 0x30))(piVar5,xVar2,xRam00000000000d3870,pxRam00000000000d3878);
          rq__ListenSelect_plt(FUN_00093190);
          rq__Listen_plt(1,FUN_00093204);
          rq__Listen_plt(2,FUN_00093204);
          rq__Listen_plt(3,FUN_00093204);
          rq__Listen_plt(4,FUN_00093204);
          rq__Listen_plt(5,FUN_00093204);
          rq__Listen_plt(6,FUN_00093204);
          rq__Listen_plt(7,FUN_00093204);
          (*pcRam0000000000171208)(0,0x2bed3 /* "trace: on - records 3 frames ~10 s after rendering starts" */);
          return 1;
        }
      }
    }
  }
  (*pcRam0000000000171208)(1,0x26443 /* "trace: %s missing - off" */,xVar4);
  return 0;
}

