
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0297d6c0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  uint *puVar24;
  undefined8 *puVar25;
  uint *puVar26;
  uint uVar27;
  char *pcVar28;
  uint *puVar29;
  
  if ((param_1 != (uint *)0x0) && (uVar8 = *param_1, uVar8 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar2,0x81,0x4c11db7);
    uVar19 = 0;
    uVar3 = crc32b(uVar3,0x8a,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar3,0xba,0x4c11db7);
    uVar5 = crc32b(uVar3,0x97,0x4c11db7);
    uVar3 = crc32b(uVar4,0x68,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar6 = crc32b(uVar3,0x70,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,0x62,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar7 = crc32b(uVar3,0x31,0x4c11db7);
    puVar15 = (undefined8 *)PTR_DAT_04bb9278;
    pcVar28 = PTR_DAT_04bb9270;
    do {
      if (((uVar19 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar11 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar19 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar27 = *puVar1;
          if (uVar27 != 0) {
            cVar16 = *pcVar28;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *puVar15 = 0xffffffffffffffff;
                puVar15[1] = 0xffffffffffffffff;
                *pcVar28 = '\x01';
                *(undefined4 *)(puVar15 + 2) = 0xffffffff;
                uVar27 = *puVar1;
              }
              else {
                uVar17 = *(uint *)(puVar15 + 1);
                if (-1 < (int)uVar17) {
                  if ((uint *)((long)puVar1 + (ulong)uVar17) != (uint *)0x0) {
                    uVar27 = *(uint *)((long)puVar1 + (ulong)uVar17);
                    goto LAB_0297d8f0;
                  }
                  break;
                }
                if (uVar17 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)uVar27;
              uVar27 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar27 = 0, puVar1 == puVar29)) goto LAB_0297d8f0;
              lVar9 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar1 + (lVar9 - (long)puVar29);
              if (lVar9 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)(puVar15 + 1) = 0xfffffffe;
              if (uVar22 == 0) break;
              piVar20 = (int *)(lVar9 + 4);
              while (piVar20[-1] != -0x2c2bd7b2) {
                piVar20 = piVar20 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_0297d8ec;
              }
              iVar11 = 0;
              if (*piVar20 != -1) {
                iVar11 = *piVar20;
              }
              *(int *)(puVar15 + 1) = iVar11;
              uVar27 = *puVar1;
              if (uVar27 == 0) break;
            } while( true );
          }
LAB_0297d8ec:
          uVar27 = 0;
LAB_0297d8f0:
          if (((*puVar1 == 0) || (lVar9 = (long)puVar1 - (ulong)*puVar1, lVar9 == 0)) ||
             (*(char *)(lVar9 + 0xb) == '\0')) {
            if ((DAT_055dca78 == '\x01') && (DAT_055dca7c == uVar27)) {
              uVar17 = DAT_055dca80;
              if (1 < DAT_055dca80) goto LAB_0297dcc8;
            }
            else {
              if ((DAT_055dcaa8 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(&DAT_055dcaa8);
                pcVar28 = PTR_DAT_04bb9270;
                puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                if (iVar11 != 0) {
                  DAT_055dca88 = 0x200000000;
                  DAT_055dca90 = (undefined8 *)&DAT_055dca98;
                  __cxa_guard_release(&DAT_055dcaa8);
                  puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                }
              }
              if ((DAT_055dcab0 & 1) == 0) {
                DAT_055dcab0 = 1;
                if ((DAT_055dcac8 & 1) == 0) {
                  iVar11 = __cxa_guard_acquire(&DAT_055dcac8);
                  pcVar28 = PTR_DAT_04bb9270;
                  puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                  if (iVar11 != 0) {
                    _DAT_055dcab4 = 0xffffffff00000000;
                    DAT_055dcabc = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_055dcac8);
                    puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                  }
                }
                _DAT_055dcab4 = (ulong)~uVar5;
                iVar11 = (int)DAT_055dca88;
                iVar18 = DAT_055dca88._4_4_;
                if ((int)DAT_055dca88 < DAT_055dca88._4_4_) {
                  DAT_055dca90[(int)DAT_055dca88] = &DAT_055dcab4;
                  iVar11 = (int)DAT_055dca88 + 1;
                  DAT_055dca88 = CONCAT44(DAT_055dca88._4_4_,iVar11);
                  iVar18 = DAT_055dca88._4_4_;
                }
                uVar3 = crc32b(uVar2,0x82,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbf,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8c,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0x9d,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbc,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar17 = crc32b(uVar3,0x88,0x4c11db7);
                DAT_055dcabc = CONCAT44(1,~uVar17);
                if (iVar11 < iVar18) {
                  DAT_055dca90[iVar11] = &DAT_055dcabc;
                  iVar11 = (int)DAT_055dca88 + 1;
                  DAT_055dca88 = CONCAT44(DAT_055dca88._4_4_,iVar11);
                }
                puVar25 = DAT_055dca90;
                if (1 < iVar11) {
                  uVar12 = 0;
                  uVar17 = iVar11 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar12) break;
                    puVar29 = (uint *)puVar25[uVar12];
                    uVar22 = (ulong)uVar12;
                    if ((uVar17 - uVar12 & 1) == 0) {
                      uVar13 = uVar22;
                      puVar24 = puVar29;
                    }
                    else {
                      uVar13 = uVar22 + 1;
                      puVar24 = (uint *)puVar25[uVar13];
                      if (((puVar29 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar24 < *puVar29)) {
                        puVar25[uVar13] = puVar29;
                        puVar25[uVar22] = puVar24;
                        puVar24 = puVar29;
                      }
                    }
                    uVar14 = (ulong)uVar17;
                    uVar17 = uVar12;
                    if (~uVar22 + uVar14 != 0) {
                      puVar23 = puVar25 + uVar13 + 1;
                      do {
                        puVar29 = (uint *)*puVar23;
                        uVar21 = (uint)uVar13;
                        if (((puVar24 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar24 <= *puVar29)) {
                          puVar26 = (uint *)puVar23[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0297dc80;
LAB_0297dc30:
                          puVar29 = puVar26;
                        }
                        else {
                          puVar23[-1] = puVar29;
                          *puVar23 = puVar24;
                          puVar26 = (uint *)puVar23[1];
                          puVar29 = puVar24;
                          uVar17 = uVar21;
                          if (puVar24 == (uint *)0x0) goto LAB_0297dc30;
LAB_0297dc80:
                          if (puVar26 == (uint *)0x0) goto LAB_0297dc30;
                          if (*puVar29 <= *puVar26) goto LAB_0297dc30;
                          uVar17 = uVar21 + 1;
                          *puVar23 = puVar26;
                          puVar23[1] = puVar29;
                        }
                        uVar13 = uVar13 + 2;
                        puVar23 = puVar23 + 2;
                        puVar24 = puVar29;
                      } while (uVar14 != uVar13);
                    }
                    if ((int)uVar17 <= (int)uVar12) break;
                    uVar13 = (ulong)uVar17;
                    puVar29 = (uint *)puVar25[uVar17];
                    uVar12 = uVar17;
                    do {
                      puVar24 = (uint *)puVar25[uVar13 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar29 < *puVar24)) {
                        uVar12 = (uint)uVar13;
                        puVar25[uVar13 - 1] = puVar29;
                        puVar25[uVar13] = puVar24;
                        puVar24 = puVar29;
                      }
                      uVar13 = uVar13 - 1;
                      puVar29 = puVar24;
                    } while ((long)uVar22 < (long)uVar13);
                  } while (uVar12 != uVar17);
                }
                DAT_055dca84 = '\x01';
              }
              else if (DAT_055dca84 != '\x01') goto LAB_0297dcc8;
              if ((int)DAT_055dca88 == 0) goto LAB_0297dcc8;
              if ((int)DAT_055dca88 < 2) {
                uVar17 = 0;
                puVar29 = (uint *)*DAT_055dca90;
                if (puVar29 != (uint *)0x0) goto LAB_0297daf0;
LAB_0297dcac:
                uVar12 = uVar17;
                if (uVar17 < 2) {
LAB_0297dcb8:
                  uVar17 = *(uint *)(DAT_055dca90[uVar12] + 4);
                  if (uVar17 < 2) {
                    DAT_055dca78 = '\x01';
                    DAT_055dca7c = uVar27;
                    DAT_055dca80 = uVar17;
                    goto LAB_0297dfa4;
                  }
                }
              }
              else {
                uVar17 = 0;
                iVar11 = (int)DAT_055dca88 + -1;
                do {
                  iVar18 = iVar11 + uVar17;
                  if (iVar18 < 0 != SCARRY4(iVar11,uVar17)) {
                    iVar18 = iVar18 + 1;
                  }
                  uVar12 = iVar18 >> 1;
                  if ((uint *)DAT_055dca90[(int)uVar12] == (uint *)0x0) goto LAB_0297db00;
                  uVar21 = *(uint *)DAT_055dca90[(int)uVar12];
                  if (uVar21 == uVar27) goto LAB_0297db00;
                  if (uVar21 < uVar27) {
                    uVar17 = uVar12 + 1;
                  }
                  else {
                    iVar11 = uVar12 - 1;
                  }
                } while ((int)uVar17 < iVar11);
                puVar29 = (uint *)DAT_055dca90[(int)uVar17];
                if (puVar29 == (uint *)0x0) goto LAB_0297dcac;
LAB_0297daf0:
                uVar12 = uVar17;
                if (*puVar29 == uVar27) {
LAB_0297db00:
                  if (1 < uVar12) goto LAB_0297dcc8;
                  goto LAB_0297dcb8;
                }
              }
LAB_0297dcc8:
              uVar17 = 0;
            }
          }
          else {
            if ((DAT_055dca20 == '\x01') && (DAT_055dca24 == uVar27)) {
              uVar17 = DAT_055dca28;
              if (1 < DAT_055dca28) goto LAB_0297df98;
            }
            else {
              if ((DAT_055dca50 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(&DAT_055dca50);
                pcVar28 = PTR_DAT_04bb9270;
                puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                if (iVar11 != 0) {
                  DAT_055dca30 = 0x200000000;
                  DAT_055dca38 = &DAT_055dca40;
                  __cxa_guard_release(&DAT_055dca50);
                  puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                }
              }
              if ((DAT_055dca58 & 1) == 0) {
                DAT_055dca58 = 1;
                if ((DAT_055dca70 & 1) == 0) {
                  iVar11 = __cxa_guard_acquire(&DAT_055dca70);
                  pcVar28 = PTR_DAT_04bb9270;
                  puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                  if (iVar11 != 0) {
                    _DAT_055dca5c = 0xffffffff00000000;
                    DAT_055dca64 = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_055dca70);
                    puVar15 = (undefined8 *)PTR_DAT_04bb9278;
                  }
                }
                _DAT_055dca5c = (ulong)~uVar6;
                iVar11 = (int)DAT_055dca30;
                iVar18 = DAT_055dca30._4_4_;
                if ((int)DAT_055dca30 < DAT_055dca30._4_4_) {
                  *(undefined4 **)(DAT_055dca38 + (long)(int)DAT_055dca30 * 8) = &DAT_055dca5c;
                  iVar11 = (int)DAT_055dca30 + 1;
                  DAT_055dca30 = CONCAT44(DAT_055dca30._4_4_,iVar11);
                  iVar18 = DAT_055dca30._4_4_;
                }
                DAT_055dca64 = CONCAT44(1,~uVar7);
                if (iVar11 < iVar18) {
                  *(undefined8 **)(DAT_055dca38 + (long)iVar11 * 8) = &DAT_055dca64;
                  iVar11 = (int)DAT_055dca30 + 1;
                  DAT_055dca30 = CONCAT44(DAT_055dca30._4_4_,iVar11);
                }
                puVar10 = DAT_055dca38;
                if (1 < iVar11) {
                  uVar12 = 0;
                  uVar17 = iVar11 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar12) break;
                    puVar29 = *(uint **)(puVar10 + (ulong)uVar12 * 8);
                    uVar22 = (ulong)uVar12;
                    if ((uVar17 - uVar12 & 1) == 0) {
                      uVar13 = uVar22;
                      puVar24 = puVar29;
                    }
                    else {
                      uVar13 = uVar22 + 1;
                      puVar24 = *(uint **)(puVar10 + uVar13 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar24 < *puVar29)) {
                        *(uint **)(puVar10 + uVar13 * 8) = puVar29;
                        *(uint **)(puVar10 + uVar22 * 8) = puVar24;
                        puVar24 = puVar29;
                      }
                    }
                    uVar14 = (ulong)uVar17;
                    uVar17 = uVar12;
                    if (~uVar22 + uVar14 != 0) {
                      puVar25 = (undefined8 *)(puVar10 + uVar13 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar25;
                        uVar21 = (uint)uVar13;
                        if (((puVar24 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar24 <= *puVar29)) {
                          puVar26 = (uint *)puVar25[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0297df20;
LAB_0297ded0:
                          puVar29 = puVar26;
                        }
                        else {
                          puVar25[-1] = puVar29;
                          *puVar25 = puVar24;
                          puVar26 = (uint *)puVar25[1];
                          puVar29 = puVar24;
                          uVar17 = uVar21;
                          if (puVar24 == (uint *)0x0) goto LAB_0297ded0;
LAB_0297df20:
                          if ((puVar26 == (uint *)0x0) || (*puVar29 <= *puVar26)) goto LAB_0297ded0;
                          uVar17 = uVar21 + 1;
                          *puVar25 = puVar26;
                          puVar25[1] = puVar29;
                        }
                        uVar13 = uVar13 + 2;
                        puVar25 = puVar25 + 2;
                        puVar24 = puVar29;
                      } while (uVar14 != uVar13);
                    }
                    if ((int)uVar17 <= (int)uVar12) break;
                    uVar13 = (ulong)uVar17;
                    puVar29 = *(uint **)(puVar10 + (ulong)uVar17 * 8);
                    uVar12 = uVar17;
                    do {
                      puVar24 = *(uint **)(puVar10 + uVar13 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar29 < *puVar24)) {
                        uVar12 = (uint)uVar13;
                        *(uint **)(puVar10 + uVar13 * 8 + -8) = puVar29;
                        *(uint **)(puVar10 + uVar13 * 8) = puVar24;
                        puVar24 = puVar29;
                      }
                      uVar13 = uVar13 - 1;
                      puVar29 = puVar24;
                    } while ((long)uVar22 < (long)uVar13);
                  } while (uVar12 != uVar17);
                }
                DAT_055dca2c = '\x01';
              }
              else if (DAT_055dca2c != '\x01') goto LAB_0297df98;
              if ((int)DAT_055dca30 != 0) {
                if ((int)DAT_055dca30 < 2) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  iVar11 = (int)DAT_055dca30 + -1;
                  do {
                    iVar18 = iVar11 + uVar17;
                    if (iVar18 < 0 != SCARRY4(iVar11,uVar17)) {
                      iVar18 = iVar18 + 1;
                    }
                    uVar12 = iVar18 >> 1;
                    if (*(uint **)(DAT_055dca38 + (long)(int)uVar12 * 8) == (uint *)0x0)
                    goto joined_r0x0297df84;
                    uVar21 = **(uint **)(DAT_055dca38 + (long)(int)uVar12 * 8);
                    if (uVar21 == uVar27) goto joined_r0x0297df84;
                    if (uVar21 < uVar27) {
                      uVar17 = uVar12 + 1;
                    }
                    else {
                      iVar11 = uVar12 - 1;
                    }
                  } while ((int)uVar17 < iVar11);
                }
                uVar12 = uVar17;
                if ((*(uint **)(DAT_055dca38 + (long)(int)uVar17 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055dca38 + (long)(int)uVar17 * 8) == uVar27)) {
joined_r0x0297df84:
                  if ((uVar12 < 2) &&
                     (uVar17 = *(uint *)(*(long *)(DAT_055dca38 + (ulong)uVar12 * 8) + 4),
                     uVar17 < 2)) {
                    DAT_055dca20 = '\x01';
                    DAT_055dca24 = uVar27;
                    DAT_055dca28 = uVar17;
                    goto LAB_0297df9c;
                  }
                }
              }
LAB_0297df98:
              uVar17 = 0;
            }
LAB_0297df9c:
          }
LAB_0297dfa4:
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar29 != (uint *)0x0)) &&
             ((*puVar29 != 0 &&
              ((uVar27 = puVar29[1], uVar27 != 0 && ((ulong)(ushort)puVar29[2] != 0)))))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar29 + lVar9 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar9 != 0) {
              uVar12 = 0;
              if ((ulong)uVar27 != 0) {
                uVar12 = (uint)((ulong)((long)puVar1 - lVar9) / (ulong)uVar27);
              }
              if (*puVar29 <= uVar12) {
                uVar12 = 0xffffffff;
              }
              if (uVar12 < *(uint *)PTR_DAT_04bb9268) {
                *(short *)(*(long *)(PTR_DAT_04bb9268 + 8) + (long)(int)uVar12 * 2) = (short)uVar17;
              }
            }
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar8);
  }
  return;
}

