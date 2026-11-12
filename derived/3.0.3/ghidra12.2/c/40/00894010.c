
void FUN_00894010(uint *param_1)

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
    puVar14 = (uint *)PTR_DAT_04bb57b8;
    pcVar12 = PTR_DAT_04bb57b0;
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
                    puVar14[8] = 0xffffffff;
                    puVar14[9] = 0xffffffff;
                    puVar14[10] = 0xffffffff;
                    puVar14[0xb] = 0xffffffff;
                    uVar20 = *puVar2;
                  }
                  else {
                    uVar6 = *puVar14;
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar20 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_008941c0;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar20;
                  uVar20 = 0;
                  if ((puVar16 == (uint *)0x0) || (uVar20 = 0, puVar2 == puVar16))
                  goto LAB_008941c0;
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
                  while (puVar16[-1] != 0x82bfcf29) {
                    puVar16 = puVar16 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_008941bc;
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
LAB_008941bc:
              uVar20 = 0;
LAB_008941c0:
              if (((*puVar2 == 0) || (lVar22 = (long)puVar2 - (ulong)*puVar2, lVar22 == 0)) ||
                 (*(char *)(lVar22 + 0xb) == '\0')) {
                if ((DAT_04ce9e40 == '\x01') && (DAT_04ce9e44 == uVar20)) {
                  uVar6 = DAT_04ce9e48;
                  if (0x13 < DAT_04ce9e48) goto LAB_00894478;
                }
                else {
                  if ((DAT_04ce9f00 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_04ce9f00);
                    puVar14 = (uint *)PTR_DAT_04bb57b8;
                    pcVar12 = PTR_DAT_04bb57b0;
                    if (iVar7 != 0) {
                      DAT_04ce9e50 = 0x1400000000;
                      DAT_04ce9e58 = (undefined8 *)&DAT_04ce9e60;
                      __cxa_guard_release(&DAT_04ce9f00);
                      puVar14 = (uint *)PTR_DAT_04bb57b8;
                      pcVar12 = PTR_DAT_04bb57b0;
                    }
                  }
                  if ((DAT_04ce9f08 & 1) == 0) {
                    DAT_04ce9f08 = 1;
                    if (((DAT_04ce9fb0 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_04ce9fb0), iVar7 != 0)) {
                      DAT_04ce9f0c = 0xffffffff00000000;
                      DAT_04ce9f14 = 0xffffffff00000000;
                      DAT_04ce9f1c = 0xffffffff00000000;
                      DAT_04ce9f24 = 0xffffffff00000000;
                      DAT_04ce9f2c = 0xffffffff00000000;
                      DAT_04ce9f34 = 0xffffffff00000000;
                      DAT_04ce9f3c = 0xffffffff00000000;
                      DAT_04ce9f44 = 0xffffffff00000000;
                      DAT_04ce9f4c = 0xffffffff00000000;
                      DAT_04ce9f54 = 0xffffffff00000000;
                      DAT_04ce9f5c = 0xffffffff00000000;
                      DAT_04ce9f64 = 0xffffffff00000000;
                      DAT_04ce9f6c = 0xffffffff00000000;
                      DAT_04ce9f74 = 0xffffffff00000000;
                      DAT_04ce9f7c = 0xffffffff00000000;
                      DAT_04ce9f84 = 0xffffffff00000000;
                      DAT_04ce9f8c = 0xffffffff00000000;
                      DAT_04ce9f94 = 0xffffffff00000000;
                      DAT_04ce9f9c = 0xffffffff00000000;
                      DAT_04ce9fa4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04ce9fb0);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_DAT_0491e180)[lVar22];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_00894304:
                            iVar7 = (int)lVar8;
joined_r0x00894308:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_00894310;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_00894304;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x00894308;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_00894310:
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
                      *(uint *)(&DAT_04ce9f0c + lVar22) = uVar11;
                      *(int *)((long)&DAT_04ce9f0c + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_04ce9e50;
                      if ((int)DAT_04ce9e50 < DAT_04ce9e50._4_4_) {
                        DAT_04ce9e58[(int)DAT_04ce9e50] = &DAT_04ce9f0c + lVar22;
                        iVar7 = (int)DAT_04ce9e50 + 1;
                        DAT_04ce9e50 = CONCAT44(DAT_04ce9e50._4_4_,iVar7);
                      }
                      puVar18 = DAT_04ce9e58;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 0x14);
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
                              if (puVar14 != (uint *)0x0) goto LAB_00894600;
LAB_008945b0:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar17[-1] = puVar14;
                              *puVar17 = puVar16;
                              puVar19 = (uint *)puVar17[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_008945b0;
LAB_00894600:
                              if (puVar19 == (uint *)0x0) goto LAB_008945b0;
                              if (*puVar14 <= *puVar19) goto LAB_008945b0;
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
                    DAT_04ce9e4c = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bb57b8;
                    pcVar12 = PTR_DAT_04bb57b0;
                  }
                  else if (DAT_04ce9e4c != '\x01') goto LAB_00894478;
                  if ((int)DAT_04ce9e50 == 0) {
LAB_00894478:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bb57b8;
                    pcVar12 = PTR_DAT_04bb57b0;
                    if ((int)DAT_04ce9e50 < 2) {
                      uVar11 = 0;
                      puVar16 = (uint *)*DAT_04ce9e58;
                      uVar6 = uVar11;
                      if (puVar16 != (uint *)0x0) goto LAB_00894440;
joined_r0x00894634:
                      if (uVar6 < 0x14) {
                        uVar6 = *(uint *)(DAT_04ce9e58[uVar6] + 4);
                        if (uVar6 < 0x14) {
                          DAT_04ce9e40 = '\x01';
                          DAT_04ce9e44 = uVar20;
                          DAT_04ce9e48 = uVar6;
                          goto LAB_00894a60;
                        }
                        goto LAB_00894478;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_04ce9e50 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_04ce9e58[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x00894634;
                        uVar10 = *(uint *)DAT_04ce9e58[(int)uVar6];
                        if (uVar10 == uVar20) goto joined_r0x00894634;
                        if (uVar10 < uVar20) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar16 = (uint *)DAT_04ce9e58[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar16 == (uint *)0x0) goto joined_r0x00894634;
LAB_00894440:
                      uVar6 = uVar11;
                      if (*puVar16 == uVar20) goto joined_r0x00894634;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_04ce9cc8 == '\x01') && (DAT_04ce9ccc == uVar20)) {
                  uVar6 = DAT_04ce9cd0;
                  if (0x13 < DAT_04ce9cd0) goto LAB_008949f4;
                }
                else {
                  if ((DAT_04ce9d88 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_04ce9d88);
                    puVar14 = (uint *)PTR_DAT_04bb57b8;
                    pcVar12 = PTR_DAT_04bb57b0;
                    if (iVar7 != 0) {
                      DAT_04ce9cd8 = 0x1400000000;
                      DAT_04ce9ce0 = &DAT_04ce9ce8;
                      __cxa_guard_release(&DAT_04ce9d88);
                      puVar14 = (uint *)PTR_DAT_04bb57b8;
                      pcVar12 = PTR_DAT_04bb57b0;
                    }
                  }
                  if ((DAT_04ce9d90 & 1) == 0) {
                    DAT_04ce9d90 = 1;
                    if (((DAT_04ce9e38 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_04ce9e38), iVar7 != 0)) {
                      DAT_04ce9d94 = 0xffffffff00000000;
                      DAT_04ce9d9c = 0xffffffff00000000;
                      DAT_04ce9da4 = 0xffffffff00000000;
                      DAT_04ce9dac = 0xffffffff00000000;
                      DAT_04ce9db4 = 0xffffffff00000000;
                      DAT_04ce9dbc = 0xffffffff00000000;
                      DAT_04ce9dc4 = 0xffffffff00000000;
                      DAT_04ce9dcc = 0xffffffff00000000;
                      DAT_04ce9dd4 = 0xffffffff00000000;
                      DAT_04ce9ddc = 0xffffffff00000000;
                      DAT_04ce9de4 = 0xffffffff00000000;
                      DAT_04ce9dec = 0xffffffff00000000;
                      DAT_04ce9df4 = 0xffffffff00000000;
                      DAT_04ce9dfc = 0xffffffff00000000;
                      DAT_04ce9e04 = 0xffffffff00000000;
                      DAT_04ce9e0c = 0xffffffff00000000;
                      DAT_04ce9e14 = 0xffffffff00000000;
                      DAT_04ce9e1c = 0xffffffff00000000;
                      DAT_04ce9e24 = 0xffffffff00000000;
                      DAT_04ce9e2c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04ce9e38);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = *(byte **)(PTR_DAT_04bb5828 + lVar22 * 8 + 0x98);
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_008946f8:
                            iVar7 = (int)lVar8;
joined_r0x008946fc:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_00894704;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_008946f8;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x008946fc;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_00894704:
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
                      *(uint *)(&DAT_04ce9d94 + lVar22) = uVar11;
                      *(int *)((long)&DAT_04ce9d94 + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_04ce9cd8;
                      if ((int)DAT_04ce9cd8 < DAT_04ce9cd8._4_4_) {
                        *(undefined8 **)(DAT_04ce9ce0 + (long)(int)DAT_04ce9cd8 * 8) =
                             &DAT_04ce9d94 + lVar22;
                        iVar7 = (int)DAT_04ce9cd8 + 1;
                        DAT_04ce9cd8 = CONCAT44(DAT_04ce9cd8._4_4_,iVar7);
                      }
                      puVar4 = DAT_04ce9ce0;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 0x14);
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
                              if (puVar14 != (uint *)0x0) goto LAB_00894990;
LAB_00894940:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar18[-1] = puVar14;
                              *puVar18 = puVar16;
                              puVar19 = (uint *)puVar18[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_00894940;
LAB_00894990:
                              if (puVar19 == (uint *)0x0) goto LAB_00894940;
                              if (*puVar14 <= *puVar19) goto LAB_00894940;
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
                    DAT_04ce9cd4 = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bb57b8;
                    pcVar12 = PTR_DAT_04bb57b0;
                  }
                  else if (DAT_04ce9cd4 != '\x01') goto LAB_008949f4;
                  if ((int)DAT_04ce9cd8 == 0) {
LAB_008949f4:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bb57b8;
                    pcVar12 = PTR_DAT_04bb57b0;
                    if ((int)DAT_04ce9cd8 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_04ce9cd8 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_04ce9ce0 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x00894a20;
                        uVar10 = **(uint **)(DAT_04ce9ce0 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar20) goto joined_r0x00894a20;
                        if (uVar10 < uVar20) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_04ce9ce0 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_04ce9ce0 + (long)(int)uVar6 * 8) == uVar20)) {
joined_r0x00894a20:
                      if (uVar11 < 0x14) {
                        uVar6 = *(uint *)(*(long *)(DAT_04ce9ce0 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 0x14) {
                          DAT_04ce9cc8 = '\x01';
                          DAT_04ce9ccc = uVar20;
                          DAT_04ce9cd0 = uVar6;
                          goto LAB_00894a58;
                        }
                        goto LAB_008949f4;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_00894a58:
              }
LAB_00894a60:
              puVar4 = PTR_DAT_04bb57b8;
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
                        if (uVar11 < DAT_04ce9838) {
                          *(short *)(DAT_04ce9840 + (long)(int)uVar11 * 2) = (short)uVar6;
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

