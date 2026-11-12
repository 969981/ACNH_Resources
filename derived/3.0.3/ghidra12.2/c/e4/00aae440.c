
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aae440(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  uint uVar25;
  byte *pbVar26;
  long lVar27;
  uint uVar28;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar7 = *param_1, uVar7 != 0)) {
    uVar2 = crc32b(0xffffffff,0x45,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x44,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,0x73,0x4c11db7);
    uVar2 = crc32b(uVar2,0x62,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar25 = 0;
    uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x62,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar2 = crc32b(uVar2,0x52,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0x41,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,99,0x4c11db7);
    uVar3 = crc32b(uVar3,99,0x4c11db7);
    uVar2 = crc32b(uVar2,100,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar4 = crc32b(uVar2,0x4f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x73,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar5 = crc32b(uVar3,0x73,0x4c11db7);
    uVar3 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar6 = crc32b(uVar3,0x79,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe2,0x4c11db7);
    uVar3 = crc32b(uVar3,0x97,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8b,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x82,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
    uVar3 = crc32b(uVar3,0x85,0x4c11db7);
    uVar3 = crc32b(uVar3,0xa7,0x4c11db7);
    puVar19 = (uint *)PTR_DAT_04bb5810;
    do {
      if (uVar25 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar13 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar13 = 0x1c;
            }
            puVar1 = (uint *)((ulong)(param_1[1] * uVar25 + (uint)(ushort)param_1[2] * 8 + iVar13) +
                             (long)param_1);
            if (puVar1 != (uint *)0x0) {
              uVar28 = *puVar1;
              if (uVar28 != 0) {
                cVar9 = *PTR_DAT_04bb5808;
                do {
                  if (cVar9 == '\0') {
                    cVar9 = '\x01';
                    *PTR_DAT_04bb5808 = 1;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    uVar28 = *puVar1;
                  }
                  else {
                    uVar12 = *puVar19;
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar28 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_00aae710;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar28;
                  uVar28 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar28 = 0, puVar1 == puVar21))
                  goto LAB_00aae710;
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar1 + (lVar27 - (long)puVar21);
                  if (lVar27 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  *puVar19 = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar27 + 4);
                  while (puVar21[-1] != 0xfdb1f290) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_00aae70c;
                  }
                  uVar28 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar28 = *puVar21;
                  }
                  *puVar19 = uVar28;
                  uVar28 = *puVar1;
                  if (uVar28 == 0) break;
                } while( true );
              }
LAB_00aae70c:
              uVar28 = 0;
LAB_00aae710:
              if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
                 (*(char *)(lVar27 + 0xb) == '\0')) {
                if ((DAT_04da8058 == '\x01') && (DAT_04da805c == uVar28)) {
                  uVar12 = DAT_04da8060;
                  if (4 < DAT_04da8060) goto LAB_00aae9c4;
                }
                else {
                  if ((DAT_04da80a0 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_04da80a0);
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if (iVar13 != 0) {
                      DAT_04da8068 = 0x500000000;
                      DAT_04da8070 = (undefined8 *)&DAT_04da8078;
                      __cxa_guard_release(&DAT_04da80a0);
                      puVar19 = (uint *)PTR_DAT_04bb5810;
                    }
                  }
                  if ((DAT_04da80a8 & 1) == 0) {
                    DAT_04da80a8 = 1;
                    if (((DAT_04da80d8 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04da80d8), iVar13 != 0)) {
                      DAT_04da80cc = 0xffffffff00000000;
                      DAT_04da80ac = 0xffffffff00000000;
                      DAT_04da80b4 = 0xffffffff00000000;
                      DAT_04da80bc = 0xffffffff00000000;
                      DAT_04da80c4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da80d8);
                    }
                    lVar27 = 0;
                    do {
                      local_75 = 0;
                      pbVar26 = (&PTR_DAT_049324e0)[lVar27];
                      if (local_174 != pbVar26) {
                        lVar14 = 0;
                        do {
                          if (pbVar26[lVar14] == 0) {
LAB_00aae854:
                            iVar13 = (int)lVar14;
joined_r0x00aae858:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_00aae860;
                          }
                          if (pbVar26[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_00aae854;
                          }
                          if (pbVar26[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x00aae858;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_00aae860:
                        memcpy(local_174,pbVar26,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar26;
                      if (*pbVar26 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar26 = pbVar26 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar26;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_04da80ac + lVar27) = uVar17;
                      *(int *)((long)&DAT_04da80ac + lVar27 * 8 + 4) = (int)lVar27;
                      iVar13 = (int)DAT_04da8068;
                      if ((int)DAT_04da8068 < DAT_04da8068._4_4_) {
                        DAT_04da8070[(int)DAT_04da8068] = &DAT_04da80ac + lVar27;
                        iVar13 = (int)DAT_04da8068 + 1;
                        DAT_04da8068 = CONCAT44(DAT_04da8068._4_4_,iVar13);
                      }
                      puVar23 = DAT_04da8070;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 5);
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
                              if (puVar19 != (uint *)0x0) goto LAB_00aaeb40;
LAB_00aaeaf0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_00aaeaf0;
LAB_00aaeb40:
                              if (puVar24 == (uint *)0x0) goto LAB_00aaeaf0;
                              if (*puVar19 <= *puVar24) goto LAB_00aaeaf0;
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
                    DAT_04da8064 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                  }
                  else if (DAT_04da8064 != '\x01') goto LAB_00aae9c4;
                  if ((int)DAT_04da8068 == 0) {
LAB_00aae9c4:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if ((int)DAT_04da8068 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_04da8070;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_00aae990;
joined_r0x00aaeb74:
                      if (uVar12 < 5) {
                        uVar12 = *(uint *)(DAT_04da8070[uVar12] + 4);
                        if (uVar12 < 5) {
                          DAT_04da8058 = '\x01';
                          DAT_04da805c = uVar28;
                          DAT_04da8060 = uVar12;
                          goto LAB_00aaef30;
                        }
                        goto LAB_00aae9c4;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_04da8068 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_04da8070[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x00aaeb74;
                        uVar16 = *(uint *)DAT_04da8070[(int)uVar12];
                        if (uVar16 == uVar28) goto joined_r0x00aaeb74;
                        if (uVar16 < uVar28) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_04da8070[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x00aaeb74;
LAB_00aae990:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar28) goto joined_r0x00aaeb74;
                    }
                    uVar12 = 0;
                  }
                }
LAB_00aaef30:
                uVar10 = (undefined2)uVar12;
              }
              else {
                if ((DAT_04da7fd0 == '\x01') && (DAT_04da7fd4 == uVar28)) {
                  uVar12 = DAT_04da7fd8;
                  if (4 < DAT_04da7fd8) goto LAB_00aaef10;
                }
                else {
                  if ((DAT_04da8018 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_04da8018);
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if (iVar13 != 0) {
                      DAT_04da7fe0 = 0x500000000;
                      DAT_04da7fe8 = &DAT_04da7ff0;
                      __cxa_guard_release(&DAT_04da8018);
                      puVar19 = (uint *)PTR_DAT_04bb5810;
                    }
                  }
                  if ((DAT_04da8020 & 1) == 0) {
                    DAT_04da8020 = 1;
                    if (((DAT_04da8050 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04da8050), iVar13 != 0)) {
                      DAT_04da8044 = 0xffffffff00000000;
                      DAT_04da8024 = 0xffffffff00000000;
                      DAT_04da802c = 0xffffffff00000000;
                      DAT_04da8034 = 0xffffffff00000000;
                      DAT_04da803c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da8050);
                    }
                    lVar27 = 0;
                    do {
                      local_75 = 0;
                      pbVar26 = (&PTR_DAT_049323a8)[lVar27];
                      if (local_174 != pbVar26) {
                        lVar14 = 0;
                        do {
                          if (pbVar26[lVar14] == 0) {
LAB_00aaec28:
                            iVar13 = (int)lVar14;
joined_r0x00aaec2c:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_00aaec34;
                          }
                          if (pbVar26[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_00aaec28;
                          }
                          if (pbVar26[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x00aaec2c;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_00aaec34:
                        memcpy(local_174,pbVar26,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar26;
                      if (*pbVar26 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar26 = pbVar26 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar26;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_04da8024 + lVar27) = uVar17;
                      *(int *)((long)&DAT_04da8024 + lVar27 * 8 + 4) = (int)lVar27;
                      iVar13 = (int)DAT_04da7fe0;
                      if ((int)DAT_04da7fe0 < DAT_04da7fe0._4_4_) {
                        *(undefined8 **)(DAT_04da7fe8 + (long)(int)DAT_04da7fe0 * 8) =
                             &DAT_04da8024 + lVar27;
                        iVar13 = (int)DAT_04da7fe0 + 1;
                        DAT_04da7fe0 = CONCAT44(DAT_04da7fe0._4_4_,iVar13);
                      }
                      puVar8 = DAT_04da7fe8;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 5);
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
                              if (puVar19 != (uint *)0x0) goto LAB_00aaeeb0;
LAB_00aaee60:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_00aaee60;
LAB_00aaeeb0:
                              if (puVar24 == (uint *)0x0) goto LAB_00aaee60;
                              if (*puVar19 <= *puVar24) goto LAB_00aaee60;
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
                    DAT_04da7fdc = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                  }
                  else if (DAT_04da7fdc != '\x01') goto LAB_00aaef10;
                  if ((int)DAT_04da7fe0 == 0) {
LAB_00aaef10:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if ((int)DAT_04da7fe0 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_04da7fe0 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_04da7fe8 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x00aaef44;
                        uVar16 = **(uint **)(DAT_04da7fe8 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar28) goto joined_r0x00aaef44;
                        if (uVar16 < uVar28) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_04da7fe8 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_04da7fe8 + (long)(int)uVar12 * 8) == uVar28)) {
joined_r0x00aaef44:
                      if (uVar17 < 5) {
                        uVar12 = *(uint *)(*(long *)(DAT_04da7fe8 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 5) {
                          DAT_04da7fd0 = '\x01';
                          DAT_04da7fd4 = uVar28;
                          DAT_04da7fd8 = uVar12;
                          goto LAB_00aaef74;
                        }
                        goto LAB_00aaef10;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_00aaef74:
                uVar10 = (undefined2)uVar12;
              }
              puVar8 = PTR_DAT_04bb5810;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar28 = puVar21[1];
                  if (uVar28 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar27 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar27 = 0x1c;
                      }
                      lVar27 = (long)puVar21 + lVar27 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar27 != 0) {
                        uVar12 = 0;
                        if ((ulong)uVar28 != 0) {
                          uVar12 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar28);
                        }
                        if (*puVar21 <= uVar12) {
                          uVar12 = 0xffffffff;
                        }
                        if (uVar12 < *(uint *)PTR_DAT_04bb6388) {
                          *(undefined2 *)(*(long *)(PTR_DAT_04bb6388 + 8) + (long)(int)uVar12 * 2) =
                               uVar10;
                        }
                      }
                    }
                  }
                }
              }
              uVar28 = *puVar1;
              if (uVar28 == 0) {
LAB_00aaf104:
                uVar28 = 0;
              }
              else {
                cVar9 = *PTR_DAT_04bb5808;
                do {
                  if (cVar9 == '\0') {
                    cVar9 = '\x01';
                    *PTR_DAT_04bb5808 = 1;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    uVar28 = *puVar1;
                  }
                  else {
                    uVar12 = puVar19[2];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar28 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_00aaf110;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar28;
                  uVar28 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar28 = 0, puVar1 == puVar21))
                  goto LAB_00aaf110;
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar1 + (lVar27 - (long)puVar21);
                  if (lVar27 == 0) goto LAB_00aaf104;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[2] = 0xfffffffe;
                  if (uVar15 == 0) goto LAB_00aaf104;
                  puVar21 = (uint *)(lVar27 + 4);
                  while (puVar21[-1] != 0xfca0adb0) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_00aaf104;
                  }
                  uVar28 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar28 = *puVar21;
                  }
                  puVar19[2] = uVar28;
                  uVar28 = *puVar1;
                } while (uVar28 != 0);
                uVar28 = 0;
              }
LAB_00aaf110:
              if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
                 (*(char *)(lVar27 + 0xb) == '\0')) {
                if ((DAT_04da8148 == '\x01') && (DAT_04da814c == uVar28)) {
                  uVar12 = DAT_04da8150;
                  if (2 < DAT_04da8150) goto LAB_00aaf4b4;
                }
                else {
                  if ((DAT_04da8180 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_04da8180);
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if (iVar13 != 0) {
                      DAT_04da8158 = 0x300000000;
                      DAT_04da8160 = (undefined8 *)&DAT_04da8168;
                      __cxa_guard_release(&DAT_04da8180);
                      puVar19 = (uint *)PTR_DAT_04bb5810;
                    }
                  }
                  if ((DAT_04da8188 & 1) == 0) {
                    DAT_04da8188 = 1;
                    if (((DAT_04da81a8 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04da81a8), iVar13 != 0)) {
                      DAT_04da818c = 0xffffffff00000000;
                      DAT_04da8194 = 0xffffffff00000000;
                      DAT_04da819c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da81a8);
                    }
                    uVar4 = crc32b(0xffffffff,0xc3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x97,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x8f,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe7,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x85,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xa7,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xc3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x97,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x9b,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xb8,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x8d,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe8,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xbe,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xbc,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                    uVar12 = crc32b(uVar4,0xbf,0x4c11db7);
                    DAT_04da818c = (ulong)~uVar12;
                    iVar13 = (int)DAT_04da8158;
                    iVar11 = DAT_04da8158._4_4_;
                    if ((int)DAT_04da8158 < DAT_04da8158._4_4_) {
                      DAT_04da8160[(int)DAT_04da8158] = &DAT_04da818c;
                      iVar13 = (int)DAT_04da8158 + 1;
                      DAT_04da8158 = CONCAT44(DAT_04da8158._4_4_,iVar13);
                      iVar11 = DAT_04da8158._4_4_;
                    }
                    uVar4 = crc32b(uVar3,0xc3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x97,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x9b,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xb8,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x8d,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe8,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xbe,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xbc,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                    uVar12 = crc32b(uVar4,0xbf,0x4c11db7);
                    DAT_04da8194 = CONCAT44(1,~uVar12);
                    if (iVar13 < iVar11) {
                      DAT_04da8160[iVar13] = &DAT_04da8194;
                      iVar13 = (int)DAT_04da8158 + 1;
                      DAT_04da8158 = CONCAT44(DAT_04da8158._4_4_,iVar13);
                      iVar11 = DAT_04da8158._4_4_;
                    }
                    uVar4 = crc32b(uVar3,0xe2,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x97,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x8b,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x9b,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xb8,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x8d,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe8,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xbe,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xbc,0x4c11db7);
                    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                    uVar12 = crc32b(uVar4,0xbf,0x4c11db7);
                    DAT_04da819c = CONCAT44(2,~uVar12);
                    if (iVar13 < iVar11) {
                      DAT_04da8160[iVar13] = &DAT_04da819c;
                      iVar13 = (int)DAT_04da8158 + 1;
                      DAT_04da8158 = CONCAT44(DAT_04da8158._4_4_,iVar13);
                    }
                    puVar23 = DAT_04da8160;
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
                              if (puVar19 != (uint *)0x0) goto LAB_00aaf630;
LAB_00aaf5e0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_00aaf5e0;
LAB_00aaf630:
                              if (puVar24 == (uint *)0x0) goto LAB_00aaf5e0;
                              if (*puVar19 <= *puVar24) goto LAB_00aaf5e0;
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
                    DAT_04da8154 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                  }
                  else if (DAT_04da8154 != '\x01') goto LAB_00aaf4b4;
                  if ((int)DAT_04da8158 == 0) {
LAB_00aaf4b4:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if ((int)DAT_04da8158 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_04da8160;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_00aaf480;
joined_r0x00aaf494:
                      if (uVar12 < 3) {
                        uVar12 = *(uint *)(DAT_04da8160[uVar12] + 4);
                        if (uVar12 < 3) {
                          DAT_04da8148 = '\x01';
                          DAT_04da814c = uVar28;
                          DAT_04da8150 = uVar12;
                          goto LAB_00aaf9fc;
                        }
                        goto LAB_00aaf4b4;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_04da8158 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_04da8160[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x00aaf494;
                        uVar16 = *(uint *)DAT_04da8160[(int)uVar12];
                        if (uVar16 == uVar28) goto joined_r0x00aaf494;
                        if (uVar16 < uVar28) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_04da8160[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x00aaf494;
LAB_00aaf480:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar28) goto joined_r0x00aaf494;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_04da80e0 == '\x01') && (DAT_04da80e4 == uVar28)) {
                  uVar12 = DAT_04da80e8;
                  if (2 < DAT_04da80e8) goto LAB_00aaf980;
                }
                else {
                  if ((DAT_04da8118 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_04da8118);
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if (iVar13 != 0) {
                      DAT_04da80f0 = 0x300000000;
                      DAT_04da80f8 = &DAT_04da8100;
                      __cxa_guard_release(&DAT_04da8118);
                      puVar19 = (uint *)PTR_DAT_04bb5810;
                    }
                  }
                  if ((DAT_04da8120 & 1) == 0) {
                    DAT_04da8120 = 1;
                    if (((DAT_04da8140 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04da8140), iVar13 != 0)) {
                      DAT_04da8134 = 0xffffffff00000000;
                      _DAT_04da8124 = 0xffffffff00000000;
                      DAT_04da812c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da8140);
                    }
                    _DAT_04da8124 = (ulong)~uVar5;
                    iVar13 = (int)DAT_04da80f0;
                    iVar11 = DAT_04da80f0._4_4_;
                    if ((int)DAT_04da80f0 < DAT_04da80f0._4_4_) {
                      *(undefined4 **)(DAT_04da80f8 + (long)(int)DAT_04da80f0 * 8) = &DAT_04da8124;
                      iVar13 = (int)DAT_04da80f0 + 1;
                      DAT_04da80f0 = CONCAT44(DAT_04da80f0._4_4_,iVar13);
                      iVar11 = DAT_04da80f0._4_4_;
                    }
                    DAT_04da812c = CONCAT44(1,~uVar6);
                    if (iVar13 < iVar11) {
                      *(undefined8 **)(DAT_04da80f8 + (long)iVar13 * 8) = &DAT_04da812c;
                      iVar13 = (int)DAT_04da80f0 + 1;
                      DAT_04da80f0 = CONCAT44(DAT_04da80f0._4_4_,iVar13);
                      iVar11 = DAT_04da80f0._4_4_;
                    }
                    uVar4 = crc32b(uVar2,0x57,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
                    uVar4 = crc32b(uVar4,0x74,0x4c11db7);
                    uVar12 = crc32b(uVar4,0x65,0x4c11db7);
                    DAT_04da8134 = CONCAT44(2,~uVar12);
                    if (iVar13 < iVar11) {
                      *(undefined8 **)(DAT_04da80f8 + (long)iVar13 * 8) = &DAT_04da8134;
                      iVar13 = (int)DAT_04da80f0 + 1;
                      DAT_04da80f0 = CONCAT44(DAT_04da80f0._4_4_,iVar13);
                    }
                    puVar8 = DAT_04da80f8;
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
                              if (puVar19 != (uint *)0x0) goto LAB_00aaf920;
LAB_00aaf8d0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_00aaf8d0;
LAB_00aaf920:
                              if (puVar24 == (uint *)0x0) goto LAB_00aaf8d0;
                              if (*puVar19 <= *puVar24) goto LAB_00aaf8d0;
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
                    DAT_04da80ec = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                  }
                  else if (DAT_04da80ec != '\x01') goto LAB_00aaf980;
                  if ((int)DAT_04da80f0 == 0) {
LAB_00aaf980:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if ((int)DAT_04da80f0 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_04da80f0 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_04da80f8 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x00aaf9c4;
                        uVar16 = **(uint **)(DAT_04da80f8 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar28) goto joined_r0x00aaf9c4;
                        if (uVar16 < uVar28) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_04da80f8 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_04da80f8 + (long)(int)uVar12 * 8) == uVar28)) {
joined_r0x00aaf9c4:
                      if (uVar17 < 3) {
                        uVar12 = *(uint *)(*(long *)(DAT_04da80f8 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 3) {
                          DAT_04da80e0 = '\x01';
                          DAT_04da80e4 = uVar28;
                          DAT_04da80e8 = uVar12;
                          goto LAB_00aaf9f4;
                        }
                        goto LAB_00aaf980;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_00aaf9f4:
              }
LAB_00aaf9fc:
              puVar8 = PTR_DAT_04bb5810;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar28 = puVar21[1];
                  if (uVar28 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar27 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar27 = 0x1c;
                      }
                      lVar27 = (long)puVar21 + lVar27 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar27 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar28 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar28);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < DAT_04da7fc0) {
                          *(short *)(DAT_04da7fc8 + (long)(int)uVar17 * 2) = (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar28 = *puVar1;
              if (uVar28 != 0) {
                cVar9 = *PTR_DAT_04bb5808;
                do {
                  if (cVar9 == '\0') {
                    cVar9 = '\x01';
                    *PTR_DAT_04bb5808 = 1;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    uVar28 = *puVar1;
                  }
                  else {
                    uVar12 = puVar19[3];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar28 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_00aafb80;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar28;
                  uVar28 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar28 = 0, puVar1 == puVar21))
                  goto LAB_00aafb80;
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar1 + (lVar27 - (long)puVar21);
                  if (lVar27 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[3] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar27 + 4);
                  while (puVar21[-1] != 0x93f49ec4) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_00aafb7c;
                  }
                  uVar28 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar28 = *puVar21;
                  }
                  puVar19[3] = uVar28;
                  uVar28 = *puVar1;
                  if (uVar28 == 0) break;
                } while( true );
              }
LAB_00aafb7c:
              uVar28 = 0;
LAB_00aafb80:
              if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
                 (*(char *)(lVar27 + 0xb) == '\0')) {
                if ((DAT_04da8258 == '\x01') && (DAT_04da825c == uVar28)) {
                  uVar12 = DAT_04da8260;
                  if (6 < DAT_04da8260) goto LAB_00aafe34;
                }
                else {
                  if ((DAT_04da82b0 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_04da82b0);
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if (iVar13 != 0) {
                      DAT_04da8268 = 0x700000000;
                      DAT_04da8270 = (undefined8 *)&DAT_04da8278;
                      __cxa_guard_release(&DAT_04da82b0);
                      puVar19 = (uint *)PTR_DAT_04bb5810;
                    }
                  }
                  if ((DAT_04da82b8 & 1) == 0) {
                    DAT_04da82b8 = 1;
                    if (((DAT_04da82f8 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04da82f8), iVar13 != 0)) {
                      DAT_04da82ec = 0xffffffff00000000;
                      DAT_04da82bc = 0xffffffff00000000;
                      DAT_04da82c4 = 0xffffffff00000000;
                      DAT_04da82cc = 0xffffffff00000000;
                      DAT_04da82d4 = 0xffffffff00000000;
                      DAT_04da82dc = 0xffffffff00000000;
                      DAT_04da82e4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da82f8);
                    }
                    lVar27 = 0;
                    do {
                      local_75 = 0;
                      pbVar26 = (&PTR_DAT_049326c0)[lVar27];
                      if (local_174 != pbVar26) {
                        lVar14 = 0;
                        do {
                          if (pbVar26[lVar14] == 0) {
LAB_00aafcc8:
                            iVar13 = (int)lVar14;
joined_r0x00aafccc:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_00aafcd4;
                          }
                          if (pbVar26[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_00aafcc8;
                          }
                          if (pbVar26[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x00aafccc;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_00aafcd4:
                        memcpy(local_174,pbVar26,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar26;
                      if (*pbVar26 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar26 = pbVar26 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar26;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_04da82bc + lVar27) = uVar17;
                      *(int *)((long)&DAT_04da82bc + lVar27 * 8 + 4) = (int)lVar27;
                      iVar13 = (int)DAT_04da8268;
                      if ((int)DAT_04da8268 < DAT_04da8268._4_4_) {
                        DAT_04da8270[(int)DAT_04da8268] = &DAT_04da82bc + lVar27;
                        iVar13 = (int)DAT_04da8268 + 1;
                        DAT_04da8268 = CONCAT44(DAT_04da8268._4_4_,iVar13);
                      }
                      puVar23 = DAT_04da8270;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 7);
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
                              if (puVar19 != (uint *)0x0) goto LAB_00aaffb0;
LAB_00aaff60:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_00aaff60;
LAB_00aaffb0:
                              if (puVar24 == (uint *)0x0) goto LAB_00aaff60;
                              if (*puVar19 <= *puVar24) goto LAB_00aaff60;
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
                    DAT_04da8264 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                  }
                  else if (DAT_04da8264 != '\x01') goto LAB_00aafe34;
                  if ((int)DAT_04da8268 == 0) {
LAB_00aafe34:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if ((int)DAT_04da8268 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_04da8270;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_00aafe00;
joined_r0x00aafe14:
                      if (uVar12 < 7) {
                        uVar12 = *(uint *)(DAT_04da8270[uVar12] + 4);
                        if (uVar12 < 7) {
                          DAT_04da8258 = '\x01';
                          DAT_04da825c = uVar28;
                          DAT_04da8260 = uVar12;
                          goto LAB_00ab03e4;
                        }
                        goto LAB_00aafe34;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_04da8268 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_04da8270[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x00aafe14;
                        uVar16 = *(uint *)DAT_04da8270[(int)uVar12];
                        if (uVar16 == uVar28) goto joined_r0x00aafe14;
                        if (uVar16 < uVar28) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_04da8270[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x00aafe14;
LAB_00aafe00:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar28) goto joined_r0x00aafe14;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_04da81b0 == '\x01') && (DAT_04da81b4 == uVar28)) {
                  uVar12 = DAT_04da81b8;
                  if (6 < DAT_04da81b8) goto LAB_00ab0380;
                }
                else {
                  if ((DAT_04da8208 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_04da8208);
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if (iVar13 != 0) {
                      DAT_04da81c0 = 0x700000000;
                      DAT_04da81c8 = &DAT_04da81d0;
                      __cxa_guard_release(&DAT_04da8208);
                      puVar19 = (uint *)PTR_DAT_04bb5810;
                    }
                  }
                  if ((DAT_04da8210 & 1) == 0) {
                    DAT_04da8210 = 1;
                    if (((DAT_04da8250 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_04da8250), iVar13 != 0)) {
                      DAT_04da8244 = 0xffffffff00000000;
                      DAT_04da8214 = 0xffffffff00000000;
                      DAT_04da821c = 0xffffffff00000000;
                      DAT_04da8224 = 0xffffffff00000000;
                      DAT_04da822c = 0xffffffff00000000;
                      DAT_04da8234 = 0xffffffff00000000;
                      DAT_04da823c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_04da8250);
                    }
                    lVar27 = 0;
                    do {
                      local_75 = 0;
                      pbVar26 = (&PTR_s_SpNpcOnly_04932558)[lVar27];
                      if (local_174 != pbVar26) {
                        lVar14 = 0;
                        do {
                          if (pbVar26[lVar14] == 0) {
LAB_00ab0098:
                            iVar13 = (int)lVar14;
joined_r0x00ab009c:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_00ab00a4;
                          }
                          if (pbVar26[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_00ab0098;
                          }
                          if (pbVar26[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x00ab009c;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_00ab00a4:
                        memcpy(local_174,pbVar26,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar26;
                      if (*pbVar26 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar26 = pbVar26 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar26;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_04da8214 + lVar27) = uVar17;
                      *(int *)((long)&DAT_04da8214 + lVar27 * 8 + 4) = (int)lVar27;
                      iVar13 = (int)DAT_04da81c0;
                      if ((int)DAT_04da81c0 < DAT_04da81c0._4_4_) {
                        *(undefined8 **)(DAT_04da81c8 + (long)(int)DAT_04da81c0 * 8) =
                             &DAT_04da8214 + lVar27;
                        iVar13 = (int)DAT_04da81c0 + 1;
                        DAT_04da81c0 = CONCAT44(DAT_04da81c0._4_4_,iVar13);
                      }
                      puVar8 = DAT_04da81c8;
                      lVar27 = lVar27 + 1;
                    } while (lVar27 != 7);
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
                              if (puVar19 != (uint *)0x0) goto LAB_00ab0320;
LAB_00ab02d0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_00ab02d0;
LAB_00ab0320:
                              if (puVar24 == (uint *)0x0) goto LAB_00ab02d0;
                              if (*puVar19 <= *puVar24) goto LAB_00ab02d0;
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
                    DAT_04da81bc = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                  }
                  else if (DAT_04da81bc != '\x01') goto LAB_00ab0380;
                  if ((int)DAT_04da81c0 == 0) {
LAB_00ab0380:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bb5810;
                    if ((int)DAT_04da81c0 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_04da81c0 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_04da81c8 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x00ab03ac;
                        uVar16 = **(uint **)(DAT_04da81c8 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar28) goto joined_r0x00ab03ac;
                        if (uVar16 < uVar28) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_04da81c8 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_04da81c8 + (long)(int)uVar12 * 8) == uVar28)) {
joined_r0x00ab03ac:
                      if (uVar17 < 7) {
                        uVar12 = *(uint *)(*(long *)(DAT_04da81c8 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 7) {
                          DAT_04da81b0 = '\x01';
                          DAT_04da81b4 = uVar28;
                          DAT_04da81b8 = uVar12;
                          goto LAB_00ab03dc;
                        }
                        goto LAB_00ab0380;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_00ab03dc:
              }
LAB_00ab03e4:
              puVar8 = PTR_DAT_04bb5810;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar28 = puVar21[1];
                  if (uVar28 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar27 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar27 = 0x1c;
                      }
                      lVar27 = (long)puVar21 + lVar27 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar27 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar28 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar28);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < *(uint *)PTR_DAT_04bb6390) {
                          *(short *)(*(long *)(PTR_DAT_04bb6390 + 8) + (long)(int)uVar17 * 2) =
                               (short)uVar12;
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
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar7);
  }
  return;
}

