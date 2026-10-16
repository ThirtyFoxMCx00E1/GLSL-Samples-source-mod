/* module: probe  (1 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x8e528  size=2896  probe::Run(void (*)(bool, char const*, ...))  [_ZN5probe3RunEPFvbPKczE] */
void probe__Run(code *param_1)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  code *pcVar4;
  uint4 uVar5;
  uint4 uVar6;
  uint4 uVar7;
  uint4 uVar8;
  int4 iVar9;
  uint8 uVar10;
  xunknown8 xVar11;
  xunknown8 xVar12;
  xunknown8 xVar13;
  xunknown8 xVar14;
  xunknown8 xVar15;
  xunknown8 xVar16;
  xunknown8 xVar17;
  uint8 uVar18;
  int8 iVar19;
  int8 iVar20;
  xunknown8 in_stack_fffffffffffff9f0;
  xunknown4 xVar21;
  xunknown8 xStack_5f0;
  int4 iStack_5e8;
  xunknown4 xStack_5e4;
  xunknown4 xStack_5e0;
  xunknown4 xStack_5dc;
  xunknown4 xStack_5d8;
  xunknown4 xStack_5d4;
  xunknown4 xStack_5d0;
  xunknown4 xStack_5cc;
  xunknown8 xStack_5c8;
  xunknown4 xStack_5c0;
  xunknown8 xStack_5bc;
  char cStack_5b4;
  xunknown4 xStack_5b0;
  int4 iStack_5ac;
  xunknown8 xStack_5a8;
  xunknown8 xStack_5a0;
  xunknown8 xStack_598;
  xunknown8 xStack_590;
  xunknown8 xStack_588;
  xunknown4 xStack_580;
  uint4 auStack_57c [256];
  xunknown4 xStack_17c;
  xunknown4 xStack_178;
  xunknown4 xStack_174;
  uint8 auStack_170 [34];
  
  xVar21 = (xunknown4)((uint8)in_stack_fffffffffffff9f0 >> 0x20);
  iVar1 = tpidr_el0;
  auStack_170[0x20] = *(int8 *)(iVar1 + 0x28);
  xStack_5c0 = 2;
  xStack_5b0 = 0;
  xStack_5bc = 0;
  cStack_5b4 = '\0';
  pcRam0000000000170f80 = param_1;
  uVar10 = gl__Load_plt(&xStack_5c0,param_1);
  if ((uVar10 & 1) == 0) goto code_r0x0008f044;
  xVar11 = eglGetCurrentDisplay();
  xVar12 = eglGetCurrentContext();
  xStack_5c8 = 0;
  eglQueryContext(xVar11,xVar12,0x3098,(int8)&xStack_5c8 + 4);
  eglQueryContext(xVar11,xVar12,0x3028,&xStack_5c8);
  xStack_5d0 = 0xffffffff;
  xStack_5cc = 0xffffffff;
  xStack_5d8 = 0xffffffff;
  xStack_5d4 = 0xffffffff;
  xStack_5e0 = 0xffffffff;
  xStack_5dc = 0xffffffff;
  iStack_5e8 = 0;
  xStack_5e4 = 0xffffffff;
  xStack_5f0 = 0;
  xStack_178 = (xunknown4)xStack_5c8;
  xStack_17c = 0x3028;
  xStack_174 = 0x3038;
  iVar9 = eglChooseConfig(xVar11,&xStack_17c,&xStack_5f0,1,&iStack_5e8);
  if ((iVar9 != 0) && (iStack_5e8 == 1)) {
    eglGetConfigAttrib(xVar11,xStack_5f0,0x3025,&xStack_5cc);
    eglGetConfigAttrib(xVar11,xStack_5f0,0x3026,&xStack_5d0);
    eglGetConfigAttrib(xVar11,xStack_5f0,0x3031,&xStack_5d4);
    eglGetConfigAttrib(xVar11,xStack_5f0,0x3024,&xStack_5d8);
    eglGetConfigAttrib(xVar11,xStack_5f0,0x3023,&xStack_5dc);
    eglGetConfigAttrib(xVar11,xStack_5f0,0x3022,&xStack_5e0);
    eglGetConfigAttrib(xVar11,xStack_5f0,0x3021,&xStack_5e4);
  }
  (*pcRam0000000000170f80)
            (0,0x27561 /* "probe: EGL context client version %d, window config R%dG%dB%dA%d depth..." */,xStack_5c8._4_4_,xStack_5d8,xStack_5dc,xStack_5e0,xStack_5e4,xStack_5cc,
             CONCAT44(xVar21,xStack_5d0),xStack_5d4);
  pcVar4 = pcRam0000000000170f80;
  pxVar2 = pxRam00000000000d3218;
  xVar11 = (*(code *)*pxRam00000000000d3218)(0x1f02);
  (*pcVar4)(0,0x38d4f /* "probe: GL_VERSION  %s" */,xVar11);
  pcVar4 = pcRam0000000000170f80;
  xVar11 = (*(code *)*pxVar2)(0x8b8c);
  (*pcVar4)(0,0x40782 /* "probe: GLSL        %s" */,xVar11);
  pcVar4 = pcRam0000000000170f80;
  xVar11 = (*(code *)*pxVar2)(0x1f01);
  xVar12 = (*(code *)*pxVar2)(0x1f00);
  (*pcVar4)(0,0x295eb /* "probe: renderer    %s / %s" */,xVar11,xVar12);
  xVar11 = 0x2b97b;
  if (xStack_5bc._4_1_ == 0) {
    xVar11 = 0x34fa4;
  }
  xVar12 = 0x2b97b;
  if (xStack_5bc._5_1_ == '\0') {
    xVar12 = 0x36dd0;
  }
  xVar13 = 0x2b97b;
  if (xStack_5bc._6_1_ == '\0') {
    xVar13 = 0x36dd0;
  }
  (*pcRam0000000000170f80)
            (xStack_5bc._4_1_ ^ 1,0x3f936 /* "probe: context ES %d.%d (ES3 %s, ES3.1 %s, ES3.2 %s), ES3.0 core funct..." */,xStack_5c0,xStack_5bc & 0xffffffff,xVar11,xVar12,xVar13,
             xStack_5b0);
  pcVar4 = pcRam0000000000170f80;
  pxVar2 = pxRam00000000000d3208;
  if ((xStack_5bc & 0x100000000) == 0) {
    (*pcRam0000000000170f80)(1,0x275c1 /* "probe: ES2-only context - most of the roadmap needs ES3; stopping here" */);
    goto code_r0x0008f044;
  }
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxRam00000000000d3208)(0xd33,auStack_57c);
  uVar5 = auStack_57c[0];
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x8824,auStack_57c);
  uVar6 = auStack_57c[0];
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x8cdf,auStack_57c);
  uVar7 = auStack_57c[0];
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x8d57,auStack_57c);
  uVar8 = auStack_57c[0];
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x8872,auStack_57c);
  (*pcVar4)(0,0x402c6 /* "probe: max texture %d, draw buffers %d, colour attachments %d, MSAA sa..." */,uVar5,uVar6,uVar7,uVar8,auStack_57c[0]);
  pcVar4 = pcRam0000000000170f80;
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x8a30,auStack_57c);
  uVar5 = auStack_57c[0];
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x8dfd,auStack_57c);
  uVar6 = auStack_57c[0];
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x88ff,auStack_57c);
  uVar7 = auStack_57c[0];
  auStack_57c[0] = 0xffffffff;
  (*(code *)*pxVar2)(0x8073,auStack_57c);
  (*pcVar4)(0,0x39624 /* "probe: uniform block %d bytes, fs uniform vectors %d, array layers %d,..." */,uVar5,uVar6,uVar7,auStack_57c[0]);
  pcVar4 = pcRam0000000000170f80;
  if (xStack_5bc._5_1_ == '\x01') {
    auStack_57c[0] = 0xffffffff;
    (*(code *)*pxVar2)(0x90eb,auStack_57c);
    uVar5 = auStack_57c[0];
    auStack_57c[0] = 0xffffffff;
    (*(code *)*pxVar2)(0x8262,auStack_57c);
    uVar6 = auStack_57c[0];
    auStack_57c[0] = 0xffffffff;
    (*(code *)*pxVar2)(0x90da,auStack_57c);
    uVar7 = auStack_57c[0];
    auStack_57c[0] = 0xffffffff;
    (*(code *)*pxVar2)(0x90ce,auStack_57c);
    (*pcVar4)(0,0x3483c /* "probe: compute: invocations %d, shared memory %d bytes, fs SSBOs %d, f..." */,uVar5,uVar6,uVar7,auStack_57c[0]);
  }
  iVar19 = 0;
  iVar20 = 0;
  auStack_57c[0] = auStack_57c[0] & 0xffffff00;
  do {
    gl__HasExtension_plt(*(xunknown8 *)(iVar20 + 0xceee0));
    iVar9 = FUN_0008f078((int8)auStack_57c + iVar19,0xffffffffffffffff,0x400 - iVar19);
    pcVar4 = pcRam0000000000170f80;
    pxVar2 = pxRam00000000000d3208;
    iVar20 = iVar20 + 8;
    iVar19 = iVar19 + iVar9;
  } while (iVar20 != 0xa0);
  auStack_170[0] = CONCAT44(auStack_170[0]._4_4_,0xffffffff);
  (*(code *)*pxRam00000000000d3208)(0x821d,auStack_170);
  (*pcVar4)(0,0x3f9a4 /* "probe: extensions (%d total):%s" */,auStack_170[0] & 0xffffffff,auStack_57c);
  xStack_580 = 0;
  xStack_598 = 0;
  xStack_5a0 = 0;
  xStack_588 = 0;
  xStack_590 = 0;
  (*(code *)*pxVar2)(0x8ca6,&xStack_5a0);
  (*(code *)*pxVar2)(0x8caa,(uint8)&xStack_5a0 | 4);
  (*(code *)*pxVar2)(0x84e0,(uint8)&xStack_5a0 | 0xc);
  (*(code *)*pxVar2)(0x8069,(uint8)&xStack_5a0 | 8);
  (*(code *)*pxVar2)(0x8b8d,&xStack_590);
  (*(code *)*pxVar2)(0xba2,(int8)&xStack_590 + 4);
  (*pcRam0000000000170f80)
            (0,0x38285 /* "probe: at 2D time the game draws into framebuffer %d (0 = window), vie..." */,xStack_5a0 & 0xffffffff,xStack_588._4_4_,xStack_580,xStack_590._4_4_,
             xStack_588 & 0xffffffff);
  pcVar4 = pcRam0000000000170f80;
  xVar11 = FUN_0008f11c(0x8058,0x81a6);
  xVar12 = FUN_0008f11c(0x881a,0x81a6);
  xVar13 = FUN_0008f11c(0x8c3a,0x81a6);
  xVar14 = FUN_0008f11c(0x8058,0x8cac);
  xVar15 = FUN_0008f11c(0x8058,0x88f0);
  xVar16 = FUN_0008f11c(0x822d,0);
  xVar17 = FUN_0008f11c(0x822f,0);
  (*pcVar4)(0,0x39f05 /* "probe: targets: RGBA8+D24 %s, RGBA16F+D24 %s, R11G11B10F+D24 %s, RGBA8..." */,xVar11,xVar12,xVar13,xVar14,xVar15,xVar16,xVar17);
  pcVar4 = pcRam0000000000170f80;
  pxVar3 = pxRam00000000000d3370;
  xStack_5a8 = 0x28ef1 /* "#version 300 es\nprecision mediump float;\nout vec4 o;\nvoid main(){o=..." */;
  uVar10 = (*(code *)*pxRam00000000000d3370)(0x8b30);
  pxVar2 = pxRam00000000000d3228;
  if ((int4)uVar10 == 0) {
    xVar11 = 0x36dd0;
    if ((xStack_5bc & 0x10000000000) != 0) goto code_r0x0008ecb0;
code_r0x0008ee04:
    xVar12 = 0x38d7d;
  }
  else {
    uVar18 = uVar10 & 0xffffffff;
    (*(code *)*pxRam00000000000d3378)(uVar10,1,&xStack_5a8,0);
    (*(code *)*pxRam00000000000d3380)(uVar18);
    iStack_5ac = 0;
    (*(code *)*pxRam00000000000d3388)(uVar18,0x8b81,&iStack_5ac);
    if (iStack_5ac == 0) {
      auStack_170[0x1f] = 0;
      auStack_170[0x1e] = 0;
      auStack_170[0x1d] = 0;
      auStack_170[0x1c] = 0;
      auStack_170[0x1b] = 0;
      auStack_170[0x1a] = 0;
      auStack_170[0x19] = 0;
      auStack_170[0x18] = 0;
      auStack_170[0x17] = 0;
      auStack_170[0x16] = 0;
      auStack_170[0x15] = 0;
      auStack_170[0x14] = 0;
      auStack_170[0x13] = 0;
      auStack_170[0x12] = 0;
      auStack_170[0x11] = 0;
      auStack_170[0x10] = 0;
      auStack_170[0xf] = 0;
      auStack_170[0xe] = 0;
      auStack_170[0xd] = 0;
      auStack_170[0xc] = 0;
      auStack_170[0xb] = 0;
      auStack_170[10] = 0;
      auStack_170[9] = 0;
      auStack_170[8] = 0;
      auStack_170[7] = 0;
      auStack_170[6] = 0;
      auStack_170[5] = 0;
      auStack_170[4] = 0;
      auStack_170[3] = 0;
      auStack_170[2] = 0;
      auStack_170[1] = 0;
      auStack_170[0] = 0;
      (*(code *)*pxRam00000000000d3390)(uVar18,0x100,0,auStack_170);
      (*pcRam0000000000170f80)(1,0x39679 /* "probe:   shader log: %s" */,auStack_170);
    }
    (*(code *)*pxRam00000000000d3398)(uVar18);
    do {
      iVar9 = (*(code *)*pxVar2)();
    } while (iVar9 != 0);
    xVar11 = 0x36dd0;
    if (iStack_5ac != 0) {
      xVar11 = 0x2aba8;
    }
    if ((xStack_5bc & 0x10000000000) == 0) goto code_r0x0008ee04;
code_r0x0008ecb0:
    xStack_5a8 = 0x263cd /* "#version 310 es\nprecision mediump float;\nout vec4 o;\nvoid main(){o=..." */;
    uVar10 = (*(code *)*pxVar3)(0x8b30);
    xVar12 = 0x36dd0;
    if ((int4)uVar10 != 0) {
      uVar18 = uVar10 & 0xffffffff;
      (*(code *)*pxRam00000000000d3378)(uVar10,1,&xStack_5a8,0);
      (*(code *)*pxRam00000000000d3380)(uVar18);
      iStack_5ac = 0;
      (*(code *)*pxRam00000000000d3388)(uVar18,0x8b81,&iStack_5ac);
      if (iStack_5ac == 0) {
        auStack_170[0x1f] = 0;
        auStack_170[0x1e] = 0;
        auStack_170[0x1d] = 0;
        auStack_170[0x1c] = 0;
        auStack_170[0x1b] = 0;
        auStack_170[0x1a] = 0;
        auStack_170[0x19] = 0;
        auStack_170[0x18] = 0;
        auStack_170[0x17] = 0;
        auStack_170[0x16] = 0;
        auStack_170[0x15] = 0;
        auStack_170[0x14] = 0;
        auStack_170[0x13] = 0;
        auStack_170[0x12] = 0;
        auStack_170[0x11] = 0;
        auStack_170[0x10] = 0;
        auStack_170[0xf] = 0;
        auStack_170[0xe] = 0;
        auStack_170[0xd] = 0;
        auStack_170[0xc] = 0;
        auStack_170[0xb] = 0;
        auStack_170[10] = 0;
        auStack_170[9] = 0;
        auStack_170[8] = 0;
        auStack_170[7] = 0;
        auStack_170[6] = 0;
        auStack_170[5] = 0;
        auStack_170[4] = 0;
        auStack_170[3] = 0;
        auStack_170[2] = 0;
        auStack_170[1] = 0;
        auStack_170[0] = 0;
        (*(code *)*pxRam00000000000d3390)(uVar18,0x100,0,auStack_170);
        (*pcRam0000000000170f80)(1,0x39679 /* "probe:   shader log: %s" */,auStack_170);
      }
      (*(code *)*pxRam00000000000d3398)(uVar18);
      do {
        iVar9 = (*(code *)*pxVar2)();
      } while (iVar9 != 0);
      xVar12 = 0x36dd0;
      if (iStack_5ac != 0) {
        xVar12 = 0x2aba8;
      }
    }
  }
  if (xStack_5bc._6_1_ == '\x01') {
    xStack_5a8 = 0x38d7f /* "#version 320 es\nprecision mediump float;\nout vec4 o;\nvoid main(){o=..." */;
    uVar10 = (*(code *)*pxVar3)(0x8b30);
    xVar13 = 0x36dd0;
    if ((int4)uVar10 != 0) {
      uVar18 = uVar10 & 0xffffffff;
      (*(code *)*pxRam00000000000d3378)(uVar10,1,&xStack_5a8,0,0x36dd0);
      (*(code *)*pxRam00000000000d3380)(uVar18);
      iStack_5ac = 0;
      (*(code *)*pxRam00000000000d3388)(uVar18,0x8b81,&iStack_5ac);
      if (iStack_5ac == 0) {
        auStack_170[0x1f] = 0;
        auStack_170[0x1e] = 0;
        auStack_170[0x1d] = 0;
        auStack_170[0x1c] = 0;
        auStack_170[0x1b] = 0;
        auStack_170[0x1a] = 0;
        auStack_170[0x19] = 0;
        auStack_170[0x18] = 0;
        auStack_170[0x17] = 0;
        auStack_170[0x16] = 0;
        auStack_170[0x15] = 0;
        auStack_170[0x14] = 0;
        auStack_170[0x13] = 0;
        auStack_170[0x12] = 0;
        auStack_170[0x11] = 0;
        auStack_170[0x10] = 0;
        auStack_170[0xf] = 0;
        auStack_170[0xe] = 0;
        auStack_170[0xd] = 0;
        auStack_170[0xc] = 0;
        auStack_170[0xb] = 0;
        auStack_170[10] = 0;
        auStack_170[9] = 0;
        auStack_170[8] = 0;
        auStack_170[7] = 0;
        auStack_170[6] = 0;
        auStack_170[5] = 0;
        auStack_170[4] = 0;
        auStack_170[3] = 0;
        auStack_170[2] = 0;
        auStack_170[1] = 0;
        auStack_170[0] = 0;
        (*(code *)*pxRam00000000000d3390)(uVar18,0x100,0,auStack_170);
        (*pcRam0000000000170f80)(1,0x39679 /* "probe:   shader log: %s" */,auStack_170);
      }
      (*(code *)*pxRam00000000000d3398)(uVar18);
      do {
        iVar9 = (*(code *)*pxVar2)();
      } while (iVar9 != 0);
      xVar13 = 0x36dd0;
      if (iStack_5ac != 0) {
        xVar13 = 0x2aba8;
      }
    }
  }
  else {
    xVar13 = 0x38d7d;
  }
  (*pcVar4)(0,0x41242 /* "probe: shaders: GLSL ES 3.00 %s, 3.10 %s, 3.20 %s" */,xVar11,xVar12,xVar13);
  xVar11 = 0x2b97b;
  if (cStack_5b4 == '\0') {
    xVar11 = 0x36dd0;
  }
  xVar12 = 0x2b97b;
  if (xStack_5bc._7_1_ == '\0') {
    xVar12 = 0x36dd0;
  }
  (*pcRam0000000000170f80)(0,0x40798 /* "probe: GPU timer queries %s, RGBA16F colour targets %s" */,xVar11,xVar12);
  pxVar3 = pxRam00000000000d3248;
  (*(code *)*pxRam00000000000d3248)(0x8ca9,xStack_5a0 & 0xffffffff);
  (*(code *)*pxVar3)(0x8ca8,xStack_5a0._4_4_);
  (*(code *)*pxRam00000000000d3310)(xStack_598._4_4_);
  (*(code *)*pxRam00000000000d3300)(0xde1,xStack_598 & 0xffffffff);
  (*(code *)*pxRam00000000000d33d8)(xStack_590 & 0xffffffff);
  (*(code *)*pxRam00000000000d3520)
            (xStack_590._4_4_,xStack_588 & 0xffffffff,xStack_588._4_4_,xStack_580);
  do {
    xVar11 = (*(code *)*pxVar2)();
  } while ((int4)xVar11 != 0);
  (*pcRam0000000000170f80)(xVar11,0x382e0 /* "probe: done - send this log" */);
code_r0x0008f044:
  if (*(int8 *)(iVar1 + 0x28) == auStack_170[0x20]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

