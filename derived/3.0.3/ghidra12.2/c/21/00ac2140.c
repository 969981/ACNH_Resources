
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac2140(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint *puVar28;
  undefined8 *puVar29;
  uint *puVar30;
  uint uVar31;
  
  puVar12 = PTR_DAT_04bb6428;
  puVar11 = PTR_DAT_04bb6420;
  if ((param_1 != (uint *)0x0) && (uVar9 = *param_1, uVar9 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar3 = crc32b(uVar3,0x95,0x4c11db7);
    uVar2 = crc32b(uVar2,0xaa,0x4c11db7);
    uVar4 = crc32b(uVar3,0xb0,0x4c11db7);
    uVar22 = 0;
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar5 = crc32b(uVar2,0x97,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar6 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar7 = crc32b(uVar6,0x65,0x4c11db7);
    uVar8 = crc32b(uVar2,0x79,0x4c11db7);
    do {
      if (((uVar22 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar22 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar20 = *puVar11;
            do {
              if (cVar20 == '\0') {
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                cVar20 = '\x01';
                *(undefined4 *)(puVar12 + 0x50) = 0xffffffff;
                *puVar11 = 1;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                uVar31 = *puVar1;
              }
              else {
                uVar16 = *(uint *)puVar12;
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar31 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_00ac2380;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar19 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar19)) goto LAB_00ac2380;
              lVar10 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar19)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar1 + (lVar10 - (long)puVar19);
              if (lVar10 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar19));
              *(undefined4 *)puVar12 = 0xfffffffe;
              if (uVar17 == 0) break;
              piVar24 = (int *)(lVar10 + 4);
              while (piVar24[-1] != -0x4a89e9f0) {
                piVar24 = piVar24 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_00ac237c;
              }
              iVar14 = 0;
              if (*piVar24 != -1) {
                iVar14 = *piVar24;
              }
              *(int *)puVar12 = iVar14;
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_00ac237c:
          uVar31 = 0;
LAB_00ac2380:
          if (((*puVar1 == 0) || (lVar10 = (long)puVar1 - (ulong)*puVar1, lVar10 == 0)) ||
             (*(char *)(lVar10 + 0xb) == '\0')) {
            if ((DAT_04da85a8 == '\x01') && (DAT_04da85ac == uVar31)) {
              uVar16 = DAT_04da85b0;
              if (2 < DAT_04da85b0) goto LAB_00ac2758;
            }
            else {
              if (((DAT_04da85e0 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_04da85e0), iVar14 != 0)) {
                DAT_04da85b8 = 0x300000000;
                DAT_04da85c0 = (undefined8 *)&DAT_04da85c8;
                __cxa_guard_release(&DAT_04da85e0);
              }
              if ((DAT_04da85e8 & 1) == 0) {
                DAT_04da85e8 = 1;
                if (((DAT_04da8608 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_04da8608), iVar14 != 0)) {
                  DAT_04da85fc = 0xffffffff00000000;
                  _DAT_04da85ec = 0xffffffff00000000;
                  DAT_04da85f4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04da8608);
                }
                _DAT_04da85ec = (ulong)~uVar5;
                iVar14 = (int)DAT_04da85b8;
                iVar21 = DAT_04da85b8._4_4_;
                if ((int)DAT_04da85b8 < DAT_04da85b8._4_4_) {
                  DAT_04da85c0[(int)DAT_04da85b8] = &DAT_04da85ec;
                  iVar14 = (int)DAT_04da85b8 + 1;
                  DAT_04da85b8 = CONCAT44(DAT_04da85b8._4_4_,iVar14);
                  iVar21 = DAT_04da85b8._4_4_;
                }
                DAT_04da85f4 = CONCAT44(1,~uVar4);
                if (iVar14 < iVar21) {
                  DAT_04da85c0[iVar14] = &DAT_04da85f4;
                  iVar14 = (int)DAT_04da85b8 + 1;
                  DAT_04da85b8 = CONCAT44(DAT_04da85b8._4_4_,iVar14);
                  iVar21 = DAT_04da85b8._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
                uVar2 = crc32b(uVar2,0x87,0x4c11db7);
                uVar2 = crc32b(uVar2,0x91,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe9,0x4c11db7);
                uVar2 = crc32b(uVar2,0xa1,0x4c11db7);
                uVar16 = crc32b(uVar2,0x8d,0x4c11db7);
                DAT_04da85fc = CONCAT44(2,~uVar16);
                if (iVar14 < iVar21) {
                  DAT_04da85c0[iVar14] = &DAT_04da85fc;
                  iVar14 = (int)DAT_04da85b8 + 1;
                  DAT_04da85b8 = CONCAT44(DAT_04da85b8._4_4_,iVar14);
                }
                puVar29 = DAT_04da85c0;
                if (1 < iVar14) {
                  uVar16 = iVar14 - 1;
                  uVar17 = 0;
                  do {
                    uVar15 = (uint)uVar17;
                    if ((int)uVar16 <= (int)uVar15) break;
                    puVar19 = (uint *)puVar29[uVar17];
                    if ((uVar16 - uVar15 & 1) == 0) {
                      uVar25 = uVar17;
                      puVar28 = puVar19;
                    }
                    else {
                      uVar25 = uVar17 + 1;
                      puVar28 = (uint *)puVar29[uVar25];
                      if (((puVar19 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar28 < *puVar19)) {
                        puVar29[uVar25] = puVar19;
                        puVar29[uVar17] = puVar28;
                        puVar28 = puVar19;
                      }
                    }
                    uVar26 = (ulong)uVar16;
                    uVar16 = uVar15;
                    if (~uVar17 + uVar26 != 0) {
                      puVar27 = puVar29 + uVar25 + 1;
                      do {
                        puVar19 = (uint *)*puVar27;
                        uVar23 = (uint)uVar25;
                        if (((puVar28 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                           (*puVar28 <= *puVar19)) {
                          puVar30 = (uint *)puVar27[1];
                          if (puVar19 != (uint *)0x0) goto LAB_00ac2710;
LAB_00ac26c0:
                          puVar19 = puVar30;
                        }
                        else {
                          puVar27[-1] = puVar19;
                          *puVar27 = puVar28;
                          puVar30 = (uint *)puVar27[1];
                          puVar19 = puVar28;
                          uVar16 = uVar23;
                          if (puVar28 == (uint *)0x0) goto LAB_00ac26c0;
LAB_00ac2710:
                          if ((puVar30 == (uint *)0x0) || (*puVar19 <= *puVar30)) goto LAB_00ac26c0;
                          uVar16 = uVar23 + 1;
                          *puVar27 = puVar30;
                          puVar27[1] = puVar19;
                        }
                        uVar25 = uVar25 + 2;
                        puVar27 = puVar27 + 2;
                        puVar28 = puVar19;
                      } while (uVar26 != uVar25);
                    }
                    if ((int)uVar16 <= (int)uVar15) break;
                    uVar26 = (ulong)uVar16;
                    uVar25 = (ulong)uVar16;
                    puVar19 = (uint *)puVar29[uVar16];
                    do {
                      puVar28 = (uint *)puVar29[uVar26 - 1];
                      if (((puVar19 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar19 < *puVar28)) {
                        uVar25 = uVar26 & 0xffffffff;
                        puVar29[uVar26 - 1] = puVar19;
                        puVar29[uVar26] = puVar28;
                        puVar28 = puVar19;
                      }
                      uVar26 = uVar26 - 1;
                      puVar19 = puVar28;
                    } while ((long)uVar17 < (long)uVar26);
                    uVar17 = uVar25;
                  } while ((uint)uVar25 != uVar16);
                }
                DAT_04da85b4 = '\x01';
              }
              else if (DAT_04da85b4 != '\x01') goto LAB_00ac2758;
              if ((int)DAT_04da85b8 == 0) goto LAB_00ac2758;
              if ((int)DAT_04da85b8 < 2) {
                uVar16 = 0;
                puVar19 = (uint *)*DAT_04da85c0;
                if (puVar19 != (uint *)0x0) goto LAB_00ac2580;
LAB_00ac273c:
                uVar17 = (ulong)uVar16;
                if (uVar16 < 3) {
LAB_00ac2748:
                  uVar16 = *(uint *)(DAT_04da85c0[uVar17] + 4);
                  if (uVar16 < 3) {
                    DAT_04da85a8 = '\x01';
                    DAT_04da85ac = uVar31;
                    DAT_04da85b0 = uVar16;
                    goto LAB_00ac2a74;
                  }
                }
              }
              else {
                uVar16 = 0;
                iVar14 = (int)DAT_04da85b8 + -1;
                do {
                  iVar21 = iVar14 + uVar16;
                  if (iVar21 < 0 != SCARRY4(iVar14,uVar16)) {
                    iVar21 = iVar21 + 1;
                  }
                  uVar15 = iVar21 >> 1;
                  uVar17 = (ulong)uVar15;
                  if (((uint *)DAT_04da85c0[(int)uVar15] == (uint *)0x0) ||
                     (uVar23 = *(uint *)DAT_04da85c0[(int)uVar15], uVar23 == uVar31))
                  goto LAB_00ac2590;
                  if (uVar23 < uVar31) {
                    uVar16 = uVar15 + 1;
                  }
                  else {
                    iVar14 = uVar15 - 1;
                  }
                } while ((int)uVar16 < iVar14);
                puVar19 = (uint *)DAT_04da85c0[(int)uVar16];
                if (puVar19 == (uint *)0x0) goto LAB_00ac273c;
LAB_00ac2580:
                uVar17 = (ulong)uVar16;
                if (*puVar19 == uVar31) {
LAB_00ac2590:
                  if (2 < (uint)uVar17) goto LAB_00ac2758;
                  goto LAB_00ac2748;
                }
              }
LAB_00ac2758:
              uVar16 = 0;
            }
          }
          else {
            if ((DAT_04da8540 == '\x01') && (DAT_04da8544 == uVar31)) {
              uVar16 = DAT_04da8548;
              if (2 < DAT_04da8548) goto LAB_00ac2a68;
            }
            else {
              if (((DAT_04da8578 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_04da8578), iVar14 != 0)) {
                DAT_04da8550 = 0x300000000;
                DAT_04da8558 = &DAT_04da8560;
                __cxa_guard_release(&DAT_04da8578);
              }
              if ((DAT_04da8580 & 1) == 0) {
                DAT_04da8580 = 1;
                if (((DAT_04da85a0 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_04da85a0), iVar14 != 0)) {
                  DAT_04da8594 = 0xffffffff00000000;
                  _DAT_04da8584 = 0xffffffff00000000;
                  DAT_04da858c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_04da85a0);
                }
                _DAT_04da8584 = (ulong)~uVar7;
                iVar14 = (int)DAT_04da8550;
                iVar21 = DAT_04da8550._4_4_;
                if ((int)DAT_04da8550 < DAT_04da8550._4_4_) {
                  *(undefined4 **)(DAT_04da8558 + (long)(int)DAT_04da8550 * 8) = &DAT_04da8584;
                  iVar14 = (int)DAT_04da8550 + 1;
                  DAT_04da8550 = CONCAT44(DAT_04da8550._4_4_,iVar14);
                  iVar21 = DAT_04da8550._4_4_;
                }
                uVar2 = crc32b(uVar3,0x75,0x4c11db7);
                uVar16 = crc32b(uVar2,0x6d,0x4c11db7);
                DAT_04da858c = CONCAT44(1,~uVar16);
                if (iVar14 < iVar21) {
                  *(undefined8 **)(DAT_04da8558 + (long)iVar14 * 8) = &DAT_04da858c;
                  iVar14 = (int)DAT_04da8550 + 1;
                  DAT_04da8550 = CONCAT44(DAT_04da8550._4_4_,iVar14);
                  iVar21 = DAT_04da8550._4_4_;
                }
                DAT_04da8594 = CONCAT44(2,~uVar8);
                if (iVar14 < iVar21) {
                  *(undefined8 **)(DAT_04da8558 + (long)iVar14 * 8) = &DAT_04da8594;
                  iVar14 = (int)DAT_04da8550 + 1;
                  DAT_04da8550 = CONCAT44(DAT_04da8550._4_4_,iVar14);
                }
                puVar13 = DAT_04da8558;
                if (1 < iVar14) {
                  uVar16 = 0;
                  uVar17 = (ulong)(iVar14 - 1);
                  do {
                    if ((int)uVar17 <= (int)uVar16) break;
                    puVar19 = *(uint **)(puVar13 + (ulong)uVar16 * 8);
                    uVar25 = (ulong)uVar16;
                    if (((int)uVar17 - uVar16 & 1) == 0) {
                      uVar26 = uVar25;
                      puVar28 = puVar19;
                    }
                    else {
                      uVar26 = uVar25 + 1;
                      puVar28 = *(uint **)(puVar13 + uVar26 * 8);
                      if (((puVar19 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar28 < *puVar19)) {
                        *(uint **)(puVar13 + uVar26 * 8) = puVar19;
                        *(uint **)(puVar13 + uVar25 * 8) = puVar28;
                        puVar28 = puVar19;
                      }
                    }
                    uVar18 = (ulong)uVar16;
                    if (~uVar25 + uVar17 != 0) {
                      puVar29 = (undefined8 *)(puVar13 + uVar26 * 8 + 8);
                      uVar18 = (ulong)uVar16;
                      do {
                        puVar19 = (uint *)*puVar29;
                        if (((puVar28 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                           (*puVar28 <= *puVar19)) {
                          puVar30 = (uint *)puVar29[1];
                          if (puVar19 != (uint *)0x0) goto LAB_00ac29f0;
LAB_00ac29a0:
                          puVar19 = puVar30;
                        }
                        else {
                          uVar18 = uVar26 & 0xffffffff;
                          puVar29[-1] = puVar19;
                          *puVar29 = puVar28;
                          puVar30 = (uint *)puVar29[1];
                          puVar19 = puVar28;
                          if (puVar28 == (uint *)0x0) goto LAB_00ac29a0;
LAB_00ac29f0:
                          if ((puVar30 == (uint *)0x0) || (*puVar19 <= *puVar30)) goto LAB_00ac29a0;
                          uVar18 = (ulong)((int)uVar26 + 1);
                          *puVar29 = puVar30;
                          puVar29[1] = puVar19;
                        }
                        uVar26 = uVar26 + 2;
                        puVar29 = puVar29 + 2;
                        puVar28 = puVar19;
                      } while (uVar17 != uVar26);
                    }
                    uVar15 = (uint)uVar18;
                    if ((int)uVar15 <= (int)uVar16) break;
                    uVar17 = uVar18;
                    puVar19 = *(uint **)(puVar13 + uVar18 * 8);
                    uVar16 = uVar15;
                    do {
                      puVar28 = *(uint **)(puVar13 + uVar17 * 8 + -8);
                      if (((puVar19 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar19 < *puVar28)) {
                        uVar16 = (uint)uVar17;
                        *(uint **)(puVar13 + uVar17 * 8 + -8) = puVar19;
                        *(uint **)(puVar13 + uVar17 * 8) = puVar28;
                        puVar28 = puVar19;
                      }
                      uVar17 = uVar17 - 1;
                      puVar19 = puVar28;
                    } while ((long)uVar25 < (long)uVar17);
                    uVar17 = uVar18;
                  } while (uVar16 != uVar15);
                }
                DAT_04da854c = '\x01';
              }
              else if (DAT_04da854c != '\x01') goto LAB_00ac2a68;
              if ((int)DAT_04da8550 != 0) {
                if ((int)DAT_04da8550 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar14 = (int)DAT_04da8550 + -1;
                  do {
                    iVar21 = iVar14 + uVar16;
                    if (iVar21 < 0 != SCARRY4(iVar14,uVar16)) {
                      iVar21 = iVar21 + 1;
                    }
                    uVar15 = iVar21 >> 1;
                    uVar17 = (ulong)uVar15;
                    if ((*(uint **)(DAT_04da8558 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                       (uVar23 = **(uint **)(DAT_04da8558 + (long)(int)uVar15 * 8), uVar23 == uVar31
                       )) goto LAB_00ac2a2c;
                    if (uVar23 < uVar31) {
                      uVar16 = uVar15 + 1;
                    }
                    else {
                      iVar14 = uVar15 - 1;
                    }
                  } while ((int)uVar16 < iVar14);
                }
                if (*(uint **)(DAT_04da8558 + (long)(int)uVar16 * 8) == (uint *)0x0) {
                  uVar17 = (ulong)uVar16;
                }
                else {
                  uVar17 = (ulong)uVar16;
                  if (**(uint **)(DAT_04da8558 + (long)(int)uVar16 * 8) != uVar31)
                  goto LAB_00ac2a68;
LAB_00ac2a2c:
                  uVar16 = (uint)uVar17;
                }
                if ((uVar16 < 3) &&
                   (uVar16 = *(uint *)(*(long *)(DAT_04da8558 + uVar17 * 8) + 4), uVar16 < 3)) {
                  DAT_04da8540 = '\x01';
                  DAT_04da8544 = uVar31;
                  DAT_04da8548 = uVar16;
                  goto LAB_00ac2a6c;
                }
              }
LAB_00ac2a68:
              uVar16 = 0;
            }
LAB_00ac2a6c:
          }
LAB_00ac2a74:
          puVar19 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar19 != (uint *)0x0)) && (*puVar19 != 0)) &&
             ((uVar31 = puVar19[1], uVar31 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar19 + lVar10 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar10 != 0) {
              uVar15 = 0;
              if ((ulong)uVar31 != 0) {
                uVar15 = (uint)((ulong)((long)puVar1 - lVar10) / (ulong)uVar31);
              }
              if (*puVar19 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < *(uint *)PTR_DAT_04bb6430) {
                *(short *)(*(long *)(PTR_DAT_04bb6430 + 8) + (long)(int)uVar15 * 2) = (short)uVar16;
              }
            }
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar9);
  }
  return;
}

