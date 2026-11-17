
void FUN_02a52780(uint *param_1)

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
    puVar14 = (uint *)PTR_DAT_04bc3fa8;
    pcVar12 = PTR_DAT_04bc3fa0;
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
                    uVar20 = *puVar2;
                  }
                  else {
                    uVar6 = *puVar14;
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar20 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_02a52930;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar20;
                  uVar20 = 0;
                  if ((puVar16 == (uint *)0x0) || (uVar20 = 0, puVar2 == puVar16))
                  goto LAB_02a52930;
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
                  while (puVar16[-1] != 0x5fc0d92d) {
                    puVar16 = puVar16 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_02a5292c;
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
LAB_02a5292c:
              uVar20 = 0;
LAB_02a52930:
              if (((*puVar2 == 0) || (lVar22 = (long)puVar2 - (ulong)*puVar2, lVar22 == 0)) ||
                 (*(char *)(lVar22 + 0xb) == '\0')) {
                if ((DAT_055f67a8 == '\x01') && (DAT_055f67ac == uVar20)) {
                  uVar6 = DAT_055f67b0;
                  if (4 < DAT_055f67b0) goto LAB_02a52be8;
                }
                else {
                  if ((DAT_055f67f0 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_055f67f0);
                    puVar14 = (uint *)PTR_DAT_04bc3fa8;
                    pcVar12 = PTR_DAT_04bc3fa0;
                    if (iVar7 != 0) {
                      DAT_055f67b8 = 0x500000000;
                      DAT_055f67c0 = (undefined8 *)&DAT_055f67c8;
                      __cxa_guard_release(&DAT_055f67f0);
                      puVar14 = (uint *)PTR_DAT_04bc3fa8;
                      pcVar12 = PTR_DAT_04bc3fa0;
                    }
                  }
                  if ((DAT_055f67f8 & 1) == 0) {
                    DAT_055f67f8 = 1;
                    if (((DAT_055f6828 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_055f6828), iVar7 != 0)) {
                      DAT_055f681c = 0xffffffff00000000;
                      DAT_055f67fc = 0xffffffff00000000;
                      DAT_055f6804 = 0xffffffff00000000;
                      DAT_055f680c = 0xffffffff00000000;
                      DAT_055f6814 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055f6828);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_DAT_04a9ade0)[lVar22];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02a52a74:
                            iVar7 = (int)lVar8;
joined_r0x02a52a78:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02a52a80;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02a52a74;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02a52a78;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02a52a80:
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
                      *(uint *)(&DAT_055f67fc + lVar22) = uVar11;
                      *(int *)((long)&DAT_055f67fc + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_055f67b8;
                      if ((int)DAT_055f67b8 < DAT_055f67b8._4_4_) {
                        DAT_055f67c0[(int)DAT_055f67b8] = &DAT_055f67fc + lVar22;
                        iVar7 = (int)DAT_055f67b8 + 1;
                        DAT_055f67b8 = CONCAT44(DAT_055f67b8._4_4_,iVar7);
                      }
                      puVar18 = DAT_055f67c0;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 5);
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
                              if (puVar14 != (uint *)0x0) goto LAB_02a52d70;
LAB_02a52d20:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar17[-1] = puVar14;
                              *puVar17 = puVar16;
                              puVar19 = (uint *)puVar17[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_02a52d20;
LAB_02a52d70:
                              if (puVar19 == (uint *)0x0) goto LAB_02a52d20;
                              if (*puVar14 <= *puVar19) goto LAB_02a52d20;
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
                    DAT_055f67b4 = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bc3fa8;
                    pcVar12 = PTR_DAT_04bc3fa0;
                  }
                  else if (DAT_055f67b4 != '\x01') goto LAB_02a52be8;
                  if ((int)DAT_055f67b8 == 0) {
LAB_02a52be8:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bc3fa8;
                    pcVar12 = PTR_DAT_04bc3fa0;
                    if ((int)DAT_055f67b8 < 2) {
                      uVar11 = 0;
                      puVar16 = (uint *)*DAT_055f67c0;
                      uVar6 = uVar11;
                      if (puVar16 != (uint *)0x0) goto LAB_02a52bb0;
joined_r0x02a52da4:
                      if (uVar6 < 5) {
                        uVar6 = *(uint *)(DAT_055f67c0[uVar6] + 4);
                        if (uVar6 < 5) {
                          DAT_055f67a8 = '\x01';
                          DAT_055f67ac = uVar20;
                          DAT_055f67b0 = uVar6;
                          goto LAB_02a531d0;
                        }
                        goto LAB_02a52be8;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_055f67b8 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_055f67c0[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x02a52da4;
                        uVar10 = *(uint *)DAT_055f67c0[(int)uVar6];
                        if (uVar10 == uVar20) goto joined_r0x02a52da4;
                        if (uVar10 < uVar20) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar16 = (uint *)DAT_055f67c0[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar16 == (uint *)0x0) goto joined_r0x02a52da4;
LAB_02a52bb0:
                      uVar6 = uVar11;
                      if (*puVar16 == uVar20) goto joined_r0x02a52da4;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_055f6720 == '\x01') && (DAT_055f6724 == uVar20)) {
                  uVar6 = DAT_055f6728;
                  if (4 < DAT_055f6728) goto LAB_02a53164;
                }
                else {
                  if ((DAT_055f6768 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_055f6768);
                    puVar14 = (uint *)PTR_DAT_04bc3fa8;
                    pcVar12 = PTR_DAT_04bc3fa0;
                    if (iVar7 != 0) {
                      DAT_055f6730 = 0x500000000;
                      DAT_055f6738 = &DAT_055f6740;
                      __cxa_guard_release(&DAT_055f6768);
                      puVar14 = (uint *)PTR_DAT_04bc3fa8;
                      pcVar12 = PTR_DAT_04bc3fa0;
                    }
                  }
                  if ((DAT_055f6770 & 1) == 0) {
                    DAT_055f6770 = 1;
                    if (((DAT_055f67a0 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_055f67a0), iVar7 != 0)) {
                      DAT_055f6794 = 0xffffffff00000000;
                      DAT_055f6774 = 0xffffffff00000000;
                      DAT_055f677c = 0xffffffff00000000;
                      DAT_055f6784 = 0xffffffff00000000;
                      DAT_055f678c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055f67a0);
                    }
                    lVar22 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_s_NotDrum_04a9ad58)[lVar22];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02a52e68:
                            iVar7 = (int)lVar8;
joined_r0x02a52e6c:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02a52e74;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02a52e68;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02a52e6c;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02a52e74:
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
                      *(uint *)(&DAT_055f6774 + lVar22) = uVar11;
                      *(int *)((long)&DAT_055f6774 + lVar22 * 8 + 4) = (int)lVar22;
                      iVar7 = (int)DAT_055f6730;
                      if ((int)DAT_055f6730 < DAT_055f6730._4_4_) {
                        *(undefined8 **)(DAT_055f6738 + (long)(int)DAT_055f6730 * 8) =
                             &DAT_055f6774 + lVar22;
                        iVar7 = (int)DAT_055f6730 + 1;
                        DAT_055f6730 = CONCAT44(DAT_055f6730._4_4_,iVar7);
                      }
                      puVar4 = DAT_055f6738;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 5);
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
                              if (puVar14 != (uint *)0x0) goto LAB_02a53100;
LAB_02a530b0:
                              puVar14 = puVar19;
                            }
                            else {
                              puVar18[-1] = puVar14;
                              *puVar18 = puVar16;
                              puVar19 = (uint *)puVar18[1];
                              puVar14 = puVar16;
                              uVar6 = uVar10;
                              if (puVar16 == (uint *)0x0) goto LAB_02a530b0;
LAB_02a53100:
                              if (puVar19 == (uint *)0x0) goto LAB_02a530b0;
                              if (*puVar14 <= *puVar19) goto LAB_02a530b0;
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
                    DAT_055f672c = '\x01';
                    puVar14 = (uint *)PTR_DAT_04bc3fa8;
                    pcVar12 = PTR_DAT_04bc3fa0;
                  }
                  else if (DAT_055f672c != '\x01') goto LAB_02a53164;
                  if ((int)DAT_055f6730 == 0) {
LAB_02a53164:
                    uVar6 = 0;
                  }
                  else {
                    puVar14 = (uint *)PTR_DAT_04bc3fa8;
                    pcVar12 = PTR_DAT_04bc3fa0;
                    if ((int)DAT_055f6730 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_055f6730 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_055f6738 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x02a53190;
                        uVar10 = **(uint **)(DAT_055f6738 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar20) goto joined_r0x02a53190;
                        if (uVar10 < uVar20) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_055f6738 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_055f6738 + (long)(int)uVar6 * 8) == uVar20)) {
joined_r0x02a53190:
                      if (uVar11 < 5) {
                        uVar6 = *(uint *)(*(long *)(DAT_055f6738 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 5) {
                          DAT_055f6720 = '\x01';
                          DAT_055f6724 = uVar20;
                          DAT_055f6728 = uVar6;
                          goto LAB_02a531c8;
                        }
                        goto LAB_02a53164;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_02a531c8:
              }
LAB_02a531d0:
              puVar4 = PTR_DAT_04bc3fa8;
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
                        if (uVar11 < *(uint *)PTR_DAT_04bc3fb0) {
                          *(short *)(*(long *)(PTR_DAT_04bc3fb0 + 8) + (long)(int)uVar11 * 2) =
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

