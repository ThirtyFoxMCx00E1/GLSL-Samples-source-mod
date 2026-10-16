/* module: Logger  (13 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x999d0  size=68  Logger::Logger()  [_ZN6LoggerC1Ev] */
void Logger__Logger(int8 param_1)

{
  __strncpy_chk2(param_1,0x36f86 /* "AML Mod" */,0x1f,0x1f,8);
  *(xunknown8 *)(param_1 + 0x28) = 0;
  *(xunknown8 *)(param_1 + 0x30) = 0;
  *(xunknown1 *)(param_1 + 0x1f) = 1;
  *(xunknown8 *)(param_1 + 0x20) = 0;
  return;
}

/* 0x99a14  size=40  Logger::ToggleOutput(bool)  [_ZN6Logger12ToggleOutputEb] */
void Logger__ToggleOutput(int8 param_1,uint1 param_2)

{
  if (*(uint1 *)(param_1 + 0x1f) != (param_2 & 1)) {
    *(uint1 *)(param_1 + 0x1f) = param_2 & 1;
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00099a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x30))(param_2 & 1);
      return;
    }
  }
  return;
}

/* 0x99a3c  size=68  Logger::SetTag(char const*)  [_ZN6Logger6SetTagEPKc] */
void Logger__SetTag(int8 param_1,xunknown8 param_2)

{
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_1);
  }
  strncpy(param_1,param_2,0x1e);
  *(xunknown1 *)(param_1 + 0x1e) = 0;
  return;
}

/* 0x99a80  size=216  Logger::Print(eLogPrio, char const*, ...)  [_ZN6Logger5PrintE8eLogPrioPKcz] */
void Logger__Print(int8 param_1,xunknown4 param_2,xunknown8 param_3,xunknown8 param_4,
                  xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8)

{
  int8 iVar1;
  xunknown1 axStack_8b0 [8];
  xunknown8 xStack_8a8;
  xunknown8 xStack_8a0;
  xunknown8 xStack_898;
  xunknown8 xStack_890;
  xunknown8 xStack_888;
  xunknown1 *pxStack_860;
  xunknown1 *pxStack_858;
  xunknown1 *pxStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  xStack_8a8 = param_4;
  xStack_8a0 = param_5;
  xStack_898 = param_6;
  xStack_890 = param_7;
  xStack_888 = param_8;
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    pxStack_858 = axStack_8b0 + 0x30;
    pxStack_850 = axStack_8b0;
    xStack_848 = 0xffffff80ffffffd8;
    pxStack_860 = (xunknown1 *)register_sp;
    vsnprintf(axStack_838,0x800,param_3,&pxStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_2,axStack_838);
    }
    __android_log_write(param_2,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x99b58  size=152  Logger::PrintV(eLogPrio, char const*, std::__va_list)  [_ZN6Logger6PrintVE8eLogPrioPKcSt9__va_list] */
void Logger__PrintV(int8 param_1,xunknown4 param_2,xunknown8 param_3,xunknown8 *param_4)

{
  int8 iVar1;
  xunknown8 xStack_860;
  xunknown8 xStack_858;
  xunknown8 xStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    xStack_858 = param_4[1];
    xStack_860 = *param_4;
    xStack_848 = param_4[3];
    xStack_850 = param_4[2];
    vsnprintf(axStack_838,0x800,param_3,&xStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_2,axStack_838);
    }
    __android_log_write(param_2,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x99bf0  size=216  Logger::PrintTag(eLogPrio, char const*, char const*, ...)  [_ZN6Logger8PrintTagE8eLogPrioPKcS2_z] */
void Logger__PrintTag(int8 param_1,xunknown4 param_2,xunknown8 param_3,xunknown8 param_4,
                     xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8)

{
  int8 iVar1;
  xunknown8 xStack_8a0;
  xunknown8 xStack_898;
  xunknown8 xStack_890;
  xunknown8 xStack_888;
  xunknown1 *pxStack_860;
  xunknown1 *pxStack_858;
  xunknown8 *pxStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  xStack_8a0 = param_5;
  xStack_898 = param_6;
  xStack_890 = param_7;
  xStack_888 = param_8;
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    pxStack_858 = axStack_838 + -0x48;
    pxStack_850 = &xStack_8a0;
    xStack_848 = 0xffffff80ffffffe0;
    pxStack_860 = (xunknown1 *)register_sp;
    vsnprintf(axStack_838,0x800,param_4,&pxStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_2,axStack_838);
    }
    __android_log_write(param_2,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x99cc8  size=156  Logger::PrintTagV(eLogPrio, char const*, char const*, std::__va_list)  [_ZN6Logger9PrintTagVE8eLogPrioPKcS2_St9__va_list] */
void Logger__PrintTagV(int8 param_1,xunknown4 param_2,xunknown8 param_3,xunknown8 param_4,
                      xunknown8 *param_5)

{
  int8 iVar1;
  xunknown8 xStack_860;
  xunknown8 xStack_858;
  xunknown8 xStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    xStack_858 = param_5[1];
    xStack_860 = *param_5;
    xStack_848 = param_5[3];
    xStack_850 = param_5[2];
    vsnprintf(axStack_838,0x800,param_4,&xStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_2,axStack_838);
    }
    __android_log_write(param_2,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x99d64  size=216  Logger::Info(char const*, ...)  [_ZN6Logger4InfoEPKcz] */
void Logger__Info(int8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8)

{
  int8 iVar1;
  xunknown8 xStack_8b0;
  xunknown8 xStack_8a8;
  xunknown8 xStack_8a0;
  xunknown8 xStack_898;
  xunknown8 xStack_890;
  xunknown8 xStack_888;
  xunknown1 *pxStack_860;
  xunknown1 *pxStack_858;
  xunknown8 *pxStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  xStack_8b0 = param_3;
  xStack_8a8 = param_4;
  xStack_8a0 = param_5;
  xStack_898 = param_6;
  xStack_890 = param_7;
  xStack_888 = param_8;
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    pxStack_858 = axStack_838 + -0x48;
    pxStack_850 = &xStack_8b0;
    xStack_848 = 0xffffff80ffffffd0;
    pxStack_860 = (xunknown1 *)register_sp;
    vsnprintf(axStack_838,0x800,param_2,&pxStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(4,axStack_838);
    }
    __android_log_write(4,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x99e3c  size=156  Logger::InfoV(char const*, std::__va_list)  [_ZN6Logger5InfoVEPKcSt9__va_list] */
void Logger__InfoV(int8 param_1,xunknown8 param_2,xunknown8 *param_3)

{
  int8 iVar1;
  xunknown8 xStack_860;
  xunknown8 xStack_858;
  xunknown8 xStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    xStack_858 = param_3[1];
    xStack_860 = *param_3;
    xStack_848 = param_3[3];
    xStack_850 = param_3[2];
    vsnprintf(axStack_838,0x800,param_2,&xStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(4,axStack_838);
    }
    __android_log_write(4,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x99ed8  size=216  Logger::Error(char const*, ...)  [_ZN6Logger5ErrorEPKcz] */
void Logger__Error(int8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                  xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8)

{
  int8 iVar1;
  xunknown8 xStack_8b0;
  xunknown8 xStack_8a8;
  xunknown8 xStack_8a0;
  xunknown8 xStack_898;
  xunknown8 xStack_890;
  xunknown8 xStack_888;
  xunknown1 *pxStack_860;
  xunknown1 *pxStack_858;
  xunknown8 *pxStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  xStack_8b0 = param_3;
  xStack_8a8 = param_4;
  xStack_8a0 = param_5;
  xStack_898 = param_6;
  xStack_890 = param_7;
  xStack_888 = param_8;
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    pxStack_858 = axStack_838 + -0x48;
    pxStack_850 = &xStack_8b0;
    xStack_848 = 0xffffff80ffffffd0;
    pxStack_860 = (xunknown1 *)register_sp;
    vsnprintf(axStack_838,0x800,param_2,&pxStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(6,axStack_838);
    }
    __android_log_write(6,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x99fb0  size=156  Logger::ErrorV(char const*, std::__va_list)  [_ZN6Logger6ErrorVEPKcSt9__va_list] */
void Logger__ErrorV(int8 param_1,xunknown8 param_2,xunknown8 *param_3)

{
  int8 iVar1;
  xunknown8 xStack_860;
  xunknown8 xStack_858;
  xunknown8 xStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    xStack_858 = param_3[1];
    xStack_860 = *param_3;
    xStack_848 = param_3[3];
    xStack_850 = param_3[2];
    vsnprintf(axStack_838,0x800,param_2,&xStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(6,axStack_838);
    }
    __android_log_write(6,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x9a04c  size=212  Logger::If(bool, char const*, ...)  [_ZN6Logger2IfEbPKcz] */
void Logger__If(int8 param_1,uint8 param_2,xunknown8 param_3,xunknown8 param_4,xunknown8 param_5,
               xunknown8 param_6,xunknown8 param_7,xunknown8 param_8)

{
  int8 iVar1;
  xunknown1 axStack_8b0 [8];
  xunknown8 xStack_8a8;
  xunknown8 xStack_8a0;
  xunknown8 xStack_898;
  xunknown8 xStack_890;
  xunknown8 xStack_888;
  xunknown1 *pxStack_860;
  xunknown1 *pxStack_858;
  xunknown1 *pxStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  xStack_8a8 = param_4;
  xStack_8a0 = param_5;
  xStack_898 = param_6;
  xStack_890 = param_7;
  xStack_888 = param_8;
  if (((param_2 & 1) == 0) && ((*(uint1 *)(param_1 + 0x1f) & 1) != 0)) {
    pxStack_858 = axStack_8b0 + 0x30;
    pxStack_850 = axStack_8b0;
    xStack_848 = 0xffffff80ffffffd8;
    pxStack_860 = (xunknown1 *)register_sp;
    vsnprintf(axStack_838,0x800,param_3,&pxStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(7,axStack_838);
    }
    __android_log_write(7,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x9a120  size=148  Logger::IfV(bool, char const*, std::__va_list)  [_ZN6Logger3IfVEbPKcSt9__va_list] */
void Logger__IfV(int8 param_1,uint8 param_2,xunknown8 param_3,xunknown8 *param_4)

{
  int8 iVar1;
  xunknown8 xStack_860;
  xunknown8 xStack_858;
  xunknown8 xStack_850;
  xunknown8 xStack_848;
  xunknown1 axStack_838 [2048];
  int8 iStack_38;
  
  iVar1 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar1 + 0x28);
  if (((param_2 & 1) == 0) && ((*(uint1 *)(param_1 + 0x1f) & 1) != 0)) {
    xStack_858 = param_4[1];
    xStack_860 = *param_4;
    xStack_848 = param_4[3];
    xStack_850 = param_4[2];
    vsnprintf(axStack_838,0x800,param_3,&xStack_860);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(7,axStack_838);
    }
    __android_log_write(7,param_1,axStack_838);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

