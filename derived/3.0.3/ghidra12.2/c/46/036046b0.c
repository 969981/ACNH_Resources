
void FUN_036046b0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  
  bVar7 = *(byte *)(param_1 + 0x138);
  uVar31 = (ulong)bVar7;
  puVar1 = (uint *)(param_1 + 0xc44);
  if ((*(uint *)(param_1 + 0xc44) >> 1 & 1) != 0) {
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = *puVar1 & 0xfffffffd;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc38));
  }
  if (bVar7 != 0) {
    if (bVar7 == 1) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        lVar18 = param_1 + uVar15 * 8;
        uVar15 = uVar15 + 2;
        *(undefined1 *)(*(long *)(lVar18 + 0x140) + 0xd0) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x140) + 0xd1) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x148) + 0xd0) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x148) + 0xd1) = 0;
      } while ((uVar31 & 0xfe) != uVar15);
    }
    if ((bVar7 & 1) != 0) {
      lVar18 = param_1 + uVar15 * 8;
      *(undefined1 *)(*(long *)(lVar18 + 0x140) + 0xd0) = 0;
      *(undefined1 *)(*(long *)(lVar18 + 0x140) + 0xd1) = 0;
    }
  }
  plVar2 = (long *)(param_1 + 0x140);
  do {
    if (bVar7 == 0) {
      *(undefined1 *)(param_1 + 0x9c9) = 0;
      uVar15 = 200000;
    }
    else {
      lVar18 = *(long *)(param_1 + 0x140);
      lVar26 = *(long *)(param_1 + 0x148);
      bVar8 = *(byte *)(param_1 + 0x9b4);
      uVar29 = 200000;
      uVar20 = (uint)(bVar8 >> 4) * 0x1b8 + 0x1070;
      iVar11 = (bVar8 & 0xf) * 0x1054;
      uVar19 = iVar11 + 52000;
      bVar9 = *(byte *)(param_1 + 0x138);
      iVar24 = *(int *)(param_1 + 0x9a8);
      uVar3 = iVar11 + 0x11650 + uVar20 * -3;
      uVar5 = uVar3;
      if (*(char *)(param_1 + 0x9b2) != '\0' || *(char *)(param_1 + 0x9b0) != '\0') {
        uVar5 = uVar20;
      }
      uVar20 = 0xcb70;
      if (3 < bVar8) {
        uVar20 = (bVar8 + 0xc & 0xf) * 0x1054 + 52000;
      }
      lVar22 = *(long *)(param_1 + 0x180);
      if (*(char *)(param_1 + 0x9b0) != '\0') {
        uVar19 = 0x1930;
        uVar20 = 0x18ec;
      }
      if (*(char *)(param_1 + 0x9b7) != '\0') {
        uVar20 = uVar3;
      }
      if (*(char *)(param_1 + 0x9b6) != '\0') {
        uVar5 = iVar11 + 0xcb90;
      }
      uVar3 = *(uint *)(param_1 + 0x9ac);
      uVar15 = uVar31;
      plVar17 = plVar2;
      do {
        lVar30 = *plVar17;
        bVar8 = *(byte *)(lVar30 + 0x200);
        uVar14 = FUN_03608864(lVar30 + 0x2640);
        uVar16 = 200000;
        if ((1 < bVar9) &&
           (((*(char *)(lVar18 + 0x40d2) != '\0' && (*(long *)(lVar18 + 0x40d8) == lVar26 + 0x40d0))
            || ((uVar16 = 200000, *(int *)(lVar18 + 0xf68) == 7 &&
                ((uVar16 = 200000, *(char *)(lVar18 + 0xf7a) != '\0' &&
                 (uVar16 = 200000, *(long *)(lVar18 + 0xf80) == lVar26 + 0xf78)))))))) {
          uVar16 = 2;
          if (-1 < (char)bVar8) {
            uVar16 = 4;
          }
          if (*(char *)(lVar30 + 0x4110) != '\0') {
            uVar16 = 4000;
          }
        }
        uVar14 = uVar14 >> (ulong)(bVar8 >> 7);
        if (*(long *)(lVar30 + 0x4118) == 0) {
          uVar23 = 200000;
          if (lVar22 != 0) {
            uVar21 = uVar19;
            if ((iVar24 != 1) && (uVar21 = uVar20, iVar24 != 0)) {
              uVar21 = uVar5;
            }
            uVar23 = (ulong)uVar21 - (ulong)uVar3;
          }
          uVar25 = *(long *)(lVar30 + 0x128) - *(long *)(lVar30 + 0x110);
          uVar6 = 0x11110;
          if (uVar25 != 0) {
            uVar6 = uVar25;
          }
          uVar25 = 0x1007e;
          if ((*(byte *)(lVar30 + 0xec3) & 4) != 0) {
            uVar25 = 0x10080;
          }
          uVar27 = uVar25;
          if (*(char *)(lVar30 + 0x2c0) < '\0') {
            bVar8 = *(byte *)(lVar30 + 0x2c4);
            uVar27 = 2;
            if ((*(byte *)(lVar30 + 0xec3) & 4) != 0) {
              uVar27 = 4;
            }
            if ((bVar8 != 0x90) || ((*(byte *)(lVar30 + 0x2c1) & 3) == 1)) {
              lVar4 = (ulong)(0x8f - bVar8) * 0x1c8;
              if (0x8f < bVar8) {
                lVar4 = 0x10080;
              }
              uVar28 = *(ulong *)(lVar30 + 0x3b0);
              lVar4 = lVar4 + uVar27;
              if (uVar28 <= *(ulong *)(lVar30 + 0x110)) {
                uVar28 = *(ulong *)(lVar30 + 0x110) - uVar28;
              }
              uVar27 = uVar25 - 0x1c8;
              if (uVar28 <= uVar25) {
                uVar27 = (lVar4 - uVar28) + 0x1c8;
              }
            }
          }
          uVar25 = *(long *)(lVar30 + 0x130) - *(long *)(lVar30 + 0x110);
          if (uVar27 <= uVar25) {
            uVar25 = uVar27;
          }
          if (uVar16 <= uVar14) {
            uVar14 = uVar16;
          }
          if (uVar23 <= uVar14) {
            uVar14 = uVar23;
          }
          if (uVar6 <= uVar14) {
            uVar14 = uVar6;
          }
          if (uVar25 <= uVar14) {
            uVar14 = uVar25;
          }
        }
        else if (uVar16 <= uVar14) {
          uVar14 = uVar16;
        }
        plVar17 = plVar17 + 1;
        if (uVar14 <= uVar29) {
          uVar29 = uVar14;
        }
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      *(bool *)(param_1 + 0x9c9) = (uVar29 & 3) == 2;
      if (bVar7 < 4) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        plVar17 = (long *)(param_1 + 0x158);
        do {
          lVar18 = lVar18 + -4;
          *(undefined8 *)(plVar17[-3] + 0x120) = *(undefined8 *)(plVar17[-3] + 0x110);
          *(undefined8 *)(plVar17[-2] + 0x120) = *(undefined8 *)(plVar17[-2] + 0x110);
          *(undefined8 *)(plVar17[-1] + 0x120) = *(undefined8 *)(plVar17[-1] + 0x110);
          *(undefined8 *)(*plVar17 + 0x120) = *(undefined8 *)(*plVar17 + 0x110);
          plVar17 = plVar17 + 4;
        } while (-(uVar31 & 0xfc) != lVar18);
        lVar18 = -lVar18;
      }
      if ((bVar7 & 3) != 0) {
        plVar17 = plVar2 + lVar18;
        uVar15 = uVar31 & 3;
        do {
          uVar15 = uVar15 - 1;
          *(undefined8 *)(*plVar17 + 0x120) = *(undefined8 *)(*plVar17 + 0x110);
          plVar17 = plVar17 + 1;
        } while (uVar15 != 0);
      }
      uVar15 = uVar29 + 2;
      if ((uVar29 & 3) != 2) {
        uVar15 = uVar29;
      }
    }
    lVar18 = *(long *)(param_1 + 0x140);
    lVar26 = *(long *)(param_1 + 0x148);
    *(undefined1 *)(param_1 + 0x9c1) = *(undefined1 *)(lVar18 + 0x2648);
    *(undefined1 *)(param_1 + 0x9c2) = *(undefined1 *)(lVar18 + 0x2649);
    *(undefined1 *)(param_1 + 0x9c4) = *(undefined1 *)(lVar18 + 0x264a);
    *(undefined1 *)(param_1 + 0x9c3) = *(undefined1 *)(lVar18 + 0x264b);
    *(undefined1 *)(param_1 + 0x9c5) = *(undefined1 *)(lVar26 + 0x2648);
    *(undefined1 *)(param_1 + 0x9c6) = *(undefined1 *)(lVar26 + 0x2649);
    *(undefined1 *)(param_1 + 0x9c8) = *(undefined1 *)(lVar26 + 0x264a);
    uVar10 = *(undefined1 *)(lVar26 + 0x264b);
    *(ulong *)(param_1 + 0xc48) = uVar15;
    *(undefined1 *)(param_1 + 0x9c7) = uVar10;
    *(undefined4 *)(param_1 + 0xc44) = 1;
    FUN_0361e030(lVar18,*(long *)(lVar18 + 0x120) + uVar15);
    *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x118) =
         *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x110);
    uVar19 = *(uint *)(param_1 + 0xc44);
    while ((uVar19 & 1) != 0) {
      Yield();
      uVar19 = *puVar1;
    }
    bVar8 = *(byte *)(param_1 + 0x138);
    if (bVar8 != 0) {
      lVar18 = *(long *)(param_1 + 0x140);
      uVar19 = (uint)*(byte *)(lVar18 + 0xd1);
      if ((*(byte *)(lVar18 + 0xd1) >> 3 & 1) != 0) break;
      uVar15 = 0;
      do {
        if ((ulong)bVar8 - 1 == uVar15) goto LAB_03604c34;
        lVar26 = uVar15 * 8;
        uVar15 = uVar15 + 1;
      } while ((*(byte *)(*(long *)(param_1 + lVar26 + 0x148) + 0xd1) >> 3 & 1) == 0);
      if (uVar15 < bVar8) break;
LAB_03604c34:
      if (((1 < bVar8) && (*(char *)(lVar18 + 0x264c) == '\x01')) &&
         (*(long *)(lVar18 + 0x3fa8) == *(long *)(param_1 + 0x148) + 0x2640)) {
        FUN_036042e0(param_1,0,*(long *)(lVar18 + 0x110) - *(long *)(lVar18 + 0x120),0);
      }
    }
    plVar17 = plVar2;
    uVar15 = uVar31;
    if (bVar7 != 0) {
      do {
        lVar18 = *plVar17;
        *(undefined1 *)(lVar18 + 0x40d1) = *(undefined1 *)(lVar18 + 0x40d0);
        if (*(int *)(lVar18 + 0xf68) == 7) {
          *(undefined1 *)(lVar18 + 0xf79) = *(undefined1 *)(lVar18 + 0xf78);
        }
        if (*(char *)(lVar18 + 0x4110) != '\0') {
          iVar24 = *(int *)(lVar18 + 0x4114);
          if (iVar24 == 1) {
            iVar24 = 0;
            *(undefined1 *)(lVar18 + 0x4112) = 1;
            *(undefined4 *)(lVar18 + 0x4114) = 0;
            *(undefined1 *)(lVar18 + 0x4111) = *(undefined1 *)(lVar18 + 0x4113);
          }
          lVar26 = *(long *)(lVar18 + 0x4108);
          if ((lVar26 != 0) && (*(int *)(lVar26 + 0x14) == 1)) {
            *(undefined1 *)(lVar26 + 0x11) = *(undefined1 *)(lVar26 + 0x13);
            *(undefined1 *)(*(long *)(lVar18 + 0x4108) + 0x12) = 1;
            *(undefined4 *)(*(long *)(lVar18 + 0x4108) + 0x14) = 0;
            iVar24 = *(int *)(lVar18 + 0x4114);
          }
          if (iVar24 == 2) {
            if (*(long *)(lVar18 + 0x4108) != 0) {
              *(undefined1 *)(*(long *)(lVar18 + 0x4108) + 0x12) = 0;
            }
            *(undefined4 *)(lVar18 + 0x4114) = 0;
          }
        }
        uVar15 = uVar15 - 1;
        plVar17 = plVar17 + 1;
      } while (uVar15 != 0);
    }
    bVar8 = *(byte *)(*(long *)(param_1 + 0x140) + 0xd1);
    uVar19 = (uint)bVar8;
  } while ((bVar8 & 3) == 0);
  if ((uVar19 >> 1 & 1) != 0) {
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *puVar1 = *puVar1 | 2;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  return;
}

