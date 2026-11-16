
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02960f50(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  
  if ((param_1 != (uint *)0x0) && (uVar10 = *param_1, uVar10 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar5 = crc32b(uVar2,0x8c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar17 = 0;
    uVar5 = crc32b(uVar5,0x97,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,0x75,0x4c11db7);
    uVar5 = crc32b(uVar5,0xe5,0x4c11db7);
    uVar5 = crc32b(uVar5,0x8d,0x4c11db7);
    uVar5 = crc32b(uVar5,0x8a,0x4c11db7);
    uVar3 = crc32b(uVar3,0x74,0x4c11db7);
    uVar4 = crc32b(uVar4,0x74,0x4c11db7);
    uVar6 = crc32b(uVar3,0x68,0x4c11db7);
    uVar7 = crc32b(uVar4,0x68,0x4c11db7);
    uVar3 = crc32b(uVar5,0xe7,0x4c11db7);
    uVar3 = crc32b(uVar3,0x90,0x4c11db7);
    uVar8 = crc32b(uVar3,0x83,0x4c11db7);
    do {
      if (((uVar17 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar12 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar17 + (uint)(ushort)param_1[2] * 8 + iVar12) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          puVar16 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_02961118:
            uVar18 = 0;
LAB_0296111c:
            if ((DAT_055d6e90 == '\x01') && (DAT_055d6e94 == uVar18)) {
              uVar15 = DAT_055d6e98;
              if (1 < DAT_055d6e98) goto LAB_02961518;
            }
            else {
              if (((DAT_055d6ec0 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_055d6ec0), iVar12 != 0)) {
                DAT_055d6ea0 = 0x200000000;
                DAT_055d6ea8 = (undefined8 *)&DAT_055d6eb0;
                __cxa_guard_release(&DAT_055d6ec0);
              }
              if ((DAT_055d6ec8 & 1) == 0) {
                DAT_055d6ec8 = 1;
                if (((DAT_055d6ee0 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_055d6ee0), iVar12 != 0)) {
                  _DAT_055d6ecc = 0xffffffff00000000;
                  DAT_055d6ed4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6ee0);
                }
                _DAT_055d6ecc = (ulong)~uVar8;
                iVar12 = (int)DAT_055d6ea0;
                iVar14 = DAT_055d6ea0._4_4_;
                if ((int)DAT_055d6ea0 < DAT_055d6ea0._4_4_) {
                  DAT_055d6ea8[(int)DAT_055d6ea0] = &DAT_055d6ecc;
                  iVar12 = (int)DAT_055d6ea0 + 1;
                  DAT_055d6ea0 = CONCAT44(DAT_055d6ea0._4_4_,iVar12);
                  iVar14 = DAT_055d6ea0._4_4_;
                }
                uVar3 = crc32b(uVar2,0x8d,0x4c11db7);
                uVar3 = crc32b(uVar3,0x97,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8d,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8a,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
                uVar3 = crc32b(uVar3,0x90,0x4c11db7);
                uVar15 = crc32b(uVar3,0x83,0x4c11db7);
                DAT_055d6ed4 = CONCAT44(1,~uVar15);
                if (iVar12 < iVar14) {
                  DAT_055d6ea8[iVar12] = &DAT_055d6ed4;
                  iVar12 = (int)DAT_055d6ea0 + 1;
                  DAT_055d6ea0 = CONCAT44(DAT_055d6ea0._4_4_,iVar12);
                }
                puVar26 = DAT_055d6ea8;
                if (1 < iVar12) {
                  uVar19 = 0;
                  uVar15 = iVar12 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar19) break;
                    puVar16 = (uint *)puVar26[uVar19];
                    uVar13 = (ulong)uVar19;
                    if ((uVar15 - uVar19 & 1) == 0) {
                      uVar21 = uVar13;
                      puVar24 = puVar16;
                    }
                    else {
                      uVar21 = uVar13 + 1;
                      puVar24 = (uint *)puVar26[uVar21];
                      if (((puVar16 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar24 < *puVar16)) {
                        puVar26[uVar21] = puVar16;
                        puVar26[uVar13] = puVar24;
                        puVar24 = puVar16;
                      }
                    }
                    uVar25 = (ulong)uVar15;
                    uVar15 = uVar19;
                    if (~uVar13 + uVar25 != 0) {
                      puVar20 = puVar26 + uVar21 + 1;
                      do {
                        puVar16 = (uint *)*puVar20;
                        uVar23 = (uint)uVar21;
                        if (((puVar24 == (uint *)0x0) || (puVar16 == (uint *)0x0)) ||
                           (*puVar24 <= *puVar16)) {
                          puVar22 = (uint *)puVar20[1];
                          if (puVar16 != (uint *)0x0) goto LAB_029614d0;
LAB_02961480:
                          puVar16 = puVar22;
                        }
                        else {
                          puVar20[-1] = puVar16;
                          *puVar20 = puVar24;
                          puVar22 = (uint *)puVar20[1];
                          puVar16 = puVar24;
                          uVar15 = uVar23;
                          if (puVar24 == (uint *)0x0) goto LAB_02961480;
LAB_029614d0:
                          if ((puVar22 == (uint *)0x0) || (*puVar16 <= *puVar22)) goto LAB_02961480;
                          uVar15 = uVar23 + 1;
                          *puVar20 = puVar22;
                          puVar20[1] = puVar16;
                        }
                        uVar21 = uVar21 + 2;
                        puVar20 = puVar20 + 2;
                        puVar24 = puVar16;
                      } while (uVar25 != uVar21);
                    }
                    if ((int)uVar15 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar15;
                    puVar16 = (uint *)puVar26[uVar15];
                    uVar19 = uVar15;
                    do {
                      puVar24 = (uint *)puVar26[uVar21 - 1];
                      if (((puVar16 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar16 < *puVar24)) {
                        uVar19 = (uint)uVar21;
                        puVar26[uVar21 - 1] = puVar16;
                        puVar26[uVar21] = puVar24;
                        puVar24 = puVar16;
                      }
                      uVar21 = uVar21 - 1;
                      puVar16 = puVar24;
                    } while ((long)uVar13 < (long)uVar21);
                  } while (uVar19 != uVar15);
                }
                DAT_055d6e9c = '\x01';
              }
              else if (DAT_055d6e9c != '\x01') goto LAB_02961518;
              if ((int)DAT_055d6ea0 == 0) goto LAB_02961518;
              if ((int)DAT_055d6ea0 < 2) {
                uVar15 = 0;
                puVar16 = (uint *)*DAT_055d6ea8;
                if (puVar16 != (uint *)0x0) goto LAB_02961370;
LAB_029614fc:
                uVar19 = uVar15;
                if (uVar15 < 2) {
LAB_02961508:
                  uVar15 = *(uint *)(DAT_055d6ea8[uVar19] + 4);
                  if (uVar15 < 2) {
                    DAT_055d6e90 = '\x01';
                    DAT_055d6e94 = uVar18;
                    DAT_055d6e98 = uVar15;
                    goto LAB_0296151c;
                  }
                }
              }
              else {
                uVar15 = 0;
                iVar12 = (int)DAT_055d6ea0 + -1;
                do {
                  iVar14 = iVar12 + uVar15;
                  if (iVar14 < 0 != SCARRY4(iVar12,uVar15)) {
                    iVar14 = iVar14 + 1;
                  }
                  uVar19 = iVar14 >> 1;
                  if ((uint *)DAT_055d6ea8[(int)uVar19] == (uint *)0x0) goto LAB_02961380;
                  uVar23 = *(uint *)DAT_055d6ea8[(int)uVar19];
                  if (uVar23 == uVar18) goto LAB_02961380;
                  if (uVar23 < uVar18) {
                    uVar15 = uVar19 + 1;
                  }
                  else {
                    iVar12 = uVar19 - 1;
                  }
                } while ((int)uVar15 < iVar12);
                puVar16 = (uint *)DAT_055d6ea8[(int)uVar15];
                if (puVar16 == (uint *)0x0) goto LAB_029614fc;
LAB_02961370:
                uVar19 = uVar15;
                if (*puVar16 == uVar18) {
LAB_02961380:
                  if (1 < uVar19) goto LAB_02961518;
                  goto LAB_02961508;
                }
              }
LAB_02961518:
              uVar15 = 0;
            }
          }
          else {
            if ((DAT_055d6d60 & 1) == 0) {
              DAT_055d6d60 = 1;
              DAT_055d6e04 = 0xffffffff;
              DAT_055d6d64 = 0xffffffffffffffff;
              DAT_055d6d6c = 0xffffffffffffffff;
              DAT_055d6d74 = 0xffffffffffffffff;
              DAT_055d6d7c = 0xffffffffffffffff;
              DAT_055d6d84 = 0xffffffffffffffff;
              DAT_055d6d8c = 0xffffffffffffffff;
              DAT_055d6d94 = 0xffffffffffffffff;
              DAT_055d6d9c = 0xffffffffffffffff;
              DAT_055d6da4 = 0xffffffffffffffff;
              DAT_055d6dac = 0xffffffffffffffff;
              DAT_055d6db4 = 0xffffffffffffffff;
              DAT_055d6dbc = 0xffffffffffffffff;
              DAT_055d6dc4 = 0xffffffffffffffff;
              DAT_055d6dcc = 0xffffffffffffffff;
              DAT_055d6dd4 = 0xffffffffffffffff;
              DAT_055d6ddc = 0xffffffffffffffff;
              DAT_055d6de4 = 0xffffffffffffffff;
              DAT_055d6dec = 0xffffffffffffffff;
              DAT_055d6df4 = 0xffffffffffffffff;
              DAT_055d6dfc = 0xffffffffffffffff;
              uVar13 = 0xffffffff;
LAB_02961110:
              if (puVar1 == puVar16) goto LAB_02961118;
              do {
                if (uVar13 != 0xffffffff) goto LAB_029611f0;
                lVar9 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar16)) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar1 + (lVar9 - (long)puVar16);
                if (lVar9 == 0) goto LAB_029611f0;
                uVar13 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar16));
                DAT_055d6d64 = CONCAT44(DAT_055d6d64._4_4_,0xfffffffe);
                if (uVar13 == 0) goto LAB_029611f0;
                puVar24 = (uint *)(lVar9 + 4);
                while (puVar24[-1] != 0x64330cb0) {
                  puVar24 = puVar24 + 2;
                  uVar13 = uVar13 - 1;
                  if (uVar13 == 0) goto LAB_029611f0;
                }
                uVar13 = (ulong)*puVar24;
                uVar21 = 0;
                if (*puVar24 != 0xffffffff) {
                  uVar21 = uVar13;
                }
                DAT_055d6d64 = CONCAT44(DAT_055d6d64._4_4_,(int)uVar21);
              } while ((int)uVar21 < 0);
              puVar24 = (uint *)((long)puVar1 + uVar21);
              if (puVar24 != (uint *)0x0) goto LAB_029610cc;
LAB_029611f0:
              uVar18 = 0;
              if (puVar1 != puVar16) goto LAB_029611fc;
              goto LAB_0296111c;
            }
            uVar13 = DAT_055d6d64 & 0xffffffff;
            if ((int)DAT_055d6d64 < 0) goto LAB_02961110;
            puVar24 = (uint *)((long)puVar1 + (DAT_055d6d64 & 0xffffffff));
            if (puVar24 == (uint *)0x0) goto LAB_029611f0;
LAB_029610cc:
            uVar18 = *puVar24;
            if (puVar1 == puVar16) goto LAB_0296111c;
LAB_029611fc:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar16)) == '\0') goto LAB_0296111c;
            if ((DAT_055d6e38 == '\x01') && (DAT_055d6e3c == uVar18)) {
              uVar15 = DAT_055d6e40;
              if (1 < DAT_055d6e40) goto LAB_0296188c;
            }
            else {
              if (((DAT_055d6e68 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_055d6e68), iVar12 != 0)) {
                DAT_055d6e48 = 0x200000000;
                DAT_055d6e50 = &DAT_055d6e58;
                __cxa_guard_release(&DAT_055d6e68);
              }
              if ((DAT_055d6e70 & 1) == 0) {
                DAT_055d6e70 = 1;
                if (((DAT_055d6e88 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_055d6e88), iVar12 != 0)) {
                  _DAT_055d6e74 = 0xffffffff00000000;
                  DAT_055d6e7c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6e88);
                }
                _DAT_055d6e74 = (ulong)~uVar6;
                iVar12 = (int)DAT_055d6e48;
                iVar14 = DAT_055d6e48._4_4_;
                if ((int)DAT_055d6e48 < DAT_055d6e48._4_4_) {
                  *(undefined4 **)(DAT_055d6e50 + (long)(int)DAT_055d6e48 * 8) = &DAT_055d6e74;
                  iVar12 = (int)DAT_055d6e48 + 1;
                  DAT_055d6e48 = CONCAT44(DAT_055d6e48._4_4_,iVar12);
                  iVar14 = DAT_055d6e48._4_4_;
                }
                DAT_055d6e7c = CONCAT44(1,~uVar7);
                if (iVar12 < iVar14) {
                  *(undefined8 **)(DAT_055d6e50 + (long)iVar12 * 8) = &DAT_055d6e7c;
                  iVar12 = (int)DAT_055d6e48 + 1;
                  DAT_055d6e48 = CONCAT44(DAT_055d6e48._4_4_,iVar12);
                }
                puVar11 = DAT_055d6e50;
                if (1 < iVar12) {
                  uVar19 = 0;
                  uVar15 = iVar12 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar19) break;
                    puVar16 = *(uint **)(puVar11 + (ulong)uVar19 * 8);
                    uVar13 = (ulong)uVar19;
                    if ((uVar15 - uVar19 & 1) == 0) {
                      uVar21 = uVar13;
                      puVar24 = puVar16;
                    }
                    else {
                      uVar21 = uVar13 + 1;
                      puVar24 = *(uint **)(puVar11 + uVar21 * 8);
                      if (((puVar16 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar24 < *puVar16)) {
                        *(uint **)(puVar11 + uVar21 * 8) = puVar16;
                        *(uint **)(puVar11 + uVar13 * 8) = puVar24;
                        puVar24 = puVar16;
                      }
                    }
                    uVar25 = (ulong)uVar15;
                    uVar15 = uVar19;
                    if (~uVar13 + uVar25 != 0) {
                      puVar26 = (undefined8 *)(puVar11 + uVar21 * 8 + 8);
                      do {
                        puVar16 = (uint *)*puVar26;
                        uVar23 = (uint)uVar21;
                        if (((puVar24 == (uint *)0x0) || (puVar16 == (uint *)0x0)) ||
                           (*puVar24 <= *puVar16)) {
                          puVar22 = (uint *)puVar26[1];
                          if (puVar16 != (uint *)0x0) goto LAB_02961830;
LAB_029617e0:
                          puVar16 = puVar22;
                        }
                        else {
                          puVar26[-1] = puVar16;
                          *puVar26 = puVar24;
                          puVar22 = (uint *)puVar26[1];
                          puVar16 = puVar24;
                          uVar15 = uVar23;
                          if (puVar24 == (uint *)0x0) goto LAB_029617e0;
LAB_02961830:
                          if ((puVar22 == (uint *)0x0) || (*puVar16 <= *puVar22)) goto LAB_029617e0;
                          uVar15 = uVar23 + 1;
                          *puVar26 = puVar22;
                          puVar26[1] = puVar16;
                        }
                        uVar21 = uVar21 + 2;
                        puVar26 = puVar26 + 2;
                        puVar24 = puVar16;
                      } while (uVar25 != uVar21);
                    }
                    if ((int)uVar15 <= (int)uVar19) break;
                    uVar21 = (ulong)uVar15;
                    puVar16 = *(uint **)(puVar11 + (ulong)uVar15 * 8);
                    uVar19 = uVar15;
                    do {
                      puVar24 = *(uint **)(puVar11 + uVar21 * 8 + -8);
                      if (((puVar16 != (uint *)0x0) && (puVar24 != (uint *)0x0)) &&
                         (*puVar16 < *puVar24)) {
                        uVar19 = (uint)uVar21;
                        *(uint **)(puVar11 + uVar21 * 8 + -8) = puVar16;
                        *(uint **)(puVar11 + uVar21 * 8) = puVar24;
                        puVar24 = puVar16;
                      }
                      uVar21 = uVar21 - 1;
                      puVar16 = puVar24;
                    } while ((long)uVar13 < (long)uVar21);
                  } while (uVar19 != uVar15);
                }
                DAT_055d6e44 = '\x01';
              }
              else if (DAT_055d6e44 != '\x01') goto LAB_0296188c;
              if ((int)DAT_055d6e48 != 0) {
                if ((int)DAT_055d6e48 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  iVar12 = (int)DAT_055d6e48 + -1;
                  do {
                    iVar14 = iVar12 + uVar15;
                    if (iVar14 < 0 != SCARRY4(iVar12,uVar15)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar19 = iVar14 >> 1;
                    if (*(uint **)(DAT_055d6e50 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto LAB_02961874;
                    uVar23 = **(uint **)(DAT_055d6e50 + (long)(int)uVar19 * 8);
                    if (uVar23 == uVar18) goto LAB_02961874;
                    if (uVar23 < uVar18) {
                      uVar15 = uVar19 + 1;
                    }
                    else {
                      iVar12 = uVar19 - 1;
                    }
                  } while ((int)uVar15 < iVar12);
                }
                uVar19 = uVar15;
                if ((*(uint **)(DAT_055d6e50 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055d6e50 + (long)(int)uVar15 * 8) == uVar18)) {
LAB_02961874:
                  if ((uVar19 < 2) &&
                     (uVar15 = *(uint *)(*(long *)(DAT_055d6e50 + (ulong)uVar19 * 8) + 4),
                     uVar15 < 2)) {
                    DAT_055d6e38 = '\x01';
                    DAT_055d6e3c = uVar18;
                    DAT_055d6e40 = uVar15;
                    goto LAB_02961890;
                  }
                }
              }
LAB_0296188c:
              uVar15 = 0;
            }
LAB_02961890:
          }
LAB_0296151c:
          puVar16 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar16 != (uint *)0x0)) &&
             ((*puVar16 != 0 &&
              ((uVar18 = puVar16[1], uVar18 != 0 && ((ulong)(ushort)puVar16[2] != 0)))))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar16 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar16 + lVar9 + (ulong)(ushort)puVar16[2] * 8;
            if (lVar9 != 0) {
              uVar19 = 0;
              if ((ulong)uVar18 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar9) / (ulong)uVar18);
              }
              if (*puVar16 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < DAT_055d6e28) {
                *(short *)(DAT_055d6e30 + (long)(int)uVar19 * 2) = (short)uVar15;
              }
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar10);
  }
  return;
}

