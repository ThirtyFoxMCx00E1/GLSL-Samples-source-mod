/* module: grading  (3 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x6c750  size=1412  grading::Compute(grading::Inputs const&, float)  [_ZN7grading7ComputeERKNS_6InputsEf] */
void grading__Compute(xunknown8 *param_1,float4 param_2,xunknown4 *param_3)

{
  int8 iVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint4 uVar5;
  xunknown4 xVar6;
  float4 fVar7;
  float4 fVar8;
  float4 fVar9;
  xunknown8 xVar10;
  float4 fVar11;
  float4 fVar12;
  xunknown8 xVar13;
  float4 fVar14;
  xunknown8 xVar15;
  float4 fVar16;
  float4 fVar17;
  float4 fVar18;
  xunknown8 xVar19;
  float4 fVar20;
  float4 fVar21;
  float4 fVar22;
  float4 fVar23;
  xunknown1 axVar24 [16];
  float4 fVar25;
  xunknown8 xVar26;
  float4 fVar27;
  xunknown1 axVar28 [16];
  float4 fVar29;
  float4 fVar30;
  float4 fVar31;
  float4 fVar32;
  float4 fVar33;
  float4 fVar34;
  float4 fVar35;
  float4 fVar36;
  float4 fVar37;
  xunknown8 xVar38;
  float4 fVar39;
  float4 fVar40;
  float4 fVar41;
  
  xVar6 = *param_3;
  *(xunknown4 *)((int8)param_1 + 0x2c) = 0;
  fVar7 = (float4)fmodf(xVar6,0x41c00000);
  uVar5 = 0;
  fVar17 = fVar7 + 24.0;
  if (0.0 <= fVar7) {
    fVar17 = fVar7;
  }
  if (4.5 <= fVar17) {
    if (6.0 <= fVar17) {
      if (8.0 <= fVar17) {
        if (12.0 <= fVar17) {
          if (16.0 <= fVar17) {
            if (18.5 <= fVar17) {
              if (20.0 <= fVar17) {
                if (21.5 <= fVar17) {
                  uVar5 = 8;
                }
                else {
                  uVar5 = 7;
                }
              }
              else {
                uVar5 = 6;
              }
            }
            else {
              uVar5 = 5;
            }
          }
          else {
            uVar5 = 4;
          }
        }
        else {
          uVar5 = 3;
        }
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  iVar1 = (uint8)uVar5 * 0x30;
  fVar25 = 0.0;
  iVar2 = (uint8)(uVar5 + 1) * 0x30;
  fVar7 = 0.0;
  fVar30 = 0.0;
  fVar27 = 0.0;
  fVar35 = 0.0;
  fVar29 = 0.0;
  fVar33 = *(float4 *)(iVar1 + 0x41590);
  fVar31 = *(float4 *)(iVar1 + 0x41594);
  fVar16 = *(float4 *)(iVar1 + 0x41598);
  fVar39 = *(float4 *)(iVar1 + 0x415ac);
  xVar38 = *(xunknown8 *)(iVar2 + 0x4158c);
  xVar26 = *(xunknown8 *)(iVar2 + 0x415a4);
  fVar32 = *(float4 *)(iVar2 + 0x41594);
  fVar18 = *(float4 *)(iVar2 + 0x41598);
  xVar19 = *(xunknown8 *)(iVar2 + 0x4159c);
  fVar40 = *(float4 *)(iVar2 + 0x415ac);
  fVar8 = (fVar17 - *(float4 *)(iVar1 + 0x41588)) /
          (*(float4 *)(iVar2 + 0x41588) - *(float4 *)(iVar1 + 0x41588));
  fVar17 = 1.0;
  if (fVar8 <= 1.0) {
    fVar17 = fVar8;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar8) {
    fVar20 = fVar17;
  }
  xVar15 = *(xunknown8 *)(iVar1 + 0x4158c);
  fVar8 = (float4)*(xunknown8 *)(iVar1 + 0x415b0);
  fVar34 = (float4)((uint8)*(xunknown8 *)(iVar1 + 0x415b0) >> 0x20);
  xVar13 = *(xunknown8 *)(iVar1 + 0x415a4);
  fVar17 = fVar20 * fVar20 * (fVar20 * -2.0 + 3.0);
  xVar10 = *(xunknown8 *)(iVar1 + 0x4159c);
  uVar5 = param_3[1] - 2;
  *(uint8 *)((int8)param_1 + 0x24) =
       CONCAT44(fVar34 + ((float4)((uint8)*(xunknown8 *)(iVar2 + 0x415b0) >> 0x20) - fVar34) *
                         fVar17,fVar8 + ((float4)*(xunknown8 *)(iVar2 + 0x415b0) - fVar8) * fVar17);
  if (uVar5 < 0x12) {
    fVar7 = *(float4 *)((uint8)uVar5 * 4 + 0x41768);
    fVar30 = *(float4 *)((uint8)uVar5 * 4 + 0x417b0);
    fVar27 = *(float4 *)((uint8)uVar5 * 4 + 0x417f8);
    fVar35 = *(float4 *)((uint8)uVar5 * 4 + 0x41840);
    fVar29 = *(float4 *)((uint8)uVar5 * 4 + 0x41888);
  }
  fVar20 = 0.0;
  fVar41 = 0.0;
  fVar8 = 0.0;
  fVar34 = 0.0;
  uVar5 = param_3[2] - 2;
  if (uVar5 < 0x12) {
    fVar25 = *(float4 *)((uint8)uVar5 * 4 + 0x41768);
    fVar20 = *(float4 *)((uint8)uVar5 * 4 + 0x417b0);
    fVar41 = *(float4 *)((uint8)uVar5 * 4 + 0x417f8);
    fVar8 = *(float4 *)((uint8)uVar5 * 4 + 0x41840);
    fVar34 = *(float4 *)((uint8)uVar5 * 4 + 0x41888);
  }
  fVar36 = (float4)param_3[3];
  fVar21 = (float4)param_3[4];
  fVar12 = (float4)xVar13;
  fVar14 = (float4)((uint8)xVar13 >> 0x20);
  fVar9 = (float4)xVar10;
  fVar11 = (float4)((uint8)xVar10 >> 0x20);
  fVar22 = 1.0;
  if (fVar36 <= 1.0) {
    fVar22 = fVar36;
  }
  fVar12 = fVar12 + ((float4)xVar26 - fVar12) * fVar17;
  fVar14 = fVar14 + ((float4)((uint8)xVar26 >> 0x20) - fVar14) * fVar17;
  fVar23 = 0.0;
  fVar37 = fVar23;
  if (0.0 <= fVar36) {
    fVar37 = fVar22;
  }
  fVar9 = fVar9 + ((float4)xVar19 - fVar9) * fVar17;
  fVar11 = fVar11 + ((float4)((uint8)xVar19 >> 0x20) - fVar11) * fVar17;
  fVar16 = fVar16 + fVar17 * (fVar18 - fVar16);
  fVar18 = 1.0;
  if (fVar21 <= 1.0) {
    fVar18 = fVar21;
  }
  fVar7 = fVar7 + fVar37 * (fVar25 - fVar7);
  xVar26 = NEON_fmov(0x3f800000,4);
  fVar25 = fVar23;
  if (0.0 <= fVar21) {
    fVar25 = fVar18;
  }
  fVar27 = fVar27 + fVar37 * (fVar41 - fVar27);
  fVar18 = (fVar30 + fVar37 * (fVar20 - fVar30)) * 0.6;
  if (fVar18 <= fVar25) {
    fVar18 = fVar25;
  }
  fVar30 = (float4)xVar15;
  fVar39 = fVar39 + fVar17 * (fVar40 - fVar39);
  fVar25 = fVar18;
  if (fVar18 <= fVar27) {
    fVar25 = fVar27;
  }
  if (fVar7 <= fVar25) {
    fVar7 = fVar25;
  }
  fVar40 = (float4)((uint8)xVar26 >> 0x20);
  fVar20 = fVar7 * 0.7;
  fVar30 = fVar30 + ((float4)xVar38 - fVar30) * fVar17;
  fVar25 = (float4)((uint8)xVar15 >> 0x20) + ((float4)((uint8)xVar38 >> 0x20) - fVar33) * fVar17;
  fVar35 = fVar35 + fVar37 * (fVar8 - fVar35);
  fVar33 = fVar7 * 0.6;
  fVar12 = fVar12 + ((float4)xVar26 - fVar12) * fVar20;
  fVar14 = fVar14 + (fVar40 - fVar14) * fVar20;
  fVar8 = fVar35 * 0.7;
  fVar39 = fVar39 + fVar20 * (1.0 - fVar39);
  fVar30 = fVar30 + ((float4)xRam0000000000022248 - fVar30) * fVar33;
  fVar25 = fVar25 + ((float4)((uint8)xRam0000000000022248 >> 0x20) - fVar25) * fVar33;
  fVar31 = fVar31 + fVar17 * (fVar32 - fVar31);
  fVar17 = fVar18 * 0.5;
  fVar12 = fVar12 + ((float4)xRam00000000000222d0 - fVar12) * fVar8;
  fVar14 = fVar14 + ((float4)((uint8)xRam00000000000222d0 >> 0x20) - fVar14) * fVar8;
  fVar30 = fVar30 + ((float4)xRam0000000000022208 - fVar30) * fVar17;
  fVar25 = fVar25 + ((float4)((uint8)xRam0000000000022208 >> 0x20) - fVar25) * fVar17;
  fVar39 = fVar39 + fVar8 * (0.86 - fVar39);
  fVar31 = fVar31 + fVar33 * (1.03 - fVar31);
  fVar33 = fVar14 * 0.7152 + fVar12 * 0.2126 + fVar39 * 0.0722;
  fVar30 = fVar30 + ((float4)xRam0000000000022268 - fVar30) * fVar8;
  fVar25 = fVar25 + ((float4)((uint8)xRam0000000000022268 >> 0x20) - fVar25) * fVar8;
  fVar31 = fVar31 + fVar17 * (1.0609 - fVar31);
  fVar17 = (fVar29 + fVar37 * (fVar34 - fVar29)) * 0.5;
  fVar29 = fVar7 * 0.5;
  fVar30 = fVar30 + ((float4)xRam0000000000022290 - fVar30) * fVar17;
  fVar25 = fVar25 + ((float4)((uint8)xRam0000000000022290 >> 0x20) - fVar25) * fVar17;
  fVar31 = fVar31 + fVar8 * (0.84 - fVar31);
  fVar31 = fVar31 + fVar17 * (0.95 - fVar31);
  fVar8 = fVar25 * 0.7152 + fVar30 * 0.2126 + fVar31 * 0.0722;
  fVar20 = (float4)xRam0000000000022250;
  uVar3 = (uint8)xRam0000000000022250 >> 0x20;
  fVar32 = fVar27 * 0.012;
  fVar17 = 2.0;
  if (param_2 <= 2.0) {
    fVar17 = param_2;
  }
  fVar34 = (float4)xRam0000000000022230;
  uVar4 = (uint8)xRam0000000000022230 >> 0x20;
  if (0.0 <= param_2 && (*(uint1 *)(param_3 + 6) & 1) == 0) {
    fVar23 = fVar17;
  }
  axVar28 = NEON_fmov(0xbf800000,4);
  xVar19 = NEON_fmov(0xbf800000,4);
  *(float4 *)(param_1 + 5) =
       fVar23 * ((fVar27 * -0.1 + 1.0) * (fVar7 * -0.05 + 1.0) * *(float4 *)(param_1 + 5) + -1.0) +
       1.0;
  axVar24 = NEON_fmov(0x3f800000,4);
  param_1[2] = CONCAT44(fVar23 * (fVar32 + (float4)uVar4 * fVar18 +
                                 fVar11 + ((float4)uVar3 - fVar11) * fVar29),
                        fVar23 * (fVar32 + fVar34 * fVar18 + fVar9 + (fVar20 - fVar9) * fVar29));
  *(float4 *)(param_1 + 1) = fVar23 * (fVar31 / fVar8 + -1.0) + 1.0;
  *(float4 *)((int8)param_1 + 0xc) =
       fVar23 * (fVar32 + fVar18 * 0.0 + fVar16 + fVar29 * (0.004 - fVar16));
  *(float4 *)(param_1 + 4) = axVar24._8_4_ + (fVar39 / fVar33 + axVar28._8_4_) * fVar23;
  *(float4 *)((int8)param_1 + 0x24) =
       axVar24._12_4_ +
       ((fVar35 * -0.1 + 1.0) * (fVar18 * -0.12 + 1.0) * (fVar7 * -0.15 + 1.0) *
        *(float4 *)((int8)param_1 + 0x24) + axVar28._12_4_) * fVar23;
  *(float4 *)(param_1 + 3) = axVar24._0_4_ + (fVar12 / fVar33 + axVar28._0_4_) * fVar23;
  *(float4 *)((int8)param_1 + 0x1c) = axVar24._4_4_ + (fVar14 / fVar33 + axVar28._4_4_) * fVar23;
  *param_1 = CONCAT44(fVar40 + fVar23 * (fVar25 / fVar8 + (float4)((uint8)xVar19 >> 0x20)),
                      (float4)xVar26 + fVar23 * (fVar30 / fVar8 + (float4)xVar19));
  *(bool *)((int8)param_1 + 0x2c) = 0.0 < fVar23;
  return;
}

/* 0x6ccd4  size=620  grading::Install(void (*)(bool, char const*, ...), bool, float)  [_ZN7grading7InstallEPFvbPKczEbf] */
void grading__Install(float4 param_1,code *param_2,uint1 param_3)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  
  pxVar1 = pxRam00000000000d31f8;
  uRam000000000010be90 = param_3 & 0.0 < param_1;
  fRam00000000000d8bc4 = param_1;
  pcRam000000000010be88 = param_2;
  if (uRam000000000010be90 == 0) {
    xVar4 = 0x2dd32 /* "grading: off ([Grading] Enable / Strength) - the fixed [Post] grade on..." */;
    xVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    if (iVar2 != 0) {
      iRam000000000010be98 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x32432 /* "_ZN6CClock18ms_nGameClockHoursE" */);
      iRam000000000010bea0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x36414 /* "_ZN6CClock20ms_nGameClockMinutesE" */);
      iRam000000000010bea8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x292e1 /* "_ZN8CWeather14OldWeatherTypeE" */);
      iRam000000000010beb0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x2cdd4 /* "_ZN8CWeather14NewWeatherTypeE" */);
      iRam000000000010beb8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x303dd /* "_ZN8CWeather18InterpolationValueE" */);
      xRam000000000010bec0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x32316 /* "_ZN8CWeather4RainE" */);
      xRam000000000010bec8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x25caf /* "_ZN8CWeather9FoggynessE" */);
      xRam000000000010bed0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,0x30f9e /* "_ZN5CGame8currAreaE" */);
    }
    if ((iRam000000000010be98 != 0) && (iRam000000000010bea0 != 0)) {
      xVar3 = 0x32452 /* "weather symbols missing: rain / fog amounts only" */;
      if (iRam000000000010beb8 != 0) {
        xVar3 = 0x38848 /* "cloud / rain / fog / sandstorm / smog" */;
      }
      if (iRam000000000010beb0 == 0 || iRam000000000010bea8 == 0) {
        xVar3 = 0x32452 /* "weather symbols missing: rain / fog amounts only" */;
      }
                    /* WARNING: Could not recover jumptable at 0x0006cef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000010be88)((float8)param_1,0,0x2dd7b /* "grading: on, strength %.2f - look follows the game clock (night / dawn..." */,xVar3);
      return;
    }
    xVar4 = 0x405e1 /* "grading: game clock symbols missing - off" */;
    xVar3 = 1;
  }
  uRam000000000010be90 = 0;
                    /* WARNING: Could not recover jumptable at 0x0006cf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000010be88)(xVar3,xVar4);
  return;
}

/* 0x6cf40  size=828  grading::Frame(grading::Params&)  [_ZN7grading5FrameERNS_6ParamsE] */
uint8 grading__Frame(float4 *param_1)

{
  bool bVar1;
  int4 iVar2;
  xunknown8 xVar3;
  uint1 uVar4;
  uint1 uVar5;
  int8 iVar6;
  uint8 uVar7;
  uint4 uVar8;
  int4 iVar9;
  int4 iVar10;
  uint4 uVar11;
  float4 fVar12;
  float4 fVar13;
  float4 fVar14;
  float4 fVar15;
  float4 fStack_c4;
  int4 iStack_c0;
  int4 iStack_bc;
  float4 fStack_b8;
  float4 fStack_b4;
  float4 fStack_b0;
  uint4 uStack_ac;
  xunknown8 xStack_a8;
  xunknown8 xStack_a0;
  xunknown8 xStack_98;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  int8 iStack_78;
  
  iVar6 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar6 + 0x28);
  if (uRam000000000010be90 == '\x01') {
    uVar4 = *iRam000000000010bea0;
    uVar5 = *iRam000000000010be98;
    fVar12 = (float4)uVar4 / 60.0;
    fVar13 = (float4)uVar5;
    if (0x17 < uVar5) {
      fVar13 = 12.0;
    }
    if (0x3b < uVar4) {
      fVar12 = 0.0;
    }
    fVar13 = fVar13 + fVar12;
    if (iRam000000000010bea8 == (int2 *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = (int4)*iRam000000000010bea8;
    }
    if (iRam000000000010beb0 == (int2 *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (int4)*iRam000000000010beb0;
    }
    fVar12 = 0.0;
    fVar14 = 0.0;
    if (iRam000000000010beb8 != (float4 *)0x0) {
      fVar14 = *iRam000000000010beb8;
    }
    if (xRam000000000010bec0 != (float4 *)0x0) {
      fVar12 = *xRam000000000010bec0;
    }
    if (xRam000000000010bec8 == (float4 *)0x0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = *xRam000000000010bec8;
    }
    if (xRam000000000010bed0 == (char *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint4)(*xRam000000000010bed0 != '\0');
    }
    fStack_c4 = fVar13;
    iStack_c0 = iVar9;
    iStack_bc = iVar10;
    fStack_b8 = fVar14;
    fStack_b4 = fVar12;
    fStack_b0 = fVar15;
    uStack_ac = uVar11;
    grading__Compute_plt(&xStack_a8,fRam00000000000d8bc4,&fStack_c4);
    *(xunknown8 *)(param_1 + 2) = xStack_a0;
    *(xunknown8 *)param_1 = xStack_a8;
    *(xunknown8 *)(param_1 + 6) = xStack_90;
    *(xunknown8 *)(param_1 + 4) = xStack_98;
    iVar2 = iRam000000000010bed8 + 1;
    *(xunknown8 *)(param_1 + 10) = xStack_80;
    *(xunknown8 *)(param_1 + 8) = xStack_88;
    bVar1 = 0x706 < iRam000000000010bed8;
    iRam000000000010bed8 = iVar2;
    if ((bVar1) && (iRam000000000010bedc < 0x28)) {
      uVar8 = 0;
      iRam000000000010bed8 = 0;
      iRam000000000010bedc = iRam000000000010bedc + 1;
      if (4.5 <= fVar13) {
        if (6.0 <= fVar13) {
          if (8.0 <= fVar13) {
            if (12.0 <= fVar13) {
              if (16.0 <= fVar13) {
                if (18.5 <= fVar13) {
                  if (20.0 <= fVar13) {
                    if (21.5 <= fVar13) {
                      uVar8 = 8;
                    }
                    else {
                      uVar8 = 7;
                    }
                  }
                  else {
                    uVar8 = 6;
                  }
                }
                else {
                  uVar8 = 5;
                }
              }
              else {
                uVar8 = 4;
              }
            }
            else {
              uVar8 = 3;
            }
          }
          else {
            uVar8 = 2;
          }
        }
        else {
          uVar8 = 1;
        }
      }
      xVar3 = 0x39c34 /* ", INTERIOR (neutral)" */;
      if (uVar11 == 0) {
        xVar3 = 0x29893;
      }
      (*pcRam000000000010be88)
                ((float8)fVar14,(float8)fVar12,(float8)fVar15,(float8)*param_1,(float8)param_1[1],
                 (float8)param_1[2],(float8)param_1[3],(float8)param_1[4],0,0x34260 /* "grading: %02d:%02d (%s -> %s), weather %d -> %d at %.2f, rain %.2f fog..." */,uVar5,uVar4,
                 *(xunknown8 *)((uint8)uVar8 * 8 + 0xcee08),
                 *(xunknown8 *)((uint8)(uVar8 + 1) * 8 + 0xcee08),iVar9,iVar10,xVar3,
                 (float8)param_1[5],(float8)param_1[6],(float8)param_1[7],(float8)param_1[8],
                 (float8)param_1[9],(float8)param_1[10]);
    }
    uVar11 = (uint4)*(uint1 *)(param_1 + 0xb);
  }
  else {
    uVar11 = 0;
  }
  if (*(int8 *)(iVar6 + 0x28) == iStack_78) {
    return (uint8)(uVar11 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*got___stack_chk_fail)();
  return uVar7;
}

