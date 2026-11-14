
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017c5eb0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  undefined2 uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  ulong uVar25;
  uint *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint *puVar29;
  uint uVar30;
  
  puVar11 = PTR_DAT_04bb5c60;
  if ((param_1 != (uint *)0x0) && (uVar8 = *param_1, uVar8 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar12 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x90,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x8c,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6e,0x4c11db7);
    uVar30 = 0;
    uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
    uVar3 = crc32b(uVar12,0x65,0x4c11db7);
    uVar12 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9c,0x4c11db7);
    uVar4 = crc32b(uVar2,0x9f,0x4c11db7);
    uVar2 = crc32b(uVar12,0x79,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar2 = crc32b(uVar2,99,0x4c11db7);
    uVar2 = crc32b(uVar2,0x68,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar12 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar5 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar12,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar2 = crc32b(uVar2,100,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar6 = crc32b(uVar2,0x6d,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4c,0x4c11db7);
    uVar2 = crc32b(uVar2,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0x67,0x4c11db7);
    uVar2 = crc32b(uVar2,0x68,0x4c11db7);
    uVar2 = crc32b(uVar2,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0x4f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x66,0x4c11db7);
    uVar7 = crc32b(uVar2,0x66,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
    do {
      if (((uVar30 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar30 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar13 = *puVar1;
          if (uVar13 != 0) {
            cVar15 = *PTR_DAT_04bb5c58;
            do {
              puVar10 = PTR_DAT_04bb5c58;
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *puVar10 = 1;
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                uVar13 = *puVar1;
              }
              else {
                uVar18 = *(uint *)puVar11;
                if (-1 < (int)uVar18) {
                  if ((uint *)((long)puVar1 + (ulong)uVar18) != (uint *)0x0) {
                    uVar13 = *(uint *)((long)puVar1 + (ulong)uVar18);
                    goto LAB_017c6170;
                  }
                  break;
                }
                if (uVar18 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar13;
              uVar13 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar13 = 0, puVar1 == puVar24)) goto LAB_017c6170;
              lVar9 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar1 + (lVar9 - (long)puVar24);
              if (lVar9 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)puVar11 = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar20 = (int *)(lVar9 + 4);
              while (piVar20[-1] != -0x8b0c2d4) {
                piVar20 = piVar20 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_017c616c;
              }
              iVar14 = 0;
              if (*piVar20 != -1) {
                iVar14 = *piVar20;
              }
              *(int *)puVar11 = iVar14;
              uVar13 = *puVar1;
              if (uVar13 == 0) break;
            } while( true );
          }
LAB_017c616c:
          uVar13 = 0;
LAB_017c6170:
          if (((*puVar1 == 0) || (lVar9 = (long)puVar1 - (ulong)*puVar1, lVar9 == 0)) ||
             (*(char *)(lVar9 + 0xb) == '\0')) {
            if ((DAT_052930e0 == '\x01') && (DAT_052930e4 == uVar13)) {
              uVar18 = DAT_052930e8;
              if (3 < DAT_052930e8) goto LAB_017c6608;
            }
            else {
              if (((DAT_05293120 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_05293120), iVar14 != 0)) {
                DAT_052930f0 = 0x400000000;
                DAT_052930f8 = (undefined8 *)&DAT_05293100;
                __cxa_guard_release(&DAT_05293120);
              }
              if ((DAT_05293128 & 1) == 0) {
                DAT_05293128 = 1;
                if (((DAT_05293150 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_05293150), iVar14 != 0)) {
                  _DAT_0529312c = 0xffffffff00000000;
                  DAT_05293134 = 0xffffffff00000000;
                  DAT_0529313c = 0xffffffff00000000;
                  DAT_05293144 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05293150);
                }
                uVar12 = crc32b(uVar2,0x81,0x4c11db7);
                uVar12 = crc32b(uVar12,0xaa,0x4c11db7);
                uVar12 = crc32b(uVar12,0xe3,0x4c11db7);
                uVar12 = crc32b(uVar12,0x81,0x4c11db7);
                uVar18 = crc32b(uVar12,0x97,0x4c11db7);
                _DAT_0529312c = (ulong)~uVar18;
                iVar14 = (int)DAT_052930f0;
                iVar17 = DAT_052930f0._4_4_;
                if ((int)DAT_052930f0 < DAT_052930f0._4_4_) {
                  DAT_052930f8[(int)DAT_052930f0] = &DAT_0529312c;
                  iVar14 = (int)DAT_052930f0 + 1;
                  DAT_052930f0 = CONCAT44(DAT_052930f0._4_4_,iVar14);
                  iVar17 = DAT_052930f0._4_4_;
                }
                DAT_05293134 = CONCAT44(1,~uVar4);
                if (iVar14 < iVar17) {
                  DAT_052930f8[iVar14] = &DAT_05293134;
                  iVar14 = (int)DAT_052930f0 + 1;
                  DAT_052930f0 = CONCAT44(DAT_052930f0._4_4_,iVar14);
                  iVar17 = DAT_052930f0._4_4_;
                }
                uVar12 = crc32b(uVar2,0x83,0x4c11db7);
                uVar12 = crc32b(uVar12,0xa9,0x4c11db7);
                uVar12 = crc32b(uVar12,0xe3,0x4c11db7);
                uVar12 = crc32b(uVar12,0x83,0x4c11db7);
                uVar12 = crc32b(uVar12,0xb3,0x4c11db7);
                uVar12 = crc32b(uVar12,0xe3,0x4c11db7);
                uVar12 = crc32b(uVar12,0x83,0x4c11db7);
                uVar12 = crc32b(uVar12,0x80,0x4c11db7);
                uVar12 = crc32b(uVar12,0xe3,0x4c11db7);
                uVar12 = crc32b(uVar12,0x83,0x4c11db7);
                uVar18 = crc32b(uVar12,0xa0,0x4c11db7);
                DAT_0529313c = CONCAT44(2,~uVar18);
                if (iVar14 < iVar17) {
                  DAT_052930f8[iVar14] = &DAT_0529313c;
                  iVar14 = (int)DAT_052930f0 + 1;
                  DAT_052930f0 = CONCAT44(DAT_052930f0._4_4_,iVar14);
                  iVar17 = DAT_052930f0._4_4_;
                }
                uVar12 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar12 = crc32b(uVar12,0xb6,0x4c11db7);
                uVar12 = crc32b(uVar12,0x88,0x4c11db7);
                uVar12 = crc32b(uVar12,0xe7,0x4c11db7);
                uVar12 = crc32b(uVar12,0x81,0x4c11db7);
                uVar18 = crc32b(uVar12,0xaf,0x4c11db7);
                DAT_05293144 = CONCAT44(3,~uVar18);
                if (iVar14 < iVar17) {
                  DAT_052930f8[iVar14] = &DAT_05293144;
                  iVar14 = (int)DAT_052930f0 + 1;
                  DAT_052930f0 = CONCAT44(DAT_052930f0._4_4_,iVar14);
                }
                puVar28 = DAT_052930f8;
                if (1 < iVar14) {
                  uVar22 = 0;
                  uVar18 = iVar14 - 1;
                  do {
                    if ((int)uVar18 <= (int)uVar22) break;
                    puVar24 = (uint *)puVar28[uVar22];
                    uVar19 = (ulong)uVar22;
                    if ((uVar18 - uVar22 & 1) == 0) {
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
                    uVar25 = (ulong)uVar18;
                    uVar18 = uVar22;
                    if (~uVar19 + uVar25 != 0) {
                      puVar27 = puVar28 + uVar23 + 1;
                      do {
                        puVar24 = (uint *)*puVar27;
                        uVar21 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar27[1];
                          if (puVar24 != (uint *)0x0) goto LAB_017c65c0;
LAB_017c6570:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar27[-1] = puVar24;
                          *puVar27 = puVar26;
                          puVar29 = (uint *)puVar27[1];
                          puVar24 = puVar26;
                          uVar18 = uVar21;
                          if (puVar26 == (uint *)0x0) goto LAB_017c6570;
LAB_017c65c0:
                          if (puVar29 == (uint *)0x0) goto LAB_017c6570;
                          if (*puVar24 <= *puVar29) goto LAB_017c6570;
                          uVar18 = uVar21 + 1;
                          *puVar27 = puVar29;
                          puVar27[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar27 = puVar27 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar18 <= (int)uVar22) break;
                    uVar23 = (ulong)uVar18;
                    puVar24 = (uint *)puVar28[uVar18];
                    uVar22 = uVar18;
                    do {
                      puVar26 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar22 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar24;
                        puVar28[uVar23] = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar22 != uVar18);
                }
                DAT_052930ec = '\x01';
              }
              else if (DAT_052930ec != '\x01') goto LAB_017c6608;
              if ((int)DAT_052930f0 == 0) goto LAB_017c6608;
              if ((int)DAT_052930f0 < 2) {
                uVar18 = 0;
                puVar24 = (uint *)*DAT_052930f8;
                if (puVar24 != (uint *)0x0) goto LAB_017c6424;
LAB_017c65ec:
                uVar22 = uVar18;
                if (uVar18 < 4) {
LAB_017c65f8:
                  uVar18 = *(uint *)(DAT_052930f8[uVar22] + 4);
                  if (uVar18 < 4) {
                    DAT_052930e0 = '\x01';
                    DAT_052930e4 = uVar13;
                    DAT_052930e8 = uVar18;
                    goto LAB_017c6960;
                  }
                }
              }
              else {
                uVar18 = 0;
                iVar14 = (int)DAT_052930f0 + -1;
                do {
                  iVar17 = iVar14 + uVar18;
                  if (iVar17 < 0 != SCARRY4(iVar14,uVar18)) {
                    iVar17 = iVar17 + 1;
                  }
                  uVar22 = iVar17 >> 1;
                  if ((uint *)DAT_052930f8[(int)uVar22] == (uint *)0x0) goto LAB_017c6434;
                  uVar21 = *(uint *)DAT_052930f8[(int)uVar22];
                  if (uVar21 == uVar13) goto LAB_017c6434;
                  if (uVar21 < uVar13) {
                    uVar18 = uVar22 + 1;
                  }
                  else {
                    iVar14 = uVar22 - 1;
                  }
                } while ((int)uVar18 < iVar14);
                puVar24 = (uint *)DAT_052930f8[(int)uVar18];
                if (puVar24 == (uint *)0x0) goto LAB_017c65ec;
LAB_017c6424:
                uVar22 = uVar18;
                if (*puVar24 == uVar13) {
LAB_017c6434:
                  if (3 < uVar22) goto LAB_017c6608;
                  goto LAB_017c65f8;
                }
              }
LAB_017c6608:
              uVar18 = 0;
            }
          }
          else {
            if ((DAT_05293068 == '\x01') && (DAT_0529306c == uVar13)) {
              uVar18 = DAT_05293070;
              if (3 < DAT_05293070) goto LAB_017c6954;
            }
            else {
              if (((DAT_052930a8 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_052930a8), iVar14 != 0)) {
                DAT_05293078 = 0x400000000;
                DAT_05293080 = &DAT_05293088;
                __cxa_guard_release(&DAT_052930a8);
              }
              if ((DAT_052930b0 & 1) == 0) {
                DAT_052930b0 = 1;
                if (((DAT_052930d8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_052930d8), iVar14 != 0)) {
                  _DAT_052930b4 = 0xffffffff00000000;
                  DAT_052930bc = 0xffffffff00000000;
                  DAT_052930c4 = 0xffffffff00000000;
                  DAT_052930cc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_052930d8);
                }
                _DAT_052930b4 = (ulong)~uVar3;
                iVar14 = (int)DAT_05293078;
                iVar17 = DAT_05293078._4_4_;
                if ((int)DAT_05293078 < DAT_05293078._4_4_) {
                  *(undefined4 **)(DAT_05293080 + (long)(int)DAT_05293078 * 8) = &DAT_052930b4;
                  iVar14 = (int)DAT_05293078 + 1;
                  DAT_05293078 = CONCAT44(DAT_05293078._4_4_,iVar14);
                  iVar17 = DAT_05293078._4_4_;
                }
                DAT_052930bc = CONCAT44(1,~uVar5);
                if (iVar14 < iVar17) {
                  *(undefined8 **)(DAT_05293080 + (long)iVar14 * 8) = &DAT_052930bc;
                  iVar14 = (int)DAT_05293078 + 1;
                  DAT_05293078 = CONCAT44(DAT_05293078._4_4_,iVar14);
                  iVar17 = DAT_05293078._4_4_;
                }
                DAT_052930c4 = CONCAT44(2,~uVar6);
                if (iVar14 < iVar17) {
                  *(undefined8 **)(DAT_05293080 + (long)iVar14 * 8) = &DAT_052930c4;
                  iVar14 = (int)DAT_05293078 + 1;
                  DAT_05293078 = CONCAT44(DAT_05293078._4_4_,iVar14);
                  iVar17 = DAT_05293078._4_4_;
                }
                DAT_052930cc = CONCAT44(3,~uVar7);
                if (iVar14 < iVar17) {
                  *(undefined8 **)(DAT_05293080 + (long)iVar14 * 8) = &DAT_052930cc;
                  iVar14 = (int)DAT_05293078 + 1;
                  DAT_05293078 = CONCAT44(DAT_05293078._4_4_,iVar14);
                }
                puVar10 = DAT_05293080;
                if (1 < iVar14) {
                  uVar22 = 0;
                  uVar18 = iVar14 - 1;
                  do {
                    if ((int)uVar18 <= (int)uVar22) break;
                    puVar24 = *(uint **)(puVar10 + (ulong)uVar22 * 8);
                    uVar19 = (ulong)uVar22;
                    if ((uVar18 - uVar22 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar26 = puVar24;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar26 = *(uint **)(puVar10 + uVar23 * 8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar26 < *puVar24)) {
                        *(uint **)(puVar10 + uVar23 * 8) = puVar24;
                        *(uint **)(puVar10 + uVar19 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                    }
                    uVar25 = (ulong)uVar18;
                    uVar18 = uVar22;
                    if (~uVar19 + uVar25 != 0) {
                      puVar28 = (undefined8 *)(puVar10 + uVar23 * 8 + 8);
                      do {
                        puVar24 = (uint *)*puVar28;
                        uVar21 = (uint)uVar23;
                        if (((puVar26 == (uint *)0x0) || (puVar24 == (uint *)0x0)) ||
                           (*puVar26 <= *puVar24)) {
                          puVar29 = (uint *)puVar28[1];
                          if (puVar24 != (uint *)0x0) goto LAB_017c68d0;
LAB_017c6880:
                          puVar24 = puVar29;
                        }
                        else {
                          puVar28[-1] = puVar24;
                          *puVar28 = puVar26;
                          puVar29 = (uint *)puVar28[1];
                          puVar24 = puVar26;
                          uVar18 = uVar21;
                          if (puVar26 == (uint *)0x0) goto LAB_017c6880;
LAB_017c68d0:
                          if (puVar29 == (uint *)0x0) goto LAB_017c6880;
                          if (*puVar24 <= *puVar29) goto LAB_017c6880;
                          uVar18 = uVar21 + 1;
                          *puVar28 = puVar29;
                          puVar28[1] = puVar24;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar26 = puVar24;
                      } while (uVar25 != uVar23);
                    }
                    if ((int)uVar18 <= (int)uVar22) break;
                    uVar23 = (ulong)uVar18;
                    puVar24 = *(uint **)(puVar10 + (ulong)uVar18 * 8);
                    uVar22 = uVar18;
                    do {
                      puVar26 = *(uint **)(puVar10 + uVar23 * 8 + -8);
                      if (((puVar24 != (uint *)0x0) && (puVar26 != (uint *)0x0)) &&
                         (*puVar24 < *puVar26)) {
                        uVar22 = (uint)uVar23;
                        *(uint **)(puVar10 + uVar23 * 8 + -8) = puVar24;
                        *(uint **)(puVar10 + uVar23 * 8) = puVar26;
                        puVar26 = puVar24;
                      }
                      uVar23 = uVar23 - 1;
                      puVar24 = puVar26;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar22 != uVar18);
                }
                DAT_05293074 = '\x01';
              }
              else if (DAT_05293074 != '\x01') goto LAB_017c6954;
              if ((int)DAT_05293078 != 0) {
                if ((int)DAT_05293078 < 2) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  iVar14 = (int)DAT_05293078 + -1;
                  do {
                    iVar17 = iVar14 + uVar18;
                    if (iVar17 < 0 != SCARRY4(iVar14,uVar18)) {
                      iVar17 = iVar17 + 1;
                    }
                    uVar22 = iVar17 >> 1;
                    if (*(uint **)(DAT_05293080 + (long)(int)uVar22 * 8) == (uint *)0x0)
                    goto joined_r0x017c6940;
                    uVar21 = **(uint **)(DAT_05293080 + (long)(int)uVar22 * 8);
                    if (uVar21 == uVar13) goto joined_r0x017c6940;
                    if (uVar21 < uVar13) {
                      uVar18 = uVar22 + 1;
                    }
                    else {
                      iVar14 = uVar22 - 1;
                    }
                  } while ((int)uVar18 < iVar14);
                }
                uVar22 = uVar18;
                if ((*(uint **)(DAT_05293080 + (long)(int)uVar18 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05293080 + (long)(int)uVar18 * 8) == uVar13)) {
joined_r0x017c6940:
                  if ((uVar22 < 4) &&
                     (uVar18 = *(uint *)(*(long *)(DAT_05293080 + (ulong)uVar22 * 8) + 4),
                     uVar18 < 4)) {
                    DAT_05293068 = '\x01';
                    DAT_0529306c = uVar13;
                    DAT_05293070 = uVar18;
                    goto LAB_017c6958;
                  }
                }
              }
LAB_017c6954:
              uVar18 = 0;
            }
LAB_017c6958:
          }
LAB_017c6960:
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar24 != (uint *)0x0)) && (*puVar24 != 0)) &&
             ((uVar13 = puVar24[1], uVar13 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar24 + lVar9 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar9 != 0) {
              uVar22 = 0;
              if ((ulong)uVar13 != 0) {
                uVar22 = (uint)((ulong)((long)puVar1 - lVar9) / (ulong)uVar13);
              }
              if (*puVar24 <= uVar22) {
                uVar22 = 0xffffffff;
              }
              if (uVar22 < DAT_05292fc8) {
                *(short *)(DAT_05292fd0 + (long)(int)uVar22 * 2) = (short)uVar18;
              }
            }
          }
          uVar13 = *puVar1;
          if (uVar13 != 0) {
            cVar15 = *PTR_DAT_04bb5c58;
            do {
              puVar10 = PTR_DAT_04bb5c58;
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *puVar10 = 1;
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                uVar13 = *puVar1;
              }
              else {
                uVar18 = *(uint *)(puVar11 + 8);
                if (-1 < (int)uVar18) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar18) != (undefined4 *)0x0) {
                    uVar12 = *(undefined4 *)((long)puVar1 + (ulong)uVar18);
                    goto LAB_017c6ac0;
                  }
                  break;
                }
                if (uVar18 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar13;
              uVar12 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar12 = 0, puVar1 == puVar24)) goto LAB_017c6ac0;
              lVar9 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar1 + (lVar9 - (long)puVar24);
              if (lVar9 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)(puVar11 + 8) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar20 = (int *)(lVar9 + 4);
              while (piVar20[-1] != 0x49295020) {
                piVar20 = piVar20 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_017c6abc;
              }
              iVar14 = 0;
              if (*piVar20 != -1) {
                iVar14 = *piVar20;
              }
              *(int *)(puVar11 + 8) = iVar14;
              uVar13 = *puVar1;
              if (uVar13 == 0) break;
            } while( true );
          }
LAB_017c6abc:
          uVar12 = 0;
LAB_017c6ac0:
          if (((*puVar1 == 0) || (lVar9 = (long)puVar1 - (ulong)*puVar1, lVar9 == 0)) ||
             (*(char *)(lVar9 + 0xb) == '\0')) {
            uVar13 = FUN_017c7340(uVar12);
            if (1 < uVar13) {
              uVar13 = 0;
            }
            uVar16 = (undefined2)uVar13;
          }
          else {
            uVar13 = FUN_017c6f00();
            if (1 < uVar13) {
              uVar13 = 0;
            }
            uVar16 = (undefined2)uVar13;
          }
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar24 != (uint *)0x0)) &&
             ((*puVar24 != 0 &&
              ((uVar13 = puVar24[1], uVar13 != 0 && ((ulong)(ushort)puVar24[2] != 0)))))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar24 + lVar9 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar9 != 0) {
              uVar18 = 0;
              if ((ulong)uVar13 != 0) {
                uVar18 = (uint)((ulong)((long)puVar1 - lVar9) / (ulong)uVar13);
              }
              if (*puVar24 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 < DAT_05292fd8) {
                *(undefined2 *)(DAT_05292fe0 + (long)(int)uVar18 * 2) = uVar16;
              }
            }
          }
          uVar13 = *puVar1;
          if (uVar13 != 0) {
            cVar15 = *PTR_DAT_04bb5c58;
            do {
              puVar10 = PTR_DAT_04bb5c58;
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar11 = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                *puVar10 = 1;
                *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                uVar13 = *puVar1;
              }
              else {
                uVar18 = *(uint *)(puVar11 + 0xc);
                if (-1 < (int)uVar18) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar18) != (undefined4 *)0x0) {
                    uVar12 = *(undefined4 *)((long)puVar1 + (ulong)uVar18);
                    goto LAB_017c6c60;
                  }
                  break;
                }
                if (uVar18 != 0xffffffff) break;
              }
              puVar24 = (uint *)(ulong)uVar13;
              uVar12 = 0;
              if ((puVar24 == (uint *)0x0) || (uVar12 = 0, puVar1 == puVar24)) goto LAB_017c6c60;
              lVar9 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar24)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar1 + (lVar9 - (long)puVar24);
              if (lVar9 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar24));
              *(undefined4 *)(puVar11 + 0xc) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar20 = (int *)(lVar9 + 4);
              while (piVar20[-1] != -0x4ee814df) {
                piVar20 = piVar20 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_017c6c5c;
              }
              iVar14 = 0;
              if (*piVar20 != -1) {
                iVar14 = *piVar20;
              }
              *(int *)(puVar11 + 0xc) = iVar14;
              uVar13 = *puVar1;
              if (uVar13 == 0) break;
            } while( true );
          }
LAB_017c6c5c:
          uVar12 = 0;
LAB_017c6c60:
          if (((*puVar1 == 0) || (lVar9 = (long)puVar1 - (ulong)*puVar1, lVar9 == 0)) ||
             (*(char *)(lVar9 + 0xb) == '\0')) {
            uVar13 = FUN_017c7340(uVar12);
            if (1 < uVar13) {
              uVar13 = 0;
            }
            uVar16 = (undefined2)uVar13;
          }
          else {
            uVar13 = FUN_017c6f00();
            if (1 < uVar13) {
              uVar13 = 0;
            }
            uVar16 = (undefined2)uVar13;
          }
          puVar24 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar24 != (uint *)0x0)) &&
             ((*puVar24 != 0 &&
              ((uVar13 = puVar24[1], uVar13 != 0 && ((ulong)(ushort)puVar24[2] != 0)))))) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar24 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar24 + lVar9 + (ulong)(ushort)puVar24[2] * 8;
            if (lVar9 != 0) {
              uVar18 = 0;
              if ((ulong)uVar13 != 0) {
                uVar18 = (uint)((ulong)((long)puVar1 - lVar9) / (ulong)uVar13);
              }
              if (*puVar24 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 < DAT_05292fe8) {
                *(undefined2 *)(DAT_05292ff0 + (long)(int)uVar18 * 2) = uVar16;
              }
            }
          }
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar8);
  }
  return;
}

