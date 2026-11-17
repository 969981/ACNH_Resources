
void FUN_02a42910(uint *param_1)

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
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  long lVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar22 = 0;
    puVar13 = (uint *)PTR_DAT_04bc4380;
    do {
      if (uVar22 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar7 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar7 = 0x1c;
            }
            puVar2 = (uint *)((ulong)(param_1[1] * uVar22 + (uint)(ushort)param_1[2] * 8 + iVar7) +
                             (long)param_1);
            if (puVar2 != (uint *)0x0) {
              uVar20 = *puVar2;
              if (uVar20 != 0) {
                cVar5 = *PTR_DAT_04bc4378;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    uVar20 = *puVar2;
                    *PTR_DAT_04bc4378 = 1;
                  }
                  else {
                    uVar6 = *puVar13;
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar20 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_02a42ac0;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar20;
                  uVar20 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar20 = 0, puVar2 == puVar15))
                  goto LAB_02a42ac0;
                  lVar19 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar15)) != '\0') {
                    lVar19 = 0x1c;
                  }
                  lVar19 = (long)puVar2 + (lVar19 - (long)puVar15);
                  if (lVar19 == 0) break;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar15));
                  *puVar13 = 0xfffffffe;
                  if (uVar9 == 0) break;
                  puVar15 = (uint *)(lVar19 + 4);
                  while (puVar15[-1] != 0x6d4bd7da) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_02a42abc;
                  }
                  uVar20 = 0;
                  if (*puVar15 != 0xffffffff) {
                    uVar20 = *puVar15;
                  }
                  *puVar13 = uVar20;
                  uVar20 = *puVar2;
                  if (uVar20 == 0) break;
                } while( true );
              }
LAB_02a42abc:
              uVar20 = 0;
LAB_02a42ac0:
              if (((*puVar2 == 0) || (lVar19 = (long)puVar2 - (ulong)*puVar2, lVar19 == 0)) ||
                 (*(char *)(lVar19 + 0xb) == '\0')) {
                if ((DAT_055f6268 == '\x01') && (DAT_055f626c == uVar20)) {
                  uVar6 = DAT_055f6270;
                  if (8 < DAT_055f6270) goto LAB_02a42d74;
                }
                else {
                  if ((DAT_055f62d0 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_055f62d0);
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if (iVar7 != 0) {
                      DAT_055f6278 = 0x900000000;
                      DAT_055f6280 = (undefined8 *)&DAT_055f6288;
                      __cxa_guard_release(&DAT_055f62d0);
                      puVar13 = (uint *)PTR_DAT_04bc4380;
                    }
                  }
                  if ((DAT_055f62d8 & 1) == 0) {
                    DAT_055f62d8 = 1;
                    if (((DAT_055f6328 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_055f6328), iVar7 != 0)) {
                      DAT_055f631c = 0xffffffff00000000;
                      DAT_055f62dc = 0xffffffff00000000;
                      DAT_055f62e4 = 0xffffffff00000000;
                      DAT_055f62ec = 0xffffffff00000000;
                      DAT_055f62f4 = 0xffffffff00000000;
                      DAT_055f62fc = 0xffffffff00000000;
                      DAT_055f6304 = 0xffffffff00000000;
                      DAT_055f630c = 0xffffffff00000000;
                      DAT_055f6314 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055f6328);
                    }
                    lVar19 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = *(byte **)(PTR_DAT_04bc4398 + lVar19 * 8 + 0x60);
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02a42c04:
                            iVar7 = (int)lVar8;
joined_r0x02a42c08:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02a42c10;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02a42c04;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02a42c08;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02a42c10:
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
                      *(uint *)(&DAT_055f62dc + lVar19) = uVar11;
                      *(int *)((long)&DAT_055f62dc + lVar19 * 8 + 4) = (int)lVar19;
                      iVar7 = (int)DAT_055f6278;
                      if ((int)DAT_055f6278 < DAT_055f6278._4_4_) {
                        DAT_055f6280[(int)DAT_055f6278] = &DAT_055f62dc + lVar19;
                        iVar7 = (int)DAT_055f6278 + 1;
                        DAT_055f6278 = CONCAT44(DAT_055f6278._4_4_,iVar7);
                      }
                      puVar17 = DAT_055f6280;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 9);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar13 = (uint *)puVar17[uVar11];
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar12 = uVar9;
                          puVar15 = puVar13;
                        }
                        else {
                          uVar12 = uVar9 + 1;
                          puVar15 = (uint *)puVar17[uVar12];
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar15 < *puVar13)) {
                            puVar17[uVar12] = puVar13;
                            puVar17[uVar9] = puVar15;
                            puVar15 = puVar13;
                          }
                        }
                        uVar14 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar14 != 0) {
                          puVar16 = puVar17 + uVar12 + 1;
                          do {
                            puVar13 = (uint *)*puVar16;
                            uVar10 = (uint)uVar12;
                            if (((puVar15 == (uint *)0x0) || (puVar13 == (uint *)0x0)) ||
                               (*puVar15 <= *puVar13)) {
                              puVar18 = (uint *)puVar16[1];
                              if (puVar13 != (uint *)0x0) goto LAB_02a42ef0;
LAB_02a42ea0:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_02a42ea0;
LAB_02a42ef0:
                              if (puVar18 == (uint *)0x0) goto LAB_02a42ea0;
                              if (*puVar13 <= *puVar18) goto LAB_02a42ea0;
                              uVar6 = uVar10 + 1;
                              *puVar16 = puVar18;
                              puVar16[1] = puVar13;
                            }
                            uVar12 = uVar12 + 2;
                            puVar16 = puVar16 + 2;
                            puVar15 = puVar13;
                          } while (uVar14 != uVar12);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar12 = (ulong)uVar6;
                        puVar13 = (uint *)puVar17[uVar6];
                        uVar11 = uVar6;
                        do {
                          puVar15 = (uint *)puVar17[uVar12 - 1];
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar13 < *puVar15)) {
                            uVar11 = (uint)uVar12;
                            puVar17[uVar12 - 1] = puVar13;
                            puVar17[uVar12] = puVar15;
                            puVar15 = puVar13;
                          }
                          uVar12 = uVar12 - 1;
                          puVar13 = puVar15;
                        } while ((long)uVar9 < (long)uVar12);
                      } while (uVar11 != uVar6);
                    }
                    DAT_055f6274 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                  }
                  else if (DAT_055f6274 != '\x01') goto LAB_02a42d74;
                  if ((int)DAT_055f6278 == 0) {
LAB_02a42d74:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if ((int)DAT_055f6278 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_055f6280;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_02a42d40;
joined_r0x02a42f24:
                      if (uVar6 < 9) {
                        uVar6 = *(uint *)(DAT_055f6280[uVar6] + 4);
                        if (uVar6 < 9) {
                          DAT_055f6268 = '\x01';
                          DAT_055f626c = uVar20;
                          DAT_055f6270 = uVar6;
                          goto LAB_02a43324;
                        }
                        goto LAB_02a42d74;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_055f6278 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_055f6280[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x02a42f24;
                        uVar10 = *(uint *)DAT_055f6280[(int)uVar6];
                        if (uVar10 == uVar20) goto joined_r0x02a42f24;
                        if (uVar10 < uVar20) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_055f6280[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x02a42f24;
LAB_02a42d40:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar20) goto joined_r0x02a42f24;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_055f61a0 == '\x01') && (DAT_055f61a4 == uVar20)) {
                  uVar6 = DAT_055f61a8;
                  if (8 < DAT_055f61a8) goto LAB_02a432c0;
                }
                else {
                  if ((DAT_055f6208 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_055f6208);
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if (iVar7 != 0) {
                      DAT_055f61b0 = 0x900000000;
                      DAT_055f61b8 = &DAT_055f61c0;
                      __cxa_guard_release(&DAT_055f6208);
                      puVar13 = (uint *)PTR_DAT_04bc4380;
                    }
                  }
                  if ((DAT_055f6210 & 1) == 0) {
                    DAT_055f6210 = 1;
                    if (((DAT_055f6260 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_055f6260), iVar7 != 0)) {
                      DAT_055f6254 = 0xffffffff00000000;
                      DAT_055f6214 = 0xffffffff00000000;
                      DAT_055f621c = 0xffffffff00000000;
                      DAT_055f6224 = 0xffffffff00000000;
                      DAT_055f622c = 0xffffffff00000000;
                      DAT_055f6234 = 0xffffffff00000000;
                      DAT_055f623c = 0xffffffff00000000;
                      DAT_055f6244 = 0xffffffff00000000;
                      DAT_055f624c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055f6260);
                    }
                    lVar19 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = (&PTR_DAT_04a9a6d0)[lVar19];
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02a42fd8:
                            iVar7 = (int)lVar8;
joined_r0x02a42fdc:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02a42fe4;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02a42fd8;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02a42fdc;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02a42fe4:
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
                      *(uint *)(&DAT_055f6214 + lVar19) = uVar11;
                      *(int *)((long)&DAT_055f6214 + lVar19 * 8 + 4) = (int)lVar19;
                      iVar7 = (int)DAT_055f61b0;
                      if ((int)DAT_055f61b0 < DAT_055f61b0._4_4_) {
                        *(undefined8 **)(DAT_055f61b8 + (long)(int)DAT_055f61b0 * 8) =
                             &DAT_055f6214 + lVar19;
                        iVar7 = (int)DAT_055f61b0 + 1;
                        DAT_055f61b0 = CONCAT44(DAT_055f61b0._4_4_,iVar7);
                      }
                      puVar4 = DAT_055f61b8;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 9);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar13 = *(uint **)(puVar4 + (ulong)uVar11 * 8);
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar12 = uVar9;
                          puVar15 = puVar13;
                        }
                        else {
                          uVar12 = uVar9 + 1;
                          puVar15 = *(uint **)(puVar4 + uVar12 * 8);
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar15 < *puVar13)) {
                            *(uint **)(puVar4 + uVar12 * 8) = puVar13;
                            *(uint **)(puVar4 + uVar9 * 8) = puVar15;
                            puVar15 = puVar13;
                          }
                        }
                        uVar14 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar14 != 0) {
                          puVar17 = (undefined8 *)(puVar4 + uVar12 * 8 + 8);
                          do {
                            puVar13 = (uint *)*puVar17;
                            uVar10 = (uint)uVar12;
                            if (((puVar15 == (uint *)0x0) || (puVar13 == (uint *)0x0)) ||
                               (*puVar15 <= *puVar13)) {
                              puVar18 = (uint *)puVar17[1];
                              if (puVar13 != (uint *)0x0) goto LAB_02a43260;
LAB_02a43210:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_02a43210;
LAB_02a43260:
                              if (puVar18 == (uint *)0x0) goto LAB_02a43210;
                              if (*puVar13 <= *puVar18) goto LAB_02a43210;
                              uVar6 = uVar10 + 1;
                              *puVar17 = puVar18;
                              puVar17[1] = puVar13;
                            }
                            uVar12 = uVar12 + 2;
                            puVar17 = puVar17 + 2;
                            puVar15 = puVar13;
                          } while (uVar14 != uVar12);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar12 = (ulong)uVar6;
                        puVar13 = *(uint **)(puVar4 + (ulong)uVar6 * 8);
                        uVar11 = uVar6;
                        do {
                          puVar15 = *(uint **)(puVar4 + uVar12 * 8 + -8);
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar13 < *puVar15)) {
                            uVar11 = (uint)uVar12;
                            *(uint **)(puVar4 + uVar12 * 8 + -8) = puVar13;
                            *(uint **)(puVar4 + uVar12 * 8) = puVar15;
                            puVar15 = puVar13;
                          }
                          uVar12 = uVar12 - 1;
                          puVar13 = puVar15;
                        } while ((long)uVar9 < (long)uVar12);
                      } while (uVar11 != uVar6);
                    }
                    DAT_055f61ac = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                  }
                  else if (DAT_055f61ac != '\x01') goto LAB_02a432c0;
                  if ((int)DAT_055f61b0 == 0) {
LAB_02a432c0:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if ((int)DAT_055f61b0 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_055f61b0 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_055f61b8 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x02a432ec;
                        uVar10 = **(uint **)(DAT_055f61b8 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar20) goto joined_r0x02a432ec;
                        if (uVar10 < uVar20) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_055f61b8 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_055f61b8 + (long)(int)uVar6 * 8) == uVar20)) {
joined_r0x02a432ec:
                      if (uVar11 < 9) {
                        uVar6 = *(uint *)(*(long *)(DAT_055f61b8 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 9) {
                          DAT_055f61a0 = '\x01';
                          DAT_055f61a4 = uVar20;
                          DAT_055f61a8 = uVar6;
                          goto LAB_02a4331c;
                        }
                        goto LAB_02a432c0;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_02a4331c:
              }
LAB_02a43324:
              puVar4 = PTR_DAT_04bc4380;
              puVar15 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar15 != (uint *)0x0)) {
                if (*puVar15 != 0) {
                  uVar20 = puVar15[1];
                  if (uVar20 != 0) {
                    if ((ulong)(ushort)puVar15[2] != 0) {
                      lVar19 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar19 = 0x1c;
                      }
                      lVar19 = (long)puVar15 + lVar19 + (ulong)(ushort)puVar15[2] * 8;
                      puVar13 = (uint *)puVar4;
                      if (lVar19 != 0) {
                        uVar11 = 0;
                        if ((ulong)uVar20 != 0) {
                          uVar11 = (uint)((ulong)((long)puVar2 - lVar19) / (ulong)uVar20);
                        }
                        if (*puVar15 <= uVar11) {
                          uVar11 = 0xffffffff;
                        }
                        if (uVar11 < *(uint *)PTR_DAT_04bc4388) {
                          *(short *)(*(long *)(PTR_DAT_04bc4388 + 8) + (long)(int)uVar11 * 2) =
                               (short)uVar6;
                        }
                      }
                    }
                  }
                }
              }
              uVar20 = *puVar2;
              if (uVar20 != 0) {
                cVar5 = *PTR_DAT_04bc4378;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    uVar20 = *puVar2;
                    *PTR_DAT_04bc4378 = 1;
                  }
                  else {
                    uVar6 = puVar13[1];
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar20 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_02a43490;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar20;
                  uVar20 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar20 = 0, puVar2 == puVar15))
                  goto LAB_02a43490;
                  lVar19 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar15)) != '\0') {
                    lVar19 = 0x1c;
                  }
                  lVar19 = (long)puVar2 + (lVar19 - (long)puVar15);
                  if (lVar19 == 0) break;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar15));
                  puVar13[1] = 0xfffffffe;
                  if (uVar9 == 0) break;
                  puVar15 = (uint *)(lVar19 + 4);
                  while (puVar15[-1] != 0xfd26913) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_02a4348c;
                  }
                  uVar20 = 0;
                  if (*puVar15 != 0xffffffff) {
                    uVar20 = *puVar15;
                  }
                  puVar13[1] = uVar20;
                  uVar20 = *puVar2;
                  if (uVar20 == 0) break;
                } while( true );
              }
LAB_02a4348c:
              uVar20 = 0;
LAB_02a43490:
              if (((*puVar2 == 0) || (lVar19 = (long)puVar2 - (ulong)*puVar2, lVar19 == 0)) ||
                 (*(char *)(lVar19 + 0xb) == '\0')) {
                if ((DAT_055f63f8 == '\x01') && (DAT_055f63fc == uVar20)) {
                  uVar6 = DAT_055f6400;
                  if (8 < DAT_055f6400) goto LAB_02a43744;
                }
                else {
                  if ((DAT_055f6460 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_055f6460);
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if (iVar7 != 0) {
                      DAT_055f6408 = 0x900000000;
                      DAT_055f6410 = (undefined8 *)&DAT_055f6418;
                      __cxa_guard_release(&DAT_055f6460);
                      puVar13 = (uint *)PTR_DAT_04bc4380;
                    }
                  }
                  if ((DAT_055f6468 & 1) == 0) {
                    DAT_055f6468 = 1;
                    if (((DAT_055f64b8 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_055f64b8), iVar7 != 0)) {
                      DAT_055f64ac = 0xffffffff00000000;
                      DAT_055f646c = 0xffffffff00000000;
                      DAT_055f6474 = 0xffffffff00000000;
                      DAT_055f647c = 0xffffffff00000000;
                      DAT_055f6484 = 0xffffffff00000000;
                      DAT_055f648c = 0xffffffff00000000;
                      DAT_055f6494 = 0xffffffff00000000;
                      DAT_055f649c = 0xffffffff00000000;
                      DAT_055f64a4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055f64b8);
                    }
                    lVar19 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = *(byte **)(PTR_DAT_04bc43a8 + lVar19 * 8 + 0x78);
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02a435d8:
                            iVar7 = (int)lVar8;
joined_r0x02a435dc:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02a435e4;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02a435d8;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02a435dc;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02a435e4:
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
                      *(uint *)(&DAT_055f646c + lVar19) = uVar11;
                      *(int *)((long)&DAT_055f646c + lVar19 * 8 + 4) = (int)lVar19;
                      iVar7 = (int)DAT_055f6408;
                      if ((int)DAT_055f6408 < DAT_055f6408._4_4_) {
                        DAT_055f6410[(int)DAT_055f6408] = &DAT_055f646c + lVar19;
                        iVar7 = (int)DAT_055f6408 + 1;
                        DAT_055f6408 = CONCAT44(DAT_055f6408._4_4_,iVar7);
                      }
                      puVar17 = DAT_055f6410;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 9);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar13 = (uint *)puVar17[uVar11];
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar12 = uVar9;
                          puVar15 = puVar13;
                        }
                        else {
                          uVar12 = uVar9 + 1;
                          puVar15 = (uint *)puVar17[uVar12];
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar15 < *puVar13)) {
                            puVar17[uVar12] = puVar13;
                            puVar17[uVar9] = puVar15;
                            puVar15 = puVar13;
                          }
                        }
                        uVar14 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar14 != 0) {
                          puVar16 = puVar17 + uVar12 + 1;
                          do {
                            puVar13 = (uint *)*puVar16;
                            uVar10 = (uint)uVar12;
                            if (((puVar15 == (uint *)0x0) || (puVar13 == (uint *)0x0)) ||
                               (*puVar15 <= *puVar13)) {
                              puVar18 = (uint *)puVar16[1];
                              if (puVar13 != (uint *)0x0) goto LAB_02a438c0;
LAB_02a43870:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_02a43870;
LAB_02a438c0:
                              if (puVar18 == (uint *)0x0) goto LAB_02a43870;
                              if (*puVar13 <= *puVar18) goto LAB_02a43870;
                              uVar6 = uVar10 + 1;
                              *puVar16 = puVar18;
                              puVar16[1] = puVar13;
                            }
                            uVar12 = uVar12 + 2;
                            puVar16 = puVar16 + 2;
                            puVar15 = puVar13;
                          } while (uVar14 != uVar12);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar12 = (ulong)uVar6;
                        puVar13 = (uint *)puVar17[uVar6];
                        uVar11 = uVar6;
                        do {
                          puVar15 = (uint *)puVar17[uVar12 - 1];
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar13 < *puVar15)) {
                            uVar11 = (uint)uVar12;
                            puVar17[uVar12 - 1] = puVar13;
                            puVar17[uVar12] = puVar15;
                            puVar15 = puVar13;
                          }
                          uVar12 = uVar12 - 1;
                          puVar13 = puVar15;
                        } while ((long)uVar9 < (long)uVar12);
                      } while (uVar11 != uVar6);
                    }
                    DAT_055f6404 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                  }
                  else if (DAT_055f6404 != '\x01') goto LAB_02a43744;
                  if ((int)DAT_055f6408 == 0) {
LAB_02a43744:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if ((int)DAT_055f6408 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_055f6410;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_02a43710;
joined_r0x02a43724:
                      if (uVar6 < 9) {
                        uVar6 = *(uint *)(DAT_055f6410[uVar6] + 4);
                        if (uVar6 < 9) {
                          DAT_055f63f8 = '\x01';
                          DAT_055f63fc = uVar20;
                          DAT_055f6400 = uVar6;
                          goto LAB_02a43cf4;
                        }
                        goto LAB_02a43744;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_055f6408 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_055f6410[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x02a43724;
                        uVar10 = *(uint *)DAT_055f6410[(int)uVar6];
                        if (uVar10 == uVar20) goto joined_r0x02a43724;
                        if (uVar10 < uVar20) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_055f6410[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x02a43724;
LAB_02a43710:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar20) goto joined_r0x02a43724;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_055f6330 == '\x01') && (DAT_055f6334 == uVar20)) {
                  uVar6 = DAT_055f6338;
                  if (8 < DAT_055f6338) goto LAB_02a43c90;
                }
                else {
                  if ((DAT_055f6398 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_055f6398);
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if (iVar7 != 0) {
                      DAT_055f6340 = 0x900000000;
                      DAT_055f6348 = &DAT_055f6350;
                      __cxa_guard_release(&DAT_055f6398);
                      puVar13 = (uint *)PTR_DAT_04bc4380;
                    }
                  }
                  if ((DAT_055f63a0 & 1) == 0) {
                    DAT_055f63a0 = 1;
                    if (((DAT_055f63f0 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_055f63f0), iVar7 != 0)) {
                      DAT_055f63e4 = 0xffffffff00000000;
                      DAT_055f63a4 = 0xffffffff00000000;
                      DAT_055f63ac = 0xffffffff00000000;
                      DAT_055f63b4 = 0xffffffff00000000;
                      DAT_055f63bc = 0xffffffff00000000;
                      DAT_055f63c4 = 0xffffffff00000000;
                      DAT_055f63cc = 0xffffffff00000000;
                      DAT_055f63d4 = 0xffffffff00000000;
                      DAT_055f63dc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_055f63f0);
                    }
                    lVar19 = 0;
                    do {
                      local_75 = 0;
                      pbVar21 = *(byte **)(PTR_s_TestSoft_04bc43a0 + lVar19 * 8 + 0x38);
                      if (local_174 != pbVar21) {
                        lVar8 = 0;
                        do {
                          if (pbVar21[lVar8] == 0) {
LAB_02a439a8:
                            iVar7 = (int)lVar8;
joined_r0x02a439ac:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_02a439b4;
                          }
                          if (pbVar21[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_02a439a8;
                          }
                          if (pbVar21[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x02a439ac;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_02a439b4:
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
                      *(uint *)(&DAT_055f63a4 + lVar19) = uVar11;
                      *(int *)((long)&DAT_055f63a4 + lVar19 * 8 + 4) = (int)lVar19;
                      iVar7 = (int)DAT_055f6340;
                      if ((int)DAT_055f6340 < DAT_055f6340._4_4_) {
                        *(undefined8 **)(DAT_055f6348 + (long)(int)DAT_055f6340 * 8) =
                             &DAT_055f63a4 + lVar19;
                        iVar7 = (int)DAT_055f6340 + 1;
                        DAT_055f6340 = CONCAT44(DAT_055f6340._4_4_,iVar7);
                      }
                      puVar4 = DAT_055f6348;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 9);
                    if (1 < iVar7) {
                      uVar11 = 0;
                      uVar6 = iVar7 - 1;
                      do {
                        if ((int)uVar6 <= (int)uVar11) break;
                        puVar13 = *(uint **)(puVar4 + (ulong)uVar11 * 8);
                        uVar9 = (ulong)uVar11;
                        if ((uVar6 - uVar11 & 1) == 0) {
                          uVar12 = uVar9;
                          puVar15 = puVar13;
                        }
                        else {
                          uVar12 = uVar9 + 1;
                          puVar15 = *(uint **)(puVar4 + uVar12 * 8);
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar15 < *puVar13)) {
                            *(uint **)(puVar4 + uVar12 * 8) = puVar13;
                            *(uint **)(puVar4 + uVar9 * 8) = puVar15;
                            puVar15 = puVar13;
                          }
                        }
                        uVar14 = (ulong)uVar6;
                        uVar6 = uVar11;
                        if (~uVar9 + uVar14 != 0) {
                          puVar17 = (undefined8 *)(puVar4 + uVar12 * 8 + 8);
                          do {
                            puVar13 = (uint *)*puVar17;
                            uVar10 = (uint)uVar12;
                            if (((puVar15 == (uint *)0x0) || (puVar13 == (uint *)0x0)) ||
                               (*puVar15 <= *puVar13)) {
                              puVar18 = (uint *)puVar17[1];
                              if (puVar13 != (uint *)0x0) goto LAB_02a43c30;
LAB_02a43be0:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_02a43be0;
LAB_02a43c30:
                              if (puVar18 == (uint *)0x0) goto LAB_02a43be0;
                              if (*puVar13 <= *puVar18) goto LAB_02a43be0;
                              uVar6 = uVar10 + 1;
                              *puVar17 = puVar18;
                              puVar17[1] = puVar13;
                            }
                            uVar12 = uVar12 + 2;
                            puVar17 = puVar17 + 2;
                            puVar15 = puVar13;
                          } while (uVar14 != uVar12);
                        }
                        if ((int)uVar6 <= (int)uVar11) break;
                        uVar12 = (ulong)uVar6;
                        puVar13 = *(uint **)(puVar4 + (ulong)uVar6 * 8);
                        uVar11 = uVar6;
                        do {
                          puVar15 = *(uint **)(puVar4 + uVar12 * 8 + -8);
                          if (((puVar13 != (uint *)0x0) && (puVar15 != (uint *)0x0)) &&
                             (*puVar13 < *puVar15)) {
                            uVar11 = (uint)uVar12;
                            *(uint **)(puVar4 + uVar12 * 8 + -8) = puVar13;
                            *(uint **)(puVar4 + uVar12 * 8) = puVar15;
                            puVar15 = puVar13;
                          }
                          uVar12 = uVar12 - 1;
                          puVar13 = puVar15;
                        } while ((long)uVar9 < (long)uVar12);
                      } while (uVar11 != uVar6);
                    }
                    DAT_055f633c = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                  }
                  else if (DAT_055f633c != '\x01') goto LAB_02a43c90;
                  if ((int)DAT_055f6340 == 0) {
LAB_02a43c90:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bc4380;
                    if ((int)DAT_055f6340 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_055f6340 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_055f6348 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x02a43cbc;
                        uVar10 = **(uint **)(DAT_055f6348 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar20) goto joined_r0x02a43cbc;
                        if (uVar10 < uVar20) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_055f6348 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_055f6348 + (long)(int)uVar6 * 8) == uVar20)) {
joined_r0x02a43cbc:
                      if (uVar11 < 9) {
                        uVar6 = *(uint *)(*(long *)(DAT_055f6348 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 9) {
                          DAT_055f6330 = '\x01';
                          DAT_055f6334 = uVar20;
                          DAT_055f6338 = uVar6;
                          goto LAB_02a43cec;
                        }
                        goto LAB_02a43c90;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_02a43cec:
              }
LAB_02a43cf4:
              puVar4 = PTR_DAT_04bc4380;
              puVar15 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar15 != (uint *)0x0)) {
                if (*puVar15 != 0) {
                  uVar20 = puVar15[1];
                  if (uVar20 != 0) {
                    if ((ulong)(ushort)puVar15[2] != 0) {
                      lVar19 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar19 = 0x1c;
                      }
                      lVar19 = (long)puVar15 + lVar19 + (ulong)(ushort)puVar15[2] * 8;
                      puVar13 = (uint *)puVar4;
                      if (lVar19 != 0) {
                        uVar11 = 0;
                        if ((ulong)uVar20 != 0) {
                          uVar11 = (uint)((ulong)((long)puVar2 - lVar19) / (ulong)uVar20);
                        }
                        if (*puVar15 <= uVar11) {
                          uVar11 = 0xffffffff;
                        }
                        if (uVar11 < *(uint *)PTR_DAT_04bc4390) {
                          *(short *)(*(long *)(PTR_DAT_04bc4390 + 8) + (long)(int)uVar11 * 2) =
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
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar3);
  }
  return;
}

