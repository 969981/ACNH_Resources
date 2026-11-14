
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c61e40(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  ulong uVar21;
  uint *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  byte *pbVar29;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar8 = *param_1, uVar8 != 0)) {
    uVar28 = 0;
    uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar3 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar4 = crc32b(uVar2,0x6c,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0x79,0x4c11db7);
    uVar2 = crc32b(uVar2,0x44,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar5 = crc32b(uVar2,0x79,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4b,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0x70,0x4c11db7);
    uVar2 = crc32b(uVar2,0x70,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar6 = crc32b(uVar2,0x69,0x4c11db7);
    do {
      if (((uVar28 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar10 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar28 + (uint)(ushort)param_1[2] * 8 + iVar10) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar26 = *puVar1;
          if (uVar26 != 0) {
            cVar11 = DAT_0534f430;
            do {
              if (cVar11 == '\0') {
                DAT_0534f434 = 0xffffffffffffffff;
                DAT_0534f43c = 0xffffffffffffffff;
                cVar11 = '\x01';
                DAT_0534f444 = 0xffffffffffffffff;
                DAT_0534f44c = 0xffffffffffffffff;
                DAT_0534f430 = '\x01';
                _DAT_0534f454 = 0xffffffffffffffff;
                DAT_0534f45c = 0xffffffffffffffff;
                DAT_0534f464 = 0xffffffffffffffff;
                DAT_0534f46c = 0xffffffffffffffff;
                uVar26 = *puVar1;
              }
              else {
                if (-1 < (int)DAT_0534f434) {
                  puVar20 = (uint *)((long)puVar1 + (DAT_0534f434 & 0xffffffff));
                  if (puVar20 != (uint *)0x0) {
                    uVar26 = *puVar20;
                    goto LAB_01c620d4;
                  }
                  break;
                }
                if ((int)DAT_0534f434 != -1) break;
              }
              puVar20 = (uint *)(ulong)uVar26;
              uVar26 = 0;
              if ((puVar20 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar20)) goto LAB_01c620d4;
              lVar27 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar20)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar1 + (lVar27 - (long)puVar20);
              if (lVar27 == 0) break;
              uVar16 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar20));
              DAT_0534f434._4_4_ = (uint)(DAT_0534f434 >> 0x20);
              DAT_0534f434 = CONCAT44(DAT_0534f434._4_4_,0xfffffffe);
              if (uVar16 == 0) break;
              piVar15 = (int *)(lVar27 + 4);
              while (piVar15[-1] != -0x22a64aac) {
                piVar15 = piVar15 + 2;
                uVar16 = uVar16 - 1;
                if (uVar16 == 0) goto LAB_01c620d0;
              }
              iVar10 = 0;
              if (*piVar15 != -1) {
                iVar10 = *piVar15;
              }
              DAT_0534f434 = CONCAT44(DAT_0534f434._4_4_,iVar10);
              uVar26 = *puVar1;
              if (uVar26 == 0) break;
            } while( true );
          }
LAB_01c620d0:
          uVar26 = 0;
LAB_01c620d4:
          if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
             (*(char *)(lVar27 + 0xb) == '\0')) {
            if ((DAT_0534f5f0 == '\x01') && (DAT_0534f5f4 == uVar26)) {
              uVar12 = DAT_0534f5f8;
              if (0x10 < DAT_0534f5f8) goto LAB_01c62370;
            }
            else {
              if (((DAT_0534f698 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_0534f698), iVar10 != 0)) {
                DAT_0534f600 = 0x1100000000;
                DAT_0534f608 = (undefined8 *)&DAT_0534f610;
                __cxa_guard_release(&DAT_0534f698);
              }
              if ((DAT_0534f6a0 & 1) == 0) {
                DAT_0534f6a0 = 1;
                if (((DAT_0534f730 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_0534f730), iVar10 != 0)) {
                  DAT_0534f724 = 0xffffffff00000000;
                  DAT_0534f6a4 = 0xffffffff00000000;
                  DAT_0534f6ac = 0xffffffff00000000;
                  DAT_0534f6b4 = 0xffffffff00000000;
                  DAT_0534f6bc = 0xffffffff00000000;
                  DAT_0534f6c4 = 0xffffffff00000000;
                  DAT_0534f6cc = 0xffffffff00000000;
                  DAT_0534f6d4 = 0xffffffff00000000;
                  DAT_0534f6dc = 0xffffffff00000000;
                  DAT_0534f6e4 = 0xffffffff00000000;
                  DAT_0534f6ec = 0xffffffff00000000;
                  DAT_0534f6f4 = 0xffffffff00000000;
                  DAT_0534f6fc = 0xffffffff00000000;
                  DAT_0534f704 = 0xffffffff00000000;
                  DAT_0534f70c = 0xffffffff00000000;
                  DAT_0534f714 = 0xffffffff00000000;
                  DAT_0534f71c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534f730);
                }
                lVar27 = 0;
                do {
                  local_75 = 0;
                  pbVar29 = (&PTR_DAT_04a42468)[lVar27];
                  if (local_174 != pbVar29) {
                    lVar14 = 0;
                    do {
                      if (pbVar29[lVar14] == 0) {
LAB_01c62214:
                        iVar10 = (int)lVar14;
joined_r0x01c62218:
                        if (0xff < iVar10) {
                          iVar10 = 0xff;
                        }
                        goto LAB_01c62220;
                      }
                      if (pbVar29[lVar14 + 1] == 0) {
                        lVar14 = lVar14 + 1;
                        goto LAB_01c62214;
                      }
                      if (pbVar29[lVar14 + 2] == 0) {
                        iVar10 = (int)lVar14 + 2;
                        goto joined_r0x01c62218;
                      }
                      lVar14 = lVar14 + 3;
                    } while (lVar14 != 0x80001);
                    iVar10 = 0;
LAB_01c62220:
                    memcpy(local_174,pbVar29,(long)iVar10);
                    local_174[iVar10] = 0;
                  }
                  uVar12 = (uint)*pbVar29;
                  if (*pbVar29 == 0) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0xffffffff;
                    do {
                      pbVar29 = pbVar29 + 1;
                      uVar18 = crc32b(uVar18,uVar12,0x4c11db7);
                      uVar12 = (uint)*pbVar29;
                    } while (uVar12 != 0);
                    uVar18 = ~uVar18;
                  }
                  *(uint *)(&DAT_0534f6a4 + lVar27) = uVar18;
                  *(int *)((long)&DAT_0534f6a4 + lVar27 * 8 + 4) = (int)lVar27;
                  iVar10 = (int)DAT_0534f600;
                  if ((int)DAT_0534f600 < DAT_0534f600._4_4_) {
                    DAT_0534f608[(int)DAT_0534f600] = &DAT_0534f6a4 + lVar27;
                    iVar10 = (int)DAT_0534f600 + 1;
                    DAT_0534f600 = CONCAT44(DAT_0534f600._4_4_,iVar10);
                  }
                  puVar24 = DAT_0534f608;
                  lVar27 = lVar27 + 1;
                } while (lVar27 != 0x11);
                if (1 < iVar10) {
                  uVar18 = 0;
                  uVar12 = iVar10 - 1;
                  do {
                    if ((int)uVar12 <= (int)uVar18) break;
                    puVar20 = (uint *)puVar24[uVar18];
                    uVar16 = (ulong)uVar18;
                    if ((uVar12 - uVar18 & 1) == 0) {
                      uVar19 = uVar16;
                      puVar22 = puVar20;
                    }
                    else {
                      uVar19 = uVar16 + 1;
                      puVar22 = (uint *)puVar24[uVar19];
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar22 < *puVar20)) {
                        puVar24[uVar19] = puVar20;
                        puVar24[uVar16] = puVar22;
                        puVar22 = puVar20;
                      }
                    }
                    uVar21 = (ulong)uVar12;
                    uVar12 = uVar18;
                    if (~uVar16 + uVar21 != 0) {
                      puVar23 = puVar24 + uVar19 + 1;
                      do {
                        puVar20 = (uint *)*puVar23;
                        uVar17 = (uint)uVar19;
                        if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                           (*puVar22 <= *puVar20)) {
                          puVar25 = (uint *)puVar23[1];
                          if (puVar20 != (uint *)0x0) goto LAB_01c624f0;
LAB_01c624a0:
                          puVar20 = puVar25;
                        }
                        else {
                          puVar23[-1] = puVar20;
                          *puVar23 = puVar22;
                          puVar25 = (uint *)puVar23[1];
                          puVar20 = puVar22;
                          uVar12 = uVar17;
                          if (puVar22 == (uint *)0x0) goto LAB_01c624a0;
LAB_01c624f0:
                          if (puVar25 == (uint *)0x0) goto LAB_01c624a0;
                          if (*puVar20 <= *puVar25) goto LAB_01c624a0;
                          uVar12 = uVar17 + 1;
                          *puVar23 = puVar25;
                          puVar23[1] = puVar20;
                        }
                        uVar19 = uVar19 + 2;
                        puVar23 = puVar23 + 2;
                        puVar22 = puVar20;
                      } while (uVar21 != uVar19);
                    }
                    if ((int)uVar12 <= (int)uVar18) break;
                    uVar19 = (ulong)uVar12;
                    puVar20 = (uint *)puVar24[uVar12];
                    uVar18 = uVar12;
                    do {
                      puVar22 = (uint *)puVar24[uVar19 - 1];
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar20 < *puVar22)) {
                        uVar18 = (uint)uVar19;
                        puVar24[uVar19 - 1] = puVar20;
                        puVar24[uVar19] = puVar22;
                        puVar22 = puVar20;
                      }
                      uVar19 = uVar19 - 1;
                      puVar20 = puVar22;
                    } while ((long)uVar16 < (long)uVar19);
                  } while (uVar18 != uVar12);
                }
                DAT_0534f5fc = '\x01';
              }
              else if (DAT_0534f5fc != '\x01') goto LAB_01c62370;
              if ((int)DAT_0534f600 == 0) {
LAB_01c62370:
                uVar12 = 0;
              }
              else {
                if ((int)DAT_0534f600 < 2) {
                  uVar18 = 0;
                  puVar20 = (uint *)*DAT_0534f608;
                  uVar12 = uVar18;
                  if (puVar20 != (uint *)0x0) goto LAB_01c62340;
joined_r0x01c62524:
                  if (uVar12 < 0x11) {
                    uVar12 = *(uint *)(DAT_0534f608[uVar12] + 4);
                    if (uVar12 < 0x11) {
                      DAT_0534f5f0 = '\x01';
                      DAT_0534f5f4 = uVar26;
                      DAT_0534f5f8 = uVar12;
                      goto LAB_01c62920;
                    }
                    goto LAB_01c62370;
                  }
                }
                else {
                  uVar18 = 0;
                  iVar10 = (int)DAT_0534f600 + -1;
                  do {
                    iVar13 = iVar10 + uVar18;
                    if (iVar13 < 0 != SCARRY4(iVar10,uVar18)) {
                      iVar13 = iVar13 + 1;
                    }
                    uVar12 = iVar13 >> 1;
                    if ((uint *)DAT_0534f608[(int)uVar12] == (uint *)0x0) goto joined_r0x01c62524;
                    uVar17 = *(uint *)DAT_0534f608[(int)uVar12];
                    if (uVar17 == uVar26) goto joined_r0x01c62524;
                    if (uVar17 < uVar26) {
                      uVar18 = uVar12 + 1;
                    }
                    else {
                      iVar10 = uVar12 - 1;
                    }
                  } while ((int)uVar18 < iVar10);
                  puVar20 = (uint *)DAT_0534f608[(int)uVar18];
                  uVar12 = uVar18;
                  if (puVar20 == (uint *)0x0) goto joined_r0x01c62524;
LAB_01c62340:
                  uVar12 = uVar18;
                  if (*puVar20 == uVar26) goto joined_r0x01c62524;
                }
                uVar12 = 0;
              }
            }
          }
          else {
            if ((DAT_0534f4a8 == '\x01') && (DAT_0534f4ac == uVar26)) {
              uVar12 = DAT_0534f4b0;
              if (0x10 < DAT_0534f4b0) goto LAB_01c628bc;
            }
            else {
              if (((DAT_0534f550 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_0534f550), iVar10 != 0)) {
                DAT_0534f4b8 = 0x1100000000;
                DAT_0534f4c0 = &DAT_0534f4c8;
                __cxa_guard_release(&DAT_0534f550);
              }
              if ((DAT_0534f558 & 1) == 0) {
                DAT_0534f558 = 1;
                if (((DAT_0534f5e8 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_0534f5e8), iVar10 != 0)) {
                  DAT_0534f5dc = 0xffffffff00000000;
                  DAT_0534f55c = 0xffffffff00000000;
                  DAT_0534f564 = 0xffffffff00000000;
                  DAT_0534f56c = 0xffffffff00000000;
                  DAT_0534f574 = 0xffffffff00000000;
                  DAT_0534f57c = 0xffffffff00000000;
                  DAT_0534f584 = 0xffffffff00000000;
                  DAT_0534f58c = 0xffffffff00000000;
                  DAT_0534f594 = 0xffffffff00000000;
                  DAT_0534f59c = 0xffffffff00000000;
                  DAT_0534f5a4 = 0xffffffff00000000;
                  DAT_0534f5ac = 0xffffffff00000000;
                  DAT_0534f5b4 = 0xffffffff00000000;
                  DAT_0534f5bc = 0xffffffff00000000;
                  DAT_0534f5c4 = 0xffffffff00000000;
                  DAT_0534f5cc = 0xffffffff00000000;
                  DAT_0534f5d4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534f5e8);
                }
                lVar27 = 0;
                do {
                  local_75 = 0;
                  pbVar29 = (&PTR_s_Normal_04a422e0)[lVar27];
                  if (local_174 != pbVar29) {
                    lVar14 = 0;
                    do {
                      if (pbVar29[lVar14] == 0) {
LAB_01c625d8:
                        iVar10 = (int)lVar14;
joined_r0x01c625dc:
                        if (0xff < iVar10) {
                          iVar10 = 0xff;
                        }
                        goto LAB_01c625e4;
                      }
                      if (pbVar29[lVar14 + 1] == 0) {
                        lVar14 = lVar14 + 1;
                        goto LAB_01c625d8;
                      }
                      if (pbVar29[lVar14 + 2] == 0) {
                        iVar10 = (int)lVar14 + 2;
                        goto joined_r0x01c625dc;
                      }
                      lVar14 = lVar14 + 3;
                    } while (lVar14 != 0x80001);
                    iVar10 = 0;
LAB_01c625e4:
                    memcpy(local_174,pbVar29,(long)iVar10);
                    local_174[iVar10] = 0;
                  }
                  uVar12 = (uint)*pbVar29;
                  if (*pbVar29 == 0) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0xffffffff;
                    do {
                      pbVar29 = pbVar29 + 1;
                      uVar18 = crc32b(uVar18,uVar12,0x4c11db7);
                      uVar12 = (uint)*pbVar29;
                    } while (uVar12 != 0);
                    uVar18 = ~uVar18;
                  }
                  *(uint *)(&DAT_0534f55c + lVar27) = uVar18;
                  *(int *)((long)&DAT_0534f55c + lVar27 * 8 + 4) = (int)lVar27;
                  iVar10 = (int)DAT_0534f4b8;
                  if ((int)DAT_0534f4b8 < DAT_0534f4b8._4_4_) {
                    *(undefined8 **)(DAT_0534f4c0 + (long)(int)DAT_0534f4b8 * 8) =
                         &DAT_0534f55c + lVar27;
                    iVar10 = (int)DAT_0534f4b8 + 1;
                    DAT_0534f4b8 = CONCAT44(DAT_0534f4b8._4_4_,iVar10);
                  }
                  puVar9 = DAT_0534f4c0;
                  lVar27 = lVar27 + 1;
                } while (lVar27 != 0x11);
                if (1 < iVar10) {
                  uVar18 = 0;
                  uVar12 = iVar10 - 1;
                  do {
                    if ((int)uVar12 <= (int)uVar18) break;
                    puVar20 = *(uint **)(puVar9 + (ulong)uVar18 * 8);
                    uVar16 = (ulong)uVar18;
                    if ((uVar12 - uVar18 & 1) == 0) {
                      uVar19 = uVar16;
                      puVar22 = puVar20;
                    }
                    else {
                      uVar19 = uVar16 + 1;
                      puVar22 = *(uint **)(puVar9 + uVar19 * 8);
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar22 < *puVar20)) {
                        *(uint **)(puVar9 + uVar19 * 8) = puVar20;
                        *(uint **)(puVar9 + uVar16 * 8) = puVar22;
                        puVar22 = puVar20;
                      }
                    }
                    uVar21 = (ulong)uVar12;
                    uVar12 = uVar18;
                    if (~uVar16 + uVar21 != 0) {
                      puVar24 = (undefined8 *)(puVar9 + uVar19 * 8 + 8);
                      do {
                        puVar20 = (uint *)*puVar24;
                        uVar17 = (uint)uVar19;
                        if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                           (*puVar22 <= *puVar20)) {
                          puVar25 = (uint *)puVar24[1];
                          if (puVar20 != (uint *)0x0) goto LAB_01c62860;
LAB_01c62810:
                          puVar20 = puVar25;
                        }
                        else {
                          puVar24[-1] = puVar20;
                          *puVar24 = puVar22;
                          puVar25 = (uint *)puVar24[1];
                          puVar20 = puVar22;
                          uVar12 = uVar17;
                          if (puVar22 == (uint *)0x0) goto LAB_01c62810;
LAB_01c62860:
                          if (puVar25 == (uint *)0x0) goto LAB_01c62810;
                          if (*puVar20 <= *puVar25) goto LAB_01c62810;
                          uVar12 = uVar17 + 1;
                          *puVar24 = puVar25;
                          puVar24[1] = puVar20;
                        }
                        uVar19 = uVar19 + 2;
                        puVar24 = puVar24 + 2;
                        puVar22 = puVar20;
                      } while (uVar21 != uVar19);
                    }
                    if ((int)uVar12 <= (int)uVar18) break;
                    uVar19 = (ulong)uVar12;
                    puVar20 = *(uint **)(puVar9 + (ulong)uVar12 * 8);
                    uVar18 = uVar12;
                    do {
                      puVar22 = *(uint **)(puVar9 + uVar19 * 8 + -8);
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar20 < *puVar22)) {
                        uVar18 = (uint)uVar19;
                        *(uint **)(puVar9 + uVar19 * 8 + -8) = puVar20;
                        *(uint **)(puVar9 + uVar19 * 8) = puVar22;
                        puVar22 = puVar20;
                      }
                      uVar19 = uVar19 - 1;
                      puVar20 = puVar22;
                    } while ((long)uVar16 < (long)uVar19);
                  } while (uVar18 != uVar12);
                }
                DAT_0534f4b4 = '\x01';
              }
              else if (DAT_0534f4b4 != '\x01') goto LAB_01c628bc;
              if ((int)DAT_0534f4b8 == 0) {
LAB_01c628bc:
                uVar12 = 0;
              }
              else {
                if ((int)DAT_0534f4b8 < 2) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  iVar10 = (int)DAT_0534f4b8 + -1;
                  do {
                    iVar13 = iVar10 + uVar12;
                    if (iVar13 < 0 != SCARRY4(iVar10,uVar12)) {
                      iVar13 = iVar13 + 1;
                    }
                    uVar18 = iVar13 >> 1;
                    if (*(uint **)(DAT_0534f4c0 + (long)(int)uVar18 * 8) == (uint *)0x0)
                    goto joined_r0x01c628e8;
                    uVar17 = **(uint **)(DAT_0534f4c0 + (long)(int)uVar18 * 8);
                    if (uVar17 == uVar26) goto joined_r0x01c628e8;
                    if (uVar17 < uVar26) {
                      uVar12 = uVar18 + 1;
                    }
                    else {
                      iVar10 = uVar18 - 1;
                    }
                  } while ((int)uVar12 < iVar10);
                }
                uVar18 = uVar12;
                if ((*(uint **)(DAT_0534f4c0 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_0534f4c0 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01c628e8:
                  if (uVar18 < 0x11) {
                    uVar12 = *(uint *)(*(long *)(DAT_0534f4c0 + (ulong)uVar18 * 8) + 4);
                    if (uVar12 < 0x11) {
                      DAT_0534f4a8 = '\x01';
                      DAT_0534f4ac = uVar26;
                      DAT_0534f4b0 = uVar12;
                      goto LAB_01c62918;
                    }
                    goto LAB_01c628bc;
                  }
                }
                uVar12 = 0;
              }
            }
LAB_01c62918:
          }
LAB_01c62920:
          puVar20 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar20 != (uint *)0x0)) && (*puVar20 != 0)) &&
             ((uVar26 = puVar20[1], uVar26 != 0 && ((ulong)(ushort)puVar20[2] != 0)))) {
            lVar27 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar20 + lVar27 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar27 != 0) {
              uVar18 = 0;
              if ((ulong)uVar26 != 0) {
                uVar18 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar26);
              }
              if (*puVar20 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 < DAT_0534f488) {
                *(short *)(DAT_0534f490 + (long)(int)uVar18 * 2) = (short)uVar12;
              }
            }
          }
          uVar26 = *puVar1;
          if (uVar26 != 0) {
            cVar11 = DAT_0534f430;
            do {
              if (cVar11 == '\0') {
                DAT_0534f434 = 0xffffffffffffffff;
                DAT_0534f43c = 0xffffffffffffffff;
                cVar11 = '\x01';
                DAT_0534f444 = 0xffffffffffffffff;
                DAT_0534f44c = 0xffffffffffffffff;
                DAT_0534f430 = '\x01';
                _DAT_0534f454 = 0xffffffffffffffff;
                DAT_0534f45c = 0xffffffffffffffff;
                DAT_0534f464 = 0xffffffffffffffff;
                DAT_0534f46c = 0xffffffffffffffff;
                uVar26 = *puVar1;
              }
              else {
                if (-1 < (long)DAT_0534f434) {
                  if ((uint *)((long)puVar1 + (ulong)DAT_0534f434._4_4_) != (uint *)0x0) {
                    uVar26 = *(uint *)((long)puVar1 + (ulong)DAT_0534f434._4_4_);
                    goto LAB_01c62a90;
                  }
                  break;
                }
                if (DAT_0534f434._4_4_ != 0xffffffff) break;
              }
              puVar20 = (uint *)(ulong)uVar26;
              uVar26 = 0;
              if ((puVar20 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar20)) goto LAB_01c62a90;
              lVar27 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar20)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar1 + (lVar27 - (long)puVar20);
              if (lVar27 == 0) break;
              uVar16 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar20));
              DAT_0534f434 = CONCAT44(0xfffffffe,(int)DAT_0534f434);
              if (uVar16 == 0) break;
              piVar15 = (int *)(lVar27 + 4);
              while (piVar15[-1] != 0x1c8d9dbc) {
                piVar15 = piVar15 + 2;
                uVar16 = uVar16 - 1;
                if (uVar16 == 0) goto LAB_01c62a8c;
              }
              iVar10 = 0;
              if (*piVar15 != -1) {
                iVar10 = *piVar15;
              }
              DAT_0534f434 = CONCAT44(iVar10,(int)DAT_0534f434);
              uVar26 = *puVar1;
              if (uVar26 == 0) break;
            } while( true );
          }
LAB_01c62a8c:
          uVar26 = 0;
LAB_01c62a90:
          if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
             (*(char *)(lVar27 + 0xb) == '\0')) {
            if ((DAT_0534f7a0 == '\x01') && (DAT_0534f7a4 == uVar26)) {
              uVar12 = DAT_0534f7a8;
              if (2 < DAT_0534f7a8) goto LAB_01c62d40;
            }
            else {
              if (((DAT_0534f7d8 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_0534f7d8), iVar10 != 0)) {
                DAT_0534f7b0 = 0x300000000;
                DAT_0534f7b8 = (undefined8 *)&DAT_0534f7c0;
                __cxa_guard_release(&DAT_0534f7d8);
              }
              if ((DAT_0534f7e0 & 1) == 0) {
                DAT_0534f7e0 = 1;
                if (((DAT_0534f800 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_0534f800), iVar10 != 0)) {
                  DAT_0534f7f4 = 0xffffffff00000000;
                  _DAT_0534f7e4 = 0xffffffff00000000;
                  DAT_0534f7ec = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534f800);
                }
                _DAT_0534f7e4 = (ulong)~uVar3;
                iVar10 = (int)DAT_0534f7b0;
                iVar13 = DAT_0534f7b0._4_4_;
                if ((int)DAT_0534f7b0 < DAT_0534f7b0._4_4_) {
                  DAT_0534f7b8[(int)DAT_0534f7b0] = &DAT_0534f7e4;
                  iVar10 = (int)DAT_0534f7b0 + 1;
                  DAT_0534f7b0 = CONCAT44(DAT_0534f7b0._4_4_,iVar10);
                  iVar13 = DAT_0534f7b0._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar7 = crc32b(uVar2,0x83,0x4c11db7);
                uVar7 = crc32b(uVar7,0xa1,0x4c11db7);
                uVar7 = crc32b(uVar7,0xe3,0x4c11db7);
                uVar7 = crc32b(uVar7,0x83,0x4c11db7);
                uVar7 = crc32b(uVar7,0xbc,0x4c11db7);
                uVar7 = crc32b(uVar7,0xe3,0x4c11db7);
                uVar7 = crc32b(uVar7,0x83,0x4c11db7);
                uVar7 = crc32b(uVar7,0x87,0x4c11db7);
                uVar7 = crc32b(uVar7,0xe3,0x4c11db7);
                uVar7 = crc32b(uVar7,0x83,0x4c11db7);
                uVar12 = crc32b(uVar7,0xbc,0x4c11db7);
                DAT_0534f7ec = CONCAT44(1,~uVar12);
                if (iVar10 < iVar13) {
                  DAT_0534f7b8[iVar10] = &DAT_0534f7ec;
                  iVar10 = (int)DAT_0534f7b0 + 1;
                  DAT_0534f7b0 = CONCAT44(DAT_0534f7b0._4_4_,iVar10);
                  iVar13 = DAT_0534f7b0._4_4_;
                }
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar2 = crc32b(uVar2,0x8b,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar2 = crc32b(uVar2,0xa3,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar2 = crc32b(uVar2,0xba,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar12 = crc32b(uVar2,0x84,0x4c11db7);
                DAT_0534f7f4 = CONCAT44(2,~uVar12);
                if (iVar10 < iVar13) {
                  DAT_0534f7b8[iVar10] = &DAT_0534f7f4;
                  iVar10 = (int)DAT_0534f7b0 + 1;
                  DAT_0534f7b0 = CONCAT44(DAT_0534f7b0._4_4_,iVar10);
                }
                puVar24 = DAT_0534f7b8;
                if (1 < iVar10) {
                  uVar18 = 0;
                  uVar12 = iVar10 - 1;
                  do {
                    if ((int)uVar12 <= (int)uVar18) break;
                    puVar20 = (uint *)puVar24[uVar18];
                    uVar16 = (ulong)uVar18;
                    if ((uVar12 - uVar18 & 1) == 0) {
                      uVar19 = uVar16;
                      puVar22 = puVar20;
                    }
                    else {
                      uVar19 = uVar16 + 1;
                      puVar22 = (uint *)puVar24[uVar19];
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar22 < *puVar20)) {
                        puVar24[uVar19] = puVar20;
                        puVar24[uVar16] = puVar22;
                        puVar22 = puVar20;
                      }
                    }
                    uVar21 = (ulong)uVar12;
                    uVar12 = uVar18;
                    if (~uVar16 + uVar21 != 0) {
                      puVar23 = puVar24 + uVar19 + 1;
                      do {
                        puVar20 = (uint *)*puVar23;
                        uVar17 = (uint)uVar19;
                        if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                           (*puVar22 <= *puVar20)) {
                          puVar25 = (uint *)puVar23[1];
                          if (puVar20 != (uint *)0x0) goto LAB_01c62ec0;
LAB_01c62e70:
                          puVar20 = puVar25;
                        }
                        else {
                          puVar23[-1] = puVar20;
                          *puVar23 = puVar22;
                          puVar25 = (uint *)puVar23[1];
                          puVar20 = puVar22;
                          uVar12 = uVar17;
                          if (puVar22 == (uint *)0x0) goto LAB_01c62e70;
LAB_01c62ec0:
                          if (puVar25 == (uint *)0x0) goto LAB_01c62e70;
                          if (*puVar20 <= *puVar25) goto LAB_01c62e70;
                          uVar12 = uVar17 + 1;
                          *puVar23 = puVar25;
                          puVar23[1] = puVar20;
                        }
                        uVar19 = uVar19 + 2;
                        puVar23 = puVar23 + 2;
                        puVar22 = puVar20;
                      } while (uVar21 != uVar19);
                    }
                    if ((int)uVar12 <= (int)uVar18) break;
                    uVar19 = (ulong)uVar12;
                    puVar20 = (uint *)puVar24[uVar12];
                    uVar18 = uVar12;
                    do {
                      puVar22 = (uint *)puVar24[uVar19 - 1];
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar20 < *puVar22)) {
                        uVar18 = (uint)uVar19;
                        puVar24[uVar19 - 1] = puVar20;
                        puVar24[uVar19] = puVar22;
                        puVar22 = puVar20;
                      }
                      uVar19 = uVar19 - 1;
                      puVar20 = puVar22;
                    } while ((long)uVar16 < (long)uVar19);
                  } while (uVar18 != uVar12);
                }
                DAT_0534f7ac = '\x01';
              }
              else if (DAT_0534f7ac != '\x01') goto LAB_01c62d40;
              if ((int)DAT_0534f7b0 == 0) {
LAB_01c62d40:
                uVar12 = 0;
              }
              else {
                if ((int)DAT_0534f7b0 < 2) {
                  uVar18 = 0;
                  puVar20 = (uint *)*DAT_0534f7b8;
                  uVar12 = uVar18;
                  if (puVar20 != (uint *)0x0) goto LAB_01c62d10;
joined_r0x01c62d24:
                  if (uVar12 < 3) {
                    uVar12 = *(uint *)(DAT_0534f7b8[uVar12] + 4);
                    if (uVar12 < 3) {
                      DAT_0534f7a0 = '\x01';
                      DAT_0534f7a4 = uVar26;
                      DAT_0534f7a8 = uVar12;
                      goto LAB_01c63254;
                    }
                    goto LAB_01c62d40;
                  }
                }
                else {
                  uVar18 = 0;
                  iVar10 = (int)DAT_0534f7b0 + -1;
                  do {
                    iVar13 = iVar10 + uVar18;
                    if (iVar13 < 0 != SCARRY4(iVar10,uVar18)) {
                      iVar13 = iVar13 + 1;
                    }
                    uVar12 = iVar13 >> 1;
                    if ((uint *)DAT_0534f7b8[(int)uVar12] == (uint *)0x0) goto joined_r0x01c62d24;
                    uVar17 = *(uint *)DAT_0534f7b8[(int)uVar12];
                    if (uVar17 == uVar26) goto joined_r0x01c62d24;
                    if (uVar17 < uVar26) {
                      uVar18 = uVar12 + 1;
                    }
                    else {
                      iVar10 = uVar12 - 1;
                    }
                  } while ((int)uVar18 < iVar10);
                  puVar20 = (uint *)DAT_0534f7b8[(int)uVar18];
                  uVar12 = uVar18;
                  if (puVar20 == (uint *)0x0) goto joined_r0x01c62d24;
LAB_01c62d10:
                  uVar12 = uVar18;
                  if (*puVar20 == uVar26) goto joined_r0x01c62d24;
                }
                uVar12 = 0;
              }
            }
          }
          else {
            if ((DAT_0534f738 == '\x01') && (DAT_0534f73c == uVar26)) {
              uVar12 = DAT_0534f740;
              if (2 < DAT_0534f740) goto LAB_01c631ec;
            }
            else {
              if (((DAT_0534f770 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_0534f770), iVar10 != 0)) {
                DAT_0534f748 = 0x300000000;
                DAT_0534f750 = &DAT_0534f758;
                __cxa_guard_release(&DAT_0534f770);
              }
              if ((DAT_0534f778 & 1) == 0) {
                DAT_0534f778 = 1;
                if (((DAT_0534f798 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_0534f798), iVar10 != 0)) {
                  DAT_0534f78c = 0xffffffff00000000;
                  _DAT_0534f77c = 0xffffffff00000000;
                  DAT_0534f784 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534f798);
                }
                _DAT_0534f77c = (ulong)~uVar4;
                iVar10 = (int)DAT_0534f748;
                iVar13 = DAT_0534f748._4_4_;
                if ((int)DAT_0534f748 < DAT_0534f748._4_4_) {
                  *(undefined4 **)(DAT_0534f750 + (long)(int)DAT_0534f748 * 8) = &DAT_0534f77c;
                  iVar10 = (int)DAT_0534f748 + 1;
                  DAT_0534f748 = CONCAT44(DAT_0534f748._4_4_,iVar10);
                  iVar13 = DAT_0534f748._4_4_;
                }
                DAT_0534f784 = CONCAT44(1,~uVar5);
                if (iVar10 < iVar13) {
                  *(undefined8 **)(DAT_0534f750 + (long)iVar10 * 8) = &DAT_0534f784;
                  iVar10 = (int)DAT_0534f748 + 1;
                  DAT_0534f748 = CONCAT44(DAT_0534f748._4_4_,iVar10);
                  iVar13 = DAT_0534f748._4_4_;
                }
                DAT_0534f78c = CONCAT44(2,~uVar6);
                if (iVar10 < iVar13) {
                  *(undefined8 **)(DAT_0534f750 + (long)iVar10 * 8) = &DAT_0534f78c;
                  iVar10 = (int)DAT_0534f748 + 1;
                  DAT_0534f748 = CONCAT44(DAT_0534f748._4_4_,iVar10);
                }
                puVar9 = DAT_0534f750;
                if (1 < iVar10) {
                  uVar18 = 0;
                  uVar12 = iVar10 - 1;
                  do {
                    if ((int)uVar12 <= (int)uVar18) break;
                    puVar20 = *(uint **)(puVar9 + (ulong)uVar18 * 8);
                    uVar16 = (ulong)uVar18;
                    if ((uVar12 - uVar18 & 1) == 0) {
                      uVar19 = uVar16;
                      puVar22 = puVar20;
                    }
                    else {
                      uVar19 = uVar16 + 1;
                      puVar22 = *(uint **)(puVar9 + uVar19 * 8);
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar22 < *puVar20)) {
                        *(uint **)(puVar9 + uVar19 * 8) = puVar20;
                        *(uint **)(puVar9 + uVar16 * 8) = puVar22;
                        puVar22 = puVar20;
                      }
                    }
                    uVar21 = (ulong)uVar12;
                    uVar12 = uVar18;
                    if (~uVar16 + uVar21 != 0) {
                      puVar24 = (undefined8 *)(puVar9 + uVar19 * 8 + 8);
                      do {
                        puVar20 = (uint *)*puVar24;
                        uVar17 = (uint)uVar19;
                        if (((puVar22 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                           (*puVar22 <= *puVar20)) {
                          puVar25 = (uint *)puVar24[1];
                          if (puVar20 != (uint *)0x0) goto LAB_01c63190;
LAB_01c63140:
                          puVar20 = puVar25;
                        }
                        else {
                          puVar24[-1] = puVar20;
                          *puVar24 = puVar22;
                          puVar25 = (uint *)puVar24[1];
                          puVar20 = puVar22;
                          uVar12 = uVar17;
                          if (puVar22 == (uint *)0x0) goto LAB_01c63140;
LAB_01c63190:
                          if (puVar25 == (uint *)0x0) goto LAB_01c63140;
                          if (*puVar20 <= *puVar25) goto LAB_01c63140;
                          uVar12 = uVar17 + 1;
                          *puVar24 = puVar25;
                          puVar24[1] = puVar20;
                        }
                        uVar19 = uVar19 + 2;
                        puVar24 = puVar24 + 2;
                        puVar22 = puVar20;
                      } while (uVar21 != uVar19);
                    }
                    if ((int)uVar12 <= (int)uVar18) break;
                    uVar19 = (ulong)uVar12;
                    puVar20 = *(uint **)(puVar9 + (ulong)uVar12 * 8);
                    uVar18 = uVar12;
                    do {
                      puVar22 = *(uint **)(puVar9 + uVar19 * 8 + -8);
                      if (((puVar20 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar20 < *puVar22)) {
                        uVar18 = (uint)uVar19;
                        *(uint **)(puVar9 + uVar19 * 8 + -8) = puVar20;
                        *(uint **)(puVar9 + uVar19 * 8) = puVar22;
                        puVar22 = puVar20;
                      }
                      uVar19 = uVar19 - 1;
                      puVar20 = puVar22;
                    } while ((long)uVar16 < (long)uVar19);
                  } while (uVar18 != uVar12);
                }
                DAT_0534f744 = '\x01';
              }
              else if (DAT_0534f744 != '\x01') goto LAB_01c631ec;
              if ((int)DAT_0534f748 == 0) {
LAB_01c631ec:
                uVar12 = 0;
              }
              else {
                if ((int)DAT_0534f748 < 2) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = 0;
                  iVar10 = (int)DAT_0534f748 + -1;
                  do {
                    iVar13 = iVar10 + uVar12;
                    if (iVar13 < 0 != SCARRY4(iVar10,uVar12)) {
                      iVar13 = iVar13 + 1;
                    }
                    uVar18 = iVar13 >> 1;
                    if (*(uint **)(DAT_0534f750 + (long)(int)uVar18 * 8) == (uint *)0x0)
                    goto joined_r0x01c6321c;
                    uVar17 = **(uint **)(DAT_0534f750 + (long)(int)uVar18 * 8);
                    if (uVar17 == uVar26) goto joined_r0x01c6321c;
                    if (uVar17 < uVar26) {
                      uVar12 = uVar18 + 1;
                    }
                    else {
                      iVar10 = uVar18 - 1;
                    }
                  } while ((int)uVar12 < iVar10);
                }
                uVar18 = uVar12;
                if ((*(uint **)(DAT_0534f750 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_0534f750 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01c6321c:
                  if (uVar18 < 3) {
                    uVar12 = *(uint *)(*(long *)(DAT_0534f750 + (ulong)uVar18 * 8) + 4);
                    if (uVar12 < 3) {
                      DAT_0534f738 = '\x01';
                      DAT_0534f73c = uVar26;
                      DAT_0534f740 = uVar12;
                      goto LAB_01c6324c;
                    }
                    goto LAB_01c631ec;
                  }
                }
                uVar12 = 0;
              }
            }
LAB_01c6324c:
          }
LAB_01c63254:
          puVar20 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar20 != (uint *)0x0)) && (*puVar20 != 0)) &&
             ((uVar26 = puVar20[1], uVar26 != 0 && ((ulong)(ushort)puVar20[2] != 0)))) {
            lVar27 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar20 + lVar27 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar27 != 0) {
              uVar18 = 0;
              if ((ulong)uVar26 != 0) {
                uVar18 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar26);
              }
              if (*puVar20 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 < DAT_0534f478) {
                *(short *)(DAT_0534f480 + (long)(int)uVar18 * 2) = (short)uVar12;
              }
            }
          }
        }
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != uVar8);
  }
  return;
}

