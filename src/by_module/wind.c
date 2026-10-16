/* module: wind  (8 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x77cd8  size=40  wind::SwayLocation()  [_ZN4wind12SwayLocationEv] */
xunknown4 wind__SwayLocation(void)

{
  xunknown4 xVar1;
  
  xVar1 = xRam00000000000d8c78;
  if ((uRam000000000010c180 & uRam000000000010c184 & 1) == 0) {
    xVar1 = 0xffffffff;
  }
  return xVar1;
}

/* 0x77d00  size=12  wind::InTree()  [_ZN4wind6InTreeEv] */
xunknown1 wind__InTree(void)

{
  return xRam000000000010c188;
}

/* 0x77d0c  size=12  wind::DrawKind()  [_ZN4wind8DrawKindEv] */
xunknown4 wind__DrawKind(void)

{
  return xRam000000000010c18c;
}

/* 0x77d18  size=12  wind::DrawId()  [_ZN4wind6DrawIdEv] */
xunknown4 wind__DrawId(void)

{
  return xRam000000000010c190;
}

/* 0x77d24  size=28  wind::Tags()  [_ZN4wind4TagsEv] */
uint1 wind__Tags(void)

{
  return uRam000000000010c194 & uRam000000000010c195 & 1;
}

/* 0x77d40  size=264  wind::AfterLink()  [_ZN4wind9AfterLinkEv] */
void wind__AfterLink(void)

{
  xunknown8 xVar1;
  uint4 uVar2;
  int8 iVar3;
  uint1 uVar4;
  int4 aiStack_4c [3];
  xunknown1 xStack_40;
  xunknown4 xStack_3c;
  int8 iStack_38;
  
  iVar3 = tpidr_el0;
  iStack_38 = *(int8 *)(iVar3 + 0x28);
  if ((uRam000000000010c180 == '\x01') && ((uRam000000000010c184 & 1) == 0)) {
    xStack_3c = 0;
    aiStack_4c[0] = 2;
    aiStack_4c[1] = 0;
    aiStack_4c[2] = 0;
    xStack_40 = 0;
    uVar4 = gl__Load_plt(aiStack_4c,pcRam000000000010c198);
    uRam000000000010c184 = uVar4 & 1;
    if (((uVar4 & 1) != 0) && ((int4)xRam00000000000d8c78 < 0)) {
      aiStack_4c[0] = 0;
      (*(code *)*pxRam00000000000d3208)(0x8869,aiStack_4c);
      uVar2 = aiStack_4c[0] - 1;
      if (aiStack_4c[0] < 9) {
        uVar2 = 0xffffffff;
      }
      xRam00000000000d8c78 = 0xf;
      if (aiStack_4c[0] < 0x10) {
        xRam00000000000d8c78 = uVar2;
      }
      xVar1 = 0x32adb /* " - wind off" */;
      if (-1 < (int4)xRam00000000000d8c78) {
        xVar1 = 0x29893;
      }
      (*pcRam000000000010c198)
                (xRam00000000000d8c78 >> 0x1f,0x2cf87 /* "wind: %d vertex attributes - zSway at location %d%s" */,aiStack_4c[0],xRam00000000000d8c78,xVar1);
    }
  }
  if (*(int8 *)(iVar3 + 0x28) == iStack_38) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x77e48  size=96  wind::Install(void (*)(bool, char const*, ...), float)  [_ZN4wind7InstallEPFvbPKczEf] */
uint4 wind__Install(float4 param_1,code *param_2)

{
  uint4 uVar1;
  
  pcRam000000000010c198 = param_2;
  uVar1 = FUN_00077ea8();
  if ((uVar1 & 1) != 0) {
    uRam000000000010c180 = 1;
    (*pcRam000000000010c198)((float8)param_1,0,0x39e5e /* "wind: trees + palms only (the game's model special type), strength %.2..." */);
  }
  return uVar1 & 1;
}

/* 0x78104  size=88  wind::InstallTags(void (*)(bool, char const*, ...))  [_ZN4wind11InstallTagsEPFvbPKczE] */
uint4 wind__InstallTags(code *param_1)

{
  uint4 uVar1;
  
  if (pcRam000000000010c198 == (code *)0x0) {
    pcRam000000000010c198 = param_1;
  }
  uVar1 = FUN_00077ea8();
  if ((uVar1 & 1) != 0) {
    uRam000000000010c194 = 1;
    (*pcRam000000000010c198)(0,0x36a04 /* "wind: shadow tags on - static buildings / LOD stand-ins / objects mark..." */);
  }
  return uVar1 & 1;
}

