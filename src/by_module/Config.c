/* module: Config  (18 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x9a1c0  size=132  Config::Config(char const*)  [_ZN6ConfigC2EPKc] */
void Config__Config(xunknown2 *param_1,xunknown8 param_2)

{
  int8 iVar1;
  code *pcVar2;
  xunknown8 *pxVar3;
  xunknown8 xVar4;
  xunknown8 *pxVar5;
  
  iVar1 = dlopen(0x2782f /* "libAML.so" */,2);
  pxVar3 = (xunknown8 *)0x0;
  if ((iVar1 != 0) &&
     (pcVar2 = (code *)dlsym(iVar1,0x23f07 /* "GetInterface" */), pxVar3 = (xunknown8 *)0x0, pcVar2 != (code *)0x0)) {
    pxVar3 = (xunknown8 *)(*pcVar2)(0x36f92 /* "AMLConfig" */);
  }
  pxVar5 = (xunknown8 *)*pxVar3;
  *(xunknown8 **)(param_1 + 0xc) = pxVar3;
  xVar4 = (*(code *)*pxVar5)();
  *param_1 = 1;
  iVar1 = **(int8 **)(param_1 + 0xc);
  *(xunknown8 *)(param_1 + 4) = param_2;
  *(xunknown8 *)(param_1 + 8) = xVar4;
                    /* WARNING: Could not recover jumptable at 0x0009a240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(*(int8 **)(param_1 + 0xc),xVar4,param_2);
  return;
}

/* 0x9a244  size=44  Config::Init()  [_ZN6Config4InitEv] */
void Config__Init(uint1 *param_1)

{
  if ((*param_1 & 1) == 0) {
    *param_1 = 1;
                    /* WARNING: Could not recover jumptable at 0x0009a26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int8 **)(param_1 + 0x18) + 8))
              (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),*(xunknown8 *)(param_1 + 8)
              );
    return;
  }
  return;
}

/* 0x9a270  size=56  Config::Save()  [_ZN6Config4SaveEv] */
void Config__Save(char *param_1)

{
  if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
    param_1[1] = '\0';
                    /* WARNING: Could not recover jumptable at 0x0009a2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
              (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),*(xunknown8 *)(param_1 + 8)
              );
    return;
  }
  return;
}

/* 0x9a2a8  size=408  Config::Bind(char const*, char const*, char const*)  [_ZN6Config4BindEPKcS1_S1_] */
int8 * Config__Bind(char *param_1,int8 param_2,int8 param_3,int8 param_4)

{
  uint1 uVar1;
  char cVar2;
  int4 iVar3;
  int8 *piVar4;
  char *pcVar5;
  int8 iVar6;
  
  if (*param_1 == '\x01') {
    piVar4 = (int8 *)operator_new_plt(0x398);
    *(xunknown1 *)(piVar4 + 1) = 0;
    memset((int8)piVar4 + 0x94,0,0x300);
    *piVar4 = (int8)param_1;
    iVar6 = 0;
    do {
      if ((int4)iVar6 == 0x3f) {
        *(xunknown1 *)((int8)piVar4 + iVar6 + 10) = 0;
        break;
      }
      cVar2 = *(char *)(param_4 + iVar6);
      *(char *)((int8)piVar4 + iVar6 + 10) = cVar2;
      iVar6 = iVar6 + 1;
    } while (cVar2 != '\0');
    iVar6 = 0;
    do {
      if ((int4)iVar6 == 0x3f) {
        *(xunknown1 *)((int8)piVar4 + iVar6 + 0x4a) = 0;
        break;
      }
      cVar2 = *(char *)(param_2 + iVar6);
      *(char *)((int8)piVar4 + iVar6 + 0x4a) = cVar2;
      iVar6 = iVar6 + 1;
    } while (cVar2 != '\0');
    iVar6 = 0;
    do {
      if ((int4)iVar6 == 0x17f) {
        *(xunknown1 *)((int8)piVar4 + iVar6 + 0x214) = 0;
        break;
      }
      cVar2 = *(char *)(param_3 + iVar6);
      *(char *)((int8)piVar4 + iVar6 + 0x214) = cVar2;
      iVar6 = iVar6 + 1;
    } while (cVar2 != '\0');
    pcVar5 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                               (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,
                                param_2);
    if (*pcVar5 == '\0') {
      *(xunknown1 *)((int8)piVar4 + 9) = 0;
      ConfigEntry__SetString_plt(piVar4,param_3);
    }
    else {
      uVar1 = *(uint1 *)(*piVar4 + 1);
      ConfigEntry__SetString_plt(piVar4,pcVar5);
      iVar3 = strcmp(pcVar5,param_3);
      *(bool *)((int8)piVar4 + 9) = iVar3 != 0;
      if ((uVar1 & 1) == 0) {
        *(xunknown1 *)(*piVar4 + 1) = 0;
      }
    }
    if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
      param_1[1] = '\0';
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                 *(xunknown8 *)(param_1 + 8));
    }
    *pxRam00000000000d3880 = piVar4;
  }
  else {
    piVar4 = (int8 *)0x0;
  }
  return piVar4;
}

/* 0x9a51c  size=480  Config::Bind(char const*, int, char const*)  [_ZN6Config4BindEPKciS1_] */
int8 * Config__Bind_1(char *param_1,int8 param_2,int4 param_3,int8 param_4)

{
  uint1 uVar1;
  char cVar2;
  int8 *piVar3;
  char *pcVar4;
  int8 iVar5;
  
  if (*param_1 == '\x01') {
    piVar3 = (int8 *)operator_new_plt(0x398);
    *(xunknown1 *)(piVar3 + 1) = 0;
    memset((int8)piVar3 + 0x94,0,0x300);
    *piVar3 = (int8)param_1;
    iVar5 = 0;
    do {
      if ((int4)iVar5 == 0x3f) {
        *(xunknown1 *)((int8)piVar3 + iVar5 + 10) = 0;
        break;
      }
      cVar2 = *(char *)(param_4 + iVar5);
      *(char *)((int8)piVar3 + iVar5 + 10) = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    iVar5 = 0;
    do {
      if ((int4)iVar5 == 0x3f) {
        *(xunknown1 *)((int8)piVar3 + iVar5 + 0x4a) = 0;
        break;
      }
      cVar2 = *(char *)(param_2 + iVar5);
      *(char *)((int8)piVar3 + iVar5 + 0x4a) = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    FUN_0009a6fc((int8)piVar3 + 0x214,0x184,0x180,0x35609,param_3);
    pcVar4 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                               (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,
                                param_2);
    if (*pcVar4 == '\0') {
      *(xunknown1 *)((int8)piVar3 + 9) = 0;
      if (((char)piVar3[1] != '\x01') || ((int4)piVar3[0x12] != param_3)) {
        *(int4 *)(piVar3 + 0x12) = param_3;
        *(float4 *)((int8)piVar3 + 0x8c) = (float4)param_3;
        FUN_0009a6fc((int8)piVar3 + 0x94,0x180,0x180,0x35609,param_3);
        iVar5 = *piVar3;
        *(xunknown1 *)(piVar3 + 1) = 1;
        *(xunknown1 *)(iVar5 + 1) = 1;
        (**(code **)(**(int8 **)(iVar5 + 0x18) + 0x20))
                  (*(int8 **)(iVar5 + 0x18),*(xunknown8 *)(iVar5 + 0x10),(int8)piVar3 + 10,
                   (int8)piVar3 + 0x4a,(int8)piVar3 + 0x94);
      }
    }
    else {
      uVar1 = *(uint1 *)(*piVar3 + 1);
      ConfigEntry__SetString_plt(piVar3,pcVar4);
      *(bool *)((int8)piVar3 + 9) = param_3 != (int4)piVar3[0x12];
      if ((uVar1 & 1) == 0) {
        *(xunknown1 *)(*piVar3 + 1) = 0;
      }
    }
    if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
      param_1[1] = '\0';
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                 *(xunknown8 *)(param_1 + 8));
    }
    *pxRam00000000000d3880 = piVar3;
  }
  else {
    piVar3 = (int8 *)0x0;
  }
  return piVar3;
}

/* 0x9a828  size=484  Config::Bind(char const*, float, char const*)  [_ZN6Config4BindEPKcfS1_] */
int8 * Config__Bind_2(float4 param_1,char *param_2,int8 param_3,int8 param_4)

{
  uint1 uVar1;
  char cVar2;
  int8 *piVar3;
  char *pcVar4;
  int8 iVar5;
  
  if (*param_2 == '\x01') {
    piVar3 = (int8 *)operator_new_plt(0x398);
    *(xunknown1 *)(piVar3 + 1) = 0;
    memset((int8)piVar3 + 0x94,0,0x300);
    *piVar3 = (int8)param_2;
    iVar5 = 0;
    do {
      if ((int4)iVar5 == 0x3f) {
        *(xunknown1 *)((int8)piVar3 + iVar5 + 10) = 0;
        break;
      }
      cVar2 = *(char *)(param_4 + iVar5);
      *(char *)((int8)piVar3 + iVar5 + 10) = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    iVar5 = 0;
    do {
      if ((int4)iVar5 == 0x3f) {
        *(xunknown1 *)((int8)piVar3 + iVar5 + 0x4a) = 0;
        break;
      }
      cVar2 = *(char *)(param_3 + iVar5);
      *(char *)((int8)piVar3 + iVar5 + 0x4a) = cVar2;
      iVar5 = iVar5 + 1;
    } while (cVar2 != '\0');
    FUN_0009a6fc((float8)param_1,(int8)piVar3 + 0x214,0x184,0x180,0x23e38);
    pcVar4 = (char *)(**(code **)(**(int8 **)(param_2 + 0x18) + 0x18))
                               (*(int8 **)(param_2 + 0x18),*(xunknown8 *)(param_2 + 0x10),param_4,
                                param_3);
    if (*pcVar4 == '\0') {
      *(xunknown1 *)((int8)piVar3 + 9) = 0;
      if (((char)piVar3[1] != '\x01') || (*(float4 *)((int8)piVar3 + 0x8c) != param_1)) {
        *(float4 *)((int8)piVar3 + 0x8c) = param_1;
        *(int4 *)(piVar3 + 0x12) = (int4)param_1;
        FUN_0009a6fc((float8)param_1,(int8)piVar3 + 0x94,0x180,0x180,0x23e38);
        iVar5 = *piVar3;
        *(xunknown1 *)(piVar3 + 1) = 1;
        *(xunknown1 *)(iVar5 + 1) = 1;
        (**(code **)(**(int8 **)(iVar5 + 0x18) + 0x20))
                  (*(int8 **)(iVar5 + 0x18),*(xunknown8 *)(iVar5 + 0x10),(int8)piVar3 + 10,
                   (int8)piVar3 + 0x4a,(int8)piVar3 + 0x94);
      }
    }
    else {
      uVar1 = *(uint1 *)(*piVar3 + 1);
      ConfigEntry__SetString_plt(piVar3,pcVar4);
      *(bool *)((int8)piVar3 + 9) = param_1 != *(float4 *)((int8)piVar3 + 0x8c);
      if ((uVar1 & 1) == 0) {
        *(xunknown1 *)(*piVar3 + 1) = 0;
      }
    }
    if ((*param_2 == '\x01') && (param_2[1] == '\x01')) {
      param_2[1] = '\0';
      (**(code **)(**(int8 **)(param_2 + 0x18) + 0x10))
                (*(int8 **)(param_2 + 0x18),*(xunknown8 *)(param_2 + 0x10),
                 *(xunknown8 *)(param_2 + 8));
    }
    *pxRam00000000000d3880 = piVar3;
  }
  else {
    piVar3 = (int8 *)0x0;
  }
  return piVar3;
}

/* 0x9aa98  size=484  Config::Bind(char const*, bool, char const*)  [_ZN6Config4BindEPKcbS1_] */
int8 * Config__Bind_3(char *param_1,int8 param_2,uint4 param_3,int8 param_4)

{
  uint1 uVar1;
  char cVar2;
  int8 *piVar3;
  char *pcVar4;
  int8 *piVar5;
  xunknown8 xVar6;
  xunknown1 xVar7;
  int8 iVar8;
  xunknown4 xVar9;
  
  if (*param_1 == '\x01') {
    piVar3 = (int8 *)operator_new_plt(0x398);
    *(xunknown1 *)(piVar3 + 1) = 0;
    memset((int8)piVar3 + 0x94,0,0x300);
    *piVar3 = (int8)param_1;
    iVar8 = 0;
    do {
      if ((int4)iVar8 == 0x3f) {
        *(xunknown1 *)((int8)piVar3 + iVar8 + 10) = 0;
        break;
      }
      cVar2 = *(char *)(param_4 + iVar8);
      *(char *)((int8)piVar3 + iVar8 + 10) = cVar2;
      iVar8 = iVar8 + 1;
    } while (cVar2 != '\0');
    iVar8 = 0;
    do {
      if ((int4)iVar8 == 0x3f) {
        *(xunknown1 *)((int8)piVar3 + iVar8 + 0x4a) = 0;
        break;
      }
      cVar2 = *(char *)(param_2 + iVar8);
      *(char *)((int8)piVar3 + iVar8 + 0x4a) = cVar2;
      iVar8 = iVar8 + 1;
    } while (cVar2 != '\0');
    xVar6 = *(xunknown8 *)(param_1 + 0x10);
    piVar5 = *(int8 **)(param_1 + 0x18);
    *(xunknown1 *)((int8)piVar3 + 0x215) = 0;
    xVar7 = 0x30;
    if ((param_3 & 1) != 0) {
      xVar7 = 0x31;
    }
    iVar8 = *piVar5;
    *(xunknown1 *)((int8)piVar3 + 0x214) = xVar7;
    pcVar4 = (char *)(**(code **)(iVar8 + 0x18))(piVar5,xVar6,param_4,param_2);
    if (*pcVar4 == '\0') {
      *(xunknown1 *)((int8)piVar3 + 9) = 0;
      if (((*(uint1 *)(piVar3 + 1) & 1) == 0) || (*(uint4 *)(piVar3 + 0x12) != (param_3 & 1))) {
        *(uint4 *)(piVar3 + 0x12) = param_3 & 1;
        iVar8 = *piVar3;
        *(xunknown1 *)((int8)piVar3 + 0x94) = xVar7;
        *(xunknown1 *)((int8)piVar3 + 0x95) = 0;
        piVar5 = *(int8 **)(iVar8 + 0x18);
        *(xunknown1 *)(iVar8 + 1) = 1;
        xVar6 = *(xunknown8 *)(iVar8 + 0x10);
        xVar9 = 0x3f800000;
        if ((param_3 & 1) == 0) {
          xVar9 = 0;
        }
        *(xunknown1 *)(piVar3 + 1) = 1;
        iVar8 = *piVar5;
        *(xunknown4 *)((int8)piVar3 + 0x8c) = xVar9;
        (**(code **)(iVar8 + 0x20))
                  (piVar5,xVar6,(int8)piVar3 + 10,(int8)piVar3 + 0x4a,(int8)piVar3 + 0x94);
      }
    }
    else {
      uVar1 = *(uint1 *)(*piVar3 + 1);
      ConfigEntry__SetString_plt(piVar3,pcVar4);
      *(uint1 *)((int8)piVar3 + 9) = ((uint1)param_3 ^ (int4)piVar3[0x12] != 0) & 1;
      if ((uVar1 & 1) == 0) {
        *(xunknown1 *)(*piVar3 + 1) = 0;
      }
    }
    if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
      param_1[1] = '\0';
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                 *(xunknown8 *)(param_1 + 8));
    }
    *pxRam00000000000d3880 = piVar3;
  }
  else {
    piVar3 = (int8 *)0x0;
  }
  return piVar3;
}

/* 0x9acf4  size=444  Config::Bind(char const*, rgba_t, char const*)  [_ZN6Config4BindEPKc6rgba_tS1_] */
int8 * Config__Bind_4(char *param_1,int8 param_2,uint8 param_3,int8 param_4)

{
  uint1 uVar1;
  char cVar2;
  uint4 uVar3;
  uint4 uVar4;
  int8 *piVar5;
  char *pcVar6;
  int8 iVar7;
  uint4 uVar8;
  
  if (*param_1 == '\x01') {
    piVar5 = (int8 *)operator_new_plt(0x398);
    *(xunknown1 *)(piVar5 + 1) = 0;
    memset((int8)piVar5 + 0x94,0,0x300);
    *piVar5 = (int8)param_1;
    iVar7 = 0;
    do {
      if ((int4)iVar7 == 0x3f) {
        *(xunknown1 *)((int8)piVar5 + iVar7 + 10) = 0;
        break;
      }
      cVar2 = *(char *)(param_4 + iVar7);
      *(char *)((int8)piVar5 + iVar7 + 10) = cVar2;
      iVar7 = iVar7 + 1;
    } while (cVar2 != '\0');
    iVar7 = 0;
    do {
      if ((int4)iVar7 == 0x3f) {
        *(xunknown1 *)((int8)piVar5 + iVar7 + 0x4a) = 0;
        break;
      }
      cVar2 = *(char *)(param_2 + iVar7);
      *(char *)((int8)piVar5 + iVar7 + 0x4a) = cVar2;
      iVar7 = iVar7 + 1;
    } while (cVar2 != '\0');
    uVar8 = (uint4)param_3;
    uVar3 = uVar8 >> 8 & 0xff;
    uVar4 = uVar8 >> 0x10 & 0xff;
    FUN_0009a6fc((int8)piVar5 + 0x214,0x184,0x180,0x32113 /* "%d %d %d %d" */,uVar8 & 0xff,uVar3,uVar4,
                 param_3 >> 0x18 & 0xff);
    pcVar6 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                               (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,
                                param_2);
    if (*pcVar6 == '\0') {
      *(xunknown1 *)((int8)piVar5 + 9) = 0;
      ConfigEntry__SetString_plt(piVar5,(int8)piVar5 + 0x214);
    }
    else {
      uVar1 = *(uint1 *)(*piVar5 + 1);
      ConfigEntry__SetString_plt(piVar5,pcVar6);
      *(bool *)((int8)piVar5 + 9) =
           (uVar8 & 0xff000000 | uVar4 << 0x10 | uVar3 << 8 | uVar8 & 0xff) !=
           *(uint4 *)(piVar5 + 0x12);
      if ((uVar1 & 1) == 0) {
        *(xunknown1 *)(*piVar5 + 1) = 0;
      }
    }
    if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
      param_1[1] = '\0';
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                 *(xunknown8 *)(param_1 + 8));
    }
    *pxRam00000000000d3880 = piVar5;
  }
  else {
    piVar5 = (int8 *)0x0;
  }
  return piVar5;
}

/* 0x9aeb0  size=188  Config::GetString(char const*, char const*, char const*)  [_ZN6Config9GetStringEPKcS1_S1_] */
char * Config__GetString(char *param_1,xunknown8 param_2,char *param_3,xunknown8 param_4)

{
  char *pcVar1;
  
  if (*param_1 != '\x01') {
    return (char *)0x0;
  }
  pcVar1 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                             (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,
                              param_2);
  if (*pcVar1 == '\0') {
    param_1[1] = '\x01';
    (**(code **)(**(int8 **)(param_1 + 0x18) + 0x20))
              (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,param_2,param_3);
    if ((*param_1 == '\x01') && ((param_1[1] & 1U) != 0)) {
      param_1[1] = '\0';
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                 *(xunknown8 *)(param_1 + 8));
    }
    pcVar1 = param_3;
  }
  return pcVar1;
}

/* 0x9af6c  size=440  Config::GetInt(char const*, int, char const*)  [_ZN6Config6GetIntEPKciS1_] */
uint8 Config__GetInt(char *param_1,int8 param_2,uint4 param_3,int8 param_4)

{
  char cVar1;
  int8 iVar2;
  char *pcVar3;
  uint8 uVar4;
  int8 iVar5;
  xunknown1 axStack_400 [16];
  char *pcStack_3f0;
  xunknown1 xStack_3e8;
  char acStack_3e6 [64];
  char acStack_3a6 [74];
  xunknown1 axStack_35c [384];
  xunknown1 axStack_1dc [388];
  int8 iStack_58;
  
  iVar2 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar2 + 0x28);
  if (*param_1 == '\x01') {
    xStack_3e8 = 0;
    memset(axStack_35c,0,0x300);
    iVar5 = 0;
    do {
      if ((int4)iVar5 == 0x3f) {
        acStack_3e6[iVar5] = '\0';
        break;
      }
      cVar1 = *(char *)(param_4 + iVar5);
      acStack_3e6[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    } while (cVar1 != '\0');
    iVar5 = 0;
    do {
      if ((int4)iVar5 == 0x3f) {
        acStack_3a6[iVar5] = '\0';
        break;
      }
      cVar1 = *(char *)(param_2 + iVar5);
      acStack_3a6[iVar5] = cVar1;
      iVar5 = iVar5 + 1;
    } while (cVar1 != '\0');
    pcStack_3f0 = param_1;
    FUN_0009a6fc(axStack_1dc,0x184,0x180,0x35609,param_3);
    pcVar3 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                               (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,
                                param_2);
    if (*pcVar3 == '\0') {
      param_1[1] = '\x01';
      FUN_0009a6fc(axStack_400,0x10,0x10,0x35609,param_3);
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x20))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,param_2,
                 axStack_400);
      if ((*param_1 == '\x01') && ((param_1[1] & 1U) != 0)) {
        param_1[1] = '\0';
        (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                  (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                   *(xunknown8 *)(param_1 + 8));
      }
    }
    else {
      param_3 = atoi();
    }
  }
  else {
    param_3 = 0;
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_58) {
    return (uint8)param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*got___stack_chk_fail)();
  return uVar4;
}

/* 0x9b124  size=440  Config::GetFloat(char const*, float, char const*)  [_ZN6Config8GetFloatEPKcfS1_] */
void Config__GetFloat(float4 param_1,char *param_2,int8 param_3,int8 param_4)

{
  char cVar1;
  int8 iVar2;
  char *pcVar3;
  int8 iVar4;
  float4 fVar5;
  float8 fVar6;
  xunknown1 axStack_408 [24];
  char *pcStack_3f0;
  xunknown1 xStack_3e8;
  char acStack_3e6 [64];
  char acStack_3a6 [74];
  xunknown1 axStack_35c [384];
  xunknown1 axStack_1dc [388];
  int8 iStack_58;
  
  iVar2 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar2 + 0x28);
  fVar5 = 0.0;
  if (*param_2 == '\x01') {
    xStack_3e8 = 0;
    memset(0,axStack_35c,0,0x300);
    iVar4 = 0;
    do {
      if ((int4)iVar4 == 0x3f) {
        acStack_3e6[iVar4] = '\0';
        break;
      }
      cVar1 = *(char *)(param_4 + iVar4);
      acStack_3e6[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    } while (cVar1 != '\0');
    iVar4 = 0;
    do {
      if ((int4)iVar4 == 0x3f) {
        acStack_3a6[iVar4] = '\0';
        break;
      }
      cVar1 = *(char *)(param_3 + iVar4);
      acStack_3a6[iVar4] = cVar1;
      iVar4 = iVar4 + 1;
    } while (cVar1 != '\0');
    pcStack_3f0 = param_2;
    FUN_0009a6fc((float8)param_1,axStack_1dc,0x184,0x180,0x23e38);
    pcVar3 = (char *)(**(code **)(**(int8 **)(param_2 + 0x18) + 0x18))
                               (*(int8 **)(param_2 + 0x18),*(xunknown8 *)(param_2 + 0x10),param_4,
                                param_3);
    if (*pcVar3 == '\0') {
      param_2[1] = '\x01';
      FUN_0009a6fc((float8)param_1,axStack_408,0x18,0x18,0x23e38);
      (**(code **)(**(int8 **)(param_2 + 0x18) + 0x20))
                (*(int8 **)(param_2 + 0x18),*(xunknown8 *)(param_2 + 0x10),param_4,param_3,
                 axStack_408);
      if ((*param_2 == '\x01') && ((param_2[1] & 1U) != 0)) {
        param_2[1] = '\0';
        (**(code **)(**(int8 **)(param_2 + 0x18) + 0x10))
                  (*(int8 **)(param_2 + 0x18),*(xunknown8 *)(param_2 + 0x10),
                   *(xunknown8 *)(param_2 + 8));
      }
    }
    else {
      fVar6 = (float8)atof();
      param_1 = (float4)fVar6;
    }
    fVar5 = param_1;
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(fVar5);
  return;
}

/* 0x9b2dc  size=372  Config::GetBool(char const*, bool, char const*)  [_ZN6Config7GetBoolEPKcbS1_] */
uint8 Config__GetBool(char *param_1,int8 param_2,uint4 param_3,int8 param_4)

{
  xunknown8 xVar1;
  char cVar2;
  int8 iVar3;
  int4 iVar4;
  char *pcVar5;
  uint8 uVar6;
  int8 iVar7;
  char acStack_3d6 [64];
  char acStack_396 [846];
  int8 iStack_48;
  
  iVar3 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar3 + 0x28);
  if (*param_1 == '\x01') {
    iVar7 = 0;
    do {
      if ((int4)iVar7 == 0x3f) {
        acStack_3d6[iVar7] = '\0';
        break;
      }
      cVar2 = *(char *)(param_4 + iVar7);
      acStack_3d6[iVar7] = cVar2;
      iVar7 = iVar7 + 1;
    } while (cVar2 != '\0');
    iVar7 = 0;
    do {
      if ((int4)iVar7 == 0x3f) {
        acStack_396[iVar7] = '\0';
        break;
      }
      cVar2 = *(char *)(param_2 + iVar7);
      acStack_396[iVar7] = cVar2;
      iVar7 = iVar7 + 1;
    } while (cVar2 != '\0');
    pcVar5 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                               (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,
                                param_2);
    if (*pcVar5 == '\0') {
      param_1[1] = '\x01';
      xVar1 = 0x3211f;
      if ((param_3 & 1) == 0) {
        xVar1 = 0x38366;
      }
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x20))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,param_2,xVar1);
      if ((*param_1 == '\x01') && ((param_1[1] & 1U) != 0)) {
        param_1[1] = '\0';
        (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                  (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                   *(xunknown8 *)(param_1 + 8));
      }
    }
    else {
      iVar4 = atoi();
      param_3 = (uint4)(iVar4 != 0);
    }
  }
  else {
    param_3 = 0;
  }
  if (*(int8 *)(iVar3 + 0x28) == iStack_48) {
    return (uint8)(param_3 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*got___stack_chk_fail)();
  return uVar6;
}

/* 0x9b450  size=436  Config::GetColor(char const*, rgba_t, char const*)  [_ZN6Config8GetColorEPKc6rgba_tS1_] */
void Config__GetColor(char *param_1,int8 param_2,uint8 param_3,int8 param_4)

{
  uint1 uVar1;
  char cVar2;
  int8 iVar3;
  char *pcVar4;
  xunknown8 xVar5;
  int8 iVar6;
  uint4 uVar7;
  char *pcStack_3f0;
  xunknown1 xStack_3e8;
  char acStack_3e6 [64];
  char acStack_3a6 [74];
  xunknown1 axStack_35c [384];
  xunknown1 axStack_1dc [388];
  int8 iStack_58;
  
  iVar3 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar3 + 0x28);
  if (*param_1 == '\x01') {
    xStack_3e8 = 0;
    memset(axStack_35c,0,0x300);
    iVar6 = 0;
    do {
      if ((int4)iVar6 == 0x3f) {
        acStack_3e6[iVar6] = '\0';
        break;
      }
      cVar2 = *(char *)(param_4 + iVar6);
      acStack_3e6[iVar6] = cVar2;
      iVar6 = iVar6 + 1;
    } while (cVar2 != '\0');
    iVar6 = 0;
    do {
      if ((int4)iVar6 == 0x3f) {
        acStack_3a6[iVar6] = '\0';
        break;
      }
      cVar2 = *(char *)(param_2 + iVar6);
      acStack_3a6[iVar6] = cVar2;
      iVar6 = iVar6 + 1;
    } while (cVar2 != '\0');
    uVar7 = (uint4)param_3;
    pcStack_3f0 = param_1;
    FUN_0009a6fc(axStack_1dc,0x184,0x180,0x32113 /* "%d %d %d %d" */,uVar7 & 0xff,uVar7 >> 8 & 0xff,uVar7 >> 0x10 & 0xff
                 ,param_3 >> 0x18 & 0xff);
    pcVar4 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                               (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_4,
                                param_2);
    if (*pcVar4 == '\0') {
      ConfigEntry__SetString_plt(&pcStack_3f0,axStack_1dc);
    }
    else {
      uVar1 = pcStack_3f0[1];
      ConfigEntry__SetString_plt(&pcStack_3f0,pcVar4);
      if ((uVar1 & 1) == 0) {
        pcStack_3f0[1] = '\0';
      }
    }
    if ((*param_1 == '\x01') && (param_1[1] == '\x01')) {
      param_1[1] = '\0';
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                 *(xunknown8 *)(param_1 + 8));
    }
    xVar5 = ConfigEntry__ParseColor_plt(&pcStack_3f0);
  }
  else {
    xVar5 = 0;
  }
  if (*(int8 *)(iVar3 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar5);
  return;
}

/* 0x9b848  size=24  Config::HasSection(char const*)  [_ZN6Config10HasSectionEPKc] */
void Config__HasSection(int8 param_1,xunknown8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0009b85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x30))
            (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_2);
  return;
}

/* 0x9b860  size=28  Config::HasKey(char const*, char const*)  [_ZN6Config6HasKeyEPKcS1_] */
void Config__HasKey(int8 param_1,xunknown8 param_2,xunknown8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0009b878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x38))
            (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_2,param_3);
  return;
}

/* 0x9b87c  size=24  Config::HasSectionComment(char const*)  [_ZN6Config17HasSectionCommentEPKc] */
void Config__HasSectionComment(int8 param_1,xunknown8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0009b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x40))
            (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_2);
  return;
}

/* 0x9b894  size=28  Config::HasKeyComment(char const*, char const*)  [_ZN6Config13HasKeyCommentEPKcS1_] */
void Config__HasKeyComment(int8 param_1,xunknown8 param_2,xunknown8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0009b8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int8 **)(param_1 + 0x18) + 0x48))
            (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_2,param_3);
  return;
}

/* 0x9b8b0  size=236  Config::GetString(char*, unsigned long, char const*, char const*, char const*)  [_ZN6Config9GetStringEPcmPKcS2_S2_] */
void Config__GetString_1(char *param_1,char *param_2,int4 param_3,xunknown8 param_4,char *param_5,
                        xunknown8 param_6)

{
  char cVar1;
  char *pcVar2;
  
  if (*param_1 == '\x01') {
    pcVar2 = (char *)(**(code **)(**(int8 **)(param_1 + 0x18) + 0x18))
                               (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_6);
    if (*pcVar2 == '\0') {
      param_1[1] = '\x01';
      (**(code **)(**(int8 **)(param_1 + 0x18) + 0x20))
                (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),param_6,param_4,param_5);
      if ((*param_1 == '\x01') && ((param_1[1] & 1U) != 0)) {
        param_1[1] = '\0';
        (**(code **)(**(int8 **)(param_1 + 0x18) + 0x10))
                  (*(int8 **)(param_1 + 0x18),*(xunknown8 *)(param_1 + 0x10),
                   *(xunknown8 *)(param_1 + 8));
      }
      pcVar2 = param_5;
    }
  }
  else {
    pcVar2 = (char *)0x0;
  }
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        *param_2 = '\0';
        return;
      }
      cVar1 = *pcVar2;
      *param_2 = cVar1;
      pcVar2 = pcVar2 + 1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}

