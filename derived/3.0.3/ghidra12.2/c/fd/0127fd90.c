
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0127fd90(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  ulong uVar23;
  char *pcVar24;
  char cVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int *piVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  
  puVar17 = PTR_DAT_04bbbe68;
  if ((param_1 != (uint *)0x0) && (uVar15 = *param_1, uVar15 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar4 = crc32b(uVar3,0x69,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x42,0x4c11db7);
    uVar5 = crc32b(uVar5,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,0x67,0x4c11db7);
    uVar6 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x31,0x4c11db7);
    uVar6 = crc32b(uVar6,0x61,0x4c11db7);
    uVar4 = crc32b(uVar4,0x68,0x4c11db7);
    uVar5 = crc32b(uVar5,0x61,0x4c11db7);
    uVar6 = crc32b(uVar6,0x6b,0x4c11db7);
    uVar4 = crc32b(uVar4,0x74,0x4c11db7);
    uVar8 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar34 = 0;
    uVar9 = crc32b(uVar6,0x65,0x4c11db7);
    uVar4 = crc32b(uVar4,0x54,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x53,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar10 = crc32b(uVar4,0x74,0x4c11db7);
    uVar4 = crc32b(uVar7,0x78,0x4c11db7);
    uVar11 = crc32b(uVar5,0x6b,0x4c11db7);
    uVar5 = crc32b(uVar2,0xa4,0x4c11db7);
    uVar6 = crc32b(uVar8,0x6f,0x4c11db7);
    uVar5 = crc32b(uVar5,0x89,0x4c11db7);
    uVar12 = crc32b(uVar4,0x31,0x4c11db7);
    uVar4 = crc32b(uVar5,0xe6,0x4c11db7);
    uVar4 = crc32b(uVar4,0x9b,0x4c11db7);
    uVar4 = crc32b(uVar4,0xb4,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
    uVar4 = crc32b(uVar4,0xaa,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
    uVar13 = crc32b(uVar4,0x97,0x4c11db7);
    uVar4 = crc32b(uVar6,0x6e,0x4c11db7);
    uVar14 = crc32b(uVar4,0x65,0x4c11db7);
    pcVar24 = PTR_DAT_04bbbe60;
    do {
      if (((uVar34 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar19 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar19 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar34 + (uint)(ushort)param_1[2] * 8 + iVar19) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)puVar17;
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_012800d0;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_012800d0;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)puVar17 = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != 0x59485fad) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_012800cc;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)puVar17 = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_012800cc:
          uVar35 = 0;
LAB_012800d0:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05160bd8 == '\x01') && (DAT_05160bdc == uVar35)) {
              uVar26 = DAT_05160be0;
              if (1 < DAT_05160be0) goto LAB_01280488;
            }
            else {
              if ((DAT_05160c08 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160c08);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160be8 = 0x200000000;
                  DAT_05160bf0 = (undefined8 *)&DAT_05160bf8;
                  __cxa_guard_release(&DAT_05160c08);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160c10 & 1) == 0) {
                DAT_05160c10 = 1;
                if (((DAT_05160c28 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160c28), iVar19 != 0)) {
                  _DAT_05160c14 = 0xffffffff00000000;
                  DAT_05160c1c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160c28);
                }
                _DAT_05160c14 = (ulong)~uVar12;
                iVar19 = (int)DAT_05160be8;
                iVar27 = DAT_05160be8._4_4_;
                if ((int)DAT_05160be8 < DAT_05160be8._4_4_) {
                  DAT_05160bf0[(int)DAT_05160be8] = &DAT_05160c14;
                  iVar19 = (int)DAT_05160be8 + 1;
                  DAT_05160be8 = CONCAT44(DAT_05160be8._4_4_,iVar19);
                  iVar27 = DAT_05160be8._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0x33,0x4c11db7);
                uVar4 = crc32b(uVar4,0x78,0x4c11db7);
                uVar26 = crc32b(uVar4,0x33,0x4c11db7);
                DAT_05160c1c = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160bf0[iVar19] = &DAT_05160c1c;
                  iVar19 = (int)DAT_05160be8 + 1;
                  DAT_05160be8 = CONCAT44(DAT_05160be8._4_4_,iVar19);
                }
                puVar33 = DAT_05160bf0;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      puVar20 = puVar36;
                      uVar31 = uVar23;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01280440;
LAB_012803f0:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_012803f0;
LAB_01280440:
                          if (puVar21 == (uint *)0x0) goto LAB_012803f0;
                          if (*puVar36 <= *puVar21) goto LAB_012803f0;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160be4 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05160be4 != '\x01') goto LAB_01280488;
              if ((int)DAT_05160be8 == 0) goto LAB_01280488;
              if ((int)DAT_05160be8 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05160bf0;
                if (puVar36 != (uint *)0x0) goto LAB_012802b0;
LAB_0128046c:
                uVar28 = uVar26;
                if (uVar26 < 2) {
LAB_01280478:
                  uVar26 = *(uint *)(DAT_05160bf0[uVar28] + 4);
                  if (uVar26 < 2) {
                    DAT_05160bd8 = '\x01';
                    DAT_05160bdc = uVar35;
                    DAT_05160be0 = uVar26;
                    goto LAB_01280794;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05160be8 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05160bf0[(int)uVar28] == (uint *)0x0) goto LAB_012802c0;
                  uVar22 = *(uint *)DAT_05160bf0[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_012802c0;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05160bf0[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_0128046c;
LAB_012802b0:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_012802c0:
                  if (1 < uVar28) goto LAB_01280488;
                  goto LAB_01280478;
                }
              }
LAB_01280488:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05160b80 == '\x01') && (DAT_05160b84 == uVar35)) {
              uVar26 = DAT_05160b88;
              if (1 < DAT_05160b88) {
LAB_01280788:
                uVar26 = 0;
              }
            }
            else {
              if ((DAT_05160bb0 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160bb0);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160b90 = 0x200000000;
                  DAT_05160b98 = &DAT_05160ba0;
                  __cxa_guard_release(&DAT_05160bb0);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160bb8 & 1) == 0) {
                DAT_05160bb8 = 1;
                if (((DAT_05160bd0 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160bd0), iVar19 != 0)) {
                  _DAT_05160bbc = 0xffffffff00000000;
                  DAT_05160bc4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160bd0);
                }
                _DAT_05160bbc = (ulong)~uVar12;
                iVar19 = (int)DAT_05160b90;
                iVar27 = DAT_05160b90._4_4_;
                if ((int)DAT_05160b90 < DAT_05160b90._4_4_) {
                  *(undefined4 **)(DAT_05160b98 + (long)(int)DAT_05160b90 * 8) = &DAT_05160bbc;
                  iVar19 = (int)DAT_05160b90 + 1;
                  DAT_05160b90 = CONCAT44(DAT_05160b90._4_4_,iVar19);
                  iVar27 = DAT_05160b90._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0x33,0x4c11db7);
                uVar4 = crc32b(uVar4,0x78,0x4c11db7);
                uVar26 = crc32b(uVar4,0x33,0x4c11db7);
                DAT_05160bc4 = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160b98 + (long)iVar19 * 8) = &DAT_05160bc4;
                  iVar19 = (int)DAT_05160b90 + 1;
                  DAT_05160b90 = CONCAT44(DAT_05160b90._4_4_,iVar19);
                }
                puVar18 = DAT_05160b98;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01280730;
LAB_012806e0:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_012806e0;
LAB_01280730:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_012806e0;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160b8c = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
LAB_01280554:
                if ((int)DAT_05160b90 != 0) {
                  uVar26 = 0;
                  if (1 < (int)DAT_05160b90) {
                    iVar19 = (int)DAT_05160b90 + -1;
                    do {
                      iVar27 = iVar19 + uVar26;
                      if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                        iVar27 = iVar27 + 1;
                      }
                      uVar28 = iVar27 >> 1;
                      if (*(uint **)(DAT_05160b98 + (long)(int)uVar28 * 8) == (uint *)0x0)
                      goto joined_r0x01280774;
                      uVar22 = **(uint **)(DAT_05160b98 + (long)(int)uVar28 * 8);
                      if (uVar22 == uVar35) goto joined_r0x01280774;
                      if (uVar22 < uVar35) {
                        uVar26 = uVar28 + 1;
                      }
                      else {
                        iVar19 = uVar28 - 1;
                      }
                    } while ((int)uVar26 < iVar19);
                  }
                  uVar28 = uVar26;
                  if ((*(uint **)(DAT_05160b98 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_05160b98 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x01280774:
                    if ((uVar28 < 2) &&
                       (uVar26 = *(uint *)(*(long *)(DAT_05160b98 + (ulong)uVar28 * 8) + 4),
                       uVar26 < 2)) {
                      DAT_05160b80 = '\x01';
                      DAT_05160b84 = uVar35;
                      DAT_05160b88 = uVar26;
                      goto LAB_0128078c;
                    }
                  }
                  goto LAB_01280788;
                }
              }
              else if (DAT_05160b8c == '\x01') goto LAB_01280554;
              uVar26 = 0;
            }
LAB_0128078c:
          }
LAB_01280794:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbe70) {
                *(short *)(*(long *)(PTR_DAT_04bbbe70 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar17 + 4);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_012808e0;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_012808e0;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)(puVar17 + 4) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != 0x75fee4b0) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_012808dc;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)(puVar17 + 4) = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_012808dc:
          uVar35 = 0;
LAB_012808e0:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05160c98 == '\x01') && (DAT_05160c9c == uVar35)) {
              uVar26 = DAT_05160ca0;
              if (2 < DAT_05160ca0) goto LAB_01280db8;
            }
            else {
              if ((DAT_05160cd0 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160cd0);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160ca8 = 0x300000000;
                  DAT_05160cb0 = (undefined8 *)&DAT_05160cb8;
                  __cxa_guard_release(&DAT_05160cd0);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160cd8 & 1) == 0) {
                DAT_05160cd8 = 1;
                if (((DAT_05160cf8 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160cf8), iVar19 != 0)) {
                  DAT_05160cec = 0xffffffff00000000;
                  _DAT_05160cdc = 0xffffffff00000000;
                  DAT_05160ce4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160cf8);
                }
                _DAT_05160cdc = (ulong)~uVar13;
                iVar19 = (int)DAT_05160ca8;
                iVar27 = DAT_05160ca8._4_4_;
                if ((int)DAT_05160ca8 < DAT_05160ca8._4_4_) {
                  DAT_05160cb0[(int)DAT_05160ca8] = &DAT_05160cdc;
                  iVar19 = (int)DAT_05160ca8 + 1;
                  DAT_05160ca8 = CONCAT44(DAT_05160ca8._4_4_,iVar19);
                  iVar27 = DAT_05160ca8._4_4_;
                }
                uVar4 = crc32b(uVar2,0xb4,0x4c11db7);
                uVar4 = crc32b(uVar4,0x96,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xac,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0x99,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xab,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0x8a,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa0,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe7,0x4c11db7);
                uVar4 = crc32b(uVar4,0xae,0x4c11db7);
                uVar26 = crc32b(uVar4,0x97,0x4c11db7);
                DAT_05160ce4 = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160cb0[iVar19] = &DAT_05160ce4;
                  iVar19 = (int)DAT_05160ca8 + 1;
                  DAT_05160ca8 = CONCAT44(DAT_05160ca8._4_4_,iVar19);
                  iVar27 = DAT_05160ca8._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9c,0x4c11db7);
                uVar4 = crc32b(uVar4,0x80,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe7,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb5,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb1,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa5,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
                uVar4 = crc32b(uVar4,0xad,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb4,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0x89,0x4c11db7);
                uVar4 = crc32b(uVar4,0x8a,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe9,0x4c11db7);
                uVar4 = crc32b(uVar4,0x99,0x4c11db7);
                uVar26 = crc32b(uVar4,0xa4,0x4c11db7);
                DAT_05160cec = CONCAT44(2,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160cb0[iVar19] = &DAT_05160cec;
                  iVar19 = (int)DAT_05160ca8 + 1;
                  DAT_05160ca8 = CONCAT44(DAT_05160ca8._4_4_,iVar19);
                }
                puVar33 = DAT_05160cb0;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01280d70;
LAB_01280d20:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01280d20;
LAB_01280d70:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01280d20;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160ca4 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05160ca4 != '\x01') goto LAB_01280db8;
              if ((int)DAT_05160ca8 == 0) goto LAB_01280db8;
              if ((int)DAT_05160ca8 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05160cb0;
                if (puVar36 != (uint *)0x0) goto LAB_01280be0;
LAB_01280d9c:
                uVar28 = uVar26;
                if (uVar26 < 3) {
LAB_01280da8:
                  uVar26 = *(uint *)(DAT_05160cb0[uVar28] + 4);
                  if (uVar26 < 3) {
                    DAT_05160c98 = '\x01';
                    DAT_05160c9c = uVar35;
                    DAT_05160ca0 = uVar26;
                    goto LAB_012811c4;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05160ca8 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05160cb0[(int)uVar28] == (uint *)0x0) goto LAB_01280bf0;
                  uVar22 = *(uint *)DAT_05160cb0[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_01280bf0;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05160cb0[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_01280d9c;
LAB_01280be0:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_01280bf0:
                  if (2 < uVar28) goto LAB_01280db8;
                  goto LAB_01280da8;
                }
              }
LAB_01280db8:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05160c30 == '\x01') && (DAT_05160c34 == uVar35)) {
              uVar26 = DAT_05160c38;
              if (2 < DAT_05160c38) {
LAB_012811b8:
                uVar26 = 0;
              }
            }
            else {
              if ((DAT_05160c68 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160c68);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160c40 = 0x300000000;
                  DAT_05160c48 = &DAT_05160c50;
                  __cxa_guard_release(&DAT_05160c68);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160c70 & 1) == 0) {
                DAT_05160c70 = 1;
                if (((DAT_05160c90 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160c90), iVar19 != 0)) {
                  DAT_05160c84 = 0xffffffff00000000;
                  DAT_05160c74 = 0xffffffff00000000;
                  DAT_05160c7c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160c90);
                }
                uVar4 = crc32b(uVar6,0x43,0x4c11db7);
                uVar4 = crc32b(uVar4,0x68,0x4c11db7);
                uVar4 = crc32b(uVar4,0x61,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x67,0x4c11db7);
                uVar26 = crc32b(uVar4,0x65,0x4c11db7);
                DAT_05160c74 = (ulong)~uVar26;
                iVar19 = (int)DAT_05160c40;
                iVar27 = DAT_05160c40._4_4_;
                if ((int)DAT_05160c40 < DAT_05160c40._4_4_) {
                  *(ulong **)(DAT_05160c48 + (long)(int)DAT_05160c40 * 8) = &DAT_05160c74;
                  iVar19 = (int)DAT_05160c40 + 1;
                  DAT_05160c40 = CONCAT44(DAT_05160c40._4_4_,iVar19);
                  iVar27 = DAT_05160c40._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0x41,0x4c11db7);
                uVar4 = crc32b(uVar4,100,0x4c11db7);
                uVar4 = crc32b(uVar4,100,0x4c11db7);
                uVar4 = crc32b(uVar4,0x43,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
                uVar4 = crc32b(uVar4,0x69,0x4c11db7);
                uVar4 = crc32b(uVar4,0x66,0x4c11db7);
                uVar4 = crc32b(uVar4,0x66,0x4c11db7);
                uVar4 = crc32b(uVar4,0x4c,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar4 = crc32b(uVar4,0x76,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar26 = crc32b(uVar4,0x6c,0x4c11db7);
                DAT_05160c7c = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160c48 + (long)iVar19 * 8) = &DAT_05160c7c;
                  iVar19 = (int)DAT_05160c40 + 1;
                  DAT_05160c40 = CONCAT44(DAT_05160c40._4_4_,iVar19);
                  iVar27 = DAT_05160c40._4_4_;
                }
                uVar4 = crc32b(uVar3,0x65,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar4 = crc32b(uVar4,0x76,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar4 = crc32b(uVar4,0x48,0x4c11db7);
                uVar4 = crc32b(uVar4,0x69,0x4c11db7);
                uVar4 = crc32b(uVar4,0x73,0x4c11db7);
                uVar4 = crc32b(uVar4,0x74,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar4 = crc32b(uVar4,0x72,0x4c11db7);
                uVar26 = crc32b(uVar4,0x79,0x4c11db7);
                DAT_05160c84 = CONCAT44(2,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160c48 + (long)iVar19 * 8) = &DAT_05160c84;
                  iVar19 = (int)DAT_05160c40 + 1;
                  DAT_05160c40 = CONCAT44(DAT_05160c40._4_4_,iVar19);
                }
                puVar18 = DAT_05160c48;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01281160;
LAB_01281110:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01281110;
LAB_01281160:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01281110;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160c3c = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
LAB_01280f84:
                if ((int)DAT_05160c40 != 0) {
                  uVar26 = 0;
                  if (1 < (int)DAT_05160c40) {
                    iVar19 = (int)DAT_05160c40 + -1;
                    do {
                      iVar27 = iVar19 + uVar26;
                      if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                        iVar27 = iVar27 + 1;
                      }
                      uVar28 = iVar27 >> 1;
                      if (*(uint **)(DAT_05160c48 + (long)(int)uVar28 * 8) == (uint *)0x0)
                      goto joined_r0x012811a4;
                      uVar22 = **(uint **)(DAT_05160c48 + (long)(int)uVar28 * 8);
                      if (uVar22 == uVar35) goto joined_r0x012811a4;
                      if (uVar22 < uVar35) {
                        uVar26 = uVar28 + 1;
                      }
                      else {
                        iVar19 = uVar28 - 1;
                      }
                    } while ((int)uVar26 < iVar19);
                  }
                  uVar28 = uVar26;
                  if ((*(uint **)(DAT_05160c48 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_05160c48 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x012811a4:
                    if ((uVar28 < 3) &&
                       (uVar26 = *(uint *)(*(long *)(DAT_05160c48 + (ulong)uVar28 * 8) + 4),
                       uVar26 < 3)) {
                      DAT_05160c30 = '\x01';
                      DAT_05160c34 = uVar35;
                      DAT_05160c38 = uVar26;
                      goto LAB_012811bc;
                    }
                  }
                  goto LAB_012811b8;
                }
              }
              else if (DAT_05160c3c == '\x01') goto LAB_01280f84;
              uVar26 = 0;
            }
LAB_012811bc:
          }
LAB_012811c4:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbe78) {
                *(short *)(*(long *)(PTR_DAT_04bbbe78 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar17 + 8);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01281310;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_01281310;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)(puVar17 + 8) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != 0xbcf172f) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_0128130c;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)(puVar17 + 8) = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_0128130c:
          uVar35 = 0;
LAB_01281310:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05160d58 == '\x01') && (DAT_05160d5c == uVar35)) {
              uVar26 = DAT_05160d60;
              if (1 < DAT_05160d60) goto LAB_012817a8;
            }
            else {
              if ((DAT_05160d88 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160d88);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160d68 = 0x200000000;
                  DAT_05160d70 = (undefined8 *)&DAT_05160d78;
                  __cxa_guard_release(&DAT_05160d88);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160d90 & 1) == 0) {
                DAT_05160d90 = 1;
                if (((DAT_05160da8 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160da8), iVar19 != 0)) {
                  DAT_05160d94 = 0xffffffff00000000;
                  DAT_05160d9c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160da8);
                }
                uVar4 = crc32b(0xffffffff,0xe7,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9b,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb4,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe8,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa7,0x4c11db7);
                uVar4 = crc32b(uVar4,0x92,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0x2d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x3e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
                uVar4 = crc32b(uVar4,0x96,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9c,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar26 = crc32b(uVar4,0x81,0x4c11db7);
                DAT_05160d94 = (ulong)~uVar26;
                iVar19 = (int)DAT_05160d68;
                iVar27 = DAT_05160d68._4_4_;
                if ((int)DAT_05160d68 < DAT_05160d68._4_4_) {
                  DAT_05160d70[(int)DAT_05160d68] = &DAT_05160d94;
                  iVar19 = (int)DAT_05160d68 + 1;
                  DAT_05160d68 = CONCAT44(DAT_05160d68._4_4_,iVar19);
                  iVar27 = DAT_05160d68._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar4 = crc32b(uVar4,0x96,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9c,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0x2d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x3e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe7,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9b,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb4,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe8,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa7,0x4c11db7);
                uVar26 = crc32b(uVar4,0x92,0x4c11db7);
                DAT_05160d9c = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160d70[iVar19] = &DAT_05160d9c;
                  iVar19 = (int)DAT_05160d68 + 1;
                  DAT_05160d68 = CONCAT44(DAT_05160d68._4_4_,iVar19);
                }
                puVar33 = DAT_05160d70;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01281760;
LAB_01281710:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01281710;
LAB_01281760:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01281710;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160d64 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05160d64 != '\x01') goto LAB_012817a8;
              if ((int)DAT_05160d68 == 0) goto LAB_012817a8;
              if ((int)DAT_05160d68 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05160d70;
                if (puVar36 != (uint *)0x0) goto LAB_012815d0;
LAB_0128178c:
                uVar28 = uVar26;
                if (uVar26 < 2) {
LAB_01281798:
                  uVar26 = *(uint *)(DAT_05160d70[uVar28] + 4);
                  if (uVar26 < 2) {
                    DAT_05160d58 = '\x01';
                    DAT_05160d5c = uVar35;
                    DAT_05160d60 = uVar26;
                    goto LAB_01281af4;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05160d68 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05160d70[(int)uVar28] == (uint *)0x0) goto LAB_012815e0;
                  uVar22 = *(uint *)DAT_05160d70[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_012815e0;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05160d70[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_0128178c;
LAB_012815d0:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_012815e0:
                  if (1 < uVar28) goto LAB_012817a8;
                  goto LAB_01281798;
                }
              }
LAB_012817a8:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05160d00 == '\x01') && (DAT_05160d04 == uVar35)) {
              uVar26 = DAT_05160d08;
              if (1 < DAT_05160d08) {
LAB_01281ae8:
                uVar26 = 0;
              }
            }
            else {
              if ((DAT_05160d30 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160d30);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160d10 = 0x200000000;
                  DAT_05160d18 = &DAT_05160d20;
                  __cxa_guard_release(&DAT_05160d30);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160d38 & 1) == 0) {
                DAT_05160d38 = 1;
                if (((DAT_05160d50 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160d50), iVar19 != 0)) {
                  _DAT_05160d3c = 0xffffffff00000000;
                  DAT_05160d44 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160d50);
                }
                _DAT_05160d3c = (ulong)~uVar10;
                iVar19 = (int)DAT_05160d10;
                iVar27 = DAT_05160d10._4_4_;
                if ((int)DAT_05160d10 < DAT_05160d10._4_4_) {
                  *(undefined4 **)(DAT_05160d18 + (long)(int)DAT_05160d10 * 8) = &DAT_05160d3c;
                  iVar19 = (int)DAT_05160d10 + 1;
                  DAT_05160d10 = CONCAT44(DAT_05160d10._4_4_,iVar19);
                  iVar27 = DAT_05160d10._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0x53,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
                uVar4 = crc32b(uVar4,0x61,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x74,0x4c11db7);
                uVar4 = crc32b(uVar4,0x54,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar4 = crc32b(uVar4,0x52,0x4c11db7);
                uVar4 = crc32b(uVar4,0x69,0x4c11db7);
                uVar4 = crc32b(uVar4,0x67,0x4c11db7);
                uVar4 = crc32b(uVar4,0x68,0x4c11db7);
                uVar26 = crc32b(uVar4,0x74,0x4c11db7);
                DAT_05160d44 = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160d18 + (long)iVar19 * 8) = &DAT_05160d44;
                  iVar19 = (int)DAT_05160d10 + 1;
                  DAT_05160d10 = CONCAT44(DAT_05160d10._4_4_,iVar19);
                }
                puVar18 = DAT_05160d18;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01281a90;
LAB_01281a40:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01281a40;
LAB_01281a90:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01281a40;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160d0c = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
LAB_012818b8:
                if ((int)DAT_05160d10 != 0) {
                  uVar26 = 0;
                  if (1 < (int)DAT_05160d10) {
                    iVar19 = (int)DAT_05160d10 + -1;
                    do {
                      iVar27 = iVar19 + uVar26;
                      if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                        iVar27 = iVar27 + 1;
                      }
                      uVar28 = iVar27 >> 1;
                      if (*(uint **)(DAT_05160d18 + (long)(int)uVar28 * 8) == (uint *)0x0)
                      goto joined_r0x01281ad4;
                      uVar22 = **(uint **)(DAT_05160d18 + (long)(int)uVar28 * 8);
                      if (uVar22 == uVar35) goto joined_r0x01281ad4;
                      if (uVar22 < uVar35) {
                        uVar26 = uVar28 + 1;
                      }
                      else {
                        iVar19 = uVar28 - 1;
                      }
                    } while ((int)uVar26 < iVar19);
                  }
                  uVar28 = uVar26;
                  if ((*(uint **)(DAT_05160d18 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_05160d18 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x01281ad4:
                    if ((uVar28 < 2) &&
                       (uVar26 = *(uint *)(*(long *)(DAT_05160d18 + (ulong)uVar28 * 8) + 4),
                       uVar26 < 2)) {
                      DAT_05160d00 = '\x01';
                      DAT_05160d04 = uVar35;
                      DAT_05160d08 = uVar26;
                      goto LAB_01281aec;
                    }
                  }
                  goto LAB_01281ae8;
                }
              }
              else if (DAT_05160d0c == '\x01') goto LAB_012818b8;
              uVar26 = 0;
            }
LAB_01281aec:
          }
LAB_01281af4:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbe80) {
                *(short *)(*(long *)(PTR_DAT_04bbbe80 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar17 + 0xc);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01281c40;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_01281c40;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)(puVar17 + 0xc) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != 0x281f90a8) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_01281c3c;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)(puVar17 + 0xc) = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_01281c3c:
          uVar35 = 0;
LAB_01281c40:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05160e18 == '\x01') && (DAT_05160e1c == uVar35)) {
              uVar26 = DAT_05160e20;
              if (2 < DAT_05160e20) goto LAB_012820d8;
            }
            else {
              if ((DAT_05160e50 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160e50);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160e28 = 0x300000000;
                  DAT_05160e30 = (undefined8 *)&DAT_05160e38;
                  __cxa_guard_release(&DAT_05160e50);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160e58 & 1) == 0) {
                DAT_05160e58 = 1;
                if (((DAT_05160e78 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160e78), iVar19 != 0)) {
                  DAT_05160e6c = 0xffffffff00000000;
                  _DAT_05160e5c = 0xffffffff00000000;
                  DAT_05160e64 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160e78);
                }
                uVar4 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                uVar4 = crc32b(uVar4,0xaa,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                uVar26 = crc32b(uVar4,0x97,0x4c11db7);
                _DAT_05160e5c = (ulong)~uVar26;
                iVar19 = (int)DAT_05160e28;
                iVar27 = DAT_05160e28._4_4_;
                if ((int)DAT_05160e28 < DAT_05160e28._4_4_) {
                  DAT_05160e30[(int)DAT_05160e28] = &DAT_05160e5c;
                  iVar19 = (int)DAT_05160e28 + 1;
                  DAT_05160e28 = CONCAT44(DAT_05160e28._4_4_,iVar19);
                  iVar27 = DAT_05160e28._4_4_;
                }
                uVar4 = crc32b(uVar2,0xb4,0x4c11db7);
                uVar4 = crc32b(uVar4,0x96,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0x2d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x3e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
                uVar4 = crc32b(uVar4,0xbb,0x4c11db7);
                uVar26 = crc32b(uVar4,0x9d,0x4c11db7);
                DAT_05160e64 = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160e30[iVar19] = &DAT_05160e64;
                  iVar19 = (int)DAT_05160e28 + 1;
                  DAT_05160e28 = CONCAT44(DAT_05160e28._4_4_,iVar19);
                  iVar27 = DAT_05160e28._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar4 = crc32b(uVar4,0xbb,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0x2d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x3e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb4,0x4c11db7);
                uVar26 = crc32b(uVar4,0x96,0x4c11db7);
                DAT_05160e6c = CONCAT44(2,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160e30[iVar19] = &DAT_05160e6c;
                  iVar19 = (int)DAT_05160e28 + 1;
                  DAT_05160e28 = CONCAT44(DAT_05160e28._4_4_,iVar19);
                }
                puVar33 = DAT_05160e30;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01282090;
LAB_01282040:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01282040;
LAB_01282090:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01282040;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160e24 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05160e24 != '\x01') goto LAB_012820d8;
              if ((int)DAT_05160e28 == 0) goto LAB_012820d8;
              if ((int)DAT_05160e28 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05160e30;
                if (puVar36 != (uint *)0x0) goto LAB_01281f00;
LAB_012820bc:
                uVar28 = uVar26;
                if (uVar26 < 3) {
LAB_012820c8:
                  uVar26 = *(uint *)(DAT_05160e30[uVar28] + 4);
                  if (uVar26 < 3) {
                    DAT_05160e18 = '\x01';
                    DAT_05160e1c = uVar35;
                    DAT_05160e20 = uVar26;
                    goto LAB_01282434;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05160e28 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05160e30[(int)uVar28] == (uint *)0x0) goto LAB_01281f10;
                  uVar22 = *(uint *)DAT_05160e30[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_01281f10;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05160e30[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_012820bc;
LAB_01281f00:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_01281f10:
                  if (2 < uVar28) goto LAB_012820d8;
                  goto LAB_012820c8;
                }
              }
LAB_012820d8:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05160db0 == '\x01') && (DAT_05160db4 == uVar35)) {
              uVar26 = DAT_05160db8;
              if (2 < DAT_05160db8) {
LAB_01282428:
                uVar26 = 0;
              }
            }
            else {
              if ((DAT_05160de8 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160de8);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160dc0 = 0x300000000;
                  DAT_05160dc8 = &DAT_05160dd0;
                  __cxa_guard_release(&DAT_05160de8);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160df0 & 1) == 0) {
                DAT_05160df0 = 1;
                if (((DAT_05160e10 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160e10), iVar19 != 0)) {
                  DAT_05160e04 = 0xffffffff00000000;
                  _DAT_05160df4 = 0xffffffff00000000;
                  DAT_05160dfc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160e10);
                }
                _DAT_05160df4 = (ulong)~uVar14;
                iVar19 = (int)DAT_05160dc0;
                iVar27 = DAT_05160dc0._4_4_;
                if ((int)DAT_05160dc0 < DAT_05160dc0._4_4_) {
                  *(undefined4 **)(DAT_05160dc8 + (long)(int)DAT_05160dc0 * 8) = &DAT_05160df4;
                  iVar19 = (int)DAT_05160dc0 + 1;
                  DAT_05160dc0 = CONCAT44(DAT_05160dc0._4_4_,iVar19);
                  iVar27 = DAT_05160dc0._4_4_;
                }
                uVar4 = crc32b(uVar9,0x46,0x4c11db7);
                uVar4 = crc32b(uVar4,0x61,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
                uVar26 = crc32b(uVar4,0x6c,0x4c11db7);
                DAT_05160dfc = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160dc8 + (long)iVar19 * 8) = &DAT_05160dfc;
                  iVar19 = (int)DAT_05160dc0 + 1;
                  DAT_05160dc0 = CONCAT44(DAT_05160dc0._4_4_,iVar19);
                  iVar27 = DAT_05160dc0._4_4_;
                }
                uVar4 = crc32b(uVar11,0x46,0x4c11db7);
                uVar4 = crc32b(uVar4,0x61,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
                uVar26 = crc32b(uVar4,0x6c,0x4c11db7);
                DAT_05160e04 = CONCAT44(2,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160dc8 + (long)iVar19 * 8) = &DAT_05160e04;
                  iVar19 = (int)DAT_05160dc0 + 1;
                  DAT_05160dc0 = CONCAT44(DAT_05160dc0._4_4_,iVar19);
                }
                puVar18 = DAT_05160dc8;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_012823d0;
LAB_01282380:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01282380;
LAB_012823d0:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01282380;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160dbc = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
LAB_012821fc:
                if ((int)DAT_05160dc0 != 0) {
                  uVar26 = 0;
                  if (1 < (int)DAT_05160dc0) {
                    iVar19 = (int)DAT_05160dc0 + -1;
                    do {
                      iVar27 = iVar19 + uVar26;
                      if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                        iVar27 = iVar27 + 1;
                      }
                      uVar28 = iVar27 >> 1;
                      if (*(uint **)(DAT_05160dc8 + (long)(int)uVar28 * 8) == (uint *)0x0)
                      goto joined_r0x01282414;
                      uVar22 = **(uint **)(DAT_05160dc8 + (long)(int)uVar28 * 8);
                      if (uVar22 == uVar35) goto joined_r0x01282414;
                      if (uVar22 < uVar35) {
                        uVar26 = uVar28 + 1;
                      }
                      else {
                        iVar19 = uVar28 - 1;
                      }
                    } while ((int)uVar26 < iVar19);
                  }
                  uVar28 = uVar26;
                  if ((*(uint **)(DAT_05160dc8 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_05160dc8 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x01282414:
                    if ((uVar28 < 3) &&
                       (uVar26 = *(uint *)(*(long *)(DAT_05160dc8 + (ulong)uVar28 * 8) + 4),
                       uVar26 < 3)) {
                      DAT_05160db0 = '\x01';
                      DAT_05160db4 = uVar35;
                      DAT_05160db8 = uVar26;
                      goto LAB_0128242c;
                    }
                  }
                  goto LAB_01282428;
                }
              }
              else if (DAT_05160dbc == '\x01') goto LAB_012821fc;
              uVar26 = 0;
            }
LAB_0128242c:
          }
LAB_01282434:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbe88) {
                *(short *)(*(long *)(PTR_DAT_04bbbe88 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar17 + 0x10);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01282580;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_01282580;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)(puVar17 + 0x10) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != -0x108621f1) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_0128257c;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)(puVar17 + 0x10) = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_0128257c:
          uVar35 = 0;
LAB_01282580:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05160ed8 == '\x01') && (DAT_05160edc == uVar35)) {
              uVar26 = DAT_05160ee0;
              if (1 < DAT_05160ee0) goto LAB_01282968;
            }
            else {
              if ((DAT_05160f08 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160f08);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160ee8 = 0x200000000;
                  DAT_05160ef0 = (undefined8 *)&DAT_05160ef8;
                  __cxa_guard_release(&DAT_05160f08);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160f10 & 1) == 0) {
                DAT_05160f10 = 1;
                if (((DAT_05160f28 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160f28), iVar19 != 0)) {
                  DAT_05160f14 = 0xffffffff00000000;
                  DAT_05160f1c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160f28);
                }
                uVar4 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xac,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa4,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa4,0x4c11db7);
                uVar26 = crc32b(uVar4,0x30,0x4c11db7);
                DAT_05160f14 = (ulong)~uVar26;
                iVar19 = (int)DAT_05160ee8;
                iVar27 = DAT_05160ee8._4_4_;
                if ((int)DAT_05160ee8 < DAT_05160ee8._4_4_) {
                  DAT_05160ef0[(int)DAT_05160ee8] = &DAT_05160f14;
                  iVar19 = (int)DAT_05160ee8 + 1;
                  DAT_05160ee8 = CONCAT44(DAT_05160ee8._4_4_,iVar19);
                  iVar27 = DAT_05160ee8._4_4_;
                }
                uVar26 = crc32b(uVar4,0x31,0x4c11db7);
                DAT_05160f1c = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160ef0[iVar19] = &DAT_05160f1c;
                  iVar19 = (int)DAT_05160ee8 + 1;
                  DAT_05160ee8 = CONCAT44(DAT_05160ee8._4_4_,iVar19);
                }
                puVar33 = DAT_05160ef0;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01282920;
LAB_012828d0:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_012828d0;
LAB_01282920:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_012828d0;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160ee4 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05160ee4 != '\x01') goto LAB_01282968;
              if ((int)DAT_05160ee8 == 0) goto LAB_01282968;
              if ((int)DAT_05160ee8 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05160ef0;
                if (puVar36 != (uint *)0x0) goto LAB_01282790;
LAB_0128294c:
                uVar28 = uVar26;
                if (uVar26 < 2) {
LAB_01282958:
                  uVar26 = *(uint *)(DAT_05160ef0[uVar28] + 4);
                  if (uVar26 < 2) {
                    DAT_05160ed8 = '\x01';
                    DAT_05160edc = uVar35;
                    DAT_05160ee0 = uVar26;
                    goto LAB_01282c74;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05160ee8 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05160ef0[(int)uVar28] == (uint *)0x0) goto LAB_012827a0;
                  uVar22 = *(uint *)DAT_05160ef0[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_012827a0;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05160ef0[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_0128294c;
LAB_01282790:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_012827a0:
                  if (1 < uVar28) goto LAB_01282968;
                  goto LAB_01282958;
                }
              }
LAB_01282968:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05160e80 == '\x01') && (DAT_05160e84 == uVar35)) {
              uVar26 = DAT_05160e88;
              if (1 < DAT_05160e88) {
LAB_01282c68:
                uVar26 = 0;
              }
            }
            else {
              if ((DAT_05160eb0 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160eb0);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160e90 = 0x200000000;
                  DAT_05160e98 = &DAT_05160ea0;
                  __cxa_guard_release(&DAT_05160eb0);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160eb8 & 1) == 0) {
                DAT_05160eb8 = 1;
                if (((DAT_05160ed0 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160ed0), iVar19 != 0)) {
                  _DAT_05160ebc = 0xffffffff00000000;
                  DAT_05160ec4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160ed0);
                }
                uVar26 = crc32b(uVar6,0x30,0x4c11db7);
                _DAT_05160ebc = (ulong)~uVar26;
                iVar19 = (int)DAT_05160e90;
                iVar27 = DAT_05160e90._4_4_;
                if ((int)DAT_05160e90 < DAT_05160e90._4_4_) {
                  *(undefined4 **)(DAT_05160e98 + (long)(int)DAT_05160e90 * 8) = &DAT_05160ebc;
                  iVar19 = (int)DAT_05160e90 + 1;
                  DAT_05160e90 = CONCAT44(DAT_05160e90._4_4_,iVar19);
                  iVar27 = DAT_05160e90._4_4_;
                }
                uVar26 = crc32b(uVar6,0x31,0x4c11db7);
                DAT_05160ec4 = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160e98 + (long)iVar19 * 8) = &DAT_05160ec4;
                  iVar19 = (int)DAT_05160e90 + 1;
                  DAT_05160e90 = CONCAT44(DAT_05160e90._4_4_,iVar19);
                }
                puVar18 = DAT_05160e98;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01282c10;
LAB_01282bc0:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01282bc0;
LAB_01282c10:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01282bc0;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160e8c = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
LAB_01282a30:
                if ((int)DAT_05160e90 != 0) {
                  uVar26 = 0;
                  if (1 < (int)DAT_05160e90) {
                    iVar19 = (int)DAT_05160e90 + -1;
                    do {
                      iVar27 = iVar19 + uVar26;
                      if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                        iVar27 = iVar27 + 1;
                      }
                      uVar28 = iVar27 >> 1;
                      if (*(uint **)(DAT_05160e98 + (long)(int)uVar28 * 8) == (uint *)0x0)
                      goto joined_r0x01282c54;
                      uVar22 = **(uint **)(DAT_05160e98 + (long)(int)uVar28 * 8);
                      if (uVar22 == uVar35) goto joined_r0x01282c54;
                      if (uVar22 < uVar35) {
                        uVar26 = uVar28 + 1;
                      }
                      else {
                        iVar19 = uVar28 - 1;
                      }
                    } while ((int)uVar26 < iVar19);
                  }
                  uVar28 = uVar26;
                  if ((*(uint **)(DAT_05160e98 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_05160e98 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x01282c54:
                    if ((uVar28 < 2) &&
                       (uVar26 = *(uint *)(*(long *)(DAT_05160e98 + (ulong)uVar28 * 8) + 4),
                       uVar26 < 2)) {
                      DAT_05160e80 = '\x01';
                      DAT_05160e84 = uVar35;
                      DAT_05160e88 = uVar26;
                      goto LAB_01282c6c;
                    }
                  }
                  goto LAB_01282c68;
                }
              }
              else if (DAT_05160e8c == '\x01') goto LAB_01282a30;
              uVar26 = 0;
            }
LAB_01282c6c:
          }
LAB_01282c74:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbe90) {
                *(short *)(*(long *)(PTR_DAT_04bbbe90 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar17 + 0x14);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01282dc0;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_01282dc0;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)(puVar17 + 0x14) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != -0x1bde57be) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_01282dbc;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)(puVar17 + 0x14) = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_01282dbc:
          uVar35 = 0;
LAB_01282dc0:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05160f88 == '\x01') && (DAT_05160f8c == uVar35)) {
              uVar26 = DAT_05160f90;
              if (1 < DAT_05160f90) goto LAB_012831d8;
            }
            else {
              if ((DAT_05160fb8 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160fb8);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160f98 = 0x200000000;
                  DAT_05160fa0 = (undefined8 *)&DAT_05160fa8;
                  __cxa_guard_release(&DAT_05160fb8);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160fc0 & 1) == 0) {
                DAT_05160fc0 = 1;
                if (((DAT_05160fd8 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160fd8), iVar19 != 0)) {
                  _DAT_05160fc4 = 0xffffffff00000000;
                  DAT_05160fcc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160fd8);
                }
                _DAT_05160fc4 = (ulong)~uVar13;
                iVar19 = (int)DAT_05160f98;
                iVar27 = DAT_05160f98._4_4_;
                if ((int)DAT_05160f98 < DAT_05160f98._4_4_) {
                  DAT_05160fa0[(int)DAT_05160f98] = &DAT_05160fc4;
                  iVar19 = (int)DAT_05160f98 + 1;
                  DAT_05160f98 = CONCAT44(DAT_05160f98._4_4_,iVar19);
                  iVar27 = DAT_05160f98._4_4_;
                }
                uVar4 = crc32b(uVar2,0xb9,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb3,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9c,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb0,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0x2d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x3e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x20,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb4,0x4c11db7);
                uVar4 = crc32b(uVar4,0x96,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb9,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb3,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe5,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9c,0x4c11db7);
                uVar26 = crc32b(uVar4,0xb0,0x4c11db7);
                DAT_05160fcc = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05160fa0[iVar19] = &DAT_05160fcc;
                  iVar19 = (int)DAT_05160f98 + 1;
                  DAT_05160f98 = CONCAT44(DAT_05160f98._4_4_,iVar19);
                }
                puVar33 = DAT_05160fa0;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01283190;
LAB_01283140:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01283140;
LAB_01283190:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01283140;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160f94 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05160f94 != '\x01') goto LAB_012831d8;
              if ((int)DAT_05160f98 == 0) goto LAB_012831d8;
              if ((int)DAT_05160f98 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05160fa0;
                if (puVar36 != (uint *)0x0) goto LAB_01282ff4;
LAB_012831bc:
                uVar28 = uVar26;
                if (uVar26 < 2) {
LAB_012831c8:
                  uVar26 = *(uint *)(DAT_05160fa0[uVar28] + 4);
                  if (uVar26 < 2) {
                    DAT_05160f88 = '\x01';
                    DAT_05160f8c = uVar35;
                    DAT_05160f90 = uVar26;
                    goto LAB_01283534;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05160f98 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05160fa0[(int)uVar28] == (uint *)0x0) goto LAB_01283004;
                  uVar22 = *(uint *)DAT_05160fa0[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_01283004;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05160fa0[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_012831bc;
LAB_01282ff4:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_01283004:
                  if (1 < uVar28) goto LAB_012831d8;
                  goto LAB_012831c8;
                }
              }
LAB_012831d8:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05160f30 == '\x01') && (DAT_05160f34 == uVar35)) {
              uVar26 = DAT_05160f38;
              if (1 < DAT_05160f38) {
LAB_01283528:
                uVar26 = 0;
              }
            }
            else {
              if ((DAT_05160f60 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05160f60);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160f40 = 0x200000000;
                  DAT_05160f48 = &DAT_05160f50;
                  __cxa_guard_release(&DAT_05160f60);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05160f68 & 1) == 0) {
                DAT_05160f68 = 1;
                if (((DAT_05160f80 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05160f80), iVar19 != 0)) {
                  DAT_05160f6c = 0xffffffff00000000;
                  DAT_05160f74 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160f80);
                }
                uVar4 = crc32b(uVar6,0x43,0x4c11db7);
                uVar4 = crc32b(uVar4,0x68,0x4c11db7);
                uVar4 = crc32b(uVar4,0x61,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x67,0x4c11db7);
                uVar26 = crc32b(uVar4,0x65,0x4c11db7);
                DAT_05160f6c = (ulong)~uVar26;
                iVar19 = (int)DAT_05160f40;
                iVar27 = DAT_05160f40._4_4_;
                if ((int)DAT_05160f40 < DAT_05160f40._4_4_) {
                  *(ulong **)(DAT_05160f48 + (long)(int)DAT_05160f40 * 8) = &DAT_05160f6c;
                  iVar19 = (int)DAT_05160f40 + 1;
                  DAT_05160f40 = CONCAT44(DAT_05160f40._4_4_,iVar19);
                  iVar27 = DAT_05160f40._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0x43,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
                uVar4 = crc32b(uVar4,0x69,0x4c11db7);
                uVar4 = crc32b(uVar4,0x66,0x4c11db7);
                uVar4 = crc32b(uVar4,0x66,0x4c11db7);
                uVar4 = crc32b(uVar4,0x41,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
                uVar26 = crc32b(uVar4,0x6c,0x4c11db7);
                DAT_05160f74 = CONCAT44(1,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160f48 + (long)iVar19 * 8) = &DAT_05160f74;
                  iVar19 = (int)DAT_05160f40 + 1;
                  DAT_05160f40 = CONCAT44(DAT_05160f40._4_4_,iVar19);
                }
                puVar18 = DAT_05160f48;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_012834d0;
LAB_01283480:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01283480;
LAB_012834d0:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01283480;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160f3c = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
LAB_012832f4:
                if ((int)DAT_05160f40 != 0) {
                  uVar26 = 0;
                  if (1 < (int)DAT_05160f40) {
                    iVar19 = (int)DAT_05160f40 + -1;
                    do {
                      iVar27 = iVar19 + uVar26;
                      if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                        iVar27 = iVar27 + 1;
                      }
                      uVar28 = iVar27 >> 1;
                      if (*(uint **)(DAT_05160f48 + (long)(int)uVar28 * 8) == (uint *)0x0)
                      goto joined_r0x01283514;
                      uVar22 = **(uint **)(DAT_05160f48 + (long)(int)uVar28 * 8);
                      if (uVar22 == uVar35) goto joined_r0x01283514;
                      if (uVar22 < uVar35) {
                        uVar26 = uVar28 + 1;
                      }
                      else {
                        iVar19 = uVar28 - 1;
                      }
                    } while ((int)uVar26 < iVar19);
                  }
                  uVar28 = uVar26;
                  if ((*(uint **)(DAT_05160f48 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_05160f48 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x01283514:
                    if ((uVar28 < 2) &&
                       (uVar26 = *(uint *)(*(long *)(DAT_05160f48 + (ulong)uVar28 * 8) + 4),
                       uVar26 < 2)) {
                      DAT_05160f30 = '\x01';
                      DAT_05160f34 = uVar35;
                      DAT_05160f38 = uVar26;
                      goto LAB_0128352c;
                    }
                  }
                  goto LAB_01283528;
                }
              }
              else if (DAT_05160f3c == '\x01') goto LAB_012832f4;
              uVar26 = 0;
            }
LAB_0128352c:
          }
LAB_01283534:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbe98) {
                *(short *)(*(long *)(PTR_DAT_04bbbe98 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar17 + 0x18);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01283680;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_01283680;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)(puVar17 + 0x18) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != 0x7674c4d6) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_0128367c;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)(puVar17 + 0x18) = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_0128367c:
          uVar35 = 0;
LAB_01283680:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05161048 == '\x01') && (DAT_0516104c == uVar35)) {
              uVar26 = DAT_05161050;
              if (2 < DAT_05161050) goto LAB_01283a98;
            }
            else {
              if ((DAT_05161080 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05161080);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05161058 = 0x300000000;
                  DAT_05161060 = (undefined8 *)&DAT_05161068;
                  __cxa_guard_release(&DAT_05161080);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05161088 & 1) == 0) {
                DAT_05161088 = 1;
                if (((DAT_051610a8 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_051610a8), iVar19 != 0)) {
                  DAT_0516109c = 0xffffffff00000000;
                  _DAT_0516108c = 0xffffffff00000000;
                  DAT_05161094 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051610a8);
                }
                uVar4 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                uVar4 = crc32b(uVar4,0xaa,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                uVar26 = crc32b(uVar4,0x97,0x4c11db7);
                _DAT_0516108c = (ulong)~uVar26;
                iVar19 = (int)DAT_05161058;
                iVar27 = DAT_05161058._4_4_;
                if ((int)DAT_05161058 < DAT_05161058._4_4_) {
                  DAT_05161060[(int)DAT_05161058] = &DAT_0516108c;
                  iVar19 = (int)DAT_05161058 + 1;
                  DAT_05161058 = CONCAT44(DAT_05161058._4_4_,iVar19);
                  iVar27 = DAT_05161058._4_4_;
                }
                DAT_05161094 = CONCAT44(1,~uVar12);
                if (iVar19 < iVar27) {
                  DAT_05161060[iVar19] = &DAT_05161094;
                  iVar19 = (int)DAT_05161058 + 1;
                  DAT_05161058 = CONCAT44(DAT_05161058._4_4_,iVar19);
                  iVar27 = DAT_05161058._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0x33,0x4c11db7);
                uVar4 = crc32b(uVar4,0x78,0x4c11db7);
                uVar26 = crc32b(uVar4,0x33,0x4c11db7);
                DAT_0516109c = CONCAT44(2,~uVar26);
                if (iVar19 < iVar27) {
                  DAT_05161060[iVar19] = &DAT_0516109c;
                  iVar19 = (int)DAT_05161058 + 1;
                  DAT_05161058 = CONCAT44(DAT_05161058._4_4_,iVar19);
                }
                puVar33 = DAT_05161060;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01283a50;
LAB_01283a00:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01283a00;
LAB_01283a50:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01283a00;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05161054 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05161054 != '\x01') goto LAB_01283a98;
              if ((int)DAT_05161058 == 0) goto LAB_01283a98;
              if ((int)DAT_05161058 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05161060;
                if (puVar36 != (uint *)0x0) goto LAB_012838c0;
LAB_01283a7c:
                uVar28 = uVar26;
                if (uVar26 < 3) {
LAB_01283a88:
                  uVar26 = *(uint *)(DAT_05161060[uVar28] + 4);
                  if (uVar26 < 3) {
                    DAT_05161048 = '\x01';
                    DAT_0516104c = uVar35;
                    DAT_05161050 = uVar26;
                    goto LAB_01283dd4;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05161058 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05161060[(int)uVar28] == (uint *)0x0) goto LAB_012838d0;
                  uVar22 = *(uint *)DAT_05161060[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_012838d0;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05161060[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_01283a7c;
LAB_012838c0:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_012838d0:
                  if (2 < uVar28) goto LAB_01283a98;
                  goto LAB_01283a88;
                }
              }
LAB_01283a98:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05160fe0 == '\x01') && (DAT_05160fe4 == uVar35)) {
              uVar26 = DAT_05160fe8;
              if (2 < DAT_05160fe8) {
LAB_01283dc8:
                uVar26 = 0;
              }
            }
            else {
              if ((DAT_05161018 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05161018);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05160ff0 = 0x300000000;
                  DAT_05160ff8 = &DAT_05161000;
                  __cxa_guard_release(&DAT_05161018);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05161020 & 1) == 0) {
                DAT_05161020 = 1;
                if (((DAT_05161040 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05161040), iVar19 != 0)) {
                  DAT_05161034 = 0xffffffff00000000;
                  _DAT_05161024 = 0xffffffff00000000;
                  DAT_0516102c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05161040);
                }
                _DAT_05161024 = (ulong)~uVar14;
                iVar19 = (int)DAT_05160ff0;
                iVar27 = DAT_05160ff0._4_4_;
                if ((int)DAT_05160ff0 < DAT_05160ff0._4_4_) {
                  *(undefined4 **)(DAT_05160ff8 + (long)(int)DAT_05160ff0 * 8) = &DAT_05161024;
                  iVar19 = (int)DAT_05160ff0 + 1;
                  DAT_05160ff0 = CONCAT44(DAT_05160ff0._4_4_,iVar19);
                  iVar27 = DAT_05160ff0._4_4_;
                }
                DAT_0516102c = CONCAT44(1,~uVar12);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160ff8 + (long)iVar19 * 8) = &DAT_0516102c;
                  iVar19 = (int)DAT_05160ff0 + 1;
                  DAT_05160ff0 = CONCAT44(DAT_05160ff0._4_4_,iVar19);
                  iVar27 = DAT_05160ff0._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0x33,0x4c11db7);
                uVar4 = crc32b(uVar4,0x78,0x4c11db7);
                uVar26 = crc32b(uVar4,0x33,0x4c11db7);
                DAT_05161034 = CONCAT44(2,~uVar26);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_05160ff8 + (long)iVar19 * 8) = &DAT_05161034;
                  iVar19 = (int)DAT_05160ff0 + 1;
                  DAT_05160ff0 = CONCAT44(DAT_05160ff0._4_4_,iVar19);
                }
                puVar18 = DAT_05160ff8;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01283d70;
LAB_01283d20:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01283d20;
LAB_01283d70:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01283d20;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05160fec = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
LAB_01283b98:
                if ((int)DAT_05160ff0 != 0) {
                  uVar26 = 0;
                  if (1 < (int)DAT_05160ff0) {
                    iVar19 = (int)DAT_05160ff0 + -1;
                    do {
                      iVar27 = iVar19 + uVar26;
                      if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                        iVar27 = iVar27 + 1;
                      }
                      uVar28 = iVar27 >> 1;
                      if (*(uint **)(DAT_05160ff8 + (long)(int)uVar28 * 8) == (uint *)0x0)
                      goto joined_r0x01283db4;
                      uVar22 = **(uint **)(DAT_05160ff8 + (long)(int)uVar28 * 8);
                      if (uVar22 == uVar35) goto joined_r0x01283db4;
                      if (uVar22 < uVar35) {
                        uVar26 = uVar28 + 1;
                      }
                      else {
                        iVar19 = uVar28 - 1;
                      }
                    } while ((int)uVar26 < iVar19);
                  }
                  uVar28 = uVar26;
                  if ((*(uint **)(DAT_05160ff8 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_05160ff8 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x01283db4:
                    if ((uVar28 < 3) &&
                       (uVar26 = *(uint *)(*(long *)(DAT_05160ff8 + (ulong)uVar28 * 8) + 4),
                       uVar26 < 3)) {
                      DAT_05160fe0 = '\x01';
                      DAT_05160fe4 = uVar35;
                      DAT_05160fe8 = uVar26;
                      goto LAB_01283dcc;
                    }
                  }
                  goto LAB_01283dc8;
                }
              }
              else if (DAT_05160fec == '\x01') goto LAB_01283b98;
              uVar26 = 0;
            }
LAB_01283dcc:
          }
LAB_01283dd4:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbea0) {
                *(short *)(*(long *)(PTR_DAT_04bbbea0 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
          uVar35 = *puVar1;
          if (uVar35 != 0) {
            cVar25 = *pcVar24;
            do {
              if (cVar25 == '\0') {
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                cVar25 = '\x01';
                *pcVar24 = '\x01';
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                uVar35 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar17 + 0x1c);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar35 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01283f20;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar36 = (uint *)(ulong)uVar35;
              uVar35 = 0;
              if ((puVar36 == (uint *)0x0) || (uVar35 = 0, puVar1 == puVar36)) goto LAB_01283f20;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar36)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar36);
              if (lVar16 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar36));
              *(undefined4 *)(puVar17 + 0x1c) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar29 = (int *)(lVar16 + 4);
              while (piVar29[-1] != 0x4932f93e) {
                piVar29 = piVar29 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_01283f1c;
              }
              iVar19 = 0;
              if (*piVar29 != -1) {
                iVar19 = *piVar29;
              }
              *(int *)(puVar17 + 0x1c) = iVar19;
              uVar35 = *puVar1;
              if (uVar35 == 0) break;
            } while( true );
          }
LAB_01283f1c:
          uVar35 = 0;
LAB_01283f20:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05161108 == '\x01') && (DAT_0516110c == uVar35)) {
              uVar26 = DAT_05161110;
              if (1 < DAT_05161110) goto LAB_012842c8;
            }
            else {
              if ((DAT_05161138 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_05161138);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_05161118 = 0x200000000;
                  DAT_05161120 = (undefined8 *)&DAT_05161128;
                  __cxa_guard_release(&DAT_05161138);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_05161140 & 1) == 0) {
                DAT_05161140 = 1;
                if (((DAT_05161158 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05161158), iVar19 != 0)) {
                  _DAT_05161144 = 0xffffffff00000000;
                  DAT_0516114c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05161158);
                }
                _DAT_05161144 = (ulong)~uVar9;
                iVar19 = (int)DAT_05161118;
                iVar27 = DAT_05161118._4_4_;
                if ((int)DAT_05161118 < DAT_05161118._4_4_) {
                  DAT_05161120[(int)DAT_05161118] = &DAT_05161144;
                  iVar19 = (int)DAT_05161118 + 1;
                  DAT_05161118 = CONCAT44(DAT_05161118._4_4_,iVar19);
                  iVar27 = DAT_05161118._4_4_;
                }
                DAT_0516114c = CONCAT44(1,~uVar11);
                if (iVar19 < iVar27) {
                  DAT_05161120[iVar19] = &DAT_0516114c;
                  iVar19 = (int)DAT_05161118 + 1;
                  DAT_05161118 = CONCAT44(DAT_05161118._4_4_,iVar19);
                }
                puVar33 = DAT_05161120;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = (uint *)puVar33[uVar28];
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = (uint *)puVar33[uVar31];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        puVar33[uVar31] = puVar36;
                        puVar33[uVar23] = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar31 + 1;
                      do {
                        puVar36 = (uint *)*puVar32;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar32[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01284280;
LAB_01284230:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar32[-1] = puVar36;
                          *puVar32 = puVar20;
                          puVar21 = (uint *)puVar32[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_01284230;
LAB_01284280:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_01284230;
                          uVar26 = uVar22 + 1;
                          *puVar32 = puVar21;
                          puVar32[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar32 = puVar32 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = (uint *)puVar33[uVar26];
                    uVar28 = uVar26;
                    do {
                      puVar20 = (uint *)puVar33[uVar31 - 1];
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        puVar33[uVar31 - 1] = puVar36;
                        puVar33[uVar31] = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_05161114 = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_05161114 != '\x01') goto LAB_012842c8;
              if ((int)DAT_05161118 == 0) goto LAB_012842c8;
              if ((int)DAT_05161118 < 2) {
                uVar26 = 0;
                puVar36 = (uint *)*DAT_05161120;
                if (puVar36 != (uint *)0x0) goto LAB_012840e0;
LAB_012842ac:
                uVar28 = uVar26;
                if (uVar26 < 2) {
LAB_012842b8:
                  uVar26 = *(uint *)(DAT_05161120[uVar28] + 4);
                  if (uVar26 < 2) {
                    DAT_05161108 = '\x01';
                    DAT_0516110c = uVar35;
                    DAT_05161110 = uVar26;
                    goto LAB_012845bc;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar19 = (int)DAT_05161118 + -1;
                do {
                  iVar27 = iVar19 + uVar26;
                  if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                    iVar27 = iVar27 + 1;
                  }
                  uVar28 = iVar27 >> 1;
                  if ((uint *)DAT_05161120[(int)uVar28] == (uint *)0x0) goto LAB_012840f0;
                  uVar22 = *(uint *)DAT_05161120[(int)uVar28];
                  if (uVar22 == uVar35) goto LAB_012840f0;
                  if (uVar22 < uVar35) {
                    uVar26 = uVar28 + 1;
                  }
                  else {
                    iVar19 = uVar28 - 1;
                  }
                } while ((int)uVar26 < iVar19);
                puVar36 = (uint *)DAT_05161120[(int)uVar26];
                if (puVar36 == (uint *)0x0) goto LAB_012842ac;
LAB_012840e0:
                uVar28 = uVar26;
                if (*puVar36 == uVar35) {
LAB_012840f0:
                  if (1 < uVar28) goto LAB_012842c8;
                  goto LAB_012842b8;
                }
              }
LAB_012842c8:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_051610b0 == '\x01') && (DAT_051610b4 == uVar35)) {
              uVar26 = DAT_051610b8;
              if (1 < DAT_051610b8) goto LAB_012845b0;
            }
            else {
              if ((DAT_051610e0 & 1) == 0) {
                iVar19 = __cxa_guard_acquire(&DAT_051610e0);
                pcVar24 = PTR_DAT_04bbbe60;
                if (iVar19 != 0) {
                  DAT_051610c0 = 0x200000000;
                  DAT_051610c8 = &DAT_051610d0;
                  __cxa_guard_release(&DAT_051610e0);
                  pcVar24 = PTR_DAT_04bbbe60;
                }
              }
              if ((DAT_051610e8 & 1) == 0) {
                DAT_051610e8 = 1;
                if (((DAT_05161100 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(&DAT_05161100), iVar19 != 0)) {
                  _DAT_051610ec = 0xffffffff00000000;
                  DAT_051610f4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05161100);
                }
                _DAT_051610ec = (ulong)~uVar9;
                iVar19 = (int)DAT_051610c0;
                iVar27 = DAT_051610c0._4_4_;
                if ((int)DAT_051610c0 < DAT_051610c0._4_4_) {
                  *(undefined4 **)(DAT_051610c8 + (long)(int)DAT_051610c0 * 8) = &DAT_051610ec;
                  iVar19 = (int)DAT_051610c0 + 1;
                  DAT_051610c0 = CONCAT44(DAT_051610c0._4_4_,iVar19);
                  iVar27 = DAT_051610c0._4_4_;
                }
                DAT_051610f4 = CONCAT44(1,~uVar11);
                if (iVar19 < iVar27) {
                  *(undefined8 **)(DAT_051610c8 + (long)iVar19 * 8) = &DAT_051610f4;
                  iVar19 = (int)DAT_051610c0 + 1;
                  DAT_051610c0 = CONCAT44(DAT_051610c0._4_4_,iVar19);
                }
                puVar18 = DAT_051610c8;
                if (1 < iVar19) {
                  uVar28 = 0;
                  uVar26 = iVar19 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar28) break;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar28 * 8);
                    uVar23 = (ulong)uVar28;
                    if ((uVar26 - uVar28 & 1) == 0) {
                      uVar31 = uVar23;
                      puVar20 = puVar36;
                    }
                    else {
                      uVar31 = uVar23 + 1;
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar36)) {
                        *(uint **)(puVar18 + uVar31 * 8) = puVar36;
                        *(uint **)(puVar18 + uVar23 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                    }
                    uVar30 = (ulong)uVar26;
                    uVar26 = uVar28;
                    if (~uVar23 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar18 + uVar31 * 8 + 8);
                      do {
                        puVar36 = (uint *)*puVar33;
                        uVar22 = (uint)uVar31;
                        if (((puVar20 == (uint *)0x0) || (puVar36 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar36)) {
                          puVar21 = (uint *)puVar33[1];
                          if (puVar36 != (uint *)0x0) goto LAB_01284530;
LAB_012844e0:
                          puVar36 = puVar21;
                        }
                        else {
                          puVar33[-1] = puVar36;
                          *puVar33 = puVar20;
                          puVar21 = (uint *)puVar33[1];
                          puVar36 = puVar20;
                          uVar26 = uVar22;
                          if (puVar20 == (uint *)0x0) goto LAB_012844e0;
LAB_01284530:
                          if ((puVar21 == (uint *)0x0) || (*puVar36 <= *puVar21)) goto LAB_012844e0;
                          uVar26 = uVar22 + 1;
                          *puVar33 = puVar21;
                          puVar33[1] = puVar36;
                        }
                        uVar31 = uVar31 + 2;
                        puVar33 = puVar33 + 2;
                        puVar20 = puVar36;
                      } while (uVar30 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar28) break;
                    uVar31 = (ulong)uVar26;
                    puVar36 = *(uint **)(puVar18 + (ulong)uVar26 * 8);
                    uVar28 = uVar26;
                    do {
                      puVar20 = *(uint **)(puVar18 + uVar31 * 8 + -8);
                      if (((puVar36 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar36 < *puVar20)) {
                        uVar28 = (uint)uVar31;
                        *(uint **)(puVar18 + uVar31 * 8 + -8) = puVar36;
                        *(uint **)(puVar18 + uVar31 * 8) = puVar20;
                        puVar20 = puVar36;
                      }
                      uVar31 = uVar31 - 1;
                      puVar36 = puVar20;
                    } while ((long)uVar23 < (long)uVar31);
                  } while (uVar28 != uVar26);
                }
                DAT_051610bc = '\x01';
                pcVar24 = PTR_DAT_04bbbe60;
              }
              else if (DAT_051610bc != '\x01') goto LAB_012845b0;
              if ((int)DAT_051610c0 != 0) {
                if ((int)DAT_051610c0 < 2) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = 0;
                  iVar19 = (int)DAT_051610c0 + -1;
                  do {
                    iVar27 = iVar19 + uVar26;
                    if (iVar27 < 0 != SCARRY4(iVar19,uVar26)) {
                      iVar27 = iVar27 + 1;
                    }
                    uVar28 = iVar27 >> 1;
                    if (*(uint **)(DAT_051610c8 + (long)(int)uVar28 * 8) == (uint *)0x0)
                    goto joined_r0x0128459c;
                    uVar22 = **(uint **)(DAT_051610c8 + (long)(int)uVar28 * 8);
                    if (uVar22 == uVar35) goto joined_r0x0128459c;
                    if (uVar22 < uVar35) {
                      uVar26 = uVar28 + 1;
                    }
                    else {
                      iVar19 = uVar28 - 1;
                    }
                  } while ((int)uVar26 < iVar19);
                }
                uVar28 = uVar26;
                if ((*(uint **)(DAT_051610c8 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_051610c8 + (long)(int)uVar26 * 8) == uVar35)) {
joined_r0x0128459c:
                  if ((uVar28 < 2) &&
                     (uVar26 = *(uint *)(*(long *)(DAT_051610c8 + (ulong)uVar28 * 8) + 4),
                     uVar26 < 2)) {
                    DAT_051610b0 = '\x01';
                    DAT_051610b4 = uVar35;
                    DAT_051610b8 = uVar26;
                    goto LAB_012845b4;
                  }
                }
              }
LAB_012845b0:
              uVar26 = 0;
            }
LAB_012845b4:
          }
LAB_012845bc:
          puVar36 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar36 != (uint *)0x0)) &&
             ((*puVar36 != 0 &&
              ((uVar35 = puVar36[1], uVar35 != 0 && ((ulong)(ushort)puVar36[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar36 + lVar16 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar16 != 0) {
              uVar28 = 0;
              if ((ulong)uVar35 != 0) {
                uVar28 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar35);
              }
              if (*puVar36 <= uVar28) {
                uVar28 = 0xffffffff;
              }
              if (uVar28 < *(uint *)PTR_DAT_04bbbea8) {
                *(short *)(*(long *)(PTR_DAT_04bbbea8 + 8) + (long)(int)uVar28 * 2) = (short)uVar26;
              }
            }
          }
        }
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar15);
  }
  return;
}

