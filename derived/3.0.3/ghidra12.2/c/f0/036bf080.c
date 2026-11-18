
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036bf080(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  char cVar18;
  undefined2 uVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  uint *puVar27;
  ulong uVar28;
  uint *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  uint *puVar32;
  uint uVar33;
  
  puVar13 = PTR_DAT_04bc23c8;
  if ((param_1 != (uint *)0x0) && (uVar10 = *param_1, uVar10 != 0)) {
    uVar14 = crc32b(0xffffffff,0xe7,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar14 = crc32b(uVar14,0xaa,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar33 = 0;
    uVar3 = crc32b(uVar14,0x93,0x4c11db7);
    uVar14 = crc32b(uVar2,0xaa,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe8,0x4c11db7);
    uVar14 = crc32b(uVar14,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x87,0x4c11db7);
    uVar14 = crc32b(uVar14,0x81,0x4c11db7);
    uVar2 = crc32b(uVar2,0xaa,0x4c11db7);
    uVar4 = crc32b(uVar14,0x97,0x4c11db7);
    uVar14 = crc32b(uVar2,0xe7,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar14 = crc32b(uVar14,0x94,0x4c11db7);
    uVar5 = crc32b(uVar2,0x50,0x4c11db7);
    uVar6 = crc32b(uVar14,0xb1,0x4c11db7);
    uVar7 = crc32b(uVar5,0x43,0x4c11db7);
    uVar14 = crc32b(0xffffffff,0x57,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar14 = crc32b(uVar14,0x69,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6e,0x4c11db7);
    uVar14 = crc32b(uVar14,100,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6f,0x4c11db7);
    uVar8 = crc32b(uVar14,0x77,0x4c11db7);
    uVar14 = crc32b(uVar5,0x72,0x4c11db7);
    uVar14 = crc32b(uVar14,0x65,0x4c11db7);
    uVar9 = crc32b(uVar14,0x65,0x4c11db7);
    pcVar17 = PTR_DAT_04bc23c0;
    do {
      if (((uVar33 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar16 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar33 + (uint)(ushort)param_1[2] * 8 + iVar16) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar18 = *pcVar17;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *pcVar17 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar21 = *(uint *)puVar13;
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar15 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_036bf340;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar15 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar15 = 0, puVar1 == puVar27)) goto LAB_036bf340;
              lVar11 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar1 + (lVar11 - (long)puVar27);
              if (lVar11 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)puVar13 = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar22 = (int *)(lVar11 + 4);
              while (piVar22[-1] != 0x613c3c15) {
                piVar22 = piVar22 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_036bf33c;
              }
              iVar16 = 0;
              if (*piVar22 != -1) {
                iVar16 = *piVar22;
              }
              *(int *)puVar13 = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_036bf33c:
          uVar15 = 0;
LAB_036bf340:
          if (((*puVar1 == 0) || (lVar11 = (long)puVar1 - (ulong)*puVar1, lVar11 == 0)) ||
             (*(char *)(lVar11 + 0xb) == '\0')) {
            if ((DAT_05ab2d78 == '\x01') && (DAT_05ab2d7c == uVar15)) {
              uVar21 = DAT_05ab2d80;
              if (2 < DAT_05ab2d80) goto LAB_036bf7a8;
            }
            else {
              if ((DAT_05ab2db0 & 1) == 0) {
                iVar16 = __cxa_guard_acquire(&DAT_05ab2db0);
                pcVar17 = PTR_DAT_04bc23c0;
                if (iVar16 != 0) {
                  DAT_05ab2d88 = 0x300000000;
                  DAT_05ab2d90 = (undefined8 *)&DAT_05ab2d98;
                  __cxa_guard_release(&DAT_05ab2db0);
                  pcVar17 = PTR_DAT_04bc23c0;
                }
              }
              if ((DAT_05ab2db8 & 1) == 0) {
                DAT_05ab2db8 = 1;
                if ((DAT_05ab2dd8 & 1) == 0) {
                  iVar16 = __cxa_guard_acquire(&DAT_05ab2dd8);
                  pcVar17 = PTR_DAT_04bc23c0;
                  if (iVar16 != 0) {
                    _DAT_05ab2dbc = 0xffffffff00000000;
                    DAT_05ab2dc4 = 0xffffffff00000000;
                    DAT_05ab2dcc = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_05ab2dd8);
                    pcVar17 = PTR_DAT_04bc23c0;
                  }
                }
                _DAT_05ab2dbc = (ulong)~uVar4;
                iVar16 = (int)DAT_05ab2d88;
                iVar20 = DAT_05ab2d88._4_4_;
                if ((int)DAT_05ab2d88 < DAT_05ab2d88._4_4_) {
                  DAT_05ab2d90[(int)DAT_05ab2d88] = &DAT_05ab2dbc;
                  iVar16 = (int)DAT_05ab2d88 + 1;
                  DAT_05ab2d88 = CONCAT44(DAT_05ab2d88._4_4_,iVar16);
                  iVar20 = DAT_05ab2d88._4_4_;
                }
                DAT_05ab2dc4 = CONCAT44(1,~uVar3);
                if (iVar16 < iVar20) {
                  DAT_05ab2d90[iVar16] = &DAT_05ab2dc4;
                  iVar16 = (int)DAT_05ab2d88 + 1;
                  DAT_05ab2d88 = CONCAT44(DAT_05ab2d88._4_4_,iVar16);
                  iVar20 = DAT_05ab2d88._4_4_;
                }
                uVar14 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar14 = crc32b(uVar14,0x8e,0x4c11db7);
                uVar14 = crc32b(uVar14,0x9b,0x4c11db7);
                uVar14 = crc32b(uVar14,0xe3,0x4c11db7);
                uVar14 = crc32b(uVar14,0x81,0x4c11db7);
                uVar14 = crc32b(uVar14,0x91,0x4c11db7);
                uVar14 = crc32b(uVar14,0xe5,0x4c11db7);
                uVar14 = crc32b(uVar14,0x90,0x4c11db7);
                uVar14 = crc32b(uVar14,0x88,0x4c11db7);
                uVar14 = crc32b(uVar14,0xe3,0x4c11db7);
                uVar14 = crc32b(uVar14,0x81,0x4c11db7);
                uVar14 = crc32b(uVar14,0x84,0x4c11db7);
                uVar14 = crc32b(uVar14,0xe7,0x4c11db7);
                uVar14 = crc32b(uVar14,0x9b,0x4c11db7);
                uVar14 = crc32b(uVar14,0xb8,0x4c11db7);
                uVar14 = crc32b(uVar14,0xe6,0x4c11db7);
                uVar14 = crc32b(uVar14,0x89,0x4c11db7);
                uVar21 = crc32b(uVar14,0x8b,0x4c11db7);
                DAT_05ab2dcc = CONCAT44(2,~uVar21);
                if (iVar16 < iVar20) {
                  DAT_05ab2d90[iVar16] = &DAT_05ab2dcc;
                  iVar16 = (int)DAT_05ab2d88 + 1;
                  DAT_05ab2d88 = CONCAT44(DAT_05ab2d88._4_4_,iVar16);
                }
                puVar31 = DAT_05ab2d90;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar21 = iVar16 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar25) break;
                    puVar27 = (uint *)puVar31[uVar25];
                    uVar23 = (ulong)uVar25;
                    if ((uVar21 - uVar25 & 1) == 0) {
                      uVar26 = uVar23;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar23 + 1;
                      puVar29 = (uint *)puVar31[uVar26];
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        puVar31[uVar26] = puVar27;
                        puVar31[uVar23] = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar21;
                    uVar21 = uVar25;
                    if (~uVar23 + uVar28 != 0) {
                      puVar30 = puVar31 + uVar26 + 1;
                      do {
                        puVar27 = (uint *)*puVar30;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar30[1];
                          if (puVar27 != (uint *)0x0) goto LAB_036bf760;
LAB_036bf710:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar30[-1] = puVar27;
                          *puVar30 = puVar29;
                          puVar32 = (uint *)puVar30[1];
                          puVar27 = puVar29;
                          uVar21 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_036bf710;
LAB_036bf760:
                          if (puVar32 == (uint *)0x0) goto LAB_036bf710;
                          if (*puVar27 <= *puVar32) goto LAB_036bf710;
                          uVar21 = uVar24 + 1;
                          *puVar30 = puVar32;
                          puVar30[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar30 = puVar30 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar21 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar21;
                    puVar27 = (uint *)puVar31[uVar21];
                    uVar25 = uVar21;
                    do {
                      puVar29 = (uint *)puVar31[uVar26 - 1];
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar27 < *puVar29)) {
                        uVar25 = (uint)uVar26;
                        puVar31[uVar26 - 1] = puVar27;
                        puVar31[uVar26] = puVar29;
                        puVar29 = puVar27;
                      }
                      uVar26 = uVar26 - 1;
                      puVar27 = puVar29;
                    } while ((long)uVar23 < (long)uVar26);
                  } while (uVar25 != uVar21);
                }
                DAT_05ab2d84 = '\x01';
              }
              else if (DAT_05ab2d84 != '\x01') goto LAB_036bf7a8;
              if ((int)DAT_05ab2d88 == 0) goto LAB_036bf7a8;
              if ((int)DAT_05ab2d88 < 2) {
                uVar21 = 0;
                puVar27 = (uint *)*DAT_05ab2d90;
                if (puVar27 != (uint *)0x0) goto LAB_036bf5b4;
LAB_036bf78c:
                uVar25 = uVar21;
                if (uVar21 < 3) {
LAB_036bf798:
                  uVar21 = *(uint *)(DAT_05ab2d90[uVar25] + 4);
                  if (uVar21 < 3) {
                    DAT_05ab2d78 = '\x01';
                    DAT_05ab2d7c = uVar15;
                    DAT_05ab2d80 = uVar21;
                    goto LAB_036bfad0;
                  }
                }
              }
              else {
                uVar21 = 0;
                iVar16 = (int)DAT_05ab2d88 + -1;
                do {
                  iVar20 = iVar16 + uVar21;
                  if (iVar20 < 0 != SCARRY4(iVar16,uVar21)) {
                    iVar20 = iVar20 + 1;
                  }
                  uVar25 = iVar20 >> 1;
                  if ((uint *)DAT_05ab2d90[(int)uVar25] == (uint *)0x0) goto LAB_036bf5c4;
                  uVar24 = *(uint *)DAT_05ab2d90[(int)uVar25];
                  if (uVar24 == uVar15) goto LAB_036bf5c4;
                  if (uVar24 < uVar15) {
                    uVar21 = uVar25 + 1;
                  }
                  else {
                    iVar16 = uVar25 - 1;
                  }
                } while ((int)uVar21 < iVar16);
                puVar27 = (uint *)DAT_05ab2d90[(int)uVar21];
                if (puVar27 == (uint *)0x0) goto LAB_036bf78c;
LAB_036bf5b4:
                uVar25 = uVar21;
                if (*puVar27 == uVar15) {
LAB_036bf5c4:
                  if (2 < uVar25) goto LAB_036bf7a8;
                  goto LAB_036bf798;
                }
              }
LAB_036bf7a8:
              uVar21 = 0;
            }
          }
          else {
            if ((DAT_05ab2d10 == '\x01') && (DAT_05ab2d14 == uVar15)) {
              uVar21 = DAT_05ab2d18;
              if (2 < DAT_05ab2d18) goto LAB_036bfac4;
            }
            else {
              if ((DAT_05ab2d48 & 1) == 0) {
                iVar16 = __cxa_guard_acquire(&DAT_05ab2d48);
                pcVar17 = PTR_DAT_04bc23c0;
                if (iVar16 != 0) {
                  DAT_05ab2d20 = 0x300000000;
                  DAT_05ab2d28 = &DAT_05ab2d30;
                  __cxa_guard_release(&DAT_05ab2d48);
                  pcVar17 = PTR_DAT_04bc23c0;
                }
              }
              if ((DAT_05ab2d50 & 1) == 0) {
                DAT_05ab2d50 = 1;
                if ((DAT_05ab2d70 & 1) == 0) {
                  iVar16 = __cxa_guard_acquire(&DAT_05ab2d70);
                  pcVar17 = PTR_DAT_04bc23c0;
                  if (iVar16 != 0) {
                    _DAT_05ab2d54 = 0xffffffff00000000;
                    DAT_05ab2d5c = 0xffffffff00000000;
                    DAT_05ab2d64 = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_05ab2d70);
                    pcVar17 = PTR_DAT_04bc23c0;
                  }
                }
                uVar14 = crc32b(uVar2,0x6f,0x4c11db7);
                uVar14 = crc32b(uVar14,0x6e,0x4c11db7);
                uVar21 = crc32b(uVar14,0x65,0x4c11db7);
                _DAT_05ab2d54 = (ulong)~uVar21;
                iVar16 = (int)DAT_05ab2d20;
                iVar20 = DAT_05ab2d20._4_4_;
                if ((int)DAT_05ab2d20 < DAT_05ab2d20._4_4_) {
                  *(undefined4 **)(DAT_05ab2d28 + (long)(int)DAT_05ab2d20 * 8) = &DAT_05ab2d54;
                  iVar16 = (int)DAT_05ab2d20 + 1;
                  DAT_05ab2d20 = CONCAT44(DAT_05ab2d20._4_4_,iVar16);
                  iVar20 = DAT_05ab2d20._4_4_;
                }
                DAT_05ab2d5c = CONCAT44(1,~uVar8);
                if (iVar16 < iVar20) {
                  *(undefined8 **)(DAT_05ab2d28 + (long)iVar16 * 8) = &DAT_05ab2d5c;
                  iVar16 = (int)DAT_05ab2d20 + 1;
                  DAT_05ab2d20 = CONCAT44(DAT_05ab2d20._4_4_,iVar16);
                  iVar20 = DAT_05ab2d20._4_4_;
                }
                uVar14 = crc32b(uVar2,0x70,0x4c11db7);
                uVar21 = crc32b(uVar14,99,0x4c11db7);
                DAT_05ab2d64 = CONCAT44(2,~uVar21);
                if (iVar16 < iVar20) {
                  *(undefined8 **)(DAT_05ab2d28 + (long)iVar16 * 8) = &DAT_05ab2d64;
                  iVar16 = (int)DAT_05ab2d20 + 1;
                  DAT_05ab2d20 = CONCAT44(DAT_05ab2d20._4_4_,iVar16);
                }
                puVar12 = DAT_05ab2d28;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar21 = iVar16 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar25) break;
                    puVar27 = *(uint **)(puVar12 + (ulong)uVar25 * 8);
                    uVar23 = (ulong)uVar25;
                    if ((uVar21 - uVar25 & 1) == 0) {
                      uVar26 = uVar23;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar23 + 1;
                      puVar29 = *(uint **)(puVar12 + uVar26 * 8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        *(uint **)(puVar12 + uVar26 * 8) = puVar27;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar21;
                    uVar21 = uVar25;
                    if (~uVar23 + uVar28 != 0) {
                      puVar31 = (undefined8 *)(puVar12 + uVar26 * 8 + 8);
                      do {
                        puVar27 = (uint *)*puVar31;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar31[1];
                          if (puVar27 != (uint *)0x0) goto LAB_036bfa40;
LAB_036bf9f0:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar31[-1] = puVar27;
                          *puVar31 = puVar29;
                          puVar32 = (uint *)puVar31[1];
                          puVar27 = puVar29;
                          uVar21 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_036bf9f0;
LAB_036bfa40:
                          if (puVar32 == (uint *)0x0) goto LAB_036bf9f0;
                          if (*puVar27 <= *puVar32) goto LAB_036bf9f0;
                          uVar21 = uVar24 + 1;
                          *puVar31 = puVar32;
                          puVar31[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar31 = puVar31 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar21 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar21;
                    puVar27 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar25 = uVar21;
                    do {
                      puVar29 = *(uint **)(puVar12 + uVar26 * 8 + -8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar27 < *puVar29)) {
                        uVar25 = (uint)uVar26;
                        *(uint **)(puVar12 + uVar26 * 8 + -8) = puVar27;
                        *(uint **)(puVar12 + uVar26 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                      uVar26 = uVar26 - 1;
                      puVar27 = puVar29;
                    } while ((long)uVar23 < (long)uVar26);
                  } while (uVar25 != uVar21);
                }
                DAT_05ab2d1c = '\x01';
              }
              else if (DAT_05ab2d1c != '\x01') goto LAB_036bfac4;
              if ((int)DAT_05ab2d20 != 0) {
                if ((int)DAT_05ab2d20 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_05ab2d20 + -1;
                  do {
                    iVar20 = iVar16 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar25 = iVar20 >> 1;
                    if (*(uint **)(DAT_05ab2d28 + (long)(int)uVar25 * 8) == (uint *)0x0)
                    goto joined_r0x036bfab0;
                    uVar24 = **(uint **)(DAT_05ab2d28 + (long)(int)uVar25 * 8);
                    if (uVar24 == uVar15) goto joined_r0x036bfab0;
                    if (uVar24 < uVar15) {
                      uVar21 = uVar25 + 1;
                    }
                    else {
                      iVar16 = uVar25 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                }
                uVar25 = uVar21;
                if ((*(uint **)(DAT_05ab2d28 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05ab2d28 + (long)(int)uVar21 * 8) == uVar15)) {
joined_r0x036bfab0:
                  if ((uVar25 < 3) &&
                     (uVar21 = *(uint *)(*(long *)(DAT_05ab2d28 + (ulong)uVar25 * 8) + 4),
                     uVar21 < 3)) {
                    DAT_05ab2d10 = '\x01';
                    DAT_05ab2d14 = uVar15;
                    DAT_05ab2d18 = uVar21;
                    goto LAB_036bfac8;
                  }
                }
              }
LAB_036bfac4:
              uVar21 = 0;
            }
LAB_036bfac8:
          }
LAB_036bfad0:
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar27 != (uint *)0x0)) && (*puVar27 != 0)) &&
             ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar27 + lVar11 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar11 != 0) {
              uVar25 = 0;
              if ((ulong)uVar15 != 0) {
                uVar25 = (uint)((ulong)((long)puVar1 - lVar11) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if (uVar25 < *(uint *)PTR_DAT_04bc23f8) {
                *(short *)(*(long *)(PTR_DAT_04bc23f8 + 8) + (long)(int)uVar25 * 2) = (short)uVar21;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar18 = *pcVar17;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *pcVar17 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar21 = *(uint *)(puVar13 + 4);
                if (-1 < (int)uVar21) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar21) != (undefined4 *)0x0) {
                    uVar14 = *(undefined4 *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_036bfc30;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar14 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar14 = 0, puVar1 == puVar27)) goto LAB_036bfc30;
              lVar11 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar1 + (lVar11 - (long)puVar27);
              if (lVar11 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar13 + 4) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar22 = (int *)(lVar11 + 4);
              while (piVar22[-1] != -0x1e7766b2) {
                piVar22 = piVar22 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_036bfc2c;
              }
              iVar16 = 0;
              if (*piVar22 != -1) {
                iVar16 = *piVar22;
              }
              *(int *)(puVar13 + 4) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_036bfc2c:
          uVar14 = 0;
LAB_036bfc30:
          if (((*puVar1 == 0) || (lVar11 = (long)puVar1 - (ulong)*puVar1, lVar11 == 0)) ||
             (*(char *)(lVar11 + 0xb) == '\0')) {
            uVar15 = FUN_01a8b040(uVar14,0);
            if (8 < uVar15) {
              uVar15 = 0;
            }
            uVar19 = (undefined2)uVar15;
          }
          else {
            uVar15 = FUN_01a8a620(uVar14,0);
            if (8 < uVar15) {
              uVar15 = 0;
            }
            uVar19 = (undefined2)uVar15;
          }
          puVar12 = PTR_DAT_04bc23c0;
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar27 != (uint *)0x0)) &&
             ((*puVar27 != 0 &&
              ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))))) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar27 + lVar11 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar11 != 0) {
              uVar21 = 0;
              if ((ulong)uVar15 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar11) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc23d8) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc23d8 + 8) + (long)(int)uVar21 * 2) = uVar19;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar18 = *puVar12;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *puVar12 = 1;
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar21 = *(uint *)(puVar13 + 8);
                if (-1 < (int)uVar21) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar21) != (undefined4 *)0x0) {
                    uVar14 = *(undefined4 *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_036bfde0;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar14 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar14 = 0, puVar1 == puVar27)) goto LAB_036bfde0;
              lVar11 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar1 + (lVar11 - (long)puVar27);
              if (lVar11 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar13 + 8) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar22 = (int *)(lVar11 + 4);
              while (piVar22[-1] != -0x4bddac62) {
                piVar22 = piVar22 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_036bfddc;
              }
              iVar16 = 0;
              if (*piVar22 != -1) {
                iVar16 = *piVar22;
              }
              *(int *)(puVar13 + 8) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_036bfddc:
          uVar14 = 0;
LAB_036bfde0:
          if (((*puVar1 == 0) || (lVar11 = (long)puVar1 - (ulong)*puVar1, lVar11 == 0)) ||
             (*(char *)(lVar11 + 0xb) == '\0')) {
            uVar15 = FUN_01ac26c0(uVar14,0);
            if (0xc < uVar15) {
              uVar15 = 0;
            }
            uVar19 = (undefined2)uVar15;
          }
          else {
            uVar15 = FUN_01ac20d0(uVar14,0);
            if (0xc < uVar15) {
              uVar15 = 0;
            }
            uVar19 = (undefined2)uVar15;
          }
          pcVar17 = PTR_DAT_04bc23c0;
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar27 != (uint *)0x0)) &&
             ((*puVar27 != 0 &&
              ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))))) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar27 + lVar11 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar11 != 0) {
              uVar21 = 0;
              if ((ulong)uVar15 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar11) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc23d0) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc23d0 + 8) + (long)(int)uVar21 * 2) = uVar19;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar18 = *pcVar17;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *pcVar17 = 1;
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar21 = *(uint *)(puVar13 + 0xc);
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar15 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_036bffe0;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar15 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar15 = 0, puVar1 == puVar27)) goto LAB_036bffe0;
              lVar11 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar1 + (lVar11 - (long)puVar27);
              if (lVar11 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar13 + 0xc) = 0xfffffffe;
              if (uVar23 == 0) break;
              piVar22 = (int *)(lVar11 + 4);
              while (piVar22[-1] != -0x78a76232) {
                piVar22 = piVar22 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_036bffdc;
              }
              iVar16 = 0;
              if (*piVar22 != -1) {
                iVar16 = *piVar22;
              }
              *(int *)(puVar13 + 0xc) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_036bffdc:
          uVar15 = 0;
LAB_036bffe0:
          if (((*puVar1 == 0) || (lVar11 = (long)puVar1 - (ulong)*puVar1, lVar11 == 0)) ||
             (*(char *)(lVar11 + 0xb) == '\0')) {
            if ((DAT_05ab2e58 == '\x01') && (DAT_05ab2e5c == uVar15)) {
              uVar21 = DAT_05ab2e60;
              if (3 < DAT_05ab2e60) goto LAB_036c0408;
            }
            else {
              if ((DAT_05ab2e98 & 1) == 0) {
                iVar16 = __cxa_guard_acquire(&DAT_05ab2e98);
                pcVar17 = PTR_DAT_04bc23c0;
                if (iVar16 != 0) {
                  DAT_05ab2e68 = 0x400000000;
                  DAT_05ab2e70 = (undefined8 *)&DAT_05ab2e78;
                  __cxa_guard_release(&DAT_05ab2e98);
                  pcVar17 = PTR_DAT_04bc23c0;
                }
              }
              if ((DAT_05ab2ea0 & 1) == 0) {
                DAT_05ab2ea0 = 1;
                if ((DAT_05ab2ec8 & 1) == 0) {
                  iVar16 = __cxa_guard_acquire(&DAT_05ab2ec8);
                  pcVar17 = PTR_DAT_04bc23c0;
                  if (iVar16 != 0) {
                    _DAT_05ab2ea4 = 0xffffffff00000000;
                    _DAT_05ab2eac = 0xffffffff00000000;
                    DAT_05ab2eb4 = 0xffffffff00000000;
                    DAT_05ab2ebc = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_05ab2ec8);
                    pcVar17 = PTR_DAT_04bc23c0;
                  }
                }
                _DAT_05ab2ea4 = (ulong)~uVar6;
                iVar16 = (int)DAT_05ab2e68;
                iVar20 = DAT_05ab2e68._4_4_;
                if ((int)DAT_05ab2e68 < DAT_05ab2e68._4_4_) {
                  DAT_05ab2e70[(int)DAT_05ab2e68] = &DAT_05ab2ea4;
                  iVar16 = (int)DAT_05ab2e68 + 1;
                  DAT_05ab2e68 = CONCAT44(DAT_05ab2e68._4_4_,iVar16);
                  iVar20 = DAT_05ab2e68._4_4_;
                }
                _DAT_05ab2eac = CONCAT44(1,~uVar7);
                if (iVar16 < iVar20) {
                  DAT_05ab2e70[iVar16] = &DAT_05ab2eac;
                  iVar16 = (int)DAT_05ab2e68 + 1;
                  DAT_05ab2e68 = CONCAT44(DAT_05ab2e68._4_4_,iVar16);
                  iVar20 = DAT_05ab2e68._4_4_;
                }
                uVar14 = crc32b(0xffffffff,0xe5,0x4c11db7);
                uVar14 = crc32b(uVar14,0xae,0x4c11db7);
                uVar14 = crc32b(uVar14,0xb6,0x4c11db7);
                uVar14 = crc32b(uVar14,0xe5,0x4c11db7);
                uVar14 = crc32b(uVar14,0x85,0x4c11db7);
                uVar21 = crc32b(uVar14,0xb7,0x4c11db7);
                DAT_05ab2eb4 = CONCAT44(2,~uVar21);
                if (iVar16 < iVar20) {
                  DAT_05ab2e70[iVar16] = &DAT_05ab2eb4;
                  iVar16 = (int)DAT_05ab2e68 + 1;
                  DAT_05ab2e68 = CONCAT44(DAT_05ab2e68._4_4_,iVar16);
                  iVar20 = DAT_05ab2e68._4_4_;
                }
                DAT_05ab2ebc = CONCAT44(3,~uVar3);
                if (iVar16 < iVar20) {
                  DAT_05ab2e70[iVar16] = &DAT_05ab2ebc;
                  iVar16 = (int)DAT_05ab2e68 + 1;
                  DAT_05ab2e68 = CONCAT44(DAT_05ab2e68._4_4_,iVar16);
                }
                puVar31 = DAT_05ab2e70;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar21 = iVar16 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar25) break;
                    puVar27 = (uint *)puVar31[uVar25];
                    uVar23 = (ulong)uVar25;
                    if ((uVar21 - uVar25 & 1) == 0) {
                      uVar26 = uVar23;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar23 + 1;
                      puVar29 = (uint *)puVar31[uVar26];
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        puVar31[uVar26] = puVar27;
                        puVar31[uVar23] = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar21;
                    uVar21 = uVar25;
                    if (~uVar23 + uVar28 != 0) {
                      puVar30 = puVar31 + uVar26 + 1;
                      do {
                        puVar27 = (uint *)*puVar30;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar30[1];
                          if (puVar27 != (uint *)0x0) goto LAB_036c03c0;
LAB_036c0370:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar30[-1] = puVar27;
                          *puVar30 = puVar29;
                          puVar32 = (uint *)puVar30[1];
                          puVar27 = puVar29;
                          uVar21 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_036c0370;
LAB_036c03c0:
                          if (puVar32 == (uint *)0x0) goto LAB_036c0370;
                          if (*puVar27 <= *puVar32) goto LAB_036c0370;
                          uVar21 = uVar24 + 1;
                          *puVar30 = puVar32;
                          puVar30[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar30 = puVar30 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar21 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar21;
                    puVar27 = (uint *)puVar31[uVar21];
                    uVar25 = uVar21;
                    do {
                      puVar29 = (uint *)puVar31[uVar26 - 1];
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar27 < *puVar29)) {
                        uVar25 = (uint)uVar26;
                        puVar31[uVar26 - 1] = puVar27;
                        puVar31[uVar26] = puVar29;
                        puVar29 = puVar27;
                      }
                      uVar26 = uVar26 - 1;
                      puVar27 = puVar29;
                    } while ((long)uVar23 < (long)uVar26);
                  } while (uVar25 != uVar21);
                }
                DAT_05ab2e64 = '\x01';
              }
              else if (DAT_05ab2e64 != '\x01') goto LAB_036c0408;
              if ((int)DAT_05ab2e68 == 0) goto LAB_036c0408;
              if ((int)DAT_05ab2e68 < 2) {
                uVar21 = 0;
                puVar27 = (uint *)*DAT_05ab2e70;
                if (puVar27 != (uint *)0x0) goto LAB_036c0220;
LAB_036c03ec:
                uVar25 = uVar21;
                if (uVar21 < 4) {
LAB_036c03f8:
                  uVar21 = *(uint *)(DAT_05ab2e70[uVar25] + 4);
                  if (uVar21 < 4) {
                    DAT_05ab2e58 = '\x01';
                    DAT_05ab2e5c = uVar15;
                    DAT_05ab2e60 = uVar21;
                    goto LAB_036c0790;
                  }
                }
              }
              else {
                uVar21 = 0;
                iVar16 = (int)DAT_05ab2e68 + -1;
                do {
                  iVar20 = iVar16 + uVar21;
                  if (iVar20 < 0 != SCARRY4(iVar16,uVar21)) {
                    iVar20 = iVar20 + 1;
                  }
                  uVar25 = iVar20 >> 1;
                  if ((uint *)DAT_05ab2e70[(int)uVar25] == (uint *)0x0) goto LAB_036c0230;
                  uVar24 = *(uint *)DAT_05ab2e70[(int)uVar25];
                  if (uVar24 == uVar15) goto LAB_036c0230;
                  if (uVar24 < uVar15) {
                    uVar21 = uVar25 + 1;
                  }
                  else {
                    iVar16 = uVar25 - 1;
                  }
                } while ((int)uVar21 < iVar16);
                puVar27 = (uint *)DAT_05ab2e70[(int)uVar21];
                if (puVar27 == (uint *)0x0) goto LAB_036c03ec;
LAB_036c0220:
                uVar25 = uVar21;
                if (*puVar27 == uVar15) {
LAB_036c0230:
                  if (3 < uVar25) goto LAB_036c0408;
                  goto LAB_036c03f8;
                }
              }
LAB_036c0408:
              uVar21 = 0;
            }
          }
          else {
            if ((DAT_05ab2de0 == '\x01') && (DAT_05ab2de4 == uVar15)) {
              uVar21 = DAT_05ab2de8;
              if (3 < DAT_05ab2de8) goto LAB_036c0784;
            }
            else {
              if ((DAT_05ab2e20 & 1) == 0) {
                iVar16 = __cxa_guard_acquire(&DAT_05ab2e20);
                pcVar17 = PTR_DAT_04bc23c0;
                if (iVar16 != 0) {
                  DAT_05ab2df0 = 0x400000000;
                  DAT_05ab2df8 = &DAT_05ab2e00;
                  __cxa_guard_release(&DAT_05ab2e20);
                  pcVar17 = PTR_DAT_04bc23c0;
                }
              }
              if ((DAT_05ab2e28 & 1) == 0) {
                DAT_05ab2e28 = 1;
                if ((DAT_05ab2e50 & 1) == 0) {
                  iVar16 = __cxa_guard_acquire(&DAT_05ab2e50);
                  pcVar17 = PTR_DAT_04bc23c0;
                  if (iVar16 != 0) {
                    _DAT_05ab2e2c = 0xffffffff00000000;
                    DAT_05ab2e34 = 0xffffffff00000000;
                    DAT_05ab2e3c = 0xffffffff00000000;
                    DAT_05ab2e44 = 0xffffffff00000000;
                    __cxa_guard_release(&DAT_05ab2e50);
                    pcVar17 = PTR_DAT_04bc23c0;
                  }
                }
                _DAT_05ab2e2c = (ulong)~uVar9;
                iVar16 = (int)DAT_05ab2df0;
                iVar20 = DAT_05ab2df0._4_4_;
                if ((int)DAT_05ab2df0 < DAT_05ab2df0._4_4_) {
                  *(undefined4 **)(DAT_05ab2df8 + (long)(int)DAT_05ab2df0 * 8) = &DAT_05ab2e2c;
                  iVar16 = (int)DAT_05ab2df0 + 1;
                  DAT_05ab2df0 = CONCAT44(DAT_05ab2df0._4_4_,iVar16);
                  iVar20 = DAT_05ab2df0._4_4_;
                }
                uVar14 = crc32b(uVar2,0x70,0x4c11db7);
                uVar21 = crc32b(uVar14,99,0x4c11db7);
                DAT_05ab2e34 = CONCAT44(1,~uVar21);
                if (iVar16 < iVar20) {
                  *(undefined8 **)(DAT_05ab2df8 + (long)iVar16 * 8) = &DAT_05ab2e34;
                  iVar16 = (int)DAT_05ab2df0 + 1;
                  DAT_05ab2df0 = CONCAT44(DAT_05ab2df0._4_4_,iVar16);
                  iVar20 = DAT_05ab2df0._4_4_;
                }
                uVar14 = crc32b(uVar5,0x74,0x4c11db7);
                uVar21 = crc32b(uVar14,0x72,0x4c11db7);
                DAT_05ab2e3c = CONCAT44(2,~uVar21);
                if (iVar16 < iVar20) {
                  *(undefined8 **)(DAT_05ab2df8 + (long)iVar16 * 8) = &DAT_05ab2e3c;
                  iVar16 = (int)DAT_05ab2df0 + 1;
                  DAT_05ab2df0 = CONCAT44(DAT_05ab2df0._4_4_,iVar16);
                  iVar20 = DAT_05ab2df0._4_4_;
                }
                DAT_05ab2e44 = CONCAT44(3,~uVar8);
                if (iVar16 < iVar20) {
                  *(undefined8 **)(DAT_05ab2df8 + (long)iVar16 * 8) = &DAT_05ab2e44;
                  iVar16 = (int)DAT_05ab2df0 + 1;
                  DAT_05ab2df0 = CONCAT44(DAT_05ab2df0._4_4_,iVar16);
                }
                puVar12 = DAT_05ab2df8;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar21 = iVar16 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar25) break;
                    puVar27 = *(uint **)(puVar12 + (ulong)uVar25 * 8);
                    uVar23 = (ulong)uVar25;
                    if ((uVar21 - uVar25 & 1) == 0) {
                      uVar26 = uVar23;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar23 + 1;
                      puVar29 = *(uint **)(puVar12 + uVar26 * 8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        *(uint **)(puVar12 + uVar26 * 8) = puVar27;
                        *(uint **)(puVar12 + uVar23 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar21;
                    uVar21 = uVar25;
                    if (~uVar23 + uVar28 != 0) {
                      puVar31 = (undefined8 *)(puVar12 + uVar26 * 8 + 8);
                      do {
                        puVar27 = (uint *)*puVar31;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar31[1];
                          if (puVar27 != (uint *)0x0) goto LAB_036c0700;
LAB_036c06b0:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar31[-1] = puVar27;
                          *puVar31 = puVar29;
                          puVar32 = (uint *)puVar31[1];
                          puVar27 = puVar29;
                          uVar21 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_036c06b0;
LAB_036c0700:
                          if (puVar32 == (uint *)0x0) goto LAB_036c06b0;
                          if (*puVar27 <= *puVar32) goto LAB_036c06b0;
                          uVar21 = uVar24 + 1;
                          *puVar31 = puVar32;
                          puVar31[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar31 = puVar31 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar21 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar21;
                    puVar27 = *(uint **)(puVar12 + (ulong)uVar21 * 8);
                    uVar25 = uVar21;
                    do {
                      puVar29 = *(uint **)(puVar12 + uVar26 * 8 + -8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar27 < *puVar29)) {
                        uVar25 = (uint)uVar26;
                        *(uint **)(puVar12 + uVar26 * 8 + -8) = puVar27;
                        *(uint **)(puVar12 + uVar26 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                      uVar26 = uVar26 - 1;
                      puVar27 = puVar29;
                    } while ((long)uVar23 < (long)uVar26);
                  } while (uVar25 != uVar21);
                }
                DAT_05ab2dec = '\x01';
              }
              else if (DAT_05ab2dec != '\x01') goto LAB_036c0784;
              if ((int)DAT_05ab2df0 != 0) {
                if ((int)DAT_05ab2df0 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar16 = (int)DAT_05ab2df0 + -1;
                  do {
                    iVar20 = iVar16 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar16,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar25 = iVar20 >> 1;
                    if (*(uint **)(DAT_05ab2df8 + (long)(int)uVar25 * 8) == (uint *)0x0)
                    goto joined_r0x036c0770;
                    uVar24 = **(uint **)(DAT_05ab2df8 + (long)(int)uVar25 * 8);
                    if (uVar24 == uVar15) goto joined_r0x036c0770;
                    if (uVar24 < uVar15) {
                      uVar21 = uVar25 + 1;
                    }
                    else {
                      iVar16 = uVar25 - 1;
                    }
                  } while ((int)uVar21 < iVar16);
                }
                uVar25 = uVar21;
                if ((*(uint **)(DAT_05ab2df8 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05ab2df8 + (long)(int)uVar21 * 8) == uVar15)) {
joined_r0x036c0770:
                  if ((uVar25 < 4) &&
                     (uVar21 = *(uint *)(*(long *)(DAT_05ab2df8 + (ulong)uVar25 * 8) + 4),
                     uVar21 < 4)) {
                    DAT_05ab2de0 = '\x01';
                    DAT_05ab2de4 = uVar15;
                    DAT_05ab2de8 = uVar21;
                    goto LAB_036c0788;
                  }
                }
              }
LAB_036c0784:
              uVar21 = 0;
            }
LAB_036c0788:
          }
LAB_036c0790:
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar27 != (uint *)0x0)) && (*puVar27 != 0)) &&
             ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar27 + lVar11 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar11 != 0) {
              uVar25 = 0;
              if ((ulong)uVar15 != 0) {
                uVar25 = (uint)((ulong)((long)puVar1 - lVar11) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if (uVar25 < *(uint *)PTR_DAT_04bc23e0) {
                *(short *)(*(long *)(PTR_DAT_04bc23e0 + 8) + (long)(int)uVar25 * 2) = (short)uVar21;
              }
            }
          }
        }
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 != uVar10);
  }
  return;
}

