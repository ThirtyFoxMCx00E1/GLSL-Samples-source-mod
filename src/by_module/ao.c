/* module: ao  (6 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x66888  size=236  ao::Setup(void (*)(bool, char const*, ...), ao::Settings const&)  [_ZN2ao5SetupEPFvbPKczERKNS_8SettingsE] */
void ao__Setup(code *UNRECOVERED_JUMPTABLE,uint8 *param_2)

{
  xunknown8 xVar1;
  int4 iVar2;
  xunknown8 xVar3;
  float4 fVar4;
  
  uRam00000000000d8b00 = param_2[1];
  uRam00000000000d8af8 = *param_2;
  uRam00000000000d8b10 = param_2[3];
  uRam00000000000d8b08 = param_2[2];
  pcRam00000000000d9a50 = UNRECOVERED_JUMPTABLE;
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00066920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0,0x23a1d /* "ao: off - [AO] Enable = 0 in zyzgfx.ini" */);
    return;
  }
  fVar4 = *(float4 *)((int8)param_2 + 4);
  if (fVar4 <= 0.0) {
    uRam00000000000d8af8 = uRam00000000000d8af8 & 0xffffffffffffff00;
                    /* WARNING: Could not recover jumptable at 0x0006693c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((float8)fVar4,0,0x28033 /* "ao: off - [AO] Strength = %.2f in zyzgfx.ini" */);
    return;
  }
  iVar2 = *(int4 *)((int8)param_2 + 0x14);
  xVar1 = 0x2ccbd /* "quarter" */;
  if (*(int4 *)((int8)param_2 + 0x1c) != 4) {
    xVar1 = 0x38598 /* "half" */;
  }
  if (iVar2 == 1) {
    xVar3 = 0x3f496 /* ", DEBUG VIEW 1 (raw AO buffer)" */;
  }
  else if (iVar2 == 2) {
    xVar3 = 0x40562 /* ", DEBUG VIEW 2 (reconstructed distance)" */;
  }
  else {
    xVar3 = 0x4058a /* ", DEBUG VIEW 3 (distance bands)" */;
    if (iVar2 != 3) {
      xVar3 = 0x29893;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00066970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((float8)*(float4 *)(param_2 + 3),(float8)fVar4,(float8)*(float4 *)(param_2 + 1),
             (float8)*(float4 *)((int8)param_2 + 0xc),(float8)*(float4 *)(param_2 + 2),0,0x260c2 /* "ao: on - %s res, temporal %.2f, strength %.2f, radius %.2f m, intensit..." */,
             xVar1,xVar3);
  return;
}

/* 0x66974  size=12  ao::Enabled()  [_ZN2ao7EnabledEv] */
xunknown1 ao__Enabled(void)

{
  return (xunknown1)uRam00000000000d8af8;
}

/* 0x66980  size=12  ao::Strength()  [_ZN2ao8StrengthEv] */
xunknown4 ao__Strength(void)

{
  return uRam00000000000d8af8._4_4_;
}

/* 0x6698c  size=12  ao::Debug()  [_ZN2ao5DebugEv] */
xunknown4 ao__Debug(void)

{
  return uRam00000000000d8b08._4_4_;
}

/* 0x66998  size=4760  ao::Render(int, int, unsigned int)  [_ZN2ao6RenderEiij] */
void ao__Render(int4 param_1,int4 param_2,xunknown4 param_3)

{
  bool bVar1;
  xunknown8 xVar2;
  int4 iVar3;
  int4 iVar4;
  int8 iVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  xunknown8 *pxVar8;
  xunknown8 *pxVar9;
  uint8 uVar10;
  uint8 uVar11;
  int4 iVar12;
  xunknown4 *pxVar13;
  code *pcVar14;
  xunknown4 *pxVar15;
  float4 fVar16;
  float4 fVar17;
  float4 fVar18;
  float8 fVar19;
  xunknown4 xVar20;
  float8 fVar21;
  float8 fVar22;
  float8 fVar23;
  float8 fVar24;
  float8 fVar25;
  float8 fVar26;
  float8 fVar27;
  float8 fVar28;
  float8 fVar29;
  float8 fVar30;
  float8 fVar31;
  float8 fVar32;
  float8 fVar33;
  float8 fVar34;
  float8 fVar35;
  float8 fVar36;
  float8 fVar37;
  float8 fVar38;
  float8 fVar39;
  float8 fVar40;
  float8 fVar41;
  float8 fVar42;
  float8 fVar43;
  float8 fVar44;
  float8 fVar45;
  xunknown4 xStack_390;
  float4 fStack_38c;
  float4 fStack_388;
  float4 fStack_384;
  float4 fStack_380;
  float4 fStack_37c;
  float4 fStack_378;
  float4 fStack_374;
  float4 fStack_370;
  float4 fStack_36c;
  float4 fStack_368;
  float4 fStack_364;
  float4 fStack_360;
  float4 fStack_35c;
  float4 fStack_358;
  float4 fStack_354;
  float4 fStack_350;
  xunknown1 axStack_34c [12];
  xunknown1 axStack_340 [64];
  xunknown8 xStack_300;
  xunknown8 xStack_2f8;
  xunknown8 xStack_2f0;
  xunknown8 xStack_2e8;
  xunknown8 xStack_2e0;
  xunknown8 xStack_2d8;
  xunknown8 xStack_2d0;
  xunknown8 xStack_2c8;
  xunknown8 xStack_2c0;
  xunknown8 xStack_2b8;
  float8 fStack_260;
  float8 fStack_258;
  float8 fStack_250;
  float8 fStack_240;
  float8 fStack_238;
  float8 fStack_230;
  float8 fStack_228;
  float8 fStack_220;
  float8 fStack_218;
  float8 fStack_210;
  float8 fStack_208;
  float8 fStack_200;
  float8 fStack_1f8;
  float8 fStack_1f0;
  float8 fStack_1e8;
  float8 fStack_1e0;
  float8 fStack_1d8;
  float8 fStack_1d0;
  float8 fStack_1c8;
  float8 fStack_1c0;
  float8 fStack_1b8;
  float8 fStack_1b0;
  float8 fStack_1a8;
  float8 fStack_1a0;
  float8 fStack_198;
  float8 fStack_190;
  float8 fStack_188;
  float8 fStack_180;
  float8 fStack_178;
  float8 fStack_170;
  float8 fStack_168;
  float8 fStack_160;
  float8 fStack_158;
  float8 fStack_150;
  float8 fStack_148;
  float8 fStack_140;
  float8 fStack_138;
  float8 fStack_130;
  float8 fStack_128;
  float8 fStack_120;
  float8 fStack_118;
  float8 fStack_110;
  float8 fStack_108;
  float8 fStack_100;
  float8 fStack_f8;
  float8 fStack_f0;
  float8 fStack_e8;
  float8 fStack_e0;
  float8 fStack_d8;
  float8 fStack_d0;
  float8 fStack_c8;
  int8 iStack_b8;
  
  iVar5 = tpidr_el0;
  uVar10 = 0;
  iStack_b8 = *(int8 *)(iVar5 + 0x28);
  uRam00000000000d9a58 = 0;
  if (((char)uRam00000000000d8af8 == '\x01') && ((uRam00000000000d9a5c & 1) == 0)) {
    if ((*puRam00000000000d3610 & 1) == 0) {
      uVar10 = lights__Camera_plt(&xStack_300,axStack_340,axStack_34c);
      if ((uVar10 & 1) == 0) {
        uVar10 = 0;
        iRam00000000000d9a60 = iRam00000000000d9a60 + 1;
      }
      else {
        fVar37 = (float8)axStack_340._8_4_;
        fStack_128 = (float8)axStack_340._12_4_;
        fVar38 = (float8)axStack_340._0_4_;
        fVar40 = (float8)axStack_340._4_4_;
        fVar43 = (float8)axStack_340._16_4_;
        fVar44 = (float8)axStack_340._20_4_;
        fStack_e0 = (float8)axStack_340._48_4_;
        fStack_d8 = (float8)axStack_340._52_4_;
        fVar41 = (float8)axStack_340._32_4_;
        fVar42 = (float8)axStack_340._36_4_;
        fVar33 = (float8)(float4)xStack_2f0;
        fVar34 = (float8)(float4)((uint8)xStack_2f0 >> 0x20);
        fVar45 = (float8)axStack_340._24_4_;
        fStack_108 = (float8)axStack_340._28_4_;
        fVar30 = (float8)(float4)xStack_2e8;
        fVar32 = (float8)(float4)((uint8)xStack_2e8 >> 0x20);
        fVar26 = (float8)(float4)xStack_300;
        fVar28 = (float8)(float4)((uint8)xStack_300 >> 0x20);
        fVar22 = (float8)(float4)xStack_2f8;
        fVar24 = (float8)(float4)((uint8)xStack_2f8 >> 0x20);
        fStack_d0 = (float8)axStack_340._56_4_;
        fStack_c8 = (float8)axStack_340._60_4_;
        fVar39 = (float8)axStack_340._40_4_;
        fStack_e8 = (float8)axStack_340._44_4_;
        iVar12 = uRam00000000000d8b10._4_4_;
        if (uRam00000000000d8b10._4_4_ != 4) {
          iVar12 = 2;
        }
        fVar35 = (float8)(float4)xStack_2e0;
        fVar36 = (float8)(float4)((uint8)xStack_2e0 >> 0x20);
        fVar27 = (float8)(float4)xStack_2d8;
        fVar29 = (float8)(float4)((uint8)xStack_2d8 >> 0x20);
        fVar21 = (float8)(float4)xStack_2d0;
        fVar19 = (float8)(float4)((uint8)xStack_2d0 >> 0x20);
        fVar23 = (float8)(float4)xStack_2c8;
        fVar25 = (float8)(float4)((uint8)xStack_2c8 >> 0x20);
        fStack_1c0 = fVar26 * fVar38 + 0.0 + fVar33 * fVar40 + fVar35 * fVar37 + fVar21 * fStack_128
        ;
        fStack_1b8 = fVar28 * fVar38 + 0.0 + fVar34 * fVar40 + fVar36 * fVar37 + fVar19 * fStack_128
        ;
        fStack_1b0 = fVar22 * fVar38 + 0.0 + fVar30 * fVar40 + fVar27 * fVar37 + fVar23 * fStack_128
        ;
        fStack_1a8 = fVar24 * fVar38 + 0.0 + fVar32 * fVar40 + fVar29 * fVar37 + fVar25 * fStack_128
        ;
        fStack_1a0 = fVar26 * fVar43 + 0.0 + fVar33 * fVar44 + fVar35 * fVar45 + fVar21 * fStack_108
        ;
        fStack_198 = fVar28 * fVar43 + 0.0 + fVar34 * fVar44 + fVar36 * fVar45 + fVar19 * fStack_108
        ;
        fStack_190 = fVar22 * fVar43 + 0.0 + fVar30 * fVar44 + fVar27 * fVar45 + fVar23 * fStack_108
        ;
        fStack_188 = fVar24 * fVar43 + 0.0 + fVar32 * fVar44 + fVar29 * fVar45 + fVar25 * fStack_108
        ;
        fStack_180 = fVar26 * fVar41 + 0.0 + fVar33 * fVar42 + fVar35 * fVar39 + fVar21 * fStack_e8;
        fStack_178 = fVar28 * fVar41 + 0.0 + fVar34 * fVar42 + fVar36 * fVar39 + fVar19 * fStack_e8;
        fStack_170 = fVar22 * fVar41 + 0.0 + fVar30 * fVar42 + fVar27 * fVar39 + fVar23 * fStack_e8;
        fStack_168 = fVar24 * fVar41 + 0.0 + fVar32 * fVar42 + fVar29 * fVar39 + fVar25 * fStack_e8;
        fStack_160 = fVar26 * fStack_e0 + 0.0 + fVar33 * fStack_d8 + fVar35 * fStack_d0 +
                     fVar21 * fStack_c8;
        fStack_158 = fVar28 * fStack_e0 + 0.0 + fVar34 * fStack_d8 + fVar36 * fStack_d0 +
                     fVar19 * fStack_c8;
        fStack_150 = fVar22 * fStack_e0 + 0.0 + fVar30 * fStack_d8 + fVar27 * fStack_d0 +
                     fVar23 * fStack_c8;
        fStack_148 = fVar24 * fStack_e0 + 0.0 + fVar32 * fStack_d8 + fVar29 * fStack_d0 +
                     fVar25 * fStack_c8;
        fStack_140 = fVar38;
        fStack_138 = fVar40;
        fStack_130 = fVar37;
        fStack_120 = fVar43;
        fStack_118 = fVar44;
        fStack_110 = fVar45;
        fStack_100 = fVar41;
        fStack_f8 = fVar42;
        fStack_f0 = fVar39;
        uVar10 = FUN_00068c18(&fStack_1c0,&fStack_240);
        if ((uVar10 & 1) != 0) {
          uVar10 = FUN_00068c18(&fStack_140,&xStack_2c0);
          fVar34 = fStack_208;
          fVar33 = fStack_210;
          fVar32 = fStack_218;
          fVar30 = fStack_220;
          fVar28 = fStack_228;
          fVar26 = fStack_230;
          fVar24 = fStack_238;
          fVar22 = fStack_240;
          if ((uVar10 & 1) != 0) {
            fVar21 = fStack_1c8 + fStack_208 * 0.0 + fStack_228 * 0.0 + fStack_1e8 * 0.0;
            if ((((fRam0000000000022260 <= ABS(fVar21)) &&
                 (fVar19 = fStack_1c8 + fStack_228 + fStack_208 * 0.0 + fStack_1e8 * 0.0,
                 fRam0000000000022260 <= ABS(fVar19))) &&
                (fVar23 = fStack_1c8 + fStack_208 + fStack_228 * 0.0 + fStack_1e8 * 0.0,
                fRam0000000000022260 <= ABS(fVar23))) &&
               (fVar25 = fStack_1c8 + (fStack_228 * 0.0 - fStack_208) + fStack_1e8 * 0.0,
               fRam0000000000022260 <= ABS(fVar25))) {
              fVar29 = (fStack_1e0 + fStack_220 * 0.0 + fStack_240 * 0.0 + fStack_200 * 0.0) /
                       fVar21;
              fVar35 = (fStack_1d8 + fStack_218 * 0.0 + fStack_238 * 0.0 + fStack_1f8 * 0.0) /
                       fVar21;
              fVar21 = (fStack_1d0 + fStack_210 * 0.0 + fStack_230 * 0.0 + fStack_1f0 * 0.0) /
                       fVar21;
              fVar27 = fVar29 - fStack_260;
              fVar36 = fVar35 - fStack_258;
              fVar31 = fVar21 - fStack_250;
              fVar27 = SQRT(fVar27 * fVar27 + 0.0 + fVar36 * fVar36 + fVar31 * fVar31);
              if ((fRam0000000000022270 <= fVar27) &&
                 (fVar29 = (fStack_1e0 + fStack_240 + fStack_220 * 0.0 + fStack_200 * 0.0) / fVar19
                           - fVar29,
                 fVar35 = (fStack_1d8 + fStack_238 + fStack_218 * 0.0 + fStack_1f8 * 0.0) / fVar19 -
                          fVar35,
                 fVar21 = (fStack_1d0 + fStack_230 + fStack_210 * 0.0 + fStack_1f0 * 0.0) / fVar19 -
                          fVar21,
                 fVar21 = SQRT(fVar29 * fVar29 + 0.0 + fVar35 * fVar35 + fVar21 * fVar21),
                 fRam0000000000022270 <= fVar21)) {
                iVar3 = 0;
                if (iVar12 != 0) {
                  iVar3 = param_1 / iVar12;
                }
                fVar36 = (fStack_1d8 + fStack_218 + fStack_238 * 0.0 + fStack_1f8 * 0.0) / fVar23 -
                         fStack_258;
                fVar29 = (fStack_1d0 + fStack_210 + fStack_230 * 0.0 + fStack_1f0 * 0.0) / fVar23 -
                         fStack_250;
                fVar35 = (fStack_1e0 + (fStack_240 * 0.0 - fStack_220) + fStack_200 * 0.0) / fVar25
                         - fStack_260;
                fVar23 = (fStack_1e0 + fStack_220 + fStack_240 * 0.0 + fStack_200 * 0.0) / fVar23 -
                         fStack_260;
                fVar31 = (fStack_1d8 + (fStack_238 * 0.0 - fStack_218) + fStack_1f8 * 0.0) / fVar25
                         - fStack_258;
                fVar19 = (fStack_1d0 + (fStack_230 * 0.0 - fStack_210) + fStack_1f0 * 0.0) / fVar25
                         - fStack_250;
                fVar21 = (((float8)iVar3 / 2.0) * fVar27) / fVar21;
                fRam00000000000d9b08 =
                     (float8)acos(SUB84((fVar35 * fVar23 + 0.0 + fVar31 * fVar36 + fVar19 * fVar29)
                                        / SQRT((fVar23 * fVar23 + 0.0 + fVar36 * fVar36 +
                                               fVar29 * fVar29) *
                                               (fVar35 * fVar35 + 0.0 + fVar31 * fVar31 +
                                               fVar19 * fVar19)),0));
                uVar10 = 0;
                fRam00000000000d9ad8 = fStack_260;
                fRam00000000000d9ae0 = fStack_258;
                fRam00000000000d9ae8 = fStack_250;
                fStack_380 = (float4)fVar28;
                fRam00000000000d9c38 = SQRT(fVar43 * fVar43 + fVar38 * fVar38 + fVar41 * fVar41);
                fStack_374 = (float4)(fVar33 - fVar34 * fStack_250);
                fRam00000000000d9b08 = fRam00000000000d9b08 * fRam0000000000022228;
                fRam00000000000d9c40 = SQRT(fVar44 * fVar44 + fVar40 * fVar40 + fVar42 * fVar42);
                fRam00000000000d9c48 = SQRT(fVar45 * fVar45 + fVar37 * fVar37 + fVar39 * fVar39);
                xRam00000000000d9c60 = xStack_2f8;
                xRam00000000000d9c58 = xStack_300;
                xRam00000000000d9c70 = xStack_2e8;
                xRam00000000000d9c68 = xStack_2f0;
                xRam00000000000d9c80 = xStack_2d8;
                xRam00000000000d9c78 = xStack_2e0;
                xRam00000000000d9c90 = xStack_2c8;
                xRam00000000000d9c88 = xStack_2d0;
                fRam00000000000d9bd0 = fStack_198;
                fRam00000000000d9bc8 = fStack_1a0;
                fRam00000000000d9be0 = fStack_188;
                fRam00000000000d9bd8 = fStack_190;
                fRam00000000000d9bb0 = fStack_1b8;
                fRam00000000000d9ba8 = fStack_1c0;
                fRam00000000000d9bc0 = fStack_1a8;
                fRam00000000000d9bb8 = fStack_1b0;
                fRam00000000000d9bf0 = fStack_178;
                fRam00000000000d9be8 = fStack_180;
                fRam00000000000d9c00 = fStack_168;
                fRam00000000000d9bf8 = fStack_170;
                fRam00000000000d9c10 = fStack_158;
                fRam00000000000d9c08 = fStack_160;
                fRam00000000000d9c20 = fStack_148;
                fRam00000000000d9c18 = fStack_150;
                fStack_38c = (float4)(fVar22 - fVar28 * fStack_260);
                fStack_384 = (float4)(fVar26 - fVar28 * fStack_250);
                fStack_388 = (float4)(fVar24 - fVar28 * fStack_258);
                fStack_370 = (float4)fVar34;
                fStack_37c = (float4)(fVar30 - fVar34 * fStack_260);
                fStack_378 = (float4)(fVar32 - fVar34 * fStack_258);
                fStack_360 = (float4)fStack_1e8;
                fStack_36c = (float4)(fStack_200 - fStack_1e8 * fStack_260);
                fStack_368 = (float4)(fStack_1f8 - fStack_1e8 * fStack_258);
                fStack_35c = (float4)(fStack_1e0 - fStack_1c8 * fStack_260);
                fStack_364 = (float4)(fStack_1f0 - fStack_1e8 * fStack_250);
                fStack_358 = (float4)(fStack_1d8 - fStack_1c8 * fStack_258);
                fStack_350 = (float4)fStack_1c8;
                fStack_354 = (float4)(fStack_1d0 - fStack_1c8 * fStack_250);
                fRam00000000000d9c50 = fVar21;
                if ((1.0 < fVar21) && (fVar21 < 1000000.0)) {
                  uVar10 = scene__DepthTexture_plt(0);
                  pxVar6 = pxRam00000000000d3208;
                  if ((int4)uVar10 != 0) {
                    xStack_390 = 0;
                    xStack_2c0 = 0;
                    xStack_2b8 = 0;
                    (*(code *)*pxRam00000000000d3208)(0x8ca6,&xStack_390);
                    (*(code *)*pxVar6)(0xba2,&xStack_2c0);
                    if (((uRam00000000000d9a64 & 1) == 0) &&
                       (uVar11 = FUN_00067c30(), (uVar11 & 1) == 0)) {
                      uRam00000000000d9a5c = 1;
                      (*pcRam00000000000d9a50)(1,0x26d59 /* "ao: shader failed - off" */);
                      uVar10 = 0;
                    }
                    else {
                      iVar12 = uRam00000000000d8b10._4_4_;
                      if (uRam00000000000d8b10._4_4_ != 4) {
                        iVar12 = 2;
                      }
                      iVar3 = 0;
                      if (iVar12 != 0) {
                        iVar3 = param_1 / iVar12;
                      }
                      iVar4 = 0;
                      if (iVar12 != 0) {
                        iVar4 = param_2 / iVar12;
                      }
                      if ((iVar3 != iRam00000000000d9a68) || (iVar4 != iRam00000000000d9a6c)) {
                        cRam00000000000d9a5d = '\0';
                        uVar11 = FUN_00068184(0xd9a70,iVar3,iVar4);
                        if (((uVar11 & 1) == 0) ||
                           (((uVar11 = FUN_00068184(0xd9a78,iVar3,iVar4), (uVar11 & 1) == 0 ||
                             (uVar11 = FUN_00068184(0xd9a80,iVar3,iVar4), (uVar11 & 1) == 0)) ||
                            (uVar11 = FUN_00068308(iVar3,iVar4), (uVar11 & 1) == 0)))) {
                          uRam00000000000d9a5c = 1;
                          (*pcRam00000000000d9a50)(1,0x3f4b5 /* "ao: targets failed - off" */);
                          (*(code *)*pxRam00000000000d3248)(0x8ca9,xStack_390);
                          (*(code *)*pxRam00000000000d3520)
                                    (xStack_2c0 & 0xffffffff,xStack_2c0._4_4_,
                                     xStack_2b8 & 0xffffffff,xStack_2b8._4_4_);
                          uVar10 = 0;
                          goto code_r0x00066d3c;
                        }
                        xVar2 = 0x28060 /* "R32F" */;
                        if (cRam00000000000d8b18 == '\0') {
                          xVar2 = 0x30f90 /* "R16F fallback" */;
                        }
                        iRam00000000000d9a68 = iVar3;
                        iRam00000000000d9a6c = iVar4;
                        (*pcRam00000000000d9a50)
                                  (SUB84((float8)(float4)uRam00000000000d8b00,0),
                                   SUB84((float8)uRam00000000000d8b00._4_4_,0),
                                   SUB84((float8)uRam00000000000d8af8._4_4_,0),
                                   SUB84((float8)(float4)uRam00000000000d8b08,0),0,0x391ac /* "ao: ready - GTAO %dx%d, z pyramid %d levels (%s), 2 slices x 4 steps e..." */,iVar3,
                                   iVar4,4,xVar2);
                      }
                      (*(code *)*pxRam00000000000d3508)(param_3);
                      (*(code *)*pxRam00000000000d3310)(0x84c0);
                      (*(code *)*pxRam00000000000d3358)(0,xRam00000000000d9a88);
                      (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000000d9a8c);
                      fStack_140._0_4_ = 0x8ce0;
                      (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&fStack_140);
                      pxVar9 = pxRam00000000000d3520;
                      (*(code *)*pxRam00000000000d3520)(0,0,iVar3,iVar4);
                      pxVar7 = pxRam00000000000d33d8;
                      (*(code *)*pxRam00000000000d33d8)(xRam00000000000d9a9c);
                      pxVar6 = pxRam00000000000d3300;
                      (*(code *)*pxRam00000000000d3300)(0xde1,uVar10 & 0xffffffff);
                      pxVar8 = pxRam00000000000d3410;
                      (*(code *)*pxRam00000000000d3410)(xRam00000000000d8b1c,0);
                      (*(code *)*pxVar8)(xRam00000000000d8b20,iVar12);
                      (*(code *)*pxRam00000000000d3518)(4,0,3);
                      (*(code *)*pxVar7)(xRam00000000000d9aa0);
                      (*(code *)*pxVar8)(xRam00000000000d8b24,0);
                      (*(code *)*pxVar6)(0xde1,xRam00000000000d9aa4);
                      pxVar7 = pxRam00000000000d3468;
                      pxVar6 = pxRam00000000000d3338;
                      uVar10 = 0;
                      pxVar15 = (xunknown4 *)0xd9abc;
                      pxVar13 = (xunknown4 *)0xd9aac;
                      do {
                        (*(code *)*pxVar6)(0xde1,0x813c,uVar10 & 0xffffffff);
                        (*(code *)*pxVar6)(0xde1,0x813d,uVar10 & 0xffffffff);
                        (*(code *)*pxRam00000000000d3248)
                                  (0x8ca9,*(xunknown4 *)(uVar10 * 4 + 0xd9a90));
                        fStack_140._0_4_ = 0x8ce0;
                        (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&fStack_140);
                        (*(code *)*pxVar9)(0,0,*pxVar13,*pxVar15);
                        (*(code *)*pxVar7)(xRam00000000000d8b28,pxVar13[-1] + -1,pxVar15[-1] + -1);
                        (*(code *)*pxRam00000000000d3518)(4,0,3);
                        uVar10 = uVar10 + 1;
                        pxVar15 = pxVar15 + 1;
                        pxVar13 = pxVar13 + 1;
                      } while (uVar10 != 3);
                      (*(code *)*pxVar6)(0xde1,0x813c,0);
                      (*(code *)*pxVar6)(0xde1,0x813d,3);
                      (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000000d9a74);
                      fStack_140 = (float8)CONCAT44(fStack_140._4_4_,0x8ce0);
                      (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&fStack_140);
                      (*(code *)*pxVar9)(0,0,iVar3,iVar4);
                      (*(code *)*pxRam00000000000d33d8)(xRam00000000000d9ac8);
                      (*(code *)*pxRam00000000000d3410)(xRam00000000000d8b2c,0);
                      (*(code *)*pxRam00000000000d34a8)(xRam00000000000d8b30,1,0,&fStack_38c);
                      xVar20 = xRam00000000000d8b34;
                      pxVar6 = pxRam00000000000d3480;
                      uRam00000000000d9acc = uRam00000000000d9acc + 1;
                      pcVar14 = (code *)*pxRam00000000000d3480;
                      fVar22 = (float8)fmod(SUB84((float8)uRam00000000000d9acc *
                                                  fRam00000000000222c0,0),(int4)xRam0000000000022288
                                           );
                      (*pcVar14)((float4)iVar3,(float4)iVar4,(float4)fVar21,(float4)fVar22,xVar20);
                      fVar17 = 0.5;
                      if (0.5 <= uRam00000000000d8b00._4_4_) {
                        fVar17 = uRam00000000000d8b00._4_4_;
                      }
                      fVar16 = (float4)uRam00000000000d8b00;
                      if ((float4)uRam00000000000d8b00 <= 0.1) {
                        fVar16 = 0.1;
                      }
                      fVar18 = 4.0;
                      if (fVar17 <= 4.0) {
                        fVar18 = fVar17;
                      }
                      (*(code *)*pxVar6)(fVar16,fVar18,0,(float4)uRam00000000000d8b08,
                                         xRam00000000000d8b38);
                      pxVar6 = pxRam00000000000d3358;
                      (*(code *)*pxRam00000000000d3358)(0,xRam00000000000d9ad0);
                      (*(code *)*pxRam00000000000d3518)(4,0,3);
                      (*(code *)*pxVar6)(0,xRam00000000000d9a88);
                      if ((cRam00000000000d9a5d != '\x01') ||
                         (8.0 <= SQRT((fRam00000000000d9ae0 - fRam00000000000d9af8) *
                                      (fRam00000000000d9ae0 - fRam00000000000d9af8) +
                                      (fRam00000000000d9ad8 - fRam00000000000d9af0) *
                                      (fRam00000000000d9ad8 - fRam00000000000d9af0) +
                                      (fRam00000000000d9ae8 - fRam00000000000d9b00) *
                                      (fRam00000000000d9ae8 - fRam00000000000d9b00)))) {
                        bVar1 = false;
                        fStack_238 = 0.0;
                        fStack_240 = 0.0;
                        fStack_228 = 0.0;
                        fStack_230 = 0.0;
                        fStack_218 = 0.0;
                        fStack_220 = 0.0;
                        fStack_208 = 0.0;
                        fStack_210 = 0.0;
                      }
                      else {
                        fStack_238 = 0.0;
                        fStack_240 = 0.0;
                        fStack_228 = 0.0;
                        fStack_230 = 0.0;
                        fStack_218 = 0.0;
                        fStack_220 = 0.0;
                        fStack_208 = 0.0;
                        fStack_210 = 0.0;
                        if (3.0 <= ABS(fRam00000000000d9b08 - fRam00000000000d9b10)) {
                          bVar1 = false;
                        }
                        else {
                          fStack_130 = 0.0;
                          fStack_138 = 0.0;
                          fStack_120 = 0.0;
                          fStack_128 = 0.0;
                          fStack_140 = 1.0;
                          fStack_118 = 1.0;
                          fStack_108 = 0.0;
                          fStack_110 = 0.0;
                          fStack_f8 = 0.0;
                          fStack_100 = 0.0;
                          fStack_e8 = fRam0000000000022098;
                          fStack_f0 = fRam0000000000022090;
                          fStack_e0 = fRam00000000000d9ad8;
                          fStack_d8 = fRam00000000000d9ae0;
                          fStack_d0 = fRam00000000000d9ae8;
                          fStack_c8 = 1.0;
                          FUN_0006879c(0xd9b18,&fStack_140,&fStack_1c0);
                          bVar1 = true;
                          fStack_238 = (float8)CONCAT44((float4)fStack_1a8,(float4)fStack_1b0);
                          fStack_228 = (float8)CONCAT44((float4)fStack_188,(float4)fStack_190);
                          fStack_218 = (float8)CONCAT44((float4)fStack_168,(float4)fStack_170);
                          fStack_208 = (float8)CONCAT44((float4)fStack_148,(float4)fStack_150);
                          fStack_240 = (float8)CONCAT44((float4)fStack_1b8,(float4)fStack_1c0);
                          fStack_230 = (float8)CONCAT44((float4)fStack_198,(float4)fStack_1a0);
                          fStack_220 = (float8)CONCAT44((float4)fStack_178,(float4)fStack_180);
                          fStack_210 = (float8)CONCAT44((float4)fStack_158,(float4)fStack_160);
                        }
                      }
                      pxVar7 = pxRam00000000000d3248;
                      uVar10 = (uint8)uRam00000000000d9b98;
                      (*(code *)*pxRam00000000000d3248)
                                (0x8ca9,*(xunknown4 *)((uVar10 ^ 1) * 8 + 0xd9a7c));
                      fStack_140 = (float8)CONCAT44(fStack_140._4_4_,0x8ce0);
                      (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&fStack_140);
                      (*(code *)*pxRam00000000000d33d8)(xRam00000000000d9b9c);
                      pxVar9 = pxRam00000000000d3310;
                      (*(code *)*pxRam00000000000d3310)(0x84c0);
                      pxVar8 = pxRam00000000000d3300;
                      (*(code *)*pxRam00000000000d3300)(0xde1,uRam00000000000d9a70);
                      (*(code *)*pxVar6)(0,xRam00000000000d9a88);
                      (*(code *)*pxVar9)(0x84c1);
                      (*(code *)*pxVar8)(0xde1,*(xunknown4 *)
                                                ((uint8)uRam00000000000d9b98 * 8 + 0xd9a78));
                      (*(code *)*pxVar6)(1,xRam00000000000d9ba0);
                      (*(code *)*pxVar9)(0x84c2);
                      (*(code *)*pxVar8)(0xde1,xRam00000000000d9aa4);
                      (*(code *)*pxVar6)(2,xRam00000000000d9a88);
                      pxVar6 = pxRam00000000000d3410;
                      (*(code *)*pxRam00000000000d3410)(xRam00000000000d8b3c,0);
                      (*(code *)*pxVar6)(xRam00000000000d8b40,1);
                      (*(code *)*pxVar6)(xRam00000000000d8b44,2);
                      pxVar6 = pxRam00000000000d34a8;
                      (*(code *)*pxRam00000000000d34a8)(xRam00000000000d8b48,1,0,&fStack_38c);
                      (*(code *)*pxVar6)(xRam00000000000d8b4c,1,0,&fStack_240);
                      xVar20 = (xunknown4)uRam00000000000d8b10;
                      if (!bVar1) {
                        xVar20 = 0;
                      }
                      (*(code *)*pxRam00000000000d3480)
                                ((float4)iVar3,(float4)iVar4,xVar20,0,xRam00000000000d8b50);
                      (*(code *)*pxRam00000000000d3478)
                                ((float4)(fRam00000000000d9ad8 - fRam00000000000d9af0),
                                 (float4)(fRam00000000000d9ae0 - fRam00000000000d9af8),
                                 (float4)(fRam00000000000d9ae8 - fRam00000000000d9b00),
                                 xRam00000000000d8b54);
                      (*(code *)*pxRam00000000000d3518)(4,0,3);
                      (*(code *)*pxVar9)(0x84c0);
                      uRam00000000000d9b98 = (uint4)(uVar10 ^ 1);
                      fRam00000000000d9b60 = fRam00000000000d9bf0;
                      fRam00000000000d9b58 = fRam00000000000d9be8;
                      fRam00000000000d9b70 = fRam00000000000d9c00;
                      fRam00000000000d9b68 = fRam00000000000d9bf8;
                      fRam00000000000d9b80 = fRam00000000000d9c10;
                      fRam00000000000d9b78 = fRam00000000000d9c08;
                      fRam00000000000d9b90 = fRam00000000000d9c20;
                      fRam00000000000d9b88 = fRam00000000000d9c18;
                      fRam00000000000d9b20 = fRam00000000000d9bb0;
                      fRam00000000000d9b18 = fRam00000000000d9ba8;
                      fRam00000000000d9b30 = fRam00000000000d9bc0;
                      fRam00000000000d9b28 = fRam00000000000d9bb8;
                      fRam00000000000d9b40 = fRam00000000000d9bd0;
                      fRam00000000000d9b38 = fRam00000000000d9bc8;
                      fRam00000000000d9b50 = fRam00000000000d9be0;
                      fRam00000000000d9b48 = fRam00000000000d9bd8;
                      cRam00000000000d9a5d = '\x01';
                      fRam00000000000d9af8 = fRam00000000000d9ae0;
                      fRam00000000000d9af0 = fRam00000000000d9ad8;
                      fRam00000000000d9b00 = fRam00000000000d9ae8;
                      fRam00000000000d9b10 = fRam00000000000d9b08;
                      if ((uRam00000000000d8b08._4_4_ != 0) &&
                         (bVar1 = 0x76 < iRam00000000000d9c28,
                         iRam00000000000d9c28 = iRam00000000000d9c28 + 1, bVar1)) {
                        iRam00000000000d9c28 = 0;
                        fStack_140 = (float8)((uint8)fStack_140 & 0xffffffff00000000);
                        (*(code *)*pxRam00000000000d3208)(0x8caa,&fStack_140);
                        FUN_0006886c(iVar3,iVar4);
                        (*(code *)*pxVar7)(0x8ca8,(uint8)fStack_140 & 0xffffffff);
                      }
                      (*(code *)*pxVar7)(0x8ca9,xStack_390);
                      (*(code *)*pxRam00000000000d3520)
                                (xStack_2c0 & 0xffffffff,xStack_2c0._4_4_,xStack_2b8 & 0xffffffff,
                                 xStack_2b8._4_4_);
                      iVar12 = iRam00000000000d9c2c + 1;
                      bVar1 = 0xe0e < iRam00000000000d9c2c;
                      iRam00000000000d9c2c = iVar12;
                      if (bVar1) {
                        if (iRam00000000000d9a60 != 0) {
                          (*pcRam00000000000d9a50)(0,0x2ccc5 /* "ao: %d of the last frames had no validated camera (AO skipped there)" */);
                        }
                        iRam00000000000d9c2c = 0;
                        iRam00000000000d9a60 = 0;
                      }
                      pxVar6 = pxRam00000000000d3248;
                      uRam00000000000d9a58 = *(uint4 *)((uint8)uRam00000000000d9b98 * 8 + 0xd9a78);
                      uVar10 = (uint8)uRam00000000000d9a58;
                      if (iRam00000000000d9c30 != 0) {
                        (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000000d9a74);
                        fStack_140 = (float8)CONCAT44(fStack_140._4_4_,0x8ce0);
                        (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&fStack_140);
                        pxVar7 = pxRam00000000000d3520;
                        (*(code *)*pxRam00000000000d3520)(0,0,iVar3,iVar4);
                        (*(code *)*pxRam00000000000d33d8)(iRam00000000000d9c30);
                        (*(code *)*pxRam00000000000d3310)(0x84c0);
                        (*(code *)*pxRam00000000000d3300)(0xde1,uRam00000000000d9a58);
                        (*(code *)*pxRam00000000000d3358)(0,xRam00000000000d9a88);
                        (*(code *)*pxRam00000000000d3410)(xRam00000000000d8b58,0);
                        (*(code *)*pxRam00000000000d3518)(4,0,3);
                        uRam00000000000d9a58 = uRam00000000000d9a70;
                        (*(code *)*pxVar6)(0x8ca9,xStack_390);
                        (*(code *)*pxVar7)(xStack_2c0 & 0xffffffff,xStack_2c0._4_4_,
                                           xStack_2b8 & 0xffffffff,xStack_2b8._4_4_);
                        uVar10 = (uint8)uRam00000000000d9a58;
                      }
                    }
                  }
                }
                goto code_r0x00066d3c;
              }
            }
          }
        }
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0;
      cRam00000000000d9a5d = '\0';
    }
  }
code_r0x00066d3c:
  if (*(int8 *)(iVar5 + 0x28) == iStack_b8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(uVar10);
  return;
}

/* 0x689a8  size=624  ao::DrawDebug(int, int, unsigned int)  [_ZN2ao9DrawDebugEiij] */
void ao__DrawDebug(int4 param_1,int4 param_2,xunknown4 param_3)

{
  xunknown8 *pxVar1;
  xunknown4 xVar2;
  xunknown4 xVar3;
  xunknown8 xVar4;
  
  if ((uRam00000000000d9a58 == 0) || ((uRam00000000000d9a5c & 1) != 0)) {
    return;
  }
  if (iRam00000000000d9c34 == 0) {
    xVar2 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x3fc60 /* "ao-debug" */,pcRam00000000000d9a50);
    xVar3 = gl__Compile_plt(0x8b30,0x225f8 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x3fc60 /* "ao-debug" */,pcRam00000000000d9a50);
    xVar4 = gl__Link_plt(xVar2,xVar3,0x3fc60 /* "ao-debug" */,pcRam00000000000d9a50);
    pxVar1 = pxRam00000000000d3408;
    iRam00000000000d9c34 = (int4)xVar4;
    if (iRam00000000000d9c34 == 0) {
      uRam00000000000d9a5c = 1;
      iRam00000000000d9c34 = 0;
      return;
    }
    xRam00000000000d8b5c = (*(code *)*pxRam00000000000d3408)(xVar4,0x40be1 /* "uTex" */);
    xRam00000000000d8b60 = (*(code *)*pxVar1)(iRam00000000000d9c34,0x2dc8a);
  }
  pxVar1 = pxRam00000000000d3530;
  (*(code *)*pxRam00000000000d3530)(0xbe2);
  (*(code *)*pxVar1)(0xc11);
  (*(code *)*pxVar1)(0xb71);
  (*(code *)*pxRam00000000000d3540)(1,1,1,1);
  (*(code *)*pxRam00000000000d3520)(0,0,param_1,param_2);
  (*(code *)*pxRam00000000000d3508)(param_3);
  (*(code *)*pxRam00000000000d33d8)(iRam00000000000d9c34);
  (*(code *)*pxRam00000000000d3310)(0x84c0);
  (*(code *)*pxRam00000000000d3300)(0xde1,uRam00000000000d9a58);
  (*(code *)*pxRam00000000000d3358)(0,xRam00000000000d9a88);
  (*(code *)*pxRam00000000000d3410)(xRam00000000000d8b5c,0);
  (*(code *)*pxRam00000000000d3480)
            ((float4)uRam00000000000d8b08._4_4_,1.0 / (float4)param_1,1.0 / (float4)param_2,0,
             xRam00000000000d8b60);
                    /* WARNING: Could not recover jumptable at 0x00068bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxRam00000000000d3518)(4,0,3);
  return;
}

