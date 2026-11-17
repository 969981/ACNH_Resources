
void FUN_02aa67e0(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint uVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar23 = 0;
    puVar14 = (uint *)PTR_DAT_04bc4638;
    pcVar12 = PTR_DAT_04bc4630;
    do {
      if (uVar23 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar7 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar7 = 0x1c;
            }
            puVar2 = (uint *)((ulong)(param_1[1] * uVar23 + (uint)(ushort)param_1[2] * 8 + iVar7) +
                             (long)param_1);
            if (puVar2 != (uint *)0x0) {
              uVar20 = *puVar2;
              if (uVar20 != 0) {
                cVar5 = *pcVar12;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    *pcVar12 = '\x01';
                    puVar14[0] = 0xffffffff;
                    puVar14[1] = 0xffffffff;
                    puVar14[2] = 0xffffffff;
                    puVar14[3] = 0xffffffff;
                    puVar14[4] = 0xffffffff;
                    puVar14[5] = 0xffffffff;
                    puVar14[6] = 0xffffffff;
                    puVar14[7] = 0xffffffff;
                    uVar20 = *puVar2;
                  }
                  else {
                    uVar6 = *puVar14;
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar20 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_02aa6990;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar20;
                  uVar20 = 0;
                  if ((puVar16 == (uint *)0x0) || (uVar20 = 0, puVar2 == puVar16))
                  goto LAB_02aa6990;
                  lVar22 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar16)) != '\0') {
                    lVar22 = 0x1c;
                  }
                  lVar22 = (long)puVar2 + (lVar22 - (long)puVar16);
                  if (lVar22 == 0) break;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar16));
                  *puVar14 = 0xfffffffe;
                  if (uVar9 == 0) break;
                  puVar16 = (uint *)(lVar22 + 4);
                  while (puVar16[-1] != 0xa9424a50) {
                    puVar16 = puVar16 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_02aa698c;
                  }
                  uVar20 = 0;
                  if (*puVar16 != 0xffffffff) {
                    uVar20 = *puVar16;
                  }
                  *puVar14 = uVar20;
                  uVar20 = *puVar2;
                  if (uVar20 == 0) break;
                } while( true );
              }
LAB_02aa698c:
              uVar20 = 0;
LAB_02aa6990:
              if (((*puVar2 == 0) || (lVar22 = (long)puVar2 - (ulong)*puVar2, lVar22 == 0)) ||
                 (*(char *)(lVar22 + 0xb) == '\0')) {
                if ((DAT_0560b5a0 == '\x01') && (DAT_0560b5a4 == uVar20)) {
                  uVar6 = DAT_0560b5a8;
                  if (8 < DAT_0560b5a8) goto LAB_02aa6c48;
                }
                else {
                  if ((DAT_0560b608 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_0560b608);
                    puVar14 = (uint *)PTR_DAT_04bc4638;
                    pcVar12 = PTR_DAT_04bc4630;
                    if (iVar7 != 0) {
                      DAT_0560b5b0 = 0x900000000;
                      DAT_0560b5b8 = (undefined8 *)&DAT_0560b5c0;
                      __cxa_guard_release(&DAT_0560b608);
                      puVar14 = (uint *)PTR_DAT_04bc4638;
                      pcVar12 = PTR_DAT_04bc4630;
                    }
                  }
                  if ((DAT_0560b610 & 1) == 0) {
                    DAT_0560b610 = 1;
                    if (((DAT_0560b660 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_0560b660), iVar7 != 0)) {
                      DAT_0560b654 = 0xffffffff00000000;
                      DAT_0560b614 = 0xffffffff00000000;
                      DAT_0560b61c = 0xffffffff00000000;
                      DAT_0560b624 = 0xffffffff00000000;
                      DAT_0560b62c = 0xffffffff00000000;
                      DAT_0560b634 = 0xffffffff00000000;
                      DAT_0560b63c = 0xffffffff00000000;
                      DAT_0560b644 = 0xffffffff00000000;
                      DAT_0560b64c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b660);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_DAT_04a9d730)[lVar22];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02aa6ad4:
                            iVar7 = (int)lVar8;
joined_r0x02aa6ad8:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02aa6ae0;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02aa6ad4;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02aa6ad8;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02aa6ae0:
                        memcpy(local_174,pbVar21,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar21;
                      if (*pbVar21 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar21 = pbVar21 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar21;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_0560b614 + lVar22) = uVar11;
                      *(int *)((long)&DAT_0560b614 + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_0560b5b0;
                      if ((int)DAT_0560b5b0 < DAT_0560b5b0._4_4_) {
                        DAT_0560b5b8[(int)DAT_0560b5b0] = &DAT_0560b614 + lVar22;
                        iVar7 = (int)DAT_0560b5b0 + 1;
                        DAT_0560b5b0 = CONCAT44(DAT_0560b5b0._4_4_,iVar7);
                      }
                      puVar18 = DAT_0560b5b8;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 9);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar14 = (uint *)puVar18[uVar11];
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar13 = uVar9;
                          puVar16 = puVar14;
                        }
                        else {
                          uVar13 = uVar9 + 1;
                          puVar16 = (uint *)puVar18[uVar13];
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar16 < *puVar14)) {
                            puVar18[uVar13] = puVar14;
                            puVar18[uVar9] = puVar16;
                            puVar16 = puVar14;
                          }
                        }
                        uVar15 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar15 != 0) {
                          puVar17 = puVar18 + uVar13 + 1;
                          do {
                            puVar14 = (uint *)*puVar17;
                            uVar10 = (uint)uVar13;
                            if (((puVar16 == (uint *)0x0) || (puVar14 == (uint *)0x0)) ||
                               (*puVar16 <= *puVar14)) {
                              puVar19 = (uint *)puVar17[1];
                              if (puVar14 != (uint *)0x0) goto LAB_02aa6dd0;
LAB_02aa6d80:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar17[-1] = puVar14;
                              *puVar17 = puVar16;
                              puVar19 = (uint *)puVar17[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_02aa6d80;
LAB_02aa6dd0:
                              if (puVar19 == (uint *)0x0) goto LAB_02aa6d80;
                              if (*puVar14 <= *puVar19) goto LAB_02aa6d80;
                              uVar6 = uVar10 + 1;
                              *puVar17 = puVar19;
                              puVar17[1] = puVar14;
                            }
                            uVar13 = uVar13 + 2;
                            puVar17 = puVar17 + 2;
                            puVar16 = puVar14;
                          } while (uVar15 != uVar13);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar13 = (ulong)uVar6;
                        puVar14 = (uint *)puVar18[uVar6];
                        uVar11 = uVar6;
                        do {
                          puVar16 = (uint *)puVar18[uVar13 - 1];
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar14 < *puVar16)) {
                            uVar11 = (uint)uVar13;
                            puVar18[uVar13 - 1] = puVar14;
                            puVar18[uVar13] = puVar16;
                            puVar16 = puVar14;
                          }
                          uVar13 = uVar13 - 1;
                          puVar14 = puVar16;
                        } while ((long)uVar9 < (long)uVar13);
                      } while (uVar11 != uVar6);
                    }
                    DAT_0560b5ac = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bc4638;
                    pcVar12 = PTR_DAT_04bc4630;
                  }
                  else if (DAT_0560b5ac != '\x01') goto LAB_02aa6c48;
                  if ((int)DAT_0560b5b0 == 0) {
LAB_02aa6c48:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bc4638;
                    pcVar12 = PTR_DAT_04bc4630;
                    if ((int)DAT_0560b5b0 < 2) {
                      uVar11 = 0;
                      puVar16 = (uint *)*DAT_0560b5b8;
                      uVar6 = uVar11;
                      if (puVar16 != (uint *)0x0) goto LAB_02aa6c10;
joined_r0x02aa6e04:
                      if (uVar6 < 9) {
                        uVar6 = *(uint *)(DAT_0560b5b8[uVar6] + 4);
                        if (uVar6 < 9) {
                          DAT_0560b5a0 = '\x01';
                          DAT_0560b5a4 = uVar20;
                          DAT_0560b5a8 = uVar6;
                          goto LAB_02aa7230;
                        }
                        goto LAB_02aa6c48;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_0560b5b0 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_0560b5b8[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x02aa6e04;
                        uVar10 = *(uint *)DAT_0560b5b8[(int)uVar6];
                        if (uVar10 == uVar20) goto joined_r0x02aa6e04;
                        if (uVar10 < uVar20) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar16 = (uint *)DAT_0560b5b8[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar16 == (uint *)0x0) goto joined_r0x02aa6e04;
LAB_02aa6c10:
                      uVar6 = uVar11;
                      if (*puVar16 == uVar20) goto joined_r0x02aa6e04;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_0560b4d8 == '\x01') && (DAT_0560b4dc == uVar20)) {
                  uVar6 = DAT_0560b4e0;
                  if (8 < DAT_0560b4e0) goto LAB_02aa71c4;
                }
                else {
                  if ((DAT_0560b540 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_0560b540);
                    puVar14 = (uint *)PTR_DAT_04bc4638;
                    pcVar12 = PTR_DAT_04bc4630;
                    if (iVar7 != 0) {
                      DAT_0560b4e8 = 0x900000000;
                      DAT_0560b4f0 = &DAT_0560b4f8;
                      __cxa_guard_release(&DAT_0560b540);
                      puVar14 = (uint *)PTR_DAT_04bc4638;
                      pcVar12 = PTR_DAT_04bc4630;
                    }
                  }
                  if ((DAT_0560b548 & 1) == 0) {
                    DAT_0560b548 = 1;
                    if (((DAT_0560b598 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_0560b598), iVar7 != 0)) {
                      DAT_0560b58c = 0xffffffff00000000;
                      DAT_0560b54c = 0xffffffff00000000;
                      DAT_0560b554 = 0xffffffff00000000;
                      DAT_0560b55c = 0xffffffff00000000;
                      DAT_0560b564 = 0xffffffff00000000;
                      DAT_0560b56c = 0xffffffff00000000;
                      DAT_0560b574 = 0xffffffff00000000;
                      DAT_0560b57c = 0xffffffff00000000;
                      DAT_0560b584 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b598);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = *(byte **)(PTR_s_Invalid_04bb8780 + lVar22 * 8 + 0x40);
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02aa6ec8:
                            iVar7 = (int)lVar8;
joined_r0x02aa6ecc:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02aa6ed4;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02aa6ec8;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02aa6ecc;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02aa6ed4:
                        memcpy(local_174,pbVar21,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar21;
                      if (*pbVar21 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar21 = pbVar21 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar21;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_0560b54c + lVar22) = uVar11;
                      *(int *)((long)&DAT_0560b54c + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_0560b4e8;
                      if ((int)DAT_0560b4e8 < DAT_0560b4e8._4_4_) {
                        *(undefined8 **)(DAT_0560b4f0 + (long)(int)DAT_0560b4e8 * 8) =
                             &DAT_0560b54c + lVar22;
                        iVar7 = (int)DAT_0560b4e8 + 1;
                        DAT_0560b4e8 = CONCAT44(DAT_0560b4e8._4_4_,iVar7);
                      }
                      puVar4 = DAT_0560b4f0;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 9);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar14 = *(uint **)(puVar4 + (ulong)uVar11 * 8);
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar13 = uVar9;
                          puVar16 = puVar14;
                        }
                        else {
                          uVar13 = uVar9 + 1;
                          puVar16 = *(uint **)(puVar4 + uVar13 * 8);
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar16 < *puVar14)) {
                            *(uint **)(puVar4 + uVar13 * 8) = puVar14;
                            *(uint **)(puVar4 + uVar9 * 8) = puVar16;
                            puVar16 = puVar14;
                          }
                        }
                        uVar15 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar15 != 0) {
                          puVar18 = (undefined8 *)(puVar4 + uVar13 * 8 + 8);
                          do {
                            puVar14 = (uint *)*puVar18;
                            uVar10 = (uint)uVar13;
                            if (((puVar16 == (uint *)0x0) || (puVar14 == (uint *)0x0)) ||
                               (*puVar16 <= *puVar14)) {
                              puVar19 = (uint *)puVar18[1];
                              if (puVar14 != (uint *)0x0) goto LAB_02aa7160;
LAB_02aa7110:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar18[-1] = puVar14;
                              *puVar18 = puVar16;
                              puVar19 = (uint *)puVar18[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_02aa7110;
LAB_02aa7160:
                              if (puVar19 == (uint *)0x0) goto LAB_02aa7110;
                              if (*puVar14 <= *puVar19) goto LAB_02aa7110;
                              uVar6 = uVar10 + 1;
                              *puVar18 = puVar19;
                              puVar18[1] = puVar14;
                            }
                            uVar13 = uVar13 + 2;
                            puVar18 = puVar18 + 2;
                            puVar16 = puVar14;
                          } while (uVar15 != uVar13);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar13 = (ulong)uVar6;
                        puVar14 = *(uint **)(puVar4 + (ulong)uVar6 * 8);
                        uVar11 = uVar6;
                        do {
                          puVar16 = *(uint **)(puVar4 + uVar13 * 8 + -8);
                          if (((puVar14 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                             (*puVar14 < *puVar16)) {
                            uVar11 = (uint)uVar13;
                            *(uint **)(puVar4 + uVar13 * 8 + -8) = puVar14;
                            *(uint **)(puVar4 + uVar13 * 8) = puVar16;
                            puVar16 = puVar14;
                          }
                          uVar13 = uVar13 - 1;
                          puVar14 = puVar16;
                        } while ((long)uVar9 < (long)uVar13);
                      } while (uVar11 != uVar6);
                    }
                    DAT_0560b4e4 = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bc4638;
                    pcVar12 = PTR_DAT_04bc4630;
                  }
                  else if (DAT_0560b4e4 != '\x01') goto LAB_02aa71c4;
                  if ((int)DAT_0560b4e8 == 0) {
LAB_02aa71c4:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bc4638;
                    pcVar12 = PTR_DAT_04bc4630;
                    if ((int)DAT_0560b4e8 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_0560b4e8 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_0560b4f0 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x02aa71f0;
                        uVar10 = **(uint **)(DAT_0560b4f0 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar20) goto joined_r0x02aa71f0;
                        if (uVar10 < uVar20) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_0560b4f0 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_0560b4f0 + (long)(int)uVar6 * 8) == uVar20)) {
joined_r0x02aa71f0:
                      if (uVar11 < 9) {
                        uVar6 = *(uint *)(*(long *)(DAT_0560b4f0 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 9) {
                          DAT_0560b4d8 = '\x01';
                          DAT_0560b4dc = uVar20;
                          DAT_0560b4e0 = uVar6;
                          goto LAB_02aa7228;
                        }
                        goto LAB_02aa71c4;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_02aa7228:
              }
LAB_02aa7230:
              puVar4 = PTR_DAT_04bc4638;
              puVar16 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar16 != (uint *)0x0)) {
                if (*puVar16 != 0) {
                  uVar20 = puVar16[1];
                  if (uVar20 != 0) {
                    if ((ulong)(ushort)puVar16[2] != 0) {
                      lVar22 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar22 = 0x1c;
                      }
                      lVar22 = (long)puVar16 + lVar22 + (ulong)(ushort)puVar16[2] * 8;
                      puVar14 = (uint *)puVar4;
                      if (lVar22 != 0) {
                        uVar11 = 0;
                        if ((ulong)uVar20 != 0) {
                          uVar11 = (uint)((ulong)((long)puVar2 - lVar22) / (ulong)uVar20);
                        }
                        if (*puVar16 <= uVar11) {
                          uVar11 = 0xffffffff;
                        }
                        if (uVar11 < *(uint *)PTR_DAT_04bc46d8) {
                          *(short *)(*(long *)(PTR_DAT_04bc46d8 + 8) + (long)(int)uVar11 * 2) =
                               (short)uVar6;
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
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar3);
  }
  return;
}

