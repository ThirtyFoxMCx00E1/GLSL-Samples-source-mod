/* module: shaders  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x73c00  size=1640  shaders::Install(void (*)(bool, char const*, ...), char const*, shaders::Settings const&)  [_ZN7shaders7InstallEPFvbPKczES1_RKNS_8SettingsE] */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shaders__Install(code *param_1,xunknown8 param_2,uint8 *param_3)

{
  xunknown8 xVar1;
  int8 iVar2;
  xunknown8 *pxVar3;
  bool bVar4;
  xunknown8 xVar5;
  int8 iVar6;
  int8 *piVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint8 uVar10;
  uint8 uVar11;
  uint8 uVar12;
  xunknown4 xVar13;
  uint8 uStack_80;
  uint8 uStack_78;
  uint8 uStack_70;
  int8 iStack_68;
  
  iVar2 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar2 + 0x28);
  pcRam000000000010bf60 = param_1;
  xVar5 = std____ndk1__basic_string__assign_plt(&uRam000000000010bee0);
  register0x00005008 = param_3[1];
  _cRam00000000000d8bc8 = *param_3;
  _uRam00000000000d8c00 = param_3[7];
  xRam00000000000d8bf8 = param_3[6];
  register0x00005008 = param_3[9];
  register_d0 = param_3[8];
  xRam00000000000d8be0 = param_3[3];
  xRam00000000000d8bd8 = param_3[2];
  _xRam00000000000d8bf0 = param_3[5];
  xRam00000000000d8be8 = param_3[4];
  uRam00000000000d8c30 = param_3[0xd];
  xRam00000000000d8c28 = param_3[0xc];
  uVar8 = param_3[0xf];
  xRam00000000000d8c4e = *(xunknown8 *)((int8)param_3 + 0x86);
  register0x00005068 = param_3[0xb];
  _xRam00000000000d8c18 = param_3[10];
  Ram00000000000d8c48 = (unkbyte6)((uint8)*(xunknown8 *)((int8)param_3 + 0x7e) >> 0x10);
  xRam00000000000d8c40 = (float4)uVar8;
  xRam00000000000d8c44 = (xunknown1)(uVar8 >> 0x20);
  uRam00000000000d8c45 = (uint1)(uVar8 >> 0x28);
  xRam00000000000d8c46 = (xunknown2)(uVar8 >> 0x30);
  xRam00000000000d8c38._0_4_ = (xunknown4)param_3[0xe];
  xRam00000000000d8c38._4_4_ = (float4)(param_3[0xe] >> 0x20);
  if (((*param_3 & 1) == 0) && ((*(uint1 *)((int8)param_3 + 0x8c) & 1) == 0)) {
    (*pcRam000000000010bf60)(0,0x2bbdd /* "world: off ([World] Enable = 0)" */);
  }
  else {
    if (*(uint1 *)((int8)param_3 + 0x8c) != 0) {
      uVar9 = (uint8)uRam000000000010bee0;
      bVar4 = (uRam000000000010bee0 & 1) == 0;
      uVar8 = (uint8)(uRam000000000010bee0 >> 1);
      if (!bVar4) {
        uVar8 = uRam000000000010bee8;
      }
      if (uVar8 != 0) {
        uVar11 = 1;
        uVar12 = (uint8)&uStack_80 | 1;
        uVar10 = uRam000000000010bee8;
        do {
          iVar6 = 0x10bee1;
          if (!bVar4) {
            iVar6 = xRam000000000010bef0;
          }
          if ((uVar11 == uVar8) || (*(char *)(iVar6 + uVar11) == '/')) {
            if (0xffffffffffffffef < uVar11) {
              if (*(int8 *)(iVar2 + 0x28) == iStack_68) {
                xVar5 = FUN_000664d4(&uStack_80);
              }
              goto code_r0x00074264;
            }
            if (uVar11 < 0x17) {
              uStack_80 = CONCAT71(uStack_80._1_7_,(char)((int4)uVar11 << 1));
              uVar8 = uVar12;
              if (uVar11 != 0) goto code_r0x00073d68;
            }
            else {
              uVar8 = operator_new_plt((uVar11 | 0xf) + 1);
              uStack_80 = (uVar11 | 0xf) + 2;
              uStack_78 = uVar11;
              uStack_70 = uVar8;
code_r0x00073d68:
              memmove(uVar8,iVar6,uVar11);
            }
            uVar10 = uStack_70;
            uVar9 = uStack_80;
            *(xunknown1 *)(uVar8 + uVar11) = 0;
            uVar8 = uVar12;
            if ((uStack_80 & 1) != 0) {
              uVar8 = uStack_70;
            }
            xVar5 = mkdir(uVar8,0x1fd);
            if ((uVar9 & 1) != 0) {
              xVar5 = operator_delete_plt(uVar10,uStack_80 & 0xfffffffffffffffe);
            }
            uVar9 = (uint8)uRam000000000010bee0;
            uVar10 = uRam000000000010bee8;
          }
          bVar4 = (uVar9 & 1) == 0;
          uVar11 = uVar11 + 1;
          uVar8 = uVar9 >> 1;
          if (!bVar4) {
            uVar8 = uVar10;
          }
        } while (uVar11 <= uVar8);
      }
    }
    pxVar3 = pxRam00000000000d31f8;
    iVar6 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    if ((iVar6 == 0) ||
       (piVar7 = (int8 *)*pxVar3, iVar6 = (**(code **)(*piVar7 + 0x28))(piVar7,iVar6,0x2d668 /* "_ZN8RQShader11BuildSourceEjPPKcS2_" */),
       iVar6 == 0)) {
      (*pcRam000000000010bf60)(1,0x39c49 /* "world: RQShader::BuildSource missing - off" */);
      xVar5 = 0;
      goto code_r0x00073ef8;
    }
    boot__PrologueOk_plt(iVar6,0x2d668 /* "_ZN8RQShader11BuildSourceEjPPKcS2_" */,0x23a66 /* "hooked anyway (used since 0.7)" */);
    piVar7 = (int8 *)*pxVar3;
    (**(code **)(*piVar7 + 0x30))(piVar7,iVar6,xRam00000000000d3660,pxRam00000000000d3668);
    if (((uint1)*param_3 == 1) &&
       (((((((*(uint1 *)((int8)param_3 + 0x2c) & 1) != 0 || ((param_3[7] & 1) != 0)) ||
           ((*(uint1 *)((int8)param_3 + 0x5c) & 1) != 0)) ||
          ((0.0 < *(float4 *)(param_3 + 0xe) || (0.0 < *(float4 *)((int8)param_3 + 0x74))))) ||
         (0.0 < *(float4 *)(param_3 + 0xf))) &&
        (uVar8 = timeuni__Install_plt(pcRam000000000010bf60), (uVar8 & 1) == 0)))) {
      _xRam00000000000d8bf0 = (unkuint5)xRam00000000000d8bf0;
      _uRam00000000000d8c00 = _uRam00000000000d8c00 & 0xffffffffffffff00;
      ram0x000d8c20 = (unkuint5)xRam00000000000d8c1c._4_4_;
      (*pcRam000000000010bf60)(1,0x39364 /* "world: wind + water + wet roads off (no per-frame uniforms)" */);
    }
    timeuni__SetWetForce_plt((int4)param_3[0xd]);
    if (((_uRam00000000000d8c00 & 1) == 0) && ((ram0x000d8c20 & 0x100000000) == 0)) {
      uRam00000000000d8c45 = 0;
    }
    xVar13 = (xunknown4)param_3[0x10];
    if ((cRam00000000000d8bc8 & uRam00000000000d8c45 & 1) == 0) {
      xVar13 = 0;
    }
    timeuni__SetSsr_plt(xVar13);
    timeuni__SetSsrDebug_plt(*(uint1 *)((int8)param_3 + 0x8d));
    if ((*(uint1 *)((int8)param_3 + 0x8d) == 1) && ((uRam00000000000d8c45 & 1) != 0)) {
      (*pcRam000000000010bf60)(0,0x3a8af /* "world: [Debug] SSRView on - wet ground / water show what SSR found: GR..." */);
    }
    if (((cRam00000000000d8bc8 == '\x01') && ((_xRam00000000000d8bf0 & 0x100000000) != 0)) &&
       (uVar8 = wind__Install_plt((int4)param_3[6],pcRam000000000010bf60), (uVar8 & 1) == 0)) {
      _xRam00000000000d8bf0 = (unkuint5)xRam00000000000d8bf0;
    }
    uVar8 = _cRam00000000000d8bc8 & 0xff;
    if ((cRam00000000000d8bc8 == '\x01') && ((_uRam00000000000d8c00 & 1) != 0)) {
      if ((0.0 < *(float4 *)((int8)param_3 + 0x54)) ||
         ((0.0 < *(float4 *)(param_3 + 0xb) || (0.0 < *(float4 *)((int8)param_3 + 0x4c))))) {
        waterbake__Install_plt(pcRam000000000010bf60);
        uVar8 = _cRam00000000000d8bc8 & 0xff;
      }
      else {
        uVar8 = 1;
      }
    }
    if (((uVar8 & 1) != 0) && ((ram0x000d8c20 & 0x100000000) != 0)) {
      ripples__Install_plt(*(xunknown4 *)((int8)param_3 + 0x6c),pcRam000000000010bf60);
    }
    xVar5 = 0x3721d;
    if ((uint1)*param_3 == 0) {
      xVar5 = 0x2c0b8;
    }
    xVar1 = 0x23a85 /* " - dumping vanilla shaders" */;
    if (*(uint1 *)((int8)param_3 + 0x8c) == 0) {
      xVar1 = 0x29893;
    }
    (*pcRam000000000010bf60)
              ((float8)*(float4 *)((int8)param_3 + 4),(float8)*(float4 *)(param_3 + 1),0,0x373f7 /* "world: shader rewrite %s - mip bias %.2f (alpha-tested %.2f, game -0.5..." */,
               xVar5,*(uint1 *)((int8)param_3 + 0xc),xVar1);
    (*pcRam000000000010bf60)
              ((float8)*(float4 *)(param_3 + 2),(float8)*(float4 *)((int8)param_3 + 0x14),
               (float8)*(float4 *)(param_3 + 3),(float8)*(float4 *)((int8)param_3 + 0x1c),
               (float8)*(float4 *)(param_3 + 4),(float8)*(float4 *)(param_3 + 6),0,0x36436 /* "world: vehicle paint %d - Fresnel %.2f, specular %.2f, gloss %.0f, met..." */,
               *(uint1 *)((int8)param_3 + 0xd),*(uint1 *)((int8)param_3 + 0x2c));
    xVar5 = 0x4060b /* " | [Debug] WaterView ON: water = depth bands (red 1 m stripes, green 0..." */;
    if ((uint1)param_3[10] == 0) {
      xVar5 = 0x29893;
    }
    (*pcRam000000000010bf60)
              ((float8)*(float4 *)((int8)param_3 + 0x3c),(float8)*(float4 *)(param_3 + 8),
               (float8)*(float4 *)((int8)param_3 + 0x44),(float8)*(float4 *)(param_3 + 9),
               (float8)*(float4 *)((int8)param_3 + 0x4c),(float8)*(float4 *)((int8)param_3 + 0x54),
               (float8)*(float4 *)(param_3 + 0xb),0,0x299b9 /* "world: water %d - reflection %.2f, waves %.2f, sun glint %.2f, depth c..." */,_uRam00000000000d8c00 & 0xff,xVar5);
    xVar5 = 0x2adf3 /* " - FORCED wet (testing: [Wet] Force)" */;
    if (*(float4 *)(param_3 + 0xd) <= 0.0) {
      xVar5 = 0x3f4da /* " - follows the game's rain (CWeather::WetRoads)" */;
    }
    (*pcRam000000000010bf60)
              ((float8)*(float4 *)(param_3 + 0xc),(float8)*(float4 *)((int8)param_3 + 100),
               (float8)*(float4 *)((int8)param_3 + 0x6c),0,0x30ff6 /* "world: wet roads %d - reflection %.2f, puddles %.2f, rain ripples %.2f..." */,xRam00000000000d8c24,xVar5);
    (*pcRam000000000010bf60)((float8)*(float4 *)(param_3 + 0xe),0,0x32483 /* "world: relief %.2f - bumps from the diffuse texture's luminance on wal..." */);
    if (((cRam00000000000d8bc8 == '\x01') &&
        ((0.0 < *(float4 *)((int8)param_3 + 0x74) || (0.0 < *(float4 *)(param_3 + 0xf))))) &&
       ((uVar8 = timeuni__EnableMaterial_plt(), (uVar8 & 1) == 0 ||
        (uVar8 = material__Install_plt(pcRam000000000010bf60), (uVar8 & 1) == 0)))) {
      xRam00000000000d8c38._4_4_ = 0.0;
      xRam00000000000d8c40 = 0.0;
    }
    xVar5 = 0x2a1ce /* " | [Debug] SurfaceView ON: glass CYAN, metal ORANGE" */;
    if (*(uint1 *)((int8)param_3 + 0x7c) == 0) {
      xVar5 = 0x29893;
    }
    (*pcRam000000000010bf60)
              ((float8)xRam00000000000d8c38._4_4_,(float8)xRam00000000000d8c40,0,0x3433b /* "world: glass %.2f, metal %.2f - sky reflection + sun glint on the stat..." */,xVar5);
    if (uRam00000000000d8c45 == 1) {
      (*pcRam000000000010bf60)
                ((float8)*(float4 *)(param_3 + 0x10),0,0x35348 /* "world: SSR on - strength %.2f, water %d, wet ground %d, %d steps (trac..." */,*(uint1 *)((int8)param_3 + 0x84),
                 *(uint1 *)((int8)param_3 + 0x85),(int4)param_3[0x11]);
    }
    else {
      xVar5 = 0x2de12 /* " (needs [Water] or [Wet])" */;
      if (*(uint1 *)((int8)param_3 + 0x7d) == 0) {
        xVar5 = 0x3fd6c /* " ([SSR] Enable = 0)" */;
      }
      (*pcRam000000000010bf60)(0,0x3254d /* "world: SSR off%s" */,xVar5);
    }
  }
  xVar5 = 1;
code_r0x00073ef8:
  if (*(int8 *)(iVar2 + 0x28) == iStack_68) {
    return;
  }
code_r0x00074264:
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar5);
  return;
}

