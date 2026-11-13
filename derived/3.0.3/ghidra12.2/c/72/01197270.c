
void FUN_01197270(uint *param_1)

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
    puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
    pcVar14 = PTR_DAT_04bb5c40;
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
                    *pcVar14 = '\x01';
                    *puVar10 = 0xffffffffffffffff;
                    puVar10[1] = 0xffffffffffffffff;
                    puVar10[4] = 0xffffffffffffffff;
                    puVar10[2] = 0xffffffffffffffff;
                    puVar10[3] = 0xffffffffffffffff;
                    uVar21 = *puVar2;
                  }
                  else {
                    uVar6 = *(uint *)((long)puVar10 + 4);
                    if (-1 < (int)uVar6) {
                      if ((uint *)((long)puVar2 + (ulong)uVar6) != (uint *)0x0) {
                        uVar21 = *(uint *)((long)puVar2 + (ulong)uVar6);
                        goto LAB_01197420;
                      }
                      break;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar16 = (uint *)(ulong)uVar21;
                  uVar21 = 0;
                  if ((puVar16 == (uint *)0x0) || (uVar21 = 0, puVar2 == puVar16))
                  goto LAB_01197420;
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar16)) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar2 + (lVar23 - (long)puVar16);
                  if (lVar23 == 0) break;
                  uVar11 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar16));
                  *(undefined4 *)((long)puVar10 + 4) = 0xfffffffe;
                  if (uVar11 == 0) break;
                  piVar9 = (int *)(lVar23 + 4);
                  while (piVar9[-1] != -0x563eee75) {
                    piVar9 = piVar9 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) goto LAB_0119741c;
                  }
                  iVar7 = 0;
                  if (*piVar9 != -1) {
                    iVar7 = *piVar9;
                  }
                  *(int *)((long)puVar10 + 4) = iVar7;
                  uVar21 = *puVar2;
                  if (uVar21 == 0) break;
                } while( true );
              }
LAB_0119741c:
              uVar21 = 0;
LAB_01197420:
              if (((*puVar2 == 0) || (lVar23 = (long)puVar2 - (ulong)*puVar2, lVar23 == 0)) ||
                 (*(char *)(lVar23 + 0xb) == '\0')) {
                if ((DAT_050ce4f0 == '\x01') && (DAT_050ce4f4 == uVar21)) {
                  uVar6 = DAT_050ce4f8;
                  if (0xe < DAT_050ce4f8) goto LAB_011976d8;
                }
                else {
                  if ((DAT_050ce588 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_050ce588);
                    puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                    pcVar14 = PTR_DAT_04bb5c40;
                    if (iVar7 != 0) {
                      DAT_050ce500 = 0xf00000000;
                      DAT_050ce508 = (undefined8 *)&DAT_050ce510;
                      __cxa_guard_release(&DAT_050ce588);
                      puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                      pcVar14 = PTR_DAT_04bb5c40;
                    }
                  }
                  if ((DAT_050ce590 & 1) == 0) {
                    DAT_050ce590 = 1;
                    if (((DAT_050ce610 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_050ce610), iVar7 != 0)) {
                      DAT_050ce604 = 0xffffffff00000000;
                      DAT_050ce594 = 0xffffffff00000000;
                      DAT_050ce59c = 0xffffffff00000000;
                      DAT_050ce5a4 = 0xffffffff00000000;
                      DAT_050ce5ac = 0xffffffff00000000;
                      DAT_050ce5b4 = 0xffffffff00000000;
                      DAT_050ce5bc = 0xffffffff00000000;
                      DAT_050ce5c4 = 0xffffffff00000000;
                      DAT_050ce5cc = 0xffffffff00000000;
                      DAT_050ce5d4 = 0xffffffff00000000;
                      DAT_050ce5dc = 0xffffffff00000000;
                      DAT_050ce5e4 = 0xffffffff00000000;
                      DAT_050ce5ec = 0xffffffff00000000;
                      DAT_050ce5f4 = 0xffffffff00000000;
                      DAT_050ce5fc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_050ce610);
                    }
                    lVar23 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_049843e8)[lVar23];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01197564:
                            iVar7 = (int)lVar8;
joined_r0x01197568:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01197570;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01197564;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x01197568;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01197570:
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
                      *(uint *)(&DAT_050ce594 + lVar23) = uVar13;
                      *(int *)((long)&DAT_050ce594 + lVar23 * 8 + 4) = (int)lVar23;
                      iVar7 = (int)DAT_050ce500;
                      if ((int)DAT_050ce500 < DAT_050ce500._4_4_) {
                        DAT_050ce508[(int)DAT_050ce500] = &DAT_050ce594 + lVar23;
                        iVar7 = (int)DAT_050ce500 + 1;
                        DAT_050ce500 = CONCAT44(DAT_050ce500._4_4_,iVar7);
                      }
                      puVar10 = DAT_050ce508;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 != 0xf);
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
                              if (puVar16 != (uint *)0x0) goto LAB_01197860;
LAB_01197810:
                              puVar16 = puVar20;
                            }
                            else {
                              puVar19[-1] = puVar16;
                              *puVar19 = puVar18;
                              puVar20 = (uint *)puVar19[1];
                              puVar16 = puVar18;
                              uVar6 = uVar12;
                              if (puVar18 == (uint *)0x0) goto LAB_01197810;
LAB_01197860:
                              if (puVar20 == (uint *)0x0) goto LAB_01197810;
                              if (*puVar16 <= *puVar20) goto LAB_01197810;
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
                    DAT_050ce4fc = '\x01';
                    puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                    pcVar14 = PTR_DAT_04bb5c40;
                  }
                  else if (DAT_050ce4fc != '\x01') goto LAB_011976d8;
                  if ((int)DAT_050ce500 == 0) {
LAB_011976d8:
                    uVar6 = 0;
                  }
                  else {
                    puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                    pcVar14 = PTR_DAT_04bb5c40;
                    if ((int)DAT_050ce500 < 2) {
                      uVar13 = 0;
                      puVar16 = (uint *)*DAT_050ce508;
                      uVar6 = uVar13;
                      if (puVar16 != (uint *)0x0) goto LAB_011976a0;
joined_r0x01197894:
                      if (uVar6 < 0xf) {
                        uVar6 = *(uint *)(DAT_050ce508[uVar6] + 4);
                        if (uVar6 < 0xf) {
                          DAT_050ce4f0 = '\x01';
                          DAT_050ce4f4 = uVar21;
                          DAT_050ce4f8 = uVar6;
                          goto LAB_01197cc0;
                        }
                        goto LAB_011976d8;
                      }
                    }
                    else {
                      uVar13 = 0;
                      iVar7 = (int)DAT_050ce500 + -1;
                      do {
                        iVar1 = iVar7 + uVar13;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar13)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar6 = iVar1 >> 1;
                        if ((uint *)DAT_050ce508[(int)uVar6] == (uint *)0x0)
                        goto joined_r0x01197894;
                        uVar12 = *(uint *)DAT_050ce508[(int)uVar6];
                        if (uVar12 == uVar21) goto joined_r0x01197894;
                        if (uVar12 < uVar21) {
                          uVar13 = uVar6 + 1;
                        }
                        else {
                          iVar7 = uVar6 - 1;
                        }
                      } while ((int)uVar13 < iVar7);
                      puVar16 = (uint *)DAT_050ce508[(int)uVar13];
                      uVar6 = uVar13;
                      if (puVar16 == (uint *)0x0) goto joined_r0x01197894;
LAB_011976a0:
                      uVar6 = uVar13;
                      if (*puVar16 == uVar21) goto joined_r0x01197894;
                    }
                    uVar6 = 0;
                  }
                }
              }
              else {
                if ((DAT_050ce3c8 == '\x01') && (DAT_050ce3cc == uVar21)) {
                  uVar6 = DAT_050ce3d0;
                  if (0xe < DAT_050ce3d0) goto LAB_01197c54;
                }
                else {
                  if ((DAT_050ce460 & 1) == 0) {
                    iVar7 = __cxa_guard_acquire(&DAT_050ce460);
                    puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                    pcVar14 = PTR_DAT_04bb5c40;
                    if (iVar7 != 0) {
                      DAT_050ce3d8 = 0xf00000000;
                      DAT_050ce3e0 = &DAT_050ce3e8;
                      __cxa_guard_release(&DAT_050ce460);
                      puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                      pcVar14 = PTR_DAT_04bb5c40;
                    }
                  }
                  if ((DAT_050ce468 & 1) == 0) {
                    DAT_050ce468 = 1;
                    if (((DAT_050ce4e8 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_050ce4e8), iVar7 != 0)) {
                      DAT_050ce4dc = 0xffffffff00000000;
                      DAT_050ce46c = 0xffffffff00000000;
                      DAT_050ce474 = 0xffffffff00000000;
                      DAT_050ce47c = 0xffffffff00000000;
                      DAT_050ce484 = 0xffffffff00000000;
                      DAT_050ce48c = 0xffffffff00000000;
                      DAT_050ce494 = 0xffffffff00000000;
                      DAT_050ce49c = 0xffffffff00000000;
                      DAT_050ce4a4 = 0xffffffff00000000;
                      DAT_050ce4ac = 0xffffffff00000000;
                      DAT_050ce4b4 = 0xffffffff00000000;
                      DAT_050ce4bc = 0xffffffff00000000;
                      DAT_050ce4c4 = 0xffffffff00000000;
                      DAT_050ce4cc = 0xffffffff00000000;
                      DAT_050ce4d4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_050ce4e8);
                    }
                    lVar23 = 0;
                    do {
                      local_75 = 0;
                      pbVar22 = (&PTR_DAT_049842b8)[lVar23];
                      if (local_174 != pbVar22) {
                        lVar8 = 0;
                        do {
                          if (pbVar22[lVar8] == 0) {
LAB_01197958:
                            iVar7 = (int)lVar8;
joined_r0x0119795c:
                            if (0xff < iVar7) {
                              iVar7 = 0xff;
                            }
                            goto LAB_01197964;
                          }
                          if (pbVar22[lVar8 + 1] == 0) {
                            lVar8 = lVar8 + 1;
                            goto LAB_01197958;
                          }
                          if (pbVar22[lVar8 + 2] == 0) {
                            iVar7 = (int)lVar8 + 2;
                            goto joined_r0x0119795c;
                          }
                          lVar8 = lVar8 + 3;
                        } while (lVar8 != 0x80001);
                        iVar7 = 0;
LAB_01197964:
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
                      *(uint *)(&DAT_050ce46c + lVar23) = uVar13;
                      *(int *)((long)&DAT_050ce46c + lVar23 * 8 + 4) = (int)lVar23;
                      iVar7 = (int)DAT_050ce3d8;
                      if ((int)DAT_050ce3d8 < DAT_050ce3d8._4_4_) {
                        *(undefined8 **)(DAT_050ce3e0 + (long)(int)DAT_050ce3d8 * 8) =
                             &DAT_050ce46c + lVar23;
                        iVar7 = (int)DAT_050ce3d8 + 1;
                        DAT_050ce3d8 = CONCAT44(DAT_050ce3d8._4_4_,iVar7);
                      }
                      puVar4 = DAT_050ce3e0;
                      lVar23 = lVar23 + 1;
                    } while (lVar23 != 0xf);
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
                              if (puVar16 != (uint *)0x0) goto LAB_01197bf0;
LAB_01197ba0:
                              puVar16 = puVar20;
                            }
                            else {
                              puVar10[-1] = puVar16;
                              *puVar10 = puVar18;
                              puVar20 = (uint *)puVar10[1];
                              puVar16 = puVar18;
                              uVar6 = uVar12;
                              if (puVar18 == (uint *)0x0) goto LAB_01197ba0;
LAB_01197bf0:
                              if (puVar20 == (uint *)0x0) goto LAB_01197ba0;
                              if (*puVar16 <= *puVar20) goto LAB_01197ba0;
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
                    DAT_050ce3d4 = '\x01';
                    puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                    pcVar14 = PTR_DAT_04bb5c40;
                  }
                  else if (DAT_050ce3d4 != '\x01') goto LAB_01197c54;
                  if ((int)DAT_050ce3d8 == 0) {
LAB_01197c54:
                    uVar6 = 0;
                  }
                  else {
                    puVar10 = (undefined8 *)PTR_DAT_04bb5c48;
                    pcVar14 = PTR_DAT_04bb5c40;
                    if ((int)DAT_050ce3d8 < 2) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      iVar7 = (int)DAT_050ce3d8 + -1;
                      do {
                        iVar1 = iVar7 + uVar6;
                        if (iVar1 < 0 != SCARRY4(iVar7,uVar6)) {
                          iVar1 = iVar1 + 1;
                        }
                        uVar13 = iVar1 >> 1;
                        if (*(uint **)(DAT_050ce3e0 + (long)(int)uVar13 * 8) == (uint *)0x0)
                        goto joined_r0x01197c80;
                        uVar12 = **(uint **)(DAT_050ce3e0 + (long)(int)uVar13 * 8);
                        if (uVar12 == uVar21) goto joined_r0x01197c80;
                        if (uVar12 < uVar21) {
                          uVar6 = uVar13 + 1;
                        }
                        else {
                          iVar7 = uVar13 - 1;
                        }
                      } while ((int)uVar6 < iVar7);
                    }
                    uVar13 = uVar6;
                    if ((*(uint **)(DAT_050ce3e0 + (long)(int)uVar6 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_050ce3e0 + (long)(int)uVar6 * 8) == uVar21)) {
joined_r0x01197c80:
                      if (uVar13 < 0xf) {
                        uVar6 = *(uint *)(*(long *)(DAT_050ce3e0 + (ulong)uVar13 * 8) + 4);
                        if (uVar6 < 0xf) {
                          DAT_050ce3c8 = '\x01';
                          DAT_050ce3cc = uVar21;
                          DAT_050ce3d0 = uVar6;
                          goto LAB_01197cb8;
                        }
                        goto LAB_01197c54;
                      }
                    }
                    uVar6 = 0;
                  }
                }
LAB_01197cb8:
              }
LAB_01197cc0:
              puVar4 = PTR_DAT_04bb5c48;
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
                        if (uVar13 < *(uint *)PTR_DAT_04bbb948) {
                          *(short *)(*(long *)(PTR_DAT_04bbb948 + 8) + (long)(int)uVar13 * 2) =
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

