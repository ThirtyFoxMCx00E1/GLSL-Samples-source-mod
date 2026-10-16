/* module: hooks  (37 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x57ee4  size=256  HookOf_RqTargetClear(char**)  [_Z20HookOf_RqTargetClearPPc] */
void HookOf_RqTargetClear(void)

{
  int8 iVar1;
  int8 iVar2;
  int8 iStack_48;
  int8 iStack_40;
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  (*(code *)*pxRam00000000000d31f0)();
  if ((uRam00000000000d9050 & 1) == 0) {
    iRam00000000000d9054 = iRam00000000000d9054 + 1;
    clock_gettime(1,&iStack_48);
    iVar2 = iStack_40 / 1000000 + iStack_48 * 1000;
    if (iRam00000000000d9058 == 0) {
      iRam00000000000d9058 = iVar2;
    }
    if ((299 < iRam00000000000d9054) && (0x7c < (uint8)(iVar2 - iRam00000000000d9058) >> 6)) {
      uRam00000000000d9050 = 1;
      GfxLog_plt(0,0x2d427 /* "probe: render thread, %d target clears so far" */);
      probe__Run_plt(xRam00000000000d31d8);
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6add4  size=292  HookOf_FsrBindTexture(unsigned int, unsigned int)  [_Z21HookOf_FsrBindTexturejj] */
void HookOf_FsrBindTexture(uint8 param_1,uint8 param_2)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  uint4 uStack_40;
  int4 iStack_3c;
  int8 iStack_38;
  
  pxVar2 = pxRam00000000000d3208;
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  if (((((int4)param_2 != 0) && (cRam000000000010bdd0 != '\0')) && ((int4)param_1 == 0xde1)) &&
     ((int4)param_2 == iRam000000000010bdd4)) {
    param_2 = param_2 & 0xffffffff;
    param_1 = param_1 & 0xffffffff;
    iStack_3c = 0;
    (*(code *)*pxRam00000000000d3208)(0x8ca6,&iStack_3c);
    if (iStack_3c != iRam00000000000d8b88) {
      uStack_40 = 0x84c0;
      (*(code *)*pxVar2)(0x84e0,&uStack_40);
      if (uStack_40 >> 5 == 0x426) {
        param_2 = (uint8)uRam000000000010bde0;
        uRam000000000010bdd8 = uRam000000000010bdd8 | 1 << (uint8)(uStack_40 & 0x1f);
        iRam000000000010bddc = iRam000000000010bddc + 1;
      }
    }
  }
  (*(code *)*pxRam00000000000d3628)(param_1,param_2);
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x6aef8  size=32  HookOf_FsrDrawArrays(unsigned int, int, int)  [_Z20HookOf_FsrDrawArraysjii] */
void HookOf_FsrDrawArrays(void)

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
  
  (*(code *)*pxRam00000000000d3638)();
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

/* 0x6b09c  size=32  HookOf_FsrDrawElements(unsigned int, int, unsigned int, void const*)  [_Z22HookOf_FsrDrawElementsjijPKv] */
void HookOf_FsrDrawElements(void)

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
  
  (*(code *)*pxRam00000000000d3648)();
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

/* 0x6b0bc  size=444  HookOf_FsrSetAlt(int, int)  [_Z16HookOf_FsrSetAltii] */
void HookOf_FsrSetAlt(uint8 param_1,uint8 param_2)

{
  xunknown8 xVar1;
  int8 iVar2;
  uint4 uVar3;
  uint4 uVar4;
  uint4 uVar5;
  int4 iVar6;
  uint8 uVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint8 uVar10;
  uint8 unaff_x30;
  float8 fVar11;
  
  uVar7 = param_2 & 0xffffffff;
  uVar8 = param_1 & 0xffffffff;
  uVar3 = (uint4)param_1;
  uVar5 = 0;
  iVar6 = (int4)param_2;
  uVar9 = uVar7;
  uVar10 = uVar8;
  if ((((0 < (int4)uVar3) && (0 < iVar6)) && ((uRam00000000000d8b8c & 1) != 0)) &&
     (fRam00000000000d8b90 < 0.999)) {
    if (pcRam000000000010be08 == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*pcRam000000000010be08)();
    }
    uVar5 = uVar3;
    if ((int4)uVar4 <= (int4)(uVar3 * 4) && (int4)uVar3 <= (int4)uVar4) {
      uVar5 = uVar4;
    }
    fVar11 = ((float8)fRam00000000000d8b90 * (float8)uVar5) / (float8)uVar8;
    if (fVar11 < fRam00000000000222a8) {
      uVar9 = (int8)(fVar11 * (float8)uVar7);
      uVar10 = (int8)(fVar11 * (float8)uVar8);
    }
  }
  if (((uVar3 != uRam00000000000d8ba0) || (iVar6 != iRam00000000000d8ba4)) &&
     (iRam000000000010be10 < 8)) {
    iRam000000000010be10 = iRam000000000010be10 + 1;
    iVar2 = unaff_x30 - uRam000000000010be20;
    if ((unaff_x30 < uRam000000000010be20 || iVar2 == 0) || uRam000000000010be20 == 0) {
      iVar2 = 0;
    }
    xVar1 = 0x405cc /* " ([FSR] RenderScale)" */;
    if ((int4)uVar9 == iVar6 && (uint4)uVar10 == uVar3) {
      xVar1 = 0x29893;
    }
    uRam00000000000d8ba0 = uVar3;
    iRam00000000000d8ba4 = iVar6;
    (*pcRam000000000010be18)
              (0,0x2dc9a /* "fsr: emu_SetAltRenderTarget(%d, %d) from libGTASA+0x%zx (screen width ..." */,uVar8,uVar7,iVar2,uVar5,uVar10 & 0xffffffff,uVar9 & 0xffffffff,xVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0006b274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxRam00000000000d3658)(uVar10 & 0xffffffff,uVar9 & 0xffffffff);
  return;
}

/* 0x6d28c  size=3356  HookOf_BuildSource(unsigned int, char const**, char const**)  [_Z18HookOf_BuildSourcejPPKcS1_] */
uint8 HookOf_BuildSource(uint4 param_1,int8 *param_2,int8 *param_3)

{
  int4 iVar1;
  int8 *piVar2;
  int8 *piVar3;
  int8 iVar4;
  uint1 uVar5;
  code *pcVar6;
  bool bVar7;
  uint4 uVar8;
  xunknown8 *pxVar9;
  int8 iVar10;
  uint8 *puVar11;
  int8 iVar12;
  int8 *piVar13;
  int8 *piVar14;
  int8 *piVar15;
  int8 iVar16;
  uint8 uVar17;
  xunknown8 xVar18;
  uint8 uVar19;
  uint8 uVar20;
  uint8 uVar21;
  xunknown8 *pxVar22;
  xunknown8 *pxVar23;
  xunknown8 *pxVar24;
  xunknown1 axVar25 [16];
  xunknown8 xStack_148;
  uint8 uStack_140;
  int8 iStack_138;
  xunknown8 xStack_130;
  uint8 uStack_128;
  uint8 uStack_120;
  xunknown8 xStack_118;
  uint8 uStack_110;
  int8 iStack_108;
  uint1 uStack_100;
  xunknown8 xStack_f8;
  xunknown2 xStack_f0;
  xunknown8 xStack_ec;
  xunknown8 xStack_e4;
  xunknown8 xStack_dc;
  xunknown4 xStack_d4;
  xunknown1 xStack_d0;
  xunknown8 xStack_cc;
  uint1 uStack_c4;
  xunknown8 xStack_c0;
  xunknown8 xStack_b8;
  xunknown4 xStack_b0;
  xunknown1 xStack_ac;
  xunknown8 xStack_a8;
  xunknown1 xStack_a0;
  xunknown8 xStack_9c;
  xunknown2 xStack_94;
  xunknown4 xStack_90;
  xunknown8 xStack_8c;
  xunknown4 xStack_84;
  xunknown1 xStack_80;
  int8 iStack_78;
  
  iVar4 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar4 + 0x28);
  if ((uRam000000000010bf58 & 1) == 0) {
    uRam000000000010bf58 = 1;
    boot__Step_plt(0x3431f /* "first RQShader::BuildSource" */);
  }
  uVar8 = (*(code *)*pxRam00000000000d3668)(param_1,param_2,param_3);
  if (((param_2 != (int8 *)0x0) && (param_3 != (int8 *)0x0)) && ((uVar8 & 1) != 0)) {
    if ((*param_2 != 0) && (*param_3 != 0)) {
      std____ndk1__mutex__lock_plt(0x10bef8);
      if (cRam00000000000d8c54 == '\x01') {
        pxVar9 = pxRam000000000010bf28;
        if (pxRam000000000010bf28 == (xunknown8 *)0x0) {
          pxVar22 = (xunknown8 *)0x10bf28;
          pxVar23 = (xunknown8 *)0x10bf28;
        }
        else {
          do {
            while( true ) {
              pxVar22 = pxVar9;
              if (*(uint4 *)((int8)pxVar22 + 0x1c) <= param_1) break;
              pxVar9 = (xunknown8 *)*pxVar22;
              pxVar23 = pxVar22;
              if ((xunknown8 *)*pxVar22 == (xunknown8 *)0x0) goto code_r0x0006d384;
            }
            if (param_1 <= *(uint4 *)((int8)pxVar22 + 0x1c)) goto code_r0x0006d68c;
            pxVar9 = (xunknown8 *)pxVar22[1];
          } while ((xunknown8 *)pxVar22[1] != (xunknown8 *)0x0);
          pxVar23 = pxVar22 + 1;
        }
code_r0x0006d384:
        pxVar9 = (xunknown8 *)operator_new_plt(0x20);
        *(uint4 *)((int8)pxVar9 + 0x1c) = param_1;
        *pxVar9 = 0;
        pxVar9[1] = 0;
        pxVar9[2] = pxVar22;
        *pxVar23 = pxVar9;
        if ((int8 *)*piRam000000000010bf20 != (int8 *)0x0) {
          piRam000000000010bf20 = (int8 *)*piRam000000000010bf20;
        }
        FUN_000749a4(pxRam000000000010bf28);
        iRam000000000010bf30 = iRam000000000010bf30 + 1;
        FUN_0006dfa8(&xStack_f8,0x40,0x40,0x2cdf2 /* "/flags_%08X" */,param_1);
        uVar5 = uRam000000000010bee0;
        uVar20 = (uint8)(uRam000000000010bee0 >> 1);
        if ((uRam000000000010bee0 & 1) != 0) {
          uVar20 = uRam000000000010bee8;
        }
        iVar10 = strlen(&xStack_f8);
        uVar21 = uVar20 + iVar10;
        if (uVar21 < 0xfffffffffffffff0) {
          if (uVar21 < 0x17) {
            uVar8 = (int4)uVar21 << 1;
            uStack_140 = 0;
            iStack_138 = 0;
            xStack_148 = (uint8)(uint1)uVar8;
          }
          else {
            uVar17 = (uVar21 | 0xf) + 1;
            iStack_138 = operator_new_plt(uVar17);
            xStack_148 = uVar17 | 1;
            uVar8 = (uint4)xStack_148 & 0xff;
            uStack_140 = uVar21;
          }
          iVar12 = iStack_138;
          if ((uVar8 & 1) == 0) {
            iVar12 = (int8)&xStack_148 + 1;
          }
          if (uVar20 != 0) {
            xVar18 = 0x10bee1;
            if ((uVar5 & 1) != 0) {
              xVar18 = xRam000000000010bef0;
            }
            memmove(iVar12,xVar18,uVar20);
          }
          if (iVar10 != 0) {
            memmove(iVar12 + uVar20,&xStack_f8,iVar10);
          }
          *(xunknown1 *)(iVar12 + uVar20 + iVar10) = 0;
          puVar11 = (uint8 *)std____ndk1__basic_string__append_plt_1(&xStack_148,0x2a1c8 /* ".frag" */);
          uStack_128 = puVar11[1];
          uVar17 = *puVar11;
          uVar21 = puVar11[2];
          puVar11[1] = 0;
          puVar11[2] = 0;
          *puVar11 = 0;
          iVar10 = *param_2;
          uVar20 = uVar21;
          if ((uVar17 & 1) == 0) {
            uVar20 = (int8)&xStack_130 + 1;
          }
          xStack_130 = uVar17;
          uStack_120 = uVar21;
          iVar12 = fopen(uVar20,0x26d82);
          if (iVar12 != 0) {
            iVar16 = 0x29893;
            if (iVar10 != 0) {
              iVar16 = iVar10;
            }
            fputs(iVar16,iVar12);
            fclose(iVar12);
          }
          if ((uVar17 & 1) != 0) {
            operator_delete_plt(uVar21,xStack_130 & 0xfffffffffffffffe);
          }
          if ((xStack_148 & 1) != 0) {
            operator_delete_plt(iStack_138,xStack_148 & 0xfffffffffffffffe);
          }
          uVar5 = uRam000000000010bee0;
          uVar20 = (uint8)(uRam000000000010bee0 >> 1);
          if ((uRam000000000010bee0 & 1) != 0) {
            uVar20 = uRam000000000010bee8;
          }
          iVar10 = strlen(&xStack_f8);
          uVar21 = uVar20 + iVar10;
          if (uVar21 < 0xfffffffffffffff0) {
            if (uVar21 < 0x17) {
              uVar8 = (int4)uVar21 << 1;
              uStack_140 = 0;
              iStack_138 = 0;
              xStack_148 = (uint8)(uint1)uVar8;
            }
            else {
              uVar17 = (uVar21 | 0xf) + 1;
              iStack_138 = operator_new_plt(uVar17);
              xStack_148 = uVar17 | 1;
              uVar8 = (uint4)xStack_148 & 0xff;
              uStack_140 = uVar21;
            }
            iVar12 = iStack_138;
            if ((uVar8 & 1) == 0) {
              iVar12 = (int8)&xStack_148 + 1;
            }
            if (uVar20 != 0) {
              xVar18 = 0x10bee1;
              if ((uVar5 & 1) != 0) {
                xVar18 = xRam000000000010bef0;
              }
              memmove(iVar12,xVar18,uVar20);
            }
            if (iVar10 != 0) {
              memmove(iVar12 + uVar20,&xStack_f8,iVar10);
            }
            *(xunknown1 *)(iVar12 + uVar20 + iVar10) = 0;
            puVar11 = (uint8 *)std____ndk1__basic_string__append_plt_1(&xStack_148,0x3fd66 /* ".vert" */);
            uStack_128 = puVar11[1];
            uVar17 = *puVar11;
            uVar21 = puVar11[2];
            puVar11[1] = 0;
            puVar11[2] = 0;
            *puVar11 = 0;
            iVar10 = *param_3;
            uVar20 = uVar21;
            if ((uVar17 & 1) == 0) {
              uVar20 = (int8)&xStack_130 + 1;
            }
            xStack_130 = uVar17;
            uStack_120 = uVar21;
            iVar12 = fopen(uVar20,0x26d82);
            if (iVar12 != 0) {
              iVar16 = 0x29893;
              if (iVar10 != 0) {
                iVar16 = iVar10;
              }
              fputs(iVar16,iVar12);
              fclose(iVar12);
            }
            if ((uVar17 & 1) != 0) {
              operator_delete_plt(uVar21,xStack_130 & 0xfffffffffffffffe);
            }
            if ((xStack_148 & 1) != 0) {
              operator_delete_plt(iStack_138,xStack_148 & 0xfffffffffffffffe);
            }
            goto code_r0x0006d68c;
          }
        }
        else {
          if (*(int8 *)(iVar4 + 0x28) != iStack_78) goto code_r0x0006dfa4;
          FUN_000664d4(&xStack_148);
        }
        if (*(int8 *)(iVar4 + 0x28) == iStack_78) {
          xVar18 = FUN_000664d4(&xStack_148);
          FUN_00073bac(&xStack_130);
          std____ndk1__mutex__unlock_plt(0x10bef8);
          if (*(int8 *)(iVar4 + 0x28) == iStack_78) {
            FUN_000c5688(xVar18);
          }
        }
        goto code_r0x0006dfa4;
      }
code_r0x0006d68c:
      if (cRam00000000000d8bc8 == '\x01') {
        if (pxRam000000000010bf40 == (xunknown8 *)0x0) {
code_r0x0006d6e4:
          uStack_100 = 0;
          xStack_118 = 0;
          uStack_120 = 0;
          iStack_108 = 0;
          uStack_110 = 0;
          uStack_128 = 0;
          xStack_130 = 0;
          std____ndk1__basic_string__assign_plt(&xStack_130,*param_3);
          std____ndk1__basic_string__assign_plt(&xStack_118,*param_2);
          xStack_f8 = xRam00000000000d8bcc;
          bVar7 = (xStack_118 & 1) != 0;
          xStack_f0 = xRam00000000000d8bd4;
          xStack_dc = xRam00000000000d8be8;
          xStack_d0 = xRam00000000000d8bf4;
          xStack_cc = xRam00000000000d8bf8;
          uStack_c4 = uRam00000000000d8c00;
          xStack_b8 = xRam00000000000d8c0c;
          xStack_c0 = xRam00000000000d8c04;
          xStack_ac = xRam00000000000d8c18;
          xStack_b0 = xRam00000000000d8c14;
          xStack_a0 = xRam00000000000d8c24;
          xStack_9c = xRam00000000000d8c28;
          xStack_e4 = xRam00000000000d8be0;
          xStack_ec = xRam00000000000d8bd8;
          xStack_8c = xRam00000000000d8c38;
          xStack_d4 = xRam00000000000d8bf0;
          uVar20 = xStack_118 >> 1 & 0x7f;
          if (bVar7) {
            uVar20 = uStack_110;
          }
          xStack_80 = xRam00000000000d8c44;
          xStack_a8 = xRam00000000000d8c1c;
          iVar10 = (int8)&xStack_118 + 1;
          if (bVar7) {
            iVar10 = iStack_108;
          }
          piVar2 = (int8 *)(iVar10 + uVar20);
          xStack_94 = CONCAT11(uRam00000000000d8c45 & uRam00000000000d8c4d,
                               uRam00000000000d8c45 & uRam00000000000d8c4c);
          xStack_90 = xRam00000000000d8c50;
          xStack_84 = xRam00000000000d8c40;
          if ((int8)uVar20 < 0x13) {
            piVar13 = piVar2;
          }
          else {
            iVar12 = iVar10;
            do {
              piVar13 = (int8 *)memchr(iVar12,0x4f,uVar20 - 0x12);
              if (piVar13 == (int8 *)0x0) break;
              if ((*piVar13 == 0x657461575f74754f && piVar13[1] == 0x6c426168706c4172) &&
                  *(int8 *)((int8)piVar13 + 0xb) == 0x646e656c42616870) goto code_r0x0006d874;
              iVar12 = (int8)piVar13 + 1;
              uVar20 = (int8)piVar2 - iVar12;
            } while (0x12 < (int8)uVar20);
            piVar13 = piVar2;
          }
code_r0x0006d874:
          uVar20 = xStack_130 >> 1 & 0x7f;
          if ((xStack_130 & 1) == 0) {
            uVar21 = (int8)&xStack_130 + 1;
          }
          else {
            uVar21 = uStack_120;
            uVar20 = uStack_128;
          }
          piVar3 = (int8 *)(uVar21 + uVar20);
          if (7 < (int8)uVar20) {
            uVar17 = uVar21;
            do {
              piVar14 = (int8 *)memchr(uVar17,0x4f,uVar20 - 7);
              if (piVar14 == (int8 *)0x0) break;
              if (*piVar14 == 0x6c6665525f74754f) goto code_r0x0006d8ec;
              uVar17 = (int8)piVar14 + 1;
              uVar20 = (int8)piVar3 - uVar17;
            } while (7 < (int8)uVar20);
          }
          piVar14 = piVar3;
code_r0x0006d8ec:
          axVar25 = xform__Apply_plt(&xStack_130,&xStack_118,&xStack_f8);
          if (((axVar25._8_4_ >> 0x10 & 1) != 0) &&
             (uVar20 = FUN_0007392c(&xStack_130,&xStack_118,param_1), (uVar20 & 1) == 0)) {
            iVar1 = iRam000000000010bf5c + 1;
            bVar7 = iRam000000000010bf5c < 3;
            iRam000000000010bf5c = iVar1;
            if (bVar7) {
              (*pcRam000000000010bf60)(1,0x2d616 /* "world: flags %08X - the SSR code failed to compile here, rewriting it ..." */,param_1);
            }
            std____ndk1__basic_string__assign_plt(&xStack_130,*param_3);
            std____ndk1__basic_string__assign_plt(&xStack_118,*param_2);
            xStack_94 = 0;
            axVar25 = xform__Apply_plt(&xStack_130,&xStack_118,&xStack_f8);
          }
          pcVar6 = pcRam000000000010bf60;
          uVar17 = axVar25._8_8_;
          uVar20 = axVar25._0_8_ & 0x1000000000000;
          if (((((piVar14 != piVar3 && (int8)piVar14 - uVar21 != -1) & xStack_f0._1_1_) == 1) &&
              (uVar20 == 0)) && (iRam000000000010bf68 < 3)) {
            iRam000000000010bf68 = iRam000000000010bf68 + 1;
            iVar12 = (int8)&xStack_118 + 1;
            uVar21 = xStack_118 >> 1 & 0x7f;
            if ((xStack_118 & 1) != 0) {
              iVar12 = iStack_108;
              uVar21 = uStack_110;
            }
            piVar3 = (int8 *)(iVar12 + uVar21);
            piVar14 = piVar3;
            if ((int8)uVar21 < 8) {
              bVar7 = false;
            }
            else {
              iVar16 = iVar12;
              uVar19 = uVar21;
              do {
                piVar15 = (int8 *)memchr(iVar16,0x4f,uVar19 - 7);
                if (piVar15 == (int8 *)0x0) break;
                if (*piVar15 == 0x636570535f74754f) goto code_r0x0006da58;
                iVar16 = (int8)piVar15 + 1;
                uVar19 = (int8)piVar3 - iVar16;
              } while (7 < (int8)uVar19);
              piVar15 = piVar3;
code_r0x0006da58:
              bVar7 = piVar15 != piVar3 && (int8)piVar15 - iVar12 != -1;
              if (0x13 < (int8)uVar21) {
                iVar16 = iVar12;
                do {
                  piVar14 = (int8 *)memchr(iVar16,0x46,uVar21 - 0x13);
                  if (piVar14 == (int8 *)0x0) break;
                  if ((*piVar14 == 0x726f6c6f43676f46 && piVar14[1] == 0x6f465f74754f202c) &&
                      (int4)piVar14[2] == 0x746d4167) goto code_r0x0006daf0;
                  iVar16 = (int8)piVar14 + 1;
                  uVar21 = (int8)piVar3 - iVar16;
                } while (0x13 < (int8)uVar21);
                piVar14 = piVar3;
              }
            }
code_r0x0006daf0:
            (*pcVar6)(1,0x2cdfe /* "world: flags %08X is a vehicle shader but the paint rewrite found no a..." */,param_1,bVar7,piVar14 != piVar3 && (int8)piVar14 - iVar12 != -1);
          }
          uVar8 = axVar25._8_4_;
          if ((((piVar13 != piVar2 && (int8)piVar13 - iVar10 != -1) & uStack_c4) == 1) &&
             ((uVar17 & 1) == 0)) {
            (*pcRam000000000010bf60)(1,0x2bb93 /* "world: flags %08X is a water shader but the water rewrite found no anc..." */,param_1);
          }
          uVar21 = uVar17 >> 0x28 & 1;
          if ((axVar25._0_8_ & 0x101010100000000) == 0 && (uVar17 & 0x100000101) == 0) {
            uStack_100 = (uint1)uVar21;
            if ((uVar17 >> 0x28 & 1) != 0) goto code_r0x0006db8c;
code_r0x0006dba0:
            iRam000000000010bf70 = iRam000000000010bf70 + (axVar25._4_4_ & 1);
            iRam000000000010bf74 = iRam000000000010bf74 + (axVar25._4_4_ >> 8 & 1);
            iRam000000000010bf78 = iRam000000000010bf78 + axVar25._0_4_;
            iRam000000000010bf7c = iRam000000000010bf7c + (uint4)(uint2)(uVar20 >> 0x30);
            iRam000000000010bf80 = iRam000000000010bf80 + (axVar25[7] & 1);
            iRam000000000010bf84 = iRam000000000010bf84 + (uVar8 & 1);
            iRam000000000010bf88 = iRam000000000010bf88 + (uVar8 >> 8 & 1);
            iRam000000000010bf8c = iRam000000000010bf8c + (uVar8 >> 0x10 & 1);
            iRam000000000010bf90 = iRam000000000010bf90 + (uVar8 >> 0x18 & 1);
            iRam000000000010bf94 = iRam000000000010bf94 + (axVar25._12_4_ & 1);
            iRam000000000010bf98 = iRam000000000010bf98 + (int4)uVar21;
            if ((uVar8 & uStack_100 & 1) != 0) {
              (*pcRam000000000010bf60)(0,0x2998b /* "world: flags %08X water rewritten (%d so far)" */,param_1,iRam000000000010bf84);
            }
          }
          else {
            uStack_100 = 1;
code_r0x0006db8c:
            uVar17 = FUN_0007392c(&xStack_130,&xStack_118,param_1);
            if ((uVar17 & 1) != 0) goto code_r0x0006dba0;
            uStack_100 = 0;
            iRam000000000010bf6c = iRam000000000010bf6c + 1;
          }
          pxVar22 = pxRam000000000010bf40;
          if (pxRam000000000010bf40 == (xunknown8 *)0x0) {
            pxVar23 = (xunknown8 *)0x10bf40;
            pxVar24 = (xunknown8 *)0x10bf40;
          }
          else {
            do {
              while( true ) {
                pxVar9 = pxVar22;
                pxVar23 = pxVar9;
                if (*(uint4 *)(pxVar9 + 4) <= param_1) break;
                pxVar22 = (xunknown8 *)*pxVar9;
                pxVar24 = pxVar9;
                if ((xunknown8 *)*pxVar9 == (xunknown8 *)0x0) goto code_r0x0006dd00;
              }
              if (param_1 <= *(uint4 *)(pxVar9 + 4)) goto code_r0x0006dd8c;
              pxVar22 = (xunknown8 *)pxVar9[1];
            } while ((xunknown8 *)pxVar9[1] != (xunknown8 *)0x0);
            pxVar24 = pxVar9 + 1;
          }
code_r0x0006dd00:
          pxVar9 = (xunknown8 *)operator_new_plt(0x60);
          *(uint4 *)(pxVar9 + 4) = param_1;
          pxVar9[7] = uStack_120;
          pxVar9[6] = uStack_128;
          pxVar9[5] = xStack_130;
          pxVar9[10] = iStack_108;
          uStack_128 = 0;
          uStack_120 = 0;
          xStack_130 = 0;
          pxVar9[9] = uStack_110;
          pxVar9[8] = xStack_118;
          xStack_118 = 0;
          uStack_110 = 0;
          iStack_108 = 0;
          *(uint1 *)(pxVar9 + 0xb) = uStack_100;
          *pxVar9 = 0;
          pxVar9[1] = 0;
          pxVar9[2] = pxVar23;
          *pxVar24 = pxVar9;
          if ((int8 *)*piRam000000000010bf38 != (int8 *)0x0) {
            piRam000000000010bf38 = (int8 *)*piRam000000000010bf38;
          }
          FUN_000749a4(pxRam000000000010bf40,pxVar9);
          iRam000000000010bf48 = iRam000000000010bf48 + 1;
code_r0x0006dd8c:
          iVar1 = iRam000000000010bf9c + 1;
          if ((iRam000000000010bf9c < 1) || (iRam000000000010bf9c = iVar1, iVar1 % 0x19 == 0)) {
            iRam000000000010bf9c = iVar1;
            (*pcRam000000000010bf60)
                      (0,0x37333 /* "world: %d shaders seen - mip bias fixed %d, per-pixel light %d (%d lig..." */,iVar1,iRam000000000010bf70,iRam000000000010bf74,
                       iRam000000000010bf78,iRam000000000010bf7c,iRam000000000010bf80,
                       iRam000000000010bf90,iRam000000000010bf84,iRam000000000010bf88,
                       iRam000000000010bf8c,iRam000000000010bf94,iRam000000000010bf98,
                       iRam000000000010bf6c);
          }
          if ((xStack_118 & 1) != 0) {
            operator_delete_plt(iStack_108,xStack_118 & 0xfffffffffffffffe);
          }
          if ((xStack_130 & 1) != 0) {
            operator_delete_plt(uStack_120,xStack_130 & 0xfffffffffffffffe);
          }
        }
        else {
          pxVar9 = (xunknown8 *)0x10bf40;
          pxVar22 = pxRam000000000010bf40;
          do {
            iVar10 = 8;
            if (param_1 <= *(uint4 *)(pxVar22 + 4)) {
              iVar10 = 0;
              pxVar9 = pxVar22;
            }
            pxVar22 = *(xunknown8 **)((int8)pxVar22 + iVar10);
          } while (pxVar22 != (xunknown8 *)0x0);
          if ((pxVar9 == (xunknown8 *)0x10bf40) || (param_1 < *(uint4 *)(pxVar9 + 4)))
          goto code_r0x0006d6e4;
        }
        if (*(char *)(pxVar9 + 0xb) == '\x01') {
          iVar10 = (int8)pxVar9 + 0x29;
          if ((*(uint1 *)(pxVar9 + 5) & 1) != 0) {
            iVar10 = pxVar9[7];
          }
          *param_3 = iVar10;
          iVar10 = (int8)pxVar9 + 0x41;
          if ((*(uint1 *)(pxVar9 + 8) & 1) != 0) {
            iVar10 = pxVar9[10];
          }
          *param_2 = iVar10;
        }
      }
      std____ndk1__mutex__unlock_plt(0x10bef8);
    }
    uVar8 = 1;
  }
  if (*(int8 *)(iVar4 + 0x28) == iStack_78) {
    return (uint8)(uVar8 & 1);
  }
code_r0x0006dfa4:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar20 = (*got___stack_chk_fail)();
  return uVar20;
}

/* 0x74c6c  size=1300  HookOf_TexMipMode(char**)  [_Z17HookOf_TexMipModePPc] */
void HookOf_TexMipMode(int8 *param_1)

{
  uint4 uVar1;
  uint8 uVar2;
  int8 iVar3;
  float4 fVar4;
  xunknown8 *pxVar5;
  int8 *piVar6;
  int4 iVar7;
  int4 iVar8;
  xunknown4 xVar9;
  uint4 uVar10;
  int8 iVar11;
  uint8 uVar12;
  uint8 uVar13;
  uint8 uVar14;
  int8 *piVar15;
  uint8 uVar16;
  uint4 uVar17;
  float8 fVar18;
  int4 iStack_6c;
  int4 iStack_68;
  uint4 uStack_64;
  int4 iStack_60;
  xunknown4 xStack_5c;
  xunknown1 xStack_58;
  uint1 uStack_57;
  xunknown2 xStack_56;
  uint4 uStack_54;
  xunknown4 xStack_50;
  int8 iStack_48;
  
  iVar3 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar3 + 0x28);
  if ((uRam000000000010c000 & 1) == 0) {
    uRam000000000010c000 = 1;
    boot__Step_plt(0x3f5c6 /* "first texture command (rqTextureMipMode)" */);
  }
  iVar11 = *(int8 *)*param_1;
  if (iVar11 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(uint4 *)(iVar11 + 0x30);
  }
  uVar10 = *(uint4 *)((int8 *)*param_1 + 1);
  uStack_64 = uVar17;
  (*(code *)*pxRam00000000000d3680)();
  if ((uRam000000000010c038 & 1) == 0) {
    if ((uRam000000000010c039 & 1) != 0) goto code_r0x000750ac;
    xStack_50 = 0;
    iStack_60 = 2;
    xStack_5c = 0;
    xStack_58 = 0;
    uStack_57 = 0;
    xStack_56 = 0;
    uStack_54 = uStack_54 & 0xffffff00;
    uVar12 = gl__Load_plt(&iStack_60,pcRam000000000010c030);
    if ((((uVar12 & 1) == 0) || ((uStack_57 & 1) == 0)) || (*piRam00000000000d3290 == 0)) {
      uRam000000000010c039 = 1;
      (*pcRam000000000010c030)(1,0x2b81a /* "textures: needs OpenGL ES 3.1 - off" */);
      goto code_r0x000750ac;
    }
    uRam000000000010c038 = 1;
    uVar12 = gl__HasExtension_plt(0x34641 /* "GL_EXT_texture_filter_anisotropic" */);
    if ((uVar12 & 1) != 0) {
      (*(code *)*pxRam00000000000d3230)(0x84ff,0xd8c58);
    }
    (*pcRam000000000010c030)((float8)fRam00000000000d8c58,0,0x34e31 /* "textures: GPU max anisotropy %.0fx, using %dx" */,uRam00000000000d8c60);
  }
  if (uVar10 < 3) {
    *(int4 *)((uint8)uVar10 * 4 + 0x10c004) = *(int4 *)((uint8)uVar10 * 4 + 0x10c004) + 1;
  }
  piVar6 = piRam00000000000d3290;
  iStack_60 = 0;
  (*(code *)*piRam00000000000d3290)(0xde1,1,0x1000,&iStack_60);
  if (iStack_60 < 1) {
    pxVar5 = pxRam00000000000d3228;
    if (cRam00000000000d8c64 == '\x01') {
      iStack_6c = 0;
      iStack_68 = 0;
      (*(code *)*piVar6)(0xde1,0,0x1000,&iStack_68);
      (*(code *)*piVar6)(0xde1,0,0x86a1,&iStack_6c);
      pxVar5 = pxRam00000000000d3228;
      if ((iStack_68 < 2) || (iStack_6c != 0)) {
code_r0x00074fec:
        if (iStack_68 < 2) goto code_r0x0007500c;
      }
      else if (uRam000000000010bfb0 != 0) {
        uVar12 = uRam000000000010bfb0 - 1;
        uVar13 = (uint8)uVar17;
        uVar10 = (uint4)uRam000000000010bfb0;
        if ((uRam000000000010bfb0 & uVar12) == 0) {
          uVar14 = (uint8)(uVar10 - 1 & uVar17);
        }
        else {
          uVar14 = uVar13;
          if (uRam000000000010bfb0 <= uVar13) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar17 / uVar10;
            }
            uVar14 = (uint8)(uVar17 - uVar1 * uVar10);
          }
        }
        piVar15 = *(int8 **)(iRam000000000010bfa8 + uVar14 * 8);
        if ((piVar15 != (int8 *)0x0) && (piVar15 = (int8 *)*piVar15, piVar15 != (int8 *)0x0)) {
          do {
            uVar16 = piVar15[1];
            if (uVar16 == uVar13) {
              if (*(uint4 *)(piVar15 + 2) == uVar17) {
                (*(code *)*pxRam00000000000d3348)(0xde1);
                iStack_60 = 0;
                (*(code *)*piVar6)(0xde1,1,0x1000,&iStack_60);
                pxVar5 = pxRam00000000000d3228;
                if (iStack_60 < 1) goto code_r0x0007500c;
                iVar7 = 2;
                goto code_r0x00075114;
              }
            }
            else {
              if ((uRam000000000010bfb0 & uVar12) == 0) {
                uVar16 = uVar16 & uVar12;
              }
              else if (uRam000000000010bfb0 <= uVar16) {
                uVar2 = 0;
                if (uRam000000000010bfb0 != 0) {
                  uVar2 = uVar16 / uRam000000000010bfb0;
                }
                uVar16 = uVar16 - uVar2 * uRam000000000010bfb0;
              }
              if (uVar16 != uVar14) break;
            }
            piVar15 = (int8 *)*piVar15;
          } while (piVar15 != (int8 *)0x0);
          goto code_r0x00074fec;
        }
      }
      iRam000000000010c018 = iRam000000000010c018 + 1;
    }
  }
  else {
    iVar7 = 2;
    do {
      iVar8 = iVar7;
      if (iVar8 == 0x10) break;
      iStack_60 = 0;
      (*(code *)*piVar6)(0xde1,iVar8,0x1000,&iStack_60);
      iVar7 = iVar8 + 1;
    } while (0 < iStack_60);
    pxVar5 = pxRam00000000000d3338;
    (*(code *)*pxRam00000000000d3338)(0xde1,0x813d,iVar8 + -1);
    xVar9 = 0x2703;
    if (cRam00000000000d8c65 == '\0') {
      xVar9 = 0x2701;
    }
    (*(code *)*pxVar5)(0xde1,0x2801,xVar9);
    if ((1.0 < fRam00000000000d8c58) && (1 < (int4)uRam00000000000d8c60)) {
      fVar4 = (float4)uRam00000000000d8c60;
      if (fRam00000000000d8c58 <= (float4)uRam00000000000d8c60) {
        fVar4 = fRam00000000000d8c58;
      }
      (*(code *)*pxRam00000000000d32d0)(fVar4,0xde1,0x84fe);
    }
    iRam000000000010c010 = iRam000000000010c010 + 1;
    pxVar5 = pxRam00000000000d3228;
  }
  goto code_r0x0007500c;
  while( true ) {
    iStack_60 = 0;
    (*(code *)*piVar6)(0xde1,iVar8,0x1000,&iStack_60);
    iVar7 = iVar8 + 1;
    if (iStack_60 < 1) break;
code_r0x00075114:
    iVar8 = iVar7;
    if (iVar8 == 0x10) break;
  }
  FUN_00075180(iVar8 + -1);
  iRam000000000010c014 = iRam000000000010c014 + 1;
  std____ndk1__pair_std____ndk1____hash_iterator__bool__std____ndk1____hash_table____emplace_unique_key_args_plt
            (0x10bfd0,&uStack_64,&uStack_64);
  pxVar5 = pxRam00000000000d3228;
code_r0x0007500c:
  do {
    iVar7 = (*(code *)*pxVar5)();
  } while (iVar7 != 0);
  clock_gettime(1,&iStack_60);
  fVar18 = (float8)CONCAT44(xStack_5c,iStack_60) +
           fRam0000000000022270 *
           (float8)CONCAT44(uStack_54,CONCAT22(xStack_56,CONCAT11(uStack_57,xStack_58)));
  if (5.0 <= fVar18 - fRam000000000010c040 && iRam000000000010c048 < 0x14) {
    iRam000000000010c048 = iRam000000000010c048 + 1;
    fRam000000000010c040 = fVar18;
    (*pcRam000000000010c030)
              (0,0x2295e /* "textures: mip modes set 0:%d 1:%d 2:%d - upgraded %d (late mips %d), m..." */,xRam000000000010c004,xRam000000000010c008,xRam000000000010c00c,
               iRam000000000010c010,xRam000000000010c028,iRam000000000010c014,iRam000000000010c018);
  }
code_r0x000750ac:
  if (*(int8 *)(iVar3 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7522c  size=976  HookOf_TexMip(char**)  [_Z13HookOf_TexMipPPc] */
void HookOf_TexMip(int8 *param_1)

{
  uint4 uVar1;
  uint8 uVar2;
  int8 iVar3;
  float4 fVar4;
  xunknown8 *pxVar5;
  int4 iVar6;
  uint4 uVar7;
  xunknown4 xVar8;
  int8 iVar9;
  uint8 uVar10;
  uint8 uVar11;
  uint8 uVar12;
  int8 *piVar13;
  uint8 uVar14;
  uint4 uStack_60;
  uint4 uStack_5c;
  uint8 uStack_58;
  xunknown1 xStack_50;
  xunknown4 xStack_4c;
  int8 iStack_48;
  
  iVar3 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar3 + 0x28);
  iVar9 = *(int8 *)*param_1;
  uStack_60 = 0;
  if (iVar9 != 0) {
    uStack_60 = *(uint4 *)(iVar9 + 0x30);
  }
  iVar9 = ((int8 *)*param_1)[1];
  (*(code *)*pxRam00000000000d3690)();
  if ((uRam000000000010c038 & 1) == 0) {
    if ((uRam000000000010c039 & 1) != 0) goto code_r0x0007553c;
    xStack_4c = 0;
    uStack_5c = 2;
    uStack_58 = 0;
    xStack_50 = 0;
    uVar10 = gl__Load_plt(&uStack_5c,pcRam000000000010c030);
    if ((((uVar10 & 1) == 0) || ((uStack_58 & 0x10000000000) == 0)) || (*piRam00000000000d3290 == 0)
       ) {
      uRam000000000010c039 = 1;
      (*pcRam000000000010c030)(1,0x2b81a /* "textures: needs OpenGL ES 3.1 - off" */);
      goto code_r0x0007553c;
    }
    uRam000000000010c038 = 1;
    uVar10 = gl__HasExtension_plt(0x34641 /* "GL_EXT_texture_filter_anisotropic" */);
    if ((uVar10 & 1) != 0) {
      (*(code *)*pxRam00000000000d3230)(0x84ff,&fRam00000000000d8c58);
    }
    (*pcRam000000000010c030)((float8)fRam00000000000d8c58,0,0x34e31 /* "textures: GPU max anisotropy %.0fx, using %dx" */,uRam00000000000d8c60);
  }
  if ((int4)iVar9 == 0) {
    std____ndk1__pair_std____ndk1____hash_iterator__bool__std____ndk1____hash_table____emplace_unique_key_args_plt
              (&iRam000000000010bfa8,&uStack_60,&uStack_60);
    if (uRam000000000010bfd8 != 0) {
      uVar10 = uRam000000000010bfd8 - 1;
      uVar11 = (uint8)uStack_60;
      uVar7 = (uint4)uRam000000000010bfd8;
      if ((uRam000000000010bfd8 & uVar10) == 0) {
        uVar12 = (uint8)(uVar7 - 1 & uStack_60);
      }
      else {
        uVar12 = uVar11;
        if (uRam000000000010bfd8 <= uVar11) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uStack_60 / uVar7;
          }
          uVar12 = (uint8)(uStack_60 - uVar1 * uVar7);
        }
      }
      piVar13 = *(int8 **)(iRam000000000010bfd0 + uVar12 * 8);
      if (piVar13 != (int8 *)0x0) {
        do {
          while( true ) {
            piVar13 = (int8 *)*piVar13;
            if (piVar13 == (int8 *)0x0) goto code_r0x0007553c;
            uVar14 = piVar13[1];
            if (uVar14 == uVar11) break;
            if ((uRam000000000010bfd8 & uVar10) == 0) {
              uVar14 = uVar14 & uVar10;
            }
            else if (uRam000000000010bfd8 <= uVar14) {
              uVar2 = 0;
              if (uRam000000000010bfd8 != 0) {
                uVar2 = uVar14 / uRam000000000010bfd8;
              }
              uVar14 = uVar14 - uVar2 * uRam000000000010bfd8;
            }
            if (uVar14 != uVar12) goto code_r0x0007553c;
          }
        } while (*(uint4 *)(piVar13 + 2) != uStack_60);
        (*(code *)*pxRam00000000000d3348)(0xde1);
        pxVar5 = pxRam00000000000d3228;
        do {
          iVar6 = (*(code *)*pxVar5)();
        } while (iVar6 != 0);
      }
    }
  }
  else {
    unsigned_long_std____ndk1____hash_table____erase_unique_plt(0x10bfd0,&uStack_60);
    piVar13 = piRam00000000000d3290;
    uStack_5c = 0;
    (*(code *)*piRam00000000000d3290)(0xde1,1,0x1000,&uStack_5c);
    if ((int4)uStack_5c < 1) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      do {
        if (iVar6 == 0xe) {
          iVar6 = 0xf;
          break;
        }
        uStack_5c = 0;
        (*(code *)*piVar13)(0xde1,iVar6 + 2,0x1000,&uStack_5c);
        iVar6 = iVar6 + 1;
      } while (0 < (int4)uStack_5c);
    }
    uStack_5c = 0;
    (*(code *)*pxRam00000000000d3340)(0xde1,0x2801,&uStack_5c);
    pxVar5 = pxRam00000000000d3338;
    if ((uStack_5c >> 1 == 0x1300) || ((uStack_5c == 0x2701 && ((cRam00000000000d8c65 & 1) != 0))))
    {
      (*(code *)*pxRam00000000000d3338)(0xde1,0x813d,iVar6);
      xVar8 = 0x2703;
      if (cRam00000000000d8c65 == 0) {
        xVar8 = 0x2701;
      }
      (*(code *)*pxVar5)(0xde1,0x2801,xVar8);
      if ((1.0 < fRam00000000000d8c58) && (1 < (int4)uRam00000000000d8c60)) {
        fVar4 = (float4)uRam00000000000d8c60;
        if (fRam00000000000d8c58 <= (float4)uRam00000000000d8c60) {
          fVar4 = fRam00000000000d8c58;
        }
        (*(code *)*pxRam00000000000d32d0)(fVar4,0xde1,0x84fe);
      }
      xRam000000000010c028 = xRam000000000010c028 + 1;
      pxVar5 = pxRam00000000000d3228;
    }
    else {
      (*(code *)*pxRam00000000000d3338)(0xde1,0x813d,iVar6);
      pxVar5 = pxRam00000000000d3228;
    }
    do {
      iVar6 = (*(code *)*pxVar5)();
    } while (iVar6 != 0);
  }
code_r0x0007553c:
  if (*(int8 *)(iVar3 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x75e84  size=2200  HookOf_LinkProgram(unsigned int)  [_Z18HookOf_LinkProgramj] */
void HookOf_LinkProgram(int4 param_1)

{
  int4 *piVar1;
  uint4 uVar2;
  xunknown8 *pxVar3;
  uint1 uVar4;
  int4 iVar5;
  uint4 uVar6;
  uint4 uVar7;
  uint4 uVar8;
  uint4 uVar9;
  int4 iVar10;
  int4 iVar11;
  int4 iVar12;
  int4 iVar13;
  int4 iVar14;
  int4 iVar15;
  int4 iVar16;
  int4 iVar17;
  uint4 uVar18;
  int4 iVar19;
  uint4 uVar20;
  int4 iVar21;
  int4 *piVar22;
  int8 iVar23;
  int8 iVar24;
  int4 *piVar25;
  int8 iVar26;
  int8 iVar27;
  uint4 uVar28;
  uint8 uVar29;
  xunknown8 xVar30;
  uint8 uVar31;
  int4 *piVar32;
  int4 *piVar33;
  xunknown8 xVar34;
  xunknown8 xVar35;
  xunknown8 xVar36;
  xunknown8 xVar37;
  xunknown8 xVar38;
  xunknown8 xVar39;
  uint4 auStack_7c [3];
  xunknown1 xStack_70;
  xunknown4 xStack_6c;
  int8 iStack_68;
  
  iVar26 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar26 + 0x28);
  if ((uRam000000000010c088 & 1) == 0) {
    uRam000000000010c088 = 1;
    boot__Step_plt(0x3fdf5 /* "first glLinkProgram" */);
  }
  iVar5 = wind__SwayLocation_plt();
  if (-1 < iVar5) {
    (*(code *)*pxRam00000000000d3490)(param_1,iVar5,0x29307 /* "zSway" */);
  }
  (*(code *)*pxRam00000000000d36a0)(param_1);
  if ((uRam000000000010c150 & 1) == 0) {
    xStack_6c = 0;
    auStack_7c[0] = 2;
    auStack_7c[1] = 0;
    auStack_7c[2] = 0;
    xStack_70 = 0;
    uVar4 = gl__Load_plt(auStack_7c,pcRam000000000010c0d8);
    uRam000000000010c150 = uVar4 & 1;
    if ((uVar4 & 1) != 0) goto code_r0x00075f4c;
  }
  else {
code_r0x00075f4c:
    wind__AfterLink_plt();
    pxVar3 = pxRam00000000000d3408;
    uVar6 = (*(code *)*pxRam00000000000d3408)(param_1,0x39ddd /* "zTime" */);
    uVar7 = (*(code *)*pxVar3)(param_1,0x2aed9 /* "zSun" */);
    uVar8 = (*(code *)*pxVar3)(param_1,0x2742c /* "zSky" */);
    iVar5 = (*(code *)*pxVar3)(param_1,0x32ad5 /* "zSsrM" */);
    uVar9 = (*(code *)*pxVar3)(param_1,0x3a961 /* "zSsrC" */);
    iVar10 = (*(code *)*pxVar3)(param_1,0x23ba7 /* "zSsrT" */);
    iVar11 = (*(code *)*pxVar3)(param_1,0x27431 /* "zSsrS" */);
    iVar12 = (*(code *)*pxVar3)(param_1,0x2cebe /* "zSsrK" */);
    iVar13 = (*(code *)*pxVar3)(param_1,0x2cf4a /* "zSsrL" */);
    iVar14 = (*(code *)*pxVar3)(param_1,0x2d694 /* "zRipS" */);
    iVar15 = (*(code *)*pxVar3)(param_1,0x304a7 /* "zRipT" */);
    iVar16 = (*(code *)*pxVar3)(param_1,0x2aafb /* "zPudS" */);
    iVar17 = (*(code *)*pxVar3)(param_1,0x304ad /* "zPudT" */);
    uVar18 = (*(code *)*pxVar3)(param_1,0x2ab01 /* "zWatS" */);
    iVar19 = (*(code *)*pxVar3)(param_1,0x2d69a /* "zWatN" */);
    if ((int4)(uVar18 & uVar9) < 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = (*(code *)*pxVar3)(param_1,0x388fe /* "WaterSpecs" */);
      uVar20 = ~uVar20 >> 0x1f;
    }
    uVar29 = (uint8)uRam000000000010c08c;
    uVar2 = uRam000000000010c08c - 1;
    uVar28 = uRam000000000010c08c;
    if (0 < (int4)uRam000000000010c08c) {
      piVar32 = (int4 *)0x10c090;
      do {
        if (*piVar32 == param_1) {
          uRam000000000010c08c = uVar2;
          *piVar32 = *(int4 *)((int8)(int4)uVar2 * 4 + 0x10c090);
          uVar28 = uVar2;
          break;
        }
        uVar29 = uVar29 - 1;
        piVar32 = piVar32 + 1;
      } while (uVar29 != 0);
    }
    uVar20 = uVar20 ^ 1;
    if (0xf < (int4)uVar28) {
      uVar20 = 1;
    }
    if (uVar20 == 0) {
      uRam000000000010c08c = uVar28 + 1;
      *(int4 *)((int8)(int4)uVar28 * 4 + 0x10c090) = param_1;
    }
    iVar21 = (*(code *)*pxVar3)(param_1,0x27437 /* "zMat" */);
    piVar32 = piRam000000000010c070;
    piVar33 = piRam000000000010c068;
    if ((int8)piRam000000000010c070 - (int8)piRam000000000010c068 != 0) {
      iVar27 = ((int8)piRam000000000010c070 - (int8)piRam000000000010c068 >> 2) *
               -0x5555555555555555;
      piVar22 = piRam000000000010c068;
      do {
        if (*piVar22 == param_1) {
          xVar30 = *(xunknown8 *)(piRam000000000010c070 + -3);
          piVar22[2] = piRam000000000010c070[-1];
          *(xunknown8 *)piVar22 = xVar30;
          piVar32 = piRam000000000010c070 + -3;
          piVar33 = piRam000000000010c068;
          break;
        }
        iVar27 = iVar27 + -1;
        piVar22 = piVar22 + 3;
      } while (iVar27 != 0);
    }
    piRam000000000010c068 = piVar33;
    piRam000000000010c070 = piVar32;
    if (-1 < iVar21) {
      if (piVar32 < piRam000000000010c078) {
        *piVar32 = param_1;
        piVar32[1] = iVar21;
        piVar22 = piVar32 + 3;
        piVar32[2] = 0;
code_r0x000762ec:
        piRam000000000010c070 = piVar22;
        goto code_r0x000762f8;
      }
      uVar29 = ((int8)piVar32 - (int8)piVar33 >> 2) * -0x5555555555555555 + 1;
      if (uVar29 < 0x1555555555555556) {
        iVar23 = (int8)piRam000000000010c078 - (int8)piVar33;
        iVar27 = iVar23 >> 2;
        uVar31 = iVar27 * 0x5555555555555556;
        if (uVar31 <= uVar29) {
          uVar31 = uVar29;
        }
        if (0xaaaaaaaaaaaaaa9 < (uint8)(iVar27 * -0x5555555555555555)) {
          uVar31 = 0x1555555555555555;
        }
        if (uVar31 < 0x1555555555555556) {
          iVar27 = operator_new_plt(uVar31 * 0xc);
          piRam000000000010c068 = (int4 *)(iVar27 + ((int8)piVar32 - (int8)piVar33));
          piRam000000000010c078 = (int4 *)(iVar27 + uVar31 * 0xc);
          piVar22 = piRam000000000010c068 + 3;
          *piRam000000000010c068 = param_1;
          piRam000000000010c068[1] = iVar21;
          piRam000000000010c068[2] = 0;
          for (; piVar32 != piVar33; piVar32 = piVar32 + -3) {
            iVar21 = piVar32[-1];
            *(xunknown8 *)(piRam000000000010c068 + -3) = *(xunknown8 *)(piVar32 + -3);
            piRam000000000010c068[-1] = iVar21;
            piRam000000000010c068 = piRam000000000010c068 + -3;
          }
          if (piVar33 != (int4 *)0x0) {
            piRam000000000010c070 = piVar22;
            operator_delete_plt(piVar33,iVar23);
          }
          goto code_r0x000762ec;
        }
      }
      else {
        if (*(int8 *)(iVar26 + 0x28) != iStack_68) goto code_r0x00076718;
        FUN_00077c54();
      }
      iVar26 = *(int8 *)(iVar26 + 0x28);
code_r0x00076708:
      if (iVar26 == iStack_68) {
        FUN_0005ec14();
      }
      goto code_r0x00076718;
    }
code_r0x000762f8:
    pxVar3 = pxRam00000000000d3228;
    xRam00000000000d8c68 = 0xffffffff;
    do {
      iVar21 = (*(code *)*pxVar3)();
      piVar33 = piRam000000000010c058;
      piVar32 = piRam000000000010c050;
    } while (iVar21 != 0);
    if ((int4)(uVar18 & uVar9 & uVar6 & uVar7 & uVar8) < 0) {
      if ((int8)piRam000000000010c058 - (int8)piRam000000000010c050 != 0) {
        iVar27 = ((int8)piRam000000000010c058 - (int8)piRam000000000010c050 >> 2) *
                 0x14c1bacf914c1bad;
        do {
          if (*piVar32 == param_1) {
            xVar34 = *(xunknown8 *)(piRam000000000010c058 + -0x1f);
            xVar30 = *(xunknown8 *)(piRam000000000010c058 + -0x21);
            xVar35 = *(xunknown8 *)(piRam000000000010c058 + -0x25);
            *(xunknown8 *)(piVar32 + 2) = *(xunknown8 *)(piRam000000000010c058 + -0x23);
            *(xunknown8 *)piVar32 = xVar35;
            *(xunknown8 *)(piVar32 + 6) = xVar34;
            *(xunknown8 *)(piVar32 + 4) = xVar30;
            xVar34 = *(xunknown8 *)(piRam000000000010c058 + -0xf);
            xVar30 = *(xunknown8 *)(piRam000000000010c058 + -0x11);
            xVar35 = *(xunknown8 *)(piRam000000000010c058 + -0x15);
            xVar37 = *(xunknown8 *)(piRam000000000010c058 + -0x1b);
            xVar36 = *(xunknown8 *)(piRam000000000010c058 + -0x1d);
            xVar39 = *(xunknown8 *)(piRam000000000010c058 + -0x17);
            xVar38 = *(xunknown8 *)(piRam000000000010c058 + -0x19);
            *(xunknown8 *)(piVar32 + 0x12) = *(xunknown8 *)(piRam000000000010c058 + -0x13);
            *(xunknown8 *)(piVar32 + 0x10) = xVar35;
            *(xunknown8 *)(piVar32 + 0x16) = xVar34;
            *(xunknown8 *)(piVar32 + 0x14) = xVar30;
            *(xunknown8 *)(piVar32 + 10) = xVar37;
            *(xunknown8 *)(piVar32 + 8) = xVar36;
            *(xunknown8 *)(piVar32 + 0xe) = xVar39;
            *(xunknown8 *)(piVar32 + 0xc) = xVar38;
            piVar33 = piRam000000000010c058 + -1;
            xVar34 = *(xunknown8 *)(piRam000000000010c058 + -3);
            xVar30 = *(xunknown8 *)(piRam000000000010c058 + -5);
            xVar36 = *(xunknown8 *)(piRam000000000010c058 + -0xb);
            xVar35 = *(xunknown8 *)(piRam000000000010c058 + -0xd);
            xVar38 = *(xunknown8 *)(piRam000000000010c058 + -7);
            xVar37 = *(xunknown8 *)(piRam000000000010c058 + -9);
            piRam000000000010c058 = piRam000000000010c058 + -0x25;
            piVar32[0x24] = *piVar33;
            *(xunknown8 *)(piVar32 + 0x1e) = xVar38;
            *(xunknown8 *)(piVar32 + 0x1c) = xVar37;
            *(xunknown8 *)(piVar32 + 0x22) = xVar34;
            *(xunknown8 *)(piVar32 + 0x20) = xVar30;
            *(xunknown8 *)(piVar32 + 0x1a) = xVar36;
            *(xunknown8 *)(piVar32 + 0x18) = xVar35;
            break;
          }
          iVar27 = iVar27 + -1;
          piVar32 = piVar32 + 0x25;
        } while (iVar27 != 0);
      }
    }
    else {
      if (piRam000000000010c050 != piRam000000000010c058) {
        piVar22 = piRam000000000010c050;
        do {
          if (*piVar22 == param_1) {
            piVar22[1] = uVar6;
            piVar22[2] = uVar7;
            *(xunknown1 *)(piVar22 + 0x24) = 0;
            piVar22[3] = uVar8;
            piVar22[4] = iVar5;
            piVar22[5] = uVar9;
            piVar22[6] = iVar10;
            piVar22[7] = iVar11;
            piVar22[0x16] = 0x7fc00000;
            piVar22[0x17] = 0x7fc00000;
            piVar22[0x14] = 0x7fc00000;
            piVar22[0x15] = 0x7fc00000;
            piVar22[0x1a] = 0x7fc00000;
            piVar22[0x1b] = 0x7fc00000;
            piVar22[0x18] = 0x7fc00000;
            piVar22[0x19] = 0x7fc00000;
            piVar22[0x1e] = 0x7fc00000;
            piVar22[0x1f] = 0x7fc00000;
            piVar22[0x1c] = 0x7fc00000;
            piVar22[0x1d] = 0x7fc00000;
            piVar22[0x22] = 0x7fc00000;
            piVar22[0x23] = 0x7fc00000;
            piVar22[0x20] = 0x7fc00000;
            piVar22[0x21] = 0x7fc00000;
            piVar22[8] = iVar12;
            piVar22[9] = iVar13;
            piVar22[10] = iVar14;
            piVar22[0x12] = 0x7fc00000;
            piVar22[0x13] = 0x7fc00000;
            piVar22[0x10] = 0x7fc00000;
            piVar22[0x11] = 0x7fc00000;
            piVar22[0xb] = iVar15;
            piVar22[0xc] = iVar16;
            piVar22[0xd] = iVar17;
            piVar22[0xe] = uVar18;
            piVar22[0xf] = iVar19;
            goto code_r0x0007669c;
          }
          piVar22 = piVar22 + 0x25;
        } while (piVar22 != piRam000000000010c058);
      }
      auStack_7c[0] = auStack_7c[0] & 0xff000000;
      if (piRam000000000010c060 <= piRam000000000010c058) {
        iVar27 = (int8)piRam000000000010c058 - (int8)piRam000000000010c050;
        uVar29 = (iVar27 >> 2) * 0x14c1bacf914c1bad + 1;
        if (uVar29 < 0x1bacf914c1bacfa) {
          iVar23 = (int8)piRam000000000010c060 - (int8)piRam000000000010c050;
          iVar24 = iVar23 >> 2;
          uVar31 = iVar24 * 0x2983759f2298375a;
          if (uVar31 <= uVar29) {
            uVar31 = uVar29;
          }
          if (0xdd67c8a60dd67b < (uint8)(iVar24 * 0x14c1bacf914c1bad)) {
            uVar31 = 0x1bacf914c1bacf9;
          }
          if (uVar31 < 0x1bacf914c1bacfa) {
            iVar24 = operator_new_plt(uVar31 * 0x94);
            piRam000000000010c050 = (int4 *)(iVar24 + iVar27);
            *piRam000000000010c050 = param_1;
            piRam000000000010c050[1] = uVar6;
            piVar22 = piRam000000000010c050 + 0x25;
            piRam000000000010c050[4] = iVar5;
            piRam000000000010c050[5] = uVar9;
            piRam000000000010c050[2] = uVar7;
            piRam000000000010c050[3] = uVar8;
            piRam000000000010c050[0x24] = 0;
            piRam000000000010c050[6] = iVar10;
            piRam000000000010c050[7] = iVar11;
            piRam000000000010c050[0x12] = 0x7fc00000;
            piRam000000000010c050[0x13] = 0x7fc00000;
            piRam000000000010c050[0x10] = 0x7fc00000;
            piRam000000000010c050[0x11] = 0x7fc00000;
            piRam000000000010c050[0x16] = 0x7fc00000;
            piRam000000000010c050[0x17] = 0x7fc00000;
            piRam000000000010c050[0x14] = 0x7fc00000;
            piRam000000000010c050[0x15] = 0x7fc00000;
            piRam000000000010c050[0x1a] = 0x7fc00000;
            piRam000000000010c050[0x1b] = 0x7fc00000;
            piRam000000000010c050[0x18] = 0x7fc00000;
            piRam000000000010c050[0x19] = 0x7fc00000;
            piRam000000000010c050[0x1e] = 0x7fc00000;
            piRam000000000010c050[0x1f] = 0x7fc00000;
            piRam000000000010c050[0x1c] = 0x7fc00000;
            piRam000000000010c050[0x1d] = 0x7fc00000;
            piRam000000000010c050[8] = iVar12;
            piRam000000000010c050[9] = iVar13;
            piRam000000000010c050[10] = iVar14;
            piRam000000000010c050[0x22] = 0x7fc00000;
            piRam000000000010c050[0x23] = 0x7fc00000;
            piRam000000000010c050[0x20] = 0x7fc00000;
            piRam000000000010c050[0x21] = 0x7fc00000;
            piRam000000000010c050[0xb] = iVar15;
            piRam000000000010c050[0xc] = iVar16;
            piRam000000000010c050[0xd] = iVar17;
            piRam000000000010c050[0xe] = uVar18;
            piRam000000000010c050[0xf] = iVar19;
            piRam000000000010c060 = (int4 *)(iVar24 + uVar31 * 0x94);
            piVar25 = piRam000000000010c050;
            if (piVar32 != piVar33) {
              do {
                xVar30 = *(xunknown8 *)(piVar33 + -0x21);
                xVar35 = *(xunknown8 *)(piVar33 + -0x23);
                xVar34 = *(xunknown8 *)(piVar33 + -0x25);
                *(xunknown8 *)(piVar25 + -0x1f) = *(xunknown8 *)(piVar33 + -0x1f);
                *(xunknown8 *)(piVar25 + -0x21) = xVar30;
                *(xunknown8 *)(piVar25 + -0x23) = xVar35;
                *(xunknown8 *)(piVar25 + -0x25) = xVar34;
                xVar30 = *(xunknown8 *)(piVar33 + -0x11);
                xVar35 = *(xunknown8 *)(piVar33 + -0x13);
                xVar34 = *(xunknown8 *)(piVar33 + -0x15);
                xVar37 = *(xunknown8 *)(piVar33 + -0x1b);
                xVar36 = *(xunknown8 *)(piVar33 + -0x1d);
                xVar39 = *(xunknown8 *)(piVar33 + -0x17);
                xVar38 = *(xunknown8 *)(piVar33 + -0x19);
                *(xunknown8 *)(piVar25 + -0xf) = *(xunknown8 *)(piVar33 + -0xf);
                *(xunknown8 *)(piVar25 + -0x11) = xVar30;
                *(xunknown8 *)(piVar25 + -0x13) = xVar35;
                *(xunknown8 *)(piVar25 + -0x15) = xVar34;
                *(xunknown8 *)(piVar25 + -0x17) = xVar39;
                *(xunknown8 *)(piVar25 + -0x19) = xVar38;
                *(xunknown8 *)(piVar25 + -0x1b) = xVar37;
                *(xunknown8 *)(piVar25 + -0x1d) = xVar36;
                piVar1 = piVar33 + -1;
                xVar34 = *(xunknown8 *)(piVar33 + -3);
                xVar30 = *(xunknown8 *)(piVar33 + -5);
                xVar36 = *(xunknown8 *)(piVar33 + -0xb);
                xVar35 = *(xunknown8 *)(piVar33 + -0xd);
                xVar38 = *(xunknown8 *)(piVar33 + -7);
                xVar37 = *(xunknown8 *)(piVar33 + -9);
                piVar33 = piVar33 + -0x25;
                piVar25[-1] = *piVar1;
                piRam000000000010c050 = piVar25 + -0x25;
                *(xunknown8 *)(piVar25 + -3) = xVar34;
                *(xunknown8 *)(piVar25 + -5) = xVar30;
                *(xunknown8 *)(piVar25 + -7) = xVar38;
                *(xunknown8 *)(piVar25 + -9) = xVar37;
                *(xunknown8 *)(piVar25 + -0xb) = xVar36;
                *(xunknown8 *)(piVar25 + -0xd) = xVar35;
                piVar25 = piRam000000000010c050;
              } while (piVar33 != piVar32);
            }
            if (piVar32 != (int4 *)0x0) {
              piRam000000000010c058 = piVar22;
              operator_delete_plt(piVar32,iVar23);
            }
            goto code_r0x00076648;
          }
        }
        else {
          if (*(int8 *)(iVar26 + 0x28) != iStack_68) goto code_r0x00076718;
          FUN_00077c68();
        }
        iVar26 = *(int8 *)(iVar26 + 0x28);
        goto code_r0x00076708;
      }
      *piRam000000000010c058 = param_1;
      piRam000000000010c058[1] = uVar6;
      piVar22 = piRam000000000010c058 + 0x25;
      piRam000000000010c058[4] = iVar5;
      piRam000000000010c058[5] = uVar9;
      piRam000000000010c058[2] = uVar7;
      piRam000000000010c058[3] = uVar8;
      *(xunknown1 *)(piRam000000000010c058 + 0x24) = 0;
      piRam000000000010c058[6] = iVar10;
      piRam000000000010c058[7] = iVar11;
      piRam000000000010c058[8] = iVar12;
      piRam000000000010c058[9] = iVar13;
      piRam000000000010c058[0x12] = 0x7fc00000;
      piRam000000000010c058[0x13] = 0x7fc00000;
      piRam000000000010c058[0x10] = 0x7fc00000;
      piRam000000000010c058[0x11] = 0x7fc00000;
      piRam000000000010c058[0x16] = 0x7fc00000;
      piRam000000000010c058[0x17] = 0x7fc00000;
      piRam000000000010c058[0x14] = 0x7fc00000;
      piRam000000000010c058[0x15] = 0x7fc00000;
      piRam000000000010c058[0x1a] = 0x7fc00000;
      piRam000000000010c058[0x1b] = 0x7fc00000;
      piRam000000000010c058[0x18] = 0x7fc00000;
      piRam000000000010c058[0x19] = 0x7fc00000;
      piRam000000000010c058[0x1e] = 0x7fc00000;
      piRam000000000010c058[0x1f] = 0x7fc00000;
      piRam000000000010c058[0x1c] = 0x7fc00000;
      piRam000000000010c058[0x1d] = 0x7fc00000;
      piRam000000000010c058[10] = iVar14;
      piRam000000000010c058[0xb] = iVar15;
      piRam000000000010c058[0x22] = 0x7fc00000;
      piRam000000000010c058[0x23] = 0x7fc00000;
      piRam000000000010c058[0x20] = 0x7fc00000;
      piRam000000000010c058[0x21] = 0x7fc00000;
      piRam000000000010c058[0xc] = iVar16;
      piRam000000000010c058[0xd] = iVar17;
      piRam000000000010c058[0xe] = uVar18;
      piRam000000000010c058[0xf] = iVar19;
      *(xunknown1 *)((int8)piRam000000000010c058 + 0x93) = 0;
      *(xunknown2 *)((int8)piRam000000000010c058 + 0x91) = 0;
code_r0x00076648:
      iVar5 = iRam000000000010c0d0 + 1;
      piRam000000000010c058 = piVar22;
      if ((iRam000000000010c0d0 == 0) || (iRam000000000010c0d0 = iVar5, iVar5 % 10 == 0)) {
        iRam000000000010c0d0 = iVar5;
        (*pcRam000000000010c0d8)(0,0x2ea43 /* "world: %d programs use our per-frame uniforms (wind / shine / water / ..." */);
      }
    }
  }
code_r0x0007669c:
  if (*(int8 *)(iVar26 + 0x28) == iStack_68) {
    return;
  }
code_r0x00076718:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x7671c  size=212  HookOf_TuUseProgram(unsigned int)  [_Z19HookOf_TuUseProgramj] */
void HookOf_TuUseProgram(int4 param_1)

{
  uint8 uVar1;
  int4 *piVar2;
  int8 iVar3;
  
  (*(code *)*pxRam00000000000d36b0)();
  if (((cRam000000000010c0e8 == '\x01') && ((uRam000000000010c0e9 & 1) == 0)) &&
     (uVar1 = (uint8)uRam000000000010c08c, 0 < (int4)uRam000000000010c08c)) {
    piVar2 = (int4 *)0x10c090;
    do {
      if (*piVar2 == param_1) {
        uRam000000000010c0e9 = 1;
        break;
      }
      uVar1 = uVar1 - 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 != 0);
  }
  xRam00000000000d8c68 = 0xffffffff;
  if (piRam000000000010c070 - (int8)piRam000000000010c068 != 0) {
    iVar3 = 0;
    piVar2 = piRam000000000010c068;
    do {
      if (*piVar2 == param_1) {
        xRam00000000000d8c68 = (int4)iVar3;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 3;
    } while ((piRam000000000010c070 - (int8)piRam000000000010c068 >> 2) * -0x5555555555555555 !=
             iVar3);
  }
  return;
}

/* 0x767f0  size=204  HookOf_TuDrawElements(unsigned int, int, unsigned int, void const*)  [_Z21HookOf_TuDrawElementsjijPKv] */
void HookOf_TuDrawElements(uint8 param_1,uint8 param_2,uint8 param_3,xunknown8 param_4)

{
  int8 iVar1;
  float4 fVar2;
  
  if ((-1 < (int4)xRam00000000000d8c68) &&
     ((int4)xRam00000000000d8c68 <
      (int4)((uint8)(piRam000000000010c070 - piRam000000000010c068) >> 2) * -0x55555555)) {
    param_1 = param_1 & 0xffffffff;
    param_2 = param_2 & 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    iVar1 = piRam000000000010c068 + (uint8)xRam00000000000d8c68 * 0xc;
    fVar2 = (float4)material__Class0_plt();
    if (fVar2 != *(float4 *)(iVar1 + 8)) {
      (*(code *)*pxRam00000000000d3418)(*(xunknown4 *)(iVar1 + 4));
      *(float4 *)(iVar1 + 8) = fVar2;
    }
    material__CountDraw_plt(fVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000768b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxRam00000000000d36c0)(param_1,param_2,param_3,param_4);
  return;
}

/* 0x7d3cc  size=240  HookOf_LtUseProgram(unsigned int)  [_Z19HookOf_LtUseProgramj] */
void HookOf_LtUseProgram(uint4 param_1)

{
  uint4 uVar1;
  uint8 uVar2;
  uint4 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  uint8 uVar6;
  int8 *piVar7;
  uint8 uVar8;
  
  (*(code *)*pxRam00000000000d36e0)();
  uRam0000000000161d30 = param_1;
  if (uRam0000000000161d08 != 0) {
    uVar4 = uRam0000000000161d08 - 1;
    uVar5 = (uint8)param_1;
    uVar3 = (uint4)uRam0000000000161d08;
    if ((uRam0000000000161d08 & uVar4) == 0) {
      uVar6 = (uint8)(uVar3 - 1 & param_1);
    }
    else {
      uVar6 = uVar5;
      if (uRam0000000000161d08 <= uVar5) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_1 / uVar3;
        }
        uVar6 = (uint8)(param_1 - uVar1 * uVar3);
      }
    }
    piVar7 = *(int8 **)(iRam0000000000161d00 + uVar6 * 8);
    if (piVar7 != (int8 *)0x0) {
      for (piVar7 = (int8 *)*piVar7; piVar7 != (int8 *)0x0; piVar7 = (int8 *)*piVar7) {
        uVar8 = piVar7[1];
        if (uVar8 == uVar5) {
          if (*(uint4 *)(piVar7 + 2) == param_1) {
            xRam00000000000d8c94 = *(xunknown4 *)((int8)piVar7 + 0x14);
            return;
          }
        }
        else {
          if ((uRam0000000000161d08 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uRam0000000000161d08 <= uVar8) {
            uVar2 = 0;
            if (uRam0000000000161d08 != 0) {
              uVar2 = uVar8 / uRam0000000000161d08;
            }
            uVar8 = uVar8 - uVar2 * uRam0000000000161d08;
          }
          if (uVar8 != uVar6) {
            xRam00000000000d8c94 = 0xffffffff;
            return;
          }
        }
      }
    }
  }
  xRam00000000000d8c94 = 0xffffffff;
  return;
}

/* 0x7d4bc  size=104  HookOf_LtDrawElements(unsigned int, int, unsigned int, void const*)  [_Z21HookOf_LtDrawElementsjijPKv] */
void HookOf_LtDrawElements(void)

{
  (*(code *)*pxRam00000000000d36f0)();
  if (((cRam0000000000161d40 == '\x01') && (-1 < (int4)xRam00000000000d8c94)) &&
     ((int4)xRam00000000000d8c94 < iRam0000000000161d44)) {
    *(int4 *)((uint8)xRam00000000000d8c94 * 0x48 + 0x161d88) =
         *(int4 *)((uint8)xRam00000000000d8c94 * 0x48 + 0x161d88) + 1;
  }
  return;
}

/* 0x7d524  size=2932  HookOf_LtUniformMatrix4fv(int, int, unsigned char, float const*)  [_Z25HookOf_LtUniformMatrix4fviihPKf] */
void HookOf_LtUniformMatrix4fv(int4 param_1,int4 param_2,char param_3,float4 *param_4)

{
  uint4 uVar1;
  uint8 uVar2;
  int8 iVar3;
  int4 iVar4;
  int8 *piVar5;
  bool bVar6;
  uint1 uVar7;
  xunknown4 xVar8;
  xunknown8 xVar9;
  uint8 uVar10;
  uint8 uVar11;
  int8 iVar12;
  xunknown8 *pxVar13;
  uint8 uVar14;
  int8 *piVar15;
  uint8 uVar16;
  int8 *piVar17;
  int8 iVar18;
  float4 *pfVar19;
  uint8 uVar20;
  uint4 uVar21;
  uint8 uVar22;
  int8 *piVar23;
  uint8 unaff_x24;
  uint4 uVar24;
  float4 fVar25;
  float4 fVar26;
  float4 fVar27;
  xunknown1 xStack_b9;
  uint4 *puStack_b8;
  float4 afStack_b0 [4];
  xunknown8 xStack_a0;
  xunknown8 xStack_98;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  int8 iStack_68;
  
  iVar3 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar3 + 0x28);
  (*(code *)*pxRam00000000000d3700)();
  uVar21 = uRam0000000000161d30;
  uVar16 = uRam0000000000161ce0;
  if ((((-1 < param_1) && (param_2 == 1)) && (param_4 != (float4 *)0x0)) &&
     (uVar22 = (uint8)uRam0000000000161d30, uRam0000000000161d30 != 0)) {
    if (uRam0000000000161d30 == uRam00000000001622f4) {
      iVar4 = xRam00000000000d8cd8._4_4_;
    }
    else {
      if (uRam0000000000161ce0 != 0) {
        uVar10 = uRam0000000000161ce0 - 1;
        uVar24 = (uint4)uRam0000000000161ce0;
        if ((uRam0000000000161ce0 & uVar10) == 0) {
          unaff_x24 = (uint8)(uVar24 - 1 & uRam0000000000161d30);
        }
        else {
          unaff_x24 = uVar22;
          if (uRam0000000000161ce0 <= uVar22) {
            uVar1 = 0;
            if (uVar24 != 0) {
              uVar1 = uRam0000000000161d30 / uVar24;
            }
            unaff_x24 = (uint8)(uRam0000000000161d30 - uVar1 * uVar24);
          }
        }
        pxVar13 = *(xunknown8 **)(iRam0000000000161cd8 + unaff_x24 * 8);
        if (pxVar13 != (xunknown8 *)0x0) {
          for (piVar23 = (int8 *)*pxVar13; piVar23 != (int8 *)0x0; piVar23 = (int8 *)*piVar23) {
            uVar14 = piVar23[1];
            if (uVar14 == uVar22) {
              if (*(uint4 *)(piVar23 + 2) == uRam0000000000161d30) goto code_r0x0007d930;
            }
            else {
              if ((uRam0000000000161ce0 & uVar10) == 0) {
                uVar14 = uVar14 & uVar10;
              }
              else if (uRam0000000000161ce0 <= uVar14) {
                uVar11 = 0;
                if (uRam0000000000161ce0 != 0) {
                  uVar11 = uVar14 / uRam0000000000161ce0;
                }
                uVar14 = uVar14 - uVar11 * uRam0000000000161ce0;
              }
              if (uVar14 != unaff_x24) break;
            }
          }
        }
      }
      piVar23 = (int8 *)operator_new_plt(0x20);
      fVar25 = fRam0000000000161cf8;
      uVar10 = uRam0000000000161cf0;
      *piVar23 = 0;
      piVar23[1] = uVar22;
      *(uint4 *)(piVar23 + 2) = uVar21;
      *(xunknown8 *)((int8)piVar23 + 0x14) = 0xfffffffefffffffe;
      if ((uVar16 == 0) || (fVar25 * (float4)uVar16 < (float4)(uVar10 + 1))) {
        if (uVar16 < 3) {
          uVar14 = 1;
        }
        else {
          uVar14 = (uint8)((uVar16 & uVar16 - 1) != 0);
        }
        uVar14 = uVar14 | uVar16 << 1;
        uVar10 = (uint8)((float4)(uVar10 + 1) / fVar25);
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        if (uVar14 - 1 == 0) {
          uVar14 = 2;
        }
        else if ((uVar14 & uVar14 - 1) != 0) {
          uVar14 = std____ndk1____next_prime_plt(uVar14);
          uVar16 = uRam0000000000161ce0;
        }
        if (uVar16 < uVar14) {
code_r0x0007d710:
          if (uVar14 >> 0x3d != 0) {
            if (*(int8 *)(iVar3 + 0x28) == iStack_68) {
              xVar9 = FUN_0005ec14();
              operator_delete_plt(piVar23,0x20);
              if (*(int8 *)(iVar3 + 0x28) == iStack_68) {
                FUN_000c5688(xVar9);
              }
            }
            goto code_r0x0007e094;
          }
          iVar18 = operator_new_plt(uVar14 << 3);
          iVar12 = iRam0000000000161cd8;
          bVar6 = iRam0000000000161cd8 != 0;
          iRam0000000000161cd8 = iVar18;
          if (bVar6) {
            operator_delete_plt(iVar12,uRam0000000000161ce0 << 3);
          }
          iVar12 = iRam0000000000161cd8;
          uRam0000000000161ce0 = uVar14;
          memset(iRam0000000000161cd8,0,uVar14 << 3);
          piVar15 = piRam0000000000161ce8;
          uVar16 = uVar14;
          if (piRam0000000000161ce8 != (int8 *)0x0) {
            uVar11 = uVar14 - 1;
            uVar10 = piRam0000000000161ce8[1];
            if ((uVar14 & uVar11) == 0) {
              uVar10 = uVar10 & uVar11;
            }
            else if (uVar14 <= uVar10) {
              uVar20 = 0;
              if (uVar14 != 0) {
                uVar20 = uVar10 / uVar14;
              }
              uVar10 = uVar10 - uVar20 * uVar14;
            }
            *(xunknown8 *)(iVar12 + uVar10 * 8) = 0x161ce8;
            piVar5 = (int8 *)*piVar15;
            while (piVar17 = piVar5, piVar17 != (int8 *)0x0) {
              uVar20 = piVar17[1];
              if ((uVar14 & uVar11) == 0) {
                uVar20 = uVar20 & uVar11;
                if (uVar20 != uVar10) goto code_r0x0007d858;
              }
              else {
                if (uVar14 <= uVar20) {
                  uVar2 = 0;
                  if (uVar14 != 0) {
                    uVar2 = uVar20 / uVar14;
                  }
                  uVar20 = uVar20 - uVar2 * uVar14;
                }
                if (uVar20 != uVar10) {
code_r0x0007d858:
                  if (*(int8 *)(iVar12 + uVar20 * 8) == 0) {
                    *(int8 **)(iVar12 + uVar20 * 8) = piVar15;
                    uVar10 = uVar20;
                  }
                  else {
                    *piVar15 = *piVar17;
                    *piVar17 = **(int8 **)(iVar12 + uVar20 * 8);
                    **(xunknown8 **)(iVar12 + uVar20 * 8) = piVar17;
                    piVar17 = piVar15;
                  }
                }
              }
              piVar15 = piVar17;
              piVar5 = (int8 *)*piVar17;
            }
          }
        }
        else if (uVar14 < uVar16) {
          uVar10 = (uint8)((float4)uRam0000000000161cf0 / fRam0000000000161cf8);
          if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
            uVar10 = std____ndk1____next_prime_plt();
          }
          else if (1 < uVar10) {
            uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
          }
          iVar12 = iRam0000000000161cd8;
          if (uVar14 <= uVar10) {
            uVar14 = uVar10;
          }
          if (uVar14 < uVar16) {
            if (uVar14 != 0) goto code_r0x0007d710;
            iRam0000000000161cd8 = 0;
            if (iVar12 != 0) {
              operator_delete_plt(iVar12,uRam0000000000161ce0 << 3);
            }
            uRam0000000000161ce0 = 0;
            uVar16 = 0;
          }
          else {
            uVar16 = uRam0000000000161ce0;
          }
        }
        if ((uVar16 & uVar16 - 1) == 0) {
          unaff_x24 = (uint8)((int4)uVar16 - 1U & uVar21);
        }
        else if (uVar22 < uVar16) {
          unaff_x24 = uVar22;
        }
        else {
          uVar10 = 0;
          if (uVar16 != 0) {
            uVar10 = uVar22 / uVar16;
          }
          unaff_x24 = uVar22 - uVar10 * uVar16;
        }
      }
      iVar12 = iRam0000000000161cd8;
      piVar15 = *(int8 **)(iRam0000000000161cd8 + unaff_x24 * 8);
      if (piVar15 == (int8 *)0x0) {
        piVar15 = piVar23;
        *piVar23 = (int8)piRam0000000000161ce8;
        piRam0000000000161ce8 = piVar15;
        *(xunknown8 *)(iVar12 + unaff_x24 * 8) = 0x161ce8;
        if (*piVar23 != 0) {
          uVar22 = *(uint8 *)(*piVar23 + 8);
          if ((uVar16 & uVar16 - 1) == 0) {
            *(int8 **)(iVar12 + (uVar22 & uVar16 - 1) * 8) = piVar23;
          }
          else {
            if (uVar16 <= uVar22) {
              uVar10 = 0;
              if (uVar16 != 0) {
                uVar10 = uVar22 / uVar16;
              }
              uVar22 = uVar22 - uVar10 * uVar16;
            }
            *(int8 **)(iVar12 + uVar22 * 8) = piVar23;
          }
        }
      }
      else {
        *piVar23 = *piVar15;
        *piVar15 = (int8)piVar23;
      }
      uRam0000000000161cf0 = uRam0000000000161cf0 + 1;
code_r0x0007d930:
      if (*(int4 *)((int8)piVar23 + 0x14) == -2) {
        if ((uRam00000000001622f8 & 1) == 0) {
          xStack_a0 = xStack_a0 & 0xffffffff00000000;
          afStack_b0[0] = 2.8026e-45;
          afStack_b0[1] = 0.0;
          afStack_b0[2] = 0.0;
          afStack_b0[3] = (float4)((uint4)afStack_b0[3] & 0xffffff00);
          uVar7 = gl__Load_plt(afStack_b0,xRam00000000001622b8);
          uRam00000000001622f8 = uVar7 & 1;
          if ((uVar7 & 1) != 0) goto code_r0x0007d978;
          xVar8 = 0xffffffff;
          *(xunknown4 *)((int8)piVar23 + 0x14) = 0xffffffff;
        }
        else {
code_r0x0007d978:
          pxVar13 = pxRam00000000000d3408;
          xVar8 = (*(code *)*pxRam00000000000d3408)(uVar21,0x28ed2 /* "ViewMatrix" */);
          uVar7 = uRam00000000001622f8;
          *(xunknown4 *)((int8)piVar23 + 0x14) = xVar8;
          if (uVar7 == 1) {
            xVar8 = (*(code *)*pxVar13)(uVar21,0x2af29 /* "ProjMatrix" */);
          }
          else {
            xVar8 = 0xffffffff;
          }
        }
        *(xunknown4 *)(piVar23 + 3) = xVar8;
      }
      xRam00000000000d8cd8 = *(xunknown8 *)((int8)piVar23 + 0x14);
      iVar4 = (int4)((uint8)xRam00000000000d8cd8 >> 0x20);
      uRam00000000001622f4 = uVar21;
    }
    if ((param_1 == (int4)xRam00000000000d8cd8) || (param_1 == iVar4)) {
      if (param_3 == '\0') {
        afStack_b0[2] = (float4)*(xunknown8 *)(param_4 + 2);
        afStack_b0[3] = (float4)((uint8)*(xunknown8 *)(param_4 + 2) >> 0x20);
        afStack_b0[0] = (float4)*(xunknown8 *)param_4;
        afStack_b0[1] = (float4)((uint8)*(xunknown8 *)param_4 >> 0x20);
        xStack_98 = *(int8 *)(param_4 + 6);
        xStack_a0 = *(uint8 *)(param_4 + 4);
        xStack_88 = *(int8 *)(param_4 + 10);
        xStack_90 = *(int8 *)(param_4 + 8);
        xStack_78 = *(int8 *)(param_4 + 0xe);
        xStack_80 = *(int8 *)(param_4 + 0xc);
      }
      else {
        afStack_b0[0] = *param_4;
        afStack_b0[1] = param_4[4];
        xStack_a0 = CONCAT44(param_4[5],param_4[1]);
        afStack_b0[2] = param_4[8];
        afStack_b0[3] = param_4[0xc];
        xStack_98 = CONCAT44(param_4[0xd],param_4[9]);
        xStack_90 = CONCAT44(param_4[6],param_4[2]);
        xStack_80 = CONCAT44(param_4[7],param_4[3]);
        xStack_88 = CONCAT44(param_4[0xe],param_4[10]);
        xStack_78 = CONCAT44(param_4[0xf],param_4[0xb]);
      }
      if (param_1 == iVar4) {
        xStack_88._4_4_ = (float4)((uint8)xStack_88 >> 0x20);
        if ((0.01 < ABS(ABS(xStack_88._4_4_) + -1.0)) ||
           (xStack_78._4_4_ = (float4)((uint8)xStack_78 >> 0x20), 0.01 < ABS(xStack_78._4_4_))) {
          unsigned_long_std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______erase_unique_plt
                    (&iRam0000000000161d00,&uRam0000000000161d30);
          uVar21 = 0xffffffff;
        }
        else {
          uVar21 = iRam0000000000161d44;
          if (0 < (int4)iRam0000000000161d44) {
            uVar16 = 0;
            iVar12 = 0x161d48;
            do {
              iVar18 = 0;
              do {
                fVar25 = ABS(*(float4 *)(iVar12 + iVar18) - *(float4 *)((int8)afStack_b0 + iVar18));
                fVar26 = (ABS(*(float4 *)(iVar12 + iVar18)) + 1.0) * 1e-05;
                if (fVar26 < fVar25) break;
                bVar6 = iVar18 != 0x3c;
                iVar18 = iVar18 + 4;
              } while (bVar6);
              if (fVar25 <= fVar26) {
                uVar21 = (uint4)uVar16;
                goto code_r0x0007dc30;
              }
              uVar16 = uVar16 + 1;
              iVar12 = iVar12 + 0x48;
            } while (uVar16 != iRam0000000000161d44);
            if (iRam0000000000161d44 == 8) {
              iRam0000000000161d44 = 0;
              piVar23 = piRam0000000000161d10;
              if (iRam0000000000161d18 == 0) {
                uVar21 = 0;
              }
              else {
                while (piVar23 != (int8 *)0x0) {
                  iVar12 = *piVar23;
                  operator_delete_plt(piVar23,0x18);
                  piVar23 = (int8 *)iVar12;
                }
                piRam0000000000161d10 = (int8 *)0x0;
                if (uRam0000000000161d08 != 0) {
                  memset(iRam0000000000161d00,0,uRam0000000000161d08 << 3);
                }
                iRam0000000000161d18 = 0;
                uVar21 = iRam0000000000161d44;
              }
            }
          }
          iVar12 = (int8)(int4)uVar21 * 0x48;
          *(uint8 *)(iVar12 + 0x161d50) = CONCAT44(afStack_b0[3],afStack_b0[2]);
          *(uint8 *)(iVar12 + 0x161d48) = CONCAT44(afStack_b0[1],afStack_b0[0]);
          *(int8 *)(iVar12 + 0x161d60) = xStack_98;
          *(uint8 *)(iVar12 + 0x161d58) = xStack_a0;
          *(xunknown8 *)(iVar12 + 0x161d88) = 0;
          *(int8 *)(iVar12 + 0x161d70) = xStack_88;
          *(int8 *)(iVar12 + 0x161d68) = xStack_90;
          *(int8 *)(iVar12 + 0x161d80) = xStack_78;
          *(int8 *)(iVar12 + 0x161d78) = xStack_80;
          iRam0000000000161d44 = uVar21 + 1;
code_r0x0007dc30:
          puStack_b8 = &uRam0000000000161d30;
          iVar12 = std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt
                             (&iRam0000000000161d00,&uRam0000000000161d30,xRam00000000000d3708,
                              &puStack_b8,&xStack_b9);
          *(uint4 *)(iVar12 + 0x14) = uVar21;
        }
        xRam00000000000d8c94 = uVar21;
      }
      uVar21 = uRam000000000016206c;
      if (cRam0000000000161d40 == '\x01') {
        if (param_1 == xRam00000000000d8cd8._4_4_) {
          if ((ABS(ABS(xStack_88._4_4_) + -1.0) <= 0.01) && (ABS(xStack_78._4_4_) <= 0.01)) {
            if ((float4)xStack_88 + -1.0 == 0.0) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = (float4)xStack_78 / ((float4)xStack_88 + -1.0);
            }
            iRam0000000000161f90 = iRam0000000000161f90 + 1;
            if (((((((iRam0000000000161f94 != CONCAT44(afStack_b0[1],afStack_b0[0]) ||
                     iRam0000000000161f9c != CONCAT44(afStack_b0[3],afStack_b0[2])) ||
                    uRam0000000000161fa4 != xStack_a0) || iRam0000000000161fac != xStack_98) ||
                  iRam0000000000161fb4 != xStack_90) || iRam0000000000161fbc != xStack_88) ||
                iRam0000000000161fc4 != xStack_80) || iRam0000000000161fcc != xStack_78) {
              iRam0000000000161f9c = CONCAT44(afStack_b0[3],afStack_b0[2]);
              iRam0000000000161f94 = CONCAT44(afStack_b0[1],afStack_b0[0]);
              iRam0000000000161fac = xStack_98;
              uRam0000000000161fa4 = xStack_a0;
              iRam0000000000161fd4 = iRam0000000000161fd4 + 1;
              iRam0000000000161fbc = xStack_88;
              iRam0000000000161fb4 = xStack_90;
              iRam0000000000161fcc = xStack_78;
              iRam0000000000161fc4 = xStack_80;
            }
            if (0.0 < fVar25) {
              fVar26 = fVar25;
              if (fRam00000000000d8c98 <= fVar25) {
                fVar26 = fRam00000000000d8c98;
              }
              if (fVar25 <= fRam0000000000161fd8) {
                fVar25 = fRam0000000000161fd8;
              }
              fRam00000000000d8c98 = fVar26;
              fRam0000000000161fd8 = fVar25;
            }
            xRam0000000000161fe4 = CONCAT44(afStack_b0[3],afStack_b0[2]);
            xRam0000000000161fdc = CONCAT44(afStack_b0[1],afStack_b0[0]);
            iRam0000000000161ff4 = xStack_98;
            uRam0000000000161fec = xStack_a0;
            iRam0000000000162004 = xStack_88;
            iRam0000000000161ffc = xStack_90;
            iRam0000000000162014 = xStack_78;
            iRam000000000016200c = xStack_80;
            xRam000000000016201c = 1;
          }
        }
        else if ((iRam0000000000162020 != 0) &&
                (iVar12 = *(int8 *)(iRam0000000000162020 + 0x18), iVar12 != 0)) {
          fVar26 = (-((float4)xStack_98 * (float4)xStack_78) -
                   (xStack_80._4_4_ * xStack_a0._4_4_ + (float4)xStack_80 * (float4)xStack_a0)) -
                   *(float4 *)(iVar12 + 0x34);
          fVar25 = (-(afStack_b0[2] * (float4)xStack_78) -
                   (afStack_b0[1] * xStack_80._4_4_ + (float4)xStack_80 * afStack_b0[0])) -
                   *(float4 *)(iVar12 + 0x30);
          fVar27 = (-((float4)xStack_88 * (float4)xStack_78) -
                   (xStack_80._4_4_ * xStack_90._4_4_ + (float4)xStack_80 * (float4)xStack_90)) -
                   *(float4 *)(iVar12 + 0x38);
          if (fVar26 * fVar26 + fVar25 * fVar25 + fVar27 * fVar27 <= 25.0) {
            xRam0000000000162030 = CONCAT44(afStack_b0[3],afStack_b0[2]);
            xRam0000000000162028 = CONCAT44(afStack_b0[1],afStack_b0[0]);
            xRam0000000000162068 = 1;
            iRam0000000000162040 = xStack_98;
            uRam0000000000162038 = xStack_a0;
            iRam0000000000162050 = xStack_88;
            iRam0000000000162048 = xStack_90;
            iRam0000000000162060 = xStack_78;
            iRam0000000000162058 = xStack_80;
            if ((int4)uRam000000000016206c < 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              pfVar19 = (float4 *)0x162090;
              do {
                if ((((((ABS(pfVar19[-8] - afStack_b0[0]) <= 0.0001) &&
                       (ABS(pfVar19[-7] - afStack_b0[1]) <= 0.0001)) &&
                      (ABS(pfVar19[-6] - afStack_b0[2]) <= 0.0001)) &&
                     (((ABS(pfVar19[-5] - afStack_b0[3]) <= 0.0001 &&
                       (ABS(pfVar19[-4] - (float4)xStack_a0) <= 0.0001)) &&
                      ((ABS(pfVar19[-3] - xStack_a0._4_4_) <= 0.0001 &&
                       ((ABS(pfVar19[-2] - (float4)xStack_98) <= 0.0001 &&
                        (ABS(pfVar19[-1] - xStack_98._4_4_) <= 0.0001)))))))) &&
                    (ABS(*pfVar19 - (float4)xStack_90) <= 0.0001)) &&
                   ((((ABS(pfVar19[1] - xStack_90._4_4_) <= 0.0001 &&
                      (ABS(pfVar19[2] - (float4)xStack_88) <= 0.0001)) &&
                     (ABS(pfVar19[3] - xStack_88._4_4_) <= 0.0001)) &&
                    (((ABS(pfVar19[4] - (float4)xStack_80) <= 0.001 &&
                      (ABS(pfVar19[5] - xStack_80._4_4_) <= 0.001)) &&
                     ((ABS(pfVar19[6] - (float4)xStack_78) <= 0.001 &&
                      (ABS(pfVar19[7] - xStack_78._4_4_) <= 0.001)))))))) {
                  pfVar19[8] = (float4)((int4)pfVar19[8] + 1);
                  goto code_r0x0007dfe0;
                }
                uVar16 = uVar16 + 1;
                pfVar19 = pfVar19 + 0x11;
              } while (uRam000000000016206c != uVar16);
              uVar16 = (uint8)uRam000000000016206c;
            }
code_r0x0007dfe0:
            if (((uint4)uVar16 == uVar21) && ((int4)uVar21 < 6)) {
              iVar12 = (int8)(int4)uVar21 * 0x44;
              uRam000000000016206c = uVar21 + 1;
              *(uint8 *)(iVar12 + 0x162078) = CONCAT44(afStack_b0[3],afStack_b0[2]);
              *(uint8 *)(iVar12 + 0x162070) = CONCAT44(afStack_b0[1],afStack_b0[0]);
              *(int8 *)(iVar12 + 0x162088) = xStack_98;
              *(uint8 *)(iVar12 + 0x162080) = xStack_a0;
              *(xunknown4 *)(iVar12 + 0x1620b0) = 1;
              *(int8 *)(iVar12 + 0x162098) = xStack_88;
              *(int8 *)(iVar12 + 0x162090) = xStack_90;
              *(int8 *)(iVar12 + 0x1620a8) = xStack_78;
              *(int8 *)(iVar12 + 0x1620a0) = xStack_80;
            }
          }
        }
      }
    }
  }
  if (*(int8 *)(iVar3 + 0x28) == iStack_68) {
    return;
  }
code_r0x0007e094:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x81ff4  size=1780  HookOf_ShUseProgram(unsigned int)  [_Z19HookOf_ShUseProgramj] */
void HookOf_ShUseProgram(uint4 param_1)

{
  int8 *piVar1;
  char *pcVar2;
  int8 iVar3;
  int8 iVar4;
  xunknown8 xVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  xunknown4 xVar9;
  int4 iVar10;
  uint1 extraout_w0;
  char *pcVar11;
  int8 *piVar12;
  char *pcVar13;
  uint1 uVar14;
  uint4 uVar15;
  code *pcVar16;
  uint8 uVar17;
  char *pcVar18;
  uint8 uVar19;
  char *pcVar20;
  char *pcVar21;
  uint8 uVar22;
  xunknown8 *pxVar23;
  uint4 *puVar24;
  xunknown8 *pxVar25;
  int8 iVar26;
  char *pcVar27;
  float4 fVar28;
  int4 iStack_b4;
  uint8 uStack_b0;
  uint8 uStack_a8;
  char *pcStack_a0;
  xunknown8 xStack_94;
  int4 iStack_8c;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  int8 iStack_78;
  
  iVar4 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar4 + 0x28);
  (*(code *)*pxRam00000000000d3718)();
  if (cRam0000000000162878 != '\x01') {
code_r0x000820b4:
    puVar24 = (uint4 *)0x0;
    goto code_r0x00082670;
  }
  if (param_1 < 0x1000) {
    uVar15 = (uint4)*(uint2 *)((uint8)param_1 * 2 + 0x162c64);
    if (uVar15 != 0) {
      puVar24 = (uint4 *)((uint8)(uVar15 - 1) * 0x60 + 0x164c64);
      goto code_r0x00082670;
    }
    puVar24 = (uint4 *)0x0;
    if ((param_1 == 0) || (0x1ff < (int4)uRam0000000000170c64)) goto code_r0x00082670;
    *(int2 *)((uint8)param_1 * 2 + 0x162c64) = (int2)uRam0000000000170c64 + 1;
  }
  else {
    uVar17 = (uint8)uRam0000000000170c64;
    if (0 < (int4)uRam0000000000170c64) {
      puVar24 = (uint4 *)0x164c64;
      do {
        if (*puVar24 == param_1) goto code_r0x00082670;
        uVar17 = uVar17 - 1;
        puVar24 = puVar24 + 0x18;
      } while (uVar17 != 0);
      if (0x1ff < (int4)uRam0000000000170c64) goto code_r0x000820b4;
    }
  }
  pxVar23 = pxRam00000000000d3428;
  iVar3 = (int8)(int4)uRam0000000000170c64 * 0x60;
  puVar24 = (uint4 *)(iVar3 + 0x164c64);
  pcVar16 = (code *)*pxRam00000000000d3428;
  uRam0000000000170c64 = uRam0000000000170c64 + 1;
  *puVar24 = param_1;
  *(xunknown1 *)(iVar3 + 0x164cb4) = 0;
  xVar9 = (*pcVar16)(param_1,0x22b06 /* "Position" */);
  pxVar25 = pxRam00000000000d3408;
  *(xunknown4 *)(iVar3 + 0x164c68) = xVar9;
  xVar9 = (*(code *)*pxVar25)(param_1,0x29e09 /* "ObjMatrix" */);
  pcVar16 = (code *)*pxVar25;
  *(xunknown4 *)(iVar3 + 0x164c6c) = xVar9;
  iVar10 = (*pcVar16)(param_1,0x274f9 /* "Bones" */);
  if (iVar10 < 0) {
    (*(code *)*pxVar25)(param_1,0x23d87 /* "Bones[0]" */);
    uVar14 = (uint1)~extraout_w0 >> 7;
  }
  else {
    uVar14 = 1;
  }
  *(uint1 *)(iVar3 + 0x164c70) = uVar14;
  *(xunknown1 *)(iVar3 + 0x164cb5) = 0;
  xVar5 = xRam00000000000222b0;
  *(xunknown4 *)(iVar3 + 0x164cb8) = 0xffffffff;
  pxVar25 = pxRam00000000000d33a0;
  *(xunknown8 *)(iVar3 + 0x164cbc) = xVar5;
  xStack_88 = 0;
  xStack_80 = 0;
  iStack_8c = 0;
  (*(code *)*pxVar25)(param_1,4,&iStack_8c,&xStack_88);
  if (0 < iStack_8c) {
    bVar6 = false;
    iVar26 = 0;
    pcVar27 = (char *)((uint8)&uStack_b0 | 1);
    pxVar25 = pxRam00000000000d3388;
code_r0x00082208:
    xStack_94 = 0;
    (*(code *)*pxVar25)(*(xunknown4 *)((int8)&xStack_88 + iVar26 * 4),0x8b4f,(int8)&xStack_94 + 4);
    (*(code *)*pxVar25)(*(xunknown4 *)((int8)&xStack_88 + iVar26 * 4),0x8b88,&xStack_94);
    uVar17 = xStack_94;
    uVar22 = xStack_94 & 0xffffffff;
    if (0xffff0000 < (uint4)xStack_94 - 0x10001) {
      if ((uint4)xStack_94 < 0x17) {
        uStack_b0 = CONCAT71(uStack_b0._1_7_,(char)((uint4)xStack_94 << 1));
        pcVar11 = pcVar27;
      }
      else {
        pcVar11 = (char *)operator_new_plt((uVar22 | 0xf) + 1);
        uStack_b0 = (uVar22 | 0xf) + 2;
        uStack_a8 = uVar22;
        pcStack_a0 = pcVar11;
      }
      memset(pcVar11,0,uVar22);
      pcVar11[uVar22] = '\0';
      iStack_b4 = 0;
      pcVar11 = pcVar27;
      if ((uStack_b0 & 1) != 0) {
        pcVar11 = pcStack_a0;
      }
      (*(code *)*pxRam00000000000d33a8)
                (*(xunknown4 *)((int8)&xStack_88 + iVar26 * 4),uVar17 & 0xffffffff,&iStack_b4,
                 pcVar11);
      std____ndk1__basic_string__resize_plt(&uStack_b0,(int8)iStack_b4,0);
      uVar14 = (uint1)uStack_b0 & 1;
      pcVar11 = pcVar27;
      if ((uStack_b0 & 1) != 0) {
        pcVar11 = pcStack_a0;
      }
      if (xStack_94._4_4_ == 0x8b30) {
        uVar17 = (uint8)((uint1)uStack_b0 >> 1);
        if ((uStack_b0 & 1) != 0) {
          uVar17 = uStack_a8;
        }
        if (6 < (int8)uVar17) {
          piVar1 = (int8 *)(pcVar11 + uVar17);
          pcVar13 = pcVar11;
          uVar22 = uVar17;
          while (piVar12 = (int8 *)memchr(pcVar13,100,uVar22 - 6), piVar12 != (int8 *)0x0) {
            if ((int4)*piVar12 == 0x63736964 && *(int4 *)((int8)piVar12 + 3) == 0x64726163) {
              if ((piVar12 != piVar1) &&
                 (uVar22 = (int8)piVar12 - (int8)pcVar11, uVar22 != 0xffffffffffffffff)) {
                if ((int8)uVar17 < 0xb) goto code_r0x000824d0;
                pcVar13 = pcVar11;
                uVar19 = uVar17;
                goto code_r0x00082460;
              }
              break;
            }
            pcVar13 = (char *)((int8)piVar12 + 1);
            uVar22 = (int8)piVar1 - (int8)pcVar13;
            if ((int8)uVar22 < 7) break;
          }
code_r0x000823e8:
          bVar6 = true;
          pxVar25 = pxRam00000000000d3388;
          goto code_r0x000823f4;
        }
        goto code_r0x00082308;
      }
      uVar17 = (uint8)((uint1)uStack_b0 >> 1);
      if ((uStack_b0 & 1) != 0) {
        uVar17 = uStack_a8;
      }
      if (0x10 < (int8)uVar17) {
        piVar1 = (int8 *)(pcVar11 + uVar17);
        pcVar13 = pcVar11;
        while (piVar12 = (int8 *)memchr(pcVar13,0x54,uVar17 - 0x10), piVar12 != (int8 *)0x0) {
          if ((*piVar12 == 0x64726f6f43786554 && piVar12[1] == 0x2e323135202f2030) &&
              (char)piVar12[2] == '0') {
            if ((piVar12 != piVar1) && ((int8)piVar12 - (int8)pcVar11 != -1)) {
              *(xunknown4 *)(iVar3 + 0x164cc0) = 0x3b000000;
            }
            break;
          }
          pcVar13 = (char *)((int8)piVar12 + 1);
          uVar17 = (int8)piVar1 - (int8)pcVar13;
          if ((int8)uVar17 < 0x11) break;
        }
      }
      goto code_r0x000823f4;
    }
    goto code_r0x000821f8;
  }
code_r0x00082604:
  iRam0000000000170c68 = iRam0000000000170c68 + 1;
  goto code_r0x00082614;
code_r0x00082460:
  piVar12 = (int8 *)memchr(pcVar13,0x2f,uVar19 - 10);
  if (piVar12 == (int8 *)0x0) goto code_r0x000824d0;
  if (*piVar12 == 0x4947454254412a2f && *(int8 *)((int8)piVar12 + 3) == 0x20204e4947454254) {
    if ((piVar12 != piVar1) && ((int8)piVar12 - (int8)pcVar11 != -1)) goto code_r0x000823e8;
    goto code_r0x000824d0;
  }
  pcVar13 = (char *)((int8)piVar12 + 1);
  uVar19 = (int8)piVar1 - (int8)pcVar13;
  if ((int8)uVar19 < 0xb) goto code_r0x000824d0;
  goto code_r0x00082460;
code_r0x000824d0:
  uVar19 = uVar17;
  if (uVar22 <= uVar17) {
    uVar19 = uVar22;
  }
  uVar22 = uVar19 + 5;
  if (uVar17 - uVar19 < 6) {
    uVar22 = uVar17;
  }
  *(xunknown1 *)(iVar3 + 0x164cb5) = 1;
  pxVar25 = pxRam00000000000d3388;
  pcVar13 = pcVar11 + uVar22;
  pcVar18 = pcVar11;
  pcVar20 = pcVar13;
code_r0x00082508:
  pcVar21 = pcVar18 + 2;
  do {
    pcVar18 = pcVar21 + -1;
    if (pcVar21[-2] == '.') {
      if (pcVar18 == pcVar13) goto code_r0x0008258c;
      if (*pcVar18 == 'a') {
        if (pcVar21 == pcVar13) goto code_r0x0008258c;
        if (*pcVar21 == ' ') {
          if (pcVar21 + 1 == pcVar13) goto code_r0x0008258c;
          if (pcVar21[1] == '<') break;
        }
      }
    }
    else if (pcVar18 == pcVar13) goto code_r0x0008258c;
    pcVar21 = pcVar21 + 1;
  } while( true );
  if (pcVar21 + 2 == pcVar13) goto code_r0x0008258c;
  pcVar2 = pcVar21 + -2;
  if (pcVar21[2] != ' ') {
    pcVar2 = pcVar20;
  }
  pcVar20 = pcVar2;
  goto code_r0x00082508;
code_r0x0008258c:
  fVar28 = 0.2;
  if ((pcVar20 != pcVar13) && ((int8)pcVar20 - (int8)pcVar11 != -1)) {
    fVar28 = (float4)strtof(pcVar11 + ((int8)pcVar20 - (int8)pcVar11) + 5,0);
    uVar14 = (uint1)uStack_b0 & 1;
  }
  bVar6 = false;
  bVar7 = true;
  bVar8 = false;
  if (fVar28 < 1.0) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar28)) {
      bVar6 = fVar28 < 0.01;
      bVar7 = fVar28 == 0.01;
      bVar8 = false;
    }
  }
  if (bVar7 || bVar6 != bVar8) {
    fVar28 = 0.2;
  }
  *(float4 *)(iVar3 + 0x164cbc) = fVar28;
code_r0x00082308:
  bVar6 = true;
code_r0x000823f4:
  if (uVar14 != 0) {
    operator_delete_plt(pcStack_a0,uStack_b0 & 0xfffffffffffffffe);
  }
code_r0x000821f8:
  iVar26 = iVar26 + 1;
  if (iStack_8c <= iVar26) goto code_r0x000825f0;
  goto code_r0x00082208;
code_r0x000825f0:
  pxVar23 = pxRam00000000000d3428;
  if (!bVar6) goto code_r0x00082604;
code_r0x00082614:
  iVar10 = (*(code *)*pxVar23)(param_1,0x2d0bf /* "TexCoord0" */);
  if (0xf < iVar10) {
    iVar10 = -1;
  }
  *(int4 *)(iVar3 + 0x164cb8) = iVar10;
  pxVar25 = pxRam00000000000d3228;
  if (*(char *)(iVar3 + 0x164cb5) == '\x01') {
    if (iVar10 < 0) {
      *(xunknown1 *)(iVar3 + 0x164cb5) = 0;
      pxVar25 = pxRam00000000000d3228;
    }
    else {
      iRam0000000000170c6c = iRam0000000000170c6c + 1;
    }
  }
  do {
    iVar10 = (*(code *)*pxVar25)();
  } while (iVar10 != 0);
code_r0x00082670:
  puRam0000000000162880 = puVar24;
  if (*(int8 *)(iVar4 + 0x28) == iStack_78) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x826e8  size=136  HookOf_ShUniformMatrix4fv(int, int, unsigned char, float const*)  [_Z25HookOf_ShUniformMatrix4fviihPKf] */
void HookOf_ShUniformMatrix4fv(int4 param_1,int4 param_2,char param_3,xunknown8 *param_4)

{
  int8 iVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 xVar8;
  xunknown8 xVar9;
  
  (*(code *)*pxRam00000000000d3728)();
  iVar1 = puRam0000000000162880;
  if ((((puRam0000000000162880 != 0) && (param_4 != (xunknown8 *)0x0)) && (param_3 == '\0')) &&
     (((param_2 == 1 && (-1 < param_1)) && (param_1 == *(int4 *)(puRam0000000000162880 + 8))))) {
    xVar5 = param_4[5];
    xVar4 = param_4[4];
    xVar3 = param_4[7];
    xVar2 = param_4[6];
    xVar7 = param_4[1];
    xVar6 = *param_4;
    xVar9 = param_4[3];
    xVar8 = param_4[2];
    *(xunknown1 *)(puRam0000000000162880 + 0x50) = 1;
    *(xunknown8 *)(iVar1 + 0x38) = xVar5;
    *(xunknown8 *)(iVar1 + 0x30) = xVar4;
    *(xunknown8 *)(iVar1 + 0x48) = xVar3;
    *(xunknown8 *)(iVar1 + 0x40) = xVar2;
    *(xunknown8 *)(iVar1 + 0x18) = xVar7;
    *(xunknown8 *)(iVar1 + 0x10) = xVar6;
    *(xunknown8 *)(iVar1 + 0x28) = xVar9;
    *(xunknown8 *)(iVar1 + 0x20) = xVar8;
  }
  return;
}

/* 0x82770  size=96  HookOf_ShBindBuffer(unsigned int, unsigned int)  [_Z19HookOf_ShBindBufferjj] */
void HookOf_ShBindBuffer(int4 param_1,xunknown4 param_2)

{
  xunknown4 *pxVar1;
  
  (*(code *)*pxRam00000000000d3738)();
  if (param_1 == 0x8892) {
    pxVar1 = (xunknown4 *)0x162898;
  }
  else {
    if (param_1 != 0x8893) {
      return;
    }
    pxVar1 = (xunknown4 *)0x16289c;
  }
  *pxVar1 = param_2;
  return;
}

/* 0x827d0  size=140  HookOf_ShVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, void const*)  [_Z28HookOf_ShVertexAttribPointerjijhiPKv] */
void HookOf_ShVertexAttribPointer
               (uint4 param_1,xunknown4 param_2,xunknown4 param_3,xunknown1 param_4,
               xunknown4 param_5,xunknown8 param_6)

{
  int8 iVar1;
  
  (*(code *)*pxRam00000000000d3748)();
  if (param_1 < 0x10) {
    iVar1 = (uint8)param_1 * 0x28;
    *(xunknown4 *)(iVar1 + 0x1628a8) = xRam0000000000162898;
    *(xunknown4 *)(iVar1 + 0x1628ac) = param_2;
    *(xunknown4 *)(iVar1 + 0x1628b0) = param_3;
    *(xunknown1 *)(iVar1 + 0x1628b4) = param_4;
    *(xunknown4 *)(iVar1 + 0x1628b8) = param_5;
    *(xunknown8 *)(iVar1 + 0x1628c0) = param_6;
    *(xunknown1 *)(iVar1 + 0x1628c8) = 1;
  }
  return;
}

/* 0x8285c  size=208  HookOf_ShDeleteBuffers(int, unsigned int const*)  [_Z22HookOf_ShDeleteBuffersiPKj] */
void HookOf_ShDeleteBuffers(uint4 param_1,int8 param_2)

{
  int8 iVar1;
  xunknown8 xVar2;
  int8 iVar3;
  int8 iVar4;
  uint8 uVar5;
  xunknown1 xStack_61;
  int8 iStack_60;
  int8 iStack_58;
  
  xVar2 = xRam00000000000d3708;
  iVar1 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  if ((param_2 != 0) && (0 < (int4)param_1)) {
    uVar5 = (uint8)param_1;
    iVar4 = param_2;
    do {
      iStack_60 = iVar4;
      iVar3 = std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt_1
                        (0x162808,iVar4,xVar2,&iStack_60,&xStack_61);
      uVar5 = uVar5 - 1;
      iVar4 = iVar4 + 4;
      *(int4 *)(iVar3 + 0x14) = *(int4 *)(iVar3 + 0x14) + 1;
    } while (uVar5 != 0);
  }
  (*(code *)*pxRam00000000000d3758)(param_1,param_2);
  if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x8292c  size=240  HookOf_ShBufferData(unsigned int, long, void const*, unsigned int)  [_Z19HookOf_ShBufferDatajlPKvj] */
void HookOf_ShBufferData(uint8 param_1,xunknown8 param_2,xunknown8 param_3,uint8 param_4)

{
  int4 iVar1;
  int8 iVar2;
  int8 iVar3;
  int4 iStack_58;
  xunknown1 xStack_51;
  int4 *piStack_50;
  int8 iStack_48;
  
  iVar2 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar2 + 0x28);
  iVar1 = iRam000000000016289c;
  if ((int4)param_1 != 0x8893) {
    iVar1 = 0;
  }
  iStack_58 = xRam0000000000162898;
  if ((int4)param_1 != 0x8892) {
    iStack_58 = iVar1;
  }
  if (iStack_58 != 0) {
    piStack_50 = &iStack_58;
    param_4 = param_4 & 0xffffffff;
    param_1 = param_1 & 0xffffffff;
    iVar3 = std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt_1
                      (0x162808,&iStack_58,xRam00000000000d3708,&piStack_50,&xStack_51);
    *(int4 *)(iVar3 + 0x14) = *(int4 *)(iVar3 + 0x14) + 1;
  }
  (*(code *)*pxRam00000000000d3768)(param_1,param_2,param_3,param_4);
  if (*(int8 *)(iVar2 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x82a1c  size=256  HookOf_ShBufferSubData(unsigned int, long, long, void const*)  [_Z22HookOf_ShBufferSubDatajllPKv] */
void HookOf_ShBufferSubData(uint8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4)

{
  int4 iVar1;
  int8 iVar2;
  int8 iVar3;
  int4 iStack_58;
  xunknown1 xStack_51;
  int4 *piStack_50;
  int8 iStack_48;
  
  iVar2 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar2 + 0x28);
  iVar1 = iRam000000000016289c;
  if ((int4)param_1 != 0x8893) {
    iVar1 = 0;
  }
  iStack_58 = xRam0000000000162898;
  if ((int4)param_1 != 0x8892) {
    iStack_58 = iVar1;
  }
  if (iStack_58 != 0) {
    piStack_50 = &iStack_58;
    param_1 = param_1 & 0xffffffff;
    iVar3 = std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt_1
                      (0x162808,&iStack_58,xRam00000000000d3708,&piStack_50,&xStack_51);
    iRam0000000000162b40 = iRam0000000000162b40 + 1;
    *(int4 *)(iVar3 + 0x14) = *(int4 *)(iVar3 + 0x14) + 1;
  }
  (*(code *)*pxRam00000000000d3778)(param_1,param_2,param_3,param_4);
  if (*(int8 *)(iVar2 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x82b1c  size=260  HookOf_ShMapBufferRange(unsigned int, long, long, unsigned int)  [_Z23HookOf_ShMapBufferRangejllj] */
void HookOf_ShMapBufferRange(uint8 param_1,xunknown8 param_2,xunknown8 param_3,uint8 param_4)

{
  int4 iVar1;
  int8 iVar2;
  int8 iVar3;
  int4 iStack_58;
  xunknown1 xStack_51;
  int4 *piStack_50;
  int8 iStack_48;
  
  iVar2 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar2 + 0x28);
  iVar1 = iRam000000000016289c;
  if ((int4)param_1 != 0x8893) {
    iVar1 = 0;
  }
  iStack_58 = xRam0000000000162898;
  if ((int4)param_1 != 0x8892) {
    iStack_58 = iVar1;
  }
  if ((((uint4)param_4 >> 1 & 1) != 0) && (iStack_58 != 0)) {
    piStack_50 = &iStack_58;
    param_4 = param_4 & 0xffffffff;
    param_1 = param_1 & 0xffffffff;
    iVar3 = std____ndk1__pair_std____ndk1____hash_iterator_std____ndk1____hash_node____bool__std____ndk1____hash_table_std____ndk1____hash_value_type__std____ndk1____unordered_map_hasher__std____ndk1____unordered_map_equal__std____ndk1__allocator______emplace_unique_key_args_plt_1
                      (0x162808,&iStack_58,xRam00000000000d3708,&piStack_50,&xStack_51);
    iRam0000000000162b40 = iRam0000000000162b40 + 1;
    *(int4 *)(iVar3 + 0x14) = *(int4 *)(iVar3 + 0x14) + 1;
  }
  (*(code *)*pxRam00000000000d3788)(param_1,param_2,param_3,param_4);
  if (*(int8 *)(iVar2 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x82c20  size=80  HookOf_ShBindFramebuffer(unsigned int, unsigned int)  [_Z24HookOf_ShBindFramebufferjj] */
void HookOf_ShBindFramebuffer(int4 param_1,xunknown4 param_2)

{
  (*(code *)*pxRam00000000000d3798)();
  if ((param_1 == 0x8d40) || (param_1 == 0x8ca9)) {
    xRam00000000000d8d24 = param_2;
  }
  return;
}

/* 0x82c70  size=60  HookOf_ShActiveTexture(unsigned int)  [_Z22HookOf_ShActiveTexturej] */
void HookOf_ShActiveTexture(int4 param_1)

{
  (*(code *)*pxRam00000000000d37a8)();
  iRam0000000000162b60 = param_1 + -0x84c0;
  return;
}

/* 0x82cac  size=76  HookOf_ShBindTexture(unsigned int, unsigned int)  [_Z20HookOf_ShBindTexturejj] */
void HookOf_ShBindTexture(int4 param_1,xunknown4 param_2)

{
  (*(code *)*pxRam00000000000d37b8)();
  if ((param_1 == 0xde1) && (iRam0000000000162b60 == 0)) {
    xRam0000000000162b70 = param_2;
  }
  return;
}

/* 0x82cf8  size=52  HookOf_ShDepthMask(unsigned char)  [_Z18HookOf_ShDepthMaskh] */
void HookOf_ShDepthMask(xunknown1 param_1)

{
  (*(code *)*pxRam00000000000d37c8)();
  xRam00000000000d8d28 = param_1;
  return;
}

/* 0x82d2c  size=52  HookOf_ShBindVertexArray(unsigned int)  [_Z24HookOf_ShBindVertexArrayj] */
void HookOf_ShBindVertexArray(xunknown4 param_1)

{
  (*(code *)*pxRam00000000000d37d8)();
  xRam0000000000162b88 = param_1;
  return;
}

/* 0x82d60  size=1068  HookOf_ShDrawElements(unsigned int, int, unsigned int, void const*)  [_Z21HookOf_ShDrawElementsjijPKv] */
void HookOf_ShDrawElements(int4 param_1,xunknown4 param_2,xunknown4 param_3,xunknown8 param_4)

{
  int8 iVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  int8 iVar5;
  uint1 uVar6;
  int4 iVar7;
  uint8 uVar8;
  float4 fVar9;
  float8 fVar10;
  int4 iStack_148;
  xunknown4 xStack_144;
  xunknown4 xStack_140;
  xunknown4 xStack_13c;
  xunknown8 xStack_138;
  int4 iStack_130;
  xunknown8 xStack_128;
  xunknown8 xStack_120;
  xunknown8 xStack_118;
  xunknown8 xStack_110;
  xunknown8 xStack_108;
  int4 iStack_100;
  xunknown8 xStack_fc;
  xunknown8 xStack_f4;
  xunknown8 xStack_ec;
  xunknown8 xStack_e4;
  xunknown8 xStack_dc;
  xunknown8 xStack_d4;
  xunknown8 xStack_cc;
  xunknown8 xStack_c4;
  xunknown1 xStack_bc;
  int4 iStack_b8;
  xunknown8 xStack_b0;
  xunknown8 xStack_a8;
  xunknown8 xStack_a0;
  xunknown8 xStack_98;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  uint1 uStack_80;
  uint1 uStack_7f;
  xunknown4 xStack_7c;
  int8 iStack_78;
  
  iVar3 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar3 + 0x28);
  (*(code *)*pxRam00000000000d37e8)();
  if ((cRam0000000000162b98 != '\x01') || (cRam0000000000162878 == '\0')) goto code_r0x00082e44;
  clock_gettime(1,&iStack_148);
  iVar2 = puRam0000000000162880;
  iVar4 = CONCAT44(xStack_144,iStack_148);
  iVar5 = CONCAT44(xStack_13c,xStack_140);
  iRam0000000000162ba0 = iRam0000000000162ba0 + 1;
  if ((puRam0000000000162880 == 0) ||
     (((0xf < *(uint4 *)(puRam0000000000162880 + 4) || (*(int4 *)(puRam0000000000162880 + 8) < 0))
      || ((*(uint1 *)(puRam0000000000162880 + 0x50) & 1) == 0)))) {
    iRam0000000000162ba8 = iRam0000000000162ba8 + 1;
    goto code_r0x00082e44;
  }
  if (*(char *)(puRam0000000000162880 + 0xc) == '\x01') {
    iRam0000000000162bb0 = iRam0000000000162bb0 + 1;
    goto code_r0x00082e44;
  }
  if (xRam00000000000d8d28 == '\0') {
    iRam0000000000162bb8 = iRam0000000000162bb8 + 1;
    goto code_r0x00082e44;
  }
  if (((cRam0000000000162bc0 == '\x01') && (iVar7 = scene__SceneFbo_plt(), iVar7 != 0)) &&
     (xRam00000000000d8d24 != iVar7)) {
    iStack_148 = 0;
    (*(code *)*pxRam00000000000d3208)(0x8ca6,&iStack_148);
    xRam00000000000d8d24 = iStack_148;
    if (iStack_148 != iVar7) {
      iRam0000000000162bc8 = iRam0000000000162bc8 + 1;
      goto code_r0x00082e44;
    }
  }
  if (xRam0000000000162b88 != 0) {
    iRam0000000000162bd0 = iRam0000000000162bd0 + 1;
    goto code_r0x00082e44;
  }
  iVar1 = (int8)*(int4 *)(iVar2 + 4) * 0x28;
  if (((*(char *)(iVar1 + 0x1628c8) != '\x01') || (*(int4 *)(iVar1 + 0x1628a8) == 0)) ||
     (iRam000000000016289c == 0)) {
    iRam0000000000162bd8 = iRam0000000000162bd8 + 1;
    goto code_r0x00082e44;
  }
  if ((uint8)((iRam0000000000162728 - iRam0000000000162720 >> 4) * 0x4ec4ec4ec4ec4ec5) >> 4 < 0x177)
  {
    xStack_120 = *(xunknown8 *)(iVar1 + 0x1628b0);
    xStack_128 = *(xunknown8 *)(iVar1 + 0x1628a8);
    xStack_110 = *(xunknown8 *)(iVar1 + 0x1628c0);
    xStack_118 = *(xunknown8 *)(iVar1 + 0x1628b8);
    xStack_108 = *(xunknown8 *)(iVar1 + 0x1628c8);
    iStack_130 = iRam000000000016289c;
    xStack_f4 = *(xunknown8 *)(iVar2 + 0x18);
    xStack_fc = *(xunknown8 *)(iVar2 + 0x10);
    xStack_e4 = *(xunknown8 *)(iVar2 + 0x28);
    xStack_ec = *(xunknown8 *)(iVar2 + 0x20);
    xStack_d4 = *(xunknown8 *)(iVar2 + 0x38);
    xStack_dc = *(xunknown8 *)(iVar2 + 0x30);
    xStack_c4 = *(xunknown8 *)(iVar2 + 0x48);
    xStack_cc = *(xunknown8 *)(iVar2 + 0x40);
    xStack_a8 = 0;
    xStack_b0 = 0;
    xStack_98 = 0;
    xStack_a0 = 0;
    xStack_bc = 0;
    iStack_b8 = 0;
    xStack_90 = 0;
    xStack_88 = *(xunknown8 *)(iVar2 + 0x58);
    iStack_148 = param_1;
    xStack_144 = param_3;
    xStack_140 = param_2;
    xStack_138 = param_4;
    iStack_100 = *(int4 *)(iVar2 + 4);
    uVar8 = wind__InTree_plt();
    uStack_80 = (uint1)uVar8 & 1;
    uVar6 = wind__DrawKind_plt();
    uStack_7f = uVar6;
    xStack_7c = wind__DrawId_plt();
    if (4 < uVar6) {
      uStack_7f = 0;
    }
    uVar6 = *(uint1 *)(iVar2 + 0x51);
    fVar9 = *(float4 *)(iVar2 + 0x58);
    if ((((uVar6 & 1) == 0) && (piRam0000000000162be0 != (int4 *)0x0)) &&
       (pfRam0000000000162be8 != (float4 *)0x0)) {
      if (((-1 < *(int4 *)(iVar2 + 0x54)) && (*piRam0000000000162be0 - 0x204U < 3)) &&
         ((fVar9 = *pfRam0000000000162be8, 0.0 <= fVar9 && (fVar9 < 1.0)))) {
        if (fVar9 <= 0.01) {
          fVar9 = 0.01;
        }
        iRam0000000000162bf0 = iRam0000000000162bf0 + 1;
        uVar6 = 1;
        goto code_r0x000830b4;
      }
    }
    else {
code_r0x000830b4:
      if ((uVar6 != 0) && (cRam0000000000162bf8 != '\0')) {
        iVar2 = (int8)*(int4 *)(iVar2 + 0x54) * 0x28;
        if ((*(char *)(iVar2 + 0x1628c8) == '\x01') &&
           ((*(int4 *)(iVar2 + 0x1628a8) != 0 && (xRam0000000000162b70 != 0)))) {
          xStack_a8 = *(xunknown8 *)(iVar2 + 0x1628b0);
          xStack_b0 = *(xunknown8 *)(iVar2 + 0x1628a8);
          xStack_98 = *(xunknown8 *)(iVar2 + 0x1628c0);
          xStack_a0 = *(xunknown8 *)(iVar2 + 0x1628b8);
          xStack_90 = *(xunknown8 *)(iVar2 + 0x1628c8);
          iStack_b8 = xRam0000000000162b70;
          xStack_bc = 1;
          xStack_88 = CONCAT44(xStack_88._4_4_,fVar9);
        }
      }
    }
    FUN_00083204(&iStack_148);
    iRam0000000000162c00 = iRam0000000000162c00 + 1;
    iRam0000000000162c08 = iRam0000000000162c08 + (uVar8 & 1);
  }
  fVar10 = (float8)FUN_0008318c();
  fRam0000000000162c10 =
       fRam0000000000162c10 + (fVar10 - ((float8)iVar5 / 1000.0 + (float8)iVar4 * 1000000.0));
code_r0x00082e44:
  if (*(int8 *)(iVar3 + 0x28) == iStack_78) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x90cc4  size=156  HookOf_RqSelect(char**)  [_Z15HookOf_RqSelectPPc] */
void HookOf_RqSelect(xunknown8 *param_1)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  xunknown8 xVar3;
  
  if ((uRam00000000001710e0 & 1) == 0) {
    uRam00000000001710e0 = 1;
    boot__Step_plt(0x3cf3b /* "first render target select" */);
  }
  xVar3 = *(xunknown8 *)*param_1;
  (*(code *)*pxRam00000000000d37f8)();
  pxVar2 = xRam00000000001710c8;
  pxVar1 = xRam00000000001710c0;
  if ((xRam00000000001710b8 & 1) == 0) {
    for (; pxVar1 != pxVar2; pxVar1 = pxVar1 + 1) {
      (*(code *)*pxVar1)(xVar3);
    }
  }
  return;
}

/* 0x9109c  size=236  HookOf_FrRenderScene(bool)  [_Z20HookOf_FrRenderSceneb] */
void HookOf_FrRenderScene(uint4 param_1)

{
  int4 iVar1;
  bool bVar2;
  uint8 uVar3;
  
  iVar1 = iRam0000000000171108 + 1;
  bVar2 = iRam0000000000171108 == 0;
  iRam0000000000171108 = iVar1;
  if (bVar2) {
    boot__Step_plt(0x382fc /* "first RenderScene" */);
  }
  if (((uRam000000000017110c & 1) == 0) && (0xef < iRam0000000000171108)) {
    uRam000000000017110c = 1;
    boot__Reached_plt();
  }
  boot__G_plt(0x27658 /* "RenderScene" */);
  if (((uRam0000000000171130 & 1) == 0) && (uVar3 = rq__Ready_plt(), (uVar3 & 1) != 0)) {
    uRam0000000000171130 = 1;
    rq__Describe_plt(xRam0000000000171128);
  }
  rq__Post_plt(1,0);
  (*(code *)*pxRam00000000000d3808)(param_1 & 1);
  if (((uRam0000000000171130 & 1) == 0) && (uVar3 = rq__Ready_plt(), (uVar3 & 1) != 0)) {
    uRam0000000000171130 = 1;
    rq__Describe_plt(xRam0000000000171128);
  }
  rq__Post_plt(2,0);
                    /* WARNING: Could not recover jumptable at 0x000ca35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4110)(0x296c5 /* "after RenderScene" */);
  return;
}

/* 0x91188  size=200  HookOf_FrMobileRender()  [_Z21HookOf_FrMobileRenderv] */
void HookOf_FrMobileRender(void)

{
  xunknown8 *pxVar1;
  uint8 uVar2;
  xunknown8 *pxVar3;
  
  pxVar1 = pxRam00000000001710f0;
  for (pxVar3 = pxRam00000000001710e8; pxVar3 != pxVar1; pxVar3 = pxVar3 + 1) {
    (*(code *)*pxVar3)();
  }
  boot__G_plt(0x3497b /* "MobileRender" */);
  if (((uRam0000000000171130 & 1) == 0) && (uVar2 = rq__Ready_plt(), (uVar2 & 1) != 0)) {
    uRam0000000000171130 = 1;
    rq__Describe_plt(xRam0000000000171128);
  }
  rq__Post_plt(3,0);
  (*(code *)*pxRam00000000000d3818)();
  if (((uRam0000000000171130 & 1) == 0) && (uVar2 = rq__Ready_plt(), (uVar2 & 1) != 0)) {
    uRam0000000000171130 = 1;
    rq__Describe_plt(xRam0000000000171128);
  }
  rq__Post_plt(4,0);
  boot__GameFrame_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4110)(0x34fc5 /* "after MobileRender (HUD / game logic)" */);
  return;
}

/* 0x91250  size=132  HookOf_FrEndOfFrame(bool)  [_Z19HookOf_FrEndOfFrameb] */
void HookOf_FrEndOfFrame(uint4 param_1)

{
  uint8 uVar1;
  
  if ((uRam0000000000171120 & 1) == 0) {
    uRam0000000000171120 = 1;
    boot__Step_plt(0x3fa4f /* "first end of frame (loading screen)" */);
  }
  boot__Menu_plt();
  if (((uRam0000000000171130 & 1) == 0) && (uVar1 = rq__Ready_plt(), (uVar1 & 1) != 0)) {
    uRam0000000000171130 = 1;
    rq__Describe_plt(xRam0000000000171128);
  }
  rq__Post_plt(5,0);
                    /* WARNING: Could not recover jumptable at 0x000912d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxRam00000000000d3828)(param_1 & 1);
  return;
}

/* 0x91618  size=88  HookOf_SceneBindTexture(unsigned int, unsigned int)  [_Z23HookOf_SceneBindTexturejj] */
void HookOf_SceneBindTexture(int4 param_1,uint8 param_2)

{
  if (((((int4)param_2 != 0) && ((uRam0000000000171140 & 1) != 0)) && (param_1 == 0xde1)) &&
     (((int4)param_2 == iRam0000000000171144 && (uRam0000000000171148 != 0)))) {
    param_2 = (uint8)uRam0000000000171148;
    iRam0000000000171150 = iRam0000000000171150 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0009166c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxRam00000000000d3838)(param_1,param_2);
  return;
}

/* 0x92a24  size=140  HookOf_TrClear(char**)  [_Z14HookOf_TrClearPPc] */
void HookOf_TrClear(xunknown8 *param_1)

{
  xunknown4 xVar1;
  int8 iVar2;
  xunknown1 axStack_68 [64];
  int8 iStack_28;
  
  iVar2 = tpidr_el0;
  iStack_28 = *(int8 *)(iVar2 + 0x28);
  xVar1 = *(xunknown4 *)*param_1;
  (*(code *)*pxRam00000000000d3848)();
  if (iRam00000000001711e0 == 1) {
    FUN_00092ab0(axStack_68,0x40,0x40,0x4036f /* "rqTargetClear flags %X" */,xVar1);
    FUN_00092b54(axStack_68);
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_28) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x92e3c  size=64  HookOf_TrViewport(char**)  [_Z17HookOf_TrViewportPPc] */
void HookOf_TrViewport(void)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  uint8 *puVar3;
  uint8 *puVar4;
  uint8 uVar5;
  xunknown8 xVar6;
  uint8 uVar7;
  uint8 uStack_1d0;
  uint8 uStack_1c8;
  uint8 uStack_1c0;
  xunknown8 xStack_1b8;
  xunknown8 xStack_1b0;
  xunknown1 axStack_b8 [96];
  int8 iStack_58;
  
  (*(code *)*pxRam00000000000d3858)();
  pxVar2 = pxRam00000000000d3208;
  if (iRam00000000001711e0 != 1) {
    return;
  }
  iVar1 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,0xffffffff);
  xStack_1b8 = 0;
  xStack_1b0 = 0;
  (*(code *)*pxRam00000000000d3208)(0x8ca6,&uStack_1d0);
  (*(code *)*pxVar2)(0xba2,&xStack_1b8);
  FUN_00092ab0(axStack_b8,0x60,0x60,0x38350 /* "fbo %d vp %dx%d@%d,%d" */,uStack_1d0 & 0xffffffff,xStack_1b0 & 0xffffffff,
               xStack_1b0._4_4_,xStack_1b8 & 0xffffffff,xStack_1b8._4_4_);
  if (iRam00000000001711f8 == 0) {
code_r0x00092cdc:
    FUN_00092ab0(&xStack_1b8,0x100,0x100,0x41388 /* "   %-34s | %s" */,0x2eafe /* "rqTargetViewport" */,axStack_b8);
    uVar5 = strlen(&xStack_1b8);
    if (uVar5 < 0xfffffffffffffff0) {
      if (uVar5 < 0x17) {
        uVar7 = (uint8)&uStack_1d0 | 1;
        uStack_1d0 = CONCAT71(uStack_1d0._1_7_,(char)((int4)uVar5 << 1));
        if (uVar5 != 0) goto code_r0x00092d4c;
      }
      else {
        uVar7 = operator_new_plt((uVar5 | 0xf) + 1);
        uStack_1d0 = (uVar5 | 0xf) + 2;
        uStack_1c8 = uVar5;
        uStack_1c0 = uVar7;
code_r0x00092d4c:
        memcpy(uVar7,&xStack_1b8,uVar5);
      }
      puVar4 = puRam00000000001711d0;
      puVar3 = puRam00000000001711c8;
      *(xunknown1 *)(uVar7 + uVar5) = 0;
      if (puVar3 < puVar4) {
        puVar3[2] = uStack_1c0;
        puRam00000000001711c8 = puVar3 + 3;
        puVar3[1] = uStack_1c8;
        *puVar3 = uStack_1d0;
      }
      else {
        puRam00000000001711c8 =
             (uint8 *)std____ndk1__basic_string__std____ndk1__vector_std____ndk1__basic_string__std____ndk1__allocator_std____ndk1__basic_string________push_back_slow_path_std____ndk1__basic_string_plt
                                (0x1711c0,&uStack_1d0);
        if ((uStack_1d0 & 1) != 0) {
          operator_delete_plt(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
        }
      }
      if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
        return;
      }
      goto code_r0x00092e38;
    }
  }
  else {
    FUN_00092ab0(&xStack_1b8,0x100,0x100,0x2abab /* "      ... %d draws" */);
    uVar5 = strlen(&xStack_1b8);
    if (uVar5 < 0xfffffffffffffff0) {
      if (uVar5 < 0x17) {
        uVar7 = (uint8)&uStack_1d0 | 1;
        uStack_1d0 = CONCAT71(uStack_1d0._1_7_,(char)((int4)uVar5 << 1));
        if (uVar5 != 0) goto code_r0x00092c68;
      }
      else {
        uVar7 = operator_new_plt((uVar5 | 0xf) + 1);
        uStack_1d0 = (uVar5 | 0xf) + 2;
        uStack_1c8 = uVar5;
        uStack_1c0 = uVar7;
code_r0x00092c68:
        memcpy(uVar7,&xStack_1b8,uVar5);
      }
      puVar4 = puRam00000000001711d0;
      puVar3 = puRam00000000001711c8;
      *(xunknown1 *)(uVar7 + uVar5) = 0;
      if (puVar3 < puVar4) {
        puVar3[2] = uStack_1c0;
        puRam00000000001711c8 = puVar3 + 3;
        puVar3[1] = uStack_1c8;
        *puVar3 = uStack_1d0;
      }
      else {
        puRam00000000001711c8 =
             (uint8 *)std____ndk1__basic_string__std____ndk1__vector_std____ndk1__basic_string__std____ndk1__allocator_std____ndk1__basic_string________push_back_slow_path_std____ndk1__basic_string_plt
                                (0x1711c0,&uStack_1d0);
        if ((uStack_1d0 & 1) != 0) {
          operator_delete_plt(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
        }
      }
      iRam00000000001711f8 = 0;
      goto code_r0x00092cdc;
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
    xVar6 = FUN_000664d4(&uStack_1d0);
    if ((uStack_1d0 & 1) != 0) {
      operator_delete_plt(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
    }
    if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
      FUN_000c5688(xVar6);
    }
  }
code_r0x00092e38:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x92e7c  size=64  HookOf_TrDrawIdx(char**)  [_Z16HookOf_TrDrawIdxPPc] */
void HookOf_TrDrawIdx(void)

{
  (*(code *)*pxRam00000000000d3868)();
  if (iRam00000000001711e0 == 1) {
    iRam00000000001711f8 = iRam00000000001711f8 + 1;
  }
  return;
}

/* 0x92ebc  size=64  HookOf_TrDrawNon(char**)  [_Z16HookOf_TrDrawNonPPc] */
void HookOf_TrDrawNon(void)

{
  (*(code *)*pxRam00000000000d3878)();
  if (iRam00000000001711e0 == 1) {
    iRam00000000001711f8 = iRam00000000001711f8 + 1;
  }
  return;
}

