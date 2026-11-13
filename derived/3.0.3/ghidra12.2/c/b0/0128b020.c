
void FUN_0128b020(uint *param_1)

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
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint *puVar22;
  byte *pbVar23;
  long lVar24;
  uint uVar25;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar25 = 0;
    puVar17 = (uint *)PTR_DAT_04bbbd68;
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
            cVar7 = *PTR_DAT_04bbbd60;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                *PTR_DAT_04bbbd60 = 1;
                puVar17[0] = 0xffffffff;
                puVar17[1] = 0xffffffff;
                puVar17[2] = 0xffffffff;
                puVar17[3] = 0xffffffff;
                uVar6 = *puVar2;
              }
              else {
                uVar9 = *puVar17;
                if (-1 < (int)uVar9) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar9) != (undefined4 *)0x0) {
                    uVar5 = *(undefined4 *)((long)puVar2 + (ulong)uVar9);
                    goto LAB_0128b1e0;
                  }
                  break;
                }
                if (uVar9 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)uVar6;
              uVar5 = 0;
              if ((puVar19 == (uint *)0x0) || (uVar5 = 0, puVar2 == puVar19)) goto LAB_0128b1e0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar19)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar19);
              if (lVar24 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar19));
              *puVar17 = 0xfffffffe;
              if (uVar13 == 0) break;
              puVar19 = (uint *)(lVar24 + 4);
              while (puVar19[-1] != 0x493eed57) {
                puVar19 = puVar19 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_0128b1dc;
              }
              uVar6 = 0;
              if (*puVar19 != 0xffffffff) {
                uVar6 = *puVar19;
              }
              *puVar17 = uVar6;
              uVar6 = *puVar2;
              if (uVar6 == 0) break;
            } while( true );
          }
LAB_0128b1dc:
          uVar5 = 0;
LAB_0128b1e0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar6 = FUN_0128c2f0(uVar5);
            if (0x1f < uVar6) {
              uVar6 = 0;
            }
            uVar8 = (undefined2)uVar6;
          }
          else {
            uVar6 = FUN_0128bdf0();
            if (0x1f < uVar6) {
              uVar6 = 0;
            }
            uVar8 = (undefined2)uVar6;
          }
          puVar17 = (uint *)PTR_DAT_04bbbd68;
          puVar19 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar19 != (uint *)0x0)) && (*puVar19 != 0)) &&
             ((uVar6 = puVar19[1], uVar6 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar19 + lVar24 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar24 != 0) {
              uVar9 = 0;
              if ((ulong)uVar6 != 0) {
                uVar9 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar6);
              }
              if (*puVar19 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if (uVar9 < *(uint *)PTR_DAT_04bbbd58) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bbbd58 + 8) + (long)(int)uVar9 * 2) = uVar8;
              }
            }
          }
          uVar6 = *puVar2;
          if (uVar6 != 0) {
            cVar7 = *PTR_DAT_04bbbd60;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                *PTR_DAT_04bbbd60 = 1;
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)((long)puVar17 + 8) = 0xffffffffffffffff;
                uVar6 = *puVar2;
              }
              else {
                uVar9 = *(uint *)((long)puVar17 + 4);
                if (-1 < (int)uVar9) {
                  if ((uint *)((long)puVar2 + (ulong)uVar9) != (uint *)0x0) {
                    uVar6 = *(uint *)((long)puVar2 + (ulong)uVar9);
                    goto LAB_0128b390;
                  }
                  break;
                }
                if (uVar9 != 0xffffffff) break;
              }
              puVar19 = (uint *)(ulong)uVar6;
              uVar6 = 0;
              if ((puVar19 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar19)) goto LAB_0128b390;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar19)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar19);
              if (lVar24 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar19));
              *(undefined4 *)((long)puVar17 + 4) = 0xfffffffe;
              if (uVar13 == 0) break;
              piVar12 = (int *)(lVar24 + 4);
              while (piVar12[-1] != -0x4a59ad06) {
                piVar12 = piVar12 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_0128b38c;
              }
              iVar10 = 0;
              if (*piVar12 != -1) {
                iVar10 = *piVar12;
              }
              *(int *)((long)puVar17 + 4) = iVar10;
              uVar6 = *puVar2;
              if (uVar6 == 0) break;
            } while( true );
          }
LAB_0128b38c:
          uVar6 = 0;
LAB_0128b390:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            if ((DAT_051617c8 == '\x01') && (DAT_051617cc == uVar6)) {
              uVar9 = DAT_051617d0;
              if (0x17 < DAT_051617d0) goto LAB_0128b644;
            }
            else {
              if ((DAT_051618a8 & 1) == 0) {
                iVar10 = __cxa_guard_acquire(&DAT_051618a8);
                puVar17 = (uint *)PTR_DAT_04bbbd68;
                if (iVar10 != 0) {
                  DAT_051617d8 = 0x1800000000;
                  DAT_051617e0 = (undefined8 *)&DAT_051617e8;
                  __cxa_guard_release(&DAT_051618a8);
                  puVar17 = (uint *)PTR_DAT_04bbbd68;
                }
              }
              if ((DAT_051618b0 & 1) == 0) {
                DAT_051618b0 = 1;
                if (((DAT_05161978 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_05161978), iVar10 != 0)) {
                  DAT_051618b4 = 0xffffffff00000000;
                  DAT_051618bc = 0xffffffff00000000;
                  DAT_051618c4 = 0xffffffff00000000;
                  DAT_051618cc = 0xffffffff00000000;
                  DAT_051618d4 = 0xffffffff00000000;
                  DAT_051618dc = 0xffffffff00000000;
                  DAT_051618e4 = 0xffffffff00000000;
                  DAT_051618ec = 0xffffffff00000000;
                  DAT_051618f4 = 0xffffffff00000000;
                  DAT_051618fc = 0xffffffff00000000;
                  DAT_05161904 = 0xffffffff00000000;
                  DAT_0516190c = 0xffffffff00000000;
                  DAT_05161914 = 0xffffffff00000000;
                  DAT_0516191c = 0xffffffff00000000;
                  DAT_05161924 = 0xffffffff00000000;
                  DAT_0516192c = 0xffffffff00000000;
                  DAT_05161934 = 0xffffffff00000000;
                  DAT_0516193c = 0xffffffff00000000;
                  DAT_05161944 = 0xffffffff00000000;
                  DAT_0516194c = 0xffffffff00000000;
                  DAT_05161954 = 0xffffffff00000000;
                  DAT_0516195c = 0xffffffff00000000;
                  DAT_05161964 = 0xffffffff00000000;
                  DAT_0516196c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05161978);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar23 = (&PTR_DAT_0498a688)[lVar24];
                  if (local_174 != pbVar23) {
                    lVar11 = 0;
                    do {
                      if (pbVar23[lVar11] == 0) {
LAB_0128b4e4:
                        iVar10 = (int)lVar11;
joined_r0x0128b4e8:
                        if (0xff < iVar10) {
                          iVar10 = 0xff;
                        }
                        goto LAB_0128b4f0;
                      }
                      if (pbVar23[lVar11 + 1] == 0) {
                        lVar11 = lVar11 + 1;
                        goto LAB_0128b4e4;
                      }
                      if (pbVar23[lVar11 + 2] == 0) {
                        iVar10 = (int)lVar11 + 2;
                        goto joined_r0x0128b4e8;
                      }
                      lVar11 = lVar11 + 3;
                    } while (lVar11 != 0x80001);
                    iVar10 = 0;
LAB_0128b4f0:
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
                  *(uint *)(&DAT_051618b4 + lVar24) = uVar15;
                  *(int *)((long)&DAT_051618b4 + lVar24 * 8 + 4) = (int)lVar24;
                  iVar10 = (int)DAT_051617d8;
                  if ((int)DAT_051617d8 < DAT_051617d8._4_4_) {
                    DAT_051617e0[(int)DAT_051617d8] = &DAT_051618b4 + lVar24;
                    iVar10 = (int)DAT_051617d8 + 1;
                    DAT_051617d8 = CONCAT44(DAT_051617d8._4_4_,iVar10);
                  }
                  puVar21 = DAT_051617e0;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0x18);
                if (1 < iVar10) {
                  uVar15 = 0;
                  uVar9 = iVar10 - 1;
                  do {
                    if ((int)uVar9 <= (int)uVar15) break;
                    puVar17 = (uint *)puVar21[uVar15];
                    uVar13 = (ulong)uVar15;
                    if ((uVar9 - uVar15 & 1) == 0) {
                      uVar16 = uVar13;
                      puVar19 = puVar17;
                    }
                    else {
                      uVar16 = uVar13 + 1;
                      puVar19 = (uint *)puVar21[uVar16];
                      if (((puVar17 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar19 < *puVar17)) {
                        puVar21[uVar16] = puVar17;
                        puVar21[uVar13] = puVar19;
                        puVar19 = puVar17;
                      }
                    }
                    uVar18 = (ulong)uVar9;
                    uVar9 = uVar15;
                    if (~uVar13 + uVar18 != 0) {
                      puVar20 = puVar21 + uVar16 + 1;
                      do {
                        puVar17 = (uint *)*puVar20;
                        uVar14 = (uint)uVar16;
                        if (((puVar19 == (uint *)0x0) || (puVar17 == (uint *)0x0)) ||
                           (*puVar19 <= *puVar17)) {
                          puVar22 = (uint *)puVar20[1];
                          if (puVar17 != (uint *)0x0) goto LAB_0128b7c0;
LAB_0128b770:
                          puVar17 = puVar22;
                        }
                        else {
                          puVar20[-1] = puVar17;
                          *puVar20 = puVar19;
                          puVar22 = (uint *)puVar20[1];
                          puVar17 = puVar19;
                          uVar9 = uVar14;
                          if (puVar19 == (uint *)0x0) goto LAB_0128b770;
LAB_0128b7c0:
                          if (puVar22 == (uint *)0x0) goto LAB_0128b770;
                          if (*puVar17 <= *puVar22) goto LAB_0128b770;
                          uVar9 = uVar14 + 1;
                          *puVar20 = puVar22;
                          puVar20[1] = puVar17;
                        }
                        uVar16 = uVar16 + 2;
                        puVar20 = puVar20 + 2;
                        puVar19 = puVar17;
                      } while (uVar18 != uVar16);
                    }
                    if ((int)uVar9 <= (int)uVar15) break;
                    uVar16 = (ulong)uVar9;
                    puVar17 = (uint *)puVar21[uVar9];
                    uVar15 = uVar9;
                    do {
                      puVar19 = (uint *)puVar21[uVar16 - 1];
                      if (((puVar17 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar17 < *puVar19)) {
                        uVar15 = (uint)uVar16;
                        puVar21[uVar16 - 1] = puVar17;
                        puVar21[uVar16] = puVar19;
                        puVar19 = puVar17;
                      }
                      uVar16 = uVar16 - 1;
                      puVar17 = puVar19;
                    } while ((long)uVar13 < (long)uVar16);
                  } while (uVar15 != uVar9);
                }
                DAT_051617d4 = '\x01';
                puVar17 = (uint *)PTR_DAT_04bbbd68;
              }
              else if (DAT_051617d4 != '\x01') goto LAB_0128b644;
              if ((int)DAT_051617d8 == 0) {
LAB_0128b644:
                uVar9 = 0;
              }
              else {
                if ((int)DAT_051617d8 < 2) {
                  uVar15 = 0;
                  puVar19 = (uint *)*DAT_051617e0;
                  uVar9 = uVar15;
                  if (puVar19 != (uint *)0x0) goto LAB_0128b614;
joined_r0x0128b7f4:
                  if (uVar9 < 0x18) {
                    uVar9 = *(uint *)(DAT_051617e0[uVar9] + 4);
                    if (uVar9 < 0x18) {
                      DAT_051617c8 = '\x01';
                      DAT_051617cc = uVar6;
                      DAT_051617d0 = uVar9;
                      goto LAB_0128bbf4;
                    }
                    goto LAB_0128b644;
                  }
                }
                else {
                  uVar15 = 0;
                  iVar10 = (int)DAT_051617d8 + -1;
                  do {
                    iVar1 = iVar10 + uVar15;
                    if (iVar1 < 0 != SCARRY4(iVar10,uVar15)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar9 = iVar1 >> 1;
                    if ((uint *)DAT_051617e0[(int)uVar9] == (uint *)0x0) goto joined_r0x0128b7f4;
                    uVar14 = *(uint *)DAT_051617e0[(int)uVar9];
                    if (uVar14 == uVar6) goto joined_r0x0128b7f4;
                    if (uVar14 < uVar6) {
                      uVar15 = uVar9 + 1;
                    }
                    else {
                      iVar10 = uVar9 - 1;
                    }
                  } while ((int)uVar15 < iVar10);
                  puVar19 = (uint *)DAT_051617e0[(int)uVar15];
                  uVar9 = uVar15;
                  if (puVar19 == (uint *)0x0) goto joined_r0x0128b7f4;
LAB_0128b614:
                  uVar9 = uVar15;
                  if (*puVar19 == uVar6) goto joined_r0x0128b7f4;
                }
                uVar9 = 0;
              }
            }
          }
          else {
            if ((DAT_05161610 == '\x01') && (DAT_05161614 == uVar6)) {
              uVar9 = DAT_05161618;
              if (0x17 < DAT_05161618) goto LAB_0128bb8c;
            }
            else {
              if ((DAT_051616f0 & 1) == 0) {
                iVar10 = __cxa_guard_acquire(&DAT_051616f0);
                puVar17 = (uint *)PTR_DAT_04bbbd68;
                if (iVar10 != 0) {
                  DAT_05161620 = 0x1800000000;
                  DAT_05161628 = &DAT_05161630;
                  __cxa_guard_release(&DAT_051616f0);
                  puVar17 = (uint *)PTR_DAT_04bbbd68;
                }
              }
              if ((DAT_051616f8 & 1) == 0) {
                DAT_051616f8 = 1;
                if (((DAT_051617c0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_051617c0), iVar10 != 0)) {
                  DAT_051616fc = 0xffffffff00000000;
                  DAT_05161704 = 0xffffffff00000000;
                  DAT_0516170c = 0xffffffff00000000;
                  DAT_05161714 = 0xffffffff00000000;
                  DAT_0516171c = 0xffffffff00000000;
                  DAT_05161724 = 0xffffffff00000000;
                  DAT_0516172c = 0xffffffff00000000;
                  DAT_05161734 = 0xffffffff00000000;
                  DAT_0516173c = 0xffffffff00000000;
                  DAT_05161744 = 0xffffffff00000000;
                  DAT_0516174c = 0xffffffff00000000;
                  DAT_05161754 = 0xffffffff00000000;
                  DAT_0516175c = 0xffffffff00000000;
                  DAT_05161764 = 0xffffffff00000000;
                  DAT_0516176c = 0xffffffff00000000;
                  DAT_05161774 = 0xffffffff00000000;
                  DAT_0516177c = 0xffffffff00000000;
                  DAT_05161784 = 0xffffffff00000000;
                  DAT_0516178c = 0xffffffff00000000;
                  DAT_05161794 = 0xffffffff00000000;
                  DAT_0516179c = 0xffffffff00000000;
                  DAT_051617a4 = 0xffffffff00000000;
                  DAT_051617ac = 0xffffffff00000000;
                  DAT_051617b4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051617c0);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar23 = (&PTR_s_N_convexity_0498a540)[lVar24];
                  if (local_174 != pbVar23) {
                    lVar11 = 0;
                    do {
                      if (pbVar23[lVar11] == 0) {
LAB_0128b8a8:
                        iVar10 = (int)lVar11;
joined_r0x0128b8ac:
                        if (0xff < iVar10) {
                          iVar10 = 0xff;
                        }
                        goto LAB_0128b8b4;
                      }
                      if (pbVar23[lVar11 + 1] == 0) {
                        lVar11 = lVar11 + 1;
                        goto LAB_0128b8a8;
                      }
                      if (pbVar23[lVar11 + 2] == 0) {
                        iVar10 = (int)lVar11 + 2;
                        goto joined_r0x0128b8ac;
                      }
                      lVar11 = lVar11 + 3;
                    } while (lVar11 != 0x80001);
                    iVar10 = 0;
LAB_0128b8b4:
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
                  *(uint *)(&DAT_051616fc + lVar24) = uVar15;
                  *(int *)((long)&DAT_051616fc + lVar24 * 8 + 4) = (int)lVar24;
                  iVar10 = (int)DAT_05161620;
                  if ((int)DAT_05161620 < DAT_05161620._4_4_) {
                    *(undefined8 **)(DAT_05161628 + (long)(int)DAT_05161620 * 8) =
                         &DAT_051616fc + lVar24;
                    iVar10 = (int)DAT_05161620 + 1;
                    DAT_05161620 = CONCAT44(DAT_05161620._4_4_,iVar10);
                  }
                  puVar4 = DAT_05161628;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 0x18);
                if (1 < iVar10) {
                  uVar15 = 0;
                  uVar9 = iVar10 - 1;
                  do {
                    if ((int)uVar9 <= (int)uVar15) break;
                    puVar17 = *(uint **)(puVar4 + (ulong)uVar15 * 8);
                    uVar13 = (ulong)uVar15;
                    if ((uVar9 - uVar15 & 1) == 0) {
                      uVar16 = uVar13;
                      puVar19 = puVar17;
                    }
                    else {
                      uVar16 = uVar13 + 1;
                      puVar19 = *(uint **)(puVar4 + uVar16 * 8);
                      if (((puVar17 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar19 < *puVar17)) {
                        *(uint **)(puVar4 + uVar16 * 8) = puVar17;
                        *(uint **)(puVar4 + uVar13 * 8) = puVar19;
                        puVar19 = puVar17;
                      }
                    }
                    uVar18 = (ulong)uVar9;
                    uVar9 = uVar15;
                    if (~uVar13 + uVar18 != 0) {
                      puVar21 = (undefined8 *)(puVar4 + uVar16 * 8 + 8);
                      do {
                        puVar17 = (uint *)*puVar21;
                        uVar14 = (uint)uVar16;
                        if (((puVar19 == (uint *)0x0) || (puVar17 == (uint *)0x0)) ||
                           (*puVar19 <= *puVar17)) {
                          puVar22 = (uint *)puVar21[1];
                          if (puVar17 != (uint *)0x0) goto LAB_0128bb30;
LAB_0128bae0:
                          puVar17 = puVar22;
                        }
                        else {
                          puVar21[-1] = puVar17;
                          *puVar21 = puVar19;
                          puVar22 = (uint *)puVar21[1];
                          puVar17 = puVar19;
                          uVar9 = uVar14;
                          if (puVar19 == (uint *)0x0) goto LAB_0128bae0;
LAB_0128bb30:
                          if (puVar22 == (uint *)0x0) goto LAB_0128bae0;
                          if (*puVar17 <= *puVar22) goto LAB_0128bae0;
                          uVar9 = uVar14 + 1;
                          *puVar21 = puVar22;
                          puVar21[1] = puVar17;
                        }
                        uVar16 = uVar16 + 2;
                        puVar21 = puVar21 + 2;
                        puVar19 = puVar17;
                      } while (uVar18 != uVar16);
                    }
                    if ((int)uVar9 <= (int)uVar15) break;
                    uVar16 = (ulong)uVar9;
                    puVar17 = *(uint **)(puVar4 + (ulong)uVar9 * 8);
                    uVar15 = uVar9;
                    do {
                      puVar19 = *(uint **)(puVar4 + uVar16 * 8 + -8);
                      if (((puVar17 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar17 < *puVar19)) {
                        uVar15 = (uint)uVar16;
                        *(uint **)(puVar4 + uVar16 * 8 + -8) = puVar17;
                        *(uint **)(puVar4 + uVar16 * 8) = puVar19;
                        puVar19 = puVar17;
                      }
                      uVar16 = uVar16 - 1;
                      puVar17 = puVar19;
                    } while ((long)uVar13 < (long)uVar16);
                  } while (uVar15 != uVar9);
                }
                DAT_0516161c = '\x01';
                puVar17 = (uint *)PTR_DAT_04bbbd68;
              }
              else if (DAT_0516161c != '\x01') goto LAB_0128bb8c;
              if ((int)DAT_05161620 == 0) {
LAB_0128bb8c:
                uVar9 = 0;
              }
              else {
                if ((int)DAT_05161620 < 2) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = 0;
                  iVar10 = (int)DAT_05161620 + -1;
                  do {
                    iVar1 = iVar10 + uVar9;
                    if (iVar1 < 0 != SCARRY4(iVar10,uVar9)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar15 = iVar1 >> 1;
                    if (*(uint **)(DAT_05161628 + (long)(int)uVar15 * 8) == (uint *)0x0)
                    goto joined_r0x0128bbbc;
                    uVar14 = **(uint **)(DAT_05161628 + (long)(int)uVar15 * 8);
                    if (uVar14 == uVar6) goto joined_r0x0128bbbc;
                    if (uVar14 < uVar6) {
                      uVar9 = uVar15 + 1;
                    }
                    else {
                      iVar10 = uVar15 - 1;
                    }
                  } while ((int)uVar9 < iVar10);
                }
                uVar15 = uVar9;
                if ((*(uint **)(DAT_05161628 + (long)(int)uVar9 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05161628 + (long)(int)uVar9 * 8) == uVar6)) {
joined_r0x0128bbbc:
                  if (uVar15 < 0x18) {
                    uVar9 = *(uint *)(*(long *)(DAT_05161628 + (ulong)uVar15 * 8) + 4);
                    if (uVar9 < 0x18) {
                      DAT_05161610 = '\x01';
                      DAT_05161614 = uVar6;
                      DAT_05161618 = uVar9;
                      goto LAB_0128bbec;
                    }
                    goto LAB_0128bb8c;
                  }
                }
                uVar9 = 0;
              }
            }
LAB_0128bbec:
          }
LAB_0128bbf4:
          puVar19 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar19 != (uint *)0x0)) && (*puVar19 != 0)) &&
             ((uVar6 = puVar19[1], uVar6 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar19 + lVar24 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar24 != 0) {
              uVar15 = 0;
              if ((ulong)uVar6 != 0) {
                uVar15 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar6);
              }
              if (*puVar19 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < *(uint *)PTR_DAT_04bbbd70) {
                *(short *)(*(long *)(PTR_DAT_04bbbd70 + 8) + (long)(int)uVar15 * 2) = (short)uVar9;
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

