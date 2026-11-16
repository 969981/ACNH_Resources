
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02980630(uint *param_1)

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
  undefined *puVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  byte *pbVar29;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar9 = *param_1, uVar9 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x43,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar5 = crc32b(uVar4,0x68,0x4c11db7);
    uVar28 = 0;
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar5 = crc32b(uVar5,0x72,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar5 = crc32b(uVar5,0x69,0x4c11db7);
    uVar6 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar2 = crc32b(uVar3,0x72,0x4c11db7);
    uVar3 = crc32b(uVar5,0x73,0x4c11db7);
    uVar3 = crc32b(uVar3,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar7 = crc32b(uVar3,0x73,0x4c11db7);
    uVar8 = crc32b(uVar2,0x6c,0x4c11db7);
    puVar20 = (uint *)PTR_DAT_04bc38b0;
    do {
      if (uVar28 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar11 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar11 = 0x1c;
            }
            puVar1 = (uint *)((ulong)(param_1[1] * uVar28 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                             (long)param_1);
            if (puVar1 != (uint *)0x0) {
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar12 = *PTR_DAT_04bc38a8;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    *PTR_DAT_04bc38a8 = 1;
                    puVar20[8] = 0xffffffff;
                    puVar20[9] = 0xffffffff;
                    puVar20[0] = 0xffffffff;
                    puVar20[1] = 0xffffffff;
                    puVar20[2] = 0xffffffff;
                    puVar20[3] = 0xffffffff;
                    puVar20[10] = 0xffffffff;
                    puVar20[4] = 0xffffffff;
                    puVar20[5] = 0xffffffff;
                    puVar20[6] = 0xffffffff;
                    puVar20[7] = 0xffffffff;
                    uVar26 = *puVar1;
                  }
                  else {
                    uVar13 = *puVar20;
                    if (-1 < (int)uVar13) {
                      if ((uint *)((long)puVar1 + (ulong)uVar13) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar13);
                        goto LAB_029808c0;
                      }
                      break;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar22 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar22 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar22))
                  goto LAB_029808c0;
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar22)) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar1 + (lVar27 - (long)puVar22);
                  if (lVar27 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar22));
                  *puVar20 = 0xfffffffe;
                  if (uVar16 == 0) break;
                  puVar22 = (uint *)(lVar27 + 4);
                  while (puVar22[-1] != 0x1c73934d) {
                    puVar22 = puVar22 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) goto LAB_029808bc;
                  }
                  uVar26 = 0;
                  if (*puVar22 != 0xffffffff) {
                    uVar26 = *puVar22;
                  }
                  *puVar20 = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_029808bc:
              uVar26 = 0;
LAB_029808c0:
              if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
                 (*(char *)(lVar27 + 0xb) == '\0')) {
                if ((DAT_055dcb88 == '\x01') && (DAT_055dcb8c == uVar26)) {
                  uVar13 = DAT_055dcb90;
                  if (5 < DAT_055dcb90) goto LAB_02980b6c;
                }
                else {
                  if ((DAT_055dcbd8 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_055dcbd8);
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if (iVar11 != 0) {
                      DAT_055dcb98 = 0x600000000;
                      DAT_055dcba0 = (undefined8 *)&DAT_055dcba8;
                      __cxa_guard_release(&DAT_055dcbd8);
                      puVar20 = (uint *)PTR_DAT_04bc38b0;
                    }
                  }
                  if ((DAT_055dcbe0 & 1) == 0) {
                    DAT_055dcbe0 = 1;
                    if (((DAT_055dcc18 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_055dcc18), iVar11 != 0)) {
                      DAT_055dcbe4 = 0xffffffff00000000;
                      DAT_055dcbec = 0xffffffff00000000;
                      DAT_055dcbf4 = 0xffffffff00000000;
                      DAT_055dcbfc = 0xffffffff00000000;
                      DAT_055dcc04 = 0xffffffff00000000;
                      DAT_055dcc0c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055dcc18);
                    }
                    lVar27 = 0;
                    do {
                      local_75 = 0;
                      pbVar29 = (&PTR_DAT_04a970e0)[lVar27];
                      if (local_174 != pbVar29) {
                        lVar15 = 0;
                        do {
                          if (pbVar29[lVar15] == 0) {
LAB_02980a04:
                            iVar11 = (int)lVar15;
joined_r0x02980a08:
                            if (0xff < iVar11) {
                              iVar11 = 0xff;
                            }
                            goto LAB_02980a10;
                          }
                          if (pbVar29[lVar15 + 1] == 0) {
                            lVar15 = lVar15 + 1;
                            goto LAB_02980a04;
                          }
                          if (pbVar29[lVar15 + 2] == 0) {
                            iVar11 = (int)lVar15 + 2;
                            goto joined_r0x02980a08;
                          }
                          lVar15 = lVar15 + 3;
                        } while (lVar15 != 0x80001);
                        iVar11 = 0;
LAB_02980a10:
                        memcpy(local_174,pbVar29,(long)iVar11);
                        local_174[iVar11] = 0;
                      }
                      uVar13 = (uint)*pbVar29;
                      if (*pbVar29 == 0) {
                        uVar18 = 0;
                      }
                      else {
                        uVar18 = 0xffffffff;
                        do {
                          pbVar29 = pbVar29 + 1;
                          uVar18 = crc32b(uVar18,uVar13,0x4c11db7);
                          uVar13 = (uint)*pbVar29;
                        } while (uVar13 != 0);
                        uVar18 = ~uVar18;
                      }
                      *(uint *)(&DAT_055dcbe4 + lVar27) = uVar18;
                      *(int *)((long)&DAT_055dcbe4 + lVar27 * 8 + 4) = (int)lVar27;
                      iVar11 = (int)DAT_055dcb98;
                      if ((int)DAT_055dcb98 < DAT_055dcb98._4_4_) {
                        DAT_055dcba0[(int)DAT_055dcb98] = &DAT_055dcbe4 + lVar27;
                        iVar11 = (int)DAT_055dcb98 + 1;
                        DAT_055dcb98 = CONCAT44(DAT_055dcb98._4_4_,iVar11);
                      }
                      puVar24 = DAT_055dcba0;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 6);
                    if (1 < iVar11) {
                      uVar18 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar18) break;
                        puVar20 = (uint *)puVar24[uVar18];
                        uVar16 = (ulong)uVar18;
                        if ((uVar13 - uVar18 & 1) == 0) {
                          uVar19 = uVar16;
                          puVar22 = puVar20;
                        }
                        else {
                          uVar19 = uVar16 + 1;
                          puVar22 = (uint *)puVar24[uVar19];
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar22 < *puVar20)) {
                            puVar24[uVar19] = puVar20;
                            puVar24[uVar16] = puVar22;
                            puVar22 = puVar20;
                          }
                        }
                        uVar21 = (ulong)uVar13;
                        uVar13 = uVar18;
                        if (~uVar16 + uVar21 != 0) {
                          puVar23 = puVar24 + uVar19 + 1;
                          do {
                            puVar20 = (uint *)*puVar23;
                            uVar17 = (uint)uVar19;
                            if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                               (*puVar22 <= *puVar20)) {
                              puVar25 = (uint *)puVar23[1];
                              if (puVar20 != (uint *)0x0) goto LAB_02980cf0;
LAB_02980ca0:
                              puVar20 = puVar25;
                            }
                            else {
                              puVar23[-1] = puVar20;
                              *puVar23 = puVar22;
                              puVar25 = (uint *)puVar23[1];
                              puVar20 = puVar22;
                              uVar13 = uVar17;
                              if (puVar22 == (uint *)0x0) goto LAB_02980ca0;
LAB_02980cf0:
                              if (puVar25 == (uint *)0x0) goto LAB_02980ca0;
                              if (*puVar20 <= *puVar25) goto LAB_02980ca0;
                              uVar13 = uVar17 + 1;
                              *puVar23 = puVar25;
                              puVar23[1] = puVar20;
                            }
                            uVar19 = uVar19 + 2;
                            puVar23 = puVar23 + 2;
                            puVar22 = puVar20;
                          } while (uVar21 != uVar19);
                        }
                        if ((int)uVar13 <= (int)uVar18) break;
                        uVar19 = (ulong)uVar13;
                        puVar20 = (uint *)puVar24[uVar13];
                        uVar18 = uVar13;
                        do {
                          puVar22 = (uint *)puVar24[uVar19 - 1];
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar20 < *puVar22)) {
                            uVar18 = (uint)uVar19;
                            puVar24[uVar19 - 1] = puVar20;
                            puVar24[uVar19] = puVar22;
                            puVar22 = puVar20;
                          }
                          uVar19 = uVar19 - 1;
                          puVar20 = puVar22;
                        } while ((long)uVar16 < (long)uVar19);
                      } while (uVar18 != uVar13);
                    }
                    DAT_055dcb94 = '\x01';
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                  }
                  else if (DAT_055dcb94 != '\x01') goto LAB_02980b6c;
                  if ((int)DAT_055dcb98 == 0) {
LAB_02980b6c:
                    uVar13 = 0;
                  }
                  else {
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if ((int)DAT_055dcb98 < 2) {
                      uVar18 = 0;
                      puVar22 = (uint *)*DAT_055dcba0;
                      uVar13 = uVar18;
                      if (puVar22 != (uint *)0x0) goto LAB_02980b34;
joined_r0x02980d24:
                      if (uVar13 < 6) {
                        uVar13 = *(uint *)(DAT_055dcba0[uVar13] + 4);
                        if (uVar13 < 6) {
                          DAT_055dcb88 = '\x01';
                          DAT_055dcb8c = uVar26;
                          DAT_055dcb90 = uVar13;
                          goto LAB_02981140;
                        }
                        goto LAB_02980b6c;
                      }
                    }
                    else {
                      uVar18 = 0;
                      iVar11 = (int)DAT_055dcb98 + -1;
                      do {
                        iVar14 = iVar11 + uVar18;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar18)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar13 = iVar14 >> 1;
                        if ((uint *)DAT_055dcba0[(int)uVar13] == (uint *)0x0)
                        goto joined_r0x02980d24;
                        uVar17 = *(uint *)DAT_055dcba0[(int)uVar13];
                        if (uVar17 == uVar26) goto joined_r0x02980d24;
                        if (uVar17 < uVar26) {
                          uVar18 = uVar13 + 1;
                        }
                        else {
                          iVar11 = uVar13 - 1;
                        }
                      } while ((int)uVar18 < iVar11);
                      puVar22 = (uint *)DAT_055dcba0[(int)uVar18];
                      uVar13 = uVar18;
                      if (puVar22 == (uint *)0x0) goto joined_r0x02980d24;
LAB_02980b34:
                      uVar13 = uVar18;
                      if (*puVar22 == uVar26) goto joined_r0x02980d24;
                    }
                    uVar13 = 0;
                  }
                }
              }
              else {
                if ((DAT_055dcaf0 == '\x01') && (DAT_055dcaf4 == uVar26)) {
                  uVar13 = DAT_055dcaf8;
                  if (5 < DAT_055dcaf8) goto LAB_029810d4;
                }
                else {
                  if ((DAT_055dcb40 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_055dcb40);
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if (iVar11 != 0) {
                      DAT_055dcb00 = 0x600000000;
                      DAT_055dcb08 = &DAT_055dcb10;
                      __cxa_guard_release(&DAT_055dcb40);
                      puVar20 = (uint *)PTR_DAT_04bc38b0;
                    }
                  }
                  if ((DAT_055dcb48 & 1) == 0) {
                    DAT_055dcb48 = 1;
                    if (((DAT_055dcb80 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_055dcb80), iVar11 != 0)) {
                      DAT_055dcb4c = 0xffffffff00000000;
                      DAT_055dcb54 = 0xffffffff00000000;
                      DAT_055dcb5c = 0xffffffff00000000;
                      DAT_055dcb64 = 0xffffffff00000000;
                      DAT_055dcb6c = 0xffffffff00000000;
                      DAT_055dcb74 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055dcb80);
                    }
                    lVar27 = 0;
                    do {
                      local_75 = 0;
                      pbVar29 = *(byte **)(PTR_s_MannequinPause01_04bc2df8 + lVar27 * 8 + 0x68);
                      if (local_174 != pbVar29) {
                        lVar15 = 0;
                        do {
                          if (pbVar29[lVar15] == 0) {
LAB_02980de8:
                            iVar11 = (int)lVar15;
joined_r0x02980dec:
                            if (0xff < iVar11) {
                              iVar11 = 0xff;
                            }
                            goto LAB_02980df4;
                          }
                          if (pbVar29[lVar15 + 1] == 0) {
                            lVar15 = lVar15 + 1;
                            goto LAB_02980de8;
                          }
                          if (pbVar29[lVar15 + 2] == 0) {
                            iVar11 = (int)lVar15 + 2;
                            goto joined_r0x02980dec;
                          }
                          lVar15 = lVar15 + 3;
                        } while (lVar15 != 0x80001);
                        iVar11 = 0;
LAB_02980df4:
                        memcpy(local_174,pbVar29,(long)iVar11);
                        local_174[iVar11] = 0;
                      }
                      uVar13 = (uint)*pbVar29;
                      if (*pbVar29 == 0) {
                        uVar18 = 0;
                      }
                      else {
                        uVar18 = 0xffffffff;
                        do {
                          pbVar29 = pbVar29 + 1;
                          uVar18 = crc32b(uVar18,uVar13,0x4c11db7);
                          uVar13 = (uint)*pbVar29;
                        } while (uVar13 != 0);
                        uVar18 = ~uVar18;
                      }
                      *(uint *)(&DAT_055dcb4c + lVar27) = uVar18;
                      *(int *)((long)&DAT_055dcb4c + lVar27 * 8 + 4) = (int)lVar27;
                      iVar11 = (int)DAT_055dcb00;
                      if ((int)DAT_055dcb00 < DAT_055dcb00._4_4_) {
                        *(undefined8 **)(DAT_055dcb08 + (long)(int)DAT_055dcb00 * 8) =
                             &DAT_055dcb4c + lVar27;
                        iVar11 = (int)DAT_055dcb00 + 1;
                        DAT_055dcb00 = CONCAT44(DAT_055dcb00._4_4_,iVar11);
                      }
                      puVar10 = DAT_055dcb08;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 6);
                    if (1 < iVar11) {
                      uVar18 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar18) break;
                        puVar20 = *(uint **)(puVar10 + (ulong)uVar18 * 8);
                        uVar16 = (ulong)uVar18;
                        if ((uVar13 - uVar18 & 1) == 0) {
                          uVar19 = uVar16;
                          puVar22 = puVar20;
                        }
                        else {
                          uVar19 = uVar16 + 1;
                          puVar22 = *(uint **)(puVar10 + uVar19 * 8);
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar22 < *puVar20)) {
                            *(uint **)(puVar10 + uVar19 * 8) = puVar20;
                            *(uint **)(puVar10 + uVar16 * 8) = puVar22;
                            puVar22 = puVar20;
                          }
                        }
                        uVar21 = (ulong)uVar13;
                        uVar13 = uVar18;
                        if (~uVar16 + uVar21 != 0) {
                          puVar24 = (undefined8 *)(puVar10 + uVar19 * 8 + 8);
                          do {
                            puVar20 = (uint *)*puVar24;
                            uVar17 = (uint)uVar19;
                            if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                               (*puVar22 <= *puVar20)) {
                              puVar25 = (uint *)puVar24[1];
                              if (puVar20 != (uint *)0x0) goto LAB_02981070;
LAB_02981020:
                              puVar20 = puVar25;
                            }
                            else {
                              puVar24[-1] = puVar20;
                              *puVar24 = puVar22;
                              puVar25 = (uint *)puVar24[1];
                              puVar20 = puVar22;
                              uVar13 = uVar17;
                              if (puVar22 == (uint *)0x0) goto LAB_02981020;
LAB_02981070:
                              if (puVar25 == (uint *)0x0) goto LAB_02981020;
                              if (*puVar20 <= *puVar25) goto LAB_02981020;
                              uVar13 = uVar17 + 1;
                              *puVar24 = puVar25;
                              puVar24[1] = puVar20;
                            }
                            uVar19 = uVar19 + 2;
                            puVar24 = puVar24 + 2;
                            puVar22 = puVar20;
                          } while (uVar21 != uVar19);
                        }
                        if ((int)uVar13 <= (int)uVar18) break;
                        uVar19 = (ulong)uVar13;
                        puVar20 = *(uint **)(puVar10 + (ulong)uVar13 * 8);
                        uVar18 = uVar13;
                        do {
                          puVar22 = *(uint **)(puVar10 + uVar19 * 8 + -8);
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar20 < *puVar22)) {
                            uVar18 = (uint)uVar19;
                            *(uint **)(puVar10 + uVar19 * 8 + -8) = puVar20;
                            *(uint **)(puVar10 + uVar19 * 8) = puVar22;
                            puVar22 = puVar20;
                          }
                          uVar19 = uVar19 - 1;
                          puVar20 = puVar22;
                        } while ((long)uVar16 < (long)uVar19);
                      } while (uVar18 != uVar13);
                    }
                    DAT_055dcafc = '\x01';
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                  }
                  else if (DAT_055dcafc != '\x01') goto LAB_029810d4;
                  if ((int)DAT_055dcb00 == 0) {
LAB_029810d4:
                    uVar13 = 0;
                  }
                  else {
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if ((int)DAT_055dcb00 < 2) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = 0;
                      iVar11 = (int)DAT_055dcb00 + -1;
                      do {
                        iVar14 = iVar11 + uVar13;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar13)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar18 = iVar14 >> 1;
                        if (*(uint **)(DAT_055dcb08 + (long)(int)uVar18 * 8) == (uint *)0x0)
                        goto joined_r0x02981100;
                        uVar17 = **(uint **)(DAT_055dcb08 + (long)(int)uVar18 * 8);
                        if (uVar17 == uVar26) goto joined_r0x02981100;
                        if (uVar17 < uVar26) {
                          uVar13 = uVar18 + 1;
                        }
                        else {
                          iVar11 = uVar18 - 1;
                        }
                      } while ((int)uVar13 < iVar11);
                    }
                    uVar18 = uVar13;
                    if ((*(uint **)(DAT_055dcb08 + (long)(int)uVar13 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_055dcb08 + (long)(int)uVar13 * 8) == uVar26)) {
joined_r0x02981100:
                      if (uVar18 < 6) {
                        uVar13 = *(uint *)(*(long *)(DAT_055dcb08 + (ulong)uVar18 * 8) + 4);
                        if (uVar13 < 6) {
                          DAT_055dcaf0 = '\x01';
                          DAT_055dcaf4 = uVar26;
                          DAT_055dcaf8 = uVar13;
                          goto LAB_02981138;
                        }
                        goto LAB_029810d4;
                      }
                    }
                    uVar13 = 0;
                  }
                }
LAB_02981138:
              }
LAB_02981140:
              puVar10 = PTR_DAT_04bc38b0;
              puVar22 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar22 != (uint *)0x0)) {
                if (*puVar22 != 0) {
                  uVar26 = puVar22[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar22[2] != 0) {
                      lVar27 = 0xc;
                      if (*(char *)((long)puVar22 + 10) != '\0') {
                        lVar27 = 0x1c;
                      }
                      lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                      puVar20 = (uint *)puVar10;
                      if (lVar27 != 0) {
                        uVar18 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar18 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar26);
                        }
                        if (*puVar22 <= uVar18) {
                          uVar18 = 0xffffffff;
                        }
                        if (uVar18 < DAT_055dca00) {
                          *(short *)(DAT_055dca08 + (long)(int)uVar18 * 2) = (short)uVar13;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar12 = *PTR_DAT_04bc38a8;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    *PTR_DAT_04bc38a8 = 1;
                    puVar20[8] = 0xffffffff;
                    puVar20[9] = 0xffffffff;
                    puVar20[0] = 0xffffffff;
                    puVar20[1] = 0xffffffff;
                    puVar20[2] = 0xffffffff;
                    puVar20[3] = 0xffffffff;
                    puVar20[10] = 0xffffffff;
                    puVar20[4] = 0xffffffff;
                    puVar20[5] = 0xffffffff;
                    puVar20[6] = 0xffffffff;
                    puVar20[7] = 0xffffffff;
                    uVar26 = *puVar1;
                  }
                  else {
                    uVar13 = puVar20[1];
                    if (-1 < (int)uVar13) {
                      if ((uint *)((long)puVar1 + (ulong)uVar13) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar13);
                        goto LAB_029812c0;
                      }
                      break;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar22 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar22 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar22))
                  goto LAB_029812c0;
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar22)) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar1 + (lVar27 - (long)puVar22);
                  if (lVar27 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar22));
                  puVar20[1] = 0xfffffffe;
                  if (uVar16 == 0) break;
                  puVar22 = (uint *)(lVar27 + 4);
                  while (puVar22[-1] != 0x62ff0c3d) {
                    puVar22 = puVar22 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) goto LAB_029812bc;
                  }
                  uVar26 = 0;
                  if (*puVar22 != 0xffffffff) {
                    uVar26 = *puVar22;
                  }
                  puVar20[1] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_029812bc:
              uVar26 = 0;
LAB_029812c0:
              if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
                 (*(char *)(lVar27 + 0xb) == '\0')) {
                if ((DAT_055dcc88 == '\x01') && (DAT_055dcc8c == uVar26)) {
                  uVar13 = DAT_055dcc90;
                  if (2 < DAT_055dcc90) goto LAB_029815cc;
                }
                else {
                  if ((DAT_055dccc0 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_055dccc0);
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if (iVar11 != 0) {
                      DAT_055dcc98 = 0x300000000;
                      DAT_055dcca0 = (undefined8 *)&DAT_055dcca8;
                      __cxa_guard_release(&DAT_055dccc0);
                      puVar20 = (uint *)PTR_DAT_04bc38b0;
                    }
                  }
                  if ((DAT_055dccc8 & 1) == 0) {
                    DAT_055dccc8 = 1;
                    if (((DAT_055dcce8 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_055dcce8), iVar11 != 0)) {
                      DAT_055dccdc = 0xffffffff00000000;
                      _DAT_055dcccc = 0xffffffff00000000;
                      DAT_055dccd4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055dcce8);
                    }
                    _DAT_055dcccc = (ulong)~uVar6;
                    iVar11 = (int)DAT_055dcc98;
                    iVar14 = DAT_055dcc98._4_4_;
                    if ((int)DAT_055dcc98 < DAT_055dcc98._4_4_) {
                      DAT_055dcca0[(int)DAT_055dcc98] = &DAT_055dcccc;
                      iVar11 = (int)DAT_055dcc98 + 1;
                      DAT_055dcc98 = CONCAT44(DAT_055dcc98._4_4_,iVar11);
                      iVar14 = DAT_055dcc98._4_4_;
                    }
                    uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                    uVar3 = crc32b(uVar2,0xaf,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xaa,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x82,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xb9,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x9e,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x82,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xb9,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x82,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xa4,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                    uVar13 = crc32b(uVar3,0x96,0x4c11db7);
                    DAT_055dccd4 = CONCAT44(1,~uVar13);
                    if (iVar11 < iVar14) {
                      DAT_055dcca0[iVar11] = &DAT_055dccd4;
                      iVar11 = (int)DAT_055dcc98 + 1;
                      DAT_055dcc98 = CONCAT44(DAT_055dcc98._4_4_,iVar11);
                      iVar14 = DAT_055dcc98._4_4_;
                    }
                    uVar2 = crc32b(uVar2,0xab,0x4c11db7);
                    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x83,0x4c11db7);
                    uVar2 = crc32b(uVar2,0xbc,0x4c11db7);
                    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x83,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x8b,0x4c11db7);
                    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x83,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x90,0x4c11db7);
                    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x83,0x4c11db7);
                    uVar13 = crc32b(uVar2,0xab,0x4c11db7);
                    DAT_055dccdc = CONCAT44(2,~uVar13);
                    if (iVar11 < iVar14) {
                      DAT_055dcca0[iVar11] = &DAT_055dccdc;
                      iVar11 = (int)DAT_055dcc98 + 1;
                      DAT_055dcc98 = CONCAT44(DAT_055dcc98._4_4_,iVar11);
                    }
                    puVar24 = DAT_055dcca0;
                    if (1 < iVar11) {
                      uVar18 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar18) break;
                        puVar20 = (uint *)puVar24[uVar18];
                        uVar16 = (ulong)uVar18;
                        if ((uVar13 - uVar18 & 1) == 0) {
                          uVar19 = uVar16;
                          puVar22 = puVar20;
                        }
                        else {
                          uVar19 = uVar16 + 1;
                          puVar22 = (uint *)puVar24[uVar19];
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar22 < *puVar20)) {
                            puVar24[uVar19] = puVar20;
                            puVar24[uVar16] = puVar22;
                            puVar22 = puVar20;
                          }
                        }
                        uVar21 = (ulong)uVar13;
                        uVar13 = uVar18;
                        if (~uVar16 + uVar21 != 0) {
                          puVar23 = puVar24 + uVar19 + 1;
                          do {
                            puVar20 = (uint *)*puVar23;
                            uVar17 = (uint)uVar19;
                            if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                               (*puVar22 <= *puVar20)) {
                              puVar25 = (uint *)puVar23[1];
                              if (puVar20 != (uint *)0x0) goto LAB_02981750;
LAB_02981700:
                              puVar20 = puVar25;
                            }
                            else {
                              puVar23[-1] = puVar20;
                              *puVar23 = puVar22;
                              puVar25 = (uint *)puVar23[1];
                              puVar20 = puVar22;
                              uVar13 = uVar17;
                              if (puVar22 == (uint *)0x0) goto LAB_02981700;
LAB_02981750:
                              if (puVar25 == (uint *)0x0) goto LAB_02981700;
                              if (*puVar20 <= *puVar25) goto LAB_02981700;
                              uVar13 = uVar17 + 1;
                              *puVar23 = puVar25;
                              puVar23[1] = puVar20;
                            }
                            uVar19 = uVar19 + 2;
                            puVar23 = puVar23 + 2;
                            puVar22 = puVar20;
                          } while (uVar21 != uVar19);
                        }
                        if ((int)uVar13 <= (int)uVar18) break;
                        uVar19 = (ulong)uVar13;
                        puVar20 = (uint *)puVar24[uVar13];
                        uVar18 = uVar13;
                        do {
                          puVar22 = (uint *)puVar24[uVar19 - 1];
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar20 < *puVar22)) {
                            uVar18 = (uint)uVar19;
                            puVar24[uVar19 - 1] = puVar20;
                            puVar24[uVar19] = puVar22;
                            puVar22 = puVar20;
                          }
                          uVar19 = uVar19 - 1;
                          puVar20 = puVar22;
                        } while ((long)uVar16 < (long)uVar19);
                      } while (uVar18 != uVar13);
                    }
                    DAT_055dcc94 = '\x01';
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                  }
                  else if (DAT_055dcc94 != '\x01') goto LAB_029815cc;
                  if ((int)DAT_055dcc98 == 0) {
LAB_029815cc:
                    uVar13 = 0;
                  }
                  else {
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if ((int)DAT_055dcc98 < 2) {
                      uVar18 = 0;
                      puVar22 = (uint *)*DAT_055dcca0;
                      uVar13 = uVar18;
                      if (puVar22 != (uint *)0x0) goto LAB_02981594;
joined_r0x029815a8:
                      if (uVar13 < 3) {
                        uVar13 = *(uint *)(DAT_055dcca0[uVar13] + 4);
                        if (uVar13 < 3) {
                          DAT_055dcc88 = '\x01';
                          DAT_055dcc8c = uVar26;
                          DAT_055dcc90 = uVar13;
                          goto LAB_02981b34;
                        }
                        goto LAB_029815cc;
                      }
                    }
                    else {
                      uVar18 = 0;
                      iVar11 = (int)DAT_055dcc98 + -1;
                      do {
                        iVar14 = iVar11 + uVar18;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar18)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar13 = iVar14 >> 1;
                        if ((uint *)DAT_055dcca0[(int)uVar13] == (uint *)0x0)
                        goto joined_r0x029815a8;
                        uVar17 = *(uint *)DAT_055dcca0[(int)uVar13];
                        if (uVar17 == uVar26) goto joined_r0x029815a8;
                        if (uVar17 < uVar26) {
                          uVar18 = uVar13 + 1;
                        }
                        else {
                          iVar11 = uVar13 - 1;
                        }
                      } while ((int)uVar18 < iVar11);
                      puVar22 = (uint *)DAT_055dcca0[(int)uVar18];
                      uVar13 = uVar18;
                      if (puVar22 == (uint *)0x0) goto joined_r0x029815a8;
LAB_02981594:
                      uVar13 = uVar18;
                      if (*puVar22 == uVar26) goto joined_r0x029815a8;
                    }
                    uVar13 = 0;
                  }
                }
              }
              else {
                if ((DAT_055dcc20 == '\x01') && (DAT_055dcc24 == uVar26)) {
                  uVar13 = DAT_055dcc28;
                  if (2 < DAT_055dcc28) goto LAB_02981ac4;
                }
                else {
                  if ((DAT_055dcc58 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_055dcc58);
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if (iVar11 != 0) {
                      DAT_055dcc30 = 0x300000000;
                      DAT_055dcc38 = &DAT_055dcc40;
                      __cxa_guard_release(&DAT_055dcc58);
                      puVar20 = (uint *)PTR_DAT_04bc38b0;
                    }
                  }
                  if ((DAT_055dcc60 & 1) == 0) {
                    DAT_055dcc60 = 1;
                    if (((DAT_055dcc80 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_055dcc80), iVar11 != 0)) {
                      DAT_055dcc74 = 0xffffffff00000000;
                      _DAT_055dcc64 = 0xffffffff00000000;
                      DAT_055dcc6c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055dcc80);
                    }
                    _DAT_055dcc64 = (ulong)~uVar8;
                    iVar11 = (int)DAT_055dcc30;
                    iVar14 = DAT_055dcc30._4_4_;
                    if ((int)DAT_055dcc30 < DAT_055dcc30._4_4_) {
                      *(undefined4 **)(DAT_055dcc38 + (long)(int)DAT_055dcc30 * 8) = &DAT_055dcc64;
                      iVar11 = (int)DAT_055dcc30 + 1;
                      DAT_055dcc30 = CONCAT44(DAT_055dcc30._4_4_,iVar11);
                      iVar14 = DAT_055dcc30._4_4_;
                    }
                    DAT_055dcc6c = CONCAT44(1,~uVar7);
                    if (iVar11 < iVar14) {
                      *(undefined8 **)(DAT_055dcc38 + (long)iVar11 * 8) = &DAT_055dcc6c;
                      iVar11 = (int)DAT_055dcc30 + 1;
                      DAT_055dcc30 = CONCAT44(DAT_055dcc30._4_4_,iVar11);
                      iVar14 = DAT_055dcc30._4_4_;
                    }
                    uVar2 = crc32b(uVar4,0x61,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x69,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x76,0x4c11db7);
                    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
                    uVar13 = crc32b(uVar2,0x6c,0x4c11db7);
                    DAT_055dcc74 = CONCAT44(2,~uVar13);
                    if (iVar11 < iVar14) {
                      *(undefined8 **)(DAT_055dcc38 + (long)iVar11 * 8) = &DAT_055dcc74;
                      iVar11 = (int)DAT_055dcc30 + 1;
                      DAT_055dcc30 = CONCAT44(DAT_055dcc30._4_4_,iVar11);
                    }
                    puVar10 = DAT_055dcc38;
                    if (1 < iVar11) {
                      uVar18 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar18) break;
                        puVar20 = *(uint **)(puVar10 + (ulong)uVar18 * 8);
                        uVar16 = (ulong)uVar18;
                        if ((uVar13 - uVar18 & 1) == 0) {
                          uVar19 = uVar16;
                          puVar22 = puVar20;
                        }
                        else {
                          uVar19 = uVar16 + 1;
                          puVar22 = *(uint **)(puVar10 + uVar19 * 8);
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar22 < *puVar20)) {
                            *(uint **)(puVar10 + uVar19 * 8) = puVar20;
                            *(uint **)(puVar10 + uVar16 * 8) = puVar22;
                            puVar22 = puVar20;
                          }
                        }
                        uVar21 = (ulong)uVar13;
                        uVar13 = uVar18;
                        if (~uVar16 + uVar21 != 0) {
                          puVar24 = (undefined8 *)(puVar10 + uVar19 * 8 + 8);
                          do {
                            puVar20 = (uint *)*puVar24;
                            uVar17 = (uint)uVar19;
                            if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                               (*puVar22 <= *puVar20)) {
                              puVar25 = (uint *)puVar24[1];
                              if (puVar20 != (uint *)0x0) goto LAB_02981a60;
LAB_02981a10:
                              puVar20 = puVar25;
                            }
                            else {
                              puVar24[-1] = puVar20;
                              *puVar24 = puVar22;
                              puVar25 = (uint *)puVar24[1];
                              puVar20 = puVar22;
                              uVar13 = uVar17;
                              if (puVar22 == (uint *)0x0) goto LAB_02981a10;
LAB_02981a60:
                              if (puVar25 == (uint *)0x0) goto LAB_02981a10;
                              if (*puVar20 <= *puVar25) goto LAB_02981a10;
                              uVar13 = uVar17 + 1;
                              *puVar24 = puVar25;
                              puVar24[1] = puVar20;
                            }
                            uVar19 = uVar19 + 2;
                            puVar24 = puVar24 + 2;
                            puVar22 = puVar20;
                          } while (uVar21 != uVar19);
                        }
                        if ((int)uVar13 <= (int)uVar18) break;
                        uVar19 = (ulong)uVar13;
                        puVar20 = *(uint **)(puVar10 + (ulong)uVar13 * 8);
                        uVar18 = uVar13;
                        do {
                          puVar22 = *(uint **)(puVar10 + uVar19 * 8 + -8);
                          if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                             (*puVar20 < *puVar22)) {
                            uVar18 = (uint)uVar19;
                            *(uint **)(puVar10 + uVar19 * 8 + -8) = puVar20;
                            *(uint **)(puVar10 + uVar19 * 8) = puVar22;
                            puVar22 = puVar20;
                          }
                          uVar19 = uVar19 - 1;
                          puVar20 = puVar22;
                        } while ((long)uVar16 < (long)uVar19);
                      } while (uVar18 != uVar13);
                    }
                    DAT_055dcc2c = '\x01';
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                  }
                  else if (DAT_055dcc2c != '\x01') goto LAB_02981ac4;
                  if ((int)DAT_055dcc30 == 0) {
LAB_02981ac4:
                    uVar13 = 0;
                  }
                  else {
                    puVar20 = (uint *)PTR_DAT_04bc38b0;
                    if ((int)DAT_055dcc30 < 2) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = 0;
                      iVar11 = (int)DAT_055dcc30 + -1;
                      do {
                        iVar14 = iVar11 + uVar13;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar13)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar18 = iVar14 >> 1;
                        if (*(uint **)(DAT_055dcc38 + (long)(int)uVar18 * 8) == (uint *)0x0)
                        goto joined_r0x02981af4;
                        uVar17 = **(uint **)(DAT_055dcc38 + (long)(int)uVar18 * 8);
                        if (uVar17 == uVar26) goto joined_r0x02981af4;
                        if (uVar17 < uVar26) {
                          uVar13 = uVar18 + 1;
                        }
                        else {
                          iVar11 = uVar18 - 1;
                        }
                      } while ((int)uVar13 < iVar11);
                    }
                    uVar18 = uVar13;
                    if ((*(uint **)(DAT_055dcc38 + (long)(int)uVar13 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_055dcc38 + (long)(int)uVar13 * 8) == uVar26)) {
joined_r0x02981af4:
                      if (uVar18 < 3) {
                        uVar13 = *(uint *)(*(long *)(DAT_055dcc38 + (ulong)uVar18 * 8) + 4);
                        if (uVar13 < 3) {
                          DAT_055dcc20 = '\x01';
                          DAT_055dcc24 = uVar26;
                          DAT_055dcc28 = uVar13;
                          goto LAB_02981b2c;
                        }
                        goto LAB_02981ac4;
                      }
                    }
                    uVar13 = 0;
                  }
                }
LAB_02981b2c:
              }
LAB_02981b34:
              puVar10 = PTR_DAT_04bc38b0;
              puVar22 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar22 != (uint *)0x0)) {
                if (*puVar22 != 0) {
                  uVar26 = puVar22[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar22[2] != 0) {
                      lVar27 = 0xc;
                      if (*(char *)((long)puVar22 + 10) != '\0') {
                        lVar27 = 0x1c;
                      }
                      lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                      puVar20 = (uint *)puVar10;
                      if (lVar27 != 0) {
                        uVar18 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar18 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar26);
                        }
                        if (*puVar22 <= uVar18) {
                          uVar18 = 0xffffffff;
                        }
                        if (uVar18 < *(uint *)PTR_DAT_04bc38a0) {
                          *(short *)(*(long *)(PTR_DAT_04bc38a0 + 8) + (long)(int)uVar18 * 2) =
                               (short)uVar13;
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
    } while (uVar28 != uVar9);
  }
  return;
}

