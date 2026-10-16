/* module: gl  (6 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x5a8a4  size=208  gl::HasExtension(char const*)  [_ZN2gl12HasExtensionEPKc] */
void gl__HasExtension(xunknown8 param_1)

{
  int8 iVar1;
  int8 *piVar2;
  int4 iVar3;
  xunknown8 xVar4;
  int8 iVar5;
  int4 iVar6;
  int4 iStack_3c;
  int8 iStack_38;
  
  piVar2 = piRam00000000000d3210;
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  xVar4 = 0;
  if (((code *)*pxRam00000000000d3208 != (code *)0x0) && (*piRam00000000000d3210 != 0)) {
    iStack_3c = 0;
    (*(code *)*pxRam00000000000d3208)(0x821d,&iStack_3c);
    if (0 < iStack_3c) {
      iVar6 = 0;
      do {
        iVar5 = (*(code *)*piVar2)(0x1f03,iVar6);
        if ((iVar5 != 0) && (iVar3 = strcmp(iVar5,param_1), iVar3 == 0)) {
          xVar4 = 1;
          goto code_r0x0005a94c;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iStack_3c);
    }
    xVar4 = 0;
  }
code_r0x0005a94c:
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar4);
  return;
}

/* 0x5a974  size=7552  gl::Load(gl::Info&, void (*)(bool, char const*, ...))  [_ZN2gl4LoadERNS_4InfoEPFvbPKczE] */
void gl__Load(int4 *param_1,code *param_2)

{
  int8 iVar1;
  bool bVar2;
  int8 *piVar3;
  int8 *piVar4;
  int8 *piVar5;
  int8 *piVar6;
  int8 *piVar7;
  int8 *piVar8;
  int4 iVar9;
  int8 iVar10;
  xunknown8 xVar11;
  int8 iVar12;
  int8 iVar13;
  bool bVar14;
  uint4 uVar15;
  int8 *piVar16;
  int8 *piVar17;
  xunknown1 xVar18;
  int8 iVar19;
  code *pcVar20;
  xunknown1 xVar21;
  int8 iVar22;
  int8 *piVar23;
  int8 iVar24;
  int8 *piVar25;
  int8 iVar26;
  int8 *piVar27;
  int8 iVar28;
  int8 *piVar29;
  int8 iVar30;
  int8 *piVar31;
  int8 iVar32;
  int8 iVar33;
  int8 iVar34;
  int4 iVar35;
  int8 *piVar36;
  int4 iStack_74;
  int4 iStack_70;
  int4 iStack_6c;
  int8 iStack_68;
  
  iVar1 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar1 + 0x28);
  iVar10 = eglGetCurrentContext();
  if (iVar10 == 0) {
    xVar11 = 0x23f14 /* "gl: no current EGL context" */;
  }
  else {
    if ((((iRam00000000000d9640 == 0) &&
         (iRam00000000000d9640 = dlopen(0x2b400 /* "libGLESv3.so" */,2), iRam00000000000d9640 == 0)) &&
        (iRam00000000000d9640 = dlopen(0x32da4 /* "libGLESv2.so" */,2), iRam00000000000d9640 == 0)) ||
       (iVar10 = dlsym(iRam00000000000d9640,0x322a5 /* "glGetString" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x322a5 /* "glGetString" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3218 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3715e /* "glGetStringi" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3715e /* "glGetStringi" */);
    }
    iVar12 = iRam00000000000d9640;
    piVar3 = piRam00000000000d3210;
    *piRam00000000000d3210 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22dc4 /* "glGetIntegerv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22dc4 /* "glGetIntegerv" */);
    }
    iVar12 = iRam00000000000d9640;
    *pxRam00000000000d3208 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ec0b /* "glPixelStorei" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ec0b /* "glPixelStorei" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3220 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3902a /* "glGetError" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3902a /* "glGetError" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3228 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22374 /* "glGetFloatv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22374 /* "glGetFloatv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3230 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2dad9 /* "glGetInternalformativ" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2dad9 /* "glGetInternalformativ" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3238 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x27839 /* "glGenFramebuffers" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x27839 /* "glGenFramebuffers" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3240 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x35113 /* "glBindFramebuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x35113 /* "glBindFramebuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3248 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x265ac /* "glDeleteFramebuffers" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x265ac /* "glDeleteFramebuffers" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3250 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x298d0 /* "glFramebufferTexture2D" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x298d0 /* "glFramebufferTexture2D" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3258 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x32db1 /* "glCheckFramebufferStatus" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x32db1 /* "glCheckFramebufferStatus" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3260 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2daef /* "glDrawBuffers" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2daef /* "glDrawBuffers" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3268 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x35125 /* "glBlitFramebuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x35125 /* "glBlitFramebuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3270 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2b40d /* "glInvalidateFramebuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2b40d /* "glInvalidateFramebuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3278 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x298e7 /* "glReadBuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x298e7 /* "glReadBuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3280 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x25c66 /* "glGetFramebufferAttachmentParameteriv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x25c66 /* "glGetFramebufferAttachmentParameteriv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3288 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22380 /* "glGetTexLevelParameteriv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22380 /* "glGetTexLevelParameteriv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3290 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2dafd /* "glFramebufferRenderbuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2dafd /* "glFramebufferRenderbuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3298 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x298f4 /* "glStencilMask" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x298f4 /* "glStencilMask" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32a0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ec19 /* "glIsFramebuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ec19 /* "glIsFramebuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32a8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x35137 /* "glGetIntegeri_v" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x35137 /* "glGetIntegeri_v" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32b0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2db17 /* "glBlendFuncSeparate" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2db17 /* "glBlendFuncSeparate" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32b8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2784b /* "glBlendEquationSeparate" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2784b /* "glBlendEquationSeparate" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32c0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a11e /* "glSamplerParameterf" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a11e /* "glSamplerParameterf" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32c8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3fbd4 /* "glTexParameterf" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3fbd4 /* "glTexParameterf" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32d0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x32dca /* "glReadPixels" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x32dca /* "glReadPixels" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32d8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x39035 /* "glGetUniformfv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x39035 /* "glGetUniformfv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32e0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x25c8c /* "glScissor" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x25c8c /* "glScissor" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32e8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x27863 /* "glTexSubImage3D" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x27863 /* "glTexSubImage3D" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32f0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2c012 /* "glGenTextures" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2c012 /* "glGenTextures" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d32f8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2c020 /* "glBindTexture" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2c020 /* "glBindTexture" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3300 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3716b /* "glDeleteTextures" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3716b /* "glDeleteTextures" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3308 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3717c /* "glActiveTexture" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3717c /* "glActiveTexture" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3310 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x34b80 /* "glTexStorage2D" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x34b80 /* "glTexStorage2D" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3318 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22dd2 /* "glTexImage2D" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22dd2 /* "glTexImage2D" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3320 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a617 /* "glTexSubImage2D" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a617 /* "glTexSubImage2D" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3328 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3718c /* "glTexStorage3D" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3718c /* "glTexStorage3D" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3330 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2d4b8 /* "glTexParameteri" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2d4b8 /* "glTexParameteri" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3338 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x30e1d /* "glGetTexParameteriv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x30e1d /* "glGetTexParameteriv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3340 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3985b /* "glGenerateMipmap" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3985b /* "glGenerateMipmap" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3348 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x30e31 /* "glGenSamplers" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x30e31 /* "glGenSamplers" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3350 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2db2b /* "glBindSampler" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2db2b /* "glBindSampler" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3358 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a627 /* "glSamplerParameteri" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a627 /* "glSamplerParameteri" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3360 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2b425 /* "glDeleteSamplers" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2b425 /* "glDeleteSamplers" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3368 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x29902 /* "glCreateShader" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x29902 /* "glCreateShader" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3370 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x27873 /* "glShaderSource" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x27873 /* "glShaderSource" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3378 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3719b /* "glCompileShader" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3719b /* "glCompileShader" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3380 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3986c /* "glGetShaderiv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3986c /* "glGetShaderiv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3388 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3fbe4 /* "glGetShaderInfoLog" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3fbe4 /* "glGetShaderInfoLog" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3390 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x322b1 /* "glDeleteShader" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x322b1 /* "glDeleteShader" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3398 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22399 /* "glGetAttachedShaders" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22399 /* "glGetAttachedShaders" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33a0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x322c0 /* "glGetShaderSource" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x322c0 /* "glGetShaderSource" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33a8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ad21 /* "glCreateProgram" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ad21 /* "glCreateProgram" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33b0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ad31 /* "glAttachShader" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ad31 /* "glAttachShader" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33b8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x39044 /* "glLinkProgram" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x39044 /* "glLinkProgram" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33c0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22ddf /* "glGetProgramiv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22ddf /* "glGetProgramiv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33c8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x34b8f /* "glGetProgramInfoLog" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x34b8f /* "glGetProgramInfoLog" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33d0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x30e3f /* "glUseProgram" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x30e3f /* "glUseProgram" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33d8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x265c1 /* "glDeleteProgram" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x265c1 /* "glDeleteProgram" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33e0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2bac5 /* "glIsProgram" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2bac5 /* "glIsProgram" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33e8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x291c1 /* "glProgramBinary" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x291c1 /* "glProgramBinary" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33f0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3578f /* "glGetProgramBinary" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3578f /* "glGetProgramBinary" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d33f8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x27882 /* "glProgramParameteri" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x27882 /* "glProgramParameteri" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3400 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3a26c /* "glGetUniformLocation" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3a26c /* "glGetUniformLocation" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3408 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x404bd /* "glUniform1i" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x404bd /* "glUniform1i" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3410 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a63b /* "glUniform1f" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a63b /* "glUniform1f" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3418 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x357a2 /* "glUniform2f" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x357a2 /* "glUniform2f" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3420 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x357ae /* "glGetAttribLocation" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x357ae /* "glGetAttribLocation" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3428 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22dee /* "glDrawElements" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22dee /* "glDrawElements" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3430 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a647 /* "glVertexAttribPointer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a647 /* "glVertexAttribPointer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3438 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3fbf7 /* "glEnableVertexAttribArray" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3fbf7 /* "glEnableVertexAttribArray" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3440 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x223ae /* "glDisableVertexAttribArray" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x223ae /* "glDisableVertexAttribArray" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3448 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ad40 /* "glPolygonOffset" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ad40 /* "glPolygonOffset" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3450 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x22dfd /* "glClearDepthf" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x22dfd /* "glClearDepthf" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3458 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a65d /* "glDepthFunc" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a65d /* "glDepthFunc" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3460 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x25c96 /* "glUniform2i" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x25c96 /* "glUniform2i" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3468 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x404c9 /* "glUniform4i" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x404c9 /* "glUniform4i" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3470 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2bad1 /* "glUniform3f" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2bad1 /* "glUniform3f" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3478 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2badd /* "glUniform4f" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2badd /* "glUniform4f" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3480 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x357c2 /* "glVertexAttrib4f" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x357c2 /* "glVertexAttrib4f" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3488 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x223c9 /* "glBindAttribLocation" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x223c9 /* "glBindAttribLocation" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3490 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x32dd7 /* "glUniform4fv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x32dd7 /* "glUniform4fv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3498 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x371ab /* "glUniform3fv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x371ab /* "glUniform3fv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34a0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3a281 /* "glUniformMatrix4fv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3a281 /* "glUniformMatrix4fv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34a8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x30e4c /* "glGetUniformBlockIndex" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x30e4c /* "glGetUniformBlockIndex" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34b0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x371b8 /* "glUniformBlockBinding" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x371b8 /* "glUniformBlockBinding" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34b8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x25ca2 /* "glGenBuffers" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x25ca2 /* "glGenBuffers" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34c0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3987a /* "glBindBuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3987a /* "glBindBuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34c8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3a294 /* "glBindBufferBase" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3a294 /* "glBindBufferBase" */);
    }
    iVar12 = iRam00000000000d9640;
    piVar4 = piRam00000000000d34d0;
    *piRam00000000000d34d0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x23f2f /* "glBufferData" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x23f2f /* "glBufferData" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34d8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x30e63 /* "glBufferSubData" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x30e63 /* "glBufferSubData" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34e0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2c02e /* "glDeleteBuffers" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2c02e /* "glDeleteBuffers" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34e8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a669 /* "glMapBufferRange" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a669 /* "glMapBufferRange" */);
    }
    iVar12 = iRam00000000000d9640;
    piVar5 = piRam00000000000d34f0;
    *piRam00000000000d34f0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x265d1 /* "glUnmapBuffer" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x265d1 /* "glUnmapBuffer" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d34f8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x34ba3 /* "glGenVertexArrays" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x34ba3 /* "glGenVertexArrays" */);
    }
    iVar12 = iRam00000000000d9640;
    piVar6 = piRam00000000000d3500;
    *piRam00000000000d3500 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ad50 /* "glBindVertexArray" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ad50 /* "glBindVertexArray" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3508 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a67a /* "glDeleteVertexArrays" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a67a /* "glDeleteVertexArrays" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3510 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2c03e /* "glDrawArrays" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2c03e /* "glDrawArrays" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3518 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x357d3 /* "glViewport" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x357d3 /* "glViewport" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3520 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3fc11 /* "glEnable" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3fc11 /* "glEnable" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3528 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ad62 /* "glDisable" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ad62 /* "glDisable" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3530 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2bae9 /* "glIsEnabled" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2bae9 /* "glIsEnabled" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3538 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x29911 /* "glColorMask" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x29911 /* "glColorMask" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3540 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ec29 /* "glDepthMask" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ec29 /* "glDepthMask" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3548 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x34bb5 /* "glBlendFunc" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x34bb5 /* "glBlendFunc" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3550 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x30e73 /* "glClear" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x30e73 /* "glClear" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3558 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2d4c8 /* "glClearColor" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2d4c8 /* "glClearColor" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3560 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x35147 /* "glGetBooleanv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x35147 /* "glGetBooleanv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3568 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x265df /* "glClearBufferfv" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x265df /* "glClearBufferfv" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3570 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x23f3c /* "glFenceSync" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x23f3c /* "glFenceSync" */);
    }
    iVar12 = iRam00000000000d9640;
    piVar7 = piRam00000000000d3578;
    *piRam00000000000d3578 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2db39 /* "glClientWaitSync" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2db39 /* "glClientWaitSync" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3580 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2d4d5 /* "glDeleteSync" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2d4d5 /* "glDeleteSync" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3588 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x357de /* "glDispatchCompute" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x357de /* "glDispatchCompute" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3590 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x23f48 /* "glMemoryBarrier" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x23f48 /* "glMemoryBarrier" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d3598 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2d4e2 /* "glBindImageTexture" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2d4e2 /* "glBindImageTexture" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d35a0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a68f /* "glGenQueriesEXT" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a68f /* "glGenQueriesEXT" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d35a8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2c04b /* "glDeleteQueriesEXT" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2c04b /* "glDeleteQueriesEXT" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d35b0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x30e7b /* "glBeginQueryEXT" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x30e7b /* "glBeginQueryEXT" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d35b8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2a69f /* "glEndQueryEXT" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2a69f /* "glEndQueryEXT" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d35c0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2c05e /* "glQueryCounterEXT" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2c05e /* "glQueryCounterEXT" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d35c8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3fc1a /* "glGetQueryObjectuivEXT" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3fc1a /* "glGetQueryObjectuivEXT" */);
    }
    iVar12 = iRam00000000000d9640;
    *piRam00000000000d35d0 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x3fc31 /* "glGetQueryObjectui64vEXT" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x3fc31 /* "glGetQueryObjectui64vEXT" */);
    }
    iVar12 = iRam00000000000d9640;
    piVar8 = piRam00000000000d35d8;
    *piRam00000000000d35d8 = iVar10;
    if ((iVar12 == 0) || (iVar10 = dlsym(iVar12,0x2ad6c /* "glGetGraphicsResetStatus" */), iVar10 == 0)) {
      iVar10 = eglGetProcAddress(0x2ad6c /* "glGetGraphicsResetStatus" */);
    }
    piVar23 = piRam00000000000d3218;
    *piRam00000000000d35e0 = iVar10;
    piVar36 = pxRam00000000000d3208;
    if (((code *)*piVar23 != (code *)0x0) && (*pxRam00000000000d3208 != 0)) {
      iVar10 = (*(code *)*piVar23)(0x1f02);
      iStack_74 = 0;
      iStack_70 = 2;
      if (iVar10 == 0) {
        *(xunknown1 *)(param_1 + 2) = 0;
        *(xunknown8 *)param_1 = xRam0000000000022278;
code_r0x0005c438:
        piVar17 = piRam00000000000d34b0;
        piVar16 = piRam00000000000d33f0;
        piVar31 = piRam00000000000d3350;
        piVar29 = piRam00000000000d3318;
        piVar27 = piRam00000000000d3278;
        piVar25 = piRam00000000000d3270;
        piVar23 = piRam00000000000d3268;
        bVar14 = false;
        bVar2 = false;
        *(xunknown1 *)((int8)param_1 + 9) = 0;
      }
      else {
        sscanf(iVar10,0x39078 /* "OpenGL ES %d.%d" */,&iStack_70,&iStack_74);
        *param_1 = iStack_70;
        param_1[1] = iStack_74;
        *(bool *)(param_1 + 2) = 2 < iStack_70;
        piVar17 = piRam00000000000d34b0;
        piVar16 = piRam00000000000d33f0;
        piVar31 = piRam00000000000d3350;
        piVar29 = piRam00000000000d3318;
        piVar27 = piRam00000000000d3278;
        piVar25 = piRam00000000000d3270;
        piVar23 = piRam00000000000d3268;
        if (iStack_70 < 3) goto code_r0x0005c438;
        bVar14 = true;
        bVar2 = 1 < iStack_74 || iStack_70 != 3;
        *(bool *)((int8)param_1 + 9) = 0 < iStack_74 || iStack_70 != 3;
      }
      iVar19 = *piVar3;
      iVar13 = *piVar23;
      iVar12 = *piVar25;
      iVar10 = *piVar27;
      iVar34 = *piVar29;
      iVar33 = *piVar31;
      iVar32 = *piVar6;
      iVar30 = *piVar5;
      iVar28 = *piVar17;
      iVar26 = *piVar4;
      iVar24 = *piVar7;
      iVar22 = *piVar16;
      *(bool *)((int8)param_1 + 10) = bVar2;
      param_1[4] = 0;
      if ((bVar14) &&
         ((((((iVar19 == 0 || (iVar13 == 0)) || (iVar12 == 0)) ||
            (((iVar10 == 0 || (iVar34 == 0)) || ((iVar33 == 0 || ((iVar32 == 0 || (iVar30 == 0))))))
            )) || (iVar28 == 0)) || (((iVar26 == 0 || (iVar24 == 0)) || (iVar22 == 0)))))) {
        uVar15 = 1;
        if (iVar19 == 0) {
          uVar15 = 2;
        }
        if (iVar13 != 0) {
          uVar15 = (uint4)(iVar19 == 0);
        }
        if (iVar12 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar10 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar34 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar33 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar32 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar30 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar28 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar26 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar24 == 0) {
          uVar15 = uVar15 + 1;
        }
        if (iVar22 == 0) {
          uVar15 = uVar15 + 1;
        }
        param_1[4] = uVar15;
        if (bVar2 == false) {
code_r0x0005c52c:
          pcVar20 = (code *)*piVar36;
          if ((pcVar20 != (code *)0x0) && (iVar19 != 0)) {
            iStack_6c = 0;
            (*pcVar20)(0x821d,&iStack_6c);
            if (0 < iStack_6c) {
              iVar35 = 0;
              do {
                iVar10 = (*(code *)*piVar3)(0x1f03,iVar35);
                if ((iVar10 != 0) && (iVar9 = strcmp(iVar10,0x357f0 /* "GL_EXT_color_buffer_half_float" */), iVar9 == 0))
                goto code_r0x0005c610;
                iVar35 = iVar35 + 1;
              } while (iVar35 < iStack_6c);
            }
            iVar19 = *piVar3;
            pcVar20 = (code *)*pxRam00000000000d3208;
            piVar36 = pxRam00000000000d3208;
          }
          xVar21 = 0;
          if ((pcVar20 != (code *)0x0) && (iVar19 != 0)) {
            iStack_6c = 0;
            (*pcVar20)(0x821d,&iStack_6c);
            if (0 < iStack_6c) {
              iVar35 = 0;
              do {
                iVar10 = (*(code *)*piVar3)(0x1f03,iVar35);
                if ((iVar10 != 0) && (iVar9 = strcmp(iVar10,0x34bc1 /* "GL_EXT_color_buffer_float" */), iVar9 == 0))
                goto code_r0x0005c610;
                iVar35 = iVar35 + 1;
              } while (iVar35 < iStack_6c);
              xVar21 = 0;
              goto code_r0x0005c61c;
            }
            xVar21 = 0;
          }
          goto code_r0x0005c62c;
        }
      }
      else if (!bVar2) goto code_r0x0005c52c;
      xVar21 = 1;
      goto code_r0x0005c62c;
    }
    xVar11 = 0x39052 /* "gl: glGetString/glGetIntegerv missing" */;
  }
  (*param_2)(1,xVar11);
  xVar11 = 0;
  goto code_r0x0005c6c0;
code_r0x0005c610:
  xVar21 = 1;
code_r0x0005c61c:
  piVar36 = pxRam00000000000d3208;
code_r0x0005c62c:
  pcVar20 = (code *)*piVar36;
  xVar18 = 0;
  *(xunknown1 *)((int8)param_1 + 0xb) = xVar21;
  if ((pcVar20 != (code *)0x0) && (*piVar3 != 0)) {
    iStack_6c = 0;
    (*pcVar20)(0x821d,&iStack_6c);
    if (0 < iStack_6c) {
      iVar35 = 0;
      do {
        iVar10 = (*(code *)*piVar3)(0x1f03,iVar35);
        if ((iVar10 != 0) && (iVar9 = strcmp(iVar10,0x23f58 /* "GL_EXT_disjoint_timer_query" */), iVar9 == 0)) {
          xVar18 = 1;
          goto code_r0x0005c6ac;
        }
        iVar35 = iVar35 + 1;
      } while (iVar35 < iStack_6c);
    }
    xVar18 = 0;
  }
code_r0x0005c6ac:
  xVar11 = 1;
  xVar21 = 0;
  if (*piVar8 != 0) {
    xVar21 = xVar18;
  }
  *(xunknown1 *)(param_1 + 3) = xVar21;
code_r0x0005c6c0:
  if (*(int8 *)(iVar1 + 0x28) == iStack_68) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(xVar11);
  return;
}

/* 0x5c6f4  size=332  gl::Compile(unsigned int, char const*, char const*, void (*)(bool, char const*, ...))  [_ZN2gl7CompileEjPKcS1_PFvbS1_zE] */
uint8 gl__Compile(int4 param_1,xunknown8 param_2,xunknown8 param_3,code *param_4)

{
  xunknown8 xVar1;
  int8 iVar2;
  uint8 uVar3;
  uint8 uVar4;
  int4 iStack_454;
  xunknown8 xStack_450;
  xunknown1 axStack_448 [1024];
  int8 iStack_48;
  
  iVar2 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar2 + 0x28);
  xStack_450 = param_2;
  uVar3 = (*(code *)*piRam00000000000d3370)();
  uVar4 = uVar3 & 0xffffffff;
  (*(code *)*piRam00000000000d3378)(uVar3,1,&xStack_450,0);
  (*(code *)*piRam00000000000d3380)(uVar4);
  iStack_454 = 0;
  (*(code *)*piRam00000000000d3388)(uVar4,0x8b81,&iStack_454);
  if (iStack_454 == 0) {
    memset(axStack_448,0,0x400);
    (*(code *)*piRam00000000000d3390)(uVar4,0x400,0,axStack_448);
    xVar1 = 0x34bdb;
    if (param_1 != 0x8b31) {
      xVar1 = 0x23f74;
    }
    (*param_4)(1,0x2ec35 /* "shader %s (%s) failed: %s" */,param_3,xVar1,axStack_448);
    (*(code *)*piRam00000000000d3398)(uVar4);
    uVar4 = 0;
  }
  if (*(int8 *)(iVar2 + 0x28) == iStack_48) {
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*got___stack_chk_fail)();
  return uVar3;
}

/* 0x5c840  size=372  gl::Link(unsigned int, unsigned int, char const*, void (*)(bool, char const*, ...))  [_ZN2gl4LinkEjjPKcPFvbS1_zE] */
void gl__Link(int4 param_1,int4 param_2,xunknown8 param_3,code *param_4)

{
  int8 iVar1;
  xunknown8 *pxVar2;
  uint8 uVar3;
  uint8 uVar4;
  int4 iStack_45c;
  xunknown1 axStack_458 [1024];
  int8 iStack_58;
  
  iVar1 = tpidr_el0;
  uVar3 = 0;
  iStack_58 = *(int8 *)(iVar1 + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar4 = (*(code *)*piRam00000000000d33b0)(0);
    pxVar2 = piRam00000000000d33b8;
    uVar3 = uVar4 & 0xffffffff;
    (*(code *)*piRam00000000000d33b8)(uVar4,param_1);
    (*(code *)*pxVar2)(uVar3,param_2);
    (*(code *)*piRam00000000000d33c0)(uVar3);
    pxVar2 = piRam00000000000d3398;
    (*(code *)*piRam00000000000d3398)(param_1);
    (*(code *)*pxVar2)(param_2);
    iStack_45c = 0;
    (*(code *)*piRam00000000000d33c8)(uVar3,0x8b82,&iStack_45c);
    if (iStack_45c == 0) {
      memset(axStack_458,0,0x400);
      (*(code *)*piRam00000000000d33d0)(uVar3,0x400,0,axStack_458);
      (*param_4)(1,0x265ef /* "program %s link failed: %s" */,param_3,axStack_458);
      (*(code *)*piRam00000000000d33e0)(uVar3);
      uVar3 = 0;
    }
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_58) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)(uVar3);
  return;
}

/* 0x63cbc  size=792  gl::SavedState::Save()  [_ZN2gl10SavedState4SaveEv] */
void gl__SavedState__Save(int8 param_1)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  xunknown1 xVar3;
  code *pcVar4;
  
  pxVar1 = pxRam00000000000d3208;
  (*(code *)*pxRam00000000000d3208)(0x8ca6,param_1);
  (*(code *)*pxVar1)(0x8caa,param_1 + 4);
  (*(code *)*pxVar1)(0x8b8d,param_1 + 8);
  (*(code *)*pxVar1)(0x85b5,param_1 + 0xc);
  (*(code *)*pxVar1)(0x8894,param_1 + 0x14);
  (*(code *)*pxVar1)(0x84e0,param_1 + 0x10);
  pxVar2 = pxRam00000000000d3310;
  (*(code *)*pxRam00000000000d3310)(0x84c0);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x18);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x38);
  (*(code *)*pxVar2)(0x84c1);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x1c);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x3c);
  (*(code *)*pxVar2)(0x84c2);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x20);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x40);
  (*(code *)*pxVar2)(0x84c3);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x24);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x44);
  (*(code *)*pxVar2)(0x84c4);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x28);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x48);
  (*(code *)*pxVar2)(0x84c5);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x2c);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x4c);
  (*(code *)*pxVar2)(0x84c6);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x30);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x50);
  (*(code *)*pxVar2)(0x84c7);
  (*(code *)*pxVar1)(0x8069,param_1 + 0x34);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x54);
  (*(code *)*pxVar2)(0x84c3);
  (*(code *)*pxVar1)(0x806a,param_1 + 0x58);
  (*(code *)*pxVar1)(0x8919,param_1 + 0x5c);
  (*(code *)*pxVar1)(0xba2,param_1 + 0x60);
  (*(code *)*pxVar1)(0xc10,param_1 + 0xa4);
  (*(code *)*pxVar1)(0xc23,param_1 + 0x70);
  (*(code *)*pxVar1)(0xb72,param_1 + 0x80);
  (*(code *)*pxVar1)(0x80c9,param_1 + 0x84);
  (*(code *)*pxVar1)(0x80c8,param_1 + 0x88);
  (*(code *)*pxVar1)(0x80cb,param_1 + 0x8c);
  (*(code *)*pxVar1)(0x80ca,param_1 + 0x90);
  (*(code *)*pxVar1)(0x8009,param_1 + 0x94);
  (*(code *)*pxVar1)(0x883d,param_1 + 0x98);
  pxVar1 = pxRam00000000000d3538;
  xVar3 = (*(code *)*pxRam00000000000d3538)(0xbe2);
  pcVar4 = (code *)*pxVar1;
  *(xunknown1 *)(param_1 + 0x9c) = xVar3;
  xVar3 = (*pcVar4)(0xb71);
  pcVar4 = (code *)*pxVar1;
  *(xunknown1 *)(param_1 + 0x9d) = xVar3;
  xVar3 = (*pcVar4)(0xb44);
  pcVar4 = (code *)*pxVar1;
  *(xunknown1 *)(param_1 + 0x9e) = xVar3;
  xVar3 = (*pcVar4)(0xc11);
  pcVar4 = (code *)*pxVar1;
  *(xunknown1 *)(param_1 + 0x9f) = xVar3;
  xVar3 = (*pcVar4)(0xb90);
  *(xunknown1 *)(param_1 + 0xa0) = xVar3;
  return;
}

/* 0x63fd4  size=840  gl::SavedState::Restore() const  [_ZNK2gl10SavedState7RestoreEv] */
void gl__SavedState__Restore(xunknown4 *param_1)

{
  xunknown8 *pxVar1;
  xunknown8 *pxVar2;
  xunknown8 *pxVar3;
  
  pxVar1 = pxRam00000000000d3248;
  (*(code *)*pxRam00000000000d3248)(0x8ca9,*param_1);
  (*(code *)*pxVar1)(0x8ca8,param_1[1]);
  (*(code *)*pxRam00000000000d33d8)(param_1[2]);
  (*(code *)*pxRam00000000000d3508)(param_1[3]);
  (*(code *)*pxRam00000000000d34c8)(0x8892,param_1[5]);
  pxVar2 = pxRam00000000000d3310;
  (*(code *)*pxRam00000000000d3310)(0x84c0);
  pxVar1 = pxRam00000000000d3300;
  (*(code *)*pxRam00000000000d3300)(0xde1,param_1[6]);
  pxVar3 = pxRam00000000000d3358;
  (*(code *)*pxRam00000000000d3358)(0,param_1[0xe]);
  (*(code *)*pxVar2)(0x84c1);
  (*(code *)*pxVar1)(0xde1,param_1[7]);
  (*(code *)*pxVar3)(1,param_1[0xf]);
  (*(code *)*pxVar2)(0x84c2);
  (*(code *)*pxVar1)(0xde1,param_1[8]);
  (*(code *)*pxVar3)(2,param_1[0x10]);
  (*(code *)*pxVar2)(0x84c3);
  (*(code *)*pxVar1)(0xde1,param_1[9]);
  (*(code *)*pxVar3)(3,param_1[0x11]);
  (*(code *)*pxVar2)(0x84c4);
  (*(code *)*pxVar1)(0xde1,param_1[10]);
  (*(code *)*pxVar3)(4,param_1[0x12]);
  (*(code *)*pxVar2)(0x84c5);
  (*(code *)*pxVar1)(0xde1,param_1[0xb]);
  (*(code *)*pxVar3)(5,param_1[0x13]);
  (*(code *)*pxVar2)(0x84c6);
  (*(code *)*pxVar1)(0xde1,param_1[0xc]);
  (*(code *)*pxVar3)(6,param_1[0x14]);
  (*(code *)*pxVar2)(0x84c7);
  (*(code *)*pxVar1)(0xde1,param_1[0xd]);
  (*(code *)*pxVar3)(7,param_1[0x15]);
  (*(code *)*pxVar2)(0x84c3);
  (*(code *)*pxVar1)(0x806f,param_1[0x16]);
  (*(code *)*pxVar3)(3,param_1[0x17]);
  (*(code *)*pxVar2)(param_1[4]);
  (*(code *)*pxRam00000000000d3520)(param_1[0x18],param_1[0x19],param_1[0x1a],param_1[0x1b]);
  (*(code *)*pxRam00000000000d32e8)(param_1[0x29],param_1[0x2a],param_1[0x2b],param_1[0x2c]);
  (*(code *)*pxRam00000000000d3540)(param_1[0x1c],param_1[0x1d],param_1[0x1e],param_1[0x1f]);
  (*(code *)*pxRam00000000000d3548)(param_1[0x20]);
  (*(code *)*pxRam00000000000d32b8)(param_1[0x21],param_1[0x22],param_1[0x23],param_1[0x24]);
  (*(code *)*pxRam00000000000d32c0)(param_1[0x25],param_1[0x26]);
  pxVar2 = pxRam00000000000d3530;
  pxVar3 = pxRam00000000000d3528;
  pxVar1 = pxRam00000000000d3530;
  if (*(char *)(param_1 + 0x27) != '\0') {
    pxVar1 = pxRam00000000000d3528;
  }
  (*(code *)*pxVar1)(0xbe2);
  pxVar1 = pxVar2;
  if (*(char *)((int8)param_1 + 0x9d) != '\0') {
    pxVar1 = pxVar3;
  }
  (*(code *)*pxVar1)(0xb71);
  pxVar1 = pxVar2;
  if (*(char *)((int8)param_1 + 0x9e) != '\0') {
    pxVar1 = pxVar3;
  }
  (*(code *)*pxVar1)(0xb44);
  pxVar1 = pxVar2;
  if (*(char *)((int8)param_1 + 0x9f) != '\0') {
    pxVar1 = pxVar3;
  }
  (*(code *)*pxVar1)(0xc11);
  if (*(char *)(param_1 + 0x28) != '\0') {
    pxVar2 = pxVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00064318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*pxVar2)(0xb90);
  return;
}

