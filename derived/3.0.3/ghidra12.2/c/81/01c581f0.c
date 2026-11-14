
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c581f0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  char cVar10;
  undefined2 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint *puVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  byte *pbVar30;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar8 = *param_1, uVar8 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar28 = 0;
    uVar4 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar5 = crc32b(uVar4,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar6 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb3,0x4c11db7);
    uVar7 = crc32b(uVar2,0xb6,0x4c11db7);
    do {
      if (((uVar28 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar28 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar29 = *puVar1;
          if (uVar29 == 0) {
LAB_01c58444:
            uVar29 = 0;
          }
          else {
            cVar10 = DAT_0534e328;
            do {
              if (cVar10 == '\0') {
                DAT_0534e32c = 0xffffffffffffffff;
                DAT_0534e334 = 0xffffffffffffffff;
                cVar10 = '\x01';
                DAT_0534e33c = 0xffffffffffffffff;
                DAT_0534e344 = 0xffffffffffffffff;
                DAT_0534e328 = '\x01';
                DAT_0534e34c = 0xffffffffffffffff;
                DAT_0534e354 = 0xffffffffffffffff;
                uVar29 = *puVar1;
              }
              else {
                if (-1 < (int)DAT_0534e32c) {
                  puVar21 = (uint *)((long)puVar1 + (DAT_0534e32c & 0xffffffff));
                  if (puVar21 != (uint *)0x0) {
                    uVar29 = *puVar21;
                    goto LAB_01c5844c;
                  }
                  break;
                }
                if ((int)DAT_0534e32c != -1) break;
              }
              puVar21 = (uint *)(ulong)uVar29;
              uVar29 = 0;
              if ((puVar21 == (uint *)0x0) || (uVar29 = 0, puVar1 == puVar21)) goto LAB_01c5844c;
              lVar27 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar1 + (lVar27 - (long)puVar21);
              if (lVar27 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
              DAT_0534e32c._4_4_ = (uint)(DAT_0534e32c >> 0x20);
              DAT_0534e32c = CONCAT44(DAT_0534e32c._4_4_,0xfffffffe);
              if (uVar17 == 0) break;
              piVar16 = (int *)(lVar27 + 4);
              while (piVar16[-1] != 0x303fd59e) {
                piVar16 = piVar16 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_01c58444;
              }
              iVar14 = 0;
              if (*piVar16 != -1) {
                iVar14 = *piVar16;
              }
              DAT_0534e32c = CONCAT44(DAT_0534e32c._4_4_,iVar14);
              uVar29 = *puVar1;
            } while (uVar29 != 0);
            uVar29 = 0;
          }
LAB_01c5844c:
          if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
             (*(char *)(lVar27 + 0xb) == '\0')) {
            if ((DAT_0534e3f0 == '\x01') && (DAT_0534e3f4 == uVar29)) {
              uVar13 = DAT_0534e3f8;
              if (1 < DAT_0534e3f8) goto LAB_01c5868c;
            }
            else {
              if (((DAT_0534e420 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_0534e420), iVar14 != 0)) {
                DAT_0534e400 = 0x200000000;
                DAT_0534e408 = (undefined8 *)&DAT_0534e410;
                __cxa_guard_release(&DAT_0534e420);
              }
              if ((DAT_0534e428 & 1) == 0) {
                DAT_0534e428 = 1;
                if (((DAT_0534e440 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_0534e440), iVar14 != 0)) {
                  _DAT_0534e42c = 0xffffffff00000000;
                  DAT_0534e434 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534e440);
                }
                _DAT_0534e42c = (ulong)~uVar7;
                iVar14 = (int)DAT_0534e400;
                iVar12 = DAT_0534e400._4_4_;
                if ((int)DAT_0534e400 < DAT_0534e400._4_4_) {
                  DAT_0534e408[(int)DAT_0534e400] = &DAT_0534e42c;
                  iVar14 = (int)DAT_0534e400 + 1;
                  DAT_0534e400 = CONCAT44(DAT_0534e400._4_4_,iVar14);
                  iVar12 = DAT_0534e400._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x83,0x4c11db7);
                uVar2 = crc32b(uVar2,0xac,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar2 = crc32b(uVar2,0xa2,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
                uVar2 = crc32b(uVar2,0xb3,0x4c11db7);
                uVar13 = crc32b(uVar2,0xb6,0x4c11db7);
                DAT_0534e434 = CONCAT44(1,~uVar13);
                if (iVar14 < iVar12) {
                  DAT_0534e408[iVar14] = &DAT_0534e434;
                  iVar14 = (int)DAT_0534e400 + 1;
                  DAT_0534e400 = CONCAT44(DAT_0534e400._4_4_,iVar14);
                }
                puVar25 = DAT_0534e408;
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar13 = iVar14 - 1;
                  do {
                    if ((int)uVar13 <= (int)uVar19) break;
                    puVar21 = (uint *)puVar25[uVar19];
                    uVar17 = (ulong)uVar19;
                    if ((uVar13 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = (uint *)puVar25[uVar20];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        puVar25[uVar20] = puVar21;
                        puVar25[uVar17] = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar13;
                    uVar13 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar24 = puVar25 + uVar20 + 1;
                      do {
                        puVar21 = (uint *)*puVar24;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar24[1];
                          if (puVar21 != (uint *)0x0) goto LAB_01c58810;
LAB_01c587c0:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar24[-1] = puVar21;
                          *puVar24 = puVar23;
                          puVar26 = (uint *)puVar24[1];
                          puVar21 = puVar23;
                          uVar13 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_01c587c0;
LAB_01c58810:
                          if (puVar26 == (uint *)0x0) goto LAB_01c587c0;
                          if (*puVar21 <= *puVar26) goto LAB_01c587c0;
                          uVar13 = uVar18 + 1;
                          *puVar24 = puVar26;
                          puVar24[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar24 = puVar24 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar13 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar13;
                    puVar21 = (uint *)puVar25[uVar13];
                    uVar19 = uVar13;
                    do {
                      puVar23 = (uint *)puVar25[uVar20 - 1];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        puVar25[uVar20 - 1] = puVar21;
                        puVar25[uVar20] = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar13);
                }
                DAT_0534e3fc = '\x01';
              }
              else if (DAT_0534e3fc != '\x01') goto LAB_01c5868c;
              if ((int)DAT_0534e400 == 0) {
LAB_01c5868c:
                uVar13 = 0;
              }
              else {
                if ((int)DAT_0534e400 < 2) {
                  uVar19 = 0;
                  puVar21 = (uint *)*DAT_0534e408;
                  uVar13 = uVar19;
                  if (puVar21 != (uint *)0x0) goto LAB_01c58660;
joined_r0x01c58844:
                  if (uVar13 < 2) {
                    uVar13 = *(uint *)(DAT_0534e408[uVar13] + 4);
                    if (uVar13 < 2) {
                      DAT_0534e3f0 = '\x01';
                      DAT_0534e3f4 = uVar29;
                      DAT_0534e3f8 = uVar13;
                      goto LAB_01c58b74;
                    }
                    goto LAB_01c5868c;
                  }
                }
                else {
                  uVar19 = 0;
                  iVar14 = (int)DAT_0534e400 + -1;
                  do {
                    iVar12 = iVar14 + uVar19;
                    if (iVar12 < 0 != SCARRY4(iVar14,uVar19)) {
                      iVar12 = iVar12 + 1;
                    }
                    uVar13 = iVar12 >> 1;
                    if ((uint *)DAT_0534e408[(int)uVar13] == (uint *)0x0) goto joined_r0x01c58844;
                    uVar18 = *(uint *)DAT_0534e408[(int)uVar13];
                    if (uVar18 == uVar29) goto joined_r0x01c58844;
                    if (uVar18 < uVar29) {
                      uVar19 = uVar13 + 1;
                    }
                    else {
                      iVar14 = uVar13 - 1;
                    }
                  } while ((int)uVar19 < iVar14);
                  puVar21 = (uint *)DAT_0534e408[(int)uVar19];
                  uVar13 = uVar19;
                  if (puVar21 == (uint *)0x0) goto joined_r0x01c58844;
LAB_01c58660:
                  uVar13 = uVar19;
                  if (*puVar21 == uVar29) goto joined_r0x01c58844;
                }
                uVar13 = 0;
              }
            }
          }
          else {
            if ((DAT_0534e398 == '\x01') && (DAT_0534e39c == uVar29)) {
              uVar13 = DAT_0534e3a0;
              if (1 < DAT_0534e3a0) goto LAB_01c58af8;
            }
            else {
              if (((DAT_0534e3c8 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_0534e3c8), iVar14 != 0)) {
                DAT_0534e3a8 = 0x200000000;
                DAT_0534e3b0 = &DAT_0534e3b8;
                __cxa_guard_release(&DAT_0534e3c8);
              }
              if ((DAT_0534e3d0 & 1) == 0) {
                DAT_0534e3d0 = 1;
                if (((DAT_0534e3e8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_0534e3e8), iVar14 != 0)) {
                  _DAT_0534e3d4 = 0xffffffff00000000;
                  DAT_0534e3dc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534e3e8);
                }
                _DAT_0534e3d4 = (ulong)~uVar6;
                iVar14 = (int)DAT_0534e3a8;
                iVar12 = DAT_0534e3a8._4_4_;
                if ((int)DAT_0534e3a8 < DAT_0534e3a8._4_4_) {
                  *(undefined4 **)(DAT_0534e3b0 + (long)(int)DAT_0534e3a8 * 8) = &DAT_0534e3d4;
                  iVar14 = (int)DAT_0534e3a8 + 1;
                  DAT_0534e3a8 = CONCAT44(DAT_0534e3a8._4_4_,iVar14);
                  iVar12 = DAT_0534e3a8._4_4_;
                }
                DAT_0534e3dc = CONCAT44(1,~uVar5);
                if (iVar14 < iVar12) {
                  *(undefined8 **)(DAT_0534e3b0 + (long)iVar14 * 8) = &DAT_0534e3dc;
                  iVar14 = (int)DAT_0534e3a8 + 1;
                  DAT_0534e3a8 = CONCAT44(DAT_0534e3a8._4_4_,iVar14);
                }
                puVar9 = DAT_0534e3b0;
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar13 = iVar14 - 1;
                  do {
                    if ((int)uVar13 <= (int)uVar19) break;
                    puVar21 = *(uint **)(puVar9 + (ulong)uVar19 * 8);
                    uVar17 = (ulong)uVar19;
                    if ((uVar13 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = *(uint **)(puVar9 + uVar20 * 8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        *(uint **)(puVar9 + uVar20 * 8) = puVar21;
                        *(uint **)(puVar9 + uVar17 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar13;
                    uVar13 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar25 = (undefined8 *)(puVar9 + uVar20 * 8 + 8);
                      do {
                        puVar21 = (uint *)*puVar25;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar25[1];
                          if (puVar21 != (uint *)0x0) goto LAB_01c58aa0;
LAB_01c58a50:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar25[-1] = puVar21;
                          *puVar25 = puVar23;
                          puVar26 = (uint *)puVar25[1];
                          puVar21 = puVar23;
                          uVar13 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_01c58a50;
LAB_01c58aa0:
                          if (puVar26 == (uint *)0x0) goto LAB_01c58a50;
                          if (*puVar21 <= *puVar26) goto LAB_01c58a50;
                          uVar13 = uVar18 + 1;
                          *puVar25 = puVar26;
                          puVar25[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar25 = puVar25 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar13 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar13;
                    puVar21 = *(uint **)(puVar9 + (ulong)uVar13 * 8);
                    uVar19 = uVar13;
                    do {
                      puVar23 = *(uint **)(puVar9 + uVar20 * 8 + -8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        *(uint **)(puVar9 + uVar20 * 8 + -8) = puVar21;
                        *(uint **)(puVar9 + uVar20 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar13);
                }
                DAT_0534e3a4 = '\x01';
              }
              else if (DAT_0534e3a4 != '\x01') goto LAB_01c58af8;
              if ((int)DAT_0534e3a8 == 0) {
LAB_01c58af8:
                uVar13 = 0;
              }
              else {
                if ((int)DAT_0534e3a8 < 2) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = 0;
                  iVar14 = (int)DAT_0534e3a8 + -1;
                  do {
                    iVar12 = iVar14 + uVar13;
                    if (iVar12 < 0 != SCARRY4(iVar14,uVar13)) {
                      iVar12 = iVar12 + 1;
                    }
                    uVar19 = iVar12 >> 1;
                    if (*(uint **)(DAT_0534e3b0 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x01c58b40;
                    uVar18 = **(uint **)(DAT_0534e3b0 + (long)(int)uVar19 * 8);
                    if (uVar18 == uVar29) goto joined_r0x01c58b40;
                    if (uVar18 < uVar29) {
                      uVar13 = uVar19 + 1;
                    }
                    else {
                      iVar14 = uVar19 - 1;
                    }
                  } while ((int)uVar13 < iVar14);
                }
                uVar19 = uVar13;
                if ((*(uint **)(DAT_0534e3b0 + (long)(int)uVar13 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_0534e3b0 + (long)(int)uVar13 * 8) == uVar29)) {
joined_r0x01c58b40:
                  if (uVar19 < 2) {
                    uVar13 = *(uint *)(*(long *)(DAT_0534e3b0 + (ulong)uVar19 * 8) + 4);
                    if (uVar13 < 2) {
                      DAT_0534e398 = '\x01';
                      DAT_0534e39c = uVar29;
                      DAT_0534e3a0 = uVar13;
                      goto LAB_01c58b6c;
                    }
                    goto LAB_01c58af8;
                  }
                }
                uVar13 = 0;
              }
            }
LAB_01c58b6c:
          }
LAB_01c58b74:
          puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar21 != (uint *)0x0)) && (*puVar21 != 0)) &&
             ((uVar29 = puVar21[1], uVar29 != 0 && ((ulong)(ushort)puVar21[2] != 0)))) {
            lVar27 = 0xc;
            if (*(char *)((long)puVar21 + 10) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar21 + lVar27 + (ulong)(ushort)puVar21[2] * 8;
            if (lVar27 != 0) {
              uVar19 = 0;
              if ((ulong)uVar29 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar29);
              }
              if (*puVar21 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < DAT_0534e360) {
                *(short *)(DAT_0534e368 + (long)(int)uVar19 * 2) = (short)uVar13;
              }
            }
          }
          uVar29 = *puVar1;
          if (uVar29 != 0) {
            cVar10 = DAT_0534e328;
            do {
              if (cVar10 == '\0') {
                DAT_0534e32c = 0xffffffffffffffff;
                DAT_0534e334 = 0xffffffffffffffff;
                cVar10 = '\x01';
                DAT_0534e33c = 0xffffffffffffffff;
                DAT_0534e344 = 0xffffffffffffffff;
                DAT_0534e328 = '\x01';
                DAT_0534e34c = 0xffffffffffffffff;
                DAT_0534e354 = 0xffffffffffffffff;
                uVar29 = *puVar1;
              }
              else {
                if (-1 < (long)DAT_0534e32c) {
                  if ((uint *)((long)puVar1 + (ulong)DAT_0534e32c._4_4_) != (uint *)0x0) {
                    uVar29 = *(uint *)((long)puVar1 + (ulong)DAT_0534e32c._4_4_);
                    goto LAB_01c58ce0;
                  }
                  break;
                }
                if (DAT_0534e32c._4_4_ != 0xffffffff) break;
              }
              puVar21 = (uint *)(ulong)uVar29;
              uVar29 = 0;
              if ((puVar21 == (uint *)0x0) || (uVar29 = 0, puVar1 == puVar21)) goto LAB_01c58ce0;
              lVar27 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                lVar27 = 0x1c;
              }
              lVar27 = (long)puVar1 + (lVar27 - (long)puVar21);
              if (lVar27 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
              DAT_0534e32c = CONCAT44(0xfffffffe,(int)DAT_0534e32c);
              if (uVar17 == 0) break;
              piVar16 = (int *)(lVar27 + 4);
              while (piVar16[-1] != -0x5fc5a6d1) {
                piVar16 = piVar16 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_01c58cdc;
              }
              iVar14 = 0;
              if (*piVar16 != -1) {
                iVar14 = *piVar16;
              }
              DAT_0534e32c = CONCAT44(iVar14,(int)DAT_0534e32c);
              uVar29 = *puVar1;
              if (uVar29 == 0) break;
            } while( true );
          }
LAB_01c58cdc:
          uVar29 = 0;
LAB_01c58ce0:
          if (((*puVar1 == 0) || (lVar27 = (long)puVar1 - (ulong)*puVar1, lVar27 == 0)) ||
             (*(char *)(lVar27 + 0xb) == '\0')) {
            if ((DAT_0534e530 == '\x01') && (DAT_0534e534 == uVar29)) {
              uVar13 = DAT_0534e538;
              if (10 < DAT_0534e538) goto LAB_01c58f70;
            }
            else {
              if (((DAT_0534e5a8 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_0534e5a8), iVar14 != 0)) {
                DAT_0534e540 = 0xb00000000;
                DAT_0534e548 = (undefined8 *)&DAT_0534e550;
                __cxa_guard_release(&DAT_0534e5a8);
              }
              if ((DAT_0534e5b0 & 1) == 0) {
                DAT_0534e5b0 = 1;
                if (((DAT_0534e610 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_0534e610), iVar14 != 0)) {
                  DAT_0534e604 = 0xffffffff00000000;
                  DAT_0534e5b4 = 0xffffffff00000000;
                  DAT_0534e5bc = 0xffffffff00000000;
                  DAT_0534e5c4 = 0xffffffff00000000;
                  DAT_0534e5cc = 0xffffffff00000000;
                  DAT_0534e5d4 = 0xffffffff00000000;
                  DAT_0534e5dc = 0xffffffff00000000;
                  DAT_0534e5e4 = 0xffffffff00000000;
                  DAT_0534e5ec = 0xffffffff00000000;
                  DAT_0534e5f4 = 0xffffffff00000000;
                  DAT_0534e5fc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534e610);
                }
                lVar27 = 0;
                do {
                  local_75 = 0;
                  pbVar30 = (&PTR_DAT_04a41ff0)[lVar27];
                  if (local_174 != pbVar30) {
                    lVar15 = 0;
                    do {
                      if (pbVar30[lVar15] == 0) {
LAB_01c58e24:
                        iVar14 = (int)lVar15;
joined_r0x01c58e28:
                        if (0xff < iVar14) {
                          iVar14 = 0xff;
                        }
                        goto LAB_01c58e30;
                      }
                      if (pbVar30[lVar15 + 1] == 0) {
                        lVar15 = lVar15 + 1;
                        goto LAB_01c58e24;
                      }
                      if (pbVar30[lVar15 + 2] == 0) {
                        iVar14 = (int)lVar15 + 2;
                        goto joined_r0x01c58e28;
                      }
                      lVar15 = lVar15 + 3;
                    } while (lVar15 != 0x80001);
                    iVar14 = 0;
LAB_01c58e30:
                    memcpy(local_174,pbVar30,(long)iVar14);
                    local_174[iVar14] = 0;
                  }
                  uVar13 = (uint)*pbVar30;
                  if (*pbVar30 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = 0xffffffff;
                    do {
                      pbVar30 = pbVar30 + 1;
                      uVar19 = crc32b(uVar19,uVar13,0x4c11db7);
                      uVar13 = (uint)*pbVar30;
                    } while (uVar13 != 0);
                    uVar19 = ~uVar19;
                  }
                  *(uint *)(&DAT_0534e5b4 + lVar27) = uVar19;
                  *(int *)((long)&DAT_0534e5b4 + lVar27 * 8 + 4) = (int)lVar27;
                  iVar14 = (int)DAT_0534e540;
                  if ((int)DAT_0534e540 < DAT_0534e540._4_4_) {
                    DAT_0534e548[(int)DAT_0534e540] = &DAT_0534e5b4 + lVar27;
                    iVar14 = (int)DAT_0534e540 + 1;
                    DAT_0534e540 = CONCAT44(DAT_0534e540._4_4_,iVar14);
                  }
                  puVar25 = DAT_0534e548;
                  lVar27 = lVar27 + 1;
                } while (lVar27 != 0xb);
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar13 = iVar14 - 1;
                  do {
                    if ((int)uVar13 <= (int)uVar19) break;
                    puVar21 = (uint *)puVar25[uVar19];
                    uVar17 = (ulong)uVar19;
                    if ((uVar13 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = (uint *)puVar25[uVar20];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        puVar25[uVar20] = puVar21;
                        puVar25[uVar17] = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar13;
                    uVar13 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar24 = puVar25 + uVar20 + 1;
                      do {
                        puVar21 = (uint *)*puVar24;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar24[1];
                          if (puVar21 != (uint *)0x0) goto LAB_01c590f0;
LAB_01c590a0:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar24[-1] = puVar21;
                          *puVar24 = puVar23;
                          puVar26 = (uint *)puVar24[1];
                          puVar21 = puVar23;
                          uVar13 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_01c590a0;
LAB_01c590f0:
                          if (puVar26 == (uint *)0x0) goto LAB_01c590a0;
                          if (*puVar21 <= *puVar26) goto LAB_01c590a0;
                          uVar13 = uVar18 + 1;
                          *puVar24 = puVar26;
                          puVar24[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar24 = puVar24 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar13 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar13;
                    puVar21 = (uint *)puVar25[uVar13];
                    uVar19 = uVar13;
                    do {
                      puVar23 = (uint *)puVar25[uVar20 - 1];
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        puVar25[uVar20 - 1] = puVar21;
                        puVar25[uVar20] = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar13);
                }
                DAT_0534e53c = '\x01';
              }
              else if (DAT_0534e53c != '\x01') goto LAB_01c58f70;
              if ((int)DAT_0534e540 != 0) {
                if ((int)DAT_0534e540 < 2) {
                  uVar19 = 0;
                  puVar21 = (uint *)*DAT_0534e548;
                  uVar13 = uVar19;
                  if (puVar21 != (uint *)0x0) goto LAB_01c58f44;
joined_r0x01c58f58:
                  if (uVar13 < 0xb) {
                    uVar13 = *(uint *)(DAT_0534e548[uVar13] + 4);
                    if (uVar13 < 0xb) {
                      DAT_0534e530 = '\x01';
                      DAT_0534e534 = uVar29;
                      DAT_0534e538 = uVar13;
                      goto LAB_01c58f74;
                    }
                    goto LAB_01c58f70;
                  }
                }
                else {
                  uVar19 = 0;
                  iVar14 = (int)DAT_0534e540 + -1;
                  do {
                    iVar12 = iVar14 + uVar19;
                    if (iVar12 < 0 != SCARRY4(iVar14,uVar19)) {
                      iVar12 = iVar12 + 1;
                    }
                    uVar13 = iVar12 >> 1;
                    if ((uint *)DAT_0534e548[(int)uVar13] == (uint *)0x0) goto joined_r0x01c58f58;
                    uVar18 = *(uint *)DAT_0534e548[(int)uVar13];
                    if (uVar18 == uVar29) goto joined_r0x01c58f58;
                    if (uVar18 < uVar29) {
                      uVar19 = uVar13 + 1;
                    }
                    else {
                      iVar14 = uVar13 - 1;
                    }
                  } while ((int)uVar19 < iVar14);
                  puVar21 = (uint *)DAT_0534e548[(int)uVar19];
                  uVar13 = uVar19;
                  if (puVar21 == (uint *)0x0) goto joined_r0x01c58f58;
LAB_01c58f44:
                  uVar13 = uVar19;
                  if (*puVar21 == uVar29) goto joined_r0x01c58f58;
                }
                uVar11 = 0;
                goto LAB_01c594c8;
              }
LAB_01c58f70:
              uVar13 = 0;
            }
LAB_01c58f74:
            uVar11 = (undefined2)uVar13;
          }
          else {
            if ((DAT_0534e448 == '\x01') && (DAT_0534e44c == uVar29)) {
              uVar13 = DAT_0534e450;
              if (10 < DAT_0534e450) goto LAB_01c594b8;
            }
            else {
              if (((DAT_0534e4c0 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_0534e4c0), iVar14 != 0)) {
                DAT_0534e458 = 0xb00000000;
                DAT_0534e460 = &DAT_0534e468;
                __cxa_guard_release(&DAT_0534e4c0);
              }
              if ((DAT_0534e4c8 & 1) == 0) {
                DAT_0534e4c8 = 1;
                if (((DAT_0534e528 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_0534e528), iVar14 != 0)) {
                  DAT_0534e51c = 0xffffffff00000000;
                  DAT_0534e4cc = 0xffffffff00000000;
                  DAT_0534e4d4 = 0xffffffff00000000;
                  DAT_0534e4dc = 0xffffffff00000000;
                  DAT_0534e4e4 = 0xffffffff00000000;
                  DAT_0534e4ec = 0xffffffff00000000;
                  DAT_0534e4f4 = 0xffffffff00000000;
                  DAT_0534e4fc = 0xffffffff00000000;
                  DAT_0534e504 = 0xffffffff00000000;
                  DAT_0534e50c = 0xffffffff00000000;
                  DAT_0534e514 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534e528);
                }
                lVar27 = 0;
                do {
                  local_75 = 0;
                  pbVar30 = (&PTR_DAT_04a41ee0)[lVar27];
                  if (local_174 != pbVar30) {
                    lVar15 = 0;
                    do {
                      if (pbVar30[lVar15] == 0) {
LAB_01c591d8:
                        iVar14 = (int)lVar15;
joined_r0x01c591dc:
                        if (0xff < iVar14) {
                          iVar14 = 0xff;
                        }
                        goto LAB_01c591e4;
                      }
                      if (pbVar30[lVar15 + 1] == 0) {
                        lVar15 = lVar15 + 1;
                        goto LAB_01c591d8;
                      }
                      if (pbVar30[lVar15 + 2] == 0) {
                        iVar14 = (int)lVar15 + 2;
                        goto joined_r0x01c591dc;
                      }
                      lVar15 = lVar15 + 3;
                    } while (lVar15 != 0x80001);
                    iVar14 = 0;
LAB_01c591e4:
                    memcpy(local_174,pbVar30,(long)iVar14);
                    local_174[iVar14] = 0;
                  }
                  uVar13 = (uint)*pbVar30;
                  if (*pbVar30 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = 0xffffffff;
                    do {
                      pbVar30 = pbVar30 + 1;
                      uVar19 = crc32b(uVar19,uVar13,0x4c11db7);
                      uVar13 = (uint)*pbVar30;
                    } while (uVar13 != 0);
                    uVar19 = ~uVar19;
                  }
                  *(uint *)(&DAT_0534e4cc + lVar27) = uVar19;
                  *(int *)((long)&DAT_0534e4cc + lVar27 * 8 + 4) = (int)lVar27;
                  iVar14 = (int)DAT_0534e458;
                  if ((int)DAT_0534e458 < DAT_0534e458._4_4_) {
                    *(undefined8 **)(DAT_0534e460 + (long)(int)DAT_0534e458 * 8) =
                         &DAT_0534e4cc + lVar27;
                    iVar14 = (int)DAT_0534e458 + 1;
                    DAT_0534e458 = CONCAT44(DAT_0534e458._4_4_,iVar14);
                  }
                  puVar9 = DAT_0534e460;
                  lVar27 = lVar27 + 1;
                } while (lVar27 != 0xb);
                if (1 < iVar14) {
                  uVar19 = 0;
                  uVar13 = iVar14 - 1;
                  do {
                    if ((int)uVar13 <= (int)uVar19) break;
                    puVar21 = *(uint **)(puVar9 + (ulong)uVar19 * 8);
                    uVar17 = (ulong)uVar19;
                    if ((uVar13 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar23 = puVar21;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar23 = *(uint **)(puVar9 + uVar20 * 8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar23 < *puVar21)) {
                        *(uint **)(puVar9 + uVar20 * 8) = puVar21;
                        *(uint **)(puVar9 + uVar17 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                    }
                    uVar22 = (ulong)uVar13;
                    uVar13 = uVar19;
                    if (~uVar17 + uVar22 != 0) {
                      puVar25 = (undefined8 *)(puVar9 + uVar20 * 8 + 8);
                      do {
                        puVar21 = (uint *)*puVar25;
                        uVar18 = (uint)uVar20;
                        if (((puVar23 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar23 <= *puVar21)) {
                          puVar26 = (uint *)puVar25[1];
                          if (puVar21 != (uint *)0x0) goto LAB_01c59460;
LAB_01c59410:
                          puVar21 = puVar26;
                        }
                        else {
                          puVar25[-1] = puVar21;
                          *puVar25 = puVar23;
                          puVar26 = (uint *)puVar25[1];
                          puVar21 = puVar23;
                          uVar13 = uVar18;
                          if (puVar23 == (uint *)0x0) goto LAB_01c59410;
LAB_01c59460:
                          if (puVar26 == (uint *)0x0) goto LAB_01c59410;
                          if (*puVar21 <= *puVar26) goto LAB_01c59410;
                          uVar13 = uVar18 + 1;
                          *puVar25 = puVar26;
                          puVar25[1] = puVar21;
                        }
                        uVar20 = uVar20 + 2;
                        puVar25 = puVar25 + 2;
                        puVar23 = puVar21;
                      } while (uVar22 != uVar20);
                    }
                    if ((int)uVar13 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar13;
                    puVar21 = *(uint **)(puVar9 + (ulong)uVar13 * 8);
                    uVar19 = uVar13;
                    do {
                      puVar23 = *(uint **)(puVar9 + uVar20 * 8 + -8);
                      if (((puVar21 != (uint *)0x0) && (puVar23 != (uint *)0x0)) &&
                         (*puVar21 < *puVar23)) {
                        uVar19 = (uint)uVar20;
                        *(uint **)(puVar9 + uVar20 * 8 + -8) = puVar21;
                        *(uint **)(puVar9 + uVar20 * 8) = puVar23;
                        puVar23 = puVar21;
                      }
                      uVar20 = uVar20 - 1;
                      puVar21 = puVar23;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar13);
                }
                DAT_0534e454 = '\x01';
              }
              else if (DAT_0534e454 != '\x01') goto LAB_01c594b8;
              if ((int)DAT_0534e458 != 0) {
                if ((int)DAT_0534e458 < 2) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = 0;
                  iVar14 = (int)DAT_0534e458 + -1;
                  do {
                    iVar12 = iVar14 + uVar13;
                    if (iVar12 < 0 != SCARRY4(iVar14,uVar13)) {
                      iVar12 = iVar12 + 1;
                    }
                    uVar19 = iVar12 >> 1;
                    if (*(uint **)(DAT_0534e460 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto joined_r0x01c5956c;
                    uVar18 = **(uint **)(DAT_0534e460 + (long)(int)uVar19 * 8);
                    if (uVar18 == uVar29) goto joined_r0x01c5956c;
                    if (uVar18 < uVar29) {
                      uVar13 = uVar19 + 1;
                    }
                    else {
                      iVar14 = uVar19 - 1;
                    }
                  } while ((int)uVar13 < iVar14);
                }
                uVar19 = uVar13;
                if ((*(uint **)(DAT_0534e460 + (long)(int)uVar13 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_0534e460 + (long)(int)uVar13 * 8) == uVar29)) {
joined_r0x01c5956c:
                  if (uVar19 < 0xb) {
                    uVar13 = *(uint *)(*(long *)(DAT_0534e460 + (ulong)uVar19 * 8) + 4);
                    if (uVar13 < 0xb) {
                      DAT_0534e448 = '\x01';
                      DAT_0534e44c = uVar29;
                      DAT_0534e450 = uVar13;
                      goto LAB_01c594bc;
                    }
                    goto LAB_01c594b8;
                  }
                }
                uVar11 = 0;
                goto LAB_01c594c8;
              }
LAB_01c594b8:
              uVar13 = 0;
            }
LAB_01c594bc:
            uVar11 = (undefined2)uVar13;
          }
LAB_01c594c8:
          puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar21 != (uint *)0x0)) && (*puVar21 != 0)) &&
             ((uVar29 = puVar21[1], uVar29 != 0 && ((ulong)(ushort)puVar21[2] != 0)))) {
            lVar27 = 0xc;
            if (*(char *)((long)puVar21 + 10) != '\0') {
              lVar27 = 0x1c;
            }
            lVar27 = (long)puVar21 + lVar27 + (ulong)(ushort)puVar21[2] * 8;
            if (lVar27 != 0) {
              uVar13 = 0;
              if ((ulong)uVar29 != 0) {
                uVar13 = (uint)((ulong)((long)puVar1 - lVar27) / (ulong)uVar29);
              }
              if (*puVar21 <= uVar13) {
                uVar13 = 0xffffffff;
              }
              if (uVar13 < DAT_0534e370) {
                *(undefined2 *)(DAT_0534e378 + (long)(int)uVar13 * 2) = uVar11;
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

