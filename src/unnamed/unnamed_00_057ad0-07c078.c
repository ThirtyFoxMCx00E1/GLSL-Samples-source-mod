/* unexported functions 0x57ad0..0x7c078
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x57ad0  size=16 */
void FUN_00057ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000c954c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_finalize)(0xcee00);
  return;
}

/* 0x57ae0  size=8 */
void FUN_00057ae0(void)

{
  return;
}

/* 0x57ae8  size=8 */
void FUN_00057ae8(void)

{
  if (cRam00000000001732b0 == '\x01') {
    pthread_key_delete(xRam00000000001732b4);
    cRam00000000001732b0 = '\0';
  }
  return;
}

/* 0x57af0  size=20 */
void FUN_00057af0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00057afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

/* 0x57b04  size=28 */
void FUN_00057b04(xunknown8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00057af0,param_1,0xcee00);
  return;
}

/* 0x57b20  size=16 */
void FUN_00057b20(void)

{
                    /* WARNING: Could not recover jumptable at 0x000c956c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___register_atfork)();
  return;
}

/* 0x5a61c  size=164 */
void FUN_0005a61c(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x5a6c0  size=328 */
void FUN_0005a6c0(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9,xunknown8 param_10,char *param_11,xunknown8 param_12,
                 xunknown8 param_13,xunknown8 param_14,xunknown8 param_15,xunknown8 param_16)

{
  int8 iVar1;
  int4 iVar2;
  int8 iVar3;
  xunknown1 axStack_1d8 [200];
  xunknown8 xStack_110;
  xunknown8 xStack_100;
  xunknown8 xStack_f0;
  xunknown8 xStack_e0;
  xunknown8 xStack_d0;
  xunknown8 xStack_c0;
  xunknown8 xStack_b0;
  xunknown8 xStack_a0;
  char *pcStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  char **ppcStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar3 = *(int8 *)(iVar1 + 0x28);
  if (*param_11 != '\0') {
    if (*param_11 == '/') {
      if (*(int8 *)(iVar1 + 0x28) == iVar3) {
        iVar1 = tpidr_el0;
        iVar3 = *(int8 *)(iVar1 + 0x28);
        ppxStack_68 = &pxStack_70;
        ppcStack_60 = &pcStack_90;
        xStack_58 = 0xffffff80ffffffe0;
        xStack_110 = param_1;
        xStack_100 = param_2;
        xStack_f0 = param_3;
        xStack_e0 = param_4;
        xStack_d0 = param_5;
        xStack_c0 = param_6;
        xStack_b0 = param_7;
        xStack_a0 = param_8;
        pcStack_90 = param_11;
        xStack_88 = param_14;
        xStack_80 = param_15;
        xStack_78 = param_16;
        pxStack_70 = (xunknown1 *)register_sp;
        __vsnprintf_chk(param_9,param_10,0,0xffffffffffffffff,0x2bfce,&pxStack_70);
        if (*(int8 *)(iVar1 + 0x28) == iVar3) {
          return;
        }
      }
      goto code_r0x000c9620;
    }
    FUN_0005a61c(param_9,0xffffffffffffffff,param_10,0x2655c /* "%s/%s" */,&cRam00000000000d9160,param_11);
    iVar2 = access(param_9,0);
    if ((iVar2 != 0) && (iVar2 = strcmp(&cRam00000000000d9160,0xd9060), iVar2 != 0)) {
      FUN_0005a61c(axStack_1d8,400,400,0x2655c /* "%s/%s" */,0xd9060,param_11);
      iVar2 = access(axStack_1d8,0);
      if (iVar2 == 0) {
        FUN_0005a61c(param_9,0xffffffffffffffff,param_10,0x2bfce,axStack_1d8);
      }
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iVar3) {
    return;
  }
code_r0x000c9620:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x5a808  size=80 */
void FUN_0005a808(void)

{
  int8 iVar1;
  code *pcVar2;
  xunknown8 xVar3;
  
  iVar1 = dlopen(0x2782f /* "libAML.so" */,2);
  xVar3 = 0;
  if ((iVar1 != 0) && (pcVar2 = (code *)dlsym(iVar1,0x23f07 /* "GetInterface" */), xVar3 = 0, pcVar2 != (code *)0x0)) {
    xVar3 = (*pcVar2)(0x383c9 /* "AMLInterface" */);
  }
  *pxRam00000000000d31f8 = xVar3;
  return;
}

/* 0x5a858  size=76 */
void FUN_0005a858(void)

{
  ModInfo__ModInfo_plt(0xd8f60,0x2acf2 /* "net.nigerianksi.zyzgfx" */,0x27813 /* "ZyZ Gfx" */,0x3900b /* "1.00" */,0x34b39 /* "ZyZz reincarnate" */);
                    /* WARNING: Could not recover jumptable at 0x000c98cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3bc8)(0xd9020,0x2ad09 /* "zyzgfx" */);
  return;
}

/* 0x5c9b4  size=32 */
void FUN_0005c9b4(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x5c9d4  size=32 */
void FUN_0005c9d4(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x5e694  size=168 */
void FUN_0005e694(void)

{
  float8 fVar1;
  int8 iVar2;
  float8 fVar3;
  float8 fVar4;
  int8 iStack_48;
  int8 iStack_40;
  int8 iStack_38;
  
  iVar2 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar2 + 0x28);
  clock_gettime(1,&iStack_48);
  fVar3 = fRam0000000000022270;
  fVar4 = (float8)iStack_48;
  fVar1 = fRam0000000000022270 * (float8)iStack_40;
  FUN_0005f0d8();
  clock_gettime(1,&iStack_48);
  budget__CpuMs_plt((((float8)iStack_48 + fVar3 * (float8)iStack_40) - (fVar4 + fVar1)) * 1000.0,2);
  if (*(int8 *)(iVar2 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x5e838  size=140 */
void FUN_0005e838(int8 *param_1,int8 param_2,xunknown1 *param_3,uint8 param_4)

{
  int8 iVar1;
  xunknown8 xVar2;
  int8 *piVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  xunknown1 *pxVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint8 uVar10;
  xunknown1 axVar11 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  if (-1 < param_2) {
    iVar1 = operator_new_plt(param_2);
    *param_1 = iVar1;
    param_1[2] = iVar1 + param_2;
    memset(iVar1,0,param_2);
    param_1[1] = iVar1 + param_2;
    return;
  }
  xVar2 = FUN_0005eb80(param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_1[1] = iVar1;
    operator_delete_plt(iVar1,param_1[2] - iVar1);
  }
  axVar11 = FUN_000c5688(xVar2);
  iVar1 = axVar11._8_8_;
  piVar3 = axVar11._0_8_;
  *piVar3 = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  if (iVar1 == 0) {
    return;
  }
  if (-1 < iVar1) {
    iVar4 = operator_new_plt(iVar1);
    *piVar3 = iVar4;
    piVar3[1] = iVar4;
    piVar3[2] = iVar4 + iVar1;
    memset(iVar4,*param_3,iVar1);
    piVar3[1] = iVar4 + iVar1;
    return;
  }
  xVar2 = FUN_0005eb80(piVar3);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    piVar3[1] = iVar1;
    operator_delete_plt(iVar1,piVar3[2] - iVar1);
  }
  axVar11 = FUN_000c5688(xVar2);
  uVar9 = axVar11._8_8_;
  piVar3 = axVar11._0_8_;
  uVar8 = piVar3[2];
  iVar1 = *piVar3;
  if (uVar9 <= uVar8 - iVar1) {
    uVar10 = piVar3[1] - iVar1;
    uVar8 = uVar10;
    if (uVar9 <= uVar10) {
      uVar8 = uVar9;
    }
    if (uVar8 != 0) {
      memset(iVar1,*param_3);
    }
    iVar1 = uVar9 - uVar10;
    if (uVar9 < uVar10 || iVar1 == 0) {
      iVar4 = *piVar3 + uVar9;
    }
    else {
      iVar4 = piVar3[1];
      memset(iVar4,*param_3,iVar1);
      iVar4 = iVar4 + iVar1;
    }
code_r0x0005ea34:
    piVar3[1] = iVar4;
    return;
  }
  pxVar7 = param_3;
  if (iVar1 != 0) {
    piVar3[1] = iVar1;
    operator_delete_plt();
    uVar8 = 0;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
  }
  if (-1 < (int8)uVar9) {
    uVar10 = uVar8 * 2;
    if (uVar8 * 2 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar10 = 0x7fffffffffffffff;
    }
    iVar4 = operator_new_plt(uVar10);
    *piVar3 = iVar4;
    piVar3[1] = iVar4;
    piVar3[2] = iVar4 + uVar10;
    memset(iVar4,*param_3,uVar9);
    iVar4 = iVar4 + uVar9;
    goto code_r0x0005ea34;
  }
  axVar11 = FUN_0005eb80(piVar3);
  iVar1 = axVar11._8_8_;
  piVar3 = axVar11._0_8_;
  uVar9 = piVar3[2];
  iVar4 = *piVar3;
  if (uVar9 - iVar4 < param_4) {
    if (iVar4 != 0) {
      piVar3[1] = iVar4;
      operator_delete_plt(iVar4,uVar9 - iVar4);
      uVar9 = 0;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
    }
    if ((int8)param_4 < 0) {
      FUN_0005eb80(piVar3);
      xVar2 = FUN_0005eb94(0x371ec /* "vector" */);
      xVar6 = cxa_allocate_exception_plt(0x10);
      FUN_0005ebe4(xVar6,xVar2);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d3cd8)(xVar6,xRam00000000000d35e8,xRam00000000000d35f0);
      return;
    }
    uVar8 = uVar9 * 2;
    if (uVar9 * 2 <= param_4) {
      uVar8 = param_4;
    }
    if (0x3ffffffffffffffe < uVar9) {
      uVar8 = 0x7fffffffffffffff;
    }
    iVar5 = operator_new_plt(uVar8);
    iVar4 = (int8)pxVar7 - iVar1;
    *piVar3 = iVar5;
    piVar3[1] = iVar5;
    piVar3[2] = iVar5 + uVar8;
    if (iVar4 != 0) {
      memcpy(iVar5,iVar1,iVar4);
    }
  }
  else {
    iVar5 = piVar3[1];
    if (param_4 <= (uint8)(iVar5 - iVar4)) {
      iVar5 = (int8)pxVar7 - iVar1;
      if (iVar5 != 0) {
        memmove(iVar4,iVar1,iVar5);
      }
      iVar5 = iVar4 + iVar5;
      goto code_r0x0005eb60;
    }
    iVar1 = iVar1 + (iVar5 - iVar4);
    if (iVar5 != iVar4) {
      memmove();
      iVar5 = piVar3[1];
    }
    iVar4 = (int8)pxVar7 - iVar1;
    if (iVar4 != 0) {
      memmove(iVar5,iVar1,iVar4);
    }
  }
  iVar5 = iVar5 + iVar4;
code_r0x0005eb60:
  piVar3[1] = iVar5;
  return;
}

/* 0x5e8c4  size=144 */
void FUN_0005e8c4(int8 *param_1,int8 param_2,xunknown1 *param_3,uint8 param_4)

{
  int8 iVar1;
  xunknown8 xVar2;
  int8 *piVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  xunknown1 *pxVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint8 uVar10;
  xunknown1 axVar11 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return;
  }
  if (-1 < param_2) {
    iVar1 = operator_new_plt(param_2);
    *param_1 = iVar1;
    param_1[1] = iVar1;
    param_1[2] = iVar1 + param_2;
    memset(iVar1,*param_3,param_2);
    param_1[1] = iVar1 + param_2;
    return;
  }
  xVar2 = FUN_0005eb80(param_1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_1[1] = iVar1;
    operator_delete_plt(iVar1,param_1[2] - iVar1);
  }
  axVar11 = FUN_000c5688(xVar2);
  uVar9 = axVar11._8_8_;
  piVar3 = axVar11._0_8_;
  uVar8 = piVar3[2];
  iVar1 = *piVar3;
  if (uVar9 <= uVar8 - iVar1) {
    uVar10 = piVar3[1] - iVar1;
    uVar8 = uVar10;
    if (uVar9 <= uVar10) {
      uVar8 = uVar9;
    }
    if (uVar8 != 0) {
      memset(iVar1,*param_3);
    }
    iVar1 = uVar9 - uVar10;
    if (uVar9 < uVar10 || iVar1 == 0) {
      iVar4 = *piVar3 + uVar9;
    }
    else {
      iVar4 = piVar3[1];
      memset(iVar4,*param_3,iVar1);
      iVar4 = iVar4 + iVar1;
    }
code_r0x0005ea34:
    piVar3[1] = iVar4;
    return;
  }
  pxVar7 = param_3;
  if (iVar1 != 0) {
    piVar3[1] = iVar1;
    operator_delete_plt();
    uVar8 = 0;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
  }
  if (-1 < (int8)uVar9) {
    uVar10 = uVar8 * 2;
    if (uVar8 * 2 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar10 = 0x7fffffffffffffff;
    }
    iVar4 = operator_new_plt(uVar10);
    *piVar3 = iVar4;
    piVar3[1] = iVar4;
    piVar3[2] = iVar4 + uVar10;
    memset(iVar4,*param_3,uVar9);
    iVar4 = iVar4 + uVar9;
    goto code_r0x0005ea34;
  }
  axVar11 = FUN_0005eb80(piVar3);
  iVar1 = axVar11._8_8_;
  piVar3 = axVar11._0_8_;
  uVar9 = piVar3[2];
  iVar4 = *piVar3;
  if (uVar9 - iVar4 < param_4) {
    if (iVar4 != 0) {
      piVar3[1] = iVar4;
      operator_delete_plt(iVar4,uVar9 - iVar4);
      uVar9 = 0;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
    }
    if ((int8)param_4 < 0) {
      FUN_0005eb80(piVar3);
      xVar2 = FUN_0005eb94(0x371ec /* "vector" */);
      xVar6 = cxa_allocate_exception_plt(0x10);
      FUN_0005ebe4(xVar6,xVar2);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d3cd8)(xVar6,xRam00000000000d35e8,xRam00000000000d35f0);
      return;
    }
    uVar8 = uVar9 * 2;
    if (uVar9 * 2 <= param_4) {
      uVar8 = param_4;
    }
    if (0x3ffffffffffffffe < uVar9) {
      uVar8 = 0x7fffffffffffffff;
    }
    iVar5 = operator_new_plt(uVar8);
    iVar4 = (int8)pxVar7 - iVar1;
    *piVar3 = iVar5;
    piVar3[1] = iVar5;
    piVar3[2] = iVar5 + uVar8;
    if (iVar4 != 0) {
      memcpy(iVar5,iVar1,iVar4);
    }
  }
  else {
    iVar5 = piVar3[1];
    if (param_4 <= (uint8)(iVar5 - iVar4)) {
      iVar5 = (int8)pxVar7 - iVar1;
      if (iVar5 != 0) {
        memmove(iVar4,iVar1,iVar5);
      }
      iVar5 = iVar4 + iVar5;
      goto code_r0x0005eb60;
    }
    iVar1 = iVar1 + (iVar5 - iVar4);
    if (iVar5 != iVar4) {
      memmove();
      iVar5 = piVar3[1];
    }
    iVar4 = (int8)pxVar7 - iVar1;
    if (iVar4 != 0) {
      memmove(iVar5,iVar1,iVar4);
    }
  }
  iVar5 = iVar5 + iVar4;
code_r0x0005eb60:
  piVar3[1] = iVar5;
  return;
}

/* 0x5e954  size=256 */
void FUN_0005e954(int8 *param_1,uint8 param_2,xunknown1 *param_3,uint8 param_4)

{
  int8 iVar1;
  int8 iVar2;
  int8 *piVar3;
  int8 iVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown1 *pxVar7;
  uint8 uVar8;
  uint8 uVar9;
  xunknown1 axVar10 [16];
  
  uVar8 = param_1[2];
  iVar1 = *param_1;
  if (param_2 <= uVar8 - iVar1) {
    uVar9 = param_1[1] - iVar1;
    uVar8 = uVar9;
    if (param_2 <= uVar9) {
      uVar8 = param_2;
    }
    if (uVar8 != 0) {
      memset(iVar1,*param_3);
    }
    iVar1 = param_2 - uVar9;
    if (param_2 < uVar9 || iVar1 == 0) {
      iVar2 = *param_1 + param_2;
    }
    else {
      iVar2 = param_1[1];
      memset(iVar2,*param_3,iVar1);
      iVar2 = iVar2 + iVar1;
    }
code_r0x0005ea34:
    param_1[1] = iVar2;
    return;
  }
  pxVar7 = param_3;
  if (iVar1 != 0) {
    param_1[1] = iVar1;
    operator_delete_plt();
    uVar8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (-1 < (int8)param_2) {
    uVar9 = uVar8 * 2;
    if (uVar8 * 2 <= param_2) {
      uVar9 = param_2;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar9 = 0x7fffffffffffffff;
    }
    iVar2 = operator_new_plt(uVar9);
    *param_1 = iVar2;
    param_1[1] = iVar2;
    param_1[2] = iVar2 + uVar9;
    memset(iVar2,*param_3,param_2);
    iVar2 = iVar2 + param_2;
    goto code_r0x0005ea34;
  }
  axVar10 = FUN_0005eb80(param_1);
  iVar1 = axVar10._8_8_;
  piVar3 = axVar10._0_8_;
  uVar8 = piVar3[2];
  iVar2 = *piVar3;
  if (uVar8 - iVar2 < param_4) {
    if (iVar2 != 0) {
      piVar3[1] = iVar2;
      operator_delete_plt(iVar2,uVar8 - iVar2);
      uVar8 = 0;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
    }
    if ((int8)param_4 < 0) {
      FUN_0005eb80(piVar3);
      xVar5 = FUN_0005eb94(0x371ec /* "vector" */);
      xVar6 = cxa_allocate_exception_plt(0x10);
      FUN_0005ebe4(xVar6,xVar5);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d3cd8)(xVar6,xRam00000000000d35e8,xRam00000000000d35f0);
      return;
    }
    uVar9 = uVar8 * 2;
    if (uVar8 * 2 <= param_4) {
      uVar9 = param_4;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar9 = 0x7fffffffffffffff;
    }
    iVar4 = operator_new_plt(uVar9);
    iVar2 = (int8)pxVar7 - iVar1;
    *piVar3 = iVar4;
    piVar3[1] = iVar4;
    piVar3[2] = iVar4 + uVar9;
    if (iVar2 != 0) {
      memcpy(iVar4,iVar1,iVar2);
    }
  }
  else {
    iVar4 = piVar3[1];
    if (param_4 <= (uint8)(iVar4 - iVar2)) {
      iVar4 = (int8)pxVar7 - iVar1;
      if (iVar4 != 0) {
        memmove(iVar2,iVar1,iVar4);
      }
      iVar4 = iVar2 + iVar4;
      goto code_r0x0005eb60;
    }
    iVar1 = iVar1 + (iVar4 - iVar2);
    if (iVar4 != iVar2) {
      memmove();
      iVar4 = piVar3[1];
    }
    iVar2 = (int8)pxVar7 - iVar1;
    if (iVar2 != 0) {
      memmove(iVar4,iVar1,iVar2);
    }
  }
  iVar4 = iVar4 + iVar2;
code_r0x0005eb60:
  piVar3[1] = iVar4;
  return;
}

/* 0x5eb80  size=20 */
void FUN_0005eb80(void)

{
  xunknown8 xVar1;
  xunknown8 xVar2;
  
  xVar1 = FUN_0005eb94(0x371ec /* "vector" */);
  xVar2 = cxa_allocate_exception_plt(0x10);
  FUN_0005ebe4(xVar2,xVar1);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar2,xRam00000000000d35e8,xRam00000000000d35f0);
  return;
}

/* 0x5eb94  size=80 */
void FUN_0005eb94(xunknown8 param_1)

{
  xunknown8 xVar1;
  
  xVar1 = cxa_allocate_exception_plt(0x10);
  FUN_0005ebe4(xVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar1,xRam00000000000d35e8,xRam00000000000d35f0);
  return;
}

/* 0x5ebe4  size=48 */
void FUN_0005ebe4(int8 *param_1)

{
  std__logic_error__logic_error_plt();
  *param_1 = iRam00000000000d35f8 + 0x10;
  return;
}

/* 0x5ec14  size=52 */
void FUN_0005ec14(void)

{
  xunknown8 xVar1;
  
  xVar1 = cxa_allocate_exception_plt(8);
  std__bad_array_new_length__bad_array_new_length_plt();
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar1,xRam00000000000d3600,xRam00000000000d3608);
  return;
}

/* 0x5eedc  size=508 */
/* DECOMPILER HUNG on this function (Ghidra decompiler loop) -- AArch64 disassembly instead:
 * 000000000005ec48 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l>:
 *    5eedc:      	sub	sp, sp, #0x70
 *    5eee0:      	stp	x29, x30, [sp, #0x10]
 *    5eee4:      	stp	x28, x27, [sp, #0x20]
 *    5eee8:      	stp	x26, x25, [sp, #0x30]
 *    5eeec:      	stp	x24, x23, [sp, #0x40]
 *    5eef0:      	stp	x22, x21, [sp, #0x50]
 *    5eef4:      	stp	x20, x19, [sp, #0x60]
 *    5eef8:      	add	x29, sp, #0x10
 *    5eefc:      	ldp	x28, x26, [x0, #0x8]
 *    5ef00:      	mov	x24, x1
 *    5ef04:      	mov	x19, x0
 *    5ef08:      	sub	x8, x26, x28
 *    5ef0c:      	mov	x22, x28
 *    5ef10:      	cmp	x8, x1
 *    5ef14:      	b.hs	0x5ef58 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x310>
 *    5ef18:      	ldr	x20, [x19]
 *    5ef1c:      	sub	x23, x28, x20
 *    5ef20:      	adds	x8, x23, x24
 *    5ef24:      	b.mi	0x5f0d0 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x488>
 *    5ef28:      	sub	x9, x26, x20
 *    5ef2c:      	mov	x11, #0x3fffffffffffffff // =4611686018427387903
 *    5ef30:      	lsl	x10, x9, #1
 *    5ef34:      	cmp	x10, x8
 *    5ef38:      	csel	x8, x10, x8, hi
 *    5ef3c:      	cmp	x9, x11
 *    5ef40:      	mov	x9, #0x7fffffffffffffff // =9223372036854775807
 *    5ef44:      	csel	x25, x8, x9, lo
 *    5ef48:      	cbz	x25, 0x5ef7c <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x334>
 *    5ef4c:      	mov	x0, x25
 *    5ef50:      	bl	0xc9a10 <_Znwm@plt>
 *    5ef54:      	b	0x5ef80 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x338>
 *    5ef58:      	cbz	x24, 0x5ef74 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x32c>
 *    5ef5c:      	mov	x0, x22
 *    5ef60:      	mov	w1, wzr
 *    5ef64:      	mov	x2, x24
 *    5ef68:      	add	x20, x28, x24
 *    5ef6c:      	bl	0xc9920 <memset@plt>
 *    5ef70:      	mov	x22, x20
 *    5ef74:      	str	x22, [x19, #0x8]
 *    5ef78:      	b	0x5f0b0 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x468>
 *    5ef7c:      	mov	x0, xzr
 *    5ef80:      	add	x21, x0, x23
 *    5ef84:      	str	x0, [sp, #0x8]
 *    5ef88:      	add	x25, x0, x25
 *    5ef8c:      	mov	x0, x21
 *    5ef90:      	mov	w1, wzr
 *    5ef94:      	mov	x2, x24
 *    5ef98:      	add	x27, x21, x24
 *    5ef9c:      	bl	0xc9920 <memset@plt>
 *    5efa0:      	cmp	x28, x20
 *    5efa4:      	b.eq	0x5f07c <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x434>
 *    5efa8:      	mov	x14, x21
 *    5efac:      	cmp	x23, #0x8
 *    5efb0:      	b.lo	0x5efd8 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x390>
 *    5efb4:      	ldr	x21, [sp, #0x8]
 *    5efb8:      	sub	x8, x20, x21
 *    5efbc:      	cmp	x8, #0x20
 *    5efc0:      	b.lo	0x5f060 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x418>
 *    5efc4:      	mov	x15, x23
 *    5efc8:      	cmp	x23, #0x20
 *    5efcc:      	b.hs	0x5efe0 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x398>
 *    5efd0:      	mov	x8, xzr
 *    5efd4:      	b	0x5f01c <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x3d4>
 *    5efd8:      	ldr	x21, [sp, #0x8]
 *    5efdc:      	b	0x5f060 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x418>
 *    5efe0:      	sub	x9, x28, #0x10
 *    5efe4:      	and	x8, x15, #0xffffffffffffffe0
 *    5efe8:      	sub	x10, x9, x20
 *    5efec:      	mov	x11, x8
 *    5eff0:      	add	x10, x21, x10
 *    5eff4:      	ldp	q1, q0, [x9, #-0x10]
 *    5eff8:      	sub	x11, x11, #0x20
 *    5effc:      	sub	x9, x9, #0x20
 *    5f000:      	stp	q1, q0, [x10, #-0x10]
 *    5f004:      	sub	x10, x10, #0x20
 *    5f008:      	cbnz	x11, 0x5eff4 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x3ac>
 *    5f00c:      	cmp	x15, x8
 *    5f010:      	b.eq	0x5f074 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x42c>
 *    5f014:      	tst	x15, #0x18
 *    5f018:      	b.eq	0x5f058 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x410>
 *    5f01c:      	sub	x10, x28, x8
 *    5f020:      	and	x9, x15, #0xfffffffffffffff8
 *    5f024:      	sub	x10, x10, #0x8
 *    5f028:      	sub	x22, x28, x9
 *    5f02c:      	sub	x14, x14, x9
 *    5f030:      	sub	x11, x10, x20
 *    5f034:      	sub	x8, x8, x9
 *    5f038:      	add	x11, x21, x11
 *    5f03c:      	ldr	d0, [x10], #-0x8
 *    5f040:      	adds	x8, x8, #0x8
 *    5f044:      	str	d0, [x11], #-0x8
 *    5f048:      	b.ne	0x5f03c <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x3f4>
 *    5f04c:      	cmp	x15, x9
 *    5f050:      	b.ne	0x5f060 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x418>
 *    5f054:      	b	0x5f074 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x42c>
 *    5f058:      	sub	x22, x28, x8
 *    5f05c:      	sub	x14, x14, x8
 *    5f060:      	sub	x8, x14, #0x1
 *    5f064:      	ldrb	w9, [x22, #-0x1]!
 *    5f068:      	cmp	x22, x20
 *    5f06c:      	strb	w9, [x8], #-0x1
 *    5f070:      	b.ne	0x5f064 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x41c>
 *    5f074:      	ldr	x20, [x19]
 *    5f078:      	ldr	x26, [x19, #0x10]
 *    5f07c:      	stp	x21, x27, [x19]
 *    5f080:      	str	x25, [x19, #0x10]
 *    5f084:      	cbz	x20, 0x5f0b0 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__insert_with_sizeB8ne180000IPKhS6_EENS_11__wrap_iterIPhEENS7_IS6_EET_T0_l+0x468>
 *    5f088:      	sub	x1, x26, x20
 *    5f08c:      	mov	x0, x20
 *    5f090:      	ldp	x20, x19, [sp, #0x60]
 *    5f094:      	ldp	x22, x21, [sp, #0x50]
 *    5f098:      	ldp	x24, x23, [sp, #0x40]
 *    5f09c:      	ldp	x26, x25, [sp, #0x30]
 *    5f0a0:      	ldp	x28, x27, [sp, #0x20]
 *    5f0a4:      	ldp	x29, x30, [sp, #0x10]
 *    5f0a8:      	add	sp, sp, #0x70
 *    5f0ac:      	b	0xc9940 <_ZdlPvm@plt>
 *    5f0b0:      	ldp	x20, x19, [sp, #0x60]
 *    5f0b4:      	ldp	x22, x21, [sp, #0x50]
 *    5f0b8:      	ldp	x24, x23, [sp, #0x40]
 *    5f0bc:      	ldp	x26, x25, [sp, #0x30]
 *    5f0c0:      	ldp	x28, x27, [sp, #0x20]
 *    5f0c4:      	ldp	x29, x30, [sp, #0x10]
 *    5f0c8:      	add	sp, sp, #0x70
 *    5f0cc:      	ret
 *    5f0d0:      	mov	x0, x19
 *    5f0d4:      	bl	0x5eb80 <_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE18__assign_with_sizeB8ne180000IPKhS6_EEvT_T0_l+0x12c>
 */

/* 0x5f0d8  size=19428 */
/* WARNING: Type propagation algorithm not settling */

void FUN_0005f0d8(void)

{
  bool bVar1;
  xunknown1 *pxVar2;
  char cVar3;
  uint1 uVar4;
  uint1 uVar5;
  uint1 uVar6;
  xunknown4 xVar7;
  uint2 uVar8;
  uint2 uVar9;
  uint2 uVar10;
  int8 iVar11;
  float4 fVar12;
  xunknown8 xVar13;
  xunknown8 xVar14;
  xunknown8 xVar15;
  xunknown8 xVar16;
  xunknown8 xVar17;
  xunknown8 xVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint1 uVar22;
  uint1 uVar23;
  uint1 uVar24;
  int4 iVar25;
  xunknown4 xVar26;
  xunknown4 xVar27;
  int4 iVar28;
  uint4 uVar29;
  uint4 uVar30;
  uint4 uVar31;
  uint4 uVar32;
  uint4 uVar33;
  uint4 uVar34;
  uint4 uVar35;
  uint4 uVar36;
  uint4 uVar37;
  int4 iVar38;
  int4 iVar39;
  xunknown4 xVar40;
  xunknown8 *pxVar41;
  uint8 *puVar42;
  uint8 uVar43;
  uint8 uVar44;
  xunknown8 xVar45;
  uint8 uVar46;
  float4 *pfVar47;
  int8 iVar48;
  xunknown8 *pxVar49;
  float4 *pfVar50;
  uint4 uVar51;
  code *pcVar52;
  uint1 uVar53;
  int8 iVar54;
  int4 iVar55;
  xunknown8 *pxVar56;
  xunknown8 *pxVar57;
  xunknown4 *pxVar58;
  char cVar59;
  int4 *piVar60;
  int8 iVar61;
  xunknown8 *pxVar62;
  float4 fVar63;
  xunknown8 xVar64;
  xunknown8 xVar65;
  xunknown8 xVar66;
  xunknown8 xVar67;
  float4 fVar68;
  xunknown8 xVar69;
  float4 fVar70;
  float4 fVar71;
  int4 iVar72;
  float4 fVar73;
  float4 fVar75;
  int4 iVar76;
  float8 fVar74;
  float8 fVar77;
  float4 fVar78;
  float4 fVar79;
  float4 fVar80;
  float4 fVar81;
  float4 fVar82;
  xunknown8 in_stack_fffffffffffffa70;
  xunknown8 in_stack_fffffffffffffa78;
  xunknown4 xStack_56c;
  float4 fStack_568;
  float4 fStack_564;
  float4 fStack_560;
  float4 fStack_55c;
  float4 fStack_558;
  float4 fStack_550;
  uint1 uStack_4c8;
  unkbyte7 Stack_4c7;
  xunknown8 xStack_4b8;
  uint8 uStack_4b0;
  uint8 uStack_4a8;
  uint8 uStack_4a0;
  uint1 uStack_498;
  unkbyte7 Stack_497;
  xunknown8 xStack_488;
  uint8 uStack_480;
  uint8 uStack_478;
  uint8 uStack_470;
  uint1 uStack_468;
  unkbyte7 Stack_467;
  xunknown8 xStack_458;
  uint8 uStack_450;
  uint8 uStack_448;
  uint8 uStack_440;
  uint1 uStack_438;
  unkbyte7 Stack_437;
  xunknown8 xStack_428;
  uint8 uStack_420;
  uint8 uStack_418;
  uint8 uStack_410;
  uint8 uStack_400;
  int8 iStack_3f8;
  xunknown8 *pxStack_3f0;
  uint8 uStack_3e0;
  uint8 uStack_3d8;
  uint8 uStack_3d0;
  uint8 uStack_3c0;
  int8 iStack_3b8;
  xunknown8 *pxStack_3b0;
  uint8 uStack_3a0;
  uint8 uStack_398;
  uint8 uStack_390;
  xunknown4 xStack_384;
  uint8 uStack_380;
  char cStack_378;
  xunknown4 xStack_374;
  uint8 uStack_370;
  int8 iStack_368;
  xunknown8 *pxStack_360;
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
  xunknown4 xStack_2c0;
  xunknown8 xStack_2b0;
  xunknown8 xStack_2a8;
  xunknown8 xStack_2a0;
  xunknown4 xStack_298;
  xunknown4 xStack_294;
  xunknown4 xStack_290;
  xunknown4 xStack_28c;
  xunknown4 xStack_288;
  xunknown1 axStack_278 [64];
  xunknown1 axStack_238 [24];
  xunknown8 xStack_220;
  xunknown4 xStack_1f8;
  xunknown4 xStack_1f4;
  xunknown4 xStack_1f0;
  uint1 uStack_1ec;
  uint4 uStack_190;
  xunknown4 xStack_18c;
  xunknown4 xStack_188;
  xunknown4 xStack_184;
  xunknown4 xStack_180;
  xunknown4 xStack_17c;
  int4 iStack_178;
  xunknown4 xStack_174;
  xunknown4 xStack_170;
  xunknown4 xStack_16c;
  xunknown4 xStack_168;
  xunknown4 xStack_164;
  xunknown4 xStack_160;
  xunknown4 xStack_15c;
  xunknown4 xStack_158;
  xunknown4 xStack_154;
  xunknown4 xStack_150;
  xunknown4 xStack_14c;
  xunknown4 xStack_148;
  xunknown4 xStack_144;
  xunknown4 xStack_140;
  xunknown4 xStack_13c;
  xunknown4 xStack_138;
  xunknown4 xStack_134;
  uint4 uStack_130;
  xunknown4 xStack_12c;
  xunknown8 xStack_128;
  xunknown8 xStack_120;
  xunknown8 xStack_118;
  xunknown8 xStack_110;
  xunknown8 xStack_108;
  xunknown8 xStack_100;
  xunknown8 xStack_f8;
  xunknown8 xStack_f0;
  xunknown8 xStack_e8;
  xunknown4 xStack_e0;
  uint8 uStack_d0;
  xunknown8 xStack_c8;
  xunknown8 *pxStack_c0;
  int8 iStack_b8;
  
  iVar11 = tpidr_el0;
  iStack_b8 = *(int8 *)(iVar11 + 0x28);
  if (cRam00000000000d9794 == '\x01') {
    if (*(int8 *)(iVar11 + 0x28) == iStack_b8) {
                    /* WARNING: Could not recover jumptable at 0x000c9b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d3d00)(1,0,0);
      return;
    }
    goto code_r0x00063cb8;
  }
  if ((uRam00000000000d9795 & 1) == 0) {
    xStack_220 = 0;
    gl__SavedState__Save_plt(axStack_278);
    uRam00000000000d9795 = 1;
    xStack_384 = 2;
    xStack_374 = 0;
    uStack_380 = 0;
    cStack_378 = '\0';
    uVar44 = gl__Load_plt(&xStack_384,pcRam00000000000d9690);
    xVar69 = 0x40507 /* "post: needs OpenGL ES 3 - off" */;
    if (((uVar44 & 1) != 0) && ((uStack_380 & 0x100000000) != 0)) {
      (*(code *)*pxRam00000000000d3350)(1,0xd980c);
      pxVar57 = pxRam00000000000d3360;
      (*(code *)*pxRam00000000000d3360)(xRam00000000000d980c,0x2801,0x2600);
      (*(code *)*pxVar57)(xRam00000000000d980c,0x2800,0x2600);
      (*(code *)*pxVar57)(xRam00000000000d980c,0x2802,0x812f);
      (*(code *)*pxVar57)(xRam00000000000d980c,0x2803,0x812f);
      uVar22 = gl__HasExtension_plt(0x38412 /* "GL_EXT_shader_framebuffer_fetch" */);
      uRam00000000000d98a8 =
           ((0.0 < fRam00000000000d88b0 | uVar22 ^ 0xff |
            (cRam00000000000d88b9 != '\0' || uRam00000000000d88b8 != 0) | uRam00000000000d88ec) ^
           0xff) & 1;
      if (cRam00000000000d88b9 == '\x01') {
        xVar26 = gl__Compile_plt(0x8b31,0x30edb /* "#version 300 es\nout vec2 vUV;\nvoid main(){ vec2 p = vec2(float((gl_V..." */,0x3d2e8,pcRam00000000000d9690);
        xVar27 = gl__Compile_plt(0x8b30,0x2ecfc /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x3d2e8,pcRam00000000000d9690);
        xVar69 = gl__Link_plt(xVar26,xVar27,0x3d2e8,pcRam00000000000d9690);
        pxVar41 = pxRam00000000000d3408;
        iRam00000000000d9890 = (int4)xVar69;
        if (iRam00000000000d9890 == 0) {
          (*pcRam00000000000d9690)(1,0x2d4f5 /* "post: TAA shader failed - TAA off" */);
          cRam00000000000d88b9 = '\0';
        }
        else {
          xRam00000000000d8a58 = (*(code *)*pxRam00000000000d3408)(xVar69,0x3fc4a /* "uCur" */);
          xRam00000000000d8a5c = (*(code *)*pxVar41)(iRam00000000000d9890,0x34c2e /* "uHist" */);
          xRam00000000000d8a60 = (*(code *)*pxVar41)(iRam00000000000d9890,0x2d517 /* "uDepth" */);
          xRam00000000000d8a6c = (*(code *)*pxVar41)(iRam00000000000d9890,0x2a132 /* "uIVP" */);
          xRam00000000000d8a70 = (*(code *)*pxVar41)(iRam00000000000d9890,0x3fc4f /* "uPrev" */);
          xRam00000000000d8a74 = (*(code *)*pxVar41)(iRam00000000000d9890,0x38432);
          xRam00000000000d8a64 = (*(code *)*pxVar41)(iRam00000000000d9890,0x323e4 /* "uPrevD" */);
          xRam00000000000d8a68 = (*(code *)*pxVar41)(iRam00000000000d9890,0x35843 /* "uCamD" */);
          xRam00000000000d8a78 = (*(code *)*pxVar41)(iRam00000000000d9890,0x2ade2);
          (*(code *)*pxRam00000000000d3240)(1,0xd98d8);
        }
      }
      FUN_00065b64(&uStack_190,0x7ff);
      uVar44 = FUN_00065924(0xd8a7c,&uStack_190,0x2a137 /* "composite" */);
      uVar46 = uVar44 & 0xffffffff;
      if ((uStack_190 & 1) != 0) {
        operator_delete_plt(CONCAT44(xStack_17c,xStack_180),
                            CONCAT44(xStack_18c,uStack_190) & 0xfffffffffffffffe);
      }
      if (((uVar44 & 1) == 0) && ((uRam00000000000d98a8 & 1) != 0)) {
        (*pcRam00000000000d9690)(1,0x22428 /* "post: fetch composite failed - trying the copy path" */);
        uRam00000000000d98a8 = 0;
        FUN_00065b64(&uStack_190,0x7ff);
        uVar46 = FUN_00065924(0xd8a7c,&uStack_190,0x2a137 /* "composite" */);
        uVar46 = uVar46 & 0xffffffff;
        if ((uStack_190 & 1) != 0) {
          operator_delete_plt(CONCAT44(xStack_17c,xStack_180),
                              CONCAT44(xStack_18c,uStack_190) & 0xfffffffffffffffe);
        }
      }
      if ((uVar46 & 1) != 0) {
        pxStack_360 = (xunknown8 *)operator_new_plt(0x70);
        iVar61 = iRam00000000000220f8;
        uVar44 = uRam00000000000220f0;
        *(xunknown1 *)((int8)pxStack_360 + 0x62) = 0;
        *(xunknown2 *)(pxStack_360 + 0xc) = 0xa3b;
        xVar14 = xRam0000000000034d3e;
        xVar13 = xRam0000000000034d36;
        xVar67 = xRam0000000000034d2e;
        xVar66 = xRam0000000000034d26;
        iStack_368 = iVar61;
        uStack_370 = uVar44;
        pxStack_360[5] = xRam0000000000034d2e;
        pxStack_360[4] = xVar66;
        pxStack_360[7] = xVar14;
        pxStack_360[6] = xVar13;
        xVar18 = xRam0000000000034d5e;
        xVar17 = xRam0000000000034d56;
        xVar16 = xRam0000000000034d4e;
        xVar15 = xRam0000000000034d46;
        pxStack_360[9] = xRam0000000000034d4e;
        pxStack_360[8] = xVar15;
        pxStack_360[0xb] = xVar18;
        pxStack_360[10] = xVar17;
        xVar65 = xRam0000000000034d1e;
        xVar64 = xRam0000000000034d16;
        xVar45 = xRam0000000000034d0e;
        xVar69 = xRam0000000000034d06;
        pxStack_360[1] = xRam0000000000034d0e;
        *pxStack_360 = xVar69;
        pxStack_360[3] = xVar65;
        pxStack_360[2] = xVar64;
        pxVar41 = (xunknown8 *)std____ndk1__basic_string__append_plt_1(&uStack_370,0x2c0d5 /* "uniform highp sampler2D uTex; uniform vec4 uP0;  // x threshold, y kne..." */);
        xStack_180 = (xunknown4)pxVar41[2];
        xStack_17c = (xunknown4)((uint8)pxVar41[2] >> 0x20);
        xStack_188 = (xunknown4)pxVar41[1];
        xStack_184 = (xunknown4)((uint8)pxVar41[1] >> 0x20);
        uStack_190 = (uint4)*pxVar41;
        xStack_18c = (xunknown4)((uint8)*pxVar41 >> 0x20);
        pxVar41[1] = 0;
        pxVar41[2] = 0;
        *pxVar41 = 0;
        uVar46 = FUN_00065924(0xd8940,&uStack_190,0x34c34 /* "bloom-prefilter" */);
        if ((uVar46 & 1) == 0) {
          uVar44 = 0;
        }
        else {
          pxStack_c0 = (xunknown8 *)operator_new_plt(0x70);
          *(xunknown2 *)(pxStack_c0 + 0xc) = 0xa3b;
          xStack_c8 = iVar61;
          uStack_d0 = uVar44;
          *(xunknown1 *)((int8)pxStack_c0 + 0x62) = 0;
          pxStack_c0[5] = xVar67;
          pxStack_c0[4] = xVar66;
          pxStack_c0[7] = xVar14;
          pxStack_c0[6] = xVar13;
          pxStack_c0[1] = xVar45;
          *pxStack_c0 = xVar69;
          pxStack_c0[3] = xVar65;
          pxStack_c0[2] = xVar64;
          pxStack_c0[9] = xVar16;
          pxStack_c0[8] = xVar15;
          pxStack_c0[0xb] = xVar18;
          pxStack_c0[10] = xVar17;
          puVar42 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_d0,0x27e80 /* "uniform sampler2D uTex; uniform vec2 uTexel;\nvoid main(){\n  vec2 t =..." */);
          xStack_2a0 = puVar42[2];
          xStack_2a8 = puVar42[1];
          xStack_2b0 = *puVar42;
          puVar42[1] = 0;
          puVar42[2] = 0;
          *puVar42 = 0;
          uVar46 = FUN_00065924(0xd8968,&xStack_2b0,0x34c44 /* "bloom-down" */);
          if ((uVar46 & 1) == 0) {
            uVar44 = 0;
          }
          else {
            pxStack_3b0 = (xunknown8 *)operator_new_plt(0x70);
            *(xunknown2 *)(pxStack_3b0 + 0xc) = 0xa3b;
            iStack_3b8 = iVar61;
            uStack_3c0 = uVar44;
            *(xunknown1 *)((int8)pxStack_3b0 + 0x62) = 0;
            pxStack_3b0[5] = xVar67;
            pxStack_3b0[4] = xVar66;
            pxStack_3b0[7] = xVar14;
            pxStack_3b0[6] = xVar13;
            pxStack_3b0[1] = xVar45;
            *pxStack_3b0 = xVar69;
            pxStack_3b0[3] = xVar65;
            pxStack_3b0[2] = xVar64;
            pxStack_3b0[9] = xVar16;
            pxStack_3b0[8] = xVar15;
            pxStack_3b0[0xb] = xVar18;
            pxStack_3b0[10] = xVar17;
            puVar42 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_3c0,0x22fb8 /* "uniform sampler2D uTex; uniform vec2 uTexel; uniform vec4 uP0;  // x =..." */);
            uStack_390 = puVar42[2];
            uStack_398 = puVar42[1];
            uStack_3a0 = *puVar42;
            puVar42[1] = 0;
            puVar42[2] = 0;
            *puVar42 = 0;
            uVar46 = FUN_00065924(0xd8990,&uStack_3a0,0x291f3 /* "bloom-up" */);
            if ((uVar46 & 1) == 0) {
              uVar44 = 0;
            }
            else {
              pxStack_3f0 = (xunknown8 *)operator_new_plt(0x70);
              *(xunknown2 *)(pxStack_3f0 + 0xc) = 0xa3b;
              iStack_3f8 = iVar61;
              uStack_400 = uVar44;
              *(xunknown1 *)((int8)pxStack_3f0 + 0x62) = 0;
              pxStack_3f0[5] = xVar67;
              pxStack_3f0[4] = xVar66;
              pxStack_3f0[7] = xVar14;
              pxStack_3f0[6] = xVar13;
              pxStack_3f0[1] = xVar45;
              *pxStack_3f0 = xVar69;
              pxStack_3f0[3] = xVar65;
              pxStack_3f0[2] = xVar64;
              pxStack_3f0[9] = xVar16;
              pxStack_3f0[8] = xVar15;
              pxStack_3f0[0xb] = xVar18;
              pxStack_3f0[10] = xVar17;
              puVar42 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_400,0x25d43 /* "uniform sampler2D uTex; uniform vec2 uTexel;\nfloat Lm(vec2 uv){ vec3 ..." */);
              uStack_3d0 = puVar42[2];
              uStack_3d8 = puVar42[1];
              uStack_3e0 = *puVar42;
              puVar42[1] = 0;
              puVar42[2] = 0;
              *puVar42 = 0;
              uVar44 = FUN_00065924(0xd89b8,&uStack_3e0,0x266a2 /* "luminance" */);
              if ((uVar44 & 1) == 0) {
                uVar44 = 0;
              }
              else {
                ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_plt
                          (&uStack_438,0x34d06 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nin hi..." */);
                puVar42 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_438,0x38459 /* "uniform sampler2D uTex; uniform sampler2D uTex2; uniform vec4 uP0; uni..." */);
                uStack_410 = puVar42[2];
                uStack_418 = puVar42[1];
                uStack_420 = *puVar42;
                puVar42[1] = 0;
                puVar42[2] = 0;
                *puVar42 = 0;
                uVar44 = FUN_00065924(0xd89e0,&uStack_420,0x2245c /* "adapt" */);
                if ((uVar44 & 1) == 0) {
                  uVar44 = 0;
                }
                else {
                  ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_plt
                            (&uStack_468,0x34d06 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nin hi..." */);
                  puVar42 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_468,0x25ef6 /* "uniform sampler2D uTex; uniform sampler2D uTex2; uniform vec4 uP0;   /..." */);
                  uStack_440 = puVar42[2];
                  uStack_448 = puVar42[1];
                  uStack_450 = *puVar42;
                  puVar42[1] = 0;
                  puVar42[2] = 0;
                  *puVar42 = 0;
                  uVar44 = FUN_00065924(0xd8a08,&uStack_450,0x2d51e /* "sun-mask" */);
                  if ((uVar44 & 1) == 0) {
                    uVar44 = 0;
                  }
                  else {
                    ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_plt
                              (&uStack_498,0x34d06 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nin hi..." */);
                    puVar42 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_498,0x22473 /* "uniform sampler2D uTex; uniform vec4 uP0; uniform vec4 uP1;   // P0: x..." */);
                    uStack_470 = puVar42[2];
                    uStack_478 = puVar42[1];
                    uStack_480 = *puVar42;
                    puVar42[1] = 0;
                    puVar42[2] = 0;
                    *puVar42 = 0;
                    uVar44 = FUN_00065924(0xd8a30,&uStack_480,0x2d527 /* "sun-blur" */);
                    if ((uVar44 & 1) == 0) {
                      uVar44 = 0;
                    }
                    else {
                      ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_plt
                                (&uStack_4c8,0x34d06 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nin hi..." */);
                      puVar42 = (uint8 *)std____ndk1__basic_string__append_plt_1
                                                   (&uStack_4c8,0x231d3 /* "uniform sampler2D uTex; uniform vec2 uTexel;\nvoid main(){\n  vec2 o =..." */);
                      uStack_4a0 = puVar42[2];
                      uStack_4a8 = puVar42[1];
                      uStack_4b0 = *puVar42;
                      puVar42[1] = 0;
                      puVar42[2] = 0;
                      *puVar42 = 0;
                      uVar44 = FUN_00065924(0xd8aa4,&uStack_4b0,0x3fc55 /* "glow-up" */);
                      uVar44 = uVar44 & 0xffffffff;
                      if ((uStack_4b0 & 1) != 0) {
                        operator_delete_plt(uStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
                      }
                      if ((uStack_4c8 & 1) != 0) {
                        operator_delete_plt(xStack_4b8,
                                            CONCAT71(Stack_4c7,uStack_4c8) & 0xfffffffffffffffe);
                      }
                    }
                    if ((uStack_480 & 1) != 0) {
                      operator_delete_plt(uStack_470,uStack_480 & 0xfffffffffffffffe);
                    }
                    if ((uStack_498 & 1) != 0) {
                      operator_delete_plt(xStack_488,
                                          CONCAT71(Stack_497,uStack_498) & 0xfffffffffffffffe);
                    }
                  }
                  if ((uStack_450 & 1) != 0) {
                    operator_delete_plt(uStack_440,uStack_450 & 0xfffffffffffffffe);
                  }
                  if ((uStack_468 & 1) != 0) {
                    operator_delete_plt(xStack_458,
                                        CONCAT71(Stack_467,uStack_468) & 0xfffffffffffffffe);
                  }
                }
                if ((uStack_420 & 1) != 0) {
                  operator_delete_plt(uStack_410,uStack_420 & 0xfffffffffffffffe);
                }
                if ((uStack_438 & 1) != 0) {
                  operator_delete_plt(xStack_428,CONCAT71(Stack_437,uStack_438) & 0xfffffffffffffffe
                                     );
                }
              }
              if ((uStack_3e0 & 1) != 0) {
                operator_delete_plt(uStack_3d0,uStack_3e0 & 0xfffffffffffffffe);
              }
              if ((uStack_400 & 1) != 0) {
                operator_delete_plt(pxStack_3f0,uStack_400 & 0xfffffffffffffffe);
              }
            }
            if ((uStack_3a0 & 1) != 0) {
              operator_delete_plt(uStack_390,uStack_3a0 & 0xfffffffffffffffe);
            }
            if ((uStack_3c0 & 1) != 0) {
              operator_delete_plt(pxStack_3b0,uStack_3c0 & 0xfffffffffffffffe);
            }
          }
          if ((xStack_2b0 & 1) != 0) {
            operator_delete_plt(xStack_2a0,xStack_2b0 & 0xfffffffffffffffe);
          }
          if ((uStack_d0 & 1) != 0) {
            operator_delete_plt(pxStack_c0,uStack_d0 & 0xfffffffffffffffe);
          }
        }
        if ((uStack_190 & 1) != 0) {
          operator_delete_plt(CONCAT44(xStack_17c,xStack_180),
                              CONCAT44(xStack_18c,uStack_190) & 0xfffffffffffffffe);
        }
        pxVar41 = pxRam00000000000d9660;
        if ((uStack_370 & 1) != 0) {
          operator_delete_plt(pxStack_360,uStack_370 & 0xfffffffffffffffe);
          pxVar41 = pxRam00000000000d9660;
        }
        pxRam00000000000d9660 = pxVar41;
        if ((uVar44 & 1) != 0) {
          iVar61 = (int8)pxRam00000000000d9670 - (int8)pxVar41;
          pxRam00000000000d9668 = pxVar41;
          if ((uint8)((iVar61 >> 2) * -0x70a3d70a3d70a3d7) < 0x40) {
            pxRam00000000000d9660 = (xunknown8 *)operator_new_plt(0x1900);
            pxRam00000000000d9670 = pxRam00000000000d9660 + 800;
            pxRam00000000000d9668 = pxRam00000000000d9660;
            if (pxVar41 != (xunknown8 *)0x0) {
              operator_delete_plt(pxVar41,iVar61);
            }
          }
          xStack_134 = 0;
          uStack_130 = uStack_130 & 0xffffff00;
          uStack_190 = 0x7ff;
          xStack_13c = 0;
          xStack_138 = 0;
          xStack_144 = 0;
          xStack_140 = 0;
          xStack_14c = 0;
          xStack_148 = 0;
          xStack_154 = 0;
          xStack_150 = 0;
          xStack_15c = 0;
          xStack_158 = 0;
          xStack_164 = 0;
          xStack_160 = 0;
          xStack_16c = (xunknown4)xRam00000000000d8a9c;
          xStack_168 = (xunknown4)((uint8)xRam00000000000d8a9c >> 0x20);
          xStack_184 = (xunknown4)xRam00000000000d8a84;
          xStack_180 = (xunknown4)((uint8)xRam00000000000d8a84 >> 0x20);
          xStack_18c = xRam00000000000d8a7c;
          xStack_188 = xRam00000000000d8a80;
          xStack_174 = (xunknown4)xRam00000000000d8a94;
          xStack_170 = (xunknown4)((uint8)xRam00000000000d8a94 >> 0x20);
          xStack_17c = (xunknown4)xRam00000000000d8a8c;
          iStack_178 = (int4)((uint8)xRam00000000000d8a8c >> 0x20);
          (*(code *)*pxRam00000000000d33d8)(xRam00000000000d8a7c);
          FUN_00065f64(&uStack_190);
          pxVar62 = pxRam00000000000d9668;
          pxVar41 = pxRam00000000000d9660;
          if (pxRam00000000000d9670 <= pxRam00000000000d9668) {
            iVar61 = (int8)pxRam00000000000d9668 - (int8)pxRam00000000000d9660;
            uVar44 = (iVar61 >> 2) * -0x70a3d70a3d70a3d7 + 1;
            if (uVar44 < 0x28f5c28f5c28f5d) {
              iVar54 = (int8)pxRam00000000000d9670 - (int8)pxRam00000000000d9660;
              iVar48 = iVar54 >> 2;
              uVar46 = iVar48 * 0x1eb851eb851eb852;
              if (uVar46 <= uVar44) {
                uVar46 = uVar44;
              }
              if (0x147ae147ae147ad < (uint8)(iVar48 * -0x70a3d70a3d70a3d7)) {
                uVar46 = 0x28f5c28f5c28f5c;
              }
              if (uVar46 < 0x28f5c28f5c28f5d) {
                iVar48 = operator_new_plt(uVar46 * 100);
                pxRam00000000000d9660 = (xunknown8 *)(iVar48 + iVar61);
                pxRam00000000000d9660[7] = CONCAT44(xStack_154,xStack_158);
                pxRam00000000000d9660[6] = CONCAT44(xStack_15c,xStack_160);
                pxRam00000000000d9660[9] = CONCAT44(xStack_144,xStack_148);
                pxRam00000000000d9660[8] = CONCAT44(xStack_14c,xStack_150);
                pxRam00000000000d9660[0xb] = CONCAT44(xStack_134,xStack_138);
                pxRam00000000000d9660[10] = CONCAT44(xStack_13c,xStack_140);
                *(uint4 *)(pxRam00000000000d9660 + 0xc) = uStack_130;
                pxRam00000000000d9670 = (xunknown8 *)(iVar48 + uVar46 * 100);
                pxVar56 = (xunknown8 *)((int8)pxRam00000000000d9660 + 100);
                pxRam00000000000d9660[1] = CONCAT44(xStack_184,xStack_188);
                *pxRam00000000000d9660 = CONCAT44(xStack_18c,uStack_190);
                pxRam00000000000d9660[3] = CONCAT44(xStack_174,iStack_178);
                pxRam00000000000d9660[2] = CONCAT44(xStack_17c,xStack_180);
                pxRam00000000000d9660[5] = CONCAT44(xStack_164,xStack_168);
                pxRam00000000000d9660[4] = CONCAT44(xStack_16c,xStack_170);
                pxVar49 = pxRam00000000000d9660;
                if (pxVar62 != pxVar41) {
                  do {
                    xVar69 = *(xunknown8 *)((int8)pxVar62 + -0x44);
                    xVar64 = *(xunknown8 *)((int8)pxVar62 + -0x4c);
                    xVar45 = *(xunknown8 *)((int8)pxVar62 + -0x54);
                    xVar66 = *(xunknown8 *)((int8)pxVar62 + -0x5c);
                    xVar65 = *(xunknown8 *)((int8)pxVar62 + -100);
                    *(xunknown8 *)((int8)pxVar49 + -0x3c) = *(xunknown8 *)((int8)pxVar62 + -0x3c);
                    *(xunknown8 *)((int8)pxVar49 + -0x44) = xVar69;
                    *(xunknown8 *)((int8)pxVar49 + -0x4c) = xVar64;
                    *(xunknown8 *)((int8)pxVar49 + -0x54) = xVar45;
                    *(xunknown8 *)((int8)pxVar49 + -0x5c) = xVar66;
                    *(xunknown8 *)((int8)pxVar49 + -100) = xVar65;
                    pxVar2 = (xunknown1 *)((int8)pxVar62 + -4);
                    xVar45 = *(xunknown8 *)((int8)pxVar62 + -0xc);
                    xVar69 = *(xunknown8 *)((int8)pxVar62 + -0x14);
                    xVar65 = *(xunknown8 *)((int8)pxVar62 + -0x2c);
                    xVar64 = *(xunknown8 *)((int8)pxVar62 + -0x34);
                    xVar67 = *(xunknown8 *)((int8)pxVar62 + -0x1c);
                    xVar66 = *(xunknown8 *)((int8)pxVar62 + -0x24);
                    pxVar62 = (xunknown8 *)((int8)pxVar62 + -100);
                    *(xunknown1 *)((int8)pxVar49 + -4) = *pxVar2;
                    pxRam00000000000d9660 = (xunknown8 *)((int8)pxVar49 + -100);
                    *(xunknown8 *)((int8)pxVar49 + -0xc) = xVar45;
                    *(xunknown8 *)((int8)pxVar49 + -0x14) = xVar69;
                    *(xunknown8 *)((int8)pxVar49 + -0x1c) = xVar67;
                    *(xunknown8 *)((int8)pxVar49 + -0x24) = xVar66;
                    *(xunknown8 *)((int8)pxVar49 + -0x2c) = xVar65;
                    *(xunknown8 *)((int8)pxVar49 + -0x34) = xVar64;
                    pxVar49 = pxRam00000000000d9660;
                  } while (pxVar62 != pxVar41);
                }
                if (pxVar41 != (xunknown8 *)0x0) {
                  pxRam00000000000d9668 = pxVar56;
                  operator_delete_plt(pxVar41,iVar54);
                }
                goto code_r0x0005fdb4;
              }
            }
            else {
              if (*(int8 *)(iVar11 + 0x28) != iStack_b8) goto code_r0x00063cb8;
              FUN_0006630c();
            }
            if (*(int8 *)(iVar11 + 0x28) == iStack_b8) {
              xVar69 = FUN_0005ec14();
              if ((uStack_4b0 & 1) != 0) {
                operator_delete_plt(uStack_4a0,uStack_4b0 & 0xfffffffffffffffe);
              }
              if ((uStack_4c8 & 1) != 0) {
                operator_delete_plt(xStack_4b8,CONCAT71(Stack_4c7,uStack_4c8) & 0xfffffffffffffffe);
              }
              if ((uStack_480 & 1) != 0) {
                operator_delete_plt(uStack_470,uStack_480 & 0xfffffffffffffffe);
              }
              if ((uStack_498 & 1) != 0) {
                operator_delete_plt(xStack_488,CONCAT71(Stack_497,uStack_498) & 0xfffffffffffffffe);
              }
              if ((uStack_450 & 1) != 0) {
                operator_delete_plt(uStack_440,uStack_450 & 0xfffffffffffffffe);
              }
              if ((uStack_468 & 1) != 0) {
                operator_delete_plt(xStack_458,CONCAT71(Stack_467,uStack_468) & 0xfffffffffffffffe);
              }
              if ((uStack_420 & 1) != 0) {
                operator_delete_plt(uStack_410,uStack_420 & 0xfffffffffffffffe);
              }
              if ((uStack_438 & 1) != 0) {
                operator_delete_plt(xStack_428,CONCAT71(Stack_437,uStack_438) & 0xfffffffffffffffe);
              }
              if ((uStack_3e0 & 1) != 0) {
                operator_delete_plt(uStack_3d0,uStack_3e0 & 0xfffffffffffffffe);
              }
              if ((uStack_400 & 1) != 0) {
                operator_delete_plt(pxStack_3f0,uStack_400 & 0xfffffffffffffffe);
              }
              if ((uStack_3a0 & 1) != 0) {
                operator_delete_plt(uStack_390,uStack_3a0 & 0xfffffffffffffffe);
              }
              if ((uStack_3c0 & 1) != 0) {
                operator_delete_plt(pxStack_3b0,uStack_3c0 & 0xfffffffffffffffe);
              }
              if ((xStack_2b0 & 1) != 0) {
                operator_delete_plt(xStack_2a0,xStack_2b0 & 0xfffffffffffffffe);
              }
              if ((uStack_d0 & 1) != 0) {
                operator_delete_plt(pxStack_c0,uStack_d0 & 0xfffffffffffffffe);
              }
              if ((uStack_190 & 1) != 0) {
                operator_delete_plt(CONCAT44(xStack_17c,xStack_180),
                                    CONCAT44(xStack_18c,uStack_190) & 0xfffffffffffffffe);
              }
              if ((uStack_370 & 1) != 0) {
                operator_delete_plt(pxStack_360,uStack_370 & 0xfffffffffffffffe);
              }
              if (iRam00000000000d9688 == iStack_b8) {
                FUN_000c5688(xVar69);
              }
            }
            goto code_r0x00063cb8;
          }
          pxVar56 = (xunknown8 *)((int8)pxRam00000000000d9668 + 100);
          pxRam00000000000d9668[3] = CONCAT44(xStack_174,iStack_178);
          pxRam00000000000d9668[2] = CONCAT44(xStack_17c,xStack_180);
          pxRam00000000000d9668[5] = CONCAT44(xStack_164,xStack_168);
          pxRam00000000000d9668[4] = CONCAT44(xStack_16c,xStack_170);
          pxRam00000000000d9668[1] = CONCAT44(xStack_184,xStack_188);
          *pxRam00000000000d9668 = CONCAT44(xStack_18c,uStack_190);
          *(uint4 *)(pxRam00000000000d9668 + 0xc) = uStack_130;
          pxRam00000000000d9668[9] = CONCAT44(xStack_144,xStack_148);
          pxRam00000000000d9668[8] = CONCAT44(xStack_14c,xStack_150);
          pxRam00000000000d9668[0xb] = CONCAT44(xStack_134,xStack_138);
          pxRam00000000000d9668[10] = CONCAT44(xStack_13c,xStack_140);
          pxRam00000000000d9668[7] = CONCAT44(xStack_154,xStack_158);
          pxRam00000000000d9668[6] = CONCAT44(xStack_15c,xStack_160);
code_r0x0005fdb4:
          pxVar41 = pxRam00000000000d3350;
          pxRam00000000000d9668 = pxVar56;
          (*(code *)*pxRam00000000000d3500)(1,0xd97a0);
          (*(code *)*pxVar41)(1,0xd9808);
          (*(code *)*pxVar57)(xRam00000000000d9808,0x2801,0x2601);
          (*(code *)*pxVar57)(xRam00000000000d9808,0x2800,0x2601);
          (*(code *)*pxVar57)(xRam00000000000d9808,0x2802,0x812f);
          (*(code *)*pxVar57)(xRam00000000000d9808,0x2803,0x812f);
          (*(code *)*pxVar41)(1,0xd9854);
          (*(code *)*pxVar57)(xRam00000000000d9854,0x2801,0x2700);
          (*(code *)*pxVar57)(xRam00000000000d9854,0x2800,0x2600);
          (*(code *)*pxVar57)(xRam00000000000d9854,0x2802,0x812f);
          (*(code *)*pxVar57)(xRam00000000000d9854,0x2803,0x812f);
          xVar26 = (xunknown4)((uint8)in_stack_fffffffffffffa70 >> 0x20);
          xVar27 = (xunknown4)((uint8)in_stack_fffffffffffffa78 >> 0x20);
          if (0 < iRam00000000000d9698) {
            (*(code *)*pxRam00000000000d32f8)(1,0xd98c4);
            pxVar56 = pxRam00000000000d3310;
            (*(code *)*pxRam00000000000d3310)(0x84c3);
            pxVar62 = pxRam00000000000d3300;
            (*(code *)*pxRam00000000000d3300)(0x806f,iRam00000000000d98c4);
            (*(code *)*pxRam00000000000d3330)
                      (0x806f,1,0x8058,iRam00000000000d9698,iRam00000000000d9698,
                       iRam00000000000d9698);
            pxVar57 = pxRam00000000000d3208;
            xStack_188 = 0;
            xStack_184 = 0;
            uStack_190 = 0;
            xStack_18c = 0;
            xStack_180 = 0;
            xStack_17c = 0;
            (*(code *)*pxRam00000000000d3208)(0xcf5,&uStack_190);
            pxVar41 = pxRam00000000000d3220;
            (*(code *)*pxRam00000000000d3220)(0xcf5,4);
            (*(code *)*pxVar57)(0xcf2,(uint8)&uStack_190 | 4);
            (*(code *)*pxVar41)(0xcf2,0);
            (*(code *)*pxVar57)(0x806e,&xStack_188);
            (*(code *)*pxVar41)(0x806e,0);
            (*(code *)*pxVar57)(0xcf3,&xStack_184);
            (*(code *)*pxVar41)(0xcf3,0);
            (*(code *)*pxVar57)(0xcf4,&xStack_180);
            (*(code *)*pxVar41)(0xcf4,0);
            (*(code *)*pxVar57)(0x806d,&xStack_17c);
            (*(code *)*pxVar41)(0x806d,0);
            in_stack_fffffffffffffa78 = CONCAT44(xVar27,0x1401);
            in_stack_fffffffffffffa70 = CONCAT44(xVar26,0x1908);
            (*(code *)*pxRam00000000000d32f0)
                      (0x806f,0,0,0,0,iRam00000000000d9698,iRam00000000000d9698,iRam00000000000d9698
                       ,in_stack_fffffffffffffa70,in_stack_fffffffffffffa78,iRam00000000000d9678);
            (*(code *)*pxVar41)(0xcf5,uStack_190);
            (*(code *)*pxVar41)(0xcf2,xStack_18c);
            (*(code *)*pxVar41)(0x806e,xStack_188);
            (*(code *)*pxVar41)(0xcf3,xStack_184);
            (*(code *)*pxVar41)(0xcf4,xStack_180);
            (*(code *)*pxVar41)(0x806d,xStack_17c);
            pxVar57 = pxRam00000000000d3338;
            (*(code *)*pxRam00000000000d3338)(0x806f,0x2801,0x2601);
            (*(code *)*pxVar57)(0x806f,0x2800,0x2601);
            (*(code *)*pxVar57)(0x806f,0x2802,0x812f);
            (*(code *)*pxVar57)(0x806f,0x2803,0x812f);
            (*(code *)*pxVar57)(0x806f,0x8072,0x812f);
            (*(code *)*pxVar62)(0x806f,0);
            (*(code *)*pxVar56)(0x84c0);
            iVar48 = iRam00000000000d9688;
            iVar61 = iRam00000000000d9678;
            iRam00000000000d9678 = 0;
            xRam00000000000d9680 = 0;
            iRam00000000000d9688 = 0;
            if (iVar61 != 0) {
              operator_delete_plt(iVar61,iVar48 - iVar61);
            }
          }
          if (cRam00000000000d8930 == '\x01') {
            xVar26 = gl__Compile_plt(0x8b31,0x30edb /* "#version 300 es\nout vec2 vUV;\nvoid main(){ vec2 p = vec2(float((gl_V..." */,0x40525 /* "ssr-prep" */,pcRam00000000000d9690);
            xVar27 = gl__Compile_plt(0x8b30,0x2681a /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x40525 /* "ssr-prep" */,pcRam00000000000d9690);
            xVar69 = gl__Link_plt(xVar26,xVar27,0x40525 /* "ssr-prep" */,pcRam00000000000d9690);
            pxVar57 = pxRam00000000000d3408;
            iRam00000000000d9928 = (int4)xVar69;
            if (iRam00000000000d9928 == 0) {
              (*pcRam00000000000d9690)(1,0x371f3 /* "post: SSR prep shader failed - SSR off" */);
            }
            else {
              xRam00000000000d8acc = (*(code *)*pxRam00000000000d3408)(xVar69,0x2a132 /* "uIVP" */);
              xRam00000000000d8ad0 = (*(code *)*pxVar57)(iRam00000000000d9928,0x3fc5d);
              xRam00000000000d8ad4 = (*(code *)*pxVar57)(iRam00000000000d9928,0x3721a);
              xRam00000000000d8ad8 = (*(code *)*pxVar57)(iRam00000000000d9928,0x2b4ac);
              xVar26 = gl__Compile_plt(0x8b31,0x30edb /* "#version 300 es\nout vec2 vUV;\nvoid main(){ vec2 p = vec2(float((gl_V..." */,0x2c0cb /* "sky-probe" */,pcRam00000000000d9690);
              xVar27 = gl__Compile_plt(0x8b30,0x232f1 /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x2c0cb /* "sky-probe" */,pcRam00000000000d9690);
              xVar69 = gl__Link_plt(xVar26,xVar27,0x2c0cb /* "sky-probe" */,pcRam00000000000d9690);
              pxVar41 = pxRam00000000000d3410;
              iRam00000000000d992c = (int4)xVar69;
              if (iRam00000000000d992c == 0) {
                (*pcRam00000000000d9690)(1,0x2993a /* "post: sky probe shader failed - SSR falls back to the fog-colour sky" */);
                pxVar62 = pxRam00000000000d33d8;
              }
              else {
                xRam00000000000d8adc = (*(code *)*pxVar57)(xVar69,0x2a132 /* "uIVP" */);
                xRam00000000000d8ae0 = (*(code *)*pxVar57)(iRam00000000000d992c,0x3fc5d);
                xRam00000000000d8ae4 = (*(code *)*pxVar57)(iRam00000000000d992c,0x22462 /* "uInit" */);
                pxVar62 = pxRam00000000000d33d8;
                (*(code *)*pxRam00000000000d33d8)(iRam00000000000d992c);
                pcVar52 = (code *)*pxVar41;
                xVar69 = (*(code *)*pxVar57)(iRam00000000000d992c,0x266ac /* "uSsr" */);
                (*pcVar52)(xVar69,0);
                pcVar52 = (code *)*pxVar41;
                xVar69 = (*(code *)*pxVar57)(iRam00000000000d992c,0x34c2e /* "uHist" */);
                (*pcVar52)(xVar69,1);
              }
              (*(code *)*pxVar62)(iRam00000000000d9928);
              pcVar52 = (code *)*pxVar41;
              xVar69 = (*(code *)*pxVar57)(iRam00000000000d9928,0x40be1 /* "uTex" */);
              (*pcVar52)(xVar69,0);
              pcVar52 = (code *)*pxVar41;
              xVar69 = (*(code *)*pxVar57)(iRam00000000000d9928,0x2d517 /* "uDepth" */);
              (*pcVar52)(xVar69,1);
            }
          }
          pxVar41 = pxRam00000000000d35a8;
          cRam00000000000d9704 = cStack_378;
          pxVar57 = pxRam00000000000d3228;
          if (cStack_378 == '\x01') {
            (*(code *)*pxRam00000000000d35a8)(9,0xd9930);
            (*(code *)*pxVar41)(9,0xd9954);
            (*(code *)*pxVar41)(9,0xd9978);
            (*(code *)*pxVar41)(9,0xd999c);
            pxVar57 = pxRam00000000000d3228;
          }
          do {
            xVar69 = (*(code *)*pxVar57)();
          } while ((int4)xVar69 != 0);
          xVar45 = 0x2a141 /* "framebuffer fetch" */;
          if (uRam00000000000d98a8 == 0) {
            xVar45 = 0x291fc /* "copy" */;
          }
          xVar64 = 0x3721d;
          if (cRam00000000000d9704 == '\0') {
            xVar64 = 0x3a2a5 /* "unavailable" */;
          }
          (*pcRam00000000000d9690)(xVar69,0x22f5b /* "post: ready - composite via %s, bloom %d levels (R11G11B10F), auto exp..." */,xVar45,5,xVar64);
          gl__SavedState__Restore_plt(axStack_278);
          goto code_r0x0005f184;
        }
      }
      xVar69 = 0x32e3c /* "post: shaders failed - off" */;
    }
    (*pcRam00000000000d9690)(1,xVar69);
    gl__SavedState__Restore_plt(axStack_278);
    cRam00000000000d9794 = '\x01';
  }
  else {
code_r0x0005f184:
    pxVar57 = pxRam00000000000d3208;
    uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
    (*(code *)*pxRam00000000000d3208)(0x8ca6,&uStack_3a0);
    if ((int4)uStack_3a0 == 0) {
      xVar69 = 2;
      uVar44 = 0;
    }
    else {
      uStack_d0 = 0;
      xStack_c8 = 0;
      (*(code *)*pxVar57)(0xba2,&uStack_d0);
      uStack_3c0 = uStack_3c0 & 0xffffffff00000000;
      uStack_3e0 = uStack_3e0 & 0xffffffff00000000;
      compat__SceneSize_plt(&uStack_3c0,&uStack_3e0);
      if ((int4)xStack_c8 == (int4)uStack_3c0) {
        if (xStack_c8._4_4_ == (int4)uStack_3e0) {
          iVar25 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
          pxVar57 = pxRam00000000000d3288;
          if (iVar25 != 0x8cd5) {
            uVar44 = uStack_3a0 & 0xffffffff;
            xVar69 = 4;
            goto code_r0x0005f564;
          }
          uStack_400 = uStack_400 & 0xffffffff00000000;
          uStack_420 = uStack_420 & 0xffffffff00000000;
          (*(code *)*pxRam00000000000d3288)(0x8ca9,0x8ce0,0x8cd0,&uStack_400);
          if ((int4)uStack_400 == 0x1702) {
            (*(code *)*pxVar57)(0x8ca9,0x8ce0,0x8cd1,&uStack_420);
            uVar22 = 0;
            if (((int4)uStack_400 == 0x1702) && ((int4)uStack_420 != 0)) {
              uVar22 = uRam00000000000d88d4 | uRam00000000000d88f8;
            }
          }
          else {
            uVar22 = 0;
          }
          boot__PostRun_plt(0,uStack_3a0 & 0xffffffff,(int4)uStack_420);
          bVar1 = false;
          iVar25 = (int4)uStack_420;
          if (((int4)uStack_400 == 0x1702) && ((int4)uStack_420 != 0)) {
            iVar28 = scene__HdrTexture_plt();
            iVar25 = (int4)uStack_420;
            if (iVar28 == (int4)uStack_420) {
              iVar25 = scene__GameColorTexture_plt();
              if (iVar25 != 0) {
                bVar1 = true;
                iVar25 = scene__GameColorTexture_plt();
                goto code_r0x00060510;
              }
              iVar25 = (int4)uStack_420;
            }
            bVar1 = false;
          }
code_r0x00060510:
          if (cRam00000000000d9704 == '\x01') {
            FUN_0006431c();
          }
          xStack_138 = 0;
          xStack_134 = 0;
          gl__SavedState__Save_plt(&uStack_190);
          pxVar57 = pxRam00000000000d3228;
          uVar51 = uRam00000000000d9798 + 1;
          if (cRam00000000000d9704 == '\x01') {
            if (*(char *)((uint8)uRam00000000000d9798 + 0xd979c) != '\0') {
              uRam00000000000d9798 = 0xffffffff;
            }
          }
          else {
            uRam00000000000d9798 = 0xffffffff;
          }
          uRam00000000000d893c = uRam00000000000d9798;
          uRam00000000000d9798 = uVar51 & 3;
          do {
            iVar28 = (*(code *)*pxVar57)();
            pxVar41 = pxRam00000000000d3530;
          } while (iVar28 != 0);
          (*(code *)*pxRam00000000000d3530)(0xbe2);
          (*(code *)*pxVar41)(0xb71);
          (*(code *)*pxVar41)(0xb44);
          (*(code *)*pxVar41)(0xc11);
          (*(code *)*pxVar41)(0xb90);
          (*(code *)*pxRam00000000000d3540)(1,1,1,1);
          (*(code *)*pxRam00000000000d3548)(0);
          (*(code *)*pxRam00000000000d3508)(xRam00000000000d97a0);
          boot__R_plt(0x41511 /* "ZyZ: post - AO" */);
          if (-1 < (int4)uRam00000000000d893c) {
            (*(code *)*pxRam00000000000d35b8)
                      (0x88bf,*(xunknown4 *)((uint8)uRam00000000000d893c * 0x24 + 0xd993c));
            iRam00000000000d8ae8 = 3;
            *(xunknown1 *)((int8)(int4)uRam00000000000d893c * 9 + 0xd99c3) = 1;
          }
          iVar28 = ao__Render_plt(uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff,
                                  xRam00000000000d97a0);
          if (-1 < iRam00000000000d8ae8) {
            (*(code *)*pxRam00000000000d35c0)(0x88bf);
            iRam00000000000d8ae8 = -1;
          }
          uVar46 = uStack_3c0;
          uVar44 = uStack_3e0;
          iVar55 = (int4)uStack_3c0;
          iVar38 = (int4)uStack_3e0;
          if (((int4)uStack_3c0 == iRam00000000000d9a38) &&
             ((int4)uStack_3e0 == iRam00000000000d9a3c)) {
code_r0x000606e4:
            uVar53 = 1;
          }
          else {
            uVar51 = (int4)uStack_3c0 / 2;
            uVar33 = (int4)uStack_3e0 / 2;
            if ((int4)uVar51 < 3) {
              uVar51 = 2;
            }
            if ((int4)uVar33 < 3) {
              uVar33 = 2;
            }
            uVar51 = uVar51 >> 1;
            uVar33 = uVar33 >> 1;
            uVar29 = FUN_00066320(0xd97b8,uVar51,uVar33,0x8c3a,1);
            if (uVar51 < 3) {
              uVar51 = 2;
            }
            if (uVar33 < 3) {
              uVar33 = 2;
            }
            uVar51 = uVar51 >> 1;
            uVar33 = uVar33 >> 1;
            uVar30 = FUN_00066320(0xd97c8,uVar51,uVar33,0x8c3a,1);
            if (uVar51 < 3) {
              uVar51 = 2;
            }
            if (uVar33 < 3) {
              uVar33 = 2;
            }
            uVar51 = uVar51 >> 1;
            uVar33 = uVar33 >> 1;
            uVar31 = FUN_00066320(0xd97d8,uVar51,uVar33,0x8c3a,1);
            if (uVar51 < 3) {
              uVar51 = 2;
            }
            if (uVar33 < 3) {
              uVar33 = 2;
            }
            uVar51 = uVar51 >> 1;
            uVar33 = uVar33 >> 1;
            uVar32 = FUN_00066320(0xd97e8,uVar51,uVar33,0x8c3a,1);
            if (uVar51 < 3) {
              uVar51 = 2;
            }
            if (uVar33 < 3) {
              uVar33 = 2;
            }
            uVar51 = FUN_00066320(0xd97f8,uVar51 >> 1,uVar33 >> 1,0x8c3a,1);
            iVar39 = iVar55 + 3;
            if (-1 < iVar55) {
              iVar39 = iVar55;
            }
            iVar72 = iVar38 + 3;
            if (-1 < iVar38) {
              iVar72 = iVar38;
            }
            uVar33 = FUN_00066320(0xd9864,iVar39 >> 2,iVar72 >> 2,0x8c3a,1);
            uVar34 = FUN_00066320(0xd9874,iVar39 >> 2,iVar72 >> 2,0x8c3a,1);
            uVar35 = FUN_00066320(0xd9818,0x40,0x40,0x822d,7);
            uVar36 = FUN_00066320(0xd9834,1,1,0x822d,1);
            uVar37 = FUN_00066320(0xd9844,1,1,0x822d,1);
            uVar51 = uVar29 & uVar30 & uVar31 & uVar32 & uVar33 & uVar34 & uVar35 & uVar36 & uVar37
                     & uVar51;
            if ((uRam00000000000d98a8 & 1) == 0) {
              uVar33 = FUN_00066320(0xd98ac,uVar46 & 0xffffffff,uVar44 & 0xffffffff,0x8058,1);
              uVar51 = uVar51 & uVar33;
            }
            if (iRam00000000000d9928 != 0) {
              iVar39 = 0;
              if (iRam00000000000d8934 != 0) {
                iVar39 = iVar55 / iRam00000000000d8934;
              }
              iVar72 = 0;
              if (iRam00000000000d8934 != 0) {
                iVar72 = iVar38 / iRam00000000000d8934;
              }
              uVar43 = FUN_00066320(0xd9708,iVar39,iVar72,0x881a,1);
              if ((uVar43 & 1) == 0) {
                (*pcRam00000000000d9690)(1,0x2a865 /* "post: SSR target failed - SSR off" */);
                if (uRam00000000000d9708._4_4_ != 0) {
                  (*(code *)*pxRam00000000000d3250)(1,0xd970c);
                }
                if ((int4)uRam00000000000d9708 != 0) {
                  (*(code *)*pxRam00000000000d3308)(1,0xd9708);
                }
                uRam00000000000d9708 = 0;
                xRam00000000000d9710 = 0;
              }
            }
            if ((iRam00000000000d992c != 0) &&
               ((uVar43 = FUN_00066320(0xd9768,0x10,1,0x881a,1), (uVar43 & 1) == 0 ||
                (uVar43 = FUN_00066320(0xd9778,0x10,1,0x881a,1), (uVar43 & 1) == 0)))) {
              if (xRam00000000000d9768._4_4_ != 0) {
                (*(code *)*pxRam00000000000d3250)(1,0xd976c);
              }
              if ((int4)xRam00000000000d9768 != 0) {
                (*(code *)*pxRam00000000000d3308)(1,0xd9768);
              }
              xRam00000000000d9768 = 0;
              xRam00000000000d9770 = 0;
              if (xRam00000000000d9778._4_4_ != 0) {
                (*(code *)*pxRam00000000000d3250)(1,0xd977c);
              }
              if ((int4)xRam00000000000d9778 != 0) {
                (*(code *)*pxRam00000000000d3308)(1,0xd9778);
              }
              xRam00000000000d9778 = 0;
              xRam00000000000d9780 = 0;
            }
            xRam00000000000d9764 = 0;
            if ((int4)uRam00000000000d9708 != 0) {
              (*(code *)*pxRam00000000000d3300)(0xde1);
              pxVar57 = pxRam00000000000d3338;
              (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2600);
              (*(code *)*pxVar57)(0xde1,0x2800,0x2600);
            }
            if ((cRam00000000000d88b9 == '\x01') && (iRam00000000000d9890 != 0)) {
              uVar43 = FUN_00066320(0xd9894,uVar46 & 0xffffffff,uVar44 & 0xffffffff,0x8058,1);
              if (((((uVar43 & 1) == 0) ||
                   (uVar43 = FUN_00066320(0xd98dc,uVar46 & 0xffffffff,uVar44 & 0xffffffff,0x8058,1),
                   (uVar43 & 1) == 0)) ||
                  (uVar43 = FUN_00066320(0xd98ec,uVar46 & 0xffffffff,uVar44 & 0xffffffff,0x8058,1),
                  (uVar43 & 1) == 0)) ||
                 (uVar43 = FUN_00066320(0xd98fc,uVar46 & 0xffffffff,uVar44 & 0xffffffff,0x822d,1),
                 (uVar43 & 1) == 0)) {
                uRam00000000000d98a4 = 0;
              }
              else {
                uVar53 = 1;
                uVar33 = FUN_00066320(0xd990c,uVar46 & 0xffffffff,uVar44 & 0xffffffff,0x822d,1);
                iRam00000000000d9a38 = iVar55;
                uRam00000000000d98a4 = 0;
                iRam00000000000d9a3c = iVar38;
                cRam00000000000d9810 = '\0';
                if ((uVar51 & uVar33 & 1) != 0) goto code_r0x00060c48;
              }
            }
            else {
              iRam00000000000d9a38 = iVar55;
              iRam00000000000d9a3c = iVar38;
              cRam00000000000d9810 = '\0';
              if ((uVar51 & 1) != 0) goto code_r0x000606e4;
            }
            iRam00000000000d9a3c = iVar38;
            iRam00000000000d9a38 = iVar55;
            cRam00000000000d9810 = '\0';
            (*pcRam00000000000d9690)(1,0x40532 /* "post: could not create the %dx%d effect targets" */,uVar46 & 0xffffffff,uVar44 & 0xffffffff);
            uVar53 = 0;
          }
code_r0x00060c48:
          iVar38 = scene__DepthTexture_plt();
          uVar23 = reproj__Update_plt(axStack_278);
          if ((uVar53 == 0) || ((int4)uStack_400 != 0x1702)) {
            cVar59 = '\0';
            cRam00000000000d9705 = '\0';
          }
          else {
            uRam00000000000d97a4 = uRam00000000000d97a4 + 1;
            if (((cRam00000000000d9705 == '\x01') &&
                (uVar44 = timeuni__SsrWanted_plt(), (uVar44 & 1) == 0)) &&
               ((uRam00000000000d97a4 & 3) != 0)) {
              iRam00000000000d97b0 = iRam00000000000d97b0 + 1;
              cVar59 = '\0';
            }
            else {
              FUN_000649f8(axStack_278,uVar23 & 1,uStack_420 & 0xffffffff,iVar38,
                           uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff);
              iRam00000000000d97a8 = iRam00000000000d97a8 + 1;
              cVar59 = cRam00000000000d9705;
            }
          }
          pxVar57 = pxRam00000000000d3480;
          xVar27 = (xunknown4)((uint8)in_stack_fffffffffffffa70 >> 0x20);
          xVar26 = (xunknown4)((uint8)in_stack_fffffffffffffa78 >> 0x20);
          if ((uVar22 & uVar53) == 1) {
            uVar22 = 0;
            if ((uRam00000000000d88d4 == 1) && (0.001 < fRam00000000000d88d8)) {
              if ((*puRam00000000000d3610 >> 4 & 1) == 0) {
                FUN_00064970(0);
                FUN_00065218(0xd97b8,0xd8940);
                uVar44 = uStack_420;
                xVar26 = xRam00000000000d9808;
                pxVar62 = pxRam00000000000d3310;
                (*(code *)*pxRam00000000000d3310)(0x84c0);
                pxVar41 = pxRam00000000000d3300;
                (*(code *)*pxRam00000000000d3300)(0xde1,uVar44 & 0xffffffff);
                pxVar56 = pxRam00000000000d3358;
                (*(code *)*pxRam00000000000d3358)(0,xVar26);
                (*(code *)*pxRam00000000000d3420)
                          (1.0 / (float4)(int4)uStack_3c0,1.0 / (float4)(int4)uStack_3e0,
                           xRam00000000000d894c);
                xVar26 = xRam00000000000d980c;
                pxVar49 = pxRam00000000000d3518;
                xVar69 = 0;
                fVar78 = 0.0;
                if (((iRam00000000000d96b8 != 0) && (puRam00000000000d96c0 != (uint4 *)0x0)) &&
                   (*puRam00000000000d96c0 < 0x10)) {
                  fVar78 = 1.0;
                  fVar63 = *(float4 *)
                            (iRam00000000000d96b8 + (uint8)*puRam00000000000d96c0 * 0xc + 8);
                  if ((-0.05 < fVar63) && (fVar78 = 0.0, fVar63 < 0.12)) {
                    fVar78 = (0.12 - fVar63) / 0.17;
                  }
                }
                fVar63 = fVar78 * (fRam00000000000d88e4 + -1.0) + 1.0;
                if (iVar38 != 0) {
                  (*(code *)*pxVar62)(0x84c1);
                  (*(code *)*pxVar41)(0xde1,iVar38);
                  (*(code *)*pxVar56)(1,xVar26);
                  xVar69 = 0x3f800000;
                }
                (*(code *)*pxVar57)(fVar63 * fRam00000000000d88dc,fVar63 * fRam00000000000d88e0,
                                    fVar78 * (fRam00000000000d88e8 + -1.0) + 1.0,xVar69,
                                    xRam00000000000d8950);
                xVar26 = xRam00000000000d980c;
                uVar44 = uRam00000000000d9708;
                xVar69 = 0;
                cVar3 = '\0';
                if (iRam00000000000d8934 == 2) {
                  cVar3 = cVar59;
                }
                if ((cVar3 == '\x01') && ((int4)uRam00000000000d9708 != 0)) {
                  (*(code *)*pxVar62)(0,0x84c2);
                  (*(code *)*pxVar41)(0xde1,uVar44 & 0xffffffff);
                  (*(code *)*pxVar56)(2,xVar26);
                  xVar69 = 0x3f800000;
                }
                (*(code *)*pxVar57)(xVar69,0,0,0,xRam00000000000d8954);
                iVar61 = 4;
                (*(code *)*pxVar49)(4,0,3);
                pxVar56 = pxRam00000000000d3420;
                pxVar41 = pxRam00000000000d33d8;
                pxVar57 = pxRam00000000000d3278;
                pxVar58 = (xunknown4 *)0xd97cc;
                do {
                  (*(code *)*pxRam00000000000d3248)(0x8ca9,*pxVar58);
                  (*(code *)*pxRam00000000000d3520)(0,0,pxVar58[1],pxVar58[2]);
                  (*(code *)*pxVar41)(xRam00000000000d8968);
                  uStack_370 = CONCAT44(uStack_370._4_4_,0x8ce0);
                  (*(code *)*pxVar57)(0x8ca9,1,&uStack_370);
                  xVar27 = xRam00000000000d9808;
                  xVar26 = pxVar58[-5];
                  (*(code *)*pxVar62)(0x84c0);
                  (*(code *)*pxRam00000000000d3300)(0xde1,xVar26);
                  (*(code *)*pxRam00000000000d3358)(0,xVar27);
                  (*(code *)*pxVar56)(0.5 / (float4)(int4)pxVar58[-3],
                                      0.5 / (float4)(int4)pxVar58[-2],xRam00000000000d8974);
                  (*(code *)*pxRam00000000000d3518)(4,0,3);
                  iVar61 = iVar61 + -1;
                  pxVar58 = pxVar58 + 4;
                } while (iVar61 != 0);
                (*(code *)*pxRam00000000000d3528)(0xbe2);
                (*(code *)*pxRam00000000000d32b8)(1,1,0,1);
                (*(code *)*pxRam00000000000d32c0)(0x8006,0x8006);
                pxVar57 = pxRam00000000000d3480;
                uVar44 = 5;
                piVar60 = (int4 *)0xd9804;
                do {
                  (*(code *)*pxRam00000000000d3248)(0x8ca9,piVar60[-6]);
                  (*(code *)*pxRam00000000000d3520)(0,0,piVar60[-5],piVar60[-4]);
                  (*(code *)*pxVar41)(xRam00000000000d8990);
                  xVar26 = xRam00000000000d9808;
                  iVar55 = piVar60[-3];
                  (*(code *)*pxVar62)(0x84c0);
                  (*(code *)*pxRam00000000000d3300)(0xde1,iVar55);
                  (*(code *)*pxRam00000000000d3358)(0,xVar26);
                  (*(code *)*pxVar56)(0.5 / (float4)piVar60[-1],0.5 / (float4)*piVar60,
                                      xRam00000000000d899c);
                  (*(code *)*pxVar57)(0x3f800000,0,0,0,xRam00000000000d89a0);
                  (*(code *)*pxRam00000000000d3518)(4,0,3);
                  xVar27 = (xunknown4)((uint8)in_stack_fffffffffffffa70 >> 0x20);
                  xVar26 = (xunknown4)((uint8)in_stack_fffffffffffffa78 >> 0x20);
                  uVar44 = uVar44 - 1;
                  piVar60 = piVar60 + -4;
                } while (1 < uVar44);
                (*(code *)*pxRam00000000000d3530)(0xbe2);
                if (-1 < iRam00000000000d8ae8) {
                  (*(code *)*pxRam00000000000d35c0)(0x88bf);
                  iRam00000000000d8ae8 = -1;
                }
                uVar22 = 1;
              }
              else {
                uVar22 = 0;
              }
            }
            pxVar57 = pxRam00000000000d3480;
            if ((uRam00000000000d88f8 == 1) && (cRam00000000000d9810 != '\0')) {
              uVar51 = uRam00000000000d9814 + 1;
              uVar33 = uRam00000000000d9814 & 1;
              uRam00000000000d9814 = uVar51;
              if (uVar33 != 0) goto code_r0x000633c4;
              bVar21 = true;
            }
            else if (uRam00000000000d88f8 == 0) {
              bVar21 = false;
            }
            else {
code_r0x000633c4:
              FUN_00064970(1);
              FUN_00065218(0xd9818,0xd89b8);
              uVar44 = uStack_420;
              xVar7 = xRam00000000000d9808;
              pxVar62 = pxRam00000000000d3310;
              (*(code *)*pxRam00000000000d3310)(0x84c0);
              pxVar41 = pxRam00000000000d3300;
              (*(code *)*pxRam00000000000d3300)(0xde1,uVar44 & 0xffffffff);
              (*(code *)*pxRam00000000000d3358)(0,xVar7);
              (*(code *)*pxRam00000000000d3420)(0x3c800000,0x3c800000,xRam00000000000d89c4);
              (*(code *)*pxRam00000000000d3518)(4,0,3);
              (*(code *)*pxVar62)(0x84c0);
              (*(code *)*pxVar41)(0xde1,xRam00000000000d9818);
              (*(code *)*pxRam00000000000d3348)(0xde1);
              clock_gettime(1,&uStack_370);
              fVar74 = (float8)(int8)uStack_370 + fRam0000000000022270 * (float8)iStack_368;
              fVar78 = (float4)(fVar74 - fRam00000000000d9828);
              if (fRam00000000000d9828 <= 0.0) {
                fVar78 = 0.016;
              }
              fVar63 = -0.25;
              if (fVar78 <= 0.25) {
                fVar63 = -fVar78;
              }
              fRam00000000000d9828 = fVar74;
              fVar78 = (float4)expf(fRam00000000000d890c * fVar63);
              uVar44 = (uint8)uRam00000000000d9830;
              iVar61 = (uVar44 ^ 1) * 0x10;
              FUN_00065218(iVar61 + 0xd9834,0xd89e0);
              xVar40 = xRam00000000000d9854;
              xVar7 = xRam00000000000d9818;
              (*(code *)*pxVar62)(0x84c0);
              (*(code *)*pxVar41)(0xde1,xVar7);
              pxVar56 = pxRam00000000000d3358;
              (*(code *)*pxRam00000000000d3358)(0,xVar40);
              xVar40 = xRam00000000000d9854;
              pxVar57 = pxRam00000000000d3480;
              xVar7 = *(xunknown4 *)((uint8)uRam00000000000d9830 * 0x10 + 0xd9834);
              (*(code *)*pxVar62)(0x84c1);
              (*(code *)*pxVar41)(0xde1,xVar7);
              (*(code *)*pxVar56)(1,xVar40);
              xVar69 = 0;
              if (cRam00000000000d9810 == '\0') {
                xVar69 = 0x3f800000;
              }
              (*(code *)*pxVar57)(1.0 - fVar78,xVar69,0,0,xRam00000000000d89f0);
              (*(code *)*pxRam00000000000d3418)(0x40c00000,xRam00000000000d89fc);
              (*(code *)*pxRam00000000000d3518)(4,0,3);
              uRam00000000000d9830 = (uint4)(uVar44 ^ 1);
              cRam00000000000d9810 = '\x01';
              if (-1 < iRam00000000000d8ae8) {
                (*(code *)*pxRam00000000000d35c0)(0x88bf);
                iRam00000000000d8ae8 = -1;
              }
              if (cRam00000000000d9858 == '\x01') {
                cRam00000000000d9858 = '\0';
                uStack_370 = uStack_370 & 0xffffffff00000000;
                (*(code *)*pxRam00000000000d3208)(0x88ed,&uStack_370);
                pxVar41 = pxRam00000000000d34c8;
                if (iRam00000000000d985c == 0) {
                  (*(code *)*pxRam00000000000d34c0)(1,0xd985c);
                  (*(code *)*pxVar41)(0x88eb,iRam00000000000d985c);
                  (*(code *)*pxRam00000000000d34d8)(0x88eb,0x10,0,0x88e1);
                }
                (*(code *)*pxVar41)(0x88eb,iRam00000000000d985c);
                if (cRam00000000000d9860 == '\x01') {
                  pfVar50 = (float4 *)(*(code *)*pxRam00000000000d34f0)(0x88eb,0,0x10,1);
                  if (pfVar50 != (float4 *)0x0) {
                    fVar70 = *pfVar50;
                    (*(code *)*pxRam00000000000d34f8)(0x88eb);
                    fVar63 = fRam00000000000d8900 / fVar70;
                    fVar78 = fRam00000000000d8908;
                    if (fVar63 <= fRam00000000000d8908) {
                      fVar78 = fVar63;
                    }
                    fVar71 = fRam00000000000d8904;
                    if (fRam00000000000d8904 <= fVar63) {
                      fVar71 = fVar78;
                    }
                    fVar78 = fRam00000000000d88fc * (fVar71 + -1.0) + 1.0;
                    (*pcRam00000000000d9690)
                              ((float8)fVar70,(float8)fVar78,(float8)SQRT(fVar78),0,0x2b436 /* "post: auto exposure - scene average luminance %.3f -> exposure x%.2f (..." */);
                  }
                  cRam00000000000d9860 = '\0';
                }
                (*(code *)*pxRam00000000000d3248)(0x8ca8,*(xunknown4 *)(iVar61 + 0xd9838));
                (*(code *)*pxRam00000000000d32d8)(0,0,1,1,0x1908,0x1406,0);
                bVar21 = true;
                cRam00000000000d9860 = '\x01';
                (*(code *)*pxVar41)(0x88eb,uStack_370 & 0xffffffff);
              }
              else {
                bVar21 = true;
              }
            }
          }
          else {
            bVar21 = false;
            uVar22 = 0;
          }
          if (cRam00000000000d88c0 == '\x01') {
            bVar19 = false;
            uVar4 = 0;
            if ((*puRam00000000000d3610 & 0x10) == 0) {
              uVar4 = uVar53;
            }
            if ((((iVar38 != 0) && (uVar4 != 0)) && ((int4)uStack_400 == 0x1702)) &&
               ((((int4)uStack_420 != 0 && (pfRam00000000000d96a0 != (float4 *)0x0)) &&
                (pfRam00000000000d96a8 != (float4 *)0x0)))) {
              uStack_370 = uStack_370 & 0xffffffff00000000;
              xStack_2b0 = xStack_2b0 & 0xffffffff00000000;
              xVar69 = eglGetCurrentDisplay();
              xVar45 = eglGetCurrentSurface(0x3059);
              eglQuerySurface(xVar69,xVar45,0x3057,&uStack_370);
              xVar69 = eglGetCurrentDisplay();
              xVar45 = eglGetCurrentSurface(0x3059);
              eglQuerySurface(xVar69,xVar45,0x3056,&xStack_2b0);
              if ((int4)uStack_370 < 1) {
code_r0x0006104c:
                uStack_370 = CONCAT44(uStack_370._4_4_,(int4)uStack_3c0);
                xStack_2b0 = CONCAT44(xStack_2b0._4_4_,(int4)uStack_3e0);
                iVar55 = (int4)uStack_3c0;
                iVar39 = (int4)uStack_3e0;
              }
              else {
                iVar55 = (int4)uStack_370;
                iVar39 = (int4)xStack_2b0;
                if ((int4)xStack_2b0 < 1) goto code_r0x0006104c;
              }
              fVar71 = 1.0;
              fVar70 = 1.0;
              fVar78 = *pfRam00000000000d96a0;
              fVar63 = *pfRam00000000000d96a8;
              if (((iRam00000000000d96c8 != 0) && (fVar71 = 1.0, iRam00000000000d96b8 != 0)) &&
                 (fVar71 = 1.0, puRam00000000000d96c0 != (uint4 *)0x0)) {
                fVar71 = 1.0;
                iVar61 = *(int8 *)(iRam00000000000d96c8 + 0x18);
                if (iVar61 != 0) {
                  fVar71 = 1.0;
                  if (*puRam00000000000d96c0 < 0x10) {
                    pfVar50 = (float4 *)(iRam00000000000d96b8 + (uint8)*puRam00000000000d96c0 * 0xc)
                    ;
                    fVar71 = pfVar50[2];
                    fVar70 = *(float4 *)(iVar61 + 0x14) * pfVar50[1] +
                             *pfVar50 * *(float4 *)(iVar61 + 0x10) +
                             fVar71 * *(float4 *)(iVar61 + 0x18);
                  }
                }
              }
              fVar75 = fVar78;
              if (fVar78 <= fVar63) {
                fVar75 = fVar63;
              }
              fVar73 = -1.0;
              if (fVar75 <= 100000.0) {
                fVar73 = fVar70;
              }
              fVar70 = (fVar71 + (float4)xRam00000000000222e0) / (float4)xRam00000000000222b8;
              fVar75 = (fVar73 + (float4)((uint8)xRam00000000000222e0 >> 0x20)) /
                       (float4)((uint8)xRam00000000000222b8 >> 0x20);
              uVar44 = NEON_fmov(0x3f800000,4);
              uVar44 = uVar44 ^ (uVar44 ^ CONCAT44(fVar75,fVar70)) &
                                ~CONCAT44(-(uint4)((float4)(uVar44 >> 0x20) < fVar75),
                                          -(uint4)((float4)uVar44 < fVar70));
              iVar72 = -(uint4)(fVar70 < 0.0);
              iVar76 = -(uint4)(fVar75 < 0.0);
              fVar70 = (float4)CONCAT13((uint1)(uVar44 >> 0x18) & ~(uint1)((uint4)iVar72 >> 0x18),
                                        CONCAT12((uint1)(uVar44 >> 0x10) &
                                                 ~(uint1)((uint4)iVar72 >> 0x10),
                                                 CONCAT11((uint1)(uVar44 >> 8) &
                                                          ~(uint1)((uint4)iVar72 >> 8),
                                                          (uint1)uVar44 & ~(uint1)iVar72)));
              fVar70 = fVar70 * (float4)(CONCAT17((uint1)(uVar44 >> 0x38) &
                                                  ~(uint1)((uint4)iVar76 >> 0x18),
                                                  CONCAT16((uint1)(uVar44 >> 0x30) &
                                                           ~(uint1)((uint4)iVar76 >> 0x10),
                                                           CONCAT15((uint1)(uVar44 >> 0x28) &
                                                                    ~(uint1)((uint4)iVar76 >> 8),
                                                                    CONCAT14((uint1)(uVar44 >> 0x20)
                                                                             & ~(uint1)iVar76,fVar70
                                                                            )))) >> 0x20);
              if ((pcRam00000000000d96b0 != (char *)0x0) && (*pcRam00000000000d96b0 != '\0')) {
                fVar70 = 0.0;
              }
              fVar75 = fVar78 / (float4)iVar55;
              fVar79 = 1.0 - fVar63 / (float4)iVar39;
              if (cRam00000000000d9861 == '\x01') {
                cRam00000000000d9861 = '\0';
                if (pcRam00000000000d96b0 == (char *)0x0) {
                  cVar59 = '\0';
                }
                else {
                  cVar59 = *pcRam00000000000d96b0;
                }
                (*pcRam00000000000d9690)
                          ((float8)fVar78,(float8)fVar63,(float8)fVar75,(float8)fVar79,
                           (float8)fVar73,(float8)fVar71,(float8)fVar70,0,0x22e3e /* "post: sun rays - sun at screen %.0f,%.0f (uv %.2f,%.2f) of the %dx%d s..." */,iVar55,iVar39,
                           uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff,cVar59);
              }
              if (fVar70 <= 0.001) goto code_r0x000613e4;
              FUN_00064970(2);
              FUN_00065218(0xd9864,0xd8a08);
              uVar44 = uStack_420;
              xVar7 = xRam00000000000d9808;
              pxVar62 = pxRam00000000000d3310;
              (*(code *)*pxRam00000000000d3310)(0x84c0);
              pxVar41 = pxRam00000000000d3300;
              (*(code *)*pxRam00000000000d3300)(0xde1,uVar44 & 0xffffffff);
              pxVar56 = pxRam00000000000d3358;
              (*(code *)*pxRam00000000000d3358)(0,xVar7);
              xVar7 = xRam00000000000d980c;
              (*(code *)*pxVar62)(0x84c1);
              (*(code *)*pxVar41)(0xde1,iVar38);
              (*(code *)*pxVar56)(1,xVar7);
              (*(code *)*pxVar57)(fVar75,fVar79,xRam00000000000d88c8,
                                  (float4)(int4)uStack_3c0 / (float4)(int4)uStack_3e0,
                                  xRam00000000000d8a18);
              pxVar49 = pxRam00000000000d3518;
              (*(code *)*pxRam00000000000d3518)(4,0,3);
              FUN_00065218(0xd9874,0xd8a30);
              xVar40 = xRam00000000000d9864;
              xVar7 = xRam00000000000d9808;
              pxVar62 = pxRam00000000000d3310;
              (*(code *)*pxRam00000000000d3310)(0x84c0);
              (*(code *)*pxVar41)(0xde1,xVar40);
              (*(code *)*pxVar56)(0,xVar7);
              (*(code *)*pxVar57)(fVar75,fVar79,fRam00000000000d88cc,xRam00000000000d88d0,
                                  xRam00000000000d8a40);
              (*(code *)*pxVar57)(0x3f800000,0,0,0,xRam00000000000d8a44);
              (*(code *)*pxVar49)(4,0,3);
              fVar70 = fVar70 * fRam00000000000d88c4;
              if (uVar22 == 0) {
                (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000000d97bc);
                (*(code *)*pxRam00000000000d3560)(0,0,0,0x3f800000);
                (*(code *)*pxRam00000000000d3558)(0x4000);
                fVar78 = fVar70;
              }
              else {
                fVar78 = fVar70 / fRam00000000000d88d8;
              }
              FUN_000652d8(0xd97b8,0xd8a30);
              xVar40 = xRam00000000000d9874;
              xVar7 = xRam00000000000d9808;
              (*(code *)*pxVar62)(0x84c0);
              (*(code *)*pxVar41)(0xde1,xVar40);
              (*(code *)*pxVar56)(0,xVar7);
              pxVar57 = pxRam00000000000d3480;
              (*(code *)*pxRam00000000000d3480)
                        (fVar75,fVar79,fRam00000000000d88cc * 0.25,xRam00000000000d88d0,
                         xRam00000000000d8a40);
              (*(code *)*pxVar57)(fVar78,0,0,0,xRam00000000000d8a44);
              (*(code *)*pxRam00000000000d3528)(0xbe2);
              (*(code *)*pxRam00000000000d32b8)(1,1,0,1);
              (*(code *)*pxRam00000000000d32c0)(0x8006,0x8006);
              (*(code *)*pxRam00000000000d3518)(4,0,3);
              (*(code *)*pxRam00000000000d3530)(0xbe2);
              if (-1 < iRam00000000000d8ae8) {
                (*(code *)*pxRam00000000000d35c0)(0x88bf);
                iRam00000000000d8ae8 = -1;
              }
              bVar19 = 0.0 < fVar70;
            }
          }
          else {
code_r0x000613e4:
            bVar19 = false;
          }
          boot__R_plt(0x41520 /* "ZyZ: post - composite" */);
          if (-1 < (int4)uRam00000000000d893c) {
            (*(code *)*pxRam00000000000d35b8)
                      (0x88bf,*(xunknown4 *)((uint8)uRam00000000000d893c * 0x24 + 0xd9940));
            *(xunknown1 *)((int8)(int4)uRam00000000000d893c * 9 + 0xd99c4) = 1;
            iRam00000000000d8ae8 = 4;
          }
          iVar55 = (int4)uStack_3a0;
          if (bVar1) {
            if (iRam00000000000d9884 == 0) {
              (*(code *)*pxRam00000000000d3240)(1,0xd9884);
            }
            (*(code *)*pxRam00000000000d3248)(0x8ca9,iRam00000000000d9884);
            if (iRam00000000000d9888 != iVar25) {
              (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,iVar25,0);
              iRam00000000000d9888 = iVar25;
            }
            iVar39 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
            if (iVar39 == 0x8cd5) {
              iVar55 = iRam00000000000d9884;
            }
            else {
              iRam00000000000d9888 = 0;
              (*pcRam00000000000d9690)(1,0x3516d /* "post: HDR output target (game texture %d) incomplete this frame" */,iVar25);
            }
            uVar44 = uStack_420;
            pcVar52 = pcRam00000000000d9690;
            fVar78 = fRam00000000000d88f4;
            if ((uRam00000000000d988c & 1) == 0) {
              uRam00000000000d988c = 1;
              fVar63 = 1.0;
              if (1.0 <= fRam00000000000d88f4) {
                fVar63 = fRam00000000000d88f4;
              }
              fVar70 = (12.3 - fVar63) / 11.3;
              fVar63 = 0.95;
              if (fVar70 <= 0.95) {
                fVar63 = fVar70;
              }
              fVar71 = 0.3;
              if (0.3 <= fVar70) {
                fVar71 = fVar63;
              }
              fVar63 = (float4)FUN_00065340();
              (*pcVar52)((float8)fVar71,(float8)SQRT(fVar63),(float8)fVar78,
                         (float8)fRam00000000000d88e4,0,0x39093 /* "post: HDR - reading the float scene %d, tonemapped image into the game..." */,uVar44 & 0xffffffff,iVar25,5);
            }
          }
          (*(code *)*pxRam00000000000d3248)(0x8ca9,iVar55);
          (*(code *)*pxRam00000000000d3520)(0,0,uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff);
          uVar24 = 0;
          uVar4 = 0;
          if ((int4)uStack_400 == 0x1702) {
            uVar4 = uVar53;
          }
          if ((uVar4 == 1) && ((int4)uStack_420 != 0)) {
            uVar24 = fsr__Active_plt(uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff);
          }
          uVar44 = uStack_420;
          xVar7 = xRam00000000000d9808;
          pxVar57 = pxRam00000000000d3248;
          uVar4 = (uVar24 ^ 1) & uRam00000000000d8699;
          if (cRam00000000000d88b9 == '\x01') {
            uVar5 = 0;
            if ((*puRam00000000000d3610 & 8) == 0 && iRam00000000000d9890 != 0) {
              uVar5 = uVar53;
            }
            uVar6 = 0;
            if (iRam00000000000d9898 != 0) {
              uVar6 = uVar5;
            }
            uVar5 = 0;
            if ((int4)uStack_400 == 0x1702) {
              uVar5 = uVar6;
            }
            uVar6 = 0;
            if ((int4)uStack_420 != 0) {
              uVar6 = uVar5;
            }
            uVar5 = 0;
            if (iVar38 != 0) {
              uVar5 = uVar6;
            }
            if ((uVar23 & uVar5) == 0) goto code_r0x00061768;
            (*(code *)*pxRam00000000000d3310)(0x84c0);
            (*(code *)*pxRam00000000000d3300)(0xde1,uVar44 & 0xffffffff);
            (*(code *)*pxRam00000000000d3358)(0,xVar7);
            (*(code *)*pxRam00000000000d3248)(0x8ca9,iRam00000000000d9898);
            uStack_370 = CONCAT44(uStack_370._4_4_,0x8ce0);
            uVar23 = 1;
            (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&uStack_370);
code_r0x000617d8:
            iVar39 = lights__Texture_plt();
            iVar72 = shadows__MaskTexture_plt();
            uVar44 = 0;
            fVar78 = 0.0;
            if (iVar72 != 0) {
              fVar78 = (float4)shadows__Strength_plt();
            }
            fVar63 = 1.0;
            if (bVar19 == false) {
              fVar63 = 0.0;
            }
            uVar53 = uVar53 & (uVar22 | bVar19);
            fVar70 = fRam00000000000d88d8;
            if (uVar22 == 0) {
              fVar70 = fVar63;
            }
            if (((((cRam00000000000d8910 == '\x01') && ((*puRam00000000000d3610 >> 5 & 1) == 0)) &&
                 (pcRam00000000000d96d0 != (code *)0x0)) &&
                ((iVar76 = scene__DepthTexture_plt(), iVar76 != 0 &&
                 (pfVar50 = (float4 *)(*pcRam00000000000d96d0)(), pfVar50 != (float4 *)0x0)))) &&
               (uVar46 = reproj__Current_plt(&uStack_370,&xStack_2b0), (uVar46 & 1) != 0)) {
              fVar63 = *pfVar50;
              fVar71 = pfVar50[1];
              fVar75 = pfVar50[2];
              if ((1.5 < fVar63) || (1.5 < fVar71)) {
code_r0x000618ac:
                fVar73 = fVar63 / 255.0;
                fVar79 = fVar71 / 255.0;
                fVar68 = fVar75 / 255.0;
              }
              else {
                fVar73 = fVar63;
                fVar79 = fVar71;
                fVar68 = fVar75;
                if (1.5 < fVar75) goto code_r0x000618ac;
              }
              fVar81 = 1.0;
              if (fVar73 <= 1.0) {
                fVar81 = fVar73;
              }
              fVar80 = 0.0;
              if (0.0 <= fVar73) {
                fVar80 = fVar81;
              }
              fVar73 = 1.0;
              if (fVar79 <= 1.0) {
                fVar73 = fVar79;
              }
              fVar81 = 0.0;
              if (0.0 <= fVar79) {
                fVar81 = fVar73;
              }
              fVar73 = 1.0;
              if (fVar68 <= 1.0) {
                fVar73 = fVar68;
              }
              fVar79 = 0.0;
              if (0.0 <= fVar68) {
                fVar79 = fVar73;
              }
              fVar73 = 0.0;
              if (pfRam00000000000d96e8 != (float4 *)0x0) {
                fVar68 = *pfRam00000000000d96e8;
                bVar19 = true;
                bVar20 = false;
                if (fVar68 <= 1.0) {
                  bVar19 = false;
                  bVar20 = true;
                  if (!NAN(fVar68)) {
                    bVar19 = fVar68 < 0.0;
                    bVar20 = false;
                  }
                }
                fVar73 = 0.0;
                if (bVar19 == bVar20) {
                  fVar73 = fVar68;
                }
              }
              fStack_564 = fVar73 * fRam00000000000d892c + 1.0;
              fStack_550 = -50.0;
              if (-50.0 <= (float4)xStack_2a8 - fRam00000000000d891c) {
                fStack_550 = (float4)xStack_2a8 - fRam00000000000d891c;
              }
              if (((pfRam00000000000d96f0 != (float4 *)0x0) &&
                  (fVar68 = *pfRam00000000000d96f0, 0.0 < fVar68)) && (fVar68 <= 1.0)) {
                fVar82 = fVar81 * 0.5 + fVar80 * 0.3 + fVar79 * 0.2;
                fVar12 = 0.85;
                if (fVar68 * 1.3 <= 0.85) {
                  fVar12 = fVar68 * 1.3;
                }
                fVar80 = fVar80 + fVar12 * (fVar82 - fVar80);
                fVar81 = fVar81 + fVar12 * (fVar82 - fVar81);
                fVar79 = fVar79 + fVar12 * (fVar82 - fVar79);
              }
              fStack_568 = fStack_564 * fRam00000000000d8914;
              fStack_564 = fStack_564 * fRam00000000000d8920;
              fStack_560 = fVar80 * fVar80;
              bVar19 = true;
              fStack_55c = fVar81 * fVar81;
              uVar44 = xStack_2a8 & 0xffffffff;
              if (NAN((float4)xStack_2a8)) {
                uVar44 = 0;
              }
              iVar76 = iRam00000000000d98bc + 1;
              xStack_56c = xRam00000000000d8918;
              fStack_558 = fVar79 * fVar79;
              bVar20 = 0x4ae < iRam00000000000d98bc;
              iRam00000000000d98bc = iVar76;
              if ((bVar20) && (iRam00000000000d98c0 < 0x1e)) {
                iRam00000000000d98bc = 0;
                iRam00000000000d98c0 = iRam00000000000d98c0 + 1;
                if (pcRam00000000000d96e0 == (code *)0x0) {
                  pfVar47 = (float4 *)0x0;
                }
                else {
                  pfVar47 = (float4 *)(*pcRam00000000000d96e0)();
                  fVar63 = *pfVar50;
                  fVar71 = pfVar50[1];
                  fVar75 = pfVar50[2];
                }
                if (pfVar47 == (float4 *)0x0) {
                  fVar74 = -1.0;
                  fVar77 = -1.0;
                }
                else {
                  fVar74 = (float8)*pfVar47;
                  fVar77 = (float8)pfVar47[1];
                }
                xVar27 = (xunknown4)((uint8)(float8)fVar73 >> 0x20);
                xVar26 = (xunknown4)((uint8)(float8)(float4)xStack_2a8 >> 0x20);
                (*pcRam00000000000d9690)
                          ((float8)fVar63,(float8)fVar71,(float8)fVar75,(float8)fVar80,
                           (float8)fVar81,(float8)fVar79,fVar74,fVar77,0,0x22ec6 /* "fog: game fog colour raw %.3f %.3f %.3f (used %.2f %.2f %.2f), game fo..." */);
              }
            }
            else {
              bVar19 = false;
              fStack_55c = 0.0;
              fStack_558 = 0.0;
              fStack_564 = 0.0;
              fStack_560 = 0.0;
              fStack_550 = 0.0;
              xStack_56c = 0;
              fStack_568 = 0.0;
            }
            uVar51 = (uint4)(0.0 < fVar78 && iVar72 != 0);
            if ((iVar28 != 0) && (fVar63 = (float4)ao__Strength_plt(), 0.0 < fVar63)) {
              uVar51 = uVar51 | 2;
            }
            if (iVar39 != 0) {
              uVar51 = uVar51 | 4;
            }
            uVar33 = uVar51 | 8;
            if ((uVar53 & 0.0 < fVar70) == 0) {
              uVar33 = uVar51;
            }
            uVar51 = uVar33 | 0x10;
            if (!(bool)(bVar21 & 0.0 < fRam00000000000d88fc)) {
              uVar51 = uVar33;
            }
            uVar33 = uVar51 | 0x20;
            if (!bVar19) {
              uVar33 = uVar51;
            }
            uVar51 = uVar33 | 0x40;
            if (fRam00000000000d88ac <= 0.0 || iRam00000000000d98c4 == 0) {
              uVar51 = uVar33;
            }
            uVar33 = uVar51 | 0x80;
            if (fRam00000000000d88b4 <= 0.0) {
              uVar33 = uVar51;
            }
            if (uVar23 == 0 && ((uVar4 ^ 0xff) & 1) == 0) {
              uVar33 = uVar33 | 0x100;
            }
            if (((uVar23 | uRam00000000000d88b8 ^ 0xff | uRam00000000000d98a8) & 1) == 0) {
              uVar33 = uVar33 | 0x200;
            }
            if (0.0 < fRam00000000000d88b0 && (uRam00000000000d98a8 & 1) == 0) {
              uVar33 = uVar33 | 0x400;
            }
            iVar61 = FUN_000653c0(uVar33);
            (*(code *)*pxRam00000000000d33d8)(*(xunknown4 *)(iVar61 + 4));
            xVar40 = xRam00000000000d9808;
            xVar7 = xRam00000000000d97b8;
            if (uVar53 != 0) {
              (*(code *)*pxRam00000000000d3310)(0x84c1);
              (*(code *)*pxRam00000000000d3300)(0xde1,xVar7);
              (*(code *)*pxRam00000000000d3358)(1,xVar40);
            }
            xVar7 = xRam00000000000d9854;
            if (bVar21) {
              xVar40 = *(xunknown4 *)((uint8)uRam00000000000d9830 * 0x10 + 0xd9834);
              (*(code *)*pxRam00000000000d3310)(0x84c2);
              (*(code *)*pxRam00000000000d3300)(0xde1,xVar40);
              (*(code *)*pxRam00000000000d3358)(2,xVar7);
            }
            pxVar57 = pxRam00000000000d3480;
            (*(code *)*pxRam00000000000d3480)
                      (xRam00000000000d869c,xRam00000000000d86a0,xRam00000000000d86a4,
                       xRam00000000000d86a8,*(xunknown4 *)(iVar61 + 0x14));
            xVar69 = 0x3f800000;
            if ((uVar4 & (uVar23 ^ 1)) == 0) {
              xVar69 = 0;
            }
            fVar63 = fRam00000000000d88fc;
            if (!bVar21) {
              fVar63 = 0.0;
            }
            (*(code *)*pxVar57)(xVar69,fVar70,fVar63,fRam00000000000d8900,
                                *(xunknown4 *)(iVar61 + 0x18));
            (*(code *)*pxVar57)(fRam00000000000d8904,fRam00000000000d8908,0,0,
                                *(xunknown4 *)(iVar61 + 0x1c));
            if (-1 < *(int4 *)(iVar61 + 0x54)) {
              uVar46 = grading__Frame_plt(&xStack_2b0);
              pxVar57 = pxRam00000000000d3480;
              if ((uVar46 & 1) == 0) {
                (*(code *)*pxRam00000000000d3480)
                          (0x3f800000,0x3f800000,0x3f800000,0,*(xunknown4 *)(iVar61 + 0x54));
              }
              else {
                (*(code *)*pxRam00000000000d3480)
                          (xStack_2b0 & 0xffffffff,xStack_2b0._4_4_,xStack_2a8 & 0xffffffff,
                           0x3f800000);
                (*(code *)*pxVar57)(xStack_2a8._4_4_,xStack_2a0 & 0xffffffff,xStack_2a0._4_4_,
                                    xStack_28c,*(xunknown4 *)(iVar61 + 0x58));
                (*(code *)*pxVar57)(xStack_298,xStack_294,xStack_290,xStack_288,
                                    *(xunknown4 *)(iVar61 + 0x5c));
              }
            }
            if (iRam00000000000d98c4 == 0) {
              bVar21 = true;
            }
            else {
              (*(code *)*pxRam00000000000d3310)(0x84c3);
              (*(code *)*pxRam00000000000d3300)(0x806f,iRam00000000000d98c4);
              (*(code *)*pxRam00000000000d3358)(3,0);
              bVar21 = iRam00000000000d98c4 == 0;
            }
            fVar63 = fRam00000000000d98c8 + 0.618034;
            fRam00000000000d98c8 = 0.0;
            if (fVar63 <= 1000.0) {
              fRam00000000000d98c8 = fVar63;
            }
            fVar63 = 0.0;
            if (!bVar21) {
              fVar63 = fRam00000000000d88ac;
            }
            (*(code *)*pxRam00000000000d3480)
                      (fVar63,(float4)iRam00000000000d9698,fRam00000000000d88b4,
                       *(xunknown4 *)(iVar61 + 0x24));
            if (-1 < *(int4 *)(iVar61 + 0x28)) {
              (*(code *)*pxRam00000000000d3418)(fRam00000000000d88b0);
            }
            if (-1 < *(int4 *)(iVar61 + 0x2c)) {
              xVar69 = 0x3f800000;
              if (((uVar23 ^ 1) & uRam00000000000d88b8) == 0) {
                xVar69 = 0;
              }
              (*(code *)*pxRam00000000000d3418)(xVar69);
            }
            xVar7 = xRam00000000000d9808;
            if (iVar39 != 0) {
              (*(code *)*pxRam00000000000d3310)(0x84c5);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar39);
              (*(code *)*pxRam00000000000d3358)(5,xVar7);
            }
            if (-1 < *(int4 *)(iVar61 + 0x30)) {
              xVar69 = 0;
              if (iVar39 != 0) {
                xVar69 = 0x3f800000;
              }
              (*(code *)*pxRam00000000000d3418)(xVar69);
            }
            xVar7 = xRam00000000000d9808;
            if (iVar28 == 0) {
              iVar39 = *(int4 *)(iVar61 + 0x34);
              if (-1 < iVar39) {
                xVar69 = 0;
                pcVar52 = (code *)*pxRam00000000000d3418;
                goto code_r0x00061f94;
              }
            }
            else {
              (*(code *)*pxRam00000000000d3310)(0x84c6);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar28);
              (*(code *)*pxRam00000000000d3358)(6,xVar7);
              iVar39 = *(int4 *)(iVar61 + 0x34);
              if (-1 < iVar39) {
                pcVar52 = (code *)*pxRam00000000000d3418;
                xVar69 = ao__Strength_plt();
code_r0x00061f94:
                (*pcVar52)(xVar69,iVar39);
              }
            }
            xVar7 = xRam00000000000d980c;
            if (iVar72 != 0) {
              (*(code *)*pxRam00000000000d3310)(0x84c4);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar72);
              (*(code *)*pxRam00000000000d3358)(4,xVar7);
            }
            if ((uVar33 & 0x23) != 0) {
              xVar40 = scene__DepthTexture_plt();
              xVar7 = xRam00000000000d980c;
              (*(code *)*pxRam00000000000d3310)(0x84c7);
              (*(code *)*pxRam00000000000d3300)(0xde1,xVar40);
              (*(code *)*pxRam00000000000d3358)(7,xVar7);
            }
            if (-1 < *(int4 *)(iVar61 + 0x38)) {
              (*(code *)*pxRam00000000000d3418)(fVar78);
            }
            pxVar57 = pxRam00000000000d3480;
            if (-1 < *(int4 *)(iVar61 + 0x50)) {
              if ((((iRam00000000000d96d8 == 0) ||
                   (uVar8 = *(uint2 *)(iRam00000000000d96d8 + 0x24), 0xff < uVar8)) ||
                  (uVar9 = *(uint2 *)(iRam00000000000d96d8 + 0x26), 0xff < uVar9)) ||
                 ((uVar10 = *(uint2 *)(iRam00000000000d96d8 + 0x28), 0xff < uVar10 ||
                  ((uint2)(uVar9 + uVar8 + uVar10) < 7)))) {
                fVar63 = 0.75;
                if ((pcRam00000000000d96d0 == (code *)0x0) ||
                   (pfVar50 = (float4 *)(*pcRam00000000000d96d0)(), pfVar50 == (float4 *)0x0)) {
                  xVar69 = 0x323dc /* "default" */;
                  fVar71 = 0.55;
                  fVar70 = 0.65;
                }
                else {
                  fVar75 = *pfVar50;
                  fVar73 = pfVar50[1];
                  fVar79 = pfVar50[2];
                  if (((1.5 < fVar75) || (1.5 < fVar73)) || (1.5 < fVar79)) {
                    fVar75 = fVar75 / 255.0;
                    fVar73 = fVar73 / 255.0;
                    fVar79 = fVar79 / 255.0;
                  }
                  xVar69 = 0x323dc /* "default" */;
                  fVar70 = 0.65;
                  fVar71 = 0.55;
                  if ((!NAN(fVar75)) && (!NAN(fVar73))) {
                    fVar71 = 0.55;
                    fVar70 = 0.65;
                    if (0.0 <= fVar75) {
                      if (!NAN(fVar79)) {
                        if (0.0 <= fVar73) {
                          if (0.0 <= fVar79) {
                            xVar69 = 0x351ad /* "fog colour (sky top unreadable)" */;
                            fVar70 = fVar73;
                            fVar71 = fVar75;
                            fVar63 = fVar79;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                xVar69 = 0x2c0bc /* "game's sky top" */;
                fVar70 = (float4)uVar9 / 255.0;
                fVar71 = (float4)uVar8 / 255.0;
                fVar63 = (float4)uVar10 / 255.0;
              }
              fVar73 = 1.0;
              fVar75 = 1.0;
              fVar68 = fVar70 * fVar70 * 0.7152 + fVar71 * fVar71 * 0.2126 +
                       fVar63 * fVar63 * 0.0722;
              fVar79 = 1.0;
              if (0.003 < fVar68) {
                fVar73 = (fVar71 * fVar71) / fVar68;
                fVar75 = 0.6;
                if ((0.6 <= fVar73) && (fVar75 = 1.6, fVar73 <= 1.6)) {
                  fVar75 = fVar73;
                }
                fVar79 = (fVar70 * fVar70) / fVar68;
                fVar73 = 0.6;
                if ((0.6 <= fVar79) && (fVar73 = 1.6, fVar79 <= 1.6)) {
                  fVar73 = fVar79;
                }
                fVar79 = (fVar63 * fVar63) / fVar68;
                fVar68 = 0.6;
                if (0.6 <= fVar79) {
                  fVar68 = 1.6;
                  if (fVar79 <= 1.6) goto code_r0x000622bc;
                }
                fVar79 = fVar68;
              }
code_r0x000622bc:
              (*(code *)*pxVar57)(fVar75,fVar73,fVar79,fRam00000000000d88f0,
                                  *(xunknown4 *)(iVar61 + 0x50));
              iVar39 = iRam00000000000d98cc + 1;
              bVar21 = 0x4ae < iRam00000000000d98cc;
              iRam00000000000d98cc = iVar39;
              if ((bVar21) && (iRam00000000000d98d0 < 0x1e)) {
                iRam00000000000d98cc = 0;
                iRam00000000000d98d0 = iRam00000000000d98d0 + 1;
                (*pcRam00000000000d9690)
                          ((float8)fRam00000000000d88f0,(float8)fVar71,(float8)fVar70,(float8)fVar63
                           ,(float8)fVar75,(float8)fVar73,(float8)fVar79,(float8)fVar78,0,0x3236a /* "ambient: %.2f (0 = off), sky colour %.2f %.2f %.2f from the %s -> norm..." */,
                           xVar69);
              }
            }
            if (-1 < *(int4 *)(iVar61 + 0x4c)) {
              fVar78 = 0.0;
              if (bVar1) {
                fVar78 = 1.0;
                if (1.0 <= fRam00000000000d88f4) {
                  fVar78 = fRam00000000000d88f4;
                }
                fVar70 = (12.3 - fVar78) / 11.3;
                fVar63 = 0.95;
                if (fVar70 <= 0.95) {
                  fVar63 = fVar70;
                }
                fVar78 = 0.3;
                if (0.3 <= fVar70) {
                  fVar78 = fVar63;
                }
              }
              (*(code *)*pxRam00000000000d3418)(fVar78);
            }
            if (bVar19) {
              (*(code *)*pxRam00000000000d34a8)(*(xunknown4 *)(iVar61 + 0x3c),1,0,&uStack_370);
              (*(code *)*pxVar57)(fStack_568,xStack_56c,fStack_550,fStack_564,
                                  *(xunknown4 *)(iVar61 + 0x40));
              (*(code *)*pxVar57)(xRam00000000000d8924,xRam00000000000d8928,0x3f800000,uVar44,
                                  *(xunknown4 *)(iVar61 + 0x44));
              (*(code *)*pxRam00000000000d3478)
                        (fStack_560,fStack_55c,fStack_558,*(xunknown4 *)(iVar61 + 0x48));
            }
            (*(code *)*pxRam00000000000d3518)(4,0,3);
          }
          else {
code_r0x00061768:
            bVar20 = false;
            if (iVar55 != (int4)uStack_3a0) {
              bVar20 = bVar1;
            }
            uRam00000000000d98a4 = 0;
            if (bVar20) {
              iVar39 = (int4)uStack_420;
code_r0x00061794:
              xVar7 = xRam00000000000d9808;
              (*(code *)*pxRam00000000000d3310)(0x84c0);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar39);
              (*(code *)*pxRam00000000000d3358)(0,xVar7);
              uVar23 = 0;
              goto code_r0x000617d8;
            }
            if (bVar1 || (uRam00000000000d98a8 & 1) != 0) {
              uVar23 = 0;
              if (uRam00000000000d98a8 != 0) goto code_r0x000617d8;
            }
            else {
              uVar23 = 0;
              if (iRam00000000000d98b0 != 0) {
                uVar23 = uVar53;
              }
              if (uVar23 == 1) {
                (*(code *)*pxRam00000000000d3248)(0x8ca8);
                (*(code *)*pxVar57)(0x8ca9,iRam00000000000d98b0);
                xVar45 = CONCAT44(xVar26,0x2600);
                xVar69 = CONCAT44(xVar27,0x4000);
                (*(code *)*pxRam00000000000d3270)
                          (0,0,uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff,0,0,
                           uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff,xVar69,xVar45);
                xVar27 = (xunknown4)((uint8)xVar69 >> 0x20);
                xVar26 = (xunknown4)((uint8)xVar45 >> 0x20);
                (*(code *)*pxVar57)(0x8ca9,uStack_3a0 & 0xffffffff);
                iVar39 = iRam00000000000d98ac;
                goto code_r0x00061794;
              }
              uVar23 = 0;
            }
          }
          if (-1 < iRam00000000000d8ae8) {
            (*(code *)*pxRam00000000000d35c0)(0x88bf);
            iRam00000000000d8ae8 = -1;
          }
          if (uVar23 == 0) {
            bVar21 = false;
          }
          else {
            FUN_00064970(5);
            pxVar57 = pxRam00000000000d3248;
            uVar44 = (uint8)uRam00000000000d98d4;
            (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam00000000000d98d8);
            pxVar41 = pxRam00000000000d3258;
            iVar61 = (uVar44 ^ 1) * 0x10;
            (*(code *)*pxRam00000000000d3258)
                      (0x8ca9,0x8ce0,0xde1,*(xunknown4 *)(iVar61 + 0xd98dc),0);
            (*(code *)*pxVar41)(0x8ca9,0x8ce1,0xde1,iVar25,0);
            (*(code *)*pxVar41)(0x8ca9,0x8ce2,0xde1,*(xunknown4 *)(iVar61 + 0xd98fc),0);
            iStack_368 = CONCAT44(iStack_368._4_4_,0x8ce2);
            uStack_370 = 0x8ce100008ce0;
            (*(code *)*pxRam00000000000d3268)(3,&uStack_370);
            (*(code *)*pxRam00000000000d3278)(0x8ca9,3,&uStack_370);
            iVar39 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
            if (iVar39 == 0x8cd5) {
              (*(code *)*pxRam00000000000d3520)(0,0,uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff)
              ;
              (*(code *)*pxRam00000000000d33d8)(iRam00000000000d9890);
              xVar27 = xRam00000000000d9894;
              xVar26 = xRam00000000000d980c;
              pxVar41 = pxRam00000000000d3310;
              (*(code *)*pxRam00000000000d3310)(0x84c0);
              pxVar57 = pxRam00000000000d3300;
              (*(code *)*pxRam00000000000d3300)(0xde1,xVar27);
              pxVar62 = pxRam00000000000d3358;
              (*(code *)*pxRam00000000000d3358)(0,xVar26);
              xVar27 = xRam00000000000d9808;
              xVar26 = *(xunknown4 *)((uint8)uRam00000000000d98d4 * 0x10 + 0xd98dc);
              (*(code *)*pxVar41)(0x84c1);
              (*(code *)*pxVar57)(0xde1,xVar26);
              (*(code *)*pxVar62)(1,xVar27);
              xVar26 = xRam00000000000d980c;
              (*(code *)*pxVar41)(0x84c2);
              (*(code *)*pxVar57)(0xde1,iVar38);
              (*(code *)*pxVar62)(2,xVar26);
              xVar27 = xRam00000000000d980c;
              xVar26 = *(xunknown4 *)((uint8)uRam00000000000d98d4 * 0x10 + 0xd98fc);
              (*(code *)*pxVar41)(0x84c3);
              (*(code *)*pxVar57)(0xde1,xVar26);
              (*(code *)*pxVar62)(3,xVar27);
              pxVar57 = pxRam00000000000d3410;
              (*(code *)*pxRam00000000000d3410)(xRam00000000000d8a58,0);
              (*(code *)*pxVar57)(xRam00000000000d8a5c,1);
              (*(code *)*pxVar57)(xRam00000000000d8a60,2);
              (*(code *)*pxVar57)(xRam00000000000d8a64,3);
              (*(code *)*pxRam00000000000d3478)
                        (xStack_1f8,xStack_1f4,xStack_1f0,xRam00000000000d8a68);
              pxVar57 = pxRam00000000000d34a8;
              (*(code *)*pxRam00000000000d34a8)(xRam00000000000d8a6c,1,0,axStack_278);
              (*(code *)*pxVar57)(xRam00000000000d8a70,1,0,axStack_238);
              fVar78 = 0.0;
              uVar22 = uStack_1ec & uRam00000000000d98a4;
              xVar26 = xRam00000000000d88bc;
              if ((uVar22 & 1) == 0) {
                xVar26 = 0;
              }
              xVar69 = 0x3f800000;
              if ((uVar4 & 1) == 0) {
                xVar69 = 0;
              }
              (*(code *)*pxRam00000000000d3480)
                        (1.0 / (float4)(int4)uStack_3c0,1.0 / (float4)(int4)uStack_3e0,xVar26,xVar69
                         ,xRam00000000000d8a74);
              if ((uVar24 & 1) != 0) {
                fVar78 = (float4)fsr__TaaSharpness_plt();
              }
              (*(code *)*pxRam00000000000d3418)(fVar78,xRam00000000000d8a78);
              bVar21 = 0.0 < fVar78;
              (*(code *)*pxRam00000000000d3518)(4,0,3);
              uRam00000000000d98d4 = (uint4)(uVar44 ^ 1);
              uRam00000000000d98a4 = 1;
              iRam00000000000d991c = iRam00000000000d991c + 1;
              if ((uVar22 & 1) != 0) {
                iRam00000000000d9920 = iRam00000000000d9920 + 1;
              }
            }
            else {
              (*(code *)*pxVar57)(0x8ca8,iRam00000000000d9898);
              (*(code *)*pxVar57)(0x8ca9,iVar55);
              (*(code *)*pxRam00000000000d3270)
                        (0,0,uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff,0,0,
                         uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff,CONCAT44(xVar27,0x4000),
                         CONCAT44(xVar26,0x2600));
              cRam00000000000d88b9 = '\0';
              (*pcRam00000000000d9690)(1,0x23fa6 /* "post: TAA target (history + scene texture %d) incomplete - TAA off" */,uStack_420 & 0xffffffff);
              bVar21 = false;
            }
            (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce1,0xde1,0,0);
            if (-1 < iRam00000000000d8ae8) {
              (*(code *)*pxRam00000000000d35c0)(0x88bf);
              iRam00000000000d8ae8 = -1;
            }
          }
          if ((iVar28 != 0) && (iVar28 = ao__Debug_plt(), iVar28 != 0)) {
            (*(code *)*pxRam00000000000d3248)(0x8ca9,iVar55);
            ao__DrawDebug_plt(uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff,xRam00000000000d97a0);
          }
          (*(code *)*pxRam00000000000d3248)(0x8ca9,iVar55);
          (*(code *)*pxRam00000000000d3520)(0,0,uStack_3c0 & 0xffffffff,uStack_3e0 & 0xffffffff);
          shadows__DrawDebug_plt();
          (*(code *)*pxRam00000000000d3508)(xRam00000000000d97a0);
          if ((uVar24 & 1) == 0) {
            bVar21 = false;
            pxVar57 = pxRam00000000000d3228;
          }
          else {
            FUN_00064970(7);
            uVar44 = fsr__Run_plt(iVar25,uStack_3a0 & 0xffffffff,uStack_3c0 & 0xffffffff,
                                  uStack_3e0 & 0xffffffff,uRam00000000000d8699,bVar21);
            if (-1 < iRam00000000000d8ae8) {
              (*(code *)*pxRam00000000000d35c0)(0x88bf);
              iRam00000000000d8ae8 = -1;
            }
            pxVar57 = pxRam00000000000d3228;
            if ((uVar44 & 1) == 0) {
              bVar21 = false;
            }
            else {
              FUN_00064970(8);
              fsr__Sharpen_plt();
              if (-1 < iRam00000000000d8ae8) {
                (*(code *)*pxRam00000000000d35c0)(0x88bf);
                iRam00000000000d8ae8 = -1;
              }
              bVar21 = true;
            }
          }
          if (-1 < (int4)uRam00000000000d893c) {
            *(xunknown1 *)((uint8)uRam00000000000d893c + 0xd979c) = 1;
            uRam00000000000d893c = 0xffffffff;
          }
          gl__SavedState__Restore_plt(&uStack_190);
          xStack_2c8 = xStack_e8;
          xStack_2d0 = xStack_f0;
          xStack_2e8 = xStack_108;
          xStack_2f0 = xStack_110;
          xStack_2d8 = xStack_f8;
          xStack_2e0 = xStack_100;
          xStack_328 = CONCAT44(xStack_144,xStack_148);
          xStack_330 = CONCAT44(xStack_14c,xStack_150);
          xStack_318 = CONCAT44(xStack_134,xStack_138);
          xStack_320 = CONCAT44(xStack_13c,xStack_140);
          xStack_2c0 = xStack_e0;
          xStack_310 = CONCAT44(xStack_12c,uStack_130);
          xStack_308 = xStack_128;
          xStack_2f8 = xStack_118;
          xStack_300 = xStack_120;
          iStack_368 = CONCAT44(xStack_184,xStack_188);
          uStack_370 = CONCAT44(xStack_18c,uStack_190);
          xStack_358 = CONCAT44(xStack_174,iStack_178);
          pxStack_360 = (xunknown8 *)CONCAT44(xStack_17c,xStack_180);
          xStack_348 = CONCAT44(xStack_164,xStack_168);
          xStack_350 = CONCAT44(xStack_16c,xStack_170);
          xStack_338 = CONCAT44(xStack_154,xStack_158);
          xStack_340 = CONCAT44(xStack_15c,xStack_160);
          if (bVar1) {
            if (iStack_178 == (int4)uStack_420) {
              (*(code *)*pxRam00000000000d3310)(0x84c0);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_358 = CONCAT44(xStack_358._4_4_,iVar25);
            }
            iVar28 = (int4)uStack_420;
            if (xStack_358._4_4_ == (int4)uStack_420) {
              (*(code *)*pxRam00000000000d3310)(0x84c1);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_358 = CONCAT44(iVar25,(xunknown4)xStack_358);
              iVar28 = (int4)uStack_420;
            }
            if ((int4)xStack_350 == iVar28) {
              (*(code *)*pxRam00000000000d3310)(0x84c2);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_350 = CONCAT44(xStack_350._4_4_,iVar25);
              iVar28 = (int4)uStack_420;
            }
            if (xStack_350._4_4_ == iVar28) {
              (*(code *)*pxRam00000000000d3310)(0x84c3);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_350 = CONCAT44(iVar25,(int4)xStack_350);
              iVar28 = (int4)uStack_420;
            }
            if ((int4)xStack_348 == iVar28) {
              (*(code *)*pxRam00000000000d3310)(0x84c4);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_348 = CONCAT44(xStack_348._4_4_,iVar25);
              iVar28 = (int4)uStack_420;
            }
            if (xStack_348._4_4_ == iVar28) {
              (*(code *)*pxRam00000000000d3310)(0x84c5);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_348 = CONCAT44(iVar25,(int4)xStack_348);
              iVar28 = (int4)uStack_420;
            }
            if ((int4)xStack_340 == iVar28) {
              (*(code *)*pxRam00000000000d3310)(0x84c6);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_340 = CONCAT44(xStack_340._4_4_,iVar25);
              iVar28 = (int4)uStack_420;
            }
            if (xStack_340._4_4_ == iVar28) {
              (*(code *)*pxRam00000000000d3310)(0x84c7);
              (*(code *)*pxRam00000000000d3300)(0xde1,iVar25);
              xStack_340 = CONCAT44(iVar25,(int4)xStack_340);
            }
            (*(code *)*pxRam00000000000d3310)(xStack_180);
          }
          scene__PostDone_plt();
          if (bVar21) {
            fsr__Rebind_plt(&uStack_370,iVar25);
          }
          iVar25 = (*(code *)*pxVar57)();
          do {
            iVar28 = (*(code *)*pxVar57)();
          } while (iVar28 != 0);
          if ((iVar25 != 0) &&
             (iVar28 = iRam00000000000d9924 + 1, bVar1 = iRam00000000000d9924 < 3,
             iRam00000000000d9924 = iVar28, bVar1)) {
            (*pcRam00000000000d9690)(1,0x2667e /* "post: GL error 0x%X during the pass" */,iVar25);
          }
          goto code_r0x0005fb68;
        }
      }
      uVar44 = uStack_3a0 & 0xffffffff;
      xVar69 = 3;
    }
code_r0x0005f564:
    boot__PostRun_plt(xVar69,uVar44,0);
  }
code_r0x0005fb68:
  if (*(int8 *)(iVar11 + 0x28) == iStack_b8) {
    return;
  }
code_r0x00063cb8:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6431c  size=1620 */
void FUN_0006431c(void)

{
  bool bVar1;
  int4 iVar2;
  int8 iVar3;
  xunknown8 *pxVar4;
  int8 iVar5;
  int8 iVar6;
  int8 iVar7;
  uint4 uVar8;
  int8 iVar9;
  float8 fVar10;
  float8 fVar11;
  float8 fVar12;
  uint8 uStack_d0;
  int4 iStack_c4;
  float8 afStack_c0 [9];
  int8 iStack_78;
  
  iVar3 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar3 + 0x28);
  iStack_c4 = 0;
  (*(code *)*pxRam00000000000d3208)(0x8fbb,&iStack_c4);
  pxVar4 = pxRam00000000000d35d8;
  iVar6 = 0xd99c0;
  iVar5 = 0;
  iVar7 = 0xd9930;
  do {
    if (*(char *)(iVar5 + 0xd979c) == '\x01') {
      iVar9 = iVar5 * 9;
      if (*(char *)(iVar9 + 0xd99c0) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd9930),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & 1;
      }
      else {
        uVar8 = 1;
      }
      if (*(char *)(iVar9 + 0xd99c1) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd9934),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (*(char *)(iVar9 + 0xd99c2) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd9938),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (*(char *)(iVar9 + 0xd99c3) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd993c),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (*(char *)(iVar9 + 0xd99c4) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd9940),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (*(char *)(iVar9 + 0xd99c5) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd9944),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (*(char *)(iVar9 + 0xd99c6) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd9948),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (*(char *)(iVar9 + 0xd99c7) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd994c),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (*(char *)(iVar9 + 0xd99c8) == '\x01') {
        afStack_c0[0] = (float8)((uint8)afStack_c0[0] & 0xffffffff00000000);
        (*(code *)*pxRam00000000000d35d0)(*(xunknown4 *)(iVar5 * 0x24 + 0xd9950),0x8867,afStack_c0);
        uVar8 = afStack_c0[0]._0_4_ & uVar8;
      }
      if (uVar8 != 0) {
        fVar12 = 0.0;
        iVar9 = 0;
        afStack_c0[8] = 0.0;
        afStack_c0[1] = 0.0;
        afStack_c0[0] = 0.0;
        afStack_c0[3] = 0.0;
        afStack_c0[2] = 0.0;
        afStack_c0[5] = 0.0;
        afStack_c0[4] = 0.0;
        afStack_c0[7] = 0.0;
        afStack_c0[6] = 0.0;
        do {
          if (*(char *)(iVar6 + iVar9) == '\x01') {
            uStack_d0 = 0;
            (*(code *)*pxVar4)(*(xunknown4 *)(iVar7 + iVar9 * 4),0x8866,&uStack_d0);
            if ((iStack_c4 == 0) && (uStack_d0 < 100000000)) {
              fVar10 = (float8)uStack_d0 / 1000000.0;
              fVar11 = *(float8 *)(iVar9 * 8 + 0xd99e8);
              afStack_c0[iVar9] = fVar10;
              fVar12 = fVar12 + fVar10;
              *(float8 *)(iVar9 * 8 + 0xd99e8) = fVar10 + fVar11;
            }
            *(xunknown1 *)(iVar6 + iVar9) = 0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != 9);
        *(xunknown1 *)(iVar5 + 0xd979c) = 0;
        if (iStack_c4 == 0) {
          fRam00000000000d96f8 = fVar12 + fRam00000000000d96f8;
          iRam00000000000d9a30 = iRam00000000000d9a30 + 1;
          iRam00000000000d9700 = iRam00000000000d9700 + 1;
          budget__PostFrame_plt(afStack_c0);
        }
      }
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 9;
    iVar7 = iVar7 + 0x24;
  } while (iVar5 != 4);
  iVar2 = iRam00000000000d9a34 + 1;
  bVar1 = 0x256 < iRam00000000000d9a34;
  iRam00000000000d9a34 = iVar2;
  if ((bVar1) && (iRam00000000000d9a30 != 0)) {
    fVar10 = 0.0;
    fVar12 = (float8)iRam00000000000d9a30;
    (*pcRam00000000000d9690)
              ((fRam00000000000d99e8 + 0.0 + fRam00000000000d99f0 + fRam00000000000d99f8 +
                fRam00000000000d9a00 + fRam00000000000d9a08 + fRam00000000000d9a10 +
                fRam00000000000d9a18 + fRam00000000000d9a20 + fRam00000000000d9a28) / fVar12,
               fRam00000000000d99e8 / fVar12,fRam00000000000d99f0 / fVar12,
               fRam00000000000d99f8 / fVar12,fRam00000000000d9a00 / fVar12,
               fRam00000000000d9a08 / fVar12,0,0x2dc34 /* "post: GPU %.3f ms per frame (avg of %d) - %s %.3f, %s %.3f, %s %.3f, %..." */,iRam00000000000d9a30,0x225f2 /* "bloom" */,0x2b4b7 /* "exposure" */,0x2926e /* "sun rays" */,
               0x32e57,0x2a137 /* "composite" */);
    if ((cRam00000000000d88b9 & 1) != 0) {
      if (iRam00000000000d991c != 0) {
        fVar10 = ((float8)iRam00000000000d9920 * 100.0) / (float8)iRam00000000000d991c;
      }
      (*pcRam00000000000d9690)
                (fRam00000000000d9a10 / (float8)iRam00000000000d9a30,fVar10,0,0x24734 /* "post: %s %.3f ms, %.0f%% of the frames used the history" */,0x3d2e8);
    }
    if (iRam00000000000d9928 != 0) {
      (*pcRam00000000000d9690)
                (fRam00000000000d9a18 / (float8)iRam00000000000d9a30,0,0x27fb3 /* "post: %s %.3f ms (ran in %ld frames, skipped in %ld: 1.13.6 every fram..." */,0x30f87 /* "ssr prep" */,
                 iRam00000000000d97a8,iRam00000000000d97b0);
    }
    iRam00000000000d97b0 = 0;
    iRam00000000000d97a8 = 0;
    if (0.0 < fRam00000000000d9a20) {
      fVar12 = (float8)iRam00000000000d9a30;
      (*pcRam00000000000d9690)
                ((fRam00000000000d9a20 + fRam00000000000d9a28) / fVar12,
                 fRam00000000000d9a20 / fVar12,fRam00000000000d9a28 / fVar12,0,0x2a819 /* "post: fsr %.3f ms at screen size - EASU (upscale) %.3f, RCAS (sharpen)..." */);
    }
    iRam00000000000d9a30 = 0;
    cRam00000000000d9858 = 1;
    iRam00000000000d991c = 0;
    iRam00000000000d9920 = 0;
    fRam00000000000d99f0 = 0.0;
    fRam00000000000d99e8 = 0.0;
    fRam00000000000d9a00 = 0.0;
    fRam00000000000d99f8 = 0.0;
    fRam00000000000d9a10 = 0.0;
    fRam00000000000d9a08 = 0.0;
    fRam00000000000d9a20 = 0.0;
    fRam00000000000d9a18 = 0.0;
    fRam00000000000d9a28 = 0.0;
    iRam00000000000d9a34 = 0;
    cRam00000000000d9861 = 1;
  }
  if (*(int8 *)(iVar3 + 0x28) == iStack_78) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x64970  size=136 */
void FUN_00064970(uint4 param_1)

{
  boot__R_plt((int8)*(int4 *)((uint8)param_1 * 4 + 0x414ac) + 0x414ac);
  if (-1 < (int4)uRam00000000000d893c) {
    (*(code *)*pxRam00000000000d35b8)
              (0x88bf,*(xunknown4 *)
                       ((uint8)uRam00000000000d893c * 0x24 + 0xd9930 + (uint8)param_1 * 4));
    iRam00000000000d8ae8 = param_1;
    *(xunknown1 *)((int8)(int4)uRam00000000000d893c * 9 + 0xd99c0 + (uint8)param_1) = 1;
  }
  return;
}

/* 0x649f8  size=2080 */
void FUN_000649f8(int8 param_1,uint8 param_2,int4 param_3,int4 param_4,int4 param_5,int4 param_6)

{
  bool bVar1;
  int8 iVar2;
  int4 iVar3;
  xunknown4 xVar4;
  int8 iVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  xunknown8 *pxVar8;
  xunknown8 *pxVar9;
  xunknown4 xVar10;
  uint8 uVar11;
  float4 *pfVar12;
  float4 fVar13;
  float4 fVar14;
  xunknown8 xVar15;
  float4 fVar16;
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
  xunknown1 axStack_124 [12];
  xunknown8 xStack_118;
  xunknown8 xStack_110;
  xunknown8 xStack_108;
  xunknown8 xStack_100;
  xunknown8 xStack_f8;
  xunknown8 xStack_f0;
  uint8 uStack_e0;
  xunknown1 axStack_d8 [40];
  float4 fStack_b0;
  xunknown4 xStack_a0;
  int8 iStack_98;
  
  iVar5 = tpidr_el0;
  iStack_98 = *(int8 *)(iVar5 + 0x28);
  cRam00000000000d9705 = 0;
  if ((((((param_4 != 0) && (param_3 != 0)) && ((param_2 & 1) != 0)) &&
       ((iRam00000000000d9928 != 0 && (uRam00000000000d9708._4_4_ != 0)))) &&
      ((*puRam00000000000d3610 >> 8 & 1) == 0)) &&
     ((uVar11 = lights__Camera_plt(axStack_d8,&xStack_118,axStack_124), (uVar11 & 1) != 0 &&
      (1e-06 <= ABS(fStack_b0 + 1.0))))) {
    boot__R_plt(0x41546 /* "ZyZ: post - SSR prep" */);
    if (-1 < (int4)uRam00000000000d893c) {
      (*(code *)*pxRam00000000000d35b8)
                (0x88bf,*(xunknown4 *)((uint8)uRam00000000000d893c * 0x24 + 0xd9948));
      *(xunknown1 *)((int8)(int4)uRam00000000000d893c * 9 + 0xd99c6) = 1;
      iRam00000000000d8ae8 = 6;
    }
    (*(code *)*pxRam00000000000d3248)(0x8ca9,uRam00000000000d9708._4_4_);
    (*(code *)*pxRam00000000000d3520)
              (0,0,(xunknown4)xRam00000000000d9710,xRam00000000000d9710._4_4_);
    pxVar6 = pxRam00000000000d33d8;
    (*(code *)*pxRam00000000000d33d8)(0);
    xStack_230 = CONCAT44(xStack_230._4_4_,0x8ce0);
    (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&xStack_230);
    (*(code *)*pxVar6)(iRam00000000000d9928);
    xVar4 = xRam00000000000d9808;
    pxVar7 = pxRam00000000000d3310;
    (*(code *)*pxRam00000000000d3310)(0x84c0);
    pxVar6 = pxRam00000000000d3300;
    (*(code *)*pxRam00000000000d3300)(0xde1,param_3);
    pxVar8 = pxRam00000000000d3358;
    (*(code *)*pxRam00000000000d3358)(0,xVar4);
    xVar4 = xRam00000000000d980c;
    (*(code *)*pxVar7)(0x84c1);
    (*(code *)*pxVar6)(0xde1,param_4);
    (*(code *)*pxVar8)(1,xVar4);
    pxVar8 = pxRam00000000000d34a8;
    (*(code *)*pxRam00000000000d34a8)(xRam00000000000d8acc,1,0,param_1);
    (*(code *)*pxRam00000000000d3410)(xRam00000000000d8ad8,iRam00000000000d8934);
    (*(code *)*pxRam00000000000d3480)
              (1.0 / (float4)param_5,1.0 / (float4)param_6,0,0,xRam00000000000d8ad0);
    fRam00000000000d978c = fStack_b0;
    xRam00000000000d9790 = xStack_a0;
    (*(code *)*pxRam00000000000d3420)(xRam00000000000d8ad4);
    (*(code *)*pxRam00000000000d3518)(4,0,3);
    if (-1 < iRam00000000000d8ae8) {
      (*(code *)*pxRam00000000000d35c0)(0x88bf);
      iRam00000000000d8ae8 = -1;
    }
    if (((iRam00000000000d992c != 0) && (xRam00000000000d9768._4_4_ != 0)) &&
       (xRam00000000000d9778._4_4_ != 0)) {
      uVar11 = (uint8)uRam00000000000d9788 ^ 1;
      iVar2 = uVar11 * 0x10;
      (*(code *)*pxRam00000000000d3248)
                (0x8ca9,*(xunknown4 *)((int8)&xRam00000000000d9768 + iVar2 + 4));
      (*(code *)*pxRam00000000000d3520)
                (0,0,*(xunknown4 *)(&xRam00000000000d9770 + uVar11 * 2),
                 *(xunknown4 *)((int8)&xRam00000000000d9770 + iVar2 + 4));
      pxVar9 = pxRam00000000000d33d8;
      (*(code *)*pxRam00000000000d33d8)(0);
      xStack_230 = CONCAT44(xStack_230._4_4_,0x8ce0);
      (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&xStack_230);
      (*(code *)*pxVar9)(iRam00000000000d992c);
      xVar10 = xRam00000000000d980c;
      xVar4 = (xunknown4)uRam00000000000d9708;
      (*(code *)*pxVar7)(0x84c0);
      (*(code *)*pxVar6)(0xde1,xVar4);
      pxVar9 = pxRam00000000000d3358;
      (*(code *)*pxRam00000000000d3358)(0,xVar10);
      xVar10 = xRam00000000000d980c;
      xVar4 = *(xunknown4 *)(&xRam00000000000d9768 + (uint8)uRam00000000000d9788 * 2);
      (*(code *)*pxVar7)(0x84c1);
      (*(code *)*pxVar6)(0xde1,xVar4);
      (*(code *)*pxVar9)(1,xVar10);
      (*(code *)*pxVar8)(xRam00000000000d8adc,1,0,param_1);
      xVar15 = 0;
      if (xRam00000000000d9764 == '\0') {
        xVar15 = 0x3f800000;
      }
      fVar16 = 0.0;
      if (((pfRam00000000000d96f0 != (float4 *)0x0) &&
          (fVar13 = *pfRam00000000000d96f0, 0.0 <= fVar13)) && (fVar16 = 1.0, fVar13 <= 1.0)) {
        fVar16 = fVar13;
      }
      (*(code *)*pxRam00000000000d3480)(0x3da3d70a,xVar15,fVar16,0,xRam00000000000d8ae0);
      pxVar6 = pxRam00000000000d3518;
      fVar16 = 0.75;
      if ((pcRam00000000000d96d0 == (code *)0x0) ||
         (pfVar12 = (float4 *)(*pcRam00000000000d96d0)(), pfVar12 == (float4 *)0x0)) {
        fVar13 = 0.65;
        fVar14 = 0.55;
      }
      else {
        fVar14 = *pfVar12;
        fVar13 = pfVar12[1];
        fVar16 = pfVar12[2];
        if (((1.5 < fVar14) || (1.5 < fVar13)) || (1.5 < fVar16)) {
          fVar14 = fVar14 / 255.0;
          fVar13 = fVar13 / 255.0;
          fVar16 = fVar16 / 255.0;
        }
        if ((NAN(fVar14) || NAN(fVar13)) || NAN(fVar16)) {
          fVar16 = 0.75;
          fVar13 = 0.65;
          fVar14 = 0.55;
        }
      }
      (*(code *)*pxRam00000000000d3478)(fVar14,fVar13,fVar16,xRam00000000000d8ae4);
      (*(code *)*pxVar6)(4,0,3);
      uRam00000000000d9788 = (uint4)uVar11;
      xRam00000000000d9764 = '\x01';
      if (((cRam00000000000d8938 == '\x01') &&
          (iVar3 = iRam00000000000d9a40 + 1, bVar1 = 0x256 < iRam00000000000d9a40,
          iRam00000000000d9a40 = iVar3, bVar1)) && (iRam00000000000d9a44 < 0x1e)) {
        iRam00000000000d9a40 = 0;
        iRam00000000000d9a44 = iRam00000000000d9a44 + 1;
        xStack_208 = 0;
        xStack_210 = 0;
        xStack_1f8 = 0;
        xStack_200 = 0;
        xStack_1e8 = 0;
        xStack_1f0 = 0;
        xStack_1d8 = 0;
        xStack_1e0 = 0;
        xStack_1c8 = 0;
        xStack_1d0 = 0;
        xStack_1b8 = 0;
        xStack_1c0 = 0;
        xStack_1a8 = 0;
        xStack_1b0 = 0;
        xStack_198 = 0;
        xStack_1a0 = 0;
        xStack_188 = 0;
        xStack_190 = 0;
        xStack_178 = 0;
        xStack_180 = 0;
        xStack_168 = 0;
        xStack_170 = 0;
        xStack_158 = 0;
        xStack_160 = 0;
        xStack_148 = 0;
        xStack_150 = 0;
        xStack_138 = 0;
        xStack_140 = 0;
        xStack_228 = 0;
        xStack_230 = 0;
        xStack_218 = 0;
        xStack_220 = 0;
        (*(code *)*pxRam00000000000d3248)
                  (0x8ca8,*(xunknown4 *)((int8)&xRam00000000000d9768 + iVar2 + 4));
        (*(code *)*pxRam00000000000d32d8)(0,0,0x10,1,0x1908,0x1406,&xStack_230);
        (*pcRam00000000000d9690)
                  ((float8)(float4)xStack_230,(float8)xStack_230._4_4_,(float8)(float4)xStack_228,
                   (float8)(float4)xStack_1f0,(float8)xStack_1f0._4_4_,(float8)(float4)xStack_1e8,
                   (float8)(float4)xStack_1c0,(float8)xStack_1c0._4_4_,0,0x37226 /* "ssr: sky probe (display colour by sin(elevation) -0.1 / 0.2 / 0.5 / 0...." */);
      }
    }
    xRam00000000000d9740 = xStack_f0;
    xRam00000000000d9738 = xStack_f8;
    xRam00000000000d9720 = xStack_110;
    xRam00000000000d9718 = xStack_118;
    xRam00000000000d9730 = xStack_100;
    xRam00000000000d9728 = xStack_108;
    uRam00000000000d9750 = uStack_e0 & 0xffffffff00000000;
    xRam00000000000d9748 = 0;
    fRam00000000000d9758 = (float4)*(float8 *)(param_1 + 0xd0);
    fRam00000000000d975c = (float4)*(float8 *)(param_1 + 0xd8);
    fRam00000000000d9760 = (float4)*(float8 *)(param_1 + 0xe0);
    cRam00000000000d9705 = 1;
    iVar3 = iRam00000000000d9a48 + 1;
    bVar1 = 0xe0e < iRam00000000000d9a48;
    iRam00000000000d9a48 = iVar3;
    if ((bVar1) && (iRam00000000000d9a4c < 10)) {
      iRam00000000000d9a48 = 0;
      iRam00000000000d9a4c = iRam00000000000d9a4c + 1;
      (*pcRam00000000000d9690)
                ((float8)fRam00000000000d9758,(float8)fRam00000000000d975c,
                 (float8)fRam00000000000d9760,0,0x35214 /* "post: SSR prep running (%dx%d, camera %.0f %.0f %.0f)" */,(xunknown4)xRam00000000000d9710,
                 xRam00000000000d9710._4_4_);
    }
  }
  if (*(int8 *)(iVar5 + 0x28) == iStack_98) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x65218  size=192 */
void FUN_00065218(int8 param_1,xunknown4 *param_2)

{
  int8 iVar1;
  xunknown4 xStack_3c;
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  (*(code *)*pxRam00000000000d3248)(0x8ca9,*(xunknown4 *)(param_1 + 4));
  (*(code *)*pxRam00000000000d3520)(0,0,*(xunknown4 *)(param_1 + 8),*(xunknown4 *)(param_1 + 0xc));
  (*(code *)*pxRam00000000000d33d8)(*param_2);
  xStack_3c = 0x8ce0;
  (*(code *)*pxRam00000000000d3278)(0x8ca9,1,&xStack_3c);
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x652d8  size=104 */
void FUN_000652d8(int8 param_1,xunknown4 *param_2)

{
  (*(code *)*pxRam00000000000d3248)(0x8ca9,*(xunknown4 *)(param_1 + 4));
  (*(code *)*pxRam00000000000d3520)(0,0,*(xunknown4 *)(param_1 + 8),*(xunknown4 *)(param_1 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x0006533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxRam00000000000d33d8)(*param_2);
  return;
}

/* 0x65340  size=128 */
float4 FUN_00065340(void)

{
  float4 fVar1;
  float4 fVar2;
  float4 fVar3;
  float4 fVar4;
  
  fVar1 = 1.0;
  fVar4 = 1.0;
  if (1.0 <= fRam00000000000d88f4) {
    fVar4 = fRam00000000000d88f4;
  }
  fVar2 = (12.3 - fVar4) / 11.3;
  fVar4 = 0.95;
  if (fVar2 <= 0.95) {
    fVar4 = fVar2;
  }
  fVar3 = 0.3;
  if (0.3 <= fVar2) {
    fVar3 = fVar4;
  }
  if (fVar3 < 1.0) {
    fVar4 = 1.0 - fVar3;
    fVar1 = fVar3 + (fVar4 * (fVar4 / fVar4)) / (fVar4 / fVar4 + 1.0);
  }
  return fVar1;
}

/* 0x653c0  size=1380 */
uint4 * FUN_000653c0(uint4 param_1)

{
  uint4 *puVar1;
  int8 iVar2;
  uint8 uVar3;
  xunknown8 xVar4;
  uint4 *puVar5;
  int8 iVar6;
  uint4 *puVar7;
  uint4 *puVar8;
  uint8 uVar9;
  int8 iVar10;
  uint4 *puVar11;
  int8 iVar12;
  xunknown8 xVar13;
  xunknown8 xVar14;
  xunknown8 xVar15;
  xunknown8 xVar16;
  xunknown8 xVar17;
  uint1 uStack_110;
  unkbyte7 Stack_10f;
  xunknown8 xStack_100;
  xunknown1 axStack_f4 [32];
  uint4 uStack_d4;
  xunknown4 xStack_d0;
  xunknown8 xStack_cc;
  xunknown8 xStack_c4;
  xunknown8 xStack_bc;
  xunknown8 xStack_b4;
  xunknown4 xStack_ac;
  xunknown4 xStack_a8;
  xunknown4 xStack_a4;
  xunknown4 xStack_a0;
  xunknown4 xStack_9c;
  xunknown4 xStack_98;
  xunknown4 xStack_94;
  xunknown4 xStack_90;
  xunknown4 xStack_8c;
  xunknown4 xStack_88;
  xunknown4 xStack_84;
  xunknown4 xStack_80;
  xunknown4 xStack_7c;
  xunknown4 xStack_78;
  uint4 uStack_74;
  int8 iStack_70;
  
  iVar2 = tpidr_el0;
  iStack_70 = *(int8 *)(iVar2 + 0x28);
  puVar5 = pxRam00000000000d9660;
  if (pxRam00000000000d9660 != pxRam00000000000d9668) {
    puVar8 = pxRam00000000000d9660;
    do {
      if (*puVar8 == param_1) {
        if ((char)puVar8[0x18] == '\0') {
          puVar5 = puVar8;
        }
        goto code_r0x00065890;
      }
      puVar8 = puVar8 + 0x19;
    } while (puVar8 != pxRam00000000000d9668);
  }
  if ((uint8)(((int8)pxRam00000000000d9668 - (int8)pxRam00000000000d9660 >> 2) * -0x70a3d70a3d70a3d7
             ) < 0x3c) {
    xStack_d0 = 0;
    xStack_ac = 0xffffffff;
    xStack_c4 = 0xffffffffffffffff;
    xStack_cc = 0xffffffffffffffff;
    xStack_b4 = 0xffffffffffffffff;
    xStack_bc = 0xffffffffffffffff;
    xStack_a0 = 0;
    xStack_9c = 0;
    xStack_a8 = 0;
    xStack_a4 = 0;
    xStack_90 = 0;
    xStack_8c = 0;
    xStack_98 = 0;
    xStack_94 = 0;
    xStack_80 = 0;
    xStack_88 = 0;
    xStack_84 = 0;
    xStack_7c = 0;
    xStack_78 = 0;
    uStack_74 = uStack_74 & 0xffffff00;
    uStack_d4 = param_1;
    FUN_00066170(axStack_f4,0x20,0x20,0x39b70 /* "composite-%03X" */,param_1);
    FUN_00065b64(&uStack_110,param_1);
    uVar3 = FUN_00065924(&xStack_d0,&uStack_110,axStack_f4);
    if ((uStack_110 & 1) != 0) {
      operator_delete_plt(xStack_100,CONCAT71(Stack_10f,uStack_110) & 0xfffffffffffffffe);
    }
    puVar8 = pxRam00000000000d9668;
    puVar5 = pxRam00000000000d9660;
    if ((uVar3 & 1) == 0) {
      uStack_74 = CONCAT31(uStack_74._1_3_,1);
      if (pxRam00000000000d9668 < pxRam00000000000d9670) {
        puVar11 = pxRam00000000000d9668 + 0x19;
        *(xunknown8 *)(pxRam00000000000d9668 + 6) = xStack_bc;
        *(xunknown8 *)(pxRam00000000000d9668 + 4) = xStack_c4;
        *(uint8 *)(pxRam00000000000d9668 + 10) = CONCAT44(xStack_a8,xStack_ac);
        *(xunknown8 *)(pxRam00000000000d9668 + 8) = xStack_b4;
        *(xunknown8 *)(pxRam00000000000d9668 + 2) = xStack_cc;
        *(uint8 *)pxRam00000000000d9668 = CONCAT44(xStack_d0,uStack_d4);
        pxRam00000000000d9668[0x18] = uStack_74;
        *(uint8 *)(pxRam00000000000d9668 + 0x12) = CONCAT44(xStack_88,xStack_8c);
        *(uint8 *)(pxRam00000000000d9668 + 0x10) = CONCAT44(xStack_90,xStack_94);
        *(uint8 *)(pxRam00000000000d9668 + 0x16) = CONCAT44(xStack_78,xStack_7c);
        *(uint8 *)(pxRam00000000000d9668 + 0x14) = CONCAT44(xStack_80,xStack_84);
        *(uint8 *)(pxRam00000000000d9668 + 0xe) = CONCAT44(xStack_98,xStack_9c);
        *(uint8 *)(pxRam00000000000d9668 + 0xc) = CONCAT44(xStack_a0,xStack_a4);
      }
      else {
        iVar12 = (int8)pxRam00000000000d9668 - (int8)pxRam00000000000d9660;
        uVar3 = (iVar12 >> 2) * -0x70a3d70a3d70a3d7 + 1;
        if (0x28f5c28f5c28f5c < uVar3) goto code_r0x000658c4;
        iVar10 = (int8)pxRam00000000000d9670 - (int8)pxRam00000000000d9660;
        iVar6 = iVar10 >> 2;
        uVar9 = iVar6 * 0x1eb851eb851eb852;
        if (uVar9 <= uVar3) {
          uVar9 = uVar3;
        }
        if (0x147ae147ae147ad < (uint8)(iVar6 * -0x70a3d70a3d70a3d7)) {
          uVar9 = 0x28f5c28f5c28f5c;
        }
        if (0x28f5c28f5c28f5c < uVar9) goto code_r0x000658d8;
        iVar6 = operator_new_plt(uVar9 * 100);
        pxRam00000000000d9660 = (uint4 *)(iVar6 + iVar12);
        *(uint8 *)(pxRam00000000000d9660 + 0xe) = CONCAT44(xStack_98,xStack_9c);
        *(uint8 *)(pxRam00000000000d9660 + 0xc) = CONCAT44(xStack_a0,xStack_a4);
        *(uint8 *)(pxRam00000000000d9660 + 0x12) = CONCAT44(xStack_88,xStack_8c);
        *(uint8 *)(pxRam00000000000d9660 + 0x10) = CONCAT44(xStack_90,xStack_94);
        pxRam00000000000d9660[0x18] = uStack_74;
        pxRam00000000000d9670 = (uint4 *)(iVar6 + uVar9 * 100);
        puVar11 = pxRam00000000000d9660 + 0x19;
        *(uint8 *)(pxRam00000000000d9660 + 0x16) = CONCAT44(xStack_78,xStack_7c);
        *(uint8 *)(pxRam00000000000d9660 + 0x14) = CONCAT44(xStack_80,xStack_84);
        *(xunknown8 *)(pxRam00000000000d9660 + 2) = xStack_cc;
        *(uint8 *)pxRam00000000000d9660 = CONCAT44(xStack_d0,uStack_d4);
        *(xunknown8 *)(pxRam00000000000d9660 + 6) = xStack_bc;
        *(xunknown8 *)(pxRam00000000000d9660 + 4) = xStack_c4;
        *(uint8 *)(pxRam00000000000d9660 + 10) = CONCAT44(xStack_a8,xStack_ac);
        *(xunknown8 *)(pxRam00000000000d9660 + 8) = xStack_b4;
        puVar7 = pxRam00000000000d9660;
        if (puVar8 != puVar5) {
          do {
            xVar4 = *(xunknown8 *)(puVar8 + -0x11);
            xVar14 = *(xunknown8 *)(puVar8 + -0x13);
            xVar13 = *(xunknown8 *)(puVar8 + -0x15);
            xVar16 = *(xunknown8 *)(puVar8 + -0x17);
            xVar15 = *(xunknown8 *)(puVar8 + -0x19);
            *(xunknown8 *)(puVar7 + -0xf) = *(xunknown8 *)(puVar8 + -0xf);
            *(xunknown8 *)(puVar7 + -0x11) = xVar4;
            *(xunknown8 *)(puVar7 + -0x13) = xVar14;
            *(xunknown8 *)(puVar7 + -0x15) = xVar13;
            *(xunknown8 *)(puVar7 + -0x17) = xVar16;
            *(xunknown8 *)(puVar7 + -0x19) = xVar15;
            puVar1 = puVar8 + -1;
            xVar13 = *(xunknown8 *)(puVar8 + -3);
            xVar4 = *(xunknown8 *)(puVar8 + -5);
            xVar15 = *(xunknown8 *)(puVar8 + -0xb);
            xVar14 = *(xunknown8 *)(puVar8 + -0xd);
            xVar17 = *(xunknown8 *)(puVar8 + -7);
            xVar16 = *(xunknown8 *)(puVar8 + -9);
            puVar8 = puVar8 + -0x19;
            *(char *)(puVar7 + -1) = (char)*puVar1;
            pxRam00000000000d9660 = puVar7 + -0x19;
            *(xunknown8 *)(puVar7 + -3) = xVar13;
            *(xunknown8 *)(puVar7 + -5) = xVar4;
            *(xunknown8 *)(puVar7 + -7) = xVar17;
            *(xunknown8 *)(puVar7 + -9) = xVar16;
            *(xunknown8 *)(puVar7 + -0xb) = xVar15;
            *(xunknown8 *)(puVar7 + -0xd) = xVar14;
            puVar7 = pxRam00000000000d9660;
          } while (puVar8 != puVar5);
        }
        if (puVar5 != (uint4 *)0x0) {
          pxRam00000000000d9668 = puVar11;
          operator_delete_plt(puVar5,iVar10);
        }
      }
      pxRam00000000000d9668 = puVar11;
      (*pcRam00000000000d9690)(1,0x3f44c /* "post: composite variant %03X failed to compile - using the full compos..." */,param_1);
      puVar5 = pxRam00000000000d9660;
    }
    else {
      FUN_00065f64(&uStack_d4);
      puVar8 = pxRam00000000000d9668;
      puVar5 = pxRam00000000000d9660;
      if (pxRam00000000000d9670 <= pxRam00000000000d9668) {
        iVar12 = (int8)pxRam00000000000d9668 - (int8)pxRam00000000000d9660;
        uVar3 = (iVar12 >> 2) * -0x70a3d70a3d70a3d7 + 1;
        if (uVar3 < 0x28f5c28f5c28f5d) {
          iVar10 = (int8)pxRam00000000000d9670 - (int8)pxRam00000000000d9660;
          iVar6 = iVar10 >> 2;
          uVar9 = iVar6 * 0x1eb851eb851eb852;
          if (uVar9 <= uVar3) {
            uVar9 = uVar3;
          }
          if (0x147ae147ae147ad < (uint8)(iVar6 * -0x70a3d70a3d70a3d7)) {
            uVar9 = 0x28f5c28f5c28f5c;
          }
          if (uVar9 < 0x28f5c28f5c28f5d) {
            iVar6 = operator_new_plt(uVar9 * 100);
            pxRam00000000000d9660 = (uint4 *)(iVar6 + iVar12);
            *(uint8 *)(pxRam00000000000d9660 + 0xe) = CONCAT44(xStack_98,xStack_9c);
            *(uint8 *)(pxRam00000000000d9660 + 0xc) = CONCAT44(xStack_a0,xStack_a4);
            *(uint8 *)(pxRam00000000000d9660 + 0x12) = CONCAT44(xStack_88,xStack_8c);
            *(uint8 *)(pxRam00000000000d9660 + 0x10) = CONCAT44(xStack_90,xStack_94);
            pxRam00000000000d9660[0x18] = uStack_74;
            pxRam00000000000d9670 = (uint4 *)(iVar6 + uVar9 * 100);
            puVar11 = pxRam00000000000d9660 + 0x19;
            *(uint8 *)(pxRam00000000000d9660 + 0x16) = CONCAT44(xStack_78,xStack_7c);
            *(uint8 *)(pxRam00000000000d9660 + 0x14) = CONCAT44(xStack_80,xStack_84);
            *(xunknown8 *)(pxRam00000000000d9660 + 2) = xStack_cc;
            *(uint8 *)pxRam00000000000d9660 = CONCAT44(xStack_d0,uStack_d4);
            *(xunknown8 *)(pxRam00000000000d9660 + 6) = xStack_bc;
            *(xunknown8 *)(pxRam00000000000d9660 + 4) = xStack_c4;
            *(uint8 *)(pxRam00000000000d9660 + 10) = CONCAT44(xStack_a8,xStack_ac);
            *(xunknown8 *)(pxRam00000000000d9660 + 8) = xStack_b4;
            puVar7 = pxRam00000000000d9660;
            if (puVar8 != puVar5) {
              do {
                xVar4 = *(xunknown8 *)(puVar8 + -0x11);
                xVar14 = *(xunknown8 *)(puVar8 + -0x13);
                xVar13 = *(xunknown8 *)(puVar8 + -0x15);
                xVar16 = *(xunknown8 *)(puVar8 + -0x17);
                xVar15 = *(xunknown8 *)(puVar8 + -0x19);
                *(xunknown8 *)(puVar7 + -0xf) = *(xunknown8 *)(puVar8 + -0xf);
                *(xunknown8 *)(puVar7 + -0x11) = xVar4;
                *(xunknown8 *)(puVar7 + -0x13) = xVar14;
                *(xunknown8 *)(puVar7 + -0x15) = xVar13;
                *(xunknown8 *)(puVar7 + -0x17) = xVar16;
                *(xunknown8 *)(puVar7 + -0x19) = xVar15;
                puVar1 = puVar8 + -1;
                xVar13 = *(xunknown8 *)(puVar8 + -3);
                xVar4 = *(xunknown8 *)(puVar8 + -5);
                xVar15 = *(xunknown8 *)(puVar8 + -0xb);
                xVar14 = *(xunknown8 *)(puVar8 + -0xd);
                xVar17 = *(xunknown8 *)(puVar8 + -7);
                xVar16 = *(xunknown8 *)(puVar8 + -9);
                puVar8 = puVar8 + -0x19;
                *(char *)(puVar7 + -1) = (char)*puVar1;
                pxRam00000000000d9660 = puVar7 + -0x19;
                *(xunknown8 *)(puVar7 + -3) = xVar13;
                *(xunknown8 *)(puVar7 + -5) = xVar4;
                *(xunknown8 *)(puVar7 + -7) = xVar17;
                *(xunknown8 *)(puVar7 + -9) = xVar16;
                *(xunknown8 *)(puVar7 + -0xb) = xVar15;
                *(xunknown8 *)(puVar7 + -0xd) = xVar14;
                puVar7 = pxRam00000000000d9660;
              } while (puVar8 != puVar5);
            }
            if (puVar5 != (uint4 *)0x0) {
              pxRam00000000000d9668 = puVar11;
              operator_delete_plt(puVar5,iVar10);
            }
            goto code_r0x000657bc;
          }
        }
        else {
code_r0x000658c4:
          if (*(int8 *)(iVar2 + 0x28) != iStack_70) goto code_r0x00065920;
          FUN_0006630c();
        }
code_r0x000658d8:
        if (*(int8 *)(iVar2 + 0x28) == iStack_70) {
          xVar4 = FUN_0005ec14();
          if ((uStack_110 & 1) != 0) {
            operator_delete_plt(xStack_100,CONCAT71(Stack_10f,uStack_110) & 0xfffffffffffffffe);
          }
          if (*(int8 *)(iVar2 + 0x28) == iStack_70) {
            FUN_000c5688(xVar4);
          }
        }
        goto code_r0x00065920;
      }
      puVar11 = pxRam00000000000d9668 + 0x19;
      *(xunknown8 *)(pxRam00000000000d9668 + 6) = xStack_bc;
      *(xunknown8 *)(pxRam00000000000d9668 + 4) = xStack_c4;
      *(uint8 *)(pxRam00000000000d9668 + 10) = CONCAT44(xStack_a8,xStack_ac);
      *(xunknown8 *)(pxRam00000000000d9668 + 8) = xStack_b4;
      *(xunknown8 *)(pxRam00000000000d9668 + 2) = xStack_cc;
      *(uint8 *)pxRam00000000000d9668 = CONCAT44(xStack_d0,uStack_d4);
      pxRam00000000000d9668[0x18] = uStack_74;
      *(uint8 *)(pxRam00000000000d9668 + 0x12) = CONCAT44(xStack_88,xStack_8c);
      *(uint8 *)(pxRam00000000000d9668 + 0x10) = CONCAT44(xStack_90,xStack_94);
      *(uint8 *)(pxRam00000000000d9668 + 0x16) = CONCAT44(xStack_78,xStack_7c);
      *(uint8 *)(pxRam00000000000d9668 + 0x14) = CONCAT44(xStack_80,xStack_84);
      *(uint8 *)(pxRam00000000000d9668 + 0xe) = CONCAT44(xStack_98,xStack_9c);
      *(uint8 *)(pxRam00000000000d9668 + 0xc) = CONCAT44(xStack_a0,xStack_a4);
code_r0x000657bc:
      uVar3 = ((int8)puVar11 - (int8)pxRam00000000000d9660 >> 2) * -0x70a3d70a3d70a3d7;
      pxRam00000000000d9668 = puVar11;
      if (uVar3 < 0x11) {
        (*pcRam00000000000d9690)
                  (0,0x3524a /* "post: composite variant %03X compiled (%zu so far): shadows %d AO %d l..." */,param_1,uVar3 - 1,param_1 & 1,param_1 >> 1 & 1,param_1 >> 2 & 1,
                   param_1 >> 3 & 1,param_1 >> 4 & 1,param_1 >> 5 & 1,param_1 >> 6 & 1,
                   param_1 >> 7 & 1,param_1 >> 8 & 1,param_1 >> 9 & 1,param_1 >> 10 & 1);
      }
      puVar5 = pxRam00000000000d9668 + -0x19;
    }
  }
code_r0x00065890:
  if (*(int8 *)(iVar2 + 0x28) == iStack_70) {
    return puVar5;
  }
code_r0x00065920:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (uint4 *)(*got___stack_chk_fail)();
  return puVar5;
}

/* 0x65924  size=576 */
bool FUN_00065924(int4 *param_1,uint1 *param_2,xunknown8 param_3)

{
  xunknown8 *pxVar1;
  xunknown4 xVar2;
  xunknown4 xVar3;
  int4 iVar4;
  int4 iVar5;
  int4 iVar6;
  uint1 *puVar7;
  code *pcVar8;
  
  xVar2 = gl__Compile_plt(0x8b31,0x30edb /* "#version 300 es\nout vec2 vUV;\nvoid main(){ vec2 p = vec2(float((gl_V..." */,param_3,pcRam00000000000d9690);
  puVar7 = *(uint1 **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    puVar7 = param_2 + 1;
  }
  xVar3 = gl__Compile_plt(0x8b30,puVar7,param_3,pcRam00000000000d9690);
  iVar4 = gl__Link_plt(xVar2,xVar3,param_3,pcRam00000000000d9690);
  *param_1 = iVar4;
  pxVar1 = pxRam00000000000d3408;
  if (iVar4 != 0) {
    iVar5 = (*(code *)*pxRam00000000000d3408)(iVar4,0x40be1 /* "uTex" */);
    pcVar8 = (code *)*pxVar1;
    param_1[1] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x39887 /* "uTex2" */);
    pcVar8 = (code *)*pxVar1;
    param_1[2] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x2a153 /* "uTexel" */);
    pcVar8 = (code *)*pxVar1;
    param_1[3] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x2d530);
    pcVar8 = (code *)*pxVar1;
    param_1[4] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x2baf5);
    pcVar8 = (code *)*pxVar1;
    param_1[5] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x29201);
    pcVar8 = (code *)*pxVar1;
    param_1[6] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x266b1 /* "uLod" */);
    pcVar8 = (code *)*pxVar1;
    param_1[7] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x3988d);
    pcVar8 = (code *)*pxVar1;
    param_1[8] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x27e16 /* "uSharp" */);
    pcVar8 = (code *)*pxVar1;
    param_1[9] = iVar5;
    iVar5 = (*pcVar8)(*param_1,0x25d3d /* "uTex3" */);
    iVar6 = (*(code *)*pxVar1)(*param_1,0x22468 /* "uLut" */);
    (*(code *)*pxRam00000000000d33d8)(*param_1);
    pxVar1 = pxRam00000000000d3410;
    if (-1 < param_1[1]) {
      (*(code *)*pxRam00000000000d3410)(param_1[1],0);
    }
    if (-1 < param_1[2]) {
      (*(code *)*pxVar1)(param_1[2],1);
    }
    if (-1 < iVar5) {
      (*(code *)*pxVar1)(iVar5,2);
    }
    if (-1 < iVar6) {
      (*(code *)*pxVar1)(iVar6,3);
    }
  }
  return iVar4 != 0;
}

/* 0x65b64  size=1024 */
void FUN_00065b64(int8 *param_1,uint4 param_2)

{
  uint8 uVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  xunknown8 xVar9;
  int8 iVar10;
  uint8 uVar11;
  bool bVar12;
  int8 iVar13;
  uint8 *puVar14;
  uint8 uStack_320;
  xunknown8 xStack_318;
  int8 iStack_310;
  xunknown8 xStack_300;
  uint8 uStack_2f8;
  uint8 uStack_2f0;
  xunknown8 xStack_2e0;
  uint8 uStack_2d8;
  int8 iStack_2d0;
  xunknown1 axStack_2c0 [600];
  int8 iStack_68;
  
  iVar10 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar10 + 0x28);
  uVar1 = 0x86;
  if (uRam00000000000d98a8 == '\0') {
    uVar1 = 0x69;
  }
  xVar2 = 0x266b6 /* "#version 300 es\n#extension GL_EXT_shader_framebuffer_fetch : require\..." */;
  if (uRam00000000000d98a8 == '\0') {
    xVar2 = 0x2dbca /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nin hi..." */;
  }
  iVar13 = operator_new_plt((uVar1 | 0xf) + 1);
  param_1[1] = uVar1;
  param_1[2] = iVar13;
  *param_1 = (uVar1 | 0xf) + 2;
  memcpy(iVar13,xVar2,uVar1);
  xVar2 = 0x2246d /* "false" */;
  if ((param_2 & 8) != 0) {
    xVar2 = 0x2d534 /* "true" */;
  }
  *(xunknown1 *)(iVar13 + uVar1) = 0;
  xVar3 = 0x2246d /* "false" */;
  if ((param_2 & 0x10) != 0) {
    xVar3 = 0x2d534 /* "true" */;
  }
  xVar4 = 0x2246d /* "false" */;
  if ((param_2 & 0x40) != 0) {
    xVar4 = 0x2d534 /* "true" */;
  }
  xVar5 = 0x2246d /* "false" */;
  if ((param_2 & 0x80) != 0) {
    xVar5 = 0x2d534 /* "true" */;
  }
  xVar6 = 0x2246d /* "false" */;
  if ((param_2 & 0x100) != 0) {
    xVar6 = 0x2d534 /* "true" */;
  }
  xVar7 = 0x2246d /* "false" */;
  if ((param_2 & 0x200) != 0) {
    xVar7 = 0x2d534 /* "true" */;
  }
  xVar8 = 0x2246d /* "false" */;
  if ((param_2 & 0x400) != 0) {
    xVar8 = 0x2d534 /* "true" */;
  }
  xVar9 = 0x2246d /* "false" */;
  if ((param_2 & 0x23) != 0) {
    xVar9 = 0x2d534 /* "true" */;
  }
  FUN_00066170(axStack_2c0,600,600,0x34c4f /* "const bool kGlow = %s; const bool kAE = %s; const bool kLut = %s; cons..." */,xVar2,xVar3,xVar4,xVar5,xVar6,xVar7,xVar8,xVar9);
  std____ndk1__basic_string__append_plt_1(param_1,axStack_2c0);
  if ((uRam00000000000d9648 & 1) == 0) {
    uVar1 = (uint8)(uRam00000000000d9648 >> 1);
    xVar2 = 0xd9649;
  }
  else {
    uVar1 = uRam00000000000d9650;
    xVar2 = xRam00000000000d9658;
  }
  std____ndk1__basic_string__append_plt(param_1,xVar2,uVar1);
  std____ndk1__basic_string__append_plt_1(param_1,0x39891 /* "uniform vec4 uP3;      // x LUT strength, y LUT size, z grain, w time\..." */);
  iVar13 = operator_new_plt(0x2150);
  uStack_2d8 = uRam0000000000021f48;
  xStack_2e0 = uRam0000000000021f40;
  iStack_2d0 = iVar13;
  memcpy(iVar13,0x3d2ec /* "uniform sampler2D uTex2;   // bloom (half res)\nuniform sampler2D uTex..." */,0x214b);
  *(xunknown1 *)(iVar13 + 0x214b) = 0;
  if ((param_2 & 1) == 0) {
    FUN_00066214(&xStack_2e0,0x35849 /* "uniform float uShadowK;" */,0x29205 /* "const float uShadowK = 0.0;" */);
  }
  bVar12 = (param_2 & 2) != 0;
  xVar2 = 0x39156 /* "uniform float uLightK; const float uAOK = 0.0; const float uAODbg = 0...." */;
  if (bVar12) {
    xVar2 = 0x29221 /* "uniform float uLightK; uniform float uAOK; const float uAODbg = 0.0;" */;
  }
  xVar3 = 0x2a6eb /* "const float uLightK = 0.0; const float uAOK = 0.0; const float uAODbg ..." */;
  if (bVar12) {
    xVar3 = 0x27e1d /* "const float uLightK = 0.0; uniform float uAOK; const float uAODbg = 0...." */;
  }
  if ((param_2 & 4) != 0) {
    xVar3 = xVar2;
  }
  FUN_00066214(&xStack_2e0,0x351cd /* "uniform float uLightK; uniform float uAOK; uniform float uAODbg;" */,xVar3);
  if ((param_2 >> 5 & 1) == 0) {
    FUN_00066214(&xStack_2e0,0x27e66 /* "uniform highp vec4 uFogB;" */,0x38435 /* "const highp vec4 uFogB = vec4(0.0);" */);
  }
  if ((xStack_2e0 & 1) == 0) {
    uVar1 = xStack_2e0 >> 1 & 0x7f;
    iVar13 = (int8)&xStack_2e0 + 1;
  }
  else {
    uVar1 = uStack_2d8;
    iVar13 = iStack_2d0;
  }
  std____ndk1__basic_string__append_plt(param_1,iVar13,uVar1);
  if (uRam00000000000d98a8 == '\x01') {
    std____ndk1__basic_string__append_plt_1(param_1,0x2673d /* "layout(location = 0) inout highp vec4 oColor;\nvoid main(){ if (uAODbg..." */);
  }
  else {
    iVar13 = operator_new_plt(0x750);
    xStack_318 = xRam0000000000021f78;
    uStack_320 = uRam0000000000021f70;
    iStack_310 = iVar13;
    memcpy(iVar13,0x23fe9 /* "uniform float uSharp; uniform float uAA;\nfloat Lu(vec3 c){ return dot..." */,0x74a);
    *(xunknown1 *)(iVar13 + 0x74a) = 0;
    puVar14 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_320,0x2a738 /* "out vec4 oColor;\nvoid main(){ if (uAODbg > 0.5) { oColor = vec4(AODeb..." */);
    uStack_2f0 = puVar14[2];
    uStack_2f8 = puVar14[1];
    xStack_300 = *puVar14;
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    if ((xStack_300 & 1) == 0) {
      uVar1 = xStack_300 >> 1 & 0x7f;
      uVar11 = (int8)&xStack_300 + 1;
    }
    else {
      uVar1 = uStack_2f8;
      uVar11 = uStack_2f0;
    }
    std____ndk1__basic_string__append_plt(param_1,uVar11,uVar1);
    if ((xStack_300 & 1) != 0) {
      operator_delete_plt(uStack_2f0,xStack_300 & 0xfffffffffffffffe);
    }
    if ((uStack_320 & 1) != 0) {
      operator_delete_plt(iStack_310,uStack_320 & 0xfffffffffffffffe);
    }
  }
  if ((xStack_2e0 & 1) != 0) {
    operator_delete_plt(iStack_2d0,xStack_2e0 & 0xfffffffffffffffe);
  }
  if (*(int8 *)(iVar10 + 0x28) == iStack_68) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x65f64  size=524 */
void FUN_00065f64(int8 param_1)

{
  xunknown4 xVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  xunknown4 xVar4;
  xunknown8 xVar5;
  code *pcVar6;
  
  pxVar2 = pxRam00000000000d3408;
  xVar1 = *(xunknown4 *)(param_1 + 4);
  xVar4 = (*(code *)*pxRam00000000000d3408)(xVar1,0x4052e);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x2c) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x29266 /* "uLightK" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x30) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x2ccb0 /* "uAOK" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x34) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x3f438 /* "uShadowK" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x38) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x2b4af /* "uFogIVP" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x3c) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x38592 /* "uFogA" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x40) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x2bb0d /* "uFogB" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x44) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x2ccb5 /* "uFogCol" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x48) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x37220 /* "uHdrS" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x4c) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x3f441 /* "uAmb" */);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x50) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x232ed);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x54) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x39b6c);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x58) = xVar4;
  xVar4 = (*pcVar6)(xVar1,0x2997f);
  pcVar6 = (code *)*pxVar2;
  *(xunknown4 *)(param_1 + 0x5c) = xVar4;
  xVar5 = (*pcVar6)(xVar1,0x3520e /* "uTex4" */);
  pxVar3 = pxRam00000000000d3410;
  if (-1 < (int4)xVar5) {
    (*(code *)*pxRam00000000000d3410)(xVar5,4);
  }
  xVar5 = (*(code *)*pxVar2)(xVar1,0x2d539 /* "uTex5" */);
  if (-1 < (int4)xVar5) {
    (*(code *)*pxVar3)(xVar5,5);
  }
  xVar5 = (*(code *)*pxVar2)(xVar1,0x3a2b1 /* "uTex6" */);
  if (-1 < (int4)xVar5) {
    (*(code *)*pxVar3)(xVar5,6);
  }
  xVar5 = (*(code *)*pxVar2)(xVar1,0x3f446 /* "uTex7" */);
  if ((int4)xVar5 < 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0006615c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxVar3)(xVar5,7);
  return;
}

/* 0x66170  size=164 */
void FUN_00066170(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x66214  size=248 */
void FUN_00066214(uint1 *param_1,xunknown1 *param_2,xunknown8 param_3)

{
  uint1 *puVar1;
  uint1 *puVar2;
  xunknown1 xVar3;
  int4 iVar4;
  int8 iVar5;
  uint1 *puVar6;
  xunknown8 xVar7;
  int8 iVar8;
  uint8 uVar9;
  
  uVar9 = *(uint8 *)(param_1 + 8);
  puVar2 = *(uint1 **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    puVar2 = param_1 + 1;
    uVar9 = (uint8)(*param_1 >> 1);
  }
  iVar5 = strlen(param_2);
  iVar8 = 0;
  if (iVar5 == 0) {
code_r0x000662c4:
    xVar7 = strlen(param_2);
                    /* WARNING: Could not recover jumptable at 0x000c9d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000000d3e08)(param_1,iVar8,xVar7,param_3);
    return;
  }
  if (iVar5 <= (int8)uVar9) {
    xVar3 = *param_2;
    puVar1 = puVar2 + uVar9;
    puVar6 = puVar2;
    while (puVar6 = (uint1 *)memchr(puVar6,xVar3,(uVar9 - iVar5) + 1), puVar6 != (uint1 *)0x0) {
      iVar4 = memcmp(puVar6,param_2,iVar5);
      if (iVar4 == 0) {
        if (puVar6 == puVar1) {
          return;
        }
        iVar8 = (int8)puVar6 - (int8)puVar2;
        if (iVar8 == -1) {
          return;
        }
        goto code_r0x000662c4;
      }
      puVar6 = puVar6 + 1;
      uVar9 = (int8)puVar1 - (int8)puVar6;
      if ((int8)uVar9 < iVar5) {
        return;
      }
    }
  }
  return;
}

/* 0x6630c  size=20 */
bool FUN_0006630c(xunknown8 param_1,xunknown8 param_2,uint8 param_3,uint8 param_4,uint8 param_5)

{
  xunknown8 *pxVar1;
  int4 iVar2;
  int4 *piVar3;
  xunknown4 xVar4;
  int4 *piVar5;
  xunknown1 axVar6 [16];
  
  axVar6 = FUN_0005eb94(0x371ec /* "vector" */);
  piVar3 = axVar6._0_8_;
  piVar5 = piVar3 + 1;
  if (*piVar5 != 0) {
    (*(code *)*pxRam00000000000d3250)(1,piVar5);
  }
  if (*piVar3 != 0) {
    (*(code *)*pxRam00000000000d3308)(1,piVar3);
  }
  pxVar1 = pxRam00000000000d32f8;
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  (*(code *)*pxVar1)(1,piVar3);
  (*(code *)*pxRam00000000000d3300)(0xde1,*piVar3);
  (*(code *)*pxRam00000000000d3318)
            (0xde1,param_5 & 0xffffffff,param_4 & 0xffffffff,axVar6._8_8_ & 0xffffffff,
             param_3 & 0xffffffff);
  pxVar1 = pxRam00000000000d3338;
  xVar4 = 0x2700;
  if ((uint4)param_5 < 2) {
    xVar4 = 0x2601;
  }
  (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,xVar4);
  (*(code *)*pxVar1)(0xde1,0x2800,0x2601);
  (*(code *)*pxVar1)(0xde1,0x2802,0x812f);
  (*(code *)*pxVar1)(0xde1,0x2803,0x812f);
  (*(code *)*pxRam00000000000d3240)(1,piVar5);
  (*(code *)*pxRam00000000000d3248)(0x8ca9,piVar3[1]);
  (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,*piVar3,0);
  pxVar1 = pxRam00000000000d3260;
  piVar3[2] = axVar6._8_4_;
  piVar3[3] = (int4)param_3;
  iVar2 = (*(code *)*pxVar1)(0x8ca9);
  return iVar2 == 0x8cd5;
}

/* 0x66320  size=436 */
bool FUN_00066320(int4 *param_1,int4 param_2,int4 param_3,xunknown4 param_4,uint4 param_5)

{
  xunknown8 *pxVar1;
  int4 iVar2;
  xunknown4 xVar3;
  int4 *piVar4;
  
  piVar4 = param_1 + 1;
  if (*piVar4 != 0) {
    (*(code *)*pxRam00000000000d3250)(1,piVar4);
  }
  if (*param_1 != 0) {
    (*(code *)*pxRam00000000000d3308)(1,param_1);
  }
  pxVar1 = pxRam00000000000d32f8;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  (*(code *)*pxVar1)(1,param_1);
  (*(code *)*pxRam00000000000d3300)(0xde1,*param_1);
  (*(code *)*pxRam00000000000d3318)(0xde1,param_5,param_4,param_2,param_3);
  pxVar1 = pxRam00000000000d3338;
  xVar3 = 0x2700;
  if (param_5 < 2) {
    xVar3 = 0x2601;
  }
  (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,xVar3);
  (*(code *)*pxVar1)(0xde1,0x2800,0x2601);
  (*(code *)*pxVar1)(0xde1,0x2802,0x812f);
  (*(code *)*pxVar1)(0xde1,0x2803,0x812f);
  (*(code *)*pxRam00000000000d3240)(1,piVar4);
  (*(code *)*pxRam00000000000d3248)(0x8ca9,param_1[1]);
  (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,*param_1,0);
  pxVar1 = pxRam00000000000d3260;
  param_1[2] = param_2;
  param_1[3] = param_3;
  iVar2 = (*(code *)*pxVar1)(0x8ca9);
  return iVar2 == 0x8cd5;
}

/* 0x664d4  size=20 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

xunknown1 *
FUN_000664d4(xunknown8 param_1,xunknown8 param_2,int8 param_3,xunknown1 *param_4,uint8 param_5)

{
  xunknown8 *pxVar1;
  uint8 *puVar2;
  int8 iVar3;
  xunknown1 *pxVar4;
  uint8 uVar5;
  xunknown1 *pxVar6;
  uint8 uVar7;
  xunknown1 *pxVar8;
  xunknown1 *pxVar9;
  xunknown8 *pxVar10;
  xunknown1 *pxVar11;
  xunknown8 *pxVar12;
  xunknown1 *pxVar13;
  xunknown1 *pxVar14;
  xunknown1 *pxVar15;
  xunknown1 *pxVar16;
  xunknown1 *pxVar17;
  uint8 uVar18;
  xunknown8 xVar19;
  xunknown8 xVar20;
  xunknown8 xVar21;
  xunknown1 axVar22 [16];
  
  axVar22 = FUN_0005eb94(0x3919f /* "basic_string" */);
  pxVar4 = axVar22._8_8_;
  puVar2 = axVar22._0_8_;
  if ((int8)param_5 < 1) {
    return pxVar4;
  }
  pxVar6 = (xunknown1 *)puVar2[1];
  if ((int8)param_5 <= (int8)(puVar2[2] - (int8)pxVar6)) {
    iVar3 = (int8)pxVar6 - (int8)pxVar4;
    pxVar8 = pxVar6;
    if (iVar3 < (int8)param_5) {
      pxVar16 = (xunknown1 *)(param_3 + iVar3);
      if (pxVar16 != param_4) {
        pxVar17 = param_4 + (int8)pxVar4 + (-(int8)pxVar6 - param_3);
        pxVar9 = pxVar6;
        if (pxVar17 < (xunknown1 *)0x20) {
          pxVar14 = pxVar16;
        }
        else {
          pxVar14 = pxVar16;
          if (0x1f < (uint8)((int8)pxVar4 - param_3)) {
            pxVar12 = (xunknown8 *)(pxVar6 + 0x10);
            pxVar13 = (xunknown1 *)((uint8)pxVar17 & 0xffffffffffffffe0);
            pxVar8 = pxVar6 + (int8)pxVar13;
            pxVar10 = (xunknown8 *)((int8)pxVar12 + (param_3 - (int8)pxVar4));
            pxVar9 = pxVar13;
            do {
              pxVar1 = pxVar10 + -1;
              xVar19 = pxVar10[-2];
              xVar21 = pxVar10[1];
              xVar20 = *pxVar10;
              pxVar9 = pxVar9 + -0x20;
              pxVar10 = pxVar10 + 4;
              pxVar12[-1] = *pxVar1;
              pxVar12[-2] = xVar19;
              pxVar12[1] = xVar21;
              *pxVar12 = xVar20;
              pxVar12 = pxVar12 + 4;
            } while (pxVar9 != (xunknown1 *)0x0);
            pxVar9 = pxVar8;
            pxVar14 = pxVar16 + (int8)pxVar13;
            if (pxVar17 == pxVar13) goto code_r0x0006670c;
          }
        }
        do {
          pxVar17 = pxVar14 + 1;
          *pxVar9 = *pxVar14;
          pxVar8 = pxVar9 + 1;
          pxVar9 = pxVar9 + 1;
          pxVar14 = pxVar17;
        } while (pxVar17 != param_4);
      }
code_r0x0006670c:
      puVar2[1] = (uint8)pxVar8;
      if (iVar3 < 1) {
        return pxVar4;
      }
    }
    else {
      pxVar16 = (xunknown1 *)(param_3 + param_5);
    }
    pxVar17 = pxVar8 + -param_5;
    pxVar9 = pxVar8;
    if (pxVar17 < pxVar6) {
      pxVar14 = pxVar6 + (param_5 - (int8)pxVar8);
      if (pxVar14 < (xunknown1 *)0x20) {
        pxVar11 = pxVar8;
        pxVar13 = pxVar17;
      }
      else {
        pxVar11 = pxVar8;
        pxVar13 = pxVar17;
        if (0x1f < param_5) {
          pxVar15 = (xunknown1 *)((uint8)pxVar14 & 0xffffffffffffffe0);
          pxVar12 = (xunknown8 *)(pxVar8 + 0x10);
          pxVar13 = pxVar17 + (int8)pxVar15;
          pxVar9 = pxVar8 + (int8)pxVar15;
          pxVar10 = (xunknown8 *)(pxVar17 + 0x10);
          pxVar17 = pxVar15;
          do {
            pxVar1 = pxVar10 + -1;
            xVar19 = pxVar10[-2];
            xVar21 = pxVar10[1];
            xVar20 = *pxVar10;
            pxVar17 = pxVar17 + -0x20;
            pxVar10 = pxVar10 + 4;
            pxVar12[-1] = *pxVar1;
            pxVar12[-2] = xVar19;
            pxVar12[1] = xVar21;
            *pxVar12 = xVar20;
            pxVar12 = pxVar12 + 4;
          } while (pxVar17 != (xunknown1 *)0x0);
          pxVar11 = pxVar9;
          if (pxVar14 == pxVar15) goto code_r0x000667a4;
        }
      }
      do {
        pxVar17 = pxVar13 + 1;
        pxVar9 = pxVar11 + 1;
        *pxVar11 = *pxVar13;
        pxVar11 = pxVar9;
        pxVar13 = pxVar17;
      } while (pxVar17 != pxVar6);
    }
code_r0x000667a4:
    puVar2[1] = (uint8)pxVar9;
    if (pxVar8 != pxVar4 + param_5) {
      iVar3 = (int8)pxVar8 - (int8)(pxVar4 + param_5);
      memmove((int8)pxVar8 - iVar3,pxVar4,iVar3);
    }
    if ((int8)pxVar16 - param_3 == 0) {
      return pxVar4;
    }
    memmove(pxVar4,param_3,(int8)pxVar16 - param_3);
    return pxVar4;
  }
  pxVar16 = (xunknown1 *)*puVar2;
  pxVar8 = pxVar6 + (param_5 - (int8)pxVar16);
  if ((int8)pxVar8 < 0) {
    FUN_0005eb80(puVar2);
    _uRam00000000000d9648 = 0;
    uRam00000000000d9650 = 0;
    xRam00000000000d9658 = 0;
    __cxa_atexit(xRam00000000000d3618,&uRam00000000000d9648,0xcee00);
    pxRam00000000000d9668 = 0;
    pxRam00000000000d9670 = 0;
    pxRam00000000000d9660 = 0;
    __cxa_atexit(FUN_0005c9b4,&pxRam00000000000d9660,0xcee00);
    iRam00000000000d9678 = 0;
    xRam00000000000d9680 = 0;
    iRam00000000000d9688 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pxVar4 = (xunknown1 *)(*got___cxa_atexit)(FUN_0005c9d4,&iRam00000000000d9678,0xcee00);
    return pxVar4;
  }
  uVar5 = puVar2[2] - (int8)pxVar16;
  uVar18 = (int8)pxVar4 - (int8)pxVar16;
  pxVar9 = (xunknown1 *)(uVar5 * 2);
  if (pxVar9 <= pxVar8) {
    pxVar9 = pxVar8;
  }
  if (0x3ffffffffffffffe < uVar5) {
    pxVar9 = (xunknown1 *)0x7fffffffffffffff;
  }
  if (pxVar9 == (xunknown1 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = operator_new_plt(pxVar9);
  }
  pxVar8 = (xunknown1 *)(iVar3 + uVar18);
  memcpy(pxVar8,param_3,param_5);
  pxVar17 = pxVar8;
  if (pxVar4 == pxVar16) goto code_r0x000666a0;
  pxVar6 = pxVar4;
  if ((uVar18 < 0x20) || ((uint8)((int8)pxVar16 - iVar3) < 0x20)) {
code_r0x00066684:
    do {
      pxVar6 = pxVar6 + -1;
      pxVar17 = pxVar17 + -1;
      *pxVar17 = *pxVar6;
    } while (pxVar6 != pxVar16);
  }
  else {
    pxVar10 = (xunknown8 *)(pxVar4 + -0x10);
    uVar7 = uVar18 & 0xffffffffffffffe0;
    pxVar6 = pxVar4 + -uVar7;
    pxVar17 = pxVar8 + -uVar7;
    pxVar12 = (xunknown8 *)((int8)pxVar10 + (iVar3 - (int8)pxVar16));
    uVar5 = uVar7;
    do {
      pxVar1 = pxVar10 + -1;
      xVar21 = pxVar10[-2];
      xVar20 = pxVar10[1];
      xVar19 = *pxVar10;
      uVar5 = uVar5 - 0x20;
      pxVar10 = pxVar10 + -4;
      pxVar12[-1] = *pxVar1;
      pxVar12[-2] = xVar21;
      pxVar12[1] = xVar20;
      *pxVar12 = xVar19;
      pxVar12 = pxVar12 + -4;
    } while (uVar5 != 0);
    if (uVar18 != uVar7) goto code_r0x00066684;
  }
  pxVar6 = (xunknown1 *)puVar2[1];
code_r0x000666a0:
  if (pxVar6 != pxVar4) {
    memmove(pxVar8 + param_5,pxVar4,(int8)pxVar6 - (int8)pxVar4);
  }
  uVar5 = *puVar2;
  *puVar2 = (uint8)pxVar17;
  puVar2[1] = (uint8)(pxVar8 + param_5 + ((int8)pxVar6 - (int8)pxVar4));
  uVar18 = puVar2[2];
  puVar2[2] = (uint8)(pxVar9 + iVar3);
  if (uVar5 != 0) {
    operator_delete_plt(uVar5,uVar18 - uVar5);
  }
  return pxVar8;
}

/* 0x6680c  size=124 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006680c(void)

{
  _uRam00000000000d9648 = 0;
  uRam00000000000d9650 = 0;
  xRam00000000000d9658 = 0;
  __cxa_atexit(xRam00000000000d3618,&uRam00000000000d9648,0xcee00);
  pxRam00000000000d9668 = 0;
  pxRam00000000000d9670 = 0;
  pxRam00000000000d9660 = 0;
  __cxa_atexit(FUN_0005c9b4,&pxRam00000000000d9660,0xcee00);
  iRam00000000000d9678 = 0;
  xRam00000000000d9680 = 0;
  iRam00000000000d9688 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0005c9d4,&iRam00000000000d9678,0xcee00);
  return;
}

/* 0x67c30  size=1364 */
xunknown4 FUN_00067c30(void)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  xunknown4 xVar3;
  xunknown4 xVar4;
  xunknown8 xVar5;
  
  uRam00000000000d9a64 = 1;
  xVar3 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x32e57,pcRam00000000000d9a50);
  xVar4 = gl__Compile_plt(0x8b30,0x32e5a /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x32e57,pcRam00000000000d9a50);
  xRam00000000000d9ac8 = gl__Link_plt(xVar3,xVar4,0x32e57,pcRam00000000000d9a50);
  xVar3 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x39b7f /* "ao-z" */,pcRam00000000000d9a50);
  xVar4 = gl__Compile_plt(0x8b30,0x3fc69 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x39b7f /* "ao-z" */,pcRam00000000000d9a50);
  xRam00000000000d9a9c = gl__Link_plt(xVar3,xVar4,0x39b7f /* "ao-z" */,pcRam00000000000d9a50);
  xVar3 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x29277 /* "ao-zmip" */,pcRam00000000000d9a50);
  xVar4 = gl__Compile_plt(0x8b30,0x26122 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x29277 /* "ao-zmip" */,pcRam00000000000d9a50);
  xRam00000000000d9aa0 = gl__Link_plt(xVar3,xVar4,0x29277 /* "ao-zmip" */,pcRam00000000000d9a50);
  pxVar1 = pxRam00000000000d3408;
  xVar3 = 0;
  if (xRam00000000000d9aa0 != 0) {
    if ((xRam00000000000d9ac8 != 0) && (xRam00000000000d9a9c != 0)) {
      xRam00000000000d8b2c = (*(code *)*pxRam00000000000d3408)(xRam00000000000d9ac8,0x2ade6);
      xRam00000000000d8b30 = (*(code *)*pxVar1)(xRam00000000000d9ac8,0x2a132 /* "uIVP" */);
      xRam00000000000d8b34 = (*(code *)*pxVar1)(xRam00000000000d9ac8,0x2b4ac);
      xRam00000000000d8b38 = (*(code *)*pxVar1)(xRam00000000000d9ac8,0x3fc5d);
      xRam00000000000d8b1c = (*(code *)*pxVar1)(xRam00000000000d9a9c,0x2d517 /* "uDepth" */);
      xRam00000000000d8b20 = (*(code *)*pxVar1)(xRam00000000000d9a9c,0x2ade9 /* "uDiv" */);
      xRam00000000000d8b24 = (*(code *)*pxVar1)(xRam00000000000d9aa0,0x2ade6);
      xRam00000000000d8b28 = (*(code *)*pxVar1)(xRam00000000000d9aa0,0x2a15a /* "uMax" */);
      xVar3 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x3f4ce /* "ao-temporal" */,pcRam00000000000d9a50);
      xVar4 = gl__Compile_plt(0x8b30,0x35861 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x3f4ce /* "ao-temporal" */,pcRam00000000000d9a50);
      xRam00000000000d9b9c = gl__Link_plt(xVar3,xVar4,0x3f4ce /* "ao-temporal" */,pcRam00000000000d9a50);
      xVar3 = gl__Compile_plt(0x8b31,0x2d53f /* "#version 300 es\nvoid main(){ vec2 p = vec2(float((gl_VertexID << 1) &..." */,0x29983 /* "ao-blur" */,pcRam00000000000d9a50);
      xVar4 = gl__Compile_plt(0x8b30,0x3859d /* "#version 300 es\nprecision highp float;\nprecision highp int;\nuniform..." */,0x29983 /* "ao-blur" */,pcRam00000000000d9a50);
      xVar5 = gl__Link_plt(xVar3,xVar4,0x29983 /* "ao-blur" */,pcRam00000000000d9a50);
      iRam00000000000d9c30 = (int4)xVar5;
      if (iRam00000000000d9c30 != 0) {
        xRam00000000000d8b58 = (*(code *)*pxVar1)(xVar5,0x38432);
      }
      xVar3 = 0;
      if (xRam00000000000d9b9c != 0) {
        xRam00000000000d8b3c = (*(code *)*pxVar1)(xRam00000000000d9b9c,0x3fc4a /* "uCur" */);
        xRam00000000000d8b40 = (*(code *)*pxVar1)(xRam00000000000d9b9c,0x34c2e /* "uHist" */);
        xRam00000000000d8b44 = (*(code *)*pxVar1)(xRam00000000000d9b9c,0x2ade6);
        xRam00000000000d8b48 = (*(code *)*pxVar1)(xRam00000000000d9b9c,0x2a132 /* "uIVP" */);
        xRam00000000000d8b4c = (*(code *)*pxVar1)(xRam00000000000d9b9c,0x3fc4f /* "uPrev" */);
        xRam00000000000d8b50 = (*(code *)*pxVar1)(xRam00000000000d9b9c,0x38432);
        xRam00000000000d8b54 = (*(code *)*pxVar1)(xRam00000000000d9b9c,0x35843 /* "uCamD" */);
        pxVar1 = pxRam00000000000d3350;
        (*(code *)*pxRam00000000000d3350)(1,&xRam00000000000d9ba0);
        pxVar2 = pxRam00000000000d3360;
        (*(code *)*pxRam00000000000d3360)(xRam00000000000d9ba0,0x2801,0x2601);
        (*(code *)*pxVar2)(xRam00000000000d9ba0,0x2800,0x2601);
        (*(code *)*pxVar2)(xRam00000000000d9ba0,0x2802,0x812f);
        (*(code *)*pxVar2)(xRam00000000000d9ba0,0x2803,0x812f);
        (*(code *)*pxVar1)(1,&xRam00000000000d9a88);
        (*(code *)*pxVar2)(xRam00000000000d9a88,0x2801,0x2600);
        (*(code *)*pxVar2)(xRam00000000000d9a88,0x2800,0x2600);
        (*(code *)*pxVar2)(xRam00000000000d9a88,0x2802,0x812f);
        (*(code *)*pxVar2)(xRam00000000000d9a88,0x2803,0x812f);
        (*(code *)*pxVar1)(1,&xRam00000000000d9ad0);
        (*(code *)*pxVar2)(xRam00000000000d9ad0,0x2801,0x2700);
        (*(code *)*pxVar2)(xRam00000000000d9ad0,0x2800,0x2600);
        (*(code *)*pxVar2)(xRam00000000000d9ad0,0x2802,0x812f);
        (*(code *)*pxVar2)(xRam00000000000d9ad0,0x2803,0x812f);
        xVar3 = 1;
      }
    }
  }
  return xVar3;
}

/* 0x68184  size=388 */
bool FUN_00068184(int4 *param_1,xunknown4 param_2,xunknown4 param_3)

{
  xunknown8 *pxVar1;
  int4 iVar2;
  
  if (*param_1 != 0) {
    (*(code *)*pxRam00000000000d3308)(1,param_1);
    (*(code *)*pxRam00000000000d3250)(1,param_1 + 1);
  }
  (*(code *)*pxRam00000000000d32f8)(1,param_1);
  (*(code *)*pxRam00000000000d3300)(0xde1,*param_1);
  (*(code *)*pxRam00000000000d3318)(0xde1,1,0x881a,param_2,param_3);
  pxVar1 = pxRam00000000000d3338;
  (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2601);
  (*(code *)*pxVar1)(0xde1,0x2800,0x2601);
  (*(code *)*pxVar1)(0xde1,0x2802,0x812f);
  (*(code *)*pxVar1)(0xde1,0x2803,0x812f);
  (*(code *)*pxRam00000000000d3240)(1,param_1 + 1);
  (*(code *)*pxRam00000000000d3248)(0x8ca9,param_1[1]);
  (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,*param_1,0);
  iVar2 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
  return iVar2 == 0x8cd5;
}

/* 0x68308  size=1172 */
xunknown8 FUN_00068308(int4 param_1,int4 param_2)

{
  bool bVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  xunknown8 *pxVar4;
  xunknown8 *pxVar5;
  bool bVar6;
  bool bVar7;
  int4 iVar8;
  xunknown4 xVar9;
  xunknown1 xVar10;
  
  pxVar4 = pxRam00000000000d3308;
  pxVar2 = pxRam00000000000d3250;
  if (xRam00000000000d9aa4 != 0) {
    (*(code *)*pxRam00000000000d3308)(1,&xRam00000000000d9aa4);
    (*(code *)*pxVar2)(4,&xRam00000000000d9a8c);
    xRam00000000000d9aa4 = 0;
  }
  pxVar3 = pxRam00000000000d3258;
  pxVar2 = pxRam00000000000d3248;
  xVar10 = 1;
  bVar1 = true;
  while( true ) {
    xVar9 = 0x822d;
    if (bVar1) {
      xVar9 = 0x822e;
    }
    (*(code *)*pxRam00000000000d32f8)(1,&xRam00000000000d9aa4);
    (*(code *)*pxRam00000000000d3300)(0xde1,xRam00000000000d9aa4);
    (*(code *)*pxRam00000000000d3318)(0xde1,4,xVar9,param_1,param_2);
    pxVar5 = pxRam00000000000d3338;
    (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2700);
    (*(code *)*pxVar5)(0xde1,0x2800,0x2600);
    (*(code *)*pxVar5)(0xde1,0x2802,0x812f);
    (*(code *)*pxVar5)(0xde1,0x2803,0x812f);
    (*(code *)*pxRam00000000000d3240)(4,&xRam00000000000d9a8c);
    iRam00000000000d9aa8 = param_1;
    if (param_1 < 1) {
      iRam00000000000d9aa8 = 1;
    }
    iRam00000000000d9ab8 = param_2;
    if (param_2 < 1) {
      iRam00000000000d9ab8 = 1;
    }
    (*(code *)*pxVar2)(0x8ca9,xRam00000000000d9a8c);
    (*(code *)*pxVar3)(0x8ca9,0x8ce0,0xde1,xRam00000000000d9aa4,0);
    iVar8 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
    iRam00000000000d9aac = param_1 >> 1;
    if (param_1 >> 1 < 1) {
      iRam00000000000d9aac = 1;
    }
    iRam00000000000d9abc = param_2 >> 1;
    if (param_2 >> 1 < 1) {
      iRam00000000000d9abc = 1;
    }
    (*(code *)*pxVar2)(0x8ca9,xRam00000000000d9a90);
    (*(code *)*pxVar3)(0x8ca9,0x8ce0,0xde1,xRam00000000000d9aa4,1);
    if (iVar8 == 0x8cd5) {
      iVar8 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
      bVar6 = iVar8 == 0x8cd5;
    }
    else {
      bVar6 = false;
    }
    iRam00000000000d9ab0 = param_1 >> 2;
    if (param_1 >> 2 < 1) {
      iRam00000000000d9ab0 = 1;
    }
    iRam00000000000d9ac0 = param_2 >> 2;
    if (param_2 >> 2 < 1) {
      iRam00000000000d9ac0 = 1;
    }
    (*(code *)*pxVar2)(0x8ca9,xRam00000000000d9a94);
    (*(code *)*pxVar3)(0x8ca9,0x8ce0,0xde1,xRam00000000000d9aa4,2);
    bVar7 = false;
    if (bVar6) {
      iVar8 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
      bVar7 = iVar8 == 0x8cd5;
    }
    iRam00000000000d9ab4 = param_1 >> 3;
    if (param_1 >> 3 < 1) {
      iRam00000000000d9ab4 = 1;
    }
    iRam00000000000d9ac4 = param_2 >> 3;
    if (param_2 >> 3 < 1) {
      iRam00000000000d9ac4 = 1;
    }
    (*(code *)*pxVar2)(0x8ca9,xRam00000000000d9a98);
    (*(code *)*pxVar3)(0x8ca9,0x8ce0,0xde1,xRam00000000000d9aa4,3);
    if ((bVar7) && (iVar8 = (*(code *)*pxRam00000000000d3260)(0x8ca9), iVar8 == 0x8cd5)) break;
    (*(code *)*pxVar4)(1,&xRam00000000000d9aa4);
    (*(code *)*pxRam00000000000d3250)(4,&xRam00000000000d9a8c);
    xVar10 = 0;
    xRam00000000000d9aa4 = 0;
    bVar6 = !bVar1;
    bVar1 = false;
    if (bVar6) {
      xRam00000000000d9aa4 = 0;
      return 0;
    }
  }
  cRam00000000000d8b18 = xVar10;
  return 1;
}

/* 0x6879c  size=208 */
void FUN_0006879c(float8 *param_1,int8 param_2,int8 param_3)

{
  float8 *pfVar1;
  float8 *pfVar2;
  int8 iVar3;
  
  pfVar1 = (float8 *)(param_3 + 0x10);
  iVar3 = 4;
  pfVar2 = (float8 *)(param_2 + 0x10);
  do {
    iVar3 = iVar3 + -1;
    pfVar1[-2] = pfVar2[-2] * *param_1 + 0.0 + pfVar2[-1] * param_1[4] + *pfVar2 * param_1[8] +
                 pfVar2[1] * param_1[0xc];
    pfVar1[-1] = pfVar2[-2] * param_1[1] + 0.0 + pfVar2[-1] * param_1[5] + *pfVar2 * param_1[9] +
                 pfVar2[1] * param_1[0xd];
    *pfVar1 = pfVar2[-2] * param_1[2] + 0.0 + pfVar2[-1] * param_1[6] + *pfVar2 * param_1[10] +
              pfVar2[1] * param_1[0xe];
    pfVar1[1] = pfVar2[-2] * param_1[3] + 0.0 + pfVar2[-1] * param_1[7] + *pfVar2 * param_1[0xb] +
                pfVar2[1] * param_1[0xf];
    pfVar1 = pfVar1 + 4;
    pfVar2 = pfVar2 + 4;
  } while (iVar3 != 0);
  return;
}

/* 0x6886c  size=316 */
void FUN_0006886c(int4 param_1,int4 param_2)

{
  uint4 uVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  xunknown8 *pxVar4;
  float4 fVar5;
  bool bVar6;
  int4 iVar7;
  int4 iVar8;
  int4 iVar9;
  int4 iVar10;
  int4 iVar11;
  int4 iVar12;
  uint8 uVar13;
  int4 iVar14;
  int4 iVar15;
  float4 *pfVar16;
  int4 iVar17;
  float4 fVar18;
  float8 fVar19;
  float8 fVar20;
  float4 fVar21;
  float4 fVar22;
  float4 fVar23;
  float4 fVar24;
  float8 fVar25;
  int4 iStack_5c;
  int8 iStack_58;
  xunknown8 xStack_50;
  xunknown8 xStack_48;
  
  iVar10 = param_1;
  if (0x9f < param_1) {
    iVar10 = 0xa0;
  }
  iVar11 = param_2;
  if (0x4f < param_2) {
    iVar11 = 0x50;
  }
  (*(code *)*pxRam00000000000d3248)
            (0x8ca8,*(xunknown4 *)((uint8)uRam00000000000d9b98 * 8 + 0xd9a7c));
  xStack_50 = fRam00000000000d9c40;
  xStack_48 = fRam00000000000d9c48;
  (*pcRam00000000000d9a50)
            ((float8)(float4)xRam00000000000d9c58,(float8)xRam00000000000d9c68._4_4_,
             (float8)(float4)xRam00000000000d9c80,(float8)xRam00000000000d9c80._4_4_,
             (float8)(float4)xRam00000000000d9c90,fRam00000000000d9b08,fRam00000000000d9c50,
             fRam00000000000d9c38,0,0x39b84 /* "ao: camera - P0 %.3f P5 %.3f P10 %.4f P11 %.2f P14 %.4f | P x V: verti..." */);
  param_1 = param_1 - iVar10;
  iVar7 = -(param_2 >> 0x1f);
  iVar17 = param_2 / 6 + (param_2 >> 0x1f);
  FUN_00068f00(0x2dc8d /* "lower-middle" */,param_1 / 2,iVar17 + iVar7,iVar10,iVar11);
  iVar17 = iVar17 + iVar7;
  iVar2 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar2 + 0x28);
  iStack_5c = 0;
  (*(code *)*pxRam00000000000d3208)(0x88ed,&iStack_5c);
  pxVar4 = pxRam00000000000d34c8;
  pxVar3 = pxRam00000000000d3228;
  if (iStack_5c != 0) {
    (*(code *)*pxRam00000000000d34c8)(0x88eb,0);
    pxVar3 = pxRam00000000000d3228;
  }
  do {
    iVar7 = (*(code *)*pxVar3)();
  } while (iVar7 != 0);
  (*(code *)*pxRam00000000000d32d8)(param_1,iVar17,iVar10,iVar11,0x1908,0x1406,0xd9c98);
  iVar7 = (*(code *)*pxVar3)();
  if (iStack_5c != 0) {
    (*(code *)*pxVar4)(0x88eb);
  }
  if (iVar7 == 0) {
    uVar1 = iVar11 * iVar10;
    uVar13 = (uint8)uVar1;
    if ((int4)uVar1 < 1) {
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      fVar18 = 0.0;
      fVar20 = 0.0;
      fVar19 = 0.0;
      fVar22 = 1.0;
      fVar24 = 1e+09;
      iVar9 = 0;
      iVar12 = 0;
      iVar14 = 0;
      iVar7 = 0;
      iVar8 = 0;
      iVar15 = 0;
      pfVar16 = (float4 *)0xd9c9c;
      do {
        fVar21 = pfVar16[-1];
        fVar23 = *pfVar16;
        bVar6 = true;
        if ((!NAN(fVar21)) && (bVar6 = true, !NAN(fVar23))) {
          bVar6 = false;
        }
        if (bVar6) {
          iVar7 = iVar7 + 1;
        }
        else if (fVar23 <= 59000.0) {
          iVar15 = iVar15 + 1;
          fVar5 = fVar21;
          if (fVar22 <= fVar21) {
            fVar5 = fVar22;
          }
          fVar22 = fVar5;
          fVar5 = fVar23;
          if (fVar24 <= fVar23) {
            fVar5 = fVar24;
          }
          fVar24 = fVar5;
          fVar5 = fVar23;
          if (fVar23 <= fVar18) {
            fVar5 = fVar18;
          }
          fVar18 = fVar5;
          if (fVar21 < 0.9) {
            iVar14 = iVar14 + 1;
          }
          fVar20 = fVar20 + (float8)fVar21;
          fVar19 = fVar19 + (float8)fVar23;
          if (fVar21 < 0.7) {
            iVar12 = iVar12 + 1;
          }
          if (fVar21 < 0.5) {
            iVar9 = iVar9 + 1;
          }
        }
        else {
          iVar8 = iVar8 + 1;
        }
        uVar13 = uVar13 - 1;
        pfVar16 = pfVar16 + 4;
      } while (uVar13 != 0);
      if (iVar15 != 0) {
        fVar25 = (float8)iVar15;
        (*pcRam00000000000d9a50)
                  (((float8)iVar8 * 100.0) / (float8)(int4)uVar1,(float8)fVar24,fVar19 / fVar25,
                   (float8)fVar18,fVar20 / fVar25,(float8)fVar22,((float8)iVar14 * 100.0) / fVar25,
                   ((float8)iVar12 * 100.0) / fVar25,0,0x392ac /* "ao: %s block %dx%d at %d,%d - sky %.1f%%, NaN %d, distance min %.2f av..." */,0x363ce /* "right-edge" */,iVar10,iVar11,param_1,iVar17,
                   iVar7,((float8)iVar9 * 100.0) / fVar25);
        goto code_r0x000691ac;
      }
    }
    (*pcRam00000000000d9a50)(0,0x2927f /* "ao: %s block %dx%d - no geometry (sky %d, NaN %d)" */,0x363ce /* "right-edge" */,iVar10,iVar11,iVar8,iVar7);
  }
  else {
    (*pcRam00000000000d9a50)(1,0x405aa /* "ao: stats read-back failed (0x%X)" */,iVar7);
  }
code_r0x000691ac:
  if (*(int8 *)(iVar2 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x68c18  size=744 */
void FUN_00068c18(float8 *param_1,float8 *param_2)

{
  float8 *pfVar1;
  int8 iVar2;
  float8 fVar3;
  bool bVar4;
  uint8 uVar5;
  float8 *pfVar6;
  int8 iVar7;
  uint4 uVar8;
  uint8 uVar9;
  int8 iVar10;
  float8 *pfVar11;
  float8 *pfVar12;
  float8 *pfVar13;
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
  float8 afStack_130 [33];
  int8 iStack_28;
  
  fVar3 = fRam00000000000222c8;
  iVar2 = tpidr_el0;
  uVar5 = 0;
  iVar7 = -3;
  iStack_28 = *(int8 *)(iVar2 + 0x28);
  afStack_130[0] = *param_1;
  afStack_130[1] = param_1[4];
  afStack_130[8] = param_1[1];
  afStack_130[9] = param_1[5];
  afStack_130[2] = param_1[8];
  afStack_130[3] = param_1[0xc];
  afStack_130[10] = param_1[9];
  afStack_130[0xb] = param_1[0xd];
  afStack_130[0x10] = param_1[2];
  afStack_130[0x11] = param_1[6];
  afStack_130[0x18] = param_1[3];
  afStack_130[0x19] = param_1[7];
  afStack_130[0x12] = param_1[10];
  afStack_130[0x13] = param_1[0xe];
  afStack_130[0x1a] = param_1[0xb];
  afStack_130[0x1b] = param_1[0xf];
  afStack_130[5] = fRam0000000000022098;
  afStack_130[4] = fRam0000000000022090;
  afStack_130[7] = 0.0;
  afStack_130[6] = 0.0;
  afStack_130[0xd] = fRam0000000000022188;
  afStack_130[0xc] = fRam0000000000022180;
  afStack_130[0xf] = 0.0;
  afStack_130[0xe] = 0.0;
  afStack_130[0x15] = 0.0;
  afStack_130[0x14] = 0.0;
  afStack_130[0x17] = fRam0000000000022098;
  afStack_130[0x16] = fRam0000000000022090;
  pfVar6 = afStack_130 + 8;
  afStack_130[0x1d] = 0.0;
  afStack_130[0x1c] = 0.0;
  afStack_130[0x1f] = fRam0000000000022188;
  afStack_130[0x1e] = fRam0000000000022180;
  do {
    uVar9 = uVar5 & 0xffffffff;
    iVar10 = iVar7;
    pfVar11 = pfVar6;
    if (uVar5 < 3) {
      do {
        uVar8 = (int4)iVar10 + 4;
        if (ABS(*pfVar11) <= ABS(afStack_130[uVar9 * 8 + uVar5])) {
          uVar8 = (uint4)uVar9;
        }
        uVar9 = (uint8)uVar8;
        bVar4 = iVar10 != -1;
        iVar10 = iVar10 + 1;
        pfVar11 = pfVar11 + 8;
      } while (bVar4);
    }
    pfVar11 = afStack_130 + uVar9 * 8;
    fVar14 = pfVar11[uVar5];
    if (ABS(fVar14) < fRam00000000000222c8) goto code_r0x00068ed4;
    pfVar1 = afStack_130 + uVar5 * 8;
    if (uVar5 != uVar9) {
      fVar16 = *pfVar11;
      fVar15 = afStack_130[uVar9 * 8 + 3];
      fVar17 = afStack_130[uVar9 * 8 + 2];
      fVar20 = afStack_130[uVar5 * 8 + 1];
      fVar19 = *pfVar1;
      fVar22 = afStack_130[uVar5 * 8 + 3];
      fVar21 = afStack_130[uVar5 * 8 + 2];
      afStack_130[uVar5 * 8 + 1] = afStack_130[uVar9 * 8 + 1];
      *pfVar1 = fVar16;
      afStack_130[uVar5 * 8 + 3] = fVar15;
      afStack_130[uVar5 * 8 + 2] = fVar17;
      fVar17 = afStack_130[uVar9 * 8 + 5];
      fVar16 = afStack_130[uVar9 * 8 + 4];
      fVar18 = afStack_130[uVar9 * 8 + 7];
      fVar15 = afStack_130[uVar9 * 8 + 6];
      afStack_130[uVar9 * 8 + 1] = fVar20;
      *pfVar11 = fVar19;
      afStack_130[uVar9 * 8 + 3] = fVar22;
      afStack_130[uVar9 * 8 + 2] = fVar21;
      fVar20 = afStack_130[uVar5 * 8 + 5];
      fVar19 = afStack_130[uVar5 * 8 + 4];
      fVar22 = afStack_130[uVar5 * 8 + 7];
      fVar21 = afStack_130[uVar5 * 8 + 6];
      afStack_130[uVar5 * 8 + 5] = fVar17;
      afStack_130[uVar5 * 8 + 4] = fVar16;
      afStack_130[uVar5 * 8 + 7] = fVar18;
      afStack_130[uVar5 * 8 + 6] = fVar15;
      afStack_130[uVar9 * 8 + 5] = fVar20;
      afStack_130[uVar9 * 8 + 4] = fVar19;
      afStack_130[uVar9 * 8 + 7] = fVar22;
      afStack_130[uVar9 * 8 + 6] = fVar21;
    }
    fVar18 = afStack_130[uVar5 * 8 + 1];
    fVar17 = *pfVar1;
    fVar16 = pfVar1[uVar5];
    pfVar13 = afStack_130 + uVar5 * 8 + 4;
    fVar21 = afStack_130[uVar5 * 8 + 5];
    fVar20 = *pfVar13;
    pfVar11 = afStack_130 + uVar5 * 8 + 6;
    fVar24 = afStack_130[uVar5 * 8 + 7];
    fVar22 = *pfVar11;
    pfVar12 = afStack_130 + uVar5 * 8 + 2;
    fVar19 = afStack_130[uVar5 * 8 + 3];
    fVar15 = *pfVar12;
    afStack_130[uVar5 * 8 + 1] = fVar18 / fVar16;
    *pfVar1 = fVar17 / fVar16;
    afStack_130[uVar5 * 8 + 3] = fVar19 / fVar16;
    *pfVar12 = fVar15 / fVar16;
    afStack_130[uVar5 * 8 + 5] = fVar21 / fVar16;
    *pfVar13 = fVar20 / fVar16;
    afStack_130[uVar5 * 8 + 7] = fVar24 / fVar16;
    *pfVar11 = fVar22 / fVar16;
    if (uVar5 == 0) {
code_r0x00068dcc:
      fVar16 = afStack_130[uVar5 + 8];
      if (fVar16 != 0.0) {
        afStack_130[9] = afStack_130[9] - afStack_130[uVar5 * 8 + 1] * fVar16;
        afStack_130[8] = afStack_130[8] - *pfVar1 * fVar16;
        afStack_130[0xb] = afStack_130[0xb] - afStack_130[uVar5 * 8 + 3] * fVar16;
        afStack_130[10] = afStack_130[10] - *pfVar12 * fVar16;
        afStack_130[0xd] = afStack_130[0xd] - afStack_130[uVar5 * 8 + 5] * fVar16;
        afStack_130[0xc] = afStack_130[0xc] - *pfVar13 * fVar16;
        afStack_130[0xf] = afStack_130[0xf] - afStack_130[uVar5 * 8 + 7] * fVar16;
        afStack_130[0xe] = afStack_130[0xe] - *pfVar11 * fVar16;
      }
      if (uVar5 != 2) goto code_r0x00068e10;
    }
    else {
      fVar23 = afStack_130[uVar5];
      if (fVar23 != 0.0) {
        afStack_130[1] = afStack_130[1] - (fVar18 / fVar16) * fVar23;
        afStack_130[0] = afStack_130[0] - (fVar17 / fVar16) * fVar23;
        afStack_130[3] = afStack_130[3] - (fVar19 / fVar16) * fVar23;
        afStack_130[2] = afStack_130[2] - (fVar15 / fVar16) * fVar23;
        afStack_130[5] = afStack_130[5] - (fVar21 / fVar16) * fVar23;
        afStack_130[4] = afStack_130[4] - (fVar20 / fVar16) * fVar23;
        afStack_130[7] = afStack_130[7] - (fVar24 / fVar16) * fVar23;
        afStack_130[6] = afStack_130[6] - (fVar22 / fVar16) * fVar23;
      }
      if (uVar5 != 1) goto code_r0x00068dcc;
code_r0x00068e10:
      fVar16 = afStack_130[uVar5 + 0x10];
      if (fVar16 != 0.0) {
        afStack_130[0x11] = afStack_130[0x11] - afStack_130[uVar5 * 8 + 1] * fVar16;
        afStack_130[0x10] = afStack_130[0x10] - *pfVar1 * fVar16;
        afStack_130[0x13] = afStack_130[0x13] - afStack_130[uVar5 * 8 + 3] * fVar16;
        afStack_130[0x12] = afStack_130[0x12] - *pfVar12 * fVar16;
        afStack_130[0x15] = afStack_130[0x15] - afStack_130[uVar5 * 8 + 5] * fVar16;
        afStack_130[0x14] = afStack_130[0x14] - *pfVar13 * fVar16;
        afStack_130[0x17] = afStack_130[0x17] - afStack_130[uVar5 * 8 + 7] * fVar16;
        afStack_130[0x16] = afStack_130[0x16] - *pfVar11 * fVar16;
      }
      if (uVar5 == 3) break;
    }
    fVar16 = afStack_130[uVar5 + 0x18];
    if (fVar16 != 0.0) {
      afStack_130[0x19] = afStack_130[0x19] - afStack_130[uVar5 * 8 + 1] * fVar16;
      afStack_130[0x18] = afStack_130[0x18] - *pfVar1 * fVar16;
      afStack_130[0x1b] = afStack_130[0x1b] - afStack_130[uVar5 * 8 + 3] * fVar16;
      afStack_130[0x1a] = afStack_130[0x1a] - *pfVar12 * fVar16;
      afStack_130[0x1d] = afStack_130[0x1d] - afStack_130[uVar5 * 8 + 5] * fVar16;
      afStack_130[0x1c] = afStack_130[0x1c] - *pfVar13 * fVar16;
      afStack_130[0x1f] = afStack_130[0x1f] - afStack_130[uVar5 * 8 + 7] * fVar16;
      afStack_130[0x1e] = afStack_130[0x1e] - *pfVar11 * fVar16;
    }
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 9;
    iVar7 = iVar7 + 1;
  } while (uVar5 != 4);
  *param_2 = afStack_130[4];
  param_2[1] = afStack_130[0xc];
  param_2[4] = afStack_130[5];
  param_2[5] = afStack_130[0xd];
  param_2[8] = afStack_130[6];
  param_2[9] = afStack_130[0xe];
  param_2[0xc] = afStack_130[7];
  param_2[0xd] = afStack_130[0xf];
  param_2[2] = afStack_130[0x14];
  param_2[3] = afStack_130[0x1c];
  param_2[6] = afStack_130[0x15];
  param_2[7] = afStack_130[0x1d];
  param_2[10] = afStack_130[0x16];
  param_2[0xb] = afStack_130[0x1e];
  param_2[0xe] = afStack_130[0x17];
  param_2[0xf] = afStack_130[0x1f];
code_r0x00068ed4:
  if (*(int8 *)(iVar2 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(fVar3 <= ABS(fVar14));
  return;
}

/* 0x68f00  size=732 */
void FUN_00068f00(xunknown8 param_1,xunknown4 param_2,xunknown4 param_3,int4 param_4,int4 param_5)

{
  uint4 uVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  xunknown8 *pxVar4;
  bool bVar5;
  int4 iVar6;
  int4 iVar7;
  int4 iVar8;
  int4 iVar9;
  uint8 uVar10;
  int4 iVar11;
  int4 iVar12;
  float4 *pfVar13;
  float4 fVar14;
  float8 fVar15;
  float8 fVar16;
  float4 fVar17;
  float4 fVar18;
  float4 fVar19;
  float4 fVar20;
  float4 fVar21;
  float8 fVar22;
  int4 iStack_5c;
  int8 iStack_58;
  
  iVar2 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar2 + 0x28);
  iStack_5c = 0;
  (*(code *)*pxRam00000000000d3208)(0x88ed,&iStack_5c);
  pxVar4 = pxRam00000000000d34c8;
  pxVar3 = pxRam00000000000d3228;
  if (iStack_5c != 0) {
    (*(code *)*pxRam00000000000d34c8)(0x88eb,0);
    pxVar3 = pxRam00000000000d3228;
  }
  do {
    iVar6 = (*(code *)*pxVar3)();
  } while (iVar6 != 0);
  (*(code *)*pxRam00000000000d32d8)(param_2,param_3,param_4,param_5,0x1908,0x1406,0xd9c98);
  iVar6 = (*(code *)*pxVar3)();
  if (iStack_5c != 0) {
    (*(code *)*pxVar4)(0x88eb);
  }
  if (iVar6 == 0) {
    uVar1 = param_5 * param_4;
    uVar10 = (uint8)uVar1;
    if ((int4)uVar1 < 1) {
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      fVar14 = 0.0;
      fVar16 = 0.0;
      fVar15 = 0.0;
      fVar20 = 1e+09;
      fVar18 = 1.0;
      iVar8 = 0;
      iVar9 = 0;
      iVar11 = 0;
      iVar6 = 0;
      iVar7 = 0;
      iVar12 = 0;
      pfVar13 = (float4 *)0xd9c9c;
      do {
        fVar17 = pfVar13[-1];
        fVar19 = *pfVar13;
        bVar5 = true;
        if ((!NAN(fVar17)) && (bVar5 = true, !NAN(fVar19))) {
          bVar5 = false;
        }
        if (bVar5) {
          iVar6 = iVar6 + 1;
        }
        else if (fVar19 <= 59000.0) {
          iVar12 = iVar12 + 1;
          fVar21 = fVar17;
          if (fVar18 <= fVar17) {
            fVar21 = fVar18;
          }
          fVar18 = fVar21;
          fVar21 = fVar19;
          if (fVar20 <= fVar19) {
            fVar21 = fVar20;
          }
          fVar20 = fVar19;
          if (fVar19 <= fVar14) {
            fVar20 = fVar14;
          }
          fVar14 = fVar20;
          if (fVar17 < 0.9) {
            iVar11 = iVar11 + 1;
          }
          fVar16 = fVar16 + (float8)fVar17;
          fVar15 = fVar15 + (float8)fVar19;
          if (fVar17 < 0.7) {
            iVar9 = iVar9 + 1;
          }
          if (fVar17 < 0.5) {
            iVar8 = iVar8 + 1;
          }
          fVar20 = fVar21;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        uVar10 = uVar10 - 1;
        pfVar13 = pfVar13 + 4;
      } while (uVar10 != 0);
      if (iVar12 != 0) {
        fVar22 = (float8)iVar12;
        (*pcRam00000000000d9a50)
                  (((float8)iVar7 * 100.0) / (float8)(int4)uVar1,(float8)fVar20,fVar15 / fVar22,
                   (float8)fVar14,fVar16 / fVar22,(float8)fVar18,((float8)iVar11 * 100.0) / fVar22,
                   ((float8)iVar9 * 100.0) / fVar22,0,0x392ac /* "ao: %s block %dx%d at %d,%d - sky %.1f%%, NaN %d, distance min %.2f av..." */,param_1,param_4,param_5,param_2,
                   param_3,iVar6,((float8)iVar8 * 100.0) / fVar22);
        goto code_r0x000691ac;
      }
    }
    (*pcRam00000000000d9a50)(0,0x2927f /* "ao: %s block %dx%d - no geometry (sky %d, NaN %d)" */,param_1,param_4,param_5,iVar7,iVar6);
  }
  else {
    (*pcRam00000000000d9a50)(1,0x405aa /* "ao: stats read-back failed (0x%X)" */,iVar6);
  }
code_r0x000691ac:
  if (*(int8 *)(iVar2 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6944c  size=744 */
void FUN_0006944c(float8 *param_1,float8 *param_2)

{
  float8 *pfVar1;
  int8 iVar2;
  float8 fVar3;
  bool bVar4;
  uint8 uVar5;
  float8 *pfVar6;
  int8 iVar7;
  uint4 uVar8;
  uint8 uVar9;
  int8 iVar10;
  float8 *pfVar11;
  float8 *pfVar12;
  float8 *pfVar13;
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
  float8 afStack_130 [33];
  int8 iStack_28;
  
  fVar3 = fRam00000000000222c8;
  iVar2 = tpidr_el0;
  uVar5 = 0;
  iVar7 = -3;
  iStack_28 = *(int8 *)(iVar2 + 0x28);
  afStack_130[0] = *param_1;
  afStack_130[1] = param_1[4];
  afStack_130[8] = param_1[1];
  afStack_130[9] = param_1[5];
  afStack_130[2] = param_1[8];
  afStack_130[3] = param_1[0xc];
  afStack_130[10] = param_1[9];
  afStack_130[0xb] = param_1[0xd];
  afStack_130[0x10] = param_1[2];
  afStack_130[0x11] = param_1[6];
  afStack_130[0x18] = param_1[3];
  afStack_130[0x19] = param_1[7];
  afStack_130[0x12] = param_1[10];
  afStack_130[0x13] = param_1[0xe];
  afStack_130[0x1a] = param_1[0xb];
  afStack_130[0x1b] = param_1[0xf];
  afStack_130[5] = fRam0000000000022098;
  afStack_130[4] = fRam0000000000022090;
  afStack_130[7] = 0.0;
  afStack_130[6] = 0.0;
  afStack_130[0xd] = fRam0000000000022188;
  afStack_130[0xc] = fRam0000000000022180;
  afStack_130[0xf] = 0.0;
  afStack_130[0xe] = 0.0;
  afStack_130[0x15] = 0.0;
  afStack_130[0x14] = 0.0;
  afStack_130[0x17] = fRam0000000000022098;
  afStack_130[0x16] = fRam0000000000022090;
  pfVar6 = afStack_130 + 8;
  afStack_130[0x1d] = 0.0;
  afStack_130[0x1c] = 0.0;
  afStack_130[0x1f] = fRam0000000000022188;
  afStack_130[0x1e] = fRam0000000000022180;
  do {
    uVar9 = uVar5 & 0xffffffff;
    iVar10 = iVar7;
    pfVar11 = pfVar6;
    if (uVar5 < 3) {
      do {
        uVar8 = (int4)iVar10 + 4;
        if (ABS(*pfVar11) <= ABS(afStack_130[uVar9 * 8 + uVar5])) {
          uVar8 = (uint4)uVar9;
        }
        uVar9 = (uint8)uVar8;
        bVar4 = iVar10 != -1;
        iVar10 = iVar10 + 1;
        pfVar11 = pfVar11 + 8;
      } while (bVar4);
    }
    pfVar11 = afStack_130 + uVar9 * 8;
    fVar14 = pfVar11[uVar5];
    if (ABS(fVar14) < fRam00000000000222c8) goto code_r0x00069708;
    pfVar1 = afStack_130 + uVar5 * 8;
    if (uVar5 != uVar9) {
      fVar16 = *pfVar11;
      fVar15 = afStack_130[uVar9 * 8 + 3];
      fVar17 = afStack_130[uVar9 * 8 + 2];
      fVar20 = afStack_130[uVar5 * 8 + 1];
      fVar19 = *pfVar1;
      fVar22 = afStack_130[uVar5 * 8 + 3];
      fVar21 = afStack_130[uVar5 * 8 + 2];
      afStack_130[uVar5 * 8 + 1] = afStack_130[uVar9 * 8 + 1];
      *pfVar1 = fVar16;
      afStack_130[uVar5 * 8 + 3] = fVar15;
      afStack_130[uVar5 * 8 + 2] = fVar17;
      fVar17 = afStack_130[uVar9 * 8 + 5];
      fVar16 = afStack_130[uVar9 * 8 + 4];
      fVar18 = afStack_130[uVar9 * 8 + 7];
      fVar15 = afStack_130[uVar9 * 8 + 6];
      afStack_130[uVar9 * 8 + 1] = fVar20;
      *pfVar11 = fVar19;
      afStack_130[uVar9 * 8 + 3] = fVar22;
      afStack_130[uVar9 * 8 + 2] = fVar21;
      fVar20 = afStack_130[uVar5 * 8 + 5];
      fVar19 = afStack_130[uVar5 * 8 + 4];
      fVar22 = afStack_130[uVar5 * 8 + 7];
      fVar21 = afStack_130[uVar5 * 8 + 6];
      afStack_130[uVar5 * 8 + 5] = fVar17;
      afStack_130[uVar5 * 8 + 4] = fVar16;
      afStack_130[uVar5 * 8 + 7] = fVar18;
      afStack_130[uVar5 * 8 + 6] = fVar15;
      afStack_130[uVar9 * 8 + 5] = fVar20;
      afStack_130[uVar9 * 8 + 4] = fVar19;
      afStack_130[uVar9 * 8 + 7] = fVar22;
      afStack_130[uVar9 * 8 + 6] = fVar21;
    }
    fVar18 = afStack_130[uVar5 * 8 + 1];
    fVar17 = *pfVar1;
    fVar16 = pfVar1[uVar5];
    pfVar13 = afStack_130 + uVar5 * 8 + 4;
    fVar21 = afStack_130[uVar5 * 8 + 5];
    fVar20 = *pfVar13;
    pfVar11 = afStack_130 + uVar5 * 8 + 6;
    fVar24 = afStack_130[uVar5 * 8 + 7];
    fVar22 = *pfVar11;
    pfVar12 = afStack_130 + uVar5 * 8 + 2;
    fVar19 = afStack_130[uVar5 * 8 + 3];
    fVar15 = *pfVar12;
    afStack_130[uVar5 * 8 + 1] = fVar18 / fVar16;
    *pfVar1 = fVar17 / fVar16;
    afStack_130[uVar5 * 8 + 3] = fVar19 / fVar16;
    *pfVar12 = fVar15 / fVar16;
    afStack_130[uVar5 * 8 + 5] = fVar21 / fVar16;
    *pfVar13 = fVar20 / fVar16;
    afStack_130[uVar5 * 8 + 7] = fVar24 / fVar16;
    *pfVar11 = fVar22 / fVar16;
    if (uVar5 == 0) {
code_r0x00069600:
      fVar16 = afStack_130[uVar5 + 8];
      if (fVar16 != 0.0) {
        afStack_130[9] = afStack_130[9] - afStack_130[uVar5 * 8 + 1] * fVar16;
        afStack_130[8] = afStack_130[8] - *pfVar1 * fVar16;
        afStack_130[0xb] = afStack_130[0xb] - afStack_130[uVar5 * 8 + 3] * fVar16;
        afStack_130[10] = afStack_130[10] - *pfVar12 * fVar16;
        afStack_130[0xd] = afStack_130[0xd] - afStack_130[uVar5 * 8 + 5] * fVar16;
        afStack_130[0xc] = afStack_130[0xc] - *pfVar13 * fVar16;
        afStack_130[0xf] = afStack_130[0xf] - afStack_130[uVar5 * 8 + 7] * fVar16;
        afStack_130[0xe] = afStack_130[0xe] - *pfVar11 * fVar16;
      }
      if (uVar5 != 2) goto code_r0x00069644;
    }
    else {
      fVar23 = afStack_130[uVar5];
      if (fVar23 != 0.0) {
        afStack_130[1] = afStack_130[1] - (fVar18 / fVar16) * fVar23;
        afStack_130[0] = afStack_130[0] - (fVar17 / fVar16) * fVar23;
        afStack_130[3] = afStack_130[3] - (fVar19 / fVar16) * fVar23;
        afStack_130[2] = afStack_130[2] - (fVar15 / fVar16) * fVar23;
        afStack_130[5] = afStack_130[5] - (fVar21 / fVar16) * fVar23;
        afStack_130[4] = afStack_130[4] - (fVar20 / fVar16) * fVar23;
        afStack_130[7] = afStack_130[7] - (fVar24 / fVar16) * fVar23;
        afStack_130[6] = afStack_130[6] - (fVar22 / fVar16) * fVar23;
      }
      if (uVar5 != 1) goto code_r0x00069600;
code_r0x00069644:
      fVar16 = afStack_130[uVar5 + 0x10];
      if (fVar16 != 0.0) {
        afStack_130[0x11] = afStack_130[0x11] - afStack_130[uVar5 * 8 + 1] * fVar16;
        afStack_130[0x10] = afStack_130[0x10] - *pfVar1 * fVar16;
        afStack_130[0x13] = afStack_130[0x13] - afStack_130[uVar5 * 8 + 3] * fVar16;
        afStack_130[0x12] = afStack_130[0x12] - *pfVar12 * fVar16;
        afStack_130[0x15] = afStack_130[0x15] - afStack_130[uVar5 * 8 + 5] * fVar16;
        afStack_130[0x14] = afStack_130[0x14] - *pfVar13 * fVar16;
        afStack_130[0x17] = afStack_130[0x17] - afStack_130[uVar5 * 8 + 7] * fVar16;
        afStack_130[0x16] = afStack_130[0x16] - *pfVar11 * fVar16;
      }
      if (uVar5 == 3) break;
    }
    fVar16 = afStack_130[uVar5 + 0x18];
    if (fVar16 != 0.0) {
      afStack_130[0x19] = afStack_130[0x19] - afStack_130[uVar5 * 8 + 1] * fVar16;
      afStack_130[0x18] = afStack_130[0x18] - *pfVar1 * fVar16;
      afStack_130[0x1b] = afStack_130[0x1b] - afStack_130[uVar5 * 8 + 3] * fVar16;
      afStack_130[0x1a] = afStack_130[0x1a] - *pfVar12 * fVar16;
      afStack_130[0x1d] = afStack_130[0x1d] - afStack_130[uVar5 * 8 + 5] * fVar16;
      afStack_130[0x1c] = afStack_130[0x1c] - *pfVar13 * fVar16;
      afStack_130[0x1f] = afStack_130[0x1f] - afStack_130[uVar5 * 8 + 7] * fVar16;
      afStack_130[0x1e] = afStack_130[0x1e] - *pfVar11 * fVar16;
    }
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 9;
    iVar7 = iVar7 + 1;
  } while (uVar5 != 4);
  *param_2 = afStack_130[4];
  param_2[1] = afStack_130[0xc];
  param_2[4] = afStack_130[5];
  param_2[5] = afStack_130[0xd];
  param_2[8] = afStack_130[6];
  param_2[9] = afStack_130[0xe];
  param_2[0xc] = afStack_130[7];
  param_2[0xd] = afStack_130[0xf];
  param_2[2] = afStack_130[0x14];
  param_2[3] = afStack_130[0x1c];
  param_2[6] = afStack_130[0x15];
  param_2[7] = afStack_130[0x1d];
  param_2[10] = afStack_130[0x16];
  param_2[0xb] = afStack_130[0x1e];
  param_2[0xe] = afStack_130[0x17];
  param_2[0xf] = afStack_130[0x1f];
code_r0x00069708:
  if (*(int8 *)(iVar2 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(fVar3 <= ABS(fVar14));
  return;
}

/* 0x6a10c  size=2928 */
void FUN_0006a10c(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  int8 iVar3;
  float4 fVar4;
  float4 fVar5;
  float4 fVar6;
  float4 fVar7;
  float4 fVar8;
  xunknown8 *pxVar9;
  xunknown8 *pxVar10;
  xunknown8 *pxVar11;
  xunknown8 *pxVar12;
  xunknown8 *pxVar13;
  bool bVar14;
  uint1 uVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  int4 iVar20;
  uint8 uVar21;
  float4 *pfVar22;
  uint4 uVar23;
  float4 fVar24;
  float8 fVar25;
  float4 fVar26;
  float4 fVar27;
  float4 fVar28;
  float4 fVar29;
  float4 fVar30;
  float4 fVar31;
  float4 fVar32;
  float4 fVar33;
  float4 fVar34;
  xunknown8 xStack_1d8;
  xunknown8 xStack_1d0;
  int4 iStack_1c8;
  int4 iStack_1c4;
  int4 iStack_1c0;
  int4 iStack_1bc;
  xunknown4 xStack_1b8;
  xunknown4 xStack_1b4;
  xunknown4 xStack_1b0;
  xunknown4 xStack_1ac;
  xunknown4 xStack_1a8;
  xunknown4 xStack_1a4;
  xunknown8 xStack_1a0;
  xunknown8 xStack_198;
  xunknown8 xStack_190;
  xunknown8 xStack_188;
  xunknown8 xStack_180;
  xunknown8 xStack_178;
  xunknown8 xStack_170;
  xunknown8 xStack_168;
  float4 fStack_15c;
  float4 fStack_158;
  float4 fStack_154;
  float4 fStack_150;
  float4 fStack_14c;
  float4 fStack_148;
  float4 fStack_144;
  float4 fStack_140;
  float4 fStack_13c;
  float4 fStack_138;
  float4 fStack_134;
  float4 fStack_130;
  float4 fStack_12c;
  float4 fStack_128;
  float4 fStack_124;
  float4 fStack_120;
  float4 fStack_11c;
  float4 fStack_118;
  float4 fStack_114;
  float4 fStack_110;
  xunknown8 xStack_10c;
  float4 fStack_104;
  float4 fStack_100;
  float4 fStack_fc;
  float4 fStack_f8;
  float4 fStack_f4;
  float4 fStack_f0;
  float4 fStack_ec;
  float4 fStack_e8;
  float4 fStack_e4;
  float4 fStack_e0;
  float4 fStack_dc;
  float4 fStack_d8;
  float4 fStack_d4;
  xunknown8 xStack_d0;
  xunknown8 xStack_c8;
  xunknown4 xStack_c0;
  xunknown4 xStack_bc;
  xunknown4 xStack_b8;
  xunknown4 xStack_b4;
  int8 iStack_b0;
  
  iVar3 = tpidr_el0;
  iStack_b0 = *(int8 *)(iVar3 + 0x28);
  if ((((uRam000000000010bd88 & 1) == 0) && ((*puRam00000000000d3610 >> 6 & 1) == 0)) &&
     (iRam000000000010bd48 != (float4 *)0x0)) {
    fVar26 = *iRam000000000010bd48;
    fVar34 = 1.0;
    if (fVar26 <= 1.0) {
      fVar34 = fVar26;
    }
    if (((0.0 <= fVar26) && (0.02 <= fVar34)) &&
       ((xRam000000000010bd68 == (char *)0x0 || (*xRam000000000010bd68 == '\0')))) {
      if (iRam000000000010bd70 != (code *)0x0) {
        uVar21 = (*iRam000000000010bd70)();
        if ((uVar21 & 1) != 0) goto code_r0x0006a540;
      }
      if (xRam000000000010bd78 != (code *)0x0) {
        uVar21 = (*xRam000000000010bd78)();
        if ((uVar21 & 1) != 0) goto code_r0x0006a540;
      }
      if ((xRam000000000010bd60 == (float4 *)0x0) || (*xRam000000000010bd60 <= 0.01)) {
        if ((uRam000000000010bd8c & 1) == 0) {
          fStack_100 = 0.0;
          fStack_110 = 2.8026e-45;
          xStack_10c = 0;
          fStack_104 = (float4)((uint4)fStack_104 & 0xffffff00);
          uVar15 = gl__Load_plt(&fStack_110,pcRam000000000010bd40);
          uRam000000000010bd8c = uVar15 & 1;
          if ((uVar15 & 1) == 0) {
            uRam000000000010bd88 = 1;
            goto code_r0x0006a540;
          }
        }
        pxVar2 = pxRam00000000000d3208;
        iStack_1bc = 0;
        xStack_d0 = 0;
        xStack_c8 = 0;
        (*(code *)*pxRam00000000000d3208)(0x8ca6,&iStack_1bc);
        (*(code *)*pxVar2)(0xba2,&xStack_d0);
        if (iStack_1bc != 0) {
          iStack_1c4 = 0;
          iStack_1c0 = 0;
          compat__SceneSize_plt(&iStack_1c0,&iStack_1c4);
          if ((int4)xStack_c8 == iStack_1c0) {
            if (xStack_c8._4_4_ == iStack_1c4) {
              iStack_1c8 = 0;
              (*(code *)*pxRam00000000000d3288)(0x8ca9,0x8d00,0x8cd0,&iStack_1c8);
              if (iStack_1c8 != 0) {
                uVar21 = lights__Camera_plt(&fStack_110,&fStack_150,&fStack_15c);
                if ((uVar21 & 1) != 0) {
                  if (((uRam000000000010bd8d & 1) == 0) &&
                     (uVar21 = FUN_0006ac7c(), (uVar21 & 1) == 0)) {
                    uRam000000000010bd88 = 1;
                    (*pcRam000000000010bd40)(1,0x2476c /* "rain: shader failed - off" */);
                  }
                  else {
                    iVar20 = iStack_1c4;
                    fVar30 = fStack_150 * fStack_110 + 0.0 + fStack_14c * fStack_100 +
                             fStack_148 * fStack_f0 + fStack_144 * fStack_e0;
                    fVar31 = fStack_140 * fStack_110 + 0.0 + fStack_13c * fStack_100 +
                             fStack_138 * fStack_f0 + fStack_134 * fStack_e0;
                    fVar4 = fStack_150 * (float4)xStack_10c + 0.0 + fStack_14c * fStack_fc +
                            fStack_148 * fStack_ec + fStack_144 * fStack_dc;
                    fVar5 = fStack_140 * (float4)xStack_10c + 0.0 + fStack_13c * fStack_fc +
                            fStack_138 * fStack_ec + fStack_134 * fStack_dc;
                    fVar29 = fStack_130 * fStack_110 + 0.0 + fStack_12c * fStack_100 +
                             fStack_128 * fStack_f0 + fStack_124 * fStack_e0;
                    fVar28 = fStack_130 * (float4)xStack_10c + 0.0 + fStack_12c * fStack_fc +
                             fStack_128 * fStack_ec + fStack_124 * fStack_dc;
                    fVar27 = fStack_150 * xStack_10c._4_4_ + 0.0 + fStack_14c * fStack_f8 +
                             fStack_148 * fStack_e8 + fStack_144 * fStack_d8;
                    fVar6 = fStack_140 * xStack_10c._4_4_ + 0.0 + fStack_13c * fStack_f8 +
                            fStack_138 * fStack_e8 + fStack_134 * fStack_d8;
                    fVar32 = fStack_150 * fStack_104 + 0.0 + fStack_14c * fStack_f4 +
                             fStack_148 * fStack_e4 + fStack_144 * fStack_d4;
                    fVar24 = fStack_140 * fStack_104 + 0.0 + fStack_13c * fStack_f4 +
                             fStack_138 * fStack_e4 + fStack_134 * fStack_d4;
                    fVar7 = fStack_130 * xStack_10c._4_4_ + 0.0 + fStack_12c * fStack_f8 +
                            fStack_128 * fStack_e8 + fStack_124 * fStack_d8;
                    fVar8 = fStack_130 * fStack_104 + 0.0 + fStack_12c * fStack_f4 +
                            fStack_128 * fStack_e4 + fStack_124 * fStack_d4;
                    xStack_198 = CONCAT44(fVar32,fVar27);
                    fVar33 = ABS(fStack_fc);
                    fVar26 = 0.0;
                    xStack_190 = CONCAT44(fVar5,fVar31);
                    xStack_178 = CONCAT44(fVar8,fVar7);
                    xStack_188 = CONCAT44(fVar24,fVar6);
                    if (fStack_fc == 0.0) {
                      fVar33 = 1.0;
                    }
                    xStack_168 = CONCAT44(fStack_120 * fStack_104 + 0.0 + fStack_11c * fStack_f4 +
                                          fStack_118 * fStack_e4 + fStack_114 * fStack_d4 +
                                          fVar32 * fStack_15c + fVar24 * fStack_158 +
                                          fVar8 * fStack_154,
                                          fStack_120 * xStack_10c._4_4_ + 0.0 +
                                          fStack_11c * fStack_f8 + fStack_118 * fStack_e8 +
                                          fStack_114 * fStack_d8 + fVar27 * fStack_15c +
                                          fVar6 * fStack_158 + fVar7 * fStack_154);
                    xStack_1a0 = CONCAT44(fVar4,fVar30);
                    xStack_180 = CONCAT44(fVar28,fVar29);
                    xStack_170 = CONCAT44(fStack_120 * (float4)xStack_10c + 0.0 +
                                          fStack_11c * fStack_fc + fStack_118 * fStack_ec +
                                          fStack_114 * fStack_dc + fVar4 * fStack_15c +
                                          fVar5 * fStack_158 + fVar28 * fStack_154,
                                          fStack_120 * fStack_110 + 0.0 + fStack_11c * fStack_100 +
                                          fStack_118 * fStack_f0 + fStack_114 * fStack_e0 +
                                          fVar30 * fStack_15c + fVar31 * fStack_158 +
                                          fVar29 * fStack_154);
                    if (xRam000000000010bd58 == (float4 *)0x0) {
                      fVar27 = 0.0;
                    }
                    else {
                      fVar27 = 0.0;
                      if (xRam000000000010bd50 != (float4 *)0x0) {
                        fVar27 = *xRam000000000010bd50;
                        fVar26 = 1.0;
                        if (fVar27 <= 1.0) {
                          fVar26 = fVar27;
                        }
                        fVar28 = *xRam000000000010bd58;
                        fVar30 = xRam000000000010bd58[1];
                        fVar24 = 0.0;
                        if (0.0 <= fVar27) {
                          fVar24 = fVar26;
                        }
                        fVar27 = fVar28 * fVar24 * 6.0;
                        fVar26 = fVar30 * fVar24 * 6.0;
                        bVar14 = false;
                        if ((ABS(fVar30) < 4.0) && (bVar14 = false, !NAN(ABS(fVar28)))) {
                          bVar14 = ABS(fVar28) < 4.0;
                        }
                        if (!(bool)(bVar14 & (!NAN(fVar28) && !NAN(fVar30)))) {
                          fVar26 = 0.0;
                          fVar27 = 0.0;
                        }
                      }
                    }
                    clock_gettime(1,&xStack_c0);
                    fVar25 = (float8)CONCAT44(xStack_bc,xStack_c0) +
                             fRam0000000000022270 * (float8)CONCAT44(xStack_b4,xStack_b8);
                    if (fRam000000000010bd90 == 0.0) {
                      fRam000000000010bd90 = fVar25;
                    }
                    fVar25 = (float8)fmod(SUB84(fVar25 - fRam000000000010bd90,0),0x4082c00000000000)
                    ;
                    if ((xRam000000000010bd80 == (code *)0x0) ||
                       (pfVar22 = (float4 *)(*xRam000000000010bd80)(), pfVar22 == (float4 *)0x0)) {
                      fVar24 = 0.55;
                      fVar28 = 0.62;
                      fVar30 = 0.58;
                    }
                    else {
                      fVar29 = *pfVar22;
                      fVar31 = pfVar22[1];
                      fVar32 = pfVar22[2];
                      if (((1.5 < fVar29) || (1.5 < fVar31)) || (1.5 < fVar32)) {
                        fVar29 = fVar29 / 255.0;
                        fVar31 = fVar31 / 255.0;
                        fVar32 = fVar32 / 255.0;
                      }
                      fVar24 = 0.55;
                      fVar28 = 0.62;
                      fVar30 = 0.58;
                      if (!NAN(fVar29)) {
                        if (!NAN(fVar31)) {
                          if (!NAN(fVar32)) {
                            fVar28 = fVar32;
                            fVar24 = fVar29;
                            fVar30 = fVar31;
                          }
                        }
                      }
                    }
                    fVar29 = fVar24 * 1.45 + 0.09;
                    fVar24 = 0.0;
                    if ((0.0 <= fVar29) && (fVar24 = 1.0, fVar29 <= 1.0)) {
                      fVar24 = fVar29;
                    }
                    fVar29 = fVar30 * 1.45 + 0.09;
                    fVar30 = 0.0;
                    if ((0.0 <= fVar29) && (fVar30 = 1.0, fVar29 <= 1.0)) {
                      fVar30 = fVar29;
                    }
                    fVar29 = fVar28 * 1.45 + 0.09;
                    fVar28 = 0.0;
                    if ((0.0 <= fVar29) && (fVar28 = 1.0, fVar29 <= 1.0)) {
                      fVar28 = fVar29;
                    }
                    fVar29 = 2.0;
                    if (xRam00000000000d8b64._4_4_ <= 2.0) {
                      fVar29 = xRam00000000000d8b64._4_4_;
                    }
                    fVar31 = 0.0;
                    if (0.0 <= xRam00000000000d8b64._4_4_) {
                      fVar31 = fVar29;
                    }
                    uVar23 = (uint4)(fVar34 * 6000.0 * fVar31 * 0.5);
                    if (0x31 < (int4)uVar23) {
                      if (5999 < uVar23) {
                        uVar23 = 6000;
                      }
                      xStack_1d8 = 0;
                      xStack_1d0 = 0;
                      (*(code *)*pxVar2)(0x8b8d,(int8)&xStack_1d0 + 4);
                      (*(code *)*pxVar2)(0x85b5,&xStack_1d0);
                      (*(code *)*pxVar2)(0xb74,(int8)&xStack_1d8 + 4);
                      (*(code *)*pxVar2)(0xb72,&xStack_1d8);
                      (*(code *)*pxVar2)(0xc23,&xStack_c0);
                      (*(code *)*pxVar2)(0x80c9,&xStack_1b0);
                      (*(code *)*pxVar2)(0x80c8,&xStack_1ac);
                      (*(code *)*pxVar2)(0x80cb,&xStack_1a8);
                      (*(code *)*pxVar2)(0x80ca,&xStack_1a4);
                      (*(code *)*pxVar2)(0x8009,&xStack_1b8);
                      (*(code *)*pxVar2)(0x883d,&xStack_1b4);
                      pxVar2 = pxRam00000000000d3538;
                      cVar16 = (*(code *)*pxRam00000000000d3538)(0xbe2);
                      cVar17 = (*(code *)*pxVar2)(0xb71);
                      cVar18 = (*(code *)*pxVar2)(0xb44);
                      cVar19 = (*(code *)*pxVar2)(0xc11);
                      pxVar11 = pxRam00000000000d3528;
                      (*(code *)*pxRam00000000000d3528)(0xb71);
                      (*(code *)*pxRam00000000000d3460)(0x203);
                      (*(code *)*pxRam00000000000d3548)(0);
                      pxVar12 = pxRam00000000000d3530;
                      (*(code *)*pxRam00000000000d3530)(0xb44);
                      (*(code *)*pxVar12)(0xc11);
                      (*(code *)*pxVar11)(0xbe2);
                      (*(code *)*pxRam00000000000d32b8)(0x302,0x303,0,1);
                      (*(code *)*pxRam00000000000d32c0)(0x8006,0x8006);
                      pxVar13 = pxRam00000000000d3540;
                      (*(code *)*pxRam00000000000d3540)(1,1,1,0);
                      pxVar2 = pxRam00000000000d33d8;
                      (*(code *)*pxRam00000000000d33d8)(xRam000000000010bd98);
                      pxVar10 = pxRam00000000000d3508;
                      (*(code *)*pxRam00000000000d3508)(xRam000000000010bd9c);
                      (*(code *)*pxRam00000000000d34a8)(xRam00000000000d8b74,1,0,&xStack_1a0);
                      pxVar9 = pxRam00000000000d3480;
                      (*(code *)*pxRam00000000000d3480)
                                (fStack_15c,fStack_158,fStack_154,(float4)fVar25,
                                 xRam00000000000d8b78);
                      fVar29 = xRam00000000000d8b6c._4_4_;
                      if (xRam00000000000d8b6c._4_4_ <= 0.1) {
                        fVar29 = 0.1;
                      }
                      (*(code *)*pxVar9)(fVar27,fVar26,0x41000000,fVar29 * 0.55,xRam00000000000d8b7c
                                        );
                      (*(code *)*pxVar9)(0x41e00000,0x41900000,2.0 / (fVar33 * (float4)iVar20),
                                         (fVar34 * 0.4 + 0.6) * (float4)xRam00000000000d8b6c * 0.7,
                                         xRam00000000000d8b80);
                      (*(code *)*pxVar9)(fVar24,fVar30,fVar28,0x3f800000,xRam00000000000d8b84);
                      if ((uRam000000000010bda0 & 1) == 0) {
                        uRam000000000010bda0 = 1;
                        boot__Step_plt(0x28065 /* "first 3D rain draw" */);
                      }
                      boot__R_plt(0x3422f /* "ZyZ: 3D rain" */);
                      (*(code *)*pxRam00000000000d3518)(4,0,uVar23 * 6);
                      (*(code *)*pxVar10)(xStack_1d0 & 0xffffffff);
                      (*(code *)*pxVar2)(xStack_1d0._4_4_);
                      (*(code *)*pxVar13)(xStack_c0,xStack_bc,xStack_b8,xStack_b4);
                      (*(code *)*pxRam00000000000d32b8)(xStack_1b0,xStack_1ac,xStack_1a8,xStack_1a4)
                      ;
                      (*(code *)*pxRam00000000000d32c0)(xStack_1b8,xStack_1b4);
                      pxVar2 = pxVar12;
                      if (cVar16 != '\0') {
                        pxVar2 = pxVar11;
                      }
                      (*(code *)*pxVar2)(0xbe2);
                      if (cVar18 != '\0') {
                        (*(code *)*pxVar11)(0xb44);
                      }
                      if (cVar19 != '\0') {
                        (*(code *)*pxVar11)(0xc11);
                      }
                      (*(code *)*pxRam00000000000d3460)(xStack_1d8._4_4_);
                      (*(code *)*pxRam00000000000d3548)(xStack_1d8 & 0xffffffff);
                      pxVar2 = pxRam00000000000d3228;
                      if (cVar17 == '\0') {
                        (*(code *)*pxVar12)(0xb71);
                        pxVar2 = pxRam00000000000d3228;
                      }
                      do {
                        iVar20 = (*(code *)*pxVar2)();
                      } while (iVar20 != 0);
                      iRam000000000010bdb0 = iRam000000000010bdb0 + (uint8)uVar23;
                      uRam000000000010bda8 = uRam000000000010bda8 + 1;
                      iVar1 = iRam000000000010bdb8 + 1;
                      bVar14 = 0x256 < iRam000000000010bdb8;
                      iRam000000000010bdb8 = iVar1;
                      if ((bVar14) && (iRam000000000010bdc0 < 0x14)) {
                        uVar21 = uRam000000000010bda8;
                        if (uRam000000000010bda8 < 2) {
                          uVar21 = 1;
                        }
                        iVar1 = 0;
                        if (uVar21 != 0) {
                          iVar1 = iRam000000000010bdb0 / (int8)uVar21;
                        }
                        (*pcRam000000000010bd40)
                                  (SUB84((float8)fVar34,0),(float8)fVar27,SUB84((float8)fVar26,0),0,
                                   0x30fb2 /* "rain: 3D streaks %ld per frame (rain %.2f, wind %.1f %.1f m/s)" */,iVar1);
                        iRam000000000010bdb8 = 0;
                        uRam000000000010bda8 = 0;
                        iRam000000000010bdc0 = iRam000000000010bdc0 + 1;
                        iRam000000000010bdb0 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0006a540:
  if (*(int8 *)(iVar3 + 0x28) == iStack_b0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6ac7c  size=344 */
bool FUN_0006ac7c(void)

{
  xunknown8 *pxVar1;
  xunknown4 xVar2;
  xunknown4 xVar3;
  int4 iVar4;
  
  uRam000000000010bd8d = 1;
  xVar2 = gl__Compile_plt(0x8b31,0x28078 /* "#version 300 es\nuniform highp mat4 uVP;     // (world - camera) -> cl..." */,0x35343 /* "rain" */,pcRam000000000010bd40);
  xVar3 = gl__Compile_plt(0x8b30,0x2cd0a /* "#version 300 es\nprecision mediump float;\nprecision highp int;\nunifo..." */,0x35343 /* "rain" */,pcRam000000000010bd40);
  iVar4 = gl__Link_plt(xVar2,xVar3,0x35343 /* "rain" */,pcRam000000000010bd40);
  pxVar1 = pxRam00000000000d3408;
  xRam000000000010bd98 = iVar4;
  if (iVar4 != 0) {
    xRam00000000000d8b74 = (*(code *)*pxRam00000000000d3408)(iVar4,0x2a185);
    xRam00000000000d8b78 = (*(code *)*pxVar1)(xRam000000000010bd98,0x30ff1 /* "uCam" */);
    xRam00000000000d8b7c = (*(code *)*pxVar1)(xRam000000000010bd98,0x38828 /* "uWind" */);
    xRam00000000000d8b80 = (*(code *)*pxVar1)(xRam000000000010bd98,0x39355 /* "uBox" */);
    xRam00000000000d8b84 = (*(code *)*pxVar1)(xRam000000000010bd98,0x363d9 /* "uCol" */);
    (*(code *)*pxRam00000000000d3500)(1,&xRam000000000010bd9c);
  }
  return iVar4 != 0;
}

/* 0x6af18  size=388 */
void FUN_0006af18(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  uint4 uVar4;
  int4 *piVar5;
  uint4 uVar6;
  int4 iStack_70;
  xunknown4 xStack_6c;
  xunknown8 xStack_68;
  xunknown8 xStack_60;
  int8 iStack_58;
  
  pxVar2 = pxRam00000000000d3208;
  iVar1 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  if (cRam000000000010bdd0 == '\x01') {
    iStack_70 = 0;
    (*(code *)*pxRam00000000000d3208)(0x8ca6,&iStack_70);
    if (iStack_70 != iRam00000000000d8b88) {
      xStack_68 = 0;
      xStack_60 = 0;
      (*(code *)*pxVar2)(0xba2,&xStack_68);
      if (((int4)xStack_60 == iRam000000000010be2c) && (xStack_60._4_4_ == iRam000000000010be30)) {
        if (uRam000000000010bdd8 != 0) {
          xStack_6c = 0x84c0;
          (*(code *)*pxVar2)(0x84e0,&xStack_6c);
          pxVar3 = pxRam00000000000d3310;
          pxVar2 = pxRam00000000000d3300;
          uVar6 = 0;
          uVar4 = uRam000000000010bdd8;
          do {
            if ((uVar4 >> (uint8)(uVar6 & 0x1f) & 1) != 0) {
              (*(code *)*pxVar3)(uVar6 + 0x84c0);
              (*(code *)*pxVar2)(0xde1,iRam000000000010bdd4);
              uVar4 = uRam000000000010bdd8;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x20);
          (*(code *)*pxVar3)(xStack_6c);
        }
        piVar5 = (int4 *)0x10be70;
        uRam000000000010bdd8 = 0;
        cRam000000000010bdd0 = '\0';
      }
      else {
        piVar5 = (int4 *)0x10be78;
      }
      *piVar5 = *piVar5 + 1;
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6b59c  size=272 */
void FUN_0006b59c(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  uint4 uVar4;
  uint4 uVar5;
  xunknown4 xStack_5c;
  int8 iStack_58;
  
  iVar1 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  if (cRam000000000010bdd0 == '\x01') {
    if (uRam000000000010bdd8 != 0) {
      xStack_5c = 0x84c0;
      (*(code *)*pxRam00000000000d3208)(0x84e0,&xStack_5c);
      pxVar3 = pxRam00000000000d3310;
      pxVar2 = pxRam00000000000d3300;
      uVar5 = 0;
      uVar4 = uRam000000000010bdd8;
      do {
        if ((uVar4 >> (uint8)(uVar5 & 0x1f) & 1) != 0) {
          (*(code *)*pxVar3)(uVar5 + 0x84c0);
          (*(code *)*pxVar2)(0xde1,iRam000000000010bdd4);
          uVar4 = uRam000000000010bdd8;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x20);
      (*(code *)*pxVar3)(xStack_5c);
    }
    uRam000000000010bdd8 = 0;
    cRam000000000010bdd0 = '\0';
    iRam000000000010be74 = iRam000000000010be74 + 1;
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6c174  size=416 */
bool FUN_0006c174(int4 *param_1,int4 param_2,int4 param_3)

{
  xunknown8 *pxVar1;
  int4 iVar2;
  int4 *piVar3;
  
  piVar3 = param_1 + 1;
  if (*piVar3 != 0) {
    (*(code *)*pxRam00000000000d3250)(1,piVar3);
  }
  if (*param_1 != 0) {
    (*(code *)*pxRam00000000000d3308)(1,param_1);
  }
  pxVar1 = pxRam00000000000d32f8;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  (*(code *)*pxVar1)(1,param_1);
  (*(code *)*pxRam00000000000d3300)(0xde1,*param_1);
  (*(code *)*pxRam00000000000d3318)(0xde1,1,0x8058,param_2,param_3);
  pxVar1 = pxRam00000000000d3338;
  (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2601);
  (*(code *)*pxVar1)(0xde1,0x2800,0x2601);
  (*(code *)*pxVar1)(0xde1,0x2802,0x812f);
  (*(code *)*pxVar1)(0xde1,0x2803,0x812f);
  (*(code *)*pxRam00000000000d3240)(1,piVar3);
  (*(code *)*pxRam00000000000d3248)(0x8ca9,param_1[1]);
  (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,*param_1,0);
  pxVar1 = pxRam00000000000d3260;
  param_1[2] = param_2;
  param_1[3] = param_3;
  iVar2 = (*(code *)*pxVar1)(0x8ca9);
  return iVar2 == 0x8cd5;
}

/* 0x6d27c  size=8 */
void FUN_0006d27c(int8 param_1)

{
  xunknown8 *pxVar1;
  
  pxVar1 = *(xunknown8 **)(param_1 + 8);
  if (pxVar1 == (xunknown8 *)0x0) {
    return;
  }
  FUN_000748f0(param_1,*pxVar1);
  FUN_000748f0(param_1,pxVar1[1]);
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(pxVar1,0x20);
  return;
}

/* 0x6d284  size=8 */
void FUN_0006d284(int8 param_1)

{
  xunknown8 *pxVar1;
  
  pxVar1 = *(xunknown8 **)(param_1 + 8);
  if (pxVar1 == (xunknown8 *)0x0) {
    return;
  }
  FUN_00074938(*pxVar1);
  FUN_00074938(pxVar1[1]);
  if ((*(uint1 *)(pxVar1 + 8) & 1) != 0) {
    operator_delete_plt(pxVar1[10],pxVar1[8] & 0xfffffffffffffffe);
  }
  if ((*(uint1 *)(pxVar1 + 5) & 1) != 0) {
    operator_delete_plt(pxVar1[7],pxVar1[5] & 0xfffffffffffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(pxVar1,0x60);
  return;
}

/* 0x6dfa8  size=164 */
void FUN_0006dfa8(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6e04c  size=236 */
uint8 FUN_0006e04c(int8 *param_1,uint1 *param_2,xunknown8 param_3,uint8 param_4)

{
  uint8 uVar1;
  uint8 uVar2;
  uint1 uVar3;
  xunknown1 xVar4;
  int4 iVar5;
  int8 iVar6;
  uint8 uVar7;
  uint1 *puVar8;
  int8 iVar9;
  uint1 *puVar10;
  xunknown1 *pxVar11;
  uint4 uVar12;
  uint1 *puVar13;
  xunknown1 axVar14 [16];
  
  uVar3 = *param_2;
  uVar2 = (uint8)(uVar3 >> 1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *(uint8 *)(param_2 + 8);
  }
  iVar6 = strlen(param_3);
  uVar1 = uVar2 + iVar6;
  if (uVar1 < 0xfffffffffffffff0) {
    if (uVar1 < 0x17) {
      uVar12 = (int4)uVar1 << 1;
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(char *)param_1 = (char)uVar12;
    }
    else {
      uVar7 = operator_new_plt((uVar1 | 0xf) + 1);
      iVar9 = (uVar1 | 0xf) + 2;
      param_1[2] = uVar7;
      *param_1 = iVar9;
      param_1[1] = uVar1;
      uVar12 = (uint4)iVar9 & 0xff;
    }
    uVar1 = uVar7;
    if ((uVar12 & 1) == 0) {
      uVar1 = (int8)param_1 + 1;
    }
    if (uVar2 != 0) {
      puVar13 = *(uint1 **)(param_2 + 0x10);
      if ((uVar3 & 1) == 0) {
        puVar13 = param_2 + 1;
      }
      uVar7 = memmove(uVar1,puVar13,uVar2);
    }
    if (iVar6 != 0) {
      uVar7 = memmove(uVar1 + uVar2,param_3,iVar6);
    }
    *(xunknown1 *)(uVar1 + uVar2 + iVar6) = 0;
    return uVar7;
  }
  axVar14 = FUN_000664d4(param_1);
  pxVar11 = axVar14._8_8_;
  puVar8 = axVar14._0_8_;
  uVar2 = *(uint8 *)(puVar8 + 8);
  puVar13 = *(uint1 **)(puVar8 + 0x10);
  if ((*puVar8 & 1) == 0) {
    puVar13 = puVar8 + 1;
    uVar2 = (uint8)(*puVar8 >> 1);
  }
  iVar9 = strlen(pxVar11);
  iVar6 = uVar2 - param_4;
  if (uVar2 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (iVar9 != 0) {
    puVar8 = puVar13 + uVar2;
    if (iVar9 <= iVar6) {
      xVar4 = *pxVar11;
      puVar10 = puVar13 + param_4;
      do {
        puVar10 = (uint1 *)memchr(puVar10,xVar4,(iVar6 - iVar9) + 1);
        if (puVar10 == (uint1 *)0x0) break;
        iVar5 = memcmp(puVar10,pxVar11,iVar9);
        if (iVar5 == 0) goto code_r0x0006e1dc;
        puVar10 = puVar10 + 1;
        iVar6 = (int8)puVar8 - (int8)puVar10;
      } while (iVar9 <= iVar6);
    }
    puVar10 = puVar8;
code_r0x0006e1dc:
    param_4 = (int8)puVar10 - (int8)puVar13;
    if (puVar10 == puVar8) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}

/* 0x6e138  size=200 */
uint8 FUN_0006e138(uint1 *param_1,xunknown1 *param_2,uint8 param_3)

{
  uint1 *puVar1;
  uint8 uVar2;
  uint1 *puVar3;
  xunknown1 xVar4;
  int4 iVar5;
  int8 iVar6;
  uint1 *puVar7;
  int8 iVar8;
  
  uVar2 = *(uint8 *)(param_1 + 8);
  puVar3 = *(uint1 **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    puVar3 = param_1 + 1;
    uVar2 = (uint8)(*param_1 >> 1);
  }
  iVar6 = strlen(param_2);
  iVar8 = uVar2 - param_3;
  if (uVar2 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (iVar6 != 0) {
    puVar1 = puVar3 + uVar2;
    if (iVar6 <= iVar8) {
      xVar4 = *param_2;
      puVar7 = puVar3 + param_3;
      do {
        puVar7 = (uint1 *)memchr(puVar7,xVar4,(iVar8 - iVar6) + 1);
        if (puVar7 == (uint1 *)0x0) break;
        iVar5 = memcmp(puVar7,param_2,iVar6);
        if (iVar5 == 0) goto code_r0x0006e1dc;
        puVar7 = puVar7 + 1;
        iVar8 = (int8)puVar1 - (int8)puVar7;
      } while (iVar6 <= iVar8);
    }
    puVar7 = puVar1;
code_r0x0006e1dc:
    param_3 = (int8)puVar7 - (int8)puVar3;
    if (puVar7 == puVar1) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}

/* 0x7392c  size=640 */
uint8 FUN_0007392c(uint1 *param_1,uint1 *param_2,xunknown4 param_3)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  xunknown8 *pxVar4;
  xunknown8 *pxVar5;
  xunknown8 *pxVar6;
  uint1 uVar7;
  int8 iVar8;
  uint8 uVar9;
  uint8 uVar10;
  xunknown8 xVar11;
  int4 iStack_27c;
  uint1 *puStack_278;
  xunknown4 xStack_270;
  xunknown4 xStack_26c;
  xunknown4 xStack_268;
  uint4 uStack_264;
  uint8 uStack_260;
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
  xunknown8 xStack_a0;
  xunknown8 xStack_98;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  int8 iStack_68;
  
  iVar1 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar1 + 0x28);
  iVar8 = eglGetCurrentContext();
  if (iVar8 == 0) {
code_r0x00073ab8:
    uVar9 = 1;
    goto code_r0x00073b74;
  }
  if ((uRam000000000010bfa0 & 1) == 0) {
    uStack_260 = uStack_260 & 0xffffffff00000000;
    xStack_270 = 2;
    xStack_26c = 0;
    xStack_268 = 0;
    uStack_264 = uStack_264 & 0xffffff00;
    uVar7 = gl__Load_plt(&xStack_270,pcRam000000000010bf60);
    uRam000000000010bfa0 = uVar7 & 1;
    if ((uVar7 & 1) == 0) goto code_r0x00073ab8;
  }
  pxVar2 = pxRam00000000000d3370;
  uVar9 = (*(code *)*pxRam00000000000d3370)(0x8b31);
  pxVar3 = pxRam00000000000d3378;
  puStack_278 = *(uint1 **)(param_1 + 0x10);
  uVar10 = uVar9 & 0xffffffff;
  if ((*param_1 & 1) == 0) {
    puStack_278 = param_1 + 1;
  }
  (*(code *)*pxRam00000000000d3378)(uVar9,1,&puStack_278,0);
  pxVar4 = pxRam00000000000d3380;
  (*(code *)*pxRam00000000000d3380)(uVar10);
  pxVar5 = pxRam00000000000d3388;
  iStack_27c = 0;
  (*(code *)*pxRam00000000000d3388)(uVar10,0x8b81,&iStack_27c);
  pxVar6 = pxRam00000000000d3398;
  if (iStack_27c == 0) {
    uVar9 = 0;
    xVar11 = 0x34bdb;
code_r0x00073acc:
    xStack_1e8 = 0;
    xStack_1f0 = 0;
    xStack_1d8 = 0;
    xStack_1e0 = 0;
    xStack_1c8 = 0;
    xStack_1d0 = 0;
    xStack_1b8 = 0;
    xStack_1c0 = 0;
    xStack_1a8 = 0;
    xStack_1b0 = 0;
    xStack_198 = 0;
    xStack_1a0 = 0;
    xStack_188 = 0;
    xStack_190 = 0;
    xStack_178 = 0;
    xStack_180 = 0;
    xStack_168 = 0;
    xStack_170 = 0;
    xStack_158 = 0;
    xStack_160 = 0;
    xStack_148 = 0;
    xStack_150 = 0;
    xStack_138 = 0;
    xStack_140 = 0;
    xStack_128 = 0;
    xStack_130 = 0;
    xStack_118 = 0;
    xStack_120 = 0;
    xStack_108 = 0;
    xStack_110 = 0;
    xStack_f8 = 0;
    xStack_100 = 0;
    xStack_e8 = 0;
    xStack_f0 = 0;
    xStack_d8 = 0;
    xStack_e0 = 0;
    xStack_c8 = 0;
    xStack_d0 = 0;
    xStack_b8 = 0;
    xStack_c0 = 0;
    xStack_a8 = 0;
    xStack_b0 = 0;
    xStack_98 = 0;
    xStack_a0 = 0;
    xStack_88 = 0;
    xStack_90 = 0;
    xStack_78 = 0;
    xStack_80 = 0;
    xStack_228 = 0;
    xStack_230 = 0;
    xStack_218 = 0;
    xStack_220 = 0;
    xStack_208 = 0;
    xStack_210 = 0;
    xStack_1f8 = 0;
    xStack_200 = 0;
    xStack_268 = 0;
    uStack_264 = 0;
    xStack_270 = 0;
    xStack_26c = 0;
    xStack_258 = 0;
    uStack_260 = 0;
    xStack_248 = 0;
    xStack_250 = 0;
    xStack_238 = 0;
    xStack_240 = 0;
    (*(code *)*pxRam00000000000d3390)(uVar10,0x200,0,&xStack_270);
    (*pcRam000000000010bf60)(1,0x2cefc /* "world: flags %08X %s rewrite rejected by the driver - vanilla shader u..." */,param_3,xVar11,&xStack_270);
  }
  else {
    (*(code *)*pxRam00000000000d3398)(uVar10);
    uVar9 = (*(code *)*pxVar2)(0x8b30);
    puStack_278 = *(uint1 **)(param_2 + 0x10);
    uVar10 = uVar9 & 0xffffffff;
    if ((*param_2 & 1) == 0) {
      puStack_278 = param_2 + 1;
    }
    (*(code *)*pxVar3)(uVar9,1,&puStack_278,0);
    (*(code *)*pxVar4)(uVar10);
    iStack_27c = 0;
    (*(code *)*pxVar5)(uVar10,0x8b81,&iStack_27c);
    uVar9 = (uint8)(iStack_27c != 0);
    if (iStack_27c == 0) {
      xVar11 = 0x23f74;
      goto code_r0x00073acc;
    }
  }
  (*(code *)*pxVar6)(uVar10);
  iRam000000000010bfa4 = iRam000000000010bfa4 + 1;
code_r0x00073b74:
  if (*(int8 *)(iVar1 + 0x28) == iStack_68) {
    return uVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*got___stack_chk_fail)();
  return uVar9;
}

/* 0x73bac  size=84 */
void FUN_00073bac(uint8 *param_1)

{
  if ((param_1[3] & 1) != 0) {
    operator_delete_plt(param_1[5],param_1[3] & 0xfffffffffffffffe);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(param_1[2],*param_1 & 0xfffffffffffffffe);
  return;
}

/* 0x74268  size=204 */
uint8 FUN_00074268(uint1 *param_1,uint1 *param_2,uint8 param_3)

{
  uint1 *puVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint1 *puVar4;
  uint1 *puVar5;
  uint1 uVar6;
  int4 iVar7;
  uint1 *puVar8;
  int8 iVar9;
  
  uVar2 = *(uint8 *)(param_1 + 8);
  puVar4 = *(uint1 **)(param_1 + 0x10);
  uVar3 = *(uint8 *)(param_2 + 8);
  puVar5 = *(uint1 **)(param_2 + 0x10);
  if ((*param_1 & 1) == 0) {
    puVar4 = param_1 + 1;
    uVar2 = (uint8)(*param_1 >> 1);
  }
  if ((*param_2 & 1) == 0) {
    puVar5 = param_2 + 1;
    uVar3 = (uint8)(*param_2 >> 1);
  }
  iVar9 = uVar2 - param_3;
  if (uVar2 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (uVar3 != 0) {
    puVar1 = puVar4 + uVar2;
    if ((int8)uVar3 <= iVar9) {
      uVar6 = *puVar5;
      puVar8 = puVar4 + param_3;
      do {
        puVar8 = (uint1 *)memchr(puVar8,uVar6,(iVar9 - uVar3) + 1);
        if (puVar8 == (uint1 *)0x0) break;
        iVar7 = memcmp(puVar8,puVar5,uVar3);
        if (iVar7 == 0) goto code_r0x00074310;
        puVar8 = puVar8 + 1;
        iVar9 = (int8)puVar1 - (int8)puVar8;
      } while ((int8)uVar3 <= iVar9);
    }
    puVar8 = puVar1;
code_r0x00074310:
    param_3 = (int8)puVar8 - (int8)puVar4;
    if (puVar8 == puVar1) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}

/* 0x74334  size=28 */
void FUN_00074334(void)

{
                    /* WARNING: Could not recover jumptable at 0x000c9e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3e78)();
  return;
}

/* 0x7456c  size=80 */
void FUN_0007456c(xunknown8 *param_1,xunknown8 param_2,uint1 *param_3)

{
  uint8 uVar1;
  uint1 *puVar2;
  xunknown8 *pxVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  
  uVar1 = *(uint8 *)(param_3 + 8);
  puVar2 = *(uint1 **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    puVar2 = param_3 + 1;
    uVar1 = (uint8)(*param_3 >> 1);
  }
  pxVar3 = (xunknown8 *)std____ndk1__basic_string__append_plt(param_2,puVar2,uVar1);
  xVar6 = pxVar3[1];
  xVar5 = *pxVar3;
  xVar4 = pxVar3[2];
  *pxVar3 = 0;
  pxVar3[1] = 0;
  param_1[1] = xVar6;
  *param_1 = xVar5;
  param_1[2] = xVar4;
  pxVar3[2] = 0;
  return;
}

/* 0x745bc  size=88 */
void FUN_000745bc(xunknown8 *param_1,uint1 *param_2,xunknown8 param_3)

{
  uint8 uVar1;
  uint1 *puVar2;
  xunknown8 *pxVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  
  uVar1 = *(uint8 *)(param_2 + 8);
  puVar2 = *(uint1 **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    puVar2 = param_2 + 1;
    uVar1 = (uint8)(*param_2 >> 1);
  }
  pxVar3 = (xunknown8 *)std____ndk1__basic_string__insert_plt_1(param_3,0,puVar2,uVar1);
  xVar6 = pxVar3[1];
  xVar5 = *pxVar3;
  xVar4 = pxVar3[2];
  *pxVar3 = 0;
  pxVar3[1] = 0;
  param_1[1] = xVar6;
  *param_1 = xVar5;
  param_1[2] = xVar4;
  pxVar3[2] = 0;
  return;
}

/* 0x74614  size=80 */
void FUN_00074614(xunknown8 *param_1,xunknown8 param_2,uint1 *param_3)

{
  uint8 uVar1;
  uint1 *puVar2;
  xunknown8 *pxVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  
  uVar1 = *(uint8 *)(param_3 + 8);
  puVar2 = *(uint1 **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    puVar2 = param_3 + 1;
    uVar1 = (uint8)(*param_3 >> 1);
  }
  pxVar3 = (xunknown8 *)std____ndk1__basic_string__append_plt(param_2,puVar2,uVar1);
  xVar6 = pxVar3[1];
  xVar5 = *pxVar3;
  xVar4 = pxVar3[2];
  *pxVar3 = 0;
  pxVar3[1] = 0;
  param_1[1] = xVar6;
  *param_1 = xVar5;
  param_1[2] = xVar4;
  pxVar3[2] = 0;
  return;
}

/* 0x74760  size=28 */
void FUN_00074760(xunknown8 param_1,uint1 *param_2)

{
  uint8 uVar1;
  uint1 *puVar2;
  
  uVar1 = *(uint8 *)(param_2 + 8);
  puVar2 = *(uint1 **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    puVar2 = param_2 + 1;
    uVar1 = (uint8)(*param_2 >> 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000c998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c28)(param_1,puVar2,uVar1);
  return;
}

/* 0x7477c  size=260 */
void FUN_0007477c(int8 *param_1,uint1 *param_2,uint1 *param_3,uint8 param_4)

{
  uint8 uVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint1 uVar4;
  uint1 uVar5;
  int8 iVar6;
  int8 *piVar7;
  int8 iVar8;
  xunknown8 *pxVar9;
  uint4 uVar10;
  uint1 *puVar11;
  xunknown1 axVar12 [16];
  
  uVar4 = *param_2;
  uVar5 = *param_3;
  uVar2 = (uint8)(uVar4 >> 1);
  if ((uVar4 & 1) != 0) {
    uVar2 = *(uint8 *)(param_2 + 8);
  }
  uVar3 = (uint8)(uVar5 >> 1);
  if ((uVar5 & 1) != 0) {
    uVar3 = *(uint8 *)(param_3 + 8);
  }
  uVar1 = uVar3 + uVar2;
  if (0xffffffffffffffef < uVar1) {
    axVar12 = FUN_000664d4(param_1);
    piVar7 = axVar12._0_8_;
    if (param_4 < 0x17) {
      iVar8 = (int8)piVar7 + 1;
      *(char *)piVar7 = (char)((int4)param_4 << 1);
    }
    else {
      if (0xffffffffffffffef < param_4) {
        axVar12 = FUN_000664d4(piVar7);
        pxVar9 = axVar12._8_8_;
        if (pxVar9 == (xunknown8 *)0x0) {
          return;
        }
        FUN_000748f0(axVar12._0_8_,*pxVar9);
        FUN_000748f0(axVar12._0_8_,pxVar9[1]);
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam00000000000d3c08)(pxVar9,0x20);
        return;
      }
      iVar8 = operator_new_plt((param_4 | 0xf) + 1);
      piVar7[1] = param_4;
      piVar7[2] = iVar8;
      *piVar7 = (param_4 | 0xf) + 2;
    }
                    /* WARNING: Could not recover jumptable at 0x000c9a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_memmove)(iVar8,axVar12._8_8_,param_4 + 1);
    return;
  }
  if (uVar1 < 0x17) {
    uVar10 = (int4)uVar1 << 1;
    iVar6 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(char *)param_1 = (char)uVar10;
  }
  else {
    iVar6 = operator_new_plt((uVar1 | 0xf) + 1);
    iVar8 = (uVar1 | 0xf) + 2;
    param_1[2] = iVar6;
    *param_1 = iVar8;
    param_1[1] = uVar1;
    uVar10 = (uint4)iVar8 & 0xff;
  }
  if ((uVar10 & 1) == 0) {
    iVar6 = (int8)param_1 + 1;
  }
  if (uVar2 != 0) {
    puVar11 = *(uint1 **)(param_2 + 0x10);
    if ((uVar4 & 1) == 0) {
      puVar11 = param_2 + 1;
    }
    memmove(iVar6,puVar11,uVar2);
  }
  if (uVar3 != 0) {
    puVar11 = *(uint1 **)(param_3 + 0x10);
    if ((uVar5 & 1) == 0) {
      puVar11 = param_3 + 1;
    }
    memmove(iVar6 + uVar2,puVar11,uVar3);
  }
  *(xunknown1 *)(iVar6 + uVar2 + uVar3) = 0;
  return;
}

/* 0x74880  size=112 */
void FUN_00074880(int8 *param_1,xunknown8 param_2,uint8 param_3)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown1 axVar3 [16];
  
  if (param_3 < 0x17) {
    iVar1 = (int8)param_1 + 1;
    *(char *)param_1 = (char)((int4)param_3 << 1);
  }
  else {
    if (0xffffffffffffffef < param_3) {
      axVar3 = FUN_000664d4(param_1);
      pxVar2 = axVar3._8_8_;
      if (pxVar2 == (xunknown8 *)0x0) {
        return;
      }
      FUN_000748f0(axVar3._0_8_,*pxVar2);
      FUN_000748f0(axVar3._0_8_,pxVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam00000000000d3c08)(pxVar2,0x20);
      return;
    }
    iVar1 = operator_new_plt((param_3 | 0xf) + 1);
    param_1[1] = param_3;
    param_1[2] = iVar1;
    *param_1 = (param_3 | 0xf) + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000c9a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_memmove)(iVar1,param_2,param_3 + 1);
  return;
}

/* 0x748f0  size=72 */
void FUN_000748f0(xunknown8 param_1,xunknown8 *param_2)

{
  if (param_2 == (xunknown8 *)0x0) {
    return;
  }
  FUN_000748f0(param_1,*param_2);
  FUN_000748f0(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(param_2,0x20);
  return;
}

/* 0x74938  size=108 */
void FUN_00074938(xunknown8 *param_1)

{
  if (param_1 == (xunknown8 *)0x0) {
    return;
  }
  FUN_00074938(*param_1);
  FUN_00074938(param_1[1]);
  if ((*(uint1 *)(param_1 + 8) & 1) != 0) {
    operator_delete_plt(param_1[10],param_1[8] & 0xfffffffffffffffe);
  }
  if ((*(uint1 *)(param_1 + 5) & 1) != 0) {
    operator_delete_plt(param_1[7],param_1[5] & 0xfffffffffffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(param_1,0x60);
  return;
}

/* 0x749a4  size=460 */
void FUN_000749a4(int8 *param_1,int8 *param_2)

{
  int8 *piVar1;
  int8 *piVar2;
  int8 *piVar3;
  int8 iVar4;
  xunknown8 *pxVar5;
  int8 *piVar6;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  if (param_2 != param_1) {
    do {
      piVar2 = (int8 *)param_2[2];
      if ((*(uint1 *)(piVar2 + 3) & 1) != 0) {
        return;
      }
      piVar1 = (int8 *)piVar2[2];
      piVar3 = (int8 *)*piVar1;
      if (piVar2 == piVar3) {
        iVar4 = piVar1[1];
        if ((iVar4 == 0) || ((*(uint1 *)(iVar4 + 0x18) & 1) != 0)) {
          if (param_2 == (int8 *)*piVar2) goto code_r0x00074acc;
          piVar6 = (int8 *)piVar2[1];
          iVar4 = *piVar6;
          piVar2[1] = iVar4;
          if (iVar4 == 0) {
            piVar6[2] = (int8)piVar1;
code_r0x00074ab8:
            *piVar1 = (int8)piVar6;
          }
          else {
            *(int8 **)(iVar4 + 0x10) = piVar2;
            piVar1 = (int8 *)piVar2[2];
            piVar3 = (int8 *)*piVar1;
            piVar6[2] = (int8)piVar1;
            if (piVar2 == piVar3) goto code_r0x00074ab8;
            piVar1[1] = (int8)piVar6;
          }
          piVar2[2] = (int8)piVar6;
          piVar1 = (int8 *)piVar6[2];
          *piVar6 = (int8)piVar2;
          piVar3 = (int8 *)*piVar1;
          piVar2 = piVar6;
code_r0x00074acc:
          iVar4 = piVar3[1];
          *(xunknown1 *)(piVar2 + 3) = 1;
          *(xunknown1 *)(piVar1 + 3) = 0;
          *piVar1 = iVar4;
          if (iVar4 != 0) {
            *(int8 **)(iVar4 + 0x10) = piVar1;
          }
          pxVar5 = (xunknown8 *)piVar1[2];
          piVar2 = (int8 *)*pxVar5;
          piVar3[2] = (int8)pxVar5;
          if (piVar1 == piVar2) {
            *pxVar5 = piVar3;
          }
          else {
            pxVar5[1] = piVar3;
          }
          piVar3[1] = (int8)piVar1;
          piVar1[2] = (int8)piVar3;
          return;
        }
        *(xunknown1 *)(piVar2 + 3) = 1;
        *(bool *)(piVar1 + 3) = piVar1 == param_1;
        *(xunknown1 *)(iVar4 + 0x18) = 1;
      }
      else {
        if ((piVar3 == (int8 *)0x0) || ((*(uint1 *)(piVar3 + 3) & 1) != 0)) {
          piVar3 = (int8 *)*piVar2;
          if (param_2 == piVar3) {
            iVar4 = piVar3[1];
            *piVar2 = iVar4;
            if (iVar4 != 0) {
              *(int8 **)(iVar4 + 0x10) = piVar2;
              piVar1 = (int8 *)piVar2[2];
            }
            piVar6 = (int8 *)*piVar1;
            piVar3[2] = (int8)piVar1;
            if (piVar2 == piVar6) {
              *piVar1 = (int8)piVar3;
            }
            else {
              piVar1[1] = (int8)piVar3;
            }
            piVar2[2] = (int8)piVar3;
            piVar1 = (int8 *)piVar3[2];
            piVar3[1] = (int8)piVar2;
          }
          else {
            piVar3 = piVar2;
          }
          piVar2 = (int8 *)piVar1[1];
          *(xunknown1 *)(piVar3 + 3) = 1;
          iVar4 = *piVar2;
          *(xunknown1 *)(piVar1 + 3) = 0;
          piVar1[1] = iVar4;
          if (iVar4 != 0) {
            *(int8 **)(iVar4 + 0x10) = piVar1;
          }
          pxVar5 = (xunknown8 *)piVar1[2];
          piVar3 = (int8 *)*pxVar5;
          piVar2[2] = (int8)pxVar5;
          if (piVar1 == piVar3) {
            *pxVar5 = piVar2;
          }
          else {
            pxVar5[1] = piVar2;
          }
          *piVar2 = (int8)piVar1;
          piVar1[2] = (int8)piVar2;
          return;
        }
        *(xunknown1 *)(piVar2 + 3) = 1;
        *(bool *)(piVar1 + 3) = piVar1 == param_1;
        *(xunknown1 *)(piVar3 + 3) = 1;
      }
      param_2 = piVar1;
    } while (piVar1 != param_1);
  }
  return;
}

/* 0x74b70  size=164 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00074b70(void)

{
  _uRam000000000010bee0 = 0;
  uRam000000000010bee8 = 0;
  xRam000000000010bef0 = 0;
  __cxa_atexit(xRam00000000000d3618,&uRam000000000010bee0,0xcee00);
  __cxa_atexit(xRam00000000000d3670,0x10bef8,0xcee00);
  iRam000000000010bf30 = 0;
  pxRam000000000010bf28 = 0;
  piRam000000000010bf20 = &pxRam000000000010bf28;
  __cxa_atexit(FUN_0006d27c,&piRam000000000010bf20,0xcee00);
  iRam000000000010bf48 = 0;
  pxRam000000000010bf40 = 0;
  piRam000000000010bf38 = &pxRam000000000010bf40;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0006d284,&piRam000000000010bf38,0xcee00);
  return;
}

/* 0x74c14  size=88 */
void FUN_00074c14(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)param_1[2];
  while (piVar1 != (int8 *)0x0) {
    iVar2 = *piVar1;
    operator_delete_plt(piVar1,0x18);
    piVar1 = (int8 *)iVar2;
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,param_1[1] << 3);
  return;
}

/* 0x75180  size=172 */
void FUN_00075180(xunknown4 param_1)

{
  xunknown8 *pxVar1;
  xunknown4 xVar2;
  float4 fVar3;
  
  pxVar1 = pxRam00000000000d3338;
  (*(code *)*pxRam00000000000d3338)(0xde1,0x813d,param_1);
  xVar2 = 0x2703;
  if (cRam00000000000d8c65 == '\0') {
    xVar2 = 0x2701;
  }
  (*(code *)*pxVar1)(0xde1,0x2801,xVar2);
  if ((1.0 < fRam00000000000d8c58) && (1 < (int4)uRam00000000000d8c60)) {
    fVar3 = (float4)uRam00000000000d8c60;
    if (fRam00000000000d8c58 <= (float4)uRam00000000000d8c60) {
      fVar3 = fRam00000000000d8c58;
    }
                    /* WARNING: Could not recover jumptable at 0x0007521c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*pxRam00000000000d32d0)(fVar3,0xde1,0x84fe);
    return;
  }
  return;
}

/* 0x75ca8  size=300 */
void FUN_00075ca8(xunknown8 *param_1,int8 *param_2,int8 *param_3)

{
  uint8 uVar1;
  int8 *piVar2;
  uint8 uVar3;
  uint8 uVar4;
  int8 *piVar5;
  uint8 uVar6;
  int8 iVar7;
  uint8 uVar8;
  int8 iVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar6 = uVar4 - 1;
  if ((uVar4 & uVar6) == 0) {
    uVar3 = uVar6 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  iVar7 = *param_2;
  piVar2 = *(int8 **)(iVar7 + uVar3 * 8);
  do {
    piVar5 = piVar2;
    piVar2 = (int8 *)*piVar5;
  } while ((int8 *)*piVar5 != param_3);
  if (piVar5 != param_2 + 2) {
    uVar8 = piVar5[1];
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto code_r0x00075d5c;
  }
  if (*param_3 != 0) {
    uVar8 = *(uint8 *)(*param_3 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto code_r0x00075d5c;
  }
  *(xunknown8 *)(iVar7 + uVar3 * 8) = 0;
code_r0x00075d5c:
  iVar9 = *param_3;
  if (iVar9 != 0) {
    uVar8 = *(uint8 *)(iVar9 + 8);
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar4 <= uVar8) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar6 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(int8 **)(iVar7 + uVar8 * 8) = piVar5;
      iVar9 = *param_3;
    }
  }
  iVar7 = param_2[3];
  *piVar5 = iVar9;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = iVar7 + -1;
  *(xunknown1 *)(param_1 + 2) = 1;
  return;
}

/* 0x75dd4  size=112 */
void FUN_00075dd4(void)

{
  xRam000000000010bfc8 = 0x3f800000;
  uRam000000000010bfb0 = 0;
  iRam000000000010bfa8 = 0;
  xRam000000000010bfc0 = 0;
  xRam000000000010bfb8 = 0;
  __cxa_atexit(FUN_00074c14,&iRam000000000010bfa8,0xcee00);
  xRam000000000010bff0 = 0x3f800000;
  uRam000000000010bfd8 = 0;
  iRam000000000010bfd0 = 0;
  xRam000000000010bfe8 = 0;
  xRam000000000010bfe0 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00074c14,&iRam000000000010bfd0,0xcee00);
  return;
}

/* 0x75e44  size=32 */
void FUN_00075e44(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x75e64  size=32 */
void FUN_00075e64(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  param_1[1] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x76cb4  size=3928 */
void FUN_00076cb4(void)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  float8 fVar4;
  xunknown8 *pxVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  xunknown8 *pxVar8;
  uint4 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint1 uVar13;
  char cVar14;
  uint8 *puVar15;
  float4 *pfVar16;
  int8 iVar17;
  xunknown8 *pxVar18;
  xunknown4 *pxVar19;
  float4 fVar20;
  xunknown4 xVar21;
  float8 fVar22;
  xunknown8 xVar23;
  xunknown8 xVar24;
  float4 fVar25;
  uint8 uVar26;
  float4 fVar28;
  xunknown8 xVar27;
  xunknown8 xVar29;
  float4 fVar30;
  float4 fVar31;
  uint8 uVar32;
  xunknown8 xVar33;
  xunknown8 xVar34;
  float4 fVar35;
  xunknown8 xVar36;
  xunknown8 xVar37;
  xunknown8 xVar38;
  int4 iVar39;
  xunknown4 xVar40;
  int4 iVar41;
  float4 fVar42;
  xunknown4 xStack_1ec;
  xunknown8 xStack_1e8;
  xunknown8 xStack_1e0;
  xunknown8 xStack_1d8;
  uint8 uStack_1d0;
  int8 iStack_1c8;
  xunknown8 xStack_1c0;
  xunknown4 xStack_1b8;
  xunknown4 axStack_1b0 [16];
  xunknown4 xStack_170;
  int4 iStack_16c;
  int4 iStack_168;
  xunknown4 xStack_164;
  xunknown4 xStack_160;
  int4 iStack_15c;
  int4 iStack_158;
  xunknown4 xStack_154;
  xunknown8 xStack_150;
  xunknown8 xStack_148;
  xunknown8 xStack_140;
  xunknown8 xStack_138;
  xunknown8 xStack_130;
  xunknown8 xStack_128;
  int4 iStack_120;
  xunknown4 xStack_11c;
  xunknown4 xStack_118;
  uint4 uStack_114;
  uint8 uStack_110;
  xunknown8 xStack_108;
  xunknown8 xStack_100;
  xunknown8 xStack_f8;
  xunknown8 xStack_f0;
  xunknown8 xStack_e8;
  xunknown8 xStack_e0;
  float4 fStack_d8;
  xunknown4 xStack_d4;
  xunknown8 xStack_d0;
  xunknown8 xStack_c8;
  xunknown8 xStack_c0;
  xunknown8 xStack_b8;
  int8 iStack_a8;
  
  iVar1 = tpidr_el0;
  iStack_a8 = *(int8 *)(iVar1 + 0x28);
  clock_gettime(1,&iStack_120);
  iVar2 = CONCAT44(xStack_11c,iStack_120);
  iVar3 = CONCAT44(uStack_114,xStack_118);
  cRam000000000010c0e8 = 0;
  uRam000000000010c0e9 = 0;
  if (piRam000000000010c050 != piRam000000000010c058) {
    if ((uRam000000000010c150 & 1) == 0) {
      uStack_110 = uStack_110 & 0xffffffff00000000;
      iStack_120 = 2;
      xStack_11c = 0;
      xStack_118 = 0;
      uStack_114 = uStack_114 & 0xffffff00;
      uVar13 = gl__Load_plt(&iStack_120,pcRam000000000010c0d8);
      uRam000000000010c150 = uVar13 & 1;
      if ((uVar13 & 1) == 0) goto code_r0x00077b84;
    }
    clock_gettime(1,&iStack_120);
    fVar22 = (float8)CONCAT44(xStack_11c,iStack_120) +
             fRam0000000000022270 * (float8)CONCAT44(uStack_114,xStack_118);
    if (fRam000000000010c158 == 0.0) {
      fRam000000000010c158 = fVar22;
    }
    fVar22 = (float8)fmod(fVar22 - fRam000000000010c158,0x40ac200000000000);
    pxVar5 = pxRam00000000000d3208;
    if (xRam000000000010c110 == (float4 *)0x0) {
      fVar42 = 0.3;
    }
    else {
      fVar42 = *xRam000000000010c110;
    }
    xStack_b8 = xRam0000000000022078;
    xStack_c0 = iRam0000000000022070;
    if (((iRam000000000010c118 != 0) && (iRam000000000010c120 != (uint4 *)0x0)) &&
       (*iRam000000000010c120 < 0x10)) {
      pfVar16 = (float4 *)(iRam000000000010c118 + (uint8)*iRam000000000010c120 * 0xc);
      fVar25 = *pfVar16;
      fVar20 = SQRT(pfVar16[1] * pfVar16[1] + fVar25 * fVar25 + pfVar16[2] * pfVar16[2]);
      bVar10 = false;
      if ((0.0001 < fVar20) && (bVar10 = false, !NAN(fVar20))) {
        bVar10 = fVar20 < 10000.0;
      }
      if (bVar10) {
        xStack_c0 = CONCAT44(pfVar16[1] / fVar20,fVar25 / fVar20);
        fVar20 = pfVar16[2] / fVar20;
        fVar25 = 0.0;
        if ((0.08 <= fVar20) && (fVar25 = 1.0, fVar20 <= 0.25)) {
          fVar25 = (fVar20 + -0.08) / 0.17;
        }
        fVar31 = 0.0;
        if (xRam000000000010c130 != (float4 *)0x0) {
          fVar30 = *xRam000000000010c130;
          bVar10 = true;
          bVar12 = false;
          if (fVar30 <= 1.0) {
            bVar10 = false;
            bVar12 = true;
            if (!NAN(fVar30)) {
              bVar10 = fVar30 < 0.0;
              bVar12 = false;
            }
          }
          fVar31 = 0.0;
          if (bVar10 == bVar12) {
            fVar31 = fVar30;
          }
        }
        xStack_b8 = CONCAT44(fVar25 * (fVar31 * -0.8 + 1.0),fVar20);
      }
    }
    if (iRam00000000000d8c6c < 0) {
      iStack_120 = 0;
      (*(code *)*pxRam00000000000d3208)(0x8872,&iStack_120);
      iVar39 = iStack_120 + -1;
      if (iStack_120 < 0xb) {
        iVar39 = 0;
      }
      iRam00000000000d8c6c = 0xf;
      if (iStack_120 < 0x10) {
        iRam00000000000d8c6c = iVar39;
      }
      iRam00000000000d8c70 = iRam00000000000d8c6c + -2;
      if (iRam00000000000d8c6c < 10) {
        iRam00000000000d8c70 = 0;
      }
      iRam00000000000d8c74 = iRam00000000000d8c6c + -4;
      if (iRam00000000000d8c6c < 0xc) {
        iRam00000000000d8c74 = 0;
      }
      if (iRam00000000000d8c6c == 0) {
        fRam000000000010c10c = 0.0;
        (*pcRam000000000010c0d8)(1,0x28e6d /* "world: only %d texture units - SSR and rain ripples off" */,iStack_120);
      }
      else {
        (*pcRam000000000010c0d8)
                  (0,0x2d6f1 /* "world: SSR texture on unit %d, sky probe %d, rain ripples %d, puddles ..." */,iRam00000000000d8c6c,iRam00000000000d8c6c + -1,iRam00000000000d8c70,
                   iRam00000000000d8c70 + -1);
      }
    }
    xStack_d0 = 0;
    xStack_c8 = 0;
    (*(code *)*pxVar5)(0xba2,&xStack_d0);
    xStack_1d8 = 0;
    compat__SceneSize_plt((int8)&xStack_1d8 + 4,&xStack_1d8);
    puVar9 = puRam00000000000d3610;
    bVar10 = (int4)xStack_c8 == xStack_1d8._4_4_;
    bVar12 = xStack_c8._4_4_ == (int4)xStack_1d8;
    fVar20 = 0.0;
    if (xRam000000000010c140 != (float4 *)0x0) {
      fVar31 = *xRam000000000010c140;
      fVar25 = 1.0;
      if (fVar31 <= 1.0) {
        fVar25 = fVar31;
      }
      fVar20 = 0.0;
      if (0.0 <= fVar31) {
        fVar20 = fVar25;
      }
    }
    fVar25 = 0.0;
    if (xRam000000000010c138 != (float4 *)0x0) {
      fVar30 = *xRam000000000010c138;
      fVar31 = 1.0;
      if (fVar30 <= 1.0) {
        fVar31 = fVar30;
      }
      fVar25 = 0.0;
      if (0.0 <= fVar30) {
        fVar25 = fVar31;
      }
    }
    if ((xRam000000000010c148 != (uint1 *)0x0) && (*xRam000000000010c148 != 0)) {
      fVar25 = 0.0;
    }
    fVar31 = 0.0;
    fVar30 = 1.0;
    if (xRam000000000010c104 <= 1.0) {
      fVar30 = xRam000000000010c104;
    }
    xStack_d4 = 0;
    if (xRam000000000010c104 <= 0.0) {
      fVar30 = fVar25;
    }
    if (bVar10 && bVar12) {
      fVar31 = fVar30;
      if ((*puRam00000000000d3610 & 0x400) != 0) {
        fVar31 = 0.0;
      }
      iRam000000000010c0fc = iRam000000000010c0fc + 1;
      cRam000000000010c0e8 = 1;
      if ((0.0 < fVar31) || ((xRam000000000010c108 & 1) != 0)) {
        xStack_d4 = 0x3f800000;
        xRam000000000010c0fa = 1;
        iRam000000000010c100 = iRam000000000010c0fc;
      }
      else {
        xStack_d4 = 0x3f800000;
      }
    }
    fStack_d8 = 0.75;
    xStack_e0 = xRam0000000000022210;
    xStack_b8 = CONCAT44((fVar20 * -0.85 + 1.0) * xStack_b8._4_4_,(float4)xStack_b8);
    if ((iRam000000000010c128 != (code *)0x0) &&
       (puVar15 = (uint8 *)(*iRam000000000010c128)(), puVar15 != (uint8 *)0x0)) {
      uVar26 = *puVar15;
      fVar25 = *(float4 *)(puVar15 + 1);
      fVar30 = (float4)(uVar26 >> 0x20);
      if ((1.5 < (float4)uVar26) || ((1.5 < fVar30 || (1.5 < fVar25)))) {
        uVar26 = CONCAT44(fVar30 / 255.0,(float4)uVar26 / 255.0);
        fVar25 = fVar25 / 255.0;
      }
      fVar30 = (float4)uVar26;
      if (((!NAN(fVar30)) && (fVar28 = (float4)(uVar26 >> 0x20), !NAN(fVar28))) && (!NAN(fVar25))) {
        uVar32 = NEON_fmov(0x3f800000,4);
        iVar39 = -(uint4)(fVar30 < 0.0);
        iVar41 = -(uint4)(fVar28 < 0.0);
        fVar35 = 1.0;
        if (fVar25 <= 1.0) {
          fVar35 = fVar25;
        }
        uVar26 = uVar26 ^ (uVar26 ^ uVar32) &
                          CONCAT44(-(uint4)((float4)(uVar32 >> 0x20) < fVar28),
                                   -(uint4)((float4)uVar32 < fVar30));
        xStack_e0 = CONCAT17((uint1)(uVar26 >> 0x38) & ~(uint1)((uint4)iVar41 >> 0x18),
                             CONCAT16((uint1)(uVar26 >> 0x30) & ~(uint1)((uint4)iVar41 >> 0x10),
                                      CONCAT15((uint1)(uVar26 >> 0x28) &
                                               ~(uint1)((uint4)iVar41 >> 8),
                                               CONCAT14((uint1)(uVar26 >> 0x20) & ~(uint1)iVar41,
                                                        CONCAT13((uint1)(uVar26 >> 0x18) &
                                                                 ~(uint1)((uint4)iVar39 >> 0x18),
                                                                 CONCAT12((uint1)(uVar26 >> 0x10) &
                                                                          ~(uint1)((uint4)iVar39 >>
                                                                                  0x10),
                                                                          CONCAT11((uint1)(uVar26 >>
                                                                                          8) &
                                                                                   ~(uint1)((uint4)
                                                  iVar39 >> 8),(uint1)uVar26 & ~(uint1)iVar39)))))))
        ;
        fStack_d8 = 0.0;
        if (0.0 <= fVar25) {
          fStack_d8 = fVar35;
        }
      }
    }
    fVar30 = xStack_e0._4_4_ * 0.5 + (float4)xStack_e0 * 0.3 + fStack_d8 * 0.2;
    iVar39 = iRam000000000010c160 + 1;
    fVar25 = 0.85;
    if (fVar20 * 1.3 <= 0.85) {
      fVar25 = fVar20 * 1.3;
    }
    xStack_e0._0_4_ = (float4)xStack_e0 + fVar25 * (fVar30 - (float4)xStack_e0);
    fStack_d8 = fStack_d8 + fVar25 * (fVar30 - fStack_d8);
    xStack_e0._4_4_ = xStack_e0._4_4_ + fVar25 * (fVar30 - xStack_e0._4_4_);
    bVar11 = 0x706 < iRam000000000010c160;
    iRam000000000010c160 = iVar39;
    if ((bVar11) && (iRam000000000010c164 < 0x1e)) {
      iRam000000000010c160 = 0;
      iRam000000000010c164 = iRam000000000010c164 + 1;
      if (xRam000000000010c148 == (uint1 *)0x0) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar26 = (uint8)*xRam000000000010c148;
      }
      xVar23 = 0x38ca4 /* ", FORCED by [Wet] Force" */;
      if (xRam000000000010c104 <= 0.0) {
        xVar23 = 0x29893;
      }
      (*pcRam000000000010c0d8)
                ((float8)(float4)xStack_e0,(float8)xStack_e0._4_4_,(float8)fStack_d8,
                 (float8)(float4)xStack_c0,(float8)xStack_c0._4_4_,(float8)(float4)xStack_b8,
                 (float8)xStack_b8._4_4_,(float8)fVar42,0,0x3fe09 /* "water: sky colour %.2f %.2f %.2f, sun %.2f %.2f %.2f visibility %.2f, ..." */,
                 (int4)((uint8)(piRam000000000010c058 - piRam000000000010c050) >> 2) * -0x6eb3e453,
                 uVar26,xVar23);
    }
    xStack_130 = 0;
    xStack_128 = 0;
    xStack_140 = 0;
    xStack_138 = 0;
    xStack_150 = 0;
    xStack_148 = 0;
    xStack_1e8 = 0;
    xStack_1e0 = 0;
    xStack_118 = 0;
    uStack_114 = 0;
    iStack_120 = 0;
    xStack_11c = 0;
    xStack_108 = 0;
    uStack_110 = 0;
    xStack_f8 = 0;
    xStack_100 = 0;
    xStack_e8 = 0;
    xStack_f0 = 0;
    if (0.0 < fRam000000000010c10c) {
      if (((!((*puVar9 & 0x100) == 0 && (bVar10 && bVar12))) ||
          (uVar26 = post__SsrData_plt(&iStack_120,&xStack_130,(int8)&xStack_1e0 + 4,
                                      (int8)&xStack_1e8 + 4,&xStack_1e8,&xStack_1e0,&xStack_150),
          (uVar26 & 1) == 0)) || (((int4)xStack_1e8._4_4_ < 1 || ((int4)xStack_1e8 < 1)))) {
        xStack_128 = xStack_128 & 0xffffffff;
      }
      else {
        xStack_128 = CONCAT44(fRam000000000010c10c,(float4)xStack_128);
        xVar40 = 0;
        if ((int4)xStack_1e0 != 0) {
          xVar40 = 0x3f800000;
        }
        xStack_140 = CONCAT44(0.5 / (float4)(xStack_1e8 & 0xffffffff),0.5 / (float4)xStack_1e8._4_4_
                             );
        xVar21 = 0x3f800000;
        if (xRam000000000010c108 == 0) {
          xVar21 = 0;
        }
        xStack_138 = CONCAT44(xVar21,xVar40);
        xStack_148 = CONCAT44(xStack_148._4_4_,(float4)(iRam000000000010c0fc & 0x3ff));
        if (0.0 < fRam000000000010c10c) {
          axStack_1b0[0] = 0;
          (*(code *)*pxVar5)(0x84e0,axStack_1b0);
          pxVar7 = pxRam00000000000d3310;
          (*(code *)*pxRam00000000000d3310)(iRam00000000000d8c6c + 0x84c0);
          pxVar6 = pxRam00000000000d3300;
          (*(code *)*pxRam00000000000d3300)(0xde1,xStack_1e0._4_4_);
          pxVar8 = pxRam00000000000d3358;
          (*(code *)*pxRam00000000000d3358)(iRam00000000000d8c6c,0);
          (*(code *)*pxVar7)(iRam00000000000d8c6c + 0x84bf);
          (*(code *)*pxVar6)(0xde1,xStack_1e0 & 0xffffffff);
          (*(code *)*pxVar8)(iRam00000000000d8c6c + -1,0);
          (*(code *)*pxVar7)(axStack_1b0[0]);
          iRam000000000010c168 = iRam000000000010c168 + 1;
          if ((iRam000000000010c168 == 600) && (iRam000000000010c16c < 5)) {
            iRam000000000010c16c = iRam000000000010c16c + 1;
            iRam000000000010c168 = 0;
            (*pcRam000000000010c0d8)
                      ((float8)(float4)xStack_130,(float8)xStack_130._4_4_,
                       (float8)(float4)xStack_128,0,0x2cf50 /* "world: SSR running (texture %u, camera %.0f %.0f %.0f)" */,xStack_1e0._4_4_);
          }
        }
      }
    }
    xStack_160 = 0;
    iStack_15c = 0;
    iStack_158 = 0;
    xStack_154 = 0;
    iStack_168 = 0;
    xStack_164 = 0;
    xStack_170 = 0;
    iStack_16c = 0;
    xStack_1b8 = 0;
    xStack_1c0 = 0;
    if (((fVar31 <= 0.0 || (!bVar10 || !bVar12)) ||
        (uVar26 = lights__Camera_plt(axStack_1b0,0,&xStack_1c0), (uVar26 & 1) == 0)) ||
       (NAN((float4)xStack_1c0))) {
      bVar11 = false;
    }
    else {
      bVar11 = false;
      if ((ABS((float4)xStack_1c0) < 100000.0) && (!NAN(xStack_1c0._4_4_))) {
        bVar11 = ABS(xStack_1c0._4_4_) < 100000.0;
      }
    }
    if (((0.0 < fVar31) && (1 < iRam00000000000d8c70 && (bVar10 && bVar12))) &&
       (iVar39 = ripples__PuddleTexture_plt(), iVar39 != 0)) {
      xStack_170 = 0x3f800000;
      if (bVar11) {
        iStack_16c = (int4)((float4)xStack_1c0 * 0.0078125);
        iStack_168 = (int4)((float4)((uint8)xStack_1c0 >> 0x20) * 0.0078125);
      }
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      (*(code *)*pxVar5)(0x84e0,&uStack_1d0);
      pxVar6 = pxRam00000000000d3310;
      (*(code *)*pxRam00000000000d3310)(iRam00000000000d8c70 + 0x84bf);
      (*(code *)*pxRam00000000000d3300)(0xde1,iVar39);
      (*(code *)*pxRam00000000000d3358)(iRam00000000000d8c70 + -1,0);
      (*(code *)*pxVar6)(uStack_1d0 & 0xffffffff);
    }
    if ((((0.0 < fVar31) && (0.01 < fVar20)) && (0 < iRam00000000000d8c70 && (bVar10 && bVar12))) &&
       (iVar39 = ripples__Texture_plt(), iVar39 != 0)) {
      if (bVar11) {
        iStack_15c = (int4)((float4)xStack_1c0 / 9.6);
        iStack_158 = (int4)((float4)((uint8)xStack_1c0 >> 0x20) / 9.6);
      }
      xStack_160 = ripples__Strength_plt();
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      (*(code *)*pxVar5)(0x84e0,&uStack_1d0);
      pxVar6 = pxRam00000000000d3310;
      (*(code *)*pxRam00000000000d3310)(iRam00000000000d8c70 + 0x84c0);
      (*(code *)*pxRam00000000000d3300)(0xde1,iVar39);
      (*(code *)*pxRam00000000000d3358)(iRam00000000000d8c70,0);
      (*(code *)*pxVar6)(uStack_1d0 & 0xffffffff);
    }
    uStack_1d0 = 0;
    iStack_1c8 = 0;
    if (((0 < iRam00000000000d8c74) && (0 < uRam000000000010c08c)) &&
       (iVar39 = waterbake__Texture_plt(), iVar39 != 0)) {
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0x3f800000);
      xStack_1ec = 0;
      (*(code *)*pxVar5)(0x84e0,&xStack_1ec);
      pxVar6 = pxRam00000000000d3310;
      (*(code *)*pxRam00000000000d3310)(iRam00000000000d8c74 + 0x84c0);
      (*(code *)*pxRam00000000000d3300)(0xde1,iVar39);
      (*(code *)*pxRam00000000000d3358)(iRam00000000000d8c74,0);
      (*(code *)*pxVar6)(xStack_1ec);
    }
    xStack_1ec = 0;
    (*(code *)*pxVar5)(0x8b8d,&xStack_1ec);
    pxVar8 = pxRam00000000000d3498;
    pxVar7 = pxRam00000000000d3410;
    pxVar6 = pxRam00000000000d33e8;
    pxVar5 = pxRam00000000000d33d8;
    if (piRam000000000010c058 != piRam000000000010c050) {
      uVar26 = 0;
      iVar17 = piRam000000000010c050;
      do {
        pxVar19 = (xunknown4 *)(iVar17 + uVar26 * 0x94);
        cVar14 = (*(code *)*pxVar6)(*pxVar19);
        iVar17 = piRam000000000010c050;
        if (cVar14 == '\0') {
          pxVar18 = (xunknown8 *)(piRam000000000010c050 + uVar26 * 0x94);
          xVar23 = *(xunknown8 *)(piRam000000000010c058 + -0x84);
          xVar29 = *(xunknown8 *)(piRam000000000010c058 + -0x8c);
          xVar27 = *(xunknown8 *)(piRam000000000010c058 + -0x94);
          pxVar18[3] = *(xunknown8 *)(piRam000000000010c058 + -0x7c);
          pxVar18[2] = xVar23;
          xVar24 = *(xunknown8 *)(piRam000000000010c058 + -0x3c);
          xVar23 = *(xunknown8 *)(piRam000000000010c058 + -0x44);
          xVar33 = *(xunknown8 *)(piRam000000000010c058 + -0x54);
          xVar36 = *(xunknown8 *)(piRam000000000010c058 + -0x5c);
          xVar34 = *(xunknown8 *)(piRam000000000010c058 + -100);
          xVar38 = *(xunknown8 *)(piRam000000000010c058 + -0x6c);
          xVar37 = *(xunknown8 *)(piRam000000000010c058 + -0x74);
          pxVar18[9] = *(xunknown8 *)(piRam000000000010c058 + -0x4c);
          pxVar18[8] = xVar33;
          pxVar18[0xb] = xVar24;
          pxVar18[10] = xVar23;
          pxVar18[5] = xVar38;
          pxVar18[4] = xVar37;
          pxVar18[7] = xVar36;
          pxVar18[6] = xVar34;
          xVar24 = *(xunknown8 *)(piRam000000000010c058 + -0x1c);
          xVar23 = *(xunknown8 *)(piRam000000000010c058 + -0x24);
          xVar34 = *(xunknown8 *)(piRam000000000010c058 + -0x2c);
          xVar33 = *(xunknown8 *)(piRam000000000010c058 + -0x34);
          xVar37 = *(xunknown8 *)(piRam000000000010c058 + -0xc);
          xVar36 = *(xunknown8 *)(piRam000000000010c058 + -0x14);
          xVar40 = *(xunknown4 *)(piRam000000000010c058 + -4);
          piRam000000000010c058 = piRam000000000010c058 + -0x94;
          pxVar18[1] = xVar29;
          *pxVar18 = xVar27;
          pxVar18[0xd] = xVar34;
          pxVar18[0xc] = xVar33;
          pxVar18[0xf] = xVar24;
          pxVar18[0xe] = xVar23;
          *(xunknown4 *)(pxVar18 + 0x12) = xVar40;
          pxVar18[0x11] = xVar37;
          pxVar18[0x10] = xVar36;
        }
        else {
          (*(code *)*pxVar5)(*pxVar19);
          if (-1 < (int4)pxVar19[1]) {
            (*(code *)*pxRam00000000000d3480)((float4)fVar22,fVar42,fVar31,fVar20);
          }
          if ((-1 < (int4)pxVar19[2]) &&
             (*(int8 *)(pxVar19 + 0x10) != xStack_c0 || *(int8 *)(pxVar19 + 0x12) != xStack_b8)) {
            (*(code *)*pxVar8)(pxVar19[2],1,&xStack_c0);
            *(int8 *)(pxVar19 + 0x12) = xStack_b8;
            *(int8 *)(pxVar19 + 0x10) = xStack_c0;
          }
          if (-1 < (int4)pxVar19[3]) {
            (*(code *)*pxVar8)(pxVar19[3],1,&xStack_e0);
          }
          if (-1 < (int4)pxVar19[5]) {
            (*(code *)*pxVar8)(pxVar19[5],1,&xStack_130);
            if ((0.0 < xStack_128._4_4_) && (-1 < (int4)pxVar19[4])) {
              (*(code *)*pxRam00000000000d34a8)(pxVar19[4],1,0,&iStack_120);
            }
            fVar25 = xStack_128._4_4_;
            if (((0.0 < xStack_128._4_4_) && (-1 < (int4)pxVar19[7])) &&
               (*(int8 *)(pxVar19 + 0x20) != xStack_140 || *(int8 *)(pxVar19 + 0x22) != xStack_138))
            {
              (*(code *)*pxVar8)(pxVar19[7],1,&xStack_140);
              *(int8 *)(pxVar19 + 0x22) = xStack_138;
              *(int8 *)(pxVar19 + 0x20) = xStack_140;
              fVar25 = xStack_128._4_4_;
            }
            if ((0.0 < fVar25) && (-1 < (int4)pxVar19[9])) {
              (*(code *)*pxVar8)(pxVar19[9],1,&xStack_150);
            }
          }
          if ((-1 < (int4)pxVar19[10]) &&
             (*(int8 *)(pxVar19 + 0x14) != CONCAT44(iStack_15c,xStack_160) ||
              *(int8 *)(pxVar19 + 0x16) != CONCAT44(xStack_154,iStack_158))) {
            (*(code *)*pxVar8)(pxVar19[10],1,&xStack_160);
            *(uint8 *)(pxVar19 + 0x16) = CONCAT44(xStack_154,iStack_158);
            *(uint8 *)(pxVar19 + 0x14) = CONCAT44(iStack_15c,xStack_160);
          }
          if ((-1 < (int4)pxVar19[0xc]) &&
             (*(int8 *)(pxVar19 + 0x18) != CONCAT44(iStack_16c,xStack_170) ||
              *(int8 *)(pxVar19 + 0x1a) != CONCAT44(xStack_164,iStack_168))) {
            (*(code *)*pxVar8)(pxVar19[0xc],1,&xStack_170);
            *(uint8 *)(pxVar19 + 0x1a) = CONCAT44(xStack_164,iStack_168);
            *(uint8 *)(pxVar19 + 0x18) = CONCAT44(iStack_16c,xStack_170);
          }
          if ((-1 < (int4)pxVar19[0xe]) &&
             (*(uint8 *)(pxVar19 + 0x1c) != uStack_1d0 || *(int8 *)(pxVar19 + 0x1e) != iStack_1c8))
          {
            (*(code *)*pxVar8)(pxVar19[0xe],1,&uStack_1d0);
            *(int8 *)(pxVar19 + 0x1e) = iStack_1c8;
            *(uint8 *)(pxVar19 + 0x1c) = uStack_1d0;
          }
          if ((*(uint1 *)(pxVar19 + 0x24) & 1) == 0) {
            if ((-1 < (int4)pxVar19[6]) && (0 < iRam00000000000d8c6c)) {
              (*(code *)*pxVar7)();
            }
            if ((-1 < (int4)pxVar19[8]) && (0 < iRam00000000000d8c6c)) {
              (*(code *)*pxVar7)(pxVar19[8],iRam00000000000d8c6c + -1);
            }
            if ((-1 < (int4)pxVar19[0xb]) && (0 < iRam00000000000d8c70)) {
              (*(code *)*pxVar7)();
            }
            if ((-1 < (int4)pxVar19[0xd]) && (1 < iRam00000000000d8c70)) {
              (*(code *)*pxVar7)(pxVar19[0xd],iRam00000000000d8c70 + -1);
            }
            if ((-1 < (int4)pxVar19[0xf]) && (0 < iRam00000000000d8c74)) {
              (*(code *)*pxVar7)();
            }
            *(xunknown1 *)(pxVar19 + 0x24) = 1;
          }
          uVar26 = uVar26 + 1;
          iVar17 = piRam000000000010c050;
        }
      } while (uVar26 < (uint8)((piRam000000000010c058 - iVar17 >> 2) * 0x14c1bacf914c1bad));
    }
    (*(code *)*pxVar5)(xStack_1ec);
    pxVar5 = pxRam00000000000d3228;
    do {
      iVar39 = (*(code *)*pxVar5)();
    } while (iVar39 != 0);
  }
code_r0x00077b84:
  fVar4 = fRam0000000000022270;
  fVar22 = fRam0000000000022270 * (float8)iVar3;
  clock_gettime(1,&iStack_120);
  budget__CpuMs_plt((((float8)CONCAT44(xStack_11c,iStack_120) +
                     fVar4 * (float8)CONCAT44(uStack_114,xStack_118)) - ((float8)iVar2 + fVar22)) *
                    1000.0,3);
  if (*(int8 *)(iVar1 + 0x28) == iStack_a8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x77c0c  size=72 */
void FUN_00077c0c(void)

{
  if (cRam000000000010c0e8 == '\x01') {
    cRam000000000010c0e8 = '\0';
    if (uRam000000000010c0e9 == '\x01') {
      xRam000000000010c0fa = 1;
      iRam000000000010c100 = iRam000000000010c0fc;
    }
    uRam000000000010c0e9 = '\0';
  }
  return;
}

/* 0x77c54  size=20 */
void FUN_00077c54(void)

{
  FUN_0005eb94(0x371ec /* "vector" */);
  FUN_0005eb94(0x371ec /* "vector" */);
  piRam000000000010c050 = 0;
  piRam000000000010c058 = 0;
  piRam000000000010c060 = 0;
  __cxa_atexit(FUN_00075e44,&piRam000000000010c050,0xcee00);
  piRam000000000010c068 = 0;
  piRam000000000010c070 = 0;
  piRam000000000010c078 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00075e64,&piRam000000000010c068,0xcee00);
  return;
}

/* 0x77c68  size=20 */
void FUN_00077c68(void)

{
  FUN_0005eb94(0x371ec /* "vector" */);
  piRam000000000010c050 = 0;
  piRam000000000010c058 = 0;
  piRam000000000010c060 = 0;
  __cxa_atexit(FUN_00075e44,&piRam000000000010c050,0xcee00);
  piRam000000000010c068 = 0;
  piRam000000000010c070 = 0;
  piRam000000000010c078 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00075e64,&piRam000000000010c068,0xcee00);
  return;
}

/* 0x77c7c  size=92 */
void FUN_00077c7c(void)

{
  piRam000000000010c050 = 0;
  piRam000000000010c058 = 0;
  piRam000000000010c060 = 0;
  __cxa_atexit(FUN_00075e44,&piRam000000000010c050,0xcee00);
  piRam000000000010c068 = 0;
  piRam000000000010c070 = 0;
  piRam000000000010c078 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_00075e64,&piRam000000000010c068,0xcee00);
  return;
}

/* 0x77ea8  size=604 */
void FUN_00077ea8(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  bool bVar3;
  int4 iVar4;
  xunknown4 xVar5;
  int8 iVar6;
  int8 iVar7;
  uint8 uVar8;
  int8 iVar9;
  xunknown8 xVar10;
  xunknown1 axStack_184 [300];
  int8 iStack_58;
  
  pxVar2 = pxRam00000000000d31f8;
  iVar1 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  if ((uRam000000000010c195 & 1) != 0) {
    bVar3 = true;
    goto code_r0x00077fb0;
  }
  if ((uRam000000000010c1a0 & 1) == 0) {
    uRam000000000010c1a0 = 1;
    iVar6 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    if (iVar6 == 0) {
      iRam000000000010c1a8 = 0;
code_r0x00077f94:
      xVar10 = 0x2d753 /* "wind: CModelInfo::ms_modelInfoPtrs / CEntity::Render missing - wind / ..." */;
    }
    else {
      iRam000000000010c1a8 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar6,0x3a967 /* "_ZN10CModelInfo16ms_modelInfoPtrsE" */);
      iVar7 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar6,0x2ea8e /* "_ZN7CEntity6RenderEv" */);
      if ((iVar7 == 0) || (iRam000000000010c1a8 == 0)) goto code_r0x00077f94;
      uVar8 = boot__Safe_plt();
      if ((uVar8 & 1) == 0) {
        axStack_184[0] = 0;
        *piRam00000000000d36c8 = iVar7;
        iVar4 = FUN_0007815c(iVar6,iVar7,FUN_000782c8,axStack_184);
        bVar3 = iVar4 != 0;
        if (iVar4 == 0) {
          (*pcRam000000000010c198)(1,0x36a8e /* "wind: no vtable slot holds CEntity::Render (another mod replaced it?) ..." */);
        }
        else {
          iVar7 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar6,0x229d1 /* "_ZN7CObject6RenderEv" */);
          if (iVar7 == 0) {
            xVar5 = 0;
          }
          else {
            *piRam00000000000d36d0 = iVar7;
            iVar9 = __strlen_chk(axStack_184,300);
            if (iVar9 + 3U < 300) {
              __strcat_chk(axStack_184,0x294ff,300);
            }
            xVar5 = FUN_0007815c(iVar6,iVar7,FUN_0007843c,axStack_184);
          }
          (*pcRam000000000010c198)(0,0x2cfbb /* "wind: CEntity::Render replaced in %d vtable slot(s), CObject::Render i..." */,iVar4,xVar5,axStack_184);
          rq__Listen_plt(7,FUN_000784ec);
          rq__Listen_plt(1,FUN_00078670);
          uRam000000000010c195 = 1;
        }
        goto code_r0x00077fb0;
      }
      xVar10 = 0x38cbc /* "wind: off - safe start (the last start did not reach the game)" */;
    }
    (*pcRam000000000010c198)(1,xVar10);
  }
  bVar3 = false;
code_r0x00077fb0:
  if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(bVar3);
  return;
}

/* 0x7815c  size=364 */
int4 FUN_0007815c(xunknown8 param_1,int8 param_2,int8 param_3,int8 param_4)

{
  int4 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  int8 *piVar6;
  int8 *piVar7;
  int4 iVar8;
  xunknown8 xVar9;
  int8 iVar10;
  
  iVar2 = sysconf(0x27);
  iVar3 = strlen(param_4);
  iVar8 = 0;
  iVar10 = 0;
  do {
    xVar9 = *(xunknown8 *)(iVar10 + 0xcee58);
    iVar4 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0x28))
                      ((int8 *)*pxRam00000000000d31f8,param_1,xVar9);
    if (iVar4 != 0) {
      piVar6 = (int8 *)(iVar4 + 0x10);
      iVar4 = 0x30;
      piVar7 = piVar6;
      do {
        if ((*piVar7 == param_2) && (iVar1 = mprotect((uint8)piVar6 & -iVar2,iVar2,3), iVar1 == 0))
        {
          *piVar7 = param_3;
          mprotect((uint8)piVar6 & -iVar2,iVar2,1);
          iVar8 = iVar8 + 1;
          iVar5 = strlen(xVar9);
          if (iVar3 + iVar5 + 2U < 300) {
            iVar1 = FUN_000788a0(param_4 + iVar3,0xffffffffffffffff,300 - iVar3);
            iVar3 = iVar3 + iVar1;
          }
        }
        iVar4 = iVar4 + -1;
        piVar7 = piVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 != 0);
    }
    iVar10 = iVar10 + 8;
  } while (iVar10 != 0x50);
  return iVar8;
}

/* 0x782c8  size=372 */
void FUN_000782c8(int8 param_1)

{
  uint2 uVar1;
  uint1 uVar2;
  uint8 uVar3;
  xunknown8 xVar4;
  int4 iVar5;
  int8 iVar6;
  
  if ((uRam000000000010c1b0 & 1) == 0) {
    uRam000000000010c1b0 = 1;
    boot__Step_plt(0x2b855 /* "first CEntity::Render (wind, vtable)" */);
  }
  if (((((uRam000000000010c180 & 1) != 0) || (uRam000000000010c194 != 0)) && (param_1 != 0)) &&
     (((iRam000000000010c1a8 != 0 && (*(int8 *)(param_1 + 0x20) != 0)) &&
      ((*(uint2 *)(param_1 + 0x32) >> 5 < 0x271 &&
       (iVar6 = *(int8 *)(iRam000000000010c1a8 + (uint8)*(uint2 *)(param_1 + 0x32) * 8), iVar6 != 0)
       ))))) {
    iVar5 = 1;
    uVar1 = *(uint2 *)(iVar6 + 0x2c) & 0x7800;
    if ((uVar1 == 0x800) || (uVar1 == 0x1000)) goto code_r0x00078358;
  }
  uVar2 = uRam000000000010c194 ^ 1;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if ((((uVar2 & 1) != 0) || (*(int8 *)(param_1 + 0x20) == 0)) ||
     ((*(uint1 *)(param_1 + 0x5a) & 3) != 1)) {
                    /* WARNING: Could not recover jumptable at 0x000783c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*piRam00000000000d36c8)();
    return;
  }
  iVar5 = 2;
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar5 = 4;
  }
code_r0x00078358:
  uVar3 = rq__PostIfRoom_plt(7,iVar5 << 0x1c,0x200);
  (*(code *)*piRam00000000000d36c8)(param_1);
  if ((uVar3 & 1) == 0) {
    xVar4 = 0x10c1c8;
  }
  else {
    rq__Post_plt(7,0);
    xVar4 = 0x10c1b8;
    if (iVar5 != 1) {
      xVar4 = 0x10c1c0;
    }
  }
  FUN_000c5400(1,xVar4);
  return;
}

/* 0x7843c  size=176 */
void FUN_0007843c(int8 param_1)

{
  uint4 uVar1;
  uint8 uVar2;
  xunknown8 xVar3;
  
  if (((param_1 == 0) || (uRam000000000010c194 == '\0')) || ((*(uint1 *)(param_1 + 0x5a) & 7) != 4))
  {
                    /* WARNING: Could not recover jumptable at 0x000784cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*piRam00000000000d36d0)();
    return;
  }
  uVar1 = (uint4)param_1;
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  uVar2 = rq__PostIfRoom_plt(7,uVar1 >> 4 | 0x30000000,0x200);
  (*(code *)*piRam00000000000d36d0)(param_1);
  if ((uVar2 & 1) == 0) {
    xVar3 = 0x10c1c8;
  }
  else {
    rq__Post_plt(7,0);
    xVar3 = 0x10c1d0;
  }
  FUN_000c5400(1,xVar3);
  return;
}

/* 0x784ec  size=388 */
void FUN_000784ec(xunknown8 param_1,uint8 param_2)

{
  uint4 uVar1;
  int8 iVar2;
  bool bVar3;
  bool bVar4;
  uint1 uVar5;
  uint4 uVar6;
  xunknown8 xVar7;
  int4 aiStack_4c [3];
  xunknown1 xStack_40;
  xunknown4 xStack_3c;
  int8 iStack_38;
  
  iVar2 = tpidr_el0;
  uVar6 = (uint4)(param_2 >> 0x1c) & 0xf;
  xRam000000000010c190 = (uint4)param_2 & 0xfffffff;
  iStack_38 = *(int8 *)(iVar2 + 0x28);
  bVar3 = uVar6 == 1;
  bVar4 = (bool)xRam000000000010c188 != bVar3;
  xRam000000000010c188 = bVar3;
  xRam000000000010c18c = uVar6;
  if ((bVar4) && (uRam000000000010c180 != '\0')) {
    if ((uRam000000000010c184 & 1) == 0) {
      xStack_3c = 0;
      aiStack_4c[0] = 2;
      aiStack_4c[1] = 0;
      aiStack_4c[2] = 0;
      xStack_40 = 0;
      uVar5 = gl__Load_plt(aiStack_4c,pcRam000000000010c198);
      uRam000000000010c184 = uVar5 & 1;
    }
    else {
      uVar5 = 1;
    }
    if (((uVar5 & 1) != 0) && ((int4)xRam00000000000d8c78 < 0)) {
      aiStack_4c[0] = 0;
      (*(code *)*pxRam00000000000d3208)(0x8869,aiStack_4c);
      uVar1 = aiStack_4c[0] - 1;
      if (aiStack_4c[0] < 9) {
        uVar1 = 0xffffffff;
      }
      xRam00000000000d8c78 = 0xf;
      if (aiStack_4c[0] < 0x10) {
        xRam00000000000d8c78 = uVar1;
      }
      xVar7 = 0x32adb /* " - wind off" */;
      if (-1 < (int4)xRam00000000000d8c78) {
        xVar7 = 0x29893;
      }
      (*pcRam000000000010c198)
                (xRam00000000000d8c78 >> 0x1f,0x2cf87 /* "wind: %d vertex attributes - zSway at location %d%s" */,aiStack_4c[0],xRam00000000000d8c78,xVar7);
      uVar5 = uRam000000000010c184;
    }
    if (((uVar5 & 1) != 0) && (-1 < (int4)xRam00000000000d8c78)) {
      xVar7 = 0x3f800000;
      if (uVar6 != 1) {
        xVar7 = 0;
      }
      (*(code *)*pxRam00000000000d3488)(xVar7,0,0,0x3f800000);
    }
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x78670  size=560 */
void FUN_00078670(void)

{
  bool bVar1;
  uint8 uVar2;
  xunknown8 xVar3;
  uint4 uVar4;
  int8 iVar5;
  code *pcVar6;
  uint1 uVar7;
  int8 iVar8;
  int8 iVar9;
  int8 iVar10;
  int8 iVar11;
  float8 fVar12;
  int4 aiStack_6c [3];
  xunknown1 xStack_60;
  xunknown4 xStack_5c;
  int8 iStack_58;
  
  iVar5 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar5 + 0x28);
  xRam000000000010c188 = 0;
  xRam000000000010c18c = 0;
  xRam000000000010c190 = 0;
  if (cRam000000000010c180 == '\x01') {
    if ((uRam000000000010c184 & 1) == 0) {
      xStack_5c = 0;
      aiStack_6c[0] = 2;
      aiStack_6c[1] = 0;
      aiStack_6c[2] = 0;
      xStack_60 = 0;
      uVar7 = gl__Load_plt(aiStack_6c,pcRam000000000010c198);
      uRam000000000010c184 = uVar7 & 1;
    }
    else {
      uVar7 = 1;
    }
    if (((uVar7 & 1) != 0) && ((int4)uRam00000000000d8c78 < 0)) {
      aiStack_6c[0] = 0;
      (*(code *)*pxRam00000000000d3208)(0x8869,aiStack_6c);
      uVar4 = aiStack_6c[0] - 1;
      if (aiStack_6c[0] < 9) {
        uVar4 = 0xffffffff;
      }
      uRam00000000000d8c78 = 0xf;
      if (aiStack_6c[0] < 0x10) {
        uRam00000000000d8c78 = uVar4;
      }
      xVar3 = 0x32adb /* " - wind off" */;
      if (-1 < (int4)uRam00000000000d8c78) {
        xVar3 = 0x29893;
      }
      (*pcRam000000000010c198)
                (uRam00000000000d8c78 >> 0x1f,0x2cf87 /* "wind: %d vertex attributes - zSway at location %d%s" */,aiStack_6c[0],uRam00000000000d8c78,xVar3);
      uVar7 = uRam000000000010c184;
    }
    if (((uVar7 & 1) != 0) && (-1 < (int4)uRam00000000000d8c78)) {
      (*(code *)*pxRam00000000000d3488)(0,0,0,0x3f800000);
    }
  }
  pcVar6 = pcRam000000000010c198;
  uVar2 = uRam000000000010c1d8 + 1;
  bVar1 = 0x4ae < (int8)uRam000000000010c1d8;
  uRam000000000010c1d8 = uVar2;
  if ((bVar1) && (iRam000000000010c1e0 < 0x14)) {
    fVar12 = (float8)uVar2 / 2.0;
    iVar8 = FUN_000c5370(0,0x10c1b8);
    iVar9 = FUN_000c5370(0,0x10c1c8);
    iVar10 = FUN_000c5370(0,0x10c1c0);
    iVar11 = FUN_000c5370(0,0x10c1d0);
    (*pcVar6)((float8)iVar8 / fVar12,(float8)iVar9 / fVar12,(float8)iVar10 / fVar12,
              (float8)iVar11 / fVar12,0,0x23bad /* "wind: %.0f tree / palm renders tagged per frame (%.1f skipped: render ..." */);
    uRam000000000010c1d8 = 0;
    iRam000000000010c1e0 = iRam000000000010c1e0 + 1;
  }
  if (*(int8 *)(iVar5 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x788a0  size=164 */
void FUN_000788a0(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,0x262c3 /* "%s%s" */,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x78a94  size=2876 */
void FUN_00078a94(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  bool bVar4;
  uint1 uVar5;
  xunknown4 xVar6;
  xunknown4 xVar7;
  int4 iVar8;
  int4 iVar9;
  int4 iVar10;
  xunknown8 xVar11;
  code *pcVar12;
  float4 fVar13;
  float4 fVar14;
  float4 fVar15;
  float4 fVar16;
  float8 fVar17;
  int4 iStack_13c;
  xunknown8 xStack_138;
  xunknown4 xStack_130;
  xunknown4 xStack_12c;
  xunknown4 xStack_128;
  uint4 uStack_124;
  xunknown4 xStack_120;
  xunknown8 xStack_d8;
  int8 iStack_78;
  
  iVar1 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar1 + 0x28);
  cRam000000000010c1e4 = 0;
  if ((uRam000000000010c210 & 1) == 0) {
    if ((uRam000000000010c214 & 1) == 0) {
      xStack_120 = 0;
      xStack_130 = 2;
      xStack_12c = 0;
      xStack_128 = 0;
      uStack_124 = uStack_124 & 0xffffff00;
      uVar5 = gl__Load_plt(&xStack_130,pcRam000000000010c1f0);
      uRam000000000010c214 = uVar5 & 1;
      if ((uVar5 & 1) == 0) {
        uRam000000000010c210 = 1;
        goto code_r0x00078ec8;
      }
    }
    uRam000000000010c210 = 1;
    xVar6 = gl__Compile_plt(0x8b31,0x229f5 /* "#version 300 es\nout highp vec2 vUV;\nvoid main(){ vec2 p = vec2(float..." */,0x29542 /* "puddles" */,pcRam000000000010c1f0);
    xVar7 = gl__Compile_plt(0x8b30,0x36b3b /* "#version 300 es\nprecision highp float;\nprecision highp int;\nin high..." */,0x29542 /* "puddles" */,pcRam000000000010c1f0);
    iVar8 = gl__Link_plt(xVar6,xVar7,0x29542 /* "puddles" */,pcRam000000000010c1f0);
    if (iVar8 == 0) {
      (*pcRam000000000010c1f0)(1,0x2d7a9 /* "ripples: puddle shader failed - no puddles" */);
    }
    else {
      xStack_d8 = 0;
      gl__SavedState__Save_plt(&xStack_130);
      xStack_138 = 0;
      iStack_13c = 0;
      (*(code *)*pxRam00000000000d32f8)(1,(int8)&xStack_138 + 4);
      (*(code *)*pxRam00000000000d3310)(0x84c0);
      (*(code *)*pxRam00000000000d3300)(0xde1,xStack_138._4_4_);
      (*(code *)*pxRam00000000000d3318)(0xde1,1,0x8229,0x400,0x400);
      pxVar2 = pxRam00000000000d3338;
      (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2601);
      (*(code *)*pxVar2)(0xde1,0x2800,0x2601);
      (*(code *)*pxVar2)(0xde1,0x2802,0x2901);
      (*(code *)*pxVar2)(0xde1,0x2803,0x2901);
      (*(code *)*pxRam00000000000d3240)(1,&xStack_138);
      (*(code *)*pxRam00000000000d3248)(0x8ca9,xStack_138 & 0xffffffff);
      (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,xStack_138._4_4_,0);
      iVar9 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
      if (iVar9 == 0x8cd5) {
        (*(code *)*pxRam00000000000d3520)(0,0,0x400,0x400);
        pxVar2 = pxRam00000000000d3530;
        (*(code *)*pxRam00000000000d3530)(0xbe2);
        (*(code *)*pxVar2)(0xb71);
        (*(code *)*pxVar2)(0xb44);
        (*(code *)*pxVar2)(0xc11);
        (*(code *)*pxVar2)(0xb90);
        (*(code *)*pxRam00000000000d3540)(1,1,1,1);
        (*(code *)*pxRam00000000000d3548)(0);
        (*(code *)*pxRam00000000000d33d8)(iVar8);
        (*(code *)*pxRam00000000000d3500)(1,&iStack_13c);
        (*(code *)*pxRam00000000000d3508)(iStack_13c);
        (*(code *)*pxRam00000000000d3518)(4,0,3);
      }
      gl__SavedState__Restore_plt(&xStack_130);
      (*(code *)*pxRam00000000000d3250)(1,&xStack_138);
      if (iStack_13c != 0) {
        (*(code *)*pxRam00000000000d3510)(1,&iStack_13c);
      }
      (*(code *)*pxRam00000000000d33e0)(iVar8);
      pxVar2 = pxRam00000000000d3228;
      iVar8 = (*(code *)*pxRam00000000000d3228)();
      do {
        iVar10 = (*(code *)*pxVar2)();
      } while (iVar10 != 0);
      if ((iVar9 == 0x8cd5) && (iVar8 == 0)) {
        xRam000000000010c1ec = xStack_138._4_4_;
        (*pcRam000000000010c1f0)(0,0x2a27b /* "ripples: puddle layout baked once - %dx%d R8, 128 m, repeats (was 4-8 ..." */,0x400,0x400);
      }
      else {
        (*(code *)*pxRam00000000000d3308)(1,(int8)&xStack_138 + 4);
        (*pcRam000000000010c1f0)(1,0x3107e /* "ripples: puddle bake failed (fbo %d, GL 0x%X) - no puddles" */,iVar9 == 0x8cd5,iVar8);
      }
    }
  }
code_r0x00078ec8:
  if (((uRam000000000010c215 & 1) != 0) || (xRam00000000000d8c7c <= 0.0)) goto code_r0x000794e0;
  fVar16 = 0.0;
  if (iRam000000000010c1f8 != (float4 *)0x0) {
    fVar14 = *iRam000000000010c1f8;
    fVar13 = 1.0;
    if (fVar14 <= 1.0) {
      fVar13 = fVar14;
    }
    fVar16 = 0.0;
    if (0.0 <= fVar14) {
      fVar16 = fVar13;
    }
  }
  fVar13 = 0.0;
  if (xRam000000000010c200 != (float4 *)0x0) {
    fVar15 = *xRam000000000010c200;
    fVar14 = 1.0;
    if (fVar15 <= 1.0) {
      fVar14 = fVar15;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar15) {
      fVar13 = fVar14;
    }
  }
  if (xRam000000000010c208 == (char *)0x0) {
    bVar4 = true;
  }
  else {
    bVar4 = *xRam000000000010c208 == '\0';
  }
  if ((((fVar16 < 0.01) || (fVar13 < 0.01)) || (!bVar4)) || ((*puRam00000000000d3610 >> 9 & 1) != 0)
     ) goto code_r0x000794e0;
  if ((uRam000000000010c216 & 1) == 0) {
    uRam000000000010c216 = 1;
    if ((uRam000000000010c214 & 1) == 0) {
      xStack_120 = 0;
      xStack_130 = 2;
      xStack_12c = 0;
      xStack_128 = 0;
      uStack_124 = uStack_124 & 0xffffff00;
      uVar5 = gl__Load_plt(&xStack_130,pcRam000000000010c1f0);
      uRam000000000010c214 = uVar5 & 1;
      if ((uVar5 & 1) != 0) goto code_r0x00079268;
    }
    else {
code_r0x00079268:
      xVar6 = gl__Compile_plt(0x8b31,0x229f5 /* "#version 300 es\nout highp vec2 vUV;\nvoid main(){ vec2 p = vec2(float..." */,0x29d24 /* "ripples" */,pcRam000000000010c1f0);
      xVar7 = gl__Compile_plt(0x8b30,0x304c0 /* "#version 300 es\nprecision highp float;\nprecision highp int;\nin high..." */,0x29d24 /* "ripples" */,pcRam000000000010c1f0);
      xVar11 = gl__Link_plt(xVar6,xVar7,0x29d24 /* "ripples" */,pcRam000000000010c1f0);
      iRam000000000010c224 = (int4)xVar11;
      if (iRam000000000010c224 != 0) {
        xRam00000000000d8c80 = (*(code *)*pxRam00000000000d3408)(xVar11,0x3fc5d);
        pxVar2 = pxRam00000000000d3208;
        xStack_130 = 0;
        (*(code *)*pxRam00000000000d3208)(0x8069,&xStack_130);
        xStack_138 = xStack_138 & 0xffffffff;
        (*(code *)*pxVar2)(0x8ca6,(int8)&xStack_138 + 4);
        (*(code *)*pxRam00000000000d32f8)(1,&xRam000000000010c1e8);
        pxVar3 = pxRam00000000000d3300;
        (*(code *)*pxRam00000000000d3300)(0xde1,xRam000000000010c1e8);
        (*(code *)*pxRam00000000000d3318)(0xde1,10,0x8058,0x200,0x200);
        pxVar2 = pxRam00000000000d3338;
        (*(code *)*pxRam00000000000d3338)(0xde1,0x2801,0x2703);
        (*(code *)*pxVar2)(0xde1,0x2800,0x2601);
        (*(code *)*pxVar2)(0xde1,0x2802,0x2901);
        (*(code *)*pxVar2)(0xde1,0x2803,0x2901);
        (*(code *)*pxRam00000000000d3240)(1,0x10c220);
        pxVar2 = pxRam00000000000d3248;
        (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam000000000010c220);
        (*(code *)*pxRam00000000000d3258)(0x8ca9,0x8ce0,0xde1,xRam000000000010c1e8,0);
        iVar8 = (*(code *)*pxRam00000000000d3260)(0x8ca9);
        (*(code *)*pxVar2)(0x8ca9,xStack_138._4_4_);
        (*(code *)*pxVar3)(0xde1,xStack_130);
        (*(code *)*pxRam00000000000d3500)(1,0x10c228);
        pxVar2 = pxRam00000000000d3228;
        do {
          iVar9 = (*(code *)*pxVar2)();
        } while (iVar9 != 0);
        if (iVar8 == 0x8cd5) {
          (*pcRam000000000010c1f0)(0,0x34670 /* "ripples: ready - %dx%d RGBA8 (tilt + splashes), %d mips, baked once pe..." */,0x200,0x200,10);
          goto code_r0x00078f9c;
        }
      }
    }
    uRam000000000010c215 = 1;
    (*pcRam000000000010c1f0)(1,0x29cfc /* "ripples: init failed - rain ripples off" */);
  }
  else {
code_r0x00078f9c:
    if (xRam000000000010c1e8 != 0) {
      clock_gettime(1,&xStack_130);
      pxVar2 = pxRam00000000000d3228;
      fVar17 = (float8)CONCAT44(xStack_12c,xStack_130) +
               fRam0000000000022270 * (float8)CONCAT44(uStack_124,xStack_128);
      if (fRam000000000010c218 == 0.0) {
        fRam000000000010c218 = fVar17;
      }
      do {
        iVar8 = (*(code *)*pxVar2)();
      } while (iVar8 != 0);
      xStack_d8 = 0;
      gl__SavedState__Save_plt(&xStack_130);
      (*(code *)*pxRam00000000000d3248)(0x8ca9,xRam000000000010c220);
      xStack_138 = CONCAT44(0x8ce0,(xunknown4)xStack_138);
      (*(code *)*pxRam00000000000d3278)(0x8ca9,1,(int8)&xStack_138 + 4);
      (*(code *)*pxRam00000000000d3520)(0,0,0x200,0x200);
      pxVar3 = pxRam00000000000d3530;
      (*(code *)*pxRam00000000000d3530)(0xbe2);
      (*(code *)*pxVar3)(0xb71);
      (*(code *)*pxVar3)(0xb44);
      (*(code *)*pxVar3)(0xc11);
      (*(code *)*pxVar3)(0xb90);
      (*(code *)*pxRam00000000000d3540)(1,1,1,1);
      (*(code *)*pxRam00000000000d3548)(0);
      (*(code *)*pxRam00000000000d33d8)(iRam000000000010c224);
      xVar6 = xRam00000000000d8c80;
      pcVar12 = (code *)*pxRam00000000000d3480;
      fVar17 = (float8)fmod(fVar17 - fRam000000000010c218,0x40ac200000000000);
      (*pcVar12)((float4)fVar17,fVar16 * 0.55 + 0.3,0,0,xVar6);
      (*(code *)*pxRam00000000000d3508)(xRam000000000010c228);
      (*(code *)*pxRam00000000000d3518)(4,0,3);
      (*(code *)*pxRam00000000000d3310)(0x84c0);
      (*(code *)*pxRam00000000000d3300)(0xde1,xRam000000000010c1e8);
      (*(code *)*pxRam00000000000d3348)(0xde1);
      iVar8 = (*(code *)*pxVar2)();
      do {
        iVar9 = (*(code *)*pxVar2)();
      } while (iVar9 != 0);
      gl__SavedState__Restore_plt(&xStack_130);
      if (iVar8 == 0) {
        iRam000000000010c22c = 0;
        iRam000000000010c234 = iRam000000000010c234 + 1;
        iVar8 = iRam000000000010c238 + 1;
        cRam000000000010c1e4 = 1;
        bVar4 = 0x256 < iRam000000000010c238;
        iRam000000000010c238 = iVar8;
        if ((bVar4) && (iRam000000000010c23c < 10)) {
          iRam000000000010c23c = iRam000000000010c23c + 1;
          (*pcRam000000000010c1f0)((float8)fVar16,(float8)fVar13,0,0x23c48 /* "ripples: baked %d of the last %d frames (rain %.2f, wet %.2f)" */);
          iRam000000000010c238 = 0;
          iRam000000000010c234 = 0;
        }
      }
      else {
        iVar9 = iRam000000000010c22c + 1;
        if (iRam000000000010c22c < 0x1d) {
          iRam000000000010c22c = iVar9;
          if (iRam000000000010c230 < 5) {
            iRam000000000010c230 = iRam000000000010c230 + 1;
            (*pcRam000000000010c1f0)(1,0x29502 /* "ripples: GL error 0x%X in the bake (frame skipped, %d in a row)" */,iVar8);
          }
        }
        else {
          uRam000000000010c215 = 1;
          iRam000000000010c22c = iVar9;
          (*pcRam000000000010c1f0)(1,0x2743c /* "ripples: GL error 0x%X in the bake 30 frames in a row - rain ripples o..." */,iVar8);
        }
      }
    }
  }
code_r0x000794e0:
  if (*(int8 *)(iVar1 + 0x28) == iStack_78) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x79678  size=3132 */
void FUN_00079678(void)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  uint4 uVar3;
  uint4 uVar4;
  xunknown8 *pxVar5;
  int8 iVar6;
  float4 *pfVar7;
  xunknown1 axVar8 [16];
  bool bVar9;
  int8 iVar10;
  int8 iVar11;
  int8 iVar12;
  int8 iVar13;
  int8 iVar14;
  int8 iVar15;
  uint8 uVar16;
  int8 iVar17;
  uint4 uVar18;
  int4 iVar19;
  uint4 uVar20;
  int8 iVar21;
  int8 iVar22;
  int4 iVar23;
  uint8 uVar24;
  float4 *pfVar25;
  uint8 uVar26;
  float4 *pfVar27;
  uint8 uVar28;
  int8 iVar29;
  float4 *pfVar30;
  uint8 uVar31;
  float4 *pfVar32;
  float4 fVar33;
  xunknown8 xVar34;
  xunknown8 xVar35;
  float4 fVar36;
  xunknown1 axVar37 [16];
  xunknown1 axVar38 [16];
  xunknown1 axVar39 [16];
  xunknown1 axVar40 [16];
  xunknown1 axVar41 [16];
  float4 fVar42;
  float4 fVar43;
  float4 fVar44;
  float4 fVar45;
  float4 fVar46;
  float4 fVar48;
  xunknown8 xVar47;
  float4 fVar49;
  float4 fVar51;
  xunknown8 xVar50;
  float4 fVar52;
  float4 fVar59;
  xunknown8 xVar53;
  xunknown8 xVar54;
  xunknown8 xVar55;
  xunknown8 xVar56;
  xunknown8 xVar57;
  xunknown8 xVar58;
  float4 fVar60;
  float4 fVar63;
  xunknown8 xVar61;
  xunknown8 xVar62;
  float4 fVar64;
  float4 fVar65;
  float4 fVar66;
  float4 fVar67;
  float4 fVar68;
  float4 fVar69;
  float4 fVar70;
  float4 fVar71;
  float4 fVar72;
  float4 fVar73;
  float4 fVar74;
  float4 fVar75;
  float4 fVar76;
  float4 fVar77;
  float4 fVar78;
  float4 fVar79;
  float4 fVar80;
  float4 fVar81;
  float4 fVar82;
  float4 fVar83;
  float4 *pfStack_598;
  float4 fStack_560;
  float4 fStack_4b8;
  float4 fStack_4b4;
  float4 afStack_4b0 [256];
  int8 iStack_b0;
  
  pfStack_598 = (float4 *)0x0;
  iVar6 = tpidr_el0;
  iStack_b0 = *(int8 *)(iVar6 + 0x28);
  pfVar32 = (float4 *)0x0;
  uVar24 = 0;
  iVar29 = 0;
  pfVar27 = (float4 *)0x0;
  uVar20 = uRam00000000000d8c84;
  do {
    uVar20 = uVar20 ^ uVar20 << 0xd;
    uVar20 = uVar20 ^ uVar20 >> 0x11;
    uVar4 = uVar20 ^ uVar20 << 5;
    uVar20 = uVar4 ^ uVar4 << 0xd;
    uVar20 = uVar20 ^ uVar20 >> 0x11;
    uVar20 = uVar20 ^ uVar20 << 5;
    uRam00000000000d8c84 = uVar20;
    fVar33 = (float4)powf((float4)(uVar20 & 0xffffff) / 16777216.0,0x3fc00000);
    fVar33 = fVar33 * 45.0 + 3.0;
    sincosf(((float4)(uVar4 & 0xffffff) / 16777216.0) * 6.2831855,&fStack_4b4,&fStack_4b8);
    iVar19 = (int4)(int8)(float4)(int4)(fStack_4b8 * fVar33);
    iVar23 = (int4)(int8)(float4)(int4)(fStack_4b4 * fVar33);
    if (iVar19 != 0 || iVar23 != 0) {
      fVar33 = (float4)powf(SQRT((float4)(uint4)(iVar23 * iVar23 + iVar19 * iVar19)),0xbfcccccd);
      uVar20 = uVar20 ^ uVar20 << 0xd;
      uVar20 = uVar20 ^ uVar20 >> 0x11;
      uVar20 = uVar20 ^ uVar20 << 5;
      fVar68 = ((float4)(uVar20 & 0xffffff) / 16777216.0) * 6.2831855;
      uRam00000000000d8c84 = uVar20;
      if (pfVar27 < pfVar32) {
        *pfVar27 = (float4)iVar19;
        pfVar27[1] = (float4)iVar23;
        pfVar27[2] = fVar33;
        pfVar27[3] = fVar68;
        pfVar27 = pfVar27 + 4;
      }
      else {
        uVar26 = (int8)pfVar32 - (int8)pfStack_598;
        uVar16 = (int8)uVar26 >> 3;
        if (uVar16 <= uVar24 + 1) {
          uVar16 = uVar24 + 1;
        }
        if (0x7fffffffffffffef < uVar26) {
          uVar16 = 0xfffffffffffffff;
        }
        if (uVar16 >> 0x3c != 0) {
          if (*(int8 *)(iVar6 + 0x28) == iStack_b0) {
            xVar34 = FUN_0005ec14();
            operator_delete_plt(0x7ffffffffffffff0,0x40000);
            operator_delete_plt(pfVar27,0x40000);
            operator_delete_plt(0xbfcccccd,0x40000);
            operator_delete_plt(uVar26,0x40000);
            if (pfStack_598 != (float4 *)0x0) {
              operator_delete_plt(pfStack_598,(int8)pfVar32 - (int8)pfStack_598);
            }
            if (*(int8 *)(iVar6 + 0x28) == iStack_b0) {
              FUN_000c5688(xVar34);
            }
          }
          goto code_r0x0007a2b0;
        }
        iVar10 = operator_new_plt(uVar16 << 4);
        pfVar25 = (float4 *)(iVar10 + iVar29);
        *pfVar25 = (float4)iVar19;
        pfVar25[1] = (float4)iVar23;
        pfVar25[2] = fVar33;
        pfVar25[3] = fVar68;
        if (pfVar27 == pfStack_598) {
          pfVar30 = pfVar25;
        }
        else {
          pfVar32 = pfVar25;
          do {
            pfVar7 = pfVar27 + -2;
            xVar34 = *(xunknown8 *)(pfVar27 + -4);
            pfVar27 = pfVar27 + -4;
            pfVar30 = pfVar32 + -4;
            *(xunknown8 *)(pfVar32 + -2) = *(xunknown8 *)pfVar7;
            *(xunknown8 *)(pfVar32 + -4) = xVar34;
            pfVar32 = pfVar30;
          } while (pfVar27 != pfStack_598);
        }
        pfVar32 = (float4 *)(iVar10 + uVar16 * 0x10);
        pfVar27 = pfVar25 + 4;
        if (pfStack_598 != (float4 *)0x0) {
          operator_delete_plt(pfStack_598,uVar26);
          uVar20 = uRam00000000000d8c84;
        }
        pfStack_598 = pfVar30;
      }
    }
    iVar29 = (int8)pfVar27 - (int8)pfStack_598;
    uVar24 = iVar29 >> 4;
  } while (uVar24 < 0x28);
  iVar10 = operator_new_plt(0x40000);
  memset(iVar10,0,0x40000);
  iVar11 = operator_new_plt(0x40000);
  memset(iVar11,0,0x40000);
  uVar16 = 0;
  uVar24 = (iVar29 - 0x10U >> 4) + 1;
  uVar26 = uVar24 & 0x1ffffffffffffff8;
  do {
    fVar33 = (float4)(uVar16 & 0xffffffff);
    uVar28 = 0;
    do {
      if (pfStack_598 == pfVar27) {
        fVar68 = 0.0;
        fVar67 = 0.0;
      }
      else {
        fVar36 = (float4)(uVar28 & 0xffffffff);
        fVar67 = 0.0;
        fVar68 = 0.0;
        pfVar25 = pfStack_598;
        if (0x6f < iVar29 - 0x10U) {
          pfVar25 = pfStack_598 + 0x10;
          uVar31 = uVar26;
          do {
            fVar42 = *pfVar25;
            fVar46 = pfVar25[1];
            fVar52 = pfVar25[2];
            fVar43 = pfVar25[4];
            fVar48 = pfVar25[5];
            fVar59 = pfVar25[6];
            xVar47 = CONCAT44(fVar59,fVar52);
            fVar44 = pfVar25[8];
            fVar49 = pfVar25[9];
            fVar60 = pfVar25[10];
            fVar65 = pfVar25[0xb];
            fVar45 = pfVar25[0xc];
            fVar51 = pfVar25[0xd];
            fVar63 = pfVar25[0xe];
            axVar8._12_4_ = fVar63;
            axVar8._8_4_ = fVar60;
            fVar69 = pfVar25[-0x10];
            fVar73 = pfVar25[-0xf];
            fVar77 = pfVar25[-0xe];
            fVar70 = pfVar25[-0xc];
            fVar74 = pfVar25[-0xb];
            fVar78 = pfVar25[-10];
            xVar53 = CONCAT44(fVar78,fVar77);
            fVar71 = pfVar25[-8];
            fVar75 = pfVar25[-7];
            fVar79 = pfVar25[-6];
            fVar82 = pfVar25[-5];
            fVar72 = pfVar25[-4];
            fVar76 = pfVar25[-3];
            fVar80 = pfVar25[-2];
            axVar41._12_4_ = fVar80;
            axVar41._8_4_ = fVar79;
            fVar81 = pfVar25[-9] + (fVar74 * fVar33 + fVar70 * fVar36) * 0.024543693;
            xVar54 = CONCAT44(fVar81,pfVar25[-0xd] +
                                     (fVar73 * fVar33 + fVar69 * fVar36) * 0.024543693);
            fVar83 = pfVar25[-1] + (fVar76 * fVar33 + fVar72 * fVar36) * 0.024543693;
            fVar64 = pfVar25[7] + (fVar48 * fVar33 + fVar43 * fVar36) * 0.024543693;
            xVar50 = CONCAT44(fVar64,pfVar25[3] + (fVar46 * fVar33 + fVar42 * fVar36) * 0.024543693)
            ;
            fVar66 = pfVar25[0xf] + (fVar51 * fVar33 + fVar45 * fVar36) * 0.024543693;
            xVar34 = sinf(fVar81);
            fVar81 = (float4)sinf(xVar54);
            axVar41._0_8_ = xVar53;
            xVar35 = CONCAT44((float4)xVar34,fVar81);
            fVar82 = (float4)sinf(fVar82 + (fVar75 * fVar33 + fVar71 * fVar36) * 0.024543693,xVar34,
                                  axVar41,xVar54);
            axVar37._8_4_ = fVar82;
            axVar37._0_8_ = xVar35;
            axVar37._12_4_ = 0;
            fVar83 = (float4)sinf(fVar83,fVar83,axVar37,xVar53,xVar54);
            axVar38._8_4_ = fVar82;
            axVar38._0_8_ = xVar35;
            axVar38._12_4_ = fVar83;
            xVar35 = sinf(fVar64,fVar64,axVar38,xVar47);
            fStack_560 = (float4)xVar35;
            fVar64 = (float4)sinf(xVar50);
            axVar8._0_8_ = xVar47;
            fVar65 = (float4)sinf(fVar65 + (fVar49 * fVar33 + fVar44 * fVar36) * 0.024543693,xVar35,
                                  axVar8,xVar50);
            axVar39._4_4_ = fStack_560;
            axVar39._0_4_ = fVar64;
            axVar39._8_4_ = fVar65;
            axVar39._12_4_ = 0;
            fVar66 = (float4)sinf(fVar66,fVar66,axVar39,xVar47,xVar50);
            uVar31 = uVar31 - 8;
            pfVar25 = pfVar25 + 0x20;
            fVar81 = fVar77 * -fVar81 * 0.024543693;
            fVar77 = fVar78 * -(float4)xVar34 * 0.024543693;
            fVar82 = fVar79 * -fVar82 * 0.024543693;
            fVar83 = fVar80 * -fVar83 * 0.024543693;
            fVar64 = fVar52 * -fVar64 * 0.024543693;
            fVar52 = fVar59 * -fStack_560 * 0.024543693;
            fVar65 = fVar60 * -fVar65 * 0.024543693;
            fVar66 = fVar63 * -fVar66 * 0.024543693;
            fVar67 = fVar67 + fVar81 * fVar69 + fVar77 * fVar70 + fVar82 * fVar71 + fVar83 * fVar72
                     + fVar64 * fVar42 + fVar52 * fVar43 + fVar65 * fVar44 + fVar66 * fVar45;
            fVar68 = fVar68 + fVar81 * fVar73 + fVar77 * fVar74 + fVar82 * fVar75 + fVar83 * fVar76
                     + fVar64 * fVar46 + fVar52 * fVar48 + fVar65 * fVar49 + fVar66 * fVar51;
          } while (uVar31 != 0);
          pfVar25 = pfStack_598 + uVar26 * 4;
          if (uVar24 == uVar26) goto code_r0x00079920;
        }
        do {
          fVar83 = *pfVar25;
          fVar82 = pfVar25[1];
          fVar81 = (float4)sinf(pfVar25[3] + (fVar82 * fVar33 + fVar36 * fVar83) * 0.024543693);
          pfVar30 = pfVar25 + 2;
          pfVar25 = pfVar25 + 4;
          fVar81 = -(fVar81 * *pfVar30) * 0.024543693;
          fVar67 = fVar67 + fVar83 * fVar81;
          fVar68 = fVar68 + fVar82 * fVar81;
        } while (pfVar25 != pfVar27);
      }
code_r0x00079920:
      iVar12 = uVar28 + uVar16 * 0x100;
      uVar28 = uVar28 + 1;
      *(float4 *)(iVar10 + iVar12 * 4) = fVar67;
      *(float4 *)(iVar11 + iVar12 * 4) = fVar68;
    } while (uVar28 != 0x100);
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x100);
  fVar33 = 0.0;
  iVar29 = 0;
  do {
    pxVar1 = (xunknown8 *)(iVar11 + iVar29);
    pxVar2 = (xunknown8 *)(iVar10 + iVar29);
    iVar29 = iVar29 + 0x20;
    fVar68 = (float4)*pxVar1;
    fVar67 = (float4)((uint8)*pxVar1 >> 0x20);
    fVar36 = (float4)pxVar1[1];
    fVar81 = (float4)((uint8)pxVar1[1] >> 0x20);
    fVar82 = (float4)*pxVar2;
    fVar83 = (float4)((uint8)*pxVar2 >> 0x20);
    fVar64 = (float4)pxVar2[1];
    fVar65 = (float4)((uint8)pxVar2[1] >> 0x20);
    fVar66 = (float4)pxVar2[2];
    fVar77 = (float4)((uint8)pxVar2[2] >> 0x20);
    fVar52 = (float4)pxVar2[3];
    fVar42 = (float4)((uint8)pxVar2[3] >> 0x20);
    fVar33 = fVar33 + fVar68 * fVar68 + fVar82 * fVar82 + fVar67 * fVar67 + fVar83 * fVar83 +
             fVar36 * fVar36 + fVar64 * fVar64 + fVar81 * fVar81 + fVar65 * fVar65 +
             *(float4 *)(pxVar1 + 2) * *(float4 *)(pxVar1 + 2) + fVar66 * fVar66 +
             *(float4 *)((int8)pxVar1 + 0x14) * *(float4 *)((int8)pxVar1 + 0x14) + fVar77 * fVar77 +
             *(float4 *)(pxVar1 + 3) * *(float4 *)(pxVar1 + 3) + fVar52 * fVar52 +
             *(float4 *)((int8)pxVar1 + 0x1c) * *(float4 *)((int8)pxVar1 + 0x1c) + fVar42 * fVar42;
  } while (iVar29 != 0x40000);
  iVar29 = 0;
  fVar68 = 0.35 / SQRT(fVar33 * 1.5258789e-05);
  if (SQRT(fVar33 * 1.5258789e-05) <= 1e-09) {
    fVar68 = 1.0;
  }
  do {
    pxVar1 = (xunknown8 *)(iVar10 + iVar29);
    pxVar2 = (xunknown8 *)(iVar11 + iVar29);
    iVar29 = iVar29 + 0x20;
    xVar35 = pxVar2[1];
    xVar34 = *pxVar2;
    xVar50 = pxVar2[3];
    xVar47 = pxVar2[2];
    axVar40._0_8_ =
         CONCAT44(*(float4 *)((int8)pxVar1 + 0x14) * fVar68,*(float4 *)(pxVar1 + 2) * fVar68);
    axVar40._8_4_ = *(float4 *)(pxVar1 + 3) * fVar68;
    axVar40._12_4_ = *(float4 *)((int8)pxVar1 + 0x1c) * fVar68;
    pxVar1[1] = CONCAT44((float4)((uint8)pxVar1[1] >> 0x20) * fVar68,(float4)pxVar1[1] * fVar68);
    *pxVar1 = CONCAT44((float4)((uint8)*pxVar1 >> 0x20) * fVar68,(float4)*pxVar1 * fVar68);
    pxVar1[3] = axVar40._8_8_;
    pxVar1[2] = axVar40._0_8_;
    pxVar2[1] = CONCAT44((float4)((uint8)xVar35 >> 0x20) * fVar68,(float4)xVar35 * fVar68);
    *pxVar2 = CONCAT44((float4)((uint8)xVar34 >> 0x20) * fVar68,(float4)xVar34 * fVar68);
    pxVar2[3] = CONCAT44((float4)((uint8)xVar50 >> 0x20) * fVar68,(float4)xVar50 * fVar68);
    pxVar2[2] = CONCAT44((float4)((uint8)xVar47 >> 0x20) * fVar68,(float4)xVar47 * fVar68);
  } while (iVar29 != 0x40000);
  iVar12 = operator_new_plt(0x40000);
  memset(iVar12,0,0x40000);
  iVar29 = 0;
  uVar24 = 0;
  do {
    iVar17 = -0x100;
    iVar13 = iVar29;
    do {
      iVar19 = (int4)iVar17;
      pfVar27 = (float4 *)(iVar10 + iVar13);
      pfVar25 = (float4 *)(iVar11 + iVar13);
      bVar9 = iVar17 != -1;
      iVar17 = iVar17 + 1;
      iVar13 = iVar13 + 4;
      fVar33 = (float4)(iVar19 + 0x100) + *pfVar27 * -16.0;
      fVar68 = (float4)(uVar24 & 0xffffffff) + *pfVar25 * -16.0;
      uVar18 = (uint4)fVar33;
      uVar20 = (uint4)fVar68;
      fVar33 = fVar33 - (float4)(int4)fVar33;
      fVar68 = fVar68 - (float4)(int4)fVar68;
      uVar4 = uVar18 & 0xff | (uVar20 & 0xff) << 8;
      uVar3 = uVar18 + 1 & 0xff | (uVar20 & 0xff) << 8;
      uVar20 = uVar20 * 0x100 + 0x100 & 0xff00;
      *(float4 *)(iVar12 + (uint8)uVar4 * 4) =
           *(float4 *)(iVar12 + (uint8)uVar4 * 4) + (1.0 - fVar68) * (1.0 - fVar33);
      uVar4 = uVar20 | uVar18 + 1 & 0xff;
      uVar20 = uVar20 | uVar18 & 0xff;
      *(float4 *)(iVar12 + (uint8)uVar3 * 4) =
           *(float4 *)(iVar12 + (uint8)uVar3 * 4) + (1.0 - fVar68) * fVar33;
      *(float4 *)(iVar12 + (uint8)uVar20 * 4) =
           *(float4 *)(iVar12 + (uint8)uVar20 * 4) + fVar68 * (1.0 - fVar33);
      *(float4 *)(iVar12 + (uint8)uVar4 * 4) =
           *(float4 *)(iVar12 + (uint8)uVar4 * 4) + fVar68 * fVar33;
    } while (bVar9);
    uVar24 = uVar24 + 1;
    iVar29 = iVar29 + 0x400;
  } while (uVar24 != 0x100);
  iVar13 = operator_new_plt(0x40000);
  memset(iVar13,0,0x40000);
  axVar41 = NEON_fmov(0x40800000,4);
  iVar17 = 0;
  iVar29 = 0;
  uVar24 = 1;
  uVar16 = 0xff;
  do {
    uVar20 = (int4)iVar29 * 0x100;
    iVar21 = (uVar24 & 0xff) << 10;
    iVar22 = (uVar16 & 0xff) << 10;
    iVar14 = -0x100;
    iVar15 = iVar17;
    do {
      iVar19 = (int4)iVar14;
      iVar14 = iVar14 + 4;
      uVar4 = iVar19 - 1U & 0xff;
      pxVar1 = (xunknown8 *)(iVar12 + (uint8)(uVar4 | uVar20 + 0xff00 & 0xff00) * 4);
      xVar35 = pxVar1[1];
      xVar34 = *pxVar1;
      pxVar1 = (xunknown8 *)(iVar12 + iVar22);
      iVar22 = iVar22 + 0x10;
      xVar47 = *pxVar1;
      xVar50 = *(xunknown8 *)((int8)pxVar1 + 4);
      pxVar2 = (xunknown8 *)(iVar12 + (uint8)(uVar4 | uVar20 & 0xff00) * 4);
      xVar61 = pxVar2[1];
      xVar53 = *pxVar2;
      pxVar2 = (xunknown8 *)(iVar12 + iVar15);
      xVar54 = *pxVar2;
      xVar55 = *(xunknown8 *)((int8)pxVar2 + 4);
      pxVar5 = (xunknown8 *)(iVar12 + (uint8)(uVar4 | uVar20 + 0x100 & 0xff00) * 4);
      xVar62 = pxVar5[1];
      xVar56 = *pxVar5;
      pxVar5 = (xunknown8 *)(iVar12 + iVar21);
      iVar21 = iVar21 + 0x10;
      xVar57 = *pxVar5;
      xVar58 = *(xunknown8 *)((int8)pxVar5 + 4);
      ((xunknown8 *)(iVar13 + iVar15))[1] =
           CONCAT44(((float4)((uint8)*(xunknown8 *)((int8)pxVar5 + 0xc) >> 0x20) +
                    (float4)((uint8)xVar62 >> 0x20) +
                    (float4)((uint8)*(xunknown8 *)((int8)pxVar1 + 0xc) >> 0x20) +
                    (float4)((uint8)xVar35 >> 0x20) + 0.0 + (float4)((uint8)pxVar1[1] >> 0x20) * 2.0
                    + (float4)((uint8)xVar61 >> 0x20) * 2.0 +
                    axVar41._12_4_ * (float4)((uint8)pxVar2[1] >> 0x20) +
                    (float4)((uint8)*(xunknown8 *)((int8)pxVar2 + 0xc) >> 0x20) * 2.0 +
                    (float4)((uint8)pxVar5[1] >> 0x20) * 2.0) * 0.0625,
                    ((float4)*(xunknown8 *)((int8)pxVar5 + 0xc) +
                    (float4)xVar62 +
                    (float4)*(xunknown8 *)((int8)pxVar1 + 0xc) +
                    (float4)xVar35 + 0.0 + (float4)pxVar1[1] * 2.0 + (float4)xVar61 * 2.0 +
                    axVar41._8_4_ * (float4)pxVar2[1] +
                    (float4)*(xunknown8 *)((int8)pxVar2 + 0xc) * 2.0 + (float4)pxVar5[1] * 2.0) *
                    0.0625);
      *(xunknown8 *)(iVar13 + iVar15) =
           CONCAT44(((float4)((uint8)xVar58 >> 0x20) +
                    (float4)((uint8)xVar56 >> 0x20) +
                    (float4)((uint8)xVar50 >> 0x20) +
                    (float4)((uint8)xVar34 >> 0x20) + 0.0 + (float4)((uint8)xVar47 >> 0x20) * 2.0 +
                    (float4)((uint8)xVar53 >> 0x20) * 2.0 +
                    axVar41._4_4_ * (float4)((uint8)xVar54 >> 0x20) +
                    (float4)((uint8)xVar55 >> 0x20) * 2.0 + (float4)((uint8)xVar57 >> 0x20) * 2.0) *
                    0.0625,((float4)xVar58 +
                           (float4)xVar56 +
                           (float4)xVar50 + (float4)xVar34 + 0.0 + (float4)xVar47 * 2.0 +
                           (float4)xVar53 * 2.0 + axVar41._0_4_ * (float4)xVar54 +
                           (float4)xVar55 * 2.0 + (float4)xVar57 * 2.0) * 0.0625);
      iVar15 = iVar15 + 0x10;
    } while (iVar14 != 0);
    iVar29 = iVar29 + 1;
    iVar17 = iVar17 + 0x400;
    uVar24 = (uint8)((int4)uVar24 + 1);
    uVar16 = (uint8)((int4)uVar16 + 1);
  } while (iVar29 != 0x100);
  iVar29 = 0;
  pfVar27 = afStack_4b0;
  do {
    iVar17 = 0;
    do {
      uRam00000000000d8c84 = uRam00000000000d8c84 ^ uRam00000000000d8c84 << 0xd;
      uRam00000000000d8c84 = uRam00000000000d8c84 ^ uRam00000000000d8c84 >> 0x11;
      uRam00000000000d8c84 = uRam00000000000d8c84 ^ uRam00000000000d8c84 << 5;
      *(float4 *)((int8)pfVar27 + iVar17) = (float4)(uRam00000000000d8c84 & 0xffffff) / 16777216.0;
      iVar17 = iVar17 + 4;
    } while (iVar17 != 0x40);
    iVar29 = iVar29 + 1;
    pfVar27 = pfVar27 + 0x10;
  } while (iVar29 != 0x10);
  if (uRam000000000010c250 - iRam000000000010c240 < 0x40000) {
    if (iRam000000000010c240 != 0) {
      iRam000000000010c248 = iRam000000000010c240;
      operator_delete_plt();
      iRam000000000010c240 = 0;
      iRam000000000010c248 = 0;
      uRam000000000010c250 = 0;
    }
    uVar24 = uRam000000000010c250 * 2;
    if (uVar24 < 0x40001) {
      uVar24 = 0x40000;
    }
    if (0x3ffffffffffffffe < uRam000000000010c250) {
      uVar24 = 0x7fffffffffffffff;
    }
    iVar29 = operator_new_plt(uVar24);
    uRam000000000010c250 = iVar29 + uVar24;
    iRam000000000010c240 = iVar29;
    memset(iVar29,0xff,0x40000);
    iRam000000000010c248 = iVar29 + 0x40000;
  }
  else {
    uVar24 = iRam000000000010c248 - iRam000000000010c240;
    if (uVar24 != 0) {
      uVar16 = uVar24;
      if (0x3ffff < uVar24) {
        uVar16 = 0x40000;
      }
      memset(iRam000000000010c240,0xff,uVar16);
      if (uVar24 >> 0x12 != 0) {
        iRam000000000010c248 = iRam000000000010c240 + 0x40000;
        goto code_r0x00079f8c;
      }
    }
    iVar29 = iRam000000000010c248;
    memset(iRam000000000010c248,0xff,0x40000 - uVar24);
    iRam000000000010c248 = iVar29 + (0x40000 - uVar24);
  }
code_r0x00079f8c:
  uVar24 = 0;
  iVar29 = 3;
  do {
    fVar33 = (float4)(uVar24 & 0xffffffff) / 16.0;
    uVar16 = 0;
    iVar19 = (int4)fVar33;
    uVar26 = (uint8)(iVar19 + 1U & 0xf);
    fVar33 = fVar33 - (float4)(int4)fVar33;
    fVar33 = fVar33 * fVar33 * (fVar33 * -2.0 + 3.0);
    iVar17 = iVar29;
    do {
      fVar68 = (float4)(uVar16 & 0xffffffff) / 16.0;
      uVar16 = uVar16 + 1;
      iVar23 = (int4)fVar68;
      uVar20 = iVar23 + 1U & 0xf;
      fVar68 = fVar68 - (float4)(int4)fVar68;
      fVar68 = fVar68 * fVar68 * (fVar68 * -2.0 + 3.0);
      *(char *)(iRam000000000010c240 + iVar17) =
           (char)(int8)(float4)(int4)((fVar33 * (fVar68 * afStack_4b0[uVar26 * 0x10 + (uint8)uVar20]
                                                + (1.0 - fVar68) *
                                                  afStack_4b0[uVar26 * 0x10 + (int8)iVar23]) +
                                      (1.0 - fVar33) *
                                      (fVar68 * afStack_4b0[(int8)iVar19 * 0x10 + (uint8)uVar20] +
                                      (1.0 - fVar68) *
                                      afStack_4b0[(int8)iVar19 * 0x10 + (int8)iVar23])) * 255.0);
      iVar17 = iVar17 + 4;
    } while (uVar16 != 0x100);
    uVar24 = uVar24 + 1;
    iVar29 = iVar29 + 0x400;
  } while (uVar24 != 0x100);
  fVar33 = 1.0;
  iVar29 = 0;
  do {
    fVar67 = *(float4 *)(iVar10 + iVar29) * 0.41666666 + 0.5;
    fVar68 = fVar33;
    if (fVar67 <= 1.0) {
      fVar68 = fVar67;
    }
    fVar36 = 0.0;
    if (0.0 <= fVar67) {
      fVar36 = fVar68 * 255.0;
    }
    *(char *)(iRam000000000010c240 + iVar29) = (char)(int8)(float4)(int4)fVar36;
    fVar67 = *(float4 *)(iVar11 + iVar29) * 0.41666666 + 0.5;
    fVar68 = fVar33;
    if (fVar67 <= 1.0) {
      fVar68 = fVar67;
    }
    fVar36 = 0.0;
    if (0.0 <= fVar67) {
      fVar36 = fVar68 * 255.0;
    }
    *(char *)(iRam000000000010c240 + iVar29 + 1) = (char)(int8)(float4)(int4)fVar36;
    fVar67 = *(float4 *)(iVar13 + iVar29) / 3.0;
    iVar17 = iRam000000000010c240 + iVar29;
    iVar29 = iVar29 + 4;
    fVar68 = fVar33;
    if (fVar67 <= 1.0) {
      fVar68 = fVar67;
    }
    *(char *)(iVar17 + 2) = (char)(int8)(float4)(int4)(fVar68 * 255.0);
  } while (iVar29 != 0x40000);
  xRam000000000010c268 = 2;
  operator_delete_plt(iVar13,0x40000);
  operator_delete_plt(iVar12,0x40000);
  operator_delete_plt(iVar11,0x40000);
  operator_delete_plt(iVar10,0x40000);
  if (pfStack_598 == (float4 *)0x0) {
    if (*(int8 *)(iVar6 + 0x28) == iStack_b0) {
      return;
    }
  }
  else if (*(int8 *)(iVar6 + 0x28) == iStack_b0) {
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000000d3c08)(pfStack_598,(int8)pfVar32 - (int8)pfStack_598);
    return;
  }
code_r0x0007a2b0:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7a2b4  size=244 */
void FUN_0007a2b4(xunknown8 param_1,xunknown8 param_2)

{
  int8 iVar1;
  xunknown8 xVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  
  iVar1 = tpidr_el0;
  iVar4 = *(int8 *)(iVar1 + 0x28);
  xVar2 = operator_new_plt(8);
  std____ndk1____thread_struct____thread_struct_plt();
  pxVar3 = (xunknown8 *)operator_new_plt(0x10);
  *pxVar3 = xVar2;
  pxVar3[1] = param_2;
  xVar2 = pthread_create(param_1,0,FUN_0007a6e8,pxVar3);
  if ((int4)xVar2 == 0) {
    if (*(int8 *)(iVar1 + 0x28) == iVar4) {
      return;
    }
  }
  else if (*(int8 *)(iVar1 + 0x28) == iVar4) {
                    /* WARNING: Could not recover jumptable at 0x000ca13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000000d4000)(xVar2,0x28ea5 /* "thread constructor failed" */);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7a6e8  size=192 */
xunknown8 FUN_0007a6e8(int8 *param_1)

{
  xunknown4 xVar1;
  int8 iVar2;
  xunknown4 *pxVar3;
  xunknown8 xVar4;
  int8 iVar5;
  int8 iVar6;
  
  iVar2 = tpidr_el0;
  iVar6 = *(int8 *)(iVar2 + 0x28);
  pxVar3 = (xunknown4 *)std____ndk1____thread_local_data_plt();
  iVar5 = *param_1;
  xVar1 = *pxVar3;
  *param_1 = 0;
  pthread_setspecific(xVar1,iVar5);
  (*(code *)param_1[1])();
  iVar5 = *param_1;
  *param_1 = 0;
  if (iVar5 != 0) {
    std____ndk1____thread_struct__dtor___thread_struct_plt(iVar5);
    operator_delete_plt(iVar5,8);
  }
  operator_delete_plt(param_1,0x10);
  if (*(int8 *)(iVar2 + 0x28) == iVar6) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  xVar4 = (*got___stack_chk_fail)();
  return xVar4;
}

/* 0x7a7a8  size=88 */
void FUN_0007a7a8(xunknown8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)*param_1;
  *param_1 = 0;
  if (piVar1 == (int8 *)0x0) {
    return;
  }
  iVar2 = *piVar1;
  *piVar1 = 0;
  if (iVar2 != 0) {
    std____ndk1____thread_struct__dtor___thread_struct_plt(iVar2);
    operator_delete_plt(iVar2,8);
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(piVar1,0x10);
  return;
}

/* 0x7a800  size=64 */
void FUN_0007a800(int8 *param_1)

{
  int8 iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  if (iVar1 == 0) {
    return;
  }
  std____ndk1____thread_struct__dtor___thread_struct_plt(iVar1);
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,8);
  return;
}

/* 0x7a840  size=36 */
void FUN_0007a840(void)

{
  iRam000000000010c240 = 0;
  iRam000000000010c248 = 0;
  uRam000000000010c250 = 0;
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(FUN_0005c9d4,&iRam000000000010c240,0xcee00);
  return;
}

/* 0x7a864  size=160 */
void FUN_0007a864(int8 *param_1)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return;
  }
  iVar3 = param_1[1];
  iVar1 = iVar2;
  if (iVar2 != iVar3) {
    do {
      iVar1 = *(int8 *)(iVar3 + -0x18);
      if (iVar1 != 0) {
        *(int8 *)(iVar3 + -0x10) = iVar1;
        operator_delete_plt(iVar1,*(int8 *)(iVar3 + -8) - iVar1);
      }
      iVar1 = *(int8 *)(iVar3 + -0x30);
      if (iVar1 != 0) {
        *(int8 *)(iVar3 + -0x28) = iVar1;
        operator_delete_plt(iVar1,*(int8 *)(iVar3 + -0x20) - iVar1);
      }
      iVar3 = iVar3 + -0x48;
    } while (iVar3 != iVar2);
    iVar1 = *param_1;
  }
  param_1[1] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,param_1[2] - iVar1);
  return;
}

/* 0x7a904  size=88 */
void FUN_0007a904(int8 *param_1)

{
  int8 *piVar1;
  int8 iVar2;
  
  piVar1 = (int8 *)param_1[2];
  while (piVar1 != (int8 *)0x0) {
    iVar2 = *piVar1;
    operator_delete_plt(piVar1,0x20);
    piVar1 = (int8 *)iVar2;
  }
  iVar2 = *param_1;
  *param_1 = 0;
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar2,param_1[1] << 3);
  return;
}

/* 0x7aaf4  size=5212 */
void FUN_0007aaf4(void)

{
  uint1 uVar1;
  xunknown4 *pxVar2;
  uint4 *puVar3;
  char cVar4;
  uint8 uVar5;
  int8 iVar6;
  xunknown8 *pxVar7;
  float4 fVar8;
  int8 *piVar9;
  bool bVar10;
  int4 iVar11;
  int4 iVar12;
  xunknown4 xVar13;
  xunknown4 xVar14;
  xunknown4 xVar15;
  uint8 uVar16;
  xunknown8 xVar17;
  int8 iVar18;
  int8 iVar19;
  int8 iVar20;
  uint8 *puVar21;
  xunknown8 xVar22;
  int8 *piVar23;
  xunknown4 *pxVar24;
  int8 iVar25;
  int8 iVar26;
  uint8 uVar27;
  uint8 uVar28;
  uint4 uVar29;
  xunknown8 *pxVar30;
  uint8 *puVar31;
  uint8 uVar32;
  int8 *piVar33;
  uint8 uVar34;
  xunknown8 *pxVar35;
  uint4 *puVar36;
  uint1 uVar37;
  uint8 *puVar38;
  xunknown4 *pxVar39;
  int8 *piVar40;
  xunknown4 *pxVar41;
  uint8 uVar42;
  uint8 *puVar43;
  uint8 uVar44;
  uint8 *puVar45;
  xunknown4 *pxVar46;
  uint1 *puVar47;
  xunknown8 xVar48;
  xunknown8 *pxStack_2e0;
  xunknown8 *pxStack_2d8;
  int8 iStack_2d0;
  xunknown8 xStack_2c8;
  uint8 uStack_2c0;
  uint8 uStack_2b8;
  xunknown8 xStack_2b0;
  xunknown8 xStack_2a8;
  xunknown8 xStack_2a0;
  xunknown8 xStack_298;
  xunknown8 xStack_290;
  xunknown8 xStack_288;
  int8 iStack_70;
  
  iVar18 = iRam000000000011c2c0;
  iVar6 = tpidr_el0;
  iStack_70 = *(int8 *)(iVar6 + 0x28);
  if (((uRam000000000011c2dc & 1) == 0) && ((uRam000000000011c2dd & 1) == 0)) {
    uVar16 = rq__HookCommand_plt(0x2b87a /* "_Z26RQ_Command_rqSelectTextureRPc" */,FUN_0007bf50,0x11c2e0);
    if ((uVar16 & 1) != 0) {
      uRam000000000011c2dc = 1;
      if (*(int8 *)(iVar6 + 0x28) == iStack_70) {
        xVar22 = 0x38091 /* "material: rqSelectTexture handler taken (table slot, no code patch)" */;
        xVar17 = 0;
code_r0x0007ac2c:
                    /* WARNING: Could not recover jumptable at 0x0007ac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000011c2b8)(xVar17,xVar22);
        return;
      }
      goto code_r0x0007bf4c;
    }
    uVar16 = rq__Ready_plt();
    if ((uVar16 & 1) != 0) {
      uRam000000000011c2dd = 1;
      if (*(int8 *)(iVar6 + 0x28) == iStack_70) {
        xVar22 = 0x27485 /* "material: rqSelectTexture not found in the render queue's table (anoth..." */;
        xVar17 = 1;
        goto code_r0x0007ac2c;
      }
      goto code_r0x0007bf4c;
    }
  }
  else if (((((uRam000000000011c2dd & 1) == 0) &&
            (bVar10 = 0x1c < iRam000000000011c2e8, iRam000000000011c2e8 = iRam000000000011c2e8 + 1,
            bVar10)) && (iRam000000000011c2e8 = 0, iRam000000000011c2c0 != 0)) &&
          ((*(int8 *)(iRam000000000011c2c0 + 8) != 0 &&
           (piVar23 = (int8 *)(uint8)*(uint4 *)(iRam000000000011c2c0 + 4),
           *(uint4 *)(iRam000000000011c2c0 + 4) < 0x101)))) {
    if (piVar23 != (int8 *)0x0) {
      piVar40 = (int8 *)0x0;
      do {
        puVar31 = puRam000000000010c280;
        puVar45 = puRam000000000010c278;
        puVar38 = puRam000000000010c270;
        uVar16 = *(uint8 *)(*(int8 *)(iVar18 + 8) + (int8)piVar40 * 8);
        if (uVar16 != 0) {
          iVar12 = *(int4 *)(uVar16 + 0x24);
          uVar32 = *(uint8 *)(uVar16 + 0x28);
          if (puRam000000000010c270 != puRam000000000010c278) {
            puVar21 = puRam000000000010c270;
            do {
              if (*puVar21 == uVar16) goto code_r0x0007ae8c;
              puVar21 = puVar21 + 9;
            } while (puVar21 != puRam000000000010c278);
          }
          uStack_2b8 = 0;
          uStack_2c0 = 0;
          xStack_2a8 = 0;
          xStack_2b0 = 0;
          xStack_298 = 0;
          xStack_2a0 = 0;
          xStack_288 = 0;
          xStack_290 = 0;
          xStack_2c8 = uVar16;
          if (puRam000000000010c278 < puRam000000000010c280) {
            puRam000000000010c278[5] = 0;
            puRam000000000010c278[6] = 0;
            puVar43 = puRam000000000010c278 + 9;
            puRam000000000010c278[3] = 0;
            puRam000000000010c278[4] = 0;
            puRam000000000010c278[1] = 0;
            *puRam000000000010c278 = uVar16;
            puRam000000000010c278[7] = 0;
            puRam000000000010c278[8] = 0;
            puRam000000000010c278[2] = 0;
          }
          else {
            iVar19 = (int8)puRam000000000010c278 - (int8)puRam000000000010c270;
            uVar16 = (iVar19 >> 3) * -0x71c71c71c71c71c7 + 1;
            if (0x38e38e38e38e38e < uVar16) goto code_r0x0007beb4;
            iVar25 = (int8)puRam000000000010c280 - (int8)puRam000000000010c270 >> 3;
            uVar42 = iVar25 * 0x1c71c71c71c71c72;
            if (uVar42 <= uVar16) {
              uVar42 = uVar16;
            }
            if (0x1c71c71c71c71c6 < (uint8)(iVar25 * -0x71c71c71c71c71c7)) {
              uVar42 = 0x38e38e38e38e38e;
            }
            if (0x38e38e38e38e38e < uVar42) goto code_r0x0007be9c;
            iVar25 = operator_new_plt(uVar42 * 0x48);
            puVar43 = (uint8 *)(iVar25 + iVar19);
            puVar43[4] = 0;
            puVar43[5] = 0;
            puVar43[2] = uStack_2b8;
            puVar43[3] = 0;
            puVar43[1] = uStack_2c0;
            *puVar43 = xStack_2c8;
            xStack_2a8 = 0;
            xStack_2a0 = 0;
            xStack_2b0 = 0;
            puVar43[7] = 0;
            puVar43[8] = 0;
            puVar43[6] = 0;
            if (puVar38 == puVar45) {
              puVar21 = puVar43;
            }
            else {
              iVar19 = 0;
              do {
                iVar26 = iVar19 + -0x48;
                xVar22 = *(xunknown8 *)((int8)puVar45 + iVar19 + -0x40);
                xVar17 = *(xunknown8 *)((int8)puVar45 + iVar19 + -0x48);
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x38) =
                     *(xunknown8 *)((int8)puVar45 + iVar19 + -0x38);
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x40) = xVar22;
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x48) = xVar17;
                xVar17 = *(xunknown8 *)((int8)puVar45 + iVar19 + -0x30);
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x28) =
                     *(xunknown8 *)((int8)puVar45 + iVar19 + -0x28);
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x30) = xVar17;
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x20) =
                     *(xunknown8 *)((int8)puVar45 + iVar19 + -0x20);
                xVar17 = *(xunknown8 *)((int8)puVar45 + iVar19 + -0x18);
                *(xunknown8 *)((int8)puVar45 + iVar19 + -0x30) = 0;
                *(xunknown8 *)((int8)puVar45 + iVar19 + -0x28) = 0;
                *(xunknown8 *)((int8)puVar45 + iVar19 + -0x20) = 0;
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x10) =
                     *(xunknown8 *)((int8)puVar45 + iVar19 + -0x10);
                *(xunknown8 *)((int8)puVar43 + iVar19 + -0x18) = xVar17;
                *(xunknown8 *)((int8)puVar43 + iVar19 + -8) =
                     *(xunknown8 *)((int8)puVar45 + iVar19 + -8);
                *(xunknown8 *)((int8)puVar45 + iVar19 + -0x18) = 0;
                *(xunknown8 *)((int8)puVar45 + iVar19 + -0x10) = 0;
                *(xunknown8 *)((int8)puVar45 + iVar19 + -8) = 0;
                iVar19 = iVar26;
              } while ((uint8 *)((int8)puVar45 + iVar26) != puVar38);
              puVar21 = (uint8 *)((int8)puVar43 + iVar26);
              puVar38 = puRam000000000010c270;
              puVar31 = puRam000000000010c280;
              puVar45 = puRam000000000010c278;
            }
            puRam000000000010c280 = (uint8 *)(iVar25 + uVar42 * 0x48);
            puVar43 = puVar43 + 9;
            puRam000000000010c278 = puVar43;
            puRam000000000010c270 = puVar21;
            for (; puVar38 != puVar45; puVar45 = puVar45 + -9) {
              uVar16 = puVar45[-3];
              if (uVar16 != 0) {
                puVar45[-2] = uVar16;
                operator_delete_plt(uVar16,puVar45[-1] - uVar16);
              }
              uVar16 = puVar45[-6];
              if (uVar16 != 0) {
                puVar45[-5] = uVar16;
                operator_delete_plt(uVar16,puVar45[-4] - uVar16);
              }
            }
            if (puVar38 != (uint8 *)0x0) {
              operator_delete_plt(puVar38,(int8)puVar31 - (int8)puVar38);
            }
          }
          puVar21 = puVar43 + -9;
          puRam000000000010c278 = puVar43;
code_r0x0007ae8c:
          if ((puVar21[1] != uVar32) || ((int4)puVar21[2] != iVar12)) {
            puVar21[1] = uVar32;
            *(int4 *)(puVar21 + 2) = iVar12;
            *(xunknown4 *)((int8)puVar21 + 0x14) = 0;
            xStack_2c8 = xStack_2c8 & 0xffffffffffffff00;
            FUN_0005e954(puVar21 + 3,iVar12,&xStack_2c8);
            puVar21[7] = puVar21[6];
          }
          piVar23 = (int8 *)(uint8)*(uint4 *)(iVar18 + 4);
        }
        piVar40 = (int8 *)((int8)piVar40 + 1);
      } while (piVar40 < piVar23);
    }
    puVar45 = puRam000000000010c278;
    if (puRam000000000010c270 != puRam000000000010c278) {
      iVar12 = 4000;
      piVar40 = &xStack_2c8;
      puVar38 = puRam000000000010c270;
      do {
        if ((puVar38[1] != 0) &&
           (uVar29 = *(uint4 *)((int8)puVar38 + 0x14), uVar29 < (uint4)puVar38[2])) {
          do {
            if (iVar12 == 0) break;
            puVar47 = *(uint1 **)(puVar38[1] + (uint8)uVar29 * 0x1f);
            if (puVar47 == (uint1 *)0x0) {
              *(xunknown1 *)(puVar38[3] + (uint8)uVar29) = 1;
              iRam000000000011c2ec = iRam000000000011c2ec + 1;
            }
            else {
              uVar37 = *puVar47;
              if (uVar37 == 0) {
code_r0x0007b128:
                uVar37 = 1;
              }
              else {
                uVar16 = 0;
                do {
                  uVar32 = uVar16 + 1;
                  uVar1 = uVar37 | 0x20;
                  if (0x19 < uVar37 - 0x41) {
                    uVar1 = uVar37;
                  }
                  *(uint1 *)((int8)piVar40 + uVar16) = uVar1;
                  uVar37 = puVar47[uVar16 + 1];
                } while ((uVar37 != 0) && (bVar10 = uVar16 < 0x26, uVar16 = uVar32, bVar10));
                *(xunknown1 *)((int8)piVar40 + uVar32) = 0;
                iVar18 = strstr(&xStack_2c8,0x2ab07 /* "glass" */);
                if ((iVar18 == 0) &&
                   ((((iVar18 = strstr(&xStack_2c8,0x2d7d4 /* "window" */), iVar18 == 0 &&
                      (iVar18 = strstr(&xStack_2c8,0x2d7db /* "windo" */), iVar18 == 0)) &&
                     (iVar18 = strstr(&xStack_2c8,0x39ea6 /* "windw" */), iVar18 == 0)) &&
                    (iVar18 = strstr(&xStack_2c8,0x262c8 /* "wndw" */), iVar18 == 0)))) {
                  pxVar30 = &xStack_2c8;
                  while (piVar23 = (int8 *)strstr(pxVar30,0x262cd), piVar23 != (int8 *)0x0) {
                    if (((piVar23 == piVar40) ||
                        ((*(uint1 *)((int8)piVar23 + -1) & 0xffffffdf) - 0x5b < 0xffffffe6)) &&
                       ((*(uint1 *)((int8)piVar23 + 3) & 0xffffffdf) - 0x5b < 0xffffffe6))
                    goto code_r0x0007aff4;
                    pxVar30 = (xunknown8 *)((int8)piVar23 + 1);
                  }
                  for (piVar23 = (int8 *)strstr(&xStack_2c8,0x2ab0d /* "wins" */);
                      (piVar23 != piVar40 && (piVar23 != (int8 *)0x0));
                      piVar23 = (int8 *)strstr((int8)piVar23 + 1,0x2ab0d /* "wins" */)) {
                    if ((*(uint1 *)((int8)piVar23 + -1) & 0xffffffdf) - 0x5b < 0xffffffe6)
                    goto code_r0x0007aff4;
                  }
                  if ((piVar23 == (int8 *)0x0) &&
                     (iVar18 = strstr(&xStack_2c8,0x2b8b4 /* "skywin" */), iVar18 == 0)) {
                    iVar18 = strstr(&xStack_2c8,0x4072d /* "rust" */);
                    if ((iVar18 != 0) ||
                       (((iVar18 = strstr(&xStack_2c8,0x40732 /* "dirt" */), iVar18 != 0 ||
                         (iVar18 = strstr(&xStack_2c8,0x2d031 /* "grime" */), iVar18 != 0)) ||
                        (iVar18 = strstr(&xStack_2c8,0x2d7e1), iVar18 != 0))))
                    goto code_r0x0007b128;
                    iVar18 = strstr(&xStack_2c8,0x3a9a2 /* "metal" */);
                    if ((((((iVar18 == 0) && (iVar18 = strstr(&xStack_2c8,0x274e8 /* "steel" */), iVar18 == 0)) &&
                          ((iVar18 = strstr(&xStack_2c8,0x2b8bb /* "chrome" */), iVar18 == 0 &&
                           ((iVar18 = strstr(&xStack_2c8,0x274ee /* "chrm" */), iVar18 == 0 &&
                            (iVar18 = strstr(&xStack_2c8,0x25b3a /* "alum" */), iVar18 == 0)))))) &&
                         (iVar18 = strstr(&xStack_2c8,0x34e88 /* "corrug" */), iVar18 == 0)) &&
                        (((iVar18 = strstr(&xStack_2c8,0x3a9a8 /* "silver" */), iVar18 == 0 &&
                          (uVar16 = FUN_0007c2e4(&xStack_2c8,0x23c86), (uVar16 & 1) == 0)) &&
                         (uVar16 = FUN_0007c368(&xStack_2c8,0x3f622 /* "tinwall" */), (uVar16 & 1) == 0)))) &&
                       (uVar16 = FUN_0007c2e4(&xStack_2c8,0x38137), (uVar16 & 1) == 0)) {
                      uVar16 = FUN_0007c2e4(&xStack_2c8,0x41211 /* "corr" */);
                      uVar37 = 3;
                      if ((uVar16 & 1) == 0) {
                        uVar37 = 1;
                      }
                    }
                    else {
                      uVar37 = 3;
                    }
                    goto code_r0x0007b12c;
                  }
                }
code_r0x0007aff4:
                uVar37 = 2;
              }
code_r0x0007b12c:
              *(uint1 *)(puVar38[3] + (uint8)*(uint4 *)((int8)puVar38 + 0x14)) = uVar37;
              iRam000000000011c2ec = iRam000000000011c2ec + 1;
              if (1 < uVar37) {
                pxVar2 = (xunknown4 *)puVar38[7];
                if ((xunknown4 *)puVar38[8] <= pxVar2) {
                  pxVar46 = (xunknown4 *)puVar38[6];
                  iVar18 = (int8)pxVar2 - (int8)pxVar46;
                  uVar16 = (iVar18 >> 2) + 1;
                  if (uVar16 >> 0x3e == 0) {
                    uVar42 = (int8)puVar38[8] - (int8)pxVar46;
                    uVar32 = (int8)uVar42 >> 1;
                    if ((uint8)((int8)uVar42 >> 1) <= uVar16) {
                      uVar32 = uVar16;
                    }
                    if (0x7ffffffffffffffb < uVar42) {
                      uVar32 = 0x3fffffffffffffff;
                    }
                    if (uVar32 >> 0x3e == 0) {
                      iVar19 = operator_new_plt();
                      pxVar24 = (xunknown4 *)(iVar19 + iVar18);
                      pxVar39 = pxVar24 + 1;
                      *pxVar24 = *(xunknown4 *)((int8)puVar38 + 0x14);
                      if ((int8)pxVar2 - (int8)pxVar46 != 0) {
                        uVar16 = ((int8)pxVar2 - (int8)pxVar46) - 4;
                        pxVar41 = pxVar2;
                        if ((0x1b < uVar16) && (0x1f < (uint8)((int8)pxVar46 - iVar19))) {
                          uVar16 = (uVar16 >> 2) + 1;
                          uVar44 = uVar16 & 0x7ffffffffffffff8;
                          pxVar41 = pxVar2 + -uVar44;
                          pxVar24 = pxVar24 + -uVar44;
                          pxVar30 = (xunknown8 *)(iVar19 + iVar18 + -0x10);
                          pxVar35 = (xunknown8 *)(pxVar2 + -4);
                          uVar27 = uVar44;
                          do {
                            pxVar7 = pxVar35 + -1;
                            xVar48 = pxVar35[-2];
                            xVar22 = pxVar35[1];
                            xVar17 = *pxVar35;
                            uVar27 = uVar27 - 8;
                            pxVar35 = pxVar35 + -4;
                            pxVar30[-1] = *pxVar7;
                            pxVar30[-2] = xVar48;
                            pxVar30[1] = xVar22;
                            *pxVar30 = xVar17;
                            pxVar30 = pxVar30 + -4;
                          } while (uVar27 != 0);
                          if (uVar16 == uVar44) goto code_r0x0007b240;
                        }
                        do {
                          pxVar41 = pxVar41 + -1;
                          pxVar24 = pxVar24 + -1;
                          *pxVar24 = *pxVar41;
                        } while (pxVar41 != pxVar46);
                      }
code_r0x0007b240:
                      puVar38[6] = (uint8)pxVar24;
                      puVar38[7] = (uint8)pxVar39;
                      puVar38[8] = iVar19 + uVar32 * 4;
                      if (pxVar46 != (xunknown4 *)0x0) {
                        operator_delete_plt(pxVar46,uVar42);
                      }
                      goto code_r0x0007b270;
                    }
                    if (*(int8 *)(iVar6 + 0x28) != iStack_70) goto code_r0x0007bf4c;
                    FUN_0005ec14();
                  }
                  if (*(int8 *)(iVar6 + 0x28) != iStack_70) goto code_r0x0007bf4c;
                  FUN_0007c3e0(puVar38 + 6);
                  goto code_r0x0007be9c;
                }
                pxVar39 = pxVar2 + 1;
                *pxVar2 = *(xunknown4 *)((int8)puVar38 + 0x14);
code_r0x0007b270:
                puVar38[7] = (uint8)pxVar39;
                iVar19 = iRam000000000011c878;
                iVar18 = iRam000000000011c5b0;
                if (uVar37 == 2) {
                  iRam000000000011c2f0 = iRam000000000011c2f0 + 1;
                  iVar19 = strlen(puVar47);
                  if (0xfffffffffffffd43 < (iVar18 + iVar19) - 0x2b9U) {
                    xVar17 = 0x29893;
                    if (iRam000000000011c5b0 != 0) {
                      xVar17 = 0x28ecf;
                    }
                    iVar11 = FUN_0007c1bc(iRam000000000011c5b0 + 0x11c2f4,0xffffffffffffffff,
                                          700 - iRam000000000011c5b0,0x30b08 /* "%s%.31s" */,xVar17,puVar47);
                    iRam000000000011c5b0 = iRam000000000011c5b0 + iVar11;
                  }
                }
                else {
                  iRam000000000011c5b8 = iRam000000000011c5b8 + 1;
                  iVar18 = strlen(puVar47);
                  if (0xfffffffffffffd43 < (iVar19 + iVar18) - 0x2b9U) {
                    xVar17 = 0x29893;
                    if (iRam000000000011c878 != 0) {
                      xVar17 = 0x28ecf;
                    }
                    iVar11 = FUN_0007c1bc(iRam000000000011c878 + 0x11c5bc,0xffffffffffffffff,
                                          700 - iRam000000000011c878,0x30b08 /* "%s%.31s" */,xVar17,puVar47);
                    iRam000000000011c878 = iRam000000000011c878 + iVar11;
                  }
                }
              }
            }
            iVar12 = iVar12 + -1;
            uVar29 = *(int4 *)((int8)puVar38 + 0x14) + 1;
            *(uint4 *)((int8)puVar38 + 0x14) = uVar29;
          } while (uVar29 < (uint4)puVar38[2]);
        }
        puVar38 = puVar38 + 9;
      } while (puVar38 != puVar45);
    }
    iVar25 = 1 - (int8)iRam000000000013c8ac;
    iVar18 = 0;
    iVar19 = iVar25 * 0x10000 + 0x11c8a8;
    uVar16 = iVar25 * 0x10000 + 0x13c8b0;
    do {
      iVar12 = FUN_000c52e0(0,iVar25 * 0x8000 + 0x10c2b4 + iVar18 * 4);
      uVar32 = uRam000000000010c290;
      if (((iVar12 != 0) && (iVar26 = *(int8 *)(iVar19 + iVar18 * 8), iVar26 != 0)) &&
         (uVar42 = *(uint8 *)(uVar16 + iVar18 * 8), uVar42 != 0)) {
        uVar27 = ((uint8)(uint4)((int4)uVar42 << 3) + 8 ^ uVar42 >> 0x20) * -0x622015f714c7d297;
        uVar27 = (uVar42 >> 0x20 ^ uVar27 >> 0x2f ^ uVar27) * -0x622015f714c7d297;
        uVar44 = (uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297;
        uVar27 = uVar16;
        if (uRam000000000010c290 != 0) {
          uVar28 = uRam000000000010c290 - 1;
          if ((uRam000000000010c290 & uVar28) == 0) {
            uVar27 = uVar28 & uVar44;
          }
          else {
            uVar27 = uVar44;
            if (uRam000000000010c290 <= uVar44) {
              uVar27 = 0;
              if (uRam000000000010c290 != 0) {
                uVar27 = uVar44 / uRam000000000010c290;
              }
              uVar27 = uVar44 - uVar27 * uRam000000000010c290;
            }
          }
          pxVar30 = *(xunknown8 **)(iRam000000000010c288 + uVar27 * 8);
          if (pxVar30 != (xunknown8 *)0x0) {
            for (piVar40 = (int8 *)*pxVar30; piVar40 != (int8 *)0x0; piVar40 = (int8 *)*piVar40) {
              uVar34 = piVar40[1];
              if (uVar34 == uVar44) {
                if (piVar40[2] == uVar42) goto code_r0x0007b518;
              }
              else {
                if ((uRam000000000010c290 & uVar28) == 0) {
                  uVar34 = uVar34 & uVar28;
                }
                else if (uRam000000000010c290 <= uVar34) {
                  uVar5 = 0;
                  if (uRam000000000010c290 != 0) {
                    uVar5 = uVar34 / uRam000000000010c290;
                  }
                  uVar34 = uVar34 - uVar5 * uRam000000000010c290;
                }
                if (uVar34 != uVar27) break;
              }
            }
          }
        }
        piVar40 = (int8 *)operator_new_plt(0x20);
        fVar8 = fRam000000000010c2a8;
        uVar28 = uRam000000000010c2a0;
        *piVar40 = 0;
        piVar40[1] = uVar44;
        piVar40[2] = uVar42;
        piVar40[3] = 0;
        if ((uVar32 == 0) || (fVar8 * (float4)uVar32 < (float4)(uVar28 + 1))) {
          if (uVar32 < 3) {
            uVar42 = 1;
          }
          else {
            uVar42 = (uint8)((uVar32 & uVar32 - 1) != 0);
          }
          uVar42 = uVar42 | uVar32 << 1;
          uVar27 = (uint8)((float4)(uVar28 + 1) / fVar8);
          if (uVar42 <= uVar27) {
            uVar42 = uVar27;
          }
          if (uVar42 - 1 == 0) {
            uVar42 = 2;
          }
          else if ((uVar42 & uVar42 - 1) != 0) {
            uVar42 = std____ndk1____next_prime_plt(uVar42);
            uVar32 = uRam000000000010c290;
          }
          if (uVar32 < uVar42) {
code_r0x0007b6d4:
            if (uVar42 >> 0x3d != 0) goto code_r0x0007becc;
            iVar20 = operator_new_plt(uVar42 << 3);
            iVar26 = iRam000000000010c288;
            bVar10 = iRam000000000010c288 != 0;
            iRam000000000010c288 = iVar20;
            if (bVar10) {
              operator_delete_plt(iVar26,uRam000000000010c290 << 3);
            }
            iVar26 = iRam000000000010c288;
            uRam000000000010c290 = uVar42;
            memset(iRam000000000010c288,0,uVar42 << 3);
            piVar23 = piRam000000000010c298;
            uVar32 = uVar42;
            if (piRam000000000010c298 != (int8 *)0x0) {
              uVar28 = uVar42 - 1;
              uVar27 = piRam000000000010c298[1];
              if ((uVar42 & uVar28) == 0) {
                uVar27 = uVar27 & uVar28;
              }
              else if (uVar42 <= uVar27) {
                uVar34 = 0;
                if (uVar42 != 0) {
                  uVar34 = uVar27 / uVar42;
                }
                uVar27 = uVar27 - uVar34 * uVar42;
              }
              *(xunknown8 *)(iVar26 + uVar27 * 8) = 0x10c298;
              piVar9 = (int8 *)*piVar23;
              while (piVar33 = piVar9, piVar33 != (int8 *)0x0) {
                uVar34 = piVar33[1];
                if ((uVar42 & uVar28) == 0) {
                  uVar34 = uVar34 & uVar28;
                  if (uVar34 != uVar27) goto code_r0x0007b834;
                }
                else {
                  if (uVar42 <= uVar34) {
                    uVar5 = 0;
                    if (uVar42 != 0) {
                      uVar5 = uVar34 / uVar42;
                    }
                    uVar34 = uVar34 - uVar5 * uVar42;
                  }
                  if (uVar34 != uVar27) {
code_r0x0007b834:
                    if (*(int8 *)(iVar26 + uVar34 * 8) == 0) {
                      *(int8 **)(iVar26 + uVar34 * 8) = piVar23;
                      uVar27 = uVar34;
                    }
                    else {
                      *piVar23 = *piVar33;
                      *piVar33 = **(int8 **)(iVar26 + uVar34 * 8);
                      **(xunknown8 **)(iVar26 + uVar34 * 8) = piVar33;
                      piVar33 = piVar23;
                    }
                  }
                }
                piVar23 = piVar33;
                piVar9 = (int8 *)*piVar33;
              }
            }
          }
          else if (uVar42 < uVar32) {
            uVar27 = (uint8)((float4)uRam000000000010c2a0 / fRam000000000010c2a8);
            if ((uVar32 < 3) || ((uVar32 & uVar32 - 1) != 0)) {
              uVar27 = std____ndk1____next_prime_plt();
            }
            else if (1 < uVar27) {
              uVar27 = 1L << (-LZCOUNT(uVar27 - 1) & 0x3fU);
            }
            iVar26 = iRam000000000010c288;
            if (uVar42 <= uVar27) {
              uVar42 = uVar27;
            }
            if (uVar42 < uVar32) {
              if (uVar42 != 0) goto code_r0x0007b6d4;
              iRam000000000010c288 = 0;
              if (iVar26 != 0) {
                operator_delete_plt(iVar26,uRam000000000010c290 << 3);
              }
              uRam000000000010c290 = 0;
              uVar32 = 0;
            }
            else {
              uVar32 = uRam000000000010c290;
            }
          }
          if ((uVar32 & uVar32 - 1) == 0) {
            uVar27 = uVar32 - 1 & uVar44;
          }
          else if (uVar44 < uVar32) {
            uVar27 = uVar44;
          }
          else {
            uVar42 = 0;
            if (uVar32 != 0) {
              uVar42 = uVar44 / uVar32;
            }
            uVar27 = uVar44 - uVar42 * uVar32;
          }
        }
        iVar26 = iRam000000000010c288;
        piVar23 = *(int8 **)(iRam000000000010c288 + uVar27 * 8);
        if (piVar23 == (int8 *)0x0) {
          piVar23 = piVar40;
          *piVar40 = (int8)piRam000000000010c298;
          piRam000000000010c298 = piVar23;
          *(xunknown8 *)(iVar26 + uVar27 * 8) = 0x10c298;
          if (*piVar40 != 0) {
            uVar42 = *(uint8 *)(*piVar40 + 8);
            if ((uVar32 & uVar32 - 1) == 0) {
              *(int8 **)(iVar26 + (uVar42 & uVar32 - 1) * 8) = piVar40;
            }
            else {
              if (uVar32 <= uVar42) {
                uVar27 = 0;
                if (uVar32 != 0) {
                  uVar27 = uVar42 / uVar32;
                }
                uVar42 = uVar42 - uVar27 * uVar32;
              }
              *(int8 **)(iVar26 + uVar42 * 8) = piVar40;
            }
          }
        }
        else {
          *piVar40 = *piVar23;
          *piVar23 = (int8)piVar40;
        }
        uRam000000000010c2a0 = uRam000000000010c2a0 + 1;
        iVar26 = *(int8 *)(iVar19 + iVar18 * 8);
code_r0x0007b518:
        *(uint4 *)(piVar40 + 3) = (uint4)iVar26 & 7;
        *(int4 *)((int8)piVar40 + 0x1c) = *(int4 *)((int8)piVar40 + 0x1c) + iVar12;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0x2000);
    memset(iVar19,0,0x10000);
    memset(uVar16,0,0x10000);
    puVar38 = puRam000000000010c278;
    puVar45 = puRam000000000010c270;
    if (puRam000000000010c270 == puRam000000000010c278) {
      iRam000000000011c890 = 0;
      iRam000000000011c88c = 0;
    }
    else {
      uVar29 = 0;
      iVar12 = *iRam000000000011c2c8;
      iRam000000000011c88c = 0;
      iRam000000000011c890 = 0;
      puVar31 = puRam000000000010c270;
      do {
        puVar3 = (uint4 *)puVar31[7];
        for (puVar36 = (uint4 *)puVar31[6]; puVar36 != puVar3; puVar36 = puVar36 + 1) {
          pxVar30 = (xunknown8 *)(puVar31[1] + (uint8)*puVar36 * 0x1f);
          if (((((*(uint1 *)((int8)pxVar30 + 0xe) >> 2 & 1) == 0) &&
               (puVar21 = *(uint8 **)((int8)pxVar30 + 0x17),
               puVar21 != (uint8 *)0x0 && ((uint8)puVar21 & 7) == 0)) &&
              (uVar32 = *puVar21, uVar32 != 0 && (uVar32 & 7) == 0)) &&
             (uVar32 = *(uint8 *)(uVar32 + (int8)iVar12), uVar32 != 0 && (uVar32 & 7) == 0)) {
            if (2 < uVar29 >> 0xb) break;
            cVar4 = *(char *)(puVar31[3] + (uint8)*puVar36);
            uVar42 = 1;
            if (cVar4 != '\x02') {
              uVar42 = 2;
            }
            uVar27 = (uVar32 >> 3) * -0x61c8864680b583eb >> 0x33;
            uVar44 = *(uint8 *)(iVar19 + uVar27 * 8);
            while (uVar44 != 0 && (uVar44 & 0xfffffffffffffff8) != uVar32) {
              uVar27 = (uint8)((int4)uVar27 + 1U & 0x1fff);
              uVar44 = *(uint8 *)(iVar19 + uVar27 * 8);
            }
            *(uint8 *)(iVar19 + uVar27 * 8) = uVar42 | uVar32;
            uVar29 = uVar29 + (uVar44 == 0);
            if (cVar4 == '\x02') {
              iRam000000000011c88c = iRam000000000011c88c + 1;
            }
            else {
              iRam000000000011c890 = iRam000000000011c890 + 1;
            }
            *(xunknown8 *)(uVar16 + uVar27 * 8) = *pxVar30;
          }
        }
        puVar31 = puVar31 + 9;
      } while (puVar31 != puVar38);
    }
    iRam000000000013c8ac = (int4)iVar25;
    FUN_000c53a0(1,0x13c8a8);
    iRam000000000011c880 = iRam000000000011c880 + 1;
    if (puVar45 == puVar38) {
      bVar10 = false;
    }
    else {
      uVar37 = 1;
      puVar31 = puVar45;
      do {
        puVar21 = puVar31 + 2;
        puVar36 = (uint4 *)((int8)puVar31 + 0x14);
        puVar31 = puVar31 + 9;
        uVar37 = (uint4)*puVar21 <= *puVar36 & uVar37;
      } while (puVar31 != puVar38);
      bVar10 = (bool)(uVar37 ^ 1);
    }
    if ((!bVar10) && ((uRam000000000011c884 & 1) == 0)) {
      uRam000000000011c884 = 1;
      (*pcRam000000000011c2b8)
                (0,0x29d2c /* "material: %u texture names in %zu databases - glass %u, metal %u" */,iRam000000000011c2ec,
                 ((int8)puVar38 - (int8)puVar45 >> 3) * -0x71c71c71c71c71c7,iRam000000000011c2f0,
                 iRam000000000011c5b8);
      xVar17 = 0x25c5f /* "(none)" */;
      if (iRam000000000011c5b0 != 0) {
        xVar17 = 0x11c2f4;
      }
      (*pcRam000000000011c2b8)(0,0x2b89c /* "material: glass e.g. %s" */,xVar17);
      xVar17 = 0x25c5f /* "(none)" */;
      if (iRam000000000011c878 != 0) {
        xVar17 = 0x11c5bc;
      }
      (*pcRam000000000011c2b8)(0,0x2eaa3 /* "material: metal e.g. %s" */,xVar17);
    }
    if (((iRam000000000011c880 * -0x33333333 + 0x19999998U >> 3 | iRam000000000011c880 * -0x60000000
         ) < 0x6666667) && (iRam000000000011c888 < 0x14)) {
      iRam000000000011c888 = iRam000000000011c888 + 1;
      xVar13 = FUN_000c5310(0,0x11c2d0);
      xVar14 = FUN_000c5310(0,0x11c2d8);
      xVar15 = FUN_000c5310(0,0x11c2d4);
      (*pcRam000000000011c2b8)
                (0,0x380d5 /* "material: loaded glass %u / metal %u textures; draws tagged glass %u, ..." */,iRam000000000011c88c,iRam000000000011c890,xVar14,xVar15,xVar13);
      FUN_0007c0cc(&pxStack_2e0,piRam000000000010c298,0);
      FUN_0007c198(pxStack_2e0,pxStack_2d8);
      if (pxStack_2e0 != pxStack_2d8) {
        iVar12 = 0;
        uVar16 = 0;
        pxVar30 = pxStack_2e0;
        do {
          if (((*(int4 *)(pxVar30 + 1) == 1) && (iVar12 < 10)) && (uVar16 < 0x228)) {
            xVar17 = 0x29893;
            if (iVar12 != 0) {
              xVar17 = 0x28ecf;
            }
            iVar11 = FUN_0007c1bc((int8)&xStack_2c8 + uVar16,0xffffffffffffffff,600 - uVar16,0x2954a /* "%s%.31s %u" */
                                  ,xVar17,*pxVar30,*(xunknown4 *)((int8)pxVar30 + 0xc));
            uVar16 = uVar16 + (int8)iVar11;
            iVar12 = iVar12 + 1;
          }
          pxVar30 = pxVar30 + 2;
        } while (pxVar30 != pxStack_2d8);
        if (iVar12 != 0) {
          (*pcRam000000000011c2b8)(0,0x32ae7 /* "material: most drawn %s: %s" */,0x2ab07 /* "glass" */,&xStack_2c8);
        }
        iVar12 = 0;
        uVar16 = 0;
        pxVar30 = pxStack_2e0;
        do {
          if (((*(int4 *)(pxVar30 + 1) == 2) && (iVar12 < 10)) && (uVar16 < 0x228)) {
            xVar17 = 0x29893;
            if (iVar12 != 0) {
              xVar17 = 0x28ecf;
            }
            iVar11 = FUN_0007c1bc((int8)&xStack_2c8 + uVar16,0xffffffffffffffff,600 - uVar16,0x2954a /* "%s%.31s %u" */
                                  ,xVar17,*pxVar30,*(xunknown4 *)((int8)pxVar30 + 0xc));
            uVar16 = uVar16 + (int8)iVar11;
            iVar12 = iVar12 + 1;
          }
          pxVar30 = pxVar30 + 2;
        } while (pxVar30 != pxStack_2d8);
        if (iVar12 != 0) {
          (*pcRam000000000011c2b8)(0,0x32ae7 /* "material: most drawn %s: %s" */,0x3a9a2 /* "metal" */,&xStack_2c8);
        }
      }
      FUN_0007c260();
      if (pxStack_2e0 != (xunknown8 *)0x0) {
        operator_delete_plt(pxStack_2e0,iStack_2d0 - (int8)pxStack_2e0);
      }
    }
  }
  if (*(int8 *)(iVar6 + 0x28) == iStack_70) {
    return;
  }
code_r0x0007bf4c:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
code_r0x0007be9c:
  if (*(int8 *)(iVar6 + 0x28) == iStack_70) {
    FUN_0005ec14();
code_r0x0007beb4:
    if (*(int8 *)(iVar6 + 0x28) == iStack_70) {
      FUN_0007c2d0();
code_r0x0007becc:
      if (*(int8 *)(iVar6 + 0x28) == iStack_70) {
        xVar17 = FUN_0005ec14();
        if (piVar40 != (int8 *)0x0) {
          operator_delete_plt(piVar40,iStack_2d0 - (int8)piVar40);
        }
        if (*(int8 *)(iVar6 + 0x28) == iStack_70) {
          FUN_000c5688(xVar17);
        }
      }
    }
  }
  goto code_r0x0007bf4c;
}

/* 0x7bf50  size=296 */
void FUN_0007bf50(int8 *param_1)

{
  uint8 uVar1;
  int4 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  
  uVar4 = *(uint8 *)*param_1;
  uVar1 = ((uint8 *)*param_1)[1];
  (*pcRam000000000011c2e0)();
  if ((int4)uVar1 == 0) {
    if ((uRam000000000011c898 == uVar4) && (iRam000000000013c8a8 == iRam00000000000d8c8c)) {
      xRam000000000010c2b0 = fRam000000000011c8a0;
      uRam00000000000d8c88 = xRam00000000000d8c90;
    }
    else {
      xRam000000000010c2b0 = 0.0;
      if (uVar4 != 0) {
        iVar2 = 0x2000;
        uVar1 = (uVar4 >> 3) * -0x61c8864680b583eb >> 0x33;
        do {
          uVar3 = *(uint8 *)((int8)iRam000000000013c8ac * 0x10000 + 0x11c8a8 + uVar1 * 8);
          if (uVar3 == 0) break;
          if ((uVar3 & 0xfffffffffffffff8) == uVar4) {
            xRam000000000010c2b0 = (float4)(uVar3 & 7);
            goto code_r0x0007c03c;
          }
          iVar2 = iVar2 + -1;
          uVar1 = (uint8)((int4)uVar1 + 1) & 0x1fff;
        } while (iVar2 != 0);
      }
      uVar1 = 0xffffffff;
code_r0x0007c03c:
      iRam00000000000d8c8c = iRam000000000013c8a8;
      uRam00000000000d8c88 = (xunknown4)uVar1;
      iRam000000000011c2b4 = iRam000000000013c8ac;
      xRam00000000000d8c90 = uRam00000000000d8c88;
      uRam000000000011c898 = uVar4;
      fRam000000000011c8a0 = xRam000000000010c2b0;
    }
  }
  return;
}

/* 0x7c078  size=84 */
void FUN_0007c078(int8 param_1)

{
  int8 iVar1;
  
  iVar1 = *(int8 *)(param_1 + 0x30);
  if (iVar1 != 0) {
    *(int8 *)(param_1 + 0x38) = iVar1;
    operator_delete_plt(iVar1,*(int8 *)(param_1 + 0x40) - iVar1);
  }
  iVar1 = *(int8 *)(param_1 + 0x18);
  if (iVar1 == 0) {
    return;
  }
  *(int8 *)(param_1 + 0x20) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000c994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3c08)(iVar1,*(int8 *)(param_1 + 0x28) - iVar1);
  return;
}

