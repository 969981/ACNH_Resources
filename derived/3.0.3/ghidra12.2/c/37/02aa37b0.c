
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aa37b0(uint *param_1)

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
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  int *piVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  
  puVar12 = PTR_DAT_04bb5be8;
  puVar11 = PTR_DAT_04bb5be0;
  if ((param_1 != (uint *)0x0) && (uVar9 = *param_1, uVar9 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar4 = crc32b(uVar3,0x72,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x54,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar26 = 0;
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6d,0x4c11db7);
    uVar6 = crc32b(uVar5,0x74,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar7 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar2 = crc32b(uVar2,0xae,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar2 = crc32b(uVar2,0xae,0x4c11db7);
    uVar8 = crc32b(uVar2,0xb6,0x4c11db7);
    do {
      if (((uVar26 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar26 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar29 = *puVar1;
          if (uVar29 != 0) {
            cVar20 = *puVar11;
            do {
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                *puVar11 = 1;
                *(undefined4 *)(puVar12 + 0x20) = 0xffffffff;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                uVar29 = *puVar1;
              }
              else {
                uVar22 = *(uint *)puVar12;
                if (-1 < (int)uVar22) {
                  if ((uint *)((long)puVar1 + (ulong)uVar22) != (uint *)0x0) {
                    uVar29 = *(uint *)((long)puVar1 + (ulong)uVar22);
                    goto LAB_02aa3a00;
                  }
                  break;
                }
                if (uVar22 != 0xffffffff) break;
              }
              puVar28 = (uint *)(ulong)uVar29;
              uVar29 = 0;
              if ((puVar28 == (uint *)0x0) || (uVar29 = 0, puVar1 == puVar28)) goto LAB_02aa3a00;
              lVar10 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar28)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar1 + (lVar10 - (long)puVar28);
              if (lVar10 == 0) break;
              uVar19 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar28));
              *(undefined4 *)puVar12 = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar25 = (int *)(lVar10 + 4);
              while (piVar25[-1] != 0x60680c93) {
                piVar25 = piVar25 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_02aa39fc;
              }
              iVar14 = 0;
              if (*piVar25 != -1) {
                iVar14 = *piVar25;
              }
              *(int *)puVar12 = iVar14;
              uVar29 = *puVar1;
              if (uVar29 == 0) break;
            } while( true );
          }
LAB_02aa39fc:
          uVar29 = 0;
LAB_02aa3a00:
          if (((*puVar1 == 0) || (lVar10 = (long)puVar1 - (ulong)*puVar1, lVar10 == 0)) ||
             (*(char *)(lVar10 + 0xb) == '\0')) {
            if ((DAT_0560b440 == '\x01') && (DAT_0560b444 == uVar29)) {
              uVar22 = DAT_0560b448;
              if (2 < DAT_0560b448) goto LAB_02aa3c9c;
            }
            else {
              if (((DAT_0560b478 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_0560b478), iVar14 != 0)) {
                DAT_0560b450 = 0x300000000;
                DAT_0560b458 = (undefined8 *)&DAT_0560b460;
                __cxa_guard_release(&DAT_0560b478);
              }
              if ((DAT_0560b480 & 1) == 0) {
                DAT_0560b480 = 1;
                if (((DAT_0560b4a0 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_0560b4a0), iVar14 != 0)) {
                  DAT_0560b494 = 0xffffffff00000000;
                  _DAT_0560b484 = 0xffffffff00000000;
                  DAT_0560b48c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0560b4a0);
                }
                _DAT_0560b484 = (ulong)~uVar8;
                iVar14 = (int)DAT_0560b450;
                iVar24 = DAT_0560b450._4_4_;
                if ((int)DAT_0560b450 < DAT_0560b450._4_4_) {
                  DAT_0560b458[(int)DAT_0560b450] = &DAT_0560b484;
                  iVar14 = (int)DAT_0560b450 + 1;
                  DAT_0560b450 = CONCAT44(DAT_0560b450._4_4_,iVar14);
                  iVar24 = DAT_0560b450._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar2,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0x86,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar4 = crc32b(uVar4,0xb3,0x4c11db7);
                uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
                uVar4 = crc32b(uVar4,0x83,0x4c11db7);
                uVar22 = crc32b(uVar4,0x88,0x4c11db7);
                DAT_0560b48c = CONCAT44(1,~uVar22);
                if (iVar14 < iVar24) {
                  DAT_0560b458[iVar14] = &DAT_0560b48c;
                  iVar14 = (int)DAT_0560b450 + 1;
                  DAT_0560b450 = CONCAT44(DAT_0560b450._4_4_,iVar14);
                  iVar24 = DAT_0560b450._4_4_;
                }
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar2 = crc32b(uVar2,0xaa,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar22 = crc32b(uVar2,0x97,0x4c11db7);
                DAT_0560b494 = CONCAT44(2,~uVar22);
                if (iVar14 < iVar24) {
                  DAT_0560b458[iVar14] = &DAT_0560b494;
                  iVar14 = (int)DAT_0560b450 + 1;
                  DAT_0560b450 = CONCAT44(DAT_0560b450._4_4_,iVar14);
                }
                puVar17 = DAT_0560b458;
                if (1 < iVar14) {
                  uVar21 = 0;
                  uVar22 = iVar14 - 1;
                  do {
                    if ((int)uVar22 <= (int)uVar21) break;
                    puVar28 = (uint *)puVar17[uVar21];
                    uVar19 = (ulong)uVar21;
                    if ((uVar22 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar16 = puVar28;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar16 = (uint *)puVar17[uVar23];
                      if (((puVar28 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar16 < *puVar28)) {
                        puVar17[uVar23] = puVar28;
                        puVar17[uVar19] = puVar16;
                        puVar16 = puVar28;
                      }
                    }
                    uVar30 = (ulong)uVar22;
                    uVar22 = uVar21;
                    if (~uVar19 + uVar30 != 0) {
                      puVar15 = puVar17 + uVar23 + 1;
                      do {
                        puVar28 = (uint *)*puVar15;
                        uVar18 = (uint)uVar23;
                        if (((puVar16 == (uint *)0x0) || (puVar28 == (uint *)0x0)) ||
                           (*puVar16 <= *puVar28)) {
                          puVar27 = (uint *)puVar15[1];
                          if (puVar28 != (uint *)0x0) goto LAB_02aa3e20;
LAB_02aa3dd0:
                          puVar28 = puVar27;
                        }
                        else {
                          puVar15[-1] = puVar28;
                          *puVar15 = puVar16;
                          puVar27 = (uint *)puVar15[1];
                          puVar28 = puVar16;
                          uVar22 = uVar18;
                          if (puVar16 == (uint *)0x0) goto LAB_02aa3dd0;
LAB_02aa3e20:
                          if (puVar27 == (uint *)0x0) goto LAB_02aa3dd0;
                          if (*puVar28 <= *puVar27) goto LAB_02aa3dd0;
                          uVar22 = uVar18 + 1;
                          *puVar15 = puVar27;
                          puVar15[1] = puVar28;
                        }
                        uVar23 = uVar23 + 2;
                        puVar15 = puVar15 + 2;
                        puVar16 = puVar28;
                      } while (uVar30 != uVar23);
                    }
                    if ((int)uVar22 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar22;
                    puVar28 = (uint *)puVar17[uVar22];
                    uVar21 = uVar22;
                    do {
                      puVar16 = (uint *)puVar17[uVar23 - 1];
                      if (((puVar28 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar28 < *puVar16)) {
                        uVar21 = (uint)uVar23;
                        puVar17[uVar23 - 1] = puVar28;
                        puVar17[uVar23] = puVar16;
                        puVar16 = puVar28;
                      }
                      uVar23 = uVar23 - 1;
                      puVar28 = puVar16;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar22);
                }
                DAT_0560b44c = '\x01';
              }
              else if (DAT_0560b44c != '\x01') goto LAB_02aa3c9c;
              if ((int)DAT_0560b450 == 0) {
LAB_02aa3c9c:
                uVar22 = 0;
              }
              else {
                if ((int)DAT_0560b450 < 2) {
                  uVar21 = 0;
                  puVar28 = (uint *)*DAT_0560b458;
                  uVar22 = uVar21;
                  if (puVar28 != (uint *)0x0) goto LAB_02aa3c70;
joined_r0x02aa3e54:
                  if (uVar22 < 3) {
                    uVar22 = *(uint *)(DAT_0560b458[uVar22] + 4);
                    if (uVar22 < 3) {
                      DAT_0560b440 = '\x01';
                      DAT_0560b444 = uVar29;
                      DAT_0560b448 = uVar22;
                      goto LAB_02aa41d8;
                    }
                    goto LAB_02aa3c9c;
                  }
                }
                else {
                  uVar21 = 0;
                  iVar14 = (int)DAT_0560b450 + -1;
                  do {
                    iVar24 = iVar14 + uVar21;
                    if (iVar24 < 0 != SCARRY4(iVar14,uVar21)) {
                      iVar24 = iVar24 + 1;
                    }
                    uVar22 = iVar24 >> 1;
                    if ((uint *)DAT_0560b458[(int)uVar22] == (uint *)0x0) goto joined_r0x02aa3e54;
                    uVar18 = *(uint *)DAT_0560b458[(int)uVar22];
                    if (uVar18 == uVar29) goto joined_r0x02aa3e54;
                    if (uVar18 < uVar29) {
                      uVar21 = uVar22 + 1;
                    }
                    else {
                      iVar14 = uVar22 - 1;
                    }
                  } while ((int)uVar21 < iVar14);
                  puVar28 = (uint *)DAT_0560b458[(int)uVar21];
                  uVar22 = uVar21;
                  if (puVar28 == (uint *)0x0) goto joined_r0x02aa3e54;
LAB_02aa3c70:
                  uVar22 = uVar21;
                  if (*puVar28 == uVar29) goto joined_r0x02aa3e54;
                }
                uVar22 = 0;
              }
            }
          }
          else {
            if ((DAT_0560b3d8 == '\x01') && (DAT_0560b3dc == uVar29)) {
              uVar22 = DAT_0560b3e0;
              if (2 < DAT_0560b3e0) goto LAB_02aa4178;
            }
            else {
              if (((DAT_0560b410 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_0560b410), iVar14 != 0)) {
                DAT_0560b3e8 = 0x300000000;
                DAT_0560b3f0 = &DAT_0560b3f8;
                __cxa_guard_release(&DAT_0560b410);
              }
              if ((DAT_0560b418 & 1) == 0) {
                DAT_0560b418 = 1;
                if (((DAT_0560b438 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_0560b438), iVar14 != 0)) {
                  DAT_0560b42c = 0xffffffff00000000;
                  _DAT_0560b41c = 0xffffffff00000000;
                  DAT_0560b424 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0560b438);
                }
                _DAT_0560b41c = (ulong)~uVar7;
                iVar14 = (int)DAT_0560b3e8;
                iVar24 = DAT_0560b3e8._4_4_;
                if ((int)DAT_0560b3e8 < DAT_0560b3e8._4_4_) {
                  *(undefined4 **)(DAT_0560b3f0 + (long)(int)DAT_0560b3e8 * 8) = &DAT_0560b41c;
                  iVar14 = (int)DAT_0560b3e8 + 1;
                  DAT_0560b3e8 = CONCAT44(DAT_0560b3e8._4_4_,iVar14);
                  iVar24 = DAT_0560b3e8._4_4_;
                }
                DAT_0560b424 = CONCAT44(1,~uVar6);
                if (iVar14 < iVar24) {
                  *(undefined8 **)(DAT_0560b3f0 + (long)iVar14 * 8) = &DAT_0560b424;
                  iVar14 = (int)DAT_0560b3e8 + 1;
                  DAT_0560b3e8 = CONCAT44(DAT_0560b3e8._4_4_,iVar14);
                  iVar24 = DAT_0560b3e8._4_4_;
                }
                uVar2 = crc32b(uVar3,0x6e,0x4c11db7);
                uVar22 = crc32b(uVar2,0x65,0x4c11db7);
                DAT_0560b42c = CONCAT44(2,~uVar22);
                if (iVar14 < iVar24) {
                  *(undefined8 **)(DAT_0560b3f0 + (long)iVar14 * 8) = &DAT_0560b42c;
                  iVar14 = (int)DAT_0560b3e8 + 1;
                  DAT_0560b3e8 = CONCAT44(DAT_0560b3e8._4_4_,iVar14);
                }
                puVar13 = DAT_0560b3f0;
                if (1 < iVar14) {
                  uVar21 = 0;
                  uVar22 = iVar14 - 1;
                  do {
                    if ((int)uVar22 <= (int)uVar21) break;
                    puVar28 = *(uint **)(puVar13 + (ulong)uVar21 * 8);
                    uVar19 = (ulong)uVar21;
                    if ((uVar22 - uVar21 & 1) == 0) {
                      uVar23 = uVar19;
                      puVar16 = puVar28;
                    }
                    else {
                      uVar23 = uVar19 + 1;
                      puVar16 = *(uint **)(puVar13 + uVar23 * 8);
                      if (((puVar28 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar16 < *puVar28)) {
                        *(uint **)(puVar13 + uVar23 * 8) = puVar28;
                        *(uint **)(puVar13 + uVar19 * 8) = puVar16;
                        puVar16 = puVar28;
                      }
                    }
                    uVar30 = (ulong)uVar22;
                    uVar22 = uVar21;
                    if (~uVar19 + uVar30 != 0) {
                      puVar17 = (undefined8 *)(puVar13 + uVar23 * 8 + 8);
                      do {
                        puVar28 = (uint *)*puVar17;
                        uVar18 = (uint)uVar23;
                        if (((puVar16 == (uint *)0x0) || (puVar28 == (uint *)0x0)) ||
                           (*puVar16 <= *puVar28)) {
                          puVar27 = (uint *)puVar17[1];
                          if (puVar28 != (uint *)0x0) goto LAB_02aa4120;
LAB_02aa40d0:
                          puVar28 = puVar27;
                        }
                        else {
                          puVar17[-1] = puVar28;
                          *puVar17 = puVar16;
                          puVar27 = (uint *)puVar17[1];
                          puVar28 = puVar16;
                          uVar22 = uVar18;
                          if (puVar16 == (uint *)0x0) goto LAB_02aa40d0;
LAB_02aa4120:
                          if ((puVar27 == (uint *)0x0) || (*puVar28 <= *puVar27)) goto LAB_02aa40d0;
                          uVar22 = uVar18 + 1;
                          *puVar17 = puVar27;
                          puVar17[1] = puVar28;
                        }
                        uVar23 = uVar23 + 2;
                        puVar17 = puVar17 + 2;
                        puVar16 = puVar28;
                      } while (uVar30 != uVar23);
                    }
                    if ((int)uVar22 <= (int)uVar21) break;
                    uVar23 = (ulong)uVar22;
                    puVar28 = *(uint **)(puVar13 + (ulong)uVar22 * 8);
                    uVar21 = uVar22;
                    do {
                      puVar16 = *(uint **)(puVar13 + uVar23 * 8 + -8);
                      if (((puVar28 != (uint *)0x0) && (puVar16 != (uint *)0x0)) &&
                         (*puVar28 < *puVar16)) {
                        uVar21 = (uint)uVar23;
                        *(uint **)(puVar13 + uVar23 * 8 + -8) = puVar28;
                        *(uint **)(puVar13 + uVar23 * 8) = puVar16;
                        puVar16 = puVar28;
                      }
                      uVar23 = uVar23 - 1;
                      puVar28 = puVar16;
                    } while ((long)uVar19 < (long)uVar23);
                  } while (uVar21 != uVar22);
                }
                DAT_0560b3e4 = '\x01';
              }
              else if (DAT_0560b3e4 != '\x01') goto LAB_02aa4178;
              if ((int)DAT_0560b3e8 == 0) {
LAB_02aa4178:
                uVar22 = 0;
              }
              else {
                if ((int)DAT_0560b3e8 < 2) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0;
                  iVar14 = (int)DAT_0560b3e8 + -1;
                  do {
                    iVar24 = iVar14 + uVar22;
                    if (iVar24 < 0 != SCARRY4(iVar14,uVar22)) {
                      iVar24 = iVar24 + 1;
                    }
                    uVar21 = iVar24 >> 1;
                    if (*(uint **)(DAT_0560b3f0 + (long)(int)uVar21 * 8) == (uint *)0x0)
                    goto joined_r0x02aa41a8;
                    uVar18 = **(uint **)(DAT_0560b3f0 + (long)(int)uVar21 * 8);
                    if (uVar18 == uVar29) goto joined_r0x02aa41a8;
                    if (uVar18 < uVar29) {
                      uVar22 = uVar21 + 1;
                    }
                    else {
                      iVar14 = uVar21 - 1;
                    }
                  } while ((int)uVar22 < iVar14);
                }
                uVar21 = uVar22;
                if ((*(uint **)(DAT_0560b3f0 + (long)(int)uVar22 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_0560b3f0 + (long)(int)uVar22 * 8) == uVar29)) {
joined_r0x02aa41a8:
                  if (uVar21 < 3) {
                    uVar22 = *(uint *)(*(long *)(DAT_0560b3f0 + (ulong)uVar21 * 8) + 4);
                    if (uVar22 < 3) {
                      DAT_0560b3d8 = '\x01';
                      DAT_0560b3dc = uVar29;
                      DAT_0560b3e0 = uVar22;
                      goto LAB_02aa41d0;
                    }
                    goto LAB_02aa4178;
                  }
                }
                uVar22 = 0;
              }
            }
LAB_02aa41d0:
          }
LAB_02aa41d8:
          puVar28 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar28 != (uint *)0x0)) &&
             ((*puVar28 != 0 &&
              ((uVar29 = puVar28[1], uVar29 != 0 && ((ulong)(ushort)puVar28[2] != 0)))))) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar28 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar28 + lVar10 + (ulong)(ushort)puVar28[2] * 8;
            if (lVar10 != 0) {
              uVar21 = 0;
              if ((ulong)uVar29 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar10) / (ulong)uVar29);
              }
              if (*puVar28 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bc46d0) {
                *(short *)(*(long *)(PTR_DAT_04bc46d0 + 8) + (long)(int)uVar21 * 2) = (short)uVar22;
              }
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar9);
  }
  return;
}

