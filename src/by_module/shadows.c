/* module: shadows  (4 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x83404  size=1956  shadows::Install(void (*)(bool, char const*, ...), shadows::Settings const&)  [_ZN7shadows7InstallEPFvbPKczERKNS_8SettingsE] */
xunknown8 shadows__Install(code *param_1,uint1 *param_2)

{
  bool bVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  int8 iVar4;
  xunknown8 xVar5;
  int8 iVar6;
  int8 iVar7;
  int8 iVar8;
  int8 iVar9;
  int8 iVar10;
  int8 iVar11;
  uint8 uVar12;
  xunknown4 xVar13;
  int8 iVar14;
  int8 iVar15;
  xunknown8 xVar16;
  int8 iVar17;
  float4 fVar18;
  xunknown8 xVar19;
  xunknown8 xVar20;
  xunknown8 xVar21;
  xunknown8 xVar22;
  xunknown8 xVar23;
  
  pxVar3 = pxRam00000000000d31f8;
  xRam00000000000d8d34 = *(xunknown8 *)(param_2 + 8);
  xVar5 = *(xunknown8 *)param_2;
  uRam00000000000d8d44 = *(uint8 *)(param_2 + 0x18);
  xRam00000000000d8d3c = *(xunknown8 *)(param_2 + 0x10);
  xRam00000000000d8d4c = *(xunknown8 *)(param_2 + 0x20);
  xRam00000000000d8d2c._4_4_ = (uint4)((uint8)xVar5 >> 0x20);
  if ((int4)xRam00000000000d8d2c._4_4_ < 0x200) {
    xVar13 = 0x200;
code_r0x00083468:
    xRam00000000000d8d2c = CONCAT44(xVar13,(int4)xVar5);
  }
  else {
    bVar1 = 0x1000 < xRam00000000000d8d2c._4_4_;
    xRam00000000000d8d2c = xVar5;
    if (bVar1) {
      xVar13 = 0x1000;
      goto code_r0x00083468;
    }
  }
  fVar18 = (float4)xRam00000000000d8d34;
  if ((float4)xRam00000000000d8d34 < 10.0) {
    fVar18 = 10.0;
    xRam00000000000d8d34._4_4_ = (float4)((uint8)xRam00000000000d8d34 >> 0x20);
    xRam00000000000d8d34 = CONCAT44(xRam00000000000d8d34._4_4_,0x41200000);
  }
  if (xRam00000000000d8d34._4_4_ < fVar18 * 1.5) {
    xRam00000000000d8d34 = CONCAT44(fVar18 * 1.5,(float4)xRam00000000000d8d34);
  }
  pcRam0000000000162c30 = param_1;
  if ((*param_2 & 1) == 0) {
    xVar16 = 0x23c9c /* "shadows: off ([Shadows] Enable = 0)" */;
    xVar5 = 0;
code_r0x00083914:
    (*pcRam0000000000162c30)(xVar5,xVar16);
    return 0;
  }
  xVar5 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                    ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
  iRam0000000000162c38 = (**(code **)(*(int8 *)*pxVar3 + 0x28))((int8 *)*pxVar3,xVar5,0x23f86 /* "_ZN10CTimeCycle13m_VectorToSunE" */);
  iRam0000000000162c40 = (**(code **)(*(int8 *)*pxVar3 + 0x28))((int8 *)*pxVar3,xVar5,0x2db67 /* "_ZN10CTimeCycle20m_CurrentStoredValueE" */);
  xRam0000000000162c48 = (**(code **)(*(int8 *)*pxVar3 + 0x28))((int8 *)*pxVar3,xVar5,0x2af34 /* "_Z15FindPlayerCoorsi" */);
  xVar16 = 0x30e3f /* "glUseProgram" */;
  iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x30e3f /* "glUseProgram" */);
  if (iVar6 == 0) {
code_r0x0008391c:
    (*pcRam0000000000162c30)(1,0x30b10 /* "shadows: GOT slot for %s not found - off" */,xVar16);
    return 0;
  }
  xVar16 = 0x3a281 /* "glUniformMatrix4fv" */;
  iVar7 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x3a281 /* "glUniformMatrix4fv" */);
  if (iVar7 == 0) goto code_r0x0008391c;
  xVar16 = 0x3987a /* "glBindBuffer" */;
  iVar8 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x3987a /* "glBindBuffer" */);
  if (iVar8 == 0) goto code_r0x0008391c;
  xVar16 = 0x2a647 /* "glVertexAttribPointer" */;
  iVar9 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2a647 /* "glVertexAttribPointer" */);
  if (iVar9 == 0) goto code_r0x0008391c;
  xVar16 = 0x2ec29 /* "glDepthMask" */;
  iVar10 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2ec29 /* "glDepthMask" */);
  if (iVar10 == 0) goto code_r0x0008391c;
  xVar16 = 0x22dee /* "glDrawElements" */;
  iVar11 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x22dee /* "glDrawElements" */);
  if (iVar11 == 0) goto code_r0x0008391c;
  if ((iRam0000000000162c38 == 0) || (iRam0000000000162c40 == 0)) {
    xVar16 = 0x22ac3 /* "shadows: CTimeCycle sun symbols missing - off" */;
    xVar5 = 1;
    goto code_r0x00083914;
  }
  xRam0000000000162c50 = (**(code **)(*(int8 *)*pxVar3 + 0x28))((int8 *)*pxVar3,xVar5,0x3580f /* "_Z28emu_DistanceFogGetParametersv" */);
  piRam0000000000162be0 = (**(code **)(*(int8 *)*pxVar3 + 0x28))((int8 *)*pxVar3,xVar5,0x2eabb /* "_ZZ25RQ_Command_rqSetAlphaTestRPcE7curFunc" */);
  pfRam0000000000162be8 = (**(code **)(*(int8 *)*pxVar3 + 0x28))((int8 *)*pxVar3,xVar5,0x29ddf /* "_ZZ25RQ_Command_rqSetAlphaTestRPcE6curVal" */);
  iVar15 = iRam0000000000162728;
  iVar4 = iRam0000000000162720;
  iVar17 = pxRam0000000000162730 - iRam0000000000162720;
  if ((uint8)((iVar17 >> 4) * 0x4ec4ec4ec4ec4ec5) >> 4 < 0x177) {
    pxRam0000000000162730 = operator_new_plt(0x130b00);
    iRam0000000000162728 = pxRam0000000000162730 + (iVar15 - iVar4);
    pxRam0000000000162730 = pxRam0000000000162730 + 0x130b00;
    iRam0000000000162720 = iRam0000000000162728;
    if (iVar15 - iVar4 != 0) {
      iVar14 = iRam0000000000162728;
      do {
        xVar5 = *(xunknown8 *)(iVar15 + -0xd0);
        iRam0000000000162720 = iVar14 + -0xd0;
        *(xunknown8 *)(iVar14 + -200) = *(xunknown8 *)(iVar15 + -200);
        *(xunknown8 *)(iVar14 + -0xd0) = xVar5;
        xVar19 = *(xunknown8 *)(iVar15 + -0xa0);
        xVar16 = *(xunknown8 *)(iVar15 + -0x88);
        xVar5 = *(xunknown8 *)(iVar15 + -0x90);
        xVar21 = *(xunknown8 *)(iVar15 + -0xb8);
        xVar20 = *(xunknown8 *)(iVar15 + -0xc0);
        xVar23 = *(xunknown8 *)(iVar15 + -0xa8);
        xVar22 = *(xunknown8 *)(iVar15 + -0xb0);
        *(xunknown8 *)(iVar14 + -0x98) = *(xunknown8 *)(iVar15 + -0x98);
        *(xunknown8 *)(iVar14 + -0xa0) = xVar19;
        *(xunknown8 *)(iVar14 + -0x88) = xVar16;
        *(xunknown8 *)(iVar14 + -0x90) = xVar5;
        *(xunknown8 *)(iVar14 + -0xb8) = xVar21;
        *(xunknown8 *)(iVar14 + -0xc0) = xVar20;
        *(xunknown8 *)(iVar14 + -0xa8) = xVar23;
        *(xunknown8 *)(iVar14 + -0xb0) = xVar22;
        xVar19 = *(xunknown8 *)(iVar15 + -0x60);
        xVar16 = *(xunknown8 *)(iVar15 + -0x48);
        xVar5 = *(xunknown8 *)(iVar15 + -0x50);
        xVar21 = *(xunknown8 *)(iVar15 + -0x78);
        xVar20 = *(xunknown8 *)(iVar15 + -0x80);
        xVar23 = *(xunknown8 *)(iVar15 + -0x68);
        xVar22 = *(xunknown8 *)(iVar15 + -0x70);
        *(xunknown8 *)(iVar14 + -0x58) = *(xunknown8 *)(iVar15 + -0x58);
        *(xunknown8 *)(iVar14 + -0x60) = xVar19;
        *(xunknown8 *)(iVar14 + -0x48) = xVar16;
        *(xunknown8 *)(iVar14 + -0x50) = xVar5;
        *(xunknown8 *)(iVar14 + -0x78) = xVar21;
        *(xunknown8 *)(iVar14 + -0x80) = xVar20;
        *(xunknown8 *)(iVar14 + -0x68) = xVar23;
        *(xunknown8 *)(iVar14 + -0x70) = xVar22;
        pxVar2 = (xunknown8 *)(iVar15 + -0x18);
        xVar19 = *(xunknown8 *)(iVar15 + -0x20);
        xVar16 = *(xunknown8 *)(iVar15 + -8);
        xVar5 = *(xunknown8 *)(iVar15 + -0x10);
        xVar21 = *(xunknown8 *)(iVar15 + -0x38);
        xVar20 = *(xunknown8 *)(iVar15 + -0x40);
        xVar23 = *(xunknown8 *)(iVar15 + -0x28);
        xVar22 = *(xunknown8 *)(iVar15 + -0x30);
        iVar15 = iVar15 + -0xd0;
        *(xunknown8 *)(iVar14 + -0x18) = *pxVar2;
        *(xunknown8 *)(iVar14 + -0x20) = xVar19;
        *(xunknown8 *)(iVar14 + -8) = xVar16;
        *(xunknown8 *)(iVar14 + -0x10) = xVar5;
        *(xunknown8 *)(iVar14 + -0x38) = xVar21;
        *(xunknown8 *)(iVar14 + -0x40) = xVar20;
        *(xunknown8 *)(iVar14 + -0x28) = xVar23;
        *(xunknown8 *)(iVar14 + -0x30) = xVar22;
        iVar14 = iRam0000000000162720;
      } while (iVar15 != iVar4);
    }
    if (iVar4 != 0) {
      operator_delete_plt(iVar4,iVar17);
    }
  }
  rq__Listen_plt(1,FUN_00083ba8);
  rq__Listen_plt(5,FUN_00083f84);
  rq__Listen_plt(2,FUN_00083f98);
  (**(code **)(*(int8 *)*pxVar3 + 0x38))
            ((int8 *)*pxVar3,iVar6,xRam00000000000d3710,pxRam00000000000d3718);
  (**(code **)(*(int8 *)*pxVar3 + 0x38))
            ((int8 *)*pxVar3,iVar7,xRam00000000000d3720,pxRam00000000000d3728);
  (**(code **)(*(int8 *)*pxVar3 + 0x38))
            ((int8 *)*pxVar3,iVar8,xRam00000000000d3730,pxRam00000000000d3738);
  (**(code **)(*(int8 *)*pxVar3 + 0x38))
            ((int8 *)*pxVar3,iVar9,xRam00000000000d3740,pxRam00000000000d3748);
  (**(code **)(*(int8 *)*pxVar3 + 0x38))
            ((int8 *)*pxVar3,iVar10,xRam00000000000d37c0,pxRam00000000000d37c8);
  (**(code **)(*(int8 *)*pxVar3 + 0x38))
            ((int8 *)*pxVar3,iVar11,xRam00000000000d37e0,pxRam00000000000d37e8);
  iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2c02e /* "glDeleteBuffers" */);
  iVar7 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x23f2f /* "glBufferData" */);
  if ((iVar6 == 0) || (iVar7 == 0)) {
    if ((uRam0000000000162c58 & 1) != 0) goto code_r0x00083978;
  }
  else {
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar6,xRam00000000000d3750,pxRam00000000000d3758);
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar7,xRam00000000000d3760,pxRam00000000000d3768);
    uRam0000000000162c58 = (uint1)xRam00000000000d8d3c;
    if ((uint1)xRam00000000000d8d3c == 1) {
code_r0x00083978:
      uVar12 = wind__InstallTags_plt(pcRam0000000000162c30);
      if ((uVar12 & 1) == 0) {
        xVar5 = 0x2af49 /* "shadows: entity tags unavailable - the caster cache guesses moving mes..." */;
        goto code_r0x00083998;
      }
    }
  }
  xVar5 = 0x2a2ec /* "shadows: glDeleteBuffers / glBufferData not imported - caster cache of..." */;
code_r0x00083998:
  (*pcRam0000000000162c30)(1,xVar5);
  iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x30e63 /* "glBufferSubData" */);
  if (iVar6 != 0) {
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar6,xRam00000000000d3770,pxRam00000000000d3778);
  }
  iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2a669 /* "glMapBufferRange" */);
  if (iVar6 != 0) {
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar6,xRam00000000000d3780,pxRam00000000000d3788);
  }
  iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x3717c /* "glActiveTexture" */);
  iVar7 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2c020 /* "glBindTexture" */);
  if ((iVar6 == 0) || (iVar7 == 0)) {
    (*pcRam0000000000162c30)(1,0x23cc0 /* "shadows: glActiveTexture / glBindTexture not imported - foliage casts ..." */);
  }
  else {
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar6,xRam00000000000d37a0,pxRam00000000000d37a8);
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar7,xRam00000000000d37b0,pxRam00000000000d37b8);
    cRam0000000000162bf8 = 1;
  }
  iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x35113 /* "glBindFramebuffer" */);
  if (iVar6 == 0) {
    (*pcRam0000000000162c30)(1,0x3f65b /* "shadows: glBindFramebuffer not imported - draws into every target cast" */);
  }
  else {
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar6,xRam00000000000d3790,pxRam00000000000d3798);
    cRam0000000000162bc0 = 1;
  }
  iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x2ad50 /* "glBindVertexArray" */);
  if ((iVar6 != 0) || (iVar6 = got__FindSlot_plt(0x3d204 /* "libGTASA.so" */,0x22af1 /* "glBindVertexArrayOES" */), iVar6 != 0)) {
    (**(code **)(*(int8 *)*pxVar3 + 0x38))
              ((int8 *)*pxVar3,iVar6,xRam00000000000d37d0,pxRam00000000000d37d8);
  }
  (*pcRam0000000000162c30)
            ((float8)(float4)xRam00000000000d8d34,0,0x23d0c /* "shadows: capture hooks on - map %d^2, range %.0f m, debug view %d (pha..." */,xRam00000000000d8d2c._4_4_,
             uRam00000000000d8d44 & 0xffffffff);
  return 1;
}

/* 0x89600  size=704  shadows::DrawDebug()  [_ZN7shadows9DrawDebugEv] */
void shadows__DrawDebug(void)

{
  int4 *piVar1;
  int4 iVar2;
  int8 iVar3;
  xunknown8 *pxVar4;
  bool bVar5;
  int4 iVar6;
  code *pcVar7;
  xunknown8 xVar8;
  int4 iStack_114;
  int4 iStack_110;
  xunknown1 axStack_10c [88];
  xunknown4 xStack_b4;
  xunknown4 xStack_b0;
  xunknown1 axStack_58 [8];
  int4 iStack_50;
  int4 iStack_4c;
  int8 iStack_48;
  
  iVar3 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar3 + 0x28);
  if ((((int4)uRam00000000000d8d44 != 0) && (xRam0000000000170cc8 != '\0')) &&
     ((uRam0000000000162c5a & 1) == 0)) {
    (*(code *)*pxRam00000000000d3208)(0xba2,axStack_58);
    iStack_114 = 0;
    iStack_110 = 0;
    compat__SceneSize_plt(&iStack_110,&iStack_114);
    if ((iStack_50 == iStack_110) && (iStack_4c == iStack_114)) {
      xStack_b4 = 0;
      xStack_b0 = 0;
      gl__SavedState__Save_plt(axStack_10c);
      iVar6 = (iStack_114 << 1) / 5;
      if ((int4)uRam00000000000d8d44 == 2) {
        iVar2 = iStack_110 * iVar6;
        iVar6 = 0;
        if (iStack_114 != 0) {
          iVar6 = iVar2 / iStack_114;
        }
      }
      (*(code *)*pxRam00000000000d3520)(0x10,0x10,iVar6);
      pxVar4 = pxRam00000000000d3530;
      (*(code *)*pxRam00000000000d3530)(0xbe2);
      (*(code *)*pxVar4)(0xb71);
      (*(code *)*pxVar4)(0xc11);
      (*(code *)*pxVar4)(0xb44);
      (*(code *)*pxRam00000000000d3540)(1,1,1,1);
      (*(code *)*pxRam00000000000d33d8)(iRam0000000000170f48);
      (*(code *)*pxRam00000000000d3508)(xRam0000000000170f54);
      bVar5 = false;
      if (((int4)uRam00000000000d8d44 == 2) && (xRam0000000000162c59 != '\0')) {
        bVar5 = iRam0000000000162c5c != 0;
      }
      (*(code *)*pxRam00000000000d3310)(0x84c0);
      xVar8 = 0x3f800000;
      if (!bVar5) {
        xVar8 = 0;
      }
      piVar1 = &iRam0000000000162c5c;
      if (!bVar5) {
        piVar1 = &xRam0000000000170f4c + ((int4)uRam00000000000d8d44 == 4);
      }
      (*(code *)*pxRam00000000000d3300)(0xde1,*piVar1);
      (*(code *)*pxRam00000000000d3358)(0,xRam0000000000170f64);
      (*(code *)*pxRam00000000000d3410)(xRam00000000000d8d68,0);
      pcVar7 = (code *)*pxRam00000000000d3418;
      (*(code *)*pxRam00000000000d3408)(iRam0000000000170f48,0x25bff /* "uMode" */);
      (*pcVar7)(xVar8);
      (*(code *)*pxRam00000000000d3518)(4,0,3);
      gl__SavedState__Restore_plt(axStack_10c);
    }
  }
  if (*(int8 *)(iVar3 + 0x28) == iStack_48) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x898c0  size=40  shadows::MaskTexture()  [_ZN7shadows11MaskTextureEv] */
xunknown4 shadows__MaskTexture(void)

{
  xunknown4 xVar1;
  
  xVar1 = 0;
  if (((uRam0000000000162c5a | xRam0000000000162c59 ^ 0xff) & 1) == 0) {
    xVar1 = iRam0000000000162c5c;
  }
  return xVar1;
}

/* 0x898e8  size=56  shadows::Strength()  [_ZN7shadows8StrengthEv] */
float4 shadows__Strength(void)

{
  float4 fVar1;
  
  fVar1 = 0.0;
  if (((uRam0000000000162c5a | xRam0000000000162c59 ^ 0xff) & 1) == 0) {
    fVar1 = uRam00000000000d8d44._4_4_ * fRam0000000000162c60;
  }
  return fVar1;
}

