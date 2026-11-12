
void FUN_00ac53c0(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  uint uVar21;
  byte *pbVar22;
  long lVar23;
  uint uVar24;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar24 = 0;
    puVar10 = (undefined8 *)PTR_DAT_04bb6448;
    pcVar14 = PTR_DAT_04bb6440;
    do {
      if (uVar24 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar7 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar7 = 0x1c;
            }
            puVar2 = (uint *)((ulong)(param_1[1] * uVar24 + (uint)(ushort)param_1[2] * 8 + iVar7) +
                             (long)param_1);
            if (puVar2 != (uint *)0x0) {
              uVar21 = *puVar2;
              if (uVar21 != 0) {
                cVar5 = *pcVar14;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    *(undefined4 *)(puVar10 + 10) = 0xffffffff;
                    *puVar10 = 0xffffffffffffffff;
                    puVar10[1] = 0xffffffffffffffff;
                    *pcVar14 = '\x01';
                    puVar10[2] = 0xffffffffffffffff;
                    puVar10[3] = 0xffffffffffffffff;
                    puVar10[4] = 0xffffffffffffffff;
                    puVar10[5] = 0xffffffffffffffff;
                    puVar10[6] = 0xffffffffffffffff;
                    puVar10[7] = 0xffffffffffffffff;
                    puVar10[8] = 0xffffffffffffffff;
                    puVar10[9] = 0xffffffffffffffff;
                    uVar21 = *puVar2;
                  }
                  else {
                    uVar6 = *(uint *)(puVar10 + 1);
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar21 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_00ac5580;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar21;
                  uVar21 = 0;
                  if ((puVar16 == (uint *)0x0) || (uVar21 = 0, puVar2 == puVar16))
                  goto LAB_00ac5580;
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar16)) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar2 + (lVar23 - (long)puVar16);
                  if (lVar23 == 0) break;
                  uVar11 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar16));
                  *(undefined4 *)(puVar10 + 1) = 0xfffffffe;
                  if (uVar11 == 0) break;
                  piVar9 = (int *)(lVar23 + 4);
                  while (piVar9[-1] != -0x6a33f0de) {
                    piVar9 = piVar9 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) goto LAB_00ac557c;
                  }
                  iVar7 = 0;
                  if (*piVar9 != -1) {
                    iVar7 = *piVar9;
                  }
                  *(int *)(puVar10 + 1) = iVar7;
                  uVar21 = *puVar2;
                  if (uVar21 == 0) break;
                } while( true );
              }
LAB_00ac557c:
              uVar21 = 0;
LAB_00ac5580:
              if (((*puVar2 == 0) || (lVar23 = (long)puVar2 - (ulong)*puVar2, lVar23 == 0)) ||
                 (*(char *)(lVar23 + 0xb) == '\0')) {
                if ((DAT_04da87d0 == '\x01') && (DAT_04da87d4 == uVar21)) {
                  uVar6 = DAT_04da87d8;
                  if (0xf < DAT_04da87d8) goto LAB_00ac5838;
                }
                else {
                  if ((DAT_04da8870 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_04da8870);
                    puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                    pcVar14 = PTR_DAT_04bb6440;
                    if (iVar7 != 0) {
                      DAT_04da87e0 = 0x1000000000;
                      DAT_04da87e8 = (undefined8 *)&DAT_04da87f0;
                      __cxa_guard_release(&DAT_04da8870);
                      puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                      pcVar14 = PTR_DAT_04bb6440;
                    }
                  }
                  if ((DAT_04da8878 & 1) == 0) {
                    DAT_04da8878 = 1;
                    if (((DAT_04da8900 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_04da8900), iVar7 != 0)) {
                      DAT_04da887c = 0xffffffff00000000;
                      DAT_04da8884 = 0xffffffff00000000;
                      DAT_04da888c = 0xffffffff00000000;
                      DAT_04da8894 = 0xffffffff00000000;
                      DAT_04da889c = 0xffffffff00000000;
                      DAT_04da88a4 = 0xffffffff00000000;
                      DAT_04da88ac = 0xffffffff00000000;
                      DAT_04da88b4 = 0xffffffff00000000;
                      DAT_04da88bc = 0xffffffff00000000;
                      DAT_04da88c4 = 0xffffffff00000000;
                      DAT_04da88cc = 0xffffffff00000000;
                      DAT_04da88d4 = 0xffffffff00000000;
                      DAT_04da88dc = 0xffffffff00000000;
                      DAT_04da88e4 = 0xffffffff00000000;
                      DAT_04da88ec = 0xffffffff00000000;
                      DAT_04da88f4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da8900);
                    }
                    lVar23 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_04933240)[lVar23];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_00ac56c4:
                            iVar7 = (int)lVar8;
joined_r0x00ac56c8:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_00ac56d0;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_00ac56c4;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x00ac56c8;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_00ac56d0:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar13 = 0;
                      }
                      else {
                        uVar13 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar13 = crc32b(uVar13,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar13 = ~uVar13;
                      }
                      *(uint *)(&DAT_04da887c + lVar23) = uVar13;
                      *(int *)((long)&DAT_04da887c + lVar23 * 8 + 4) = (int)lVar23;
                      iVar7 = (int)DAT_04da87e0;
                      if ((int)DAT_04da87e0 < DAT_04da87e0._4_4_) {
                        DAT_04da87e8[(int)DAT_04da87e0] = &DAT_04da887c + lVar23;
                        iVar7 = (int)DAT_04da87e0 + 1;
                        DAT_04da87e0 = CONCAT44(DAT_04da87e0._4_4_,iVar7);
                      }
                      puVar10 = DAT_04da87e8;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 != 0x10);
                    if (1 < iVar7) {
                      uVar13 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar13) break;
                        puVar16 = (uint *)puVar10[uVar13];
                        uVar11 = (ulong)uVar13;
                        if ((uVar6 - uVar13 & 1) == 0) {
                          uVar15 = uVar11;
                          puVar18 = puVar16;
                        }
                        else {
                          uVar15 = uVar11 + 1;
                          puVar18 = (uint *)puVar10[uVar15];
                          if (((puVar16 != (uint *)0x0) && (puVar18 != (uint *)0x0)) &&
                             (*puVar18 < *puVar16)) {
                            puVar10[uVar15] = puVar16;
                            puVar10[uVar11] = puVar18;
                            puVar18 = puVar16;
                          }
                        }
                        uVar17 = (ulong)uVar6;
                        uVar6 = uVar13;
                        if (~uVar11 + uVar17 != 0) {
                          puVar19 = puVar10 + uVar15 + 1;
                          do {
                            puVar16 = (uint *)*puVar19;
                            uVar12 = (uint)uVar15;
                            if (((puVar18 == (uint *)0x0) || (puVar16 == (uint *)0x0)) ||
                               (*puVar18 <= *puVar16)) {
                              puVar20 = (uint *)puVar19[1];
                              if (puVar16 != (uint *)0x0) goto LAB_00ac59c0;
LAB_00ac5970:
                              puVar16 = puVar20;
                            }
                            else {
                              puVar19[-1] = puVar16;
                              *puVar19 = puVar18;
                              puVar20 = (uint *)puVar19[1];
                              puVar16 = puVar18;
                              uVar6 = uVar12;
                              if (puVar18 == (uint *)0x0) goto LAB_00ac5970;
LAB_00ac59c0:
                              if (puVar20 == (uint *)0x0) goto LAB_00ac5970;
                              if (*puVar16 <= *puVar20) goto LAB_00ac5970;
                              uVar6 = uVar12 + 1;
                              *puVar19 = puVar20;
                              puVar19[1] = puVar16;
                            }
                            uVar15 = uVar15 + 2;
                            puVar19 = puVar19 + 2;
                            puVar18 = puVar16;
                          } while (uVar17 != uVar15);
                        }
                        if ((int)uVar6 <= (int)uVar13) break;
                        uVar15 = (ulong)uVar6;
                        puVar16 = (uint *)puVar10[uVar6];
                        uVar13 = uVar6;
                        do {
                          puVar18 = (uint *)puVar10[uVar15 - 1];
                          if (((puVar16 != (uint *)0x0) && (puVar18 != (uint *)0x0)) &&
                             (*puVar16 < *puVar18)) {
                            uVar13 = (uint)uVar15;
                            puVar10[uVar15 - 1] = puVar16;
                            puVar10[uVar15] = puVar18;
                            puVar18 = puVar16;
                          }
                          uVar15 = uVar15 - 1;
                          puVar16 = puVar18;
                        } while ((long)uVar11 < (long)uVar15);
                      } while (uVar13 != uVar6);
                    }
                    DAT_04da87dc = '\x01';
                    puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                    pcVar14 = PTR_DAT_04bb6440;
                  }
                  else if (DAT_04da87dc != '\x01') goto LAB_00ac5838;
                  if ((int)DAT_04da87e0 == 0) {
LAB_00ac5838:
                    uVar6 = 0;
                  }
                  else {
                    puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                    pcVar14 = PTR_DAT_04bb6440;
                    if ((int)DAT_04da87e0 < 2) {
                      uVar13 = 0;
                      puVar16 = (uint *)*DAT_04da87e8;
                      uVar6 = uVar13;
                      if (puVar16 != (uint *)0x0) goto LAB_00ac5800;
joined_r0x00ac59f4:
                      if (uVar6 < 0x10) {
                        uVar6 = *(uint *)(DAT_04da87e8[uVar6] + 4);
                        if (uVar6 < 0x10) {
                          DAT_04da87d0 = '\x01';
                          DAT_04da87d4 = uVar21;
                          DAT_04da87d8 = uVar6;
                          goto LAB_00ac5e20;
                        }
                        goto LAB_00ac5838;
                      }
                    }
                    else {
                      uVar13 = 0;
                      iVar7 = (int)DAT_04da87e0 + -1;
                      do {
                        iVar1 = iVar7 + uVar13;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar13)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_04da87e8[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x00ac59f4;
                        uVar12 = *(uint *)DAT_04da87e8[(int)uVar6];
                        if (uVar12 == uVar21) goto joined_r0x00ac59f4;
                        if (uVar12 < uVar21) {
                          uVar13 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar13 < iVar7);
                      puVar16 = (uint *)DAT_04da87e8[(int)uVar13];
                      uVar6 = uVar13;
                      if (puVar16 == (uint *)0x0) goto joined_r0x00ac59f4;
LAB_00ac5800:
                      uVar6 = uVar13;
                      if (*puVar16 == uVar21) goto joined_r0x00ac59f4;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_04da8698 == '\x01') && (DAT_04da869c == uVar21)) {
                  uVar6 = DAT_04da86a0;
                  if (0xf < DAT_04da86a0) goto LAB_00ac5db4;
                }
                else {
                  if ((DAT_04da8738 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_04da8738);
                    puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                    pcVar14 = PTR_DAT_04bb6440;
                    if (iVar7 != 0) {
                      DAT_04da86a8 = 0x1000000000;
                      DAT_04da86b0 = &DAT_04da86b8;
                      __cxa_guard_release(&DAT_04da8738);
                      puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                      pcVar14 = PTR_DAT_04bb6440;
                    }
                  }
                  if ((DAT_04da8740 & 1) == 0) {
                    DAT_04da8740 = 1;
                    if (((DAT_04da87c8 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_04da87c8), iVar7 != 0)) {
                      DAT_04da8744 = 0xffffffff00000000;
                      DAT_04da874c = 0xffffffff00000000;
                      DAT_04da8754 = 0xffffffff00000000;
                      DAT_04da875c = 0xffffffff00000000;
                      DAT_04da8764 = 0xffffffff00000000;
                      DAT_04da876c = 0xffffffff00000000;
                      DAT_04da8774 = 0xffffffff00000000;
                      DAT_04da877c = 0xffffffff00000000;
                      DAT_04da8784 = 0xffffffff00000000;
                      DAT_04da878c = 0xffffffff00000000;
                      DAT_04da8794 = 0xffffffff00000000;
                      DAT_04da879c = 0xffffffff00000000;
                      DAT_04da87a4 = 0xffffffff00000000;
                      DAT_04da87ac = 0xffffffff00000000;
                      DAT_04da87b4 = 0xffffffff00000000;
                      DAT_04da87bc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da87c8);
                    }
                    lVar23 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_s_Communication_04933090)[lVar23];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_00ac5ab8:
                            iVar7 = (int)lVar8;
joined_r0x00ac5abc:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_00ac5ac4;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_00ac5ab8;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x00ac5abc;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_00ac5ac4:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar13 = 0;
                      }
                      else {
                        uVar13 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar13 = crc32b(uVar13,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar13 = ~uVar13;
                      }
                      *(uint *)(&DAT_04da8744 + lVar23) = uVar13;
                      *(int *)((long)&DAT_04da8744 + lVar23 * 8 + 4) = (int)lVar23;
                      iVar7 = (int)DAT_04da86a8;
                      if ((int)DAT_04da86a8 < DAT_04da86a8._4_4_) {
                        *(undefined8 **)(DAT_04da86b0 + (long)(int)DAT_04da86a8 * 8) =
                             &DAT_04da8744 + lVar23;
                        iVar7 = (int)DAT_04da86a8 + 1;
                        DAT_04da86a8 = CONCAT44(DAT_04da86a8._4_4_,iVar7);
                      }
                      puVar4 = DAT_04da86b0;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 != 0x10);
                    if (1 < iVar7) {
                      uVar13 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar13) break;
                        puVar16 = *(uint **)(puVar4 + (ulong)uVar13 * 8);
                        uVar11 = (ulong)uVar13;
                        if ((uVar6 - uVar13 & 1) == 0) {
                          uVar15 = uVar11;
                          puVar18 = puVar16;
                        }
                        else {
                          uVar15 = uVar11 + 1;
                          puVar18 = *(uint **)(puVar4 + uVar15 * 8);
                          if (((puVar16 != (uint *)0x0) && (puVar18 != (uint *)0x0)) &&
                             (*puVar18 < *puVar16)) {
                            *(uint **)(puVar4 + uVar15 * 8) = puVar16;
                            *(uint **)(puVar4 + uVar11 * 8) = puVar18;
                            puVar18 = puVar16;
                          }
                        }
                        uVar17 = (ulong)uVar6;
                        uVar6 = uVar13;
                        if (~uVar11 + uVar17 != 0) {
                          puVar10 = (undefined8 *)(puVar4 + uVar15 * 8 + 8);
                          do {
                            puVar16 = (uint *)*puVar10;
                            uVar12 = (uint)uVar15;
                            if (((puVar18 == (uint *)0x0) || (puVar16 == (uint *)0x0)) ||
                               (*puVar18 <= *puVar16)) {
                              puVar20 = (uint *)puVar10[1];
                              if (puVar16 != (uint *)0x0) goto LAB_00ac5d50;
LAB_00ac5d00:
                              puVar16 = puVar20;
                            }
                            else {
                              puVar10[-1] = puVar16;
                              *puVar10 = puVar18;
                              puVar20 = (uint *)puVar10[1];
                              puVar16 = puVar18;
                              uVar6 = uVar12;
                              if (puVar18 == (uint *)0x0) goto LAB_00ac5d00;
LAB_00ac5d50:
                              if (puVar20 == (uint *)0x0) goto LAB_00ac5d00;
                              if (*puVar16 <= *puVar20) goto LAB_00ac5d00;
                              uVar6 = uVar12 + 1;
                              *puVar10 = puVar20;
                              puVar10[1] = puVar16;
                            }
                            uVar15 = uVar15 + 2;
                            puVar10 = puVar10 + 2;
                            puVar18 = puVar16;
                          } while (uVar17 != uVar15);
                        }
                        if ((int)uVar6 <= (int)uVar13) break;
                        uVar15 = (ulong)uVar6;
                        puVar16 = *(uint **)(puVar4 + (ulong)uVar6 * 8);
                        uVar13 = uVar6;
                        do {
                          puVar18 = *(uint **)(puVar4 + uVar15 * 8 + -8);
                          if (((puVar16 != (uint *)0x0) && (puVar18 != (uint *)0x0)) &&
                             (*puVar16 < *puVar18)) {
                            uVar13 = (uint)uVar15;
                            *(uint **)(puVar4 + uVar15 * 8 + -8) = puVar16;
                            *(uint **)(puVar4 + uVar15 * 8) = puVar18;
                            puVar18 = puVar16;
                          }
                          uVar15 = uVar15 - 1;
                          puVar16 = puVar18;
                        } while ((long)uVar11 < (long)uVar15);
                      } while (uVar13 != uVar6);
                    }
                    DAT_04da86a4 = '\x01';
                    puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                    pcVar14 = PTR_DAT_04bb6440;
                  }
                  else if (DAT_04da86a4 != '\x01') goto LAB_00ac5db4;
                  if ((int)DAT_04da86a8 == 0) {
LAB_00ac5db4:
                    uVar6 = 0;
                  }
                  else {
                    puVar10 = (undefined8 *)PTR_DAT_04bb6448;
                    pcVar14 = PTR_DAT_04bb6440;
                    if ((int)DAT_04da86a8 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_04da86a8 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar13 = iVar1 >> 1;
                        if (*(uint **)(DAT_04da86b0 + (long)(int)uVar13 * 8) == (uint *)0x0)
                        goto joined_r0x00ac5de0;
                        uVar12 = **(uint **)(DAT_04da86b0 + (long)(int)uVar13 * 8);
                        if (uVar12 == uVar21) goto joined_r0x00ac5de0;
                        if (uVar12 < uVar21) {
                          uVar6 = uVar13 + 1;
                        }
                        else {
                          iVar7 = uVar13 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar13 = uVar6;
                    if ((*(uint **)(DAT_04da86b0 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_04da86b0 + (long)(int)uVar6 * 8) == uVar21)) {
joined_r0x00ac5de0:
                      if (uVar13 < 0x10) {
                        uVar6 = *(uint *)(*(long *)(DAT_04da86b0 + (ulong)uVar13 * 8) + 4);
                        if (uVar6 < 0x10) {
                          DAT_04da8698 = '\x01';
                          DAT_04da869c = uVar21;
                          DAT_04da86a0 = uVar6;
                          goto LAB_00ac5e18;
                        }
                        goto LAB_00ac5db4;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_00ac5e18:
              }
LAB_00ac5e20:
              puVar4 = PTR_DAT_04bb6448;
              puVar16 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar16 != (uint *)0x0)) {
                if (*puVar16 != 0) {
                  uVar21 = puVar16[1];
                  if (uVar21 != 0) {
                    if ((ulong)(ushort)puVar16[2] != 0) {
                      lVar23 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar23 = 0x1c;
                      }
                      lVar23 = (long)puVar16 + lVar23 + (ulong)(ushort)puVar16[2] * 8;
                      puVar10 = (undefined8 *)puVar4;
                      if (lVar23 != 0) {
                        uVar13 = 0;
                        if ((ulong)uVar21 != 0) {
                          uVar13 = (uint)((ulong)((long)puVar2 - lVar23) / (ulong)uVar21);
                        }
                        if (*puVar16 <= uVar13) {
                          uVar13 = 0xffffffff;
                        }
                        if (uVar13 < *(uint *)PTR_DAT_04bb6450) {
                          *(short *)(*(long *)(PTR_DAT_04bb6450 + 8) + (long)(int)uVar13 * 2) =
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
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar3);
  }
  return;
}

