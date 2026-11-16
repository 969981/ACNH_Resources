
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02636b00(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  char cVar12;
  undefined2 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  uint *puVar28;
  long lVar29;
  uint uVar30;
  byte *pbVar31;
  uint uVar32;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar10 = *param_1, uVar10 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar3 = crc32b(uVar2,0x8c,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x43,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x44,0x4c11db7);
    uVar5 = crc32b(uVar5,0x49,0x4c11db7);
    uVar3 = crc32b(uVar3,0x87,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar6 = crc32b(uVar5,0x59,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
    uVar30 = 0;
    uVar4 = crc32b(uVar4,0x6b,0x4c11db7);
    uVar3 = crc32b(uVar3,0xae,0x4c11db7);
    uVar3 = crc32b(uVar3,0x9a,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
    uVar7 = crc32b(uVar4,0x67,0x4c11db7);
    uVar3 = crc32b(uVar3,0x84,0x4c11db7);
    uVar4 = crc32b(uVar5,0x53,0x4c11db7);
    uVar3 = crc32b(uVar3,0xa1,0x4c11db7);
    uVar4 = crc32b(uVar4,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x81,0x4c11db7);
    uVar4 = crc32b(uVar4,0x65,0x4c11db7);
    uVar8 = crc32b(uVar3,0x97,0x4c11db7);
    uVar3 = crc32b(uVar4,99,0x4c11db7);
    uVar9 = crc32b(uVar3,0x74,0x4c11db7);
    do {
      if (((uVar30 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar16 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar30 + (uint)(ushort)param_1[2] * 8 + iVar16) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar32 = *puVar1;
          if (uVar32 == 0) {
            uVar32 = 0;
          }
          else {
            cVar12 = DAT_055576f0;
LAB_02636cdc:
            if (cVar12 == '\0') {
              DAT_055576f4 = -1;
              DAT_055576fc = 0xffffffffffffffff;
              cVar12 = '\x01';
              DAT_05557704 = 0xffffffffffffffff;
              DAT_0555770c = 0xffffffffffffffff;
              DAT_055576f0 = '\x01';
              DAT_05557714 = 0xffffffffffffffff;
              DAT_0555771c = 0xffffffffffffffff;
              DAT_05557724 = 0xffffffffffffffff;
              DAT_0555772c = 0xffffffffffffffff;
              DAT_05557734 = 0xffffffffffffffff;
              DAT_0555773c = 0xffffffffffffffff;
              DAT_05557744 = 0xffffffffffffffff;
              DAT_0555774c = 0xffffffffffffffff;
              DAT_05557754 = 0xffffffffffffffff;
              DAT_0555775c = 0xffffffffffffffff;
              uVar32 = *puVar1;
joined_r0x02636d38:
              puVar23 = (uint *)(ulong)uVar32;
              uVar32 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar32 = 0, puVar1 == puVar23)) goto LAB_02636de0;
              lVar29 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar29 = 0x1c;
              }
              lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
              if (lVar29 == 0) goto LAB_02636ddc;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              DAT_055576f4 = CONCAT44(0xfffffffe,(undefined4)DAT_055576f4);
              if (uVar19 == 0) goto LAB_02636ddc;
              piVar18 = (int *)(lVar29 + 4);
              while (piVar18[-1] != 0x7f5b6179) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_02636ddc;
              }
              iVar16 = 0;
              if (*piVar18 != -1) {
                iVar16 = *piVar18;
              }
              DAT_055576f4 = CONCAT44(iVar16,(undefined4)DAT_055576f4);
              uVar32 = *puVar1;
              if (uVar32 == 0) goto LAB_02636ddc;
              goto LAB_02636cdc;
            }
            if (DAT_055576f4 < 0) {
              if (DAT_055576f4._4_4_ != 0xffffffff) goto LAB_02636ddc;
              goto joined_r0x02636d38;
            }
            if ((uint *)((long)puVar1 + (ulong)DAT_055576f4._4_4_) != (uint *)0x0) {
              uVar32 = *(uint *)((long)puVar1 + (ulong)DAT_055576f4._4_4_);
              goto LAB_02636de0;
            }
LAB_02636ddc:
            uVar32 = 0;
          }
LAB_02636de0:
          if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
             (*(char *)(lVar29 + 0xb) == '\0')) {
            if ((DAT_055578a8 == '\x01') && (DAT_055578ac == uVar32)) {
              uVar15 = DAT_055578b0;
              if (8 < DAT_055578b0) goto LAB_02637090;
            }
            else {
              if (((DAT_05557910 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05557910), iVar16 != 0)) {
                DAT_055578b8 = 0x900000000;
                DAT_055578c0 = (undefined8 *)&DAT_055578c8;
                __cxa_guard_release(&DAT_05557910);
              }
              if ((DAT_05557918 & 1) == 0) {
                DAT_05557918 = 1;
                if (((DAT_05557968 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05557968), iVar16 != 0)) {
                  DAT_0555795c = 0xffffffff00000000;
                  DAT_0555791c = 0xffffffff00000000;
                  DAT_05557924 = 0xffffffff00000000;
                  DAT_0555792c = 0xffffffff00000000;
                  DAT_05557934 = 0xffffffff00000000;
                  DAT_0555793c = 0xffffffff00000000;
                  DAT_05557944 = 0xffffffff00000000;
                  DAT_0555794c = 0xffffffff00000000;
                  DAT_05557954 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05557968);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_DAT_04a87330)[lVar29];
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_02636f34:
                        iVar16 = (int)lVar17;
joined_r0x02636f38:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02636f40;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_02636f34;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x02636f38;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_02636f40:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_0555791c + lVar29) = uVar21;
                  *(int *)((long)&DAT_0555791c + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_055578b8;
                  if ((int)DAT_055578b8 < DAT_055578b8._4_4_) {
                    DAT_055578c0[(int)DAT_055578b8] = &DAT_0555791c + lVar29;
                    iVar16 = (int)DAT_055578b8 + 1;
                    DAT_055578b8 = CONCAT44(DAT_055578b8._4_4_,iVar16);
                  }
                  puVar27 = DAT_055578c0;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 9);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = (uint *)puVar27[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = (uint *)puVar27[uVar22];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        puVar27[uVar22] = puVar23;
                        puVar27[uVar19] = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar26 = puVar27 + uVar22 + 1;
                      do {
                        puVar23 = (uint *)*puVar26;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar26[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02637210;
LAB_026371c0:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar26[-1] = puVar23;
                          *puVar26 = puVar25;
                          puVar28 = (uint *)puVar26[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_026371c0;
LAB_02637210:
                          if (puVar28 == (uint *)0x0) goto LAB_026371c0;
                          if (*puVar23 <= *puVar28) goto LAB_026371c0;
                          uVar15 = uVar20 + 1;
                          *puVar26 = puVar28;
                          puVar26[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar26 = puVar26 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = (uint *)puVar27[uVar15];
                    uVar21 = uVar15;
                    do {
                      puVar25 = (uint *)puVar27[uVar22 - 1];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        puVar27[uVar22 - 1] = puVar23;
                        puVar27[uVar22] = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_055578b4 = '\x01';
              }
              else if (DAT_055578b4 != '\x01') goto LAB_02637090;
              if ((int)DAT_055578b8 == 0) {
LAB_02637090:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_055578b8 < 2) {
                  uVar21 = 0;
                  puVar23 = (uint *)*DAT_055578c0;
                  uVar15 = uVar21;
                  if (puVar23 != (uint *)0x0) goto LAB_02637064;
joined_r0x02637244:
                  if (uVar15 < 9) {
                    uVar15 = *(uint *)(DAT_055578c0[uVar15] + 4);
                    if (uVar15 < 9) {
                      DAT_055578a8 = '\x01';
                      DAT_055578ac = uVar32;
                      DAT_055578b0 = uVar15;
                      goto LAB_026375ec;
                    }
                    goto LAB_02637090;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_055578b8 + -1;
                  do {
                    iVar14 = iVar16 + uVar21;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar15 = iVar14 >> 1;
                    if ((uint *)DAT_055578c0[(int)uVar15] == (uint *)0x0) goto joined_r0x02637244;
                    uVar20 = *(uint *)DAT_055578c0[(int)uVar15];
                    if (uVar20 == uVar32) goto joined_r0x02637244;
                    if (uVar20 < uVar32) {
                      uVar21 = uVar15 + 1;
                    }
                    else {
                      iVar16 = uVar15 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                  puVar23 = (uint *)DAT_055578c0[(int)uVar21];
                  uVar15 = uVar21;
                  if (puVar23 == (uint *)0x0) goto joined_r0x02637244;
LAB_02637064:
                  uVar15 = uVar21;
                  if (*puVar23 == uVar32) goto joined_r0x02637244;
                }
                uVar15 = 0;
              }
            }
LAB_026375ec:
            uVar13 = (undefined2)uVar15;
          }
          else {
            if ((DAT_055577e0 == '\x01') && (DAT_055577e4 == uVar32)) {
              uVar15 = DAT_055577e8;
              if (8 < DAT_055577e8) goto LAB_026375c8;
            }
            else {
              if (((DAT_05557848 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05557848), iVar16 != 0)) {
                DAT_055577f0 = 0x900000000;
                DAT_055577f8 = &DAT_05557800;
                __cxa_guard_release(&DAT_05557848);
              }
              if ((DAT_05557850 & 1) == 0) {
                DAT_05557850 = 1;
                if (((DAT_055578a0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_055578a0), iVar16 != 0)) {
                  DAT_05557894 = 0xffffffff00000000;
                  DAT_05557854 = 0xffffffff00000000;
                  DAT_0555785c = 0xffffffff00000000;
                  DAT_05557864 = 0xffffffff00000000;
                  DAT_0555786c = 0xffffffff00000000;
                  DAT_05557874 = 0xffffffff00000000;
                  DAT_0555787c = 0xffffffff00000000;
                  DAT_05557884 = 0xffffffff00000000;
                  DAT_0555788c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055578a0);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_s_Bamboo_04a87220)[lVar29];
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_026372f4:
                        iVar16 = (int)lVar17;
joined_r0x026372f8:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02637300;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_026372f4;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x026372f8;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_02637300:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05557854 + lVar29) = uVar21;
                  *(int *)((long)&DAT_05557854 + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_055577f0;
                  if ((int)DAT_055577f0 < DAT_055577f0._4_4_) {
                    *(undefined8 **)(DAT_055577f8 + (long)(int)DAT_055577f0 * 8) =
                         &DAT_05557854 + lVar29;
                    iVar16 = (int)DAT_055577f0 + 1;
                    DAT_055577f0 = CONCAT44(DAT_055577f0._4_4_,iVar16);
                  }
                  puVar11 = DAT_055577f8;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 9);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        *(uint **)(puVar11 + uVar22 * 8) = puVar23;
                        *(uint **)(puVar11 + uVar19 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar27 = (undefined8 *)(puVar11 + uVar22 * 8 + 8);
                      do {
                        puVar23 = (uint *)*puVar27;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar27[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02637570;
LAB_02637520:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar27[-1] = puVar23;
                          *puVar27 = puVar25;
                          puVar28 = (uint *)puVar27[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02637520;
LAB_02637570:
                          if (puVar28 == (uint *)0x0) goto LAB_02637520;
                          if (*puVar23 <= *puVar28) goto LAB_02637520;
                          uVar15 = uVar20 + 1;
                          *puVar27 = puVar28;
                          puVar27[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar27 = puVar27 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar15 * 8);
                    uVar21 = uVar15;
                    do {
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8 + -8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        *(uint **)(puVar11 + uVar22 * 8 + -8) = puVar23;
                        *(uint **)(puVar11 + uVar22 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_055577ec = '\x01';
              }
              else if (DAT_055577ec != '\x01') goto LAB_026375c8;
              if ((int)DAT_055577f0 == 0) {
LAB_026375c8:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_055577f0 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  iVar16 = (int)DAT_055577f0 + -1;
                  do {
                    iVar14 = iVar16 + uVar15;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar15)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar21 = iVar14 >> 1;
                    if (*(uint **)(DAT_055577f8 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x02637600;
                    uVar20 = **(uint **)(DAT_055577f8 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar32) goto joined_r0x02637600;
                    if (uVar20 < uVar32) {
                      uVar15 = uVar21 + 1;
                    }
                    else {
                      iVar16 = uVar21 - 1;
                    }
                  } while ((int)uVar15 < iVar16);
                }
                uVar21 = uVar15;
                if ((*(uint **)(DAT_055577f8 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055577f8 + (long)(int)uVar15 * 8) == uVar32)) {
joined_r0x02637600:
                  if (uVar21 < 9) {
                    uVar15 = *(uint *)(*(long *)(DAT_055577f8 + (ulong)uVar21 * 8) + 4);
                    if (uVar15 < 9) {
                      DAT_055577e0 = '\x01';
                      DAT_055577e4 = uVar32;
                      DAT_055577e8 = uVar15;
                      goto LAB_0263762c;
                    }
                    goto LAB_026375c8;
                  }
                }
                uVar15 = 0;
              }
            }
LAB_0263762c:
            uVar13 = (undefined2)uVar15;
          }
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar32 = puVar23[1], uVar32 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar29 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar29 = 0x1c;
            }
            lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar29 != 0) {
              uVar15 = 0;
              if ((ulong)uVar32 != 0) {
                uVar15 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar32);
              }
              if (*puVar23 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < DAT_055577c0) {
                *(undefined2 *)(DAT_055577c8 + (long)(int)uVar15 * 2) = uVar13;
              }
            }
          }
          uVar32 = *puVar1;
          if (uVar32 != 0) {
            cVar12 = DAT_055576f0;
            do {
              if (cVar12 == '\0') {
                DAT_055576f4 = -1;
                DAT_055576fc = 0xffffffffffffffff;
                cVar12 = '\x01';
                DAT_05557704 = 0xffffffffffffffff;
                DAT_0555770c = 0xffffffffffffffff;
                DAT_055576f0 = '\x01';
                DAT_05557714 = 0xffffffffffffffff;
                DAT_0555771c = 0xffffffffffffffff;
                DAT_05557724 = 0xffffffffffffffff;
                DAT_0555772c = 0xffffffffffffffff;
                DAT_05557734 = 0xffffffffffffffff;
                DAT_0555773c = 0xffffffffffffffff;
                DAT_05557744 = 0xffffffffffffffff;
                DAT_0555774c = 0xffffffffffffffff;
                DAT_05557754 = 0xffffffffffffffff;
                DAT_0555775c = 0xffffffffffffffff;
                uVar32 = *puVar1;
              }
              else {
                if (-1 < (int)DAT_055576fc) {
                  puVar23 = (uint *)((long)puVar1 + (DAT_055576fc & 0xffffffff));
                  if (puVar23 != (uint *)0x0) {
                    uVar32 = *puVar23;
                    goto LAB_026377b4;
                  }
                  break;
                }
                if ((int)DAT_055576fc != -1) break;
              }
              puVar23 = (uint *)(ulong)uVar32;
              uVar32 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar32 = 0, puVar1 == puVar23)) goto LAB_026377b4;
              lVar29 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar29 = 0x1c;
              }
              lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
              if (lVar29 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              DAT_055576fc._4_4_ = (uint)(DAT_055576fc >> 0x20);
              DAT_055576fc = CONCAT44(DAT_055576fc._4_4_,0xfffffffe);
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar29 + 4);
              while (piVar18[-1] != 0x478b74e4) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_026377b0;
              }
              iVar16 = 0;
              if (*piVar18 != -1) {
                iVar16 = *piVar18;
              }
              DAT_055576fc = CONCAT44(DAT_055576fc._4_4_,iVar16);
              uVar32 = *puVar1;
              if (uVar32 == 0) break;
            } while( true );
          }
LAB_026377b0:
          uVar32 = 0;
LAB_026377b4:
          if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
             (*(char *)(lVar29 + 0xb) == '\0')) {
            if ((DAT_055579d8 == '\x01') && (DAT_055579dc == uVar32)) {
              uVar15 = DAT_055579e0;
              if (2 < DAT_055579e0) goto LAB_02637afc;
            }
            else {
              if (((DAT_05557a10 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05557a10), iVar16 != 0)) {
                DAT_055579e8 = 0x300000000;
                DAT_055579f0 = (undefined8 *)&DAT_055579f8;
                __cxa_guard_release(&DAT_05557a10);
              }
              if ((DAT_05557a18 & 1) == 0) {
                DAT_05557a18 = 1;
                if (((DAT_05557a38 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05557a38), iVar16 != 0)) {
                  DAT_05557a2c = 0xffffffff00000000;
                  _DAT_05557a1c = 0xffffffff00000000;
                  DAT_05557a24 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05557a38);
                }
                _DAT_05557a1c = (ulong)~uVar8;
                iVar16 = (int)DAT_055579e8;
                iVar14 = DAT_055579e8._4_4_;
                if ((int)DAT_055579e8 < DAT_055579e8._4_4_) {
                  DAT_055579f0[(int)DAT_055579e8] = &DAT_05557a1c;
                  iVar16 = (int)DAT_055579e8 + 1;
                  DAT_055579e8 = CONCAT44(DAT_055579e8._4_4_,iVar16);
                  iVar14 = DAT_055579e8._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar3,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xac,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb7,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0x94,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe7,0x4c11db7);
                uVar4 = crc32b(uVar4,0x94,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa8,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0xad,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa3,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe7,0x4c11db7);
                uVar4 = crc32b(uVar4,0xaf,0x4c11db7);
                uVar15 = crc32b(uVar4,0x80,0x4c11db7);
                DAT_05557a24 = CONCAT44(1,~uVar15);
                if (iVar16 < iVar14) {
                  DAT_055579f0[iVar16] = &DAT_05557a24;
                  iVar16 = (int)DAT_055579e8 + 1;
                  DAT_055579e8 = CONCAT44(DAT_055579e8._4_4_,iVar16);
                  iVar14 = DAT_055579e8._4_4_;
                }
                uVar3 = crc32b(uVar3,0x82,0x4c11db7);
                uVar3 = crc32b(uVar3,0xab,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xac,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xb3,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0x80,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbc,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x82,0x4c11db7);
                uVar3 = crc32b(uVar3,0xa4,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0x99,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xb3,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar15 = crc32b(uVar3,0x88,0x4c11db7);
                DAT_05557a2c = CONCAT44(2,~uVar15);
                if (iVar16 < iVar14) {
                  DAT_055579f0[iVar16] = &DAT_05557a2c;
                  iVar16 = (int)DAT_055579e8 + 1;
                  DAT_055579e8 = CONCAT44(DAT_055579e8._4_4_,iVar16);
                }
                puVar27 = DAT_055579f0;
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = (uint *)puVar27[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = (uint *)puVar27[uVar22];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        puVar27[uVar22] = puVar23;
                        puVar27[uVar19] = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar26 = puVar27 + uVar22 + 1;
                      do {
                        puVar23 = (uint *)*puVar26;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar26[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02637c80;
LAB_02637c30:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar26[-1] = puVar23;
                          *puVar26 = puVar25;
                          puVar28 = (uint *)puVar26[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02637c30;
LAB_02637c80:
                          if (puVar28 == (uint *)0x0) goto LAB_02637c30;
                          if (*puVar23 <= *puVar28) goto LAB_02637c30;
                          uVar15 = uVar20 + 1;
                          *puVar26 = puVar28;
                          puVar26[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar26 = puVar26 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = (uint *)puVar27[uVar15];
                    uVar21 = uVar15;
                    do {
                      puVar25 = (uint *)puVar27[uVar22 - 1];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        puVar27[uVar22 - 1] = puVar23;
                        puVar27[uVar22] = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_055579e4 = '\x01';
              }
              else if (DAT_055579e4 != '\x01') goto LAB_02637afc;
              if ((int)DAT_055579e8 == 0) {
LAB_02637afc:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_055579e8 < 2) {
                  uVar21 = 0;
                  puVar23 = (uint *)*DAT_055579f0;
                  uVar15 = uVar21;
                  if (puVar23 != (uint *)0x0) goto LAB_02637ad0;
joined_r0x02637ae4:
                  if (uVar15 < 3) {
                    uVar15 = *(uint *)(DAT_055579f0[uVar15] + 4);
                    if (uVar15 < 3) {
                      DAT_055579d8 = '\x01';
                      DAT_055579dc = uVar32;
                      DAT_055579e0 = uVar15;
                      goto LAB_026380dc;
                    }
                    goto LAB_02637afc;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_055579e8 + -1;
                  do {
                    iVar14 = iVar16 + uVar21;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar15 = iVar14 >> 1;
                    if ((uint *)DAT_055579f0[(int)uVar15] == (uint *)0x0) goto joined_r0x02637ae4;
                    uVar20 = *(uint *)DAT_055579f0[(int)uVar15];
                    if (uVar20 == uVar32) goto joined_r0x02637ae4;
                    if (uVar20 < uVar32) {
                      uVar21 = uVar15 + 1;
                    }
                    else {
                      iVar16 = uVar15 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                  puVar23 = (uint *)DAT_055579f0[(int)uVar21];
                  uVar15 = uVar21;
                  if (puVar23 == (uint *)0x0) goto joined_r0x02637ae4;
LAB_02637ad0:
                  uVar15 = uVar21;
                  if (*puVar23 == uVar32) goto joined_r0x02637ae4;
                }
                uVar15 = 0;
              }
            }
          }
          else {
            if ((DAT_05557970 == '\x01') && (DAT_05557974 == uVar32)) {
              uVar15 = DAT_05557978;
              if (2 < DAT_05557978) goto LAB_02638078;
            }
            else {
              if (((DAT_055579a8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_055579a8), iVar16 != 0)) {
                DAT_05557980 = 0x300000000;
                DAT_05557988 = &DAT_05557990;
                __cxa_guard_release(&DAT_055579a8);
              }
              if ((DAT_055579b0 & 1) == 0) {
                DAT_055579b0 = 1;
                if (((DAT_055579d0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_055579d0), iVar16 != 0)) {
                  DAT_055579c4 = 0xffffffff00000000;
                  _DAT_055579b4 = 0xffffffff00000000;
                  DAT_055579bc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055579d0);
                }
                _DAT_055579b4 = (ulong)~uVar9;
                iVar16 = (int)DAT_05557980;
                iVar14 = DAT_05557980._4_4_;
                if ((int)DAT_05557980 < DAT_05557980._4_4_) {
                  *(undefined4 **)(DAT_05557988 + (long)(int)DAT_05557980 * 8) = &DAT_055579b4;
                  iVar16 = (int)DAT_05557980 + 1;
                  DAT_05557980 = CONCAT44(DAT_05557980._4_4_,iVar16);
                  iVar14 = DAT_05557980._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0x53,0x4c11db7);
                uVar3 = crc32b(uVar3,0x65,0x4c11db7);
                uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
                uVar3 = crc32b(uVar3,0x65,0x4c11db7);
                uVar3 = crc32b(uVar3,99,0x4c11db7);
                uVar3 = crc32b(uVar3,0x74,0x4c11db7);
                uVar4 = crc32b(uVar3,0x52,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar4 = crc32b(uVar4,99,0x4c11db7);
                uVar4 = crc32b(uVar4,0x69,0x4c11db7);
                uVar4 = crc32b(uVar4,0x70,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar4 = crc32b(uVar4,0x53,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar4 = crc32b(uVar4,0x61,0x4c11db7);
                uVar4 = crc32b(uVar4,0x73,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar15 = crc32b(uVar4,0x6e,0x4c11db7);
                DAT_055579bc = CONCAT44(1,~uVar15);
                if (iVar16 < iVar14) {
                  *(undefined8 **)(DAT_05557988 + (long)iVar16 * 8) = &DAT_055579bc;
                  iVar16 = (int)DAT_05557980 + 1;
                  DAT_05557980 = CONCAT44(DAT_05557980._4_4_,iVar16);
                  iVar14 = DAT_05557980._4_4_;
                }
                uVar3 = crc32b(uVar3,0x43,0x4c11db7);
                uVar3 = crc32b(uVar3,0x61,0x4c11db7);
                uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
                uVar3 = crc32b(uVar3,0x65,0x4c11db7);
                uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
                uVar3 = crc32b(uVar3,100,0x4c11db7);
                uVar3 = crc32b(uVar3,0x61,0x4c11db7);
                uVar3 = crc32b(uVar3,0x72,0x4c11db7);
                uVar3 = crc32b(uVar3,0x45,0x4c11db7);
                uVar3 = crc32b(uVar3,0x76,0x4c11db7);
                uVar3 = crc32b(uVar3,0x65,0x4c11db7);
                uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
                uVar15 = crc32b(uVar3,0x74,0x4c11db7);
                DAT_055579c4 = CONCAT44(2,~uVar15);
                if (iVar16 < iVar14) {
                  *(undefined8 **)(DAT_05557988 + (long)iVar16 * 8) = &DAT_055579c4;
                  iVar16 = (int)DAT_05557980 + 1;
                  DAT_05557980 = CONCAT44(DAT_05557980._4_4_,iVar16);
                }
                puVar11 = DAT_05557988;
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        *(uint **)(puVar11 + uVar22 * 8) = puVar23;
                        *(uint **)(puVar11 + uVar19 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar27 = (undefined8 *)(puVar11 + uVar22 * 8 + 8);
                      do {
                        puVar23 = (uint *)*puVar27;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar27[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02638020;
LAB_02637fd0:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar27[-1] = puVar23;
                          *puVar27 = puVar25;
                          puVar28 = (uint *)puVar27[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02637fd0;
LAB_02638020:
                          if (puVar28 == (uint *)0x0) goto LAB_02637fd0;
                          if (*puVar23 <= *puVar28) goto LAB_02637fd0;
                          uVar15 = uVar20 + 1;
                          *puVar27 = puVar28;
                          puVar27[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar27 = puVar27 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar15 * 8);
                    uVar21 = uVar15;
                    do {
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8 + -8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        *(uint **)(puVar11 + uVar22 * 8 + -8) = puVar23;
                        *(uint **)(puVar11 + uVar22 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_0555797c = '\x01';
              }
              else if (DAT_0555797c != '\x01') goto LAB_02638078;
              if ((int)DAT_05557980 == 0) {
LAB_02638078:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_05557980 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  iVar16 = (int)DAT_05557980 + -1;
                  do {
                    iVar14 = iVar16 + uVar15;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar15)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar21 = iVar14 >> 1;
                    if (*(uint **)(DAT_05557988 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x026380a8;
                    uVar20 = **(uint **)(DAT_05557988 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar32) goto joined_r0x026380a8;
                    if (uVar20 < uVar32) {
                      uVar15 = uVar21 + 1;
                    }
                    else {
                      iVar16 = uVar21 - 1;
                    }
                  } while ((int)uVar15 < iVar16);
                }
                uVar21 = uVar15;
                if ((*(uint **)(DAT_05557988 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05557988 + (long)(int)uVar15 * 8) == uVar32)) {
joined_r0x026380a8:
                  if (uVar21 < 3) {
                    uVar15 = *(uint *)(*(long *)(DAT_05557988 + (ulong)uVar21 * 8) + 4);
                    if (uVar15 < 3) {
                      DAT_05557970 = '\x01';
                      DAT_05557974 = uVar32;
                      DAT_05557978 = uVar15;
                      goto LAB_026380d4;
                    }
                    goto LAB_02638078;
                  }
                }
                uVar15 = 0;
              }
            }
LAB_026380d4:
          }
LAB_026380dc:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar32 = puVar23[1], uVar32 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar29 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar29 = 0x1c;
            }
            lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar29 != 0) {
              uVar21 = 0;
              if ((ulong)uVar32 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar32);
              }
              if (*puVar23 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < DAT_055577a0) {
                *(short *)(DAT_055577a8 + (long)(int)uVar21 * 2) = (short)uVar15;
              }
            }
          }
          uVar32 = *puVar1;
          if (uVar32 != 0) {
            cVar12 = DAT_055576f0;
            do {
              if (cVar12 == '\0') {
                DAT_055576f4 = -1;
                DAT_055576fc = 0xffffffffffffffff;
                cVar12 = '\x01';
                DAT_05557704 = 0xffffffffffffffff;
                DAT_0555770c = 0xffffffffffffffff;
                DAT_055576f0 = '\x01';
                DAT_05557714 = 0xffffffffffffffff;
                DAT_0555771c = 0xffffffffffffffff;
                DAT_05557724 = 0xffffffffffffffff;
                DAT_0555772c = 0xffffffffffffffff;
                DAT_05557734 = 0xffffffffffffffff;
                DAT_0555773c = 0xffffffffffffffff;
                DAT_05557744 = 0xffffffffffffffff;
                DAT_0555774c = 0xffffffffffffffff;
                DAT_05557754 = 0xffffffffffffffff;
                DAT_0555775c = 0xffffffffffffffff;
                uVar32 = *puVar1;
              }
              else {
                if (-1 < (long)DAT_055576fc) {
                  if ((uint *)((long)puVar1 + (ulong)DAT_055576fc._4_4_) != (uint *)0x0) {
                    uVar32 = *(uint *)((long)puVar1 + (ulong)DAT_055576fc._4_4_);
                    goto LAB_02638254;
                  }
                  break;
                }
                if (DAT_055576fc._4_4_ != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar32;
              uVar32 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar32 = 0, puVar1 == puVar23)) goto LAB_02638254;
              lVar29 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar29 = 0x1c;
              }
              lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
              if (lVar29 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              DAT_055576fc = CONCAT44(0xfffffffe,(int)DAT_055576fc);
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar29 + 4);
              while (piVar18[-1] != 0x34a742ad) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_02638250;
              }
              iVar16 = 0;
              if (*piVar18 != -1) {
                iVar16 = *piVar18;
              }
              DAT_055576fc = CONCAT44(iVar16,(int)DAT_055576fc);
              uVar32 = *puVar1;
              if (uVar32 == 0) break;
            } while( true );
          }
LAB_02638250:
          uVar32 = 0;
LAB_02638254:
          if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
             (*(char *)(lVar29 + 0xb) == '\0')) {
            if ((DAT_05557fa8 == '\x01') && (DAT_05557fac == uVar32)) {
              uVar15 = DAT_05557fb0;
              if (0x52 < DAT_05557fb0) goto LAB_02638500;
            }
            else {
              if (((DAT_05558260 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05558260), iVar16 != 0)) {
                DAT_05557fb8 = 0x5300000000;
                DAT_05557fc0 = (undefined8 *)&DAT_05557fc8;
                __cxa_guard_release(&DAT_05558260);
              }
              if ((DAT_05558268 & 1) == 0) {
                DAT_05558268 = 1;
                if (((DAT_05558508 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05558508), iVar16 != 0)) {
                  DAT_0555846c = 0xffffffff00000000;
                  DAT_0555826c = 0xffffffff00000000;
                  DAT_05558274 = 0xffffffff00000000;
                  DAT_05558474 = 0xffffffff00000000;
                  DAT_0555847c = 0xffffffff00000000;
                  DAT_05558484 = 0xffffffff00000000;
                  DAT_0555848c = 0xffffffff00000000;
                  DAT_05558494 = 0xffffffff00000000;
                  DAT_0555849c = 0xffffffff00000000;
                  DAT_055584a4 = 0xffffffff00000000;
                  DAT_055584ac = 0xffffffff00000000;
                  DAT_055584b4 = 0xffffffff00000000;
                  DAT_055584bc = 0xffffffff00000000;
                  DAT_055584c4 = 0xffffffff00000000;
                  DAT_055584cc = 0xffffffff00000000;
                  DAT_055584d4 = 0xffffffff00000000;
                  DAT_055584dc = 0xffffffff00000000;
                  DAT_055584e4 = 0xffffffff00000000;
                  DAT_055584ec = 0xffffffff00000000;
                  DAT_055584f4 = 0xffffffff00000000;
                  DAT_055584fc = 0xffffffff00000000;
                  DAT_0555827c = 0xffffffff00000000;
                  DAT_05558284 = 0xffffffff00000000;
                  DAT_0555828c = 0xffffffff00000000;
                  DAT_05558294 = 0xffffffff00000000;
                  DAT_0555829c = 0xffffffff00000000;
                  DAT_055582a4 = 0xffffffff00000000;
                  DAT_055582ac = 0xffffffff00000000;
                  DAT_055582b4 = 0xffffffff00000000;
                  DAT_055582bc = 0xffffffff00000000;
                  DAT_055582c4 = 0xffffffff00000000;
                  DAT_055582cc = 0xffffffff00000000;
                  DAT_055582d4 = 0xffffffff00000000;
                  DAT_055582dc = 0xffffffff00000000;
                  DAT_055582e4 = 0xffffffff00000000;
                  DAT_055582ec = 0xffffffff00000000;
                  DAT_055582f4 = 0xffffffff00000000;
                  DAT_055582fc = 0xffffffff00000000;
                  DAT_05558304 = 0xffffffff00000000;
                  DAT_0555830c = 0xffffffff00000000;
                  DAT_05558314 = 0xffffffff00000000;
                  DAT_0555831c = 0xffffffff00000000;
                  DAT_05558324 = 0xffffffff00000000;
                  DAT_0555832c = 0xffffffff00000000;
                  DAT_05558334 = 0xffffffff00000000;
                  DAT_0555833c = 0xffffffff00000000;
                  DAT_05558344 = 0xffffffff00000000;
                  DAT_0555834c = 0xffffffff00000000;
                  DAT_05558354 = 0xffffffff00000000;
                  DAT_0555835c = 0xffffffff00000000;
                  DAT_05558364 = 0xffffffff00000000;
                  DAT_0555836c = 0xffffffff00000000;
                  DAT_05558374 = 0xffffffff00000000;
                  DAT_0555837c = 0xffffffff00000000;
                  DAT_05558384 = 0xffffffff00000000;
                  DAT_0555838c = 0xffffffff00000000;
                  DAT_05558394 = 0xffffffff00000000;
                  DAT_0555839c = 0xffffffff00000000;
                  DAT_055583a4 = 0xffffffff00000000;
                  DAT_055583ac = 0xffffffff00000000;
                  DAT_055583b4 = 0xffffffff00000000;
                  DAT_055583bc = 0xffffffff00000000;
                  DAT_055583c4 = 0xffffffff00000000;
                  DAT_055583cc = 0xffffffff00000000;
                  DAT_055583d4 = 0xffffffff00000000;
                  DAT_055583dc = 0xffffffff00000000;
                  DAT_055583e4 = 0xffffffff00000000;
                  DAT_055583ec = 0xffffffff00000000;
                  DAT_055583f4 = 0xffffffff00000000;
                  DAT_055583fc = 0xffffffff00000000;
                  DAT_05558404 = 0xffffffff00000000;
                  DAT_0555840c = 0xffffffff00000000;
                  DAT_05558414 = 0xffffffff00000000;
                  DAT_0555841c = 0xffffffff00000000;
                  DAT_05558424 = 0xffffffff00000000;
                  DAT_0555842c = 0xffffffff00000000;
                  DAT_05558434 = 0xffffffff00000000;
                  DAT_0555843c = 0xffffffff00000000;
                  DAT_05558444 = 0xffffffff00000000;
                  DAT_0555844c = 0xffffffff00000000;
                  DAT_05558454 = 0xffffffff00000000;
                  DAT_0555845c = 0xffffffff00000000;
                  DAT_05558464 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05558508);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_DAT_04a87c70)[lVar29];
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_02638398:
                        iVar16 = (int)lVar17;
joined_r0x0263839c:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_026383a4;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_02638398;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x0263839c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_026383a4:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_0555826c + lVar29) = uVar21;
                  *(int *)((long)&DAT_0555826c + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_05557fb8;
                  if ((int)DAT_05557fb8 < DAT_05557fb8._4_4_) {
                    DAT_05557fc0[(int)DAT_05557fb8] = &DAT_0555826c + lVar29;
                    iVar16 = (int)DAT_05557fb8 + 1;
                    DAT_05557fb8 = CONCAT44(DAT_05557fb8._4_4_,iVar16);
                  }
                  puVar27 = DAT_05557fc0;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 0x53);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = (uint *)puVar27[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = (uint *)puVar27[uVar22];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        puVar27[uVar22] = puVar23;
                        puVar27[uVar19] = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar26 = puVar27 + uVar22 + 1;
                      do {
                        puVar23 = (uint *)*puVar26;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar26[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02638680;
LAB_02638630:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar26[-1] = puVar23;
                          *puVar26 = puVar25;
                          puVar28 = (uint *)puVar26[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02638630;
LAB_02638680:
                          if (puVar28 == (uint *)0x0) goto LAB_02638630;
                          if (*puVar23 <= *puVar28) goto LAB_02638630;
                          uVar15 = uVar20 + 1;
                          *puVar26 = puVar28;
                          puVar26[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar26 = puVar26 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = (uint *)puVar27[uVar15];
                    uVar21 = uVar15;
                    do {
                      puVar25 = (uint *)puVar27[uVar22 - 1];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        puVar27[uVar22 - 1] = puVar23;
                        puVar27[uVar22] = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_05557fb4 = '\x01';
              }
              else if (DAT_05557fb4 != '\x01') goto LAB_02638500;
              if ((int)DAT_05557fb8 == 0) {
LAB_02638500:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_05557fb8 < 2) {
                  uVar21 = 0;
                  puVar23 = (uint *)*DAT_05557fc0;
                  uVar15 = uVar21;
                  if (puVar23 != (uint *)0x0) goto LAB_026384d4;
joined_r0x026384e8:
                  if (uVar15 < 0x53) {
                    uVar15 = *(uint *)(DAT_05557fc0[uVar15] + 4);
                    if (uVar15 < 0x53) {
                      DAT_05557fa8 = '\x01';
                      DAT_05557fac = uVar32;
                      DAT_05557fb0 = uVar15;
                      goto LAB_02638a9c;
                    }
                    goto LAB_02638500;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_05557fb8 + -1;
                  do {
                    iVar14 = iVar16 + uVar21;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar15 = iVar14 >> 1;
                    if ((uint *)DAT_05557fc0[(int)uVar15] == (uint *)0x0) goto joined_r0x026384e8;
                    uVar20 = *(uint *)DAT_05557fc0[(int)uVar15];
                    if (uVar20 == uVar32) goto joined_r0x026384e8;
                    if (uVar20 < uVar32) {
                      uVar21 = uVar15 + 1;
                    }
                    else {
                      iVar16 = uVar15 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                  puVar23 = (uint *)DAT_05557fc0[(int)uVar21];
                  uVar15 = uVar21;
                  if (puVar23 == (uint *)0x0) goto joined_r0x026384e8;
LAB_026384d4:
                  uVar15 = uVar21;
                  if (*puVar23 == uVar32) goto joined_r0x026384e8;
                }
                uVar15 = 0;
              }
            }
          }
          else {
            if ((DAT_05557a40 == '\x01') && (DAT_05557a44 == uVar32)) {
              uVar15 = DAT_05557a48;
              if (0x52 < DAT_05557a48) goto LAB_02638a38;
            }
            else {
              if (((DAT_05557cf8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05557cf8), iVar16 != 0)) {
                DAT_05557a50 = 0x5300000000;
                DAT_05557a58 = &DAT_05557a60;
                __cxa_guard_release(&DAT_05557cf8);
              }
              if ((DAT_05557d00 & 1) == 0) {
                DAT_05557d00 = 1;
                if (((DAT_05557fa0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05557fa0), iVar16 != 0)) {
                  DAT_05557f04 = 0xffffffff00000000;
                  DAT_05557d04 = 0xffffffff00000000;
                  DAT_05557d0c = 0xffffffff00000000;
                  DAT_05557f0c = 0xffffffff00000000;
                  DAT_05557f14 = 0xffffffff00000000;
                  DAT_05557f1c = 0xffffffff00000000;
                  DAT_05557f24 = 0xffffffff00000000;
                  DAT_05557f2c = 0xffffffff00000000;
                  DAT_05557f34 = 0xffffffff00000000;
                  DAT_05557f3c = 0xffffffff00000000;
                  DAT_05557f44 = 0xffffffff00000000;
                  DAT_05557f4c = 0xffffffff00000000;
                  DAT_05557f54 = 0xffffffff00000000;
                  DAT_05557f5c = 0xffffffff00000000;
                  DAT_05557f64 = 0xffffffff00000000;
                  DAT_05557f6c = 0xffffffff00000000;
                  DAT_05557f74 = 0xffffffff00000000;
                  DAT_05557f7c = 0xffffffff00000000;
                  DAT_05557f84 = 0xffffffff00000000;
                  DAT_05557f8c = 0xffffffff00000000;
                  DAT_05557f94 = 0xffffffff00000000;
                  DAT_05557d14 = 0xffffffff00000000;
                  DAT_05557d1c = 0xffffffff00000000;
                  DAT_05557d24 = 0xffffffff00000000;
                  DAT_05557d2c = 0xffffffff00000000;
                  DAT_05557d34 = 0xffffffff00000000;
                  DAT_05557d3c = 0xffffffff00000000;
                  DAT_05557d44 = 0xffffffff00000000;
                  DAT_05557d4c = 0xffffffff00000000;
                  DAT_05557d54 = 0xffffffff00000000;
                  DAT_05557d5c = 0xffffffff00000000;
                  DAT_05557d64 = 0xffffffff00000000;
                  DAT_05557d6c = 0xffffffff00000000;
                  DAT_05557d74 = 0xffffffff00000000;
                  DAT_05557d7c = 0xffffffff00000000;
                  DAT_05557d84 = 0xffffffff00000000;
                  DAT_05557d8c = 0xffffffff00000000;
                  DAT_05557d94 = 0xffffffff00000000;
                  DAT_05557d9c = 0xffffffff00000000;
                  DAT_05557da4 = 0xffffffff00000000;
                  DAT_05557dac = 0xffffffff00000000;
                  DAT_05557db4 = 0xffffffff00000000;
                  DAT_05557dbc = 0xffffffff00000000;
                  DAT_05557dc4 = 0xffffffff00000000;
                  DAT_05557dcc = 0xffffffff00000000;
                  DAT_05557dd4 = 0xffffffff00000000;
                  DAT_05557ddc = 0xffffffff00000000;
                  DAT_05557de4 = 0xffffffff00000000;
                  DAT_05557dec = 0xffffffff00000000;
                  DAT_05557df4 = 0xffffffff00000000;
                  DAT_05557dfc = 0xffffffff00000000;
                  DAT_05557e04 = 0xffffffff00000000;
                  DAT_05557e0c = 0xffffffff00000000;
                  DAT_05557e14 = 0xffffffff00000000;
                  DAT_05557e1c = 0xffffffff00000000;
                  DAT_05557e24 = 0xffffffff00000000;
                  DAT_05557e2c = 0xffffffff00000000;
                  DAT_05557e34 = 0xffffffff00000000;
                  DAT_05557e3c = 0xffffffff00000000;
                  DAT_05557e44 = 0xffffffff00000000;
                  DAT_05557e4c = 0xffffffff00000000;
                  DAT_05557e54 = 0xffffffff00000000;
                  DAT_05557e5c = 0xffffffff00000000;
                  DAT_05557e64 = 0xffffffff00000000;
                  DAT_05557e6c = 0xffffffff00000000;
                  DAT_05557e74 = 0xffffffff00000000;
                  DAT_05557e7c = 0xffffffff00000000;
                  DAT_05557e84 = 0xffffffff00000000;
                  DAT_05557e8c = 0xffffffff00000000;
                  DAT_05557e94 = 0xffffffff00000000;
                  DAT_05557e9c = 0xffffffff00000000;
                  DAT_05557ea4 = 0xffffffff00000000;
                  DAT_05557eac = 0xffffffff00000000;
                  DAT_05557eb4 = 0xffffffff00000000;
                  DAT_05557ebc = 0xffffffff00000000;
                  DAT_05557ec4 = 0xffffffff00000000;
                  DAT_05557ecc = 0xffffffff00000000;
                  DAT_05557ed4 = 0xffffffff00000000;
                  DAT_05557edc = 0xffffffff00000000;
                  DAT_05557ee4 = 0xffffffff00000000;
                  DAT_05557eec = 0xffffffff00000000;
                  DAT_05557ef4 = 0xffffffff00000000;
                  DAT_05557efc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05557fa0);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = *(byte **)(PTR_DAT_04bb7160 + lVar29 * 8 + 0x440);
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_02638764:
                        iVar16 = (int)lVar17;
joined_r0x02638768:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02638770;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_02638764;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x02638768;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_02638770:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05557d04 + lVar29) = uVar21;
                  *(int *)((long)&DAT_05557d04 + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_05557a50;
                  if ((int)DAT_05557a50 < DAT_05557a50._4_4_) {
                    *(undefined8 **)(DAT_05557a58 + (long)(int)DAT_05557a50 * 8) =
                         &DAT_05557d04 + lVar29;
                    iVar16 = (int)DAT_05557a50 + 1;
                    DAT_05557a50 = CONCAT44(DAT_05557a50._4_4_,iVar16);
                  }
                  puVar11 = DAT_05557a58;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 0x53);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        *(uint **)(puVar11 + uVar22 * 8) = puVar23;
                        *(uint **)(puVar11 + uVar19 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar27 = (undefined8 *)(puVar11 + uVar22 * 8 + 8);
                      do {
                        puVar23 = (uint *)*puVar27;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar27[1];
                          if (puVar23 != (uint *)0x0) goto LAB_026389e0;
LAB_02638990:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar27[-1] = puVar23;
                          *puVar27 = puVar25;
                          puVar28 = (uint *)puVar27[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02638990;
LAB_026389e0:
                          if (puVar28 == (uint *)0x0) goto LAB_02638990;
                          if (*puVar23 <= *puVar28) goto LAB_02638990;
                          uVar15 = uVar20 + 1;
                          *puVar27 = puVar28;
                          puVar27[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar27 = puVar27 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar15 * 8);
                    uVar21 = uVar15;
                    do {
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8 + -8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        *(uint **)(puVar11 + uVar22 * 8 + -8) = puVar23;
                        *(uint **)(puVar11 + uVar22 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_05557a4c = '\x01';
              }
              else if (DAT_05557a4c != '\x01') goto LAB_02638a38;
              if ((int)DAT_05557a50 == 0) {
LAB_02638a38:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_05557a50 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  iVar16 = (int)DAT_05557a50 + -1;
                  do {
                    iVar14 = iVar16 + uVar15;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar15)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar21 = iVar14 >> 1;
                    if (*(uint **)(DAT_05557a58 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x02638a68;
                    uVar20 = **(uint **)(DAT_05557a58 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar32) goto joined_r0x02638a68;
                    if (uVar20 < uVar32) {
                      uVar15 = uVar21 + 1;
                    }
                    else {
                      iVar16 = uVar21 - 1;
                    }
                  } while ((int)uVar15 < iVar16);
                }
                uVar21 = uVar15;
                if ((*(uint **)(DAT_05557a58 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05557a58 + (long)(int)uVar15 * 8) == uVar32)) {
joined_r0x02638a68:
                  if (uVar21 < 0x53) {
                    uVar15 = *(uint *)(*(long *)(DAT_05557a58 + (ulong)uVar21 * 8) + 4);
                    if (uVar15 < 0x53) {
                      DAT_05557a40 = '\x01';
                      DAT_05557a44 = uVar32;
                      DAT_05557a48 = uVar15;
                      goto LAB_02638a94;
                    }
                    goto LAB_02638a38;
                  }
                }
                uVar15 = 0;
              }
            }
LAB_02638a94:
          }
LAB_02638a9c:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar32 = puVar23[1], uVar32 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar29 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar29 = 0x1c;
            }
            lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar29 != 0) {
              uVar21 = 0;
              if ((ulong)uVar32 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar32);
              }
              if (*puVar23 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < DAT_055577b0) {
                *(short *)(DAT_055577b8 + (long)(int)uVar21 * 2) = (short)uVar15;
              }
            }
          }
          uVar32 = *puVar1;
          if (uVar32 != 0) {
            cVar12 = DAT_055576f0;
            do {
              if (cVar12 == '\0') {
                DAT_055576f4 = -1;
                DAT_055576fc = 0xffffffffffffffff;
                cVar12 = '\x01';
                DAT_05557704 = 0xffffffffffffffff;
                DAT_0555770c = 0xffffffffffffffff;
                DAT_055576f0 = '\x01';
                DAT_05557714 = 0xffffffffffffffff;
                DAT_0555771c = 0xffffffffffffffff;
                DAT_05557724 = 0xffffffffffffffff;
                DAT_0555772c = 0xffffffffffffffff;
                DAT_05557734 = 0xffffffffffffffff;
                DAT_0555773c = 0xffffffffffffffff;
                DAT_05557744 = 0xffffffffffffffff;
                DAT_0555774c = 0xffffffffffffffff;
                DAT_05557754 = 0xffffffffffffffff;
                DAT_0555775c = 0xffffffffffffffff;
                uVar32 = *puVar1;
              }
              else {
                if (-1 < (int)DAT_05557704) {
                  puVar23 = (uint *)((long)puVar1 + (DAT_05557704 & 0xffffffff));
                  if (puVar23 != (uint *)0x0) {
                    uVar32 = *puVar23;
                    goto LAB_02638c14;
                  }
                  break;
                }
                if ((int)DAT_05557704 != -1) break;
              }
              puVar23 = (uint *)(ulong)uVar32;
              uVar32 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar32 = 0, puVar1 == puVar23)) goto LAB_02638c14;
              lVar29 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar29 = 0x1c;
              }
              lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
              if (lVar29 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              DAT_05557704._4_4_ = (uint)(DAT_05557704 >> 0x20);
              DAT_05557704 = CONCAT44(DAT_05557704._4_4_,0xfffffffe);
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar29 + 4);
              while (piVar18[-1] != -0x321ae9b1) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_02638c10;
              }
              iVar16 = 0;
              if (*piVar18 != -1) {
                iVar16 = *piVar18;
              }
              DAT_05557704 = CONCAT44(DAT_05557704._4_4_,iVar16);
              uVar32 = *puVar1;
              if (uVar32 == 0) break;
            } while( true );
          }
LAB_02638c10:
          uVar32 = 0;
LAB_02638c14:
          if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
             (*(char *)(lVar29 + 0xb) == '\0')) {
            if ((DAT_055585f8 == '\x01') && (DAT_055585fc == uVar32)) {
              uVar15 = DAT_05558600;
              if (10 < DAT_05558600) goto LAB_02638ec0;
            }
            else {
              if (((DAT_05558670 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05558670), iVar16 != 0)) {
                DAT_05558608 = 0xb00000000;
                DAT_05558610 = (undefined8 *)&DAT_05558618;
                __cxa_guard_release(&DAT_05558670);
              }
              if ((DAT_05558678 & 1) == 0) {
                DAT_05558678 = 1;
                if (((DAT_055586d8 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_055586d8), iVar16 != 0)) {
                  DAT_055586cc = 0xffffffff00000000;
                  DAT_0555867c = 0xffffffff00000000;
                  DAT_05558684 = 0xffffffff00000000;
                  DAT_0555868c = 0xffffffff00000000;
                  DAT_05558694 = 0xffffffff00000000;
                  DAT_0555869c = 0xffffffff00000000;
                  DAT_055586a4 = 0xffffffff00000000;
                  DAT_055586ac = 0xffffffff00000000;
                  DAT_055586b4 = 0xffffffff00000000;
                  DAT_055586bc = 0xffffffff00000000;
                  DAT_055586c4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055586d8);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_DAT_04a88038)[lVar29];
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_02638d58:
                        iVar16 = (int)lVar17;
joined_r0x02638d5c:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02638d64;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_02638d58;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x02638d5c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_02638d64:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_0555867c + lVar29) = uVar21;
                  *(int *)((long)&DAT_0555867c + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_05558608;
                  if ((int)DAT_05558608 < DAT_05558608._4_4_) {
                    DAT_05558610[(int)DAT_05558608] = &DAT_0555867c + lVar29;
                    iVar16 = (int)DAT_05558608 + 1;
                    DAT_05558608 = CONCAT44(DAT_05558608._4_4_,iVar16);
                  }
                  puVar27 = DAT_05558610;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 0xb);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = (uint *)puVar27[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = (uint *)puVar27[uVar22];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        puVar27[uVar22] = puVar23;
                        puVar27[uVar19] = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar26 = puVar27 + uVar22 + 1;
                      do {
                        puVar23 = (uint *)*puVar26;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar26[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02639040;
LAB_02638ff0:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar26[-1] = puVar23;
                          *puVar26 = puVar25;
                          puVar28 = (uint *)puVar26[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02638ff0;
LAB_02639040:
                          if (puVar28 == (uint *)0x0) goto LAB_02638ff0;
                          if (*puVar23 <= *puVar28) goto LAB_02638ff0;
                          uVar15 = uVar20 + 1;
                          *puVar26 = puVar28;
                          puVar26[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar26 = puVar26 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = (uint *)puVar27[uVar15];
                    uVar21 = uVar15;
                    do {
                      puVar25 = (uint *)puVar27[uVar22 - 1];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        puVar27[uVar22 - 1] = puVar23;
                        puVar27[uVar22] = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_05558604 = '\x01';
              }
              else if (DAT_05558604 != '\x01') goto LAB_02638ec0;
              if ((int)DAT_05558608 == 0) {
LAB_02638ec0:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_05558608 < 2) {
                  uVar21 = 0;
                  puVar23 = (uint *)*DAT_05558610;
                  uVar15 = uVar21;
                  if (puVar23 != (uint *)0x0) goto LAB_02638e94;
joined_r0x02638ea8:
                  if (uVar15 < 0xb) {
                    uVar15 = *(uint *)(DAT_05558610[uVar15] + 4);
                    if (uVar15 < 0xb) {
                      DAT_055585f8 = '\x01';
                      DAT_055585fc = uVar32;
                      DAT_05558600 = uVar15;
                      goto LAB_0263941c;
                    }
                    goto LAB_02638ec0;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_05558608 + -1;
                  do {
                    iVar14 = iVar16 + uVar21;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar15 = iVar14 >> 1;
                    if ((uint *)DAT_05558610[(int)uVar15] == (uint *)0x0) goto joined_r0x02638ea8;
                    uVar20 = *(uint *)DAT_05558610[(int)uVar15];
                    if (uVar20 == uVar32) goto joined_r0x02638ea8;
                    if (uVar20 < uVar32) {
                      uVar21 = uVar15 + 1;
                    }
                    else {
                      iVar16 = uVar15 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                  puVar23 = (uint *)DAT_05558610[(int)uVar21];
                  uVar15 = uVar21;
                  if (puVar23 == (uint *)0x0) goto joined_r0x02638ea8;
LAB_02638e94:
                  uVar15 = uVar21;
                  if (*puVar23 == uVar32) goto joined_r0x02638ea8;
                }
                uVar15 = 0;
              }
            }
LAB_0263941c:
            uVar13 = (undefined2)uVar15;
          }
          else {
            if ((DAT_05558510 == '\x01') && (DAT_05558514 == uVar32)) {
              uVar15 = DAT_05558518;
              if (10 < DAT_05558518) goto LAB_026393f8;
            }
            else {
              if (((DAT_05558588 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05558588), iVar16 != 0)) {
                DAT_05558520 = 0xb00000000;
                DAT_05558528 = &DAT_05558530;
                __cxa_guard_release(&DAT_05558588);
              }
              if ((DAT_05558590 & 1) == 0) {
                DAT_05558590 = 1;
                if (((DAT_055585f0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_055585f0), iVar16 != 0)) {
                  DAT_055585e4 = 0xffffffff00000000;
                  DAT_05558594 = 0xffffffff00000000;
                  DAT_0555859c = 0xffffffff00000000;
                  DAT_055585a4 = 0xffffffff00000000;
                  DAT_055585ac = 0xffffffff00000000;
                  DAT_055585b4 = 0xffffffff00000000;
                  DAT_055585bc = 0xffffffff00000000;
                  DAT_055585c4 = 0xffffffff00000000;
                  DAT_055585cc = 0xffffffff00000000;
                  DAT_055585d4 = 0xffffffff00000000;
                  DAT_055585dc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055585f0);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_DAT_04a87f40)[lVar29];
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_02639124:
                        iVar16 = (int)lVar17;
joined_r0x02639128:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02639130;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_02639124;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x02639128;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_02639130:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05558594 + lVar29) = uVar21;
                  *(int *)((long)&DAT_05558594 + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_05558520;
                  if ((int)DAT_05558520 < DAT_05558520._4_4_) {
                    *(undefined8 **)(DAT_05558528 + (long)(int)DAT_05558520 * 8) =
                         &DAT_05558594 + lVar29;
                    iVar16 = (int)DAT_05558520 + 1;
                    DAT_05558520 = CONCAT44(DAT_05558520._4_4_,iVar16);
                  }
                  puVar11 = DAT_05558528;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 0xb);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        *(uint **)(puVar11 + uVar22 * 8) = puVar23;
                        *(uint **)(puVar11 + uVar19 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar27 = (undefined8 *)(puVar11 + uVar22 * 8 + 8);
                      do {
                        puVar23 = (uint *)*puVar27;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar27[1];
                          if (puVar23 != (uint *)0x0) goto LAB_026393a0;
LAB_02639350:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar27[-1] = puVar23;
                          *puVar27 = puVar25;
                          puVar28 = (uint *)puVar27[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02639350;
LAB_026393a0:
                          if (puVar28 == (uint *)0x0) goto LAB_02639350;
                          if (*puVar23 <= *puVar28) goto LAB_02639350;
                          uVar15 = uVar20 + 1;
                          *puVar27 = puVar28;
                          puVar27[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar27 = puVar27 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar15 * 8);
                    uVar21 = uVar15;
                    do {
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8 + -8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        *(uint **)(puVar11 + uVar22 * 8 + -8) = puVar23;
                        *(uint **)(puVar11 + uVar22 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_0555851c = '\x01';
              }
              else if (DAT_0555851c != '\x01') goto LAB_026393f8;
              if ((int)DAT_05558520 == 0) {
LAB_026393f8:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_05558520 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  iVar16 = (int)DAT_05558520 + -1;
                  do {
                    iVar14 = iVar16 + uVar15;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar15)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar21 = iVar14 >> 1;
                    if (*(uint **)(DAT_05558528 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x02639430;
                    uVar20 = **(uint **)(DAT_05558528 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar32) goto joined_r0x02639430;
                    if (uVar20 < uVar32) {
                      uVar15 = uVar21 + 1;
                    }
                    else {
                      iVar16 = uVar21 - 1;
                    }
                  } while ((int)uVar15 < iVar16);
                }
                uVar21 = uVar15;
                if ((*(uint **)(DAT_05558528 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05558528 + (long)(int)uVar15 * 8) == uVar32)) {
joined_r0x02639430:
                  if (uVar21 < 0xb) {
                    uVar15 = *(uint *)(*(long *)(DAT_05558528 + (ulong)uVar21 * 8) + 4);
                    if (uVar15 < 0xb) {
                      DAT_05558510 = '\x01';
                      DAT_05558514 = uVar32;
                      DAT_05558518 = uVar15;
                      goto LAB_0263945c;
                    }
                    goto LAB_026393f8;
                  }
                }
                uVar15 = 0;
              }
            }
LAB_0263945c:
            uVar13 = (undefined2)uVar15;
          }
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar32 = puVar23[1], uVar32 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar29 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar29 = 0x1c;
            }
            lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar29 != 0) {
              uVar15 = 0;
              if ((ulong)uVar32 != 0) {
                uVar15 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar32);
              }
              if (*puVar23 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < DAT_05557780) {
                *(undefined2 *)(DAT_05557788 + (long)(int)uVar15 * 2) = uVar13;
              }
            }
          }
          uVar32 = *puVar1;
          if (uVar32 != 0) {
            cVar12 = DAT_055576f0;
            do {
              if (cVar12 == '\0') {
                DAT_055576f4 = -1;
                DAT_055576fc = 0xffffffffffffffff;
                cVar12 = '\x01';
                DAT_05557704 = 0xffffffffffffffff;
                DAT_0555770c = 0xffffffffffffffff;
                DAT_055576f0 = '\x01';
                DAT_05557714 = 0xffffffffffffffff;
                DAT_0555771c = 0xffffffffffffffff;
                DAT_05557724 = 0xffffffffffffffff;
                DAT_0555772c = 0xffffffffffffffff;
                DAT_05557734 = 0xffffffffffffffff;
                DAT_0555773c = 0xffffffffffffffff;
                DAT_05557744 = 0xffffffffffffffff;
                DAT_0555774c = 0xffffffffffffffff;
                DAT_05557754 = 0xffffffffffffffff;
                DAT_0555775c = 0xffffffffffffffff;
                uVar32 = *puVar1;
              }
              else {
                if (-1 < (long)DAT_05557704) {
                  if ((uint *)((long)puVar1 + (ulong)DAT_05557704._4_4_) != (uint *)0x0) {
                    uVar32 = *(uint *)((long)puVar1 + (ulong)DAT_05557704._4_4_);
                    goto LAB_026395e4;
                  }
                  break;
                }
                if (DAT_05557704._4_4_ != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar32;
              uVar32 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar32 = 0, puVar1 == puVar23)) goto LAB_026395e4;
              lVar29 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar29 = 0x1c;
              }
              lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
              if (lVar29 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              DAT_05557704 = CONCAT44(0xfffffffe,(int)DAT_05557704);
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar29 + 4);
              while (piVar18[-1] != -0x164ca5) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_026395e0;
              }
              iVar16 = 0;
              if (*piVar18 != -1) {
                iVar16 = *piVar18;
              }
              DAT_05557704 = CONCAT44(iVar16,(int)DAT_05557704);
              uVar32 = *puVar1;
              if (uVar32 == 0) break;
            } while( true );
          }
LAB_026395e0:
          uVar32 = 0;
LAB_026395e4:
          if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
             (*(char *)(lVar29 + 0xb) == '\0')) {
            if ((DAT_05558738 == '\x01') && (DAT_0555873c == uVar32)) {
              uVar15 = DAT_05558740;
              if (1 < DAT_05558740) goto LAB_0263980c;
            }
            else {
              if (((DAT_05558768 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05558768), iVar16 != 0)) {
                DAT_05558748 = 0x200000000;
                DAT_05558750 = (undefined8 *)&DAT_05558758;
                __cxa_guard_release(&DAT_05558768);
              }
              if ((DAT_05558770 & 1) == 0) {
                DAT_05558770 = 1;
                if (((DAT_05558788 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05558788), iVar16 != 0)) {
                  _DAT_05558774 = 0xffffffff00000000;
                  DAT_0555877c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05558788);
                }
                _DAT_05558774 = (ulong)~uVar6;
                iVar16 = (int)DAT_05558748;
                iVar14 = DAT_05558748._4_4_;
                if ((int)DAT_05558748 < DAT_05558748._4_4_) {
                  DAT_05558750[(int)DAT_05558748] = &DAT_05558774;
                  iVar16 = (int)DAT_05558748 + 1;
                  DAT_05558748 = CONCAT44(DAT_05558748._4_4_,iVar16);
                  iVar14 = DAT_05558748._4_4_;
                }
                uVar3 = crc32b(uVar2,0x96,0x4c11db7);
                uVar3 = crc32b(uVar3,0x99,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
                uVar3 = crc32b(uVar3,0x90,0x4c11db7);
                uVar15 = crc32b(uVar3,0x86,0x4c11db7);
                DAT_0555877c = CONCAT44(1,~uVar15);
                if (iVar16 < iVar14) {
                  DAT_05558750[iVar16] = &DAT_0555877c;
                  iVar16 = (int)DAT_05558748 + 1;
                  DAT_05558748 = CONCAT44(DAT_05558748._4_4_,iVar16);
                }
                puVar27 = DAT_05558750;
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = (uint *)puVar27[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = (uint *)puVar27[uVar22];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        puVar27[uVar22] = puVar23;
                        puVar27[uVar19] = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar26 = puVar27 + uVar22 + 1;
                      do {
                        puVar23 = (uint *)*puVar26;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar26[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02639990;
LAB_02639940:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar26[-1] = puVar23;
                          *puVar26 = puVar25;
                          puVar28 = (uint *)puVar26[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02639940;
LAB_02639990:
                          if (puVar28 == (uint *)0x0) goto LAB_02639940;
                          if (*puVar23 <= *puVar28) goto LAB_02639940;
                          uVar15 = uVar20 + 1;
                          *puVar26 = puVar28;
                          puVar26[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar26 = puVar26 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = (uint *)puVar27[uVar15];
                    uVar21 = uVar15;
                    do {
                      puVar25 = (uint *)puVar27[uVar22 - 1];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        puVar27[uVar22 - 1] = puVar23;
                        puVar27[uVar22] = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_05558744 = '\x01';
              }
              else if (DAT_05558744 != '\x01') goto LAB_0263980c;
              if ((int)DAT_05558748 == 0) {
LAB_0263980c:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_05558748 < 2) {
                  uVar21 = 0;
                  puVar23 = (uint *)*DAT_05558750;
                  uVar15 = uVar21;
                  if (puVar23 != (uint *)0x0) goto LAB_026397e0;
joined_r0x026397f4:
                  if (uVar15 < 2) {
                    uVar15 = *(uint *)(DAT_05558750[uVar15] + 4);
                    if (uVar15 < 2) {
                      DAT_05558738 = '\x01';
                      DAT_0555873c = uVar32;
                      DAT_05558740 = uVar15;
                      goto LAB_02639cdc;
                    }
                    goto LAB_0263980c;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_05558748 + -1;
                  do {
                    iVar14 = iVar16 + uVar21;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar15 = iVar14 >> 1;
                    if ((uint *)DAT_05558750[(int)uVar15] == (uint *)0x0) goto joined_r0x026397f4;
                    uVar20 = *(uint *)DAT_05558750[(int)uVar15];
                    if (uVar20 == uVar32) goto joined_r0x026397f4;
                    if (uVar20 < uVar32) {
                      uVar21 = uVar15 + 1;
                    }
                    else {
                      iVar16 = uVar15 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                  puVar23 = (uint *)DAT_05558750[(int)uVar21];
                  uVar15 = uVar21;
                  if (puVar23 == (uint *)0x0) goto joined_r0x026397f4;
LAB_026397e0:
                  uVar15 = uVar21;
                  if (*puVar23 == uVar32) goto joined_r0x026397f4;
                }
                uVar15 = 0;
              }
            }
          }
          else {
            if ((DAT_055586e0 == '\x01') && (DAT_055586e4 == uVar32)) {
              uVar15 = DAT_055586e8;
              if (1 < DAT_055586e8) goto LAB_02639c78;
            }
            else {
              if (((DAT_05558710 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05558710), iVar16 != 0)) {
                DAT_055586f0 = 0x200000000;
                DAT_055586f8 = &DAT_05558700;
                __cxa_guard_release(&DAT_05558710);
              }
              if ((DAT_05558718 & 1) == 0) {
                DAT_05558718 = 1;
                if (((DAT_05558730 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05558730), iVar16 != 0)) {
                  _DAT_0555871c = 0xffffffff00000000;
                  DAT_05558724 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05558730);
                }
                _DAT_0555871c = (ulong)~uVar6;
                iVar16 = (int)DAT_055586f0;
                iVar14 = DAT_055586f0._4_4_;
                if ((int)DAT_055586f0 < DAT_055586f0._4_4_) {
                  *(undefined4 **)(DAT_055586f8 + (long)(int)DAT_055586f0 * 8) = &DAT_0555871c;
                  iVar16 = (int)DAT_055586f0 + 1;
                  DAT_055586f0 = CONCAT44(DAT_055586f0._4_4_,iVar16);
                  iVar14 = DAT_055586f0._4_4_;
                }
                DAT_05558724 = CONCAT44(1,~uVar7);
                if (iVar16 < iVar14) {
                  *(undefined8 **)(DAT_055586f8 + (long)iVar16 * 8) = &DAT_05558724;
                  iVar16 = (int)DAT_055586f0 + 1;
                  DAT_055586f0 = CONCAT44(DAT_055586f0._4_4_,iVar16);
                }
                puVar11 = DAT_055586f8;
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        *(uint **)(puVar11 + uVar22 * 8) = puVar23;
                        *(uint **)(puVar11 + uVar19 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar27 = (undefined8 *)(puVar11 + uVar22 * 8 + 8);
                      do {
                        puVar23 = (uint *)*puVar27;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar27[1];
                          if (puVar23 != (uint *)0x0) goto LAB_02639c20;
LAB_02639bd0:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar27[-1] = puVar23;
                          *puVar27 = puVar25;
                          puVar28 = (uint *)puVar27[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_02639bd0;
LAB_02639c20:
                          if (puVar28 == (uint *)0x0) goto LAB_02639bd0;
                          if (*puVar23 <= *puVar28) goto LAB_02639bd0;
                          uVar15 = uVar20 + 1;
                          *puVar27 = puVar28;
                          puVar27[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar27 = puVar27 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar15 * 8);
                    uVar21 = uVar15;
                    do {
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8 + -8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        *(uint **)(puVar11 + uVar22 * 8 + -8) = puVar23;
                        *(uint **)(puVar11 + uVar22 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_055586ec = '\x01';
              }
              else if (DAT_055586ec != '\x01') goto LAB_02639c78;
              if ((int)DAT_055586f0 == 0) {
LAB_02639c78:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_055586f0 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  iVar16 = (int)DAT_055586f0 + -1;
                  do {
                    iVar14 = iVar16 + uVar15;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar15)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar21 = iVar14 >> 1;
                    if (*(uint **)(DAT_055586f8 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x02639ca8;
                    uVar20 = **(uint **)(DAT_055586f8 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar32) goto joined_r0x02639ca8;
                    if (uVar20 < uVar32) {
                      uVar15 = uVar21 + 1;
                    }
                    else {
                      iVar16 = uVar21 - 1;
                    }
                  } while ((int)uVar15 < iVar16);
                }
                uVar21 = uVar15;
                if ((*(uint **)(DAT_055586f8 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055586f8 + (long)(int)uVar15 * 8) == uVar32)) {
joined_r0x02639ca8:
                  if (uVar21 < 2) {
                    uVar15 = *(uint *)(*(long *)(DAT_055586f8 + (ulong)uVar21 * 8) + 4);
                    if (uVar15 < 2) {
                      DAT_055586e0 = '\x01';
                      DAT_055586e4 = uVar32;
                      DAT_055586e8 = uVar15;
                      goto LAB_02639cd4;
                    }
                    goto LAB_02639c78;
                  }
                }
                uVar15 = 0;
              }
            }
LAB_02639cd4:
          }
LAB_02639cdc:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar32 = puVar23[1], uVar32 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar29 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar29 = 0x1c;
            }
            lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar29 != 0) {
              uVar21 = 0;
              if ((ulong)uVar32 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar32);
              }
              if (*puVar23 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < DAT_05557770) {
                *(short *)(DAT_05557778 + (long)(int)uVar21 * 2) = (short)uVar15;
              }
            }
          }
          uVar32 = *puVar1;
          if (uVar32 != 0) {
            cVar12 = DAT_055576f0;
            do {
              if (cVar12 == '\0') {
                DAT_055576f4 = -1;
                DAT_055576fc = 0xffffffffffffffff;
                cVar12 = '\x01';
                DAT_05557704 = 0xffffffffffffffff;
                DAT_0555770c = 0xffffffffffffffff;
                DAT_055576f0 = '\x01';
                DAT_05557714 = 0xffffffffffffffff;
                DAT_0555771c = 0xffffffffffffffff;
                DAT_05557724 = 0xffffffffffffffff;
                DAT_0555772c = 0xffffffffffffffff;
                DAT_05557734 = 0xffffffffffffffff;
                DAT_0555773c = 0xffffffffffffffff;
                DAT_05557744 = 0xffffffffffffffff;
                DAT_0555774c = 0xffffffffffffffff;
                DAT_05557754 = 0xffffffffffffffff;
                DAT_0555775c = 0xffffffffffffffff;
                uVar32 = *puVar1;
              }
              else {
                if (-1 < (int)DAT_0555770c) {
                  puVar23 = (uint *)((long)puVar1 + (DAT_0555770c & 0xffffffff));
                  if (puVar23 != (uint *)0x0) {
                    uVar32 = *puVar23;
                    goto LAB_02639e54;
                  }
                  break;
                }
                if ((int)DAT_0555770c != -1) break;
              }
              puVar23 = (uint *)(ulong)uVar32;
              uVar32 = 0;
              if ((puVar23 == (uint *)0x0) || (uVar32 = 0, puVar1 == puVar23)) goto LAB_02639e54;
              lVar29 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                lVar29 = 0x1c;
              }
              lVar29 = (long)puVar1 + (lVar29 - (long)puVar23);
              if (lVar29 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
              DAT_0555770c._4_4_ = (undefined4)(DAT_0555770c >> 0x20);
              DAT_0555770c = CONCAT44(DAT_0555770c._4_4_,0xfffffffe);
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar29 + 4);
              while (piVar18[-1] != 0x10fc6f17) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_02639e50;
              }
              iVar16 = 0;
              if (*piVar18 != -1) {
                iVar16 = *piVar18;
              }
              DAT_0555770c = CONCAT44(DAT_0555770c._4_4_,iVar16);
              uVar32 = *puVar1;
              if (uVar32 == 0) break;
            } while( true );
          }
LAB_02639e50:
          uVar32 = 0;
LAB_02639e54:
          if (((*puVar1 == 0) || (lVar29 = (long)puVar1 - (ulong)*puVar1, lVar29 == 0)) ||
             (*(char *)(lVar29 + 0xb) == '\0')) {
            if ((DAT_05558818 == '\x01') && (DAT_0555881c == uVar32)) {
              uVar15 = DAT_05558820;
              if (4 < DAT_05558820) goto LAB_0263a100;
            }
            else {
              if (((DAT_05558860 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05558860), iVar16 != 0)) {
                DAT_05558828 = 0x500000000;
                DAT_05558830 = (undefined8 *)&DAT_05558838;
                __cxa_guard_release(&DAT_05558860);
              }
              if ((DAT_05558868 & 1) == 0) {
                DAT_05558868 = 1;
                if (((DAT_05558898 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05558898), iVar16 != 0)) {
                  DAT_0555888c = 0xffffffff00000000;
                  DAT_0555886c = 0xffffffff00000000;
                  DAT_05558874 = 0xffffffff00000000;
                  DAT_0555887c = 0xffffffff00000000;
                  DAT_05558884 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05558898);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_DAT_04a88100)[lVar29];
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_02639f98:
                        iVar16 = (int)lVar17;
joined_r0x02639f9c:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02639fa4;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_02639f98;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x02639f9c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_02639fa4:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_0555886c + lVar29) = uVar21;
                  *(int *)((long)&DAT_0555886c + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_05558828;
                  if ((int)DAT_05558828 < DAT_05558828._4_4_) {
                    DAT_05558830[(int)DAT_05558828] = &DAT_0555886c + lVar29;
                    iVar16 = (int)DAT_05558828 + 1;
                    DAT_05558828 = CONCAT44(DAT_05558828._4_4_,iVar16);
                  }
                  puVar27 = DAT_05558830;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 5);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = (uint *)puVar27[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = (uint *)puVar27[uVar22];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        puVar27[uVar22] = puVar23;
                        puVar27[uVar19] = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar26 = puVar27 + uVar22 + 1;
                      do {
                        puVar23 = (uint *)*puVar26;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar26[1];
                          if (puVar23 != (uint *)0x0) goto LAB_0263a280;
LAB_0263a230:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar26[-1] = puVar23;
                          *puVar26 = puVar25;
                          puVar28 = (uint *)puVar26[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_0263a230;
LAB_0263a280:
                          if (puVar28 == (uint *)0x0) goto LAB_0263a230;
                          if (*puVar23 <= *puVar28) goto LAB_0263a230;
                          uVar15 = uVar20 + 1;
                          *puVar26 = puVar28;
                          puVar26[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar26 = puVar26 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = (uint *)puVar27[uVar15];
                    uVar21 = uVar15;
                    do {
                      puVar25 = (uint *)puVar27[uVar22 - 1];
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        puVar27[uVar22 - 1] = puVar23;
                        puVar27[uVar22] = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_05558824 = '\x01';
              }
              else if (DAT_05558824 != '\x01') goto LAB_0263a100;
              if ((int)DAT_05558828 == 0) {
LAB_0263a100:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_05558828 < 2) {
                  uVar21 = 0;
                  puVar23 = (uint *)*DAT_05558830;
                  uVar15 = uVar21;
                  if (puVar23 != (uint *)0x0) goto LAB_0263a0d4;
joined_r0x0263a0e8:
                  if (uVar15 < 5) {
                    uVar15 = *(uint *)(DAT_05558830[uVar15] + 4);
                    if (uVar15 < 5) {
                      DAT_05558818 = '\x01';
                      DAT_0555881c = uVar32;
                      DAT_05558820 = uVar15;
                      goto LAB_0263a69c;
                    }
                    goto LAB_0263a100;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_05558828 + -1;
                  do {
                    iVar14 = iVar16 + uVar21;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar15 = iVar14 >> 1;
                    if ((uint *)DAT_05558830[(int)uVar15] == (uint *)0x0) goto joined_r0x0263a0e8;
                    uVar20 = *(uint *)DAT_05558830[(int)uVar15];
                    if (uVar20 == uVar32) goto joined_r0x0263a0e8;
                    if (uVar20 < uVar32) {
                      uVar21 = uVar15 + 1;
                    }
                    else {
                      iVar16 = uVar15 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                  puVar23 = (uint *)DAT_05558830[(int)uVar21];
                  uVar15 = uVar21;
                  if (puVar23 == (uint *)0x0) goto joined_r0x0263a0e8;
LAB_0263a0d4:
                  uVar15 = uVar21;
                  if (*puVar23 == uVar32) goto joined_r0x0263a0e8;
                }
                uVar15 = 0;
              }
            }
          }
          else {
            if ((DAT_05558790 == '\x01') && (DAT_05558794 == uVar32)) {
              uVar15 = DAT_05558798;
              if (4 < DAT_05558798) goto LAB_0263a638;
            }
            else {
              if (((DAT_055587d8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_055587d8), iVar16 != 0)) {
                DAT_055587a0 = 0x500000000;
                DAT_055587a8 = &DAT_055587b0;
                __cxa_guard_release(&DAT_055587d8);
              }
              if ((DAT_055587e0 & 1) == 0) {
                DAT_055587e0 = 1;
                if (((DAT_05558810 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05558810), iVar16 != 0)) {
                  DAT_05558804 = 0xffffffff00000000;
                  DAT_055587e4 = 0xffffffff00000000;
                  DAT_055587ec = 0xffffffff00000000;
                  DAT_055587f4 = 0xffffffff00000000;
                  DAT_055587fc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05558810);
                }
                lVar29 = 0;
                do {
                  local_75 = 0;
                  pbVar31 = (&PTR_s_NoSelect_04a880b8)[lVar29];
                  if (local_174 != pbVar31) {
                    lVar17 = 0;
                    do {
                      if (pbVar31[lVar17] == 0) {
LAB_0263a358:
                        iVar16 = (int)lVar17;
joined_r0x0263a35c:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_0263a364;
                      }
                      if (pbVar31[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_0263a358;
                      }
                      if (pbVar31[lVar17 + 2] == 0) {
                        iVar16 = (int)lVar17 + 2;
                        goto joined_r0x0263a35c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar16 = 0;
LAB_0263a364:
                    memcpy(local_174,pbVar31,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar15 = (uint)*pbVar31;
                  if (*pbVar31 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar31 = pbVar31 + 1;
                      uVar21 = crc32b(uVar21,uVar15,0x4c11db7);
                      uVar15 = (uint)*pbVar31;
                    } while (uVar15 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_055587e4 + lVar29) = uVar21;
                  *(int *)((long)&DAT_055587e4 + lVar29 * 8 + 4) = (int)lVar29;
                  iVar16 = (int)DAT_055587a0;
                  if ((int)DAT_055587a0 < DAT_055587a0._4_4_) {
                    *(undefined8 **)(DAT_055587a8 + (long)(int)DAT_055587a0 * 8) =
                         &DAT_055587e4 + lVar29;
                    iVar16 = (int)DAT_055587a0 + 1;
                    DAT_055587a0 = CONCAT44(DAT_055587a0._4_4_,iVar16);
                  }
                  puVar11 = DAT_055587a8;
                  lVar29 = lVar29 + 1;
                } while (lVar29 != 5);
                if (1 < iVar16) {
                  uVar21 = 0;
                  uVar15 = iVar16 - 1;
                  do {
                    if ((int)uVar15 <= (int)uVar21) break;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar15 - uVar21 & 1) == 0) {
                      uVar22 = uVar19;
                      puVar25 = puVar23;
                    }
                    else {
                      uVar22 = uVar19 + 1;
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar23)) {
                        *(uint **)(puVar11 + uVar22 * 8) = puVar23;
                        *(uint **)(puVar11 + uVar19 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                    }
                    uVar24 = (ulong)uVar15;
                    uVar15 = uVar21;
                    if (~uVar19 + uVar24 != 0) {
                      puVar27 = (undefined8 *)(puVar11 + uVar22 * 8 + 8);
                      do {
                        puVar23 = (uint *)*puVar27;
                        uVar20 = (uint)uVar22;
                        if (((puVar25 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar23)) {
                          puVar28 = (uint *)puVar27[1];
                          if (puVar23 != (uint *)0x0) goto LAB_0263a5e0;
LAB_0263a590:
                          puVar23 = puVar28;
                        }
                        else {
                          puVar27[-1] = puVar23;
                          *puVar27 = puVar25;
                          puVar28 = (uint *)puVar27[1];
                          puVar23 = puVar25;
                          uVar15 = uVar20;
                          if (puVar25 == (uint *)0x0) goto LAB_0263a590;
LAB_0263a5e0:
                          if (puVar28 == (uint *)0x0) goto LAB_0263a590;
                          if (*puVar23 <= *puVar28) goto LAB_0263a590;
                          uVar15 = uVar20 + 1;
                          *puVar27 = puVar28;
                          puVar27[1] = puVar23;
                        }
                        uVar22 = uVar22 + 2;
                        puVar27 = puVar27 + 2;
                        puVar25 = puVar23;
                      } while (uVar24 != uVar22);
                    }
                    if ((int)uVar15 <= (int)uVar21) break;
                    uVar22 = (ulong)uVar15;
                    puVar23 = *(uint **)(puVar11 + (ulong)uVar15 * 8);
                    uVar21 = uVar15;
                    do {
                      puVar25 = *(uint **)(puVar11 + uVar22 * 8 + -8);
                      if (((puVar23 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar23 < *puVar25)) {
                        uVar21 = (uint)uVar22;
                        *(uint **)(puVar11 + uVar22 * 8 + -8) = puVar23;
                        *(uint **)(puVar11 + uVar22 * 8) = puVar25;
                        puVar25 = puVar23;
                      }
                      uVar22 = uVar22 - 1;
                      puVar23 = puVar25;
                    } while ((long)uVar19 < (long)uVar22);
                  } while (uVar21 != uVar15);
                }
                DAT_0555879c = '\x01';
              }
              else if (DAT_0555879c != '\x01') goto LAB_0263a638;
              if ((int)DAT_055587a0 == 0) {
LAB_0263a638:
                uVar15 = 0;
              }
              else {
                if ((int)DAT_055587a0 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = 0;
                  iVar16 = (int)DAT_055587a0 + -1;
                  do {
                    iVar14 = iVar16 + uVar15;
                    if (iVar14 < 0 != SCARRY4(iVar16,uVar15)) {
                      iVar14 = iVar14 + 1;
                    }
                    uVar21 = iVar14 >> 1;
                    if (*(uint **)(DAT_055587a8 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x0263a668;
                    uVar20 = **(uint **)(DAT_055587a8 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar32) goto joined_r0x0263a668;
                    if (uVar20 < uVar32) {
                      uVar15 = uVar21 + 1;
                    }
                    else {
                      iVar16 = uVar21 - 1;
                    }
                  } while ((int)uVar15 < iVar16);
                }
                uVar21 = uVar15;
                if ((*(uint **)(DAT_055587a8 + (long)(int)uVar15 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055587a8 + (long)(int)uVar15 * 8) == uVar32)) {
joined_r0x0263a668:
                  if (uVar21 < 5) {
                    uVar15 = *(uint *)(*(long *)(DAT_055587a8 + (ulong)uVar21 * 8) + 4);
                    if (uVar15 < 5) {
                      DAT_05558790 = '\x01';
                      DAT_05558794 = uVar32;
                      DAT_05558798 = uVar15;
                      goto LAB_0263a694;
                    }
                    goto LAB_0263a638;
                  }
                }
                uVar15 = 0;
              }
            }
LAB_0263a694:
          }
LAB_0263a69c:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar23 != (uint *)0x0)) && (*puVar23 != 0)) &&
             ((uVar32 = puVar23[1], uVar32 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
            lVar29 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar29 = 0x1c;
            }
            lVar29 = (long)puVar23 + lVar29 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar29 != 0) {
              uVar21 = 0;
              if ((ulong)uVar32 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar29) / (ulong)uVar32);
              }
              if (*puVar23 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < DAT_05557790) {
                *(short *)(DAT_05557798 + (long)(int)uVar21 * 2) = (short)uVar15;
              }
            }
          }
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar10);
  }
  return;
}

