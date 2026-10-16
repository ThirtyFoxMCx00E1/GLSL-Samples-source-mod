/* unexported functions 0x94160..0xa9d48
 * Decompiled from libZyZGfx64.so (AArch64) with the Ghidra decompiler.
 * Pseudo-C: reconstructed, not original source. Names come from the .dynsym export table;
 * FUN_xxxxxxxx = unexported (stripped) function at that virtual address. */
#include "../../include/ghidra_types.h"

/* 0x94160  size=1340 */
void FUN_00094160(void)

{
  bool bVar1;
  bool bVar2;
  int4 iVar3;
  xunknown8 xVar4;
  int8 iVar5;
  xunknown8 *pxVar6;
  xunknown8 *pxVar7;
  int4 *piVar8;
  uint8 uVar9;
  char *pcVar10;
  xunknown4 *pxVar11;
  int8 iVar12;
  float8 fVar13;
  xunknown8 xStack_a8;
  uint8 uStack_a0;
  int4 iStack_98;
  int4 aiStack_94 [7];
  int8 iStack_78;
  
  iVar5 = tpidr_el0;
  iStack_78 = *(int8 *)(iVar5 + 0x28);
  if ((uRam00000000001716b8 & 1) == 0) {
    uRam00000000001716b8 = 1;
    aiStack_94[1] = 2;
    aiStack_94[5] = 0;
    aiStack_94[2] = 0;
    aiStack_94[3] = 0;
    aiStack_94[4] = aiStack_94[4] & 0xffffff00;
    uVar9 = gl__Load_plt(aiStack_94 + 1,xRam00000000001716b0);
    pxVar6 = pxRam00000000000d35a8;
    if (((uVar9 & 1) == 0) || ((aiStack_94[4] & 1U) == 0)) {
      (*xRam00000000001716b0)(0,0x2b9ab /* "gpu: no GPU timers on this device - scene times not measured" */);
      goto code_r0x00094664;
    }
    (*(code *)*pxRam00000000000d35a8)(2,0x1716bc);
    (*(code *)*pxVar6)(2,0x1716c4);
    (*(code *)*pxVar6)(2,0x1716cc);
    (*(code *)*pxVar6)(2,0x1716d4);
    xRam00000000001716ac = '\x01';
  }
  else if (xRam00000000001716ac != '\x01') goto code_r0x00094664;
  if (-1 < (int4)uRam00000000000d8db0) {
    (*(code *)*pxRam00000000000d35c0)(0x88bf);
    uRam00000000000d8db0 = 0xffffffff;
    iRam00000000001716dc = iRam00000000001716dc + 1;
  }
  pxVar6 = pxRam00000000000d3208;
  aiStack_94[1] = 0;
  aiStack_94[2] = 0;
  aiStack_94[3] = 0;
  aiStack_94[4] = 0;
  (*(code *)*pxRam00000000000d3208)(0xba2,aiStack_94 + 1);
  xStack_a8 = 0;
  compat__SceneSize_plt((int8)&xStack_a8 + 4,&xStack_a8);
  bVar2 = aiStack_94[3] != xStack_a8._4_4_ || aiStack_94[4] != (uint4)xStack_a8;
  uVar9 = (uint8)bVar2;
  if (aiStack_94[3] == xStack_a8._4_4_ && aiStack_94[4] == (uint4)xStack_a8) {
    aiStack_94[0] = 0;
    (*(code *)*pxVar6)(0x8fbb,aiStack_94);
    pxVar7 = pxRam00000000000d35d8;
    pxVar6 = pxRam00000000000d35d0;
    pxVar11 = (xunknown4 *)0x1716c0;
    pcVar10 = (char *)0x171711;
    iVar12 = 4;
    do {
      if (pcVar10[-1] == '\x01') {
        iStack_98 = 0;
        (*(code *)*pxVar6)(pxVar11[-1],0x8867,&iStack_98);
        if (iStack_98 != 0) {
          uStack_a0 = 0;
          (*(code *)*pxVar7)(pxVar11[-1],0x8866,&uStack_a0);
          piVar8 = (int4 *)0x1716e8;
          pcVar10[-1] = '\0';
          if ((aiStack_94[0] == 0) && (piVar8 = (int4 *)0x1716ec, uStack_a0 < 200000000)) {
            xRam00000000001716f0 =
                 CONCAT44(xRam00000000001716f0._4_4_,(int4)xRam00000000001716f0 + 1);
            fRam00000000001716f8 = (float8)uStack_a0 / 1000000.0 + fRam00000000001716f8;
            budget__GpuMs_plt(0);
            fVar13 = (float8)NEON_ucvtf(uStack_a0);
            xRam00000000001716a0 = xRam00000000001716a0 + fVar13 / 1000000.0;
            piVar8 = &xRam00000000001716a8;
          }
          *piVar8 = *piVar8 + 1;
        }
      }
      if (*pcVar10 == '\x01') {
        iStack_98 = 0;
        (*(code *)*pxVar6)(*pxVar11,0x8867,&iStack_98);
        if (iStack_98 != 0) {
          uStack_a0 = 0;
          (*(code *)*pxVar7)(*pxVar11,0x8866,&uStack_a0);
          *pcVar10 = '\0';
          if (aiStack_94[0] == 0) {
            if (uStack_a0 < 200000000) {
              xRam00000000001716f0 =
                   CONCAT44(xRam00000000001716f0._4_4_ + 1,(int4)xRam00000000001716f0);
              fRam0000000000171700 = (float8)uStack_a0 / 1000000.0 + fRam0000000000171700;
              budget__GpuMs_plt(1);
            }
            else {
              iRam00000000001716ec = iRam00000000001716ec + 1;
            }
          }
          else {
            iRam00000000001716e8 = iRam00000000001716e8 + 1;
          }
        }
      }
      iVar12 = iVar12 + -1;
      pxVar11 = pxVar11 + 2;
      pcVar10 = pcVar10 + 2;
    } while (iVar12 != 0);
    iVar3 = iRam00000000001716e4 + 1;
    uRam00000000001716e0 = uRam00000000001716e0 + 1 & 3;
    bVar1 = 0x256 < iRam00000000001716e4;
    iRam00000000001716e4 = iVar3;
    if (bVar1) {
      if ((int4)xRam00000000001716f0 == 0) {
        (*xRam00000000001716b0)
                  (1,0x39701 /* "gpu: scene timer gave no result in %d frames (%d disjoint, %d garbage,..." */,iVar3,iRam00000000001716e8,iRam00000000001716ec,iRam000000000017170c,
                   iRam00000000001716dc);
      }
      else {
        if (xRam00000000001716f0._4_4_ == 0) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = fRam0000000000171700 / (float8)xRam00000000001716f0._4_4_;
        }
        xVar4 = 0x29893;
        if (iRam00000000001716dc != 0) {
          xVar4 = 0x35029 /* " | scene without end event" */;
        }
        (*xRam00000000001716b0)
                  (fRam00000000001716f8 / (float8)(int4)xRam00000000001716f0,fVar13,0,0x22baa /* "gpu: main scene %.2f ms (the game's world + our code inside its shader..." */,
                   iRam0000000000171708,iVar3,xVar4);
      }
      iRam00000000001716e4 = 0;
      fRam00000000001716f8 = 0.0;
      fRam0000000000171700 = 0.0;
      xRam00000000001716f0 = 0;
      iRam0000000000171708 = 0;
      iRam00000000001716e8 = 0;
      iRam00000000001716ec = 0;
      iRam00000000001716dc = 0;
      iRam000000000017170c = 0;
    }
  }
  else {
    iRam0000000000171708 = iRam0000000000171708 + 1;
  }
  if (*(char *)((uint8)uRam00000000001716e0 * 2 + 0x171710 + uVar9) == '\x01') {
    iRam000000000017170c = iRam000000000017170c + 1;
  }
  else {
    (*(code *)*pxRam00000000000d35b8)
              (0x88bf,*(xunknown4 *)((uint8)uRam00000000001716e0 * 8 + 0x1716bc + uVar9 * 4));
    uRam00000000000d8db0 = (uint4)bVar2;
    *(xunknown1 *)((uint8)uRam00000000001716e0 * 2 + 0x171710 + (uint8)uRam00000000000d8db0) = 1;
  }
code_r0x00094664:
  if (*(int8 *)(iVar5 + 0x28) == iStack_78) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x9469c  size=80 */
void FUN_0009469c(void)

{
  if ((xRam00000000001716ac == '\x01') && (-1 < uRam00000000000d8db0)) {
    (*(code *)*pxRam00000000000d35c0)(0x88bf);
    uRam00000000000d8db0 = -1;
  }
  return;
}

/* 0x946ec  size=96 */
void FUN_000946ec(void)

{
  if ((xRam00000000001716ac == '\x01') && (-1 < uRam00000000000d8db0)) {
    (*(code *)*pxRam00000000000d35c0)(0x88bf);
    uRam00000000000d8db0 = -1;
    iRam00000000001716dc = iRam00000000001716dc + 1;
  }
  return;
}

/* 0x948fc  size=1456 */
/* WARNING: Type propagation algorithm not settling */

void FUN_000948fc(void)

{
  int8 iVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  int8 iVar7;
  float8 fVar8;
  xunknown4 xVar9;
  uint1 uVar10;
  uint1 uVar11;
  uint1 uVar12;
  uint1 uVar13;
  uint1 uVar14;
  char cVar15;
  int4 iVar16;
  float8 fVar17;
  float8 fVar18;
  float8 fVar19;
  float8 fVar20;
  xunknown1 axStack_b0 [8];
  int8 iStack_a8;
  int8 iStack_a0;
  int8 iStack_68;
  
  iVar7 = tpidr_el0;
  iStack_68 = *(int8 *)(iVar7 + 0x28);
  if ((uRam0000000000172888 & 1) == 0) {
    uRam0000000000172888 = 1;
    pthread_attr_init(&iStack_a8);
    pthread_attr_setdetachstate(&iStack_a8,1);
    pthread_attr_setstacksize(&iStack_a8,0x10000);
    iVar16 = pthread_create(axStack_b0,&iStack_a8,FUN_00095634,0);
    if (iVar16 != 0) {
      (*pcRam0000000000172880)(1,0x40850 /* "budget: heat thread not started - no thermal / clock numbers" */);
    }
    pthread_attr_destroy(&iStack_a8);
  }
  if ((uRam0000000000172889 & 1) == 0) {
    std____ndk1__mutex__lock_plt(0x171718);
    cVar15 = cRam00000000001728dc;
    uVar14 = uRam00000000001728d8;
    uVar13 = uRam00000000001728d0;
    uVar12 = uRam00000000001728cc;
    uVar11 = uRam00000000001728c8;
    uVar10 = uRam00000000001728c4;
    xVar9 = xRam00000000001728c0;
    std____ndk1__mutex__unlock_plt(0x171718);
    if (cVar15 == '\x01') {
      xVar2 = 0x2b97b;
      if ((uVar10 & 1) == 0) {
        xVar2 = 0x36dd0;
      }
      xVar3 = 0x2b97b;
      if ((uVar11 & 1) == 0) {
        xVar3 = 0x35044 /* "no (Android 12+)" */;
      }
      xVar4 = 0x2b97b;
      if ((uVar12 & 1) == 0) {
        xVar4 = 0x36dd0;
      }
      xVar5 = 0x2b97b;
      if ((uVar13 & 1) == 0) {
        xVar5 = 0x36dd0;
      }
      xVar6 = 0x2b97b;
      if ((uVar14 & 1) == 0) {
        xVar6 = 0x36dd0;
      }
      uRam0000000000172889 = 1;
      (*pcRam0000000000172880)(0,0x2a38a /* "budget: heat sources - Android thermal status %s, thermal headroom %s,..." */,xVar2,xVar3,xVar4,xVar9,xVar5,xVar6);
    }
  }
  clock_gettime(1,&iStack_a8);
  fVar8 = fRam00000000001720a0;
  fVar18 = (float8)iStack_a8 + fRam0000000000022270 * (float8)iStack_a0;
  if (fRam0000000000172890 == 0.0) {
    fRam0000000000172890 = fVar18;
  }
  else {
    fVar17 = fVar18 - fRam0000000000172890;
    fRam0000000000172890 = fVar18;
    if (0.0 < fVar17) {
      if (0.25 < fVar17) {
        iRam0000000000171808 = iRam0000000000171808 + 1;
        iRam00000000001720a8 = iRam00000000001720a8 + 1;
      }
      else {
        fVar20 = fVar17 + fRam00000000001717f8;
        iVar16 = (int4)(fVar17 * 2000.0);
        fVar19 = fVar17 + fRam0000000000172898;
        if (0x1f2 < iVar16) {
          iVar16 = 499;
        }
        iRam00000000001717f0 = iRam00000000001717f0 + 1;
        if (fRam0000000000171800 < fVar17) {
          fRam0000000000171800 = fVar17;
        }
        iVar1 = (int8)iVar16 * 4;
        fRam0000000000172098 = fVar17 + fRam0000000000172098;
        iRam0000000000172090 = iRam0000000000172090 + 1;
        fRam00000000001717f8 = fVar20;
        fRam0000000000172898 = fVar19;
        *(int4 *)(iVar1 + 0x17180c) = *(int4 *)(iVar1 + 0x17180c) + 1;
        if (fVar8 < fVar17) {
          fRam00000000001720a0 = fVar17;
        }
        iVar1 = (int8)iVar16 * 4;
        *(int4 *)(iVar1 + 0x1720ac) = *(int4 *)(iVar1 + 0x1720ac) + 1;
        if (10.0 <= fVar20) {
          FUN_00094eac(0x171740,0x297e6 /* "budget:" */,1);
          memset(0x171740,0,0x8a0);
          fVar19 = fRam0000000000172898;
        }
        if ((float8)iRam00000000000d8db4 * 60.0 <= fVar19) {
          if (iRam00000000000d8db4 == 1) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,1);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 3) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,3);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 5) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,5);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 10) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,10);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 0xf) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,0xf);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 0x14) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,0x14);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 0x1e) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,0x1e);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 0x2d) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,0x2d);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          if (iRam00000000000d8db4 == 0x3c) {
            FUN_00095590(&iStack_a8,0x40,0x40,0x40833 /* "budget @ %d min (last 60 s):" */,0x3c);
            FUN_00094eac(0x171fe0,&iStack_a8,0);
          }
          iVar16 = iRam00000000000d8db4;
          memset(0x171fe0,0,0x8a0);
          iRam00000000000d8db4 = iVar16 + 1;
        }
      }
    }
  }
  if (*(int8 *)(iVar7 + 0x28) == iStack_68) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x94eac  size=1764 */
void FUN_00094eac(float8 *param_1,xunknown8 param_2,uint8 param_3)

{
  int8 iVar1;
  float8 fVar2;
  int4 iVar3;
  int4 iVar4;
  xunknown8 in_x7;
  float8 fVar5;
  int8 iVar6;
  uint4 uVar7;
  float8 fVar8;
  float8 fVar9;
  float8 fVar10;
  float8 fVar11;
  float8 fVar12;
  float8 fVar13;
  float8 fVar14;
  float8 fVar15;
  float8 fVar16;
  float8 fVar17;
  float8 fVar18;
  float8 fVar19;
  float8 fVar20;
  float8 fVar21;
  float8 fVar22;
  float8 fVar23;
  float8 fVar24;
  float8 fVar25;
  float8 fVar26;
  float8 fVar27;
  float8 fVar28;
  float8 fVar29;
  float8 fVar30;
  float8 fVar31;
  xunknown1 axStack_1c4 [300];
  int8 iStack_98;
  
  iVar1 = tpidr_el0;
  iStack_98 = *(int8 *)(iVar1 + 0x28);
  fVar5 = param_1[0x16];
  if (0x1d < (int8)fVar5) {
    iVar6 = 0;
    uVar7 = 500;
    do {
      iVar6 = iVar6 + *(int4 *)((int8)param_1 + (uint8)(uVar7 - 1) * 4 + 0xcc);
      if ((int8)((uint8)fVar5 / 100) < iVar6) {
        fVar8 = (float8)uVar7 / 2.0;
        goto code_r0x00094f4c;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    fVar8 = 0.0;
code_r0x00094f4c:
    fVar20 = 0.0;
    fVar19 = (float8)(int8)fVar5;
    fVar5 = 0.0;
    if (0.0 < param_1[0x17]) {
      fVar5 = fVar19 / param_1[0x17];
    }
    if (*(int4 *)((int8)param_1 + 0x6c) != 0) {
      fVar20 = param_1[3] / (float8)*(int4 *)((int8)param_1 + 0x6c);
    }
    fVar17 = 0.0;
    fVar9 = 0.0;
    if (*(int4 *)(param_1 + 0xe) != 0) {
      fVar9 = param_1[4] / (float8)*(int4 *)(param_1 + 0xe);
    }
    if (*(int4 *)((int8)param_1 + 0x74) != 0) {
      fVar17 = param_1[5] / (float8)*(int4 *)((int8)param_1 + 0x74);
    }
    fVar22 = 0.0;
    fVar10 = 0.0;
    if (*(int4 *)(param_1 + 0xf) != 0) {
      fVar10 = param_1[6] / (float8)*(int4 *)(param_1 + 0xf);
    }
    if (*(int4 *)((int8)param_1 + 0x7c) != 0) {
      fVar22 = param_1[7] / (float8)*(int4 *)((int8)param_1 + 0x7c);
    }
    fVar21 = 0.0;
    fVar11 = 0.0;
    if (*(int4 *)(param_1 + 0x10) != 0) {
      fVar11 = param_1[8] / (float8)*(int4 *)(param_1 + 0x10);
    }
    if (*(int4 *)((int8)param_1 + 0x84) != 0) {
      fVar21 = param_1[9] / (float8)*(int4 *)((int8)param_1 + 0x84);
    }
    fVar18 = 0.0;
    fVar23 = 0.0;
    if (*(int4 *)(param_1 + 0x11) != 0) {
      fVar23 = param_1[10] / (float8)*(int4 *)(param_1 + 0x11);
    }
    if (*(int4 *)((int8)param_1 + 0x8c) != 0) {
      fVar18 = param_1[0xb] / (float8)*(int4 *)((int8)param_1 + 0x8c);
    }
    memcpy(axStack_1c4,0x41aa0 /* "heat: n/a" */,300);
    std____ndk1__mutex__lock_plt(0x171718);
    if (cRam00000000001728dc == '\x01') {
      iVar3 = FUN_00095590(axStack_1c4,300,300,0x32c7e /* "heat:" */);
      if (uRam00000000001728c4 == '\x01') {
        if (uRam00000000000d8db8 < 7) {
          iVar6 = (int8)*(int4 *)((uint8)uRam00000000000d8db8 * 4 + 0x41bcc) + 0x41bcc;
        }
        else {
          iVar6 = 0x25c3f;
        }
        iVar4 = FUN_00095590(axStack_1c4 + iVar3,0xffffffffffffffff,300 - (int8)iVar3,0x355fb /* " status %d %s" */,
                             (uint8)uRam00000000000d8db8,iVar6);
        iVar3 = iVar4 + iVar3;
      }
      if (uRam00000000001728c8 == '\x01') {
        iVar4 = FUN_00095590((float8)fRam00000000000d8dbc,(float8)fRam00000000000d8dc0,
                             axStack_1c4 + iVar3,0xffffffffffffffff,300 - (int8)iVar3,0x2d2a7 /* ", headroom %.2f (10 s ahead %.2f; 1.0 = throttling)" */);
        iVar3 = iVar4 + iVar3;
      }
      if ((uRam00000000001728cc == 1) && (iRam00000000001728a8 != 0)) {
        iVar4 = FUN_00095590(fRam00000000001728a0 / (float8)iRam00000000001728a8,axStack_1c4 + iVar3
                             ,0xffffffffffffffff,300 - (int8)iVar3,0x32c84 /* ", GPU %.0f MHz" */);
        iVar3 = iVar4 + iVar3;
      }
      if ((((uRam00000000001728cc & 1) != 0) && (iRam00000000001728a8 != 0)) &&
         (0 < (int4)xRam00000000001728c0)) {
        iVar4 = FUN_00095590(((fRam00000000001728a0 * 100.0) / (float8)iRam00000000001728a8) /
                             (float8)xRam00000000001728c0,axStack_1c4 + iVar3,0xffffffffffffffff,
                             300 - (int8)iVar3,0x3d052 /* " of %d (%.0f %%)" */);
        iVar3 = iVar4 + iVar3;
      }
      if ((uRam00000000001728d0 == '\x01') && (iRam00000000001728b8 != 0)) {
        iVar4 = FUN_00095590(fRam00000000001728b0 / (float8)iRam00000000001728b8,axStack_1c4 + iVar3
                             ,0xffffffffffffffff,300 - (int8)iVar3,0x38ee2 /* ", GPU busy %.0f %%" */);
        iVar3 = iVar4 + iVar3;
      }
      if ((uRam00000000001728d8 == '\x01') && (!NAN(fRam00000000000d8dc4))) {
        iVar4 = FUN_00095590((float8)fRam00000000000d8dc4,axStack_1c4 + iVar3,0xffffffffffffffff,
                             300 - (int8)iVar3,0x28fea /* ", battery %.1f C" */);
        iVar3 = iVar4 + iVar3;
      }
      if (iVar3 < 6) {
        FUN_00095590(axStack_1c4,300,300,0x23e0d /* "heat: nothing readable on this phone" */);
      }
      if ((param_3 & 1) != 0) {
        iRam00000000001728a8 = 0;
        fRam00000000001728a0 = 0.0;
        fRam00000000001728b0 = 0.0;
        iRam00000000001728b8 = 0;
      }
    }
    std____ndk1__mutex__unlock_plt(0x171718);
    fVar2 = fRam0000000000172898;
    fVar12 = (float8)fmod(fRam0000000000172898,0x404e000000000000);
    fVar15 = 0.0;
    fVar13 = 1000.0 / fVar8;
    fVar14 = 0.0;
    if (fVar8 <= 0.0) {
      fVar13 = 0.0;
    }
    if (*(int4 *)(param_1 + 0xc) != 0) {
      fVar14 = *param_1 / (float8)*(int4 *)(param_1 + 0xc);
    }
    if (*(int4 *)((int8)param_1 + 100) != 0) {
      fVar15 = param_1[1] / (float8)*(int4 *)((int8)param_1 + 100);
    }
    fVar16 = 0.0;
    fVar8 = 0.0;
    iVar3 = *(int4 *)(param_1 + 0xd);
    if (iVar3 != 0) {
      fVar8 = param_1[2] / (float8)iVar3;
    }
    if (*(int4 *)((int8)param_1 + 0x6c) != 0) {
      fVar16 = param_1[3] / (float8)*(int4 *)((int8)param_1 + 0x6c);
    }
    fVar25 = 0.0;
    fVar24 = 0.0;
    if (*(int4 *)(param_1 + 0xe) != 0) {
      fVar24 = param_1[4] / (float8)*(int4 *)(param_1 + 0xe);
    }
    if (*(int4 *)((int8)param_1 + 0x74) != 0) {
      fVar25 = param_1[5] / (float8)*(int4 *)((int8)param_1 + 0x74);
    }
    fVar27 = 0.0;
    fVar26 = 0.0;
    if (*(int4 *)(param_1 + 0xf) != 0) {
      fVar26 = param_1[6] / (float8)*(int4 *)(param_1 + 0xf);
    }
    if (*(int4 *)((int8)param_1 + 0x7c) != 0) {
      fVar27 = param_1[7] / (float8)*(int4 *)((int8)param_1 + 0x7c);
    }
    fVar29 = 0.0;
    fVar28 = 0.0;
    if (*(int4 *)(param_1 + 0x10) != 0) {
      fVar28 = param_1[8] / (float8)*(int4 *)(param_1 + 0x10);
    }
    if (*(int4 *)((int8)param_1 + 0x84) != 0) {
      fVar29 = param_1[9] / (float8)*(int4 *)((int8)param_1 + 0x84);
    }
    fVar31 = 0.0;
    fVar30 = 0.0;
    if (*(int4 *)(param_1 + 0x11) != 0) {
      fVar30 = param_1[10] / (float8)*(int4 *)(param_1 + 0x11);
    }
    if (*(int4 *)((int8)param_1 + 0x8c) != 0) {
      fVar31 = param_1[0xb] / (float8)*(int4 *)((int8)param_1 + 0x8c);
    }
    fVar18 = fVar20 + fVar9 + fVar17 + fVar10 + fVar22 + fVar11 + fVar21 + fVar23 + fVar18;
    if (iVar3 == 0) {
      fVar20 = 0.0;
    }
    else {
      fVar20 = param_1[2] / (float8)iVar3;
    }
    (*pcRam0000000000172880)
              (fVar5,fVar13,param_1[0x18] * 1000.0,fVar14,fVar15,fVar8,fVar18,fVar16,0,0x4088d /* "%s %d:%02d played | %.1f fps, 1%% low %.1f fps, worst %.0f ms, %d gaps..." */,
               param_2,(int4)(fVar2 / 60.0),(int4)fVar12,*(xunknown4 *)(param_1 + 0x19),axStack_1c4,
               in_x7,fVar24,fVar25,fVar26,fVar27,fVar28,fVar29,fVar30,fVar31,fVar18 + fVar20,
               param_1[0x12] / fVar19,param_1[0x13] / fVar19,param_1[0x14] / fVar19,
               param_1[0x15] / fVar19);
  }
  if (*(int8 *)(iVar1 + 0x28) == iStack_98) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x95590  size=164 */
void FUN_00095590(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x95634  size=1708 */
void FUN_00095634(void)

{
  bool bVar1;
  bool bVar2;
  float4 fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int4 iVar7;
  int8 iVar8;
  code *pcVar9;
  uint8 uVar10;
  int8 iVar11;
  uint8 uVar12;
  uint4 uVar13;
  uint4 uVar14;
  int4 iVar15;
  float4 fVar16;
  float8 fVar17;
  float4 fVar18;
  float8 fVar19;
  code *pcStack_160;
  xunknown8 xStack_150;
  code *pcStack_148;
  int8 iStack_140;
  xunknown1 *apxStack_130 [8];
  xunknown1 *pxStack_f0;
  xunknown1 axStack_e8 [72];
  
  iVar8 = dlopen(0x3d044 /* "libandroid.so" */,2);
  if (iVar8 == 0) {
    pcStack_148 = (code *)0x0;
    iStack_140 = 0;
    pcStack_160 = (code *)0x0;
  }
  else {
    pcVar9 = (code *)dlsym(iVar8,0x349a1 /* "AThermal_acquireManager" */);
    pcStack_148 = (code *)dlsym(iVar8,0x403a6 /* "AThermal_getCurrentThermalStatus" */);
    pcStack_160 = (code *)dlsym(iVar8,0x355b5 /* "AThermal_getThermalHeadroom" */);
    if (pcVar9 == (code *)0x0) {
      iStack_140 = 0;
    }
    else {
      iStack_140 = (*pcVar9)();
    }
  }
  uVar10 = __open_2(0x2b2f2 /* "/sys/class/kgsl/kgsl-3d0/gpuclk" */,0x80000);
  if ((int4)uVar10 < 0) {
code_r0x00095758:
    iVar8 = 0;
code_r0x0009575c:
    uVar10 = __open_2(0x355d1 /* "/sys/class/kgsl/kgsl-3d0/devfreq/cur_freq" */,0x80000);
    if ((int4)uVar10 < 0) {
code_r0x000957c8:
      bVar4 = false;
    }
    else {
      iVar11 = read(uVar10,axStack_e8,0x3f);
      close(uVar10 & 0xffffffff);
      if (iVar11 < 1) goto code_r0x000957c8;
      axStack_e8[iVar11] = 0;
      apxStack_130[0] = (xunknown1 *)0x0;
      iVar8 = strtol(axStack_e8,apxStack_130,10);
      bVar4 = apxStack_130[0] != axStack_e8;
    }
    bVar4 = (bool)(bVar4 & 0 < iVar8);
    xStack_150 = 0x355d1 /* "/sys/class/kgsl/kgsl-3d0/devfreq/cur_freq" */;
    if (!bVar4) {
      xStack_150 = 0;
    }
  }
  else {
    iVar8 = read(uVar10,axStack_e8,0x3f);
    close(uVar10 & 0xffffffff);
    if (iVar8 < 1) goto code_r0x00095758;
    axStack_e8[iVar8] = 0;
    apxStack_130[0] = (xunknown1 *)0x0;
    iVar8 = strtol(axStack_e8,apxStack_130,10);
    if ((apxStack_130[0] == axStack_e8) || (iVar8 < 1)) goto code_r0x0009575c;
    xStack_150 = 0x2b2f2 /* "/sys/class/kgsl/kgsl-3d0/gpuclk" */;
    bVar4 = true;
  }
  uVar10 = __open_2(0x22c48 /* "/sys/class/kgsl/kgsl-3d0/max_gpuclk" */,0x80000);
  if ((int4)uVar10 < 0) {
code_r0x00095854:
    uVar10 = 0;
code_r0x00095858:
    uVar12 = __open_2(0x36ebf /* "/sys/class/kgsl/kgsl-3d0/devfreq/max_freq" */,0x80000);
    if (-1 < (int4)uVar12) {
      iVar8 = read(uVar12,axStack_e8,0x3f);
      close(uVar12 & 0xffffffff);
      if (0 < iVar8) {
        axStack_e8[iVar8] = 0;
        apxStack_130[0] = (xunknown1 *)0x0;
        uVar10 = strtol(axStack_e8,apxStack_130,10);
      }
    }
  }
  else {
    iVar8 = read(uVar10,axStack_e8,0x3f);
    close(uVar10 & 0xffffffff);
    if (iVar8 < 1) goto code_r0x00095854;
    axStack_e8[iVar8] = 0;
    apxStack_130[0] = (xunknown1 *)0x0;
    uVar10 = strtol(axStack_e8,apxStack_130,10);
    if ((apxStack_130[0] == axStack_e8) || ((int8)uVar10 < 1)) goto code_r0x00095858;
  }
  uVar12 = __open_2(0x2d8a2 /* "/sys/class/kgsl/kgsl-3d0/gpu_busy_percentage" */,0x80000);
  if ((int4)uVar12 < 0) {
code_r0x000958f8:
    bVar2 = false;
  }
  else {
    iVar8 = read(uVar12,apxStack_130,0x3f);
    close(uVar12 & 0xffffffff);
    if (iVar8 < 1) goto code_r0x000958f8;
    *(xunknown1 *)((int8)apxStack_130 + iVar8) = 0;
    bVar2 = true;
  }
  uVar12 = __open_2(0x2645b /* "/sys/class/power_supply/battery/temp" */,0x80000);
  if (-1 < (int4)uVar12) {
    iVar8 = read(uVar12,axStack_e8,0x3f);
    close(uVar12 & 0xffffffff);
    if (0 < iVar8) {
      axStack_e8[iVar8] = 0;
      pxStack_f0 = (xunknown1 *)0x0;
      strtol(axStack_e8,&pxStack_f0,10);
      bVar5 = pxStack_f0 != axStack_e8;
      goto code_r0x00095968;
    }
  }
  bVar5 = false;
code_r0x00095968:
  std____ndk1__mutex__lock_plt(0x171718);
  bVar6 = iStack_140 != 0;
  uRam00000000001728c4 = pcStack_148 != (code *)0x0 && bVar6;
  uRam00000000001728c8 = pcStack_160 != (code *)0x0 && bVar6;
  xRam00000000001728c0 = (xunknown4)(uVar10 / 1000000);
  if ((int8)uVar10 < 1) {
    xRam00000000001728c0 = 0;
  }
  cRam00000000001728dc = 1;
  uRam00000000001728cc = bVar4;
  uRam00000000001728d0 = bVar2;
  uRam00000000001728d8 = bVar5;
  std____ndk1__mutex__unlock_plt(0x171718);
  iVar15 = 0;
  uVar14 = 0;
  do {
    if ((uVar14 & 1) == 0 && (pcStack_148 != (code *)0x0 && bVar6)) {
      iVar7 = (*pcStack_148)(iStack_140);
      uVar13 = 0;
      fVar16 = NAN;
    }
    else if ((uVar14 & 1) != 0 && (pcStack_160 != (code *)0x0 && bVar6)) {
      fVar16 = (float4)(*pcStack_160)(iStack_140,(int4)(uVar14 << 0x1e) >> 0x1f & 10);
      uVar13 = uVar14 >> 1 & 1;
      iVar7 = -2;
    }
    else {
      uVar13 = 0;
      iVar7 = -2;
      fVar16 = NAN;
    }
    fVar17 = -1.0;
    fVar19 = -1.0;
    if ((bVar4 != false) && (uVar10 = __open_2(xStack_150,0x80000), -1 < (int4)uVar10)) {
      iVar8 = read(uVar10,axStack_e8,0x3f);
      close(uVar10 & 0xffffffff);
      if (0 < iVar8) {
        axStack_e8[iVar8] = 0;
        pxStack_f0 = (xunknown1 *)0x0;
        uVar10 = strtol(axStack_e8,&pxStack_f0,10);
        if ((pxStack_f0 != axStack_e8) && (0 < (int8)uVar10)) {
          fVar19 = (float8)uVar10 / 1000000.0;
        }
      }
    }
    if ((bVar2) && (uVar10 = __open_2(0x2d8a2 /* "/sys/class/kgsl/kgsl-3d0/gpu_busy_percentage" */,0x80000), -1 < (int4)uVar10)) {
      iVar8 = read(uVar10,apxStack_130,0x3f);
      close(uVar10 & 0xffffffff);
      if (0 < iVar8) {
        *(xunknown1 *)((int8)apxStack_130 + iVar8) = 0;
        fVar17 = (float8)atof(apxStack_130);
      }
    }
    bVar1 = false;
    if (iVar15 + (uVar14 / 5) * 5 == 0) {
      bVar1 = bVar5;
    }
    if ((bVar1 == true) && (uVar10 = __open_2(0x2645b /* "/sys/class/power_supply/battery/temp" */,0x80000), -1 < (int4)uVar10)) {
      iVar8 = read(uVar10,axStack_e8,0x3f);
      close(uVar10 & 0xffffffff);
      if (iVar8 < 1) goto code_r0x00095c24;
      axStack_e8[iVar8] = 0;
      pxStack_f0 = (xunknown1 *)0x0;
      iVar8 = strtol(axStack_e8,&pxStack_f0,10);
      if (pxStack_f0 == axStack_e8) goto code_r0x00095c24;
      fVar18 = (float4)iVar8 / 10.0;
    }
    else {
code_r0x00095c24:
      fVar18 = NAN;
    }
    std____ndk1__mutex__lock_plt(0x171718);
    if (iVar7 != -2) {
      uRam00000000000d8db8 = iVar7;
    }
    fVar3 = fRam00000000000d8dbc;
    if (!NAN(fVar16)) {
      fVar3 = fVar16;
      if (uVar13 != 0) {
        fVar3 = fRam00000000000d8dbc;
        fRam00000000000d8dc0 = fVar16;
      }
    }
    fRam00000000000d8dbc = fVar3;
    if (0.0 < fVar19) {
      fRam00000000001728a0 = fVar19 + fRam00000000001728a0;
      iRam00000000001728a8 = iRam00000000001728a8 + 1;
    }
    if ((0.0 <= fVar17) && (fVar17 <= 100.0)) {
      fRam00000000001728b0 = fVar17 + fRam00000000001728b0;
      iRam00000000001728b8 = iRam00000000001728b8 + 1;
    }
    if ((-20.0 < fVar18) && (fVar18 < 90.0)) {
      fRam00000000000d8dc4 = fVar18;
    }
    std____ndk1__mutex__unlock_plt(0x171718);
    sleep(1);
    uVar14 = uVar14 + 1;
    iVar15 = iVar15 + -1;
  } while( true );
}

/* 0x95ce0  size=28 */
void FUN_00095ce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(xRam00000000000d3670,0x171718,0xcee00);
  return;
}

/* 0x961b4  size=1352 */
void FUN_000961b4(void)

{
  int4 iVar1;
  int4 iVar2;
  int4 iVar3;
  int4 iVar4;
  int4 iVar5;
  int4 iVar6;
  float4 fVar7;
  float4 fVar8;
  float4 fVar9;
  int4 iVar10;
  int4 iVar11;
  uint1 uVar12;
  uint8 uVar13;
  uint8 uVar14;
  xunknown8 xVar15;
  int4 iVar16;
  int4 iVar17;
  int4 iVar18;
  int4 iVar19;
  int4 iVar20;
  int4 iVar21;
  int4 iVar22;
  int4 iVar23;
  int4 iVar24;
  float4 fVar25;
  float4 fVar26;
  float4 fVar27;
  int4 iStack_f4;
  int4 iStack_f0;
  int4 iStack_c0;
  xunknown8 xStack_bc;
  int4 iStack_b4;
  xunknown8 xStack_b0;
  int4 iStack_a8;
  int4 iStack_a0;
  int4 iStack_9c;
  
  fVar25 = 0.0;
  fVar27 = 0.0;
  iVar18 = 0;
  fVar26 = 0.0;
  iVar22 = 0;
  iVar20 = 0;
  iVar24 = 0;
  iVar16 = 0;
  iVar23 = 0;
  iVar19 = 0;
  iStack_a8 = 0;
  iStack_f4 = 0;
  iStack_f0 = 0;
  xStack_bc = 0;
  xStack_b0 = 0;
  iStack_b4 = 0;
  iStack_c0 = 0;
  do {
    uVar12 = 0;
    iStack_9c = 0;
    iStack_a0 = iVar19;
code_r0x00096250:
    sleep(1);
    iVar1 = iRam000000000017295c;
    iVar2 = iRam0000000000172960;
    iVar3 = iRam0000000000172964;
    iVar4 = iRam0000000000172968;
    iVar5 = iRam000000000017296c;
    iVar19 = iRam0000000000172a78;
    iVar6 = iRam0000000000172a7c;
    fVar7 = fRam0000000000172a80;
    fVar8 = fRam0000000000172a84;
    fVar9 = fRam0000000000172a88;
    iVar10 = iRam0000000000172a8c;
    iVar11 = iRam0000000000172a90;
    if (iRam0000000000172a78 == 0) {
      if (iStack_a0 != 0) goto code_r0x00096680;
      do {
        sleep(1);
      } while (iRam0000000000172a78 == 0);
      iStack_a0 = 0;
      iVar1 = iRam000000000017295c;
      iVar2 = iRam0000000000172960;
      iVar3 = iRam0000000000172964;
      iVar4 = iRam0000000000172968;
      iVar5 = iRam000000000017296c;
      iVar19 = iRam0000000000172a78;
      iVar6 = iRam0000000000172a7c;
      fVar7 = fRam0000000000172a80;
      fVar8 = fRam0000000000172a84;
      fVar9 = fRam0000000000172a88;
      iVar10 = iRam0000000000172a8c;
      iVar11 = iRam0000000000172a90;
    }
    iRam000000000017295c = iVar1;
    iRam0000000000172960 = iVar2;
    iRam0000000000172964 = iVar3;
    iRam0000000000172968 = iVar4;
    iRam000000000017296c = iVar5;
    iRam0000000000172a78 = iVar19;
    iRam0000000000172a7c = iVar6;
    fRam0000000000172a80 = fVar7;
    fRam0000000000172a84 = fVar8;
    fRam0000000000172a88 = fVar9;
    iRam0000000000172a8c = iVar10;
    iRam0000000000172a90 = iVar11;
    if (iVar16 < 9) {
      iVar16 = iVar16 + 1;
      if (iVar19 != iStack_a0) goto code_r0x00096680;
code_r0x000965bc:
      iStack_9c = iStack_9c + 1;
      if ((iStack_9c == 3) && (iVar23 < 0x14)) {
        iVar23 = iVar23 + 1;
        uVar12 = 1;
        (*pcRam0000000000172920)
                  (1,0x3a00a /* "watchdog: NO FRAME FOR 3 s (frozen, a menu, or the app is in the backg..." */,xRam00000000000d8dc8,xRam00000000000d8dd0,iVar19,
                   iRam0000000000172a8c - iStack_f0);
        iStack_9c = 3;
      }
      goto code_r0x00096250;
    }
    if (iRam0000000000172940 == (int4 *)0x0) {
      iVar17 = 0;
    }
    else {
      iVar17 = *iRam0000000000172940;
    }
    if (iRam0000000000172938 == (int4 *)0x0) {
      iVar21 = 0;
    }
    else {
      iVar21 = *iRam0000000000172938;
    }
    (*pcRam0000000000172920)
              (0,0x3d07a /* "alive: %u frames (+%u in 10 s) | render thread at: %s | game thread at..." */,iVar19,iVar19 - iStack_c0,xRam00000000000d8dc8,xRam00000000000d8dd0);
    if (iRam0000000000172948 == (uint1 *)0x0) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = (uint8)*iRam0000000000172948;
    }
    if (iRam0000000000172950 == (uint1 *)0x0) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = (uint8)*iRam0000000000172950;
    }
    iVar16 = iVar21 - (int4)xStack_bc;
    if (iRam0000000000172938 == (int4 *)0x0) {
      iVar16 = -1;
    }
    if (iRam0000000000172aa4 == 0) {
      xVar15 = 0x3556f /* "none" */;
    }
    else if (iRam0000000000172aa4 == 0x8253) {
      xVar15 = 0x4139e /* "GUILTY (our or the game's GPU work crashed the GPU)" */;
    }
    else if (iRam0000000000172aa4 == 0x8254) {
      xVar15 = 0x28ffb /* "INNOCENT" */;
    }
    else {
      xVar15 = 0x38ef5 /* "UNKNOWN" */;
      if (iRam0000000000172aa4 != 0x8255) {
        xVar15 = 0x25c3f;
      }
    }
    (*pcRam0000000000172920)
              ((float8)fVar7,(float8)fVar8,(float8)fVar9,
               (float8)SQRT((fVar8 - fVar27) * (fVar8 - fVar27) +
                            (fVar7 - fVar25) * (fVar7 - fVar25) +
                            (fVar9 - fVar26) * (fVar9 - fVar26)),0,0x2d8cf /* "alive:   game +%u frames, +%u menu/loading frames, clock +%u ms, pause..." */,iVar6 - xStack_bc._4_4_,
               iVar10 - iStack_b4,iVar17 - (int4)xStack_b0,uVar13,uVar14,iVar16,iVar1 - iVar24,
               iVar2 - iVar20,iVar3 - iStack_a8,iVar4 - iVar22,iVar5 - iVar18,xRam0000000000172aa8,
               xRam0000000000172aac,iVar11 - xStack_b0._4_4_,xRam00000000000d8dd8,xVar15,
               xRam0000000000172aa0);
    iVar16 = 0;
    iVar18 = iVar5;
    iVar22 = iVar4;
    iVar20 = iVar2;
    iVar24 = iVar1;
    fVar27 = fVar8;
    fVar25 = fVar7;
    fVar26 = fVar9;
    iStack_b4 = iVar10;
    iStack_a8 = iVar3;
    if (iVar19 == iStack_a0) {
      xStack_b0 = CONCAT44(iVar11,iVar17);
      xStack_bc = CONCAT44(iVar6,iVar21);
      iStack_c0 = iStack_a0;
      goto code_r0x000965bc;
    }
    xStack_b0 = CONCAT44(iVar11,iVar17);
    xStack_bc = CONCAT44(iVar6,iVar21);
    iStack_c0 = iVar19;
code_r0x00096680:
    if ((bool)(uVar12 & iVar23 < 0x14)) {
      xVar15 = 0x29893;
      if (iRam0000000000172a8c != iStack_f0) {
        xVar15 = 0x2b9e8 /* " = a menu / pause / loading screen, not a freeze" */;
      }
      (*pcRam0000000000172920)
                (1,0x403ce /* "watchdog: frames resumed after %d s (render thread was at: %s) - meanw..." */,iStack_9c,xRam00000000000d8dc8,iRam0000000000172a7c - iStack_f4,
                 iRam0000000000172a8c - iStack_f0,xVar15);
      iVar23 = iVar23 + 1;
    }
    iStack_f4 = iRam0000000000172a7c;
    iStack_f0 = iRam0000000000172a8c;
  } while( true );
}

/* 0x96dec  size=84 */
void FUN_00096dec(void)

{
  uRam00000000001728e0 = 0;
  uRam00000000001728e8 = 0;
  uRam00000000001728f0 = 0;
  __cxa_atexit(xRam00000000000d3618,&uRam00000000001728e0,0xcee00);
                    /* WARNING: Could not recover jumptable at 0x000c955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___cxa_atexit)(xRam00000000000d3670,0x1728f8,0xcee00);
  return;
}

/* 0x98fd8  size=1560 */
uint8 FUN_00098fd8(float8 param_1,xunknown8 *param_2,int4 *param_3,xunknown1 *param_4,int4 *param_5,
                  uint4 param_6)

{
  xunknown8 xVar1;
  uint4 uVar2;
  uint4 uVar3;
  int4 iVar4;
  int4 iVar5;
  float8 fVar6;
  uint4 uVar7;
  float8 fVar8;
  uint8 uVar9;
  uint4 uVar10;
  uint8 *puVar11;
  uint8 uVar12;
  int8 iVar13;
  int8 iVar14;
  uint8 uVar15;
  char *pcVar16;
  float8 fVar17;
  float8 fVar18;
  float8 fVar19;
  float8 fVar20;
  
  uVar3 = (uint4)((uint8)param_1 >> 0x34) & 0x7ff;
  if (uVar3 == 0) {
    if (param_1 == 0.0) {
      iVar5 = 1;
      *param_2 = param_4;
      *param_5 = 1;
      *param_4 = 0x30;
      goto code_r0x000995c8;
    }
    if (((uint8)param_1 >> 0x33 & 1) == 0) {
      uVar3 = 0;
      uVar9 = 0x8000000000000;
      do {
        uVar9 = uVar9 >> 1;
        uVar3 = uVar3 - 1;
      } while ((uVar9 & (uint8)param_1) == 0);
      goto code_r0x00099074;
    }
    iVar5 = -0x3ff;
code_r0x00099098:
    iVar4 = -((uint4)(iVar5 * -0x269) >> 0xb);
  }
  else {
    if (uVar3 == 0x7ff) {
      iVar5 = 3;
      xVar1 = 0x36f8e;
      if (((uint8)param_1 & 0xfffffffffffff) != 0) {
        xVar1 = 0x3210f;
      }
      *param_2 = xVar1;
      *param_5 = 0x7000;
      goto code_r0x000995c8;
    }
code_r0x00099074:
    iVar5 = uVar3 - 0x3ff;
    if ((int4)uVar3 < 0x3ff) goto code_r0x00099098;
    iVar4 = ((uint4)(iVar5 * 0x4d1) >> 0xc) + 1;
  }
  fVar17 = ABS(param_1);
  uVar3 = 0x12 - iVar4;
  if (uVar3 < 0x17) {
    fVar18 = *(float8 *)((uint8)uVar3 * 8 + 0x41e00);
    fVar19 = fVar17 * fVar18;
    fVar6 = (float8)((uint8)fVar17 & 0x7ffffffff8000000);
    fVar8 = (float8)((uint8)fVar18 & 0xfffffffff8000000);
    fVar17 = (fVar6 * fVar8 - fVar19) + (fVar18 - fVar8) * fVar6 + fVar8 * (fVar17 - fVar6) +
             (fVar18 - fVar8) * (fVar17 - fVar6);
  }
  else {
    uVar7 = -uVar3;
    if (-1 < (int4)uVar3) {
      uVar7 = uVar3;
    }
    uVar3 = uVar7 * 0x2c9 >> 0xe;
    if (0xc < uVar3) {
      uVar3 = 0xd;
    }
    uVar2 = uVar7 + uVar3 * -0x17;
    fVar19 = fVar17;
    if (iVar4 < 0x13) {
      if (uVar2 == 0) {
        fVar17 = 0.0;
      }
      else {
        uVar10 = uVar2;
        if (0x15 < (int4)uVar2) {
          uVar10 = 0x16;
        }
        fVar18 = *(float8 *)((int8)(int4)uVar10 * 8 + 0x41e00);
        fVar19 = fVar17 * fVar18;
        fVar6 = (float8)((uint8)fVar17 & 0x7ffffffff8000000);
        fVar8 = (float8)((uint8)fVar18 & 0xfffffffff8000000);
        fVar17 = (fVar6 * fVar8 - fVar19) + (fVar18 - fVar8) * fVar6 + fVar8 * (fVar17 - fVar6) +
                 (fVar18 - fVar8) * (fVar17 - fVar6);
        if (0x16 < (int4)uVar2) {
          fVar18 = fVar19 + fVar17;
          fVar20 = *(float8 *)((uint8)(uVar2 - uVar10) * 8 + 0x41e00);
          fVar8 = (float8)((uint8)fVar20 & 0xfffffffff8000000);
          fVar6 = (float8)((uint8)fVar18 & 0xfffffffff8000000);
          fVar17 = (fVar6 * fVar8 - fVar18 * fVar20) + (fVar20 - fVar8) * fVar6 +
                   fVar8 * (fVar18 - fVar6) + (fVar20 - fVar8) * (fVar18 - fVar6) +
                   (fVar17 - (fVar18 - fVar19)) * fVar20;
          fVar19 = fVar18 * fVar20;
        }
      }
      if (uVar7 < 0x17) goto code_r0x00099320;
      fVar6 = fVar17 + fVar19;
      fVar8 = *(float8 *)((uint8)(uVar3 - 1) * 8 + 0x420e8);
      fVar18 = fVar6 - fVar19;
      fVar19 = fVar6 * fVar8;
      fVar17 = fVar17 - fVar18;
      iVar13 = 0x42150;
    }
    else {
      if (uVar2 == 0) {
        fVar17 = 0.0;
      }
      else {
        uVar9 = -(uint8)(uVar2 >> 0x1f) & 0xfffffff800000000 | (uint8)uVar2 << 3;
        fVar18 = *(float8 *)(uVar9 + 270000);
        fVar19 = fVar17 * fVar18;
        fVar6 = (float8)((uint8)fVar17 & 0x7ffffffff8000000);
        fVar8 = (float8)((uint8)fVar18 & 0xfffffffff8000000);
        fVar17 = (fVar6 * fVar8 - fVar19) + (fVar18 - fVar8) * fVar6 + fVar8 * (fVar17 - fVar6) +
                 (fVar18 - fVar8) * (fVar17 - fVar6) + *(float8 *)(uVar9 + 0x41f60) * fVar17;
      }
      if (uVar7 < 0x17) goto code_r0x00099320;
      fVar6 = fVar17 + fVar19;
      fVar8 = *(float8 *)((uint8)(uVar3 - 1) * 8 + 0x42018);
      fVar18 = fVar6 - fVar19;
      fVar19 = fVar6 * fVar8;
      fVar17 = fVar17 - fVar18;
      iVar13 = 0x42080;
    }
    fVar20 = (float8)((uint8)fVar8 & 0xfffffffff8000000);
    fVar18 = (float8)((uint8)fVar6 & 0xfffffffff8000000);
    fVar17 = fVar17 * fVar8 + *(float8 *)(iVar13 + (uint8)(uVar3 - 1) * 8) * fVar6 +
             (fVar18 * fVar20 - fVar19) + (fVar8 - fVar20) * fVar18 + fVar20 * (fVar6 - fVar18) +
             (fVar8 - fVar20) * (fVar6 - fVar18);
  }
code_r0x00099320:
  fVar6 = fVar17 + fVar19;
  fVar8 = fVar6 - (float8)(int8)fVar6;
  uVar9 = (int8)((fVar17 - (fVar6 - fVar19)) +
                fVar8 + ((fVar6 - (fVar8 - (fVar8 - fVar6))) -
                        ((fVar8 - fVar6) + (float8)(int8)fVar6))) + (int8)fVar6;
  if (999999999999999999 < uVar9) {
    iVar4 = iVar4 + 1;
  }
  uVar3 = iVar4 + param_6;
  if ((int4)param_6 < 0) {
    uVar3 = (param_6 & 0x7ffffff) + 1;
  }
  if (uVar3 < 0x18) {
    uVar7 = 10;
    if (uVar9 < 1000000000) {
      uVar7 = 1;
    }
    iVar5 = -uVar7;
    puVar11 = (uint8 *)((uint8)uVar7 * 8 + 0x41d60);
    do {
      if (uVar9 < *puVar11) {
        if ((uVar3 < (uint4)-iVar5) && (-(uVar3 + iVar5) < 0x18)) {
          uVar12 = *(uint8 *)((uint8)-(uVar3 + iVar5) * 8 + 0x41d60);
          uVar15 = uVar9 + (uVar12 >> 1);
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = uVar15 / uVar12;
          }
          if (*puVar11 <= uVar15) {
            iVar4 = iVar4 + 1;
          }
        }
        break;
      }
      iVar5 = iVar5 + -1;
      puVar11 = puVar11 + 1;
    } while (iVar5 != -0x14);
  }
  if (uVar9 != 0) {
    if ((int8)uVar9 < 0x100000000) {
      uVar15 = uVar9;
    }
    else {
      do {
        uVar15 = uVar9 / 1000;
        if (uVar9 % 1000 != 0) goto code_r0x000994a8;
        uVar12 = uVar9 >> 0x23;
        uVar9 = uVar15;
      } while (0x7c < uVar12);
    }
    uVar3 = (uint4)((int4)uVar15 * 0x26e978d5) >> 3 | (int4)uVar15 * -0x60000000;
    uVar9 = uVar15 & 0xffffffff;
    while (uVar3 < 0x418938) {
      iVar5 = (int4)(uVar9 / 1000);
      uVar9 = uVar9 / 1000;
      uVar3 = (uint4)(iVar5 * 0x26e978d5) >> 3 | iVar5 * -0x60000000;
    }
  }
code_r0x000994a8:
  uVar15 = 0;
  pcVar16 = param_4 + 0x40;
  param_4 = param_4 + 0x3e;
  do {
    iVar5 = (int4)uVar15;
    if (uVar9 < 100000000) {
      uVar12 = 0;
      if (uVar9 == 0) goto joined_r0x000995b0;
code_r0x00099534:
      iVar13 = 0;
      do {
        iVar14 = iVar13;
        uVar3 = (uint4)uVar9;
        uVar9 = (uVar9 & 0xffffffff) / 100;
        *(xunknown2 *)(param_4 + iVar14) =
             *(xunknown2 *)((uint8)(uVar3 + (int4)uVar9 * -100) * 2 + 0x41c92);
        iVar13 = iVar14 + -2;
      } while (99 < uVar3);
      if (uVar12 == 0) break;
      uVar15 = (uVar15 & 0xffffffff) - iVar13;
      iVar5 = (int4)uVar15;
      uVar9 = uVar12;
      if (iVar14 != -6) goto code_r0x000994e8;
    }
    else {
      uVar12 = uVar9 / 100000000;
      uVar9 = uVar9 % 100000000;
      if (uVar9 != 0) goto code_r0x00099534;
      iVar13 = 0;
code_r0x000994e8:
      memset(pcVar16 + -8,0x30,iVar13 + 8);
      uVar15 = (uint8)(iVar5 + (int4)iVar13 + 8);
      uVar9 = uVar12;
    }
    pcVar16 = pcVar16 + -8;
    param_4 = param_4 + -8;
  } while( true );
  iVar5 = iVar5 - (int4)iVar13;
  pcVar16 = pcVar16 + iVar13;
joined_r0x000995b0:
  if ((iVar5 != 0) && (*pcVar16 == '0')) {
    pcVar16 = pcVar16 + 1;
    iVar5 = iVar5 + -1;
  }
  *param_5 = iVar4;
  *param_2 = pcVar16;
code_r0x000995c8:
  *param_3 = iVar5;
  return (uint8)param_1 >> 0x3f;
}

/* 0x9979c  size=20 */
int8 FUN_0009979c(xunknown8 param_1,int8 param_2,int4 param_3)

{
  *(int4 *)(param_2 + 0xc) = *(int4 *)(param_2 + 0xc) + param_3;
  return param_2 + 0x10;
}

/* 0x997b0  size=296 */
int8 * FUN_000997b0(xunknown1 *param_1,int8 *param_2,uint4 param_3)

{
  xunknown1 *pxVar1;
  uint4 uVar2;
  xunknown8 *pxVar3;
  uint4 uVar4;
  xunknown1 *pxVar5;
  xunknown8 *pxVar6;
  uint8 uVar7;
  xunknown1 *pxVar8;
  xunknown8 *pxVar9;
  uint8 uVar10;
  uint8 uVar11;
  int8 iVar12;
  xunknown8 xVar13;
  xunknown8 xVar14;
  xunknown8 xVar15;
  
  uVar4 = *(uint4 *)(param_2 + 1);
  uVar2 = param_3;
  if ((int4)uVar4 <= (int4)param_3) {
    uVar2 = uVar4;
  }
  *(uint4 *)((int8)param_2 + 0xc) = *(int4 *)((int8)param_2 + 0xc) + param_3;
  if (uVar2 == 0) goto code_r0x000998b8;
  pxVar5 = (xunknown1 *)*param_2;
  if (param_1 != pxVar5) {
    pxVar1 = param_1 + (int4)uVar2;
    pxVar8 = pxVar1;
    if (pxVar1 <= param_1 + 1) {
      pxVar8 = param_1 + 1;
    }
    uVar7 = (int8)pxVar8 - (int8)param_1;
    if ((uVar7 < 8) || ((uint8)((int8)pxVar5 - (int8)param_1) < 0x20)) {
code_r0x00099890:
      do {
        pxVar8 = param_1 + 1;
        *pxVar5 = *param_1;
        param_1 = pxVar8;
        pxVar5 = pxVar5 + 1;
      } while (pxVar8 < pxVar1);
    }
    else if (uVar7 < 0x20) {
      uVar10 = 0;
code_r0x00099854:
      uVar11 = uVar7 & 0xfffffffffffffff8;
      iVar12 = uVar10 - uVar11;
      pxVar6 = (xunknown8 *)(pxVar5 + uVar10);
      pxVar9 = (xunknown8 *)(param_1 + uVar10);
      do {
        iVar12 = iVar12 + 8;
        *pxVar6 = *pxVar9;
        pxVar6 = pxVar6 + 1;
        pxVar9 = pxVar9 + 1;
      } while (iVar12 != 0);
      param_1 = param_1 + uVar11;
      pxVar5 = pxVar5 + uVar11;
      if (uVar7 != uVar11) goto code_r0x00099890;
    }
    else {
      uVar10 = uVar7 & 0xffffffffffffffe0;
      pxVar6 = (xunknown8 *)(pxVar5 + 0x10);
      pxVar9 = (xunknown8 *)(param_1 + 0x10);
      uVar11 = uVar10;
      do {
        pxVar3 = pxVar9 + -1;
        xVar13 = pxVar9[-2];
        xVar15 = pxVar9[1];
        xVar14 = *pxVar9;
        uVar11 = uVar11 - 0x20;
        pxVar9 = pxVar9 + 4;
        pxVar6[-1] = *pxVar3;
        pxVar6[-2] = xVar13;
        pxVar6[1] = xVar15;
        *pxVar6 = xVar14;
        pxVar6 = pxVar6 + 4;
      } while (uVar11 != 0);
      if (uVar7 != uVar10) {
        if ((uVar7 & 0x18) == 0) {
          param_1 = param_1 + uVar10;
          pxVar5 = pxVar5 + uVar10;
          goto code_r0x00099890;
        }
        goto code_r0x00099854;
      }
    }
    pxVar5 = (xunknown1 *)*param_2;
    uVar4 = *(uint4 *)(param_2 + 1);
  }
  uVar4 = uVar4 - uVar2;
  *param_2 = (int8)(pxVar5 + (int4)uVar2);
  *(uint4 *)(param_2 + 1) = uVar4;
code_r0x000998b8:
  if (((int4)uVar4 < 1) || (uVar4 < 0x200)) {
    return param_2 + 2;
  }
  return (int8 *)*param_2;
}

/* 0x9a1b4  size=12 */
void FUN_0009a1b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d41c0)(0x172ab0);
  return;
}

/* 0x9a6fc  size=164 */
void FUN_0009a6fc(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8,
                 xunknown8 param_9)

{
  int8 iVar1;
  int8 iVar2;
  xunknown8 xStack_90;
  xunknown8 xStack_88;
  xunknown8 xStack_80;
  xunknown8 xStack_78;
  xunknown1 *pxStack_70;
  xunknown1 **ppxStack_68;
  xunknown8 *pxStack_60;
  xunknown8 xStack_58;
  
  iVar1 = tpidr_el0;
  iVar2 = *(int8 *)(iVar1 + 0x28);
  ppxStack_68 = &pxStack_70;
  pxStack_60 = &xStack_90;
  xStack_58 = 0xffffff80ffffffe0;
  xStack_90 = param_6;
  xStack_88 = param_7;
  xStack_80 = param_8;
  xStack_78 = param_9;
  pxStack_70 = (xunknown1 *)register_sp;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&pxStack_70,param_8,param_9,param_1);
  if (*(int8 *)(iVar1 + 0x28) == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got___stack_chk_fail)();
  return;
}

/* 0x9c1c0  size=84 */
void FUN_0009c1c0(xunknown8 param_1)

{
  xunknown8 xVar1;
  
  xVar1 = cxa_allocate_exception_plt(0x10);
  FUN_0009c214(xVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar1,xRam00000000000d38a0,xRam00000000000d38a8);
  return;
}

/* 0x9c214  size=56 */
void FUN_0009c214(int8 *param_1)

{
  std__runtime_error__runtime_error_plt();
  *param_1 = iRam00000000000d38b0 + 0x10;
  return;
}

/* 0x9c900  size=24 */
uint8 FUN_0009c900(xunknown8 param_1,xunknown8 param_2,uint8 param_3,uint8 param_4,int8 param_5,
                  int8 param_6,int8 param_7,xunknown8 param_8)

{
  uint1 *puVar1;
  uint1 *puVar2;
  int8 iVar3;
  uint8 *puVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint1 *puVar7;
  uint8 uVar8;
  uint1 *puVar9;
  uint1 *puVar10;
  uint1 *puVar11;
  uint8 uVar12;
  xunknown1 axVar13 [16];
  
  axVar13 = FUN_000a14cc(0x3919f /* "basic_string" */);
  uVar8 = axVar13._8_8_;
  puVar4 = axVar13._0_8_;
  if (param_3 <= -uVar8 - 0x12) {
    puVar9 = (uint1 *)puVar4[2];
    if ((*puVar4 & 1) == 0) {
      puVar9 = (uint1 *)((int8)puVar4 + 1);
    }
    if (uVar8 < 0x7fffffffffffffe7) {
      uVar5 = param_3 + uVar8;
      if (param_3 + uVar8 <= uVar8 * 2) {
        uVar5 = uVar8 * 2;
      }
      uVar12 = 0x17;
      if (0x16 < uVar5) {
        uVar12 = (uVar5 | 0xf) + 1;
      }
      uVar5 = operator_new_plt(uVar12);
    }
    else {
      uVar12 = 0xffffffffffffffef;
      uVar5 = operator_new_plt(0xffffffffffffffef);
    }
    uVar6 = uVar5;
    if (param_5 != 0) {
      uVar6 = memmove(uVar5,puVar9,param_5);
    }
    if (param_7 != 0) {
      uVar6 = memcpy(uVar5 + param_5,param_8,param_7);
    }
    iVar3 = param_4 - (param_6 + param_5);
    if (iVar3 != 0) {
      uVar6 = memmove(uVar5 + param_5 + param_7,puVar9 + param_6 + param_5,iVar3);
    }
    if (uVar8 != 0x16) {
      uVar6 = operator_delete_plt_1(puVar9);
    }
    uVar8 = param_7 + param_5 + iVar3;
    *puVar4 = uVar12 | 1;
    puVar4[1] = uVar8;
    puVar4[2] = uVar5;
    *(xunknown1 *)(uVar5 + uVar8) = 0;
    return uVar6;
  }
  axVar13 = FUN_000664d4(puVar4);
  puVar7 = axVar13._0_8_;
  uVar8 = *(uint8 *)(puVar7 + 8);
  puVar9 = *(uint1 **)(puVar7 + 0x10);
  if ((*puVar7 & 1) == 0) {
    puVar9 = puVar7 + 1;
    uVar8 = (uint8)(*puVar7 >> 1);
  }
  uVar12 = uVar8;
  if (param_3 <= uVar8) {
    uVar12 = param_3;
  }
  uVar5 = uVar12 + param_4;
  if (uVar8 - uVar12 <= param_4) {
    uVar5 = uVar8;
  }
  puVar7 = puVar9 + uVar5;
  puVar10 = puVar7;
  if ((param_4 != 0) && (uVar5 != 0)) {
    puVar11 = puVar9;
    do {
      if (*puVar11 == *axVar13._8_8_) {
        uVar8 = 1;
        do {
          if (param_4 == uVar8) {
            puVar10 = puVar11;
            break;
          }
          puVar2 = puVar11 + uVar8;
          if (puVar2 == puVar7) goto code_r0x0009cb08;
          puVar1 = axVar13._8_8_ + uVar8;
          uVar8 = uVar8 + 1;
        } while (*puVar2 == *puVar1);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar7);
  }
code_r0x0009cb08:
  uVar8 = (int8)puVar10 - (int8)puVar9;
  if (puVar10 == puVar7 && param_4 != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
}

/* 0x9d524  size=304 */
uint8 * FUN_0009d524(uint8 *param_1,xunknown8 param_2,uint8 param_3)

{
  uint8 uVar1;
  uint8 uVar2;
  bool bVar3;
  uint1 *puVar4;
  uint8 *puVar5;
  uint8 *puVar6;
  uint8 *puVar7;
  uint4 uVar8;
  uint8 uVar9;
  uint1 *puVar10;
  uint8 uVar11;
  uint8 uVar12;
  xunknown1 axVar13 [16];
  
  uVar9 = *param_1;
  uVar2 = *param_1;
  uVar8 = (uint4)uVar9 & 0xff;
  uVar12 = 0x16;
  if ((uVar2 & 1) != 0) {
    uVar12 = (uVar9 & 0xfffffffffffffffe) - 1;
  }
  if (uVar12 < param_3) {
    if (-uVar12 - 0x12 < param_3 - uVar12) {
      axVar13 = FUN_000664d4(param_1);
      uVar12 = axVar13._8_8_;
      puVar7 = axVar13._0_8_;
      if (0xffffffffffffffef < uVar12) {
        FUN_000664d4(puVar7);
        cxa_begin_catch_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar7 = (uint8 *)(*pcRam00000000000d4458)();
        return puVar7;
      }
      uVar11 = *puVar7;
      uVar9 = (uVar11 & 0xfffffffffffffffe) - 1;
      uVar2 = 0x16;
      if ((*puVar7 & 1) != 0) {
        uVar2 = uVar9;
      }
      puVar6 = puVar7;
      if (uVar2 < uVar12) {
        bVar3 = (uVar11 & 1) != 0;
        uVar2 = uVar11 >> 1 & 0x7f;
        if (bVar3) {
          uVar2 = puVar7[1];
        }
        uVar1 = 0x16;
        if (bVar3) {
          uVar1 = uVar9;
        }
        uVar9 = uVar2;
        if (uVar2 <= uVar12) {
          uVar9 = uVar12;
        }
        uVar12 = uVar9 | 0xf;
        if (uVar9 < 0x17) {
          uVar12 = 0x16;
        }
        if (uVar12 != uVar1) {
          if (uVar12 < 0x17) {
            puVar4 = (uint1 *)puVar7[2];
            puVar5 = (uint8 *)((int8)puVar7 + 1);
            uVar8 = 1;
          }
          else {
            if (uVar1 < uVar12) {
              puVar5 = (uint8 *)operator_new_plt(uVar12 + 1);
            }
            else {
              puVar5 = (uint8 *)operator_new_plt(uVar12 + 1);
            }
            puVar4 = (uint1 *)puVar7[2];
            uVar8 = (uint4)uVar11 & 1;
            puVar6 = puVar5;
            if ((uVar11 & 1) == 0) {
              puVar4 = (uint1 *)((int8)puVar7 + 1);
            }
          }
          if (uVar2 != 0xffffffffffffffff) {
            puVar6 = (uint8 *)memmove(puVar5,puVar4,uVar2 + 1);
          }
          if (uVar8 != 0) {
            puVar6 = (uint8 *)operator_delete_plt_1(puVar4);
          }
          if (uVar12 < 0x17) {
            *(uint1 *)puVar7 = (uint1)((int4)uVar2 << 1);
          }
          else {
            puVar7[2] = (uint8)puVar5;
            *puVar7 = uVar12 + 1 | 1;
            puVar7[1] = uVar2;
          }
        }
      }
      return puVar6;
    }
    puVar10 = (uint1 *)param_1[2];
    if ((uVar9 & 1) == 0) {
      puVar10 = (uint1 *)((int8)param_1 + 1);
    }
    if (uVar12 < 0x7fffffffffffffe7) {
      uVar9 = param_3;
      if (param_3 <= uVar12 * 2) {
        uVar9 = uVar12 * 2;
      }
      uVar12 = 0x17;
      if (0x16 < uVar9) {
        uVar12 = (uVar9 | 0xf) + 1;
      }
    }
    else {
      uVar12 = 0xffffffffffffffef;
    }
    puVar4 = (uint1 *)operator_new_plt(uVar12);
    memcpy(puVar4,param_2,param_3);
    if ((uVar2 & 1) != 0) {
      operator_delete_plt_1(puVar10);
    }
    param_1[2] = (uint8)puVar4;
    *param_1 = uVar12 | 1;
  }
  else {
    puVar4 = (uint1 *)param_1[2];
    if ((uVar9 & 1) == 0) {
      puVar4 = (uint1 *)((int8)param_1 + 1);
    }
    if (param_3 != 0) {
      memmove(puVar4,param_2,param_3);
      uVar8 = (uint4)(uint1)*param_1;
    }
    if ((uVar8 & 1) == 0) {
      *(uint1 *)param_1 = (uint1)((int4)param_3 << 1);
      goto code_r0x0009d628;
    }
  }
  param_1[1] = param_3;
code_r0x0009d628:
  puVar4[param_3] = 0;
  return param_1;
}

/* 0x9e2c0  size=148 */
void FUN_0009e2c0(uint1 *param_1,int8 param_2,uint8 param_3)

{
  uint8 uVar1;
  uint8 uVar2;
  uint1 *puVar3;
  uint1 uVar4;
  uint8 uVar5;
  int8 iVar6;
  
  if (param_3 != 0) {
    uVar4 = *param_1;
    uVar2 = *(uint8 *)(param_1 + 8);
    puVar3 = *(uint1 **)(param_1 + 0x10);
    if ((uVar4 & 1) == 0) {
      puVar3 = param_1 + 1;
      uVar2 = (uint8)(uVar4 >> 1);
    }
    uVar5 = uVar2 - param_2;
    uVar1 = uVar5;
    if (param_3 <= uVar5) {
      uVar1 = param_3;
    }
    if (param_3 < uVar5) {
      memmove(puVar3 + param_2,puVar3 + param_2 + uVar1,uVar5 - uVar1);
      uVar4 = *param_1;
    }
    iVar6 = uVar2 - uVar1;
    if ((uVar4 & 1) == 0) {
      *param_1 = (uint1)((int4)iVar6 << 1);
    }
    else {
      *(int8 *)(param_1 + 8) = iVar6;
    }
    puVar3[iVar6] = 0;
  }
  return;
}

/* 0x9e4a4  size=20 */
void FUN_0009e4a4(void)

{
  cxa_begin_catch_plt();
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4468)();
  return;
}

/* 0x9e5a8  size=60 */
uint8 * FUN_0009e5a8(uint8 *param_1,xunknown8 param_2)

{
  uint8 uVar1;
  uint8 uVar2;
  bool bVar3;
  uint1 *puVar4;
  uint8 *puVar5;
  uint8 *puVar6;
  uint8 uVar7;
  uint8 *puVar8;
  uint4 uVar9;
  uint8 uVar10;
  uint1 *puVar11;
  uint8 uVar12;
  xunknown1 axVar13 [16];
  
  uVar7 = strlen(param_2);
  uVar10 = *param_1;
  uVar2 = *param_1;
  uVar9 = (uint4)uVar10 & 0xff;
  uVar12 = 0x16;
  if ((uVar2 & 1) != 0) {
    uVar12 = (uVar10 & 0xfffffffffffffffe) - 1;
  }
  if (uVar12 < uVar7) {
    if (-uVar12 - 0x12 < uVar7 - uVar12) {
      axVar13 = FUN_000664d4(param_1);
      uVar12 = axVar13._8_8_;
      puVar8 = axVar13._0_8_;
      if (0xffffffffffffffef < uVar12) {
        FUN_000664d4(puVar8);
        cxa_begin_catch_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar8 = (uint8 *)(*pcRam00000000000d4458)();
        return puVar8;
      }
      uVar10 = *puVar8;
      uVar7 = (uVar10 & 0xfffffffffffffffe) - 1;
      uVar2 = 0x16;
      if ((*puVar8 & 1) != 0) {
        uVar2 = uVar7;
      }
      puVar6 = puVar8;
      if (uVar2 < uVar12) {
        bVar3 = (uVar10 & 1) != 0;
        uVar2 = uVar10 >> 1 & 0x7f;
        if (bVar3) {
          uVar2 = puVar8[1];
        }
        uVar1 = 0x16;
        if (bVar3) {
          uVar1 = uVar7;
        }
        uVar7 = uVar2;
        if (uVar2 <= uVar12) {
          uVar7 = uVar12;
        }
        uVar12 = uVar7 | 0xf;
        if (uVar7 < 0x17) {
          uVar12 = 0x16;
        }
        if (uVar12 != uVar1) {
          if (uVar12 < 0x17) {
            puVar4 = (uint1 *)puVar8[2];
            puVar5 = (uint8 *)((int8)puVar8 + 1);
            uVar9 = 1;
          }
          else {
            if (uVar1 < uVar12) {
              puVar5 = (uint8 *)operator_new_plt(uVar12 + 1);
            }
            else {
              puVar5 = (uint8 *)operator_new_plt(uVar12 + 1);
            }
            puVar4 = (uint1 *)puVar8[2];
            uVar9 = (uint4)uVar10 & 1;
            puVar6 = puVar5;
            if ((uVar10 & 1) == 0) {
              puVar4 = (uint1 *)((int8)puVar8 + 1);
            }
          }
          if (uVar2 != 0xffffffffffffffff) {
            puVar6 = (uint8 *)memmove(puVar5,puVar4,uVar2 + 1);
          }
          if (uVar9 != 0) {
            puVar6 = (uint8 *)operator_delete_plt_1(puVar4);
          }
          if (uVar12 < 0x17) {
            *(uint1 *)puVar8 = (uint1)((int4)uVar2 << 1);
          }
          else {
            puVar8[2] = (uint8)puVar5;
            *puVar8 = uVar12 + 1 | 1;
            puVar8[1] = uVar2;
          }
        }
      }
      return puVar6;
    }
    puVar11 = (uint1 *)param_1[2];
    if ((uVar10 & 1) == 0) {
      puVar11 = (uint1 *)((int8)param_1 + 1);
    }
    if (uVar12 < 0x7fffffffffffffe7) {
      uVar10 = uVar7;
      if (uVar7 <= uVar12 * 2) {
        uVar10 = uVar12 * 2;
      }
      uVar12 = 0x17;
      if (0x16 < uVar10) {
        uVar12 = (uVar10 | 0xf) + 1;
      }
    }
    else {
      uVar12 = 0xffffffffffffffef;
    }
    puVar4 = (uint1 *)operator_new_plt(uVar12);
    memcpy(puVar4,param_2,uVar7);
    if ((uVar2 & 1) != 0) {
      operator_delete_plt_1(puVar11);
    }
    param_1[2] = (uint8)puVar4;
    *param_1 = uVar12 | 1;
  }
  else {
    puVar4 = (uint1 *)param_1[2];
    if ((uVar10 & 1) == 0) {
      puVar4 = (uint1 *)((int8)param_1 + 1);
    }
    if (uVar7 != 0) {
      memmove(puVar4,param_2,uVar7);
      uVar9 = (uint4)(uint1)*param_1;
    }
    if ((uVar9 & 1) == 0) {
      *(uint1 *)param_1 = (uint1)((int4)uVar7 << 1);
      goto code_r0x0009d628;
    }
  }
  param_1[1] = uVar7;
code_r0x0009d628:
  puVar4[uVar7] = 0;
  return param_1;
}

/* 0x9e7b8  size=180 */
uint8 * FUN_0009e7b8(uint8 *param_1,xunknown8 param_2,uint8 param_3)

{
  xunknown8 xVar1;
  uint8 *puVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown1 axVar6 [16];
  
  if (param_3 < 0x17) {
    uVar5 = (int8)param_1 + 1;
    *(char *)param_1 = (char)((int4)param_3 << 1);
    if (param_3 != 0) {
      memmove(uVar5,param_2,param_3);
    }
  }
  else {
    if (param_3 + 0x11 < 0x27) {
      axVar6 = FUN_000664d4(param_1);
      puVar2 = axVar6._0_8_;
      uVar5 = *puVar2 & 0xfffffffffffffffe;
      if (param_3 < uVar5) {
        uVar5 = puVar2[2];
        puVar2[1] = param_3;
        if (param_3 != 0) {
          memmove(uVar5,axVar6._8_8_,param_3);
        }
      }
      else {
        if (-uVar5 - 0x11 < (param_3 - uVar5) + 1) {
          axVar6 = FUN_000664d4(puVar2);
          xVar1 = strlen(axVar6._8_8_);
                    /* WARNING: Could not recover jumptable at 0x000c998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar2 = (uint8 *)(*pcRam00000000000d3c28)(axVar6._0_8_,axVar6._8_8_,xVar1);
          return puVar2;
        }
        uVar4 = puVar2[2];
        if ((*puVar2 & 1) == 0) {
          uVar4 = (int8)puVar2 + 1;
        }
        if (uVar5 - 1 < 0x7fffffffffffffe7) {
          uVar3 = (uVar5 - 1) * 2;
          uVar5 = param_3;
          if (param_3 <= uVar3) {
            uVar5 = uVar3;
          }
          uVar3 = 0x17;
          if (0x16 < uVar5) {
            uVar3 = (uVar5 | 0xf) + 1;
          }
          uVar5 = operator_new_plt(uVar3);
        }
        else {
          uVar3 = 0xffffffffffffffef;
          uVar5 = operator_new_plt(0xffffffffffffffef);
        }
        if (param_3 != 0) {
          memcpy(uVar5,axVar6._8_8_,param_3);
        }
        operator_delete_plt_1(uVar4);
        puVar2[1] = param_3;
        puVar2[2] = uVar5;
        *puVar2 = uVar3 | 1;
      }
      *(xunknown1 *)(uVar5 + param_3) = 0;
      return puVar2;
    }
    uVar4 = param_3;
    if (param_3 < 0x2d) {
      uVar4 = 0x2c;
    }
    uVar5 = operator_new_plt((uVar4 | 0xf) + 1);
    memcpy(uVar5,param_2,param_3);
    param_1[1] = param_3;
    param_1[2] = uVar5;
    *param_1 = (uVar4 | 0xf) + 2;
  }
  *(xunknown1 *)(uVar5 + param_3) = 0;
  return param_1;
}

/* 0x9e86c  size=280 */
uint8 * FUN_0009e86c(uint8 *param_1,xunknown8 param_2,uint8 param_3)

{
  xunknown8 xVar1;
  uint8 *puVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint8 uVar5;
  xunknown1 axVar6 [16];
  
  uVar4 = *param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar4) {
    uVar4 = param_1[2];
    param_1[1] = param_3;
    if (param_3 != 0) {
      memmove(uVar4,param_2,param_3);
    }
  }
  else {
    if (-uVar4 - 0x11 < (param_3 - uVar4) + 1) {
      axVar6 = FUN_000664d4(param_1);
      xVar1 = strlen(axVar6._8_8_);
                    /* WARNING: Could not recover jumptable at 0x000c998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar2 = (uint8 *)(*pcRam00000000000d3c28)(axVar6._0_8_,axVar6._8_8_,xVar1);
      return puVar2;
    }
    uVar5 = param_1[2];
    if ((*param_1 & 1) == 0) {
      uVar5 = (int8)param_1 + 1;
    }
    if (uVar4 - 1 < 0x7fffffffffffffe7) {
      uVar3 = (uVar4 - 1) * 2;
      uVar4 = param_3;
      if (param_3 <= uVar3) {
        uVar4 = uVar3;
      }
      uVar3 = 0x17;
      if (0x16 < uVar4) {
        uVar3 = (uVar4 | 0xf) + 1;
      }
      uVar4 = operator_new_plt(uVar3);
    }
    else {
      uVar3 = 0xffffffffffffffef;
      uVar4 = operator_new_plt(0xffffffffffffffef);
    }
    if (param_3 != 0) {
      memcpy(uVar4,param_2,param_3);
    }
    operator_delete_plt_1(uVar5);
    param_1[1] = param_3;
    param_1[2] = uVar4;
    *param_1 = uVar3 | 1;
  }
  *(xunknown1 *)(uVar4 + param_3) = 0;
  return param_1;
}

/* 0x9ee38  size=24 */
uint8 FUN_0009ee38(xunknown8 param_1,xunknown8 param_2,uint8 param_3,uint8 param_4,int8 param_5,
                  int8 param_6,int8 param_7,xunknown8 param_8)

{
  int4 *piVar1;
  uint1 *puVar2;
  uint1 *puVar3;
  uint8 *puVar4;
  uint8 uVar5;
  uint8 uVar6;
  uint1 *puVar7;
  uint8 uVar8;
  uint1 *puVar9;
  uint1 *puVar10;
  int8 iVar11;
  uint8 uVar12;
  xunknown1 axVar13 [16];
  
  axVar13 = FUN_000a14cc(0x3919f /* "basic_string" */);
  uVar8 = axVar13._8_8_;
  puVar4 = axVar13._0_8_;
  if (param_3 <= 0x3fffffffffffffee - uVar8) {
    puVar3 = (uint1 *)((int8)puVar4 + 4);
    if ((*puVar4 & 1) != 0) {
      puVar3 = (uint1 *)puVar4[2];
    }
    if (uVar8 < 0x1fffffffffffffe7) {
      uVar5 = param_3 + uVar8;
      if (param_3 + uVar8 <= uVar8 * 2) {
        uVar5 = uVar8 * 2;
      }
      uVar12 = 5;
      if (4 < uVar5) {
        uVar12 = (uVar5 | 3) + 1;
      }
      if (uVar12 >> 0x3e != 0) goto code_r0x0009efbc;
      uVar5 = operator_new_plt(uVar12 << 2);
    }
    else {
      uVar12 = 0x3fffffffffffffef;
      uVar5 = operator_new_plt(0xffffffffffffffbc);
    }
    uVar6 = uVar5;
    if (param_5 != 0) {
      uVar6 = memmove(uVar5,puVar3,param_5 << 2);
    }
    if (param_7 != 0) {
      uVar6 = memcpy(uVar5 + param_5 * 4,param_8,param_7 << 2);
    }
    iVar11 = param_4 - (param_6 + param_5);
    if (iVar11 != 0) {
      uVar6 = memmove(uVar5 + param_5 * 4 + param_7 * 4,puVar3 + param_6 * 4 + param_5 * 4,
                      iVar11 * 4);
    }
    if (uVar8 != 4) {
      uVar6 = operator_delete_plt_1(puVar3);
    }
    uVar8 = param_7 + param_5 + iVar11;
    *puVar4 = uVar12 | 1;
    puVar4[1] = uVar8;
    puVar4[2] = uVar5;
    *(xunknown4 *)(uVar5 + uVar8 * 4) = 0;
    return uVar6;
  }
  FUN_0009f12c(puVar4);
code_r0x0009efbc:
  axVar13 = FUN_0005ec14();
  puVar7 = axVar13._0_8_;
  uVar8 = (uint8)(*puVar7 >> 1);
  puVar3 = puVar7 + 4;
  if ((*puVar7 & 1) != 0) {
    uVar8 = *(uint8 *)(puVar7 + 8);
    puVar3 = *(uint1 **)(puVar7 + 0x10);
  }
  uVar12 = uVar8;
  if (param_3 <= uVar8) {
    uVar12 = param_3;
  }
  uVar5 = uVar12 + param_4;
  if (uVar8 - uVar12 <= param_4) {
    uVar5 = uVar8;
  }
  puVar7 = puVar3 + uVar5 * 4;
  puVar9 = puVar7;
  if ((param_4 != 0) && (uVar5 != 0)) {
    puVar10 = puVar3;
    do {
      if (*(int4 *)puVar10 == *axVar13._8_8_) {
        iVar11 = 4;
        do {
          if (param_4 * 4 == iVar11) {
            puVar9 = puVar10;
            break;
          }
          puVar2 = puVar10 + iVar11;
          if (puVar2 == puVar7) goto code_r0x0009f06c;
          piVar1 = (int4 *)((int8)axVar13._8_8_ + iVar11);
          iVar11 = iVar11 + 4;
        } while (*(int4 *)puVar2 == *piVar1);
      }
      puVar10 = puVar10 + 4;
    } while (puVar10 != puVar7);
  }
code_r0x0009f06c:
  uVar8 = (int8)puVar9 - (int8)puVar3 >> 2;
  if (puVar9 == puVar7 && param_4 != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
}

/* 0x9f12c  size=24 */
void FUN_0009f12c(void)

{
  uint8 uVar1;
  uint8 *puVar2;
  xunknown1 *pxVar3;
  xunknown8 xVar4;
  uint8 *puVar5;
  xunknown8 in_x3;
  uint8 uVar6;
  uint8 uVar7;
  xunknown1 axVar8 [16];
  
  axVar8 = FUN_0005eb94(0x3919f /* "basic_string" */);
  puVar5 = axVar8._8_8_;
  puVar2 = axVar8._0_8_;
  if ((*puVar5 & 1) == 0) {
    uVar7 = puVar5[1];
    uVar6 = *puVar5;
    puVar2[2] = puVar5[2];
    puVar2[1] = uVar7;
    *puVar2 = uVar6;
    return;
  }
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  if (uVar6 < 5) {
    pxVar3 = (xunknown1 *)((int8)puVar2 + 4);
    *(char *)puVar2 = (char)((int4)uVar6 << 1);
code_r0x0009f1dc:
                    /* WARNING: Could not recover jumptable at 0x000c9a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_memmove)(pxVar3,uVar7,uVar6 * 4 + 4);
    return;
  }
  if (uVar6 < 0x3ffffffffffffff0) {
    if ((uVar6 | 3) < 0x3fffffffffffffff) {
      uVar1 = (uVar6 | 3) + 1;
      pxVar3 = (xunknown1 *)operator_new_plt(uVar1 * 4);
      puVar2[1] = uVar6;
      puVar2[2] = (uint8)pxVar3;
      *puVar2 = uVar1 | 1;
      goto code_r0x0009f1dc;
    }
  }
  else {
    FUN_0009f12c(puVar2,uVar7);
  }
  axVar8 = FUN_0005ec14();
  xVar4 = wcslen(in_x3);
                    /* WARNING: Could not recover jumptable at 0x000caa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4470)(axVar8._0_8_,axVar8._8_8_,uVar6,in_x3,xVar4);
  return;
}

/* 0x9f170  size=144 */
void FUN_0009f170(uint8 *param_1,xunknown8 param_2,uint8 param_3,xunknown8 param_4)

{
  uint8 uVar1;
  xunknown1 *pxVar2;
  xunknown8 xVar3;
  xunknown1 axVar4 [16];
  
  if (param_3 < 5) {
    pxVar2 = (xunknown1 *)((int8)param_1 + 4);
    *(char *)param_1 = (char)((int4)param_3 << 1);
code_r0x0009f1dc:
                    /* WARNING: Could not recover jumptable at 0x000c9a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_memmove)(pxVar2,param_2,param_3 * 4 + 4);
    return;
  }
  if (param_3 < 0x3ffffffffffffff0) {
    if ((param_3 | 3) < 0x3fffffffffffffff) {
      uVar1 = (param_3 | 3) + 1;
      pxVar2 = (xunknown1 *)operator_new_plt(uVar1 * 4);
      param_1[1] = param_3;
      param_1[2] = (uint8)pxVar2;
      *param_1 = uVar1 | 1;
      goto code_r0x0009f1dc;
    }
  }
  else {
    FUN_0009f12c();
  }
  axVar4 = FUN_0005ec14();
  xVar3 = wcslen(param_4);
                    /* WARNING: Could not recover jumptable at 0x000caa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4470)(axVar4._0_8_,axVar4._8_8_,param_3,param_4,xVar3);
  return;
}

/* 0x9f54c  size=304 */
void FUN_0009f54c(uint8 *param_1,uint8 param_2,uint8 param_3,int8 param_4,int8 param_5,int8 param_6,
                 int8 param_7)

{
  int8 iVar1;
  uint8 uVar2;
  uint1 *puVar3;
  xunknown4 *pxVar4;
  int8 iVar5;
  uint8 uVar6;
  xunknown1 axVar7 [12];
  
  uVar6 = 0x3fffffffffffffef;
  if (0x3fffffffffffffef - param_2 < param_3) {
    FUN_0009f12c(param_1);
code_r0x0009f678:
    axVar7 = FUN_0005ec14();
    puVar3 = axVar7._0_8_;
    if ((*puVar3 & 1) == 0) {
      *puVar3 = 2;
      *(int4 *)(puVar3 + 4) = axVar7._8_4_;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      return;
    }
    pxVar4 = *(xunknown4 **)(puVar3 + 0x10);
    puVar3[8] = 1;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *pxVar4 = axVar7._8_4_;
    pxVar4[1] = 0;
    return;
  }
  puVar3 = (uint1 *)((int8)param_1 + 4);
  if ((*param_1 & 1) != 0) {
    puVar3 = (uint1 *)param_1[2];
  }
  if (param_2 < 0x1fffffffffffffe7) {
    uVar2 = param_3 + param_2;
    if (param_3 + param_2 <= param_2 * 2) {
      uVar2 = param_2 * 2;
    }
    uVar6 = 5;
    if (4 < uVar2) {
      uVar6 = (uVar2 | 3) + 1;
    }
    if (uVar6 >> 0x3e != 0) goto code_r0x0009f678;
  }
  uVar2 = operator_new_plt(uVar6 << 2);
  iVar5 = param_5 * 4;
  if (param_5 != 0) {
    memmove(uVar2,puVar3,iVar5);
  }
  iVar1 = param_4 - (param_6 + param_5);
  if (iVar1 != 0) {
    memmove(uVar2 + iVar5 + param_7 * 4,puVar3 + param_6 * 4 + iVar5,iVar1 * 4);
  }
  if (param_2 != 4) {
    operator_delete_plt_1(puVar3);
  }
  *param_1 = uVar6 | 1;
  param_1[1] = (param_4 - param_6) + param_7;
  param_1[2] = uVar2;
  return;
}

/* 0x9fae4  size=220 */
uint8 * FUN_0009fae4(uint8 *param_1,xunknown8 param_2,uint8 param_3)

{
  uint1 *puVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint4 uVar4;
  uint8 uVar5;
  
  uVar5 = *param_1;
  uVar2 = 4;
  if ((*param_1 & 1) != 0) {
    uVar2 = (uVar5 & 0xfffffffffffffffe) - 1;
  }
  uVar4 = (uint4)uVar5 & 0xff;
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    uVar3 = uVar5 >> 1 & 0x7f;
    if ((uVar5 & 1) != 0) {
      uVar3 = param_1[1];
    }
    std____ndk1__basic_string____grow_by_and_replace_plt
              (param_1,uVar2,param_3 - uVar2,uVar3,0,uVar3,param_3);
    return param_1;
  }
  puVar1 = (uint1 *)((int8)param_1 + 4);
  if ((uVar5 & 1) != 0) {
    puVar1 = (uint1 *)param_1[2];
  }
  if (param_3 != 0) {
    memmove(puVar1,param_2,param_3 << 2);
    uVar4 = (uint4)(uint1)*param_1;
  }
  if ((uVar4 & 1) == 0) {
    *(uint1 *)param_1 = (uint1)((int4)param_3 << 1);
  }
  else {
    param_1[1] = param_3;
  }
  puVar1 = puVar1 + param_3 * 4;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return param_1;
}

/* 0x9fc40  size=324 */
void FUN_0009fc40(uint8 *param_1,uint8 param_2)

{
  uint8 uVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint1 uVar4;
  uint1 *puVar5;
  uint1 *puVar6;
  uint1 uVar7;
  
  uVar4 = (uint1)*param_1;
  uVar2 = (uint8)(uVar4 >> 1);
  if ((uVar4 & 1) != 0) {
    uVar2 = param_1[1];
  }
  if (param_2 < 5) {
    puVar6 = (uint1 *)((int8)param_1 + 4);
    uVar7 = 1;
    puVar5 = (uint1 *)param_1[2];
  }
  else {
    uVar1 = param_2 + 1;
    uVar3 = 4;
    if ((uVar4 & 1) != 0) {
      uVar3 = (*param_1 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 < param_2) {
      if (uVar1 >> 0x3e != 0) {
        FUN_0005ec14();
code_r0x0009fd60:
        FUN_0005ec14();
        cxa_begin_catch_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam00000000000d4458)();
        return;
      }
      puVar6 = (uint1 *)operator_new_plt(uVar1 * 4);
    }
    else {
      if (uVar1 >> 0x3e != 0) goto code_r0x0009fd60;
      puVar6 = (uint1 *)operator_new_plt(uVar1 * 4);
    }
    uVar7 = uVar4 & 1;
    puVar5 = (uint1 *)((int8)param_1 + 4);
    if ((uVar4 & 1) != 0) {
      puVar5 = (uint1 *)param_1[2];
    }
  }
  if (uVar2 != 0xffffffffffffffff) {
    memmove(puVar6,puVar5,(uVar2 + 1) * 4);
  }
  if (uVar7 != 0) {
    operator_delete_plt_1(puVar5);
  }
  if (param_2 < 5) {
    *(uint1 *)param_1 = (uint1)((int4)uVar2 << 1);
  }
  else {
    param_1[2] = (uint8)puVar6;
    *param_1 = param_2 + 1 | 1;
    param_1[1] = uVar2;
  }
  return;
}

/* 0xa08f0  size=156 */
void FUN_000a08f0(uint1 *param_1,int8 param_2,uint8 param_3)

{
  uint1 *puVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint1 uVar4;
  bool bVar5;
  uint8 uVar6;
  int8 iVar7;
  
  if (param_3 != 0) {
    uVar4 = *param_1;
    bVar5 = (uVar4 & 1) != 0;
    uVar2 = (uint8)(uVar4 >> 1);
    if (bVar5) {
      uVar2 = *(uint8 *)(param_1 + 8);
    }
    uVar6 = uVar2 - param_2;
    puVar1 = param_1 + 4;
    if (bVar5) {
      puVar1 = *(uint1 **)(param_1 + 0x10);
    }
    uVar3 = uVar6;
    if (param_3 <= uVar6) {
      uVar3 = param_3;
    }
    if (param_3 < uVar6) {
      memmove(puVar1 + param_2 * 4,puVar1 + param_2 * 4 + uVar3 * 4,(uVar6 - uVar3) * 4);
      uVar4 = *param_1;
    }
    iVar7 = uVar2 - uVar3;
    if ((uVar4 & 1) == 0) {
      *param_1 = (uint1)((int4)iVar7 << 1);
    }
    else {
      *(int8 *)(param_1 + 8) = iVar7;
    }
    puVar1 = puVar1 + iVar7 * 4;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return;
}

/* 0xa0d18  size=60 */
uint8 * FUN_000a0d18(uint8 *param_1,xunknown8 param_2)

{
  uint1 *puVar1;
  uint8 uVar2;
  uint8 uVar3;
  uint8 uVar4;
  uint4 uVar5;
  uint8 uVar6;
  xunknown8 unaff_x29;
  xunknown8 unaff_x30;
  
  uVar4 = wcslen(param_2);
  uVar6 = *param_1;
  uVar2 = 4;
  if ((*param_1 & 1) != 0) {
    uVar2 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  uVar5 = (uint4)uVar6 & 0xff;
  if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
    uVar3 = uVar6 >> 1 & 0x7f;
    if ((uVar6 & 1) != 0) {
      uVar3 = param_1[1];
    }
    std____ndk1__basic_string____grow_by_and_replace_plt
              (param_1,uVar2,uVar4 - uVar2,uVar3,0,uVar3,uVar4,param_2,unaff_x29,unaff_x30);
    return param_1;
  }
  puVar1 = (uint1 *)((int8)param_1 + 4);
  if ((uVar6 & 1) != 0) {
    puVar1 = (uint1 *)param_1[2];
  }
  if (uVar4 != 0) {
    memmove(puVar1,param_2,uVar4 << 2);
    uVar5 = (uint4)(uint1)*param_1;
  }
  if ((uVar5 & 1) == 0) {
    *(uint1 *)param_1 = (uint1)((int4)uVar4 << 1);
  }
  else {
    param_1[1] = uVar4;
  }
  puVar1 = puVar1 + uVar4 * 4;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return param_1;
}

/* 0xa0f54  size=212 */
uint8 * FUN_000a0f54(uint8 *param_1,xunknown8 param_2,uint8 param_3)

{
  uint8 *puVar1;
  uint8 uVar2;
  xunknown1 *pxVar3;
  xunknown1 axVar4 [16];
  xunknown1 axStack_58 [24];
  
  if (param_3 < 5) {
    pxVar3 = (xunknown1 *)((int8)param_1 + 4);
    *(char *)param_1 = (char)((int4)param_3 << 1);
    if (param_3 != 0) {
      memmove(pxVar3,param_2,param_3 << 2);
    }
code_r0x000a0ffc:
    *(xunknown4 *)(pxVar3 + param_3 * 4) = 0;
    return param_1;
  }
  if (param_3 + 0xc000000000000011 < 0xc000000000000015) {
    FUN_0009f12c(param_1);
  }
  else {
    uVar2 = param_3;
    if (param_3 < 9) {
      uVar2 = 8;
    }
    if ((uVar2 | 3) < 0x3fffffffffffffff) {
      uVar2 = (uVar2 | 3) + 1;
      pxVar3 = (xunknown1 *)operator_new_plt(uVar2 * 4);
      memcpy(pxVar3,param_2,param_3 << 2);
      param_1[1] = param_3;
      param_1[2] = (uint8)pxVar3;
      *param_1 = uVar2 | 1;
      goto code_r0x000a0ffc;
    }
  }
  axVar4 = FUN_0005ec14();
  puVar1 = axVar4._0_8_;
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 <= param_3) {
    std____ndk1__basic_string____grow_by_and_replace_plt
              (puVar1,uVar2 - 1,(param_3 - uVar2) + 1,puVar1[1],0,puVar1[1],param_3,axVar4._8_8_,
               axStack_58 + 0x18,FUN_000a1028);
    return puVar1;
  }
  uVar2 = puVar1[2];
  puVar1[1] = param_3;
  if (param_3 != 0) {
    memmove(uVar2,axVar4._8_8_,param_3 << 2);
  }
  *(xunknown4 *)(uVar2 + param_3 * 4) = 0;
  return puVar1;
}

/* 0xa1028  size=164 */
uint8 * FUN_000a1028(uint8 *param_1,xunknown8 param_2,uint8 param_3)

{
  uint8 uVar1;
  
  uVar1 = *param_1 & 0xfffffffffffffffe;
  if (uVar1 <= param_3) {
    std____ndk1__basic_string____grow_by_and_replace_plt
              (param_1,uVar1 - 1,(param_3 - uVar1) + 1,param_1[1],0,param_1[1],param_3);
    return param_1;
  }
  uVar1 = param_1[2];
  param_1[1] = param_3;
  if (param_3 != 0) {
    memmove(uVar1,param_2,param_3 << 2);
  }
  *(xunknown4 *)(uVar1 + param_3 * 4) = 0;
  return param_1;
}

/* 0xa14cc  size=84 */
void FUN_000a14cc(xunknown8 param_1)

{
  xunknown8 xVar1;
  
  xVar1 = cxa_allocate_exception_plt(0x10);
  FUN_000a4b1c(xVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar1,xRam00000000000d38d8,xRam00000000000d38e0);
  return;
}

/* 0xa4b1c  size=56 */
void FUN_000a4b1c(int8 *param_1)

{
  std__logic_error__logic_error_plt();
  *param_1 = iRam00000000000d38e8 + 0x10;
  return;
}

/* 0xa4b54  size=580 */
void FUN_000a4b54(uint1 *param_1,uint1 *param_2,int8 *param_3,xunknown4 param_4)

{
  xunknown8 *pxVar1;
  int4 iVar2;
  int4 iVar3;
  int4 *piVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  uint1 *puVar7;
  uint8 uVar8;
  uint8 uVar9;
  uint1 uVar10;
  uint8 uVar11;
  uint8 uVar12;
  int8 iStack_60;
  uint8 uStack_58;
  uint8 uStack_50;
  uint8 uStack_48;
  
  puVar7 = *(uint1 **)(param_2 + 0x10);
  iStack_60 = 0;
  if ((*param_2 & 1) == 0) {
    puVar7 = param_2 + 1;
  }
  piVar4 = (int4 *)__errno();
  iVar2 = *piVar4;
  *piVar4 = 0;
  strtol(puVar7,&iStack_60,param_4);
  iVar3 = *piVar4;
  *piVar4 = iVar2;
  if (iVar3 == 0x22) {
    uVar10 = *param_1;
    uVar8 = (uint8)(uVar10 >> 1);
    if ((uVar10 & 1) != 0) {
      uVar8 = *(uint8 *)(param_1 + 8);
    }
    uVar12 = uVar8 + 0xe;
    if (0xffffffffffffffef < uVar12) goto code_r0x000a4c5c;
    if (uVar12 < 0x17) {
      uStack_50 = 0;
      uVar9 = (uint8)&uStack_58 | 1;
      uStack_48 = 0;
      uStack_58 = (uint8)(uint1)((int4)uVar12 << 1);
      uVar11 = uVar9;
      if (uVar8 != 0) goto code_r0x000a4cb4;
    }
    else {
      uVar9 = operator_new_plt((uVar12 | 0xf) + 1);
      uStack_58 = (uVar12 | 0xf) + 2;
      uVar11 = (uint8)&uStack_58 | 1;
      uStack_50 = uVar12;
      uStack_48 = uVar9;
code_r0x000a4cb4:
      puVar7 = *(uint1 **)(param_1 + 0x10);
      if ((uVar10 & 1) == 0) {
        puVar7 = param_1 + 1;
      }
      memmove(uVar9,puVar7,uVar8);
    }
    pxVar1 = (xunknown8 *)(uVar9 + uVar8);
    xVar5 = CONCAT26(xRam0000000000038f03,Ram0000000000038efd);
    xVar6 = CONCAT62(Ram0000000000038f05,xRam0000000000038f03);
    *(xunknown1 *)((int8)pxVar1 + 0xe) = 0;
    *pxVar1 = xVar5;
    *(xunknown8 *)((int8)pxVar1 + 6) = xVar6;
    if ((uStack_58 & 1) != 0) {
      uVar11 = uStack_48;
    }
    FUN_000a14cc(uVar11);
code_r0x000a4d00:
    uVar9 = operator_new_plt((uVar12 | 0xf) + 1);
    uStack_58 = (uVar12 | 0xf) + 2;
    uVar11 = (uint8)&uStack_58 | 1;
    uStack_50 = uVar12;
    uStack_48 = uVar9;
  }
  else {
    if (iStack_60 - (int8)puVar7 != 0) {
      if (param_3 != (int8 *)0x0) {
        *param_3 = iStack_60 - (int8)puVar7;
      }
      return;
    }
    uVar10 = *param_1;
    uVar8 = (uint8)(uVar10 >> 1);
    if ((uVar10 & 1) != 0) {
      uVar8 = *(uint8 *)(param_1 + 8);
    }
    uVar12 = uVar8 + 0xf;
    if (0xffffffffffffffef < uVar12) {
code_r0x000a4c5c:
      FUN_000664d4(&uStack_58);
    }
    if (0x16 < uVar12) goto code_r0x000a4d00;
    uStack_50 = 0;
    uVar9 = (uint8)&uStack_58 | 1;
    uStack_48 = 0;
    uStack_58 = (uint8)(uint1)((int4)uVar12 << 1);
    uVar11 = uVar9;
    if (uVar8 == 0) goto code_r0x000a4d3c;
  }
  puVar7 = *(uint1 **)(param_1 + 0x10);
  if ((uVar10 & 1) == 0) {
    puVar7 = param_1 + 1;
  }
  memmove(uVar9,puVar7,uVar8);
code_r0x000a4d3c:
  pxVar1 = (xunknown8 *)(uVar9 + uVar8);
  xVar5 = CONCAT17(xRam0000000000029f73,Ram0000000000029f6c);
  xVar6 = CONCAT71(Ram0000000000029f74,xRam0000000000029f73);
  *(xunknown1 *)((int8)pxVar1 + 0xf) = 0;
  *pxVar1 = xVar5;
  *(xunknown8 *)((int8)pxVar1 + 7) = xVar6;
  if ((uStack_58 & 1) != 0) {
    uVar11 = uStack_48;
  }
  xVar5 = FUN_000a4d98(uVar11);
  std____ndk1__basic_string__dtor_basic_string_plt(&uStack_58);
  xVar5 = FUN_000c5688(xVar5);
  std____ndk1__basic_string__dtor_basic_string_plt(&uStack_58);
  xVar5 = FUN_000c5688(xVar5);
  xVar6 = cxa_allocate_exception_plt(0x10);
  FUN_000a4dec(xVar6,xVar5);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar6,xRam00000000000d38f0,xRam00000000000d38f8);
  return;
}

/* 0xa4d98  size=84 */
void FUN_000a4d98(xunknown8 param_1)

{
  xunknown8 xVar1;
  
  xVar1 = cxa_allocate_exception_plt(0x10);
  FUN_000a4dec(xVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar1,xRam00000000000d38f0,xRam00000000000d38f8);
  return;
}

/* 0xa4dec  size=56 */
void FUN_000a4dec(int8 *param_1)

{
  std__logic_error__logic_error_plt();
  *param_1 = iRam00000000000d3900 + 0x10;
  return;
}

/* 0xa4e24  size=588 */
uint1 * FUN_000a4e24(uint1 *param_1,uint1 *param_2,int8 *param_3,xunknown4 param_4)

{
  xunknown8 *pxVar1;
  int4 iVar2;
  int4 iVar3;
  uint4 uVar4;
  uint4 uVar5;
  xunknown8 xVar6;
  int4 *piVar7;
  uint1 *puVar8;
  xunknown8 xVar9;
  uint4 uVar10;
  uint1 *puVar11;
  uint8 uVar12;
  uint8 uVar13;
  uint1 uVar14;
  uint8 uVar15;
  uint8 uVar16;
  xunknown1 axVar17 [12];
  int8 iStack_60;
  uint8 uStack_58;
  uint8 uStack_50;
  uint8 uStack_48;
  
  iStack_60 = 0;
  puVar11 = param_2 + 4;
  if ((*param_2 & 1) != 0) {
    puVar11 = *(uint1 **)(param_2 + 0x10);
  }
  piVar7 = (int4 *)__errno();
  iVar2 = *piVar7;
  *piVar7 = 0;
  puVar8 = (uint1 *)wcstol(puVar11,&iStack_60,param_4);
  iVar3 = *piVar7;
  *piVar7 = iVar2;
  if (iVar3 == 0x22) {
    uVar14 = *param_1;
    uVar12 = (uint8)(uVar14 >> 1);
    if ((uVar14 & 1) != 0) {
      uVar12 = *(uint8 *)(param_1 + 8);
    }
    uVar16 = uVar12 + 0xe;
    if (0xffffffffffffffef < uVar16) goto code_r0x000a4f34;
    if (uVar16 < 0x17) {
      uStack_50 = 0;
      uVar13 = (uint8)&uStack_58 | 1;
      uStack_48 = 0;
      uStack_58 = (uint8)(uint1)((int4)uVar16 << 1);
      uVar15 = uVar13;
      if (uVar12 != 0) goto code_r0x000a4f8c;
    }
    else {
      uVar13 = operator_new_plt((uVar16 | 0xf) + 1);
      uStack_58 = (uVar16 | 0xf) + 2;
      uVar15 = (uint8)&uStack_58 | 1;
      uStack_50 = uVar16;
      uStack_48 = uVar13;
code_r0x000a4f8c:
      puVar11 = *(uint1 **)(param_1 + 0x10);
      if ((uVar14 & 1) == 0) {
        puVar11 = param_1 + 1;
      }
      memmove(uVar13,puVar11,uVar12);
    }
    pxVar1 = (xunknown8 *)(uVar13 + uVar12);
    xVar9 = CONCAT26(xRam0000000000038f03,Ram0000000000038efd);
    xVar6 = CONCAT62(Ram0000000000038f05,xRam0000000000038f03);
    *(xunknown1 *)((int8)pxVar1 + 0xe) = 0;
    *pxVar1 = xVar9;
    *(xunknown8 *)((int8)pxVar1 + 6) = xVar6;
    if ((uStack_58 & 1) != 0) {
      uVar15 = uStack_48;
    }
    FUN_000a14cc(uVar15);
code_r0x000a4fd8:
    uVar13 = operator_new_plt((uVar16 | 0xf) + 1);
    uStack_58 = (uVar16 | 0xf) + 2;
    uVar15 = (uint8)&uStack_58 | 1;
    uStack_50 = uVar16;
    uStack_48 = uVar13;
  }
  else {
    if (iStack_60 - (int8)puVar11 != 0) {
      if (param_3 != (int8 *)0x0) {
        *param_3 = iStack_60 - (int8)puVar11 >> 2;
      }
      return puVar8;
    }
    uVar14 = *param_1;
    uVar12 = (uint8)(uVar14 >> 1);
    if ((uVar14 & 1) != 0) {
      uVar12 = *(uint8 *)(param_1 + 8);
    }
    uVar16 = uVar12 + 0xf;
    if (0xffffffffffffffef < uVar16) {
code_r0x000a4f34:
      FUN_000664d4(&uStack_58);
    }
    if (0x16 < uVar16) goto code_r0x000a4fd8;
    uStack_50 = 0;
    uVar13 = (uint8)&uStack_58 | 1;
    uStack_48 = 0;
    uStack_58 = (uint8)(uint1)((int4)uVar16 << 1);
    uVar15 = uVar13;
    if (uVar12 == 0) goto code_r0x000a5014;
  }
  puVar11 = *(uint1 **)(param_1 + 0x10);
  if ((uVar14 & 1) == 0) {
    puVar11 = param_1 + 1;
  }
  memmove(uVar13,puVar11,uVar12);
code_r0x000a5014:
  pxVar1 = (xunknown8 *)(uVar13 + uVar12);
  xVar9 = CONCAT17(xRam0000000000029f73,Ram0000000000029f6c);
  xVar6 = CONCAT71(Ram0000000000029f74,xRam0000000000029f73);
  *(xunknown1 *)((int8)pxVar1 + 0xf) = 0;
  *pxVar1 = xVar9;
  *(xunknown8 *)((int8)pxVar1 + 7) = xVar6;
  if ((uStack_58 & 1) != 0) {
    uVar15 = uStack_48;
  }
  xVar9 = FUN_000a4d98(uVar15);
  std____ndk1__basic_string__dtor_basic_string_plt(&uStack_58);
  xVar9 = FUN_000c5688(xVar9);
  std____ndk1__basic_string__dtor_basic_string_plt(&uStack_58);
  axVar17 = FUN_000c5688(xVar9);
  uVar10 = axVar17._8_4_;
  puVar11 = axVar17._0_8_;
  if (999999 < uVar10) {
    if (99999999 < uVar10) {
      uVar4 = uVar10 % 100000000;
      if (uVar10 < 1000000000) {
        *puVar11 = (uint1)(uVar10 / 100000000) | 0x30;
        uVar10 = (uVar4 % 1000000) % 10000;
        *(xunknown2 *)(puVar11 + 1) = *(xunknown2 *)(((uint8)uVar4 / 1000000) * 2 + 0x4238c);
        *(xunknown2 *)(puVar11 + 3) =
             *(xunknown2 *)(((uint8)(uVar4 % 1000000) / 10000) * 2 + 0x4238c);
        *(xunknown2 *)(puVar11 + 5) = *(xunknown2 *)((uint8)(uVar10 / 100) * 2 + 0x4238c);
        *(xunknown2 *)(puVar11 + 7) = *(xunknown2 *)((uint8)(uVar10 % 100) * 2 + 0x4238c);
        return puVar11 + 9;
      }
      uVar5 = (uVar4 % 1000000) % 10000;
      *(xunknown2 *)puVar11 = *(xunknown2 *)((uint8)(uVar10 / 100000000) * 2 + 0x4238c);
      *(xunknown2 *)(puVar11 + 2) = *(xunknown2 *)(((uint8)uVar4 / 1000000) * 2 + 0x4238c);
      *(xunknown2 *)(puVar11 + 4) = *(xunknown2 *)(((uint8)(uVar4 % 1000000) / 10000) * 2 + 0x4238c)
      ;
      *(xunknown2 *)(puVar11 + 6) = *(xunknown2 *)((uint8)(uVar5 / 100) * 2 + 0x4238c);
      *(xunknown2 *)(puVar11 + 8) = *(xunknown2 *)((uint8)(uVar5 % 100) * 2 + 0x4238c);
      return puVar11 + 10;
    }
    uVar4 = uVar10 % 1000000;
    if (uVar10 < 10000000) {
      *puVar11 = (char)(uVar10 / 1000000) + 0x30;
      *(xunknown2 *)(puVar11 + 1) = *(xunknown2 *)(((uint8)uVar4 / 10000) * 2 + 0x4238c);
      *(xunknown2 *)(puVar11 + 3) = *(xunknown2 *)((uint8)((uVar4 % 10000) / 100) * 2 + 0x4238c);
      *(xunknown2 *)(puVar11 + 5) = *(xunknown2 *)((uint8)((uVar4 % 10000) % 100) * 2 + 0x4238c);
      return puVar11 + 7;
    }
    *(xunknown2 *)puVar11 = *(xunknown2 *)((uint8)(uVar10 / 1000000) * 2 + 0x4238c);
    *(xunknown2 *)(puVar11 + 2) = *(xunknown2 *)(((uint8)uVar4 / 10000) * 2 + 0x4238c);
    *(xunknown2 *)(puVar11 + 4) = *(xunknown2 *)((uint8)((uVar4 % 10000) / 100) * 2 + 0x4238c);
    *(xunknown2 *)(puVar11 + 6) = *(xunknown2 *)((uint8)((uVar4 % 10000) % 100) * 2 + 0x4238c);
    return puVar11 + 8;
  }
  if (0x270 < uVar10 >> 4) {
    if (uVar10 >> 5 < 0xc35) {
      *puVar11 = (uint1)(uVar10 / 10000) | 0x30;
      *(xunknown2 *)(puVar11 + 1) = *(xunknown2 *)((uint8)((uVar10 % 10000) / 100) * 2 + 0x4238c);
      *(xunknown2 *)(puVar11 + 3) = *(xunknown2 *)((uint8)((uVar10 % 10000) % 100) * 2 + 0x4238c);
      return puVar11 + 5;
    }
    *(xunknown2 *)puVar11 = *(xunknown2 *)((uint8)(uVar10 / 10000) * 2 + 0x4238c);
    *(xunknown2 *)(puVar11 + 2) = *(xunknown2 *)((uint8)((uVar10 % 10000) / 100) * 2 + 0x4238c);
    *(xunknown2 *)(puVar11 + 4) = *(xunknown2 *)((uint8)((uVar10 % 10000) % 100) * 2 + 0x4238c);
    return puVar11 + 6;
  }
  if (uVar10 < 100) {
    if (uVar10 < 10) {
      *puVar11 = axVar17[8] | 0x30;
      return puVar11 + 1;
    }
    *(xunknown2 *)puVar11 = *(xunknown2 *)((uint8)uVar10 * 2 + 0x4238c);
    return puVar11 + 2;
  }
  uVar4 = (uVar10 >> 2 & 0x3fff) / 0x19;
  uVar12 = (uint8)(uVar10 + uVar4 * -100);
  if (uVar10 < 1000) {
    *puVar11 = (uint1)uVar4 | 0x30;
    *(xunknown2 *)(puVar11 + 1) = *(xunknown2 *)((uVar12 & 0xffff) * 2 + 0x4238c);
    return puVar11 + 3;
  }
  *(xunknown2 *)puVar11 = *(xunknown2 *)((uint8)uVar4 * 2 + 0x4238c);
  *(xunknown2 *)(puVar11 + 2) = *(xunknown2 *)((uVar12 & 0xffff) * 2 + 0x4238c);
  return puVar11 + 4;
}

/* 0xa5070  size=952 */
uint1 * FUN_000a5070(uint1 *param_1,uint4 param_2)

{
  uint4 uVar1;
  uint4 uVar2;
  uint8 uVar3;
  
  if (999999 < param_2) {
    if (99999999 < param_2) {
      uVar1 = param_2 % 100000000;
      if (param_2 < 1000000000) {
        *param_1 = (uint1)(param_2 / 100000000) | 0x30;
        uVar2 = (uVar1 % 1000000) % 10000;
        *(xunknown2 *)(param_1 + 1) = *(xunknown2 *)(((uint8)uVar1 / 1000000) * 2 + 0x4238c);
        *(xunknown2 *)(param_1 + 3) =
             *(xunknown2 *)(((uint8)(uVar1 % 1000000) / 10000) * 2 + 0x4238c);
        *(xunknown2 *)(param_1 + 5) = *(xunknown2 *)((uint8)(uVar2 / 100) * 2 + 0x4238c);
        *(xunknown2 *)(param_1 + 7) = *(xunknown2 *)((uint8)(uVar2 % 100) * 2 + 0x4238c);
        return param_1 + 9;
      }
      uVar2 = (uVar1 % 1000000) % 10000;
      *(xunknown2 *)param_1 = *(xunknown2 *)((uint8)(param_2 / 100000000) * 2 + 0x4238c);
      *(xunknown2 *)(param_1 + 2) = *(xunknown2 *)(((uint8)uVar1 / 1000000) * 2 + 0x4238c);
      *(xunknown2 *)(param_1 + 4) = *(xunknown2 *)(((uint8)(uVar1 % 1000000) / 10000) * 2 + 0x4238c)
      ;
      *(xunknown2 *)(param_1 + 6) = *(xunknown2 *)((uint8)(uVar2 / 100) * 2 + 0x4238c);
      *(xunknown2 *)(param_1 + 8) = *(xunknown2 *)((uint8)(uVar2 % 100) * 2 + 0x4238c);
      return param_1 + 10;
    }
    uVar1 = param_2 % 1000000;
    if (param_2 < 10000000) {
      *param_1 = (char)(param_2 / 1000000) + 0x30;
      *(xunknown2 *)(param_1 + 1) = *(xunknown2 *)(((uint8)uVar1 / 10000) * 2 + 0x4238c);
      *(xunknown2 *)(param_1 + 3) = *(xunknown2 *)((uint8)((uVar1 % 10000) / 100) * 2 + 0x4238c);
      *(xunknown2 *)(param_1 + 5) = *(xunknown2 *)((uint8)((uVar1 % 10000) % 100) * 2 + 0x4238c);
      return param_1 + 7;
    }
    *(xunknown2 *)param_1 = *(xunknown2 *)((uint8)(param_2 / 1000000) * 2 + 0x4238c);
    *(xunknown2 *)(param_1 + 2) = *(xunknown2 *)(((uint8)uVar1 / 10000) * 2 + 0x4238c);
    *(xunknown2 *)(param_1 + 4) = *(xunknown2 *)((uint8)((uVar1 % 10000) / 100) * 2 + 0x4238c);
    *(xunknown2 *)(param_1 + 6) = *(xunknown2 *)((uint8)((uVar1 % 10000) % 100) * 2 + 0x4238c);
    return param_1 + 8;
  }
  if (0x270 < param_2 >> 4) {
    if (param_2 >> 5 < 0xc35) {
      *param_1 = (uint1)(param_2 / 10000) | 0x30;
      *(xunknown2 *)(param_1 + 1) = *(xunknown2 *)((uint8)((param_2 % 10000) / 100) * 2 + 0x4238c);
      *(xunknown2 *)(param_1 + 3) = *(xunknown2 *)((uint8)((param_2 % 10000) % 100) * 2 + 0x4238c);
      return param_1 + 5;
    }
    *(xunknown2 *)param_1 = *(xunknown2 *)((uint8)(param_2 / 10000) * 2 + 0x4238c);
    *(xunknown2 *)(param_1 + 2) = *(xunknown2 *)((uint8)((param_2 % 10000) / 100) * 2 + 0x4238c);
    *(xunknown2 *)(param_1 + 4) = *(xunknown2 *)((uint8)((param_2 % 10000) % 100) * 2 + 0x4238c);
    return param_1 + 6;
  }
  if (param_2 < 100) {
    if (param_2 < 10) {
      *param_1 = (uint1)param_2 | 0x30;
      return param_1 + 1;
    }
    *(xunknown2 *)param_1 = *(xunknown2 *)((uint8)param_2 * 2 + 0x4238c);
    return param_1 + 2;
  }
  uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
  uVar3 = (uint8)(param_2 + uVar1 * -100);
  if (param_2 < 1000) {
    *param_1 = (uint1)uVar1 | 0x30;
    *(xunknown2 *)(param_1 + 1) = *(xunknown2 *)((uVar3 & 0xffff) * 2 + 0x4238c);
    return param_1 + 3;
  }
  *(xunknown2 *)param_1 = *(xunknown2 *)((uint8)uVar1 * 2 + 0x4238c);
  *(xunknown2 *)(param_1 + 2) = *(xunknown2 *)((uVar3 & 0xffff) * 2 + 0x4238c);
  return param_1 + 4;
}

/* 0xa5428  size=272 */
void FUN_000a5428(int8 *param_1,xunknown8 param_2,xunknown4 param_3)

{
  int4 iVar1;
  int4 iVar2;
  int4 *piVar3;
  uint8 uVar4;
  int8 iVar5;
  char *pcVar6;
  char acStack_440 [1024];
  
  pcVar6 = acStack_440;
  piVar3 = (int4 *)__errno();
  iVar1 = *piVar3;
  iVar2 = strerror_r(param_3,acStack_440,0x400);
  if (iVar2 != 0) {
    if (iVar2 == -1) {
      iVar2 = *piVar3;
    }
    if (iVar2 != 0x16) goto code_r0x000a5534;
    pcVar6 = "";
  }
  if (*pcVar6 == '\0') {
    snprintf(acStack_440,0x400,0x36f9c /* "Unknown error %d" */,param_3);
    pcVar6 = acStack_440;
  }
  *piVar3 = iVar1;
  uVar4 = strlen(pcVar6);
  if (0xffffffffffffffef < uVar4) {
    FUN_000664d4(param_1);
code_r0x000a5534:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_abort)();
    return;
  }
  if (uVar4 < 0x17) {
    iVar5 = (int8)param_1 + 1;
    *(char *)param_1 = (char)((int4)uVar4 << 1);
    if (uVar4 == 0) goto code_r0x000a550c;
  }
  else {
    iVar5 = operator_new_plt((uVar4 | 0xf) + 1);
    param_1[1] = uVar4;
    param_1[2] = iVar5;
    *param_1 = (uVar4 | 0xf) + 2;
  }
  memmove(iVar5,pcVar6,uVar4);
code_r0x000a550c:
  *(xunknown1 *)(iVar5 + uVar4) = 0;
  return;
}

/* 0xa5538  size=16 */
xunknown8 FUN_000a5538(void)

{
  return 0x413d2 /* "generic" */;
}

/* 0xa5548  size=104 */
void FUN_000a5548(int8 *param_1,xunknown8 param_2,int4 param_3)

{
  int4 iVar1;
  int8 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  int4 iVar7;
  int4 *piVar8;
  uint8 uVar9;
  xunknown8 *pxVar10;
  int8 iVar11;
  char *pcVar12;
  char acStack_440 [1024];
  
  if (0xfff < param_3) {
    pxVar10 = (xunknown8 *)operator_new_plt(0x30);
    param_1[2] = (int8)pxVar10;
    xVar6 = xRam0000000000029819;
    xVar5 = xRam0000000000029811;
    xVar4 = xRam0000000000029809;
    xVar3 = xRam0000000000029801;
    iVar2 = iRam0000000000021f98;
    iVar11 = iRam0000000000021f90;
    *(xunknown2 *)(pxVar10 + 4) = 0x726f;
    param_1[1] = iVar2;
    *param_1 = iVar11;
    pxVar10[1] = xVar4;
    *pxVar10 = xVar3;
    pxVar10[3] = xVar6;
    pxVar10[2] = xVar5;
    *(xunknown1 *)((int8)pxVar10 + 0x22) = 0;
    return;
  }
  pcVar12 = acStack_440;
  piVar8 = (int4 *)__errno();
  iVar1 = *piVar8;
  iVar7 = strerror_r(param_3,acStack_440,0x400);
  if (iVar7 != 0) {
    if (iVar7 == -1) {
      iVar7 = *piVar8;
    }
    if (iVar7 != 0x16) goto code_r0x000a5534;
    pcVar12 = "";
  }
  if (*pcVar12 == '\0') {
    snprintf(acStack_440,0x400,0x36f9c /* "Unknown error %d" */,param_3);
    pcVar12 = acStack_440;
  }
  *piVar8 = iVar1;
  uVar9 = strlen(pcVar12);
  if (0xffffffffffffffef < uVar9) {
    FUN_000664d4(param_1);
code_r0x000a5534:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_abort)();
    return;
  }
  if (uVar9 < 0x17) {
    iVar11 = (int8)param_1 + 1;
    *(char *)param_1 = (char)((int4)uVar9 << 1);
    if (uVar9 == 0) goto code_r0x000a550c;
  }
  else {
    iVar11 = operator_new_plt((uVar9 | 0xf) + 1);
    param_1[1] = uVar9;
    param_1[2] = iVar11;
    *param_1 = (uVar9 | 0xf) + 2;
  }
  memmove(iVar11,pcVar12,uVar9);
code_r0x000a550c:
  *(xunknown1 *)(iVar11 + uVar9) = 0;
  return;
}

/* 0xa5610  size=16 */
xunknown8 FUN_000a5610(void)

{
  return 0x3d0c5 /* "system" */;
}

/* 0xa5620  size=100 */
void FUN_000a5620(int8 *param_1,xunknown8 param_2,int4 param_3)

{
  int4 iVar1;
  int8 iVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  int4 iVar7;
  int4 *piVar8;
  uint8 uVar9;
  xunknown8 *pxVar10;
  int8 iVar11;
  char *pcVar12;
  char acStack_440 [1024];
  
  if (0xfff < param_3) {
    pxVar10 = (xunknown8 *)operator_new_plt(0x30);
    param_1[2] = (int8)pxVar10;
    xVar6 = xRam0000000000022c84;
    xVar5 = xRam0000000000022c7c;
    xVar4 = xRam0000000000022c74;
    xVar3 = xRam0000000000022c6c;
    iVar2 = iRam00000000000221d8;
    iVar11 = iRam00000000000221d0;
    *(xunknown2 *)(pxVar10 + 4) = 0x72;
    param_1[1] = iVar2;
    *param_1 = iVar11;
    pxVar10[1] = xVar4;
    *pxVar10 = xVar3;
    pxVar10[3] = xVar6;
    pxVar10[2] = xVar5;
    return;
  }
  pcVar12 = acStack_440;
  piVar8 = (int4 *)__errno();
  iVar1 = *piVar8;
  iVar7 = strerror_r(param_3,acStack_440,0x400);
  if (iVar7 != 0) {
    if (iVar7 == -1) {
      iVar7 = *piVar8;
    }
    if (iVar7 != 0x16) goto code_r0x000a5534;
    pcVar12 = "";
  }
  if (*pcVar12 == '\0') {
    snprintf(acStack_440,0x400,0x36f9c /* "Unknown error %d" */,param_3);
    pcVar12 = acStack_440;
  }
  *piVar8 = iVar1;
  uVar9 = strlen(pcVar12);
  if (0xffffffffffffffef < uVar9) {
    FUN_000664d4(param_1);
code_r0x000a5534:
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*got_abort)();
    return;
  }
  if (uVar9 < 0x17) {
    iVar11 = (int8)param_1 + 1;
    *(char *)param_1 = (char)((int4)uVar9 << 1);
    if (uVar9 == 0) goto code_r0x000a550c;
  }
  else {
    iVar11 = operator_new_plt((uVar9 | 0xf) + 1);
    param_1[1] = uVar9;
    param_1[2] = iVar11;
    *param_1 = (uVar9 | 0xf) + 2;
  }
  memmove(iVar11,pcVar12,uVar9);
code_r0x000a550c:
  *(xunknown1 *)(iVar11 + uVar9) = 0;
  return;
}

/* 0xa5684  size=244 */
int4 FUN_000a5684(xunknown8 param_1,int4 param_2)

{
  int4 iVar1;
  uint1 *puVar2;
  
  if (param_2 < 0x1000) {
    if ((uRam0000000000172af0 & 1) != 0) {
      return param_2;
    }
    puVar2 = &uRam0000000000172af0;
    iVar1 = cxa_guard_acquire_plt(&uRam0000000000172af0);
  }
  else {
    if ((uRam0000000000172af8 & 1) != 0) {
      return param_2;
    }
    puVar2 = (uint1 *)0x172af8;
    iVar1 = cxa_guard_acquire_plt(0x172af8);
  }
  if (iVar1 == 0) {
    return param_2;
  }
  cxa_guard_release_plt(puVar2);
  return param_2;
}

/* 0xa5908  size=244 */
void FUN_000a5908(xunknown8 *param_1,int4 *param_2,uint1 *param_3)

{
  uint8 uVar1;
  int4 iVar2;
  uint8 uVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  uint1 auStack_48 [8];
  uint8 uStack_40;
  uint8 uStack_38;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    uVar1 = (uint8)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar1 = *(uint8 *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      std____ndk1__basic_string__append_plt(param_3,0x3facf,2);
      iVar2 = *param_2;
    }
    (**(code **)(**(int8 **)(param_2 + 2) + 0x30))(auStack_48,*(int8 **)(param_2 + 2),iVar2);
    uVar1 = (uint8)(auStack_48[0] >> 1);
    uVar3 = (uint8)auStack_48 | 1;
    if ((auStack_48[0] & 1) != 0) {
      uVar1 = uStack_40;
      uVar3 = uStack_38;
    }
    std____ndk1__basic_string__append_plt(param_3,uVar3,uVar1);
    if ((auStack_48[0] & 1) != 0) {
      operator_delete_plt_1(uStack_38);
    }
  }
  xVar6 = *(xunknown8 *)(param_3 + 8);
  xVar5 = *(xunknown8 *)param_3;
  xVar4 = *(xunknown8 *)(param_3 + 0x10);
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_1[1] = xVar6;
  *param_1 = xVar5;
  param_1[2] = xVar4;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  return;
}

/* 0xa5f84  size=104 */
void FUN_000a5f84(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3)

{
  xunknown8 xVar1;
  
  xVar1 = cxa_allocate_exception_plt(0x20);
  std____ndk1__system_error__system_error_plt(xVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar1,xRam00000000000d3918,xRam00000000000d3910);
  return;
}

/* 0xa5fec  size=44 */
void FUN_000a5fec(xunknown8 param_1)

{
  std____ndk1__error_category__dtor_error_category_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa6018  size=44 */
void FUN_000a6018(xunknown8 param_1)

{
  std____ndk1__error_category__dtor_error_category_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa63d0  size=44 */
void FUN_000a63d0(xunknown8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    pthread_mutex_unlock(*param_1);
  }
  return;
}

/* 0xa6af4  size=52 */
void FUN_000a6af4(xunknown4 param_1)

{
  int4 iVar1;
  
  iVar1 = pthread_key_create(param_1,FUN_000a6f3c);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000ca13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4000)(iVar1,0x276a1 /* "__thread_specific_ptr construction failed" */);
  return;
}

/* 0xa6b28  size=204 */
void FUN_000a6b28(int8 *param_1)

{
  xunknown8 *pxVar1;
  int8 iVar2;
  int8 *piVar3;
  xunknown8 *pxVar4;
  
  pxVar1 = (xunknown8 *)param_1[4];
  for (pxVar4 = (xunknown8 *)param_1[3]; pxVar4 != pxVar1; pxVar4 = pxVar4 + 2) {
    std____ndk1__condition_variable__notify_all_plt(*pxVar4);
    std____ndk1__mutex__unlock_plt(pxVar4[1]);
  }
  pxVar1 = (xunknown8 *)param_1[1];
  for (pxVar4 = (xunknown8 *)*param_1; pxVar4 != pxVar1; pxVar4 = pxVar4 + 1) {
    std____ndk1____assoc_sub_state____make_ready_plt(*pxVar4);
    piVar3 = (int8 *)*pxVar4;
    iVar2 = FUN_000c5430(0xffffffffffffffff,piVar3 + 1);
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 0x10))(piVar3);
    }
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    operator_delete_plt_1();
  }
  if (*param_1 == 0) {
    return;
  }
  param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)();
  return;
}

/* 0xa6f0c  size=24 */
void FUN_000a6f0c(void)

{
  int8 iVar1;
  
  FUN_0005eb94(0x371ec /* "vector" */);
  iVar1 = FUN_0005eb94(0x371ec /* "vector" */);
  if (iVar1 == 0) {
    return;
  }
  std____ndk1____thread_struct__dtor___thread_struct_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(iVar1);
  return;
}

/* 0xa6f24  size=24 */
void FUN_000a6f24(void)

{
  int8 iVar1;
  
  iVar1 = FUN_0005eb94(0x371ec /* "vector" */);
  if (iVar1 == 0) {
    return;
  }
  std____ndk1____thread_struct__dtor___thread_struct_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(iVar1);
  return;
}

/* 0xa6f3c  size=56 */
void FUN_000a6f3c(int8 param_1)

{
  if (param_1 == 0) {
    return;
  }
  std____ndk1____thread_struct__dtor___thread_struct_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa6f74  size=16 */
xunknown8 FUN_000a6f74(void)

{
  return 0x2a438 /* "future" */;
}

/* 0xa6f84  size=460 */
void FUN_000a6f84(xunknown8 *param_1,xunknown8 param_2,int4 param_3)

{
  xunknown8 xVar1;
  xunknown8 xVar2;
  xunknown8 xVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  xunknown8 *pxVar8;
  
  if (param_3 < 2) {
    if (param_3 == 0) goto code_r0x000a7018;
    if (param_3 == 1) {
      pxVar8 = (xunknown8 *)operator_new_plt(0x50);
      param_1[2] = pxVar8;
      xVar5 = xRam000000000002770b;
      xVar1 = xRam00000000000220d0;
      param_1[1] = xRam00000000000220d8;
      *param_1 = xVar1;
      xVar4 = xRam0000000000027703;
      xVar3 = xRam00000000000276fb;
      xVar2 = xRam00000000000276f3;
      xVar1 = xRam00000000000276eb;
      pxVar8[8] = xVar5;
      pxVar8[5] = xVar2;
      pxVar8[4] = xVar1;
      pxVar8[7] = xVar4;
      pxVar8[6] = xVar3;
      xVar3 = xRam00000000000276e3;
      xVar2 = xRam00000000000276db;
      xVar1 = xRam00000000000276cb;
      pxVar8[1] = xRam00000000000276d3;
      *pxVar8 = xVar1;
      pxVar8[3] = xVar3;
      pxVar8[2] = xVar2;
      *(xunknown1 *)(pxVar8 + 9) = 0;
      return;
    }
  }
  else {
    if (param_3 == 2) {
      pxVar8 = (xunknown8 *)operator_new_plt(0x30);
      xVar6 = xRam0000000000035641;
      xVar5 = xRam0000000000035639;
      xVar4 = xRam0000000000035631;
      xVar3 = xRam0000000000021fd8;
      xVar2 = xRam0000000000021fd0;
      xVar1 = CONCAT26(xRam000000000003564f,Ram0000000000035649);
      param_1[2] = pxVar8;
      param_1[1] = xVar3;
      *param_1 = xVar2;
      pxVar8[1] = xVar5;
      *pxVar8 = xVar4;
      pxVar8[3] = xVar1;
      pxVar8[2] = xVar6;
      xVar1 = CONCAT62(Ram0000000000035651,xRam000000000003564f);
      *(xunknown8 *)((int8)pxVar8 + 0x26) = xRam0000000000035657;
      *(xunknown8 *)((int8)pxVar8 + 0x1e) = xVar1;
      *(xunknown1 *)((int8)pxVar8 + 0x2e) = 0;
      return;
    }
    if (param_3 == 3) {
      pxVar8 = (xunknown8 *)operator_new_plt(0x50);
      param_1[2] = pxVar8;
      xVar2 = xRam0000000000021f18;
      xVar1 = xRam0000000000021f10;
      *(xunknown1 *)(pxVar8 + 8) = 0x2e;
      xVar6 = xRam000000000002772c;
      xVar5 = xRam0000000000027724;
      xVar4 = xRam000000000002771c;
      xVar3 = xRam0000000000027714;
      param_1[1] = xVar2;
      *param_1 = xVar1;
      pxVar8[1] = xVar4;
      *pxVar8 = xVar3;
      pxVar8[3] = xVar6;
      pxVar8[2] = xVar5;
      xVar3 = xRam000000000002774c;
      xVar2 = xRam0000000000027744;
      xVar1 = xRam0000000000027734;
      pxVar8[5] = xRam000000000002773c;
      pxVar8[4] = xVar1;
      pxVar8[7] = xVar3;
      pxVar8[6] = xVar2;
      *(xunknown1 *)((int8)pxVar8 + 0x41) = 0;
      return;
    }
    if (param_3 == 4) {
code_r0x000a7018:
      pxVar8 = (xunknown8 *)operator_new_plt(0x60);
      xVar7 = xRam000000000002ac3a;
      xVar6 = xRam000000000002ac22;
      xVar5 = xRam000000000002ac1a;
      xVar4 = xRam000000000002ac12;
      xVar3 = xRam000000000002ac0a;
      xVar2 = xRam0000000000022048;
      xVar1 = xRam0000000000022040;
      param_1[2] = pxVar8;
      param_1[1] = xVar2;
      *param_1 = xVar1;
      pxVar8[5] = xVar4;
      pxVar8[4] = xVar3;
      pxVar8[7] = xVar6;
      pxVar8[6] = xVar5;
      xVar2 = xRam000000000002ac32;
      xVar1 = xRam000000000002ac2a;
      pxVar8[10] = xVar7;
      pxVar8[9] = xVar2;
      pxVar8[8] = xVar1;
      xVar3 = xRam000000000002ac02;
      xVar2 = xRam000000000002abfa;
      xVar1 = xRam000000000002abea;
      pxVar8[1] = xRam000000000002abf2;
      *pxVar8 = xVar1;
      pxVar8[3] = xVar3;
      pxVar8[2] = xVar2;
      *(xunknown1 *)(pxVar8 + 0xb) = 0;
      return;
    }
  }
  pxVar8 = (xunknown8 *)operator_new_plt(0x20);
  xVar6 = xRam000000000002da33;
  xVar5 = xRam000000000002da1d;
  xVar4 = xRam0000000000021fa8;
  xVar3 = xRam0000000000021fa0;
  xVar1 = CONCAT26(xRam000000000002da2b,Ram000000000002da25);
  xVar2 = CONCAT62(Ram000000000002da2d,xRam000000000002da2b);
  param_1[2] = pxVar8;
  pxVar8[1] = xVar1;
  *pxVar8 = xVar5;
  param_1[1] = xVar4;
  *param_1 = xVar3;
  *(xunknown8 *)((int8)pxVar8 + 0x16) = xVar6;
  *(xunknown8 *)((int8)pxVar8 + 0xe) = xVar2;
  *(xunknown1 *)((int8)pxVar8 + 0x1e) = 0;
  return;
}

/* 0xa730c  size=144 */
void FUN_000a730c(xunknown4 param_1)

{
  int4 iVar1;
  xunknown8 xVar2;
  
  xVar2 = cxa_allocate_exception_plt(0x20);
  if (((uRam0000000000172b18 & 1) == 0) &&
     (iVar1 = cxa_guard_acquire_plt(&uRam0000000000172b18), iVar1 != 0)) {
    cxa_guard_release_plt(&uRam0000000000172b18);
  }
  std____ndk1__future_error__future_error_plt(xVar2,param_1,0xd8e00);
                    /* WARNING: Could not recover jumptable at 0x000c9aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d3cd8)(xVar2,xRam00000000000d3930,xRam00000000000d3928);
  return;
}

/* 0xa7ac4  size=212 */
void FUN_000a7ac4(int8 *param_1,uint4 param_2)

{
  int4 iVar1;
  uint1 auStack_48 [16];
  xunknown8 xStack_38;
  uint8 uStack_30;
  int8 iStack_28;
  
  if ((uRam0000000000172b18 & 1) == 0) {
    iVar1 = cxa_guard_acquire_plt(&uRam0000000000172b18);
    if (iVar1 != 0) {
      cxa_guard_release_plt(&uRam0000000000172b18);
    }
  }
  uStack_30 = (uint8)param_2;
  iStack_28 = 0xd8e00;
  std____ndk1__error_code__message_plt(auStack_48,&uStack_30);
  std__logic_error__logic_error_plt_1(param_1,auStack_48);
  if ((auStack_48[0] & 1) != 0) {
    operator_delete_plt_1(xStack_38);
  }
  *param_1 = iRam00000000000d3920 + 0x10;
  param_1[3] = iStack_28;
  param_1[2] = uStack_30;
  return;
}

/* 0xa7e10  size=84 */
void FUN_000a7e10(int8 *param_1)

{
  *param_1 = iRam00000000000d3938 + 0x10;
  std____ndk1__condition_variable__dtor_condition_variable_plt(param_1 + 8);
  std____ndk1__mutex__dtor_mutex_plt(param_1 + 3);
  std__exception_ptr__dtor_exception_ptr_plt(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x000ca95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4410)(param_1);
  return;
}

/* 0xa7e64  size=92 */
void FUN_000a7e64(int8 *param_1)

{
  *param_1 = iRam00000000000d3938 + 0x10;
  std____ndk1__condition_variable__dtor_condition_variable_plt(param_1 + 8);
  std____ndk1__mutex__dtor_mutex_plt(param_1 + 3);
  std__exception_ptr__dtor_exception_ptr_plt(param_1 + 2);
  std____ndk1____shared_count__dtor___shared_count_plt(param_1);
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa7ec0  size=44 */
void FUN_000a7ec0(xunknown8 param_1)

{
  std____ndk1__error_category__dtor_error_category_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa8678  size=72 */
xunknown8 FUN_000a8678(xunknown8 *param_1)

{
  xunknown8 xVar1;
  
  xVar1 = pthread_mutex_unlock(0x173020);
  if ((int4)xVar1 == 0) {
    return xVar1;
  }
  FUN_000a8dc8(0x23e3b /* "%s failed to release mutex" */,*param_1);
  FUN_0009e4a4();
  return *puRam00000000000d3948;
}

/* 0xa8714  size=28 */
xunknown8 FUN_000a8714(code *param_1)

{
  (*param_1)();
  FUN_000a8dc8(0x264c1 /* "unexpected_handler unexpectedly returned" */);
  FUN_000a8714(*puRam00000000000d3948);
  return *pxRam00000000000d3950;
}

/* 0xa8760  size=48 */
xunknown8 FUN_000a8760(code *param_1)

{
  (*param_1)();
  FUN_000a8dc8(0x2a43f /* "terminate_handler unexpectedly returned" */);
  cxa_begin_catch_plt();
  FUN_000a8dc8(0x30cf9 /* "terminate_handler unexpectedly threw an exception" */);
  FUN_0009e4a4();
  return *pxRam00000000000d3958;
}

/* 0xa87a4  size=332 */
void FUN_000a87a4(void)

{
  code *pcVar1;
  int8 *piVar2;
  uint8 uVar3;
  int8 iVar4;
  int8 iVar5;
  xunknown8 xVar6;
  xunknown8 xVar7;
  int8 unaff_x19;
  int8 iVar8;
  int8 *piStack_18;
  
  piVar2 = (int8 *)cxa_get_globals_fast_plt();
  if ((piVar2 == (int8 *)0x0) || (unaff_x19 = *piVar2, unaff_x19 == 0)) {
    FUN_000a8dc8(0x413da /* "terminating" */);
  }
  uVar3 = FUN_000c33b8(unaff_x19 + 0x60);
  if ((uVar3 & 1) == 0) {
    FUN_000a8dc8(0x2eb3a /* "terminating due to %s foreign exception" */,xRam00000000000d8f18);
  }
  else {
    iVar4 = FUN_000c33ac(unaff_x19 + 0x60);
    if (iVar4 == 0x434c4e47432b2b01) {
      piStack_18 = *(int8 **)(unaff_x19 + 8);
      goto code_r0x000a8820;
    }
  }
  piStack_18 = (int8 *)(unaff_x19 + 0x80);
code_r0x000a8820:
  iVar8 = *(int8 *)(unaff_x19 + 0x10);
  iVar4 = *(int8 *)(iVar8 + 8);
  iVar5 = cxa_demangle_plt(iVar4,0,0,0);
  if (iVar5 != 0) {
    iVar4 = iVar5;
  }
  pcVar1 = FUN_000a89a4;
  if (iVar5 != 0) {
    pcVar1 = FUN_000a899c;
  }
  uVar3 = (**(code **)(*piRam00000000000d3940 + 0x20))(piRam00000000000d3940,iVar8,&piStack_18);
  xVar7 = xRam00000000000d8f18;
  if ((uVar3 & 1) != 0) {
    xVar6 = (**(code **)(*piStack_18 + 0x10))();
    FUN_000a8dc8(0x38f0c /* "terminating due to %s exception of type %s: %s" */,xVar7,iVar4,xVar6);
  }
  xVar7 = FUN_000a8dc8(0x2ba19 /* "terminating due to %s exception of type %s" */,xRam00000000000d8f18,iVar4);
  if (iVar4 != 0) {
    (*pcVar1)(iVar4);
  }
  FUN_000c5688(xVar7);
  FUN_0009e4a4();
  xRam00000000000d8f18 = 0x30d2b /* "unexpected" */;
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4468)();
  return;
}

/* 0xa88f0  size=32 */
void FUN_000a88f0(void)

{
  xRam00000000000d8f18 = 0x30d2b /* "unexpected" */;
                    /* WARNING: Could not recover jumptable at 0x000caa0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4468)();
  return;
}

/* 0xa899c  size=8 */
void FUN_000a899c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000ca56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_free)();
  return;
}

/* 0xa89a4  size=8 */
void FUN_000a89a4(void)

{
  return;
}

/* 0xa8dc8  size=260 */
void FUN_000a8dc8(xunknown8 param_1,xunknown8 param_2,xunknown8 param_3,xunknown8 param_4,
                 xunknown8 param_5,xunknown8 param_6,xunknown8 param_7,xunknown8 param_8)

{
  int8 iVar1;
  xunknown1 axStack_f0 [8];
  xunknown8 xStack_e8;
  xunknown8 xStack_e0;
  xunknown8 xStack_d8;
  xunknown8 xStack_d0;
  xunknown8 xStack_c8;
  xunknown8 xStack_c0;
  xunknown8 xStack_b8;
  xunknown1 *pxStack_b0;
  xunknown1 **ppxStack_a8;
  xunknown1 *pxStack_a0;
  xunknown8 xStack_98;
  xunknown1 *pxStack_90;
  xunknown1 **ppxStack_88;
  xunknown1 *pxStack_80;
  xunknown8 xStack_78;
  xunknown8 xStack_38;
  
  iVar1 = got___sF;
  xStack_e8 = param_2;
  xStack_e0 = param_3;
  xStack_d8 = param_4;
  xStack_d0 = param_5;
  xStack_c8 = param_6;
  xStack_c0 = param_7;
  xStack_b8 = param_8;
  fwrite(0x40a75 /* "libc++abi: " */,0xb,1,got___sF + 0x130);
  xStack_78 = 0xffffff80ffffffc8;
  pxStack_90 = (xunknown1 *)register_sp;
  ppxStack_88 = &pxStack_b0;
  pxStack_80 = axStack_f0;
  vfprintf(iVar1 + 0x130,param_1,&pxStack_90);
  fputc(10,iVar1 + 0x130);
  xStack_98 = 0xffffff80ffffffc8;
  pxStack_b0 = (xunknown1 *)register_sp;
  ppxStack_a8 = &pxStack_b0;
  pxStack_a0 = axStack_f0;
  vasprintf(&xStack_38,param_1,&pxStack_b0);
  android_set_abort_message(xStack_38);
  openlog(0x4044a /* "libc++abi" */,0,0);
  syslog(2,0x2bfce,xStack_38);
  closelog();
                    /* WARNING: Could not recover jumptable at 0x000ca7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*got_abort)();
  return;
}

/* 0xa8ecc  size=8 */
void FUN_000a8ecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000cad4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4608)();
  return;
}

/* 0xa8ed4  size=8 */
void FUN_000a8ed4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa8edc);
  (*pcVar1)();
}

/* 0xa8edc  size=8 */
void FUN_000a8edc(void)

{
  return;
}

/* 0xa8ee4  size=8 */
void FUN_000a8ee4(void)

{
  return;
}

/* 0xa8eec  size=44 */
void FUN_000a8eec(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa8f18  size=44 */
void FUN_000a8f18(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa8f44  size=44 */
void FUN_000a8f44(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa8f70  size=44 */
void FUN_000a8f70(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa8f9c  size=44 */
void FUN_000a8f9c(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa8fc8  size=44 */
void FUN_000a8fc8(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa8ff4  size=44 */
void FUN_000a8ff4(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa9020  size=44 */
void FUN_000a9020(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa904c  size=44 */
void FUN_000a904c(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa9078  size=44 */
void FUN_000a9078(xunknown8 param_1)

{
  std__type_info__dtor_type_info_plt();
                    /* WARNING: Could not recover jumptable at 0x000ca99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000000d4430)(param_1);
  return;
}

/* 0xa90a4  size=24 */
bool FUN_000a90a4(int8 param_1,int8 param_2)

{
  return *(int8 *)(param_1 + 8) == *(int8 *)(param_2 + 8);
}

/* 0xa90bc  size=12 */
xunknown8 FUN_000a90bc(void)

{
  return 0;
}

/* 0xa90c8  size=12 */
xunknown8 FUN_000a90c8(void)

{
  return 0;
}

/* 0xa90d4  size=24 */
bool FUN_000a90d4(int8 param_1,int8 param_2)

{
  return *(int8 *)(param_1 + 8) == *(int8 *)(param_2 + 8);
}

/* 0xa90ec  size=192 */
bool FUN_000a90ec(int8 param_1,int8 param_2,xunknown8 *param_3)

{
  bool bVar1;
  int8 *piStack_70;
  xunknown8 xStack_68;
  int8 iStack_60;
  xunknown8 xStack_58;
  xunknown8 xStack_50;
  xunknown8 xStack_48;
  xunknown8 xStack_40;
  unkbyte7 Stack_38;
  xunknown1 xStack_31;
  unkbyte7 Stack_30;
  xunknown8 xStack_29;
  
  if (*(int8 *)(param_1 + 8) == *(int8 *)(param_2 + 8)) {
    return true;
  }
  piStack_70 = (int8 *)dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39b0,0);
  bVar1 = false;
  if (piStack_70 != (int8 *)0x0) {
    xStack_68 = 0;
    xStack_58 = 0xffffffffffffffff;
    Stack_30 = 0;
    xStack_48 = 0;
    xStack_50 = 0;
    Stack_38 = 0;
    xStack_31 = 0;
    xStack_40 = 0;
    xStack_29 = 0x100;
    iStack_60 = param_1;
    (**(code **)(*piStack_70 + 0x38))(piStack_70,&piStack_70,*param_3,1);
    bVar1 = (int4)xStack_40 == 1;
    if (bVar1) {
      *param_3 = xStack_50;
    }
  }
  return bVar1;
}

/* 0xa9394  size=116 */
void FUN_000a9394(int8 param_1,int8 param_2,int8 param_3,xunknown4 param_4)

{
  if (*(int8 *)(param_1 + 8) == *(int8 *)(*(int8 *)(param_2 + 0x10) + 8)) {
    if (*(int8 *)(param_2 + 0x20) == 0) {
      *(int8 *)(param_2 + 0x20) = param_3;
      *(xunknown4 *)(param_2 + 0x30) = param_4;
      *(xunknown4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(int8 *)(param_2 + 0x20) != param_3) {
      *(xunknown4 *)(param_2 + 0x30) = 2;
      *(xunknown1 *)(param_2 + 0x4e) = 1;
      *(int4 *)(param_2 + 0x3c) = *(int4 *)(param_2 + 0x3c) + 1;
      return;
    }
    if (*(int4 *)(param_2 + 0x30) == 2) {
      *(xunknown4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}

/* 0xa9408  size=128 */
void FUN_000a9408(int8 param_1,int8 param_2,int8 param_3,xunknown4 param_4)

{
  if (*(int8 *)(param_1 + 8) != *(int8 *)(*(int8 *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x000a942c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int8 **)(param_1 + 0x10) + 0x38))();
    return;
  }
  if (*(int8 *)(param_2 + 0x20) == 0) {
    *(int8 *)(param_2 + 0x20) = param_3;
    *(xunknown4 *)(param_2 + 0x30) = param_4;
    *(xunknown4 *)(param_2 + 0x3c) = 1;
    return;
  }
  if (*(int8 *)(param_2 + 0x20) == param_3) {
    if (*(int4 *)(param_2 + 0x30) == 2) {
      *(xunknown4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  else {
    *(xunknown4 *)(param_2 + 0x30) = 2;
    *(xunknown1 *)(param_2 + 0x4e) = 1;
    *(int4 *)(param_2 + 0x3c) = *(int4 *)(param_2 + 0x3c) + 1;
  }
  return;
}

/* 0xa9488  size=448 */
void FUN_000a9488(int8 param_1,int8 param_2,int8 *param_3,xunknown4 param_4)

{
  xunknown4 xVar1;
  uint4 uVar2;
  bool bVar3;
  uint8 uVar4;
  int8 iVar5;
  uint8 uVar6;
  uint8 uVar7;
  
  if (*(int8 *)(param_1 + 8) == *(int8 *)(*(int8 *)(param_2 + 0x10) + 8)) {
    if (*(int8 **)(param_2 + 0x20) == (int8 *)0x0) {
      *(int8 **)(param_2 + 0x20) = param_3;
      *(xunknown4 *)(param_2 + 0x30) = param_4;
      *(xunknown4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(int8 **)(param_2 + 0x20) == param_3) {
      if (*(int4 *)(param_2 + 0x30) == 2) {
        *(xunknown4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(xunknown4 *)(param_2 + 0x30) = 2;
      *(xunknown1 *)(param_2 + 0x4e) = 1;
      *(int4 *)(param_2 + 0x3c) = *(int4 *)(param_2 + 0x3c) + 1;
    }
  }
  else {
    uVar2 = *(uint4 *)(param_1 + 0x14);
    uVar4 = *(uint8 *)(param_1 + 0x20);
    if (param_3 == (int8 *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int8)uVar4 >> 8;
      if ((uVar4 & 1) != 0) {
        iVar5 = *(int8 *)(*param_3 + iVar5);
      }
    }
    xVar1 = 2;
    if ((uVar4 & 2) != 0) {
      xVar1 = param_4;
    }
    (**(code **)(**(int8 **)(param_1 + 0x18) + 0x38))
              (*(int8 **)(param_1 + 0x18),param_2,(int8)param_3 + iVar5,xVar1);
    if (1 < uVar2) {
      uVar4 = param_1 + (uint8)uVar2 * 0x10 + 0x18;
      if (param_3 == (int8 *)0x0) {
        uVar7 = param_1 + 0x38;
        do {
          xVar1 = 2;
          if ((*(uint8 *)(uVar7 - 8) & 2) != 0) {
            xVar1 = param_4;
          }
          (**(code **)(**(int8 **)(uVar7 - 0x10) + 0x38))(*(int8 **)(uVar7 - 0x10),param_2,0,xVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
      else {
        uVar7 = param_1 + 0x38;
        do {
          uVar6 = *(uint8 *)(uVar7 - 8);
          iVar5 = (int8)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            iVar5 = *(int8 *)(*param_3 + iVar5);
          }
          xVar1 = 2;
          if ((uVar6 & 2) != 0) {
            xVar1 = param_4;
          }
          (**(code **)(**(int8 **)(uVar7 - 0x10) + 0x38))
                    (*(int8 **)(uVar7 - 0x10),param_2,(int8)param_3 + iVar5,xVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
    }
  }
  return;
}

/* 0xa9648  size=196 */
bool FUN_000a9648(int8 param_1,int8 param_2)

{
  int4 iVar1;
  int8 iVar2;
  
  if ((*(uint1 *)(param_1 + 0x10) & 0x18) == 0) {
    if (param_2 == 0) {
      return false;
    }
    iVar2 = dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39b8,0);
    if (iVar2 == 0) {
      return false;
    }
    if ((*(uint1 *)(iVar2 + 0x10) & 0x18) == 0) {
      return *(int8 *)(param_1 + 8) == *(int8 *)(param_2 + 8);
    }
  }
  if (param_1 == param_2) {
    return true;
  }
  iVar1 = strcmp(*(xunknown8 *)(param_1 + 8),*(xunknown8 *)(param_2 + 8));
  return iVar1 == 0;
}

/* 0xa970c  size=696 */
/* WARNING: Type propagation algorithm not settling */

bool FUN_000a970c(int8 param_1,int8 param_2,int8 *param_3)

{
  uint4 uVar1;
  uint4 uVar2;
  uint4 uVar3;
  xunknown8 xVar4;
  xunknown8 xVar5;
  int4 iVar6;
  int8 iVar7;
  int8 iVar8;
  int8 iVar9;
  int8 iVar10;
  int8 *piStack_90;
  xunknown8 xStack_88;
  int8 iStack_80;
  xunknown8 xStack_78;
  int8 iStack_70;
  xunknown8 xStack_68;
  xunknown8 xStack_60;
  unkbyte7 Stack_58;
  xunknown1 xStack_51;
  unkbyte7 Stack_50;
  xunknown8 xStack_49;
  
  iVar9 = *(int8 *)(param_2 + 8);
  if (iVar9 == iRam00000000000d39c0) {
    *param_3 = 0;
    return true;
  }
  uVar2 = *(uint4 *)(param_1 + 0x10);
  if ((uVar2 & 0x18) == 0) {
    iVar8 = dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39b8,0);
    if (iVar8 != 0) {
      if ((*(uint1 *)(iVar8 + 0x10) & 0x18) != 0) goto code_r0x000a9754;
      if (*(int8 *)(param_1 + 8) == iVar9) goto code_r0x000a976c;
    }
  }
  else {
code_r0x000a9754:
    if ((param_1 == param_2) || (iVar6 = strcmp(*(xunknown8 *)(param_1 + 8),iVar9), iVar6 == 0)) {
code_r0x000a976c:
      if ((int8 *)*param_3 == (int8 *)0x0) {
        return true;
      }
      *param_3 = *(int8 *)*param_3;
      return true;
    }
  }
  iVar9 = dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39c8,0);
  if (iVar9 == 0) {
    return false;
  }
  if ((int8 *)*param_3 == (int8 *)0x0) {
    iVar8 = 0;
    uVar3 = *(uint4 *)(iVar9 + 0x10);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  else {
    iVar8 = *(int8 *)*param_3;
    *param_3 = iVar8;
    uVar3 = *(uint4 *)(iVar9 + 0x10);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  if (((uVar1 & 7) == 0) && ((uVar2 & (uVar3 ^ 0xffffffff) & 0x60) == 0)) {
    iVar10 = *(int8 *)(param_1 + 0x18);
    iVar9 = *(int8 *)(iVar9 + 0x18);
    if (*(int8 *)(iVar10 + 8) == *(int8 *)(iVar9 + 8)) {
      return true;
    }
    if (*(int8 *)(iVar10 + 8) == iRam00000000000d39d0) {
      iVar9 = dynamic_cast_plt(iVar9,xRam00000000000d39a8,xRam00000000000d39d8,0);
      return iVar9 == 0;
    }
    iVar7 = dynamic_cast_plt(iVar10,xRam00000000000d39a8,xRam00000000000d39c8,0);
    xVar5 = xRam00000000000d39c8;
    xVar4 = xRam00000000000d39a8;
    if (iVar7 == 0) {
      iVar7 = dynamic_cast_plt(iVar10,xRam00000000000d39a8,xRam00000000000d39e0,0);
      if (iVar7 == 0) {
        iStack_80 = dynamic_cast_plt(iVar10,xRam00000000000d39a8,xRam00000000000d39b0,0);
        if (iStack_80 == 0) {
          return false;
        }
        piStack_90 = (int8 *)dynamic_cast_plt(iVar9,xRam00000000000d39a8,xRam00000000000d39b0,0);
        if (piStack_90 == (int8 *)0x0) {
          return false;
        }
        xStack_88 = 0;
        Stack_50 = 0;
        xStack_68 = 0;
        iStack_70 = 0;
        Stack_58 = 0;
        xStack_51 = 0;
        xStack_60 = 0;
        xStack_49 = 0x100;
        xStack_78 = 0xffffffffffffffff;
        (**(code **)(*piStack_90 + 0x38))(piStack_90,&piStack_90,iVar8,1);
        if ((int4)xStack_60 != 1) {
          return false;
        }
        if (*param_3 == 0) {
          return true;
        }
        *param_3 = iStack_70;
        return true;
      }
      if ((uVar2 & 1) != 0) goto code_r0x000a9aec;
    }
    else if ((uVar2 & 1) != 0) {
      do {
        if (iVar9 == 0) {
          return false;
        }
        iVar9 = dynamic_cast_plt(iVar9,xVar4,xVar5,0);
        if (iVar9 == 0) {
          return false;
        }
        if ((*(uint4 *)(iVar9 + 0x10) & (*(uint4 *)(iVar7 + 0x10) ^ 0xffffffff)) != 0) {
          return false;
        }
        iVar8 = *(int8 *)(iVar7 + 0x18);
        iVar9 = *(int8 *)(iVar9 + 0x18);
        if (*(int8 *)(iVar8 + 8) == *(int8 *)(iVar9 + 8)) {
          return true;
        }
        if ((*(uint4 *)(iVar7 + 0x10) & 1) == 0) {
          return false;
        }
        iVar7 = dynamic_cast_plt(iVar8,xVar4,xVar5,0);
      } while (iVar7 != 0);
      iVar7 = dynamic_cast_plt(iVar8,xRam00000000000d39a8,xRam00000000000d39e0,0);
      if (iVar7 == 0) {
        return false;
      }
code_r0x000a9aec:
      if (iVar9 == 0) {
        return false;
      }
      iVar9 = dynamic_cast_plt(iVar9,xRam00000000000d39a8,xRam00000000000d39e0,0);
      if ((iVar9 == 0) ||
         ((*(uint4 *)(iVar9 + 0x10) & (*(uint4 *)(iVar7 + 0x10) ^ 0xffffffff)) != 0)) {
        return false;
      }
      if (*(int8 *)(*(int8 *)(iVar7 + 0x18) + 8) == *(int8 *)(*(int8 *)(iVar9 + 0x18) + 8)) {
        return *(int8 *)(*(int8 *)(iVar7 + 0x20) + 8) == *(int8 *)(*(int8 *)(iVar9 + 0x20) + 8);
      }
      return false;
    }
  }
  return false;
}

/* 0xa99c4  size=292 */
bool FUN_000a99c4(int8 param_1,int8 param_2)

{
  xunknown8 xVar1;
  xunknown8 xVar2;
  int8 iVar3;
  int8 iVar4;
  
  xVar2 = xRam00000000000d39c8;
  xVar1 = xRam00000000000d39a8;
  while( true ) {
    if (param_2 == 0) {
      return false;
    }
    iVar3 = dynamic_cast_plt(param_2,xVar1,xVar2,0);
    if (iVar3 == 0) {
      return false;
    }
    if ((*(uint4 *)(iVar3 + 0x10) & (*(uint4 *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
      return false;
    }
    iVar4 = *(int8 *)(param_1 + 0x18);
    param_2 = *(int8 *)(iVar3 + 0x18);
    if (*(int8 *)(iVar4 + 8) == *(int8 *)(param_2 + 8)) break;
    if ((*(uint4 *)(param_1 + 0x10) & 1) == 0) {
      return false;
    }
    param_1 = dynamic_cast_plt(iVar4,xVar1,xVar2,0);
    if (param_1 == 0) {
      iVar3 = dynamic_cast_plt(iVar4,xRam00000000000d39a8,xRam00000000000d39e0,0);
      if (iVar3 == 0) {
        return false;
      }
      if (param_2 == 0) {
        return false;
      }
      iVar4 = dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39e0,0);
      if ((iVar4 == 0) ||
         ((*(uint4 *)(iVar4 + 0x10) & (*(uint4 *)(iVar3 + 0x10) ^ 0xffffffff)) != 0)) {
        return false;
      }
      if (*(int8 *)(*(int8 *)(iVar3 + 0x18) + 8) == *(int8 *)(*(int8 *)(iVar4 + 0x18) + 8)) {
        return *(int8 *)(*(int8 *)(iVar3 + 0x20) + 8) == *(int8 *)(*(int8 *)(iVar4 + 0x20) + 8);
      }
      return false;
    }
  }
  return true;
}

/* 0xa9ae8  size=192 */
bool FUN_000a9ae8(int8 param_1,int8 param_2)

{
  int8 iVar1;
  
  if (param_2 == 0) {
    return false;
  }
  iVar1 = dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39e0,0);
  if ((iVar1 == 0) || ((*(uint4 *)(iVar1 + 0x10) & (*(uint4 *)(param_1 + 0x10) ^ 0xffffffff)) != 0))
  {
    return false;
  }
  if (*(int8 *)(*(int8 *)(param_1 + 0x18) + 8) == *(int8 *)(*(int8 *)(iVar1 + 0x18) + 8)) {
    return *(int8 *)(*(int8 *)(param_1 + 0x20) + 8) == *(int8 *)(*(int8 *)(iVar1 + 0x20) + 8);
  }
  return false;
}

/* 0xa9ba8  size=416 */
bool FUN_000a9ba8(int8 param_1,int8 param_2,xunknown8 *param_3)

{
  uint4 uVar1;
  int4 iVar2;
  int8 iVar3;
  xunknown8 xVar4;
  int8 iVar5;
  
  iVar5 = *(int8 *)(param_2 + 8);
  if (iVar5 == iRam00000000000d39c0) {
    if ((*(int8 *)(param_1 + 0x18) == 0) ||
       (iVar5 = dynamic_cast_plt(*(int8 *)(param_1 + 0x18),xRam00000000000d39a8,xRam00000000000d39d8
                                 ,0), iVar5 == 0)) {
      xVar4 = 0x42830;
    }
    else {
      xVar4 = 0x42820;
    }
    *param_3 = xVar4;
    return true;
  }
  uVar1 = *(uint4 *)(param_1 + 0x10);
  if ((uVar1 & 0x18) == 0) {
    iVar3 = dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39b8,0);
    if (iVar3 == 0) goto code_r0x000a9c78;
    if ((*(uint1 *)(iVar3 + 0x10) & 0x18) == 0) {
      if (*(int8 *)(param_1 + 8) == iVar5) {
        return true;
      }
      goto code_r0x000a9c78;
    }
  }
  if (param_1 == param_2) {
    return true;
  }
  iVar2 = strcmp(*(xunknown8 *)(param_1 + 8),iVar5);
  if (iVar2 == 0) {
    return true;
  }
code_r0x000a9c78:
  iVar5 = dynamic_cast_plt(param_2,xRam00000000000d39a8,xRam00000000000d39e0,0);
  if (iVar5 == 0) {
    return false;
  }
  if ((((*(uint4 *)(iVar5 + 0x10) & (uVar1 ^ 0xffffffff) & 7) == 0) &&
      ((uVar1 & (*(uint4 *)(iVar5 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
     (*(int8 *)(*(int8 *)(param_1 + 0x18) + 8) == *(int8 *)(*(int8 *)(iVar5 + 0x18) + 8))) {
    return *(int8 *)(*(int8 *)(param_1 + 0x20) + 8) == *(int8 *)(*(int8 *)(iVar5 + 0x20) + 8);
  }
  return false;
}

/* 0xa9d48  size=944 */
void FUN_000a9d48(int8 param_1,int8 *param_2,int8 *param_3,int4 param_4,uint4 param_5)

{
  xunknown8 *pxVar1;
  uint4 uVar2;
  bool bVar3;
  int4 iVar4;
  xunknown4 xVar5;
  int8 iVar6;
  uint8 uVar7;
  xunknown8 *pxVar8;
  xunknown8 *pxVar9;
  xunknown8 xVar10;
  bool bVar11;
  
  iVar6 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(int8 *)(param_1 + 8) != *(int8 *)(iVar6 + 8)) {
      if (*(int8 *)(param_1 + 8) != *(int8 *)(*param_2 + 8)) {
code_r0x000a9e28:
        uVar7 = *(uint8 *)(param_1 + 0x20);
        uVar2 = *(uint4 *)(param_1 + 0x14);
        iVar6 = (int8)uVar7 >> 8;
        if ((uVar7 & 1) != 0) {
          iVar6 = *(int8 *)(*param_3 + iVar6);
        }
        iVar4 = 2;
        if ((uVar7 & 2) != 0) {
          iVar4 = param_4;
        }
        (**(code **)(**(int8 **)(param_1 + 0x18) + 0x30))
                  (*(int8 **)(param_1 + 0x18),param_2,(int8)param_3 + iVar6,iVar4,param_5 & 1);
        if (uVar2 < 2) {
          return;
        }
        pxVar9 = (xunknown8 *)(param_1 + 0x28);
        pxVar1 = (xunknown8 *)(param_1 + (uint8)uVar2 * 0x10 + 0x18);
        if (((*(uint4 *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int4 *)((int8)param_2 + 0x3c) == 1))
        {
          do {
            if (*(char *)((int8)param_2 + 0x4e) != '\0') {
              return;
            }
            uVar7 = pxVar9[1];
            iVar6 = (int8)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              iVar6 = *(int8 *)(*param_3 + iVar6);
            }
            pxVar8 = pxVar9 + 2;
            iVar4 = 2;
            if ((uVar7 & 2) != 0) {
              iVar4 = param_4;
            }
            (**(code **)(*(int8 *)*pxVar9 + 0x30))
                      ((int8 *)*pxVar9,param_2,(int8)param_3 + iVar6,iVar4,param_5 & 1);
            pxVar9 = pxVar8;
          } while (pxVar8 < pxVar1);
          return;
        }
        if ((*(uint4 *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((int8)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int4 *)((int8)param_2 + 0x3c) == 1) break;
            uVar7 = pxVar9[1];
            iVar6 = (int8)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              iVar6 = *(int8 *)(*param_3 + iVar6);
            }
            pxVar8 = pxVar9 + 2;
            iVar4 = 2;
            if ((uVar7 & 2) != 0) {
              iVar4 = param_4;
            }
            (**(code **)(*(int8 *)*pxVar9 + 0x30))
                      ((int8 *)*pxVar9,param_2,(int8)param_3 + iVar6,iVar4,param_5 & 1);
            pxVar9 = pxVar8;
            if (pxVar1 <= pxVar8) {
              return;
            }
          }
          return;
        }
        while( true ) {
          if (*(char *)((int8)param_2 + 0x4e) != '\0') {
            return;
          }
          if ((*(int4 *)((int8)param_2 + 0x3c) == 1) && ((int4)param_2[6] == 1)) break;
          uVar7 = pxVar9[1];
          iVar6 = (int8)uVar7 >> 8;
          if ((uVar7 & 1) != 0) {
            iVar6 = *(int8 *)(*param_3 + iVar6);
          }
          pxVar8 = pxVar9 + 2;
          iVar4 = 2;
          if ((uVar7 & 2) != 0) {
            iVar4 = param_4;
          }
          (**(code **)(*(int8 *)*pxVar9 + 0x30))
                    ((int8 *)*pxVar9,param_2,(int8)param_3 + iVar6,iVar4,param_5 & 1);
          pxVar9 = pxVar8;
          if (pxVar1 <= pxVar8) {
            return;
          }
        }
        return;
      }
code_r0x000a9dbc:
      if (((int8 *)param_2[4] == param_3) || ((int8 *)param_2[5] == param_3)) {
        if (param_4 == 1) {
          *(xunknown4 *)(param_2 + 7) = 1;
          return;
        }
        return;
      }
      *(int4 *)(param_2 + 7) = param_4;
      if (*(int4 *)((int8)param_2 + 0x44) != 4) {
        uVar2 = *(uint4 *)(param_1 + 0x14);
        if (uVar2 == 0) {
          *(xunknown4 *)((int8)param_2 + 0x44) = 4;
        }
        else {
          bVar3 = false;
          bVar11 = false;
          pxVar9 = (xunknown8 *)(param_1 + 0x18);
          do {
            *(xunknown2 *)((int8)param_2 + 0x4c) = 0;
            uVar7 = pxVar9[1];
            iVar6 = (int8)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              iVar6 = *(int8 *)(*param_3 + iVar6);
            }
            xVar5 = 1;
            if ((uVar7 & 2) == 0) {
              xVar5 = 2;
            }
            (**(code **)(*(int8 *)*pxVar9 + 0x28))
                      ((int8 *)*pxVar9,param_2,param_3,(int8)param_3 + iVar6,xVar5,param_5 & 1);
            if (*(char *)((int8)param_2 + 0x4e) != '\0') break;
            if (*(char *)((int8)param_2 + 0x4d) != '\0') {
              if (*(char *)((int8)param_2 + 0x4c) == '\0') {
                if ((*(uint1 *)(param_1 + 0x10) & 1) == 0) {
                  *(xunknown4 *)((int8)param_2 + 0x44) = 3;
                  if (bVar3) {
                    return;
                  }
                  goto code_r0x000aa090;
                }
                bVar11 = true;
              }
              else {
                if (((int4)param_2[6] == 1) || ((*(uint1 *)(param_1 + 0x10) >> 1 & 1) == 0)) {
                  *(xunknown4 *)((int8)param_2 + 0x44) = 3;
                  return;
                }
                bVar11 = true;
                bVar3 = true;
              }
            }
            pxVar9 = pxVar9 + 2;
          } while (pxVar9 < (xunknown8 *)(param_1 + (uint8)uVar2 * 0x10 + 0x18));
          xVar5 = 3;
          if (!bVar11) {
            xVar5 = 4;
          }
          *(xunknown4 *)((int8)param_2 + 0x44) = xVar5;
          if (bVar3) {
            return;
          }
        }
      }
code_r0x000aa090:
      param_2[5] = (int8)param_3;
      *(int4 *)(param_2 + 8) = (int4)param_2[8] + 1;
      if (*(int4 *)((int8)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int4)param_2[6] == 2) {
        *(xunknown1 *)((int8)param_2 + 0x4e) = 1;
        return;
      }
      return;
    }
  }
  else if (iVar6 != param_1) {
    xVar10 = *(xunknown8 *)(param_1 + 8);
    iVar4 = strcmp(xVar10,*(xunknown8 *)(iVar6 + 8));
    if (iVar4 != 0) {
      if ((*param_2 != param_1) && (iVar4 = strcmp(xVar10,*(xunknown8 *)(*param_2 + 8)), iVar4 != 0)
         ) goto code_r0x000a9e28;
      goto code_r0x000a9dbc;
    }
  }
  if (((int8 *)param_2[1] == param_3) && (*(int4 *)((int8)param_2 + 0x34) != 1)) {
    *(int4 *)((int8)param_2 + 0x34) = param_4;
  }
  return;
}

