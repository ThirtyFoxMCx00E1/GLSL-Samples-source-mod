/* module: exports  (8 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x57d9c  size=16  __GetModInfo  [__GetModInfo] */
xunknown8 GetModInfo(void)

{
  return *pxRam00000000000d31d0;
}

/* 0x57dac  size=12  __GetDepsList  [__GetDepsList] */
xunknown8 GetDepsList(void)

{
  return 0xd8678;
}

/* 0x57db8  size=300  GfxLog(bool, char const*, ...)  [_Z6GfxLogbPKcz] */
void GfxLog(uint8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,xunknown8 param_5,
           xunknown8 param_6,xunknown8 param_7,xunknown8 param_8)

{
  int8 iVar1;
  xunknown4 xVar2;
  xunknown8 xStack_640;
  xunknown8 xStack_638;
  xunknown8 xStack_630;
  xunknown8 xStack_628;
  xunknown8 xStack_620;
  xunknown8 xStack_618;
  xunknown8 xStack_610;
  xunknown8 *pxStack_608;
  xunknown8 *pxStack_600;
  xunknown8 xStack_5f8;
  xunknown8 xStack_5d8;
  xunknown1 axStack_5b0 [1400];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  pxStack_608 = &xStack_610;
  pxStack_600 = &xStack_640;
  xStack_5f8 = 0xffffff80ffffffd0;
  xStack_640 = param_3;
  xStack_638 = param_4;
  xStack_630 = param_5;
  xStack_628 = param_6;
  xStack_620 = param_7;
  xStack_618 = param_8;
  xStack_610 = (xunknown1 *)register_sp;
  vsnprintf(axStack_5b0,0x578,param_2,&xStack_610);
  if ((param_1 & 1) == 0) {
    Logger__Info_plt(*pxRam00000000000d31e0,0x2bfce,axStack_5b0);
  }
  else {
    Logger__Error_plt();
  }
  if (iRam00000000000d9040 != 0) {
    xStack_5d8 = time(0);
    localtime_r(&xStack_5d8,&xStack_610);
    xVar2 = 0x45;
    if ((param_1 & 1) == 0) {
      xVar2 = 0x49;
    }
    fprintf(iRam00000000000d9040,0x370a1 /* "[%02d:%02d:%02d] [%c] %s\n" */,(uint8)pxStack_608 & 0xffffffff,xStack_610._4_4_,
            (uint8)xStack_610 & 0xffffffff,xVar2,axStack_5b0);
    fflush(iRam00000000000d9040);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x57fe4  size=44  OnModUnload  [OnModUnload] */
void OnModUnload(void)

{
  if (iRam00000000000d9040 != 0) {
    fclose();
    iRam00000000000d9040 = 0;
  }
  return;
}

/* 0x58010  size=9740  OnModLoad  [OnModLoad] */
void OnModLoad(void)

{
  int4 iVar1;
  int4 iVar2;
  int4 iVar3;
  int4 iVar4;
  int8 iVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  bool bVar8;
  int4 iVar9;
  int4 iVar10;
  char *pcVar11;
  uint8 uVar12;
  char *pcVar13;
  int8 iVar14;
  uint8 uVar15;
  xunknown8 xVar16;
  xunknown1 *pxVar17;
  xunknown8 *pxVar18;
  xunknown8 xVar19;
  uint1 uVar20;
  xunknown4 xVar21;
  char *pcVar22;
  int8 iVar23;
  float4 fVar24;
  xunknown1 axVar25 [16];
  xunknown4 xVar26;
  float4 fVar27;
  uint1 auStack_f00 [4];
  xunknown4 xStack_efc;
  xunknown4 xStack_ef8;
  xunknown4 xStack_ef4;
  uint1 auStack_ef0 [4];
  int4 iStack_eec;
  xunknown4 xStack_ee8;
  xunknown4 xStack_ee4;
  xunknown1 xStack_ee0;
  xunknown4 xStack_edc;
  xunknown4 xStack_ed8;
  xunknown4 xStack_ed4;
  xunknown8 xStack_ed0;
  xunknown1 axStack_ec8 [4];
  xunknown4 xStack_ec4;
  xunknown4 xStack_ec0;
  xunknown4 xStack_ebc;
  xunknown4 xStack_eb8;
  xunknown4 xStack_eb4;
  float4 fStack_eb0;
  xunknown4 xStack_eac;
  xunknown1 axStack_ea8 [4];
  float4 fStack_ea4;
  xunknown4 xStack_ea0;
  xunknown1 xStack_e9c;
  xunknown4 xStack_e98;
  uint1 auStack_e94 [4];
  xunknown4 xStack_e90;
  xunknown1 axStack_e8c [4];
  xunknown4 xStack_e88;
  xunknown1 xStack_e84;
  xunknown1 xStack_e83;
  xunknown8 xStack_e80;
  xunknown8 xStack_e78;
  xunknown8 xStack_e70;
  xunknown8 xStack_e68;
  xunknown8 xStack_e60;
  xunknown8 xStack_e58;
  xunknown8 xStack_e50;
  xunknown4 xStack_e48;
  xunknown4 xStack_e44;
  xunknown4 xStack_e40;
  xunknown4 xStack_e3c;
  xunknown4 xStack_e38;
  xunknown4 xStack_e34;
  uint4 uStack_e30;
  xunknown4 xStack_e2c;
  xunknown4 xStack_e28;
  xunknown4 xStack_e24;
  xunknown8 xStack_e20;
  xunknown8 xStack_e18;
  xunknown8 xStack_e10;
  xunknown1 axStack_e08 [5];
  bool bStack_e03;
  xunknown2 xStack_e02;
  xunknown1 axStack_e00 [5];
  bool bStack_dfb;
  xunknown2 xStack_dfa;
  xunknown8 xStack_df8;
  xunknown8 xStack_df0;
  xunknown8 xStack_de8;
  xunknown8 xStack_de0;
  xunknown8 xStack_dd8;
  xunknown8 xStack_dd0;
  xunknown8 xStack_dc8;
  xunknown8 xStack_dc0;
  xunknown8 xStack_db8;
  xunknown8 xStack_db0;
  xunknown8 xStack_da8;
  xunknown8 xStack_da0;
  xunknown8 xStack_d98;
  xunknown8 xStack_d90;
  xunknown8 xStack_d88;
  xunknown8 xStack_d80;
  xunknown8 xStack_d78;
  xunknown8 xStack_d70;
  xunknown8 xStack_d68;
  xunknown8 xStack_d60;
  xunknown8 xStack_d58;
  xunknown8 xStack_d50;
  xunknown8 xStack_d48;
  xunknown8 xStack_d40;
  xunknown8 xStack_d38;
  xunknown8 xStack_d30;
  xunknown8 xStack_d28;
  xunknown8 xStack_d20;
  xunknown8 xStack_d18;
  xunknown8 xStack_d10;
  xunknown8 xStack_d08;
  xunknown8 xStack_d00;
  xunknown8 xStack_cf8;
  char acStack_cf0 [400];
  xunknown8 xStack_b60;
  xunknown8 xStack_b58;
  xunknown8 xStack_b50;
  xunknown8 xStack_b48;
  xunknown8 xStack_b40;
  xunknown8 xStack_b38;
  xunknown8 xStack_b30;
  xunknown8 xStack_b28;
  xunknown8 xStack_b20;
  xunknown8 xStack_b18;
  xunknown8 xStack_b10;
  xunknown8 xStack_b08;
  xunknown8 xStack_b00;
  xunknown8 xStack_af8;
  xunknown8 xStack_af0;
  xunknown8 xStack_ae8;
  xunknown8 xStack_ae0;
  xunknown8 xStack_ad8;
  xunknown8 xStack_ad0;
  xunknown8 xStack_ac8;
  xunknown8 xStack_ac0;
  xunknown8 xStack_ab8;
  xunknown8 xStack_ab0;
  xunknown8 xStack_aa8;
  xunknown8 xStack_aa0;
  xunknown8 xStack_a98;
  xunknown8 xStack_a90;
  xunknown8 xStack_a88;
  xunknown8 xStack_a80;
  xunknown8 xStack_a78;
  xunknown8 xStack_a70;
  xunknown8 xStack_a68;
  xunknown8 xStack_a60;
  xunknown8 xStack_a58;
  xunknown8 xStack_a50;
  xunknown8 xStack_a48;
  xunknown8 xStack_a40;
  xunknown8 xStack_a38;
  xunknown8 xStack_a30;
  xunknown8 xStack_a28;
  xunknown8 xStack_a20;
  xunknown8 xStack_a18;
  xunknown8 xStack_a10;
  xunknown8 xStack_a08;
  xunknown8 xStack_a00;
  xunknown8 xStack_9f8;
  xunknown8 xStack_9f0;
  xunknown8 xStack_9e8;
  xunknown8 xStack_9e0;
  xunknown8 xStack_9d8;
  xunknown8 xStack_9d0;
  xunknown8 xStack_9c8;
  xunknown8 xStack_9c0;
  xunknown8 xStack_9b8;
  xunknown8 xStack_9b0;
  xunknown8 xStack_9a8;
  xunknown8 xStack_9a0;
  xunknown8 xStack_990;
  xunknown8 xStack_988;
  xunknown8 xStack_980;
  xunknown8 xStack_978;
  xunknown8 xStack_970;
  xunknown8 xStack_968;
  xunknown8 xStack_960;
  xunknown8 xStack_958;
  xunknown8 xStack_950;
  xunknown8 xStack_948;
  xunknown8 xStack_940;
  xunknown8 xStack_938;
  xunknown8 xStack_930;
  xunknown8 xStack_928;
  xunknown8 xStack_920;
  xunknown8 xStack_918;
  xunknown8 xStack_910;
  xunknown8 xStack_908;
  xunknown8 xStack_900;
  xunknown8 xStack_8f8;
  xunknown8 xStack_8f0;
  xunknown8 xStack_8e8;
  xunknown8 xStack_8e0;
  xunknown8 xStack_8d8;
  xunknown8 xStack_8d0;
  xunknown8 xStack_8c0;
  xunknown8 xStack_8b8;
  xunknown8 xStack_8b0;
  xunknown8 xStack_8a8;
  xunknown8 xStack_8a0;
  xunknown8 xStack_898;
  xunknown8 xStack_890;
  xunknown8 xStack_888;
  xunknown8 xStack_880;
  xunknown8 xStack_878;
  xunknown8 xStack_870;
  xunknown8 xStack_868;
  xunknown8 xStack_860;
  xunknown8 xStack_858;
  xunknown8 xStack_850;
  xunknown8 xStack_848;
  xunknown8 xStack_840;
  xunknown8 xStack_838;
  xunknown8 xStack_830;
  xunknown8 xStack_828;
  xunknown8 xStack_820;
  xunknown8 xStack_818;
  xunknown8 xStack_810;
  xunknown8 xStack_808;
  xunknown8 xStack_800;
  xunknown2 xStack_7f8;
  xunknown8 xStack_7f4;
  xunknown8 xStack_7ec;
  xunknown8 xStack_7e4;
  xunknown8 xStack_7dc;
  xunknown8 xStack_7d4;
  xunknown8 xStack_7cc;
  xunknown8 xStack_7c4;
  xunknown8 xStack_7bc;
  xunknown8 xStack_7b4;
  xunknown8 xStack_7ac;
  xunknown8 xStack_7a4;
  xunknown8 xStack_79c;
  xunknown8 xStack_794;
  xunknown8 xStack_78c;
  xunknown8 xStack_784;
  xunknown8 xStack_77c;
  xunknown8 xStack_774;
  xunknown8 xStack_76c;
  xunknown8 xStack_764;
  xunknown8 xStack_75c;
  xunknown8 xStack_754;
  xunknown8 xStack_74c;
  xunknown8 xStack_744;
  xunknown8 xStack_73c;
  xunknown8 xStack_734;
  xunknown8 xStack_72c;
  xunknown8 xStack_724;
  xunknown8 xStack_71c;
  xunknown8 xStack_714;
  xunknown8 xStack_70c;
  xunknown8 xStack_704;
  xunknown8 xStack_6fc;
  xunknown8 xStack_6f4;
  xunknown8 xStack_6ec;
  xunknown8 xStack_6e4;
  xunknown8 xStack_6dc;
  xunknown8 xStack_6d4;
  xunknown8 xStack_6cc;
  xunknown8 xStack_6c4;
  xunknown8 xStack_6bc;
  xunknown8 xStack_6b4;
  xunknown8 xStack_6ac;
  xunknown8 xStack_6a4;
  xunknown8 xStack_69c;
  xunknown8 xStack_694;
  xunknown8 xStack_68c;
  xunknown8 xStack_684;
  xunknown8 xStack_67c;
  xunknown8 xStack_674;
  xunknown8 xStack_66c;
  xunknown8 xStack_664;
  xunknown8 xStack_65c;
  xunknown8 xStack_654;
  xunknown8 xStack_64c;
  xunknown8 xStack_644;
  xunknown8 xStack_63c;
  xunknown8 xStack_634;
  xunknown8 xStack_62c;
  xunknown8 xStack_624;
  xunknown8 xStack_61c;
  xunknown8 xStack_614;
  xunknown8 xStack_60c;
  xunknown8 xStack_604;
  xunknown8 xStack_5fc;
  xunknown8 xStack_5f4;
  xunknown8 xStack_5ec;
  xunknown4 xStack_5e4;
  xunknown4 xStack_5e0;
  xunknown4 xStack_5dc;
  xunknown2 xStack_5d8;
  float4 fStack_5d4;
  xunknown1 xStack_5d0;
  xunknown4 xStack_5cc;
  xunknown4 xStack_5c8;
  xunknown4 xStack_5c4;
  xunknown4 xStack_5c0;
  xunknown1 xStack_5bc;
  xunknown8 xStack_5b8;
  xunknown8 xStack_5b0;
  xunknown4 xStack_5a8;
  uint1 uStack_5a4;
  xunknown8 xStack_5a0;
  xunknown1 xStack_598;
  xunknown4 xStack_594;
  xunknown4 xStack_590;
  xunknown4 xStack_58c;
  xunknown4 xStack_588;
  xunknown4 xStack_584;
  xunknown1 xStack_580;
  xunknown4 xStack_57c;
  float4 fStack_578;
  xunknown4 xStack_574;
  xunknown4 xStack_570;
  xunknown4 xStack_56c;
  xunknown4 xStack_568;
  xunknown4 xStack_564;
  uint1 uStack_560;
  xunknown4 xStack_55c;
  xunknown1 xStack_558;
  char cStack_551;
  xunknown8 xStack_550;
  xunknown8 xStack_548;
  xunknown8 xStack_540;
  xunknown8 xStack_538;
  xunknown8 xStack_530;
  xunknown8 xStack_528;
  xunknown8 xStack_520;
  xunknown8 xStack_518;
  xunknown8 xStack_510;
  xunknown8 xStack_508;
  xunknown8 xStack_500;
  xunknown8 xStack_4f8;
  xunknown8 xStack_4f0;
  xunknown8 xStack_4e8;
  xunknown8 xStack_4e0;
  xunknown8 xStack_4d8;
  xunknown8 xStack_4d0;
  xunknown8 xStack_4c8;
  xunknown8 xStack_4c0;
  xunknown8 xStack_4b8;
  xunknown8 xStack_4b0;
  xunknown8 xStack_4a8;
  xunknown8 xStack_4a0;
  xunknown8 xStack_498;
  xunknown8 xStack_490;
  xunknown8 xStack_488;
  xunknown8 xStack_480;
  xunknown8 xStack_478;
  xunknown8 xStack_470;
  xunknown8 xStack_468;
  xunknown8 xStack_460;
  xunknown8 xStack_458;
  xunknown8 xStack_450;
  xunknown8 xStack_448;
  xunknown8 xStack_440;
  xunknown8 xStack_438;
  xunknown8 xStack_430;
  xunknown8 xStack_428;
  xunknown8 xStack_420;
  xunknown8 xStack_418;
  xunknown8 xStack_410;
  xunknown8 xStack_408;
  xunknown8 xStack_400;
  xunknown8 xStack_3f8;
  xunknown8 xStack_3f0;
  xunknown8 xStack_3e8;
  xunknown8 xStack_3e0;
  xunknown8 xStack_3d8;
  xunknown8 xStack_3d0;
  xunknown8 xStack_3c8;
  xunknown8 xStack_3c0;
  xunknown8 xStack_3b8;
  xunknown8 xStack_3b0;
  xunknown8 xStack_3a8;
  xunknown8 xStack_3a0;
  xunknown8 xStack_398;
  xunknown8 xStack_390;
  xunknown8 xStack_388;
  xunknown8 xStack_380;
  xunknown8 xStack_378;
  xunknown8 xStack_370;
  xunknown8 xStack_368;
  xunknown8 xStack_360;
  xunknown8 xStack_358;
  xunknown8 xStack_350;
  xunknown8 xStack_348;
  xunknown8 xStack_340;
  xunknown8 xStack_338;
  xunknown8 xStack_330;
  xunknown8 xStack_328;
  xunknown8 xStack_320;
  xunknown8 xStack_318;
  xunknown8 xStack_310;
  xunknown8 xStack_308;
  xunknown8 xStack_300;
  xunknown8 xStack_2f8;
  xunknown8 xStack_2f0;
  xunknown8 xStack_2e8;
  xunknown8 xStack_2e0;
  xunknown8 xStack_2d8;
  xunknown8 xStack_2d0;
  xunknown8 xStack_2c8;
  xunknown8 *apxStack_2c0 [2];
  int8 iStack_2b0;
  xunknown8 *pxStack_2a8;
  xunknown8 xStack_2a0;
  xunknown8 xStack_298;
  xunknown8 xStack_290;
  xunknown8 xStack_288;
  xunknown8 xStack_280;
  xunknown8 xStack_278;
  xunknown8 xStack_270;
  xunknown8 xStack_268;
  xunknown8 xStack_260;
  xunknown8 xStack_258;
  xunknown8 xStack_250;
  xunknown8 xStack_248;
  xunknown8 xStack_240;
  xunknown8 xStack_238;
  xunknown8 xStack_230;
  xunknown8 xStack_228;
  xunknown8 xStack_220;
  xunknown8 xStack_218;
  xunknown8 xStack_210;
  xunknown8 xStack_208;
  xunknown8 xStack_200;
  xunknown8 xStack_1f8;
  xunknown8 xStack_1f0;
  xunknown8 xStack_1e8;
  xunknown8 xStack_1e0;
  xunknown8 xStack_1d8;
  xunknown8 xStack_1d0;
  xunknown8 xStack_1c8;
  xunknown8 xStack_1c0;
  xunknown8 xStack_1b8;
  xunknown8 xStack_1b0;
  xunknown8 xStack_1a8;
  xunknown8 xStack_1a0;
  xunknown8 xStack_198;
  xunknown8 xStack_190;
  xunknown8 xStack_188;
  xunknown8 xStack_180;
  xunknown8 xStack_178;
  xunknown8 xStack_170;
  xunknown8 xStack_168;
  xunknown8 xStack_160;
  xunknown8 xStack_158;
  xunknown8 xStack_150;
  xunknown8 xStack_148;
  xunknown8 xStack_140;
  xunknown8 xStack_138;
  xunknown8 xStack_130;
  xunknown8 xStack_128;
  xunknown8 xStack_120;
  xunknown8 xStack_118;
  xunknown8 xStack_110;
  xunknown8 xStack_108;
  xunknown8 xStack_100;
  xunknown8 xStack_f8;
  xunknown8 xStack_f0;
  xunknown8 xStack_e8;
  xunknown8 xStack_e0;
  xunknown8 xStack_d8;
  xunknown8 xStack_d0;
  xunknown8 xStack_c8;
  xunknown8 xStack_c0;
  xunknown8 xStack_b8;
  xunknown8 xStack_b0;
  xunknown8 xStack_a8;
  int8 iStack_98;
  
  pxVar6 = pxRam00000000000d31f8;
  iVar5 = tpidr_el0;
  iStack_98 = *(int8 *)(iVar5 + 0x28);
  pcVar11 = (char *)(*(code *)**(xunknown8 **)*pxRam00000000000d31f8)();
  uVar12 = (**(code **)(*(int8 *)*pxVar6 + 0xd0))((int8 *)*pxVar6);
  pcVar13 = pcVar11;
  if ((uVar12 & 1) != 0) {
    pcVar13 = (char *)(**(code **)(*(int8 *)*pxVar6 + 0xd8))();
  }
  pcVar22 = "com.rockstargames.gtasa";
  if ((pcVar11 != (char *)0x0) && (pcVar22 = "com.rockstargames.gtasa", *pcVar11 != '\0')) {
    pcVar22 = pcVar11;
  }
  FUN_0005a61c(0xd9060,0x100,0x100,0x370bb /* "/sdcard/Android_unprotected/data/%s" */,pcVar22);
  iVar14 = (**(code **)(*(int8 *)*pxVar6 + 0x78))();
  xStack_a8 = 0;
  xStack_b0 = 0;
  xStack_b8 = 0;
  xStack_c0 = 0;
  xStack_c8 = 0;
  xStack_d0 = 0;
  xStack_d8 = 0;
  xStack_e0 = 0;
  xStack_e8 = 0;
  xStack_f0 = 0;
  xStack_f8 = 0;
  xStack_100 = 0;
  xStack_108 = 0;
  xStack_110 = 0;
  xStack_118 = 0;
  xStack_120 = 0;
  xStack_128 = 0;
  xStack_130 = 0;
  xStack_138 = 0;
  xStack_140 = 0;
  xStack_148 = 0;
  xStack_150 = 0;
  xStack_158 = 0;
  xStack_160 = 0;
  xStack_168 = 0;
  xStack_170 = 0;
  xStack_178 = 0;
  xStack_180 = 0;
  xStack_188 = 0;
  xStack_190 = 0;
  xStack_198 = 0;
  xStack_1a0 = 0;
  xStack_1a8 = 0;
  xStack_1b0 = 0;
  xStack_1b8 = 0;
  xStack_1c0 = 0;
  xStack_1c8 = 0;
  xStack_1d0 = 0;
  xStack_1d8 = 0;
  xStack_1e0 = 0;
  xStack_1e8 = 0;
  xStack_1f0 = 0;
  xStack_1f8 = 0;
  xStack_200 = 0;
  xStack_208 = 0;
  xStack_210 = 0;
  xStack_218 = 0;
  xStack_220 = 0;
  xStack_228 = 0;
  xStack_230 = 0;
  xStack_238 = 0;
  xStack_240 = 0;
  xStack_248 = 0;
  xStack_250 = 0;
  xStack_258 = 0;
  xStack_260 = 0;
  xStack_268 = 0;
  xStack_270 = 0;
  xStack_278 = 0;
  xStack_280 = 0;
  xStack_288 = 0;
  xStack_290 = 0;
  xStack_298 = 0;
  xStack_2a0 = 0;
  if (((pcVar13 != (char *)0x0) && (*pcVar13 != '\0')) &&
     (iVar9 = strcmp(pcVar13,pcVar22), iVar9 != 0)) {
    FUN_0005a61c(&xStack_1a0,0x100,0x100,0x370bb /* "/sdcard/Android_unprotected/data/%s" */,pcVar13);
    FUN_0005a61c(&xStack_2a0,0x100,0x100,0x2ebcc /* "/sdcard/Android/data/%s/files" */,pcVar13);
  }
  uVar12 = 0;
  apxStack_2c0[0] = (xunknown8 *)0xd9060;
  apxStack_2c0[1] = &xStack_1a0;
  iStack_2b0 = iVar14;
  pxStack_2a8 = &xStack_2a0;
code_r0x0005824c:
  if (((char *)apxStack_2c0[uVar12] != (char *)0x0) && (*(char *)apxStack_2c0[uVar12] != '\0')) {
    FUN_0005a61c(&xStack_550,0x100,0x100,0x2bfce);
    for (uVar15 = __strlen_chk(&xStack_550,0x100); (1 < uVar15 && ((&cStack_551)[uVar15] == '/'));
        uVar15 = uVar15 - 1) {
      (&cStack_551)[uVar15] = '\0';
    }
    if (1 < uVar12) {
      FUN_0005a61c(&xStack_7f8,0x100,0x100,0x2bfce,&xStack_550);
      iVar23 = 1;
      do {
        if (*(char *)((int8)&xStack_7f8 + iVar23) == '/') {
          *(xunknown1 *)((int8)&xStack_7f8 + iVar23) = 0;
          mkdir(&xStack_7f8,0x1fd);
          *(xunknown1 *)((int8)&xStack_7f8 + iVar23) = 0x2f;
        }
        else if (*(char *)((int8)&xStack_7f8 + iVar23) == '\0') goto code_r0x00058320;
        iVar23 = iVar23 + 1;
      } while( true );
    }
    if ((((char)xStack_550 == '\0') || (iVar9 = stat(&xStack_550,&xStack_7f8), iVar9 != 0)) ||
       (((uint4)xStack_7ec._4_4_ & 0xf000) != 0x4000)) goto code_r0x00058240;
    goto code_r0x00058218;
  }
  goto code_r0x00058240;
code_r0x00058320:
  mkdir(&xStack_7f8,0x1fd);
code_r0x00058218:
  FUN_0005a61c(&xStack_7f8,300,300,0x30e10 /* "%s/.zyzgfx_w" */,&xStack_550);
  iVar23 = fopen(&xStack_7f8,0x3a1ef);
  if (iVar23 != 0) {
    fclose();
    unlink(&xStack_7f8);
    FUN_0005a61c(0xd9160,0x100,0x100,0x2bfce,&xStack_550);
    goto code_r0x0005835c;
  }
code_r0x00058240:
  uVar12 = uVar12 + 1;
  if (uVar12 == 4) goto code_r0x0005835c;
  goto code_r0x0005824c;
code_r0x0005835c:
  if (cRam00000000000d9160 == '\0') {
    FUN_0005a61c(0xd9160,0x100,0x100,0x2bfce,0xd9060);
  }
  pxVar7 = pxRam00000000000d3200;
  xStack_2c8 = 0;
  xStack_2d0 = 0;
  xStack_2d8 = 0;
  xStack_2e0 = 0;
  xStack_2e8 = 0;
  xStack_2f0 = 0;
  xStack_2f8 = 0;
  xStack_300 = 0;
  xStack_308 = 0;
  xStack_310 = 0;
  xStack_318 = 0;
  xStack_320 = 0;
  xStack_328 = 0;
  xStack_330 = 0;
  xStack_338 = 0;
  xStack_340 = 0;
  xStack_348 = 0;
  xStack_350 = 0;
  xStack_358 = 0;
  xStack_360 = 0;
  xStack_368 = 0;
  xStack_370 = 0;
  xStack_378 = 0;
  xStack_380 = 0;
  xStack_388 = 0;
  xStack_390 = 0;
  xStack_398 = 0;
  xStack_3a0 = 0;
  xStack_3a8 = 0;
  xStack_3b0 = 0;
  xStack_3b8 = 0;
  xStack_3c0 = 0;
  xStack_3c8 = 0;
  xStack_3d0 = 0;
  xStack_3d8 = 0;
  xStack_3e0 = 0;
  xStack_3e8 = 0;
  xStack_3f0 = 0;
  xStack_3f8 = 0;
  xStack_400 = 0;
  xStack_408 = 0;
  xStack_410 = 0;
  xStack_418 = 0;
  xStack_420 = 0;
  xStack_428 = 0;
  xStack_430 = 0;
  xStack_438 = 0;
  xStack_440 = 0;
  xStack_448 = 0;
  xStack_450 = 0;
  xStack_458 = 0;
  xStack_460 = 0;
  xStack_468 = 0;
  xStack_470 = 0;
  xStack_478 = 0;
  xStack_480 = 0;
  xStack_488 = 0;
  xStack_490 = 0;
  xStack_498 = 0;
  xStack_4a0 = 0;
  xStack_4a8 = 0;
  xStack_4b0 = 0;
  xStack_4b8 = 0;
  xStack_4c0 = 0;
  xStack_4c8 = 0;
  xStack_4d0 = 0;
  xStack_4d8 = 0;
  xStack_4e0 = 0;
  xStack_4e8 = 0;
  xStack_4f0 = 0;
  xStack_4f8 = 0;
  xStack_500 = 0;
  xStack_508 = 0;
  xStack_510 = 0;
  xStack_518 = 0;
  xStack_520 = 0;
  xStack_528 = 0;
  xStack_530 = 0;
  xStack_538 = 0;
  xStack_540 = 0;
  xStack_548 = 0;
  xStack_550 = 0;
  xVar16 = Config__Bind_plt(*pxRam00000000000d3200,0x32d65 /* "LogPath" */,0x29893,0x2ebea /* "General" */);
  ConfigEntry__GetString_plt(xVar16,&xStack_3c0,0x100);
  pxVar6 = pxRam00000000000d31f8;
  if ((char)xStack_3c0 != '\0') {
    if ((char)xStack_3c0 == '/') {
      FUN_0005a61c(&xStack_7f8,300,300,0x2bfce,&xStack_3c0);
    }
    else {
      FUN_0005a61c(&xStack_7f8,300,300,0x2655c /* "%s/%s" */,0xd9160,&xStack_3c0);
    }
    for (uVar12 = __strlen_chk(&xStack_7f8,300);
        (1 < uVar12 && (*(char *)((int8)&xStack_800 + uVar12 + 7) == '/')); uVar12 = uVar12 - 1) {
      *(xunknown1 *)((int8)&xStack_800 + uVar12 + 7) = 0;
    }
    uVar12 = __strlen_chk(&xStack_7f8,300);
    if ((uVar12 < 5) || (iVar9 = strcasecmp((int8)&xStack_800 + uVar12 + 4,0x2ebf2 /* ".log" */), iVar9 != 0)) {
      FUN_0005a61c(acStack_cf0,0x100,0x100,0x2bfce,&xStack_7f8);
      iVar23 = 1;
      do {
        if (acStack_cf0[iVar23] == '/') {
          acStack_cf0[iVar23] = '\0';
          mkdir(acStack_cf0,0x1fd);
          acStack_cf0[iVar23] = '/';
        }
        else if (acStack_cf0[iVar23] == '\0') goto code_r0x00058594;
        iVar23 = iVar23 + 1;
      } while( true );
    }
    FUN_0005a61c(acStack_cf0,300,300,0x2bfce,&xStack_7f8);
    pxVar17 = (xunknown1 *)__strrchr_chk(acStack_cf0,0x2f,300);
    if (pxVar17 != (xunknown1 *)0x0) {
      *pxVar17 = 0;
      if (acStack_cf0[0] != '\0') {
        FUN_0005a61c(&xStack_e80,0x100,0x100,0x2bfce,acStack_cf0);
        iVar23 = 1;
        do {
          if (axStack_e08[iVar23 + -0x78] == '/') {
            axStack_e08[iVar23 + -0x78] = 0;
            mkdir(&xStack_e80,0x1fd);
            axStack_e08[iVar23 + -0x78] = 0x2f;
          }
          else if (axStack_e08[iVar23 + -0x78] == '\0') goto code_r0x0005a548;
          iVar23 = iVar23 + 1;
        } while( true );
      }
    }
    goto code_r0x0005a554;
  }
  bVar8 = false;
  goto code_r0x000585d8;
code_r0x00058594:
  mkdir(acStack_cf0,0x1fd);
  xVar16 = 0x3226f /* "%s/ZyZGfx.log" */;
  goto code_r0x000585a8;
code_r0x0005a548:
  mkdir(&xStack_e80,0x1fd);
code_r0x0005a554:
  xVar16 = 0x2bfce;
code_r0x000585a8:
  FUN_0005a61c(&xStack_550,400,400,xVar16,&xStack_7f8);
  iRam00000000000d9040 = fopen(&xStack_550,0x3a1ef);
  bVar8 = iRam00000000000d9040 == 0;
code_r0x000585d8:
  xVar16 = 0x29893;
  if (iRam00000000000d9040 == 0) {
    FUN_0005a61c(&xStack_550,400,400,0x3226f /* "%s/ZyZGfx.log" */,0xd9160);
    iRam00000000000d9040 = fopen(&xStack_550,0x3a1ef);
    xVar16 = 0x22d3c /* " (COULD NOT BE WRITTEN)" */;
    if (iRam00000000000d9040 != 0) {
      xVar16 = 0x29893;
    }
  }
  GfxLog_plt(0,0x3a1f1 /* "ZyZ Gfx %s (Android arm64) by ZyZz reincarnate - log: %s%s" */,*pxRam00000000000d31d0 + 0x60,&xStack_550,xVar16);
  if (bVar8) {
    GfxLog_plt(1,0x2a595 /* "ini: [General] LogPath '%s' could not be written - the log went to the..." */,&xStack_3c0);
  }
  pcVar22 = "?";
  if (pcVar11 != (char *)0x0) {
    pcVar22 = pcVar11;
  }
  uVar12 = (**(code **)(*(int8 *)*pxVar6 + 0xd0))();
  xVar16 = 0x25c41 /* " (faked in AML, real package " */;
  if ((uVar12 & 1) == 0) {
    xVar16 = 0x29893;
  }
  uVar12 = (**(code **)(*(int8 *)*pxVar6 + 0xd0))((int8 *)*pxVar6);
  pcVar11 = "?";
  if (pcVar13 != (char *)0x0) {
    pcVar11 = pcVar13;
  }
  if ((uVar12 & 1) == 0) {
    pcVar11 = "";
  }
  uVar12 = (**(code **)(*(int8 *)*pxVar6 + 0xd0))((int8 *)*pxVar6);
  xVar19 = 0x2b3b3;
  if ((uVar12 & 1) == 0) {
    xVar19 = 0x29893;
  }
  iVar23 = 0x25c5f /* "(none)" */;
  if (iVar14 != 0) {
    iVar23 = iVar14;
  }
  GfxLog_plt(0,0x2a048 /* "game package %s%s%s%s, AML data path %s, data folder %s" */,pcVar22,xVar16,pcVar11,xVar19,iVar23,0xd9160);
  iVar14 = (**(code **)(*(int8 *)*pxVar6 + 0xe0))((int8 *)*pxVar6,0x3d204 /* "libGTASA.so" */);
  if (iVar14 == 0) {
    xVar16 = 0x222e8;
  }
  else {
    FUN_0005a61c(&xStack_7f8,300,300,0x2911f /* "%s/ZyZGfx" */,0xd9160);
    mkdir(&xStack_7f8,0x1fd);
    boot__Begin_plt(xRam00000000000d31d8,&xStack_7f8);
    iVar23 = Config__Bind_plt_1(*pxVar7,0x22342 /* "IniVersion" */,0x14,0x2ebea /* "General" */);
    iVar9 = *(int4 *)(iVar23 + 0x90);
    ConfigEntry__SetInt_plt(iVar23,0x1c);
    xStack_7f8 = 0x101;
    xStack_7ec = xRam0000000000022068;
    xStack_7f4 = xRam0000000000022060;
    xStack_5d8 = 0x101;
    xStack_7dc = 0;
    xStack_7e4 = 0;
    xStack_7cc = 0;
    xStack_7d4 = 0;
    xStack_7bc = 0;
    xStack_7c4 = 0;
    xStack_7ac = 0;
    xStack_7b4 = 0;
    xStack_79c = 0;
    xStack_7a4 = 0;
    xStack_78c = 0;
    xStack_794 = 0;
    xStack_77c = 0;
    xStack_784 = 0;
    xStack_76c = 0;
    xStack_774 = 0;
    xStack_75c = 0;
    xStack_764 = 0;
    xStack_74c = 0;
    xStack_754 = 0;
    xStack_73c = 0;
    xStack_744 = 0;
    xStack_72c = 0;
    xStack_734 = 0;
    xStack_71c = 0;
    xStack_724 = 0;
    xStack_70c = 0;
    xStack_714 = 0;
    xStack_6fc = 0;
    xStack_704 = 0;
    xStack_5b0 = xRam00000000000221f8;
    xStack_5b8 = xRam00000000000221f0;
    xStack_5a8 = 0x40800000;
    fStack_5d4 = 0.85;
    xStack_5a0 = xRam00000000000222d8;
    xStack_5d0 = 1;
    xStack_5bc = 1;
    uStack_5a4 = 1;
    xStack_598 = 1;
    xStack_580 = 1;
    uStack_560 = 1;
    xStack_6ec = 0;
    xStack_6f4 = 0;
    xStack_6dc = 0;
    xStack_6e4 = 0;
    xStack_6cc = 0;
    xStack_6d4 = 0;
    xStack_6bc = 0;
    xStack_6c4 = 0;
    xStack_6ac = 0;
    xStack_6b4 = 0;
    xStack_69c = 0;
    xStack_6a4 = 0;
    xStack_68c = 0;
    xStack_694 = 0;
    xStack_67c = 0;
    xStack_684 = 0;
    xStack_66c = 0;
    xStack_674 = 0;
    xStack_65c = 0;
    xStack_664 = 0;
    xStack_64c = 0;
    xStack_654 = 0;
    xStack_63c = 0;
    xStack_644 = 0;
    xStack_62c = 0;
    xStack_634 = 0;
    xStack_61c = 0;
    xStack_624 = 0;
    xStack_60c = 0;
    xStack_614 = 0;
    xStack_5fc = 0;
    xStack_604 = 0;
    xStack_5ec = 0;
    xStack_5f4 = 0;
    xStack_5dc = 0;
    xStack_584 = 0x3fc00000;
    xStack_564 = 0x40400000;
    xStack_55c = 2;
    xStack_558 = 0;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x2bfd1 /* "Post" */);
    xStack_7f8 = CONCAT11(xStack_7f8._1_1_,*(int4 *)(iVar23 + 0x90) != 0);
    iVar23 = Config__Bind_plt_3(0x3f000000,*pxVar7,0x23ed6 /* "Tonemap" */,0x2bfd1 /* "Post" */);
    xStack_7f4 = CONCAT44(xStack_7f4._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f19999a,*pxVar7,0x3fb92 /* "Exposure" */,0x2bfd1 /* "Post" */);
    xStack_7f4 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_7f4);
    iVar23 = Config__Bind_plt_3(0x3f866666,*pxVar7,0x39834 /* "Saturation" */,0x2bfd1 /* "Post" */);
    xStack_7ec = CONCAT44(xStack_7ec._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x32d6d /* "Contrast" */,0x2bfd1 /* "Post" */);
    xStack_7ec = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_7ec);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x26562 /* "Grading" */);
    iVar1 = *(int4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2234d /* "Strength" */,0x26562 /* "Grading" */);
    xVar26 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0,*pxVar7,0x2daa2 /* "Sharpen" */,0x2bfd1 /* "Post" */);
    xStack_5e0 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0,*pxVar7,0x22d54 /* "FilmGrain" */,0x2bfd1 /* "Post" */);
    xStack_5dc = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2781b /* "Dither" */,1,0x2bfd1 /* "Post" */);
    xStack_7f8 = CONCAT11(*(int4 *)(iVar23 + 0x90) != 0,(uint1)xStack_7f8);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29129 /* "FXAA" */,1,0x2bfd1 /* "Post" */);
    xStack_800 = 0;
    xStack_838 = 0;
    xStack_840 = 0;
    xStack_828 = 0;
    xStack_830 = 0;
    xStack_808 = 0;
    xStack_810 = 0;
    xStack_818 = 0;
    xStack_820 = 0;
    xStack_5d8 = CONCAT11(xStack_5d8._1_1_,*(int4 *)(iVar23 + 0x90) != 0);
    xStack_848 = 0;
    xStack_850 = 0;
    xStack_858 = 0;
    xStack_860 = 0;
    xStack_868 = 0;
    xStack_870 = 0;
    xStack_878 = 0;
    xStack_880 = 0;
    xStack_888 = 0;
    xStack_890 = 0;
    xStack_898 = 0;
    xStack_8a0 = 0;
    xStack_8a8 = 0;
    xStack_8b0 = 0;
    xStack_8b8 = 0;
    xStack_8c0 = 0;
    xVar16 = Config__Bind_plt(*pxVar7,0x3fb9b /* "GradeShader" */,0x29893,0x2bfd1 /* "Post" */);
    ConfigEntry__GetString_plt(xVar16,&xStack_8c0,200);
    FUN_0005a6c0(&xStack_7e4,0x100,&xStack_8c0);
    if (xStack_7ec._4_4_ <= 0.0) {
      GfxLog_plt((float8)xStack_7ec._4_4_,1,0x3572d /* "ini: [Post] Contrast = %.2f would make the screen flat grey - using 1...." */);
      xStack_7ec = CONCAT44(0x3f800000,(xunknown4)xStack_7ec);
    }
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x2656a);
    uVar20 = *(int4 *)(iVar23 + 0x90) != 0 & (uint1)xStack_7f8;
    auStack_e94[0] = uVar20;
    iVar23 = Config__Bind_plt_1(*pxVar7,0x3d210 /* "Format" */,0,0x2656a);
    xStack_e90 = *(xunknown4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_3(0x40800000,*pxVar7,0x3983f /* "HighlightRange" */,0x2656a);
    xStack_5a0 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_5a0);
    uStack_5a4 = uVar20;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x35775);
    xStack_5d8 = CONCAT11(*(int4 *)(iVar23 + 0x90) != 0,(xunknown1)xStack_5d8);
    iVar23 = Config__Bind_plt_3(0x3f59999a,*pxVar7,0x2bfd6 /* "History" */,0x35775);
    fVar24 = 0.0;
    if (0.0 <= *(float4 *)(iVar23 + 0x8c)) {
      fVar24 = *(float4 *)(iVar23 + 0x8c);
    }
    fStack_5d4 = 0.97;
    if (fVar24 <= 0.97) {
      fStack_5d4 = fVar24;
    }
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x30ddc);
    axStack_ea8[0] = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3f400000,*pxVar7,0x2989b /* "RenderScale" */,0x30ddc);
    fStack_ea4 = *(float4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f4ccccd,*pxVar7,0x40491 /* "Sharpness" */,0x30ddc);
    xStack_ea0 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x32d76 /* "FastSharpen" */,1,0x30ddc);
    xStack_e9c = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_1(*pxVar7,0x3fba7 /* "Mode" */,0,0x30ddc);
    xStack_e98 = *(xunknown4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x35779 /* "Bloom" */);
    xStack_5bc = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3dcccccd,*pxVar7,0x32d82 /* "Intensity" */,0x35779 /* "Bloom" */);
    xStack_5b8 = CONCAT44(xStack_5b8._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f19999a,*pxVar7,0x40b76 /* "Threshold" */,0x35779 /* "Bloom" */);
    xStack_5b8 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_5b8);
    iVar23 = Config__Bind_plt_3(0x3e99999a,*pxVar7,0x3a22c /* "SoftKnee" */,0x35779 /* "Bloom" */);
    xStack_5b0 = CONCAT44(xStack_5b0._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f19999a,*pxVar7,0x298a7 /* "NightThreshold" */,0x35779 /* "Bloom" */);
    xStack_5b0 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_5b0);
    iVar23 = Config__Bind_plt_3(0x40800000,*pxVar7,0x40b80 /* "NightGlow" */,0x35779 /* "Bloom" */);
    xStack_5a8 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x34b4a /* "AutoExposure" */);
    xStack_598 = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3f000000,*pxVar7,0x2234d /* "Strength" */,0x34b4a /* "AutoExposure" */);
    xStack_594 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3de147ae,*pxVar7,0x2d455,0x34b4a /* "AutoExposure" */);
    xStack_590 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f000000,*pxVar7,0x2656e,0x34b4a /* "AutoExposure" */);
    xStack_58c = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x40200000,*pxVar7,0x3d217,0x34b4a /* "AutoExposure" */);
    xStack_588 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3fc00000,*pxVar7,0x27822 /* "Speed" */,0x34b4a /* "AutoExposure" */);
    xStack_584 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x298b6 /* "SunRays" */);
    xStack_5d0 = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3f19999a,*pxVar7,0x32d82 /* "Intensity" */,0x298b6 /* "SunRays" */);
    xStack_5cc = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f000000,*pxVar7,0x27828 /* "Radius" */,0x298b6 /* "SunRays" */);
    xStack_5c8 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f666666,*pxVar7,0x2ebf7 /* "Density" */,0x298b6 /* "SunRays" */);
    xStack_5c4 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f70a3d7,*pxVar7,0x3fbac /* "Decay" */,0x298b6 /* "SunRays" */);
    xStack_5c0 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x3d21b);
    xStack_580 = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3ac49ba6,*pxVar7,0x2ebf7 /* "Density" */,0x3d21b);
    xStack_57c = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3d3851ec,*pxVar7,0x22356 /* "HeightFalloff" */,0x3d21b);
    fStack_578 = *(float4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0,*pxVar7,0x2a5f0 /* "BaseHeight" */,0x3d21b);
    xStack_574 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x39d1b717,*pxVar7,0x4049b /* "HazeDensity" */,0x3d21b);
    xStack_570 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x42200000,*pxVar7,0x2a5fb /* "HazeStart" */,0x3d21b);
    xStack_56c = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f59999a,*pxVar7,0x34b57 /* "MaxOpacity" */,0x3d21b);
    xStack_568 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x40400000,*pxVar7,0x40b8a /* "FoggyWeather" */,0x3d21b);
    xStack_564 = *(xunknown4 *)(iVar23 + 0x8c);
    if (fStack_578 < 0.001) {
      fStack_578 = 0.001;
    }
    xStack_8d0 = 0;
    xStack_8d8 = 0;
    xStack_8e0 = 0;
    xStack_8e8 = 0;
    xStack_8f0 = 0;
    xStack_8f8 = 0;
    xStack_900 = 0;
    xStack_908 = 0;
    xStack_910 = 0;
    xStack_918 = 0;
    xStack_920 = 0;
    xStack_928 = 0;
    xStack_930 = 0;
    xStack_938 = 0;
    xStack_940 = 0;
    xStack_948 = 0;
    xStack_950 = 0;
    xStack_958 = 0;
    xStack_960 = 0;
    xStack_968 = 0;
    xStack_970 = 0;
    xStack_978 = 0;
    xStack_980 = 0;
    xStack_988 = 0;
    xStack_990 = 0;
    xStack_9a0 = 0;
    xStack_9a8 = 0;
    xStack_9b0 = 0;
    xStack_9b8 = 0;
    xStack_9c0 = 0;
    xStack_9c8 = 0;
    xStack_9d0 = 0;
    xStack_9d8 = 0;
    xStack_9e0 = 0;
    xStack_9e8 = 0;
    xStack_9f0 = 0;
    xStack_9f8 = 0;
    xStack_a00 = 0;
    xStack_a08 = 0;
    xStack_a10 = 0;
    xStack_a18 = 0;
    xStack_a20 = 0;
    xStack_a28 = 0;
    xStack_a30 = 0;
    xStack_a38 = 0;
    xStack_a40 = 0;
    xStack_a48 = 0;
    xStack_a50 = 0;
    xStack_a58 = 0;
    xStack_a60 = 0;
    xVar16 = Config__Bind_plt(*pxVar7,0x26572 /* "Folder" */,0x23ede /* "ZyZGfx/LUT" */,0x298be);
    ConfigEntry__GetString_plt(xVar16,&xStack_990,200);
    xVar16 = Config__Bind_plt(*pxVar7,0x26579 /* "File" */,0x29893,0x298be);
    ConfigEntry__GetString_plt(xVar16,&xStack_a60,200);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2234d /* "Strength" */,0x298be);
    xStack_5e4 = *(xunknown4 *)(iVar23 + 0x8c);
    if ((char)xStack_a60 != '\0') {
      xStack_a68 = 0;
      xStack_a70 = 0;
      xStack_a78 = 0;
      xStack_a80 = 0;
      xStack_a88 = 0;
      xStack_a90 = 0;
      xStack_a98 = 0;
      xStack_aa0 = 0;
      xStack_aa8 = 0;
      xStack_ab0 = 0;
      xStack_ab8 = 0;
      xStack_ac0 = 0;
      xStack_ac8 = 0;
      xStack_ad0 = 0;
      xStack_ad8 = 0;
      xStack_ae0 = 0;
      xStack_ae8 = 0;
      xStack_af0 = 0;
      xStack_af8 = 0;
      xStack_b00 = 0;
      xStack_b08 = 0;
      xStack_b10 = 0;
      acStack_cf0[8] = '\0';
      acStack_cf0[9] = '\0';
      acStack_cf0[10] = '\0';
      acStack_cf0[0xb] = '\0';
      acStack_cf0[0xc] = '\0';
      acStack_cf0[0xd] = '\0';
      acStack_cf0[0xe] = '\0';
      acStack_cf0[0xf] = '\0';
      acStack_cf0[0] = '\0';
      acStack_cf0[1] = '\0';
      acStack_cf0[2] = '\0';
      acStack_cf0[3] = '\0';
      acStack_cf0[4] = '\0';
      acStack_cf0[5] = '\0';
      acStack_cf0[6] = '\0';
      acStack_cf0[7] = '\0';
      acStack_cf0[0x18] = '\0';
      acStack_cf0[0x19] = '\0';
      acStack_cf0[0x1a] = '\0';
      acStack_cf0[0x1b] = '\0';
      acStack_cf0[0x1c] = '\0';
      acStack_cf0[0x1d] = '\0';
      acStack_cf0[0x1e] = '\0';
      acStack_cf0[0x1f] = '\0';
      acStack_cf0[0x10] = '\0';
      acStack_cf0[0x11] = '\0';
      acStack_cf0[0x12] = '\0';
      acStack_cf0[0x13] = '\0';
      acStack_cf0[0x14] = '\0';
      acStack_cf0[0x15] = '\0';
      acStack_cf0[0x16] = '\0';
      acStack_cf0[0x17] = '\0';
      acStack_cf0[0x28] = '\0';
      acStack_cf0[0x29] = '\0';
      acStack_cf0[0x2a] = '\0';
      acStack_cf0[0x2b] = '\0';
      acStack_cf0[0x2c] = '\0';
      acStack_cf0[0x2d] = '\0';
      acStack_cf0[0x2e] = '\0';
      acStack_cf0[0x2f] = '\0';
      acStack_cf0[0x20] = '\0';
      acStack_cf0[0x21] = '\0';
      acStack_cf0[0x22] = '\0';
      acStack_cf0[0x23] = '\0';
      acStack_cf0[0x24] = '\0';
      acStack_cf0[0x25] = '\0';
      acStack_cf0[0x26] = '\0';
      acStack_cf0[0x27] = '\0';
      acStack_cf0[0x38] = '\0';
      acStack_cf0[0x39] = '\0';
      acStack_cf0[0x3a] = '\0';
      acStack_cf0[0x3b] = '\0';
      acStack_cf0[0x3c] = '\0';
      acStack_cf0[0x3d] = '\0';
      acStack_cf0[0x3e] = '\0';
      acStack_cf0[0x3f] = '\0';
      acStack_cf0[0x30] = '\0';
      acStack_cf0[0x31] = '\0';
      acStack_cf0[0x32] = '\0';
      acStack_cf0[0x33] = '\0';
      acStack_cf0[0x34] = '\0';
      acStack_cf0[0x35] = '\0';
      acStack_cf0[0x36] = '\0';
      acStack_cf0[0x37] = '\0';
      acStack_cf0[0x48] = '\0';
      acStack_cf0[0x49] = '\0';
      acStack_cf0[0x4a] = '\0';
      acStack_cf0[0x4b] = '\0';
      acStack_cf0[0x4c] = '\0';
      acStack_cf0[0x4d] = '\0';
      acStack_cf0[0x4e] = '\0';
      acStack_cf0[0x4f] = '\0';
      acStack_cf0[0x40] = '\0';
      acStack_cf0[0x41] = '\0';
      acStack_cf0[0x42] = '\0';
      acStack_cf0[0x43] = '\0';
      acStack_cf0[0x44] = '\0';
      acStack_cf0[0x45] = '\0';
      acStack_cf0[0x46] = '\0';
      acStack_cf0[0x47] = '\0';
      acStack_cf0[0x58] = '\0';
      acStack_cf0[0x59] = '\0';
      acStack_cf0[0x5a] = '\0';
      acStack_cf0[0x5b] = '\0';
      acStack_cf0[0x5c] = '\0';
      acStack_cf0[0x5d] = '\0';
      acStack_cf0[0x5e] = '\0';
      acStack_cf0[0x5f] = '\0';
      acStack_cf0[0x50] = '\0';
      acStack_cf0[0x51] = '\0';
      acStack_cf0[0x52] = '\0';
      acStack_cf0[0x53] = '\0';
      acStack_cf0[0x54] = '\0';
      acStack_cf0[0x55] = '\0';
      acStack_cf0[0x56] = '\0';
      acStack_cf0[0x57] = '\0';
      acStack_cf0[0x68] = '\0';
      acStack_cf0[0x69] = '\0';
      acStack_cf0[0x6a] = '\0';
      acStack_cf0[0x6b] = '\0';
      acStack_cf0[0x6c] = '\0';
      acStack_cf0[0x6d] = '\0';
      acStack_cf0[0x6e] = '\0';
      acStack_cf0[0x6f] = '\0';
      acStack_cf0[0x60] = '\0';
      acStack_cf0[0x61] = '\0';
      acStack_cf0[0x62] = '\0';
      acStack_cf0[99] = '\0';
      acStack_cf0[100] = '\0';
      acStack_cf0[0x65] = '\0';
      acStack_cf0[0x66] = '\0';
      acStack_cf0[0x67] = '\0';
      acStack_cf0[0x78] = '\0';
      acStack_cf0[0x79] = '\0';
      acStack_cf0[0x7a] = '\0';
      acStack_cf0[0x7b] = '\0';
      acStack_cf0[0x7c] = '\0';
      acStack_cf0[0x7d] = '\0';
      acStack_cf0[0x7e] = '\0';
      acStack_cf0[0x7f] = '\0';
      acStack_cf0[0x70] = '\0';
      acStack_cf0[0x71] = '\0';
      acStack_cf0[0x72] = '\0';
      acStack_cf0[0x73] = '\0';
      acStack_cf0[0x74] = '\0';
      acStack_cf0[0x75] = '\0';
      acStack_cf0[0x76] = '\0';
      acStack_cf0[0x77] = '\0';
      acStack_cf0[0x88] = '\0';
      acStack_cf0[0x89] = '\0';
      acStack_cf0[0x8a] = '\0';
      acStack_cf0[0x8b] = '\0';
      acStack_cf0[0x8c] = '\0';
      acStack_cf0[0x8d] = '\0';
      acStack_cf0[0x8e] = '\0';
      acStack_cf0[0x8f] = '\0';
      acStack_cf0[0x80] = '\0';
      acStack_cf0[0x81] = '\0';
      acStack_cf0[0x82] = '\0';
      acStack_cf0[0x83] = '\0';
      acStack_cf0[0x84] = '\0';
      acStack_cf0[0x85] = '\0';
      acStack_cf0[0x86] = '\0';
      acStack_cf0[0x87] = '\0';
      acStack_cf0[0x98] = '\0';
      acStack_cf0[0x99] = '\0';
      acStack_cf0[0x9a] = '\0';
      acStack_cf0[0x9b] = '\0';
      acStack_cf0[0x9c] = '\0';
      acStack_cf0[0x9d] = '\0';
      acStack_cf0[0x9e] = '\0';
      acStack_cf0[0x9f] = '\0';
      acStack_cf0[0x90] = '\0';
      acStack_cf0[0x91] = '\0';
      acStack_cf0[0x92] = '\0';
      acStack_cf0[0x93] = '\0';
      acStack_cf0[0x94] = '\0';
      acStack_cf0[0x95] = '\0';
      acStack_cf0[0x96] = '\0';
      acStack_cf0[0x97] = '\0';
      acStack_cf0[0xa8] = '\0';
      acStack_cf0[0xa9] = '\0';
      acStack_cf0[0xaa] = '\0';
      acStack_cf0[0xab] = '\0';
      acStack_cf0[0xac] = '\0';
      acStack_cf0[0xad] = '\0';
      acStack_cf0[0xae] = '\0';
      acStack_cf0[0xaf] = '\0';
      acStack_cf0[0xa0] = '\0';
      acStack_cf0[0xa1] = '\0';
      acStack_cf0[0xa2] = '\0';
      acStack_cf0[0xa3] = '\0';
      acStack_cf0[0xa4] = '\0';
      acStack_cf0[0xa5] = '\0';
      acStack_cf0[0xa6] = '\0';
      acStack_cf0[0xa7] = '\0';
      acStack_cf0[0xb8] = '\0';
      acStack_cf0[0xb9] = '\0';
      acStack_cf0[0xba] = '\0';
      acStack_cf0[0xbb] = '\0';
      acStack_cf0[0xbc] = '\0';
      acStack_cf0[0xbd] = '\0';
      acStack_cf0[0xbe] = '\0';
      acStack_cf0[0xbf] = '\0';
      acStack_cf0[0xb0] = '\0';
      acStack_cf0[0xb1] = '\0';
      acStack_cf0[0xb2] = '\0';
      acStack_cf0[0xb3] = '\0';
      acStack_cf0[0xb4] = '\0';
      acStack_cf0[0xb5] = '\0';
      acStack_cf0[0xb6] = '\0';
      acStack_cf0[0xb7] = '\0';
      acStack_cf0[200] = '\0';
      acStack_cf0[0xc9] = '\0';
      acStack_cf0[0xca] = '\0';
      acStack_cf0[0xcb] = '\0';
      acStack_cf0[0xcc] = '\0';
      acStack_cf0[0xcd] = '\0';
      acStack_cf0[0xce] = '\0';
      acStack_cf0[0xcf] = '\0';
      acStack_cf0[0xc0] = '\0';
      acStack_cf0[0xc1] = '\0';
      acStack_cf0[0xc2] = '\0';
      acStack_cf0[0xc3] = '\0';
      acStack_cf0[0xc4] = '\0';
      acStack_cf0[0xc5] = '\0';
      acStack_cf0[0xc6] = '\0';
      acStack_cf0[199] = '\0';
      acStack_cf0[0xd8] = '\0';
      acStack_cf0[0xd9] = '\0';
      acStack_cf0[0xda] = '\0';
      acStack_cf0[0xdb] = '\0';
      acStack_cf0[0xdc] = '\0';
      acStack_cf0[0xdd] = '\0';
      acStack_cf0[0xde] = '\0';
      acStack_cf0[0xdf] = '\0';
      acStack_cf0[0xd0] = '\0';
      acStack_cf0[0xd1] = '\0';
      acStack_cf0[0xd2] = '\0';
      acStack_cf0[0xd3] = '\0';
      acStack_cf0[0xd4] = '\0';
      acStack_cf0[0xd5] = '\0';
      acStack_cf0[0xd6] = '\0';
      acStack_cf0[0xd7] = '\0';
      acStack_cf0[0xe8] = '\0';
      acStack_cf0[0xe9] = '\0';
      acStack_cf0[0xea] = '\0';
      acStack_cf0[0xeb] = '\0';
      acStack_cf0[0xec] = '\0';
      acStack_cf0[0xed] = '\0';
      acStack_cf0[0xee] = '\0';
      acStack_cf0[0xef] = '\0';
      acStack_cf0[0xe0] = '\0';
      acStack_cf0[0xe1] = '\0';
      acStack_cf0[0xe2] = '\0';
      acStack_cf0[0xe3] = '\0';
      acStack_cf0[0xe4] = '\0';
      acStack_cf0[0xe5] = '\0';
      acStack_cf0[0xe6] = '\0';
      acStack_cf0[0xe7] = '\0';
      acStack_cf0[0xf8] = '\0';
      acStack_cf0[0xf9] = '\0';
      acStack_cf0[0xfa] = '\0';
      acStack_cf0[0xfb] = '\0';
      acStack_cf0[0xfc] = '\0';
      acStack_cf0[0xfd] = '\0';
      acStack_cf0[0xfe] = '\0';
      acStack_cf0[0xff] = '\0';
      acStack_cf0[0xf0] = '\0';
      acStack_cf0[0xf1] = '\0';
      acStack_cf0[0xf2] = '\0';
      acStack_cf0[0xf3] = '\0';
      acStack_cf0[0xf4] = '\0';
      acStack_cf0[0xf5] = '\0';
      acStack_cf0[0xf6] = '\0';
      acStack_cf0[0xf7] = '\0';
      acStack_cf0[0x108] = '\0';
      acStack_cf0[0x109] = '\0';
      acStack_cf0[0x10a] = '\0';
      acStack_cf0[0x10b] = '\0';
      acStack_cf0[0x10c] = '\0';
      acStack_cf0[0x10d] = '\0';
      acStack_cf0[0x10e] = '\0';
      acStack_cf0[0x10f] = '\0';
      acStack_cf0[0x100] = '\0';
      acStack_cf0[0x101] = '\0';
      acStack_cf0[0x102] = '\0';
      acStack_cf0[0x103] = '\0';
      acStack_cf0[0x104] = '\0';
      acStack_cf0[0x105] = '\0';
      acStack_cf0[0x106] = '\0';
      acStack_cf0[0x107] = '\0';
      acStack_cf0[0x118] = '\0';
      acStack_cf0[0x119] = '\0';
      acStack_cf0[0x11a] = '\0';
      acStack_cf0[0x11b] = '\0';
      acStack_cf0[0x11c] = '\0';
      acStack_cf0[0x11d] = '\0';
      acStack_cf0[0x11e] = '\0';
      acStack_cf0[0x11f] = '\0';
      acStack_cf0[0x110] = '\0';
      acStack_cf0[0x111] = '\0';
      acStack_cf0[0x112] = '\0';
      acStack_cf0[0x113] = '\0';
      acStack_cf0[0x114] = '\0';
      acStack_cf0[0x115] = '\0';
      acStack_cf0[0x116] = '\0';
      acStack_cf0[0x117] = '\0';
      acStack_cf0[0x128] = '\0';
      acStack_cf0[0x129] = '\0';
      acStack_cf0[0x12a] = '\0';
      acStack_cf0[299] = '\0';
      acStack_cf0[300] = '\0';
      acStack_cf0[0x12d] = '\0';
      acStack_cf0[0x12e] = '\0';
      acStack_cf0[0x12f] = '\0';
      acStack_cf0[0x120] = '\0';
      acStack_cf0[0x121] = '\0';
      acStack_cf0[0x122] = '\0';
      acStack_cf0[0x123] = '\0';
      acStack_cf0[0x124] = '\0';
      acStack_cf0[0x125] = '\0';
      acStack_cf0[0x126] = '\0';
      acStack_cf0[0x127] = '\0';
      acStack_cf0[0x138] = '\0';
      acStack_cf0[0x139] = '\0';
      acStack_cf0[0x13a] = '\0';
      acStack_cf0[0x13b] = '\0';
      acStack_cf0[0x13c] = '\0';
      acStack_cf0[0x13d] = '\0';
      acStack_cf0[0x13e] = '\0';
      acStack_cf0[0x13f] = '\0';
      acStack_cf0[0x130] = '\0';
      acStack_cf0[0x131] = '\0';
      acStack_cf0[0x132] = '\0';
      acStack_cf0[0x133] = '\0';
      acStack_cf0[0x134] = '\0';
      acStack_cf0[0x135] = '\0';
      acStack_cf0[0x136] = '\0';
      acStack_cf0[0x137] = '\0';
      acStack_cf0[0x148] = '\0';
      acStack_cf0[0x149] = '\0';
      acStack_cf0[0x14a] = '\0';
      acStack_cf0[0x14b] = '\0';
      acStack_cf0[0x14c] = '\0';
      acStack_cf0[0x14d] = '\0';
      acStack_cf0[0x14e] = '\0';
      acStack_cf0[0x14f] = '\0';
      acStack_cf0[0x140] = '\0';
      acStack_cf0[0x141] = '\0';
      acStack_cf0[0x142] = '\0';
      acStack_cf0[0x143] = '\0';
      acStack_cf0[0x144] = '\0';
      acStack_cf0[0x145] = '\0';
      acStack_cf0[0x146] = '\0';
      acStack_cf0[0x147] = '\0';
      acStack_cf0[0x158] = '\0';
      acStack_cf0[0x159] = '\0';
      acStack_cf0[0x15a] = '\0';
      acStack_cf0[0x15b] = '\0';
      acStack_cf0[0x15c] = '\0';
      acStack_cf0[0x15d] = '\0';
      acStack_cf0[0x15e] = '\0';
      acStack_cf0[0x15f] = '\0';
      acStack_cf0[0x150] = '\0';
      acStack_cf0[0x151] = '\0';
      acStack_cf0[0x152] = '\0';
      acStack_cf0[0x153] = '\0';
      acStack_cf0[0x154] = '\0';
      acStack_cf0[0x155] = '\0';
      acStack_cf0[0x156] = '\0';
      acStack_cf0[0x157] = '\0';
      acStack_cf0[0x168] = '\0';
      acStack_cf0[0x169] = '\0';
      acStack_cf0[0x16a] = '\0';
      acStack_cf0[0x16b] = '\0';
      acStack_cf0[0x16c] = '\0';
      acStack_cf0[0x16d] = '\0';
      acStack_cf0[0x16e] = '\0';
      acStack_cf0[0x16f] = '\0';
      acStack_cf0[0x160] = '\0';
      acStack_cf0[0x161] = '\0';
      acStack_cf0[0x162] = '\0';
      acStack_cf0[0x163] = '\0';
      acStack_cf0[0x164] = '\0';
      acStack_cf0[0x165] = '\0';
      acStack_cf0[0x166] = '\0';
      acStack_cf0[0x167] = '\0';
      acStack_cf0[0x178] = '\0';
      acStack_cf0[0x179] = '\0';
      acStack_cf0[0x17a] = '\0';
      acStack_cf0[0x17b] = '\0';
      acStack_cf0[0x17c] = '\0';
      acStack_cf0[0x17d] = '\0';
      acStack_cf0[0x17e] = '\0';
      acStack_cf0[0x17f] = '\0';
      acStack_cf0[0x170] = '\0';
      acStack_cf0[0x171] = '\0';
      acStack_cf0[0x172] = '\0';
      acStack_cf0[0x173] = '\0';
      acStack_cf0[0x174] = '\0';
      acStack_cf0[0x175] = '\0';
      acStack_cf0[0x176] = '\0';
      acStack_cf0[0x177] = '\0';
      acStack_cf0[0x188] = '\0';
      acStack_cf0[0x189] = '\0';
      acStack_cf0[0x18a] = '\0';
      acStack_cf0[0x18b] = '\0';
      acStack_cf0[0x18c] = '\0';
      acStack_cf0[0x18d] = '\0';
      acStack_cf0[0x18e] = '\0';
      acStack_cf0[399] = '\0';
      acStack_cf0[0x180] = '\0';
      acStack_cf0[0x181] = '\0';
      acStack_cf0[0x182] = '\0';
      acStack_cf0[0x183] = '\0';
      acStack_cf0[0x184] = '\0';
      acStack_cf0[0x185] = '\0';
      acStack_cf0[0x186] = '\0';
      acStack_cf0[0x187] = '\0';
      xStack_b58 = 0;
      xStack_b60 = 0;
      xStack_b48 = 0;
      xStack_b50 = 0;
      xStack_b38 = 0;
      xStack_b40 = 0;
      xStack_b28 = 0;
      xStack_b30 = 0;
      xStack_b18 = 0;
      xStack_b20 = 0;
      if ((char)xStack_a60 == '/') {
        pxVar18 = &xStack_a60;
code_r0x00059208:
        FUN_0005a61c(acStack_cf0,400,400,0x2bfce,pxVar18);
      }
      else {
        pxVar18 = (xunknown8 *)0x298c2;
        if ((char)xStack_990 != '\0') {
          pxVar18 = &xStack_990;
        }
        FUN_0005a6c0(&xStack_b60,0x100,pxVar18);
        for (uVar12 = __strlen_chk(&xStack_b60,0x100);
            (1 < uVar12 && (acStack_cf0[uVar12 + 399] == '/')); uVar12 = uVar12 - 1) {
          acStack_cf0[uVar12 + 399] = '\0';
        }
        FUN_0005a61c(acStack_cf0,400,400,0x2655c /* "%s/%s" */,&xStack_b60,&xStack_a60);
        iVar10 = access(acStack_cf0,4);
        if (iVar10 != 0) {
          xStack_e68 = 0;
          xStack_e70 = 0;
          xStack_e58 = 0;
          xStack_e60 = 0;
          xStack_e48 = 0;
          xStack_e44 = 0;
          xStack_e50 = 0;
          xStack_e38 = 0;
          xStack_e34 = 0;
          xStack_e40 = 0;
          xStack_e3c = 0;
          xStack_e28 = 0;
          xStack_e24 = 0;
          uStack_e30 = 0;
          xStack_e2c = 0;
          xStack_e18 = 0;
          xStack_e20 = 0;
          _axStack_e08 = 0;
          xStack_e10 = 0;
          xStack_df8 = 0;
          _axStack_e00 = 0;
          xStack_de8 = 0;
          xStack_df0 = 0;
          xStack_dd8 = 0;
          xStack_de0 = 0;
          xStack_dc8 = 0;
          xStack_dd0 = 0;
          xStack_db8 = 0;
          xStack_dc0 = 0;
          xStack_da8 = 0;
          xStack_db0 = 0;
          xStack_d98 = 0;
          xStack_da0 = 0;
          xStack_d88 = 0;
          xStack_d90 = 0;
          xStack_d78 = 0;
          xStack_d80 = 0;
          xStack_d68 = 0;
          xStack_d70 = 0;
          xStack_d58 = 0;
          xStack_d60 = 0;
          xStack_d48 = 0;
          xStack_d50 = 0;
          xStack_d38 = 0;
          xStack_d40 = 0;
          xStack_d28 = 0;
          xStack_d30 = 0;
          xStack_d18 = 0;
          xStack_d20 = 0;
          xStack_d08 = 0;
          xStack_d10 = 0;
          xStack_cf8 = 0;
          xStack_d00 = 0;
          xStack_e78 = 0;
          xStack_e80 = 0;
          FUN_0005a6c0(&xStack_e80,400,&xStack_a60);
          iVar10 = access(&xStack_e80,4);
          if (iVar10 == 0) {
            pxVar18 = &xStack_e80;
            goto code_r0x00059208;
          }
        }
      }
      FUN_0005a61c(&xStack_6e4,0x100,0x100,0x2bfce,acStack_cf0);
    }
    xStack_eb4 = 0;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x3227d);
    axStack_ec8[0] = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2234d /* "Strength" */,0x3227d);
    xStack_ec4 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3fc00000,*pxVar7,0x27828 /* "Radius" */,0x3227d);
    xStack_ec0 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x32d82 /* "Intensity" */,0x3227d);
    xStack_ebc = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x43160000,*pxVar7,0x2b3b5 /* "Distance" */,0x3227d);
    xStack_eb8 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f59999a,*pxVar7,0x30de0 /* "Temporal" */,0x3227d);
    fVar27 = *(float4 *)(iVar23 + 0x8c);
    fStack_eb0 = fVar27;
    iVar23 = Config__Bind_plt_1(*pxVar7,0x22d5e /* "Resolution" */,4,0x3227d);
    fVar24 = 0.0;
    xStack_eac = *(xunknown4 *)(iVar23 + 0x90);
    if (fVar27 < 0.0) {
code_r0x00059450:
      fStack_eb0 = fVar24;
    }
    else {
      fVar24 = 0.95;
      if (0.95 < fVar27) goto code_r0x00059450;
    }
    xStack_ed8 = 0;
    xStack_ed0 = 0x3f4ccccd3f4ccccd;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x22d69 /* "Shadows" */);
    auStack_ef0[0] = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3f0ccccd,*pxVar7,0x2234d /* "Strength" */,0x22d69 /* "Shadows" */);
    xStack_ed4 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x42200000,*pxVar7,0x3a235 /* "Range" */,0x22d69 /* "Shadows" */);
    xStack_ee8 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x43340000,*pxVar7,0x383aa /* "FarRange" */,0x22d69 /* "Shadows" */);
    xStack_ee4 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_1(*pxVar7,0x39010 /* "Size" */,0x800,0x22d69 /* "Shadows" */);
    iStack_eec = *(int4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x3d21f /* "CasterCache" */,1,0x22d69 /* "Shadows" */);
    xStack_ee0 = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_1(*pxVar7,0x22d71 /* "MaxCached" */,5000,0x22d69 /* "Shadows" */);
    xStack_edc = *(xunknown4 *)(iVar23 + 0x90);
    xStack_e68 = xRam00000000000220c8;
    xStack_e70 = xRam00000000000220c0;
    xStack_e50 = NEON_fmov(0x3f800000,4);
    xStack_e78 = CONCAT26(xStack_e78._6_2_,0x10100000000);
    xStack_e60 = xRam0000000000022298;
    axVar25 = NEON_fmov(0x3f800000,4);
    _axStack_e00 = CONCAT26(xStack_dfa,0x10100000000);
    xStack_e2c = (xunknown4)xStack_e50;
    xStack_e28 = (xunknown4)((uint8)xStack_e50 >> 0x20);
    xStack_e3c = axVar25._8_4_;
    xStack_e38 = axVar25._12_4_;
    xStack_e44 = axVar25._0_4_;
    xStack_e40 = axVar25._4_4_;
    xStack_e80 = CONCAT71(xStack_e80._1_7_,1);
    xStack_e80 = xStack_e80 & 0xffffffff;
    xStack_e58 = CONCAT35(xStack_e58._5_3_,0x140400000);
    xStack_e48._0_1_ = 1;
    xStack_e34 = 0x3f800000;
    uStack_e30 = uStack_e30 & 0xffffff00;
    xStack_e24 = CONCAT31(xStack_e24._1_3_,1);
    xStack_e18 = xRam0000000000022148;
    xStack_e20 = xRam0000000000022140;
    _axStack_e08 = CONCAT26(xStack_e02,0x1003f800000);
    axStack_e00._0_4_ = 0x3f800000;
    xStack_df8 = CONCAT26(xStack_df8._6_2_,0xc);
    xStack_e10 = xStack_e50;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x370df /* "World" */);
    xStack_e80 = CONCAT71(xStack_e80._1_7_,*(int4 *)(iVar23 + 0x90) != 0);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x3a23b /* "PerPixelLight" */,1,0x370df /* "World" */);
    xStack_e78._0_5_ = CONCAT14(*(int4 *)(iVar23 + 0x90) != 0,(xunknown4)xStack_e78);
    iVar23 = Config__Bind_plt_3(0,*pxVar7,0x2bfde /* "LodBias" */,0x370df /* "World" */);
    xStack_e80 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_e80);
    iVar23 = Config__Bind_plt_3(0,*pxVar7,0x2bfe6 /* "AlphaTestLodBias" */,0x370df /* "World" */);
    xStack_e78 = CONCAT44(xStack_e78._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x3d22b /* "Textures" */);
    axStack_e8c[0] = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2a080 /* "Trilinear" */,1,0x3d22b /* "Textures" */);
    xStack_e83 = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_1(*pxVar7,0x3fbb2 /* "Anisotropy" */,8,0x3d22b /* "Textures" */);
    xStack_e88 = *(xunknown4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x3a249 /* "GenerateMips" */,1,0x3d22b /* "Textures" */);
    xStack_e84 = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x370e5 /* "Vehicle" */);
    xStack_e78._0_6_ = CONCAT15(*(int4 *)(iVar23 + 0x90) != 0,(unkbyte5)xStack_e78);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2daaa /* "Fresnel" */,0x370e5 /* "Vehicle" */);
    xStack_e70 = CONCAT44(xStack_e70._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3fc00000,*pxVar7,0x3fbbd /* "Specular" */,0x370e5 /* "Vehicle" */);
    xStack_e70 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_e70);
    iVar23 = Config__Bind_plt_3(0x42a00000,*pxVar7,0x3984e /* "Gloss" */,0x370e5 /* "Vehicle" */);
    xStack_e68 = CONCAT44(xStack_e68._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f19999a,*pxVar7,0x404a7 /* "Metallic" */,0x370e5 /* "Vehicle" */);
    xStack_e68 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_e68);
    iVar23 = Config__Bind_plt_3(0x3f19999a,*pxVar7,0x39015 /* "Flakes" */,0x370e5 /* "Vehicle" */);
    xStack_e60 = CONCAT44(xStack_e60._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f400000,*pxVar7,0x2b3be /* "SkyReflection" */,0x370e5 /* "Vehicle" */);
    xStack_e60 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_e60);
    iVar23 = Config__Bind_plt_3(0x40400000,*pxVar7,0x2bff7 /* "SunGlint" */,0x370e5 /* "Vehicle" */);
    xStack_e58 = CONCAT44(xStack_e58._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x2a08a /* "Water" */);
    xStack_e48 = CONCAT31(xStack_e48._1_3_,*(int4 *)(iVar23 + 0x90) != 0);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x30de9 /* "Reflection" */,0x2a08a /* "Water" */);
    xStack_e44 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x383b3 /* "Waves" */,0x2a08a /* "Water" */);
    xStack_e40 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2bff7 /* "SunGlint" */,0x2a08a /* "Water" */);
    xStack_e3c = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2912e /* "Depth" */,0x2a08a /* "Water" */);
    xStack_e38 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x32d8c /* "Foam" */,0x2a08a /* "Water" */);
    xStack_e34 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2d459 /* "Detail" */,0x2a08a /* "Water" */);
    xStack_e2c = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x3577f /* "Caustics" */,0x2a08a /* "Water" */);
    xStack_e28 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x3fbc6 /* "Ambient" */,0x40b97 /* "Lighting" */);
    xStack_5a0 = CONCAT44(xStack_5a0._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2ad10 /* "FoliageBacklight" */,0x40b97 /* "Lighting" */);
    xStack_e50._4_4_ = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f4ccccd,*pxVar7,0x34b62 /* "ContactShadows" */,0x40b97 /* "Lighting" */);
    xStack_ed0 = CONCAT44(xStack_ed0._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f4ccccd,*pxVar7,0x2a605 /* "ContactLength" */,0x40b97 /* "Lighting" */);
    xStack_ed0 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_ed0);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x23ee9 /* "Wind" */);
    xStack_e58._0_5_ = CONCAT14(*(int4 *)(iVar23 + 0x90) != 0,(xunknown4)xStack_e58);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2234d /* "Strength" */,0x23ee9 /* "Wind" */);
    xStack_e50 = CONCAT44(xStack_e50._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x3a256);
    _axStack_e08 = CONCAT15(*(int4 *)(iVar23 + 0x90) != 0,axStack_e08);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2234d /* "Strength" */,0x3a256);
    _axStack_e00 = CONCAT44(stack0xfffffffffffff204,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2a08a /* "Water" */,1,0x3a256);
    axStack_e00 = (xunknown1  [5])CONCAT14(*(int4 *)(iVar23 + 0x90) != 0,axStack_e00._0_4_);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2b3cc /* "WetGround" */,1,0x3a256);
    _axStack_e00 = CONCAT15(*(int4 *)(iVar23 + 0x90) != 0,axStack_e00);
    iVar23 = Config__Bind_plt_1(*pxVar7,0x3d234 /* "Steps" */,10,0x3a256);
    if ((iVar9 < 0x15) && (*(int4 *)(iVar23 + 0x90) == 0xc)) {
      ConfigEntry__SetInt_plt(iVar23,10);
    }
    xStack_df8 = CONCAT44(xStack_df8._4_4_,*(xunknown4 *)(iVar23 + 0x90));
    iVar23 = Config__Bind_plt_1(*pxVar7,0x22d5e /* "Resolution" */,2,0x3a256);
    xStack_55c = *(xunknown4 *)(iVar23 + 0x90);
    uStack_560 = bStack_e03;
    if ((xStack_7f8 & 1) == 0) {
      _axStack_e08 = (unkuint6)(unkuint5)axStack_e08;
    }
    if ((int4)(uint4)xStack_df8 < 4) {
      xVar21 = 4;
code_r0x00059b9c:
      xStack_df8 = CONCAT44(xStack_df8._4_4_,xVar21);
    }
    else if (0x18 < (uint4)xStack_df8) {
      xVar21 = 0x18;
      goto code_r0x00059b9c;
    }
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x2ebff);
    xStack_e24 = CONCAT31(xStack_e24._1_3_,*(int4 *)(iVar23 + 0x90) != 0);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x30de9 /* "Reflection" */,0x2ebff);
    xStack_e20 = CONCAT44(xStack_e20._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x35100 /* "Puddles" */,0x2ebff);
    xStack_e20 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_e20);
    iVar23 = Config__Bind_plt_3(0,*pxVar7,0x404b0 /* "Force" */,0x2ebff);
    xStack_e18 = CONCAT44(xStack_e18._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2234d /* "Strength" */,0x404b6 /* "Relief" */);
    xStack_e10 = CONCAT44(xStack_e10._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2657e /* "Glass" */,0x29134 /* "Surfaces" */);
    xStack_e10 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_e10);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x3a25a /* "Metal" */,0x29134 /* "Surfaces" */);
    _axStack_e08 = CONCAT44(stack0xfffffffffffff1fc,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2ec03 /* "Ripples" */,0x2ebff);
    xStack_e18 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_e18);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,1,0x35108 /* "Rain" */);
    auStack_f00[0] = *(int4 *)(iVar23 + 0x90) != 0;
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x32d91 /* "Amount" */,0x35108 /* "Rain" */);
    xStack_efc = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2bab0 /* "Brightness" */,0x35108 /* "Rain" */);
    xStack_ef8 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x2a090 /* "Length" */,0x35108 /* "Rain" */);
    xStack_ef4 = *(xunknown4 *)(iVar23 + 0x8c);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x29894 /* "Enable" */,0,0x23eee /* "ExperimentalLights" */);
    xStack_b60 = CONCAT71(xStack_b60._1_7_,*(int4 *)(iVar23 + 0x90) != 0);
    iVar23 = Config__Bind_plt_3(0x40000000,*pxVar7,0x2bab0 /* "Brightness" */,0x23eee /* "ExperimentalLights" */);
    xStack_b60 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_b60);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x32280 /* "RadiusScale" */,0x23eee /* "ExperimentalLights" */);
    xStack_b58 = CONCAT44(xStack_b58._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x41c80000,*pxVar7,0x34b71 /* "HeadlightRange" */,0x23eee /* "ExperimentalLights" */);
    xStack_b58 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_b58);
    iVar23 = Config__Bind_plt_3(0x40000000,*pxVar7,0x30df4 /* "HeadlightBrightness" */,0x23eee /* "ExperimentalLights" */);
    xStack_b50 = CONCAT44(xStack_b50._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f400000,*pxVar7,0x3228c /* "HeadlightWidth" */,0x23eee /* "ExperimentalLights" */);
    xStack_b50 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_b50);
    iVar23 = Config__Bind_plt_3(0x3e8f5c29,*pxVar7,0x22364 /* "HeadlightHeight" */,0x23eee /* "ExperimentalLights" */);
    xStack_b48 = CONCAT44(xStack_b48._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2d460 /* "StreetLights" */,1,0x23eee /* "ExperimentalLights" */);
    xStack_b48._0_5_ = CONCAT14(*(int4 *)(iVar23 + 0x90) != 0,(xunknown4)xStack_b48);
    iVar23 = Config__Bind_plt_3(0x3f800000,*pxVar7,0x26584 /* "StreetLightBrightness" */,0x23eee /* "ExperimentalLights" */);
    xStack_b40 = CONCAT44(xStack_b40._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x40800000,*pxVar7,0x2913d /* "StreetLightRadius" */,0x23eee /* "ExperimentalLights" */);
    xStack_b40 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_b40);
    iVar23 = Config__Bind_plt_3(0x42700000,*pxVar7,0x3d23a /* "StreetLightDistance" */,0x23eee /* "ExperimentalLights" */);
    xStack_b38 = CONCAT44(xStack_b38._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_2(*pxVar7,0x34b62 /* "ContactShadows" */,1,0x23eee /* "ExperimentalLights" */);
    xStack_b38._0_5_ = CONCAT14(*(int4 *)(iVar23 + 0x90) != 0,(xunknown4)xStack_b38);
    iVar23 = Config__Bind_plt_3(0x3f333333,*pxVar7,0x2914f /* "ContactShadowStrength" */,0x23eee /* "ExperimentalLights" */);
    xStack_b30 = CONCAT44(xStack_b30._4_4_,*(xunknown4 *)(iVar23 + 0x8c));
    iVar23 = Config__Bind_plt_3(0x3f99999a,*pxVar7,0x2d46d /* "ContactShadowLength" */,0x23eee /* "ExperimentalLights" */);
    xStack_b30 = CONCAT44(*(xunknown4 *)(iVar23 + 0x8c),(xunknown4)xStack_b30);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2babb /* "PerfCycle" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetBool_plt(iVar23,0);
    }
    iVar10 = *(int4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_1(*pxVar7,0x2dab2 /* "AOView" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetInt_plt(iVar23,0);
    }
    xStack_eb4 = *(xunknown4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_1(*pxVar7,0x2a097 /* "ShadowMapView" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetInt_plt(iVar23,0);
    }
    xStack_ed8 = *(xunknown4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x32d98 /* "DumpShaders" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetBool_plt(iVar23,0);
    }
    xStack_df8._0_5_ = CONCAT14(*(int4 *)(iVar23 + 0x90) != 0,(uint4)xStack_df8);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x30e08 /* "SSRView" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetBool_plt(iVar23,0);
    }
    xStack_df8._0_6_ = CONCAT15(*(int4 *)(iVar23 + 0x90) != 0,(unkbyte5)xStack_df8);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x3229b /* "WaterView" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetBool_plt(iVar23,0);
    }
    uStack_e30 = CONCAT31(uStack_e30._1_3_,*(int4 *)(iVar23 + 0x90) != 0);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2a0a5 /* "SurfaceView" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetBool_plt(iVar23,0);
    }
    axStack_e08 = (xunknown1  [5])CONCAT14(*(int4 *)(iVar23 + 0x90) != 0,axStack_e08._0_4_);
    xStack_558 = xStack_df8._5_1_;
    iVar23 = Config__Bind_plt_2(*pxVar7,0x2659a /* "SceneDepthTexture" */,1,0x3fbce /* "Debug" */);
    iVar2 = *(int4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x23f01 /* "Probe" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetBool_plt(iVar23,0);
    }
    iVar3 = *(int4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_2(*pxVar7,0x22d7b /* "Trace" */,0,0x3fbce /* "Debug" */);
    if ((iVar9 < 0x1c) && (*(int4 *)(iVar23 + 0x90) != 0)) {
      ConfigEntry__SetBool_plt(iVar23,0);
    }
    iVar9 = *(int4 *)(iVar23 + 0x90);
    iVar23 = Config__Bind_plt_1(*pxVar7,0x39854 /* "Preset" */,0,0x298c4 /* "Performance" */);
    iVar4 = *(int4 *)(iVar23 + 0x90);
    Config__Save_plt(*pxVar7);
    if (iVar4 - 1U < 2) {
      fVar24 = 0.6;
      if (iVar4 != 1) {
        fVar24 = 0.67;
      }
      if (fVar24 < fStack_ea4) {
        fStack_ea4 = fVar24;
      }
      axStack_ec8[0] = 0;
      _axStack_e00 = (unkuint6)(unkuint5)axStack_e00;
      if (iVar4 == 1) {
        _axStack_e08 = (unkuint6)(unkuint5)axStack_e08;
        uStack_560 = 0;
        xStack_5d8 = xStack_5d8 & 0xff;
        xStack_5d0 = 0;
        if (0x400 < iStack_eec) {
          iStack_eec = 0x400;
        }
        xVar16 = 0x2a613;
        xVar19 = 0x29165 /* ", all SSR off, TAA off (FXAA), sun rays off, shadow maps 1024, R11G11B..." */;
        xStack_e90 = 1;
        xStack_e10 = xStack_e10 & 0xffffffff00000000;
      }
      else {
        xVar16 = 0x35788 /* "Medium" */;
        xVar19 = 0x29893;
      }
      GfxLog_plt((float8)fStack_ea4,0,0x3d24e /* "ini: [Performance] Preset %d (%s) - render scale %.2f, AO off, wet-gro..." */,iVar4,xVar16,xVar19);
    }
    else if (iVar4 == 3) {
      GfxLog_plt(0,0x22d81 /* "ini: [Performance] Preset 3 (High) - the defaults, nothing lowered" */);
    }
    uVar12 = frame__Install_plt(xRam00000000000d31d8);
    xVar16 = xRam00000000000d31d8;
    if ((uVar12 & 1) != 0) {
      gputime__Install_plt(xRam00000000000d31d8);
      compat__Install_plt(xVar16);
      FUN_0005a61c(acStack_cf0,300,300,0x2c000 /* "%s/ZyZGfx/shaders" */,0xd9160);
      shaders__Install_plt(xVar16,acStack_cf0,&xStack_e80);
      textures__Install_plt(xVar16,axStack_e8c);
      if ((auStack_e94[0] == 1) && ((xStack_e80 & 1) == 0)) {
        auStack_e94[0] = 0;
        uStack_5a4 = 0;
        GfxLog_plt(0,0x2a0b1 /* "scene: HDR off - needs [World] Enable (the game's shaders need their o..." */);
      }
      scene__Install_plt(xVar16,iVar2 != 0,auStack_e94);
      ao__Setup_plt(xVar16,axStack_ec8);
      rain__Install_plt(xVar16,auStack_f00);
      uVar12 = ao__Enabled_plt();
      if (((((uVar12 & 1) == 0) && ((xStack_5d8 & 0x100) == 0)) && ((auStack_ef0[0] & 1) == 0)) &&
         (((auStack_f00[0] & 1) == 0 && ((uStack_560 & 1) == 0)))) {
        uVar20 = 0;
      }
      else {
        uVar20 = (uint1)xStack_7f8;
      }
      lights__Install_plt(xVar16,&xStack_b60,uVar20 & 1);
      grading__Install_plt(xVar26,xVar16,iVar1 != 0 & (uint1)xStack_7f8);
      post__Install_plt(xVar16,&xStack_7f8);
      if ((uint1)xStack_7f8 == '\x01') {
        fsr__Install_plt(xRam00000000000d31d8,axStack_ea8);
      }
      else {
        GfxLog_plt(0,0x370ed /* "fsr: off (needs [Post] Enable = 1)" */);
      }
      xVar16 = xRam00000000000d31d8;
      shadows__Install_plt(xRam00000000000d31d8,auStack_ef0);
      perf__Install_plt(xVar16,iVar10 != 0);
      budget__Install_plt(xVar16);
      if (iVar9 == 0) {
        if (iVar3 != 0) {
          iVar14 = (**(code **)(*(int8 *)*pxVar6 + 0x28))((int8 *)*pxVar6,iVar14,0x2dab9 /* "_Z24RQ_Command_rqTargetClearRPc" */);
          if (iVar14 == 0) {
            xVar16 = 0x2d481 /* "RQ_Command_rqTargetClear not found - probe off" */;
          }
          else {
            (**(code **)(*(int8 *)*pxVar6 + 0x30))
                      ((int8 *)*pxVar6,iVar14,xRam00000000000d31e8,pxRam00000000000d31f0);
            xVar16 = 0x37110 /* "phase 0.1: device probe runs on the render thread ~8 s after rendering..." */;
          }
          GfxLog_plt(iVar14 == 0,xVar16);
        }
      }
      else {
        trace__Install_plt(xRam00000000000d31d8);
      }
      goto code_r0x0005a5e0;
    }
    xVar16 = 0x2b3d6 /* "frame events unavailable - everything off" */;
  }
  GfxLog_plt(1,xVar16);
code_r0x0005a5e0:
  if (*(int8 *)(iVar5 + 0x28) == iStack_98) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0xc4bac  size=484  __emutls_get_address  [__emutls_get_address] */
uint8 emutls_get_address(int8 *param_1)

{
  xunknown4 xVar1;
  xunknown8 *pxVar2;
  int8 iVar3;
  uint8 uVar4;
  uint8 uVar5;
  int8 iVar6;
  
  uVar5 = param_1[2];
  if (uVar5 == 0) {
    pthread_once(0x1732b8,FUN_000c4dcc);
    pthread_mutex_lock(0x1732c8);
    uVar5 = param_1[2];
    if (uVar5 == 0) {
      uVar5 = uRam00000000001732c0 + 1;
      uRam00000000001732c0 = uVar5;
      param_1[2] = uVar5;
    }
    pthread_mutex_unlock(0x1732c8);
    pxVar2 = (xunknown8 *)pthread_getspecific(xRam00000000001732b4);
    if (pxVar2 != (xunknown8 *)0x0) goto code_r0x000c4be0;
code_r0x000c4c8c:
    iVar6 = (uVar5 + 0x11 & 0xfffffffffffffff0) - 2;
    pxVar2 = (xunknown8 *)malloc(iVar6 * 8 + 0x10);
    if (pxVar2 == (xunknown8 *)0x0) goto code_r0x000ca7b0;
    memset(pxVar2 + 2,0,iVar6 * 8);
    *pxVar2 = 1;
code_r0x000c4cc4:
    xVar1 = xRam00000000001732b4;
    pxVar2[1] = iVar6;
    pthread_setspecific(xVar1,pxVar2);
  }
  else {
    pxVar2 = (xunknown8 *)pthread_getspecific(xRam00000000001732b4);
    if (pxVar2 == (xunknown8 *)0x0) goto code_r0x000c4c8c;
code_r0x000c4be0:
    uVar4 = pxVar2[1];
    if (uVar4 < uVar5) {
      iVar6 = (uVar5 + 0x11 & 0xfffffffffffffff0) - 2;
      pxVar2 = (xunknown8 *)realloc(pxVar2,iVar6 * 8 + 0x10);
      if (pxVar2 == (xunknown8 *)0x0) goto code_r0x000ca7b0;
      memset(pxVar2 + uVar4 + 2,0,(iVar6 - uVar4) * 8);
      goto code_r0x000c4cc4;
    }
  }
  if (pxVar2[uVar5 + 1] != 0) {
    return pxVar2[uVar5 + 1];
  }
  uVar4 = param_1[1];
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if ((uVar4 & uVar4 - 1) == 0) {
    iVar3 = *param_1;
    iVar6 = malloc(uVar4 + 7 + iVar3);
    if (iVar6 != 0) {
      uVar4 = iVar6 + uVar4 + 7 & -uVar4;
      *(int8 *)(uVar4 - 8) = iVar6;
      if (param_1[3] == 0) {
        memset(uVar4,0,iVar3);
      }
      else {
        memcpy(uVar4,param_1[3],iVar3);
      }
      pxVar2[uVar5 + 1] = uVar4;
      return uVar4;
    }
  }
code_r0x000ca7b0:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*got_abort)();
  return uVar5;
}

/* 0xc4fb8  size=32  __init_cpu_features_resolver  [__init_cpu_features_resolver] */
void init_cpu_features_resolver(uint8 param_1,int8 param_2)

{
  uint8 uVar1;
  uint8 uVar2;
  int8 iVar3;
  xunknown1 axVar4 [16];
  xunknown1 axVar5 [16];
  xunknown1 axVar6 [16];
  xunknown1 axVar7 [16];
  uint1 uVar8;
  xunknown1 axVar9 [16];
  xunknown1 axVar10 [16];
  xunknown1 axVar11 [16];
  
  if ((got_memfd_create == (code *)0x0) || (uRam00000000001732f8 != 0)) {
    return;
  }
  if ((param_1 >> 0x3e & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint8 *)(param_2 + 0x10);
  }
  axVar11._8_8_ = uVar1;
  axVar11._0_8_ = uVar1;
  axVar6._8_8_ = xRam00000000000221a8;
  axVar6._0_8_ = xRam00000000000221a0;
  iVar3 = uVar1 << 0xd;
  axVar7._8_8_ = xRam0000000000022178;
  axVar7._0_8_ = xRam0000000000022170;
  axVar6 = NEON_ushl(axVar11,axVar6,8);
  axVar9._8_8_ = xRam0000000000022058;
  axVar9._0_8_ = xRam0000000000022050;
  axVar7 = NEON_ushl(axVar11,axVar7,8);
  axVar10 = NEON_ushl(axVar11,axVar9,8);
  axVar4[8] = (char)xRam00000000000220e8;
  axVar4._0_8_ = xRam00000000000220e0;
  axVar4[9] = (char)((uint8)xRam00000000000220e8 >> 8);
  axVar4[10] = (char)((uint8)xRam00000000000220e8 >> 0x10);
  axVar4[0xb] = (char)((uint8)xRam00000000000220e8 >> 0x18);
  axVar4[0xc] = (char)((uint8)xRam00000000000220e8 >> 0x20);
  axVar4[0xd] = (char)((uint8)xRam00000000000220e8 >> 0x28);
  axVar4[0xe] = (char)((uint8)xRam00000000000220e8 >> 0x30);
  axVar4[0xf] = (char)((uint8)xRam00000000000220e8 >> 0x38);
  axVar4 = NEON_ushl(axVar11,axVar4,8);
  uVar8 = axVar6[8] & (uint1)xRam0000000000021fb0;
  axVar5[0] = axVar4[0] & (uint1)xRam0000000000021f30 | axVar10[0] & (uint1)xRam0000000000022160 |
              axVar6[0] & (uint1)xRam0000000000022020 | axVar7[0] & (uint1)xRam00000000000220b0;
  axVar5[1] = axVar4[1] & (uint1)((uint8)xRam0000000000021f30 >> 8) |
              axVar10[1] & (uint1)((uint8)xRam0000000000022160 >> 8) |
              axVar6[1] & (uint1)((uint8)xRam0000000000022020 >> 8) |
              axVar7[1] & (uint1)((uint8)xRam00000000000220b0 >> 8);
  axVar5[2] = axVar4[2] & (uint1)((uint8)xRam0000000000021f30 >> 0x10) |
              axVar10[2] & (uint1)((uint8)xRam0000000000022160 >> 0x10) |
              axVar6[2] & (uint1)((uint8)xRam0000000000022020 >> 0x10) |
              axVar7[2] & (uint1)((uint8)xRam00000000000220b0 >> 0x10);
  axVar5[3] = axVar4[3] & (uint1)((uint8)xRam0000000000021f30 >> 0x18) |
              axVar10[3] & (uint1)((uint8)xRam0000000000022160 >> 0x18) |
              axVar6[3] & (uint1)((uint8)xRam0000000000022020 >> 0x18) |
              axVar7[3] & (uint1)((uint8)xRam00000000000220b0 >> 0x18);
  axVar5[4] = axVar4[4] & (uint1)((uint8)xRam0000000000021f30 >> 0x20) |
              axVar10[4] & (uint1)((uint8)xRam0000000000022160 >> 0x20) |
              axVar6[4] & (uint1)((uint8)xRam0000000000022020 >> 0x20) |
              axVar7[4] & (uint1)((uint8)xRam00000000000220b0 >> 0x20);
  axVar5[5] = axVar4[5] & (uint1)((uint8)xRam0000000000021f30 >> 0x28) |
              axVar10[5] & (uint1)((uint8)xRam0000000000022160 >> 0x28) |
              axVar6[5] & (uint1)((uint8)xRam0000000000022020 >> 0x28) |
              axVar7[5] & (uint1)((uint8)xRam00000000000220b0 >> 0x28);
  axVar5[6] = axVar4[6] & (uint1)((uint8)xRam0000000000021f30 >> 0x30) |
              axVar10[6] & (uint1)((uint8)xRam0000000000022160 >> 0x30) |
              axVar6[6] & (uint1)((uint8)xRam0000000000022020 >> 0x30) |
              axVar7[6] & (uint1)((uint8)xRam00000000000220b0 >> 0x30);
  axVar5[7] = axVar4[7] & (uint1)((uint8)xRam0000000000021f30 >> 0x38) |
              axVar10[7] & (uint1)((uint8)xRam0000000000022160 >> 0x38) |
              axVar6[7] & (uint1)((uint8)xRam0000000000022020 >> 0x38) |
              axVar7[7] & (uint1)((uint8)xRam00000000000220b0 >> 0x38);
  axVar5[8] = axVar4[8] & (uint1)xRam0000000000021f38 | axVar10[8] & (uint1)xRam0000000000022168 |
              axVar6[8] & (uint1)xRam0000000000022028 | axVar7[8] & (uint1)xRam00000000000220b8;
  axVar5[9] = axVar4[9] & (uint1)((uint8)xRam0000000000021f38 >> 8) |
              axVar10[9] & (uint1)((uint8)xRam0000000000022168 >> 8) |
              axVar6[9] & (uint1)((uint8)xRam0000000000022028 >> 8) |
              axVar7[9] & (uint1)((uint8)xRam00000000000220b8 >> 8);
  axVar5[10] = axVar4[10] & (uint1)((uint8)xRam0000000000021f38 >> 0x10) |
               axVar10[10] & (uint1)((uint8)xRam0000000000022168 >> 0x10) |
               axVar6[10] & (uint1)((uint8)xRam0000000000022028 >> 0x10) |
               axVar7[10] & (uint1)((uint8)xRam00000000000220b8 >> 0x10);
  axVar5[0xb] = axVar4[0xb] & (uint1)((uint8)xRam0000000000021f38 >> 0x18) |
                axVar10[0xb] & (uint1)((uint8)xRam0000000000022168 >> 0x18) |
                axVar6[0xb] & (uint1)((uint8)xRam0000000000022028 >> 0x18) |
                axVar7[0xb] & (uint1)((uint8)xRam00000000000220b8 >> 0x18);
  axVar5[0xc] = axVar4[0xc] & (uint1)((uint8)xRam0000000000021f38 >> 0x20) |
                axVar10[0xc] & (uint1)((uint8)xRam0000000000022168 >> 0x20) |
                axVar6[0xc] & (uint1)((uint8)xRam0000000000022028 >> 0x20) |
                axVar7[0xc] & (uint1)((uint8)xRam00000000000220b8 >> 0x20);
  axVar5[0xd] = axVar4[0xd] & (uint1)((uint8)xRam0000000000021f38 >> 0x28) |
                axVar10[0xd] & (uint1)((uint8)xRam0000000000022168 >> 0x28) |
                axVar6[0xd] & (uint1)((uint8)xRam0000000000022028 >> 0x28) |
                axVar7[0xd] & (uint1)((uint8)xRam00000000000220b8 >> 0x28);
  axVar5[0xe] = axVar4[0xe] & (uint1)((uint8)xRam0000000000021f38 >> 0x30) |
                axVar10[0xe] & (uint1)((uint8)xRam0000000000022168 >> 0x30) |
                axVar6[0xe] & (uint1)((uint8)xRam0000000000022028 >> 0x30) |
                axVar7[0xe] & (uint1)((uint8)xRam00000000000220b8 >> 0x30);
  axVar5[0xf] = axVar4[0xf] & (uint1)((uint8)xRam0000000000021f38 >> 0x38) |
                axVar10[0xf] & (uint1)((uint8)xRam0000000000022168 >> 0x38) |
                axVar6[0xf] & (uint1)((uint8)xRam0000000000022028 >> 0x38) |
                axVar7[0xf] & (uint1)((uint8)xRam00000000000220b8 >> 0x38);
  axVar10[1] = axVar6[9] & (uint1)((uint8)xRam0000000000021fb0 >> 8) |
               (uint1)((uint8)iVar3 >> 8) & (uint1)((uint8)xRam00000000000221e0 >> 8);
  axVar10[0] = uVar8;
  axVar10[2] = axVar6[10] & (uint1)((uint8)xRam0000000000021fb0 >> 0x10) |
               (uint1)((uint8)iVar3 >> 0x10) & (uint1)((uint8)xRam00000000000221e0 >> 0x10);
  axVar10[3] = axVar6[0xb] & (uint1)((uint8)xRam0000000000021fb0 >> 0x18) |
               (uint1)((uint8)iVar3 >> 0x18) & (uint1)((uint8)xRam00000000000221e0 >> 0x18);
  axVar10[4] = axVar6[0xc] & (uint1)((uint8)xRam0000000000021fb0 >> 0x20) |
               (uint1)((uint8)iVar3 >> 0x20) & (uint1)((uint8)xRam00000000000221e0 >> 0x20);
  axVar10[5] = axVar6[0xd] & (uint1)((uint8)xRam0000000000021fb0 >> 0x28) |
               (uint1)((uint8)iVar3 >> 0x28) & (uint1)((uint8)xRam00000000000221e0 >> 0x28);
  axVar10[6] = axVar6[0xe] & (uint1)((uint8)xRam0000000000021fb0 >> 0x30) |
               (uint1)((uint8)iVar3 >> 0x30) & (uint1)((uint8)xRam00000000000221e0 >> 0x30);
  axVar10[7] = axVar6[0xf] & (uint1)((uint8)xRam0000000000021fb0 >> 0x38) |
               (uint1)((uint8)iVar3 >> 0x38) & (uint1)((uint8)xRam00000000000221e0 >> 0x38);
  axVar10[8] = (uint1)(uVar1 >> 0x10) & (uint1)xRam0000000000021fb8 |
               axVar7[8] & (uint1)xRam00000000000221e8;
  axVar10[9] = (uint1)(uVar1 >> 0x18) & (uint1)((uint8)xRam0000000000021fb8 >> 8) |
               axVar7[9] & (uint1)((uint8)xRam00000000000221e8 >> 8);
  axVar10[10] = (uint1)(uVar1 >> 0x20) & (uint1)((uint8)xRam0000000000021fb8 >> 0x10) |
                axVar7[10] & (uint1)((uint8)xRam00000000000221e8 >> 0x10);
  axVar10[0xb] = (uint1)(uVar1 >> 0x28) & (uint1)((uint8)xRam0000000000021fb8 >> 0x18) |
                 axVar7[0xb] & (uint1)((uint8)xRam00000000000221e8 >> 0x18);
  axVar10[0xc] = (uint1)(uVar1 >> 0x30) & (uint1)((uint8)xRam0000000000021fb8 >> 0x20) |
                 axVar7[0xc] & (uint1)((uint8)xRam00000000000221e8 >> 0x20);
  axVar10[0xd] = (uint1)(uVar1 >> 0x38) & (uint1)((uint8)xRam0000000000021fb8 >> 0x28) |
                 axVar7[0xd] & (uint1)((uint8)xRam00000000000221e8 >> 0x28);
  axVar10[0xe] = axVar7[0xe] & (uint1)((uint8)xRam00000000000221e8 >> 0x30);
  axVar10[0xf] = axVar7[0xf] & (uint1)((uint8)xRam00000000000221e8 >> 0x38);
  axVar4 = NEON_ext(axVar5,axVar5,8,1);
  axVar11 = NEON_ext(axVar10,axVar10,8,1);
  uVar2 = CONCAT17(axVar10[7] | axVar11[7],
                   CONCAT16(axVar10[6] | axVar11[6],
                            CONCAT15(axVar10[5] | axVar11[5],
                                     CONCAT14(axVar10[4] | axVar11[4],
                                              CONCAT13(axVar10[3] | axVar11[3],
                                                       CONCAT12(axVar10[2] | axVar11[2],
                                                                CONCAT11(axVar10[1] | axVar11[1],
                                                                         uVar8 | axVar11[0]))))))) |
          (param_1 & 0x80) << 3 |
          param_1 >> 0x1a & 2 | (param_1 >> 4 & 1) << 0xf |
          param_1 >> 0xe & 0x20 | param_1 >> 0x10 & 0x10 |
          param_1 >> 0x14 & 8 | (param_1 >> 9 & 1) << 0x10 |
          param_1 >> 7 & 0x20000 | param_1 >> 6 & 0x40 |
          param_1 << 7 & 0x300000 | (param_1 >> 6 & 1) << 0xc |
          (param_1 & 0x10000000) << 0x15 | (param_1 >> 0x1d & 1) << 0x2e |
          param_1 >> 1 & 0x80 | uVar1 >> 5 & 4 |
          uVar1 << 0x23 & 0x3c000000000 | (uVar1 >> 0x12 & 1) << 0x2c |
          uVar1 >> 0x17 & 0x800 |
          CONCAT17(axVar5[7] | axVar4[7],
                   CONCAT16(axVar5[6] | axVar4[6],
                            CONCAT15(axVar5[5] | axVar4[5],
                                     CONCAT14(axVar5[4] | axVar4[4],
                                              CONCAT13(axVar5[3] | axVar4[3],
                                                       CONCAT12(axVar5[2] | axVar4[2],
                                                                CONCAT11(axVar5[1] | axVar4[1],
                                                                         axVar5[0] | axVar4[0]))))))
                  );
  if ((param_1 & 1) != 0) {
    uVar2 = uVar2 | 0x300;
  }
  uRam00000000001732f8 =
       (param_1 >> 0x16 & 1) << 0x1e | (uVar1 >> 0x2e & 1) << 0x3a |
       param_1 << 7 & 0x400000 | (param_1 >> 0x10 & 1) << 0x12 | param_1 >> 3 & 0x800000 |
       param_1 >> 4 & 0x2000 | (uVar1 >> 0xe & 1) << 0x1b | uVar1 << 0x23 & 0x1000000000 | uVar2 |
       0x8000000000000000;
  return;
}

/* 0xc51ec  size=184  __init_cpu_features  [__init_cpu_features] */
void init_cpu_features(void)

{
  int8 iVar1;
  int4 iVar2;
  uint8 uVar3;
  int8 iStack_88;
  uint8 uStack_80;
  xunknown8 xStack_78;
  int8 iStack_28;
  
  iVar1 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar1 + 0x28);
  if ((uRam00000000001732f8 == 0) &&
     ((iVar2 = __system_property_get(0x2987a /* "ro.arch" */,&iStack_88), iVar2 < 1 ||
      (iStack_88 != 0x3839736f6e797865 || (int2)uStack_80 != 0x3031)))) {
    uVar3 = getauxval(0x10);
    xStack_78 = getauxval(0x1a);
    iStack_88 = 0x18;
    uStack_80 = uVar3;
    FUN_000c4fd8(uVar3 | 0x4000000000000000,&iStack_88);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

