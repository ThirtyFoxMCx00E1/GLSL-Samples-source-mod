/* module: boot  (12 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x95cfc  size=1208  boot::Begin(void (*)(bool, char const*, ...), char const*)  [_ZN4boot5BeginEPFvbPKczES1_] */
void boot__Begin(code *param_1,xunknown8 param_2)

{
  int8 iVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  char cVar5;
  int8 iVar6;
  bool bVar7;
  int4 iVar8;
  uint8 uVar9;
  uint8 *puVar10;
  int8 iVar11;
  int8 iVar12;
  xunknown8 xVar13;
  uint8 uVar14;
  uint8 uVar15;
  int8 iStack_150;
  int8 iStack_148;
  xunknown8 xStack_140;
  xunknown8 xStack_138;
  uint8 uStack_130;
  uint8 uStack_128;
  uint8 uStack_120;
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
  int8 iStack_b0;
  xunknown8 xStack_a8;
  xunknown8 xStack_a0;
  xunknown8 xStack_98;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  int8 iStack_68;
  
  iVar6 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar6 + 0x28);
  pcRam0000000000172920 = param_1;
  uVar9 = strlen(param_2);
  if (0xffffffffffffffef < uVar9) {
    if (*(int8 *)(iVar6 + 0x28) == iStack_68) {
      xVar13 = FUN_000664d4(&uStack_130);
      std____ndk1__thread__dtor_thread_plt(&iStack_150);
      if (*(int8 *)(iVar6 + 0x28) == iStack_68) {
        FUN_000c5688(xVar13);
      }
    }
    goto code_r0x000961b0;
  }
  if (uVar9 < 0x17) {
    uVar15 = (uint8)&uStack_130 | 1;
    uStack_130 = CONCAT71(uStack_130._1_7_,(char)((int4)uVar9 << 1));
    if (uVar9 != 0) goto code_r0x00095d84;
  }
  else {
    uVar15 = operator_new_plt((uVar9 | 0xf) + 1);
    uStack_130 = (uVar9 | 0xf) + 2;
    uStack_128 = uVar9;
    uStack_120 = uVar15;
code_r0x00095d84:
    memcpy(uVar15,param_2,uVar9);
  }
  *(xunknown1 *)(uVar15 + uVar9) = 0;
  puVar10 = (uint8 *)std____ndk1__basic_string__append_plt_1(&uStack_130,0x29f45 /* "/boot.txt" */);
  uVar9 = *puVar10;
  uVar15 = puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  uVar14 = puVar10[2];
  puVar10[2] = 0;
  if ((uRam00000000001728e0 & 1) != 0) {
    operator_delete_plt(uRam00000000001728f0,uRam00000000001728e0 & 0xfffffffffffffffe);
  }
  uRam00000000001728e0 = uVar9;
  uRam00000000001728e8 = uVar15;
  uRam00000000001728f0 = uVar14;
  if ((uStack_130 & 1) == 0) {
    uVar9 = (uint8)((uint4)uVar9 & 0xff);
  }
  else {
    operator_delete_plt(uStack_120,uStack_130 & 0xfffffffffffffffe);
    uVar9 = uRam00000000001728e0 & 0xff;
  }
  uVar15 = 0x1728e1;
  if ((uVar9 & 1) != 0) {
    uVar15 = uRam00000000001728f0;
  }
  xStack_a8 = 0;
  iStack_b0 = 0;
  xStack_98 = 0;
  xStack_a0 = 0;
  xStack_88 = 0;
  xStack_90 = 0;
  xStack_78 = 0;
  xStack_80 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  xStack_118 = 0;
  uStack_120 = 0;
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
  iVar11 = fopen(uVar15,0x36ee9);
  if (iVar11 != 0) {
    iVar12 = fgets(&iStack_b0,0x40,iVar11);
    if (iVar12 != 0) {
      fgets(&uStack_130,0x80,iVar11);
    }
    fclose(iVar11);
    for (iVar11 = __strlen_chk(&iStack_b0,0x40);
        (iVar11 != 0 &&
        ((cVar5 = *(char *)((int8)&xStack_b8 + iVar11 + 7), cVar5 == '\r' || (cVar5 == '\n'))));
        iVar11 = iVar11 + -1) {
      *(xunknown1 *)((int8)&xStack_b8 + iVar11 + 7) = 0;
    }
    for (iVar11 = __strlen_chk(&uStack_130,0x80);
        (iVar11 != 0 &&
        ((cVar5 = *(char *)((int8)&xStack_138 + iVar11 + 7), cVar5 == '\r' || (cVar5 == '\n'))));
        iVar11 = iVar11 + -1) {
      *(xunknown1 *)((int8)&xStack_138 + iVar11 + 7) = 0;
    }
  }
  if (iStack_b0 == 0x676e6964616f6c) {
    xRam0000000000172928 = 1;
    puVar10 = (uint8 *)0x25c3f;
    if ((char)uStack_130 != '\0') {
      puVar10 = &uStack_130;
    }
    (*pcRam0000000000172920)(1,0x36eeb /* "boot: the LAST START NEVER REACHED THE GAME (last step: %s) - SAFE STA..." */,puVar10);
  }
  iVar11 = dlopen(0x3d204 /* "libGTASA.so" */,4);
  if (iVar11 != 0) {
    iVar12 = dlsym(iVar11,0x26d71 /* "_Z11RenderSceneb" */);
    iStack_148 = 0;
    iStack_150 = 0;
    xStack_138 = 0;
    xStack_140 = 0;
    if (((iVar12 != 0) && (iVar8 = dladdr(iVar12,&iStack_150), iVar8 != 0)) && (iStack_148 != 0)) {
      iVar12 = iVar12 - iStack_148;
      iVar1 = 0x25c3f;
      if (iStack_150 != 0) {
        iVar1 = iStack_150;
      }
      xVar13 = 0x409cc /* "2.10 arm64 - the checked build" */;
      if (iVar12 != 0x4d85fc) {
        xVar13 = 0x409eb /* "NOT the 2.10 arm64 build this mod was made for" */;
      }
      (*pcRam0000000000172920)(iVar12 != 0x4d85fc,0x320dc /* "boot: game libGTASA %s, RenderScene at +0x%zx (%s)" */,iVar1,iVar12,xVar13);
    }
    iRam0000000000172930 = dlsym(iVar11,0x2af34 /* "_Z15FindPlayerCoorsi" */);
    iRam0000000000172938 = dlsym(iVar11,0x26480 /* "AND_bufferSwaps" */);
    iRam0000000000172940 = dlsym(iVar11,0x349b9 /* "_ZN6CTimer22m_snTimeInMillisecondsE" */);
    iRam0000000000172948 = dlsym(iVar11,0x349dd /* "_ZN6CTimer11m_UserPauseE" */);
    iRam0000000000172950 = dlsym(iVar11,0x39ff1 /* "_ZN6CTimer11m_CodePauseE" */);
    xVar13 = 0x34fa4;
    if (iRam0000000000172938 != 0) {
      xVar13 = 0x2b97b;
    }
    xVar2 = 0x34fa4;
    if (iRam0000000000172940 != 0) {
      xVar2 = 0x2b97b;
    }
    xVar3 = 0x2b97b;
    if (iRam0000000000172950 == 0 || iRam0000000000172948 == 0) {
      xVar3 = 0x34fa4;
    }
    xVar4 = 0x34fa4;
    if (iRam0000000000172930 != 0) {
      xVar4 = 0x2b97b;
    }
    (*pcRam0000000000172920)(0,0x35055 /* "boot: heartbeat data - swap counter %s, game clock %s, pause flags %s,..." */,xVar13,xVar2,xVar3,xVar4);
  }
  bVar7 = (uRam00000000001728e0 & 1) != 0;
  uVar9 = uRam00000000001728e0 >> 1 & 0x7f;
  if (bVar7) {
    uVar9 = uRam00000000001728e8;
  }
  if (uVar9 != 0) {
    uVar9 = 0x1728e1;
    if (bVar7) {
      uVar9 = uRam00000000001728f0;
    }
    iVar11 = fopen(uVar9,0x3a1ef);
    if (iVar11 != 0) {
      fprintf(iVar11,0x403c7 /* "%s\n%s\n" */,0x2eb32 /* "loading" */,0x2bf1d /* "mod loaded" */);
      fclose(iVar11);
    }
  }
  FUN_0007a2b4(&iStack_150,FUN_000961b4);
  std____ndk1__thread__detach_plt(&iStack_150);
  std____ndk1__thread__dtor_thread_plt(&iStack_150);
  if (*(int8 *)(iVar6 + 0x28) == iStack_68) {
    return;
  }
code_r0x000961b0:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x966fc  size=12  boot::R(char const*)  [_ZN4boot1REPKc] */
void boot__R(xunknown8 param_1)

{
  xRam00000000000d8dc8 = param_1;
  return;
}

/* 0x96708  size=12  boot::G(char const*)  [_ZN4boot1GEPKc] */
void boot__G(xunknown8 param_1)

{
  xRam00000000000d8dd0 = param_1;
  return;
}

/* 0x96714  size=32  boot::Frame()  [_ZN4boot5FrameEv] */
void boot__Frame(void)

{
  FUN_000c53a0(1,&iRam0000000000172a78);
  return;
}

/* 0x96734  size=152  boot::GameFrame()  [_ZN4boot9GameFrameEv] */
void boot__GameFrame(xunknown1 param_1 [16],float4 param_2,float4 param_3)

{
  uint4 uVar1;
  float4 fVar2;
  
  uVar1 = FUN_000c53a0(1,&iRam0000000000172a7c);
  if ((((iRam0000000000172930 != (code *)0x0) && (uVar1 % 0x1e == 0)) &&
      (fVar2 = (float4)(*iRam0000000000172930)(0xffffffff), !NAN(fVar2))) &&
     ((!NAN(param_2) && (!NAN(param_3))))) {
    fRam0000000000172a80 = fVar2;
    fRam0000000000172a84 = param_2;
    fRam0000000000172a88 = param_3;
  }
  return;
}

/* 0x967cc  size=32  boot::Menu()  [_ZN4boot4MenuEv] */
void boot__Menu(void)

{
  FUN_000c53a0(1,&iRam0000000000172a8c);
  return;
}

/* 0x967ec  size=296  boot::RenderCheck()  [_ZN4boot11RenderCheckEv] */
void boot__RenderCheck(void)

{
  int4 iVar1;
  int4 iVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  
  iVar1 = eglGetError();
  if (iVar1 != 0x3000) {
    FUN_000c53a0(1,&iRam0000000000172a90);
    xRam00000000000d8dd8 = iVar1;
  }
  iVar3 = eglGetCurrentSurface(0x3059);
  iVar4 = FUN_000c5340(iVar3,0x172a98);
  if ((iVar4 != 0) && (iVar4 != iVar3)) {
    FUN_000c53a0(1,&xRam0000000000172aa0);
  }
  if (((code *)*pxRam00000000000d35e0 != (code *)0x0) &&
     (uRam0000000000172958 = uRam0000000000172958 + 1, (uRam0000000000172958 & 0x1f) == 0)) {
    uVar5 = (*(code *)*pxRam00000000000d35e0)();
    iVar1 = (int4)uVar5;
    if ((iVar1 != 0) && (iVar2 = FUN_000c5310(uVar5,&iRam0000000000172aa4), iVar2 == 0)) {
      if (iVar1 == 0x8253) {
        xVar6 = 0x4139e /* "GUILTY (our or the game's GPU work crashed the GPU)" */;
      }
      else if (iVar1 == 0x8254) {
        xVar6 = 0x28ffb /* "INNOCENT" */;
      }
      else {
        xVar6 = 0x38ef5 /* "UNKNOWN" */;
        if (iVar1 != 0x8255) {
          xVar6 = 0x25c3f;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00096910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000000172920)(1,0x30c6f /* "boot: GPU RESET reported by the driver (status 0x%X %s) - the GL conte..." */,uVar5 & 0xffffffff,xVar6);
      return;
    }
  }
  return;
}

/* 0x96914  size=100  boot::PostRun(int, int, int)  [_ZN4boot7PostRunEiii] */
void boot__PostRun(uint4 param_1,int4 param_2,int4 param_3)

{
  if ((param_1 < 5) &&
     (((FUN_000c53a0(1,&iRam000000000017295c + param_1), param_1 == 0 || (param_2 != 0)) &&
      (xRam0000000000172aa8 = param_2, param_3 != 0)))) {
    xRam0000000000172aac = param_3;
  }
  return;
}

/* 0x96978  size=12  boot::Safe()  [_ZN4boot4SafeEv] */
xunknown1 boot__Safe(void)

{
  return xRam0000000000172928;
}

/* 0x96984  size=340  boot::Step(char const*)  [_ZN4boot4StepEPKc] */
void boot__Step(int8 param_1)

{
  xunknown8 xVar1;
  int8 iVar2;
  uint4 uVar3;
  int4 iVar4;
  int8 iVar5;
  uint8 uVar6;
  int8 *piVar7;
  
  std____ndk1__mutex__lock_plt(0x1728f8);
  uVar3 = uRam0000000000172974;
  if ((uRam0000000000172970 & 1) != 0) goto code_r0x000969b8;
  uVar6 = (uint8)uRam0000000000172974;
  if ((int4)uRam0000000000172974 < 1) {
code_r0x00096a14:
    uRam0000000000172974 = uVar3 + 1;
    *(int8 *)((int8)(int4)uVar3 * 8 + 0x172978) = param_1;
  }
  else {
    piVar7 = (int8 *)0x172978;
    do {
      if ((*piVar7 == param_1) || (iVar4 = strcmp(*piVar7,param_1), iVar4 == 0))
      goto code_r0x000969b8;
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 != 0);
    if ((int4)uVar3 < 0x20) goto code_r0x00096a14;
  }
  (*pcRam0000000000172920)(0,0x29f4f /* "boot: %s" */,param_1);
  uVar6 = (uint8)((uint1)uRam00000000001728e0 >> 1);
  if (((uint1)uRam00000000001728e0 & 1) != 0) {
    uVar6 = uRam00000000001728e8;
  }
  if (uVar6 != 0) {
    xVar1 = 0x1728e1;
    if (((uint1)uRam00000000001728e0 & 1) != 0) {
      xVar1 = uRam00000000001728f0;
    }
    iVar5 = fopen(xVar1,0x3a1ef);
    if (iVar5 != 0) {
      iVar2 = 0x29893;
      if (param_1 != 0) {
        iVar2 = param_1;
      }
      fprintf(iVar5,0x403c7 /* "%s\n%s\n" */,0x2eb32 /* "loading" */,iVar2);
      fclose(iVar5);
    }
  }
code_r0x000969b8:
                    /* WARNING: Could not recover jumptable at 0x000c9e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3e70)(0x1728f8);
  return;
}

/* 0x96ad8  size=252  boot::Reached()  [_ZN4boot7ReachedEv] */
void boot__Reached(void)

{
  uint8 uVar1;
  xunknown8 xVar2;
  int8 iVar3;
  
  std____ndk1__mutex__lock_plt(0x1728f8);
  if ((uRam0000000000172970 & 1) == 0) {
    uRam0000000000172970 = 1;
    uVar1 = (uint8)((uint1)uRam00000000001728e0 >> 1);
    if (((uint1)uRam00000000001728e0 & 1) != 0) {
      uVar1 = uRam00000000001728e8;
    }
    if (uVar1 != 0) {
      xVar2 = 0x1728e1;
      if (((uint1)uRam00000000001728e0 & 1) != 0) {
        xVar2 = uRam00000000001728f0;
      }
      iVar3 = fopen(xVar2,0x3a1ef);
      if (iVar3 != 0) {
        fprintf(iVar3,0x403c7 /* "%s\n%s\n" */,0x39ed1,0x2abbe /* "game reached" */);
        fclose(iVar3);
      }
    }
    xVar2 = 0x40a1a /* " - it was a SAFE start: tree wind + 3D rain were off" */;
    if (xRam0000000000172928 == '\0') {
      xVar2 = 0x29893;
    }
    (*pcRam0000000000172920)(0,0x32c93 /* "boot: the game is running (start OK%s)" */,xVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000c9e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3e70)(0x1728f8);
  return;
}

/* 0x96bd4  size=536  boot::PrologueOk(void*, char const*, char const*)  [_ZN4boot10PrologueOkEPvPKcS2_] */
xunknown8 boot__PrologueOk(uint4 *param_1,xunknown8 param_2,xunknown8 param_3)

{
  xunknown8 xVar1;
  uint4 uVar2;
  int4 iVar3;
  int8 iVar4;
  
  if (param_1 == (uint4 *)0x0) {
    return 0;
  }
  iVar3 = strcmp(0x26d71 /* "_Z11RenderSceneb" */);
  if (iVar3 == 0) {
    iVar4 = 0xcf038;
  }
  else {
    iVar3 = strcmp(0x2bddc /* "_ZN12CPostEffects12MobileRenderEv" */,param_2);
    if (iVar3 == 0) {
      iVar4 = 0xcf058;
    }
    else {
      iVar3 = strcmp(0x34988 /* "_Z19DoRWStuffEndOfFrameb" */,param_2);
      if (iVar3 == 0) {
        iVar4 = 0xcf078;
      }
      else {
        iVar3 = strcmp(0x2bdbb /* "_Z25RQ_Command_rqTargetSelectRPc" */,param_2);
        if (iVar3 == 0) {
          iVar4 = 0xcf098;
        }
        else {
          iVar3 = strcmp(0x2d668 /* "_ZN8RQShader11BuildSourceEjPPKcS2_" */,param_2);
          if (iVar3 == 0) {
            iVar4 = 0xcf0b8;
          }
          else {
            iVar3 = strcmp(0x3fdd2 /* "_Z27RQ_Command_rqTextureMipModeRPc" */,param_2);
            if (iVar3 == 0) {
              iVar4 = 0xcf0d8;
            }
            else {
              iVar3 = strcmp(0x39412 /* "_Z23RQ_Command_rqTextureMipRPc" */,param_2);
              if (iVar3 == 0) {
                iVar4 = 0xcf0f8;
              }
              else {
                iVar3 = strcmp(0x2af00 /* "_ZN8CVehicle15DoVehicleLightsER7CMatrixj" */,param_2);
                if (iVar3 == 0) {
                  iVar4 = 0xcf118;
                }
                else {
                  iVar3 = strcmp(0x2ea8e /* "_ZN7CEntity6RenderEv" */,param_2);
                  if (iVar3 == 0) {
                    iVar4 = 0xcf138;
                  }
                  else {
                    iVar3 = strcmp(0x2dab9 /* "_Z24RQ_Command_rqTargetClearRPc" */,param_2);
                    if (iVar3 != 0) {
                      (*pcRam0000000000172920)(1,0x40a4f /* "boot: %s not in the checked list - %s" */,param_2,param_3);
                      return 0;
                    }
                    iVar4 = 0xcf158;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int8 *)param_1 == *(int8 *)(iVar4 + 0xc) &&
      *(int8 *)(param_1 + 2) == *(int8 *)(iVar4 + 0x14)) {
    return 1;
  }
  uVar2 = *param_1;
  xVar1 = 0x32cba /* "already hooked by another mod" */;
  if (uVar2 >> 0x18 != 0x58 && uVar2 >> 0x1a != 5) {
    xVar1 = 0x3d063 /* "a different game build" */;
  }
  (*pcRam0000000000172920)
            (1,0x2d2db /* "boot: %s starts %08X %08X %08X %08X, expected %08X %08X %08X %08X - %s..." */,param_2,uVar2,param_1[1],param_1[2],param_1[3],*(xunknown4 *)(iVar4 + 0xc),
             *(xunknown4 *)(iVar4 + 0x10),*(xunknown4 *)(iVar4 + 0x14),*(xunknown4 *)(iVar4 + 0x18),
             xVar1,param_3);
  return 0;
}

