/* module: rq  (12 functions)
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x8ffc4  size=356  rq::Init(void (*)(bool, char const*, ...))  [_ZN2rq4InitEPFvbPKczE] */
bool rq__Init(code *param_1)

{
  xunknown8 *pxVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  xunknown8 xVar7;
  
  pxVar1 = pxRam00000000000d31f8;
  pcRam0000000000170fb0 = param_1;
  xVar7 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                    ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
  iRam0000000000170fb8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar7,0x355a9 /* "renderQueue" */);
  iRam0000000000170fc0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar7,0x38dd8 /* "_Z14OS_MutexObtainPv" */);
  iRam0000000000170fc8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar7,0x32b17 /* "_Z15OS_MutexReleasePv" */);
  iRam0000000000170fd0 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar7,0x38ded /* "_Z24RQ_Command_rqDebugMarkerRPc" */);
  iRam0000000000170fd8 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,xVar7,0x34960 /* "_ZN11RenderQueue7ProcessEv" */);
  bVar2 = iRam0000000000170fb8 != 0;
  bVar3 = iRam0000000000170fc0 != 0;
  bVar4 = iRam0000000000170fc8 != 0;
  bVar5 = iRam0000000000170fd0 != 0;
  bVar6 = iRam0000000000170fd8 != 0;
  if ((((!bVar2 || !bVar3) || !bVar4) || !bVar5) || !bVar6) {
    (*pcRam0000000000170fb0)(1,0x36e31 /* "rq: symbols missing" */);
  }
  return (((bVar2 && bVar3) && bVar4) && bVar5) && bVar6;
}

/* 0x90128  size=44  rq::Threaded()  [_ZN2rq8ThreadedEv] */
bool rq__Threaded(void)

{
  if ((iRam0000000000170fb8 == (int8 *)0x0) || (*iRam0000000000170fb8 == 0)) {
    return false;
  }
  return *(char *)(*iRam0000000000170fb8 + 1000) != '\0';
}

/* 0x90154  size=36  rq::Ready()  [_ZN2rq5ReadyEv] */
bool rq__Ready(void)

{
  if (iRam0000000000170fb8 == (int8 *)0x0) {
    return false;
  }
  return *iRam0000000000170fb8 != 0;
}

/* 0x90178  size=324  rq::Describe(void (*)(bool, char const*, ...))  [_ZN2rq8DescribeEPFvbPKczE] */
void rq__Describe(code *UNRECOVERED_JUMPTABLE)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  int4 iVar3;
  int8 iVar4;
  int4 iVar5;
  int8 iVar6;
  int8 iVar7;
  xunknown8 xStack_e0;
  xunknown8 xStack_d8;
  xunknown8 xStack_d0;
  xunknown8 xStack_c8;
  xunknown8 xStack_c0;
  xunknown8 xStack_b8;
  xunknown8 xStack_b0;
  xunknown8 xStack_a8;
  xunknown8 xStack_a0;
  xunknown8 xStack_98;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown8 xStack_70;
  xunknown8 xStack_68;
  int8 iStack_58;
  
  iVar2 = tpidr_el0;
  iStack_58 = *(int8 *)(iVar2 + 0x28);
  if ((iRam0000000000170fb8 == (int8 *)0x0) || (iVar4 = *iRam0000000000170fb8, iVar4 == 0)) {
    if (*(int8 *)(iVar2 + 0x28) == iStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00090250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(1,0x41274 /* "rq: renderQueue pointer is null" */);
      return;
    }
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    iVar7 = 0;
    xStack_d8 = 0;
    xStack_e0 = 0;
    xStack_c8 = 0;
    xStack_d0 = 0;
    xStack_b8 = 0;
    xStack_c0 = 0;
    xStack_a8 = 0;
    xStack_b0 = 0;
    xStack_98 = 0;
    xStack_a0 = 0;
    xStack_88 = 0;
    xStack_90 = 0;
    xStack_78 = 0;
    xStack_80 = 0;
    xStack_68 = 0;
    xStack_70 = 0;
    do {
      if (*(int8 *)(iVar4 + iVar6 * 8) == 0) {
        iVar3 = FUN_000902bc((int8)&xStack_e0 + iVar7,0xffffffffffffffff,0x80 - iVar7);
        iVar7 = iVar7 + iVar3;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x32);
    pxVar1 = (xunknown8 *)0x3556f /* "none" */;
    if (iVar7 != 0) {
      pxVar1 = &xStack_e0;
    }
    (*UNRECOVERED_JUMPTABLE)
              (0,0x3cec3 /* "rq: queue %p threaded %d mutex %d, %d handlers set, free slots: %s" */,iVar4,*(xunknown1 *)(iVar4 + 1000),*(xunknown1 *)(iVar4 + 0x3e9),iVar5,
               pxVar1);
    if (*(int8 *)(iVar2 + 0x28) == iStack_58) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x90360  size=508  rq::Register(void (*)(char**))  [_ZN2rq8RegisterEPFvPPcE] */
uint8 rq__Register(xunknown8 param_1)

{
  int8 iVar1;
  xunknown8 xVar2;
  int8 iVar3;
  int8 iVar4;
  int4 iVar5;
  int8 *piVar6;
  uint8 uVar7;
  int8 iVar8;
  int8 *piVar9;
  int8 aiStack_70 [5];
  int8 iStack_48;
  
  iVar4 = tpidr_el0;
  iStack_48 = *(int8 *)(iVar4 + 0x28);
  uVar7 = (uint8)uRam00000000000d8d9c;
  if ((int4)uRam00000000000d8d9c < 0) {
    if ((((uRam0000000000170fe0 & 1) == 0) && (iRam0000000000170fb8 != (xunknown8 *)0x0)) &&
       (piVar9 = (int8 *)*iRam0000000000170fb8, piVar9 != (int8 *)0x0)) {
      uVar7 = 0;
      uRam0000000000170fe0 = 1;
      piVar6 = piVar9;
      do {
        if (*piVar6 == iRam0000000000170fd0) {
          iRam0000000000170fe8 = iRam0000000000170fd0;
          xRam0000000000170ff0 = param_1;
          *piVar6 = (int8)FUN_0009055c;
          uRam00000000000d8d9c = (uint4)uVar7;
          (*pcRam0000000000170fb0)(0,0x3cf06 /* "rq: took over rqDebugMarker (id %d) for our commands" */,uVar7 & 0xffffffff);
          goto code_r0x0009052c;
        }
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar7 != 0x32);
      iVar8 = piVar9[0x2f];
      aiStack_70[1] = 0;
      aiStack_70[0] = 0;
      aiStack_70[3] = 0;
      aiStack_70[2] = 0;
      if (iVar8 != 0) {
        iVar5 = dladdr(iVar8,aiStack_70);
        iVar1 = aiStack_70[0];
        if (iVar5 == 0 || aiStack_70[0] == 0) {
          iVar1 = 0x418d1;
        }
        xVar2 = 0x296c1;
        iVar3 = aiStack_70[2];
        if (iVar5 == 0 || aiStack_70[2] == 0) {
          xVar2 = 0x29893;
          iVar3 = 0x29893;
        }
        uVar7 = 0x2f;
        (*pcRam0000000000170fb0)(1,0x2965c /* "rq: slot %d holds %p (%s%s%s) instead of rqDebugMarker %p - taking the..." */,0x2f,iVar8,iVar1,xVar2,iVar3);
        iRam0000000000170fe8 = iVar8;
        xRam0000000000170ff0 = param_1;
        piVar9[0x2f] = (int8)FUN_0009055c;
        uRam00000000000d8d9c = 0x2f;
        goto code_r0x0009052c;
      }
      (*pcRam0000000000170fb0)(1,0x2965c /* "rq: slot %d holds %p (%s%s%s) instead of rqDebugMarker %p - taking the..." */,0x2f,0,0x418d1,0x29893,0x29893);
      (*pcRam0000000000170fb0)(1,0x2b97f /* "rq: slot %d is empty - our commands are off" */,0x2f);
    }
    uVar7 = 0xffffffff;
  }
code_r0x0009052c:
  if (*(int8 *)(iVar4 + 0x28) == iStack_48) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*got___stack_chk_fail)();
  return uVar7;
}

/* 0x905a0  size=192  rq::Enqueue(int, unsigned long)  [_ZN2rq7EnqueueEim] */
void rq__Enqueue(xunknown4 param_1,xunknown8 param_2)

{
  xunknown4 *pxVar1;
  char cVar2;
  xunknown4 *pxVar3;
  int8 iVar4;
  
  iVar4 = *iRam0000000000170fb8;
  pxVar3 = *(xunknown4 **)(iVar4 + 0x420);
  *(xunknown4 *)(iVar4 + 0x428) = param_1;
  *pxVar3 = param_1;
  pxVar1 = pxVar3 + 5;
  *(xunknown8 *)(pxVar3 + 1) = 0x5a795a4766784d6b;
  *(xunknown8 *)(pxVar3 + 3) = param_2;
  *(xunknown4 **)(iVar4 + 0x420) = pxVar1;
  if (*(char *)(iVar4 + 0x3e9) == '\0') {
    FUN_000c5430((int8)pxVar1 - *(int8 *)(iVar4 + 0x418),iVar4 + 0x418);
    cVar2 = *(char *)(iVar4 + 1000);
  }
  else {
    (*iRam0000000000170fc0)(*(xunknown8 *)(iVar4 + 0x3f0));
    FUN_000c5430((int8)pxVar1 - *(int8 *)(iVar4 + 0x418),iVar4 + 0x418);
    (*iRam0000000000170fc8)(*(xunknown8 *)(iVar4 + 0x3f0));
    cVar2 = *(char *)(iVar4 + 1000);
  }
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0009065c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*iRam0000000000170fd8)(iVar4);
    return;
  }
  return;
}

/* 0x90808  size=348  rq::Listen(rq::Event, void (*)(unsigned int, unsigned int))  [_ZN2rq6ListenENS_5EventEPFvjjE] */
void rq__Listen(uint8 param_1,xunknown8 param_2)

{
  uint8 uVar1;
  xunknown8 *pxVar2;
  int8 iVar3;
  xunknown8 *pxVar4;
  uint8 uVar5;
  uint8 uVar6;
  xunknown8 *pxVar7;
  xunknown8 *pxVar8;
  uint8 uVar9;
  uint8 *puVar10;
  xunknown8 *pxVar11;
  uint8 uVar12;
  xunknown8 *pxVar13;
  xunknown8 *pxVar14;
  xunknown8 xVar15;
  xunknown8 xVar16;
  xunknown8 xVar17;
  
  param_1 = param_1 & 0xffffffff;
  puVar10 = (uint8 *)(&iRam0000000000170ff8 + param_1 * 3);
  pxVar13 = (xunknown8 *)(&iRam0000000000171000)[param_1 * 3];
  if (pxVar13 < (xunknown8 *)(&iRam0000000000171008)[param_1 * 3]) {
    pxVar14 = pxVar13 + 1;
    *pxVar13 = param_2;
    goto code_r0x0009093c;
  }
  pxVar11 = (xunknown8 *)*puVar10;
  uVar5 = ((int8)pxVar13 - (int8)pxVar11 >> 3) + 1;
  if (uVar5 >> 0x3d != 0) {
    FUN_00091054(puVar10);
code_r0x00090960:
    FUN_0005ec14();
    xRam00000000001710b8 = 1;
    return;
  }
  uVar12 = (&iRam0000000000171008)[param_1 * 3] - (int8)pxVar11;
  uVar1 = (int8)uVar12 >> 2;
  if ((uint8)((int8)uVar12 >> 2) <= uVar5) {
    uVar1 = uVar5;
  }
  if (0x7ffffffffffffff7 < uVar12) {
    uVar1 = 0x1fffffffffffffff;
  }
  if (uVar1 >> 0x3d != 0) goto code_r0x00090960;
  iVar3 = operator_new_plt(uVar1 * 8);
  pxVar4 = (xunknown8 *)(iVar3 + ((int8)pxVar13 - (int8)pxVar11));
  pxVar14 = pxVar4 + 1;
  *pxVar4 = param_2;
  if ((int8)pxVar13 - (int8)pxVar11 != 0) {
    uVar5 = ((int8)pxVar13 - (int8)pxVar11) - 8;
    if ((0x17 < uVar5) && (0x1f < (uint8)((int8)pxVar11 - iVar3))) {
      pxVar7 = pxVar13 + -2;
      uVar5 = (uVar5 >> 3) + 1;
      uVar6 = uVar5 & 0x3ffffffffffffffc;
      pxVar13 = pxVar13 + -uVar6;
      pxVar4 = pxVar4 + -uVar6;
      pxVar8 = (xunknown8 *)((int8)pxVar7 + (iVar3 - (int8)pxVar11));
      uVar9 = uVar6;
      do {
        pxVar2 = pxVar7 + -1;
        xVar17 = pxVar7[-2];
        xVar16 = pxVar7[1];
        xVar15 = *pxVar7;
        uVar9 = uVar9 - 4;
        pxVar7 = pxVar7 + -4;
        pxVar8[-1] = *pxVar2;
        pxVar8[-2] = xVar17;
        pxVar8[1] = xVar16;
        *pxVar8 = xVar15;
        pxVar8 = pxVar8 + -4;
      } while (uVar9 != 0);
      if (uVar5 == uVar6) goto code_r0x00090924;
    }
    do {
      pxVar13 = pxVar13 + -1;
      pxVar4 = pxVar4 + -1;
      *pxVar4 = *pxVar13;
    } while (pxVar13 != pxVar11);
  }
code_r0x00090924:
  *puVar10 = (uint8)pxVar4;
  (&iRam0000000000171000)[param_1 * 3] = (int8)pxVar14;
  (&iRam0000000000171008)[param_1 * 3] = iVar3 + uVar1 * 8;
  if (pxVar11 != (xunknown8 *)0x0) {
    operator_delete_plt(pxVar11,uVar12);
  }
code_r0x0009093c:
  (&iRam0000000000171000)[param_1 * 3] = (int8)pxVar14;
  return;
}

/* 0x90964  size=16  rq::Shutdown()  [_ZN2rq8ShutdownEv] */
void rq__Shutdown(void)

{
  xRam00000000001710b8 = 1;
  return;
}

/* 0x90974  size=272  rq::Post(rq::Event, unsigned int)  [_ZN2rq4PostENS_5EventEj] */
xunknown8 rq__Post(uint4 param_1,uint8 param_2)

{
  int4 *piVar1;
  char cVar2;
  int4 iVar3;
  xunknown8 xVar4;
  int4 *piVar5;
  int8 iVar6;
  
  if (iRam00000000000d8da0 < 0) {
    if (*iRam0000000000170fb8 != 0) {
      param_2 = param_2 & 0xffffffff;
      iRam00000000000d8da0 = rq__Register_plt(FUN_00090a84);
      if (-1 < iRam00000000000d8da0) goto code_r0x00090998;
    }
    xVar4 = 0;
  }
  else {
code_r0x00090998:
    iVar3 = iRam00000000000d8da0;
    iVar6 = *iRam0000000000170fb8;
    piVar5 = *(int4 **)(iVar6 + 0x420);
    *(int4 *)(iVar6 + 0x428) = iRam00000000000d8da0;
    *piVar5 = iVar3;
    piVar1 = piVar5 + 5;
    piVar5[1] = 0x66784d6b;
    piVar5[2] = 0x5a795a47;
    *(uint8 *)(piVar5 + 3) = param_2 & 0xffffffff | (uint8)param_1 << 0x20;
    *(int4 **)(iVar6 + 0x420) = piVar1;
    if (*(char *)(iVar6 + 0x3e9) == '\0') {
      FUN_000c5430((int8)piVar1 - *(int8 *)(iVar6 + 0x418),iVar6 + 0x418);
      cVar2 = *(char *)(iVar6 + 1000);
    }
    else {
      (*iRam0000000000170fc0)(*(xunknown8 *)(iVar6 + 0x3f0));
      FUN_000c5430((int8)piVar1 - *(int8 *)(iVar6 + 0x418),iVar6 + 0x418);
      (*iRam0000000000170fc8)(*(xunknown8 *)(iVar6 + 0x3f0));
      cVar2 = *(char *)(iVar6 + 1000);
    }
    if (cVar2 == '\0') {
      (*iRam0000000000170fd8)(iVar6);
    }
    xVar4 = 1;
  }
  return xVar4;
}

/* 0x90b5c  size=328  rq::PostIfRoom(rq::Event, unsigned int, unsigned int)  [_ZN2rq10PostIfRoomENS_5EventEjj] */
xunknown8 rq__PostIfRoom(uint4 param_1,uint8 param_2,uint4 param_3)

{
  char cVar1;
  int4 iVar2;
  xunknown8 xVar3;
  int4 *piVar4;
  int4 *piVar5;
  int8 iVar6;
  
  if ((iRam0000000000170fb8 == (int8 *)0x0) || (iVar6 = *iRam0000000000170fb8, iVar6 == 0)) {
code_r0x00090c70:
    xVar3 = 0;
  }
  else {
    piVar4 = *(int4 **)(iVar6 + 0x420);
    if (piVar4 == (int4 *)0x0) {
      return 0;
    }
    piVar5 = *(int4 **)(iVar6 + 0x400);
    if (piVar5 == (int4 *)0x0) {
      return 0;
    }
    if (piVar5 < piVar4) {
      return 0;
    }
    if ((uint8)((int8)piVar5 - (int8)piVar4) < (uint8)param_3) {
      return 0;
    }
    if (iRam00000000000d8da0 < 0) {
      param_2 = param_2 & 0xffffffff;
      iRam00000000000d8da0 = rq__Register_plt(FUN_00090a84);
      if (iRam00000000000d8da0 < 0) goto code_r0x00090c70;
      iVar6 = *iRam0000000000170fb8;
      piVar4 = *(int4 **)(iVar6 + 0x420);
    }
    iVar2 = iRam00000000000d8da0;
    *(int4 *)(iVar6 + 0x428) = iRam00000000000d8da0;
    *piVar4 = iVar2;
    piVar5 = piVar4 + 5;
    *(uint8 *)(piVar4 + 3) = param_2 & 0xffffffff | (uint8)param_1 << 0x20;
    piVar4[1] = 0x66784d6b;
    piVar4[2] = 0x5a795a47;
    *(int4 **)(iVar6 + 0x420) = piVar5;
    if (*(char *)(iVar6 + 0x3e9) == '\0') {
      FUN_000c5430((int8)piVar5 - *(int8 *)(iVar6 + 0x418),iVar6 + 0x418);
      cVar1 = *(char *)(iVar6 + 1000);
    }
    else {
      (*iRam0000000000170fc0)(*(xunknown8 *)(iVar6 + 0x3f0));
      FUN_000c5430((int8)piVar5 - *(int8 *)(iVar6 + 0x418),iVar6 + 0x418);
      (*iRam0000000000170fc8)(*(xunknown8 *)(iVar6 + 0x3f0));
      cVar1 = *(char *)(iVar6 + 1000);
    }
    if (cVar1 == '\0') {
      (*iRam0000000000170fd8)(iVar6);
    }
    xVar3 = 1;
  }
  return xVar3;
}

/* 0x90d60  size=560  rq::ListenSelect(void (*)(void const*))  [_ZN2rq12ListenSelectEPFvPKvE] */
int8 rq__ListenSelect(int8 param_1,xunknown8 param_2,int8 *param_3)

{
  int8 *piVar1;
  xunknown8 *pxVar2;
  int8 iVar3;
  int8 *piVar4;
  int8 iVar5;
  uint8 uVar6;
  uint8 uVar7;
  int8 *piVar8;
  int8 *piVar9;
  uint8 uVar10;
  uint8 uVar11;
  int8 iVar12;
  int8 *piVar13;
  int8 *piVar14;
  int8 iVar15;
  xunknown1 axVar16 [16];
  
  piVar14 = xRam00000000001710c8;
  piVar4 = xRam00000000001710c0;
  if (xRam00000000001710c8 < xRam00000000001710d0) {
    piVar13 = xRam00000000001710c8 + 1;
    *xRam00000000001710c8 = param_1;
    iVar3 = param_1;
    goto code_r0x00090e98;
  }
  iVar12 = (int8)xRam00000000001710c8 - (int8)xRam00000000001710c0;
  uVar6 = (iVar12 >> 3) + 1;
  if (uVar6 >> 0x3d != 0) {
    FUN_00091068(&xRam00000000001710c0);
code_r0x00090f8c:
    axVar16 = FUN_0005ec14();
    pxVar2 = pxRam00000000000d31f8;
    if (iRam0000000000170fb8 == (int8 *)0x0) {
      return 0;
    }
    iVar3 = *iRam0000000000170fb8;
    if (iVar3 != 0) {
      iVar12 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                         ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
      if (iVar12 == 0) {
        return 0;
      }
      iVar12 = (**(code **)(*(int8 *)*pxVar2 + 0x28))((int8 *)*pxVar2,iVar12,axVar16._0_8_);
      if (iVar12 == 0) {
        return 0;
      }
      iVar5 = 0;
      do {
        if (*(int8 *)(iVar3 + iVar5) == iVar12) {
          *param_3 = iVar12;
          *(int8 *)(iVar3 + iVar5) = axVar16._8_8_;
          return 1;
        }
        iVar5 = iVar5 + 8;
      } while (iVar5 != 400);
    }
    return 0;
  }
  uVar11 = (int8)xRam00000000001710d0 - (int8)xRam00000000001710c0;
  uVar10 = (int8)uVar11 >> 2;
  if ((uint8)((int8)uVar11 >> 2) <= uVar6) {
    uVar10 = uVar6;
  }
  if (0x7ffffffffffffff7 < uVar11) {
    uVar10 = 0x1fffffffffffffff;
  }
  if (uVar10 >> 0x3d != 0) goto code_r0x00090f8c;
  iVar3 = operator_new_plt(uVar10 * 8);
  xRam00000000001710c0 = (int8 *)(iVar3 + iVar12);
  xRam00000000001710d0 = (int8 *)(iVar3 + uVar10 * 8);
  piVar13 = xRam00000000001710c0 + 1;
  *xRam00000000001710c0 = param_1;
  if ((int8)piVar14 - (int8)piVar4 != 0) {
    uVar6 = ((int8)piVar14 - (int8)piVar4) - 8;
    if ((0x17 < uVar6) && (0x1f < (uint8)((int8)piVar4 - iVar3))) {
      piVar8 = piVar14 + -2;
      uVar6 = (uVar6 >> 3) + 1;
      uVar7 = uVar6 & 0x3ffffffffffffffc;
      piVar14 = piVar14 + -uVar7;
      xRam00000000001710c0 = xRam00000000001710c0 + -uVar7;
      piVar9 = (int8 *)((int8)piVar8 + (iVar3 - (int8)piVar4));
      uVar10 = uVar7;
      do {
        piVar1 = piVar8 + -1;
        iVar15 = piVar8[-2];
        iVar5 = piVar8[1];
        iVar12 = *piVar8;
        uVar10 = uVar10 - 4;
        piVar8 = piVar8 + -4;
        piVar9[-1] = *piVar1;
        piVar9[-2] = iVar15;
        piVar9[1] = iVar5;
        *piVar9 = iVar12;
        piVar9 = piVar9 + -4;
      } while (uVar10 != 0);
      if (uVar6 == uVar7) goto code_r0x00090e7c;
    }
    do {
      piVar14 = piVar14 + -1;
      xRam00000000001710c0 = xRam00000000001710c0 + -1;
      *xRam00000000001710c0 = *piVar14;
    } while (piVar14 != piVar4);
  }
code_r0x00090e7c:
  if (piVar4 != (int8 *)0x0) {
    xRam00000000001710c8 = piVar13;
    iVar3 = operator_delete_plt(piVar4,uVar11);
  }
code_r0x00090e98:
  pxVar2 = pxRam00000000000d31f8;
  xRam00000000001710c8 = piVar13;
  if ((uRam00000000001710e1 & 1) == 0) {
    iVar3 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    if ((iVar3 == 0) ||
       (piVar4 = (int8 *)*pxVar2, iVar3 = (**(code **)(*piVar4 + 0x28))(piVar4,iVar3,0x2bdbb /* "_Z25RQ_Command_rqTargetSelectRPc" */),
       iVar3 == 0)) {
      iVar3 = 0;
      if (pcRam0000000000170fb0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00090f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (*pcRam0000000000170fb0)(1,0x40354 /* "rq: rqTargetSelect missing" */);
        return iVar3;
      }
    }
    else {
      boot__PrologueOk_plt(iVar3,0x2bdbb /* "_Z25RQ_Command_rqTargetSelectRPc" */,0x32b2d /* "hooked anyway (used since 0.2)" */);
      piVar4 = (int8 *)*pxVar2;
      iVar3 = (**(code **)(*piVar4 + 0x30))(piVar4,iVar3,xRam00000000000d37f0,pxRam00000000000d37f8)
      ;
      uRam00000000001710e1 = 1;
    }
  }
  return iVar3;
}

/* 0x90f90  size=196  rq::HookCommand(char const*, void (*)(char**), void (**)(char**))  [_ZN2rq11HookCommandEPKcPFvPPcEPS5_] */
xunknown8 rq__HookCommand(xunknown8 param_1,xunknown8 param_2,int8 *param_3)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  int8 iVar3;
  int8 iVar4;
  
  pxVar1 = pxRam00000000000d31f8;
  if (iRam0000000000170fb8 == (int8 *)0x0) {
    return 0;
  }
  iVar4 = *iRam0000000000170fb8;
  if (iVar4 != 0) {
    iVar2 = (**(code **)(*(int8 *)*pxRam00000000000d31f8 + 0xe0))
                      ((int8 *)*pxRam00000000000d31f8,0x3d204 /* "libGTASA.so" */);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*(int8 *)*pxVar1 + 0x28))((int8 *)*pxVar1,iVar2,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = 0;
    do {
      if (*(int8 *)(iVar4 + iVar3) == iVar2) {
        *param_3 = iVar2;
        *(xunknown8 *)(iVar4 + iVar3) = param_2;
        return 1;
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != 400);
  }
  return 0;
}

