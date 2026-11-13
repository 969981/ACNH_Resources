
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014030f0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  undefined2 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  byte *pbVar27;
  long lVar28;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar7 = *param_1, uVar7 != 0)) {
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,0x75,0x4c11db7);
    uVar25 = 0;
    uVar2 = crc32b(uVar2,0x74,0x4c11db7);
    uVar3 = crc32b(uVar3,0x74,0x4c11db7);
    uVar4 = crc32b(uVar2,0x68,0x4c11db7);
    uVar5 = crc32b(uVar3,0x68,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar2,0x8c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x97,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8d,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8a,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
    uVar3 = crc32b(uVar3,0x90,0x4c11db7);
    uVar6 = crc32b(uVar3,0x83,0x4c11db7);
    puVar19 = (uint *)PTR_DAT_04bbcae8;
    do {
      if (uVar25 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar13 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar13 = 0x1c;
            }
            puVar1 = (uint *)((ulong)(param_1[1] * uVar25 + (uint)(ushort)param_1[2] * 8 + iVar13) +
                             (long)param_1);
            if (puVar1 != (uint *)0x0) {
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbcae0;
                do {
                  if (cVar9 == '\0') {
                    puVar19[0x10] = 0xffffffff;
                    puVar19[0x11] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    cVar9 = '\x01';
                    puVar19[0x12] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                    *PTR_DAT_04bbcae0 = 1;
                  }
                  else {
                    uVar12 = *puVar19;
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_01403360;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_01403360;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar1 + (lVar28 - (long)puVar21);
                  if (lVar28 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  *puVar19 = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar28 + 4);
                  while (puVar21[-1] != 0x64330cb0) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_0140335c;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  *puVar19 = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_0140335c:
              uVar26 = 0;
LAB_01403360:
              if (((*puVar1 == 0) || (lVar28 = (long)puVar1 - (ulong)*puVar1, lVar28 == 0)) ||
                 (*(char *)(lVar28 + 0xb) == '\0')) {
                if ((DAT_051b6a68 == '\x01') && (DAT_051b6a6c == uVar26)) {
                  uVar12 = DAT_051b6a70;
                  if (1 < DAT_051b6a70) goto LAB_01403594;
                }
                else {
                  if ((DAT_051b6a98 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6a98);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6a78 = 0x200000000;
                      DAT_051b6a80 = (undefined8 *)&DAT_051b6a88;
                      __cxa_guard_release(&DAT_051b6a98);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6aa0 & 1) == 0) {
                    DAT_051b6aa0 = 1;
                    if (((DAT_051b6ab8 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6ab8), iVar13 != 0)) {
                      _DAT_051b6aa4 = 0xffffffff00000000;
                      DAT_051b6aac = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6ab8);
                    }
                    _DAT_051b6aa4 = (ulong)~uVar6;
                    iVar13 = (int)DAT_051b6a78;
                    iVar11 = DAT_051b6a78._4_4_;
                    if ((int)DAT_051b6a78 < DAT_051b6a78._4_4_) {
                      DAT_051b6a80[(int)DAT_051b6a78] = &DAT_051b6aa4;
                      iVar13 = (int)DAT_051b6a78 + 1;
                      DAT_051b6a78 = CONCAT44(DAT_051b6a78._4_4_,iVar13);
                      iVar11 = DAT_051b6a78._4_4_;
                    }
                    uVar3 = crc32b(uVar2,0x8d,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x97,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x8d,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x8a,0x4c11db7);
                    uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
                    uVar3 = crc32b(uVar3,0x90,0x4c11db7);
                    uVar12 = crc32b(uVar3,0x83,0x4c11db7);
                    DAT_051b6aac = CONCAT44(1,~uVar12);
                    if (iVar13 < iVar11) {
                      DAT_051b6a80[iVar13] = &DAT_051b6aac;
                      iVar13 = (int)DAT_051b6a78 + 1;
                      DAT_051b6a78 = CONCAT44(DAT_051b6a78._4_4_,iVar13);
                    }
                    puVar23 = DAT_051b6a80;
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01403710;
LAB_014036c0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_014036c0;
LAB_01403710:
                              if (puVar24 == (uint *)0x0) goto LAB_014036c0;
                              if (*puVar19 <= *puVar24) goto LAB_014036c0;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6a74 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6a74 != '\x01') goto LAB_01403594;
                  if ((int)DAT_051b6a78 == 0) {
LAB_01403594:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6a78 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_051b6a80;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01403560;
joined_r0x01403744:
                      if (uVar12 < 2) {
                        uVar12 = *(uint *)(DAT_051b6a80[uVar12] + 4);
                        if (uVar12 < 2) {
                          DAT_051b6a68 = '\x01';
                          DAT_051b6a6c = uVar26;
                          DAT_051b6a70 = uVar12;
                          goto LAB_01403a7c;
                        }
                        goto LAB_01403594;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_051b6a78 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_051b6a80[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01403744;
                        uVar16 = *(uint *)DAT_051b6a80[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01403744;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_051b6a80[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01403744;
LAB_01403560:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01403744;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_051b6a10 == '\x01') && (DAT_051b6a14 == uVar26)) {
                  uVar12 = DAT_051b6a18;
                  if (1 < DAT_051b6a18) goto LAB_01403a10;
                }
                else {
                  if ((DAT_051b6a40 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6a40);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6a20 = 0x200000000;
                      DAT_051b6a28 = &DAT_051b6a30;
                      __cxa_guard_release(&DAT_051b6a40);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6a48 & 1) == 0) {
                    DAT_051b6a48 = 1;
                    if (((DAT_051b6a60 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6a60), iVar13 != 0)) {
                      _DAT_051b6a4c = 0xffffffff00000000;
                      DAT_051b6a54 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6a60);
                    }
                    _DAT_051b6a4c = (ulong)~uVar4;
                    iVar13 = (int)DAT_051b6a20;
                    iVar11 = DAT_051b6a20._4_4_;
                    if ((int)DAT_051b6a20 < DAT_051b6a20._4_4_) {
                      *(undefined4 **)(DAT_051b6a28 + (long)(int)DAT_051b6a20 * 8) = &DAT_051b6a4c;
                      iVar13 = (int)DAT_051b6a20 + 1;
                      DAT_051b6a20 = CONCAT44(DAT_051b6a20._4_4_,iVar13);
                      iVar11 = DAT_051b6a20._4_4_;
                    }
                    DAT_051b6a54 = CONCAT44(1,~uVar5);
                    if (iVar13 < iVar11) {
                      *(undefined8 **)(DAT_051b6a28 + (long)iVar13 * 8) = &DAT_051b6a54;
                      iVar13 = (int)DAT_051b6a20 + 1;
                      DAT_051b6a20 = CONCAT44(DAT_051b6a20._4_4_,iVar13);
                    }
                    puVar8 = DAT_051b6a28;
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_014039b0;
LAB_01403960:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01403960;
LAB_014039b0:
                              if (puVar24 == (uint *)0x0) goto LAB_01403960;
                              if (*puVar19 <= *puVar24) goto LAB_01403960;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6a1c = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6a1c != '\x01') goto LAB_01403a10;
                  if ((int)DAT_051b6a20 == 0) {
LAB_01403a10:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6a20 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_051b6a20 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_051b6a28 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01403a40;
                        uVar16 = **(uint **)(DAT_051b6a28 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01403a40;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_051b6a28 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_051b6a28 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01403a40:
                      if (uVar17 < 2) {
                        uVar12 = *(uint *)(*(long *)(DAT_051b6a28 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 2) {
                          DAT_051b6a10 = '\x01';
                          DAT_051b6a14 = uVar26;
                          DAT_051b6a18 = uVar12;
                          goto LAB_01403a74;
                        }
                        goto LAB_01403a10;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01403a74:
              }
LAB_01403a7c:
              puVar8 = PTR_DAT_04bbcae8;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar28 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar28) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < DAT_051b69c0) {
                          *(short *)(DAT_051b69c8 + (long)(int)uVar17 * 2) = (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbcae0;
                do {
                  if (cVar9 == '\0') {
                    puVar19[0x10] = 0xffffffff;
                    puVar19[0x11] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    cVar9 = '\x01';
                    puVar19[0x12] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                    *PTR_DAT_04bbcae0 = 1;
                  }
                  else {
                    uVar12 = puVar19[1];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_01403bf0;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_01403bf0;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar1 + (lVar28 - (long)puVar21);
                  if (lVar28 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[1] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar28 + 4);
                  while (puVar21[-1] != 0xde2a3be) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_01403bec;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  puVar19[1] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_01403bec:
              uVar26 = 0;
LAB_01403bf0:
              if (((*puVar1 == 0) || (lVar28 = (long)puVar1 - (ulong)*puVar1, lVar28 == 0)) ||
                 (*(char *)(lVar28 + 0xb) == '\0')) {
                if ((DAT_051b6b68 == '\x01') && (DAT_051b6b6c == uVar26)) {
                  uVar12 = DAT_051b6b70;
                  if (6 < DAT_051b6b70) goto LAB_01403eb4;
                }
                else {
                  if ((DAT_051b6bc0 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6bc0);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6b78 = 0x700000000;
                      DAT_051b6b80 = (undefined8 *)&DAT_051b6b88;
                      __cxa_guard_release(&DAT_051b6bc0);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6bc8 & 1) == 0) {
                    DAT_051b6bc8 = 1;
                    if (((DAT_051b6c08 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6c08), iVar13 != 0)) {
                      DAT_051b6bfc = 0xffffffff00000000;
                      DAT_051b6bcc = 0xffffffff00000000;
                      DAT_051b6bd4 = 0xffffffff00000000;
                      DAT_051b6bdc = 0xffffffff00000000;
                      DAT_051b6be4 = 0xffffffff00000000;
                      DAT_051b6bec = 0xffffffff00000000;
                      DAT_051b6bf4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6c08);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_04997070)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01403d44:
                            iVar13 = (int)lVar14;
joined_r0x01403d48:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01403d50;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01403d44;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01403d48;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01403d50:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6bcc + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6bcc + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6b78;
                      if ((int)DAT_051b6b78 < DAT_051b6b78._4_4_) {
                        DAT_051b6b80[(int)DAT_051b6b78] = &DAT_051b6bcc + lVar28;
                        iVar13 = (int)DAT_051b6b78 + 1;
                        DAT_051b6b78 = CONCAT44(DAT_051b6b78._4_4_,iVar13);
                      }
                      puVar23 = DAT_051b6b80;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 7);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01404030;
LAB_01403fe0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01403fe0;
LAB_01404030:
                              if (puVar24 == (uint *)0x0) goto LAB_01403fe0;
                              if (*puVar19 <= *puVar24) goto LAB_01403fe0;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6b74 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6b74 != '\x01') goto LAB_01403eb4;
                  if ((int)DAT_051b6b78 == 0) {
LAB_01403eb4:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6b78 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_051b6b80;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01403e80;
joined_r0x01403e94:
                      if (uVar12 < 7) {
                        uVar12 = *(uint *)(DAT_051b6b80[uVar12] + 4);
                        if (uVar12 < 7) {
                          DAT_051b6b68 = '\x01';
                          DAT_051b6b6c = uVar26;
                          DAT_051b6b70 = uVar12;
                          goto LAB_0140446c;
                        }
                        goto LAB_01403eb4;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_051b6b78 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_051b6b80[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01403e94;
                        uVar16 = *(uint *)DAT_051b6b80[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01403e94;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_051b6b80[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01403e94;
LAB_01403e80:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01403e94;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_051b6ac0 == '\x01') && (DAT_051b6ac4 == uVar26)) {
                  uVar12 = DAT_051b6ac8;
                  if (6 < DAT_051b6ac8) goto LAB_01404400;
                }
                else {
                  if ((DAT_051b6b18 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6b18);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6ad0 = 0x700000000;
                      DAT_051b6ad8 = &DAT_051b6ae0;
                      __cxa_guard_release(&DAT_051b6b18);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6b20 & 1) == 0) {
                    DAT_051b6b20 = 1;
                    if (((DAT_051b6b60 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6b60), iVar13 != 0)) {
                      DAT_051b6b54 = 0xffffffff00000000;
                      DAT_051b6b24 = 0xffffffff00000000;
                      DAT_051b6b2c = 0xffffffff00000000;
                      DAT_051b6b34 = 0xffffffff00000000;
                      DAT_051b6b3c = 0xffffffff00000000;
                      DAT_051b6b44 = 0xffffffff00000000;
                      DAT_051b6b4c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6b60);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_s_River_04996ff8)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01404118:
                            iVar13 = (int)lVar14;
joined_r0x0140411c:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01404124;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01404118;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x0140411c;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01404124:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6b24 + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6b24 + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6ad0;
                      if ((int)DAT_051b6ad0 < DAT_051b6ad0._4_4_) {
                        *(undefined8 **)(DAT_051b6ad8 + (long)(int)DAT_051b6ad0 * 8) =
                             &DAT_051b6b24 + lVar28;
                        iVar13 = (int)DAT_051b6ad0 + 1;
                        DAT_051b6ad0 = CONCAT44(DAT_051b6ad0._4_4_,iVar13);
                      }
                      puVar8 = DAT_051b6ad8;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 7);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_014043a0;
LAB_01404350:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01404350;
LAB_014043a0:
                              if (puVar24 == (uint *)0x0) goto LAB_01404350;
                              if (*puVar19 <= *puVar24) goto LAB_01404350;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6acc = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6acc != '\x01') goto LAB_01404400;
                  if ((int)DAT_051b6ad0 == 0) {
LAB_01404400:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6ad0 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_051b6ad0 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_051b6ad8 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01404430;
                        uVar16 = **(uint **)(DAT_051b6ad8 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01404430;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_051b6ad8 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_051b6ad8 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01404430:
                      if (uVar17 < 7) {
                        uVar12 = *(uint *)(*(long *)(DAT_051b6ad8 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 7) {
                          DAT_051b6ac0 = '\x01';
                          DAT_051b6ac4 = uVar26;
                          DAT_051b6ac8 = uVar12;
                          goto LAB_01404464;
                        }
                        goto LAB_01404400;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01404464:
              }
LAB_0140446c:
              puVar8 = PTR_DAT_04bbcae8;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar28 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar28) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < DAT_051b69d0) {
                          *(short *)(DAT_051b69d8 + (long)(int)uVar17 * 2) = (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbcae0;
                do {
                  if (cVar9 == '\0') {
                    puVar19[0x10] = 0xffffffff;
                    puVar19[0x11] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    cVar9 = '\x01';
                    puVar19[0x12] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                    *PTR_DAT_04bbcae0 = 1;
                  }
                  else {
                    uVar12 = puVar19[2];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_014045e0;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_014045e0;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar1 + (lVar28 - (long)puVar21);
                  if (lVar28 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[2] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar28 + 4);
                  while (puVar21[-1] != 0x770288fd) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_014045dc;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  puVar19[2] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_014045dc:
              uVar26 = 0;
LAB_014045e0:
              if (((*puVar1 == 0) || (lVar28 = (long)puVar1 - (ulong)*puVar1, lVar28 == 0)) ||
                 (*(char *)(lVar28 + 0xb) == '\0')) {
                if ((DAT_051b6c98 == '\x01') && (DAT_051b6c9c == uVar26)) {
                  uVar12 = DAT_051b6ca0;
                  if (4 < DAT_051b6ca0) goto LAB_014048a4;
                }
                else {
                  if ((DAT_051b6ce0 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6ce0);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6ca8 = 0x500000000;
                      DAT_051b6cb0 = (undefined8 *)&DAT_051b6cb8;
                      __cxa_guard_release(&DAT_051b6ce0);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6ce8 & 1) == 0) {
                    DAT_051b6ce8 = 1;
                    if (((DAT_051b6d18 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6d18), iVar13 != 0)) {
                      DAT_051b6d0c = 0xffffffff00000000;
                      DAT_051b6cec = 0xffffffff00000000;
                      DAT_051b6cf4 = 0xffffffff00000000;
                      DAT_051b6cfc = 0xffffffff00000000;
                      DAT_051b6d04 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6d18);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_049970f0)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01404734:
                            iVar13 = (int)lVar14;
joined_r0x01404738:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01404740;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01404734;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01404738;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01404740:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6cec + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6cec + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6ca8;
                      if ((int)DAT_051b6ca8 < DAT_051b6ca8._4_4_) {
                        DAT_051b6cb0[(int)DAT_051b6ca8] = &DAT_051b6cec + lVar28;
                        iVar13 = (int)DAT_051b6ca8 + 1;
                        DAT_051b6ca8 = CONCAT44(DAT_051b6ca8._4_4_,iVar13);
                      }
                      puVar23 = DAT_051b6cb0;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 5);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01404a20;
LAB_014049d0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_014049d0;
LAB_01404a20:
                              if (puVar24 == (uint *)0x0) goto LAB_014049d0;
                              if (*puVar19 <= *puVar24) goto LAB_014049d0;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6ca4 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6ca4 != '\x01') goto LAB_014048a4;
                  if ((int)DAT_051b6ca8 == 0) {
LAB_014048a4:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6ca8 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_051b6cb0;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01404870;
joined_r0x01404884:
                      if (uVar12 < 5) {
                        uVar12 = *(uint *)(DAT_051b6cb0[uVar12] + 4);
                        if (uVar12 < 5) {
                          DAT_051b6c98 = '\x01';
                          DAT_051b6c9c = uVar26;
                          DAT_051b6ca0 = uVar12;
                          goto LAB_01404e5c;
                        }
                        goto LAB_014048a4;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_051b6ca8 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_051b6cb0[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01404884;
                        uVar16 = *(uint *)DAT_051b6cb0[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01404884;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_051b6cb0[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01404884;
LAB_01404870:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01404884;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_051b6c10 == '\x01') && (DAT_051b6c14 == uVar26)) {
                  uVar12 = DAT_051b6c18;
                  if (4 < DAT_051b6c18) goto LAB_01404df0;
                }
                else {
                  if ((DAT_051b6c58 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6c58);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6c20 = 0x500000000;
                      DAT_051b6c28 = &DAT_051b6c30;
                      __cxa_guard_release(&DAT_051b6c58);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6c60 & 1) == 0) {
                    DAT_051b6c60 = 1;
                    if (((DAT_051b6c90 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6c90), iVar13 != 0)) {
                      DAT_051b6c84 = 0xffffffff00000000;
                      DAT_051b6c64 = 0xffffffff00000000;
                      DAT_051b6c6c = 0xffffffff00000000;
                      DAT_051b6c74 = 0xffffffff00000000;
                      DAT_051b6c7c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6c90);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_049970b8)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01404b08:
                            iVar13 = (int)lVar14;
joined_r0x01404b0c:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01404b14;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01404b08;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01404b0c;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01404b14:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6c64 + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6c64 + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6c20;
                      if ((int)DAT_051b6c20 < DAT_051b6c20._4_4_) {
                        *(undefined8 **)(DAT_051b6c28 + (long)(int)DAT_051b6c20 * 8) =
                             &DAT_051b6c64 + lVar28;
                        iVar13 = (int)DAT_051b6c20 + 1;
                        DAT_051b6c20 = CONCAT44(DAT_051b6c20._4_4_,iVar13);
                      }
                      puVar8 = DAT_051b6c28;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 5);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01404d90;
LAB_01404d40:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01404d40;
LAB_01404d90:
                              if (puVar24 == (uint *)0x0) goto LAB_01404d40;
                              if (*puVar19 <= *puVar24) goto LAB_01404d40;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6c1c = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6c1c != '\x01') goto LAB_01404df0;
                  if ((int)DAT_051b6c20 == 0) {
LAB_01404df0:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6c20 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_051b6c20 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_051b6c28 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01404e20;
                        uVar16 = **(uint **)(DAT_051b6c28 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01404e20;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_051b6c28 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_051b6c28 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01404e20:
                      if (uVar17 < 5) {
                        uVar12 = *(uint *)(*(long *)(DAT_051b6c28 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 5) {
                          DAT_051b6c10 = '\x01';
                          DAT_051b6c14 = uVar26;
                          DAT_051b6c18 = uVar12;
                          goto LAB_01404e54;
                        }
                        goto LAB_01404df0;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01404e54:
              }
LAB_01404e5c:
              puVar8 = PTR_DAT_04bbcae8;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar28 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar28) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < DAT_051b69e0) {
                          *(short *)(DAT_051b69e8 + (long)(int)uVar17 * 2) = (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbcae0;
                do {
                  if (cVar9 == '\0') {
                    puVar19[0x10] = 0xffffffff;
                    puVar19[0x11] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    cVar9 = '\x01';
                    puVar19[0x12] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                    *PTR_DAT_04bbcae0 = 1;
                  }
                  else {
                    uVar12 = puVar19[4];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_01404fd0;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_01404fd0;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar1 + (lVar28 - (long)puVar21);
                  if (lVar28 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[4] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar28 + 4);
                  while (puVar21[-1] != 0x132dd5b9) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_01404fcc;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  puVar19[4] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_01404fcc:
              uVar26 = 0;
LAB_01404fd0:
              if (((*puVar1 == 0) || (lVar28 = (long)puVar1 - (ulong)*puVar1, lVar28 == 0)) ||
                 (*(char *)(lVar28 + 0xb) == '\0')) {
                if ((DAT_051b6dd8 == '\x01') && (DAT_051b6ddc == uVar26)) {
                  uVar12 = DAT_051b6de0;
                  if (7 < DAT_051b6de0) goto LAB_01405294;
                }
                else {
                  if ((DAT_051b6e38 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6e38);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6de8 = 0x800000000;
                      DAT_051b6df0 = (undefined8 *)&DAT_051b6df8;
                      __cxa_guard_release(&DAT_051b6e38);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6e40 & 1) == 0) {
                    DAT_051b6e40 = 1;
                    if (((DAT_051b6e88 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6e88), iVar13 != 0)) {
                      DAT_051b6e44 = 0xffffffff00000000;
                      DAT_051b6e4c = 0xffffffff00000000;
                      DAT_051b6e54 = 0xffffffff00000000;
                      DAT_051b6e5c = 0xffffffff00000000;
                      DAT_051b6e64 = 0xffffffff00000000;
                      DAT_051b6e6c = 0xffffffff00000000;
                      DAT_051b6e74 = 0xffffffff00000000;
                      DAT_051b6e7c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6e88);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_04997220)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01405124:
                            iVar13 = (int)lVar14;
joined_r0x01405128:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01405130;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01405124;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01405128;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01405130:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6e44 + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6e44 + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6de8;
                      if ((int)DAT_051b6de8 < DAT_051b6de8._4_4_) {
                        DAT_051b6df0[(int)DAT_051b6de8] = &DAT_051b6e44 + lVar28;
                        iVar13 = (int)DAT_051b6de8 + 1;
                        DAT_051b6de8 = CONCAT44(DAT_051b6de8._4_4_,iVar13);
                      }
                      puVar23 = DAT_051b6df0;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 8);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01405410;
LAB_014053c0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_014053c0;
LAB_01405410:
                              if (puVar24 == (uint *)0x0) goto LAB_014053c0;
                              if (*puVar19 <= *puVar24) goto LAB_014053c0;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6de4 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6de4 != '\x01') goto LAB_01405294;
                  if ((int)DAT_051b6de8 == 0) {
LAB_01405294:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6de8 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_051b6df0;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01405260;
joined_r0x01405274:
                      if (uVar12 < 8) {
                        uVar12 = *(uint *)(DAT_051b6df0[uVar12] + 4);
                        if (uVar12 < 8) {
                          DAT_051b6dd8 = '\x01';
                          DAT_051b6ddc = uVar26;
                          DAT_051b6de0 = uVar12;
                          goto LAB_0140584c;
                        }
                        goto LAB_01405294;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_051b6de8 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_051b6df0[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01405274;
                        uVar16 = *(uint *)DAT_051b6df0[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01405274;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_051b6df0[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01405274;
LAB_01405260:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01405274;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_051b6d20 == '\x01') && (DAT_051b6d24 == uVar26)) {
                  uVar12 = DAT_051b6d28;
                  if (7 < DAT_051b6d28) goto LAB_014057e0;
                }
                else {
                  if ((DAT_051b6d80 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6d80);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6d30 = 0x800000000;
                      DAT_051b6d38 = &DAT_051b6d40;
                      __cxa_guard_release(&DAT_051b6d80);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6d88 & 1) == 0) {
                    DAT_051b6d88 = 1;
                    if (((DAT_051b6dd0 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6dd0), iVar13 != 0)) {
                      DAT_051b6d8c = 0xffffffff00000000;
                      DAT_051b6d94 = 0xffffffff00000000;
                      DAT_051b6d9c = 0xffffffff00000000;
                      DAT_051b6da4 = 0xffffffff00000000;
                      DAT_051b6dac = 0xffffffff00000000;
                      DAT_051b6db4 = 0xffffffff00000000;
                      DAT_051b6dbc = 0xffffffff00000000;
                      DAT_051b6dc4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6dd0);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_s_KeepSwimming_04997170)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_014054f8:
                            iVar13 = (int)lVar14;
joined_r0x014054fc:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01405504;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_014054f8;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x014054fc;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01405504:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6d8c + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6d8c + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6d30;
                      if ((int)DAT_051b6d30 < DAT_051b6d30._4_4_) {
                        *(undefined8 **)(DAT_051b6d38 + (long)(int)DAT_051b6d30 * 8) =
                             &DAT_051b6d8c + lVar28;
                        iVar13 = (int)DAT_051b6d30 + 1;
                        DAT_051b6d30 = CONCAT44(DAT_051b6d30._4_4_,iVar13);
                      }
                      puVar8 = DAT_051b6d38;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 8);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01405780;
LAB_01405730:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01405730;
LAB_01405780:
                              if (puVar24 == (uint *)0x0) goto LAB_01405730;
                              if (*puVar19 <= *puVar24) goto LAB_01405730;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6d2c = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6d2c != '\x01') goto LAB_014057e0;
                  if ((int)DAT_051b6d30 == 0) {
LAB_014057e0:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6d30 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_051b6d30 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_051b6d38 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01405810;
                        uVar16 = **(uint **)(DAT_051b6d38 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01405810;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_051b6d38 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_051b6d38 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01405810:
                      if (uVar17 < 8) {
                        uVar12 = *(uint *)(*(long *)(DAT_051b6d38 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 8) {
                          DAT_051b6d20 = '\x01';
                          DAT_051b6d24 = uVar26;
                          DAT_051b6d28 = uVar12;
                          goto LAB_01405844;
                        }
                        goto LAB_014057e0;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01405844:
              }
LAB_0140584c:
              puVar8 = PTR_DAT_04bbcae8;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar28 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar28) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < DAT_051b69f0) {
                          *(short *)(DAT_051b69f8 + (long)(int)uVar17 * 2) = (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbcae0;
                do {
                  if (cVar9 == '\0') {
                    puVar19[0x10] = 0xffffffff;
                    puVar19[0x11] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    cVar9 = '\x01';
                    puVar19[0x12] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                    *PTR_DAT_04bbcae0 = 1;
                  }
                  else {
                    uVar12 = puVar19[6];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_014059c0;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_014059c0;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar1 + (lVar28 - (long)puVar21);
                  if (lVar28 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[6] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar28 + 4);
                  while (puVar21[-1] != 0x7ec9ada7) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_014059bc;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  puVar19[6] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_014059bc:
              uVar26 = 0;
LAB_014059c0:
              if (((*puVar1 == 0) || (lVar28 = (long)puVar1 - (ulong)*puVar1, lVar28 == 0)) ||
                 (*(char *)(lVar28 + 0xb) == '\0')) {
                if ((DAT_051b6f18 == '\x01') && (DAT_051b6f1c == uVar26)) {
                  uVar12 = DAT_051b6f20;
                  if (4 < DAT_051b6f20) goto LAB_01405c84;
                }
                else {
                  if ((DAT_051b6f60 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6f60);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6f28 = 0x500000000;
                      DAT_051b6f30 = (undefined8 *)&DAT_051b6f38;
                      __cxa_guard_release(&DAT_051b6f60);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6f68 & 1) == 0) {
                    DAT_051b6f68 = 1;
                    if (((DAT_051b6f98 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6f98), iVar13 != 0)) {
                      DAT_051b6f8c = 0xffffffff00000000;
                      DAT_051b6f6c = 0xffffffff00000000;
                      DAT_051b6f74 = 0xffffffff00000000;
                      DAT_051b6f7c = 0xffffffff00000000;
                      DAT_051b6f84 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6f98);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_049972a8)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01405b14:
                            iVar13 = (int)lVar14;
joined_r0x01405b18:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01405b20;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01405b14;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01405b18;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01405b20:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6f6c + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6f6c + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6f28;
                      if ((int)DAT_051b6f28 < DAT_051b6f28._4_4_) {
                        DAT_051b6f30[(int)DAT_051b6f28] = &DAT_051b6f6c + lVar28;
                        iVar13 = (int)DAT_051b6f28 + 1;
                        DAT_051b6f28 = CONCAT44(DAT_051b6f28._4_4_,iVar13);
                      }
                      puVar23 = DAT_051b6f30;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 5);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01405e00;
LAB_01405db0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01405db0;
LAB_01405e00:
                              if (puVar24 == (uint *)0x0) goto LAB_01405db0;
                              if (*puVar19 <= *puVar24) goto LAB_01405db0;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6f24 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6f24 != '\x01') goto LAB_01405c84;
                  if ((int)DAT_051b6f28 == 0) {
LAB_01405c84:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6f28 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_051b6f30;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01405c50;
joined_r0x01405c64:
                      if (uVar12 < 5) {
                        uVar12 = *(uint *)(DAT_051b6f30[uVar12] + 4);
                        if (uVar12 < 5) {
                          DAT_051b6f18 = '\x01';
                          DAT_051b6f1c = uVar26;
                          DAT_051b6f20 = uVar12;
                          goto LAB_0140623c;
                        }
                        goto LAB_01405c84;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_051b6f28 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_051b6f30[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01405c64;
                        uVar16 = *(uint *)DAT_051b6f30[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01405c64;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_051b6f30[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01405c64;
LAB_01405c50:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01405c64;
                    }
                    uVar12 = 0;
                  }
                }
              }
              else {
                if ((DAT_051b6e90 == '\x01') && (DAT_051b6e94 == uVar26)) {
                  uVar12 = DAT_051b6e98;
                  if (4 < DAT_051b6e98) goto LAB_014061d0;
                }
                else {
                  if ((DAT_051b6ed8 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b6ed8);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6ea0 = 0x500000000;
                      DAT_051b6ea8 = &DAT_051b6eb0;
                      __cxa_guard_release(&DAT_051b6ed8);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b6ee0 & 1) == 0) {
                    DAT_051b6ee0 = 1;
                    if (((DAT_051b6f10 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b6f10), iVar13 != 0)) {
                      DAT_051b6f04 = 0xffffffff00000000;
                      DAT_051b6ee4 = 0xffffffff00000000;
                      DAT_051b6eec = 0xffffffff00000000;
                      DAT_051b6ef4 = 0xffffffff00000000;
                      DAT_051b6efc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b6f10);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_04997270)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01405ee8:
                            iVar13 = (int)lVar14;
joined_r0x01405eec:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01405ef4;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01405ee8;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01405eec;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01405ef4:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b6ee4 + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b6ee4 + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6ea0;
                      if ((int)DAT_051b6ea0 < DAT_051b6ea0._4_4_) {
                        *(undefined8 **)(DAT_051b6ea8 + (long)(int)DAT_051b6ea0 * 8) =
                             &DAT_051b6ee4 + lVar28;
                        iVar13 = (int)DAT_051b6ea0 + 1;
                        DAT_051b6ea0 = CONCAT44(DAT_051b6ea0._4_4_,iVar13);
                      }
                      puVar8 = DAT_051b6ea8;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 5);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01406170;
LAB_01406120:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01406120;
LAB_01406170:
                              if (puVar24 == (uint *)0x0) goto LAB_01406120;
                              if (*puVar19 <= *puVar24) goto LAB_01406120;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6e9c = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6e9c != '\x01') goto LAB_014061d0;
                  if ((int)DAT_051b6ea0 == 0) {
LAB_014061d0:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6ea0 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_051b6ea0 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_051b6ea8 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01406200;
                        uVar16 = **(uint **)(DAT_051b6ea8 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01406200;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_051b6ea8 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_051b6ea8 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01406200:
                      if (uVar17 < 5) {
                        uVar12 = *(uint *)(*(long *)(DAT_051b6ea8 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 5) {
                          DAT_051b6e90 = '\x01';
                          DAT_051b6e94 = uVar26;
                          DAT_051b6e98 = uVar12;
                          goto LAB_01406234;
                        }
                        goto LAB_014061d0;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01406234:
              }
LAB_0140623c:
              puVar8 = PTR_DAT_04bbcae8;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar28 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar1 - lVar28) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if (uVar17 < DAT_051b6a00) {
                          *(short *)(DAT_051b6a08 + (long)(int)uVar17 * 2) = (short)uVar12;
                        }
                      }
                    }
                  }
                }
              }
              uVar26 = *puVar1;
              if (uVar26 != 0) {
                cVar9 = *PTR_DAT_04bbcae0;
                do {
                  if (cVar9 == '\0') {
                    puVar19[0x10] = 0xffffffff;
                    puVar19[0x11] = 0xffffffff;
                    puVar19[0] = 0xffffffff;
                    puVar19[1] = 0xffffffff;
                    puVar19[2] = 0xffffffff;
                    puVar19[3] = 0xffffffff;
                    cVar9 = '\x01';
                    puVar19[0x12] = 0xffffffff;
                    puVar19[4] = 0xffffffff;
                    puVar19[5] = 0xffffffff;
                    puVar19[6] = 0xffffffff;
                    puVar19[7] = 0xffffffff;
                    puVar19[8] = 0xffffffff;
                    puVar19[9] = 0xffffffff;
                    puVar19[10] = 0xffffffff;
                    puVar19[0xb] = 0xffffffff;
                    puVar19[0xc] = 0xffffffff;
                    puVar19[0xd] = 0xffffffff;
                    puVar19[0xe] = 0xffffffff;
                    puVar19[0xf] = 0xffffffff;
                    uVar26 = *puVar1;
                    *PTR_DAT_04bbcae0 = 1;
                  }
                  else {
                    uVar12 = puVar19[7];
                    if (-1 < (int)uVar12) {
                      if ((uint *)((long)puVar1 + (ulong)uVar12) != (uint *)0x0) {
                        uVar26 = *(uint *)((long)puVar1 + (ulong)uVar12);
                        goto LAB_014063b0;
                      }
                      break;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar21 = (uint *)(ulong)uVar26;
                  uVar26 = 0;
                  if ((puVar21 == (uint *)0x0) || (uVar26 = 0, puVar1 == puVar21))
                  goto LAB_014063b0;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar1 + (lVar28 - (long)puVar21);
                  if (lVar28 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                  puVar19[7] = 0xfffffffe;
                  if (uVar15 == 0) break;
                  puVar21 = (uint *)(lVar28 + 4);
                  while (puVar21[-1] != 0xac0ebe24) {
                    puVar21 = puVar21 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_014063ac;
                  }
                  uVar26 = 0;
                  if (*puVar21 != 0xffffffff) {
                    uVar26 = *puVar21;
                  }
                  puVar19[7] = uVar26;
                  uVar26 = *puVar1;
                  if (uVar26 == 0) break;
                } while( true );
              }
LAB_014063ac:
              uVar26 = 0;
LAB_014063b0:
              if (((*puVar1 == 0) || (lVar28 = (long)puVar1 - (ulong)*puVar1, lVar28 == 0)) ||
                 (*(char *)(lVar28 + 0xb) == '\0')) {
                if ((DAT_051b7068 == '\x01') && (DAT_051b706c == uVar26)) {
                  uVar12 = DAT_051b7070;
                  if (8 < DAT_051b7070) goto LAB_01406674;
                }
                else {
                  if ((DAT_051b70d0 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b70d0);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b7078 = 0x900000000;
                      DAT_051b7080 = (undefined8 *)&DAT_051b7088;
                      __cxa_guard_release(&DAT_051b70d0);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b70d8 & 1) == 0) {
                    DAT_051b70d8 = 1;
                    if (((DAT_051b7128 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b7128), iVar13 != 0)) {
                      DAT_051b711c = 0xffffffff00000000;
                      DAT_051b70dc = 0xffffffff00000000;
                      DAT_051b70e4 = 0xffffffff00000000;
                      DAT_051b70ec = 0xffffffff00000000;
                      DAT_051b70f4 = 0xffffffff00000000;
                      DAT_051b70fc = 0xffffffff00000000;
                      DAT_051b7104 = 0xffffffff00000000;
                      DAT_051b710c = 0xffffffff00000000;
                      DAT_051b7114 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b7128);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = *(byte **)(PTR_DAT_04bb3d68 + lVar28 * 8 + 0x18);
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_01406504:
                            iVar13 = (int)lVar14;
joined_r0x01406508:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_01406510;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_01406504;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x01406508;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_01406510:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b70dc + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b70dc + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b7078;
                      if ((int)DAT_051b7078 < DAT_051b7078._4_4_) {
                        DAT_051b7080[(int)DAT_051b7078] = &DAT_051b70dc + lVar28;
                        iVar13 = (int)DAT_051b7078 + 1;
                        DAT_051b7078 = CONCAT44(DAT_051b7078._4_4_,iVar13);
                      }
                      puVar23 = DAT_051b7080;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 9);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = (uint *)puVar23[uVar17];
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = (uint *)puVar23[uVar18];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            puVar23[uVar18] = puVar19;
                            puVar23[uVar15] = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar22 = puVar23 + uVar18 + 1;
                          do {
                            puVar19 = (uint *)*puVar22;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar22[1];
                              if (puVar19 != (uint *)0x0) goto LAB_014067f0;
LAB_014067a0:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar22[-1] = puVar19;
                              *puVar22 = puVar21;
                              puVar24 = (uint *)puVar22[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_014067a0;
LAB_014067f0:
                              if (puVar24 == (uint *)0x0) goto LAB_014067a0;
                              if (*puVar19 <= *puVar24) goto LAB_014067a0;
                              uVar12 = uVar16 + 1;
                              *puVar22 = puVar24;
                              puVar22[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar22 = puVar22 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = (uint *)puVar23[uVar12];
                        uVar17 = uVar12;
                        do {
                          puVar21 = (uint *)puVar23[uVar18 - 1];
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            puVar23[uVar18 - 1] = puVar19;
                            puVar23[uVar18] = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b7074 = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b7074 != '\x01') goto LAB_01406674;
                  if ((int)DAT_051b7078 == 0) {
LAB_01406674:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b7078 < 2) {
                      uVar17 = 0;
                      puVar21 = (uint *)*DAT_051b7080;
                      uVar12 = uVar17;
                      if (puVar21 != (uint *)0x0) goto LAB_01406640;
joined_r0x01406654:
                      if (uVar12 < 9) {
                        uVar12 = *(uint *)(DAT_051b7080[uVar12] + 4);
                        if (uVar12 < 9) {
                          DAT_051b7068 = '\x01';
                          DAT_051b706c = uVar26;
                          DAT_051b7070 = uVar12;
                          goto LAB_01406be4;
                        }
                        goto LAB_01406674;
                      }
                    }
                    else {
                      uVar17 = 0;
                      iVar13 = (int)DAT_051b7078 + -1;
                      do {
                        iVar11 = iVar13 + uVar17;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar17)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar12 = iVar11 >> 1;
                        if ((uint *)DAT_051b7080[(int)uVar12] == (uint *)0x0)
                        goto joined_r0x01406654;
                        uVar16 = *(uint *)DAT_051b7080[(int)uVar12];
                        if (uVar16 == uVar26) goto joined_r0x01406654;
                        if (uVar16 < uVar26) {
                          uVar17 = uVar12 + 1;
                        }
                        else {
                          iVar13 = uVar12 - 1;
                        }
                      } while ((int)uVar17 < iVar13);
                      puVar21 = (uint *)DAT_051b7080[(int)uVar17];
                      uVar12 = uVar17;
                      if (puVar21 == (uint *)0x0) goto joined_r0x01406654;
LAB_01406640:
                      uVar12 = uVar17;
                      if (*puVar21 == uVar26) goto joined_r0x01406654;
                    }
                    uVar12 = 0;
                  }
                }
LAB_01406be4:
                uVar10 = (undefined2)uVar12;
              }
              else {
                if ((DAT_051b6fa0 == '\x01') && (DAT_051b6fa4 == uVar26)) {
                  uVar12 = DAT_051b6fa8;
                  if (8 < DAT_051b6fa8) goto LAB_01406bc0;
                }
                else {
                  if ((DAT_051b7008 & 1) == 0) {
                    iVar13 = __cxa_guard_acquire(&DAT_051b7008);
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if (iVar13 != 0) {
                      DAT_051b6fb0 = 0x900000000;
                      DAT_051b6fb8 = &DAT_051b6fc0;
                      __cxa_guard_release(&DAT_051b7008);
                      puVar19 = (uint *)PTR_DAT_04bbcae8;
                    }
                  }
                  if ((DAT_051b7010 & 1) == 0) {
                    DAT_051b7010 = 1;
                    if (((DAT_051b7060 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(&DAT_051b7060), iVar13 != 0)) {
                      DAT_051b7054 = 0xffffffff00000000;
                      DAT_051b7014 = 0xffffffff00000000;
                      DAT_051b701c = 0xffffffff00000000;
                      DAT_051b7024 = 0xffffffff00000000;
                      DAT_051b702c = 0xffffffff00000000;
                      DAT_051b7034 = 0xffffffff00000000;
                      DAT_051b703c = 0xffffffff00000000;
                      DAT_051b7044 = 0xffffffff00000000;
                      DAT_051b704c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_051b7060);
                    }
                    lVar28 = 0;
                    do {
                      local_75 = 0;
                      pbVar27 = (&PTR_DAT_049972e8)[lVar28];
                      if (local_174 != pbVar27) {
                        lVar14 = 0;
                        do {
                          if (pbVar27[lVar14] == 0) {
LAB_014068d8:
                            iVar13 = (int)lVar14;
joined_r0x014068dc:
                            if (0xff < iVar13) {
                              iVar13 = 0xff;
                            }
                            goto LAB_014068e4;
                          }
                          if (pbVar27[lVar14 + 1] == 0) {
                            lVar14 = lVar14 + 1;
                            goto LAB_014068d8;
                          }
                          if (pbVar27[lVar14 + 2] == 0) {
                            iVar13 = (int)lVar14 + 2;
                            goto joined_r0x014068dc;
                          }
                          lVar14 = lVar14 + 3;
                        } while (lVar14 != 0x80001);
                        iVar13 = 0;
LAB_014068e4:
                        memcpy(local_174,pbVar27,(long)iVar13);
                        local_174[iVar13] = 0;
                      }
                      uVar12 = (uint)*pbVar27;
                      if (*pbVar27 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = 0xffffffff;
                        do {
                          pbVar27 = pbVar27 + 1;
                          uVar17 = crc32b(uVar17,uVar12,0x4c11db7);
                          uVar12 = (uint)*pbVar27;
                        } while (uVar12 != 0);
                        uVar17 = ~uVar17;
                      }
                      *(uint *)(&DAT_051b7014 + lVar28) = uVar17;
                      *(int *)((long)&DAT_051b7014 + lVar28 * 8 + 4) = (int)lVar28;
                      iVar13 = (int)DAT_051b6fb0;
                      if ((int)DAT_051b6fb0 < DAT_051b6fb0._4_4_) {
                        *(undefined8 **)(DAT_051b6fb8 + (long)(int)DAT_051b6fb0 * 8) =
                             &DAT_051b7014 + lVar28;
                        iVar13 = (int)DAT_051b6fb0 + 1;
                        DAT_051b6fb0 = CONCAT44(DAT_051b6fb0._4_4_,iVar13);
                      }
                      puVar8 = DAT_051b6fb8;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 9);
                    if (1 < iVar13) {
                      uVar17 = 0;
                      uVar12 = iVar13 - 1;
                      do {
                        if ((int)uVar12 <= (int)uVar17) break;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar17 * 8);
                        uVar15 = (ulong)uVar17;
                        if ((uVar12 - uVar17 & 1) == 0) {
                          uVar18 = uVar15;
                          puVar21 = puVar19;
                        }
                        else {
                          uVar18 = uVar15 + 1;
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar21 < *puVar19)) {
                            *(uint **)(puVar8 + uVar18 * 8) = puVar19;
                            *(uint **)(puVar8 + uVar15 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                        }
                        uVar20 = (ulong)uVar12;
                        uVar12 = uVar17;
                        if (~uVar15 + uVar20 != 0) {
                          puVar23 = (undefined8 *)(puVar8 + uVar18 * 8 + 8);
                          do {
                            puVar19 = (uint *)*puVar23;
                            uVar16 = (uint)uVar18;
                            if (((puVar21 == (uint *)0x0) || (puVar19 == (uint *)0x0)) ||
                               (*puVar21 <= *puVar19)) {
                              puVar24 = (uint *)puVar23[1];
                              if (puVar19 != (uint *)0x0) goto LAB_01406b60;
LAB_01406b10:
                              puVar19 = puVar24;
                            }
                            else {
                              puVar23[-1] = puVar19;
                              *puVar23 = puVar21;
                              puVar24 = (uint *)puVar23[1];
                              puVar19 = puVar21;
                              uVar12 = uVar16;
                              if (puVar21 == (uint *)0x0) goto LAB_01406b10;
LAB_01406b60:
                              if (puVar24 == (uint *)0x0) goto LAB_01406b10;
                              if (*puVar19 <= *puVar24) goto LAB_01406b10;
                              uVar12 = uVar16 + 1;
                              *puVar23 = puVar24;
                              puVar23[1] = puVar19;
                            }
                            uVar18 = uVar18 + 2;
                            puVar23 = puVar23 + 2;
                            puVar21 = puVar19;
                          } while (uVar20 != uVar18);
                        }
                        if ((int)uVar12 <= (int)uVar17) break;
                        uVar18 = (ulong)uVar12;
                        puVar19 = *(uint **)(puVar8 + (ulong)uVar12 * 8);
                        uVar17 = uVar12;
                        do {
                          puVar21 = *(uint **)(puVar8 + uVar18 * 8 + -8);
                          if (((puVar19 != (uint *)0x0) && (puVar21 != (uint *)0x0)) &&
                             (*puVar19 < *puVar21)) {
                            uVar17 = (uint)uVar18;
                            *(uint **)(puVar8 + uVar18 * 8 + -8) = puVar19;
                            *(uint **)(puVar8 + uVar18 * 8) = puVar21;
                            puVar21 = puVar19;
                          }
                          uVar18 = uVar18 - 1;
                          puVar19 = puVar21;
                        } while ((long)uVar15 < (long)uVar18);
                      } while (uVar17 != uVar12);
                    }
                    DAT_051b6fac = '\x01';
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                  }
                  else if (DAT_051b6fac != '\x01') goto LAB_01406bc0;
                  if ((int)DAT_051b6fb0 == 0) {
LAB_01406bc0:
                    uVar12 = 0;
                  }
                  else {
                    puVar19 = (uint *)PTR_DAT_04bbcae8;
                    if ((int)DAT_051b6fb0 < 2) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = 0;
                      iVar13 = (int)DAT_051b6fb0 + -1;
                      do {
                        iVar11 = iVar13 + uVar12;
                        if (iVar11 < 0 != SCARRY4(iVar13,uVar12)) {
                          iVar11 = iVar11 + 1;
                        }
                        uVar17 = iVar11 >> 1;
                        if (*(uint **)(DAT_051b6fb8 + (long)(int)uVar17 * 8) == (uint *)0x0)
                        goto joined_r0x01406bf8;
                        uVar16 = **(uint **)(DAT_051b6fb8 + (long)(int)uVar17 * 8);
                        if (uVar16 == uVar26) goto joined_r0x01406bf8;
                        if (uVar16 < uVar26) {
                          uVar12 = uVar17 + 1;
                        }
                        else {
                          iVar13 = uVar17 - 1;
                        }
                      } while ((int)uVar12 < iVar13);
                    }
                    uVar17 = uVar12;
                    if ((*(uint **)(DAT_051b6fb8 + (long)(int)uVar12 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_051b6fb8 + (long)(int)uVar12 * 8) == uVar26)) {
joined_r0x01406bf8:
                      if (uVar17 < 9) {
                        uVar12 = *(uint *)(*(long *)(DAT_051b6fb8 + (ulong)uVar17 * 8) + 4);
                        if (uVar12 < 9) {
                          DAT_051b6fa0 = '\x01';
                          DAT_051b6fa4 = uVar26;
                          DAT_051b6fa8 = uVar12;
                          goto LAB_01406c2c;
                        }
                        goto LAB_01406bc0;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_01406c2c:
                uVar10 = (undefined2)uVar12;
              }
              puVar8 = PTR_DAT_04bbcae8;
              puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar21 != (uint *)0x0)) {
                if (*puVar21 != 0) {
                  uVar26 = puVar21[1];
                  if (uVar26 != 0) {
                    if ((ulong)(ushort)puVar21[2] != 0) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar21 + lVar28 + (ulong)(ushort)puVar21[2] * 8;
                      puVar19 = (uint *)puVar8;
                      if (lVar28 != 0) {
                        uVar12 = 0;
                        if ((ulong)uVar26 != 0) {
                          uVar12 = (uint)((ulong)((long)puVar1 - lVar28) / (ulong)uVar26);
                        }
                        if (*puVar21 <= uVar12) {
                          uVar12 = 0xffffffff;
                        }
                        if (uVar12 < *(uint *)PTR_DAT_04bbcad8) {
                          *(undefined2 *)(*(long *)(PTR_DAT_04bbcad8 + 8) + (long)(int)uVar12 * 2) =
                               uVar10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar7);
  }
  return;
}

