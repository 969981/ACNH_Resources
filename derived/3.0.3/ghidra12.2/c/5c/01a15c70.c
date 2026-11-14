
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a15c70(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  undefined2 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint *puVar24;
  long lVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar7 = *param_1, uVar7 != 0)) {
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,0x75,0x4c11db7);
    uVar28 = 0;
    uVar2 = crc32b(uVar2,0x74,0x4c11db7);
    uVar3 = crc32b(uVar3,0x74,0x4c11db7);
    uVar4 = crc32b(uVar2,0x68,0x4c11db7);
    uVar5 = crc32b(uVar3,0x68,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar2,0x8c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x97,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8d,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8a,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
    uVar3 = crc32b(uVar3,0x90,0x4c11db7);
    uVar6 = crc32b(uVar3,0x83,0x4c11db7);
    puVar19 = (uint *)PTR_DAT_04bbec80;
    do {
      if (uVar28 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar13 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar13 = 0x1c;
            }
            puVar1 = (uint *)((ulong)(param_1[1] * uVar28 + (uint)(ushort)param_1[2] * 8 + iVar13) +
                             (long)param_1);
            if (puVar1 != (uint *)0x0) {
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbec78;
                do {
                  if (cVar9 == '\0') {
                    cVar9 = '\x01';
                    *PTR_DAT_04bbec78 = 1;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                  }
                  else {
                    uVar12 = *puVar19;
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_01a15ed0;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_01a15ed0;
                  lVar25 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar25 = 0x1c;
                  }
                  lVar25 = (long)puVar1 + (lVar25 - (long)puVar21);
                  if (lVar25 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  *puVar19 = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar25 + 4);
                  while (puVar21[-1] != 0x64330cb0) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_01a15ecc;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  *puVar19 = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_01a15ecc:
              uVar26 = 0;
LAB_01a15ed0:
              if (((*puVar1 == 0) || (lVar25 = (long)puVar1 - (ulong)*puVar1, lVar25 == 0)) ||
                 (*(char *)(lVar25 + 0xb) == '\0')) {
                if ((DAT_052d1f70 == '\x01') && (DAT_052d1f74 == uVar26)) {
                  uVar12 = DAT_052d1f78;
                  if (1 < DAT_052d1f78) goto LAB_01a16104;
                }
                else {
                  if ((DAT_052d1fa0 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_052d1fa0);
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if (iVar13 != 0) {
                      DAT_052d1f80 = 0x200000000;
                      DAT_052d1f88 = (undefined8 *)&DAT_052d1f90;
                      __cxa_guard_release(&DAT_052d1fa0);
                      puVar19 = (uint *)PTR_DAT_04bbec80;
                    }
                  }
                  if ((DAT_052d1fa8 & 1) == 0) {
                    DAT_052d1fa8 = 1;
                    if (((DAT_052d1fc0 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_052d1fc0), iVar13 != 0)) {
                      _DAT_052d1fac = 0xffffffff00000000;
                      DAT_052d1fb4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_052d1fc0);
                    }
                    _DAT_052d1fac = (ulong)~uVar6;
                    iVar13 = (int)DAT_052d1f80;
                    iVar11 = DAT_052d1f80._4_4_;
                    if ((int)DAT_052d1f80 < DAT_052d1f80._4_4_) {
                      DAT_052d1f88[(int)DAT_052d1f80] = &DAT_052d1fac;
                      iVar13 = (int)DAT_052d1f80 + 1;
                      DAT_052d1f80 = CONCAT44(DAT_052d1f80._4_4_,iVar13);
                      iVar11 = DAT_052d1f80._4_4_;
                    }
                    uVar3 = crc32b(uVar2,0x8d,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x97,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x8d,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x8a,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x90,0x4c11db7);
                    uVar12 = crc32b(uVar3,0x83,0x4c11db7);
                    DAT_052d1fb4 = CONCAT44(1,~uVar12);
                    if (iVar13 < iVar11) {
                      DAT_052d1f88[iVar13] = &DAT_052d1fb4;
                      iVar13 = (int)DAT_052d1f80 + 1;
                      DAT_052d1f80 = CONCAT44(DAT_052d1f80._4_4_,iVar13);
                    }
                    puVar23 = DAT_052d1f88;
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01a16280;
LAB_01a16230:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01a16230;
LAB_01a16280:
                              if (puVar24 == (uint *)0x0) goto LAB_01a16230;
                              if (*puVar19 <= *puVar24) goto LAB_01a16230;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_052d1f7c = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                  }
                  else if (DAT_052d1f7c != '\x01') goto LAB_01a16104;
                  if ((int)DAT_052d1f80 == 0) {
LAB_01a16104:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if ((int)DAT_052d1f80 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_052d1f88;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01a160d0;
joined_r0x01a162b4:
                      if (uVar12 < 2) {
                        uVar12 = *(uint *)(DAT_052d1f88[uVar12] + 4);
                        if (uVar12 < 2) {
                          DAT_052d1f70 = '\x01';
                          DAT_052d1f74 = uVar26;
                          DAT_052d1f78 = uVar12;
                          goto LAB_01a165ec;
                        }
                        goto LAB_01a16104;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_052d1f80 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_052d1f88[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01a162b4;
                        uVar16 = *(uint *)DAT_052d1f88[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01a162b4;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_052d1f88[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01a162b4;
LAB_01a160d0:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01a162b4;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_052d1f18 == '\x01') && (DAT_052d1f1c == uVar26)) {
                  uVar12 = DAT_052d1f20;
                  if (1 < DAT_052d1f20) goto LAB_01a16580;
                }
                else {
                  if ((DAT_052d1f48 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_052d1f48);
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if (iVar13 != 0) {
                      DAT_052d1f28 = 0x200000000;
                      DAT_052d1f30 = &DAT_052d1f38;
                      __cxa_guard_release(&DAT_052d1f48);
                      puVar19 = (uint *)PTR_DAT_04bbec80;
                    }
                  }
                  if ((DAT_052d1f50 & 1) == 0) {
                    DAT_052d1f50 = 1;
                    if (((DAT_052d1f68 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_052d1f68), iVar13 != 0)) {
                      _DAT_052d1f54 = 0xffffffff00000000;
                      DAT_052d1f5c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_052d1f68);
                    }
                    _DAT_052d1f54 = (ulong)~uVar4;
                    iVar13 = (int)DAT_052d1f28;
                    iVar11 = DAT_052d1f28._4_4_;
                    if ((int)DAT_052d1f28 < DAT_052d1f28._4_4_) {
                      *(undefined4 **)(DAT_052d1f30 + (long)(int)DAT_052d1f28 * 8) = &DAT_052d1f54;
                      iVar13 = (int)DAT_052d1f28 + 1;
                      DAT_052d1f28 = CONCAT44(DAT_052d1f28._4_4_,iVar13);
                      iVar11 = DAT_052d1f28._4_4_;
                    }
                    DAT_052d1f5c = CONCAT44(1,~uVar5);
                    if (iVar13 < iVar11) {
                      *(undefined8 **)(DAT_052d1f30 + (long)iVar13 * 8) = &DAT_052d1f5c;
                      iVar13 = (int)DAT_052d1f28 + 1;
                      DAT_052d1f28 = CONCAT44(DAT_052d1f28._4_4_,iVar13);
                    }
                    puVar8 = DAT_052d1f30;
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01a16520;
LAB_01a164d0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01a164d0;
LAB_01a16520:
                              if (puVar24 == (uint *)0x0) goto LAB_01a164d0;
                              if (*puVar19 <= *puVar24) goto LAB_01a164d0;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_052d1f24 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                  }
                  else if (DAT_052d1f24 != '\x01') goto LAB_01a16580;
                  if ((int)DAT_052d1f28 == 0) {
LAB_01a16580:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if ((int)DAT_052d1f28 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_052d1f28 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_052d1f30 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01a165b0;
                        uVar16 = **(uint **)(DAT_052d1f30 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01a165b0;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_052d1f30 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_052d1f30 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01a165b0:
                      if (uVar17 < 2) {
                        uVar12 = *(uint *)(*(long *)(DAT_052d1f30 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 2) {
                          DAT_052d1f18 = '\x01';
                          DAT_052d1f1c = uVar26;
                          DAT_052d1f20 = uVar12;
                          goto LAB_01a165e4;
                        }
                        goto LAB_01a16580;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01a165e4:
              }
LAB_01a165ec:
              puVar8 = PTR_DAT_04bbec80;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar25 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar25 = 0x1c;
                      }
                      lVar25 = (long)puVar21 + lVar25 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar25 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar25) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < DAT_052d1f08) {
                          *(short *)(DAT_052d1f10 + (long)(int)uVar17 * 2) = (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbec78;
                do {
                  if (cVar9 == '\0') {
                    cVar9 = '\x01';
                    *PTR_DAT_04bbec78 = 1;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                  }
                  else {
                    uVar12 = puVar19[1];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_01a16760;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_01a16760;
                  lVar25 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar25 = 0x1c;
                  }
                  lVar25 = (long)puVar1 + (lVar25 - (long)puVar21);
                  if (lVar25 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[1] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar25 + 4);
                  while (puVar21[-1] != 0xa103c985) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_01a1675c;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  puVar19[1] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_01a1675c:
              uVar26 = 0;
LAB_01a16760:
              if (((*puVar1 == 0) || (lVar25 = (long)puVar1 - (ulong)*puVar1, lVar25 == 0)) ||
                 (*(char *)(lVar25 + 0xb) == '\0')) {
                if ((DAT_052d2070 == '\x01') && (DAT_052d2074 == uVar26)) {
                  uVar12 = DAT_052d2078;
                  if (6 < DAT_052d2078) goto LAB_01a16a24;
                }
                else {
                  if ((DAT_052d20c8 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_052d20c8);
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if (iVar13 != 0) {
                      DAT_052d2080 = 0x700000000;
                      DAT_052d2088 = (undefined8 *)&DAT_052d2090;
                      __cxa_guard_release(&DAT_052d20c8);
                      puVar19 = (uint *)PTR_DAT_04bbec80;
                    }
                  }
                  if ((DAT_052d20d0 & 1) == 0) {
                    DAT_052d20d0 = 1;
                    if (((DAT_052d2110 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_052d2110), iVar13 != 0)) {
                      DAT_052d2104 = 0xffffffff00000000;
                      DAT_052d20d4 = 0xffffffff00000000;
                      DAT_052d20dc = 0xffffffff00000000;
                      DAT_052d20e4 = 0xffffffff00000000;
                      DAT_052d20ec = 0xffffffff00000000;
                      DAT_052d20f4 = 0xffffffff00000000;
                      DAT_052d20fc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_052d2110);
                    }
                    lVar25 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_049fa2e8)[lVar25];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01a168b4:
                            iVar13 = (int)lVar14;
joined_r0x01a168b8:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01a168c0;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01a168b4;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01a168b8;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01a168c0:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_052d20d4 + lVar25) = uVar17;
                      *(int *)((long)&DAT_052d20d4 + lVar25 * 8 + 4) = (int)lVar25;
                      iVar13 = (int)DAT_052d2080;
                      if ((int)DAT_052d2080 < DAT_052d2080._4_4_) {
                        DAT_052d2088[(int)DAT_052d2080] = &DAT_052d20d4 + lVar25;
                        iVar13 = (int)DAT_052d2080 + 1;
                        DAT_052d2080 = CONCAT44(DAT_052d2080._4_4_,iVar13);
                      }
                      puVar23 = DAT_052d2088;
                      lVar25 = lVar25 + 1;
                    } while (lVar25 != 7);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01a16ba0;
LAB_01a16b50:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01a16b50;
LAB_01a16ba0:
                              if (puVar24 == (uint *)0x0) goto LAB_01a16b50;
                              if (*puVar19 <= *puVar24) goto LAB_01a16b50;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_052d207c = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                  }
                  else if (DAT_052d207c != '\x01') goto LAB_01a16a24;
                  if ((int)DAT_052d2080 == 0) {
LAB_01a16a24:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if ((int)DAT_052d2080 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_052d2088;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01a169f0;
joined_r0x01a16a04:
                      if (uVar12 < 7) {
                        uVar12 = *(uint *)(DAT_052d2088[uVar12] + 4);
                        if (uVar12 < 7) {
                          DAT_052d2070 = '\x01';
                          DAT_052d2074 = uVar26;
                          DAT_052d2078 = uVar12;
                          goto LAB_01a16fdc;
                        }
                        goto LAB_01a16a24;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_052d2080 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_052d2088[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01a16a04;
                        uVar16 = *(uint *)DAT_052d2088[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01a16a04;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_052d2088[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01a16a04;
LAB_01a169f0:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01a16a04;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_052d1fc8 == '\x01') && (DAT_052d1fcc == uVar26)) {
                  uVar12 = DAT_052d1fd0;
                  if (6 < DAT_052d1fd0) goto LAB_01a16f70;
                }
                else {
                  if ((DAT_052d2020 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_052d2020);
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if (iVar13 != 0) {
                      DAT_052d1fd8 = 0x700000000;
                      DAT_052d1fe0 = &DAT_052d1fe8;
                      __cxa_guard_release(&DAT_052d2020);
                      puVar19 = (uint *)PTR_DAT_04bbec80;
                    }
                  }
                  if ((DAT_052d2028 & 1) == 0) {
                    DAT_052d2028 = 1;
                    if (((DAT_052d2068 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_052d2068), iVar13 != 0)) {
                      DAT_052d205c = 0xffffffff00000000;
                      DAT_052d202c = 0xffffffff00000000;
                      DAT_052d2034 = 0xffffffff00000000;
                      DAT_052d203c = 0xffffffff00000000;
                      DAT_052d2044 = 0xffffffff00000000;
                      DAT_052d204c = 0xffffffff00000000;
                      DAT_052d2054 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_052d2068);
                    }
                    lVar25 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_s_AlwaysAppear_049fa1d8)[lVar25];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01a16c94:
                            iVar13 = (int)lVar14;
joined_r0x01a16c98:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01a16ca0;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01a16c94;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01a16c98;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01a16ca0:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_052d202c + lVar25) = uVar17;
                      *(int *)((long)&DAT_052d202c + lVar25 * 8 + 4) = (int)lVar25;
                      iVar13 = (int)DAT_052d1fd8;
                      if ((int)DAT_052d1fd8 < DAT_052d1fd8._4_4_) {
                        *(undefined8 **)(DAT_052d1fe0 + (long)(int)DAT_052d1fd8 * 8) =
                             &DAT_052d202c + lVar25;
                        iVar13 = (int)DAT_052d1fd8 + 1;
                        DAT_052d1fd8 = CONCAT44(DAT_052d1fd8._4_4_,iVar13);
                      }
                      puVar8 = DAT_052d1fe0;
                      lVar25 = lVar25 + 1;
                    } while (lVar25 != 7);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01a16f10;
LAB_01a16ec0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01a16ec0;
LAB_01a16f10:
                              if (puVar24 == (uint *)0x0) goto LAB_01a16ec0;
                              if (*puVar19 <= *puVar24) goto LAB_01a16ec0;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_052d1fd4 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                  }
                  else if (DAT_052d1fd4 != '\x01') goto LAB_01a16f70;
                  if ((int)DAT_052d1fd8 == 0) {
LAB_01a16f70:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if ((int)DAT_052d1fd8 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_052d1fd8 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_052d1fe0 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01a16fa0;
                        uVar16 = **(uint **)(DAT_052d1fe0 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01a16fa0;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_052d1fe0 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_052d1fe0 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01a16fa0:
                      if (uVar17 < 7) {
                        uVar12 = *(uint *)(*(long *)(DAT_052d1fe0 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 7) {
                          DAT_052d1fc8 = '\x01';
                          DAT_052d1fcc = uVar26;
                          DAT_052d1fd0 = uVar12;
                          goto LAB_01a16fd4;
                        }
                        goto LAB_01a16f70;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01a16fd4:
              }
LAB_01a16fdc:
              puVar8 = PTR_DAT_04bbec80;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar25 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar25 = 0x1c;
                      }
                      lVar25 = (long)puVar21 + lVar25 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar25 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar25) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < *(uint *)PTR_DAT_04bbfc68) {
                          *(short *)(*(long *)(PTR_DAT_04bbfc68 + 8) + (long)(int)uVar17 * 2) =
                               (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbec78;
                do {
                  if (cVar9 == '\0') {
                    cVar9 = '\x01';
                    *PTR_DAT_04bbec78 = 1;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                  }
                  else {
                    uVar12 = puVar19[3];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_01a17150;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_01a17150;
                  lVar25 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar25 = 0x1c;
                  }
                  lVar25 = (long)puVar1 + (lVar25 - (long)puVar21);
                  if (lVar25 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[3] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar25 + 4);
                  while (puVar21[-1] != 0x9b7aa0a0) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_01a1714c;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  puVar19[3] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_01a1714c:
              uVar26 = 0;
LAB_01a17150:
              if (((*puVar1 == 0) || (lVar25 = (long)puVar1 - (ulong)*puVar1, lVar25 == 0)) ||
                 (*(char *)(lVar25 + 0xb) == '\0')) {
                if ((DAT_052d2350 == '\x01') && (DAT_052d2354 == uVar26)) {
                  uVar12 = DAT_052d2358;
                  if (0x1f < DAT_052d2358) goto LAB_01a17404;
                }
                else {
                  if ((DAT_052d2470 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_052d2470);
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if (iVar13 != 0) {
                      DAT_052d2360 = 0x2000000000;
                      DAT_052d2368 = (undefined8 *)&DAT_052d2370;
                      __cxa_guard_release(&DAT_052d2470);
                      puVar19 = (uint *)PTR_DAT_04bbec80;
                    }
                  }
                  if ((DAT_052d2478 & 1) == 0) {
                    DAT_052d2478 = 1;
                    if (((DAT_052d2580 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_052d2580), iVar13 != 0)) {
                      DAT_052d247c = 0xffffffff00000000;
                      DAT_052d2484 = 0xffffffff00000000;
                      DAT_052d248c = 0xffffffff00000000;
                      DAT_052d2494 = 0xffffffff00000000;
                      DAT_052d249c = 0xffffffff00000000;
                      DAT_052d24a4 = 0xffffffff00000000;
                      DAT_052d24ac = 0xffffffff00000000;
                      DAT_052d24b4 = 0xffffffff00000000;
                      DAT_052d24bc = 0xffffffff00000000;
                      DAT_052d24c4 = 0xffffffff00000000;
                      DAT_052d24cc = 0xffffffff00000000;
                      DAT_052d24d4 = 0xffffffff00000000;
                      DAT_052d24dc = 0xffffffff00000000;
                      DAT_052d24e4 = 0xffffffff00000000;
                      DAT_052d24ec = 0xffffffff00000000;
                      DAT_052d24f4 = 0xffffffff00000000;
                      DAT_052d24fc = 0xffffffff00000000;
                      DAT_052d2504 = 0xffffffff00000000;
                      DAT_052d250c = 0xffffffff00000000;
                      DAT_052d2514 = 0xffffffff00000000;
                      DAT_052d251c = 0xffffffff00000000;
                      DAT_052d2524 = 0xffffffff00000000;
                      DAT_052d252c = 0xffffffff00000000;
                      DAT_052d2534 = 0xffffffff00000000;
                      DAT_052d253c = 0xffffffff00000000;
                      DAT_052d2544 = 0xffffffff00000000;
                      DAT_052d254c = 0xffffffff00000000;
                      DAT_052d2554 = 0xffffffff00000000;
                      DAT_052d255c = 0xffffffff00000000;
                      DAT_052d2564 = 0xffffffff00000000;
                      DAT_052d256c = 0xffffffff00000000;
                      DAT_052d2574 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_052d2580);
                    }
                    lVar25 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_049fa478)[lVar25];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01a17298:
                            iVar13 = (int)lVar14;
joined_r0x01a1729c:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01a172a4;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01a17298;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01a1729c;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01a172a4:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_052d247c + lVar25) = uVar17;
                      *(int *)((long)&DAT_052d247c + lVar25 * 8 + 4) = (int)lVar25;
                      iVar13 = (int)DAT_052d2360;
                      if ((int)DAT_052d2360 < DAT_052d2360._4_4_) {
                        DAT_052d2368[(int)DAT_052d2360] = &DAT_052d247c + lVar25;
                        iVar13 = (int)DAT_052d2360 + 1;
                        DAT_052d2360 = CONCAT44(DAT_052d2360._4_4_,iVar13);
                      }
                      puVar23 = DAT_052d2368;
                      lVar25 = lVar25 + 1;
                    } while (lVar25 != 0x20);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01a17580;
LAB_01a17530:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01a17530;
LAB_01a17580:
                              if (puVar24 == (uint *)0x0) goto LAB_01a17530;
                              if (*puVar19 <= *puVar24) goto LAB_01a17530;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_052d235c = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                  }
                  else if (DAT_052d235c != '\x01') goto LAB_01a17404;
                  if ((int)DAT_052d2360 == 0) {
LAB_01a17404:
                    uVar12 = 2;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if ((int)DAT_052d2360 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_052d2368;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01a173d0;
joined_r0x01a173e4:
                      if (uVar12 < 0x20) {
                        uVar12 = *(uint *)(DAT_052d2368[uVar12] + 4);
                        if (uVar12 < 0x20) {
                          DAT_052d2350 = '\x01';
                          DAT_052d2354 = uVar26;
                          DAT_052d2358 = uVar12;
                          goto LAB_01a17974;
                        }
                        goto LAB_01a17404;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_052d2360 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_052d2368[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01a173e4;
                        uVar16 = *(uint *)DAT_052d2368[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01a173e4;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_052d2368[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01a173e4;
LAB_01a173d0:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01a173e4;
                    }
                    uVar12 = 2;
                  }
                }
LAB_01a17974:
                uVar10 = (undefined2)uVar12;
              }
              else {
                if ((DAT_052d2118 == '\x01') && (DAT_052d211c == uVar26)) {
                  uVar12 = DAT_052d2120;
                  if (0x1f < DAT_052d2120) goto LAB_01a17950;
                }
                else {
                  if ((DAT_052d2238 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_052d2238);
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if (iVar13 != 0) {
                      DAT_052d2128 = 0x2000000000;
                      DAT_052d2130 = &DAT_052d2138;
                      __cxa_guard_release(&DAT_052d2238);
                      puVar19 = (uint *)PTR_DAT_04bbec80;
                    }
                  }
                  if ((DAT_052d2240 & 1) == 0) {
                    DAT_052d2240 = 1;
                    if (((DAT_052d2348 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_052d2348), iVar13 != 0)) {
                      DAT_052d2244 = 0xffffffff00000000;
                      DAT_052d224c = 0xffffffff00000000;
                      DAT_052d2254 = 0xffffffff00000000;
                      DAT_052d225c = 0xffffffff00000000;
                      DAT_052d2264 = 0xffffffff00000000;
                      DAT_052d226c = 0xffffffff00000000;
                      DAT_052d2274 = 0xffffffff00000000;
                      DAT_052d227c = 0xffffffff00000000;
                      DAT_052d2284 = 0xffffffff00000000;
                      DAT_052d228c = 0xffffffff00000000;
                      DAT_052d2294 = 0xffffffff00000000;
                      DAT_052d229c = 0xffffffff00000000;
                      DAT_052d22a4 = 0xffffffff00000000;
                      DAT_052d22ac = 0xffffffff00000000;
                      DAT_052d22b4 = 0xffffffff00000000;
                      DAT_052d22bc = 0xffffffff00000000;
                      DAT_052d22c4 = 0xffffffff00000000;
                      DAT_052d22cc = 0xffffffff00000000;
                      DAT_052d22d4 = 0xffffffff00000000;
                      DAT_052d22dc = 0xffffffff00000000;
                      DAT_052d22e4 = 0xffffffff00000000;
                      DAT_052d22ec = 0xffffffff00000000;
                      DAT_052d22f4 = 0xffffffff00000000;
                      DAT_052d22fc = 0xffffffff00000000;
                      DAT_052d2304 = 0xffffffff00000000;
                      DAT_052d230c = 0xffffffff00000000;
                      DAT_052d2314 = 0xffffffff00000000;
                      DAT_052d231c = 0xffffffff00000000;
                      DAT_052d2324 = 0xffffffff00000000;
                      DAT_052d232c = 0xffffffff00000000;
                      DAT_052d2334 = 0xffffffff00000000;
                      DAT_052d233c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_052d2348);
                    }
                    lVar25 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = *(byte **)(PTR_DAT_04bbf050 + lVar25 * 8 + 0x110);
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01a17674:
                            iVar13 = (int)lVar14;
joined_r0x01a17678:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01a17680;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01a17674;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01a17678;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01a17680:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_052d2244 + lVar25) = uVar17;
                      *(int *)((long)&DAT_052d2244 + lVar25 * 8 + 4) = (int)lVar25;
                      iVar13 = (int)DAT_052d2128;
                      if ((int)DAT_052d2128 < DAT_052d2128._4_4_) {
                        *(undefined8 **)(DAT_052d2130 + (long)(int)DAT_052d2128 * 8) =
                             &DAT_052d2244 + lVar25;
                        iVar13 = (int)DAT_052d2128 + 1;
                        DAT_052d2128 = CONCAT44(DAT_052d2128._4_4_,iVar13);
                      }
                      puVar8 = DAT_052d2130;
                      lVar25 = lVar25 + 1;
                    } while (lVar25 != 0x20);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01a178f0;
LAB_01a178a0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01a178a0;
LAB_01a178f0:
                              if (puVar24 == (uint *)0x0) goto LAB_01a178a0;
                              if (*puVar19 <= *puVar24) goto LAB_01a178a0;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_052d2124 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                  }
                  else if (DAT_052d2124 != '\x01') goto LAB_01a17950;
                  if ((int)DAT_052d2128 == 0) {
LAB_01a17950:
                    uVar12 = 2;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbec80;
                    if ((int)DAT_052d2128 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_052d2128 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_052d2130 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01a17988;
                        uVar16 = **(uint **)(DAT_052d2130 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01a17988;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_052d2130 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_052d2130 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01a17988:
                      if (uVar17 < 0x20) {
                        uVar12 = *(uint *)(*(long *)(DAT_052d2130 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 0x20) {
                          DAT_052d2118 = '\x01';
                          DAT_052d211c = uVar26;
                          DAT_052d2120 = uVar12;
                          goto LAB_01a179bc;
                        }
                        goto LAB_01a17950;
                      }
                    }
                    uVar12 = 2;
                  }
                }
LAB_01a179bc:
                uVar10 = (undefined2)uVar12;
              }
              puVar8 = PTR_DAT_04bbec80;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar25 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar25 = 0x1c;
                      }
                      lVar25 = (long)puVar21 + lVar25 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar25 != 0) {
                        uVar12 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar12 = (uint)((ulong)((long)puVar1 - lVar25) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar12) {
                          uVar12 = 0xffffffff;
                        }
                        if (uVar12 < *(uint *)PTR_DAT_04bbec88) {
                          *(undefined2 *)(*(long *)(PTR_DAT_04bbec88 + 8) + (long)(int)uVar12 * 2) =
                               uVar10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar7);
  }
  return;
}

