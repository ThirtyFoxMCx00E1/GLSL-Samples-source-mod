/* module: ConfigEntry  (7 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x9a440  size=220  ConfigEntry::SetString(char const*)  [_ZN11ConfigEntry9SetStringEPKc] */
void ConfigEntry__SetString(int8 *param_1,char *param_2)

{
  xunknown8 xVar1;
  int8 *piVar2;
  xunknown4 xVar3;
  char cVar4;
  int8 iVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  float8 fVar9;
  
  if ((char)param_1[1] == '\x01') {
    cVar4 = *param_2;
    cVar6 = *(char *)((int8)param_1 + 0x94);
    if ((cVar4 != '\0') && (cVar4 == cVar6)) {
      pcVar7 = (char *)((int8)param_1 + 0x95);
      pcVar8 = param_2;
      do {
        pcVar8 = pcVar8 + 1;
        cVar4 = *pcVar8;
        cVar6 = *pcVar7;
        if (cVar4 == '\0') break;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 == cVar6);
    }
    if (cVar6 == cVar4) {
      return;
    }
  }
  iVar5 = 0;
  do {
    if ((int4)iVar5 == 0x17e) {
      *(xunknown1 *)((int8)param_1 + iVar5 + 0x94) = 0;
      break;
    }
    cVar4 = param_2[iVar5];
    *(char *)((int8)param_1 + iVar5 + 0x94) = cVar4;
    iVar5 = iVar5 + 1;
  } while (cVar4 != '\0');
  *(xunknown1 *)((int8)param_1 + 0x213) = 0;
  xVar3 = atoi((int8)param_1 + 0x94);
  *(xunknown4 *)(param_1 + 0x12) = xVar3;
  fVar9 = (float8)atof((int8)param_1 + 0x94);
  iVar5 = *param_1;
  *(xunknown1 *)(param_1 + 1) = 1;
  xVar1 = *(xunknown8 *)(iVar5 + 0x10);
  piVar2 = *(int8 **)(iVar5 + 0x18);
  *(xunknown1 *)(iVar5 + 1) = 1;
  *(float4 *)((int8)param_1 + 0x8c) = (float4)fVar9;
                    /* WARNING: Could not recover jumptable at 0x0009a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x20))
            (piVar2,xVar1,(int8)param_1 + 10,(int8)param_1 + 0x4a,(int8)param_1 + 0x94);
  return;
}

/* 0x9a7a0  size=136  ConfigEntry::SetInt(int)  [_ZN11ConfigEntry6SetIntEi] */
void ConfigEntry__SetInt(int8 *param_1,int4 param_2)

{
  int8 iVar1;
  
  if (((char)param_1[1] == '\x01') && ((int4)param_1[0x12] == param_2)) {
    return;
  }
  *(int4 *)(param_1 + 0x12) = param_2;
  *(float4 *)((int8)param_1 + 0x8c) = (float4)param_2;
  FUN_0009a6fc((int8)param_1 + 0x94,0x180,0x180,0x35609);
  iVar1 = *param_1;
  *(xunknown1 *)(param_1 + 1) = 1;
  *(xunknown1 *)(iVar1 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x0009a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(iVar1 + 0x18) + 0x20))
            (*(int8 **)(iVar1 + 0x18),*(xunknown8 *)(iVar1 + 0x10),(int8)param_1 + 10,
             (int8)param_1 + 0x4a,(int8)param_1 + 0x94);
  return;
}

/* 0x9aa0c  size=140  ConfigEntry::SetFloat(float)  [_ZN11ConfigEntry8SetFloatEf] */
void ConfigEntry__SetFloat(float4 param_1,int8 *param_2)

{
  int8 iVar1;
  
  if (((char)param_2[1] == '\x01') && (*(float4 *)((int8)param_2 + 0x8c) == param_1)) {
    return;
  }
  *(float4 *)((int8)param_2 + 0x8c) = param_1;
  *(int4 *)(param_2 + 0x12) = (int4)param_1;
  FUN_0009a6fc((float8)param_1,(int8)param_2 + 0x94,0x180,0x180,0x23e38);
  iVar1 = *param_2;
  *(xunknown1 *)(param_2 + 1) = 1;
  *(xunknown1 *)(iVar1 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x0009aa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(iVar1 + 0x18) + 0x20))
            (*(int8 **)(iVar1 + 0x18),*(xunknown8 *)(iVar1 + 0x10),(int8)param_2 + 10,
             (int8)param_2 + 0x4a,(int8)param_2 + 0x94);
  return;
}

/* 0x9ac7c  size=120  ConfigEntry::SetBool(bool)  [_ZN11ConfigEntry7SetBoolEb] */
void ConfigEntry__SetBool(int8 *param_1,uint4 param_2)

{
  xunknown8 xVar1;
  int8 *piVar2;
  bool bVar3;
  xunknown1 xVar4;
  int8 iVar5;
  xunknown4 xVar6;
  
  if (((*(uint1 *)(param_1 + 1) & 1) != 0) && (*(uint4 *)(param_1 + 0x12) == (param_2 & 1))) {
    return;
  }
  bVar3 = (param_2 & 1) != 0;
  *(uint4 *)(param_1 + 0x12) = param_2 & 1;
  iVar5 = *param_1;
  xVar4 = 0x30;
  if (bVar3) {
    xVar4 = 0x31;
  }
  *(xunknown1 *)((int8)param_1 + 0x95) = 0;
  *(xunknown1 *)((int8)param_1 + 0x94) = xVar4;
  xVar1 = *(xunknown8 *)(iVar5 + 0x10);
  piVar2 = *(int8 **)(iVar5 + 0x18);
  xVar6 = 0x3f800000;
  if (!bVar3) {
    xVar6 = 0;
  }
  *(xunknown1 *)(iVar5 + 1) = 1;
  *(xunknown1 *)(param_1 + 1) = 1;
  iVar5 = *piVar2;
  *(xunknown4 *)((int8)param_1 + 0x8c) = xVar6;
                    /* WARNING: Could not recover jumptable at 0x0009acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar5 + 0x20))(piVar2,xVar1,(int8)param_1 + 10,(int8)param_1 + 0x4a);
  return;
}

/* 0x9b604  size=580  ConfigEntry::ParseColor()  [_ZN11ConfigEntry10ParseColorEv] */
void ConfigEntry__ParseColor(int8 param_1)

{
  int8 iVar1;
  int4 iVar2;
  uint4 uVar3;
  float4 fStack_48;
  float4 fStack_44;
  float4 fStack_40;
  float4 fStack_3c;
  uint4 uStack_38;
  uint4 uStack_34;
  uint4 uStack_30;
  uint4 uStack_2c;
  int8 iStack_28;
  
  iVar1 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar1 + 0x28);
  iVar2 = sscanf(param_1 + 0x94,0x32113 /* "%d %d %d %d" */,&uStack_2c,&uStack_30,&uStack_34,&uStack_38);
  if (iVar2 == 3) {
    if (((uStack_2c < 0x100) && (uStack_30 < 0x100)) && (uStack_34 < 0x100)) {
      uStack_2c = uStack_30 << 8 | uStack_34 << 0x10 | uStack_2c | 0xff000000;
      *(uint4 *)(param_1 + 0x90) = uStack_2c;
      goto code_r0x0009b824;
    }
  }
  else if (((iVar2 == 4) && (uStack_2c < 0x100)) &&
          ((uStack_30 < 0x100 && ((uStack_34 < 0x100 && (uStack_38 < 0x100)))))) {
    uStack_2c = uStack_30 << 8 | uStack_34 << 0x10 | uStack_38 << 0x18 | uStack_2c;
    *(uint4 *)(param_1 + 0x90) = uStack_2c;
    goto code_r0x0009b824;
  }
  iVar2 = sscanf(param_1 + 0x94,0x2d9f9 /* "%f %f %f %f" */,&fStack_3c,&fStack_40,&fStack_44,&fStack_48);
  if (iVar2 == 3) {
    if (((((0.0 <= fStack_3c) && (fStack_3c <= 1.0)) && (0.0 <= fStack_40)) &&
        ((fStack_40 <= 1.0 && (0.0 <= fStack_44)))) && (fStack_44 <= 1.0)) {
      uVar3 = (int4)(fStack_40 * 255.0) << 8 | (int4)(fStack_44 * 255.0) << 0x10 |
              (int4)(fStack_3c * 255.0) | 0xff000000;
      goto code_r0x0009b81c;
    }
  }
  else if (((iVar2 == 4) && (0.0 <= fStack_3c)) &&
          (((fStack_3c <= 1.0 && (((0.0 <= fStack_40 && (fStack_40 <= 1.0)) && (0.0 <= fStack_44))))
           && (((fStack_44 <= 1.0 && (0.0 <= fStack_48)) && (fStack_48 <= 1.0)))))) {
    uVar3 = (int4)(fStack_44 * 255.0) << 0x10 | (int4)(fStack_48 * 255.0) << 0x18 |
            (int4)(fStack_40 * 255.0) << 8 | (int4)(fStack_3c * 255.0);
code_r0x0009b81c:
    *(uint4 *)(param_1 + 0x90) = uVar3;
  }
  uStack_2c = *(uint4 *)(param_1 + 0x90);
code_r0x0009b824:
  if (*(int8 *)(iVar1 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(uStack_2c);
  return;
}

/* 0x9b99c  size=44  ConfigEntry::GetString(char*, unsigned long)  [_ZN11ConfigEntry9GetStringEPcm] */
void ConfigEntry__GetString(int8 param_1,char *param_2,int4 param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_3 != 0) {
    pcVar2 = (char *)(param_1 + 0x94);
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        *param_2 = '\0';
        return;
      }
      cVar1 = *pcVar2;
      *param_2 = cVar1;
      param_2 = param_2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}

/* 0x9b9c8  size=216  ConfigEntry::SetColor(rgba_t, bool)  [_ZN11ConfigEntry8SetColorE6rgba_tb] */
void ConfigEntry__SetColor(int8 *param_1,uint4 param_2,uint8 param_3)

{
  uint4 uVar1;
  int8 iVar2;
  
  uVar1 = param_2 & 0xff;
  *(uint4 *)(param_1 + 0x12) = uVar1;
  *(float4 *)((int8)param_1 + 0x8c) = (float4)uVar1;
  if ((param_3 & 1) == 0) {
    FUN_0009a6fc((int8)param_1 + 0x94,0x180,0x180,0x32113 /* "%d %d %d %d" */,uVar1,param_2 >> 8 & 0xff,
                 param_2 >> 0x10 & 0xff,param_2 >> 0x18);
  }
  else {
    FUN_0009a6fc((float8)((float4)uVar1 / 255.0),(float8)((float4)(param_2 >> 8 & 0xff) / 255.0),
                 (float8)((float4)(param_2 >> 0x10 & 0xff) / 255.0),
                 (float8)((float4)(param_2 >> 0x18) / 255.0),(int8)param_1 + 0x94,0x180,0x180,
                 0x29f58 /* "%.3f %.3f %.3f %.3f" */);
  }
  iVar2 = *param_1;
  *(xunknown1 *)(param_1 + 1) = 1;
  *(xunknown1 *)(iVar2 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x0009ba9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(iVar2 + 0x18) + 0x20))
            (*(int8 **)(iVar2 + 0x18),*(xunknown8 *)(iVar2 + 0x10),(int8)param_1 + 10,
             (int8)param_1 + 0x4a,(int8)param_1 + 0x94);
  return;
}

