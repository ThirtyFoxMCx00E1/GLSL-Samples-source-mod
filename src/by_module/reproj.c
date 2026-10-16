/* module: reproj  (3 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x691dc  size=12  reproj::Reset()  [_ZN6reproj5ResetEv] */
void reproj__Reset(void)

{
  xRam000000000010bc98 = 0;
  return;
}

/* 0x691e8  size=612  reproj::Current(float*, float*)  [_ZN6reproj7CurrentEPfS0_] */
void reproj__Current(float4 *param_1,xunknown8 *param_2)

{
  int8 iVar1;
  uint8 uVar2;
  xunknown8 xVar3;
  float8 fVar4;
  float8 fVar5;
  float8 fVar6;
  float8 fVar7;
  float8 fVar8;
  float8 fVar9;
  float8 fVar10;
  float8 fVar11;
  float8 fVar12;
  float8 fVar13;
  float8 fVar14;
  float8 fVar15;
  float8 fVar16;
  float8 fVar17;
  float8 fVar18;
  float8 fVar19;
  xunknown1 axStack_2d0 [96];
  float8 fStack_270;
  float8 fStack_268;
  float8 fStack_260;
  float8 fStack_250;
  float8 fStack_248;
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
  xunknown1 axStack_c4 [12];
  xunknown1 axStack_b8 [64];
  xunknown1 axStack_78 [64];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  uVar2 = lights__Camera_plt(axStack_78,axStack_b8,axStack_c4);
  if ((uVar2 & 1) != 0) {
    fStack_130 = (float8)axStack_b8._16_4_;
    fStack_128 = (float8)axStack_b8._20_4_;
    fStack_150 = (float8)axStack_b8._0_4_;
    fStack_148 = (float8)axStack_b8._4_4_;
    fStack_140 = (float8)axStack_b8._8_4_;
    fStack_138 = (float8)axStack_b8._12_4_;
    fStack_120 = (float8)axStack_b8._24_4_;
    fStack_118 = (float8)axStack_b8._28_4_;
    fStack_110 = (float8)axStack_b8._32_4_;
    fStack_108 = (float8)axStack_b8._36_4_;
    fVar10 = (float8)axStack_78._0_4_;
    fVar12 = (float8)axStack_78._4_4_;
    fVar6 = (float8)axStack_78._8_4_;
    fVar8 = (float8)axStack_78._12_4_;
    fStack_f0 = (float8)axStack_b8._48_4_;
    fStack_e8 = (float8)axStack_b8._52_4_;
    fVar16 = (float8)axStack_78._16_4_;
    fVar17 = (float8)axStack_78._20_4_;
    fVar14 = (float8)axStack_78._24_4_;
    fVar15 = (float8)axStack_78._28_4_;
    fStack_100 = (float8)axStack_b8._40_4_;
    fStack_f8 = (float8)axStack_b8._44_4_;
    fVar11 = (float8)axStack_78._32_4_;
    fVar13 = (float8)axStack_78._36_4_;
    fVar18 = (float8)axStack_78._40_4_;
    fVar19 = (float8)axStack_78._44_4_;
    fStack_e0 = (float8)axStack_b8._56_4_;
    fStack_d8 = (float8)axStack_b8._60_4_;
    fVar4 = (float8)axStack_78._48_4_;
    fVar5 = (float8)axStack_78._52_4_;
    fVar7 = (float8)axStack_78._56_4_;
    fVar9 = (float8)axStack_78._60_4_;
    fStack_1d0 = fVar10 * fStack_150 + 0.0 + fVar16 * fStack_148 + fVar11 * fStack_140 +
                 fVar4 * fStack_138;
    fStack_1c8 = fVar12 * fStack_150 + 0.0 + fVar17 * fStack_148 + fVar13 * fStack_140 +
                 fVar5 * fStack_138;
    fStack_1c0 = fVar6 * fStack_150 + 0.0 + fVar14 * fStack_148 + fVar18 * fStack_140 +
                 fVar7 * fStack_138;
    fStack_1b8 = fVar8 * fStack_150 + 0.0 + fVar15 * fStack_148 + fVar19 * fStack_140 +
                 fVar9 * fStack_138;
    fStack_1b0 = fVar10 * fStack_130 + 0.0 + fVar16 * fStack_128 + fVar11 * fStack_120 +
                 fVar4 * fStack_118;
    fStack_1a8 = fVar12 * fStack_130 + 0.0 + fVar17 * fStack_128 + fVar13 * fStack_120 +
                 fVar5 * fStack_118;
    fStack_1a0 = fVar6 * fStack_130 + 0.0 + fVar14 * fStack_128 + fVar18 * fStack_120 +
                 fVar7 * fStack_118;
    fStack_198 = fVar8 * fStack_130 + 0.0 + fVar15 * fStack_128 + fVar19 * fStack_120 +
                 fVar9 * fStack_118;
    fStack_190 = fVar10 * fStack_110 + 0.0 + fVar16 * fStack_108 + fVar11 * fStack_100 +
                 fVar4 * fStack_f8;
    fStack_188 = fVar12 * fStack_110 + 0.0 + fVar17 * fStack_108 + fVar13 * fStack_100 +
                 fVar5 * fStack_f8;
    fStack_180 = fVar6 * fStack_110 + 0.0 + fVar14 * fStack_108 + fVar18 * fStack_100 +
                 fVar7 * fStack_f8;
    fStack_178 = fVar8 * fStack_110 + 0.0 + fVar15 * fStack_108 + fVar19 * fStack_100 +
                 fVar9 * fStack_f8;
    fStack_170 = fVar10 * fStack_f0 + 0.0 + fVar16 * fStack_e8 + fVar11 * fStack_e0 +
                 fVar4 * fStack_d8;
    fStack_168 = fVar12 * fStack_f0 + 0.0 + fVar17 * fStack_e8 + fVar13 * fStack_e0 +
                 fVar5 * fStack_d8;
    fStack_160 = fVar6 * fStack_f0 + 0.0 + fVar14 * fStack_e8 + fVar18 * fStack_e0 +
                 fVar7 * fStack_d8;
    fStack_158 = fVar8 * fStack_f0 + 0.0 + fVar15 * fStack_e8 + fVar19 * fStack_e0 +
                 fVar9 * fStack_d8;
    uVar2 = FUN_0006944c(&fStack_1d0,&fStack_250);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_0006944c(&fStack_150,axStack_2d0), (uVar2 & 1) != 0)) {
      xVar3 = 1;
      *param_1 = (float4)(fStack_250 - fStack_238 * fStack_270);
      *(uint8 *)(param_1 + 3) =
           CONCAT44((float4)(fStack_230 - fStack_218 * fStack_270),(float4)fStack_238);
      *(uint8 *)(param_1 + 1) =
           CONCAT44((float4)(fStack_240 - fStack_260 * fStack_238),
                    (float4)(fStack_248 - fStack_268 * fStack_238));
      param_1[0xf] = (float4)fStack_1d8;
      *(uint8 *)(param_1 + 0xd) =
           CONCAT44((float4)(fStack_1e0 - fStack_260 * fStack_1d8),
                    (float4)(fStack_1e8 - fStack_268 * fStack_1d8));
      *(uint8 *)(param_1 + 7) =
           CONCAT44((float4)(fStack_210 - fStack_1f8 * fStack_270),(float4)fStack_218);
      *(uint8 *)(param_1 + 5) =
           CONCAT44((float4)(fStack_220 - fStack_260 * fStack_218),
                    (float4)(fStack_228 - fStack_268 * fStack_218));
      *(uint8 *)(param_1 + 0xb) =
           CONCAT44((float4)(fStack_1f0 - fStack_1d8 * fStack_270),(float4)fStack_1f8);
      *(uint8 *)(param_1 + 9) =
           CONCAT44((float4)(fStack_200 - fStack_260 * fStack_1f8),
                    (float4)(fStack_208 - fStack_268 * fStack_1f8));
      *param_2 = CONCAT44((float4)fStack_268,(float4)fStack_270);
      *(float4 *)(param_2 + 1) = (float4)fStack_260;
      goto code_r0x00069424;
    }
  }
  xVar3 = 0;
code_r0x00069424:
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar3);
  return;
}

/* 0x69734  size=1856  reproj::Update(reproj::Frame&)  [_ZN6reproj6UpdateERNS_5FrameE] */
void reproj__Update(float4 *param_1)

{
  int8 iVar1;
  float8 fVar2;
  float8 fVar3;
  bool bVar4;
  uint8 uVar5;
  float8 fVar6;
  float4 fVar7;
  float8 fVar8;
  float8 fVar9;
  float8 fVar10;
  float8 fVar11;
  float8 fVar12;
  float8 fVar13;
  float8 fVar14;
  float8 fVar15;
  float8 fVar16;
  float8 fVar17;
  float8 fVar18;
  float8 fVar19;
  float8 fVar20;
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
  xunknown1 axStack_310 [96];
  float8 fStack_2b0;
  float8 fStack_2a8;
  float8 fStack_2a0;
  float8 fStack_290;
  float8 fStack_288;
  float8 fStack_280;
  float8 fStack_278;
  float8 fStack_270;
  float8 fStack_268;
  float8 fStack_260;
  float8 fStack_258;
  float8 fStack_250;
  float8 fStack_248;
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
  xunknown1 axStack_104 [12];
  xunknown1 axStack_f8 [64];
  float4 fStack_b8;
  float4 fStack_b4;
  float4 fStack_b0;
  float4 fStack_ac;
  float4 fStack_a8;
  float4 fStack_a4;
  float4 fStack_a0;
  float4 fStack_9c;
  float4 fStack_98;
  float4 fStack_94;
  float4 fStack_90;
  float4 fStack_8c;
  float4 fStack_88;
  float4 fStack_84;
  float4 fStack_80;
  float4 fStack_7c;
  int8 iStack_78;
  
  iVar1 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar1 + 0x28);
  uVar5 = lights__Camera_plt(&fStack_b8,axStack_f8,axStack_104);
  if ((uVar5 & 1) == 0) {
    xRam000000000010bc98 = 0;
  }
  else {
    fVar30 = (float8)fStack_b8;
    fVar8 = (float8)fStack_b4;
    fStack_190 = (float8)axStack_f8._0_4_;
    fStack_188 = (float8)axStack_f8._4_4_;
    fVar11 = (float8)fStack_ac;
    fStack_180 = (float8)axStack_f8._8_4_;
    fStack_178 = (float8)axStack_f8._12_4_;
    fVar13 = (float8)fStack_b0;
    fVar19 = (float8)fStack_a8;
    fVar23 = (float8)fStack_a4;
    fVar28 = (float8)fStack_9c;
    fVar14 = (float8)fStack_a0;
    fVar25 = (float8)fStack_98;
    fVar17 = (float8)fStack_94;
    fVar16 = (float8)fStack_8c;
    fVar26 = (float8)fStack_90;
    fStack_170 = (float8)axStack_f8._16_4_;
    fStack_168 = (float8)axStack_f8._20_4_;
    fStack_160 = (float8)axStack_f8._24_4_;
    fStack_158 = (float8)axStack_f8._28_4_;
    fVar15 = (float8)fStack_88;
    fVar27 = (float8)fStack_84;
    fVar3 = (float8)fStack_7c;
    fVar21 = (float8)fStack_80;
    fStack_150 = (float8)axStack_f8._32_4_;
    fStack_148 = (float8)axStack_f8._36_4_;
    fStack_130 = (float8)axStack_f8._48_4_;
    fStack_128 = (float8)axStack_f8._52_4_;
    fVar6 = fStack_190 * fVar30 + 0.0 + fVar19 * fStack_188 + fStack_180 * fVar25 +
            fVar15 * fStack_178;
    fVar9 = fStack_190 * fVar8 + 0.0 + fVar23 * fStack_188 + fStack_180 * fVar17 +
            fVar27 * fStack_178;
    fVar22 = fStack_190 * fVar13 + 0.0 + fVar14 * fStack_188 + fStack_180 * fVar26 +
             fVar21 * fStack_178;
    fVar2 = fStack_190 * fVar11 + 0.0 + fVar28 * fStack_188 + fStack_180 * fVar16 +
            fVar3 * fStack_178;
    fStack_140 = (float8)axStack_f8._40_4_;
    fStack_138 = (float8)axStack_f8._44_4_;
    fStack_120 = (float8)axStack_f8._56_4_;
    fStack_118 = (float8)axStack_f8._60_4_;
    fVar32 = fStack_170 * fVar30 + 0.0 + fVar19 * fStack_168 + fStack_160 * fVar25 +
             fVar15 * fStack_158;
    fVar31 = fStack_170 * fVar8 + 0.0 + fVar23 * fStack_168 + fStack_160 * fVar17 +
             fVar27 * fStack_158;
    fVar12 = fStack_170 * fVar13 + 0.0 + fVar14 * fStack_168 + fStack_160 * fVar26 +
             fVar21 * fStack_158;
    fVar29 = fStack_170 * fVar11 + 0.0 + fVar28 * fStack_168 + fStack_160 * fVar16 +
             fVar3 * fStack_158;
    fVar24 = fStack_150 * fVar30 + 0.0 + fVar19 * fStack_148 + fStack_140 * fVar25 +
             fVar15 * fStack_138;
    fVar10 = fStack_150 * fVar8 + 0.0 + fVar23 * fStack_148 + fStack_140 * fVar17 +
             fVar27 * fStack_138;
    fVar18 = fStack_150 * fVar13 + 0.0 + fVar14 * fStack_148 + fStack_140 * fVar26 +
             fVar21 * fStack_138;
    fVar20 = fStack_150 * fVar11 + 0.0 + fVar28 * fStack_148 + fStack_140 * fVar16 +
             fVar3 * fStack_138;
    fVar19 = fStack_130 * fVar30 + 0.0 + fVar19 * fStack_128 + fStack_120 * fVar25 +
             fVar15 * fStack_118;
    fVar15 = fStack_130 * fVar13 + 0.0 + fVar14 * fStack_128 + fStack_120 * fVar26 +
             fVar21 * fStack_118;
    fVar21 = fStack_130 * fVar11 + 0.0 + fVar28 * fStack_128 + fStack_120 * fVar16 +
             fVar3 * fStack_118;
    fVar17 = fStack_130 * fVar8 + 0.0 + fVar23 * fStack_128 + fStack_120 * fVar17 +
             fVar27 * fStack_118;
    fStack_210 = fVar6;
    fStack_208 = fVar9;
    fStack_200 = fVar22;
    fStack_1f8 = fVar2;
    fStack_1f0 = fVar32;
    fStack_1e8 = fVar31;
    fStack_1e0 = fVar12;
    fStack_1d8 = fVar29;
    fStack_1d0 = fVar24;
    fStack_1c8 = fVar10;
    fStack_1c0 = fVar18;
    fStack_1b8 = fVar20;
    fStack_1b0 = fVar19;
    fStack_1a8 = fVar17;
    fStack_1a0 = fVar15;
    fStack_198 = fVar21;
    uVar5 = FUN_0006944c(&fStack_210,&fStack_290);
    if (((uVar5 & 1) == 0) || (uVar5 = FUN_0006944c(&fStack_190,axStack_310), (uVar5 & 1) == 0)) {
      xRam000000000010bc98 = 0;
    }
    else {
      param_1[2] = (float4)(fStack_280 - fStack_278 * fStack_2a0);
      param_1[3] = (float4)fStack_278;
      *param_1 = (float4)(fStack_290 - fStack_278 * fStack_2b0);
      param_1[1] = (float4)(fStack_288 - fStack_278 * fStack_2a8);
      param_1[6] = (float4)(fStack_260 - fStack_258 * fStack_2a0);
      param_1[7] = (float4)fStack_258;
      param_1[4] = (float4)(fStack_270 - fStack_258 * fStack_2b0);
      param_1[5] = (float4)(fStack_268 - fStack_258 * fStack_2a8);
      fVar11 = fVar6 * 0.0 + 0.0;
      fVar3 = fVar22 * 0.0 + 0.0;
      param_1[10] = (float4)(fStack_240 - fStack_238 * fStack_2a0);
      param_1[0xb] = (float4)fStack_238;
      param_1[8] = (float4)(fStack_250 - fStack_238 * fStack_2b0);
      param_1[9] = (float4)(fStack_248 - fStack_238 * fStack_2a8);
      param_1[0xc] = (float4)(fStack_230 - fStack_218 * fStack_2b0);
      param_1[0xd] = (float4)(fStack_228 - fStack_218 * fStack_2a8);
      fVar8 = fVar9 * 0.0 + 0.0;
      fVar13 = fVar2 * 0.0 + 0.0;
      param_1[0xe] = (float4)(fStack_220 - fStack_218 * fStack_2a0);
      param_1[0xf] = (float4)fStack_218;
      param_1[0x24] = (float4)(fVar6 + 0.0 + fVar32 * 0.0 + fVar24 * 0.0 + fVar19 * 0.0);
      param_1[0x25] = (float4)(fVar9 + 0.0 + fVar31 * 0.0 + fVar10 * 0.0 + fVar17 * 0.0);
      param_1[0x2c] = (float4)(fVar24 + fVar11 + fVar32 * 0.0 + fVar19 * 0.0);
      param_1[0x26] = (float4)(fVar22 + 0.0 + fVar12 * 0.0 + fVar18 * 0.0 + fVar15 * 0.0);
      param_1[0x27] = (float4)(fVar2 + 0.0 + fVar29 * 0.0 + fVar20 * 0.0 + fVar21 * 0.0);
      *(float8 *)(param_1 + 0x34) = fStack_2b0;
      *(float8 *)(param_1 + 0x36) = fStack_2a8;
      *(float8 *)(param_1 + 0x38) = fStack_2a0;
      param_1[0x28] = (float4)(fVar32 + fVar11 + fVar24 * 0.0 + fVar19 * 0.0);
      param_1[0x29] = (float4)(fVar31 + fVar8 + fVar10 * 0.0 + fVar17 * 0.0);
      param_1[0x2a] = (float4)(fVar12 + fVar3 + fVar18 * 0.0 + fVar15 * 0.0);
      param_1[0x2b] = (float4)(fVar29 + fVar13 + fVar20 * 0.0 + fVar21 * 0.0);
      *(uint8 *)(param_1 + 0x2f) =
           CONCAT44((float4)(fVar19 + fStack_2b0 * fVar6 + 0.0 + fStack_2a8 * fVar32 +
                                      fStack_2a0 * fVar24),
                    (float4)(fVar20 + fVar13 + fVar29 * 0.0 + fVar21 * 0.0));
      *(uint8 *)(param_1 + 0x2d) =
           CONCAT44((float4)(fVar18 + fVar3 + fVar12 * 0.0 + fVar15 * 0.0),
                    (float4)(fVar10 + fVar8 + fVar31 * 0.0 + fVar17 * 0.0));
      param_1[0x31] =
           (float4)(fVar17 + fStack_2b0 * fVar9 + 0.0 + fStack_2a8 * fVar31 + fStack_2a0 * fVar10);
      param_1[0x32] =
           (float4)(fVar15 + fStack_2b0 * fVar22 + 0.0 + fStack_2a8 * fVar12 + fStack_2a0 * fVar18);
      param_1[0x33] =
           (float4)(fVar21 + fStack_2b0 * fVar2 + 0.0 + fStack_2a8 * fVar29 + fStack_2a0 * fVar20);
      fVar6 = (float8)atan(1.0 / ABS(fVar23));
      fVar6 = fVar6 * fRam0000000000022240;
      fRam000000000010bca0 = fStack_2b0 - fRam000000000010bca0;
      bVar4 = false;
      fRam000000000010bca8 = fStack_2a8 - fRam000000000010bca8;
      fRam000000000010bcb0 = fStack_2a0 - fRam000000000010bcb0;
      if ((xRam000000000010bc98 == 1) &&
         (SQRT(fRam000000000010bca8 * fRam000000000010bca8 +
               fRam000000000010bca0 * fRam000000000010bca0 +
               fRam000000000010bcb0 * fRam000000000010bcb0) < 8.0)) {
        bVar4 = ABS(fVar6 - fRam000000000010bcb8) < 3.0;
      }
      *(bool *)(param_1 + 0x23) = bVar4;
      if ((xRam000000000010bc98 & 1) == 0) {
        fVar7 = 0.0;
        param_1[0x20] = 0.0;
        param_1[0x21] = 0.0;
      }
      else {
        fVar7 = (float4)fRam000000000010bcb0;
        param_1[0x20] = (float4)fRam000000000010bca0;
        param_1[0x21] = (float4)fRam000000000010bca8;
      }
      param_1[0x22] = fVar7;
      if (bVar4) {
        fVar12 = fRam000000000010bcd0 * 0.0 + 0.0;
        fVar17 = fRam000000000010bcd8 * 0.0 + 0.0;
        fVar2 = fRam000000000010bcc0 * 0.0 + 0.0;
        fVar15 = fRam000000000010bcc8 * 0.0 + 0.0;
        *(uint8 *)(param_1 + 0x18) =
             CONCAT44((float4)(fRam000000000010bd08 + fVar15 + fRam000000000010bce8 * 0.0 +
                              fRam000000000010bd28 * 0.0),
                      (float4)(fRam000000000010bd00 + fVar2 + fRam000000000010bce0 * 0.0 +
                              fRam000000000010bd20 * 0.0));
        *(uint8 *)(param_1 + 0x10) =
             CONCAT44((float4)(fRam000000000010bcc8 + 0.0 + fRam000000000010bce8 * 0.0 +
                               fRam000000000010bd08 * 0.0 + fRam000000000010bd28 * 0.0),
                      (float4)(fRam000000000010bcc0 + 0.0 + fRam000000000010bce0 * 0.0 +
                               fRam000000000010bd00 * 0.0 + fRam000000000010bd20 * 0.0));
        *(uint8 *)(param_1 + 0x12) =
             CONCAT44((float4)(fRam000000000010bcd8 + 0.0 + fRam000000000010bcf8 * 0.0 +
                               fRam000000000010bd18 * 0.0 + fRam000000000010bd38 * 0.0),
                      (float4)(fRam000000000010bcd0 + 0.0 + fRam000000000010bcf0 * 0.0 +
                               fRam000000000010bd10 * 0.0 + fRam000000000010bd30 * 0.0));
        *(uint8 *)(param_1 + 0x14) =
             CONCAT44((float4)(fRam000000000010bce8 + fVar15 + fRam000000000010bd08 * 0.0 +
                              fRam000000000010bd28 * 0.0),
                      (float4)(fRam000000000010bce0 + fVar2 + fRam000000000010bd00 * 0.0 +
                              fRam000000000010bd20 * 0.0));
        *(uint8 *)(param_1 + 0x16) =
             CONCAT44((float4)(fRam000000000010bcf8 + fVar17 + fRam000000000010bd18 * 0.0 +
                              fRam000000000010bd38 * 0.0),
                      (float4)(fRam000000000010bcf0 + fVar12 + fRam000000000010bd10 * 0.0 +
                              fRam000000000010bd30 * 0.0));
        param_1[0x1a] =
             (float4)(fRam000000000010bd10 + fVar12 + fRam000000000010bcf0 * 0.0 +
                     fRam000000000010bd30 * 0.0);
        *(uint8 *)(param_1 + 0x1d) =
             CONCAT44((float4)(fRam000000000010bd30 +
                              fStack_2b0 * fRam000000000010bcd0 + 0.0 +
                              fStack_2a8 * fRam000000000010bcf0 + fStack_2a0 * fRam000000000010bd10)
                      ,(float4)(fRam000000000010bd28 +
                               fRam000000000010bcc8 * fStack_2b0 + 0.0 +
                               fRam000000000010bce8 * fStack_2a8 + fRam000000000010bd08 * fStack_2a0
                               ));
        *(uint8 *)(param_1 + 0x1b) =
             CONCAT44((float4)(fRam000000000010bd20 +
                              fRam000000000010bcc0 * fStack_2b0 + 0.0 +
                              fRam000000000010bce0 * fStack_2a8 + fRam000000000010bd00 * fStack_2a0)
                      ,(float4)(fRam000000000010bd18 + fVar17 + fRam000000000010bcf8 * 0.0 +
                               fRam000000000010bd38 * 0.0));
        param_1[0x1f] =
             (float4)(fRam000000000010bd38 +
                     fStack_2b0 * fRam000000000010bcd8 + 0.0 + fStack_2a8 * fRam000000000010bcf8 +
                     fStack_2a0 * fRam000000000010bd18);
      }
      else {
        param_1[0x12] = 0.0;
        param_1[0x13] = 0.0;
        param_1[0x10] = 0.0;
        param_1[0x11] = 0.0;
        param_1[0x16] = 0.0;
        param_1[0x17] = 0.0;
        param_1[0x14] = 0.0;
        param_1[0x15] = 0.0;
        param_1[0x1a] = 0.0;
        param_1[0x1b] = 0.0;
        param_1[0x18] = 0.0;
        param_1[0x19] = 0.0;
        param_1[0x1e] = 0.0;
        param_1[0x1f] = 0.0;
        param_1[0x1c] = 0.0;
        param_1[0x1d] = 0.0;
      }
      xRam000000000010bc98 = 1;
      fRam000000000010bca0 = fStack_2b0;
      fRam000000000010bca8 = fStack_2a8;
      fRam000000000010bd08 = fStack_1c8;
      fRam000000000010bd00 = fStack_1d0;
      fRam000000000010bd18 = fStack_1b8;
      fRam000000000010bd10 = fStack_1c0;
      fRam000000000010bcb0 = fStack_2a0;
      fRam000000000010bd28 = fStack_1a8;
      fRam000000000010bd20 = fStack_1b0;
      fRam000000000010bd38 = fStack_198;
      fRam000000000010bd30 = fStack_1a0;
      fRam000000000010bcc8 = fStack_208;
      fRam000000000010bcc0 = fStack_210;
      fRam000000000010bcd8 = fStack_1f8;
      fRam000000000010bcd0 = fStack_200;
      fRam000000000010bce8 = fStack_1e8;
      fRam000000000010bce0 = fStack_1f0;
      fRam000000000010bcf8 = fStack_1d8;
      fRam000000000010bcf0 = fStack_1e0;
      fRam000000000010bcb8 = fVar6;
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_78) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xRam000000000010bc98);
  return;
}

