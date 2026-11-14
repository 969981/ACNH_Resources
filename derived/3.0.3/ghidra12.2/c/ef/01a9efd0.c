
void FUN_01a9efd0(uint *param_1)

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
  uint uVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar21 = 0;
    puVar13 = (uint *)PTR_DAT_04bbfef8;
    do {
      if (uVar21 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar7 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar7 = 0x1c;
            }
            puVar2 = (uint *)((ulong)(param_1[1] * uVar21 + (uint)(ushort)param_1[2] * 8 + iVar7) +
                             (long)param_1);
            if (puVar2 != (uint *)0x0) {
              uVar19 = *puVar2;
              if (uVar19 != 0) {
                cVar5 = *PTR_DAT_04bbfef0;
                do {
                  if (cVar5 == '\0') {
                    puVar13[8] = 0xffffffff;
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    cVar5 = '\x01';
                    puVar13[4] = 0xffffffff;
                    puVar13[5] = 0xffffffff;
                    puVar13[6] = 0xffffffff;
                    puVar13[7] = 0xffffffff;
                    uVar19 = *puVar2;
                    *PTR_DAT_04bbfef0 = 1;
                  }
                  else {
                    uVar6 = *puVar13;
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar19 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_01a9f190;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar19;
                  uVar19 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar19 = 0, puVar2 == puVar15))
                  goto LAB_01a9f190;
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar15)) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar2 + (lVar20 - (long)puVar15);
                  if (lVar20 == 0) break;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar15));
                  *puVar13 = 0xfffffffe;
                  if (uVar9 == 0) break;
                  puVar15 = (uint *)(lVar20 + 4);
                  while (puVar15[-1] != 0xea6a09cc) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_01a9f18c;
                  }
                  uVar19 = 0;
                  if (*puVar15 != 0xffffffff) {
                    uVar19 = *puVar15;
                  }
                  *puVar13 = uVar19;
                  uVar19 = *puVar2;
                  if (uVar19 == 0) break;
                } while( true );
              }
LAB_01a9f18c:
              uVar19 = 0;
LAB_01a9f190:
              if (((*puVar2 == 0) || (lVar20 = (long)puVar2 - (ulong)*puVar2, lVar20 == 0)) ||
                 (*(char *)(lVar20 + 0xb) == '\0')) {
                if ((DAT_05323688 == '\x01') && (DAT_0532368c == uVar19)) {
                  uVar6 = DAT_05323690;
                  if (0x13 < DAT_05323690) goto LAB_01a9f444;
                }
                else {
                  if ((DAT_05323748 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05323748);
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if (iVar7 != 0) {
                      DAT_05323698 = 0x1400000000;
                      DAT_053236a0 = (undefined8 *)&DAT_053236a8;
                      __cxa_guard_release(&DAT_05323748);
                      puVar13 = (uint *)PTR_DAT_04bbfef8;
                    }
                  }
                  if ((DAT_05323750 & 1) == 0) {
                    DAT_05323750 = 1;
                    if (((DAT_053237f8 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_053237f8), iVar7 != 0)) {
                      DAT_05323754 = 0xffffffff00000000;
                      DAT_0532375c = 0xffffffff00000000;
                      DAT_05323764 = 0xffffffff00000000;
                      DAT_0532376c = 0xffffffff00000000;
                      DAT_05323774 = 0xffffffff00000000;
                      DAT_0532377c = 0xffffffff00000000;
                      DAT_05323784 = 0xffffffff00000000;
                      DAT_0532378c = 0xffffffff00000000;
                      DAT_05323794 = 0xffffffff00000000;
                      DAT_0532379c = 0xffffffff00000000;
                      DAT_053237a4 = 0xffffffff00000000;
                      DAT_053237ac = 0xffffffff00000000;
                      DAT_053237b4 = 0xffffffff00000000;
                      DAT_053237bc = 0xffffffff00000000;
                      DAT_053237c4 = 0xffffffff00000000;
                      DAT_053237cc = 0xffffffff00000000;
                      DAT_053237d4 = 0xffffffff00000000;
                      DAT_053237dc = 0xffffffff00000000;
                      DAT_053237e4 = 0xffffffff00000000;
                      DAT_053237ec = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_053237f8);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = *(byte **)(PTR_s_FtrLoopAuto_04bb6028 + lVar20 * 8 + 0x148);
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01a9f2d4:
                            iVar7 = (int)lVar8;
joined_r0x01a9f2d8:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01a9f2e0;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01a9f2d4;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01a9f2d8;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01a9f2e0:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_05323754 + lVar20) = uVar11;
                      *(int *)((long)&DAT_05323754 + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05323698;
                      if ((int)DAT_05323698 < DAT_05323698._4_4_) {
                        DAT_053236a0[(int)DAT_05323698] = &DAT_05323754 + lVar20;
                        iVar7 = (int)DAT_05323698 + 1;
                        DAT_05323698 = CONCAT44(DAT_05323698._4_4_,iVar7);
                      }
                      puVar17 = DAT_053236a0;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 0x14);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01a9f5c0;
LAB_01a9f570:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01a9f570;
LAB_01a9f5c0:
                              if (puVar18 == (uint *)0x0) goto LAB_01a9f570;
                              if (*puVar13 <= *puVar18) goto LAB_01a9f570;
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
                    DAT_05323694 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                  }
                  else if (DAT_05323694 != '\x01') goto LAB_01a9f444;
                  if ((int)DAT_05323698 == 0) {
LAB_01a9f444:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if ((int)DAT_05323698 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_053236a0;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_01a9f410;
joined_r0x01a9f5f4:
                      if (uVar6 < 0x14) {
                        uVar6 = *(uint *)(DAT_053236a0[uVar6] + 4);
                        if (uVar6 < 0x14) {
                          DAT_05323688 = '\x01';
                          DAT_0532368c = uVar19;
                          DAT_05323690 = uVar6;
                          goto LAB_01a9f9e4;
                        }
                        goto LAB_01a9f444;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_05323698 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_053236a0[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x01a9f5f4;
                        uVar10 = *(uint *)DAT_053236a0[(int)uVar6];
                        if (uVar10 == uVar19) goto joined_r0x01a9f5f4;
                        if (uVar10 < uVar19) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_053236a0[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x01a9f5f4;
LAB_01a9f410:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar19) goto joined_r0x01a9f5f4;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_05323510 == '\x01') && (DAT_05323514 == uVar19)) {
                  uVar6 = DAT_05323518;
                  if (0x13 < DAT_05323518) goto LAB_01a9f980;
                }
                else {
                  if ((DAT_053235d0 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_053235d0);
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if (iVar7 != 0) {
                      DAT_05323520 = 0x1400000000;
                      DAT_05323528 = &DAT_05323530;
                      __cxa_guard_release(&DAT_053235d0);
                      puVar13 = (uint *)PTR_DAT_04bbfef8;
                    }
                  }
                  if ((DAT_053235d8 & 1) == 0) {
                    DAT_053235d8 = 1;
                    if (((DAT_05323680 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05323680), iVar7 != 0)) {
                      DAT_053235dc = 0xffffffff00000000;
                      DAT_053235e4 = 0xffffffff00000000;
                      DAT_053235ec = 0xffffffff00000000;
                      DAT_053235f4 = 0xffffffff00000000;
                      DAT_053235fc = 0xffffffff00000000;
                      DAT_05323604 = 0xffffffff00000000;
                      DAT_0532360c = 0xffffffff00000000;
                      DAT_05323614 = 0xffffffff00000000;
                      DAT_0532361c = 0xffffffff00000000;
                      DAT_05323624 = 0xffffffff00000000;
                      DAT_0532362c = 0xffffffff00000000;
                      DAT_05323634 = 0xffffffff00000000;
                      DAT_0532363c = 0xffffffff00000000;
                      DAT_05323644 = 0xffffffff00000000;
                      DAT_0532364c = 0xffffffff00000000;
                      DAT_05323654 = 0xffffffff00000000;
                      DAT_0532365c = 0xffffffff00000000;
                      DAT_05323664 = 0xffffffff00000000;
                      DAT_0532366c = 0xffffffff00000000;
                      DAT_05323674 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05323680);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_s_FtrLoopAuto_04a334a0)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01a9f6a4:
                            iVar7 = (int)lVar8;
joined_r0x01a9f6a8:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01a9f6b0;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01a9f6a4;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01a9f6a8;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01a9f6b0:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_053235dc + lVar20) = uVar11;
                      *(int *)((long)&DAT_053235dc + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05323520;
                      if ((int)DAT_05323520 < DAT_05323520._4_4_) {
                        *(undefined8 **)(DAT_05323528 + (long)(int)DAT_05323520 * 8) =
                             &DAT_053235dc + lVar20;
                        iVar7 = (int)DAT_05323520 + 1;
                        DAT_05323520 = CONCAT44(DAT_05323520._4_4_,iVar7);
                      }
                      puVar4 = DAT_05323528;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 0x14);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01a9f920;
LAB_01a9f8d0:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01a9f8d0;
LAB_01a9f920:
                              if (puVar18 == (uint *)0x0) goto LAB_01a9f8d0;
                              if (*puVar13 <= *puVar18) goto LAB_01a9f8d0;
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
                    DAT_0532351c = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                  }
                  else if (DAT_0532351c != '\x01') goto LAB_01a9f980;
                  if ((int)DAT_05323520 == 0) {
LAB_01a9f980:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if ((int)DAT_05323520 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_05323520 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_05323528 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x01a9f9ac;
                        uVar10 = **(uint **)(DAT_05323528 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar19) goto joined_r0x01a9f9ac;
                        if (uVar10 < uVar19) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_05323528 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_05323528 + (long)(int)uVar6 * 8) == uVar19)) {
joined_r0x01a9f9ac:
                      if (uVar11 < 0x14) {
                        uVar6 = *(uint *)(*(long *)(DAT_05323528 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 0x14) {
                          DAT_05323510 = '\x01';
                          DAT_05323514 = uVar19;
                          DAT_05323518 = uVar6;
                          goto LAB_01a9f9dc;
                        }
                        goto LAB_01a9f980;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_01a9f9dc:
              }
LAB_01a9f9e4:
              puVar4 = PTR_DAT_04bbfef8;
              puVar15 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar15 != (uint *)0x0)) {
                if (*puVar15 != 0) {
                  uVar19 = puVar15[1];
                  if (uVar19 != 0) {
                    if ((ulong)(ushort)puVar15[2] != 0) {
                      lVar20 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar20 = 0x1c;
                      }
                      lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
                      puVar13 = (uint *)puVar4;
                      if (lVar20 != 0) {
                        uVar11 = 0;
                        if ((ulong)uVar19 != 0) {
                          uVar11 = (uint)((ulong)((long)puVar2 - lVar20) / (ulong)uVar19);
                        }
                        if (*puVar15 <= uVar11) {
                          uVar11 = 0xffffffff;
                        }
                        if (uVar11 < *(uint *)PTR_DAT_04bc02b0) {
                          *(short *)(*(long *)(PTR_DAT_04bc02b0 + 8) + (long)(int)uVar11 * 2) =
                               (short)uVar6;
                        }
                      }
                    }
                  }
                }
              }
              uVar19 = *puVar2;
              if (uVar19 != 0) {
                cVar5 = *PTR_DAT_04bbfef0;
                do {
                  if (cVar5 == '\0') {
                    puVar13[8] = 0xffffffff;
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    cVar5 = '\x01';
                    puVar13[4] = 0xffffffff;
                    puVar13[5] = 0xffffffff;
                    puVar13[6] = 0xffffffff;
                    puVar13[7] = 0xffffffff;
                    uVar19 = *puVar2;
                    *PTR_DAT_04bbfef0 = 1;
                  }
                  else {
                    uVar6 = puVar13[1];
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar19 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_01a9fb60;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar19;
                  uVar19 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar19 = 0, puVar2 == puVar15))
                  goto LAB_01a9fb60;
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar15)) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar2 + (lVar20 - (long)puVar15);
                  if (lVar20 == 0) break;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar15));
                  puVar13[1] = 0xfffffffe;
                  if (uVar9 == 0) break;
                  puVar15 = (uint *)(lVar20 + 4);
                  while (puVar15[-1] != 0xa0839d12) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_01a9fb5c;
                  }
                  uVar19 = 0;
                  if (*puVar15 != 0xffffffff) {
                    uVar19 = *puVar15;
                  }
                  puVar13[1] = uVar19;
                  uVar19 = *puVar2;
                  if (uVar19 == 0) break;
                } while( true );
              }
LAB_01a9fb5c:
              uVar19 = 0;
LAB_01a9fb60:
              if (((*puVar2 == 0) || (lVar20 = (long)puVar2 - (ulong)*puVar2, lVar20 == 0)) ||
                 (*(char *)(lVar20 + 0xb) == '\0')) {
                if ((DAT_05323888 == '\x01') && (DAT_0532388c == uVar19)) {
                  uVar6 = DAT_05323890;
                  if (4 < DAT_05323890) goto LAB_01a9fe24;
                }
                else {
                  if ((DAT_053238d0 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_053238d0);
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if (iVar7 != 0) {
                      DAT_05323898 = 0x500000000;
                      DAT_053238a0 = (undefined8 *)&DAT_053238a8;
                      __cxa_guard_release(&DAT_053238d0);
                      puVar13 = (uint *)PTR_DAT_04bbfef8;
                    }
                  }
                  if ((DAT_053238d8 & 1) == 0) {
                    DAT_053238d8 = 1;
                    if (((DAT_05323908 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05323908), iVar7 != 0)) {
                      DAT_053238fc = 0xffffffff00000000;
                      DAT_053238dc = 0xffffffff00000000;
                      DAT_053238e4 = 0xffffffff00000000;
                      DAT_053238ec = 0xffffffff00000000;
                      DAT_053238f4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05323908);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_04a335c0)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01a9fca8:
                            iVar7 = (int)lVar8;
joined_r0x01a9fcac:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01a9fcb4;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01a9fca8;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01a9fcac;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01a9fcb4:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_053238dc + lVar20) = uVar11;
                      *(int *)((long)&DAT_053238dc + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05323898;
                      if ((int)DAT_05323898 < DAT_05323898._4_4_) {
                        DAT_053238a0[(int)DAT_05323898] = &DAT_053238dc + lVar20;
                        iVar7 = (int)DAT_05323898 + 1;
                        DAT_05323898 = CONCAT44(DAT_05323898._4_4_,iVar7);
                      }
                      puVar17 = DAT_053238a0;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 5);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01a9ffa0;
LAB_01a9ff50:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01a9ff50;
LAB_01a9ffa0:
                              if (puVar18 == (uint *)0x0) goto LAB_01a9ff50;
                              if (*puVar13 <= *puVar18) goto LAB_01a9ff50;
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
                    DAT_05323894 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                  }
                  else if (DAT_05323894 != '\x01') goto LAB_01a9fe24;
                  if ((int)DAT_05323898 == 0) {
LAB_01a9fe24:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if ((int)DAT_05323898 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_053238a0;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_01a9fdf0;
joined_r0x01a9fe04:
                      if (uVar6 < 5) {
                        uVar6 = *(uint *)(DAT_053238a0[uVar6] + 4);
                        if (uVar6 < 5) {
                          DAT_05323888 = '\x01';
                          DAT_0532388c = uVar19;
                          DAT_05323890 = uVar6;
                          goto LAB_01aa03c4;
                        }
                        goto LAB_01a9fe24;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_05323898 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_053238a0[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x01a9fe04;
                        uVar10 = *(uint *)DAT_053238a0[(int)uVar6];
                        if (uVar10 == uVar19) goto joined_r0x01a9fe04;
                        if (uVar10 < uVar19) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_053238a0[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x01a9fe04;
LAB_01a9fdf0:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar19) goto joined_r0x01a9fe04;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_05323800 == '\x01') && (DAT_05323804 == uVar19)) {
                  uVar6 = DAT_05323808;
                  if (4 < DAT_05323808) goto LAB_01aa0360;
                }
                else {
                  if ((DAT_05323848 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05323848);
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if (iVar7 != 0) {
                      DAT_05323810 = 0x500000000;
                      DAT_05323818 = &DAT_05323820;
                      __cxa_guard_release(&DAT_05323848);
                      puVar13 = (uint *)PTR_DAT_04bbfef8;
                    }
                  }
                  if ((DAT_05323850 & 1) == 0) {
                    DAT_05323850 = 1;
                    if (((DAT_05323880 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05323880), iVar7 != 0)) {
                      DAT_05323874 = 0xffffffff00000000;
                      DAT_05323854 = 0xffffffff00000000;
                      DAT_0532385c = 0xffffffff00000000;
                      DAT_05323864 = 0xffffffff00000000;
                      DAT_0532386c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05323880);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_04a33560)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01aa0084:
                            iVar7 = (int)lVar8;
joined_r0x01aa0088:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01aa0090;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01aa0084;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01aa0088;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01aa0090:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_05323854 + lVar20) = uVar11;
                      *(int *)((long)&DAT_05323854 + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05323810;
                      if ((int)DAT_05323810 < DAT_05323810._4_4_) {
                        *(undefined8 **)(DAT_05323818 + (long)(int)DAT_05323810 * 8) =
                             &DAT_05323854 + lVar20;
                        iVar7 = (int)DAT_05323810 + 1;
                        DAT_05323810 = CONCAT44(DAT_05323810._4_4_,iVar7);
                      }
                      puVar4 = DAT_05323818;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 5);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01aa0300;
LAB_01aa02b0:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01aa02b0;
LAB_01aa0300:
                              if (puVar18 == (uint *)0x0) goto LAB_01aa02b0;
                              if (*puVar13 <= *puVar18) goto LAB_01aa02b0;
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
                    DAT_0532380c = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                  }
                  else if (DAT_0532380c != '\x01') goto LAB_01aa0360;
                  if ((int)DAT_05323810 == 0) {
LAB_01aa0360:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if ((int)DAT_05323810 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_05323810 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_05323818 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x01aa038c;
                        uVar10 = **(uint **)(DAT_05323818 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar19) goto joined_r0x01aa038c;
                        if (uVar10 < uVar19) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_05323818 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_05323818 + (long)(int)uVar6 * 8) == uVar19)) {
joined_r0x01aa038c:
                      if (uVar11 < 5) {
                        uVar6 = *(uint *)(*(long *)(DAT_05323818 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 5) {
                          DAT_05323800 = '\x01';
                          DAT_05323804 = uVar19;
                          DAT_05323808 = uVar6;
                          goto LAB_01aa03bc;
                        }
                        goto LAB_01aa0360;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_01aa03bc:
              }
LAB_01aa03c4:
              puVar4 = PTR_DAT_04bbfef8;
              puVar15 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar15 != (uint *)0x0)) {
                if (*puVar15 != 0) {
                  uVar19 = puVar15[1];
                  if (uVar19 != 0) {
                    if ((ulong)(ushort)puVar15[2] != 0) {
                      lVar20 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar20 = 0x1c;
                      }
                      lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
                      puVar13 = (uint *)puVar4;
                      if (lVar20 != 0) {
                        uVar11 = 0;
                        if ((ulong)uVar19 != 0) {
                          uVar11 = (uint)((ulong)((long)puVar2 - lVar20) / (ulong)uVar19);
                        }
                        if (*puVar15 <= uVar11) {
                          uVar11 = 0xffffffff;
                        }
                        if (uVar11 < DAT_05323500) {
                          *(short *)(DAT_05323508 + (long)(int)uVar11 * 2) = (short)uVar6;
                        }
                      }
                    }
                  }
                }
              }
              uVar19 = *puVar2;
              if (uVar19 != 0) {
                cVar5 = *PTR_DAT_04bbfef0;
                do {
                  if (cVar5 == '\0') {
                    puVar13[8] = 0xffffffff;
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    cVar5 = '\x01';
                    puVar13[4] = 0xffffffff;
                    puVar13[5] = 0xffffffff;
                    puVar13[6] = 0xffffffff;
                    puVar13[7] = 0xffffffff;
                    uVar19 = *puVar2;
                    *PTR_DAT_04bbfef0 = 1;
                  }
                  else {
                    uVar6 = puVar13[2];
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar19 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_01aa0530;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar19;
                  uVar19 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar19 = 0, puVar2 == puVar15))
                  goto LAB_01aa0530;
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar15)) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar2 + (lVar20 - (long)puVar15);
                  if (lVar20 == 0) break;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar15));
                  puVar13[2] = 0xfffffffe;
                  if (uVar9 == 0) break;
                  puVar15 = (uint *)(lVar20 + 4);
                  while (puVar15[-1] != 0x8b1904b9) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_01aa052c;
                  }
                  uVar19 = 0;
                  if (*puVar15 != 0xffffffff) {
                    uVar19 = *puVar15;
                  }
                  puVar13[2] = uVar19;
                  uVar19 = *puVar2;
                  if (uVar19 == 0) break;
                } while( true );
              }
LAB_01aa052c:
              uVar19 = 0;
LAB_01aa0530:
              if (((*puVar2 == 0) || (lVar20 = (long)puVar2 - (ulong)*puVar2, lVar20 == 0)) ||
                 (*(char *)(lVar20 + 0xb) == '\0')) {
                if ((DAT_053239a8 == '\x01') && (DAT_053239ac == uVar19)) {
                  uVar6 = DAT_053239b0;
                  if (5 < DAT_053239b0) goto LAB_01aa07f4;
                }
                else {
                  if ((DAT_053239f8 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_053239f8);
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if (iVar7 != 0) {
                      DAT_053239b8 = 0x600000000;
                      DAT_053239c0 = (undefined8 *)&DAT_053239c8;
                      __cxa_guard_release(&DAT_053239f8);
                      puVar13 = (uint *)PTR_DAT_04bbfef8;
                    }
                  }
                  if ((DAT_05323a00 & 1) == 0) {
                    DAT_05323a00 = 1;
                    if (((DAT_05323a38 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05323a38), iVar7 != 0)) {
                      DAT_05323a04 = 0xffffffff00000000;
                      DAT_05323a0c = 0xffffffff00000000;
                      DAT_05323a14 = 0xffffffff00000000;
                      DAT_05323a1c = 0xffffffff00000000;
                      DAT_05323a24 = 0xffffffff00000000;
                      DAT_05323a2c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05323a38);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_04a336e8)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01aa0678:
                            iVar7 = (int)lVar8;
joined_r0x01aa067c:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01aa0684;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01aa0678;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01aa067c;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01aa0684:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_05323a04 + lVar20) = uVar11;
                      *(int *)((long)&DAT_05323a04 + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_053239b8;
                      if ((int)DAT_053239b8 < DAT_053239b8._4_4_) {
                        DAT_053239c0[(int)DAT_053239b8] = &DAT_05323a04 + lVar20;
                        iVar7 = (int)DAT_053239b8 + 1;
                        DAT_053239b8 = CONCAT44(DAT_053239b8._4_4_,iVar7);
                      }
                      puVar17 = DAT_053239c0;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 6);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01aa0970;
LAB_01aa0920:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01aa0920;
LAB_01aa0970:
                              if (puVar18 == (uint *)0x0) goto LAB_01aa0920;
                              if (*puVar13 <= *puVar18) goto LAB_01aa0920;
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
                    DAT_053239b4 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                  }
                  else if (DAT_053239b4 != '\x01') goto LAB_01aa07f4;
                  if ((int)DAT_053239b8 == 0) {
LAB_01aa07f4:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if ((int)DAT_053239b8 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_053239c0;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_01aa07c0;
joined_r0x01aa07d4:
                      if (uVar6 < 6) {
                        uVar6 = *(uint *)(DAT_053239c0[uVar6] + 4);
                        if (uVar6 < 6) {
                          DAT_053239a8 = '\x01';
                          DAT_053239ac = uVar19;
                          DAT_053239b0 = uVar6;
                          goto LAB_01aa0d94;
                        }
                        goto LAB_01aa07f4;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_053239b8 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_053239c0[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x01aa07d4;
                        uVar10 = *(uint *)DAT_053239c0[(int)uVar6];
                        if (uVar10 == uVar19) goto joined_r0x01aa07d4;
                        if (uVar10 < uVar19) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_053239c0[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x01aa07d4;
LAB_01aa07c0:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar19) goto joined_r0x01aa07d4;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_05323910 == '\x01') && (DAT_05323914 == uVar19)) {
                  uVar6 = DAT_05323918;
                  if (5 < DAT_05323918) goto LAB_01aa0d30;
                }
                else {
                  if ((DAT_05323960 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05323960);
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if (iVar7 != 0) {
                      DAT_05323920 = 0x600000000;
                      DAT_05323928 = &DAT_05323930;
                      __cxa_guard_release(&DAT_05323960);
                      puVar13 = (uint *)PTR_DAT_04bbfef8;
                    }
                  }
                  if ((DAT_05323968 & 1) == 0) {
                    DAT_05323968 = 1;
                    if (((DAT_053239a0 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_053239a0), iVar7 != 0)) {
                      DAT_0532396c = 0xffffffff00000000;
                      DAT_05323974 = 0xffffffff00000000;
                      DAT_0532397c = 0xffffffff00000000;
                      DAT_05323984 = 0xffffffff00000000;
                      DAT_0532398c = 0xffffffff00000000;
                      DAT_05323994 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_053239a0);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = *(byte **)(PTR_s_Unknown_04bc02c0 + lVar20 * 8 + 0x50);
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01aa0a54:
                            iVar7 = (int)lVar8;
joined_r0x01aa0a58:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01aa0a60;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01aa0a54;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01aa0a58;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01aa0a60:
                        memcpy(local_174,pbVar22,(long)iVar7);
                        local_174[iVar7] = 0;
                      }
                      uVar6 = (uint)*pbVar22;
                      if (*pbVar22 == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = 0xffffffff;
                        do {
                          pbVar22 = pbVar22 + 1;
                          uVar11 = crc32b(uVar11,uVar6,0x4c11db7);
                          uVar6 = (uint)*pbVar22;
                        } while (uVar6 != 0);
                        uVar11 = ~uVar11;
                      }
                      *(uint *)(&DAT_0532396c + lVar20) = uVar11;
                      *(int *)((long)&DAT_0532396c + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05323920;
                      if ((int)DAT_05323920 < DAT_05323920._4_4_) {
                        *(undefined8 **)(DAT_05323928 + (long)(int)DAT_05323920 * 8) =
                             &DAT_0532396c + lVar20;
                        iVar7 = (int)DAT_05323920 + 1;
                        DAT_05323920 = CONCAT44(DAT_05323920._4_4_,iVar7);
                      }
                      puVar4 = DAT_05323928;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 6);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01aa0cd0;
LAB_01aa0c80:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01aa0c80;
LAB_01aa0cd0:
                              if (puVar18 == (uint *)0x0) goto LAB_01aa0c80;
                              if (*puVar13 <= *puVar18) goto LAB_01aa0c80;
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
                    DAT_0532391c = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                  }
                  else if (DAT_0532391c != '\x01') goto LAB_01aa0d30;
                  if ((int)DAT_05323920 == 0) {
LAB_01aa0d30:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbfef8;
                    if ((int)DAT_05323920 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_05323920 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_05323928 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x01aa0d5c;
                        uVar10 = **(uint **)(DAT_05323928 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar19) goto joined_r0x01aa0d5c;
                        if (uVar10 < uVar19) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_05323928 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_05323928 + (long)(int)uVar6 * 8) == uVar19)) {
joined_r0x01aa0d5c:
                      if (uVar11 < 6) {
                        uVar6 = *(uint *)(*(long *)(DAT_05323928 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 6) {
                          DAT_05323910 = '\x01';
                          DAT_05323914 = uVar19;
                          DAT_05323918 = uVar6;
                          goto LAB_01aa0d8c;
                        }
                        goto LAB_01aa0d30;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_01aa0d8c:
              }
LAB_01aa0d94:
              puVar4 = PTR_DAT_04bbfef8;
              puVar15 = (uint *)((long)puVar2 - (ulong)*puVar2);
              if ((*puVar2 != 0) && (puVar15 != (uint *)0x0)) {
                if (*puVar15 != 0) {
                  uVar19 = puVar15[1];
                  if (uVar19 != 0) {
                    if ((ulong)(ushort)puVar15[2] != 0) {
                      lVar20 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar20 = 0x1c;
                      }
                      lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
                      puVar13 = (uint *)puVar4;
                      if (lVar20 != 0) {
                        uVar11 = 0;
                        if ((ulong)uVar19 != 0) {
                          uVar11 = (uint)((ulong)((long)puVar2 - lVar20) / (ulong)uVar19);
                        }
                        if (*puVar15 <= uVar11) {
                          uVar11 = 0xffffffff;
                        }
                        if (uVar11 < *(uint *)PTR_DAT_04bc02b8) {
                          *(short *)(*(long *)(PTR_DAT_04bc02b8 + 8) + (long)(int)uVar11 * 2) =
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
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar3);
  }
  return;
}

