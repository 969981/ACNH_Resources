
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a96b50(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  char cVar18;
  undefined2 uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
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
  byte *pbVar34;
  long lVar35;
  uint uVar36;
  byte local_174 [255];
  undefined1 local_75;
  
  if ((param_1 != (uint *)0x0) && (uVar15 = *param_1, uVar15 != 0)) {
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x70,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x50,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar4 = crc32b(uVar2,99,0x4c11db7);
    uVar36 = 0;
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar5 = crc32b(uVar2,0xae,0x4c11db7);
    uVar3 = crc32b(uVar3,0x79,0x4c11db7);
    uVar6 = crc32b(uVar5,0xb6,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar7 = crc32b(uVar5,0x96,0x4c11db7);
    uVar7 = crc32b(uVar7,0xbd,0x4c11db7);
    uVar7 = crc32b(uVar7,0xe8,0x4c11db7);
    uVar7 = crc32b(uVar7,0xa8,0x4c11db7);
    uVar8 = crc32b(uVar7,0xad,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x48,0x4c11db7);
    uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
    uVar7 = crc32b(uVar7,0x75,0x4c11db7);
    uVar7 = crc32b(uVar7,0x73,0x4c11db7);
    uVar9 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar9 = crc32b(uVar9,0x61,0x4c11db7);
    uVar9 = crc32b(uVar9,99,0x4c11db7);
    uVar9 = crc32b(uVar9,0x69,0x4c11db7);
    uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
    uVar9 = crc32b(uVar9,0x69,0x4c11db7);
    uVar9 = crc32b(uVar9,0x74,0x4c11db7);
    uVar10 = crc32b(uVar3,0x72,0x4c11db7);
    uVar11 = crc32b(uVar9,0x79,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x42,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar3 = crc32b(uVar3,100,0x4c11db7);
    uVar3 = crc32b(uVar3,0x67,0x4c11db7);
    uVar9 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar12 = crc32b(uVar3,0x65,0x4c11db7);
    uVar3 = crc32b(uVar9,0x6c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x70,0x4c11db7);
    uVar13 = crc32b(uVar7,0x65,0x4c11db7);
    uVar14 = crc32b(uVar3,0x65,0x4c11db7);
    puVar27 = (uint *)PTR_DAT_04bc4698;
    do {
      if (uVar36 < *param_1) {
        if (param_1[1] != 0) {
          if ((ushort)param_1[2] != 0) {
            iVar17 = 0xc;
            if (*(char *)((long)param_1 + 10) != '\0') {
              iVar17 = 0x1c;
            }
            puVar1 = (uint *)((ulong)(param_1[1] * uVar36 + (uint)(ushort)param_1[2] * 8 + iVar17) +
                             (long)param_1);
            if (puVar1 != (uint *)0x0) {
              uVar33 = *puVar1;
              if (uVar33 != 0) {
                cVar18 = *PTR_DAT_04bc4690;
                do {
                  if (cVar18 == '\0') {
                    puVar27[4] = 0xffffffff;
                    puVar27[5] = 0xffffffff;
                    puVar27[0] = 0xffffffff;
                    puVar27[1] = 0xffffffff;
                    puVar27[2] = 0xffffffff;
                    puVar27[3] = 0xffffffff;
                    cVar18 = '\x01';
                    puVar27[6] = 0xffffffff;
                    uVar33 = *puVar1;
                    *PTR_DAT_04bc4690 = 1;
                  }
                  else {
                    uVar21 = *puVar27;
                    if (-1 < (int)uVar21) {
                      if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                        uVar33 = *(uint *)((long)puVar1 + (ulong)uVar21);
                        goto LAB_02a96e90;
                      }
                      break;
                    }
                    if (uVar21 != 0xffffffff) break;
                  }
                  puVar29 = (uint *)(ulong)uVar33;
                  uVar33 = 0;
                  if ((puVar29 == (uint *)0x0) || (uVar33 = 0, puVar1 == puVar29))
                  goto LAB_02a96e90;
                  lVar35 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                    lVar35 = 0x1c;
                  }
                  lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
                  if (lVar35 == 0) break;
                  uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
                  *puVar27 = 0xfffffffe;
                  if (uVar23 == 0) break;
                  puVar29 = (uint *)(lVar35 + 4);
                  while (puVar29[-1] != 0x1ff4093d) {
                    puVar29 = puVar29 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) goto LAB_02a96e8c;
                  }
                  uVar33 = 0;
                  if (*puVar29 != 0xffffffff) {
                    uVar33 = *puVar29;
                  }
                  *puVar27 = uVar33;
                  uVar33 = *puVar1;
                  if (uVar33 == 0) break;
                } while( true );
              }
LAB_02a96e8c:
              uVar33 = 0;
LAB_02a96e90:
              if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
                 (*(char *)(lVar35 + 0xb) == '\0')) {
                if ((DAT_0560adf0 == '\x01') && (DAT_0560adf4 == uVar33)) {
                  uVar21 = DAT_0560adf8;
                  if (1 < DAT_0560adf8) goto LAB_02a97078;
                }
                else {
                  if ((DAT_0560ae20 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560ae20);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560ae00 = 0x200000000;
                      DAT_0560ae08 = (undefined8 *)&DAT_0560ae10;
                      __cxa_guard_release(&DAT_0560ae20);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560ae28 & 1) == 0) {
                    DAT_0560ae28 = 1;
                    if (((DAT_0560ae40 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560ae40), iVar17 != 0)) {
                      _DAT_0560ae2c = 0xffffffff00000000;
                      _DAT_0560ae34 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560ae40);
                    }
                    _DAT_0560ae2c = (ulong)~uVar10;
                    iVar17 = (int)DAT_0560ae00;
                    iVar20 = DAT_0560ae00._4_4_;
                    if ((int)DAT_0560ae00 < DAT_0560ae00._4_4_) {
                      DAT_0560ae08[(int)DAT_0560ae00] = &DAT_0560ae2c;
                      iVar17 = (int)DAT_0560ae00 + 1;
                      DAT_0560ae00 = CONCAT44(DAT_0560ae00._4_4_,iVar17);
                      iVar20 = DAT_0560ae00._4_4_;
                    }
                    _DAT_0560ae34 = CONCAT44(1,~uVar4);
                    if (iVar17 < iVar20) {
                      DAT_0560ae08[iVar17] = &DAT_0560ae34;
                      iVar17 = (int)DAT_0560ae00 + 1;
                      DAT_0560ae00 = CONCAT44(DAT_0560ae00._4_4_,iVar17);
                    }
                    puVar31 = DAT_0560ae08;
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
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
                              if (puVar27 != (uint *)0x0) goto LAB_02a97200;
LAB_02a971b0:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar30[-1] = puVar27;
                              *puVar30 = puVar29;
                              puVar32 = (uint *)puVar30[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a971b0;
LAB_02a97200:
                              if (puVar32 == (uint *)0x0) goto LAB_02a971b0;
                              if (*puVar27 <= *puVar32) goto LAB_02a971b0;
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
                    DAT_0560adfc = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560adfc != '\x01') goto LAB_02a97078;
                  if ((int)DAT_0560ae00 == 0) {
LAB_02a97078:
                    uVar21 = 0;
                  }
                  else {
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if ((int)DAT_0560ae00 < 2) {
                      uVar25 = 0;
                      puVar29 = (uint *)*DAT_0560ae08;
                      uVar21 = uVar25;
                      if (puVar29 != (uint *)0x0) goto LAB_02a97040;
joined_r0x02a97234:
                      if (uVar21 < 2) {
                        uVar21 = *(uint *)(DAT_0560ae08[uVar21] + 4);
                        if (uVar21 < 2) {
                          DAT_0560adf0 = '\x01';
                          DAT_0560adf4 = uVar33;
                          DAT_0560adf8 = uVar21;
                          goto LAB_02a9756c;
                        }
                        goto LAB_02a97078;
                      }
                    }
                    else {
                      uVar25 = 0;
                      iVar17 = (int)DAT_0560ae00 + -1;
                      do {
                        iVar20 = iVar17 + uVar25;
                        if (iVar20 < 0 != SCARRY4(iVar17,uVar25)) {
                          iVar20 = iVar20 + 1;
                        }
                        uVar21 = iVar20 >> 1;
                        if ((uint *)DAT_0560ae08[(int)uVar21] == (uint *)0x0)
                        goto joined_r0x02a97234;
                        uVar24 = *(uint *)DAT_0560ae08[(int)uVar21];
                        if (uVar24 == uVar33) goto joined_r0x02a97234;
                        if (uVar24 < uVar33) {
                          uVar25 = uVar21 + 1;
                        }
                        else {
                          iVar17 = uVar21 - 1;
                        }
                      } while ((int)uVar25 < iVar17);
                      puVar29 = (uint *)DAT_0560ae08[(int)uVar25];
                      uVar21 = uVar25;
                      if (puVar29 == (uint *)0x0) goto joined_r0x02a97234;
LAB_02a97040:
                      uVar21 = uVar25;
                      if (*puVar29 == uVar33) goto joined_r0x02a97234;
                    }
                    uVar21 = 0;
                  }
                }
              }
              else {
                if ((DAT_0560ad98 == '\x01') && (DAT_0560ad9c == uVar33)) {
                  uVar21 = DAT_0560ada0;
                  if (1 < DAT_0560ada0) goto LAB_02a97504;
                }
                else {
                  if ((DAT_0560adc8 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560adc8);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560ada8 = 0x200000000;
                      DAT_0560adb0 = &DAT_0560adb8;
                      __cxa_guard_release(&DAT_0560adc8);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560add0 & 1) == 0) {
                    DAT_0560add0 = 1;
                    if (((DAT_0560ade8 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560ade8), iVar17 != 0)) {
                      _DAT_0560add4 = 0xffffffff00000000;
                      DAT_0560addc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560ade8);
                    }
                    _DAT_0560add4 = (ulong)~uVar10;
                    iVar17 = (int)DAT_0560ada8;
                    iVar20 = DAT_0560ada8._4_4_;
                    if ((int)DAT_0560ada8 < DAT_0560ada8._4_4_) {
                      *(undefined4 **)(DAT_0560adb0 + (long)(int)DAT_0560ada8 * 8) = &DAT_0560add4;
                      iVar17 = (int)DAT_0560ada8 + 1;
                      DAT_0560ada8 = CONCAT44(DAT_0560ada8._4_4_,iVar17);
                      iVar20 = DAT_0560ada8._4_4_;
                    }
                    DAT_0560addc = CONCAT44(1,~uVar4);
                    if (iVar17 < iVar20) {
                      *(undefined8 **)(DAT_0560adb0 + (long)iVar17 * 8) = &DAT_0560addc;
                      iVar17 = (int)DAT_0560ada8 + 1;
                      DAT_0560ada8 = CONCAT44(DAT_0560ada8._4_4_,iVar17);
                    }
                    puVar16 = DAT_0560adb0;
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
                      do {
                        if ((int)uVar21 <= (int)uVar25) break;
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar25 * 8);
                        uVar23 = (ulong)uVar25;
                        if ((uVar21 - uVar25 & 1) == 0) {
                          uVar26 = uVar23;
                          puVar29 = puVar27;
                        }
                        else {
                          uVar26 = uVar23 + 1;
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar29 < *puVar27)) {
                            *(uint **)(puVar16 + uVar26 * 8) = puVar27;
                            *(uint **)(puVar16 + uVar23 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                        }
                        uVar28 = (ulong)uVar21;
                        uVar21 = uVar25;
                        if (~uVar23 + uVar28 != 0) {
                          puVar31 = (undefined8 *)(puVar16 + uVar26 * 8 + 8);
                          do {
                            puVar27 = (uint *)*puVar31;
                            uVar24 = (uint)uVar26;
                            if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                               (*puVar29 <= *puVar27)) {
                              puVar32 = (uint *)puVar31[1];
                              if (puVar27 != (uint *)0x0) goto LAB_02a974a0;
LAB_02a97450:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar31[-1] = puVar27;
                              *puVar31 = puVar29;
                              puVar32 = (uint *)puVar31[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a97450;
LAB_02a974a0:
                              if (puVar32 == (uint *)0x0) goto LAB_02a97450;
                              if (*puVar27 <= *puVar32) goto LAB_02a97450;
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
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar21 * 8);
                        uVar25 = uVar21;
                        do {
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8 + -8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar27 < *puVar29)) {
                            uVar25 = (uint)uVar26;
                            *(uint **)(puVar16 + uVar26 * 8 + -8) = puVar27;
                            *(uint **)(puVar16 + uVar26 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                          uVar26 = uVar26 - 1;
                          puVar27 = puVar29;
                        } while ((long)uVar23 < (long)uVar26);
                      } while (uVar25 != uVar21);
                    }
                    DAT_0560ada4 = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560ada4 != '\x01') goto LAB_02a97504;
                  if ((int)DAT_0560ada8 == 0) {
LAB_02a97504:
                    uVar21 = 0;
                  }
                  else {
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if ((int)DAT_0560ada8 < 2) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = 0;
                      iVar17 = (int)DAT_0560ada8 + -1;
                      do {
                        iVar20 = iVar17 + uVar21;
                        if (iVar20 < 0 != SCARRY4(iVar17,uVar21)) {
                          iVar20 = iVar20 + 1;
                        }
                        uVar25 = iVar20 >> 1;
                        if (*(uint **)(DAT_0560adb0 + (long)(int)uVar25 * 8) == (uint *)0x0)
                        goto joined_r0x02a97530;
                        uVar24 = **(uint **)(DAT_0560adb0 + (long)(int)uVar25 * 8);
                        if (uVar24 == uVar33) goto joined_r0x02a97530;
                        if (uVar24 < uVar33) {
                          uVar21 = uVar25 + 1;
                        }
                        else {
                          iVar17 = uVar25 - 1;
                        }
                      } while ((int)uVar21 < iVar17);
                    }
                    uVar25 = uVar21;
                    if ((*(uint **)(DAT_0560adb0 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_0560adb0 + (long)(int)uVar21 * 8) == uVar33)) {
joined_r0x02a97530:
                      if (uVar25 < 2) {
                        uVar21 = *(uint *)(*(long *)(DAT_0560adb0 + (ulong)uVar25 * 8) + 4);
                        if (uVar21 < 2) {
                          DAT_0560ad98 = '\x01';
                          DAT_0560ad9c = uVar33;
                          DAT_0560ada0 = uVar21;
                          goto LAB_02a97564;
                        }
                        goto LAB_02a97504;
                      }
                    }
                    uVar21 = 0;
                  }
                }
LAB_02a97564:
              }
LAB_02a9756c:
              puVar16 = PTR_DAT_04bc4698;
              puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar29 != (uint *)0x0)) {
                if (*puVar29 != 0) {
                  uVar33 = puVar29[1];
                  if (uVar33 != 0) {
                    if ((ulong)(ushort)puVar29[2] != 0) {
                      lVar35 = 0xc;
                      if (*(char *)((long)puVar29 + 10) != '\0') {
                        lVar35 = 0x1c;
                      }
                      lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
                      puVar27 = (uint *)puVar16;
                      if (lVar35 != 0) {
                        uVar25 = 0;
                        if ((ulong)uVar33 != 0) {
                          uVar25 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar33);
                        }
                        if (*puVar29 <= uVar25) {
                          uVar25 = 0xffffffff;
                        }
                        if (uVar25 < *(uint *)PTR_DAT_04bc46a0) {
                          *(short *)(*(long *)(PTR_DAT_04bc46a0 + 8) + (long)(int)uVar25 * 2) =
                               (short)uVar21;
                        }
                      }
                    }
                  }
                }
              }
              uVar33 = *puVar1;
              if (uVar33 != 0) {
                cVar18 = *PTR_DAT_04bc4690;
                do {
                  if (cVar18 == '\0') {
                    puVar27[4] = 0xffffffff;
                    puVar27[5] = 0xffffffff;
                    puVar27[0] = 0xffffffff;
                    puVar27[1] = 0xffffffff;
                    puVar27[2] = 0xffffffff;
                    puVar27[3] = 0xffffffff;
                    cVar18 = '\x01';
                    puVar27[6] = 0xffffffff;
                    uVar33 = *puVar1;
                    *PTR_DAT_04bc4690 = 1;
                  }
                  else {
                    uVar21 = puVar27[1];
                    if (-1 < (int)uVar21) {
                      if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                        uVar33 = *(uint *)((long)puVar1 + (ulong)uVar21);
                        goto LAB_02a976f0;
                      }
                      break;
                    }
                    if (uVar21 != 0xffffffff) break;
                  }
                  puVar29 = (uint *)(ulong)uVar33;
                  uVar33 = 0;
                  if ((puVar29 == (uint *)0x0) || (uVar33 = 0, puVar1 == puVar29))
                  goto LAB_02a976f0;
                  lVar35 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                    lVar35 = 0x1c;
                  }
                  lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
                  if (lVar35 == 0) break;
                  uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
                  puVar27[1] = 0xfffffffe;
                  if (uVar23 == 0) break;
                  puVar29 = (uint *)(lVar35 + 4);
                  while (puVar29[-1] != 0xc01e47a7) {
                    puVar29 = puVar29 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) goto LAB_02a976ec;
                  }
                  uVar33 = 0;
                  if (*puVar29 != 0xffffffff) {
                    uVar33 = *puVar29;
                  }
                  puVar27[1] = uVar33;
                  uVar33 = *puVar1;
                  if (uVar33 == 0) break;
                } while( true );
              }
LAB_02a976ec:
              uVar33 = 0;
LAB_02a976f0:
              if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
                 (*(char *)(lVar35 + 0xb) == '\0')) {
                if ((DAT_0560aed0 == '\x01') && (DAT_0560aed4 == uVar33)) {
                  uVar21 = DAT_0560aed8;
                  if (4 < DAT_0560aed8) goto LAB_02a979ac;
                }
                else {
                  if ((DAT_0560af18 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560af18);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560aee0 = 0x500000000;
                      DAT_0560aee8 = (undefined8 *)&DAT_0560aef0;
                      __cxa_guard_release(&DAT_0560af18);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560af20 & 1) == 0) {
                    DAT_0560af20 = 1;
                    if (((DAT_0560af50 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560af50), iVar17 != 0)) {
                      DAT_0560af44 = 0xffffffff00000000;
                      DAT_0560af24 = 0xffffffff00000000;
                      DAT_0560af2c = 0xffffffff00000000;
                      DAT_0560af34 = 0xffffffff00000000;
                      DAT_0560af3c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560af50);
                    }
                    lVar35 = 0;
                    do {
                      local_75 = 0;
                      pbVar34 = (&PTR_DAT_04a9cf80)[lVar35];
                      if (local_174 != pbVar34) {
                        lVar22 = 0;
                        do {
                          if (pbVar34[lVar22] == 0) {
LAB_02a97834:
                            iVar17 = (int)lVar22;
joined_r0x02a97838:
                            if (0xff < iVar17) {
                              iVar17 = 0xff;
                            }
                            goto LAB_02a97840;
                          }
                          if (pbVar34[lVar22 + 1] == 0) {
                            lVar22 = lVar22 + 1;
                            goto LAB_02a97834;
                          }
                          if (pbVar34[lVar22 + 2] == 0) {
                            iVar17 = (int)lVar22 + 2;
                            goto joined_r0x02a97838;
                          }
                          lVar22 = lVar22 + 3;
                        } while (lVar22 != 0x80001);
                        iVar17 = 0;
LAB_02a97840:
                        memcpy(local_174,pbVar34,(long)iVar17);
                        local_174[iVar17] = 0;
                      }
                      uVar21 = (uint)*pbVar34;
                      if (*pbVar34 == 0) {
                        uVar25 = 0;
                      }
                      else {
                        uVar25 = 0xffffffff;
                        do {
                          pbVar34 = pbVar34 + 1;
                          uVar25 = crc32b(uVar25,uVar21,0x4c11db7);
                          uVar21 = (uint)*pbVar34;
                        } while (uVar21 != 0);
                        uVar25 = ~uVar25;
                      }
                      *(uint *)(&DAT_0560af24 + lVar35) = uVar25;
                      *(int *)((long)&DAT_0560af24 + lVar35 * 8 + 4) = (int)lVar35;
                      iVar17 = (int)DAT_0560aee0;
                      if ((int)DAT_0560aee0 < DAT_0560aee0._4_4_) {
                        DAT_0560aee8[(int)DAT_0560aee0] = &DAT_0560af24 + lVar35;
                        iVar17 = (int)DAT_0560aee0 + 1;
                        DAT_0560aee0 = CONCAT44(DAT_0560aee0._4_4_,iVar17);
                      }
                      puVar31 = DAT_0560aee8;
                      lVar35 = lVar35 + 1;
                    } while (lVar35 != 5);
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
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
                              if (puVar27 != (uint *)0x0) goto LAB_02a97b30;
LAB_02a97ae0:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar30[-1] = puVar27;
                              *puVar30 = puVar29;
                              puVar32 = (uint *)puVar30[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a97ae0;
LAB_02a97b30:
                              if (puVar32 == (uint *)0x0) goto LAB_02a97ae0;
                              if (*puVar27 <= *puVar32) goto LAB_02a97ae0;
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
                    DAT_0560aedc = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560aedc != '\x01') goto LAB_02a979ac;
                  if ((int)DAT_0560aee0 == 0) {
LAB_02a979ac:
                    uVar21 = 0;
                  }
                  else {
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if ((int)DAT_0560aee0 < 2) {
                      uVar25 = 0;
                      puVar29 = (uint *)*DAT_0560aee8;
                      uVar21 = uVar25;
                      if (puVar29 != (uint *)0x0) goto LAB_02a97974;
joined_r0x02a97988:
                      if (uVar21 < 5) {
                        uVar21 = *(uint *)(DAT_0560aee8[uVar21] + 4);
                        if (uVar21 < 5) {
                          DAT_0560aed0 = '\x01';
                          DAT_0560aed4 = uVar33;
                          DAT_0560aed8 = uVar21;
                          goto LAB_02a97f7c;
                        }
                        goto LAB_02a979ac;
                      }
                    }
                    else {
                      uVar25 = 0;
                      iVar17 = (int)DAT_0560aee0 + -1;
                      do {
                        iVar20 = iVar17 + uVar25;
                        if (iVar20 < 0 != SCARRY4(iVar17,uVar25)) {
                          iVar20 = iVar20 + 1;
                        }
                        uVar21 = iVar20 >> 1;
                        if ((uint *)DAT_0560aee8[(int)uVar21] == (uint *)0x0)
                        goto joined_r0x02a97988;
                        uVar24 = *(uint *)DAT_0560aee8[(int)uVar21];
                        if (uVar24 == uVar33) goto joined_r0x02a97988;
                        if (uVar24 < uVar33) {
                          uVar25 = uVar21 + 1;
                        }
                        else {
                          iVar17 = uVar21 - 1;
                        }
                      } while ((int)uVar25 < iVar17);
                      puVar29 = (uint *)DAT_0560aee8[(int)uVar25];
                      uVar21 = uVar25;
                      if (puVar29 == (uint *)0x0) goto joined_r0x02a97988;
LAB_02a97974:
                      uVar21 = uVar25;
                      if (*puVar29 == uVar33) goto joined_r0x02a97988;
                    }
                    uVar21 = 0;
                  }
                }
              }
              else {
                if ((DAT_0560ae48 == '\x01') && (DAT_0560ae4c == uVar33)) {
                  uVar21 = DAT_0560ae50;
                  if (4 < DAT_0560ae50) goto LAB_02a97f14;
                }
                else {
                  if ((DAT_0560ae90 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560ae90);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560ae58 = 0x500000000;
                      DAT_0560ae60 = &DAT_0560ae68;
                      __cxa_guard_release(&DAT_0560ae90);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560ae98 & 1) == 0) {
                    DAT_0560ae98 = 1;
                    if (((DAT_0560aec8 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560aec8), iVar17 != 0)) {
                      DAT_0560aebc = 0xffffffff00000000;
                      DAT_0560ae9c = 0xffffffff00000000;
                      DAT_0560aea4 = 0xffffffff00000000;
                      DAT_0560aeac = 0xffffffff00000000;
                      DAT_0560aeb4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560aec8);
                    }
                    lVar35 = 0;
                    do {
                      local_75 = 0;
                      pbVar34 = (&PTR_s_House_04a9cf28)[lVar35];
                      if (local_174 != pbVar34) {
                        lVar22 = 0;
                        do {
                          if (pbVar34[lVar22] == 0) {
LAB_02a97c24:
                            iVar17 = (int)lVar22;
joined_r0x02a97c28:
                            if (0xff < iVar17) {
                              iVar17 = 0xff;
                            }
                            goto LAB_02a97c30;
                          }
                          if (pbVar34[lVar22 + 1] == 0) {
                            lVar22 = lVar22 + 1;
                            goto LAB_02a97c24;
                          }
                          if (pbVar34[lVar22 + 2] == 0) {
                            iVar17 = (int)lVar22 + 2;
                            goto joined_r0x02a97c28;
                          }
                          lVar22 = lVar22 + 3;
                        } while (lVar22 != 0x80001);
                        iVar17 = 0;
LAB_02a97c30:
                        memcpy(local_174,pbVar34,(long)iVar17);
                        local_174[iVar17] = 0;
                      }
                      uVar21 = (uint)*pbVar34;
                      if (*pbVar34 == 0) {
                        uVar25 = 0;
                      }
                      else {
                        uVar25 = 0xffffffff;
                        do {
                          pbVar34 = pbVar34 + 1;
                          uVar25 = crc32b(uVar25,uVar21,0x4c11db7);
                          uVar21 = (uint)*pbVar34;
                        } while (uVar21 != 0);
                        uVar25 = ~uVar25;
                      }
                      *(uint *)(&DAT_0560ae9c + lVar35) = uVar25;
                      *(int *)((long)&DAT_0560ae9c + lVar35 * 8 + 4) = (int)lVar35;
                      iVar17 = (int)DAT_0560ae58;
                      if ((int)DAT_0560ae58 < DAT_0560ae58._4_4_) {
                        *(undefined8 **)(DAT_0560ae60 + (long)(int)DAT_0560ae58 * 8) =
                             &DAT_0560ae9c + lVar35;
                        iVar17 = (int)DAT_0560ae58 + 1;
                        DAT_0560ae58 = CONCAT44(DAT_0560ae58._4_4_,iVar17);
                      }
                      puVar16 = DAT_0560ae60;
                      lVar35 = lVar35 + 1;
                    } while (lVar35 != 5);
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
                      do {
                        if ((int)uVar21 <= (int)uVar25) break;
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar25 * 8);
                        uVar23 = (ulong)uVar25;
                        if ((uVar21 - uVar25 & 1) == 0) {
                          uVar26 = uVar23;
                          puVar29 = puVar27;
                        }
                        else {
                          uVar26 = uVar23 + 1;
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar29 < *puVar27)) {
                            *(uint **)(puVar16 + uVar26 * 8) = puVar27;
                            *(uint **)(puVar16 + uVar23 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                        }
                        uVar28 = (ulong)uVar21;
                        uVar21 = uVar25;
                        if (~uVar23 + uVar28 != 0) {
                          puVar31 = (undefined8 *)(puVar16 + uVar26 * 8 + 8);
                          do {
                            puVar27 = (uint *)*puVar31;
                            uVar24 = (uint)uVar26;
                            if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                               (*puVar29 <= *puVar27)) {
                              puVar32 = (uint *)puVar31[1];
                              if (puVar27 != (uint *)0x0) goto LAB_02a97eb0;
LAB_02a97e60:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar31[-1] = puVar27;
                              *puVar31 = puVar29;
                              puVar32 = (uint *)puVar31[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a97e60;
LAB_02a97eb0:
                              if (puVar32 == (uint *)0x0) goto LAB_02a97e60;
                              if (*puVar27 <= *puVar32) goto LAB_02a97e60;
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
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar21 * 8);
                        uVar25 = uVar21;
                        do {
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8 + -8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar27 < *puVar29)) {
                            uVar25 = (uint)uVar26;
                            *(uint **)(puVar16 + uVar26 * 8 + -8) = puVar27;
                            *(uint **)(puVar16 + uVar26 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                          uVar26 = uVar26 - 1;
                          puVar27 = puVar29;
                        } while ((long)uVar23 < (long)uVar26);
                      } while (uVar25 != uVar21);
                    }
                    DAT_0560ae54 = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560ae54 != '\x01') goto LAB_02a97f14;
                  if ((int)DAT_0560ae58 == 0) {
LAB_02a97f14:
                    uVar21 = 0;
                  }
                  else {
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if ((int)DAT_0560ae58 < 2) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = 0;
                      iVar17 = (int)DAT_0560ae58 + -1;
                      do {
                        iVar20 = iVar17 + uVar21;
                        if (iVar20 < 0 != SCARRY4(iVar17,uVar21)) {
                          iVar20 = iVar20 + 1;
                        }
                        uVar25 = iVar20 >> 1;
                        if (*(uint **)(DAT_0560ae60 + (long)(int)uVar25 * 8) == (uint *)0x0)
                        goto joined_r0x02a97f40;
                        uVar24 = **(uint **)(DAT_0560ae60 + (long)(int)uVar25 * 8);
                        if (uVar24 == uVar33) goto joined_r0x02a97f40;
                        if (uVar24 < uVar33) {
                          uVar21 = uVar25 + 1;
                        }
                        else {
                          iVar17 = uVar25 - 1;
                        }
                      } while ((int)uVar21 < iVar17);
                    }
                    uVar25 = uVar21;
                    if ((*(uint **)(DAT_0560ae60 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_0560ae60 + (long)(int)uVar21 * 8) == uVar33)) {
joined_r0x02a97f40:
                      if (uVar25 < 5) {
                        uVar21 = *(uint *)(*(long *)(DAT_0560ae60 + (ulong)uVar25 * 8) + 4);
                        if (uVar21 < 5) {
                          DAT_0560ae48 = '\x01';
                          DAT_0560ae4c = uVar33;
                          DAT_0560ae50 = uVar21;
                          goto LAB_02a97f74;
                        }
                        goto LAB_02a97f14;
                      }
                    }
                    uVar21 = 0;
                  }
                }
LAB_02a97f74:
              }
LAB_02a97f7c:
              puVar16 = PTR_DAT_04bc4698;
              puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar29 != (uint *)0x0)) {
                if (*puVar29 != 0) {
                  uVar33 = puVar29[1];
                  if (uVar33 != 0) {
                    if ((ulong)(ushort)puVar29[2] != 0) {
                      lVar35 = 0xc;
                      if (*(char *)((long)puVar29 + 10) != '\0') {
                        lVar35 = 0x1c;
                      }
                      lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
                      puVar27 = (uint *)puVar16;
                      if (lVar35 != 0) {
                        uVar25 = 0;
                        if ((ulong)uVar33 != 0) {
                          uVar25 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar33);
                        }
                        if (*puVar29 <= uVar25) {
                          uVar25 = 0xffffffff;
                        }
                        if (uVar25 < *(uint *)PTR_DAT_04bc46a8) {
                          *(short *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar25 * 2) =
                               (short)uVar21;
                        }
                      }
                    }
                  }
                }
              }
              uVar33 = *puVar1;
              if (uVar33 != 0) {
                cVar18 = *PTR_DAT_04bc4690;
                do {
                  if (cVar18 == '\0') {
                    puVar27[4] = 0xffffffff;
                    puVar27[5] = 0xffffffff;
                    puVar27[0] = 0xffffffff;
                    puVar27[1] = 0xffffffff;
                    puVar27[2] = 0xffffffff;
                    puVar27[3] = 0xffffffff;
                    cVar18 = '\x01';
                    puVar27[6] = 0xffffffff;
                    uVar33 = *puVar1;
                    *PTR_DAT_04bc4690 = 1;
                  }
                  else {
                    uVar21 = puVar27[3];
                    if (-1 < (int)uVar21) {
                      if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                        uVar33 = *(uint *)((long)puVar1 + (ulong)uVar21);
                        goto LAB_02a98100;
                      }
                      break;
                    }
                    if (uVar21 != 0xffffffff) break;
                  }
                  puVar29 = (uint *)(ulong)uVar33;
                  uVar33 = 0;
                  if ((puVar29 == (uint *)0x0) || (uVar33 = 0, puVar1 == puVar29))
                  goto LAB_02a98100;
                  lVar35 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                    lVar35 = 0x1c;
                  }
                  lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
                  if (lVar35 == 0) break;
                  uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
                  puVar27[3] = 0xfffffffe;
                  if (uVar23 == 0) break;
                  puVar29 = (uint *)(lVar35 + 4);
                  while (puVar29[-1] != 0xcc24374e) {
                    puVar29 = puVar29 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) goto LAB_02a980fc;
                  }
                  uVar33 = 0;
                  if (*puVar29 != 0xffffffff) {
                    uVar33 = *puVar29;
                  }
                  puVar27[3] = uVar33;
                  uVar33 = *puVar1;
                  if (uVar33 == 0) break;
                } while( true );
              }
LAB_02a980fc:
              uVar33 = 0;
LAB_02a98100:
              if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
                 (*(char *)(lVar35 + 0xb) == '\0')) {
                if ((DAT_0560afe0 == '\x01') && (DAT_0560afe4 == uVar33)) {
                  uVar21 = DAT_0560afe8;
                  if (4 < DAT_0560afe8) goto LAB_02a983bc;
LAB_02a983c0:
                  uVar19 = (undefined2)uVar21;
                }
                else {
                  if ((DAT_0560b028 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560b028);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560aff0 = 0x500000000;
                      DAT_0560aff8 = (undefined8 *)&DAT_0560b000;
                      __cxa_guard_release(&DAT_0560b028);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560b030 & 1) == 0) {
                    DAT_0560b030 = 1;
                    if (((DAT_0560b060 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560b060), iVar17 != 0)) {
                      DAT_0560b054 = 0xffffffff00000000;
                      DAT_0560b034 = 0xffffffff00000000;
                      DAT_0560b03c = 0xffffffff00000000;
                      DAT_0560b044 = 0xffffffff00000000;
                      DAT_0560b04c = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b060);
                    }
                    lVar35 = 0;
                    do {
                      local_75 = 0;
                      pbVar34 = (&PTR_DAT_04a9d068)[lVar35];
                      if (local_174 != pbVar34) {
                        lVar22 = 0;
                        do {
                          if (pbVar34[lVar22] == 0) {
LAB_02a98248:
                            iVar17 = (int)lVar22;
joined_r0x02a9824c:
                            if (0xff < iVar17) {
                              iVar17 = 0xff;
                            }
                            goto LAB_02a98254;
                          }
                          if (pbVar34[lVar22 + 1] == 0) {
                            lVar22 = lVar22 + 1;
                            goto LAB_02a98248;
                          }
                          if (pbVar34[lVar22 + 2] == 0) {
                            iVar17 = (int)lVar22 + 2;
                            goto joined_r0x02a9824c;
                          }
                          lVar22 = lVar22 + 3;
                        } while (lVar22 != 0x80001);
                        iVar17 = 0;
LAB_02a98254:
                        memcpy(local_174,pbVar34,(long)iVar17);
                        local_174[iVar17] = 0;
                      }
                      uVar21 = (uint)*pbVar34;
                      if (*pbVar34 == 0) {
                        uVar25 = 0;
                      }
                      else {
                        uVar25 = 0xffffffff;
                        do {
                          pbVar34 = pbVar34 + 1;
                          uVar25 = crc32b(uVar25,uVar21,0x4c11db7);
                          uVar21 = (uint)*pbVar34;
                        } while (uVar21 != 0);
                        uVar25 = ~uVar25;
                      }
                      *(uint *)(&DAT_0560b034 + lVar35) = uVar25;
                      *(int *)((long)&DAT_0560b034 + lVar35 * 8 + 4) = (int)lVar35;
                      iVar17 = (int)DAT_0560aff0;
                      if ((int)DAT_0560aff0 < DAT_0560aff0._4_4_) {
                        DAT_0560aff8[(int)DAT_0560aff0] = &DAT_0560b034 + lVar35;
                        iVar17 = (int)DAT_0560aff0 + 1;
                        DAT_0560aff0 = CONCAT44(DAT_0560aff0._4_4_,iVar17);
                      }
                      puVar31 = DAT_0560aff8;
                      lVar35 = lVar35 + 1;
                    } while (lVar35 != 5);
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
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
                              if (puVar27 != (uint *)0x0) goto LAB_02a98540;
LAB_02a984f0:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar30[-1] = puVar27;
                              *puVar30 = puVar29;
                              puVar32 = (uint *)puVar30[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a984f0;
LAB_02a98540:
                              if (puVar32 == (uint *)0x0) goto LAB_02a984f0;
                              if (*puVar27 <= *puVar32) goto LAB_02a984f0;
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
                    DAT_0560afec = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560afec != '\x01') goto LAB_02a983bc;
                  if ((int)DAT_0560aff0 == 0) {
LAB_02a983bc:
                    uVar21 = 0;
                    goto LAB_02a983c0;
                  }
                  puVar27 = (uint *)PTR_DAT_04bc4698;
                  if ((int)DAT_0560aff0 < 2) {
                    uVar25 = 0;
                    puVar29 = (uint *)*DAT_0560aff8;
                    uVar21 = uVar25;
                    if (puVar29 != (uint *)0x0) goto LAB_02a98384;
joined_r0x02a98398:
                    if (uVar21 < 5) {
                      uVar21 = *(uint *)(DAT_0560aff8[uVar21] + 4);
                      if (uVar21 < 5) {
                        DAT_0560afe0 = '\x01';
                        DAT_0560afe4 = uVar33;
                        DAT_0560afe8 = uVar21;
                        goto LAB_02a983c0;
                      }
                      goto LAB_02a983bc;
                    }
                  }
                  else {
                    uVar25 = 0;
                    iVar17 = (int)DAT_0560aff0 + -1;
                    do {
                      iVar20 = iVar17 + uVar25;
                      if (iVar20 < 0 != SCARRY4(iVar17,uVar25)) {
                        iVar20 = iVar20 + 1;
                      }
                      uVar21 = iVar20 >> 1;
                      if ((uint *)DAT_0560aff8[(int)uVar21] == (uint *)0x0) goto joined_r0x02a98398;
                      uVar24 = *(uint *)DAT_0560aff8[(int)uVar21];
                      if (uVar24 == uVar33) goto joined_r0x02a98398;
                      if (uVar24 < uVar33) {
                        uVar25 = uVar21 + 1;
                      }
                      else {
                        iVar17 = uVar21 - 1;
                      }
                    } while ((int)uVar25 < iVar17);
                    puVar29 = (uint *)DAT_0560aff8[(int)uVar25];
                    uVar21 = uVar25;
                    if (puVar29 == (uint *)0x0) goto joined_r0x02a98398;
LAB_02a98384:
                    uVar21 = uVar25;
                    if (*puVar29 == uVar33) goto joined_r0x02a98398;
                  }
                  uVar19 = 0;
                }
              }
              else {
                if ((DAT_0560af58 == '\x01') && (DAT_0560af5c == uVar33)) {
                  uVar21 = DAT_0560af60;
                  if (4 < DAT_0560af60) goto LAB_02a98924;
LAB_02a98928:
                  uVar19 = (undefined2)uVar21;
                }
                else {
                  if ((DAT_0560afa0 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560afa0);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560af68 = 0x500000000;
                      DAT_0560af70 = &DAT_0560af78;
                      __cxa_guard_release(&DAT_0560afa0);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560afa8 & 1) == 0) {
                    DAT_0560afa8 = 1;
                    if (((DAT_0560afd8 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560afd8), iVar17 != 0)) {
                      DAT_0560afcc = 0xffffffff00000000;
                      DAT_0560afac = 0xffffffff00000000;
                      DAT_0560afb4 = 0xffffffff00000000;
                      DAT_0560afbc = 0xffffffff00000000;
                      DAT_0560afc4 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560afd8);
                    }
                    lVar35 = 0;
                    do {
                      local_75 = 0;
                      pbVar34 = (&PTR_s_Player_04a9cfe0)[lVar35];
                      if (local_174 != pbVar34) {
                        lVar22 = 0;
                        do {
                          if (pbVar34[lVar22] == 0) {
LAB_02a98638:
                            iVar17 = (int)lVar22;
joined_r0x02a9863c:
                            if (0xff < iVar17) {
                              iVar17 = 0xff;
                            }
                            goto LAB_02a98644;
                          }
                          if (pbVar34[lVar22 + 1] == 0) {
                            lVar22 = lVar22 + 1;
                            goto LAB_02a98638;
                          }
                          if (pbVar34[lVar22 + 2] == 0) {
                            iVar17 = (int)lVar22 + 2;
                            goto joined_r0x02a9863c;
                          }
                          lVar22 = lVar22 + 3;
                        } while (lVar22 != 0x80001);
                        iVar17 = 0;
LAB_02a98644:
                        memcpy(local_174,pbVar34,(long)iVar17);
                        local_174[iVar17] = 0;
                      }
                      uVar21 = (uint)*pbVar34;
                      if (*pbVar34 == 0) {
                        uVar25 = 0;
                      }
                      else {
                        uVar25 = 0xffffffff;
                        do {
                          pbVar34 = pbVar34 + 1;
                          uVar25 = crc32b(uVar25,uVar21,0x4c11db7);
                          uVar21 = (uint)*pbVar34;
                        } while (uVar21 != 0);
                        uVar25 = ~uVar25;
                      }
                      *(uint *)(&DAT_0560afac + lVar35) = uVar25;
                      *(int *)((long)&DAT_0560afac + lVar35 * 8 + 4) = (int)lVar35;
                      iVar17 = (int)DAT_0560af68;
                      if ((int)DAT_0560af68 < DAT_0560af68._4_4_) {
                        *(undefined8 **)(DAT_0560af70 + (long)(int)DAT_0560af68 * 8) =
                             &DAT_0560afac + lVar35;
                        iVar17 = (int)DAT_0560af68 + 1;
                        DAT_0560af68 = CONCAT44(DAT_0560af68._4_4_,iVar17);
                      }
                      puVar16 = DAT_0560af70;
                      lVar35 = lVar35 + 1;
                    } while (lVar35 != 5);
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
                      do {
                        if ((int)uVar21 <= (int)uVar25) break;
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar25 * 8);
                        uVar23 = (ulong)uVar25;
                        if ((uVar21 - uVar25 & 1) == 0) {
                          uVar26 = uVar23;
                          puVar29 = puVar27;
                        }
                        else {
                          uVar26 = uVar23 + 1;
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar29 < *puVar27)) {
                            *(uint **)(puVar16 + uVar26 * 8) = puVar27;
                            *(uint **)(puVar16 + uVar23 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                        }
                        uVar28 = (ulong)uVar21;
                        uVar21 = uVar25;
                        if (~uVar23 + uVar28 != 0) {
                          puVar31 = (undefined8 *)(puVar16 + uVar26 * 8 + 8);
                          do {
                            puVar27 = (uint *)*puVar31;
                            uVar24 = (uint)uVar26;
                            if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                               (*puVar29 <= *puVar27)) {
                              puVar32 = (uint *)puVar31[1];
                              if (puVar27 != (uint *)0x0) goto LAB_02a988c0;
LAB_02a98870:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar31[-1] = puVar27;
                              *puVar31 = puVar29;
                              puVar32 = (uint *)puVar31[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a98870;
LAB_02a988c0:
                              if (puVar32 == (uint *)0x0) goto LAB_02a98870;
                              if (*puVar27 <= *puVar32) goto LAB_02a98870;
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
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar21 * 8);
                        uVar25 = uVar21;
                        do {
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8 + -8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar27 < *puVar29)) {
                            uVar25 = (uint)uVar26;
                            *(uint **)(puVar16 + uVar26 * 8 + -8) = puVar27;
                            *(uint **)(puVar16 + uVar26 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                          uVar26 = uVar26 - 1;
                          puVar27 = puVar29;
                        } while ((long)uVar23 < (long)uVar26);
                      } while (uVar25 != uVar21);
                    }
                    DAT_0560af64 = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560af64 != '\x01') goto LAB_02a98924;
                  if ((int)DAT_0560af68 == 0) {
LAB_02a98924:
                    uVar21 = 0;
                    goto LAB_02a98928;
                  }
                  puVar27 = (uint *)PTR_DAT_04bc4698;
                  if ((int)DAT_0560af68 < 2) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 0;
                    iVar17 = (int)DAT_0560af68 + -1;
                    do {
                      iVar20 = iVar17 + uVar21;
                      if (iVar20 < 0 != SCARRY4(iVar17,uVar21)) {
                        iVar20 = iVar20 + 1;
                      }
                      uVar25 = iVar20 >> 1;
                      if (*(uint **)(DAT_0560af70 + (long)(int)uVar25 * 8) == (uint *)0x0)
                      goto joined_r0x02a992a0;
                      uVar24 = **(uint **)(DAT_0560af70 + (long)(int)uVar25 * 8);
                      if (uVar24 == uVar33) goto joined_r0x02a992a0;
                      if (uVar24 < uVar33) {
                        uVar21 = uVar25 + 1;
                      }
                      else {
                        iVar17 = uVar25 - 1;
                      }
                    } while ((int)uVar21 < iVar17);
                  }
                  uVar25 = uVar21;
                  if ((*(uint **)(DAT_0560af70 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                     (**(uint **)(DAT_0560af70 + (long)(int)uVar21 * 8) == uVar33)) {
joined_r0x02a992a0:
                    if (uVar25 < 5) {
                      uVar21 = *(uint *)(*(long *)(DAT_0560af70 + (ulong)uVar25 * 8) + 4);
                      if (uVar21 < 5) {
                        DAT_0560af58 = '\x01';
                        DAT_0560af5c = uVar33;
                        DAT_0560af60 = uVar21;
                        goto LAB_02a98928;
                      }
                      goto LAB_02a98924;
                    }
                  }
                  uVar19 = 0;
                }
              }
              puVar16 = PTR_DAT_04bc4698;
              puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar29 != (uint *)0x0)) {
                if (*puVar29 != 0) {
                  uVar33 = puVar29[1];
                  if (uVar33 != 0) {
                    if ((ulong)(ushort)puVar29[2] != 0) {
                      lVar35 = 0xc;
                      if (*(char *)((long)puVar29 + 10) != '\0') {
                        lVar35 = 0x1c;
                      }
                      lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
                      puVar27 = (uint *)puVar16;
                      if (lVar35 != 0) {
                        uVar21 = 0;
                        if ((ulong)uVar33 != 0) {
                          uVar21 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar33);
                        }
                        if (*puVar29 <= uVar21) {
                          uVar21 = 0xffffffff;
                        }
                        if (uVar21 < *(uint *)PTR_DAT_04bc46b0) {
                          *(undefined2 *)(*(long *)(PTR_DAT_04bc46b0 + 8) + (long)(int)uVar21 * 2) =
                               uVar19;
                        }
                      }
                    }
                  }
                }
              }
              uVar33 = *puVar1;
              if (uVar33 != 0) {
                cVar18 = *PTR_DAT_04bc4690;
                do {
                  if (cVar18 == '\0') {
                    puVar27[4] = 0xffffffff;
                    puVar27[5] = 0xffffffff;
                    puVar27[0] = 0xffffffff;
                    puVar27[1] = 0xffffffff;
                    puVar27[2] = 0xffffffff;
                    puVar27[3] = 0xffffffff;
                    cVar18 = '\x01';
                    puVar27[6] = 0xffffffff;
                    uVar33 = *puVar1;
                    *PTR_DAT_04bc4690 = 1;
                  }
                  else {
                    uVar21 = puVar27[4];
                    if (-1 < (int)uVar21) {
                      if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                        uVar33 = *(uint *)((long)puVar1 + (ulong)uVar21);
                        goto LAB_02a98adc;
                      }
                      break;
                    }
                    if (uVar21 != 0xffffffff) break;
                  }
                  puVar29 = (uint *)(ulong)uVar33;
                  uVar33 = 0;
                  if ((puVar29 == (uint *)0x0) || (uVar33 = 0, puVar1 == puVar29))
                  goto LAB_02a98adc;
                  lVar35 = 0xc;
                  if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                    lVar35 = 0x1c;
                  }
                  lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
                  if (lVar35 == 0) break;
                  uVar23 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
                  puVar27[4] = 0xfffffffe;
                  if (uVar23 == 0) break;
                  puVar29 = (uint *)(lVar35 + 4);
                  while (puVar29[-1] != 0xd6704d8b) {
                    puVar29 = puVar29 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) goto LAB_02a98ad8;
                  }
                  uVar33 = 0;
                  if (*puVar29 != 0xffffffff) {
                    uVar33 = *puVar29;
                  }
                  puVar27[4] = uVar33;
                  uVar33 = *puVar1;
                  if (uVar33 == 0) break;
                } while( true );
              }
LAB_02a98ad8:
              uVar33 = 0;
LAB_02a98adc:
              if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
                 (*(char *)(lVar35 + 0xb) == '\0')) {
                if ((DAT_0560b0e0 == '\x01') && (DAT_0560b0e4 == uVar33)) {
                  uVar21 = DAT_0560b0e8;
                  if (3 < DAT_0560b0e8) goto LAB_02a98da8;
                }
                else {
                  if ((DAT_0560b120 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560b120);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560b0f0 = 0x400000000;
                      DAT_0560b0f8 = (undefined8 *)&DAT_0560b100;
                      __cxa_guard_release(&DAT_0560b120);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560b128 & 1) == 0) {
                    DAT_0560b128 = 1;
                    if (((DAT_0560b150 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560b150), iVar17 != 0)) {
                      _DAT_0560b12c = 0xffffffff00000000;
                      DAT_0560b134 = 0xffffffff00000000;
                      DAT_0560b13c = 0xffffffff00000000;
                      DAT_0560b144 = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b150);
                    }
                    _DAT_0560b12c = (ulong)~uVar6;
                    iVar17 = (int)DAT_0560b0f0;
                    iVar20 = DAT_0560b0f0._4_4_;
                    if ((int)DAT_0560b0f0 < DAT_0560b0f0._4_4_) {
                      DAT_0560b0f8[(int)DAT_0560b0f0] = &DAT_0560b12c;
                      iVar17 = (int)DAT_0560b0f0 + 1;
                      DAT_0560b0f0 = CONCAT44(DAT_0560b0f0._4_4_,iVar17);
                      iVar20 = DAT_0560b0f0._4_4_;
                    }
                    DAT_0560b134 = CONCAT44(1,~uVar8);
                    if (iVar17 < iVar20) {
                      DAT_0560b0f8[iVar17] = &DAT_0560b134;
                      iVar17 = (int)DAT_0560b0f0 + 1;
                      DAT_0560b0f0 = CONCAT44(DAT_0560b0f0._4_4_,iVar17);
                      iVar20 = DAT_0560b0f0._4_4_;
                    }
                    uVar3 = crc32b(uVar5,0xa9,0x4c11db7);
                    uVar21 = crc32b(uVar3,0x8b,0x4c11db7);
                    DAT_0560b13c = CONCAT44(2,~uVar21);
                    if (iVar17 < iVar20) {
                      DAT_0560b0f8[iVar17] = &DAT_0560b13c;
                      iVar17 = (int)DAT_0560b0f0 + 1;
                      DAT_0560b0f0 = CONCAT44(DAT_0560b0f0._4_4_,iVar17);
                      iVar20 = DAT_0560b0f0._4_4_;
                    }
                    uVar3 = crc32b(uVar2,0x9d,0x4c11db7);
                    uVar21 = crc32b(uVar3,0x82,0x4c11db7);
                    DAT_0560b144 = CONCAT44(3,~uVar21);
                    if (iVar17 < iVar20) {
                      DAT_0560b0f8[iVar17] = &DAT_0560b144;
                      iVar17 = (int)DAT_0560b0f0 + 1;
                      DAT_0560b0f0 = CONCAT44(DAT_0560b0f0._4_4_,iVar17);
                    }
                    puVar31 = DAT_0560b0f8;
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
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
                              if (puVar27 != (uint *)0x0) goto LAB_02a98f00;
LAB_02a98eb0:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar30[-1] = puVar27;
                              *puVar30 = puVar29;
                              puVar32 = (uint *)puVar30[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a98eb0;
LAB_02a98f00:
                              if (puVar32 == (uint *)0x0) goto LAB_02a98eb0;
                              if (*puVar27 <= *puVar32) goto LAB_02a98eb0;
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
                    DAT_0560b0ec = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560b0ec != '\x01') goto LAB_02a98da8;
                  if ((int)DAT_0560b0f0 == 0) {
LAB_02a98da8:
                    uVar21 = 0;
                  }
                  else {
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if ((int)DAT_0560b0f0 < 2) {
                      uVar25 = 0;
                      puVar29 = (uint *)*DAT_0560b0f8;
                      uVar21 = uVar25;
                      if (puVar29 != (uint *)0x0) goto LAB_02a98d70;
joined_r0x02a98d84:
                      if (uVar21 < 4) {
                        uVar21 = *(uint *)(DAT_0560b0f8[uVar21] + 4);
                        if (uVar21 < 4) {
                          DAT_0560b0e0 = '\x01';
                          DAT_0560b0e4 = uVar33;
                          DAT_0560b0e8 = uVar21;
                          goto LAB_02a99320;
                        }
                        goto LAB_02a98da8;
                      }
                    }
                    else {
                      uVar25 = 0;
                      iVar17 = (int)DAT_0560b0f0 + -1;
                      do {
                        iVar20 = iVar17 + uVar25;
                        if (iVar20 < 0 != SCARRY4(iVar17,uVar25)) {
                          iVar20 = iVar20 + 1;
                        }
                        uVar21 = iVar20 >> 1;
                        if ((uint *)DAT_0560b0f8[(int)uVar21] == (uint *)0x0)
                        goto joined_r0x02a98d84;
                        uVar24 = *(uint *)DAT_0560b0f8[(int)uVar21];
                        if (uVar24 == uVar33) goto joined_r0x02a98d84;
                        if (uVar24 < uVar33) {
                          uVar25 = uVar21 + 1;
                        }
                        else {
                          iVar17 = uVar21 - 1;
                        }
                      } while ((int)uVar25 < iVar17);
                      puVar29 = (uint *)DAT_0560b0f8[(int)uVar25];
                      uVar21 = uVar25;
                      if (puVar29 == (uint *)0x0) goto joined_r0x02a98d84;
LAB_02a98d70:
                      uVar21 = uVar25;
                      if (*puVar29 == uVar33) goto joined_r0x02a98d84;
                    }
                    uVar21 = 0;
                  }
                }
              }
              else {
                if ((DAT_0560b068 == '\x01') && (DAT_0560b06c == uVar33)) {
                  uVar21 = DAT_0560b070;
                  if (3 < DAT_0560b070) goto LAB_02a99274;
                }
                else {
                  if ((DAT_0560b0a8 & 1) == 0) {
                    iVar17 = __cxa_guard_acquire(&DAT_0560b0a8);
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if (iVar17 != 0) {
                      DAT_0560b078 = 0x400000000;
                      DAT_0560b080 = &DAT_0560b088;
                      __cxa_guard_release(&DAT_0560b0a8);
                      puVar27 = (uint *)PTR_DAT_04bc4698;
                    }
                  }
                  if ((DAT_0560b0b0 & 1) == 0) {
                    DAT_0560b0b0 = 1;
                    if (((DAT_0560b0d8 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0560b0d8), iVar17 != 0)) {
                      _DAT_0560b0b4 = 0xffffffff00000000;
                      DAT_0560b0bc = 0xffffffff00000000;
                      DAT_0560b0c4 = 0xffffffff00000000;
                      DAT_0560b0cc = 0xffffffff00000000;
                      __cxa_guard_release(&DAT_0560b0d8);
                    }
                    _DAT_0560b0b4 = (ulong)~uVar13;
                    iVar17 = (int)DAT_0560b078;
                    iVar20 = DAT_0560b078._4_4_;
                    if ((int)DAT_0560b078 < DAT_0560b078._4_4_) {
                      *(undefined4 **)(DAT_0560b080 + (long)(int)DAT_0560b078 * 8) = &DAT_0560b0b4;
                      iVar17 = (int)DAT_0560b078 + 1;
                      DAT_0560b078 = CONCAT44(DAT_0560b078._4_4_,iVar17);
                      iVar20 = DAT_0560b078._4_4_;
                    }
                    DAT_0560b0bc = CONCAT44(1,~uVar11);
                    if (iVar17 < iVar20) {
                      *(undefined8 **)(DAT_0560b080 + (long)iVar17 * 8) = &DAT_0560b0bc;
                      iVar17 = (int)DAT_0560b078 + 1;
                      DAT_0560b078 = CONCAT44(DAT_0560b078._4_4_,iVar17);
                      iVar20 = DAT_0560b078._4_4_;
                    }
                    DAT_0560b0c4 = CONCAT44(2,~uVar12);
                    if (iVar17 < iVar20) {
                      *(undefined8 **)(DAT_0560b080 + (long)iVar17 * 8) = &DAT_0560b0c4;
                      iVar17 = (int)DAT_0560b078 + 1;
                      DAT_0560b078 = CONCAT44(DAT_0560b078._4_4_,iVar17);
                      iVar20 = DAT_0560b078._4_4_;
                    }
                    DAT_0560b0cc = CONCAT44(3,~uVar14);
                    if (iVar17 < iVar20) {
                      *(undefined8 **)(DAT_0560b080 + (long)iVar17 * 8) = &DAT_0560b0cc;
                      iVar17 = (int)DAT_0560b078 + 1;
                      DAT_0560b078 = CONCAT44(DAT_0560b078._4_4_,iVar17);
                    }
                    puVar16 = DAT_0560b080;
                    if (1 < iVar17) {
                      uVar25 = 0;
                      uVar21 = iVar17 - 1;
                      do {
                        if ((int)uVar21 <= (int)uVar25) break;
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar25 * 8);
                        uVar23 = (ulong)uVar25;
                        if ((uVar21 - uVar25 & 1) == 0) {
                          uVar26 = uVar23;
                          puVar29 = puVar27;
                        }
                        else {
                          uVar26 = uVar23 + 1;
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar29 < *puVar27)) {
                            *(uint **)(puVar16 + uVar26 * 8) = puVar27;
                            *(uint **)(puVar16 + uVar23 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                        }
                        uVar28 = (ulong)uVar21;
                        uVar21 = uVar25;
                        if (~uVar23 + uVar28 != 0) {
                          puVar31 = (undefined8 *)(puVar16 + uVar26 * 8 + 8);
                          do {
                            puVar27 = (uint *)*puVar31;
                            uVar24 = (uint)uVar26;
                            if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                               (*puVar29 <= *puVar27)) {
                              puVar32 = (uint *)puVar31[1];
                              if (puVar27 != (uint *)0x0) goto LAB_02a99210;
LAB_02a991c0:
                              puVar27 = puVar32;
                            }
                            else {
                              puVar31[-1] = puVar27;
                              *puVar31 = puVar29;
                              puVar32 = (uint *)puVar31[1];
                              puVar27 = puVar29;
                              uVar21 = uVar24;
                              if (puVar29 == (uint *)0x0) goto LAB_02a991c0;
LAB_02a99210:
                              if (puVar32 == (uint *)0x0) goto LAB_02a991c0;
                              if (*puVar27 <= *puVar32) goto LAB_02a991c0;
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
                        puVar27 = *(uint **)(puVar16 + (ulong)uVar21 * 8);
                        uVar25 = uVar21;
                        do {
                          puVar29 = *(uint **)(puVar16 + uVar26 * 8 + -8);
                          if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                             (*puVar27 < *puVar29)) {
                            uVar25 = (uint)uVar26;
                            *(uint **)(puVar16 + uVar26 * 8 + -8) = puVar27;
                            *(uint **)(puVar16 + uVar26 * 8) = puVar29;
                            puVar29 = puVar27;
                          }
                          uVar26 = uVar26 - 1;
                          puVar27 = puVar29;
                        } while ((long)uVar23 < (long)uVar26);
                      } while (uVar25 != uVar21);
                    }
                    DAT_0560b074 = '\x01';
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                  }
                  else if (DAT_0560b074 != '\x01') goto LAB_02a99274;
                  if ((int)DAT_0560b078 == 0) {
LAB_02a99274:
                    uVar21 = 0;
                  }
                  else {
                    puVar27 = (uint *)PTR_DAT_04bc4698;
                    if ((int)DAT_0560b078 < 2) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = 0;
                      iVar17 = (int)DAT_0560b078 + -1;
                      do {
                        iVar20 = iVar17 + uVar21;
                        if (iVar20 < 0 != SCARRY4(iVar17,uVar21)) {
                          iVar20 = iVar20 + 1;
                        }
                        uVar25 = iVar20 >> 1;
                        if (*(uint **)(DAT_0560b080 + (long)(int)uVar25 * 8) == (uint *)0x0)
                        goto joined_r0x02a992c8;
                        uVar24 = **(uint **)(DAT_0560b080 + (long)(int)uVar25 * 8);
                        if (uVar24 == uVar33) goto joined_r0x02a992c8;
                        if (uVar24 < uVar33) {
                          uVar21 = uVar25 + 1;
                        }
                        else {
                          iVar17 = uVar25 - 1;
                        }
                      } while ((int)uVar21 < iVar17);
                    }
                    uVar25 = uVar21;
                    if ((*(uint **)(DAT_0560b080 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                       (**(uint **)(DAT_0560b080 + (long)(int)uVar21 * 8) == uVar33)) {
joined_r0x02a992c8:
                      if (uVar25 < 4) {
                        uVar21 = *(uint *)(*(long *)(DAT_0560b080 + (ulong)uVar25 * 8) + 4);
                        if (uVar21 < 4) {
                          DAT_0560b068 = '\x01';
                          DAT_0560b06c = uVar33;
                          DAT_0560b070 = uVar21;
                          goto LAB_02a99318;
                        }
                        goto LAB_02a99274;
                      }
                    }
                    uVar21 = 0;
                  }
                }
LAB_02a99318:
              }
LAB_02a99320:
              puVar16 = PTR_DAT_04bc4698;
              puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
              if ((*puVar1 != 0) && (puVar29 != (uint *)0x0)) {
                if (*puVar29 != 0) {
                  uVar33 = puVar29[1];
                  if (uVar33 != 0) {
                    if ((ulong)(ushort)puVar29[2] != 0) {
                      lVar35 = 0xc;
                      if (*(char *)((long)puVar29 + 10) != '\0') {
                        lVar35 = 0x1c;
                      }
                      lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
                      puVar27 = (uint *)puVar16;
                      if (lVar35 != 0) {
                        uVar25 = 0;
                        if ((ulong)uVar33 != 0) {
                          uVar25 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar33);
                        }
                        if (*puVar29 <= uVar25) {
                          uVar25 = 0xffffffff;
                        }
                        if (uVar25 < *(uint *)PTR_DAT_04bc46b8) {
                          *(short *)(*(long *)(PTR_DAT_04bc46b8 + 8) + (long)(int)uVar25 * 2) =
                               (short)uVar21;
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
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar15);
  }
  return;
}

