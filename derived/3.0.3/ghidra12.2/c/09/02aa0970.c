
void FUN_02aa0970(uint *param_1)

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
    puVar14 = (uint *)PTR_DAT_04bc4628;
    pcVar12 = PTR_DAT_04bc4620;
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
                    puVar14[8] = 0xffffffff;
                    puVar14[0] = 0xffffffff;
                    puVar14[1] = 0xffffffff;
                    puVar14[2] = 0xffffffff;
                    puVar14[3] = 0xffffffff;
                    *pcVar12 = '\x01';
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
                        goto LAB_02aa0b20;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar20;
                  uVar20 = 0;
                  if ((puVar16 == (uint *)0x0) || (uVar20 = 0, puVar2 == puVar16))
                  goto LAB_02aa0b20;
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
                  while (puVar16[-1] != 0x10dbd8bb) {
                    puVar16 = puVar16 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_02aa0b1c;
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
LAB_02aa0b1c:
              uVar20 = 0;
LAB_02aa0b20:
              if (((*puVar2 == 0) || (lVar22 = (long)puVar2 - (ulong)*puVar2, lVar22 == 0)) ||
                 (*(char *)(lVar22 + 0xb) == '\0')) {
                if ((DAT_0560b300 == '\x01') && (DAT_0560b304 == uVar20)) {
                  uVar6 = DAT_0560b308;
                  if (6 < DAT_0560b308) goto LAB_02aa0dd8;
                }
                else {
                  if ((DAT_0560b358 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_0560b358);
                    puVar14 = (uint *)PTR_DAT_04bc4628;
                    pcVar12 = PTR_DAT_04bc4620;
                    if (iVar7 != 0) {
                      DAT_0560b310 = 0x700000000;
                      DAT_0560b318 = (undefined8 *)&DAT_0560b320;
                      __cxa_guard_release(&DAT_0560b358);
                      puVar14 = (uint *)PTR_DAT_04bc4628;
                      pcVar12 = PTR_DAT_04bc4620;
                    }
                  }
                  if ((DAT_0560b360 & 1) == 0) {
                    DAT_0560b360 = 1;
                    if (((DAT_0560b3a0 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_0560b3a0), iVar7 != 0)) {
                      DAT_0560b394 = 0xffffffff00000000;
                      DAT_0560b364 = 0xffffffff00000000;
                      DAT_0560b36c = 0xffffffff00000000;
                      DAT_0560b374 = 0xffffffff00000000;
                      DAT_0560b37c = 0xffffffff00000000;
                      DAT_0560b384 = 0xffffffff00000000;
                      DAT_0560b38c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b3a0);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = *(byte **)(PTR_DAT_04bc46c8 + lVar22 * 8 + 0x60);
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02aa0c64:
                            iVar7 = (int)lVar8;
joined_r0x02aa0c68:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02aa0c70;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02aa0c64;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02aa0c68;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02aa0c70:
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
                      *(uint *)(&DAT_0560b364 + lVar22) = uVar11;
                      *(int *)((long)&DAT_0560b364 + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_0560b310;
                      if ((int)DAT_0560b310 < DAT_0560b310._4_4_) {
                        DAT_0560b318[(int)DAT_0560b310] = &DAT_0560b364 + lVar22;
                        iVar7 = (int)DAT_0560b310 + 1;
                        DAT_0560b310 = CONCAT44(DAT_0560b310._4_4_,iVar7);
                      }
                      puVar18 = DAT_0560b318;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 7);
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
                              if (puVar14 != (uint *)0x0) goto LAB_02aa0f60;
LAB_02aa0f10:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar17[-1] = puVar14;
                              *puVar17 = puVar16;
                              puVar19 = (uint *)puVar17[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_02aa0f10;
LAB_02aa0f60:
                              if (puVar19 == (uint *)0x0) goto LAB_02aa0f10;
                              if (*puVar14 <= *puVar19) goto LAB_02aa0f10;
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
                    DAT_0560b30c = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bc4628;
                    pcVar12 = PTR_DAT_04bc4620;
                  }
                  else if (DAT_0560b30c != '\x01') goto LAB_02aa0dd8;
                  if ((int)DAT_0560b310 == 0) {
LAB_02aa0dd8:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bc4628;
                    pcVar12 = PTR_DAT_04bc4620;
                    if ((int)DAT_0560b310 < 2) {
                      uVar11 = 0;
                      puVar16 = (uint *)*DAT_0560b318;
                      uVar6 = uVar11;
                      if (puVar16 != (uint *)0x0) goto LAB_02aa0da0;
joined_r0x02aa0f94:
                      if (uVar6 < 7) {
                        uVar6 = *(uint *)(DAT_0560b318[uVar6] + 4);
                        if (uVar6 < 7) {
                          DAT_0560b300 = '\x01';
                          DAT_0560b304 = uVar20;
                          DAT_0560b308 = uVar6;
                          goto LAB_02aa13c0;
                        }
                        goto LAB_02aa0dd8;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_0560b310 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_0560b318[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x02aa0f94;
                        uVar10 = *(uint *)DAT_0560b318[(int)uVar6];
                        if (uVar10 == uVar20) goto joined_r0x02aa0f94;
                        if (uVar10 < uVar20) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar16 = (uint *)DAT_0560b318[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar16 == (uint *)0x0) goto joined_r0x02aa0f94;
LAB_02aa0da0:
                      uVar6 = uVar11;
                      if (*puVar16 == uVar20) goto joined_r0x02aa0f94;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_0560b258 == '\x01') && (DAT_0560b25c == uVar20)) {
                  uVar6 = DAT_0560b260;
                  if (6 < DAT_0560b260) goto LAB_02aa1354;
                }
                else {
                  if ((DAT_0560b2b0 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_0560b2b0);
                    puVar14 = (uint *)PTR_DAT_04bc4628;
                    pcVar12 = PTR_DAT_04bc4620;
                    if (iVar7 != 0) {
                      DAT_0560b268 = 0x700000000;
                      DAT_0560b270 = &DAT_0560b278;
                      __cxa_guard_release(&DAT_0560b2b0);
                      puVar14 = (uint *)PTR_DAT_04bc4628;
                      pcVar12 = PTR_DAT_04bc4620;
                    }
                  }
                  if ((DAT_0560b2b8 & 1) == 0) {
                    DAT_0560b2b8 = 1;
                    if (((DAT_0560b2f8 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_0560b2f8), iVar7 != 0)) {
                      DAT_0560b2ec = 0xffffffff00000000;
                      DAT_0560b2bc = 0xffffffff00000000;
                      DAT_0560b2c4 = 0xffffffff00000000;
                      DAT_0560b2cc = 0xffffffff00000000;
                      DAT_0560b2d4 = 0xffffffff00000000;
                      DAT_0560b2dc = 0xffffffff00000000;
                      DAT_0560b2e4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b2f8);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_s_Invalid_04a9d3f8)[lVar22];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02aa1058:
                            iVar7 = (int)lVar8;
joined_r0x02aa105c:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02aa1064;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02aa1058;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02aa105c;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02aa1064:
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
                      *(uint *)(&DAT_0560b2bc + lVar22) = uVar11;
                      *(int *)((long)&DAT_0560b2bc + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_0560b268;
                      if ((int)DAT_0560b268 < DAT_0560b268._4_4_) {
                        *(undefined8 **)(DAT_0560b270 + (long)(int)DAT_0560b268 * 8) =
                             &DAT_0560b2bc + lVar22;
                        iVar7 = (int)DAT_0560b268 + 1;
                        DAT_0560b268 = CONCAT44(DAT_0560b268._4_4_,iVar7);
                      }
                      puVar4 = DAT_0560b270;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 7);
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
                              if (puVar14 != (uint *)0x0) goto LAB_02aa12f0;
LAB_02aa12a0:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar18[-1] = puVar14;
                              *puVar18 = puVar16;
                              puVar19 = (uint *)puVar18[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_02aa12a0;
LAB_02aa12f0:
                              if (puVar19 == (uint *)0x0) goto LAB_02aa12a0;
                              if (*puVar14 <= *puVar19) goto LAB_02aa12a0;
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
                    DAT_0560b264 = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bc4628;
                    pcVar12 = PTR_DAT_04bc4620;
                  }
                  else if (DAT_0560b264 != '\x01') goto LAB_02aa1354;
                  if ((int)DAT_0560b268 == 0) {
LAB_02aa1354:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bc4628;
                    pcVar12 = PTR_DAT_04bc4620;
                    if ((int)DAT_0560b268 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_0560b268 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_0560b270 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x02aa1380;
                        uVar10 = **(uint **)(DAT_0560b270 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar20) goto joined_r0x02aa1380;
                        if (uVar10 < uVar20) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_0560b270 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_0560b270 + (long)(int)uVar6 * 8) == uVar20)) {
joined_r0x02aa1380:
                      if (uVar11 < 7) {
                        uVar6 = *(uint *)(*(long *)(DAT_0560b270 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 7) {
                          DAT_0560b258 = '\x01';
                          DAT_0560b25c = uVar20;
                          DAT_0560b260 = uVar6;
                          goto LAB_02aa13b8;
                        }
                        goto LAB_02aa1354;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_02aa13b8:
              }
LAB_02aa13c0:
              puVar4 = PTR_DAT_04bc4628;
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
                        if (uVar11 < *(uint *)PTR_DAT_04bc46c0) {
                          *(short *)(*(long *)(PTR_DAT_04bc46c0 + 8) + (long)(int)uVar11 * 2) =
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

