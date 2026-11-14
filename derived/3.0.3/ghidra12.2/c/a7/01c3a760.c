
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c3a760(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined2 uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  uint uVar26;
  
  if ((param_1 != (uint *)0x0) && (uVar7 = *param_1, uVar7 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar26 = 0;
    uVar9 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
    uVar9 = crc32b(uVar9,0x77,0x4c11db7);
    uVar9 = crc32b(uVar9,0x61,0x4c11db7);
    uVar9 = crc32b(uVar9,0x79,0x4c11db7);
    uVar3 = crc32b(uVar9,0x73,0x4c11db7);
    uVar9 = crc32b(0xffffffff,0x44,0x4c11db7);
    uVar9 = crc32b(uVar9,0x61,0x4c11db7);
    uVar9 = crc32b(uVar9,0x79,0x4c11db7);
    uVar9 = crc32b(uVar9,0x74,0x4c11db7);
    uVar9 = crc32b(uVar9,0x69,0x4c11db7);
    uVar9 = crc32b(uVar9,0x6d,0x4c11db7);
    uVar4 = crc32b(uVar9,0x65,0x4c11db7);
    uVar9 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar9 = crc32b(uVar9,0x69,0x4c11db7);
    uVar9 = crc32b(uVar9,0x67,0x4c11db7);
    uVar9 = crc32b(uVar9,0x68,0x4c11db7);
    uVar5 = crc32b(uVar9,0x74,0x4c11db7);
    do {
      if (((uVar26 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar11 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar26 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          puVar15 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_01c3a914:
            uVar9 = 0;
LAB_01c3a918:
            uVar10 = FUN_01c1abd0(uVar9,0);
            if (9 < uVar10) {
              uVar10 = 0;
            }
            uVar12 = (undefined2)uVar10;
          }
          else {
            if ((DAT_0534bd48 & 1) == 0) {
              DAT_0534bd4c = 0xffffffffffffffff;
              DAT_0534bd54 = 0xffffffffffffffff;
              DAT_0534bd48 = 1;
              uVar17 = 0xffffffff;
              DAT_0534bd7c = 0xffffffffffffffff;
              DAT_0534bd5c = 0xffffffffffffffff;
              DAT_0534bd64 = 0xffffffffffffffff;
              DAT_0534bd6c = 0xffffffffffffffff;
              DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c3a90c:
              if (puVar1 == puVar15) goto LAB_01c3a914;
              do {
                if (uVar17 != 0xffffffff) goto LAB_01c3aa74;
                lVar6 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar15)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar1 + (lVar6 - (long)puVar15);
                if (lVar6 == 0) goto LAB_01c3aa74;
                uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar15));
                DAT_0534bd4c = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd4c);
                if (uVar17 == 0) goto LAB_01c3aa74;
                puVar22 = (uint *)(lVar6 + 4);
                while (puVar22[-1] != 0xbe776e71) {
                  puVar22 = puVar22 + 2;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) goto LAB_01c3aa74;
                }
                uVar17 = (ulong)*puVar22;
                uVar20 = 0;
                if (*puVar22 != 0xffffffff) {
                  uVar20 = uVar17;
                }
                DAT_0534bd4c = CONCAT44((int)uVar20,(undefined4)DAT_0534bd4c);
              } while ((int)uVar20 < 0);
              puVar16 = (undefined4 *)((long)puVar1 + uVar20);
              if (puVar16 != (undefined4 *)0x0) goto LAB_01c3a8e0;
LAB_01c3aa74:
              uVar9 = 0;
              if (puVar1 != puVar15) goto LAB_01c3aa80;
              goto LAB_01c3a918;
            }
            uVar17 = DAT_0534bd4c >> 0x20;
            if ((long)DAT_0534bd4c < 0) goto LAB_01c3a90c;
            puVar16 = (undefined4 *)((long)puVar1 + uVar17);
            if (puVar16 == (undefined4 *)0x0) goto LAB_01c3aa74;
LAB_01c3a8e0:
            uVar9 = *puVar16;
            if (puVar1 == puVar15) goto LAB_01c3a918;
LAB_01c3aa80:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar15)) == '\0') goto LAB_01c3a918;
            uVar10 = FUN_01c1a5f0(uVar9,0);
            if (9 < uVar10) {
              uVar10 = 0;
            }
            uVar12 = (undefined2)uVar10;
          }
          puVar15 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar15 != (uint *)0x0)) &&
             ((*puVar15 != 0 &&
              ((uVar10 = puVar15[1], uVar10 != 0 && ((ulong)(ushort)puVar15[2] != 0)))))) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar15 + lVar6 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar6 != 0) {
              uVar14 = 0;
              if ((ulong)uVar10 != 0) {
                uVar14 = (uint)((ulong)((long)puVar1 - lVar6) / (ulong)uVar10);
              }
              if (*puVar15 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if (uVar14 < DAT_0534bd28) {
                *(undefined2 *)(DAT_0534bd30 + (long)(int)uVar14 * 2) = uVar12;
              }
            }
          }
          puVar15 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_01c3aac8:
            uVar10 = 0;
LAB_01c3aacc:
            if ((DAT_0534bdf0 == '\x01') && (DAT_0534bdf4 == uVar10)) {
              uVar14 = DAT_0534bdf8;
              if (2 < DAT_0534bdf8) goto LAB_01c3af28;
            }
            else {
              if (((DAT_0534be28 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_0534be28), iVar11 != 0)) {
                DAT_0534be00 = 0x300000000;
                DAT_0534be08 = (undefined8 *)&DAT_0534be10;
                __cxa_guard_release(&DAT_0534be28);
              }
              if ((DAT_0534be30 & 1) == 0) {
                DAT_0534be30 = 1;
                if (((DAT_0534be50 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_0534be50), iVar11 != 0)) {
                  _DAT_0534be34 = 0xffffffff00000000;
                  DAT_0534be3c = 0xffffffff00000000;
                  DAT_0534be44 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534be50);
                }
                uVar9 = crc32b(uVar2,0xb8,0x4c11db7);
                uVar9 = crc32b(uVar9,0xb8,0x4c11db7);
                uVar9 = crc32b(uVar9,0xe6,0x4c11db7);
                uVar9 = crc32b(uVar9,0x99,0x4c11db7);
                uVar14 = crc32b(uVar9,0x82,0x4c11db7);
                _DAT_0534be34 = (ulong)~uVar14;
                iVar11 = (int)DAT_0534be00;
                iVar13 = DAT_0534be00._4_4_;
                if ((int)DAT_0534be00 < DAT_0534be00._4_4_) {
                  DAT_0534be08[(int)DAT_0534be00] = &DAT_0534be34;
                  iVar11 = (int)DAT_0534be00 + 1;
                  DAT_0534be00 = CONCAT44(DAT_0534be00._4_4_,iVar11);
                  iVar13 = DAT_0534be00._4_4_;
                }
                uVar9 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar9 = crc32b(uVar9,0x98,0x4c11db7);
                uVar14 = crc32b(uVar9,0xbc,0x4c11db7);
                DAT_0534be3c = CONCAT44(1,~uVar14);
                if (iVar11 < iVar13) {
                  DAT_0534be08[iVar11] = &DAT_0534be3c;
                  iVar11 = (int)DAT_0534be00 + 1;
                  DAT_0534be00 = CONCAT44(DAT_0534be00._4_4_,iVar11);
                  iVar13 = DAT_0534be00._4_4_;
                }
                uVar9 = crc32b(uVar2,0xa4,0x4c11db7);
                uVar14 = crc32b(uVar9,0x9c,0x4c11db7);
                DAT_0534be44 = CONCAT44(2,~uVar14);
                if (iVar11 < iVar13) {
                  DAT_0534be08[iVar11] = &DAT_0534be44;
                  iVar11 = (int)DAT_0534be00 + 1;
                  DAT_0534be00 = CONCAT44(DAT_0534be00._4_4_,iVar11);
                }
                puVar24 = DAT_0534be08;
                if (1 < iVar11) {
                  uVar19 = 0;
                  uVar14 = iVar11 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar15 = (uint *)puVar24[uVar19];
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar22 = puVar15;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar22 = (uint *)puVar24[uVar20];
                      if (((puVar15 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar22 < *puVar15)) {
                        puVar24[uVar20] = puVar15;
                        puVar24[uVar17] = puVar22;
                        puVar22 = puVar15;
                      }
                    }
                    uVar21 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar21 != 0) {
                      puVar23 = puVar24 + uVar20 + 1;
                      do {
                        puVar15 = (uint *)*puVar23;
                        uVar18 = (uint)uVar20;
                        if (((puVar22 == (uint *)0x0) || (puVar15 == (uint *)0x0)) ||
                           (*puVar22 <= *puVar15)) {
                          puVar25 = (uint *)puVar23[1];
                          if (puVar15 != (uint *)0x0) goto LAB_01c3aee0;
LAB_01c3ae90:
                          puVar15 = puVar25;
                        }
                        else {
                          puVar23[-1] = puVar15;
                          *puVar23 = puVar22;
                          puVar25 = (uint *)puVar23[1];
                          puVar15 = puVar22;
                          uVar14 = uVar18;
                          if (puVar22 == (uint *)0x0) goto LAB_01c3ae90;
LAB_01c3aee0:
                          if (puVar25 == (uint *)0x0) goto LAB_01c3ae90;
                          if (*puVar15 <= *puVar25) goto LAB_01c3ae90;
                          uVar14 = uVar18 + 1;
                          *puVar23 = puVar25;
                          puVar23[1] = puVar15;
                        }
                        uVar20 = uVar20 + 2;
                        puVar23 = puVar23 + 2;
                        puVar22 = puVar15;
                      } while (uVar21 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar15 = (uint *)puVar24[uVar14];
                    uVar19 = uVar14;
                    do {
                      puVar22 = (uint *)puVar24[uVar20 - 1];
                      if (((puVar15 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar15 < *puVar22)) {
                        uVar19 = (uint)uVar20;
                        puVar24[uVar20 - 1] = puVar15;
                        puVar24[uVar20] = puVar22;
                        puVar22 = puVar15;
                      }
                      uVar20 = uVar20 - 1;
                      puVar15 = puVar22;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_0534bdfc = '\x01';
              }
              else if (DAT_0534bdfc != '\x01') goto LAB_01c3af28;
              if ((int)DAT_0534be00 == 0) goto LAB_01c3af28;
              if ((int)DAT_0534be00 < 2) {
                uVar14 = 0;
                puVar15 = (uint *)*DAT_0534be08;
                if (puVar15 != (uint *)0x0) goto LAB_01c3ad80;
LAB_01c3af0c:
                if (uVar14 < 3) {
LAB_01c3af18:
                  uVar14 = *(uint *)(DAT_0534be08[uVar14] + 4);
                  if (uVar14 < 3) {
                    DAT_0534bdf0 = '\x01';
                    DAT_0534bdf4 = uVar10;
                    DAT_0534bdf8 = uVar14;
                    goto LAB_01c3af2c;
                  }
                }
              }
              else {
                uVar14 = 0;
                iVar11 = (int)DAT_0534be00 + -1;
                do {
                  iVar13 = iVar11 + uVar14;
                  if (iVar13 < 0 != SCARRY4(iVar11,uVar14)) {
                    iVar13 = iVar13 + 1;
                  }
                  uVar19 = iVar13 >> 1;
                  if ((uint *)DAT_0534be08[(int)uVar19] == (uint *)0x0) goto LAB_01c3ad90;
                  uVar18 = *(uint *)DAT_0534be08[(int)uVar19];
                  if (uVar18 == uVar10) goto LAB_01c3ad90;
                  if (uVar18 < uVar10) {
                    uVar14 = uVar19 + 1;
                  }
                  else {
                    iVar11 = uVar19 - 1;
                  }
                } while ((int)uVar14 < iVar11);
                puVar15 = (uint *)DAT_0534be08[(int)uVar14];
                if (puVar15 == (uint *)0x0) goto LAB_01c3af0c;
LAB_01c3ad80:
                uVar19 = uVar14;
                if (*puVar15 == uVar10) {
LAB_01c3ad90:
                  uVar14 = uVar19;
                  if (2 < uVar19) goto LAB_01c3af28;
                  goto LAB_01c3af18;
                }
              }
LAB_01c3af28:
              uVar14 = 0;
            }
LAB_01c3af2c:
            uVar12 = (undefined2)uVar14;
          }
          else {
            if ((DAT_0534bd48 & 1) == 0) {
              DAT_0534bd4c = 0xffffffffffffffff;
              DAT_0534bd54 = 0xffffffffffffffff;
              DAT_0534bd48 = 1;
              uVar17 = 0xffffffff;
              DAT_0534bd7c = 0xffffffffffffffff;
              DAT_0534bd5c = 0xffffffffffffffff;
              DAT_0534bd64 = 0xffffffffffffffff;
              DAT_0534bd6c = 0xffffffffffffffff;
              DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c3aac0:
              if (puVar1 == puVar15) goto LAB_01c3aac8;
              do {
                if (uVar17 != 0xffffffff) goto LAB_01c3abb4;
                lVar6 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar15)) != '\0') {
                  lVar6 = 0x1c;
                }
                lVar6 = (long)puVar1 + (lVar6 - (long)puVar15);
                if (lVar6 == 0) goto LAB_01c3abb4;
                uVar17 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar15));
                DAT_0534bd54 = CONCAT44(DAT_0534bd54._4_4_,0xfffffffe);
                if (uVar17 == 0) goto LAB_01c3abb4;
                puVar22 = (uint *)(lVar6 + 4);
                while (puVar22[-1] != 0x35ac2c17) {
                  puVar22 = puVar22 + 2;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) goto LAB_01c3abb4;
                }
                uVar17 = (ulong)*puVar22;
                uVar20 = 0;
                if (*puVar22 != 0xffffffff) {
                  uVar20 = uVar17;
                }
                DAT_0534bd54 = CONCAT44(DAT_0534bd54._4_4_,(int)uVar20);
              } while ((int)uVar20 < 0);
              puVar22 = (uint *)((long)puVar1 + uVar20);
              if (puVar22 != (uint *)0x0) goto LAB_01c3a9ec;
LAB_01c3abb4:
              uVar10 = 0;
              if (puVar1 != puVar15) goto LAB_01c3abc0;
              goto LAB_01c3aacc;
            }
            uVar17 = DAT_0534bd54 & 0xffffffff;
            if ((int)DAT_0534bd54 < 0) goto LAB_01c3aac0;
            puVar22 = (uint *)((long)puVar1 + uVar17);
            if (puVar22 == (uint *)0x0) goto LAB_01c3abb4;
LAB_01c3a9ec:
            uVar10 = *puVar22;
            if (puVar1 == puVar15) goto LAB_01c3aacc;
LAB_01c3abc0:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar15)) == '\0') goto LAB_01c3aacc;
            if ((DAT_0534bd84 == '\x01') && (DAT_0534bd88 == uVar10)) {
              uVar14 = DAT_0534bd8c;
              if (2 < DAT_0534bd8c) goto LAB_01c3b2cc;
            }
            else {
              if (((DAT_0534bdc0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_0534bdc0), iVar11 != 0)) {
                DAT_0534bd98 = 0x300000000;
                DAT_0534bda0 = &DAT_0534bda8;
                __cxa_guard_release(&DAT_0534bdc0);
              }
              if ((DAT_0534bdc8 & 1) == 0) {
                DAT_0534bdc8 = 1;
                if (((DAT_0534bde8 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_0534bde8), iVar11 != 0)) {
                  _DAT_0534bdcc = 0xffffffff00000000;
                  _DAT_0534bdd4 = 0xffffffff00000000;
                  DAT_0534bddc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534bde8);
                }
                _DAT_0534bdcc = (ulong)~uVar3;
                iVar11 = (int)DAT_0534bd98;
                iVar13 = DAT_0534bd98._4_4_;
                if ((int)DAT_0534bd98 < DAT_0534bd98._4_4_) {
                  *(undefined4 **)(DAT_0534bda0 + (long)(int)DAT_0534bd98 * 8) = &DAT_0534bdcc;
                  iVar11 = (int)DAT_0534bd98 + 1;
                  DAT_0534bd98 = CONCAT44(DAT_0534bd98._4_4_,iVar11);
                  iVar13 = DAT_0534bd98._4_4_;
                }
                _DAT_0534bdd4 = CONCAT44(1,~uVar4);
                if (iVar11 < iVar13) {
                  *(undefined4 **)(DAT_0534bda0 + (long)iVar11 * 8) = &DAT_0534bdd4;
                  iVar11 = (int)DAT_0534bd98 + 1;
                  DAT_0534bd98 = CONCAT44(DAT_0534bd98._4_4_,iVar11);
                  iVar13 = DAT_0534bd98._4_4_;
                }
                DAT_0534bddc = CONCAT44(2,~uVar5);
                if (iVar11 < iVar13) {
                  *(undefined8 **)(DAT_0534bda0 + (long)iVar11 * 8) = &DAT_0534bddc;
                  iVar11 = (int)DAT_0534bd98 + 1;
                  DAT_0534bd98 = CONCAT44(DAT_0534bd98._4_4_,iVar11);
                }
                puVar8 = DAT_0534bda0;
                if (1 < iVar11) {
                  uVar19 = 0;
                  uVar14 = iVar11 - 1;
                  do {
                    if ((int)uVar14 <= (int)uVar19) break;
                    puVar15 = *(uint **)(puVar8 + (ulong)uVar19 * 8);
                    uVar17 = (ulong)uVar19;
                    if ((uVar14 - uVar19 & 1) == 0) {
                      uVar20 = uVar17;
                      puVar22 = puVar15;
                    }
                    else {
                      uVar20 = uVar17 + 1;
                      puVar22 = *(uint **)(puVar8 + uVar20 * 8);
                      if (((puVar15 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar22 < *puVar15)) {
                        *(uint **)(puVar8 + uVar20 * 8) = puVar15;
                        *(uint **)(puVar8 + uVar17 * 8) = puVar22;
                        puVar22 = puVar15;
                      }
                    }
                    uVar21 = (ulong)uVar14;
                    uVar14 = uVar19;
                    if (~uVar17 + uVar21 != 0) {
                      puVar24 = (undefined8 *)(puVar8 + uVar20 * 8 + 8);
                      do {
                        puVar15 = (uint *)*puVar24;
                        uVar18 = (uint)uVar20;
                        if (((puVar22 == (uint *)0x0) || (puVar15 == (uint *)0x0)) ||
                           (*puVar22 <= *puVar15)) {
                          puVar25 = (uint *)puVar24[1];
                          if (puVar15 != (uint *)0x0) goto LAB_01c3b270;
LAB_01c3b220:
                          puVar15 = puVar25;
                        }
                        else {
                          puVar24[-1] = puVar15;
                          *puVar24 = puVar22;
                          puVar25 = (uint *)puVar24[1];
                          puVar15 = puVar22;
                          uVar14 = uVar18;
                          if (puVar22 == (uint *)0x0) goto LAB_01c3b220;
LAB_01c3b270:
                          if (puVar25 == (uint *)0x0) goto LAB_01c3b220;
                          if (*puVar15 <= *puVar25) goto LAB_01c3b220;
                          uVar14 = uVar18 + 1;
                          *puVar24 = puVar25;
                          puVar24[1] = puVar15;
                        }
                        uVar20 = uVar20 + 2;
                        puVar24 = puVar24 + 2;
                        puVar22 = puVar15;
                      } while (uVar21 != uVar20);
                    }
                    if ((int)uVar14 <= (int)uVar19) break;
                    uVar20 = (ulong)uVar14;
                    puVar15 = *(uint **)(puVar8 + (ulong)uVar14 * 8);
                    uVar19 = uVar14;
                    do {
                      puVar22 = *(uint **)(puVar8 + uVar20 * 8 + -8);
                      if (((puVar15 != (uint *)0x0) && (puVar22 != (uint *)0x0)) &&
                         (*puVar15 < *puVar22)) {
                        uVar19 = (uint)uVar20;
                        *(uint **)(puVar8 + uVar20 * 8 + -8) = puVar15;
                        *(uint **)(puVar8 + uVar20 * 8) = puVar22;
                        puVar22 = puVar15;
                      }
                      uVar20 = uVar20 - 1;
                      puVar15 = puVar22;
                    } while ((long)uVar17 < (long)uVar20);
                  } while (uVar19 != uVar14);
                }
                DAT_0534bd90 = '\x01';
              }
              else if (DAT_0534bd90 != '\x01') goto LAB_01c3b2cc;
              if ((int)DAT_0534bd98 != 0) {
                if ((int)DAT_0534bd98 < 2) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 0;
                  iVar11 = (int)DAT_0534bd98 + -1;
                  do {
                    iVar13 = iVar11 + uVar14;
                    if (iVar13 < 0 != SCARRY4(iVar11,uVar14)) {
                      iVar13 = iVar13 + 1;
                    }
                    uVar19 = iVar13 >> 1;
                    if (*(uint **)(DAT_0534bda0 + (long)(int)uVar19 * 8) == (uint *)0x0)
                    goto LAB_01c3b2b4;
                    uVar18 = **(uint **)(DAT_0534bda0 + (long)(int)uVar19 * 8);
                    if (uVar18 == uVar10) goto LAB_01c3b2b4;
                    if (uVar18 < uVar10) {
                      uVar14 = uVar19 + 1;
                    }
                    else {
                      iVar11 = uVar19 - 1;
                    }
                  } while ((int)uVar14 < iVar11);
                }
                uVar19 = uVar14;
                if ((*(uint **)(DAT_0534bda0 + (long)(int)uVar14 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_0534bda0 + (long)(int)uVar14 * 8) == uVar10)) {
LAB_01c3b2b4:
                  if ((uVar19 < 3) &&
                     (uVar14 = *(uint *)(*(long *)(DAT_0534bda0 + (ulong)uVar19 * 8) + 4),
                     uVar14 < 3)) {
                    DAT_0534bd84 = '\x01';
                    DAT_0534bd88 = uVar10;
                    DAT_0534bd8c = uVar14;
                    goto LAB_01c3b2d0;
                  }
                }
              }
LAB_01c3b2cc:
              uVar14 = 0;
            }
LAB_01c3b2d0:
            uVar12 = (undefined2)uVar14;
          }
          puVar15 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar15 != (uint *)0x0)) && (*puVar15 != 0)) &&
             ((uVar10 = puVar15[1], uVar10 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar15 + lVar6 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar6 != 0) {
              uVar14 = 0;
              if ((ulong)uVar10 != 0) {
                uVar14 = (uint)((ulong)((long)puVar1 - lVar6) / (ulong)uVar10);
              }
              if (*puVar15 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if (uVar14 < DAT_0534bd38) {
                *(undefined2 *)(DAT_0534bd40 + (long)(int)uVar14 * 2) = uVar12;
              }
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar7);
  }
  return;
}

