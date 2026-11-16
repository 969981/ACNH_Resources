
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0295bbe0(uint *param_1)

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
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  char cVar14;
  undefined2 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint *puVar30;
  uint uVar31;
  byte *pbVar32;
  long lVar33;
  uint uVar34;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar12 = *param_1, uVar12 != 0)) {
    uVar2 = crc32b(0xffffffff,0x57,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar4 = crc32b(uVar4,0x71,0x4c11db7);
    uVar5 = crc32b(uVar3,0x9d,0x4c11db7);
    uVar34 = 0;
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar4 = crc32b(uVar4,0x75,0x4c11db7);
    uVar5 = crc32b(uVar5,0x99,0x4c11db7);
    uVar6 = crc32b(uVar2,100,0x4c11db7);
    uVar2 = crc32b(uVar5,0xe6,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar4 = crc32b(uVar4,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0xad,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
    uVar7 = crc32b(uVar2,0xa2,0x4c11db7);
    uVar2 = crc32b(uVar4,0x69,0x4c11db7);
    uVar4 = crc32b(uVar5,0x69,0x4c11db7);
    uVar8 = crc32b(uVar2,99,0x4c11db7);
    uVar2 = crc32b(uVar4,99,0x4c11db7);
    uVar9 = crc32b(uVar2,0x6b,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x47,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x53,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar4 = crc32b(uVar4,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0x74,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar10 = crc32b(uVar4,0x70,0x4c11db7);
    uVar11 = crc32b(uVar2,0x70,0x4c11db7);
    do {
      if (((uVar34 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar18 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar18 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar34 + (uint)(ushort)param_1[2] * 8 + iVar18) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar14 = DAT_055d6978;
            do {
              if (cVar14 == '\0') {
                DAT_055d697c = 0xffffffffffffffff;
                DAT_055d6984 = 0xffffffffffffffff;
                cVar14 = '\x01';
                DAT_055d698c = 0xffffffffffffffff;
                DAT_055d6994 = 0xffffffffffffffff;
                DAT_055d699c = 0xffffffffffffffff;
                DAT_055d69a4 = 0xffffffff;
                uVar31 = *puVar1;
                DAT_055d6978 = '\x01';
              }
              else {
                if (-1 < (int)DAT_055d697c) {
                  puVar25 = (uint *)((long)puVar1 + (DAT_055d697c & 0xffffffff));
                  if (puVar25 != (uint *)0x0) {
                    uVar31 = *puVar25;
                    goto LAB_0295bed4;
                  }
                  break;
                }
                if ((int)DAT_055d697c != -1) break;
              }
              puVar25 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar25 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar25)) goto LAB_0295bed4;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar25)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar25);
              if (lVar33 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar25));
              DAT_055d697c._4_4_ = (uint)(DAT_055d697c >> 0x20);
              DAT_055d697c = CONCAT44(DAT_055d697c._4_4_,0xfffffffe);
              if (uVar21 == 0) break;
              piVar20 = (int *)(lVar33 + 4);
              while (piVar20[-1] != -0x4531df8) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_0295bed0;
              }
              iVar18 = 0;
              if (*piVar20 != -1) {
                iVar18 = *piVar20;
              }
              DAT_055d697c = CONCAT44(DAT_055d697c._4_4_,iVar18);
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_0295bed0:
          uVar31 = 0;
LAB_0295bed4:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_055d6a10 == '\x01') && (DAT_055d6a14 == uVar31)) {
              uVar17 = DAT_055d6a18;
              if (2 < DAT_055d6a18) goto LAB_0295c1e0;
            }
            else {
              if (((DAT_055d6a48 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d6a48), iVar18 != 0)) {
                DAT_055d6a20 = 0x300000000;
                DAT_055d6a28 = (undefined8 *)&DAT_055d6a30;
                __cxa_guard_release(&DAT_055d6a48);
              }
              if ((DAT_055d6a50 & 1) == 0) {
                DAT_055d6a50 = 1;
                if (((DAT_055d6a70 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6a70), iVar18 != 0)) {
                  _DAT_055d6a54 = 0xffffffff00000000;
                  DAT_055d6a5c = 0xffffffff00000000;
                  DAT_055d6a64 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6a70);
                }
                _DAT_055d6a54 = (ulong)~uVar7;
                iVar18 = (int)DAT_055d6a20;
                iVar16 = DAT_055d6a20._4_4_;
                if ((int)DAT_055d6a20 < DAT_055d6a20._4_4_) {
                  DAT_055d6a28[(int)DAT_055d6a20] = &DAT_055d6a54;
                  iVar18 = (int)DAT_055d6a20 + 1;
                  DAT_055d6a20 = CONCAT44(DAT_055d6a20._4_4_,iVar18);
                  iVar16 = DAT_055d6a20._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar2 = crc32b(uVar2,0x86,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar2 = crc32b(uVar2,0x89,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar2 = crc32b(uVar2,0x86,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar17 = crc32b(uVar2,0x89,0x4c11db7);
                DAT_055d6a5c = CONCAT44(1,~uVar17);
                if (iVar18 < iVar16) {
                  DAT_055d6a28[iVar18] = &DAT_055d6a5c;
                  iVar18 = (int)DAT_055d6a20 + 1;
                  DAT_055d6a20 = CONCAT44(DAT_055d6a20._4_4_,iVar18);
                  iVar16 = DAT_055d6a20._4_4_;
                }
                uVar2 = crc32b(uVar3,0xa3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x9b,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar2 = crc32b(uVar2,0xb3,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe9,0x4c11db7);
                uVar2 = crc32b(uVar2,0xa3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x9b,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar17 = crc32b(uVar2,0xb3,0x4c11db7);
                DAT_055d6a64 = CONCAT44(2,~uVar17);
                if (iVar18 < iVar16) {
                  DAT_055d6a28[iVar18] = &DAT_055d6a64;
                  iVar18 = (int)DAT_055d6a20 + 1;
                  DAT_055d6a20 = CONCAT44(DAT_055d6a20._4_4_,iVar18);
                }
                puVar29 = DAT_055d6a28;
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = (uint *)puVar29[uVar23];
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = (uint *)puVar29[uVar24];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        puVar29[uVar24] = puVar25;
                        puVar29[uVar21] = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar28 = puVar29 + uVar24 + 1;
                      do {
                        puVar25 = (uint *)*puVar28;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar28[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295c370;
LAB_0295c320:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar28[-1] = puVar25;
                          *puVar28 = puVar27;
                          puVar30 = (uint *)puVar28[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295c320;
LAB_0295c370:
                          if (puVar30 == (uint *)0x0) goto LAB_0295c320;
                          if (*puVar25 <= *puVar30) goto LAB_0295c320;
                          uVar17 = uVar22 + 1;
                          *puVar28 = puVar30;
                          puVar28[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar28 = puVar28 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = (uint *)puVar29[uVar17];
                    uVar23 = uVar17;
                    do {
                      puVar27 = (uint *)puVar29[uVar24 - 1];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        puVar29[uVar24 - 1] = puVar25;
                        puVar29[uVar24] = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d6a1c = '\x01';
              }
              else if (DAT_055d6a1c != '\x01') goto LAB_0295c1e0;
              if ((int)DAT_055d6a20 == 0) {
LAB_0295c1e0:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_055d6a20 < 2) {
                  uVar23 = 0;
                  puVar25 = (uint *)*DAT_055d6a28;
                  uVar17 = uVar23;
                  if (puVar25 != (uint *)0x0) goto LAB_0295c1b0;
joined_r0x0295c3a4:
                  if (uVar17 < 3) {
                    uVar17 = *(uint *)(DAT_055d6a28[uVar17] + 4);
                    if (uVar17 < 3) {
                      DAT_055d6a10 = '\x01';
                      DAT_055d6a14 = uVar31;
                      DAT_055d6a18 = uVar17;
                      goto LAB_0295c704;
                    }
                    goto LAB_0295c1e0;
                  }
                }
                else {
                  uVar23 = 0;
                  iVar18 = (int)DAT_055d6a20 + -1;
                  do {
                    iVar16 = iVar18 + uVar23;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar23)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar17 = iVar16 >> 1;
                    if ((uint *)DAT_055d6a28[(int)uVar17] == (uint *)0x0) goto joined_r0x0295c3a4;
                    uVar22 = *(uint *)DAT_055d6a28[(int)uVar17];
                    if (uVar22 == uVar31) goto joined_r0x0295c3a4;
                    if (uVar22 < uVar31) {
                      uVar23 = uVar17 + 1;
                    }
                    else {
                      iVar18 = uVar17 - 1;
                    }
                  } while ((int)uVar23 < iVar18);
                  puVar25 = (uint *)DAT_055d6a28[(int)uVar23];
                  uVar17 = uVar23;
                  if (puVar25 == (uint *)0x0) goto joined_r0x0295c3a4;
LAB_0295c1b0:
                  uVar17 = uVar23;
                  if (*puVar25 == uVar31) goto joined_r0x0295c3a4;
                }
                uVar17 = 0;
              }
            }
          }
          else {
            if ((DAT_055d69a8 == '\x01') && (DAT_055d69ac == uVar31)) {
              uVar17 = DAT_055d69b0;
              if (2 < DAT_055d69b0) goto LAB_0295c69c;
            }
            else {
              if (((DAT_055d69e0 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d69e0), iVar18 != 0)) {
                DAT_055d69b8 = 0x300000000;
                DAT_055d69c0 = &DAT_055d69c8;
                __cxa_guard_release(&DAT_055d69e0);
              }
              if ((DAT_055d69e8 & 1) == 0) {
                DAT_055d69e8 = 1;
                if (((DAT_055d6a08 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6a08), iVar18 != 0)) {
                  DAT_055d69fc = 0xffffffff00000000;
                  _DAT_055d69ec = 0xffffffff00000000;
                  DAT_055d69f4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6a08);
                }
                _DAT_055d69ec = (ulong)~uVar10;
                iVar18 = (int)DAT_055d69b8;
                iVar16 = DAT_055d69b8._4_4_;
                if ((int)DAT_055d69b8 < DAT_055d69b8._4_4_) {
                  *(undefined4 **)(DAT_055d69c0 + (long)(int)DAT_055d69b8 * 8) = &DAT_055d69ec;
                  iVar18 = (int)DAT_055d69b8 + 1;
                  DAT_055d69b8 = CONCAT44(DAT_055d69b8._4_4_,iVar18);
                  iVar16 = DAT_055d69b8._4_4_;
                }
                DAT_055d69f4 = CONCAT44(1,~uVar9);
                if (iVar18 < iVar16) {
                  *(undefined8 **)(DAT_055d69c0 + (long)iVar18 * 8) = &DAT_055d69f4;
                  iVar18 = (int)DAT_055d69b8 + 1;
                  DAT_055d69b8 = CONCAT44(DAT_055d69b8._4_4_,iVar18);
                  iVar16 = DAT_055d69b8._4_4_;
                }
                DAT_055d69fc = CONCAT44(2,~uVar11);
                if (iVar18 < iVar16) {
                  *(undefined8 **)(DAT_055d69c0 + (long)iVar18 * 8) = &DAT_055d69fc;
                  iVar18 = (int)DAT_055d69b8 + 1;
                  DAT_055d69b8 = CONCAT44(DAT_055d69b8._4_4_,iVar18);
                }
                puVar13 = DAT_055d69c0;
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar23 * 8);
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        *(uint **)(puVar13 + uVar24 * 8) = puVar25;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar29 = (undefined8 *)(puVar13 + uVar24 * 8 + 8);
                      do {
                        puVar25 = (uint *)*puVar29;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar29[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295c640;
LAB_0295c5f0:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar29[-1] = puVar25;
                          *puVar29 = puVar27;
                          puVar30 = (uint *)puVar29[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295c5f0;
LAB_0295c640:
                          if (puVar30 == (uint *)0x0) goto LAB_0295c5f0;
                          if (*puVar25 <= *puVar30) goto LAB_0295c5f0;
                          uVar17 = uVar22 + 1;
                          *puVar29 = puVar30;
                          puVar29[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar17 * 8);
                    uVar23 = uVar17;
                    do {
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8 + -8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        *(uint **)(puVar13 + uVar24 * 8 + -8) = puVar25;
                        *(uint **)(puVar13 + uVar24 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d69b4 = '\x01';
              }
              else if (DAT_055d69b4 != '\x01') goto LAB_0295c69c;
              if ((int)DAT_055d69b8 == 0) {
LAB_0295c69c:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_055d69b8 < 2) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  iVar18 = (int)DAT_055d69b8 + -1;
                  do {
                    iVar16 = iVar18 + uVar17;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar17)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar23 = iVar16 >> 1;
                    if (*(uint **)(DAT_055d69c0 + (long)(int)uVar23 * 8) == (uint *)0x0)
                    goto joined_r0x0295c6cc;
                    uVar22 = **(uint **)(DAT_055d69c0 + (long)(int)uVar23 * 8);
                    if (uVar22 == uVar31) goto joined_r0x0295c6cc;
                    if (uVar22 < uVar31) {
                      uVar17 = uVar23 + 1;
                    }
                    else {
                      iVar18 = uVar23 - 1;
                    }
                  } while ((int)uVar17 < iVar18);
                }
                uVar23 = uVar17;
                if ((*(uint **)(DAT_055d69c0 + (long)(int)uVar17 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055d69c0 + (long)(int)uVar17 * 8) == uVar31)) {
joined_r0x0295c6cc:
                  if (uVar23 < 3) {
                    uVar17 = *(uint *)(*(long *)(DAT_055d69c0 + (ulong)uVar23 * 8) + 4);
                    if (uVar17 < 3) {
                      DAT_055d69a8 = '\x01';
                      DAT_055d69ac = uVar31;
                      DAT_055d69b0 = uVar17;
                      goto LAB_0295c6fc;
                    }
                    goto LAB_0295c69c;
                  }
                }
                uVar17 = 0;
              }
            }
LAB_0295c6fc:
          }
LAB_0295c704:
          puVar25 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar25 != (uint *)0x0)) && (*puVar25 != 0)) &&
             ((uVar31 = puVar25[1], uVar31 != 0 && ((ulong)(ushort)puVar25[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar25 + lVar33 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar33 != 0) {
              uVar23 = 0;
              if ((ulong)uVar31 != 0) {
                uVar23 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar31);
              }
              if (*puVar25 <= uVar23) {
                uVar23 = 0xffffffff;
              }
              if (uVar23 < DAT_055d6938) {
                *(short *)(DAT_055d6940 + (long)(int)uVar23 * 2) = (short)uVar17;
              }
            }
          }
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar14 = DAT_055d6978;
            do {
              if (cVar14 == '\0') {
                DAT_055d697c = 0xffffffffffffffff;
                DAT_055d6984 = 0xffffffffffffffff;
                cVar14 = '\x01';
                DAT_055d698c = 0xffffffffffffffff;
                DAT_055d6994 = 0xffffffffffffffff;
                DAT_055d699c = 0xffffffffffffffff;
                DAT_055d69a4 = 0xffffffff;
                uVar31 = *puVar1;
                DAT_055d6978 = '\x01';
              }
              else {
                if (-1 < (long)DAT_055d697c) {
                  if ((uint *)((long)puVar1 + (ulong)DAT_055d697c._4_4_) != (uint *)0x0) {
                    uVar31 = *(uint *)((long)puVar1 + (ulong)DAT_055d697c._4_4_);
                    goto LAB_0295c884;
                  }
                  break;
                }
                if (DAT_055d697c._4_4_ != 0xffffffff) break;
              }
              puVar25 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar25 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar25)) goto LAB_0295c884;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar25)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar25);
              if (lVar33 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar25));
              DAT_055d697c = CONCAT44(0xfffffffe,(int)DAT_055d697c);
              if (uVar21 == 0) break;
              piVar20 = (int *)(lVar33 + 4);
              while (piVar20[-1] != -0x218720f1) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_0295c880;
              }
              iVar18 = 0;
              if (*piVar20 != -1) {
                iVar18 = *piVar20;
              }
              DAT_055d697c = CONCAT44(iVar18,(int)DAT_055d697c);
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_0295c880:
          uVar31 = 0;
LAB_0295c884:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_055d6ad0 == '\x01') && (DAT_055d6ad4 == uVar31)) {
              uVar17 = DAT_055d6ad8;
              if (1 < DAT_055d6ad8) goto LAB_0295cae0;
            }
            else {
              if (((DAT_055d6b00 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d6b00), iVar18 != 0)) {
                DAT_055d6ae0 = 0x200000000;
                DAT_055d6ae8 = (undefined8 *)&DAT_055d6af0;
                __cxa_guard_release(&DAT_055d6b00);
              }
              if ((DAT_055d6b08 & 1) == 0) {
                DAT_055d6b08 = 1;
                if (((DAT_055d6b20 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6b20), iVar18 != 0)) {
                  DAT_055d6b0c = 0xffffffff00000000;
                  DAT_055d6b14 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6b20);
                }
                uVar2 = crc32b(0xffffffff,0xe7,0x4c11db7);
                uVar2 = crc32b(uVar2,0x94,0x4c11db7);
                uVar2 = crc32b(uVar2,0x9f,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar2 = crc32b(uVar2,0x8d,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe7,0x4c11db7);
                uVar2 = crc32b(uVar2,0x89,0x4c11db7);
                uVar17 = crc32b(uVar2,0xa9,0x4c11db7);
                DAT_055d6b0c = (ulong)~uVar17;
                iVar18 = (int)DAT_055d6ae0;
                iVar16 = DAT_055d6ae0._4_4_;
                if ((int)DAT_055d6ae0 < DAT_055d6ae0._4_4_) {
                  DAT_055d6ae8[(int)DAT_055d6ae0] = &DAT_055d6b0c;
                  iVar18 = (int)DAT_055d6ae0 + 1;
                  DAT_055d6ae0 = CONCAT44(DAT_055d6ae0._4_4_,iVar18);
                  iVar16 = DAT_055d6ae0._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar2 = crc32b(uVar2,0xb5,0x4c11db7);
                uVar2 = crc32b(uVar2,0xb7,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe8,0x4c11db7);
                uVar2 = crc32b(uVar2,0x97,0x4c11db7);
                uVar17 = crc32b(uVar2,0xbb,0x4c11db7);
                DAT_055d6b14 = CONCAT44(1,~uVar17);
                if (iVar18 < iVar16) {
                  DAT_055d6ae8[iVar18] = &DAT_055d6b14;
                  iVar18 = (int)DAT_055d6ae0 + 1;
                  DAT_055d6ae0 = CONCAT44(DAT_055d6ae0._4_4_,iVar18);
                }
                puVar29 = DAT_055d6ae8;
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = (uint *)puVar29[uVar23];
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = (uint *)puVar29[uVar24];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        puVar29[uVar24] = puVar25;
                        puVar29[uVar21] = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar28 = puVar29 + uVar24 + 1;
                      do {
                        puVar25 = (uint *)*puVar28;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar28[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295cc60;
LAB_0295cc10:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar28[-1] = puVar25;
                          *puVar28 = puVar27;
                          puVar30 = (uint *)puVar28[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295cc10;
LAB_0295cc60:
                          if (puVar30 == (uint *)0x0) goto LAB_0295cc10;
                          if (*puVar25 <= *puVar30) goto LAB_0295cc10;
                          uVar17 = uVar22 + 1;
                          *puVar28 = puVar30;
                          puVar28[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar28 = puVar28 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = (uint *)puVar29[uVar17];
                    uVar23 = uVar17;
                    do {
                      puVar27 = (uint *)puVar29[uVar24 - 1];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        puVar29[uVar24 - 1] = puVar25;
                        puVar29[uVar24] = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d6adc = '\x01';
              }
              else if (DAT_055d6adc != '\x01') goto LAB_0295cae0;
              if ((int)DAT_055d6ae0 == 0) {
LAB_0295cae0:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_055d6ae0 < 2) {
                  uVar23 = 0;
                  puVar25 = (uint *)*DAT_055d6ae8;
                  uVar17 = uVar23;
                  if (puVar25 != (uint *)0x0) goto LAB_0295cab0;
joined_r0x0295cac4:
                  if (uVar17 < 2) {
                    uVar17 = *(uint *)(DAT_055d6ae8[uVar17] + 4);
                    if (uVar17 < 2) {
                      DAT_055d6ad0 = '\x01';
                      DAT_055d6ad4 = uVar31;
                      DAT_055d6ad8 = uVar17;
                      goto LAB_0295cfc4;
                    }
                    goto LAB_0295cae0;
                  }
                }
                else {
                  uVar23 = 0;
                  iVar18 = (int)DAT_055d6ae0 + -1;
                  do {
                    iVar16 = iVar18 + uVar23;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar23)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar17 = iVar16 >> 1;
                    if ((uint *)DAT_055d6ae8[(int)uVar17] == (uint *)0x0) goto joined_r0x0295cac4;
                    uVar22 = *(uint *)DAT_055d6ae8[(int)uVar17];
                    if (uVar22 == uVar31) goto joined_r0x0295cac4;
                    if (uVar22 < uVar31) {
                      uVar23 = uVar17 + 1;
                    }
                    else {
                      iVar18 = uVar17 - 1;
                    }
                  } while ((int)uVar23 < iVar18);
                  puVar25 = (uint *)DAT_055d6ae8[(int)uVar23];
                  uVar17 = uVar23;
                  if (puVar25 == (uint *)0x0) goto joined_r0x0295cac4;
LAB_0295cab0:
                  uVar17 = uVar23;
                  if (*puVar25 == uVar31) goto joined_r0x0295cac4;
                }
                uVar17 = 0;
              }
            }
          }
          else {
            if ((DAT_055d6a78 == '\x01') && (DAT_055d6a7c == uVar31)) {
              uVar17 = DAT_055d6a80;
              if (1 < DAT_055d6a80) goto LAB_0295cf5c;
            }
            else {
              if (((DAT_055d6aa8 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d6aa8), iVar18 != 0)) {
                DAT_055d6a88 = 0x200000000;
                DAT_055d6a90 = &DAT_055d6a98;
                __cxa_guard_release(&DAT_055d6aa8);
              }
              if ((DAT_055d6ab0 & 1) == 0) {
                DAT_055d6ab0 = 1;
                if (((DAT_055d6ac8 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6ac8), iVar18 != 0)) {
                  _DAT_055d6ab4 = 0xffffffff00000000;
                  DAT_055d6abc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6ac8);
                }
                _DAT_055d6ab4 = (ulong)~uVar8;
                iVar18 = (int)DAT_055d6a88;
                iVar16 = DAT_055d6a88._4_4_;
                if ((int)DAT_055d6a88 < DAT_055d6a88._4_4_) {
                  *(undefined4 **)(DAT_055d6a90 + (long)(int)DAT_055d6a88 * 8) = &DAT_055d6ab4;
                  iVar18 = (int)DAT_055d6a88 + 1;
                  DAT_055d6a88 = CONCAT44(DAT_055d6a88._4_4_,iVar18);
                  iVar16 = DAT_055d6a88._4_4_;
                }
                DAT_055d6abc = CONCAT44(1,~uVar6);
                if (iVar18 < iVar16) {
                  *(undefined8 **)(DAT_055d6a90 + (long)iVar18 * 8) = &DAT_055d6abc;
                  iVar18 = (int)DAT_055d6a88 + 1;
                  DAT_055d6a88 = CONCAT44(DAT_055d6a88._4_4_,iVar18);
                }
                puVar13 = DAT_055d6a90;
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar23 * 8);
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        *(uint **)(puVar13 + uVar24 * 8) = puVar25;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar29 = (undefined8 *)(puVar13 + uVar24 * 8 + 8);
                      do {
                        puVar25 = (uint *)*puVar29;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar29[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295cf00;
LAB_0295ceb0:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar29[-1] = puVar25;
                          *puVar29 = puVar27;
                          puVar30 = (uint *)puVar29[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295ceb0;
LAB_0295cf00:
                          if (puVar30 == (uint *)0x0) goto LAB_0295ceb0;
                          if (*puVar25 <= *puVar30) goto LAB_0295ceb0;
                          uVar17 = uVar22 + 1;
                          *puVar29 = puVar30;
                          puVar29[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar17 * 8);
                    uVar23 = uVar17;
                    do {
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8 + -8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        *(uint **)(puVar13 + uVar24 * 8 + -8) = puVar25;
                        *(uint **)(puVar13 + uVar24 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d6a84 = '\x01';
              }
              else if (DAT_055d6a84 != '\x01') goto LAB_0295cf5c;
              if ((int)DAT_055d6a88 == 0) {
LAB_0295cf5c:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_055d6a88 < 2) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  iVar18 = (int)DAT_055d6a88 + -1;
                  do {
                    iVar16 = iVar18 + uVar17;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar17)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar23 = iVar16 >> 1;
                    if (*(uint **)(DAT_055d6a90 + (long)(int)uVar23 * 8) == (uint *)0x0)
                    goto joined_r0x0295cf8c;
                    uVar22 = **(uint **)(DAT_055d6a90 + (long)(int)uVar23 * 8);
                    if (uVar22 == uVar31) goto joined_r0x0295cf8c;
                    if (uVar22 < uVar31) {
                      uVar17 = uVar23 + 1;
                    }
                    else {
                      iVar18 = uVar23 - 1;
                    }
                  } while ((int)uVar17 < iVar18);
                }
                uVar23 = uVar17;
                if ((*(uint **)(DAT_055d6a90 + (long)(int)uVar17 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055d6a90 + (long)(int)uVar17 * 8) == uVar31)) {
joined_r0x0295cf8c:
                  if (uVar23 < 2) {
                    uVar17 = *(uint *)(*(long *)(DAT_055d6a90 + (ulong)uVar23 * 8) + 4);
                    if (uVar17 < 2) {
                      DAT_055d6a78 = '\x01';
                      DAT_055d6a7c = uVar31;
                      DAT_055d6a80 = uVar17;
                      goto LAB_0295cfbc;
                    }
                    goto LAB_0295cf5c;
                  }
                }
                uVar17 = 0;
              }
            }
LAB_0295cfbc:
          }
LAB_0295cfc4:
          puVar25 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar25 != (uint *)0x0)) && (*puVar25 != 0)) &&
             ((uVar31 = puVar25[1], uVar31 != 0 && ((ulong)(ushort)puVar25[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar25 + lVar33 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar33 != 0) {
              uVar23 = 0;
              if ((ulong)uVar31 != 0) {
                uVar23 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar31);
              }
              if (*puVar25 <= uVar23) {
                uVar23 = 0xffffffff;
              }
              if (uVar23 < DAT_055d6948) {
                *(short *)(DAT_055d6950 + (long)(int)uVar23 * 2) = (short)uVar17;
              }
            }
          }
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar14 = DAT_055d6978;
            do {
              if (cVar14 == '\0') {
                DAT_055d697c = 0xffffffffffffffff;
                DAT_055d6984 = 0xffffffffffffffff;
                cVar14 = '\x01';
                DAT_055d698c = 0xffffffffffffffff;
                DAT_055d6994 = 0xffffffffffffffff;
                DAT_055d699c = 0xffffffffffffffff;
                DAT_055d69a4 = 0xffffffff;
                uVar31 = *puVar1;
                DAT_055d6978 = '\x01';
              }
              else {
                if (-1 < (int)DAT_055d6984) {
                  puVar25 = (uint *)((long)puVar1 + (DAT_055d6984 & 0xffffffff));
                  if (puVar25 != (uint *)0x0) {
                    uVar31 = *puVar25;
                    goto LAB_0295d154;
                  }
                  break;
                }
                if ((int)DAT_055d6984 != -1) break;
              }
              puVar25 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar25 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar25)) goto LAB_0295d154;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar25)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar25);
              if (lVar33 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar25));
              DAT_055d6984._4_4_ = (uint)(DAT_055d6984 >> 0x20);
              DAT_055d6984 = CONCAT44(DAT_055d6984._4_4_,0xfffffffe);
              if (uVar21 == 0) break;
              piVar20 = (int *)(lVar33 + 4);
              while (piVar20[-1] != -0x5014e40f) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_0295d150;
              }
              iVar18 = 0;
              if (*piVar20 != -1) {
                iVar18 = *piVar20;
              }
              DAT_055d6984 = CONCAT44(DAT_055d6984._4_4_,iVar18);
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_0295d150:
          uVar31 = 0;
LAB_0295d154:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_055d6bb0 == '\x01') && (DAT_055d6bb4 == uVar31)) {
              uVar17 = DAT_055d6bb8;
              if (4 < DAT_055d6bb8) goto LAB_0295d410;
            }
            else {
              if (((DAT_055d6bf8 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d6bf8), iVar18 != 0)) {
                DAT_055d6bc0 = 0x500000000;
                DAT_055d6bc8 = (undefined8 *)&DAT_055d6bd0;
                __cxa_guard_release(&DAT_055d6bf8);
              }
              if ((DAT_055d6c00 & 1) == 0) {
                DAT_055d6c00 = 1;
                if (((DAT_055d6c30 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6c30), iVar18 != 0)) {
                  DAT_055d6c24 = 0xffffffff00000000;
                  DAT_055d6c04 = 0xffffffff00000000;
                  DAT_055d6c0c = 0xffffffff00000000;
                  DAT_055d6c14 = 0xffffffff00000000;
                  DAT_055d6c1c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6c30);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a94f88)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar19 = 0;
                    do {
                      if (pbVar32[lVar19] == 0) {
LAB_0295d2a4:
                        iVar18 = (int)lVar19;
joined_r0x0295d2a8:
                        if (0xff < iVar18) {
                          iVar18 = 0xff;
                        }
                        goto LAB_0295d2b0;
                      }
                      if (pbVar32[lVar19 + 1] == 0) {
                        lVar19 = lVar19 + 1;
                        goto LAB_0295d2a4;
                      }
                      if (pbVar32[lVar19 + 2] == 0) {
                        iVar18 = (int)lVar19 + 2;
                        goto joined_r0x0295d2a8;
                      }
                      lVar19 = lVar19 + 3;
                    } while (lVar19 != 0x80001);
                    iVar18 = 0;
LAB_0295d2b0:
                    memcpy(local_174,pbVar32,(long)iVar18);
                    local_174[iVar18] = 0;
                  }
                  uVar17 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar23 = crc32b(uVar23,uVar17,0x4c11db7);
                      uVar17 = (uint)*pbVar32;
                    } while (uVar17 != 0);
                    uVar23 = ~uVar23;
                  }
                  *(uint *)(&DAT_055d6c04 + lVar33) = uVar23;
                  *(int *)((long)&DAT_055d6c04 + lVar33 * 8 + 4) = (int)lVar33;
                  iVar18 = (int)DAT_055d6bc0;
                  if ((int)DAT_055d6bc0 < DAT_055d6bc0._4_4_) {
                    DAT_055d6bc8[(int)DAT_055d6bc0] = &DAT_055d6c04 + lVar33;
                    iVar18 = (int)DAT_055d6bc0 + 1;
                    DAT_055d6bc0 = CONCAT44(DAT_055d6bc0._4_4_,iVar18);
                  }
                  puVar29 = DAT_055d6bc8;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 5);
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = (uint *)puVar29[uVar23];
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = (uint *)puVar29[uVar24];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        puVar29[uVar24] = puVar25;
                        puVar29[uVar21] = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar28 = puVar29 + uVar24 + 1;
                      do {
                        puVar25 = (uint *)*puVar28;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar28[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295d590;
LAB_0295d540:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar28[-1] = puVar25;
                          *puVar28 = puVar27;
                          puVar30 = (uint *)puVar28[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295d540;
LAB_0295d590:
                          if (puVar30 == (uint *)0x0) goto LAB_0295d540;
                          if (*puVar25 <= *puVar30) goto LAB_0295d540;
                          uVar17 = uVar22 + 1;
                          *puVar28 = puVar30;
                          puVar28[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar28 = puVar28 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = (uint *)puVar29[uVar17];
                    uVar23 = uVar17;
                    do {
                      puVar27 = (uint *)puVar29[uVar24 - 1];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        puVar29[uVar24 - 1] = puVar25;
                        puVar29[uVar24] = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d6bbc = '\x01';
              }
              else if (DAT_055d6bbc != '\x01') goto LAB_0295d410;
              if ((int)DAT_055d6bc0 == 0) {
LAB_0295d410:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_055d6bc0 < 2) {
                  uVar23 = 0;
                  puVar25 = (uint *)*DAT_055d6bc8;
                  uVar17 = uVar23;
                  if (puVar25 != (uint *)0x0) goto LAB_0295d3e0;
joined_r0x0295d3f4:
                  if (uVar17 < 5) {
                    uVar17 = *(uint *)(DAT_055d6bc8[uVar17] + 4);
                    if (uVar17 < 5) {
                      DAT_055d6bb0 = '\x01';
                      DAT_055d6bb4 = uVar31;
                      DAT_055d6bb8 = uVar17;
                      goto LAB_0295d9c4;
                    }
                    goto LAB_0295d410;
                  }
                }
                else {
                  uVar23 = 0;
                  iVar18 = (int)DAT_055d6bc0 + -1;
                  do {
                    iVar16 = iVar18 + uVar23;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar23)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar17 = iVar16 >> 1;
                    if ((uint *)DAT_055d6bc8[(int)uVar17] == (uint *)0x0) goto joined_r0x0295d3f4;
                    uVar22 = *(uint *)DAT_055d6bc8[(int)uVar17];
                    if (uVar22 == uVar31) goto joined_r0x0295d3f4;
                    if (uVar22 < uVar31) {
                      uVar23 = uVar17 + 1;
                    }
                    else {
                      iVar18 = uVar17 - 1;
                    }
                  } while ((int)uVar23 < iVar18);
                  puVar25 = (uint *)DAT_055d6bc8[(int)uVar23];
                  uVar17 = uVar23;
                  if (puVar25 == (uint *)0x0) goto joined_r0x0295d3f4;
LAB_0295d3e0:
                  uVar17 = uVar23;
                  if (*puVar25 == uVar31) goto joined_r0x0295d3f4;
                }
                uVar17 = 0;
              }
            }
          }
          else {
            if ((DAT_055d6b28 == '\x01') && (DAT_055d6b2c == uVar31)) {
              uVar17 = DAT_055d6b30;
              if (4 < DAT_055d6b30) goto LAB_0295d95c;
            }
            else {
              if (((DAT_055d6b70 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d6b70), iVar18 != 0)) {
                DAT_055d6b38 = 0x500000000;
                DAT_055d6b40 = &DAT_055d6b48;
                __cxa_guard_release(&DAT_055d6b70);
              }
              if ((DAT_055d6b78 & 1) == 0) {
                DAT_055d6b78 = 1;
                if (((DAT_055d6ba8 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6ba8), iVar18 != 0)) {
                  DAT_055d6b9c = 0xffffffff00000000;
                  DAT_055d6b7c = 0xffffffff00000000;
                  DAT_055d6b84 = 0xffffffff00000000;
                  DAT_055d6b8c = 0xffffffff00000000;
                  DAT_055d6b94 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6ba8);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a94f50)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar19 = 0;
                    do {
                      if (pbVar32[lVar19] == 0) {
LAB_0295d678:
                        iVar18 = (int)lVar19;
joined_r0x0295d67c:
                        if (0xff < iVar18) {
                          iVar18 = 0xff;
                        }
                        goto LAB_0295d684;
                      }
                      if (pbVar32[lVar19 + 1] == 0) {
                        lVar19 = lVar19 + 1;
                        goto LAB_0295d678;
                      }
                      if (pbVar32[lVar19 + 2] == 0) {
                        iVar18 = (int)lVar19 + 2;
                        goto joined_r0x0295d67c;
                      }
                      lVar19 = lVar19 + 3;
                    } while (lVar19 != 0x80001);
                    iVar18 = 0;
LAB_0295d684:
                    memcpy(local_174,pbVar32,(long)iVar18);
                    local_174[iVar18] = 0;
                  }
                  uVar17 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar23 = crc32b(uVar23,uVar17,0x4c11db7);
                      uVar17 = (uint)*pbVar32;
                    } while (uVar17 != 0);
                    uVar23 = ~uVar23;
                  }
                  *(uint *)(&DAT_055d6b7c + lVar33) = uVar23;
                  *(int *)((long)&DAT_055d6b7c + lVar33 * 8 + 4) = (int)lVar33;
                  iVar18 = (int)DAT_055d6b38;
                  if ((int)DAT_055d6b38 < DAT_055d6b38._4_4_) {
                    *(undefined8 **)(DAT_055d6b40 + (long)(int)DAT_055d6b38 * 8) =
                         &DAT_055d6b7c + lVar33;
                    iVar18 = (int)DAT_055d6b38 + 1;
                    DAT_055d6b38 = CONCAT44(DAT_055d6b38._4_4_,iVar18);
                  }
                  puVar13 = DAT_055d6b40;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 5);
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar23 * 8);
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        *(uint **)(puVar13 + uVar24 * 8) = puVar25;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar29 = (undefined8 *)(puVar13 + uVar24 * 8 + 8);
                      do {
                        puVar25 = (uint *)*puVar29;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar29[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295d900;
LAB_0295d8b0:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar29[-1] = puVar25;
                          *puVar29 = puVar27;
                          puVar30 = (uint *)puVar29[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295d8b0;
LAB_0295d900:
                          if (puVar30 == (uint *)0x0) goto LAB_0295d8b0;
                          if (*puVar25 <= *puVar30) goto LAB_0295d8b0;
                          uVar17 = uVar22 + 1;
                          *puVar29 = puVar30;
                          puVar29[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar17 * 8);
                    uVar23 = uVar17;
                    do {
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8 + -8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        *(uint **)(puVar13 + uVar24 * 8 + -8) = puVar25;
                        *(uint **)(puVar13 + uVar24 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d6b34 = '\x01';
              }
              else if (DAT_055d6b34 != '\x01') goto LAB_0295d95c;
              if ((int)DAT_055d6b38 == 0) {
LAB_0295d95c:
                uVar17 = 0;
              }
              else {
                if ((int)DAT_055d6b38 < 2) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  iVar18 = (int)DAT_055d6b38 + -1;
                  do {
                    iVar16 = iVar18 + uVar17;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar17)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar23 = iVar16 >> 1;
                    if (*(uint **)(DAT_055d6b40 + (long)(int)uVar23 * 8) == (uint *)0x0)
                    goto joined_r0x0295d98c;
                    uVar22 = **(uint **)(DAT_055d6b40 + (long)(int)uVar23 * 8);
                    if (uVar22 == uVar31) goto joined_r0x0295d98c;
                    if (uVar22 < uVar31) {
                      uVar17 = uVar23 + 1;
                    }
                    else {
                      iVar18 = uVar23 - 1;
                    }
                  } while ((int)uVar17 < iVar18);
                }
                uVar23 = uVar17;
                if ((*(uint **)(DAT_055d6b40 + (long)(int)uVar17 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055d6b40 + (long)(int)uVar17 * 8) == uVar31)) {
joined_r0x0295d98c:
                  if (uVar23 < 5) {
                    uVar17 = *(uint *)(*(long *)(DAT_055d6b40 + (ulong)uVar23 * 8) + 4);
                    if (uVar17 < 5) {
                      DAT_055d6b28 = '\x01';
                      DAT_055d6b2c = uVar31;
                      DAT_055d6b30 = uVar17;
                      goto LAB_0295d9bc;
                    }
                    goto LAB_0295d95c;
                  }
                }
                uVar17 = 0;
              }
            }
LAB_0295d9bc:
          }
LAB_0295d9c4:
          puVar25 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar25 != (uint *)0x0)) && (*puVar25 != 0)) &&
             ((uVar31 = puVar25[1], uVar31 != 0 && ((ulong)(ushort)puVar25[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar25 + lVar33 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar33 != 0) {
              uVar23 = 0;
              if ((ulong)uVar31 != 0) {
                uVar23 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar31);
              }
              if (*puVar25 <= uVar23) {
                uVar23 = 0xffffffff;
              }
              if (uVar23 < DAT_055d6958) {
                *(short *)(DAT_055d6960 + (long)(int)uVar23 * 2) = (short)uVar17;
              }
            }
          }
          uVar31 = *puVar1;
          if (uVar31 != 0) {
            cVar14 = DAT_055d6978;
            do {
              if (cVar14 == '\0') {
                DAT_055d697c = 0xffffffffffffffff;
                DAT_055d6984 = 0xffffffffffffffff;
                cVar14 = '\x01';
                DAT_055d698c = 0xffffffffffffffff;
                DAT_055d6994 = 0xffffffffffffffff;
                DAT_055d699c = 0xffffffffffffffff;
                DAT_055d69a4 = 0xffffffff;
                uVar31 = *puVar1;
                DAT_055d6978 = '\x01';
              }
              else {
                if (-1 < (long)DAT_055d6984) {
                  if ((uint *)((long)puVar1 + (ulong)DAT_055d6984._4_4_) != (uint *)0x0) {
                    uVar31 = *(uint *)((long)puVar1 + (ulong)DAT_055d6984._4_4_);
                    goto LAB_0295db54;
                  }
                  break;
                }
                if (DAT_055d6984._4_4_ != 0xffffffff) break;
              }
              puVar25 = (uint *)(ulong)uVar31;
              uVar31 = 0;
              if ((puVar25 == (uint *)0x0) || (uVar31 = 0, puVar1 == puVar25)) goto LAB_0295db54;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar25)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar25);
              if (lVar33 == 0) break;
              uVar21 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar25));
              DAT_055d6984 = CONCAT44(0xfffffffe,(int)DAT_055d6984);
              if (uVar21 == 0) break;
              piVar20 = (int *)(lVar33 + 4);
              while (piVar20[-1] != -0x53f141dc) {
                piVar20 = piVar20 + 2;
                uVar21 = uVar21 - 1;
                if (uVar21 == 0) goto LAB_0295db50;
              }
              iVar18 = 0;
              if (*piVar20 != -1) {
                iVar18 = *piVar20;
              }
              DAT_055d6984 = CONCAT44(iVar18,(int)DAT_055d6984);
              uVar31 = *puVar1;
              if (uVar31 == 0) break;
            } while( true );
          }
LAB_0295db50:
          uVar31 = 0;
LAB_0295db54:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_055d6cc0 == '\x01') && (DAT_055d6cc4 == uVar31)) {
              uVar17 = DAT_055d6cc8;
              if (4 < DAT_055d6cc8) goto LAB_0295de10;
            }
            else {
              if (((DAT_055d6d08 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d6d08), iVar18 != 0)) {
                DAT_055d6cd0 = 0x500000000;
                DAT_055d6cd8 = (undefined8 *)&DAT_055d6ce0;
                __cxa_guard_release(&DAT_055d6d08);
              }
              if ((DAT_055d6d10 & 1) == 0) {
                DAT_055d6d10 = 1;
                if (((DAT_055d6d40 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6d40), iVar18 != 0)) {
                  DAT_055d6d34 = 0xffffffff00000000;
                  DAT_055d6d14 = 0xffffffff00000000;
                  DAT_055d6d1c = 0xffffffff00000000;
                  DAT_055d6d24 = 0xffffffff00000000;
                  DAT_055d6d2c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6d40);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = *(byte **)(PTR_DAT_04bb4200 + lVar33 * 8 + 0x10);
                  if (local_174 != pbVar32) {
                    lVar19 = 0;
                    do {
                      if (pbVar32[lVar19] == 0) {
LAB_0295dca4:
                        iVar18 = (int)lVar19;
joined_r0x0295dca8:
                        if (0xff < iVar18) {
                          iVar18 = 0xff;
                        }
                        goto LAB_0295dcb0;
                      }
                      if (pbVar32[lVar19 + 1] == 0) {
                        lVar19 = lVar19 + 1;
                        goto LAB_0295dca4;
                      }
                      if (pbVar32[lVar19 + 2] == 0) {
                        iVar18 = (int)lVar19 + 2;
                        goto joined_r0x0295dca8;
                      }
                      lVar19 = lVar19 + 3;
                    } while (lVar19 != 0x80001);
                    iVar18 = 0;
LAB_0295dcb0:
                    memcpy(local_174,pbVar32,(long)iVar18);
                    local_174[iVar18] = 0;
                  }
                  uVar17 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar23 = crc32b(uVar23,uVar17,0x4c11db7);
                      uVar17 = (uint)*pbVar32;
                    } while (uVar17 != 0);
                    uVar23 = ~uVar23;
                  }
                  *(uint *)(&DAT_055d6d14 + lVar33) = uVar23;
                  *(int *)((long)&DAT_055d6d14 + lVar33 * 8 + 4) = (int)lVar33;
                  iVar18 = (int)DAT_055d6cd0;
                  if ((int)DAT_055d6cd0 < DAT_055d6cd0._4_4_) {
                    DAT_055d6cd8[(int)DAT_055d6cd0] = &DAT_055d6d14 + lVar33;
                    iVar18 = (int)DAT_055d6cd0 + 1;
                    DAT_055d6cd0 = CONCAT44(DAT_055d6cd0._4_4_,iVar18);
                  }
                  puVar29 = DAT_055d6cd8;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 5);
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = (uint *)puVar29[uVar23];
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = (uint *)puVar29[uVar24];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        puVar29[uVar24] = puVar25;
                        puVar29[uVar21] = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar28 = puVar29 + uVar24 + 1;
                      do {
                        puVar25 = (uint *)*puVar28;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar28[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295dfa0;
LAB_0295df50:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar28[-1] = puVar25;
                          *puVar28 = puVar27;
                          puVar30 = (uint *)puVar28[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295df50;
LAB_0295dfa0:
                          if (puVar30 == (uint *)0x0) goto LAB_0295df50;
                          if (*puVar25 <= *puVar30) goto LAB_0295df50;
                          uVar17 = uVar22 + 1;
                          *puVar28 = puVar30;
                          puVar28[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar28 = puVar28 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = (uint *)puVar29[uVar17];
                    uVar23 = uVar17;
                    do {
                      puVar27 = (uint *)puVar29[uVar24 - 1];
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        puVar29[uVar24 - 1] = puVar25;
                        puVar29[uVar24] = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d6ccc = '\x01';
              }
              else if (DAT_055d6ccc != '\x01') goto LAB_0295de10;
              if ((int)DAT_055d6cd0 != 0) {
                if ((int)DAT_055d6cd0 < 2) {
                  uVar23 = 0;
                  puVar25 = (uint *)*DAT_055d6cd8;
                  uVar17 = uVar23;
                  if (puVar25 != (uint *)0x0) goto LAB_0295dde0;
joined_r0x0295ddf4:
                  if (uVar17 < 5) {
                    uVar17 = *(uint *)(DAT_055d6cd8[uVar17] + 4);
                    if (uVar17 < 5) {
                      DAT_055d6cc0 = '\x01';
                      DAT_055d6cc4 = uVar31;
                      DAT_055d6cc8 = uVar17;
                      goto LAB_0295de14;
                    }
                    goto LAB_0295de10;
                  }
                }
                else {
                  uVar23 = 0;
                  iVar18 = (int)DAT_055d6cd0 + -1;
                  do {
                    iVar16 = iVar18 + uVar23;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar23)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar17 = iVar16 >> 1;
                    if ((uint *)DAT_055d6cd8[(int)uVar17] == (uint *)0x0) goto joined_r0x0295ddf4;
                    uVar22 = *(uint *)DAT_055d6cd8[(int)uVar17];
                    if (uVar22 == uVar31) goto joined_r0x0295ddf4;
                    if (uVar22 < uVar31) {
                      uVar23 = uVar17 + 1;
                    }
                    else {
                      iVar18 = uVar17 - 1;
                    }
                  } while ((int)uVar23 < iVar18);
                  puVar25 = (uint *)DAT_055d6cd8[(int)uVar23];
                  uVar17 = uVar23;
                  if (puVar25 == (uint *)0x0) goto joined_r0x0295ddf4;
LAB_0295dde0:
                  uVar17 = uVar23;
                  if (*puVar25 == uVar31) goto joined_r0x0295ddf4;
                }
                uVar15 = 0;
                goto LAB_0295e394;
              }
LAB_0295de10:
              uVar17 = 0;
            }
LAB_0295de14:
            uVar15 = (undefined2)uVar17;
          }
          else {
            if ((DAT_055d6c38 == '\x01') && (DAT_055d6c3c == uVar31)) {
              uVar17 = DAT_055d6c40;
              if (4 < DAT_055d6c40) goto LAB_0295e37c;
            }
            else {
              if (((DAT_055d6c80 & 1) == 0) &&
                 (iVar18 = __cxa_guard_acquire(&DAT_055d6c80), iVar18 != 0)) {
                DAT_055d6c48 = 0x500000000;
                DAT_055d6c50 = &DAT_055d6c58;
                __cxa_guard_release(&DAT_055d6c80);
              }
              if ((DAT_055d6c88 & 1) == 0) {
                DAT_055d6c88 = 1;
                if (((DAT_055d6cb8 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(&DAT_055d6cb8), iVar18 != 0)) {
                  DAT_055d6cac = 0xffffffff00000000;
                  DAT_055d6c8c = 0xffffffff00000000;
                  DAT_055d6c94 = 0xffffffff00000000;
                  DAT_055d6c9c = 0xffffffff00000000;
                  DAT_055d6ca4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055d6cb8);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a94fc0)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar19 = 0;
                    do {
                      if (pbVar32[lVar19] == 0) {
LAB_0295e098:
                        iVar18 = (int)lVar19;
joined_r0x0295e09c:
                        if (0xff < iVar18) {
                          iVar18 = 0xff;
                        }
                        goto LAB_0295e0a4;
                      }
                      if (pbVar32[lVar19 + 1] == 0) {
                        lVar19 = lVar19 + 1;
                        goto LAB_0295e098;
                      }
                      if (pbVar32[lVar19 + 2] == 0) {
                        iVar18 = (int)lVar19 + 2;
                        goto joined_r0x0295e09c;
                      }
                      lVar19 = lVar19 + 3;
                    } while (lVar19 != 0x80001);
                    iVar18 = 0;
LAB_0295e0a4:
                    memcpy(local_174,pbVar32,(long)iVar18);
                    local_174[iVar18] = 0;
                  }
                  uVar17 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar23 = crc32b(uVar23,uVar17,0x4c11db7);
                      uVar17 = (uint)*pbVar32;
                    } while (uVar17 != 0);
                    uVar23 = ~uVar23;
                  }
                  *(uint *)(&DAT_055d6c8c + lVar33) = uVar23;
                  *(int *)((long)&DAT_055d6c8c + lVar33 * 8 + 4) = (int)lVar33;
                  iVar18 = (int)DAT_055d6c48;
                  if ((int)DAT_055d6c48 < DAT_055d6c48._4_4_) {
                    *(undefined8 **)(DAT_055d6c50 + (long)(int)DAT_055d6c48 * 8) =
                         &DAT_055d6c8c + lVar33;
                    iVar18 = (int)DAT_055d6c48 + 1;
                    DAT_055d6c48 = CONCAT44(DAT_055d6c48._4_4_,iVar18);
                  }
                  puVar13 = DAT_055d6c50;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 5);
                if (1 < iVar18) {
                  uVar23 = 0;
                  uVar17 = iVar18 - 1;
                  do {
                    if ((int)uVar17 <= (int)uVar23) break;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar23 * 8);
                    uVar21 = (ulong)uVar23;
                    if ((uVar17 - uVar23 & 1) == 0) {
                      uVar24 = uVar21;
                      puVar27 = puVar25;
                    }
                    else {
                      uVar24 = uVar21 + 1;
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar27 < *puVar25)) {
                        *(uint **)(puVar13 + uVar24 * 8) = puVar25;
                        *(uint **)(puVar13 + uVar21 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                    }
                    uVar26 = (ulong)uVar17;
                    uVar17 = uVar23;
                    if (~uVar21 + uVar26 != 0) {
                      puVar29 = (undefined8 *)(puVar13 + uVar24 * 8 + 8);
                      do {
                        puVar25 = (uint *)*puVar29;
                        uVar22 = (uint)uVar24;
                        if (((puVar27 == (uint *)0x0) || (puVar25 == (uint *)0x0)) ||
                           (*puVar27 <= *puVar25)) {
                          puVar30 = (uint *)puVar29[1];
                          if (puVar25 != (uint *)0x0) goto LAB_0295e320;
LAB_0295e2d0:
                          puVar25 = puVar30;
                        }
                        else {
                          puVar29[-1] = puVar25;
                          *puVar29 = puVar27;
                          puVar30 = (uint *)puVar29[1];
                          puVar25 = puVar27;
                          uVar17 = uVar22;
                          if (puVar27 == (uint *)0x0) goto LAB_0295e2d0;
LAB_0295e320:
                          if (puVar30 == (uint *)0x0) goto LAB_0295e2d0;
                          if (*puVar25 <= *puVar30) goto LAB_0295e2d0;
                          uVar17 = uVar22 + 1;
                          *puVar29 = puVar30;
                          puVar29[1] = puVar25;
                        }
                        uVar24 = uVar24 + 2;
                        puVar29 = puVar29 + 2;
                        puVar27 = puVar25;
                      } while (uVar26 != uVar24);
                    }
                    if ((int)uVar17 <= (int)uVar23) break;
                    uVar24 = (ulong)uVar17;
                    puVar25 = *(uint **)(puVar13 + (ulong)uVar17 * 8);
                    uVar23 = uVar17;
                    do {
                      puVar27 = *(uint **)(puVar13 + uVar24 * 8 + -8);
                      if (((puVar25 != (uint *)0x0) && (puVar27 != (uint *)0x0)) &&
                         (*puVar25 < *puVar27)) {
                        uVar23 = (uint)uVar24;
                        *(uint **)(puVar13 + uVar24 * 8 + -8) = puVar25;
                        *(uint **)(puVar13 + uVar24 * 8) = puVar27;
                        puVar27 = puVar25;
                      }
                      uVar24 = uVar24 - 1;
                      puVar25 = puVar27;
                    } while ((long)uVar21 < (long)uVar24);
                  } while (uVar23 != uVar17);
                }
                DAT_055d6c44 = '\x01';
              }
              else if (DAT_055d6c44 != '\x01') goto LAB_0295e37c;
              if ((int)DAT_055d6c48 != 0) {
                if ((int)DAT_055d6c48 < 2) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = 0;
                  iVar18 = (int)DAT_055d6c48 + -1;
                  do {
                    iVar16 = iVar18 + uVar17;
                    if (iVar16 < 0 != SCARRY4(iVar18,uVar17)) {
                      iVar16 = iVar16 + 1;
                    }
                    uVar23 = iVar16 >> 1;
                    if (*(uint **)(DAT_055d6c50 + (long)(int)uVar23 * 8) == (uint *)0x0)
                    goto joined_r0x0295e444;
                    uVar22 = **(uint **)(DAT_055d6c50 + (long)(int)uVar23 * 8);
                    if (uVar22 == uVar31) goto joined_r0x0295e444;
                    if (uVar22 < uVar31) {
                      uVar17 = uVar23 + 1;
                    }
                    else {
                      iVar18 = uVar23 - 1;
                    }
                  } while ((int)uVar17 < iVar18);
                }
                uVar23 = uVar17;
                if ((*(uint **)(DAT_055d6c50 + (long)(int)uVar17 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055d6c50 + (long)(int)uVar17 * 8) == uVar31)) {
joined_r0x0295e444:
                  if (uVar23 < 5) {
                    uVar17 = *(uint *)(*(long *)(DAT_055d6c50 + (ulong)uVar23 * 8) + 4);
                    if (uVar17 < 5) {
                      DAT_055d6c38 = '\x01';
                      DAT_055d6c3c = uVar31;
                      DAT_055d6c40 = uVar17;
                      goto LAB_0295e380;
                    }
                    goto LAB_0295e37c;
                  }
                }
                uVar15 = 0;
                goto LAB_0295e394;
              }
LAB_0295e37c:
              uVar17 = 0;
            }
LAB_0295e380:
            uVar15 = (undefined2)uVar17;
          }
LAB_0295e394:
          puVar25 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar25 != (uint *)0x0)) && (*puVar25 != 0)) &&
             ((uVar31 = puVar25[1], uVar31 != 0 && ((ulong)(ushort)puVar25[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar25 + lVar33 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar33 != 0) {
              uVar17 = 0;
              if ((ulong)uVar31 != 0) {
                uVar17 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar31);
              }
              if (*puVar25 <= uVar17) {
                uVar17 = 0xffffffff;
              }
              if (uVar17 < DAT_055d6968) {
                *(undefined2 *)(DAT_055d6970 + (long)(int)uVar17 * 2) = uVar15;
              }
            }
          }
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar12);
  }
  return;
}

