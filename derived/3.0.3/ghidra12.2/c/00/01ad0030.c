
void FUN_01ad0030(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  long lVar18;
  byte *pbVar19;
  uint uVar20;
  uint local_19c;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar20 = 0;
    do {
      if (((uVar20 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar6 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar2 = (uint *)((ulong)(param_1[1] * uVar20 + (uint)(ushort)param_1[2] * 8 + iVar6) +
                         (long)param_1);
        if (puVar2 != (uint *)0x0) {
          puVar7 = (uint *)(ulong)*puVar2;
          if (*puVar2 == 0) {
            local_19c = 0;
LAB_01ad0174:
            if ((DAT_053264e8 == '\x01') && (DAT_053264ec == local_19c)) {
              uVar5 = DAT_053264f0;
              if (0x3f < DAT_053264f0) goto LAB_01ad0460;
            }
            else {
              if (((DAT_05326708 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_05326708), iVar6 != 0)) {
                DAT_053264f8 = 0x4000000000;
                DAT_05326500 = (undefined8 *)&DAT_05326508;
                __cxa_guard_release(&DAT_05326708);
              }
              if ((DAT_05326710 & 1) == 0) {
                DAT_05326710 = 1;
                if (((DAT_05326918 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_05326918), iVar6 != 0)) {
                  DAT_05326714 = 0xffffffff00000000;
                  DAT_0532671c = 0xffffffff00000000;
                  DAT_05326724 = 0xffffffff00000000;
                  DAT_0532672c = 0xffffffff00000000;
                  DAT_05326734 = 0xffffffff00000000;
                  DAT_0532673c = 0xffffffff00000000;
                  DAT_05326744 = 0xffffffff00000000;
                  DAT_0532674c = 0xffffffff00000000;
                  DAT_05326754 = 0xffffffff00000000;
                  DAT_0532675c = 0xffffffff00000000;
                  DAT_05326764 = 0xffffffff00000000;
                  DAT_0532676c = 0xffffffff00000000;
                  DAT_05326774 = 0xffffffff00000000;
                  DAT_0532677c = 0xffffffff00000000;
                  DAT_05326784 = 0xffffffff00000000;
                  DAT_0532678c = 0xffffffff00000000;
                  DAT_05326794 = 0xffffffff00000000;
                  DAT_0532679c = 0xffffffff00000000;
                  DAT_053267a4 = 0xffffffff00000000;
                  DAT_053267ac = 0xffffffff00000000;
                  DAT_053267b4 = 0xffffffff00000000;
                  DAT_053267bc = 0xffffffff00000000;
                  DAT_053267c4 = 0xffffffff00000000;
                  DAT_053267cc = 0xffffffff00000000;
                  DAT_053267d4 = 0xffffffff00000000;
                  DAT_053267dc = 0xffffffff00000000;
                  DAT_053267e4 = 0xffffffff00000000;
                  DAT_053267ec = 0xffffffff00000000;
                  DAT_053267f4 = 0xffffffff00000000;
                  DAT_053267fc = 0xffffffff00000000;
                  DAT_05326804 = 0xffffffff00000000;
                  DAT_0532680c = 0xffffffff00000000;
                  DAT_05326814 = 0xffffffff00000000;
                  DAT_0532681c = 0xffffffff00000000;
                  DAT_05326824 = 0xffffffff00000000;
                  DAT_0532682c = 0xffffffff00000000;
                  DAT_05326834 = 0xffffffff00000000;
                  DAT_0532683c = 0xffffffff00000000;
                  DAT_05326844 = 0xffffffff00000000;
                  DAT_0532684c = 0xffffffff00000000;
                  DAT_05326854 = 0xffffffff00000000;
                  DAT_0532685c = 0xffffffff00000000;
                  DAT_05326864 = 0xffffffff00000000;
                  DAT_0532686c = 0xffffffff00000000;
                  DAT_05326874 = 0xffffffff00000000;
                  DAT_0532687c = 0xffffffff00000000;
                  DAT_05326884 = 0xffffffff00000000;
                  DAT_0532688c = 0xffffffff00000000;
                  DAT_05326894 = 0xffffffff00000000;
                  DAT_0532689c = 0xffffffff00000000;
                  DAT_053268a4 = 0xffffffff00000000;
                  DAT_053268ac = 0xffffffff00000000;
                  DAT_053268b4 = 0xffffffff00000000;
                  DAT_053268bc = 0xffffffff00000000;
                  DAT_053268c4 = 0xffffffff00000000;
                  DAT_053268cc = 0xffffffff00000000;
                  DAT_053268d4 = 0xffffffff00000000;
                  DAT_053268dc = 0xffffffff00000000;
                  DAT_053268e4 = 0xffffffff00000000;
                  DAT_053268ec = 0xffffffff00000000;
                  DAT_053268f4 = 0xffffffff00000000;
                  DAT_053268fc = 0xffffffff00000000;
                  DAT_05326904 = 0xffffffff00000000;
                  DAT_0532690c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05326918);
                }
                lVar18 = 0;
                do {
                  local_75 = 0;
                  pbVar19 = (&PTR_DAT_04a36548)[lVar18];
                  if (local_174 != pbVar19) {
                    lVar8 = 0;
                    do {
                      if (pbVar19[lVar8] == 0) {
LAB_01ad02f4:
                        iVar6 = (int)lVar8;
joined_r0x01ad02f8:
                        if (0xff < iVar6) {
                          iVar6 = 0xff;
                        }
                        goto LAB_01ad0300;
                      }
                      if (pbVar19[lVar8 + 1] == 0) {
                        lVar8 = lVar8 + 1;
                        goto LAB_01ad02f4;
                      }
                      if (pbVar19[lVar8 + 2] == 0) {
                        iVar6 = (int)lVar8 + 2;
                        goto joined_r0x01ad02f8;
                      }
                      lVar8 = lVar8 + 3;
                    } while (lVar8 != 0x80001);
                    iVar6 = 0;
LAB_01ad0300:
                    memcpy(local_174,pbVar19,(long)iVar6);
                    local_174[iVar6] = 0;
                  }
                  uVar5 = (uint)*pbVar19;
                  if (*pbVar19 == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = 0xffffffff;
                    do {
                      pbVar19 = pbVar19 + 1;
                      uVar10 = crc32b(uVar10,uVar5,0x4c11db7);
                      uVar5 = (uint)*pbVar19;
                    } while (uVar5 != 0);
                    uVar10 = ~uVar10;
                  }
                  *(uint *)(&DAT_05326714 + lVar18) = uVar10;
                  *(int *)((long)&DAT_05326714 + lVar18 * 8 + 4) = (int)lVar18;
                  iVar6 = (int)DAT_053264f8;
                  if ((int)DAT_053264f8 < DAT_053264f8._4_4_) {
                    DAT_05326500[(int)DAT_053264f8] = &DAT_05326714 + lVar18;
                    iVar6 = (int)DAT_053264f8 + 1;
                    DAT_053264f8 = CONCAT44(DAT_053264f8._4_4_,iVar6);
                  }
                  puVar16 = DAT_05326500;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 0x40);
                if (1 < iVar6) {
                  uVar10 = 0;
                  uVar5 = iVar6 - 1;
                  do {
                    if ((int)uVar5 <= (int)uVar10) break;
                    puVar7 = (uint *)puVar16[uVar10];
                    uVar9 = (ulong)uVar10;
                    if ((uVar5 - uVar10 & 1) == 0) {
                      uVar12 = uVar9;
                      puVar14 = puVar7;
                    }
                    else {
                      uVar12 = uVar9 + 1;
                      puVar14 = (uint *)puVar16[uVar12];
                      if (((puVar7 != (uint *)0x0) && (puVar14 != (uint *)0x0)) &&
                         (*puVar14 < *puVar7)) {
                        puVar16[uVar12] = puVar7;
                        puVar16[uVar9] = puVar14;
                        puVar14 = puVar7;
                      }
                    }
                    uVar13 = (ulong)uVar5;
                    uVar5 = uVar10;
                    if (~uVar9 + uVar13 != 0) {
                      puVar15 = puVar16 + uVar12 + 1;
                      do {
                        puVar7 = (uint *)*puVar15;
                        uVar11 = (uint)uVar12;
                        if (((puVar14 == (uint *)0x0) || (puVar7 == (uint *)0x0)) ||
                           (*puVar14 <= *puVar7)) {
                          puVar17 = (uint *)puVar15[1];
                          if (puVar7 != (uint *)0x0) goto LAB_01ad05d0;
LAB_01ad0580:
                          puVar7 = puVar17;
                        }
                        else {
                          puVar15[-1] = puVar7;
                          *puVar15 = puVar14;
                          puVar17 = (uint *)puVar15[1];
                          puVar7 = puVar14;
                          uVar5 = uVar11;
                          if (puVar14 == (uint *)0x0) goto LAB_01ad0580;
LAB_01ad05d0:
                          if (puVar17 == (uint *)0x0) goto LAB_01ad0580;
                          if (*puVar7 <= *puVar17) goto LAB_01ad0580;
                          uVar5 = uVar11 + 1;
                          *puVar15 = puVar17;
                          puVar15[1] = puVar7;
                        }
                        uVar12 = uVar12 + 2;
                        puVar15 = puVar15 + 2;
                        puVar14 = puVar7;
                      } while (uVar13 != uVar12);
                    }
                    if ((int)uVar5 <= (int)uVar10) break;
                    uVar12 = (ulong)uVar5;
                    puVar7 = (uint *)puVar16[uVar5];
                    uVar10 = uVar5;
                    do {
                      puVar14 = (uint *)puVar16[uVar12 - 1];
                      if (((puVar7 != (uint *)0x0) && (puVar14 != (uint *)0x0)) &&
                         (*puVar7 < *puVar14)) {
                        uVar10 = (uint)uVar12;
                        puVar16[uVar12 - 1] = puVar7;
                        puVar16[uVar12] = puVar14;
                        puVar14 = puVar7;
                      }
                      uVar12 = uVar12 - 1;
                      puVar7 = puVar14;
                    } while ((long)uVar9 < (long)uVar12);
                  } while (uVar10 != uVar5);
                }
                DAT_053264f4 = '\x01';
              }
              else if (DAT_053264f4 != '\x01') goto LAB_01ad0460;
              if ((int)DAT_053264f8 == 0) {
LAB_01ad0460:
                uVar5 = 0;
              }
              else {
                if ((int)DAT_053264f8 < 2) {
                  uVar10 = 0;
                  puVar7 = (uint *)*DAT_05326500;
                  uVar5 = uVar10;
                  if (puVar7 != (uint *)0x0) goto LAB_01ad0424;
joined_r0x01ad043c:
                  if (uVar5 < 0x40) {
                    uVar5 = *(uint *)(DAT_05326500[uVar5] + 4);
                    if (uVar5 < 0x40) {
                      DAT_053264e8 = '\x01';
                      DAT_053264ec = local_19c;
                      DAT_053264f0 = uVar5;
                    }
                    else {
                      uVar5 = 0;
                    }
                    goto LAB_01ad0a88;
                  }
                }
                else {
                  uVar10 = 0;
                  iVar6 = (int)DAT_053264f8 + -1;
                  do {
                    iVar1 = iVar6 + uVar10;
                    if (iVar1 < 0 != SCARRY4(iVar6,uVar10)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar5 = iVar1 >> 1;
                    if ((uint *)DAT_05326500[(int)uVar5] == (uint *)0x0) goto joined_r0x01ad043c;
                    uVar11 = *(uint *)DAT_05326500[(int)uVar5];
                    if (uVar11 == local_19c) goto joined_r0x01ad043c;
                    if (uVar11 < local_19c) {
                      uVar10 = uVar5 + 1;
                    }
                    else {
                      iVar6 = uVar5 - 1;
                    }
                  } while ((int)uVar10 < iVar6);
                  puVar7 = (uint *)DAT_05326500[(int)uVar10];
                  uVar5 = uVar10;
                  if (puVar7 == (uint *)0x0) goto joined_r0x01ad043c;
LAB_01ad0424:
                  uVar5 = uVar10;
                  if (*puVar7 == local_19c) goto joined_r0x01ad043c;
                }
                uVar5 = 0;
              }
            }
          }
          else {
            if ((DAT_05300768 & 1) == 0) {
              DAT_0530076c = 0xffffffffffffffff;
              DAT_05300774 = 0xffffffffffffffff;
              DAT_05300768 = 1;
              uVar9 = 0xffffffff;
LAB_01ad0160:
              if (puVar2 == puVar7) {
                local_19c = 0;
              }
              else {
                do {
                  if (uVar9 != 0xffffffff) goto LAB_01ad063c;
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar2 + (10 - (long)puVar7)) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar2 + (lVar18 - (long)puVar7);
                  if (lVar18 == 0) goto LAB_01ad063c;
                  uVar9 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar7));
                  DAT_0530076c = CONCAT44(DAT_0530076c._4_4_,0xfffffffe);
                  if (uVar9 == 0) goto LAB_01ad063c;
                  puVar14 = (uint *)(lVar18 + 4);
                  while (puVar14[-1] != 0xa4686e5d) {
                    puVar14 = puVar14 + 2;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) {
                      local_19c = 0;
                      goto joined_r0x01ad0478;
                    }
                  }
                  uVar9 = (ulong)*puVar14;
                  uVar12 = 0;
                  if (*puVar14 != 0xffffffff) {
                    uVar12 = uVar9;
                  }
                  DAT_0530076c = CONCAT44(DAT_0530076c._4_4_,(int)uVar12);
                } while ((int)uVar12 < 0);
                puVar14 = (uint *)((long)puVar2 + uVar12);
                if (puVar14 == (uint *)0x0) goto LAB_01ad063c;
LAB_01ad0124:
                local_19c = *puVar14;
joined_r0x01ad0478:
                if (puVar2 != puVar7) goto LAB_01ad0648;
              }
              goto LAB_01ad0174;
            }
            uVar9 = DAT_0530076c & 0xffffffff;
            if ((int)DAT_0530076c < 0) goto LAB_01ad0160;
            puVar14 = (uint *)((long)puVar2 + uVar9);
            if (puVar14 != (uint *)0x0) goto LAB_01ad0124;
LAB_01ad063c:
            local_19c = 0;
            if (puVar2 == puVar7) goto LAB_01ad0174;
LAB_01ad0648:
            if (*(char *)((long)puVar2 + (0xb - (long)puVar7)) == '\0') goto LAB_01ad0174;
            if ((DAT_053260b0 == '\x01') && (DAT_053260b4 == local_19c)) {
              uVar5 = DAT_053260b8;
              if (0x3f < DAT_053260b8) goto LAB_01ad08a0;
            }
            else {
              if (((DAT_053262d0 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_053262d0), iVar6 != 0)) {
                DAT_053260c0 = 0x4000000000;
                DAT_053260c8 = &DAT_053260d0;
                __cxa_guard_release(&DAT_053262d0);
              }
              if ((DAT_053262d8 & 1) == 0) {
                DAT_053262d8 = 1;
                if (((DAT_053264e0 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_053264e0), iVar6 != 0)) {
                  DAT_053262dc = 0xffffffff00000000;
                  DAT_053262e4 = 0xffffffff00000000;
                  DAT_053262ec = 0xffffffff00000000;
                  DAT_053262f4 = 0xffffffff00000000;
                  DAT_053262fc = 0xffffffff00000000;
                  DAT_05326304 = 0xffffffff00000000;
                  DAT_0532630c = 0xffffffff00000000;
                  DAT_05326314 = 0xffffffff00000000;
                  DAT_0532631c = 0xffffffff00000000;
                  DAT_05326324 = 0xffffffff00000000;
                  DAT_0532632c = 0xffffffff00000000;
                  DAT_05326334 = 0xffffffff00000000;
                  DAT_0532633c = 0xffffffff00000000;
                  DAT_05326344 = 0xffffffff00000000;
                  DAT_0532634c = 0xffffffff00000000;
                  DAT_05326354 = 0xffffffff00000000;
                  DAT_0532635c = 0xffffffff00000000;
                  DAT_05326364 = 0xffffffff00000000;
                  DAT_0532636c = 0xffffffff00000000;
                  DAT_05326374 = 0xffffffff00000000;
                  DAT_0532637c = 0xffffffff00000000;
                  DAT_05326384 = 0xffffffff00000000;
                  DAT_0532638c = 0xffffffff00000000;
                  DAT_05326394 = 0xffffffff00000000;
                  DAT_0532639c = 0xffffffff00000000;
                  DAT_053263a4 = 0xffffffff00000000;
                  DAT_053263ac = 0xffffffff00000000;
                  DAT_053263b4 = 0xffffffff00000000;
                  DAT_053263bc = 0xffffffff00000000;
                  DAT_053263c4 = 0xffffffff00000000;
                  DAT_053263cc = 0xffffffff00000000;
                  DAT_053263d4 = 0xffffffff00000000;
                  DAT_053263dc = 0xffffffff00000000;
                  DAT_053263e4 = 0xffffffff00000000;
                  DAT_053263ec = 0xffffffff00000000;
                  DAT_053263f4 = 0xffffffff00000000;
                  DAT_053263fc = 0xffffffff00000000;
                  DAT_05326404 = 0xffffffff00000000;
                  DAT_0532640c = 0xffffffff00000000;
                  DAT_05326414 = 0xffffffff00000000;
                  DAT_0532641c = 0xffffffff00000000;
                  DAT_05326424 = 0xffffffff00000000;
                  DAT_0532642c = 0xffffffff00000000;
                  DAT_05326434 = 0xffffffff00000000;
                  DAT_0532643c = 0xffffffff00000000;
                  DAT_05326444 = 0xffffffff00000000;
                  DAT_0532644c = 0xffffffff00000000;
                  DAT_05326454 = 0xffffffff00000000;
                  DAT_0532645c = 0xffffffff00000000;
                  DAT_05326464 = 0xffffffff00000000;
                  DAT_0532646c = 0xffffffff00000000;
                  DAT_05326474 = 0xffffffff00000000;
                  DAT_0532647c = 0xffffffff00000000;
                  DAT_05326484 = 0xffffffff00000000;
                  DAT_0532648c = 0xffffffff00000000;
                  DAT_05326494 = 0xffffffff00000000;
                  DAT_0532649c = 0xffffffff00000000;
                  DAT_053264a4 = 0xffffffff00000000;
                  DAT_053264ac = 0xffffffff00000000;
                  DAT_053264b4 = 0xffffffff00000000;
                  DAT_053264bc = 0xffffffff00000000;
                  DAT_053264c4 = 0xffffffff00000000;
                  DAT_053264cc = 0xffffffff00000000;
                  DAT_053264d4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053264e0);
                }
                lVar18 = 0;
                do {
                  local_75 = 0;
                  pbVar19 = *(byte **)(PTR_DAT_04bc0410 + lVar18 * 8 + 0x278);
                  if (local_174 != pbVar19) {
                    lVar8 = 0;
                    do {
                      if (pbVar19[lVar8] == 0) {
LAB_01ad0758:
                        iVar6 = (int)lVar8;
joined_r0x01ad075c:
                        if (0xff < iVar6) {
                          iVar6 = 0xff;
                        }
                        goto LAB_01ad0764;
                      }
                      if (pbVar19[lVar8 + 1] == 0) {
                        lVar8 = lVar8 + 1;
                        goto LAB_01ad0758;
                      }
                      if (pbVar19[lVar8 + 2] == 0) {
                        iVar6 = (int)lVar8 + 2;
                        goto joined_r0x01ad075c;
                      }
                      lVar8 = lVar8 + 3;
                    } while (lVar8 != 0x80001);
                    iVar6 = 0;
LAB_01ad0764:
                    memcpy(local_174,pbVar19,(long)iVar6);
                    local_174[iVar6] = 0;
                  }
                  uVar5 = (uint)*pbVar19;
                  if (*pbVar19 == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = 0xffffffff;
                    do {
                      pbVar19 = pbVar19 + 1;
                      uVar10 = crc32b(uVar10,uVar5,0x4c11db7);
                      uVar5 = (uint)*pbVar19;
                    } while (uVar5 != 0);
                    uVar10 = ~uVar10;
                  }
                  *(uint *)(&DAT_053262dc + lVar18) = uVar10;
                  *(int *)((long)&DAT_053262dc + lVar18 * 8 + 4) = (int)lVar18;
                  iVar6 = (int)DAT_053260c0;
                  if ((int)DAT_053260c0 < DAT_053260c0._4_4_) {
                    *(undefined8 **)(DAT_053260c8 + (long)(int)DAT_053260c0 * 8) =
                         &DAT_053262dc + lVar18;
                    iVar6 = (int)DAT_053260c0 + 1;
                    DAT_053260c0 = CONCAT44(DAT_053260c0._4_4_,iVar6);
                  }
                  puVar4 = DAT_053260c8;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 0x40);
                if (1 < iVar6) {
                  uVar10 = 0;
                  uVar5 = iVar6 - 1;
                  do {
                    if ((int)uVar5 <= (int)uVar10) break;
                    puVar7 = *(uint **)(puVar4 + (ulong)uVar10 * 8);
                    uVar9 = (ulong)uVar10;
                    if ((uVar5 - uVar10 & 1) == 0) {
                      uVar12 = uVar9;
                      puVar14 = puVar7;
                    }
                    else {
                      uVar12 = uVar9 + 1;
                      puVar14 = *(uint **)(puVar4 + uVar12 * 8);
                      if (((puVar7 != (uint *)0x0) && (puVar14 != (uint *)0x0)) &&
                         (*puVar14 < *puVar7)) {
                        *(uint **)(puVar4 + uVar12 * 8) = puVar7;
                        *(uint **)(puVar4 + uVar9 * 8) = puVar14;
                        puVar14 = puVar7;
                      }
                    }
                    uVar13 = (ulong)uVar5;
                    uVar5 = uVar10;
                    if (~uVar9 + uVar13 != 0) {
                      puVar16 = (undefined8 *)(puVar4 + uVar12 * 8 + 8);
                      do {
                        puVar7 = (uint *)*puVar16;
                        uVar11 = (uint)uVar12;
                        if (((puVar14 == (uint *)0x0) || (puVar7 == (uint *)0x0)) ||
                           (*puVar14 <= *puVar7)) {
                          puVar17 = (uint *)puVar16[1];
                          if (puVar7 != (uint *)0x0) goto LAB_01ad09e0;
LAB_01ad0990:
                          puVar7 = puVar17;
                        }
                        else {
                          puVar16[-1] = puVar7;
                          *puVar16 = puVar14;
                          puVar17 = (uint *)puVar16[1];
                          puVar7 = puVar14;
                          uVar5 = uVar11;
                          if (puVar14 == (uint *)0x0) goto LAB_01ad0990;
LAB_01ad09e0:
                          if (puVar17 == (uint *)0x0) goto LAB_01ad0990;
                          if (*puVar7 <= *puVar17) goto LAB_01ad0990;
                          uVar5 = uVar11 + 1;
                          *puVar16 = puVar17;
                          puVar16[1] = puVar7;
                        }
                        uVar12 = uVar12 + 2;
                        puVar16 = puVar16 + 2;
                        puVar14 = puVar7;
                      } while (uVar13 != uVar12);
                    }
                    if ((int)uVar5 <= (int)uVar10) break;
                    uVar12 = (ulong)uVar5;
                    puVar7 = *(uint **)(puVar4 + (ulong)uVar5 * 8);
                    uVar10 = uVar5;
                    do {
                      puVar14 = *(uint **)(puVar4 + uVar12 * 8 + -8);
                      if (((puVar7 != (uint *)0x0) && (puVar14 != (uint *)0x0)) &&
                         (*puVar7 < *puVar14)) {
                        uVar10 = (uint)uVar12;
                        *(uint **)(puVar4 + uVar12 * 8 + -8) = puVar7;
                        *(uint **)(puVar4 + uVar12 * 8) = puVar14;
                        puVar14 = puVar7;
                      }
                      uVar12 = uVar12 - 1;
                      puVar7 = puVar14;
                    } while ((long)uVar9 < (long)uVar12);
                  } while (uVar10 != uVar5);
                }
                DAT_053260bc = '\x01';
              }
              else if (DAT_053260bc != '\x01') goto LAB_01ad08a0;
              if ((int)DAT_053260c0 == 0) {
LAB_01ad08a0:
                uVar5 = 0;
              }
              else {
                if ((int)DAT_053260c0 < 2) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = 0;
                  iVar6 = (int)DAT_053260c0 + -1;
                  do {
                    iVar1 = iVar6 + uVar5;
                    if (iVar1 < 0 != SCARRY4(iVar6,uVar5)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar10 = iVar1 >> 1;
                    if (*(uint **)(DAT_053260c8 + (long)(int)uVar10 * 8) == (uint *)0x0)
                    goto LAB_01ad0a28;
                    uVar11 = **(uint **)(DAT_053260c8 + (long)(int)uVar10 * 8);
                    if (uVar11 == local_19c) goto LAB_01ad0a28;
                    if (uVar11 < local_19c) {
                      uVar5 = uVar10 + 1;
                    }
                    else {
                      iVar6 = uVar10 - 1;
                    }
                  } while ((int)uVar5 < iVar6);
                }
                uVar10 = uVar5;
                if ((*(uint **)(DAT_053260c8 + (long)(int)uVar5 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053260c8 + (long)(int)uVar5 * 8) == local_19c)) {
LAB_01ad0a28:
                  if (uVar10 < 0x40) {
                    uVar5 = *(uint *)(*(long *)(DAT_053260c8 + (ulong)uVar10 * 8) + 4);
                    if (uVar5 < 0x40) {
                      DAT_053260b0 = '\x01';
                      DAT_053260b4 = local_19c;
                      DAT_053260b8 = uVar5;
                    }
                    else {
                      uVar5 = 0;
                    }
                    goto LAB_01ad0a88;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_01ad0a88:
          puVar7 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar7 != (uint *)0x0)) && (*puVar7 != 0)) &&
             ((uVar10 = puVar7[1], uVar10 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
            lVar18 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar7 + lVar18 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar18 != 0) {
              uVar11 = 0;
              if ((ulong)uVar10 != 0) {
                uVar11 = (uint)((ulong)((long)puVar2 - lVar18) / (ulong)uVar10);
              }
              if (*puVar7 <= uVar11) {
                uVar11 = 0xffffffff;
              }
              if (uVar11 < DAT_05326f38) {
                *(short *)(*(long *)(PTR_DAT_04bc0408 + 8) + (long)(int)uVar11 * 2) = (short)uVar5;
              }
            }
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar3);
  }
  return;
}

