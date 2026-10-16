/* module: ModInfo  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x57b30  size=620  ModInfo::ModInfo(char const*, char const*, char const*, char const*)  [_ZN7ModInfoC2EPKcS1_S1_S1_] */
void ModInfo__ModInfo(uint1 *param_1,int8 param_2,int8 param_3,uint1 *param_4,int8 param_5)

{
  uint1 uVar1;
  uint1 uVar2;
  uint1 *puVar3;
  xunknown2 xVar4;
  int4 iVar5;
  int8 iVar6;
  uint1 *puVar7;
  
  iVar6 = 0;
  do {
    if ((int4)iVar6 == 0x2f) {
      param_1[iVar6] = 0;
      break;
    }
    uVar2 = *(uint1 *)(param_2 + iVar6);
    param_1[iVar6] = uVar2;
    iVar6 = iVar6 + 1;
  } while (uVar2 != 0);
  param_1[0x2f] = 0;
  iVar6 = 0;
  do {
    if ((int4)iVar6 == 0x2f) {
      param_1[iVar6 + 0x30] = 0;
      break;
    }
    uVar2 = *(uint1 *)(param_3 + iVar6);
    param_1[iVar6 + 0x30] = uVar2;
    iVar6 = iVar6 + 1;
  } while (uVar2 != 0);
  param_1[0x5f] = 0;
  uVar2 = *param_4;
  puVar7 = param_1 + 0x60;
  *puVar7 = uVar2;
  if ((((((uVar2 != 0) && (uVar2 = param_4[1], param_1[0x61] = uVar2, uVar2 != 0)) &&
        (uVar2 = param_4[2], param_1[0x62] = uVar2, uVar2 != 0)) &&
       (((uVar2 = param_4[3], param_1[99] = uVar2, uVar2 != 0 &&
         (uVar2 = param_4[4], param_1[100] = uVar2, uVar2 != 0)) &&
        ((uVar2 = param_4[5], param_1[0x65] = uVar2, uVar2 != 0 &&
         ((uVar2 = param_4[6], param_1[0x66] = uVar2, uVar2 != 0 &&
          (uVar2 = param_4[7], param_1[0x67] = uVar2, uVar2 != 0)))))))) &&
      ((uVar2 = param_4[8], param_1[0x68] = uVar2, uVar2 != 0 &&
       ((((((uVar2 = param_4[9], param_1[0x69] = uVar2, uVar2 != 0 &&
            (uVar2 = param_4[10], param_1[0x6a] = uVar2, uVar2 != 0)) &&
           (uVar2 = param_4[0xb], param_1[0x6b] = uVar2, uVar2 != 0)) &&
          ((uVar2 = param_4[0xc], param_1[0x6c] = uVar2, uVar2 != 0 &&
           (uVar2 = param_4[0xd], param_1[0x6d] = uVar2, uVar2 != 0)))) &&
         ((uVar2 = param_4[0xe], param_1[0x6e] = uVar2, uVar2 != 0 &&
          ((uVar2 = param_4[0xf], param_1[0x6f] = uVar2, uVar2 != 0 &&
           (uVar2 = param_4[0x10], param_1[0x70] = uVar2, uVar2 != 0)))))) &&
        (uVar2 = param_4[0x11], param_1[0x71] = uVar2, uVar2 != 0)))))) &&
     ((((uVar2 = param_4[0x12], param_1[0x72] = uVar2, uVar2 != 0 &&
        (uVar2 = param_4[0x13], param_1[0x73] = uVar2, uVar2 != 0)) &&
       (uVar2 = param_4[0x14], param_1[0x74] = uVar2, uVar2 != 0)) &&
      ((uVar2 = param_4[0x15], param_1[0x75] = uVar2, uVar2 != 0 &&
       (uVar2 = param_4[0x16], param_1[0x76] = uVar2, uVar2 != 0)))))) {
    param_1[0x77] = 0;
  }
  param_1[0x77] = 0;
  iVar6 = 0;
  do {
    if ((int4)iVar6 == 0x2f) {
      param_1[iVar6 + 0x78] = 0;
      break;
    }
    uVar2 = *(uint1 *)(param_5 + iVar6);
    param_1[iVar6 + 0x78] = uVar2;
    iVar6 = iVar6 + 1;
  } while (uVar2 != 0);
  uVar2 = *param_1;
  param_1[0xaf] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  puVar3 = param_1;
  while (uVar2 != 0) {
    uVar1 = uVar2 | 0x20;
    if (0x19 < uVar2 - 0x41) {
      uVar1 = uVar2;
    }
    uVar2 = puVar3[1];
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  iVar5 = sscanf(puVar7,0x383b9 /* "%hu.%hu.%hu.%hu" */,param_1 + 0xa8,param_1 + 0xaa,param_1 + 0xac,param_1 + 0xae);
  if (iVar5 < 4) {
    iVar5 = sscanf(puVar7,0x3a260 /* "%hu.%hu.%hu" */,param_1 + 0xa8,param_1 + 0xaa,param_1 + 0xac);
    if (iVar5 < 3) {
      iVar5 = sscanf(puVar7,0x2d4b0 /* "%hu.%hu" */,param_1 + 0xa8,param_1 + 0xaa);
      if (iVar5 < 2) {
        xVar4 = atoi(puVar7);
        *(xunknown2 *)(param_1 + 0xa8) = xVar4;
      }
      param_1[0xac] = 0;
      param_1[0xad] = 0;
    }
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
  }
  return;
}

