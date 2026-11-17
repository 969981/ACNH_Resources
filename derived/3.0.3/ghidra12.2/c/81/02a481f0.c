
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a481f0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 *puVar29;
  uint *puVar30;
  uint uVar31;
  
  puVar14 = PTR_DAT_04bc4150;
  puVar13 = PTR_DAT_04bc4148;
  if ((param_1 != (uint *)0x0) && (uVar11 = *param_1, uVar11 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe4,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar5 = crc32b(uVar5,0xa4,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar26 = 0;
    uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar2 = crc32b(uVar2,0x97,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa5,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe4,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
    uVar6 = crc32b(uVar2,0xad,0x4c11db7);
    uVar7 = crc32b(uVar5,0x9c,0x4c11db7);
    uVar2 = crc32b(uVar4,0x44,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar8 = crc32b(uVar2,0x79,0x4c11db7);
    uVar9 = crc32b(uVar3,0x67,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0x67,0x4c11db7);
    uVar2 = crc32b(uVar2,0x68,0x4c11db7);
    uVar10 = crc32b(uVar2,0x74,0x4c11db7);
    do {
      if (((uVar26 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar16 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar26 + (uint)(ushort)param_1[2] * 8 + iVar16) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar21 = *puVar13;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *puVar13 = 1;
                *(undefined8 *)puVar14 = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                *(undefined4 *)(puVar14 + 0x18) = 0xffffffff;
                uVar31 = *puVar1;
              }
              else {
                uVar23 = *(uint *)(puVar14 + 4);
                if (-1 < (int)uVar23) {
                  if ((uint *)((long)puVar1 + (ulong)uVar23) != (uint *)0x0) {
                    uVar31 = *(uint *)((long)puVar1 + (ulong)uVar23);
                    goto LAB_02a48490;
                  }
                  break;
                }
                if (uVar23 != 0xffffffff) break;
              }
              puVar30 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar30 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar30)) goto LAB_02a48490;
              lVar12 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar30)) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar1 + (lVar12 - (long)puVar30);
              if (lVar12 == 0) break;
              uVar28 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar30));
              *(undefined4 *)(puVar14 + 4) = 0xfffffffe;
              if (uVar28 == 0) break;
              piVar25 = (int *)(lVar12 + 4);
              while (piVar25[-1] != -0x385e6ab) {
                piVar25 = piVar25 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_02a4848c;
              }
              iVar16 = 0;
              if (*piVar25 != -1) {
                iVar16 = *piVar25;
              }
              *(int *)(puVar14 + 4) = iVar16;
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_02a4848c:
          uVar31 = 0;
LAB_02a48490:
          if (((*puVar1 == 0) || (lVar12 = (long)puVar1 - (ulong)*puVar1, lVar12 == 0)) ||
             (*(char *)(lVar12 + 0xb) == '\0')) {
            if ((DAT_055f6648 == '\x01') && (DAT_055f664c == uVar31)) {
              uVar23 = DAT_055f6650;
              if (3 < DAT_055f6650) {
LAB_02a48508:
                uVar23 = 0;
              }
            }
            else {
              if (((DAT_055f6688 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_055f6688), iVar16 != 0)) {
                DAT_055f6658 = 0x400000000;
                DAT_055f6660 = &DAT_055f6668;
                __cxa_guard_release(&DAT_055f6688);
              }
              if ((DAT_055f6690 & 1) == 0) {
                DAT_055f6690 = 1;
                if (((DAT_055f66b8 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_055f66b8), iVar16 != 0)) {
                  _DAT_055f6694 = 0xffffffff00000000;
                  DAT_055f669c = 0xffffffff00000000;
                  DAT_055f66a4 = 0xffffffff00000000;
                  DAT_055f66ac = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055f66b8);
                }
                _DAT_055f6694 = (ulong)~uVar6;
                iVar16 = (int)DAT_055f6658;
                iVar22 = DAT_055f6658._4_4_;
                if ((int)DAT_055f6658 < DAT_055f6658._4_4_) {
                  *(undefined4 **)(DAT_055f6660 + (long)(int)DAT_055f6658 * 8) = &DAT_055f6694;
                  iVar16 = (int)DAT_055f6658 + 1;
                  DAT_055f6658 = CONCAT44(DAT_055f6658._4_4_,iVar16);
                  iVar22 = DAT_055f6658._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar3 = crc32b(uVar2,0x9c,0x4c11db7);
                uVar23 = crc32b(uVar3,0x9d,0x4c11db7);
                DAT_055f669c = CONCAT44(1,~uVar23);
                if (iVar16 < iVar22) {
                  *(undefined8 **)(DAT_055f6660 + (long)iVar16 * 8) = &DAT_055f669c;
                  iVar16 = (int)DAT_055f6658 + 1;
                  DAT_055f6658 = CONCAT44(DAT_055f6658._4_4_,iVar16);
                  iVar22 = DAT_055f6658._4_4_;
                }
                uVar2 = crc32b(uVar2,0x98,0x4c11db7);
                uVar23 = crc32b(uVar2,0xbc,0x4c11db7);
                DAT_055f66a4 = CONCAT44(2,~uVar23);
                if (iVar16 < iVar22) {
                  *(undefined8 **)(DAT_055f6660 + (long)iVar16 * 8) = &DAT_055f66a4;
                  iVar16 = (int)DAT_055f6658 + 1;
                  DAT_055f6658 = CONCAT44(DAT_055f6658._4_4_,iVar16);
                  iVar22 = DAT_055f6658._4_4_;
                }
                DAT_055f66ac = CONCAT44(3,~uVar7);
                if (iVar16 < iVar22) {
                  *(undefined8 **)(DAT_055f6660 + (long)iVar16 * 8) = &DAT_055f66ac;
                  iVar16 = (int)DAT_055f6658 + 1;
                  DAT_055f6658 = CONCAT44(DAT_055f6658._4_4_,iVar16);
                }
                puVar15 = DAT_055f6660;
                if (1 < iVar16) {
                  uVar17 = 0;
                  uVar23 = iVar16 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar17) break;
                    puVar30 = *(uint **)(puVar15 + (ulong)uVar17 * 8);
                    uVar28 = (ulong)uVar17;
                    if ((uVar23 - uVar17 & 1) == 0) {
                      puVar20 = puVar30;
                      uVar24 = uVar28;
                    }
                    else {
                      uVar24 = uVar28 + 1;
                      puVar20 = *(uint **)(puVar15 + uVar24 * 8);
                      if (((puVar30 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar30)) {
                        *(uint **)(puVar15 + uVar24 * 8) = puVar30;
                        *(uint **)(puVar15 + uVar28 * 8) = puVar20;
                        puVar20 = puVar30;
                      }
                    }
                    uVar19 = (ulong)uVar23;
                    uVar23 = uVar17;
                    if (~uVar28 + uVar19 != 0) {
                      puVar29 = (undefined8 *)(puVar15 + uVar24 * 8 + 8);
                      do {
                        puVar30 = (uint *)*puVar29;
                        uVar27 = (uint)uVar24;
                        if (((puVar20 == (uint *)0x0) || (puVar30 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar30)) {
                          puVar18 = (uint *)puVar29[1];
                          if (puVar30 != (uint *)0x0) goto LAB_02a48880;
LAB_02a48830:
                          puVar30 = puVar18;
                        }
                        else {
                          puVar29[-1] = puVar30;
                          *puVar29 = puVar20;
                          puVar18 = (uint *)puVar29[1];
                          puVar30 = puVar20;
                          uVar23 = uVar27;
                          if (puVar20 == (uint *)0x0) goto LAB_02a48830;
LAB_02a48880:
                          if (puVar18 == (uint *)0x0) goto LAB_02a48830;
                          if (*puVar30 <= *puVar18) goto LAB_02a48830;
                          uVar23 = uVar27 + 1;
                          *puVar29 = puVar18;
                          puVar29[1] = puVar30;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar20 = puVar30;
                      } while (uVar19 != uVar24);
                    }
                    if ((int)uVar23 <= (int)uVar17) break;
                    uVar24 = (ulong)uVar23;
                    puVar30 = *(uint **)(puVar15 + (ulong)uVar23 * 8);
                    uVar17 = uVar23;
                    do {
                      puVar20 = *(uint **)(puVar15 + uVar24 * 8 + -8);
                      if (((puVar30 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar30 < *puVar20)) {
                        uVar17 = (uint)uVar24;
                        *(uint **)(puVar15 + uVar24 * 8 + -8) = puVar30;
                        *(uint **)(puVar15 + uVar24 * 8) = puVar20;
                        puVar20 = puVar30;
                      }
                      uVar24 = uVar24 - 1;
                      puVar30 = puVar20;
                    } while ((long)uVar28 < (long)uVar24);
                  } while (uVar17 != uVar23);
                }
                DAT_055f6654 = '\x01';
LAB_02a4865c:
                if ((int)DAT_055f6658 != 0) {
                  uVar23 = 0;
                  if (1 < (int)DAT_055f6658) {
                    iVar16 = (int)DAT_055f6658 + -1;
                    do {
                      iVar22 = iVar16 + uVar23;
                      if (iVar22 < 0 != SCARRY4(iVar16,uVar23)) {
                        iVar22 = iVar22 + 1;
                      }
                      uVar17 = iVar22 >> 1;
                      if (*(uint **)(DAT_055f6660 + (long)(int)uVar17 * 8) == (uint *)0x0)
                      goto joined_r0x02a48a9c;
                      uVar27 = **(uint **)(DAT_055f6660 + (long)(int)uVar17 * 8);
                      if (uVar27 == uVar31) goto joined_r0x02a48a9c;
                      if (uVar27 < uVar31) {
                        uVar23 = uVar17 + 1;
                      }
                      else {
                        iVar16 = uVar17 - 1;
                      }
                    } while ((int)uVar23 < iVar16);
                  }
                  uVar17 = uVar23;
                  if ((*(uint **)(DAT_055f6660 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_055f6660 + (long)(int)uVar23 * 8) == uVar31)) {
joined_r0x02a48a9c:
                    if (uVar17 < 4) {
                      uVar23 = *(uint *)(*(long *)(DAT_055f6660 + (ulong)uVar17 * 8) + 4);
                      if (3 < uVar23) goto LAB_02a48508;
                      DAT_055f6648 = '\x01';
                      DAT_055f664c = uVar31;
                      DAT_055f6650 = uVar23;
                      goto LAB_02a48c2c;
                    }
                  }
                  uVar23 = 0;
                  goto LAB_02a48c2c;
                }
              }
              else if (DAT_055f6654 == '\x01') goto LAB_02a4865c;
              uVar23 = 0;
            }
          }
          else {
            if ((DAT_055f65d0 == '\x01') && (DAT_055f65d4 == uVar31)) {
              uVar23 = DAT_055f65d8;
              if (3 < DAT_055f65d8) {
LAB_02a484d8:
                uVar23 = 0;
              }
            }
            else {
              if (((DAT_055f6610 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_055f6610), iVar16 != 0)) {
                DAT_055f65e0 = 0x400000000;
                DAT_055f65e8 = &DAT_055f65f0;
                __cxa_guard_release(&DAT_055f6610);
              }
              if ((DAT_055f6618 & 1) == 0) {
                DAT_055f6618 = 1;
                if (((DAT_055f6640 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_055f6640), iVar16 != 0)) {
                  _DAT_055f661c = 0xffffffff00000000;
                  DAT_055f6624 = 0xffffffff00000000;
                  DAT_055f662c = 0xffffffff00000000;
                  DAT_055f6634 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055f6640);
                }
                _DAT_055f661c = (ulong)~uVar8;
                iVar16 = (int)DAT_055f65e0;
                iVar22 = DAT_055f65e0._4_4_;
                if ((int)DAT_055f65e0 < DAT_055f65e0._4_4_) {
                  *(undefined4 **)(DAT_055f65e8 + (long)(int)DAT_055f65e0 * 8) = &DAT_055f661c;
                  iVar16 = (int)DAT_055f65e0 + 1;
                  DAT_055f65e0 = CONCAT44(DAT_055f65e0._4_4_,iVar16);
                  iVar22 = DAT_055f65e0._4_4_;
                }
                DAT_055f6624 = CONCAT44(1,~uVar9);
                if (iVar16 < iVar22) {
                  *(undefined8 **)(DAT_055f65e8 + (long)iVar16 * 8) = &DAT_055f6624;
                  iVar16 = (int)DAT_055f65e0 + 1;
                  DAT_055f65e0 = CONCAT44(DAT_055f65e0._4_4_,iVar16);
                  iVar22 = DAT_055f65e0._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0x44,0x4c11db7);
                uVar2 = crc32b(uVar2,0x61,0x4c11db7);
                uVar2 = crc32b(uVar2,0x79,0x4c11db7);
                uVar2 = crc32b(uVar2,0x74,0x4c11db7);
                uVar2 = crc32b(uVar2,0x69,0x4c11db7);
                uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
                uVar23 = crc32b(uVar2,0x65,0x4c11db7);
                DAT_055f662c = CONCAT44(2,~uVar23);
                if (iVar16 < iVar22) {
                  *(undefined8 **)(DAT_055f65e8 + (long)iVar16 * 8) = &DAT_055f662c;
                  iVar16 = (int)DAT_055f65e0 + 1;
                  DAT_055f65e0 = CONCAT44(DAT_055f65e0._4_4_,iVar16);
                  iVar22 = DAT_055f65e0._4_4_;
                }
                DAT_055f6634 = CONCAT44(3,~uVar10);
                if (iVar16 < iVar22) {
                  *(undefined8 **)(DAT_055f65e8 + (long)iVar16 * 8) = &DAT_055f6634;
                  iVar16 = (int)DAT_055f65e0 + 1;
                  DAT_055f65e0 = CONCAT44(DAT_055f65e0._4_4_,iVar16);
                }
                puVar15 = DAT_055f65e8;
                if (1 < iVar16) {
                  uVar17 = 0;
                  uVar23 = iVar16 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar17) break;
                    puVar30 = *(uint **)(puVar15 + (ulong)uVar17 * 8);
                    uVar28 = (ulong)uVar17;
                    if ((uVar23 - uVar17 & 1) == 0) {
                      uVar24 = uVar28;
                      puVar20 = puVar30;
                    }
                    else {
                      uVar24 = uVar28 + 1;
                      puVar20 = *(uint **)(puVar15 + uVar24 * 8);
                      if (((puVar30 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar30)) {
                        *(uint **)(puVar15 + uVar24 * 8) = puVar30;
                        *(uint **)(puVar15 + uVar28 * 8) = puVar20;
                        puVar20 = puVar30;
                      }
                    }
                    uVar19 = (ulong)uVar23;
                    uVar23 = uVar17;
                    if (~uVar28 + uVar19 != 0) {
                      puVar29 = (undefined8 *)(puVar15 + uVar24 * 8 + 8);
                      do {
                        puVar30 = (uint *)*puVar29;
                        uVar27 = (uint)uVar24;
                        if (((puVar20 == (uint *)0x0) || (puVar30 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar30)) {
                          puVar18 = (uint *)puVar29[1];
                          if (puVar30 != (uint *)0x0) goto LAB_02a48bf0;
LAB_02a48ba0:
                          puVar30 = puVar18;
                        }
                        else {
                          puVar29[-1] = puVar30;
                          *puVar29 = puVar20;
                          puVar18 = (uint *)puVar29[1];
                          puVar30 = puVar20;
                          uVar23 = uVar27;
                          if (puVar20 == (uint *)0x0) goto LAB_02a48ba0;
LAB_02a48bf0:
                          if ((puVar18 == (uint *)0x0) || (*puVar30 <= *puVar18)) goto LAB_02a48ba0;
                          uVar23 = uVar27 + 1;
                          *puVar29 = puVar18;
                          puVar29[1] = puVar30;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar20 = puVar30;
                      } while (uVar19 != uVar24);
                    }
                    if ((int)uVar23 <= (int)uVar17) break;
                    uVar24 = (ulong)uVar23;
                    puVar30 = *(uint **)(puVar15 + (ulong)uVar23 * 8);
                    uVar17 = uVar23;
                    do {
                      puVar20 = *(uint **)(puVar15 + uVar24 * 8 + -8);
                      if (((puVar30 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar30 < *puVar20)) {
                        uVar17 = (uint)uVar24;
                        *(uint **)(puVar15 + uVar24 * 8 + -8) = puVar30;
                        *(uint **)(puVar15 + uVar24 * 8) = puVar20;
                        puVar20 = puVar30;
                      }
                      uVar24 = uVar24 - 1;
                      puVar30 = puVar20;
                    } while ((long)uVar28 < (long)uVar24);
                  } while (uVar17 != uVar23);
                }
                DAT_055f65dc = '\x01';
LAB_02a489d0:
                if ((int)DAT_055f65e0 != 0) {
                  uVar23 = 0;
                  if (1 < (int)DAT_055f65e0) {
                    iVar16 = (int)DAT_055f65e0 + -1;
                    do {
                      iVar22 = iVar16 + uVar23;
                      if (iVar22 < 0 != SCARRY4(iVar16,uVar23)) {
                        iVar22 = iVar22 + 1;
                      }
                      uVar17 = iVar22 >> 1;
                      if (*(uint **)(DAT_055f65e8 + (long)(int)uVar17 * 8) == (uint *)0x0)
                      goto joined_r0x02a48c18;
                      uVar27 = **(uint **)(DAT_055f65e8 + (long)(int)uVar17 * 8);
                      if (uVar27 == uVar31) goto joined_r0x02a48c18;
                      if (uVar27 < uVar31) {
                        uVar23 = uVar17 + 1;
                      }
                      else {
                        iVar16 = uVar17 - 1;
                      }
                    } while ((int)uVar23 < iVar16);
                  }
                  uVar17 = uVar23;
                  if ((*(uint **)(DAT_055f65e8 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_055f65e8 + (long)(int)uVar23 * 8) == uVar31)) {
joined_r0x02a48c18:
                    if (uVar17 < 4) {
                      uVar23 = *(uint *)(*(long *)(DAT_055f65e8 + (ulong)uVar17 * 8) + 4);
                      if (3 < uVar23) goto LAB_02a484d8;
                      DAT_055f65d0 = '\x01';
                      DAT_055f65d4 = uVar31;
                      DAT_055f65d8 = uVar23;
                      goto LAB_02a48c24;
                    }
                  }
                  uVar23 = 0;
                  goto LAB_02a48c24;
                }
              }
              else if (DAT_055f65dc == '\x01') goto LAB_02a489d0;
              uVar23 = 0;
            }
LAB_02a48c24:
          }
LAB_02a48c2c:
          puVar30 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar30 != (uint *)0x0)) &&
             ((*puVar30 != 0 &&
              ((uVar31 = puVar30[1], uVar31 != 0 && ((ulong)(ushort)puVar30[2] != 0)))))) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar30 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar30 + lVar12 + (ulong)(ushort)puVar30[2] * 8;
            if (lVar12 != 0) {
              uVar17 = 0;
              if ((ulong)uVar31 != 0) {
                uVar17 = (uint)((ulong)((long)puVar1 - lVar12) / (ulong)uVar31);
              }
              if (*puVar30 <= uVar17) {
                uVar17 = 0xffffffff;
              }
              if (uVar17 < *(uint *)PTR_DAT_04bc4158) {
                *(short *)(*(long *)(PTR_DAT_04bc4158 + 8) + (long)(int)uVar17 * 2) = (short)uVar23;
              }
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar11);
  }
  return;
}

