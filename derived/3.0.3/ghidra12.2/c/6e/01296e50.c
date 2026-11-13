
void FUN_01296e50(uint *param_1)

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
    puVar13 = (uint *)PTR_DAT_04bbbdb0;
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
                cVar5 = *PTR_DAT_04bbbda8;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    *PTR_DAT_04bbbda8 = 1;
                    puVar13[4] = 0xffffffff;
                    puVar13[5] = 0xffffffff;
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    uVar19 = *puVar2;
                  }
                  else {
                    uVar6 = *puVar13;
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar19 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_01297000;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar19;
                  uVar19 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar19 = 0, puVar2 == puVar15))
                  goto LAB_01297000;
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
                  while (puVar15[-1] != 0x6654378d) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_01296ffc;
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
LAB_01296ffc:
              uVar19 = 0;
LAB_01297000:
              if (((*puVar2 == 0) || (lVar20 = (long)puVar2 - (ulong)*puVar2, lVar20 == 0)) ||
                 (*(char *)(lVar20 + 0xb) == '\0')) {
                if ((DAT_05161eb8 == '\x01') && (DAT_05161ebc == uVar19)) {
                  uVar6 = DAT_05161ec0;
                  if (0xd < DAT_05161ec0) goto LAB_012972b4;
                }
                else {
                  if ((DAT_05161f48 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05161f48);
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if (iVar7 != 0) {
                      DAT_05161ec8 = 0xe00000000;
                      DAT_05161ed0 = (undefined8 *)&DAT_05161ed8;
                      __cxa_guard_release(&DAT_05161f48);
                      puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    }
                  }
                  if ((DAT_05161f50 & 1) == 0) {
                    DAT_05161f50 = 1;
                    if (((DAT_05161fc8 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05161fc8), iVar7 != 0)) {
                      DAT_05161f54 = 0xffffffff00000000;
                      DAT_05161f5c = 0xffffffff00000000;
                      DAT_05161f64 = 0xffffffff00000000;
                      DAT_05161f6c = 0xffffffff00000000;
                      DAT_05161f74 = 0xffffffff00000000;
                      DAT_05161f7c = 0xffffffff00000000;
                      DAT_05161f84 = 0xffffffff00000000;
                      DAT_05161f8c = 0xffffffff00000000;
                      DAT_05161f94 = 0xffffffff00000000;
                      DAT_05161f9c = 0xffffffff00000000;
                      DAT_05161fa4 = 0xffffffff00000000;
                      DAT_05161fac = 0xffffffff00000000;
                      DAT_05161fb4 = 0xffffffff00000000;
                      DAT_05161fbc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05161fc8);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_s_Default_0498ab20)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01297144:
                            iVar7 = (int)lVar8;
joined_r0x01297148:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01297150;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01297144;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01297148;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01297150:
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
                      *(uint *)(&DAT_05161f54 + lVar20) = uVar11;
                      *(int *)((long)&DAT_05161f54 + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05161ec8;
                      if ((int)DAT_05161ec8 < DAT_05161ec8._4_4_) {
                        DAT_05161ed0[(int)DAT_05161ec8] = &DAT_05161f54 + lVar20;
                        iVar7 = (int)DAT_05161ec8 + 1;
                        DAT_05161ec8 = CONCAT44(DAT_05161ec8._4_4_,iVar7);
                      }
                      puVar17 = DAT_05161ed0;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 0xe);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01297430;
LAB_012973e0:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_012973e0;
LAB_01297430:
                              if (puVar18 == (uint *)0x0) goto LAB_012973e0;
                              if (*puVar13 <= *puVar18) goto LAB_012973e0;
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
                    DAT_05161ec4 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                  }
                  else if (DAT_05161ec4 != '\x01') goto LAB_012972b4;
                  if ((int)DAT_05161ec8 == 0) {
LAB_012972b4:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if ((int)DAT_05161ec8 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_05161ed0;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_01297280;
joined_r0x01297464:
                      if (uVar6 < 0xe) {
                        uVar6 = *(uint *)(DAT_05161ed0[uVar6] + 4);
                        if (uVar6 < 0xe) {
                          DAT_05161eb8 = '\x01';
                          DAT_05161ebc = uVar19;
                          DAT_05161ec0 = uVar6;
                          goto LAB_01297854;
                        }
                        goto LAB_012972b4;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_05161ec8 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_05161ed0[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x01297464;
                        uVar10 = *(uint *)DAT_05161ed0[(int)uVar6];
                        if (uVar10 == uVar19) goto joined_r0x01297464;
                        if (uVar10 < uVar19) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_05161ed0[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x01297464;
LAB_01297280:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar19) goto joined_r0x01297464;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_05161da0 == '\x01') && (DAT_05161da4 == uVar19)) {
                  uVar6 = DAT_05161da8;
                  if (0xd < DAT_05161da8) goto LAB_012977f0;
                }
                else {
                  if ((DAT_05161e30 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05161e30);
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if (iVar7 != 0) {
                      DAT_05161db0 = 0xe00000000;
                      DAT_05161db8 = &DAT_05161dc0;
                      __cxa_guard_release(&DAT_05161e30);
                      puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    }
                  }
                  if ((DAT_05161e38 & 1) == 0) {
                    DAT_05161e38 = 1;
                    if (((DAT_05161eb0 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05161eb0), iVar7 != 0)) {
                      DAT_05161e3c = 0xffffffff00000000;
                      DAT_05161e44 = 0xffffffff00000000;
                      DAT_05161e4c = 0xffffffff00000000;
                      DAT_05161e54 = 0xffffffff00000000;
                      DAT_05161e5c = 0xffffffff00000000;
                      DAT_05161e64 = 0xffffffff00000000;
                      DAT_05161e6c = 0xffffffff00000000;
                      DAT_05161e74 = 0xffffffff00000000;
                      DAT_05161e7c = 0xffffffff00000000;
                      DAT_05161e84 = 0xffffffff00000000;
                      DAT_05161e8c = 0xffffffff00000000;
                      DAT_05161e94 = 0xffffffff00000000;
                      DAT_05161e9c = 0xffffffff00000000;
                      DAT_05161ea4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05161eb0);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_s_Default_0498a9e8)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01297514:
                            iVar7 = (int)lVar8;
joined_r0x01297518:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01297520;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01297514;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01297518;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01297520:
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
                      *(uint *)(&DAT_05161e3c + lVar20) = uVar11;
                      *(int *)((long)&DAT_05161e3c + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05161db0;
                      if ((int)DAT_05161db0 < DAT_05161db0._4_4_) {
                        *(undefined8 **)(DAT_05161db8 + (long)(int)DAT_05161db0 * 8) =
                             &DAT_05161e3c + lVar20;
                        iVar7 = (int)DAT_05161db0 + 1;
                        DAT_05161db0 = CONCAT44(DAT_05161db0._4_4_,iVar7);
                      }
                      puVar4 = DAT_05161db8;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 0xe);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01297790;
LAB_01297740:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01297740;
LAB_01297790:
                              if (puVar18 == (uint *)0x0) goto LAB_01297740;
                              if (*puVar13 <= *puVar18) goto LAB_01297740;
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
                    DAT_05161dac = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                  }
                  else if (DAT_05161dac != '\x01') goto LAB_012977f0;
                  if ((int)DAT_05161db0 == 0) {
LAB_012977f0:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if ((int)DAT_05161db0 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_05161db0 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_05161db8 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x0129781c;
                        uVar10 = **(uint **)(DAT_05161db8 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar19) goto joined_r0x0129781c;
                        if (uVar10 < uVar19) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_05161db8 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_05161db8 + (long)(int)uVar6 * 8) == uVar19)) {
joined_r0x0129781c:
                      if (uVar11 < 0xe) {
                        uVar6 = *(uint *)(*(long *)(DAT_05161db8 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 0xe) {
                          DAT_05161da0 = '\x01';
                          DAT_05161da4 = uVar19;
                          DAT_05161da8 = uVar6;
                          goto LAB_0129784c;
                        }
                        goto LAB_012977f0;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_0129784c:
              }
LAB_01297854:
              puVar4 = PTR_DAT_04bbbdb0;
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
                        if (uVar11 < *(uint *)PTR_DAT_04bbbdb8) {
                          *(short *)(*(long *)(PTR_DAT_04bbbdb8 + 8) + (long)(int)uVar11 * 2) =
                               (short)uVar6;
                        }
                      }
                    }
                  }
                }
              }
              uVar19 = *puVar2;
              if (uVar19 != 0) {
                cVar5 = *PTR_DAT_04bbbda8;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    *PTR_DAT_04bbbda8 = 1;
                    puVar13[4] = 0xffffffff;
                    puVar13[5] = 0xffffffff;
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    uVar19 = *puVar2;
                  }
                  else {
                    uVar6 = puVar13[1];
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar19 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_012979c0;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar19;
                  uVar19 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar19 = 0, puVar2 == puVar15))
                  goto LAB_012979c0;
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
                  while (puVar15[-1] != 0x65d009e1) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_012979bc;
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
LAB_012979bc:
              uVar19 = 0;
LAB_012979c0:
              if (((*puVar2 == 0) || (lVar20 = (long)puVar2 - (ulong)*puVar2, lVar20 == 0)) ||
                 (*(char *)(lVar20 + 0xb) == '\0')) {
                if ((DAT_05162068 == '\x01') && (DAT_0516206c == uVar19)) {
                  uVar6 = DAT_05162070;
                  if (5 < DAT_05162070) goto LAB_01297c84;
                }
                else {
                  if ((DAT_051620b8 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_051620b8);
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if (iVar7 != 0) {
                      DAT_05162078 = 0x600000000;
                      DAT_05162080 = (undefined8 *)&DAT_05162088;
                      __cxa_guard_release(&DAT_051620b8);
                      puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    }
                  }
                  if ((DAT_051620c0 & 1) == 0) {
                    DAT_051620c0 = 1;
                    if (((DAT_051620f8 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_051620f8), iVar7 != 0)) {
                      DAT_051620c4 = 0xffffffff00000000;
                      DAT_051620cc = 0xffffffff00000000;
                      DAT_051620d4 = 0xffffffff00000000;
                      DAT_051620dc = 0xffffffff00000000;
                      DAT_051620e4 = 0xffffffff00000000;
                      DAT_051620ec = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051620f8);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_0498ac20)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01297b08:
                            iVar7 = (int)lVar8;
joined_r0x01297b0c:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01297b14;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01297b08;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01297b0c;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01297b14:
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
                      *(uint *)(&DAT_051620c4 + lVar20) = uVar11;
                      *(int *)((long)&DAT_051620c4 + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05162078;
                      if ((int)DAT_05162078 < DAT_05162078._4_4_) {
                        DAT_05162080[(int)DAT_05162078] = &DAT_051620c4 + lVar20;
                        iVar7 = (int)DAT_05162078 + 1;
                        DAT_05162078 = CONCAT44(DAT_05162078._4_4_,iVar7);
                      }
                      puVar17 = DAT_05162080;
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
                              if (puVar13 != (uint *)0x0) goto LAB_01297e00;
LAB_01297db0:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01297db0;
LAB_01297e00:
                              if (puVar18 == (uint *)0x0) goto LAB_01297db0;
                              if (*puVar13 <= *puVar18) goto LAB_01297db0;
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
                    DAT_05162074 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                  }
                  else if (DAT_05162074 != '\x01') goto LAB_01297c84;
                  if ((int)DAT_05162078 == 0) {
LAB_01297c84:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if ((int)DAT_05162078 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_05162080;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_01297c50;
joined_r0x01297c64:
                      if (uVar6 < 6) {
                        uVar6 = *(uint *)(DAT_05162080[uVar6] + 4);
                        if (uVar6 < 6) {
                          DAT_05162068 = '\x01';
                          DAT_0516206c = uVar19;
                          DAT_05162070 = uVar6;
                          goto LAB_01298224;
                        }
                        goto LAB_01297c84;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_05162078 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_05162080[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x01297c64;
                        uVar10 = *(uint *)DAT_05162080[(int)uVar6];
                        if (uVar10 == uVar19) goto joined_r0x01297c64;
                        if (uVar10 < uVar19) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_05162080[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x01297c64;
LAB_01297c50:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar19) goto joined_r0x01297c64;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_05161fd0 == '\x01') && (DAT_05161fd4 == uVar19)) {
                  uVar6 = DAT_05161fd8;
                  if (5 < DAT_05161fd8) goto LAB_012981c0;
                }
                else {
                  if ((DAT_05162020 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05162020);
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if (iVar7 != 0) {
                      DAT_05161fe0 = 0x600000000;
                      DAT_05161fe8 = &DAT_05161ff0;
                      __cxa_guard_release(&DAT_05162020);
                      puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    }
                  }
                  if ((DAT_05162028 & 1) == 0) {
                    DAT_05162028 = 1;
                    if (((DAT_05162060 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05162060), iVar7 != 0)) {
                      DAT_0516202c = 0xffffffff00000000;
                      DAT_05162034 = 0xffffffff00000000;
                      DAT_0516203c = 0xffffffff00000000;
                      DAT_05162044 = 0xffffffff00000000;
                      DAT_0516204c = 0xffffffff00000000;
                      DAT_05162054 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05162060);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_0498abb8)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01297ee4:
                            iVar7 = (int)lVar8;
joined_r0x01297ee8:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01297ef0;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01297ee4;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01297ee8;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01297ef0:
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
                      *(uint *)(&DAT_0516202c + lVar20) = uVar11;
                      *(int *)((long)&DAT_0516202c + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05161fe0;
                      if ((int)DAT_05161fe0 < DAT_05161fe0._4_4_) {
                        *(undefined8 **)(DAT_05161fe8 + (long)(int)DAT_05161fe0 * 8) =
                             &DAT_0516202c + lVar20;
                        iVar7 = (int)DAT_05161fe0 + 1;
                        DAT_05161fe0 = CONCAT44(DAT_05161fe0._4_4_,iVar7);
                      }
                      puVar4 = DAT_05161fe8;
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
                              if (puVar13 != (uint *)0x0) goto LAB_01298160;
LAB_01298110:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01298110;
LAB_01298160:
                              if (puVar18 == (uint *)0x0) goto LAB_01298110;
                              if (*puVar13 <= *puVar18) goto LAB_01298110;
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
                    DAT_05161fdc = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                  }
                  else if (DAT_05161fdc != '\x01') goto LAB_012981c0;
                  if ((int)DAT_05161fe0 == 0) {
LAB_012981c0:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if ((int)DAT_05161fe0 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_05161fe0 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_05161fe8 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x012981ec;
                        uVar10 = **(uint **)(DAT_05161fe8 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar19) goto joined_r0x012981ec;
                        if (uVar10 < uVar19) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_05161fe8 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_05161fe8 + (long)(int)uVar6 * 8) == uVar19)) {
joined_r0x012981ec:
                      if (uVar11 < 6) {
                        uVar6 = *(uint *)(*(long *)(DAT_05161fe8 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 6) {
                          DAT_05161fd0 = '\x01';
                          DAT_05161fd4 = uVar19;
                          DAT_05161fd8 = uVar6;
                          goto LAB_0129821c;
                        }
                        goto LAB_012981c0;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_0129821c:
              }
LAB_01298224:
              puVar4 = PTR_DAT_04bbbdb0;
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
                        if (uVar11 < *(uint *)PTR_DAT_04bbbdc8) {
                          *(short *)(*(long *)(PTR_DAT_04bbbdc8 + 8) + (long)(int)uVar11 * 2) =
                               (short)uVar6;
                        }
                      }
                    }
                  }
                }
              }
              uVar19 = *puVar2;
              if (uVar19 != 0) {
                cVar5 = *PTR_DAT_04bbbda8;
                do {
                  if (cVar5 == '\0') {
                    cVar5 = '\x01';
                    *PTR_DAT_04bbbda8 = 1;
                    puVar13[4] = 0xffffffff;
                    puVar13[5] = 0xffffffff;
                    puVar13[0] = 0xffffffff;
                    puVar13[1] = 0xffffffff;
                    puVar13[2] = 0xffffffff;
                    puVar13[3] = 0xffffffff;
                    uVar19 = *puVar2;
                  }
                  else {
                    uVar6 = puVar13[2];
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar19 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_01298390;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar15 = (uint *)(ulong)uVar19;
                  uVar19 = 0;
                  if ((puVar15 == (uint *)0x0) || (uVar19 = 0, puVar2 == puVar15))
                  goto LAB_01298390;
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
                  while (puVar15[-1] != 0x897261e3) {
                    puVar15 = puVar15 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_0129838c;
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
LAB_0129838c:
              uVar19 = 0;
LAB_01298390:
              if (((*puVar2 == 0) || (lVar20 = (long)puVar2 - (ulong)*puVar2, lVar20 == 0)) ||
                 (*(char *)(lVar20 + 0xb) == '\0')) {
                if ((DAT_051621a8 == '\x01') && (DAT_051621ac == uVar19)) {
                  uVar6 = DAT_051621b0;
                  if (6 < DAT_051621b0) goto LAB_01298654;
                }
                else {
                  if ((DAT_05162200 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05162200);
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if (iVar7 != 0) {
                      DAT_051621b8 = 0x700000000;
                      DAT_051621c0 = (undefined8 *)&DAT_051621c8;
                      __cxa_guard_release(&DAT_05162200);
                      puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    }
                  }
                  if ((DAT_05162208 & 1) == 0) {
                    DAT_05162208 = 1;
                    if (((DAT_05162248 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_05162248), iVar7 != 0)) {
                      DAT_0516223c = 0xffffffff00000000;
                      DAT_0516220c = 0xffffffff00000000;
                      DAT_05162214 = 0xffffffff00000000;
                      DAT_0516221c = 0xffffffff00000000;
                      DAT_05162224 = 0xffffffff00000000;
                      DAT_0516222c = 0xffffffff00000000;
                      DAT_05162234 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_05162248);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_0498ac98)[lVar20];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_012984d8:
                            iVar7 = (int)lVar8;
joined_r0x012984dc:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_012984e4;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_012984d8;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x012984dc;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_012984e4:
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
                      *(uint *)(&DAT_0516220c + lVar20) = uVar11;
                      *(int *)((long)&DAT_0516220c + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_051621b8;
                      if ((int)DAT_051621b8 < DAT_051621b8._4_4_) {
                        DAT_051621c0[(int)DAT_051621b8] = &DAT_0516220c + lVar20;
                        iVar7 = (int)DAT_051621b8 + 1;
                        DAT_051621b8 = CONCAT44(DAT_051621b8._4_4_,iVar7);
                      }
                      puVar17 = DAT_051621c0;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 7);
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
                              if (puVar13 != (uint *)0x0) goto LAB_012987d0;
LAB_01298780:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar16[-1] = puVar13;
                              *puVar16 = puVar15;
                              puVar18 = (uint *)puVar16[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01298780;
LAB_012987d0:
                              if (puVar18 == (uint *)0x0) goto LAB_01298780;
                              if (*puVar13 <= *puVar18) goto LAB_01298780;
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
                    DAT_051621b4 = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                  }
                  else if (DAT_051621b4 != '\x01') goto LAB_01298654;
                  if ((int)DAT_051621b8 == 0) {
LAB_01298654:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if ((int)DAT_051621b8 < 2) {
                      uVar11 = 0;
                      puVar15 = (uint *)*DAT_051621c0;
                      uVar6 = uVar11;
                      if (puVar15 != (uint *)0x0) goto LAB_01298620;
joined_r0x01298634:
                      if (uVar6 < 7) {
                        uVar6 = *(uint *)(DAT_051621c0[uVar6] + 4);
                        if (uVar6 < 7) {
                          DAT_051621a8 = '\x01';
                          DAT_051621ac = uVar19;
                          DAT_051621b0 = uVar6;
                          goto LAB_01298bf4;
                        }
                        goto LAB_01298654;
                      }
                    }
                    else {
                      uVar11 = 0;
                      iVar7 = (int)DAT_051621b8 + -1;
                      do {
                        iVar1 = iVar7 + uVar11;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar11)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_051621c0[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x01298634;
                        uVar10 = *(uint *)DAT_051621c0[(int)uVar6];
                        if (uVar10 == uVar19) goto joined_r0x01298634;
                        if (uVar10 < uVar19) {
                          uVar11 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar11 < iVar7);
                      puVar15 = (uint *)DAT_051621c0[(int)uVar11];
                      uVar6 = uVar11;
                      if (puVar15 == (uint *)0x0) goto joined_r0x01298634;
LAB_01298620:
                      uVar6 = uVar11;
                      if (*puVar15 == uVar19) goto joined_r0x01298634;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_05162100 == '\x01') && (DAT_05162104 == uVar19)) {
                  uVar6 = DAT_05162108;
                  if (6 < DAT_05162108) goto LAB_01298b90;
                }
                else {
                  if ((DAT_05162158 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_05162158);
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if (iVar7 != 0) {
                      DAT_05162110 = 0x700000000;
                      DAT_05162118 = &DAT_05162120;
                      __cxa_guard_release(&DAT_05162158);
                      puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    }
                  }
                  if ((DAT_05162160 & 1) == 0) {
                    DAT_05162160 = 1;
                    if (((DAT_051621a0 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_051621a0), iVar7 != 0)) {
                      DAT_05162194 = 0xffffffff00000000;
                      DAT_05162164 = 0xffffffff00000000;
                      DAT_0516216c = 0xffffffff00000000;
                      DAT_05162174 = 0xffffffff00000000;
                      DAT_0516217c = 0xffffffff00000000;
                      DAT_05162184 = 0xffffffff00000000;
                      DAT_0516218c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051621a0);
                    }
                    lVar20 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = *(byte **)(PTR_s_Invalid_04bbbdd0 + lVar20 * 8 + 0x30);
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_012988b4:
                            iVar7 = (int)lVar8;
joined_r0x012988b8:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_012988c0;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_012988b4;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x012988b8;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_012988c0:
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
                      *(uint *)(&DAT_05162164 + lVar20) = uVar11;
                      *(int *)((long)&DAT_05162164 + lVar20 * 8 + 4) = (int)lVar20;
                      iVar7 = (int)DAT_05162110;
                      if ((int)DAT_05162110 < DAT_05162110._4_4_) {
                        *(undefined8 **)(DAT_05162118 + (long)(int)DAT_05162110 * 8) =
                             &DAT_05162164 + lVar20;
                        iVar7 = (int)DAT_05162110 + 1;
                        DAT_05162110 = CONCAT44(DAT_05162110._4_4_,iVar7);
                      }
                      puVar4 = DAT_05162118;
                      lVar20 = lVar20 + 1;
                    } while (lVar20 != 7);
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
                              if (puVar13 != (uint *)0x0) goto LAB_01298b30;
LAB_01298ae0:
                              puVar13 = puVar18;
                            }
                            else {
                              puVar17[-1] = puVar13;
                              *puVar17 = puVar15;
                              puVar18 = (uint *)puVar17[1];
                              puVar13 = puVar15;
                              uVar6 = uVar10;
                              if (puVar15 == (uint *)0x0) goto LAB_01298ae0;
LAB_01298b30:
                              if (puVar18 == (uint *)0x0) goto LAB_01298ae0;
                              if (*puVar13 <= *puVar18) goto LAB_01298ae0;
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
                    DAT_0516210c = '\x01';
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                  }
                  else if (DAT_0516210c != '\x01') goto LAB_01298b90;
                  if ((int)DAT_05162110 == 0) {
LAB_01298b90:
                    uVar6 = 0;
                  }
                  else {
                    puVar13 = (uint *)PTR_DAT_04bbbdb0;
                    if ((int)DAT_05162110 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_05162110 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar11 = iVar1 >> 1;
                        if (*(uint **)(DAT_05162118 + (long)(int)uVar11 * 8) == (uint *)0x0)
                        goto joined_r0x01298bbc;
                        uVar10 = **(uint **)(DAT_05162118 + (long)(int)uVar11 * 8);
                        if (uVar10 == uVar19) goto joined_r0x01298bbc;
                        if (uVar10 < uVar19) {
                          uVar6 = uVar11 + 1;
                        }
                        else {
                          iVar7 = uVar11 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar11 = uVar6;
                    if ((*(uint **)(DAT_05162118 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_05162118 + (long)(int)uVar6 * 8) == uVar19)) {
joined_r0x01298bbc:
                      if (uVar11 < 7) {
                        uVar6 = *(uint *)(*(long *)(DAT_05162118 + (ulong)uVar11 * 8) + 4);
                        if (uVar6 < 7) {
                          DAT_05162100 = '\x01';
                          DAT_05162104 = uVar19;
                          DAT_05162108 = uVar6;
                          goto LAB_01298bec;
                        }
                        goto LAB_01298b90;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_01298bec:
              }
LAB_01298bf4:
              puVar4 = PTR_DAT_04bbbdb0;
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
                        if (uVar11 < *(uint *)PTR_DAT_04bbbdc0) {
                          *(short *)(*(long *)(PTR_DAT_04bbbdc0 + 8) + (long)(int)uVar11 * 2) =
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

