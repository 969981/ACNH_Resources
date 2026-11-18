
void FUN_03604d70(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  
  bVar6 = *(byte *)(param_1 + 0x138);
  uVar27 = (ulong)bVar6;
  if (bVar6 != 0) {
    if (bVar6 == 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        lVar15 = param_1 + uVar12 * 8;
        uVar12 = uVar12 + 2;
        *(undefined1 *)(*(long *)(lVar15 + 0x140) + 0xd0) = 0;
        *(undefined1 *)(*(long *)(lVar15 + 0x140) + 0xd1) = 0;
        *(undefined1 *)(*(long *)(lVar15 + 0x148) + 0xd0) = 0;
        *(undefined1 *)(*(long *)(lVar15 + 0x148) + 0xd1) = 0;
      } while ((uVar27 & 0xfe) != uVar12);
    }
    if ((bVar6 & 1) != 0) {
      lVar15 = param_1 + uVar12 * 8;
      *(undefined1 *)(*(long *)(lVar15 + 0x140) + 0xd0) = 0;
      *(undefined1 *)(*(long *)(lVar15 + 0x140) + 0xd1) = 0;
    }
  }
  plVar1 = (long *)(param_1 + 0x140);
  do {
    if (bVar6 == 0) {
      *(undefined1 *)(param_1 + 0x9c9) = 0;
      uVar12 = 200000;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x140);
      lVar11 = *(long *)(param_1 + 0x148);
      bVar7 = *(byte *)(param_1 + 0x9b4);
      uVar25 = 200000;
      uVar17 = (uint)(bVar7 >> 4) * 0x1b8 + 0x1070;
      iVar9 = (bVar7 & 0xf) * 0x1054;
      uVar16 = iVar9 + 52000;
      bVar8 = *(byte *)(param_1 + 0x138);
      uVar2 = iVar9 + 0x11650 + uVar17 * -3;
      iVar21 = *(int *)(param_1 + 0x9a8);
      uVar4 = uVar2;
      if (*(char *)(param_1 + 0x9b2) != '\0' || *(char *)(param_1 + 0x9b0) != '\0') {
        uVar4 = uVar17;
      }
      uVar17 = 0xcb70;
      if (3 < bVar7) {
        uVar17 = (bVar7 + 0xc & 0xf) * 0x1054 + 52000;
      }
      lVar19 = *(long *)(param_1 + 0x180);
      if (*(char *)(param_1 + 0x9b0) != '\0') {
        uVar16 = 0x1930;
        uVar17 = 0x18ec;
      }
      if (*(char *)(param_1 + 0x9b7) != '\0') {
        uVar17 = uVar2;
      }
      if (*(char *)(param_1 + 0x9b6) != '\0') {
        uVar4 = iVar9 + 0xcb90;
      }
      uVar2 = *(uint *)(param_1 + 0x9ac);
      uVar12 = uVar27;
      plVar14 = plVar1;
      do {
        lVar26 = *plVar14;
        bVar7 = *(byte *)(lVar26 + 0x200);
        uVar10 = FUN_03608864(lVar26 + 0x2640);
        uVar13 = 200000;
        if ((1 < bVar8) &&
           (((*(char *)(lVar15 + 0x40d2) != '\0' && (*(long *)(lVar15 + 0x40d8) == lVar11 + 0x40d0))
            || ((uVar13 = 200000, *(int *)(lVar15 + 0xf68) == 7 &&
                ((uVar13 = 200000, *(char *)(lVar15 + 0xf7a) != '\0' &&
                 (uVar13 = 200000, *(long *)(lVar15 + 0xf80) == lVar11 + 0xf78)))))))) {
          uVar13 = 2;
          if (-1 < (char)bVar7) {
            uVar13 = 4;
          }
          if (*(char *)(lVar26 + 0x4110) != '\0') {
            uVar13 = 4000;
          }
        }
        uVar10 = uVar10 >> (ulong)(bVar7 >> 7);
        if (*(long *)(lVar26 + 0x4118) == 0) {
          uVar20 = 200000;
          if (lVar19 != 0) {
            uVar18 = uVar16;
            if ((iVar21 != 1) && (uVar18 = uVar17, iVar21 != 0)) {
              uVar18 = uVar4;
            }
            uVar20 = (ulong)uVar18 - (ulong)uVar2;
          }
          uVar22 = *(long *)(lVar26 + 0x128) - *(long *)(lVar26 + 0x110);
          uVar5 = 0x11110;
          if (uVar22 != 0) {
            uVar5 = uVar22;
          }
          uVar22 = 0x1007e;
          if ((*(byte *)(lVar26 + 0xec3) & 4) != 0) {
            uVar22 = 0x10080;
          }
          uVar23 = uVar22;
          if (*(char *)(lVar26 + 0x2c0) < '\0') {
            bVar7 = *(byte *)(lVar26 + 0x2c4);
            uVar23 = 2;
            if ((*(byte *)(lVar26 + 0xec3) & 4) != 0) {
              uVar23 = 4;
            }
            if ((bVar7 != 0x90) || ((*(byte *)(lVar26 + 0x2c1) & 3) == 1)) {
              lVar3 = (ulong)(0x8f - bVar7) * 0x1c8;
              if (0x8f < bVar7) {
                lVar3 = 0x10080;
              }
              uVar24 = *(ulong *)(lVar26 + 0x3b0);
              lVar3 = lVar3 + uVar23;
              if (uVar24 <= *(ulong *)(lVar26 + 0x110)) {
                uVar24 = *(ulong *)(lVar26 + 0x110) - uVar24;
              }
              uVar23 = uVar22 - 0x1c8;
              if (uVar24 <= uVar22) {
                uVar23 = (lVar3 - uVar24) + 0x1c8;
              }
            }
          }
          uVar22 = *(long *)(lVar26 + 0x130) - *(long *)(lVar26 + 0x110);
          if (uVar23 <= uVar22) {
            uVar22 = uVar23;
          }
          if (uVar13 <= uVar10) {
            uVar10 = uVar13;
          }
          if (uVar20 <= uVar10) {
            uVar10 = uVar20;
          }
          if (uVar5 <= uVar10) {
            uVar10 = uVar5;
          }
          if (uVar22 <= uVar10) {
            uVar10 = uVar22;
          }
        }
        else if (uVar13 <= uVar10) {
          uVar10 = uVar13;
        }
        plVar14 = plVar14 + 1;
        if (uVar10 <= uVar25) {
          uVar25 = uVar10;
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      *(bool *)(param_1 + 0x9c9) = (uVar25 & 3) == 2;
      if (bVar6 < 4) {
        lVar15 = 0;
      }
      else {
        lVar15 = 0;
        plVar14 = (long *)(param_1 + 0x158);
        do {
          lVar15 = lVar15 + -4;
          *(undefined8 *)(plVar14[-3] + 0x120) = *(undefined8 *)(plVar14[-3] + 0x110);
          *(undefined8 *)(plVar14[-2] + 0x120) = *(undefined8 *)(plVar14[-2] + 0x110);
          *(undefined8 *)(plVar14[-1] + 0x120) = *(undefined8 *)(plVar14[-1] + 0x110);
          *(undefined8 *)(*plVar14 + 0x120) = *(undefined8 *)(*plVar14 + 0x110);
          plVar14 = plVar14 + 4;
        } while (-(uVar27 & 0xfc) != lVar15);
        lVar15 = -lVar15;
      }
      if ((bVar6 & 3) != 0) {
        plVar14 = plVar1 + lVar15;
        uVar12 = uVar27 & 3;
        do {
          uVar12 = uVar12 - 1;
          *(undefined8 *)(*plVar14 + 0x120) = *(undefined8 *)(*plVar14 + 0x110);
          plVar14 = plVar14 + 1;
        } while (uVar12 != 0);
      }
      uVar12 = uVar25 + 2;
      if ((uVar25 & 3) != 2) {
        uVar12 = uVar25;
      }
    }
    lVar15 = *(long *)(param_1 + 0x140);
    lVar11 = *(long *)(param_1 + 0x148);
    *(undefined1 *)(param_1 + 0x9c1) = *(undefined1 *)(lVar15 + 0x2648);
    *(undefined1 *)(param_1 + 0x9c2) = *(undefined1 *)(lVar15 + 0x2649);
    *(undefined1 *)(param_1 + 0x9c4) = *(undefined1 *)(lVar15 + 0x264a);
    *(undefined1 *)(param_1 + 0x9c3) = *(undefined1 *)(lVar15 + 0x264b);
    *(undefined1 *)(param_1 + 0x9c5) = *(undefined1 *)(lVar11 + 0x2648);
    *(undefined1 *)(param_1 + 0x9c6) = *(undefined1 *)(lVar11 + 0x2649);
    *(undefined1 *)(param_1 + 0x9c8) = *(undefined1 *)(lVar11 + 0x264a);
    *(undefined1 *)(param_1 + 0x9c7) = *(undefined1 *)(lVar11 + 0x264b);
    FUN_0361e030(lVar15,*(long *)(lVar15 + 0x120) + uVar12);
    *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x118) =
         *(undefined8 *)(*(long *)(param_1 + 0x140) + 0x110);
    if (1 < bVar6) {
      uVar25 = 1;
      do {
        lVar15 = param_1 + uVar25 * 8;
        lVar11 = *(long *)(lVar15 + 0x140);
        uVar13 = *(long *)(lVar11 + 0x120) + uVar12;
        uVar10 = *(ulong *)(lVar11 + 0x110);
        if (uVar10 < uVar13) {
          do {
            if ((*(byte *)(lVar11 + 0xd1) >> 3 & 1) != 0) break;
            if (*(byte *)(lVar11 + 0xd2) < 3) {
              FUN_0361bf5c();
            }
            else if (*(char *)(lVar11 + 0x200) < '\0') {
              FUN_0361d4d4();
            }
            else if ((*(byte *)(lVar11 + 0xec3) >> 2 & 1) == 0) {
              FUN_0361cd78();
            }
            else {
              FUN_0361c670();
            }
            lVar11 = *(long *)(lVar15 + 0x140);
            uVar10 = *(ulong *)(lVar11 + 0x110);
          } while (uVar10 < uVar13);
        }
        uVar25 = uVar25 + 1;
        *(ulong *)(lVar11 + 0x118) = uVar10;
      } while (uVar25 != uVar27);
    }
    bVar7 = *(byte *)(param_1 + 0x138);
    if (bVar7 != 0) {
      lVar15 = *(long *)(param_1 + 0x140);
      if ((*(byte *)(lVar15 + 0xd1) >> 3 & 1) != 0) {
        return;
      }
      uVar12 = 0;
      do {
        if ((ulong)bVar7 - 1 == uVar12) goto LAB_03605334;
        lVar11 = uVar12 * 8;
        uVar12 = uVar12 + 1;
      } while ((*(byte *)(*(long *)(param_1 + lVar11 + 0x148) + 0xd1) >> 3 & 1) == 0);
      if (uVar12 < bVar7) {
        return;
      }
LAB_03605334:
      if (((1 < bVar7) && (*(char *)(lVar15 + 0x264c) == '\x01')) &&
         (*(long *)(lVar15 + 0x3fa8) == *(long *)(param_1 + 0x148) + 0x2640)) {
        FUN_036042e0(param_1,0,*(long *)(lVar15 + 0x110) - *(long *)(lVar15 + 0x120),0);
      }
    }
    plVar14 = plVar1;
    uVar12 = uVar27;
    if (bVar6 != 0) {
      do {
        lVar15 = *plVar14;
        *(undefined1 *)(lVar15 + 0x40d1) = *(undefined1 *)(lVar15 + 0x40d0);
        if (*(int *)(lVar15 + 0xf68) == 7) {
          *(undefined1 *)(lVar15 + 0xf79) = *(undefined1 *)(lVar15 + 0xf78);
        }
        if (*(char *)(lVar15 + 0x4110) != '\0') {
          iVar21 = *(int *)(lVar15 + 0x4114);
          if (iVar21 == 1) {
            iVar21 = 0;
            *(undefined1 *)(lVar15 + 0x4112) = 1;
            *(undefined4 *)(lVar15 + 0x4114) = 0;
            *(undefined1 *)(lVar15 + 0x4111) = *(undefined1 *)(lVar15 + 0x4113);
          }
          lVar11 = *(long *)(lVar15 + 0x4108);
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x14) == 1)) {
            *(undefined1 *)(lVar11 + 0x11) = *(undefined1 *)(lVar11 + 0x13);
            *(undefined1 *)(*(long *)(lVar15 + 0x4108) + 0x12) = 1;
            *(undefined4 *)(*(long *)(lVar15 + 0x4108) + 0x14) = 0;
            iVar21 = *(int *)(lVar15 + 0x4114);
          }
          if (iVar21 == 2) {
            if (*(long *)(lVar15 + 0x4108) != 0) {
              *(undefined1 *)(*(long *)(lVar15 + 0x4108) + 0x12) = 0;
            }
            *(undefined4 *)(lVar15 + 0x4114) = 0;
          }
        }
        uVar12 = uVar12 - 1;
        plVar14 = plVar14 + 1;
      } while (uVar12 != 0);
    }
    if ((*(byte *)(*(long *)(param_1 + 0x140) + 0xd1) & 3) != 0) {
      return;
    }
  } while( true );
}

