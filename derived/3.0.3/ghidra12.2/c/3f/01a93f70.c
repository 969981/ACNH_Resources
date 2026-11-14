
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a93f70(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  ulong uVar23;
  uint *puVar24;
  ulong uVar25;
  uint *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  byte *pbVar32;
  long lVar33;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar11 = PTR_DAT_04bbfeb8;
  if ((param_1 != (uint *)0x0) && (uVar10 = *param_1, uVar10 != 0)) {
    uVar2 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar2 = crc32b(uVar2,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x4f,0x4c11db7);
    uVar5 = crc32b(uVar3,0x81,0x4c11db7);
    uVar6 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar4 = crc32b(uVar5,0xaa,0x4c11db7);
    uVar31 = 0;
    uVar7 = crc32b(uVar2,0x4e,0x4c11db7);
    uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
    uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
    uVar7 = crc32b(uVar7,0x65,0x4c11db7);
    uVar7 = crc32b(uVar7,0x55,0x4c11db7);
    uVar7 = crc32b(uVar7,0x73,0x4c11db7);
    uVar7 = crc32b(uVar7,0x65,0x4c11db7);
    uVar8 = crc32b(uVar7,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
    uVar9 = crc32b(uVar4,0x97,0x4c11db7);
    pcVar22 = PTR_DAT_04bbfeb0;
    do {
      if (((uVar31 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar13 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar31 + (uint)(ushort)param_1[2] * 8 + iVar13) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar30 = *puVar1;
          if (uVar30 != 0) {
            cVar14 = *pcVar22;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar11 + 0x78) = 0xffffffff;
                *pcVar22 = '\x01';
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                uVar30 = *puVar1;
              }
              else {
                uVar16 = *(uint *)puVar11;
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar30 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_01a941f0;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar30;
              uVar30 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar30 = 0, puVar1 == puVar24)) goto LAB_01a941f0;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar24);
              if (lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)puVar11 = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar33 + 4);
              while (piVar18[-1] != 0x1b936128) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01a941ec;
              }
              iVar13 = 0;
              if (*piVar18 != -1) {
                iVar13 = *piVar18;
              }
              *(int *)puVar11 = iVar13;
              uVar30 = *puVar1;
              if (uVar30 == 0) break;
            } while( true );
          }
LAB_01a941ec:
          uVar30 = 0;
LAB_01a941f0:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_05322888 == '\x01') && (DAT_0532288c == uVar30)) {
              uVar16 = DAT_05322890;
              if (2 < DAT_05322890) goto LAB_01a94490;
            }
            else {
              if ((DAT_053228c0 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_053228c0);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322898 = 0x300000000;
                  DAT_053228a0 = (undefined8 *)&DAT_053228a8;
                  __cxa_guard_release(&DAT_053228c0);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_053228c8 & 1) == 0) {
                DAT_053228c8 = 1;
                if (((DAT_053228e8 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_053228e8), iVar13 != 0)) {
                  DAT_053228dc = 0xffffffff00000000;
                  _DAT_053228cc = 0xffffffff00000000;
                  DAT_053228d4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053228e8);
                }
                _DAT_053228cc = (ulong)~uVar9;
                iVar13 = (int)DAT_05322898;
                iVar15 = DAT_05322898._4_4_;
                if ((int)DAT_05322898 < DAT_05322898._4_4_) {
                  DAT_053228a0[(int)DAT_05322898] = &DAT_053228cc;
                  iVar13 = (int)DAT_05322898 + 1;
                  DAT_05322898 = CONCAT44(DAT_05322898._4_4_,iVar13);
                  iVar15 = DAT_05322898._4_4_;
                }
                uVar4 = crc32b(uVar5,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar16 = crc32b(uVar4,0x8a,0x4c11db7);
                DAT_053228d4 = CONCAT44(1,~uVar16);
                if (iVar13 < iVar15) {
                  DAT_053228a0[iVar13] = &DAT_053228d4;
                  iVar13 = (int)DAT_05322898 + 1;
                  DAT_05322898 = CONCAT44(DAT_05322898._4_4_,iVar13);
                  iVar15 = DAT_05322898._4_4_;
                }
                uVar4 = crc32b(uVar16,0x28,0x4c11db7);
                uVar4 = crc32b(uVar4,0x55,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa2,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa4,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb3,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb3,0x4c11db7);
                uVar16 = crc32b(uVar4,0x29,0x4c11db7);
                DAT_053228dc = CONCAT44(2,~uVar16);
                if (iVar13 < iVar15) {
                  DAT_053228a0[iVar13] = &DAT_053228dc;
                  iVar13 = (int)DAT_05322898 + 1;
                  DAT_05322898 = CONCAT44(DAT_05322898._4_4_,iVar13);
                }
                puVar28 = DAT_053228a0;
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = (uint *)puVar28[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = (uint *)puVar28[uVar23];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        puVar28[uVar23] = puVar24;
                        puVar28[uVar19] = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar27 = puVar28 + uVar23 + 1;
                      do {
                        puVar24 = (uint *)*puVar27;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar27[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a94610;
LAB_01a945c0:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar27[-1] = puVar24;
                          *puVar27 = puVar26;
                          puVar29 = (uint *)puVar27[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a945c0;
LAB_01a94610:
                          if (puVar29 == (uint *)0x0) goto LAB_01a945c0;
                          if (*puVar24 <= *puVar29) goto LAB_01a945c0;
                          uVar16 = uVar20 + 1;
                          *puVar27 = puVar29;
                          puVar27[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar27 = puVar27 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = (uint *)puVar28[uVar16];
                    uVar21 = uVar16;
                    do {
                      puVar26 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar24;
                        puVar28[uVar23] = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05322894 = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05322894 != '\x01') goto LAB_01a94490;
              if ((int)DAT_05322898 == 0) {
LAB_01a94490:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322898 < 2) {
                  uVar21 = 0;
                  puVar24 = (uint *)*DAT_053228a0;
                  uVar16 = uVar21;
                  if (puVar24 != (uint *)0x0) goto LAB_01a94460;
joined_r0x01a94644:
                  if (uVar16 < 3) {
                    uVar16 = *(uint *)(DAT_053228a0[uVar16] + 4);
                    if (uVar16 < 3) {
                      DAT_05322888 = '\x01';
                      DAT_0532288c = uVar30;
                      DAT_05322890 = uVar16;
                      goto LAB_01a94a24;
                    }
                    goto LAB_01a94490;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar13 = (int)DAT_05322898 + -1;
                  do {
                    iVar15 = iVar13 + uVar21;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar21)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar16 = iVar15 >> 1;
                    if ((uint *)DAT_053228a0[(int)uVar16] == (uint *)0x0) goto joined_r0x01a94644;
                    uVar20 = *(uint *)DAT_053228a0[(int)uVar16];
                    if (uVar20 == uVar30) goto joined_r0x01a94644;
                    if (uVar20 < uVar30) {
                      uVar21 = uVar16 + 1;
                    }
                    else {
                      iVar13 = uVar16 - 1;
                    }
                  } while ((int)uVar21 < iVar13);
                  puVar24 = (uint *)DAT_053228a0[(int)uVar21];
                  uVar16 = uVar21;
                  if (puVar24 == (uint *)0x0) goto joined_r0x01a94644;
LAB_01a94460:
                  uVar16 = uVar21;
                  if (*puVar24 == uVar30) goto joined_r0x01a94644;
                }
                uVar16 = 0;
              }
            }
          }
          else {
            if ((DAT_05322820 == '\x01') && (DAT_05322824 == uVar30)) {
              uVar16 = DAT_05322828;
              if (2 < DAT_05322828) goto LAB_01a949bc;
            }
            else {
              if ((DAT_05322858 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322858);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322830 = 0x300000000;
                  DAT_05322838 = &DAT_05322840;
                  __cxa_guard_release(&DAT_05322858);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322860 & 1) == 0) {
                DAT_05322860 = 1;
                if (((DAT_05322880 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05322880), iVar13 != 0)) {
                  DAT_05322874 = 0xffffffff00000000;
                  _DAT_05322864 = 0xffffffff00000000;
                  DAT_0532286c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05322880);
                }
                uVar4 = crc32b(0xffffffff,0x4e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
                uVar16 = crc32b(uVar4,0x65,0x4c11db7);
                _DAT_05322864 = (ulong)~uVar16;
                iVar13 = (int)DAT_05322830;
                iVar15 = DAT_05322830._4_4_;
                if ((int)DAT_05322830 < DAT_05322830._4_4_) {
                  *(undefined4 **)(DAT_05322838 + (long)(int)DAT_05322830 * 8) = &DAT_05322864;
                  iVar13 = (int)DAT_05322830 + 1;
                  DAT_05322830 = CONCAT44(DAT_05322830._4_4_,iVar13);
                  iVar15 = DAT_05322830._4_4_;
                }
                uVar4 = crc32b(uVar6,0x43,0x4c11db7);
                uVar4 = crc32b(uVar4,0x61,0x4c11db7);
                uVar4 = crc32b(uVar4,0x70,0x4c11db7);
                uVar4 = crc32b(uVar4,0x74,0x4c11db7);
                uVar4 = crc32b(uVar4,0x75,0x4c11db7);
                uVar4 = crc32b(uVar4,0x72,0x4c11db7);
                uVar16 = crc32b(uVar4,0x65,0x4c11db7);
                DAT_0532286c = CONCAT44(1,~uVar16);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_05322838 + (long)iVar13 * 8) = &DAT_0532286c;
                  iVar13 = (int)DAT_05322830 + 1;
                  DAT_05322830 = CONCAT44(DAT_05322830._4_4_,iVar13);
                  iVar15 = DAT_05322830._4_4_;
                }
                uVar4 = crc32b(uVar16,0x55,0x4c11db7);
                uVar4 = crc32b(uVar4,0x49,0x4c11db7);
                uVar4 = crc32b(uVar4,99,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar16 = crc32b(uVar4,0x6e,0x4c11db7);
                DAT_05322874 = CONCAT44(2,~uVar16);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_05322838 + (long)iVar13 * 8) = &DAT_05322874;
                  iVar13 = (int)DAT_05322830 + 1;
                  DAT_05322830 = CONCAT44(DAT_05322830._4_4_,iVar13);
                }
                puVar12 = DAT_05322838;
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        *(uint **)(puVar12 + uVar23 * 8) = puVar24;
                        *(uint **)(puVar12 + uVar19 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar28 = (undefined8 *)(puVar12 + uVar23 * 8 + 8);
                      do {
                        puVar24 = (uint *)*puVar28;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar28[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a94960;
LAB_01a94910:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar28[-1] = puVar24;
                          *puVar28 = puVar26;
                          puVar29 = (uint *)puVar28[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a94910;
LAB_01a94960:
                          if (puVar29 == (uint *)0x0) goto LAB_01a94910;
                          if (*puVar24 <= *puVar29) goto LAB_01a94910;
                          uVar16 = uVar20 + 1;
                          *puVar28 = puVar29;
                          puVar28[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar16 * 8);
                    uVar21 = uVar16;
                    do {
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8 + -8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        *(uint **)(puVar12 + uVar23 * 8 + -8) = puVar24;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_0532282c = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_0532282c != '\x01') goto LAB_01a949bc;
              if ((int)DAT_05322830 == 0) {
LAB_01a949bc:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322830 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar13 = (int)DAT_05322830 + -1;
                  do {
                    iVar15 = iVar13 + uVar16;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar16)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar21 = iVar15 >> 1;
                    if (*(uint **)(DAT_05322838 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x01a949ec;
                    uVar20 = **(uint **)(DAT_05322838 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar30) goto joined_r0x01a949ec;
                    if (uVar20 < uVar30) {
                      uVar16 = uVar21 + 1;
                    }
                    else {
                      iVar13 = uVar21 - 1;
                    }
                  } while ((int)uVar16 < iVar13);
                }
                uVar21 = uVar16;
                if ((*(uint **)(DAT_05322838 + (long)(int)uVar16 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05322838 + (long)(int)uVar16 * 8) == uVar30)) {
joined_r0x01a949ec:
                  if (uVar21 < 3) {
                    uVar16 = *(uint *)(*(long *)(DAT_05322838 + (ulong)uVar21 * 8) + 4);
                    if (uVar16 < 3) {
                      DAT_05322820 = '\x01';
                      DAT_05322824 = uVar30;
                      DAT_05322828 = uVar16;
                      goto LAB_01a94a1c;
                    }
                    goto LAB_01a949bc;
                  }
                }
                uVar16 = 0;
              }
            }
LAB_01a94a1c:
          }
LAB_01a94a24:
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar24 != (uint *)0x0)) && (*puVar24 != 0)) &&
             ((uVar30 = puVar24[1], uVar30 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar24 + lVar33 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar33 != 0) {
              uVar21 = 0;
              if ((ulong)uVar30 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar30);
              }
              if (*puVar24 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < DAT_05322810) {
                *(short *)(DAT_05322818 + (long)(int)uVar21 * 2) = (short)uVar16;
              }
            }
          }
          uVar30 = *puVar1;
          if (uVar30 != 0) {
            cVar14 = *pcVar22;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar11 + 0x78) = 0xffffffff;
                *pcVar22 = '\x01';
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                uVar30 = *puVar1;
              }
              else {
                uVar16 = *(uint *)(puVar11 + 4);
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar30 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_01a94b90;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar30;
              uVar30 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar30 = 0, puVar1 == puVar24)) goto LAB_01a94b90;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar24);
              if (lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)(puVar11 + 4) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar33 + 4);
              while (piVar18[-1] != 0x268e2e2b) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01a94b8c;
              }
              iVar13 = 0;
              if (*piVar18 != -1) {
                iVar13 = *piVar18;
              }
              *(int *)(puVar11 + 4) = iVar13;
              uVar30 = *puVar1;
              if (uVar30 == 0) break;
            } while( true );
          }
LAB_01a94b8c:
          uVar30 = 0;
LAB_01a94b90:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_05322948 == '\x01') && (DAT_0532294c == uVar30)) {
              uVar16 = DAT_05322950;
              if (1 < DAT_05322950) goto LAB_01a94da0;
            }
            else {
              if ((DAT_05322978 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322978);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322958 = 0x200000000;
                  DAT_05322960 = (undefined8 *)&DAT_05322968;
                  __cxa_guard_release(&DAT_05322978);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322980 & 1) == 0) {
                DAT_05322980 = 1;
                if (((DAT_05322998 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05322998), iVar13 != 0)) {
                  _DAT_05322984 = 0xffffffff00000000;
                  DAT_0532298c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05322998);
                }
                _DAT_05322984 = (ulong)~uVar9;
                iVar13 = (int)DAT_05322958;
                iVar15 = DAT_05322958._4_4_;
                if ((int)DAT_05322958 < DAT_05322958._4_4_) {
                  DAT_05322960[(int)DAT_05322958] = &DAT_05322984;
                  iVar13 = (int)DAT_05322958 + 1;
                  DAT_05322958 = CONCAT44(DAT_05322958._4_4_,iVar13);
                  iVar15 = DAT_05322958._4_4_;
                }
                uVar4 = crc32b(uVar5,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar16 = crc32b(uVar4,0x8a,0x4c11db7);
                DAT_0532298c = CONCAT44(1,~uVar16);
                if (iVar13 < iVar15) {
                  DAT_05322960[iVar13] = &DAT_0532298c;
                  iVar13 = (int)DAT_05322958 + 1;
                  DAT_05322958 = CONCAT44(DAT_05322958._4_4_,iVar13);
                }
                puVar28 = DAT_05322960;
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = (uint *)puVar28[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = (uint *)puVar28[uVar23];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        puVar28[uVar23] = puVar24;
                        puVar28[uVar19] = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar27 = puVar28 + uVar23 + 1;
                      do {
                        puVar24 = (uint *)*puVar27;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar27[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a94f20;
LAB_01a94ed0:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar27[-1] = puVar24;
                          *puVar27 = puVar26;
                          puVar29 = (uint *)puVar27[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a94ed0;
LAB_01a94f20:
                          if (puVar29 == (uint *)0x0) goto LAB_01a94ed0;
                          if (*puVar24 <= *puVar29) goto LAB_01a94ed0;
                          uVar16 = uVar20 + 1;
                          *puVar27 = puVar29;
                          puVar27[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar27 = puVar27 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = (uint *)puVar28[uVar16];
                    uVar21 = uVar16;
                    do {
                      puVar26 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar24;
                        puVar28[uVar23] = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05322954 = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05322954 != '\x01') goto LAB_01a94da0;
              if ((int)DAT_05322958 == 0) {
LAB_01a94da0:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322958 < 2) {
                  uVar21 = 0;
                  puVar24 = (uint *)*DAT_05322960;
                  uVar16 = uVar21;
                  if (puVar24 != (uint *)0x0) goto LAB_01a94d70;
joined_r0x01a94d84:
                  if (uVar16 < 2) {
                    uVar16 = *(uint *)(DAT_05322960[uVar16] + 4);
                    if (uVar16 < 2) {
                      DAT_05322948 = '\x01';
                      DAT_0532294c = uVar30;
                      DAT_05322950 = uVar16;
                      goto LAB_01a952a4;
                    }
                    goto LAB_01a94da0;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar13 = (int)DAT_05322958 + -1;
                  do {
                    iVar15 = iVar13 + uVar21;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar21)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar16 = iVar15 >> 1;
                    if ((uint *)DAT_05322960[(int)uVar16] == (uint *)0x0) goto joined_r0x01a94d84;
                    uVar20 = *(uint *)DAT_05322960[(int)uVar16];
                    if (uVar20 == uVar30) goto joined_r0x01a94d84;
                    if (uVar20 < uVar30) {
                      uVar21 = uVar16 + 1;
                    }
                    else {
                      iVar13 = uVar16 - 1;
                    }
                  } while ((int)uVar21 < iVar13);
                  puVar24 = (uint *)DAT_05322960[(int)uVar21];
                  uVar16 = uVar21;
                  if (puVar24 == (uint *)0x0) goto joined_r0x01a94d84;
LAB_01a94d70:
                  uVar16 = uVar21;
                  if (*puVar24 == uVar30) goto joined_r0x01a94d84;
                }
                uVar16 = 0;
              }
            }
          }
          else {
            if ((DAT_053228f0 == '\x01') && (DAT_053228f4 == uVar30)) {
              uVar16 = DAT_053228f8;
              if (1 < DAT_053228f8) goto LAB_01a9523c;
            }
            else {
              if ((DAT_05322920 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322920);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322900 = 0x200000000;
                  DAT_05322908 = &DAT_05322910;
                  __cxa_guard_release(&DAT_05322920);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322928 & 1) == 0) {
                DAT_05322928 = 1;
                if (((DAT_05322940 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05322940), iVar13 != 0)) {
                  _DAT_0532292c = 0xffffffff00000000;
                  DAT_05322934 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05322940);
                }
                uVar4 = crc32b(0xffffffff,0x4e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
                uVar16 = crc32b(uVar4,0x65,0x4c11db7);
                _DAT_0532292c = (ulong)~uVar16;
                iVar13 = (int)DAT_05322900;
                iVar15 = DAT_05322900._4_4_;
                if ((int)DAT_05322900 < DAT_05322900._4_4_) {
                  *(undefined4 **)(DAT_05322908 + (long)(int)DAT_05322900 * 8) = &DAT_0532292c;
                  iVar13 = (int)DAT_05322900 + 1;
                  DAT_05322900 = CONCAT44(DAT_05322900._4_4_,iVar13);
                  iVar15 = DAT_05322900._4_4_;
                }
                DAT_05322934 = CONCAT44(1,~uVar6);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_05322908 + (long)iVar13 * 8) = &DAT_05322934;
                  iVar13 = (int)DAT_05322900 + 1;
                  DAT_05322900 = CONCAT44(DAT_05322900._4_4_,iVar13);
                }
                puVar12 = DAT_05322908;
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        *(uint **)(puVar12 + uVar23 * 8) = puVar24;
                        *(uint **)(puVar12 + uVar19 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar28 = (undefined8 *)(puVar12 + uVar23 * 8 + 8);
                      do {
                        puVar24 = (uint *)*puVar28;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar28[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a951e0;
LAB_01a95190:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar28[-1] = puVar24;
                          *puVar28 = puVar26;
                          puVar29 = (uint *)puVar28[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a95190;
LAB_01a951e0:
                          if (puVar29 == (uint *)0x0) goto LAB_01a95190;
                          if (*puVar24 <= *puVar29) goto LAB_01a95190;
                          uVar16 = uVar20 + 1;
                          *puVar28 = puVar29;
                          puVar28[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar16 * 8);
                    uVar21 = uVar16;
                    do {
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8 + -8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        *(uint **)(puVar12 + uVar23 * 8 + -8) = puVar24;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_053228fc = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_053228fc != '\x01') goto LAB_01a9523c;
              if ((int)DAT_05322900 == 0) {
LAB_01a9523c:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322900 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar13 = (int)DAT_05322900 + -1;
                  do {
                    iVar15 = iVar13 + uVar16;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar16)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar21 = iVar15 >> 1;
                    if (*(uint **)(DAT_05322908 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x01a9526c;
                    uVar20 = **(uint **)(DAT_05322908 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar30) goto joined_r0x01a9526c;
                    if (uVar20 < uVar30) {
                      uVar16 = uVar21 + 1;
                    }
                    else {
                      iVar13 = uVar21 - 1;
                    }
                  } while ((int)uVar16 < iVar13);
                }
                uVar21 = uVar16;
                if ((*(uint **)(DAT_05322908 + (long)(int)uVar16 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05322908 + (long)(int)uVar16 * 8) == uVar30)) {
joined_r0x01a9526c:
                  if (uVar21 < 2) {
                    uVar16 = *(uint *)(*(long *)(DAT_05322908 + (ulong)uVar21 * 8) + 4);
                    if (uVar16 < 2) {
                      DAT_053228f0 = '\x01';
                      DAT_053228f4 = uVar30;
                      DAT_053228f8 = uVar16;
                      goto LAB_01a9529c;
                    }
                    goto LAB_01a9523c;
                  }
                }
                uVar16 = 0;
              }
            }
LAB_01a9529c:
          }
LAB_01a952a4:
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar24 != (uint *)0x0)) && (*puVar24 != 0)) &&
             ((uVar30 = puVar24[1], uVar30 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar24 + lVar33 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar33 != 0) {
              uVar21 = 0;
              if ((ulong)uVar30 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar30);
              }
              if (*puVar24 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc0278) {
                *(short *)(*(long *)(PTR_DAT_04bc0278 + 8) + (long)(int)uVar21 * 2) = (short)uVar16;
              }
            }
          }
          uVar30 = *puVar1;
          if (uVar30 != 0) {
            cVar14 = *pcVar22;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar11 + 0x78) = 0xffffffff;
                *pcVar22 = '\x01';
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                uVar30 = *puVar1;
              }
              else {
                uVar16 = *(uint *)(puVar11 + 8);
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar30 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_01a95420;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar30;
              uVar30 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar30 = 0, puVar1 == puVar24)) goto LAB_01a95420;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar24);
              if (lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)(puVar11 + 8) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar33 + 4);
              while (piVar18[-1] != -0x29f9593c) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01a9541c;
              }
              iVar13 = 0;
              if (*piVar18 != -1) {
                iVar13 = *piVar18;
              }
              *(int *)(puVar11 + 8) = iVar13;
              uVar30 = *puVar1;
              if (uVar30 == 0) break;
            } while( true );
          }
LAB_01a9541c:
          uVar30 = 0;
LAB_01a95420:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_05322b78 == '\x01') && (DAT_05322b7c == uVar30)) {
              uVar16 = DAT_05322b80;
              if (0x19 < DAT_05322b80) goto LAB_01a956e0;
            }
            else {
              if ((DAT_05322c68 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322c68);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322b88 = 0x1a00000000;
                  DAT_05322b90 = (undefined8 *)&DAT_05322b98;
                  __cxa_guard_release(&DAT_05322c68);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322c70 & 1) == 0) {
                DAT_05322c70 = 1;
                if (((DAT_05322d48 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05322d48), iVar13 != 0)) {
                  DAT_05322c74 = 0xffffffff00000000;
                  DAT_05322c7c = 0xffffffff00000000;
                  DAT_05322c84 = 0xffffffff00000000;
                  DAT_05322c8c = 0xffffffff00000000;
                  DAT_05322c94 = 0xffffffff00000000;
                  DAT_05322c9c = 0xffffffff00000000;
                  DAT_05322ca4 = 0xffffffff00000000;
                  DAT_05322cac = 0xffffffff00000000;
                  DAT_05322cb4 = 0xffffffff00000000;
                  DAT_05322cbc = 0xffffffff00000000;
                  DAT_05322cc4 = 0xffffffff00000000;
                  DAT_05322ccc = 0xffffffff00000000;
                  DAT_05322cd4 = 0xffffffff00000000;
                  DAT_05322cdc = 0xffffffff00000000;
                  DAT_05322ce4 = 0xffffffff00000000;
                  DAT_05322cec = 0xffffffff00000000;
                  DAT_05322cf4 = 0xffffffff00000000;
                  DAT_05322cfc = 0xffffffff00000000;
                  DAT_05322d04 = 0xffffffff00000000;
                  DAT_05322d0c = 0xffffffff00000000;
                  DAT_05322d14 = 0xffffffff00000000;
                  DAT_05322d1c = 0xffffffff00000000;
                  DAT_05322d24 = 0xffffffff00000000;
                  DAT_05322d2c = 0xffffffff00000000;
                  DAT_05322d34 = 0xffffffff00000000;
                  DAT_05322d3c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05322d48);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a32960)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar17 = 0;
                    do {
                      if (pbVar32[lVar17] == 0) {
LAB_01a95574:
                        iVar13 = (int)lVar17;
joined_r0x01a95578:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_01a95580;
                      }
                      if (pbVar32[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_01a95574;
                      }
                      if (pbVar32[lVar17 + 2] == 0) {
                        iVar13 = (int)lVar17 + 2;
                        goto joined_r0x01a95578;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar13 = 0;
LAB_01a95580:
                    memcpy(local_174,pbVar32,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar16 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar21 = crc32b(uVar21,uVar16,0x4c11db7);
                      uVar16 = (uint)*pbVar32;
                    } while (uVar16 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05322c74 + lVar33) = uVar21;
                  *(int *)((long)&DAT_05322c74 + lVar33 * 8 + 4) = (int)lVar33;
                  iVar13 = (int)DAT_05322b88;
                  if ((int)DAT_05322b88 < DAT_05322b88._4_4_) {
                    DAT_05322b90[(int)DAT_05322b88] = &DAT_05322c74 + lVar33;
                    iVar13 = (int)DAT_05322b88 + 1;
                    DAT_05322b88 = CONCAT44(DAT_05322b88._4_4_,iVar13);
                  }
                  puVar28 = DAT_05322b90;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 0x1a);
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = (uint *)puVar28[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = (uint *)puVar28[uVar23];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        puVar28[uVar23] = puVar24;
                        puVar28[uVar19] = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar27 = puVar28 + uVar23 + 1;
                      do {
                        puVar24 = (uint *)*puVar27;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar27[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a95860;
LAB_01a95810:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar27[-1] = puVar24;
                          *puVar27 = puVar26;
                          puVar29 = (uint *)puVar27[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a95810;
LAB_01a95860:
                          if (puVar29 == (uint *)0x0) goto LAB_01a95810;
                          if (*puVar24 <= *puVar29) goto LAB_01a95810;
                          uVar16 = uVar20 + 1;
                          *puVar27 = puVar29;
                          puVar27[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar27 = puVar27 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = (uint *)puVar28[uVar16];
                    uVar21 = uVar16;
                    do {
                      puVar26 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar24;
                        puVar28[uVar23] = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05322b84 = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05322b84 != '\x01') goto LAB_01a956e0;
              if ((int)DAT_05322b88 == 0) {
LAB_01a956e0:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322b88 < 2) {
                  uVar21 = 0;
                  puVar24 = (uint *)*DAT_05322b90;
                  uVar16 = uVar21;
                  if (puVar24 != (uint *)0x0) goto LAB_01a956b0;
joined_r0x01a956c4:
                  if (uVar16 < 0x1a) {
                    uVar16 = *(uint *)(DAT_05322b90[uVar16] + 4);
                    if (uVar16 < 0x1a) {
                      DAT_05322b78 = '\x01';
                      DAT_05322b7c = uVar30;
                      DAT_05322b80 = uVar16;
                      goto LAB_01a95c94;
                    }
                    goto LAB_01a956e0;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar13 = (int)DAT_05322b88 + -1;
                  do {
                    iVar15 = iVar13 + uVar21;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar21)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar16 = iVar15 >> 1;
                    if ((uint *)DAT_05322b90[(int)uVar16] == (uint *)0x0) goto joined_r0x01a956c4;
                    uVar20 = *(uint *)DAT_05322b90[(int)uVar16];
                    if (uVar20 == uVar30) goto joined_r0x01a956c4;
                    if (uVar20 < uVar30) {
                      uVar21 = uVar16 + 1;
                    }
                    else {
                      iVar13 = uVar16 - 1;
                    }
                  } while ((int)uVar21 < iVar13);
                  puVar24 = (uint *)DAT_05322b90[(int)uVar21];
                  uVar16 = uVar21;
                  if (puVar24 == (uint *)0x0) goto joined_r0x01a956c4;
LAB_01a956b0:
                  uVar16 = uVar21;
                  if (*puVar24 == uVar30) goto joined_r0x01a956c4;
                }
                uVar16 = 0;
              }
            }
          }
          else {
            if ((DAT_053229a0 == '\x01') && (DAT_053229a4 == uVar30)) {
              uVar16 = DAT_053229a8;
              if (0x19 < DAT_053229a8) goto LAB_01a95c2c;
            }
            else {
              if ((DAT_05322a90 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322a90);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_053229b0 = 0x1a00000000;
                  DAT_053229b8 = &DAT_053229c0;
                  __cxa_guard_release(&DAT_05322a90);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322a98 & 1) == 0) {
                DAT_05322a98 = 1;
                if (((DAT_05322b70 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05322b70), iVar13 != 0)) {
                  DAT_05322a9c = 0xffffffff00000000;
                  DAT_05322aa4 = 0xffffffff00000000;
                  DAT_05322aac = 0xffffffff00000000;
                  DAT_05322ab4 = 0xffffffff00000000;
                  DAT_05322abc = 0xffffffff00000000;
                  DAT_05322ac4 = 0xffffffff00000000;
                  DAT_05322acc = 0xffffffff00000000;
                  DAT_05322ad4 = 0xffffffff00000000;
                  DAT_05322adc = 0xffffffff00000000;
                  DAT_05322ae4 = 0xffffffff00000000;
                  DAT_05322aec = 0xffffffff00000000;
                  DAT_05322af4 = 0xffffffff00000000;
                  DAT_05322afc = 0xffffffff00000000;
                  DAT_05322b04 = 0xffffffff00000000;
                  DAT_05322b0c = 0xffffffff00000000;
                  DAT_05322b14 = 0xffffffff00000000;
                  DAT_05322b1c = 0xffffffff00000000;
                  DAT_05322b24 = 0xffffffff00000000;
                  DAT_05322b2c = 0xffffffff00000000;
                  DAT_05322b34 = 0xffffffff00000000;
                  DAT_05322b3c = 0xffffffff00000000;
                  DAT_05322b44 = 0xffffffff00000000;
                  DAT_05322b4c = 0xffffffff00000000;
                  DAT_05322b54 = 0xffffffff00000000;
                  DAT_05322b5c = 0xffffffff00000000;
                  DAT_05322b64 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05322b70);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a32718)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar17 = 0;
                    do {
                      if (pbVar32[lVar17] == 0) {
LAB_01a95948:
                        iVar13 = (int)lVar17;
joined_r0x01a9594c:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_01a95954;
                      }
                      if (pbVar32[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_01a95948;
                      }
                      if (pbVar32[lVar17 + 2] == 0) {
                        iVar13 = (int)lVar17 + 2;
                        goto joined_r0x01a9594c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar13 = 0;
LAB_01a95954:
                    memcpy(local_174,pbVar32,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar16 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar21 = crc32b(uVar21,uVar16,0x4c11db7);
                      uVar16 = (uint)*pbVar32;
                    } while (uVar16 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05322a9c + lVar33) = uVar21;
                  *(int *)((long)&DAT_05322a9c + lVar33 * 8 + 4) = (int)lVar33;
                  iVar13 = (int)DAT_053229b0;
                  if ((int)DAT_053229b0 < DAT_053229b0._4_4_) {
                    *(undefined8 **)(DAT_053229b8 + (long)(int)DAT_053229b0 * 8) =
                         &DAT_05322a9c + lVar33;
                    iVar13 = (int)DAT_053229b0 + 1;
                    DAT_053229b0 = CONCAT44(DAT_053229b0._4_4_,iVar13);
                  }
                  puVar12 = DAT_053229b8;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 0x1a);
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        *(uint **)(puVar12 + uVar23 * 8) = puVar24;
                        *(uint **)(puVar12 + uVar19 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar28 = (undefined8 *)(puVar12 + uVar23 * 8 + 8);
                      do {
                        puVar24 = (uint *)*puVar28;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar28[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a95bd0;
LAB_01a95b80:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar28[-1] = puVar24;
                          *puVar28 = puVar26;
                          puVar29 = (uint *)puVar28[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a95b80;
LAB_01a95bd0:
                          if (puVar29 == (uint *)0x0) goto LAB_01a95b80;
                          if (*puVar24 <= *puVar29) goto LAB_01a95b80;
                          uVar16 = uVar20 + 1;
                          *puVar28 = puVar29;
                          puVar28[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar16 * 8);
                    uVar21 = uVar16;
                    do {
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8 + -8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        *(uint **)(puVar12 + uVar23 * 8 + -8) = puVar24;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_053229ac = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_053229ac != '\x01') goto LAB_01a95c2c;
              if ((int)DAT_053229b0 == 0) {
LAB_01a95c2c:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_053229b0 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar13 = (int)DAT_053229b0 + -1;
                  do {
                    iVar15 = iVar13 + uVar16;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar16)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar21 = iVar15 >> 1;
                    if (*(uint **)(DAT_053229b8 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x01a95c5c;
                    uVar20 = **(uint **)(DAT_053229b8 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar30) goto joined_r0x01a95c5c;
                    if (uVar20 < uVar30) {
                      uVar16 = uVar21 + 1;
                    }
                    else {
                      iVar13 = uVar21 - 1;
                    }
                  } while ((int)uVar16 < iVar13);
                }
                uVar21 = uVar16;
                if ((*(uint **)(DAT_053229b8 + (long)(int)uVar16 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053229b8 + (long)(int)uVar16 * 8) == uVar30)) {
joined_r0x01a95c5c:
                  if (uVar21 < 0x1a) {
                    uVar16 = *(uint *)(*(long *)(DAT_053229b8 + (ulong)uVar21 * 8) + 4);
                    if (uVar16 < 0x1a) {
                      DAT_053229a0 = '\x01';
                      DAT_053229a4 = uVar30;
                      DAT_053229a8 = uVar16;
                      goto LAB_01a95c8c;
                    }
                    goto LAB_01a95c2c;
                  }
                }
                uVar16 = 0;
              }
            }
LAB_01a95c8c:
          }
LAB_01a95c94:
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar24 != (uint *)0x0)) && (*puVar24 != 0)) &&
             ((uVar30 = puVar24[1], uVar30 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar24 + lVar33 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar33 != 0) {
              uVar21 = 0;
              if ((ulong)uVar30 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar30);
              }
              if (*puVar24 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc0280) {
                *(short *)(*(long *)(PTR_DAT_04bc0280 + 8) + (long)(int)uVar21 * 2) = (short)uVar16;
              }
            }
          }
          uVar30 = *puVar1;
          if (uVar30 != 0) {
            cVar14 = *pcVar22;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar11 + 0x78) = 0xffffffff;
                *pcVar22 = '\x01';
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                uVar30 = *puVar1;
              }
              else {
                uVar16 = *(uint *)(puVar11 + 0xc);
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar30 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_01a95e10;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar30;
              uVar30 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar30 = 0, puVar1 == puVar24)) goto LAB_01a95e10;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar24);
              if (lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)(puVar11 + 0xc) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar33 + 4);
              while (piVar18[-1] != 0x6b749e8a) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01a95e0c;
              }
              iVar13 = 0;
              if (*piVar18 != -1) {
                iVar13 = *piVar18;
              }
              *(int *)(puVar11 + 0xc) = iVar13;
              uVar30 = *puVar1;
              if (uVar30 == 0) break;
            } while( true );
          }
LAB_01a95e0c:
          uVar30 = 0;
LAB_01a95e10:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_05322de8 == '\x01') && (DAT_05322dec == uVar30)) {
              uVar16 = DAT_05322df0;
              if (5 < DAT_05322df0) goto LAB_01a960e0;
            }
            else {
              if ((DAT_05322e38 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322e38);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322df8 = 0x600000000;
                  DAT_05322e00 = (undefined8 *)&DAT_05322e08;
                  __cxa_guard_release(&DAT_05322e38);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322e40 & 1) == 0) {
                DAT_05322e40 = 1;
                if (((DAT_05322e78 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05322e78), iVar13 != 0)) {
                  DAT_05322e44 = 0xffffffff00000000;
                  DAT_05322e4c = 0xffffffff00000000;
                  DAT_05322e54 = 0xffffffff00000000;
                  DAT_05322e5c = 0xffffffff00000000;
                  DAT_05322e64 = 0xffffffff00000000;
                  DAT_05322e6c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05322e78);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a32ac8)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar17 = 0;
                    do {
                      if (pbVar32[lVar17] == 0) {
LAB_01a95f68:
                        iVar13 = (int)lVar17;
joined_r0x01a95f6c:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_01a95f74;
                      }
                      if (pbVar32[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_01a95f68;
                      }
                      if (pbVar32[lVar17 + 2] == 0) {
                        iVar13 = (int)lVar17 + 2;
                        goto joined_r0x01a95f6c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar13 = 0;
LAB_01a95f74:
                    memcpy(local_174,pbVar32,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar16 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar21 = crc32b(uVar21,uVar16,0x4c11db7);
                      uVar16 = (uint)*pbVar32;
                    } while (uVar16 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05322e44 + lVar33) = uVar21;
                  *(int *)((long)&DAT_05322e44 + lVar33 * 8 + 4) = (int)lVar33;
                  iVar13 = (int)DAT_05322df8;
                  if ((int)DAT_05322df8 < DAT_05322df8._4_4_) {
                    DAT_05322e00[(int)DAT_05322df8] = &DAT_05322e44 + lVar33;
                    iVar13 = (int)DAT_05322df8 + 1;
                    DAT_05322df8 = CONCAT44(DAT_05322df8._4_4_,iVar13);
                  }
                  puVar28 = DAT_05322e00;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 6);
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = (uint *)puVar28[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = (uint *)puVar28[uVar23];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        puVar28[uVar23] = puVar24;
                        puVar28[uVar19] = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar27 = puVar28 + uVar23 + 1;
                      do {
                        puVar24 = (uint *)*puVar27;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar27[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a96260;
LAB_01a96210:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar27[-1] = puVar24;
                          *puVar27 = puVar26;
                          puVar29 = (uint *)puVar27[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a96210;
LAB_01a96260:
                          if (puVar29 == (uint *)0x0) goto LAB_01a96210;
                          if (*puVar24 <= *puVar29) goto LAB_01a96210;
                          uVar16 = uVar20 + 1;
                          *puVar27 = puVar29;
                          puVar27[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar27 = puVar27 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = (uint *)puVar28[uVar16];
                    uVar21 = uVar16;
                    do {
                      puVar26 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar24;
                        puVar28[uVar23] = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05322df4 = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05322df4 != '\x01') goto LAB_01a960e0;
              if ((int)DAT_05322df8 == 0) {
LAB_01a960e0:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322df8 < 2) {
                  uVar21 = 0;
                  puVar24 = (uint *)*DAT_05322e00;
                  uVar16 = uVar21;
                  if (puVar24 != (uint *)0x0) goto LAB_01a960b0;
joined_r0x01a960c4:
                  if (uVar16 < 6) {
                    uVar16 = *(uint *)(DAT_05322e00[uVar16] + 4);
                    if (uVar16 < 6) {
                      DAT_05322de8 = '\x01';
                      DAT_05322dec = uVar30;
                      DAT_05322df0 = uVar16;
                      goto LAB_01a96694;
                    }
                    goto LAB_01a960e0;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar13 = (int)DAT_05322df8 + -1;
                  do {
                    iVar15 = iVar13 + uVar21;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar21)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar16 = iVar15 >> 1;
                    if ((uint *)DAT_05322e00[(int)uVar16] == (uint *)0x0) goto joined_r0x01a960c4;
                    uVar20 = *(uint *)DAT_05322e00[(int)uVar16];
                    if (uVar20 == uVar30) goto joined_r0x01a960c4;
                    if (uVar20 < uVar30) {
                      uVar21 = uVar16 + 1;
                    }
                    else {
                      iVar13 = uVar16 - 1;
                    }
                  } while ((int)uVar21 < iVar13);
                  puVar24 = (uint *)DAT_05322e00[(int)uVar21];
                  uVar16 = uVar21;
                  if (puVar24 == (uint *)0x0) goto joined_r0x01a960c4;
LAB_01a960b0:
                  uVar16 = uVar21;
                  if (*puVar24 == uVar30) goto joined_r0x01a960c4;
                }
                uVar16 = 0;
              }
            }
          }
          else {
            if ((DAT_05322d50 == '\x01') && (DAT_05322d54 == uVar30)) {
              uVar16 = DAT_05322d58;
              if (5 < DAT_05322d58) goto LAB_01a9662c;
            }
            else {
              if ((DAT_05322da0 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322da0);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322d60 = 0x600000000;
                  DAT_05322d68 = &DAT_05322d70;
                  __cxa_guard_release(&DAT_05322da0);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322da8 & 1) == 0) {
                DAT_05322da8 = 1;
                if (((DAT_05322de0 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05322de0), iVar13 != 0)) {
                  DAT_05322dac = 0xffffffff00000000;
                  DAT_05322db4 = 0xffffffff00000000;
                  DAT_05322dbc = 0xffffffff00000000;
                  DAT_05322dc4 = 0xffffffff00000000;
                  DAT_05322dcc = 0xffffffff00000000;
                  DAT_05322dd4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05322de0);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a32a60)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar17 = 0;
                    do {
                      if (pbVar32[lVar17] == 0) {
LAB_01a96348:
                        iVar13 = (int)lVar17;
joined_r0x01a9634c:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_01a96354;
                      }
                      if (pbVar32[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_01a96348;
                      }
                      if (pbVar32[lVar17 + 2] == 0) {
                        iVar13 = (int)lVar17 + 2;
                        goto joined_r0x01a9634c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar13 = 0;
LAB_01a96354:
                    memcpy(local_174,pbVar32,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar16 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar21 = crc32b(uVar21,uVar16,0x4c11db7);
                      uVar16 = (uint)*pbVar32;
                    } while (uVar16 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05322dac + lVar33) = uVar21;
                  *(int *)((long)&DAT_05322dac + lVar33 * 8 + 4) = (int)lVar33;
                  iVar13 = (int)DAT_05322d60;
                  if ((int)DAT_05322d60 < DAT_05322d60._4_4_) {
                    *(undefined8 **)(DAT_05322d68 + (long)(int)DAT_05322d60 * 8) =
                         &DAT_05322dac + lVar33;
                    iVar13 = (int)DAT_05322d60 + 1;
                    DAT_05322d60 = CONCAT44(DAT_05322d60._4_4_,iVar13);
                  }
                  puVar12 = DAT_05322d68;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 6);
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        *(uint **)(puVar12 + uVar23 * 8) = puVar24;
                        *(uint **)(puVar12 + uVar19 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar28 = (undefined8 *)(puVar12 + uVar23 * 8 + 8);
                      do {
                        puVar24 = (uint *)*puVar28;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar28[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a965d0;
LAB_01a96580:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar28[-1] = puVar24;
                          *puVar28 = puVar26;
                          puVar29 = (uint *)puVar28[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a96580;
LAB_01a965d0:
                          if (puVar29 == (uint *)0x0) goto LAB_01a96580;
                          if (*puVar24 <= *puVar29) goto LAB_01a96580;
                          uVar16 = uVar20 + 1;
                          *puVar28 = puVar29;
                          puVar28[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar16 * 8);
                    uVar21 = uVar16;
                    do {
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8 + -8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        *(uint **)(puVar12 + uVar23 * 8 + -8) = puVar24;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05322d5c = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05322d5c != '\x01') goto LAB_01a9662c;
              if ((int)DAT_05322d60 == 0) {
LAB_01a9662c:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322d60 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar13 = (int)DAT_05322d60 + -1;
                  do {
                    iVar15 = iVar13 + uVar16;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar16)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar21 = iVar15 >> 1;
                    if (*(uint **)(DAT_05322d68 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x01a9665c;
                    uVar20 = **(uint **)(DAT_05322d68 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar30) goto joined_r0x01a9665c;
                    if (uVar20 < uVar30) {
                      uVar16 = uVar21 + 1;
                    }
                    else {
                      iVar13 = uVar21 - 1;
                    }
                  } while ((int)uVar16 < iVar13);
                }
                uVar21 = uVar16;
                if ((*(uint **)(DAT_05322d68 + (long)(int)uVar16 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05322d68 + (long)(int)uVar16 * 8) == uVar30)) {
joined_r0x01a9665c:
                  if (uVar21 < 6) {
                    uVar16 = *(uint *)(*(long *)(DAT_05322d68 + (ulong)uVar21 * 8) + 4);
                    if (uVar16 < 6) {
                      DAT_05322d50 = '\x01';
                      DAT_05322d54 = uVar30;
                      DAT_05322d58 = uVar16;
                      goto LAB_01a9668c;
                    }
                    goto LAB_01a9662c;
                  }
                }
                uVar16 = 0;
              }
            }
LAB_01a9668c:
          }
LAB_01a96694:
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar24 != (uint *)0x0)) && (*puVar24 != 0)) &&
             ((uVar30 = puVar24[1], uVar30 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar24 + lVar33 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar33 != 0) {
              uVar21 = 0;
              if ((ulong)uVar30 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar30);
              }
              if (*puVar24 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc0288) {
                *(short *)(*(long *)(PTR_DAT_04bc0288 + 8) + (long)(int)uVar21 * 2) = (short)uVar16;
              }
            }
          }
          uVar30 = *puVar1;
          if (uVar30 != 0) {
            cVar14 = *pcVar22;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar11 + 0x78) = 0xffffffff;
                *pcVar22 = '\x01';
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                uVar30 = *puVar1;
              }
              else {
                uVar16 = *(uint *)(puVar11 + 0x10);
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar30 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_01a96810;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar30;
              uVar30 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar30 = 0, puVar1 == puVar24)) goto LAB_01a96810;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar24);
              if (lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)(puVar11 + 0x10) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar33 + 4);
              while (piVar18[-1] != 0x29c41a0d) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01a9680c;
              }
              iVar13 = 0;
              if (*piVar18 != -1) {
                iVar13 = *piVar18;
              }
              *(int *)(puVar11 + 0x10) = iVar13;
              uVar30 = *puVar1;
              if (uVar30 == 0) break;
            } while( true );
          }
LAB_01a9680c:
          uVar30 = 0;
LAB_01a96810:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_05323138 == '\x01') && (DAT_0532313c == uVar30)) {
              uVar16 = DAT_05323140;
              if (0x27 < DAT_05323140) goto LAB_01a96ae0;
            }
            else {
              if ((DAT_05323298 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05323298);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05323148 = 0x2800000000;
                  DAT_05323150 = (undefined8 *)&DAT_05323158;
                  __cxa_guard_release(&DAT_05323298);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_053232a0 & 1) == 0) {
                DAT_053232a0 = 1;
                if (((DAT_053233e8 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_053233e8), iVar13 != 0)) {
                  DAT_053232a4 = 0xffffffff00000000;
                  DAT_053232ac = 0xffffffff00000000;
                  DAT_053232b4 = 0xffffffff00000000;
                  DAT_053232bc = 0xffffffff00000000;
                  DAT_053232c4 = 0xffffffff00000000;
                  DAT_053232cc = 0xffffffff00000000;
                  DAT_053232d4 = 0xffffffff00000000;
                  DAT_053232dc = 0xffffffff00000000;
                  DAT_053232e4 = 0xffffffff00000000;
                  DAT_053232ec = 0xffffffff00000000;
                  DAT_053232f4 = 0xffffffff00000000;
                  DAT_053232fc = 0xffffffff00000000;
                  DAT_05323304 = 0xffffffff00000000;
                  DAT_0532330c = 0xffffffff00000000;
                  DAT_05323314 = 0xffffffff00000000;
                  DAT_0532331c = 0xffffffff00000000;
                  DAT_05323324 = 0xffffffff00000000;
                  DAT_0532332c = 0xffffffff00000000;
                  DAT_05323334 = 0xffffffff00000000;
                  DAT_0532333c = 0xffffffff00000000;
                  DAT_05323344 = 0xffffffff00000000;
                  DAT_0532334c = 0xffffffff00000000;
                  DAT_05323354 = 0xffffffff00000000;
                  DAT_0532335c = 0xffffffff00000000;
                  DAT_05323364 = 0xffffffff00000000;
                  DAT_0532336c = 0xffffffff00000000;
                  DAT_05323374 = 0xffffffff00000000;
                  DAT_0532337c = 0xffffffff00000000;
                  DAT_05323384 = 0xffffffff00000000;
                  DAT_0532338c = 0xffffffff00000000;
                  DAT_05323394 = 0xffffffff00000000;
                  DAT_0532339c = 0xffffffff00000000;
                  DAT_053233a4 = 0xffffffff00000000;
                  DAT_053233ac = 0xffffffff00000000;
                  DAT_053233b4 = 0xffffffff00000000;
                  DAT_053233bc = 0xffffffff00000000;
                  DAT_053233c4 = 0xffffffff00000000;
                  DAT_053233cc = 0xffffffff00000000;
                  DAT_053233d4 = 0xffffffff00000000;
                  DAT_053233dc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053233e8);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = *(byte **)(PTR_DAT_04bc02a0 + lVar33 * 8 + 0x1a0);
                  if (local_174 != pbVar32) {
                    lVar17 = 0;
                    do {
                      if (pbVar32[lVar17] == 0) {
LAB_01a96968:
                        iVar13 = (int)lVar17;
joined_r0x01a9696c:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_01a96974;
                      }
                      if (pbVar32[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_01a96968;
                      }
                      if (pbVar32[lVar17 + 2] == 0) {
                        iVar13 = (int)lVar17 + 2;
                        goto joined_r0x01a9696c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar13 = 0;
LAB_01a96974:
                    memcpy(local_174,pbVar32,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar16 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar21 = crc32b(uVar21,uVar16,0x4c11db7);
                      uVar16 = (uint)*pbVar32;
                    } while (uVar16 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_053232a4 + lVar33) = uVar21;
                  *(int *)((long)&DAT_053232a4 + lVar33 * 8 + 4) = (int)lVar33;
                  iVar13 = (int)DAT_05323148;
                  if ((int)DAT_05323148 < DAT_05323148._4_4_) {
                    DAT_05323150[(int)DAT_05323148] = &DAT_053232a4 + lVar33;
                    iVar13 = (int)DAT_05323148 + 1;
                    DAT_05323148 = CONCAT44(DAT_05323148._4_4_,iVar13);
                  }
                  puVar28 = DAT_05323150;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 0x28);
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = (uint *)puVar28[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = (uint *)puVar28[uVar23];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        puVar28[uVar23] = puVar24;
                        puVar28[uVar19] = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar27 = puVar28 + uVar23 + 1;
                      do {
                        puVar24 = (uint *)*puVar27;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar27[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a96c60;
LAB_01a96c10:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar27[-1] = puVar24;
                          *puVar27 = puVar26;
                          puVar29 = (uint *)puVar27[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a96c10;
LAB_01a96c60:
                          if (puVar29 == (uint *)0x0) goto LAB_01a96c10;
                          if (*puVar24 <= *puVar29) goto LAB_01a96c10;
                          uVar16 = uVar20 + 1;
                          *puVar27 = puVar29;
                          puVar27[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar27 = puVar27 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = (uint *)puVar28[uVar16];
                    uVar21 = uVar16;
                    do {
                      puVar26 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar24;
                        puVar28[uVar23] = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05323144 = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05323144 != '\x01') goto LAB_01a96ae0;
              if ((int)DAT_05323148 == 0) {
LAB_01a96ae0:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05323148 < 2) {
                  uVar21 = 0;
                  puVar24 = (uint *)*DAT_05323150;
                  uVar16 = uVar21;
                  if (puVar24 != (uint *)0x0) goto LAB_01a96ab0;
joined_r0x01a96ac4:
                  if (uVar16 < 0x28) {
                    uVar16 = *(uint *)(DAT_05323150[uVar16] + 4);
                    if (uVar16 < 0x28) {
                      DAT_05323138 = '\x01';
                      DAT_0532313c = uVar30;
                      DAT_05323140 = uVar16;
                      goto LAB_01a97094;
                    }
                    goto LAB_01a96ae0;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar13 = (int)DAT_05323148 + -1;
                  do {
                    iVar15 = iVar13 + uVar21;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar21)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar16 = iVar15 >> 1;
                    if ((uint *)DAT_05323150[(int)uVar16] == (uint *)0x0) goto joined_r0x01a96ac4;
                    uVar20 = *(uint *)DAT_05323150[(int)uVar16];
                    if (uVar20 == uVar30) goto joined_r0x01a96ac4;
                    if (uVar20 < uVar30) {
                      uVar21 = uVar16 + 1;
                    }
                    else {
                      iVar13 = uVar16 - 1;
                    }
                  } while ((int)uVar21 < iVar13);
                  puVar24 = (uint *)DAT_05323150[(int)uVar21];
                  uVar16 = uVar21;
                  if (puVar24 == (uint *)0x0) goto joined_r0x01a96ac4;
LAB_01a96ab0:
                  uVar16 = uVar21;
                  if (*puVar24 == uVar30) goto joined_r0x01a96ac4;
                }
                uVar16 = 0;
              }
            }
          }
          else {
            if ((DAT_05322e80 == '\x01') && (DAT_05322e84 == uVar30)) {
              uVar16 = DAT_05322e88;
              if (0x27 < DAT_05322e88) goto LAB_01a9702c;
            }
            else {
              if ((DAT_05322fe0 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05322fe0);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05322e90 = 0x2800000000;
                  DAT_05322e98 = &DAT_05322ea0;
                  __cxa_guard_release(&DAT_05322fe0);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05322fe8 & 1) == 0) {
                DAT_05322fe8 = 1;
                if (((DAT_05323130 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05323130), iVar13 != 0)) {
                  DAT_05322fec = 0xffffffff00000000;
                  DAT_05322ff4 = 0xffffffff00000000;
                  DAT_05322ffc = 0xffffffff00000000;
                  DAT_05323004 = 0xffffffff00000000;
                  DAT_0532300c = 0xffffffff00000000;
                  DAT_05323014 = 0xffffffff00000000;
                  DAT_0532301c = 0xffffffff00000000;
                  DAT_05323024 = 0xffffffff00000000;
                  DAT_0532302c = 0xffffffff00000000;
                  DAT_05323034 = 0xffffffff00000000;
                  DAT_0532303c = 0xffffffff00000000;
                  DAT_05323044 = 0xffffffff00000000;
                  DAT_0532304c = 0xffffffff00000000;
                  DAT_05323054 = 0xffffffff00000000;
                  DAT_0532305c = 0xffffffff00000000;
                  DAT_05323064 = 0xffffffff00000000;
                  DAT_0532306c = 0xffffffff00000000;
                  DAT_05323074 = 0xffffffff00000000;
                  DAT_0532307c = 0xffffffff00000000;
                  DAT_05323084 = 0xffffffff00000000;
                  DAT_0532308c = 0xffffffff00000000;
                  DAT_05323094 = 0xffffffff00000000;
                  DAT_0532309c = 0xffffffff00000000;
                  DAT_053230a4 = 0xffffffff00000000;
                  DAT_053230ac = 0xffffffff00000000;
                  DAT_053230b4 = 0xffffffff00000000;
                  DAT_053230bc = 0xffffffff00000000;
                  DAT_053230c4 = 0xffffffff00000000;
                  DAT_053230cc = 0xffffffff00000000;
                  DAT_053230d4 = 0xffffffff00000000;
                  DAT_053230dc = 0xffffffff00000000;
                  DAT_053230e4 = 0xffffffff00000000;
                  DAT_053230ec = 0xffffffff00000000;
                  DAT_053230f4 = 0xffffffff00000000;
                  DAT_053230fc = 0xffffffff00000000;
                  DAT_05323104 = 0xffffffff00000000;
                  DAT_0532310c = 0xffffffff00000000;
                  DAT_05323114 = 0xffffffff00000000;
                  DAT_0532311c = 0xffffffff00000000;
                  DAT_05323124 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05323130);
                }
                lVar33 = 0;
                do {
                  local_75 = 0;
                  pbVar32 = (&PTR_DAT_04a32c98)[lVar33];
                  if (local_174 != pbVar32) {
                    lVar17 = 0;
                    do {
                      if (pbVar32[lVar17] == 0) {
LAB_01a96d48:
                        iVar13 = (int)lVar17;
joined_r0x01a96d4c:
                        if (0xff < iVar13) {
                          iVar13 = 0xff;
                        }
                        goto LAB_01a96d54;
                      }
                      if (pbVar32[lVar17 + 1] == 0) {
                        lVar17 = lVar17 + 1;
                        goto LAB_01a96d48;
                      }
                      if (pbVar32[lVar17 + 2] == 0) {
                        iVar13 = (int)lVar17 + 2;
                        goto joined_r0x01a96d4c;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    iVar13 = 0;
LAB_01a96d54:
                    memcpy(local_174,pbVar32,(long)iVar13);
                    local_174[iVar13] = 0;
                  }
                  uVar16 = (uint)*pbVar32;
                  if (*pbVar32 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0xffffffff;
                    do {
                      pbVar32 = pbVar32 + 1;
                      uVar21 = crc32b(uVar21,uVar16,0x4c11db7);
                      uVar16 = (uint)*pbVar32;
                    } while (uVar16 != 0);
                    uVar21 = ~uVar21;
                  }
                  *(uint *)(&DAT_05322fec + lVar33) = uVar21;
                  *(int *)((long)&DAT_05322fec + lVar33 * 8 + 4) = (int)lVar33;
                  iVar13 = (int)DAT_05322e90;
                  if ((int)DAT_05322e90 < DAT_05322e90._4_4_) {
                    *(undefined8 **)(DAT_05322e98 + (long)(int)DAT_05322e90 * 8) =
                         &DAT_05322fec + lVar33;
                    iVar13 = (int)DAT_05322e90 + 1;
                    DAT_05322e90 = CONCAT44(DAT_05322e90._4_4_,iVar13);
                  }
                  puVar12 = DAT_05322e98;
                  lVar33 = lVar33 + 1;
                } while (lVar33 != 0x28);
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        *(uint **)(puVar12 + uVar23 * 8) = puVar24;
                        *(uint **)(puVar12 + uVar19 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar28 = (undefined8 *)(puVar12 + uVar23 * 8 + 8);
                      do {
                        puVar24 = (uint *)*puVar28;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar28[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a96fd0;
LAB_01a96f80:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar28[-1] = puVar24;
                          *puVar28 = puVar26;
                          puVar29 = (uint *)puVar28[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a96f80;
LAB_01a96fd0:
                          if (puVar29 == (uint *)0x0) goto LAB_01a96f80;
                          if (*puVar24 <= *puVar29) goto LAB_01a96f80;
                          uVar16 = uVar20 + 1;
                          *puVar28 = puVar29;
                          puVar28[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar16 * 8);
                    uVar21 = uVar16;
                    do {
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8 + -8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        *(uint **)(puVar12 + uVar23 * 8 + -8) = puVar24;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05322e8c = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05322e8c != '\x01') goto LAB_01a9702c;
              if ((int)DAT_05322e90 == 0) {
LAB_01a9702c:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05322e90 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar13 = (int)DAT_05322e90 + -1;
                  do {
                    iVar15 = iVar13 + uVar16;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar16)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar21 = iVar15 >> 1;
                    if (*(uint **)(DAT_05322e98 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x01a9705c;
                    uVar20 = **(uint **)(DAT_05322e98 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar30) goto joined_r0x01a9705c;
                    if (uVar20 < uVar30) {
                      uVar16 = uVar21 + 1;
                    }
                    else {
                      iVar13 = uVar21 - 1;
                    }
                  } while ((int)uVar16 < iVar13);
                }
                uVar21 = uVar16;
                if ((*(uint **)(DAT_05322e98 + (long)(int)uVar16 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05322e98 + (long)(int)uVar16 * 8) == uVar30)) {
joined_r0x01a9705c:
                  if (uVar21 < 0x28) {
                    uVar16 = *(uint *)(*(long *)(DAT_05322e98 + (ulong)uVar21 * 8) + 4);
                    if (uVar16 < 0x28) {
                      DAT_05322e80 = '\x01';
                      DAT_05322e84 = uVar30;
                      DAT_05322e88 = uVar16;
                      goto LAB_01a9708c;
                    }
                    goto LAB_01a9702c;
                  }
                }
                uVar16 = 0;
              }
            }
LAB_01a9708c:
          }
LAB_01a97094:
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar24 != (uint *)0x0)) && (*puVar24 != 0)) &&
             ((uVar30 = puVar24[1], uVar30 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar24 + lVar33 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar33 != 0) {
              uVar21 = 0;
              if ((ulong)uVar30 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar30);
              }
              if (*puVar24 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc0290) {
                *(short *)(*(long *)(PTR_DAT_04bc0290 + 8) + (long)(int)uVar21 * 2) = (short)uVar16;
              }
            }
          }
          uVar30 = *puVar1;
          if (uVar30 != 0) {
            cVar14 = *pcVar22;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar11 + 0x78) = 0xffffffff;
                *pcVar22 = '\x01';
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                uVar30 = *puVar1;
              }
              else {
                uVar16 = *(uint *)(puVar11 + 0x14);
                if (-1 < (int)uVar16) {
                  if ((uint *)((long)puVar1 + (ulong)uVar16) != (uint *)0x0) {
                    uVar30 = *(uint *)((long)puVar1 + (ulong)uVar16);
                    goto LAB_01a97210;
                  }
                  break;
                }
                if (uVar16 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar30;
              uVar30 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar30 = 0, puVar1 == puVar24)) goto LAB_01a97210;
              lVar33 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar1 + (lVar33 - (long)puVar24);
              if (lVar33 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)(puVar11 + 0x14) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar18 = (int *)(lVar33 + 4);
              while (piVar18[-1] != 0x4d655154) {
                piVar18 = piVar18 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_01a9720c;
              }
              iVar13 = 0;
              if (*piVar18 != -1) {
                iVar13 = *piVar18;
              }
              *(int *)(puVar11 + 0x14) = iVar13;
              uVar30 = *puVar1;
              if (uVar30 == 0) break;
            } while( true );
          }
LAB_01a9720c:
          uVar30 = 0;
LAB_01a97210:
          if (((*puVar1 == 0) || (lVar33 = (long)puVar1 - (ulong)*puVar1, lVar33 == 0)) ||
             (*(char *)(lVar33 + 0xb) == '\0')) {
            if ((DAT_05323458 == '\x01') && (DAT_0532345c == uVar30)) {
              uVar16 = DAT_05323460;
              if (2 < DAT_05323460) goto LAB_01a97560;
            }
            else {
              if ((DAT_05323490 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05323490);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05323468 = 0x300000000;
                  DAT_05323470 = (undefined8 *)&DAT_05323478;
                  __cxa_guard_release(&DAT_05323490);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05323498 & 1) == 0) {
                DAT_05323498 = 1;
                if (((DAT_053234b8 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_053234b8), iVar13 != 0)) {
                  DAT_053234ac = 0xffffffff00000000;
                  DAT_0532349c = 0xffffffff00000000;
                  DAT_053234a4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053234b8);
                }
                uVar4 = crc32b(uVar3,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa6,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xbc,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb6,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                uVar4 = crc32b(uVar4,0xaa,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x81,0x4c11db7);
                uVar16 = crc32b(uVar4,0x97,0x4c11db7);
                DAT_0532349c = (ulong)~uVar16;
                iVar13 = (int)DAT_05323468;
                iVar15 = DAT_05323468._4_4_;
                if ((int)DAT_05323468 < DAT_05323468._4_4_) {
                  DAT_05323470[(int)DAT_05323468] = &DAT_0532349c;
                  iVar13 = (int)DAT_05323468 + 1;
                  DAT_05323468 = CONCAT44(DAT_05323468._4_4_,iVar13);
                  iVar15 = DAT_05323468._4_4_;
                }
                uVar4 = crc32b(0xffffffff,0xe5,0x4c11db7);
                uVar7 = crc32b(uVar4,0x80,0x4c11db7);
                uVar7 = crc32b(uVar7,0x8b,0x4c11db7);
                uVar7 = crc32b(uVar7,0xe5,0x4c11db7);
                uVar7 = crc32b(uVar7,0x88,0x4c11db7);
                uVar7 = crc32b(uVar7,0xa5,0x4c11db7);
                uVar7 = crc32b(uVar7,0xe3,0x4c11db7);
                uVar7 = crc32b(uVar7,0x83,0x4c11db7);
                uVar7 = crc32b(uVar7,0xa6,0x4c11db7);
                uVar7 = crc32b(uVar7,0xe3,0x4c11db7);
                uVar7 = crc32b(uVar7,0x83,0x4c11db7);
                uVar7 = crc32b(uVar7,0xbc,0x4c11db7);
                uVar7 = crc32b(uVar7,0xe3,0x4c11db7);
                uVar7 = crc32b(uVar7,0x82,0x4c11db7);
                uVar16 = crc32b(uVar7,0xb6,0x4c11db7);
                DAT_053234a4 = CONCAT44(1,~uVar16);
                if (iVar13 < iVar15) {
                  DAT_05323470[iVar13] = &DAT_053234a4;
                  iVar13 = (int)DAT_05323468 + 1;
                  DAT_05323468 = CONCAT44(DAT_05323468._4_4_,iVar13);
                  iVar15 = DAT_05323468._4_4_;
                }
                uVar4 = crc32b(uVar4,0x85,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb1,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe9,0x4c11db7);
                uVar4 = crc32b(uVar4,0x80,0x4c11db7);
                uVar4 = crc32b(uVar4,0x9a,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xa6,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xbc,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x82,0x4c11db7);
                uVar16 = crc32b(uVar4,0xb6,0x4c11db7);
                DAT_053234ac = CONCAT44(2,~uVar16);
                if (iVar13 < iVar15) {
                  DAT_05323470[iVar13] = &DAT_053234ac;
                  iVar13 = (int)DAT_05323468 + 1;
                  DAT_05323468 = CONCAT44(DAT_05323468._4_4_,iVar13);
                }
                puVar28 = DAT_05323470;
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = (uint *)puVar28[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = (uint *)puVar28[uVar23];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        puVar28[uVar23] = puVar24;
                        puVar28[uVar19] = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar27 = puVar28 + uVar23 + 1;
                      do {
                        puVar24 = (uint *)*puVar27;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar27[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a976e0;
LAB_01a97690:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar27[-1] = puVar24;
                          *puVar27 = puVar26;
                          puVar29 = (uint *)puVar27[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a97690;
LAB_01a976e0:
                          if (puVar29 == (uint *)0x0) goto LAB_01a97690;
                          if (*puVar24 <= *puVar29) goto LAB_01a97690;
                          uVar16 = uVar20 + 1;
                          *puVar27 = puVar29;
                          puVar27[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar27 = puVar27 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = (uint *)puVar28[uVar16];
                    uVar21 = uVar16;
                    do {
                      puVar26 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar24;
                        puVar28[uVar23] = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_05323464 = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_05323464 != '\x01') goto LAB_01a97560;
              if ((int)DAT_05323468 == 0) {
LAB_01a97560:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05323468 < 2) {
                  uVar21 = 0;
                  puVar24 = (uint *)*DAT_05323470;
                  uVar16 = uVar21;
                  if (puVar24 != (uint *)0x0) goto LAB_01a97530;
joined_r0x01a97544:
                  if (uVar16 < 3) {
                    uVar16 = *(uint *)(DAT_05323470[uVar16] + 4);
                    if (uVar16 < 3) {
                      DAT_05323458 = '\x01';
                      DAT_0532345c = uVar30;
                      DAT_05323460 = uVar16;
                      goto LAB_01a97b04;
                    }
                    goto LAB_01a97560;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar13 = (int)DAT_05323468 + -1;
                  do {
                    iVar15 = iVar13 + uVar21;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar21)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar16 = iVar15 >> 1;
                    if ((uint *)DAT_05323470[(int)uVar16] == (uint *)0x0) goto joined_r0x01a97544;
                    uVar20 = *(uint *)DAT_05323470[(int)uVar16];
                    if (uVar20 == uVar30) goto joined_r0x01a97544;
                    if (uVar20 < uVar30) {
                      uVar21 = uVar16 + 1;
                    }
                    else {
                      iVar13 = uVar16 - 1;
                    }
                  } while ((int)uVar21 < iVar13);
                  puVar24 = (uint *)DAT_05323470[(int)uVar21];
                  uVar16 = uVar21;
                  if (puVar24 == (uint *)0x0) goto joined_r0x01a97544;
LAB_01a97530:
                  uVar16 = uVar21;
                  if (*puVar24 == uVar30) goto joined_r0x01a97544;
                }
                uVar16 = 0;
              }
            }
          }
          else {
            if ((DAT_053233f0 == '\x01') && (DAT_053233f4 == uVar30)) {
              uVar16 = DAT_053233f8;
              if (2 < DAT_053233f8) goto LAB_01a97a9c;
            }
            else {
              if ((DAT_05323428 & 1) == 0) {
                iVar13 = __cxa_guard_acquire(&DAT_05323428);
                pcVar22 = PTR_DAT_04bbfeb0;
                if (iVar13 != 0) {
                  DAT_05323400 = 0x300000000;
                  DAT_05323408 = &DAT_05323410;
                  __cxa_guard_release(&DAT_05323428);
                  pcVar22 = PTR_DAT_04bbfeb0;
                }
              }
              if ((DAT_05323430 & 1) == 0) {
                DAT_05323430 = 1;
                if (((DAT_05323450 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(&DAT_05323450), iVar13 != 0)) {
                  DAT_05323444 = 0xffffffff00000000;
                  _DAT_05323434 = 0xffffffff00000000;
                  DAT_0532343c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05323450);
                }
                _DAT_05323434 = (ulong)~uVar8;
                iVar13 = (int)DAT_05323400;
                iVar15 = DAT_05323400._4_4_;
                if ((int)DAT_05323400 < DAT_05323400._4_4_) {
                  *(undefined4 **)(DAT_05323408 + (long)(int)DAT_05323400 * 8) = &DAT_05323434;
                  iVar13 = (int)DAT_05323400 + 1;
                  DAT_05323400 = CONCAT44(DAT_05323400._4_4_,iVar13);
                  iVar15 = DAT_05323400._4_4_;
                }
                uVar4 = crc32b(uVar2,0x55,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x69,0x4c11db7);
                uVar4 = crc32b(uVar4,0x71,0x4c11db7);
                uVar4 = crc32b(uVar4,0x75,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar4 = crc32b(uVar4,0x55,0x4c11db7);
                uVar4 = crc32b(uVar4,0x73,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar16 = crc32b(uVar4,0x72,0x4c11db7);
                DAT_0532343c = CONCAT44(1,~uVar16);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_05323408 + (long)iVar13 * 8) = &DAT_0532343c;
                  iVar13 = (int)DAT_05323400 + 1;
                  DAT_05323400 = CONCAT44(DAT_05323400._4_4_,iVar13);
                  iVar15 = DAT_05323400._4_4_;
                }
                uVar4 = crc32b(uVar2,0x43,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6d,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
                uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
                uVar4 = crc32b(uVar4,0x55,0x4c11db7);
                uVar4 = crc32b(uVar4,0x73,0x4c11db7);
                uVar4 = crc32b(uVar4,0x65,0x4c11db7);
                uVar16 = crc32b(uVar4,0x72,0x4c11db7);
                DAT_05323444 = CONCAT44(2,~uVar16);
                if (iVar13 < iVar15) {
                  *(undefined8 **)(DAT_05323408 + (long)iVar13 * 8) = &DAT_05323444;
                  iVar13 = (int)DAT_05323400 + 1;
                  DAT_05323400 = CONCAT44(DAT_05323400._4_4_,iVar13);
                }
                puVar12 = DAT_05323408;
                if (1 < iVar13) {
                  uVar21 = 0;
                  uVar16 = iVar13 - 1;
                  do {
                    if ((int)uVar16 <= (int)uVar21) break;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar16 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        *(uint **)(puVar12 + uVar23 * 8) = puVar24;
                        *(uint **)(puVar12 + uVar19 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar16;
                    uVar16 = uVar21;
                    if (~uVar19 + uVar25 != 0) {
                      puVar28 = (undefined8 *)(puVar12 + uVar23 * 8 + 8);
                      do {
                        puVar24 = (uint *)*puVar28;
                        uVar20 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar28[1];
                          if (puVar24 != (uint *)0x0) goto LAB_01a97a40;
LAB_01a979f0:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar28[-1] = puVar24;
                          *puVar28 = puVar26;
                          puVar29 = (uint *)puVar28[1];
                          puVar24 = puVar26;
                          uVar16 = uVar20;
                          if (puVar26 == (uint *)0x0) goto LAB_01a979f0;
LAB_01a97a40:
                          if (puVar29 == (uint *)0x0) goto LAB_01a979f0;
                          if (*puVar24 <= *puVar29) goto LAB_01a979f0;
                          uVar16 = uVar20 + 1;
                          *puVar28 = puVar29;
                          puVar28[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar16 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar16;
                    puVar24 = *(uint **)(puVar12 + (ulong)uVar16 * 8);
                    uVar21 = uVar16;
                    do {
                      puVar26 = *(uint **)(puVar12 + uVar23 * 8 + -8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar21 = (uint)uVar23;
                        *(uint **)(puVar12 + uVar23 * 8 + -8) = puVar24;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar16);
                }
                DAT_053233fc = '\x01';
                pcVar22 = PTR_DAT_04bbfeb0;
              }
              else if (DAT_053233fc != '\x01') goto LAB_01a97a9c;
              if ((int)DAT_05323400 == 0) {
LAB_01a97a9c:
                uVar16 = 0;
              }
              else {
                pcVar22 = PTR_DAT_04bbfeb0;
                if ((int)DAT_05323400 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  iVar13 = (int)DAT_05323400 + -1;
                  do {
                    iVar15 = iVar13 + uVar16;
                    if (iVar15 < 0 != SCARRY4(iVar13,uVar16)) {
                      iVar15 = iVar15 + 1;
                    }
                    uVar21 = iVar15 >> 1;
                    if (*(uint **)(DAT_05323408 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x01a97acc;
                    uVar20 = **(uint **)(DAT_05323408 + (long)(int)uVar21 * 8);
                    if (uVar20 == uVar30) goto joined_r0x01a97acc;
                    if (uVar20 < uVar30) {
                      uVar16 = uVar21 + 1;
                    }
                    else {
                      iVar13 = uVar21 - 1;
                    }
                  } while ((int)uVar16 < iVar13);
                }
                uVar21 = uVar16;
                if ((*(uint **)(DAT_05323408 + (long)(int)uVar16 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05323408 + (long)(int)uVar16 * 8) == uVar30)) {
joined_r0x01a97acc:
                  if (uVar21 < 3) {
                    uVar16 = *(uint *)(*(long *)(DAT_05323408 + (ulong)uVar21 * 8) + 4);
                    if (uVar16 < 3) {
                      DAT_053233f0 = '\x01';
                      DAT_053233f4 = uVar30;
                      DAT_053233f8 = uVar16;
                      goto LAB_01a97afc;
                    }
                    goto LAB_01a97a9c;
                  }
                }
                uVar16 = 0;
              }
            }
LAB_01a97afc:
          }
LAB_01a97b04:
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar24 != (uint *)0x0)) && (*puVar24 != 0)) &&
             ((uVar30 = puVar24[1], uVar30 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
            lVar33 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar24 + lVar33 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar33 != 0) {
              uVar21 = 0;
              if ((ulong)uVar30 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar33) / (ulong)uVar30);
              }
              if (*puVar24 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc0298) {
                *(short *)(*(long *)(PTR_DAT_04bc0298 + 8) + (long)(int)uVar21 * 2) = (short)uVar16;
              }
            }
          }
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar10);
  }
  return;
}

