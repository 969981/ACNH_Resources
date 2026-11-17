
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa96a0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
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
  int *piVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  uint *puVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  byte *pbVar31;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar9 = *param_1, uVar9 != 0)) {
    uVar30 = 0;
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9b,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe4,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb8,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9b,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb8,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe8,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa7,0x4c11db7);
    uVar2 = crc32b(uVar2,0x92,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar4 = crc32b(uVar4,0x71,0x4c11db7);
    uVar4 = crc32b(uVar4,0x75,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
    uVar5 = crc32b(uVar4,0x65,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x75,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar6 = crc32b(uVar4,100,0x4c11db7);
    uVar3 = crc32b(uVar3,0x81,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar7 = crc32b(uVar3,0x84,0x4c11db7);
    uVar8 = crc32b(uVar2,0x84,0x4c11db7);
    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
    pcVar21 = PTR_DAT_04bc4640;
    do {
      if (uVar30 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar11 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar11 = 0x1c;
            }
            puVar1 = (uint *)((ulong)(param_1[1] * uVar30 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                             (long)param_1);
            if (puVar1 != (uint *)0x0) {
              uVar28 = *puVar1;
              if (uVar28 != 0) {
                cVar12 = *pcVar21;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    puVar17[4] = 0xffffffffffffffff;
                    *puVar17 = 0xffffffffffffffff;
                    puVar17[1] = 0xffffffffffffffff;
                    *(undefined4 *)(puVar17 + 5) = 0xffffffff;
                    *pcVar21 = '\x01';
                    puVar17[2] = 0xffffffffffffffff;
                    puVar17[3] = 0xffffffffffffffff;
                    uVar28 = *puVar1;
                  }
                  else {
                    uVar13 = *(uint *)((long)puVar17 + 4);
                    if (-1 < (int)uVar13) {
                      if ((uint *)((long)puVar1 + (ulong)uVar13) != (uint *)0x0) {
                        uVar28 = *(uint *)((long)puVar1 + (ulong)uVar13);
                        goto LAB_02aa9940;
                      }
                      break;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar23 = (uint *)(ulong)uVar28;
                  uVar28 = 0;
                  if ((puVar23 == (uint *)0x0) || (uVar28 = 0, puVar1 == puVar23))
                  goto LAB_02aa9940;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
                  if (lVar29 == 0) break;
                  uVar18 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
                  *(undefined4 *)((long)puVar17 + 4) = 0xfffffffe;
                  if (uVar18 == 0) break;
                  piVar16 = (int *)(lVar29 + 4);
                  while (piVar16[-1] != 0x712c43a7) {
                    piVar16 = piVar16 + 2;
                    uVar18 = uVar18 - 1;
                    if (uVar18 == 0) goto LAB_02aa993c;
                  }
                  iVar11 = 0;
                  if (*piVar16 != -1) {
                    iVar11 = *piVar16;
                  }
                  *(int *)((long)puVar17 + 4) = iVar11;
                  uVar28 = *puVar1;
                  if (uVar28 == 0) break;
                } while( true );
              }
LAB_02aa993c:
              uVar28 = 0;
LAB_02aa9940:
              if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
                 (*(char *)(lVar29 + 0xb) == '\0')) {
                if ((DAT_0560b730 == '\x01') && (DAT_0560b734 == uVar28)) {
                  uVar13 = DAT_0560b738;
                  if (4 < DAT_0560b738) goto LAB_02aa9bec;
                }
                else {
                  if ((DAT_0560b778 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_0560b778);
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if (iVar11 != 0) {
                      DAT_0560b740 = 0x500000000;
                      DAT_0560b748 = (undefined8 *)&DAT_0560b750;
                      __cxa_guard_release(&DAT_0560b778);
                      puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                      pcVar21 = PTR_DAT_04bc4640;
                    }
                  }
                  if ((DAT_0560b780 & 1) == 0) {
                    DAT_0560b780 = 1;
                    if (((DAT_0560b7b0 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_0560b7b0), iVar11 != 0)) {
                      DAT_0560b7a4 = 0xffffffff00000000;
                      DAT_0560b784 = 0xffffffff00000000;
                      DAT_0560b78c = 0xffffffff00000000;
                      DAT_0560b794 = 0xffffffff00000000;
                      DAT_0560b79c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b7b0);
                    }
                    lVar29 = 0;
                    do {
                      local_75 = 0;
                      pbVar31 = (&PTR_DAT_04a9d948)[lVar29];
                      if (local_174 != pbVar31) {
                        lVar15 = 0;
                        do {
                          if (pbVar31[lVar15] == 0) {
LAB_02aa9a84:
                            iVar11 = (int)lVar15;
joined_r0x02aa9a88:
                            if (0xff < iVar11) {
                              iVar11 = 0xff;
                            }
                            goto LAB_02aa9a90;
                          }
                          if (pbVar31[lVar15 + 1] == 0) {
                            lVar15 = lVar15 + 1;
                            goto LAB_02aa9a84;
                          }
                          if (pbVar31[lVar15 + 2] == 0) {
                            iVar11 = (int)lVar15 + 2;
                            goto joined_r0x02aa9a88;
                          }
                          lVar15 = lVar15 + 3;
                        } while (lVar15 != 0x80001);
                        iVar11 = 0;
LAB_02aa9a90:
                        memcpy(local_174,pbVar31,(long)iVar11);
                        local_174[iVar11] = 0;
                      }
                      uVar13 = (uint)*pbVar31;
                      if (*pbVar31 == 0) {
                        uVar20 = 0;
                      }
                      else {
                        uVar20 = 0xffffffff;
                        do {
                          pbVar31 = pbVar31 + 1;
                          uVar20 = crc32b(uVar20,uVar13,0x4c11db7);
                          uVar13 = (uint)*pbVar31;
                        } while (uVar13 != 0);
                        uVar20 = ~uVar20;
                      }
                      *(uint *)(&DAT_0560b784 + lVar29) = uVar20;
                      *(int *)((long)&DAT_0560b784 + lVar29 * 8 + 4) = (int)lVar29;
                      iVar11 = (int)DAT_0560b740;
                      if ((int)DAT_0560b740 < DAT_0560b740._4_4_) {
                        DAT_0560b748[(int)DAT_0560b740] = &DAT_0560b784 + lVar29;
                        iVar11 = (int)DAT_0560b740 + 1;
                        DAT_0560b740 = CONCAT44(DAT_0560b740._4_4_,iVar11);
                      }
                      puVar17 = DAT_0560b748;
                      lVar29 = lVar29 + 1;
                    } while (lVar29 != 5);
                    if (1 < iVar11) {
                      uVar20 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar20) break;
                        puVar23 = (uint *)puVar17[uVar20];
                        uVar18 = (ulong)uVar20;
                        if ((uVar13 - uVar20 & 1) == 0) {
                          uVar22 = uVar18;
                          puVar25 = puVar23;
                        }
                        else {
                          uVar22 = uVar18 + 1;
                          puVar25 = (uint *)puVar17[uVar22];
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar25 < *puVar23)) {
                            puVar17[uVar22] = puVar23;
                            puVar17[uVar18] = puVar25;
                            puVar25 = puVar23;
                          }
                        }
                        uVar24 = (ulong)uVar13;
                        uVar13 = uVar20;
                        if (~uVar18 + uVar24 != 0) {
                          puVar26 = puVar17 + uVar22 + 1;
                          do {
                            puVar23 = (uint *)*puVar26;
                            uVar19 = (uint)uVar22;
                            if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                               (*puVar25 <= *puVar23)) {
                              puVar27 = (uint *)puVar26[1];
                              if (puVar23 != (uint *)0x0) goto LAB_02aa9d70;
LAB_02aa9d20:
                              puVar23 = puVar27;
                            }
                            else {
                              puVar26[-1] = puVar23;
                              *puVar26 = puVar25;
                              puVar27 = (uint *)puVar26[1];
                              puVar23 = puVar25;
                              uVar13 = uVar19;
                              if (puVar25 == (uint *)0x0) goto LAB_02aa9d20;
LAB_02aa9d70:
                              if (puVar27 == (uint *)0x0) goto LAB_02aa9d20;
                              if (*puVar23 <= *puVar27) goto LAB_02aa9d20;
                              uVar13 = uVar19 + 1;
                              *puVar26 = puVar27;
                              puVar26[1] = puVar23;
                            }
                            uVar22 = uVar22 + 2;
                            puVar26 = puVar26 + 2;
                            puVar25 = puVar23;
                          } while (uVar24 != uVar22);
                        }
                        if ((int)uVar13 <= (int)uVar20) break;
                        uVar22 = (ulong)uVar13;
                        puVar23 = (uint *)puVar17[uVar13];
                        uVar20 = uVar13;
                        do {
                          puVar25 = (uint *)puVar17[uVar22 - 1];
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar23 < *puVar25)) {
                            uVar20 = (uint)uVar22;
                            puVar17[uVar22 - 1] = puVar23;
                            puVar17[uVar22] = puVar25;
                            puVar25 = puVar23;
                          }
                          uVar22 = uVar22 - 1;
                          puVar23 = puVar25;
                        } while ((long)uVar18 < (long)uVar22);
                      } while (uVar20 != uVar13);
                    }
                    DAT_0560b73c = '\x01';
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                  }
                  else if (DAT_0560b73c != '\x01') goto LAB_02aa9bec;
                  if ((int)DAT_0560b740 == 0) {
LAB_02aa9bec:
                    uVar13 = 0;
                  }
                  else {
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if ((int)DAT_0560b740 < 2) {
                      uVar20 = 0;
                      puVar23 = (uint *)*DAT_0560b748;
                      uVar13 = uVar20;
                      if (puVar23 != (uint *)0x0) goto LAB_02aa9bb4;
joined_r0x02aa9da4:
                      if (uVar13 < 5) {
                        uVar13 = *(uint *)(DAT_0560b748[uVar13] + 4);
                        if (uVar13 < 5) {
                          DAT_0560b730 = '\x01';
                          DAT_0560b734 = uVar28;
                          DAT_0560b738 = uVar13;
                          goto LAB_02aaa1c0;
                        }
                        goto LAB_02aa9bec;
                      }
                    }
                    else {
                      uVar20 = 0;
                      iVar11 = (int)DAT_0560b740 + -1;
                      do {
                        iVar14 = iVar11 + uVar20;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar20)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar13 = iVar14 >> 1;
                        if ((uint *)DAT_0560b748[(int)uVar13] == (uint *)0x0)
                        goto joined_r0x02aa9da4;
                        uVar19 = *(uint *)DAT_0560b748[(int)uVar13];
                        if (uVar19 == uVar28) goto joined_r0x02aa9da4;
                        if (uVar19 < uVar28) {
                          uVar20 = uVar13 + 1;
                        }
                        else {
                          iVar11 = uVar13 - 1;
                        }
                      } while ((int)uVar20 < iVar11);
                      puVar23 = (uint *)DAT_0560b748[(int)uVar20];
                      uVar13 = uVar20;
                      if (puVar23 == (uint *)0x0) goto joined_r0x02aa9da4;
LAB_02aa9bb4:
                      uVar13 = uVar20;
                      if (*puVar23 == uVar28) goto joined_r0x02aa9da4;
                    }
                    uVar13 = 0;
                  }
                }
              }
              else {
                if ((DAT_0560b6a8 == '\x01') && (DAT_0560b6ac == uVar28)) {
                  uVar13 = DAT_0560b6b0;
                  if (4 < DAT_0560b6b0) goto LAB_02aaa154;
                }
                else {
                  if ((DAT_0560b6f0 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_0560b6f0);
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if (iVar11 != 0) {
                      DAT_0560b6b8 = 0x500000000;
                      DAT_0560b6c0 = &DAT_0560b6c8;
                      __cxa_guard_release(&DAT_0560b6f0);
                      puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                      pcVar21 = PTR_DAT_04bc4640;
                    }
                  }
                  if ((DAT_0560b6f8 & 1) == 0) {
                    DAT_0560b6f8 = 1;
                    if (((DAT_0560b728 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_0560b728), iVar11 != 0)) {
                      DAT_0560b71c = 0xffffffff00000000;
                      DAT_0560b6fc = 0xffffffff00000000;
                      DAT_0560b704 = 0xffffffff00000000;
                      DAT_0560b70c = 0xffffffff00000000;
                      DAT_0560b714 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b728);
                    }
                    lVar29 = 0;
                    do {
                      local_75 = 0;
                      pbVar31 = *(byte **)(PTR_s_Invalid_04bc46f0 + lVar29 * 8 + 0x30);
                      if (local_174 != pbVar31) {
                        lVar15 = 0;
                        do {
                          if (pbVar31[lVar15] == 0) {
LAB_02aa9e68:
                            iVar11 = (int)lVar15;
joined_r0x02aa9e6c:
                            if (0xff < iVar11) {
                              iVar11 = 0xff;
                            }
                            goto LAB_02aa9e74;
                          }
                          if (pbVar31[lVar15 + 1] == 0) {
                            lVar15 = lVar15 + 1;
                            goto LAB_02aa9e68;
                          }
                          if (pbVar31[lVar15 + 2] == 0) {
                            iVar11 = (int)lVar15 + 2;
                            goto joined_r0x02aa9e6c;
                          }
                          lVar15 = lVar15 + 3;
                        } while (lVar15 != 0x80001);
                        iVar11 = 0;
LAB_02aa9e74:
                        memcpy(local_174,pbVar31,(long)iVar11);
                        local_174[iVar11] = 0;
                      }
                      uVar13 = (uint)*pbVar31;
                      if (*pbVar31 == 0) {
                        uVar20 = 0;
                      }
                      else {
                        uVar20 = 0xffffffff;
                        do {
                          pbVar31 = pbVar31 + 1;
                          uVar20 = crc32b(uVar20,uVar13,0x4c11db7);
                          uVar13 = (uint)*pbVar31;
                        } while (uVar13 != 0);
                        uVar20 = ~uVar20;
                      }
                      *(uint *)(&DAT_0560b6fc + lVar29) = uVar20;
                      *(int *)((long)&DAT_0560b6fc + lVar29 * 8 + 4) = (int)lVar29;
                      iVar11 = (int)DAT_0560b6b8;
                      if ((int)DAT_0560b6b8 < DAT_0560b6b8._4_4_) {
                        *(undefined8 **)(DAT_0560b6c0 + (long)(int)DAT_0560b6b8 * 8) =
                             &DAT_0560b6fc + lVar29;
                        iVar11 = (int)DAT_0560b6b8 + 1;
                        DAT_0560b6b8 = CONCAT44(DAT_0560b6b8._4_4_,iVar11);
                      }
                      puVar10 = DAT_0560b6c0;
                      lVar29 = lVar29 + 1;
                    } while (lVar29 != 5);
                    if (1 < iVar11) {
                      uVar20 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar20) break;
                        puVar23 = *(uint **)(puVar10 + (ulong)uVar20 * 8);
                        uVar18 = (ulong)uVar20;
                        if ((uVar13 - uVar20 & 1) == 0) {
                          uVar22 = uVar18;
                          puVar25 = puVar23;
                        }
                        else {
                          uVar22 = uVar18 + 1;
                          puVar25 = *(uint **)(puVar10 + uVar22 * 8);
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar25 < *puVar23)) {
                            *(uint **)(puVar10 + uVar22 * 8) = puVar23;
                            *(uint **)(puVar10 + uVar18 * 8) = puVar25;
                            puVar25 = puVar23;
                          }
                        }
                        uVar24 = (ulong)uVar13;
                        uVar13 = uVar20;
                        if (~uVar18 + uVar24 != 0) {
                          puVar17 = (undefined8 *)(puVar10 + uVar22 * 8 + 8);
                          do {
                            puVar23 = (uint *)*puVar17;
                            uVar19 = (uint)uVar22;
                            if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                               (*puVar25 <= *puVar23)) {
                              puVar27 = (uint *)puVar17[1];
                              if (puVar23 != (uint *)0x0) goto LAB_02aaa0f0;
LAB_02aaa0a0:
                              puVar23 = puVar27;
                            }
                            else {
                              puVar17[-1] = puVar23;
                              *puVar17 = puVar25;
                              puVar27 = (uint *)puVar17[1];
                              puVar23 = puVar25;
                              uVar13 = uVar19;
                              if (puVar25 == (uint *)0x0) goto LAB_02aaa0a0;
LAB_02aaa0f0:
                              if (puVar27 == (uint *)0x0) goto LAB_02aaa0a0;
                              if (*puVar23 <= *puVar27) goto LAB_02aaa0a0;
                              uVar13 = uVar19 + 1;
                              *puVar17 = puVar27;
                              puVar17[1] = puVar23;
                            }
                            uVar22 = uVar22 + 2;
                            puVar17 = puVar17 + 2;
                            puVar25 = puVar23;
                          } while (uVar24 != uVar22);
                        }
                        if ((int)uVar13 <= (int)uVar20) break;
                        uVar22 = (ulong)uVar13;
                        puVar23 = *(uint **)(puVar10 + (ulong)uVar13 * 8);
                        uVar20 = uVar13;
                        do {
                          puVar25 = *(uint **)(puVar10 + uVar22 * 8 + -8);
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar23 < *puVar25)) {
                            uVar20 = (uint)uVar22;
                            *(uint **)(puVar10 + uVar22 * 8 + -8) = puVar23;
                            *(uint **)(puVar10 + uVar22 * 8) = puVar25;
                            puVar25 = puVar23;
                          }
                          uVar22 = uVar22 - 1;
                          puVar23 = puVar25;
                        } while ((long)uVar18 < (long)uVar22);
                      } while (uVar20 != uVar13);
                    }
                    DAT_0560b6b4 = '\x01';
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                  }
                  else if (DAT_0560b6b4 != '\x01') goto LAB_02aaa154;
                  if ((int)DAT_0560b6b8 == 0) {
LAB_02aaa154:
                    uVar13 = 0;
                  }
                  else {
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if ((int)DAT_0560b6b8 < 2) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = 0;
                      iVar11 = (int)DAT_0560b6b8 + -1;
                      do {
                        iVar14 = iVar11 + uVar13;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar13)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar20 = iVar14 >> 1;
                        if (*(uint **)(DAT_0560b6c0 + (long)(int)uVar20 * 8) == (uint *)0x0)
                        goto joined_r0x02aaa180;
                        uVar19 = **(uint **)(DAT_0560b6c0 + (long)(int)uVar20 * 8);
                        if (uVar19 == uVar28) goto joined_r0x02aaa180;
                        if (uVar19 < uVar28) {
                          uVar13 = uVar20 + 1;
                        }
                        else {
                          iVar11 = uVar20 - 1;
                        }
                      } while ((int)uVar13 < iVar11);
                    }
                    uVar20 = uVar13;
                    if ((*(uint **)(DAT_0560b6c0 + (long)(int)uVar13 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_0560b6c0 + (long)(int)uVar13 * 8) == uVar28)) {
joined_r0x02aaa180:
                      if (uVar20 < 5) {
                        uVar13 = *(uint *)(*(long *)(DAT_0560b6c0 + (ulong)uVar20 * 8) + 4);
                        if (uVar13 < 5) {
                          DAT_0560b6a8 = '\x01';
                          DAT_0560b6ac = uVar28;
                          DAT_0560b6b0 = uVar13;
                          goto LAB_02aaa1b8;
                        }
                        goto LAB_02aaa154;
                      }
                    }
                    uVar13 = 0;
                  }
                }
LAB_02aaa1b8:
              }
LAB_02aaa1c0:
              puVar10 = PTR_DAT_04bc4648;
              puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar23 != (uint *)0x0)) {
                if (*puVar23 != 0) {
                  uVar28 = puVar23[1];
                  if (uVar28 != 0) {
                    if ((ulong)(ushort)puVar23[2] != 0) {
                      lVar29 = 0xc;
                      if (*(char *)((long)puVar23 + 10) != '\0') {
                        lVar29 = 0x1c;
                      }
                      lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
                      puVar17 = (undefined8 *)puVar10;
                      if (lVar29 != 0) {
                        uVar20 = 0;
                        if ((ulong)uVar28 != 0) {
                          uVar20 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar28);
                        }
                        if (*puVar23 <= uVar20) {
                          uVar20 = 0xffffffff;
                        }
                        if (uVar20 < *(uint *)PTR_DAT_04bc46e0) {
                          *(short *)(*(long *)(PTR_DAT_04bc46e0 + 8) + (long)(int)uVar20 * 2) =
                               (short)uVar13;
                        }
                      }
                    }
                  }
                }
              }
              uVar28 = *puVar1;
              if (uVar28 != 0) {
                cVar12 = *pcVar21;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    puVar17[4] = 0xffffffffffffffff;
                    *puVar17 = 0xffffffffffffffff;
                    puVar17[1] = 0xffffffffffffffff;
                    *(undefined4 *)(puVar17 + 5) = 0xffffffff;
                    *pcVar21 = '\x01';
                    puVar17[2] = 0xffffffffffffffff;
                    puVar17[3] = 0xffffffffffffffff;
                    uVar28 = *puVar1;
                  }
                  else {
                    uVar13 = *(uint *)(puVar17 + 1);
                    if (-1 < (int)uVar13) {
                      if ((uint *)((long)puVar1 + (ulong)uVar13) != (uint *)0x0) {
                        uVar28 = *(uint *)((long)puVar1 + (ulong)uVar13);
                        goto LAB_02aaa330;
                      }
                      break;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar23 = (uint *)(ulong)uVar28;
                  uVar28 = 0;
                  if ((puVar23 == (uint *)0x0) || (uVar28 = 0, puVar1 == puVar23))
                  goto LAB_02aaa330;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
                  if (lVar29 == 0) break;
                  uVar18 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
                  *(undefined4 *)(puVar17 + 1) = 0xfffffffe;
                  if (uVar18 == 0) break;
                  piVar16 = (int *)(lVar29 + 4);
                  while (piVar16[-1] != 0xaa76edd) {
                    piVar16 = piVar16 + 2;
                    uVar18 = uVar18 - 1;
                    if (uVar18 == 0) goto LAB_02aaa32c;
                  }
                  iVar11 = 0;
                  if (*piVar16 != -1) {
                    iVar11 = *piVar16;
                  }
                  *(int *)(puVar17 + 1) = iVar11;
                  uVar28 = *puVar1;
                  if (uVar28 == 0) break;
                } while( true );
              }
LAB_02aaa32c:
              uVar28 = 0;
LAB_02aaa330:
              if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
                 (*(char *)(lVar29 + 0xb) == '\0')) {
                if ((DAT_0560b810 == '\x01') && (DAT_0560b814 == uVar28)) {
                  uVar13 = DAT_0560b818;
                  if (1 < DAT_0560b818) goto LAB_02aaa528;
                }
                else {
                  if ((DAT_0560b840 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_0560b840);
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if (iVar11 != 0) {
                      DAT_0560b820 = 0x200000000;
                      DAT_0560b828 = (undefined8 *)&DAT_0560b830;
                      __cxa_guard_release(&DAT_0560b840);
                      puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                      pcVar21 = PTR_DAT_04bc4640;
                    }
                  }
                  if ((DAT_0560b848 & 1) == 0) {
                    DAT_0560b848 = 1;
                    if (((DAT_0560b860 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_0560b860), iVar11 != 0)) {
                      _DAT_0560b84c = 0xffffffff00000000;
                      DAT_0560b854 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b860);
                    }
                    _DAT_0560b84c = (ulong)~uVar8;
                    iVar11 = (int)DAT_0560b820;
                    iVar14 = DAT_0560b820._4_4_;
                    if ((int)DAT_0560b820 < DAT_0560b820._4_4_) {
                      DAT_0560b828[(int)DAT_0560b820] = &DAT_0560b84c;
                      iVar11 = (int)DAT_0560b820 + 1;
                      DAT_0560b820 = CONCAT44(DAT_0560b820._4_4_,iVar11);
                      iVar14 = DAT_0560b820._4_4_;
                    }
                    DAT_0560b854 = CONCAT44(1,~uVar7);
                    if (iVar11 < iVar14) {
                      DAT_0560b828[iVar11] = &DAT_0560b854;
                      iVar11 = (int)DAT_0560b820 + 1;
                      DAT_0560b820 = CONCAT44(DAT_0560b820._4_4_,iVar11);
                    }
                    puVar17 = DAT_0560b828;
                    if (1 < iVar11) {
                      uVar20 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar20) break;
                        puVar23 = (uint *)puVar17[uVar20];
                        uVar18 = (ulong)uVar20;
                        if ((uVar13 - uVar20 & 1) == 0) {
                          uVar22 = uVar18;
                          puVar25 = puVar23;
                        }
                        else {
                          uVar22 = uVar18 + 1;
                          puVar25 = (uint *)puVar17[uVar22];
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar25 < *puVar23)) {
                            puVar17[uVar22] = puVar23;
                            puVar17[uVar18] = puVar25;
                            puVar25 = puVar23;
                          }
                        }
                        uVar24 = (ulong)uVar13;
                        uVar13 = uVar20;
                        if (~uVar18 + uVar24 != 0) {
                          puVar26 = puVar17 + uVar22 + 1;
                          do {
                            puVar23 = (uint *)*puVar26;
                            uVar19 = (uint)uVar22;
                            if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                               (*puVar25 <= *puVar23)) {
                              puVar27 = (uint *)puVar26[1];
                              if (puVar23 != (uint *)0x0) goto LAB_02aaa6b0;
LAB_02aaa660:
                              puVar23 = puVar27;
                            }
                            else {
                              puVar26[-1] = puVar23;
                              *puVar26 = puVar25;
                              puVar27 = (uint *)puVar26[1];
                              puVar23 = puVar25;
                              uVar13 = uVar19;
                              if (puVar25 == (uint *)0x0) goto LAB_02aaa660;
LAB_02aaa6b0:
                              if (puVar27 == (uint *)0x0) goto LAB_02aaa660;
                              if (*puVar23 <= *puVar27) goto LAB_02aaa660;
                              uVar13 = uVar19 + 1;
                              *puVar26 = puVar27;
                              puVar26[1] = puVar23;
                            }
                            uVar22 = uVar22 + 2;
                            puVar26 = puVar26 + 2;
                            puVar25 = puVar23;
                          } while (uVar24 != uVar22);
                        }
                        if ((int)uVar13 <= (int)uVar20) break;
                        uVar22 = (ulong)uVar13;
                        puVar23 = (uint *)puVar17[uVar13];
                        uVar20 = uVar13;
                        do {
                          puVar25 = (uint *)puVar17[uVar22 - 1];
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar23 < *puVar25)) {
                            uVar20 = (uint)uVar22;
                            puVar17[uVar22 - 1] = puVar23;
                            puVar17[uVar22] = puVar25;
                            puVar25 = puVar23;
                          }
                          uVar22 = uVar22 - 1;
                          puVar23 = puVar25;
                        } while ((long)uVar18 < (long)uVar22);
                      } while (uVar20 != uVar13);
                    }
                    DAT_0560b81c = '\x01';
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                  }
                  else if (DAT_0560b81c != '\x01') goto LAB_02aaa528;
                  if ((int)DAT_0560b820 == 0) {
LAB_02aaa528:
                    uVar13 = 0;
                  }
                  else {
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if ((int)DAT_0560b820 < 2) {
                      uVar20 = 0;
                      puVar23 = (uint *)*DAT_0560b828;
                      uVar13 = uVar20;
                      if (puVar23 != (uint *)0x0) goto LAB_02aaa4f0;
joined_r0x02aaa504:
                      if (uVar13 < 2) {
                        uVar13 = *(uint *)(DAT_0560b828[uVar13] + 4);
                        if (uVar13 < 2) {
                          DAT_0560b810 = '\x01';
                          DAT_0560b814 = uVar28;
                          DAT_0560b818 = uVar13;
                          goto LAB_02aaaa24;
                        }
                        goto LAB_02aaa528;
                      }
                    }
                    else {
                      uVar20 = 0;
                      iVar11 = (int)DAT_0560b820 + -1;
                      do {
                        iVar14 = iVar11 + uVar20;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar20)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar13 = iVar14 >> 1;
                        if ((uint *)DAT_0560b828[(int)uVar13] == (uint *)0x0)
                        goto joined_r0x02aaa504;
                        uVar19 = *(uint *)DAT_0560b828[(int)uVar13];
                        if (uVar19 == uVar28) goto joined_r0x02aaa504;
                        if (uVar19 < uVar28) {
                          uVar20 = uVar13 + 1;
                        }
                        else {
                          iVar11 = uVar13 - 1;
                        }
                      } while ((int)uVar20 < iVar11);
                      puVar23 = (uint *)DAT_0560b828[(int)uVar20];
                      uVar13 = uVar20;
                      if (puVar23 == (uint *)0x0) goto joined_r0x02aaa504;
LAB_02aaa4f0:
                      uVar13 = uVar20;
                      if (*puVar23 == uVar28) goto joined_r0x02aaa504;
                    }
                    uVar13 = 0;
                  }
                }
              }
              else {
                if ((DAT_0560b7b8 == '\x01') && (DAT_0560b7bc == uVar28)) {
                  uVar13 = DAT_0560b7c0;
                  if (1 < DAT_0560b7c0) goto LAB_02aaa9b4;
                }
                else {
                  if ((DAT_0560b7e8 & 1) == 0) {
                    iVar11 = __cxa_guard_acquire(&DAT_0560b7e8);
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if (iVar11 != 0) {
                      DAT_0560b7c8 = 0x200000000;
                      DAT_0560b7d0 = &DAT_0560b7d8;
                      __cxa_guard_release(&DAT_0560b7e8);
                      puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                      pcVar21 = PTR_DAT_04bc4640;
                    }
                  }
                  if ((DAT_0560b7f0 & 1) == 0) {
                    DAT_0560b7f0 = 1;
                    if (((DAT_0560b808 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(&DAT_0560b808), iVar11 != 0)) {
                      _DAT_0560b7f4 = 0xffffffff00000000;
                      DAT_0560b7fc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b808);
                    }
                    _DAT_0560b7f4 = (ulong)~uVar5;
                    iVar11 = (int)DAT_0560b7c8;
                    iVar14 = DAT_0560b7c8._4_4_;
                    if ((int)DAT_0560b7c8 < DAT_0560b7c8._4_4_) {
                      *(undefined4 **)(DAT_0560b7d0 + (long)(int)DAT_0560b7c8 * 8) = &DAT_0560b7f4;
                      iVar11 = (int)DAT_0560b7c8 + 1;
                      DAT_0560b7c8 = CONCAT44(DAT_0560b7c8._4_4_,iVar11);
                      iVar14 = DAT_0560b7c8._4_4_;
                    }
                    DAT_0560b7fc = CONCAT44(1,~uVar6);
                    if (iVar11 < iVar14) {
                      *(undefined8 **)(DAT_0560b7d0 + (long)iVar11 * 8) = &DAT_0560b7fc;
                      iVar11 = (int)DAT_0560b7c8 + 1;
                      DAT_0560b7c8 = CONCAT44(DAT_0560b7c8._4_4_,iVar11);
                    }
                    puVar10 = DAT_0560b7d0;
                    if (1 < iVar11) {
                      uVar20 = 0;
                      uVar13 = iVar11 - 1;
                      do {
                        if ((int)uVar13 <= (int)uVar20) break;
                        puVar23 = *(uint **)(puVar10 + (ulong)uVar20 * 8);
                        uVar18 = (ulong)uVar20;
                        if ((uVar13 - uVar20 & 1) == 0) {
                          uVar22 = uVar18;
                          puVar25 = puVar23;
                        }
                        else {
                          uVar22 = uVar18 + 1;
                          puVar25 = *(uint **)(puVar10 + uVar22 * 8);
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar25 < *puVar23)) {
                            *(uint **)(puVar10 + uVar22 * 8) = puVar23;
                            *(uint **)(puVar10 + uVar18 * 8) = puVar25;
                            puVar25 = puVar23;
                          }
                        }
                        uVar24 = (ulong)uVar13;
                        uVar13 = uVar20;
                        if (~uVar18 + uVar24 != 0) {
                          puVar17 = (undefined8 *)(puVar10 + uVar22 * 8 + 8);
                          do {
                            puVar23 = (uint *)*puVar17;
                            uVar19 = (uint)uVar22;
                            if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                               (*puVar25 <= *puVar23)) {
                              puVar27 = (uint *)puVar17[1];
                              if (puVar23 != (uint *)0x0) goto LAB_02aaa950;
LAB_02aaa900:
                              puVar23 = puVar27;
                            }
                            else {
                              puVar17[-1] = puVar23;
                              *puVar17 = puVar25;
                              puVar27 = (uint *)puVar17[1];
                              puVar23 = puVar25;
                              uVar13 = uVar19;
                              if (puVar25 == (uint *)0x0) goto LAB_02aaa900;
LAB_02aaa950:
                              if (puVar27 == (uint *)0x0) goto LAB_02aaa900;
                              if (*puVar23 <= *puVar27) goto LAB_02aaa900;
                              uVar13 = uVar19 + 1;
                              *puVar17 = puVar27;
                              puVar17[1] = puVar23;
                            }
                            uVar22 = uVar22 + 2;
                            puVar17 = puVar17 + 2;
                            puVar25 = puVar23;
                          } while (uVar24 != uVar22);
                        }
                        if ((int)uVar13 <= (int)uVar20) break;
                        uVar22 = (ulong)uVar13;
                        puVar23 = *(uint **)(puVar10 + (ulong)uVar13 * 8);
                        uVar20 = uVar13;
                        do {
                          puVar25 = *(uint **)(puVar10 + uVar22 * 8 + -8);
                          if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                             (*puVar23 < *puVar25)) {
                            uVar20 = (uint)uVar22;
                            *(uint **)(puVar10 + uVar22 * 8 + -8) = puVar23;
                            *(uint **)(puVar10 + uVar22 * 8) = puVar25;
                            puVar25 = puVar23;
                          }
                          uVar22 = uVar22 - 1;
                          puVar23 = puVar25;
                        } while ((long)uVar18 < (long)uVar22);
                      } while (uVar20 != uVar13);
                    }
                    DAT_0560b7c4 = '\x01';
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                  }
                  else if (DAT_0560b7c4 != '\x01') goto LAB_02aaa9b4;
                  if ((int)DAT_0560b7c8 == 0) {
LAB_02aaa9b4:
                    uVar13 = 0;
                  }
                  else {
                    puVar17 = (undefined8 *)PTR_DAT_04bc4648;
                    pcVar21 = PTR_DAT_04bc4640;
                    if ((int)DAT_0560b7c8 < 2) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = 0;
                      iVar11 = (int)DAT_0560b7c8 + -1;
                      do {
                        iVar14 = iVar11 + uVar13;
                        if (iVar14 < 0 != SCARRY4(iVar11,uVar13)) {
                          iVar14 = iVar14 + 1;
                        }
                        uVar20 = iVar14 >> 1;
                        if (*(uint **)(DAT_0560b7d0 + (long)(int)uVar20 * 8) == (uint *)0x0)
                        goto joined_r0x02aaa9e4;
                        uVar19 = **(uint **)(DAT_0560b7d0 + (long)(int)uVar20 * 8);
                        if (uVar19 == uVar28) goto joined_r0x02aaa9e4;
                        if (uVar19 < uVar28) {
                          uVar13 = uVar20 + 1;
                        }
                        else {
                          iVar11 = uVar20 - 1;
                        }
                      } while ((int)uVar13 < iVar11);
                    }
                    uVar20 = uVar13;
                    if ((*(uint **)(DAT_0560b7d0 + (long)(int)uVar13 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_0560b7d0 + (long)(int)uVar13 * 8) == uVar28)) {
joined_r0x02aaa9e4:
                      if (uVar20 < 2) {
                        uVar13 = *(uint *)(*(long *)(DAT_0560b7d0 + (ulong)uVar20 * 8) + 4);
                        if (uVar13 < 2) {
                          DAT_0560b7b8 = '\x01';
                          DAT_0560b7bc = uVar28;
                          DAT_0560b7c0 = uVar13;
                          goto LAB_02aaaa1c;
                        }
                        goto LAB_02aaa9b4;
                      }
                    }
                    uVar13 = 0;
                  }
                }
LAB_02aaaa1c:
              }
LAB_02aaaa24:
              puVar10 = PTR_DAT_04bc4648;
              puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar23 != (uint *)0x0)) {
                if (*puVar23 != 0) {
                  uVar28 = puVar23[1];
                  if (uVar28 != 0) {
                    if ((ulong)(ushort)puVar23[2] != 0) {
                      lVar29 = 0xc;
                      if (*(char *)((long)puVar23 + 10) != '\0') {
                        lVar29 = 0x1c;
                      }
                      lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
                      puVar17 = (undefined8 *)puVar10;
                      if (lVar29 != 0) {
                        uVar20 = 0;
                        if ((ulong)uVar28 != 0) {
                          uVar20 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar28);
                        }
                        if (*puVar23 <= uVar20) {
                          uVar20 = 0xffffffff;
                        }
                        if (uVar20 < *(uint *)PTR_DAT_04bc46e8) {
                          *(short *)(*(long *)(PTR_DAT_04bc46e8 + 8) + (long)(int)uVar20 * 2) =
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
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar9);
  }
  return;
}

