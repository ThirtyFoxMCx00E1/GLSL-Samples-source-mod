/* module: budget  (4 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x9474c  size=104  budget::GpuMs(budget::Gpu, double)  [_ZN6budget5GpuMsENS_3GpuEd] */
void budget__GpuMs(float8 param_1,uint4 param_2)

{
  int4 iVar1;
  int4 iVar2;
  int8 iVar3;
  float8 fVar4;
  
  if ((0.0 <= param_1) && (param_1 < 200.0)) {
    iVar3 = (uint8)param_2 * 4;
    fVar4 = *(float8 *)((uint8)param_2 * 8 + 0x171fe0);
    iVar1 = *(int4 *)(iVar3 + 0x1717a0);
    *(float8 *)((uint8)param_2 * 8 + 0x171740) =
         param_1 + *(float8 *)((uint8)param_2 * 8 + 0x171740);
    iVar2 = *(int4 *)(iVar3 + 0x172040);
    *(float8 *)((uint8)param_2 * 8 + 0x171fe0) = param_1 + fVar4;
    *(int4 *)(iVar3 + 0x1717a0) = iVar1 + 1;
    *(int4 *)(iVar3 + 0x172040) = iVar2 + 1;
  }
  return;
}

/* 0x947b4  size=140  budget::PostFrame(double const*)  [_ZN6budget9PostFrameEPKd] */
void budget__PostFrame(int8 param_1)

{
  int4 iVar1;
  int4 iVar2;
  bool bVar3;
  int8 iVar4;
  uint8 uVar5;
  int8 iVar6;
  float8 fVar7;
  
  iVar4 = 0;
  do {
    fVar7 = *(float8 *)(param_1 + iVar4 * 8);
    bVar3 = false;
    if ((0.0 <= fVar7) && (bVar3 = false, !NAN(fVar7))) {
      bVar3 = fVar7 < 200.0;
    }
    if (bVar3) {
      uVar5 = (uint8)*(uint4 *)(iVar4 * 4 + 0x41a7c);
      iVar6 = uVar5 * 4;
      iVar1 = *(int4 *)(iVar6 + 0x1717a0);
      iVar2 = *(int4 *)(iVar6 + 0x172040);
      *(float8 *)(uVar5 * 8 + 0x171740) = fVar7 + *(float8 *)(uVar5 * 8 + 0x171740);
      *(float8 *)(uVar5 * 8 + 0x171fe0) = fVar7 + *(float8 *)(uVar5 * 8 + 0x171fe0);
      *(int4 *)(iVar6 + 0x1717a0) = iVar1 + 1;
      *(int4 *)(iVar6 + 0x172040) = iVar2 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 9);
  return;
}

/* 0x94840  size=84  budget::CpuMs(budget::Cpu, double)  [_ZN6budget5CpuMsENS_3CpuEd] */
void budget__CpuMs(float8 param_1,uint8 param_2)

{
  int8 iVar1;
  
  if ((0.0 <= param_1) && (param_1 < 1000.0)) {
    iVar1 = (param_2 & 0xffffffff) * 8;
    *(float8 *)(iVar1 + 0x1717d0) = param_1 + *(float8 *)(iVar1 + 0x1717d0);
    *(float8 *)(iVar1 + 0x172070) = param_1 + *(float8 *)(iVar1 + 0x172070);
  }
  return;
}

/* 0x94894  size=104  budget::Install(void (*)(bool, char const*, ...))  [_ZN6budget7InstallEPFvbPKczE] */
void budget__Install(code *param_1)

{
  pcRam0000000000172880 = param_1;
  memset(0x171740,0,0x8a0);
  memset(0x171fe0,0,0x8a0);
  rq__Listen_plt(4,FUN_000948fc);
                    /* WARNING: Could not recover jumptable at 0x000948f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000000172880)(0,0x32be4 /* "budget: on - one 'budget:' line every ~10 s of play (GPU / CPU ms per ..." */);
  return;
}

