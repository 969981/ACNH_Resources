
void FUN_012456a0(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  uint *puVar22;
  byte *pbVar23;
  long lVar24;
  uint uVar25;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar25 = 0;
    puVar17 = (undefined8 *)PTR_DAT_04bbbc78;
    do {
      if (((uVar25 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar10 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar2 = (uint *)((ulong)(param_1[1] * uVar25 + (uint)(ushort)param_1[2] * 8 + iVar10) +
                         (long)param_1);
        if (puVar2 != (uint *)0x0) {
          uVar6 = *puVar2;
          if (uVar6 != 0) {
            cVar7 = *PTR_DAT_04bbbc70;
            do {
              if (cVar7 == '\0') {
                *(undefined4 *)(puVar17 + 0xc) = 0xffffffff;
                *puVar17 = 0xffffffffffffffff;
                puVar17[1] = 0xffffffffffffffff;
                cVar7 = '\x01';
                puVar17[2] = 0xffffffffffffffff;
                puVar17[3] = 0xffffffffffffffff;
                puVar17[4] = 0xffffffffffffffff;
                puVar17[5] = 0xffffffffffffffff;
                puVar17[6] = 0xffffffffffffffff;
                puVar17[7] = 0xffffffffffffffff;
                puVar17[8] = 0xffffffffffffffff;
                puVar17[9] = 0xffffffffffffffff;
                puVar17[10] = 0xffffffffffffffff;
                puVar17[0xb] = 0xffffffffffffffff;
                uVar6 = *puVar2;
                *PTR_DAT_04bbbc70 = 1;
              }
              else {
                uVar9 = *(uint *)((long)puVar17 + 4);
                if (-1 < (int)uVar9) {
                  if ((uint *)((long)puVar2 + (ulong)uVar9) != (uint *)0x0) {
                    uVar6 = *(uint *)((long)puVar2 + (ulong)uVar9);
                    goto LAB_01245880;
                  }
                  break;
                }
                if (uVar9 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar6;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_01245880;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)((long)puVar17 + 4) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x360b721a) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0124587c;
              }
              iVar10 = 0;
              if (*piVar13 != -1) {
                iVar10 = *piVar13;
              }
              *(int *)((long)puVar17 + 4) = iVar10;
              uVar6 = *puVar2;
              if (uVar6 == 0) break;
            } while( true );
          }
LAB_0124587c:
          uVar6 = 0;
LAB_01245880:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            if ((DAT_05150540 == '\x01') && (DAT_05150544 == uVar6)) {
              uVar9 = DAT_05150548;
              if (0x13 < DAT_05150548) goto LAB_01245b24;
            }
            else {
              if ((DAT_05150600 & 1) == 0) {
                iVar10 = __cxa_guard_acquire(&DAT_05150600);
                puVar17 = (undefined8 *)PTR_DAT_04bbbc78;
                if (iVar10 != 0) {
                  DAT_05150550 = 0x1400000000;
                  DAT_05150558 = (undefined8 *)&DAT_05150560;
                  __cxa_guard_release(&DAT_05150600);
                  puVar17 = (undefined8 *)PTR_DAT_04bbbc78;
                }
              }
              if ((DAT_05150608 & 1) == 0) {
                DAT_05150608 = 1;
                if (((DAT_051506b0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_051506b0), iVar10 != 0)) {
                  DAT_0515060c = 0xffffffff00000000;
                  DAT_05150614 = 0xffffffff00000000;
                  DAT_0515061c = 0xffffffff00000000;
                  DAT_05150624 = 0xffffffff00000000;
                  DAT_0515062c = 0xffffffff00000000;
                  DAT_05150634 = 0xffffffff00000000;
                  DAT_0515063c = 0xffffffff00000000;
                  DAT_05150644 = 0xffffffff00000000;
                  DAT_0515064c = 0xffffffff00000000;
                  DAT_05150654 = 0xffffffff00000000;
                  DAT_0515065c = 0xffffffff00000000;
                  DAT_05150664 = 0xffffffff00000000;
                  DAT_0515066c = 0xffffffff00000000;
                  DAT_05150674 = 0xffffffff00000000;
                  DAT_0515067c = 0xffffffff00000000;
                  DAT_05150684 = 0xffffffff00000000;
                  DAT_0515068c = 0xffffffff00000000;
                  DAT_05150694 = 0xffffffff00000000;
                  DAT_0515069c = 0xffffffff00000000;
                  DAT_051506a4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051506b0);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar23 = (&PTR_DAT_049883c0)[lVar24];
                  if (local_174 != pbVar23) {
                    lVar11 = 0;
                    do {
                      if (pbVar23[lVar11] == 0) {
LAB_012459c4:
                        iVar10 = (int)lVar11;
joined_r0x012459c8:
                        if (0xff < iVar10) {
                          iVar10 = 0xff;
                        }
                        goto LAB_012459d0;
                      }
                      if (pbVar23[lVar11 + 1] == 0) {
                        lVar11 = lVar11 + 1;
                        goto LAB_012459c4;
                      }
                      if (pbVar23[lVar11 + 2] == 0) {
                        iVar10 = (int)lVar11 + 2;
                        goto joined_r0x012459c8;
                      }
                      lVar11 = lVar11 + 3;
                    } while (lVar11 != 0x80001);
                    iVar10 = 0;
LAB_012459d0:
                    memcpy(local_174,pbVar23,(long)iVar10);
                    local_174[iVar10] = 0;
                  }
                  uVar9 = (uint)*pbVar23;
                  if (*pbVar23 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = 0xffffffff;
                    do {
                      pbVar23 = pbVar23 + 1;
                      uVar15 = crc32b(uVar15,uVar9,0x4c11db7);
                      uVar9 = (uint)*pbVar23;
                    } while (uVar9 != 0);
                    uVar15 = ~uVar15;
                  }
                  *(uint *)(&DAT_0515060c + lVar24) = uVar15;
                  *(int *)((long)&DAT_0515060c + lVar24 * 8 + 4) = (int)lVar24;
                  iVar10 = (int)DAT_05150550;
                  if ((int)DAT_05150550 < DAT_05150550._4_4_) {
                    DAT_05150558[(int)DAT_05150550] = &DAT_0515060c + lVar24;
                    iVar10 = (int)DAT_05150550 + 1;
                    DAT_05150550 = CONCAT44(DAT_05150550._4_4_,iVar10);
                  }
                  puVar17 = DAT_05150558;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0x14);
                if (1 < iVar10) {
                  uVar15 = 0;
                  uVar9 = iVar10 - 1;
                  do {
                    if ((int)uVar9 <= (int)uVar15) break;
                    puVar18 = (uint *)puVar17[uVar15];
                    uVar12 = (ulong)uVar15;
                    if ((uVar9 - uVar15 & 1) == 0) {
                      uVar16 = uVar12;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar16 = uVar12 + 1;
                      puVar20 = (uint *)puVar17[uVar16];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        puVar17[uVar16] = puVar18;
                        puVar17[uVar12] = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar9;
                    uVar9 = uVar15;
                    if (~uVar12 + uVar19 != 0) {
                      puVar21 = puVar17 + uVar16 + 1;
                      do {
                        puVar18 = (uint *)*puVar21;
                        uVar14 = (uint)uVar16;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar22 = (uint *)puVar21[1];
                          if (puVar18 != (uint *)0x0) goto LAB_01245ca0;
LAB_01245c50:
                          puVar18 = puVar22;
                        }
                        else {
                          puVar21[-1] = puVar18;
                          *puVar21 = puVar20;
                          puVar22 = (uint *)puVar21[1];
                          puVar18 = puVar20;
                          uVar9 = uVar14;
                          if (puVar20 == (uint *)0x0) goto LAB_01245c50;
LAB_01245ca0:
                          if (puVar22 == (uint *)0x0) goto LAB_01245c50;
                          if (*puVar18 <= *puVar22) goto LAB_01245c50;
                          uVar9 = uVar14 + 1;
                          *puVar21 = puVar22;
                          puVar21[1] = puVar18;
                        }
                        uVar16 = uVar16 + 2;
                        puVar21 = puVar21 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar16);
                    }
                    if ((int)uVar9 <= (int)uVar15) break;
                    uVar16 = (ulong)uVar9;
                    puVar18 = (uint *)puVar17[uVar9];
                    uVar15 = uVar9;
                    do {
                      puVar20 = (uint *)puVar17[uVar16 - 1];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar15 = (uint)uVar16;
                        puVar17[uVar16 - 1] = puVar18;
                        puVar17[uVar16] = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar16 = uVar16 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar12 < (long)uVar16);
                  } while (uVar15 != uVar9);
                }
                DAT_0515054c = '\x01';
                puVar17 = (undefined8 *)PTR_DAT_04bbbc78;
              }
              else if (DAT_0515054c != '\x01') goto LAB_01245b24;
              if ((int)DAT_05150550 == 0) {
LAB_01245b24:
                uVar9 = 0;
              }
              else {
                if ((int)DAT_05150550 < 2) {
                  uVar15 = 0;
                  puVar18 = (uint *)*DAT_05150558;
                  uVar9 = uVar15;
                  if (puVar18 != (uint *)0x0) goto LAB_01245af4;
joined_r0x01245cd4:
                  if (uVar9 < 0x14) {
                    uVar9 = *(uint *)(DAT_05150558[uVar9] + 4);
                    if (uVar9 < 0x14) {
                      DAT_05150540 = '\x01';
                      DAT_05150544 = uVar6;
                      DAT_05150548 = uVar9;
                      goto LAB_012460d4;
                    }
                    goto LAB_01245b24;
                  }
                }
                else {
                  uVar15 = 0;
                  iVar10 = (int)DAT_05150550 + -1;
                  do {
                    iVar1 = iVar10 + uVar15;
                    if (iVar1 < 0 != SCARRY4(iVar10,uVar15)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar9 = iVar1 >> 1;
                    if ((uint *)DAT_05150558[(int)uVar9] == (uint *)0x0) goto joined_r0x01245cd4;
                    uVar14 = *(uint *)DAT_05150558[(int)uVar9];
                    if (uVar14 == uVar6) goto joined_r0x01245cd4;
                    if (uVar14 < uVar6) {
                      uVar15 = uVar9 + 1;
                    }
                    else {
                      iVar10 = uVar9 - 1;
                    }
                  } while ((int)uVar15 < iVar10);
                  puVar18 = (uint *)DAT_05150558[(int)uVar15];
                  uVar9 = uVar15;
                  if (puVar18 == (uint *)0x0) goto joined_r0x01245cd4;
LAB_01245af4:
                  uVar9 = uVar15;
                  if (*puVar18 == uVar6) goto joined_r0x01245cd4;
                }
                uVar9 = 0;
              }
            }
          }
          else {
            if ((DAT_051503c8 == '\x01') && (DAT_051503cc == uVar6)) {
              uVar9 = DAT_051503d0;
              if (0x13 < DAT_051503d0) goto LAB_0124606c;
            }
            else {
              if ((DAT_05150488 & 1) == 0) {
                iVar10 = __cxa_guard_acquire(&DAT_05150488);
                puVar17 = (undefined8 *)PTR_DAT_04bbbc78;
                if (iVar10 != 0) {
                  DAT_051503d8 = 0x1400000000;
                  DAT_051503e0 = &DAT_051503e8;
                  __cxa_guard_release(&DAT_05150488);
                  puVar17 = (undefined8 *)PTR_DAT_04bbbc78;
                }
              }
              if ((DAT_05150490 & 1) == 0) {
                DAT_05150490 = 1;
                if (((DAT_05150538 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_05150538), iVar10 != 0)) {
                  DAT_05150494 = 0xffffffff00000000;
                  DAT_0515049c = 0xffffffff00000000;
                  DAT_051504a4 = 0xffffffff00000000;
                  DAT_051504ac = 0xffffffff00000000;
                  DAT_051504b4 = 0xffffffff00000000;
                  DAT_051504bc = 0xffffffff00000000;
                  DAT_051504c4 = 0xffffffff00000000;
                  DAT_051504cc = 0xffffffff00000000;
                  DAT_051504d4 = 0xffffffff00000000;
                  DAT_051504dc = 0xffffffff00000000;
                  DAT_051504e4 = 0xffffffff00000000;
                  DAT_051504ec = 0xffffffff00000000;
                  DAT_051504f4 = 0xffffffff00000000;
                  DAT_051504fc = 0xffffffff00000000;
                  DAT_05150504 = 0xffffffff00000000;
                  DAT_0515050c = 0xffffffff00000000;
                  DAT_05150514 = 0xffffffff00000000;
                  DAT_0515051c = 0xffffffff00000000;
                  DAT_05150524 = 0xffffffff00000000;
                  DAT_0515052c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05150538);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar23 = (&PTR_s_Vegetable_049881c0)[lVar24];
                  if (local_174 != pbVar23) {
                    lVar11 = 0;
                    do {
                      if (pbVar23[lVar11] == 0) {
LAB_01245d88:
                        iVar10 = (int)lVar11;
joined_r0x01245d8c:
                        if (0xff < iVar10) {
                          iVar10 = 0xff;
                        }
                        goto LAB_01245d94;
                      }
                      if (pbVar23[lVar11 + 1] == 0) {
                        lVar11 = lVar11 + 1;
                        goto LAB_01245d88;
                      }
                      if (pbVar23[lVar11 + 2] == 0) {
                        iVar10 = (int)lVar11 + 2;
                        goto joined_r0x01245d8c;
                      }
                      lVar11 = lVar11 + 3;
                    } while (lVar11 != 0x80001);
                    iVar10 = 0;
LAB_01245d94:
                    memcpy(local_174,pbVar23,(long)iVar10);
                    local_174[iVar10] = 0;
                  }
                  uVar9 = (uint)*pbVar23;
                  if (*pbVar23 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = 0xffffffff;
                    do {
                      pbVar23 = pbVar23 + 1;
                      uVar15 = crc32b(uVar15,uVar9,0x4c11db7);
                      uVar9 = (uint)*pbVar23;
                    } while (uVar9 != 0);
                    uVar15 = ~uVar15;
                  }
                  *(uint *)(&DAT_05150494 + lVar24) = uVar15;
                  *(int *)((long)&DAT_05150494 + lVar24 * 8 + 4) = (int)lVar24;
                  iVar10 = (int)DAT_051503d8;
                  if ((int)DAT_051503d8 < DAT_051503d8._4_4_) {
                    *(undefined8 **)(DAT_051503e0 + (long)(int)DAT_051503d8 * 8) =
                         &DAT_05150494 + lVar24;
                    iVar10 = (int)DAT_051503d8 + 1;
                    DAT_051503d8 = CONCAT44(DAT_051503d8._4_4_,iVar10);
                  }
                  puVar4 = DAT_051503e0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0x14);
                if (1 < iVar10) {
                  uVar15 = 0;
                  uVar9 = iVar10 - 1;
                  do {
                    if ((int)uVar9 <= (int)uVar15) break;
                    puVar18 = *(uint **)(puVar4 + (ulong)uVar15 * 8);
                    uVar12 = (ulong)uVar15;
                    if ((uVar9 - uVar15 & 1) == 0) {
                      uVar16 = uVar12;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar16 = uVar12 + 1;
                      puVar20 = *(uint **)(puVar4 + uVar16 * 8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        *(uint **)(puVar4 + uVar16 * 8) = puVar18;
                        *(uint **)(puVar4 + uVar12 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar9;
                    uVar9 = uVar15;
                    if (~uVar12 + uVar19 != 0) {
                      puVar17 = (undefined8 *)(puVar4 + uVar16 * 8 + 8);
                      do {
                        puVar18 = (uint *)*puVar17;
                        uVar14 = (uint)uVar16;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar22 = (uint *)puVar17[1];
                          if (puVar18 != (uint *)0x0) goto LAB_01246010;
LAB_01245fc0:
                          puVar18 = puVar22;
                        }
                        else {
                          puVar17[-1] = puVar18;
                          *puVar17 = puVar20;
                          puVar22 = (uint *)puVar17[1];
                          puVar18 = puVar20;
                          uVar9 = uVar14;
                          if (puVar20 == (uint *)0x0) goto LAB_01245fc0;
LAB_01246010:
                          if (puVar22 == (uint *)0x0) goto LAB_01245fc0;
                          if (*puVar18 <= *puVar22) goto LAB_01245fc0;
                          uVar9 = uVar14 + 1;
                          *puVar17 = puVar22;
                          puVar17[1] = puVar18;
                        }
                        uVar16 = uVar16 + 2;
                        puVar17 = puVar17 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar16);
                    }
                    if ((int)uVar9 <= (int)uVar15) break;
                    uVar16 = (ulong)uVar9;
                    puVar18 = *(uint **)(puVar4 + (ulong)uVar9 * 8);
                    uVar15 = uVar9;
                    do {
                      puVar20 = *(uint **)(puVar4 + uVar16 * 8 + -8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar15 = (uint)uVar16;
                        *(uint **)(puVar4 + uVar16 * 8 + -8) = puVar18;
                        *(uint **)(puVar4 + uVar16 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar16 = uVar16 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar12 < (long)uVar16);
                  } while (uVar15 != uVar9);
                }
                DAT_051503d4 = '\x01';
                puVar17 = (undefined8 *)PTR_DAT_04bbbc78;
              }
              else if (DAT_051503d4 != '\x01') goto LAB_0124606c;
              if ((int)DAT_051503d8 == 0) {
LAB_0124606c:
                uVar9 = 0;
              }
              else {
                if ((int)DAT_051503d8 < 2) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = 0;
                  iVar10 = (int)DAT_051503d8 + -1;
                  do {
                    iVar1 = iVar10 + uVar9;
                    if (iVar1 < 0 != SCARRY4(iVar10,uVar9)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar15 = iVar1 >> 1;
                    if (*(uint **)(DAT_051503e0 + (long)(int)uVar15 * 8) == (uint *)0x0)
                    goto joined_r0x0124609c;
                    uVar14 = **(uint **)(DAT_051503e0 + (long)(int)uVar15 * 8);
                    if (uVar14 == uVar6) goto joined_r0x0124609c;
                    if (uVar14 < uVar6) {
                      uVar9 = uVar15 + 1;
                    }
                    else {
                      iVar10 = uVar15 - 1;
                    }
                  } while ((int)uVar9 < iVar10);
                }
                uVar15 = uVar9;
                if ((*(uint **)(DAT_051503e0 + (long)(int)uVar9 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_051503e0 + (long)(int)uVar9 * 8) == uVar6)) {
joined_r0x0124609c:
                  if (uVar15 < 0x14) {
                    uVar9 = *(uint *)(*(long *)(DAT_051503e0 + (ulong)uVar15 * 8) + 4);
                    if (uVar9 < 0x14) {
                      DAT_051503c8 = '\x01';
                      DAT_051503cc = uVar6;
                      DAT_051503d0 = uVar9;
                      goto LAB_012460cc;
                    }
                    goto LAB_0124606c;
                  }
                }
                uVar9 = 0;
              }
            }
LAB_012460cc:
          }
LAB_012460d4:
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar18 != (uint *)0x0)) && (*puVar18 != 0)) &&
             ((uVar6 = puVar18[1], uVar6 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar15 = 0;
              if ((ulong)uVar6 != 0) {
                uVar15 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar6);
              }
              if (*puVar18 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < DAT_051503a8) {
                *(short *)(DAT_051503b0 + (long)(int)uVar15 * 2) = (short)uVar9;
              }
            }
          }
          uVar6 = *puVar2;
          if (uVar6 != 0) {
            cVar7 = *PTR_DAT_04bbbc70;
            do {
              if (cVar7 == '\0') {
                *(undefined4 *)(puVar17 + 0xc) = 0xffffffff;
                *puVar17 = 0xffffffffffffffff;
                puVar17[1] = 0xffffffffffffffff;
                cVar7 = '\x01';
                puVar17[2] = 0xffffffffffffffff;
                puVar17[3] = 0xffffffffffffffff;
                puVar17[4] = 0xffffffffffffffff;
                puVar17[5] = 0xffffffffffffffff;
                puVar17[6] = 0xffffffffffffffff;
                puVar17[7] = 0xffffffffffffffff;
                puVar17[8] = 0xffffffffffffffff;
                puVar17[9] = 0xffffffffffffffff;
                puVar17[10] = 0xffffffffffffffff;
                puVar17[0xb] = 0xffffffffffffffff;
                uVar6 = *puVar2;
                *PTR_DAT_04bbbc70 = 1;
              }
              else {
                uVar9 = *(uint *)(puVar17 + 1);
                if (-1 < (int)uVar9) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar9) != (undefined4 *)0x0) {
                    uVar5 = *(undefined4 *)((long)puVar2 + (ulong)uVar9);
                    goto LAB_01246240;
                  }
                  break;
                }
                if (uVar9 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar6;
              uVar5 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar5 = 0, puVar2 == puVar18)) goto LAB_01246240;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar17 + 1) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0x64855f60) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0124623c;
              }
              iVar10 = 0;
              if (*piVar13 != -1) {
                iVar10 = *piVar13;
              }
              *(int *)(puVar17 + 1) = iVar10;
              uVar6 = *puVar2;
              if (uVar6 == 0) break;
            } while( true );
          }
LAB_0124623c:
          uVar5 = 0;
LAB_01246240:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar6 = FUN_01246a90(uVar5);
            if (0x2e < uVar6) {
              uVar6 = 0;
            }
            uVar8 = (undefined2)uVar6;
          }
          else {
            uVar6 = FUN_01246570();
            if (0x2e < uVar6) {
              uVar6 = 0;
            }
            uVar8 = (undefined2)uVar6;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar6 = puVar18[1], uVar6 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar9 = 0;
              if ((ulong)uVar6 != 0) {
                uVar9 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar6);
              }
              if (*puVar18 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if (uVar9 < DAT_051503b8) {
                *(undefined2 *)(DAT_051503c0 + (long)(int)uVar9 * 2) = uVar8;
              }
            }
          }
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar3);
  }
  return;
}

