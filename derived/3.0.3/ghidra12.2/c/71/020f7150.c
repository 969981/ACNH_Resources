
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020f7150(uint *param_1)

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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  char cVar21;
  undefined2 uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  uint *puVar31;
  ulong uVar32;
  uint *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  uint *puVar36;
  long lVar37;
  byte *pbVar38;
  uint uVar39;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar17 = PTR_DAT_04bb40b8;
  if ((param_1 != (uint *)0x0) && (uVar15 = *param_1, uVar15 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar4 = crc32b(uVar2,0xb0,0x4c11db7);
    uVar18 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar18 = crc32b(uVar18,0xa5,0x4c11db7);
    uVar4 = crc32b(uVar4,0x97,0x4c11db7);
    uVar5 = crc32b(uVar3,0x81,0x4c11db7);
    uVar18 = crc32b(uVar18,0xbd,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar5 = crc32b(uVar5,0xbf,0x4c11db7);
    uVar18 = crc32b(uVar18,0xe3,0x4c11db7);
    uVar39 = 0;
    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
    uVar5 = crc32b(uVar5,0xe3,0x4c11db7);
    uVar18 = crc32b(uVar18,0x82,0x4c11db7);
    uVar4 = crc32b(uVar4,0xab,0x4c11db7);
    uVar5 = crc32b(uVar5,0x81,0x4c11db7);
    uVar6 = crc32b(uVar18,0x80,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar18 = crc32b(uVar5,0x91,0x4c11db7);
    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
    uVar18 = crc32b(uVar18,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x9b,0x4c11db7);
    uVar18 = crc32b(uVar18,0x82,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe3,0x4c11db7);
    uVar7 = crc32b(uVar18,0x8b,0x4c11db7);
    uVar4 = crc32b(uVar4,0x81,0x4c11db7);
    uVar18 = crc32b(0xffffffff,0x55,0x4c11db7);
    uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
    uVar18 = crc32b(uVar18,100,0x4c11db7);
    uVar18 = crc32b(uVar18,0x65,0x4c11db7);
    uVar18 = crc32b(uVar18,0x66,0x4c11db7);
    uVar18 = crc32b(uVar18,0x69,0x4c11db7);
    uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x4c,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
    uVar18 = crc32b(uVar18,0x65,0x4c11db7);
    uVar8 = crc32b(uVar5,0x77,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar9 = crc32b(uVar18,100,0x4c11db7);
    uVar18 = crc32b(uVar5,0x6f,0x4c11db7);
    uVar18 = crc32b(uVar18,0x72,0x4c11db7);
    uVar18 = crc32b(uVar18,0x6d,0x4c11db7);
    uVar18 = crc32b(uVar18,0x61,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x48,0x4c11db7);
    uVar10 = crc32b(uVar18,0x6c,0x4c11db7);
    uVar18 = crc32b(uVar5,0x69,0x4c11db7);
    uVar18 = crc32b(uVar18,0x67,0x4c11db7);
    uVar11 = crc32b(uVar18,0x68,0x4c11db7);
    uVar18 = crc32b(0xffffffff,0x50,0x4c11db7);
    uVar18 = crc32b(uVar18,0x72,0x4c11db7);
    uVar18 = crc32b(uVar18,0x65,0x4c11db7);
    uVar18 = crc32b(uVar18,0x66,0x4c11db7);
    uVar18 = crc32b(uVar18,0x65,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar12 = crc32b(uVar18,0x72,0x4c11db7);
    uVar18 = crc32b(uVar5,0x76,0x4c11db7);
    uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
    uVar18 = crc32b(uVar18,0x69,0x4c11db7);
    uVar13 = crc32b(uVar18,100,0x4c11db7);
    uVar14 = crc32b(uVar4,0x9a,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0xe4,0x4c11db7);
    do {
      if (((uVar39 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar20 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar20 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar39 + (uint)(ushort)param_1[2] * 8 + iVar20) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar19 = *puVar1;
          if (uVar19 != 0) {
            cVar21 = *PTR_DAT_04bb40b0;
            do {
              puVar16 = PTR_DAT_04bb40b0;
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
                *puVar16 = 1;
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
                uVar19 = *puVar1;
              }
              else {
                uVar24 = *(uint *)(puVar17 + 0x10);
                if (-1 < (int)uVar24) {
                  if ((uint *)((long)puVar1 + (ulong)uVar24) != (uint *)0x0) {
                    uVar19 = *(uint *)((long)puVar1 + (ulong)uVar24);
                    goto LAB_020f7520;
                  }
                  break;
                }
                if (uVar24 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar19;
              uVar19 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar19 = 0, puVar1 == puVar31)) goto LAB_020f7520;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar26 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar17 + 0x10) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar27 = (int *)(lVar37 + 4);
              while (piVar27[-1] != -0x4157bade) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_020f751c;
              }
              iVar20 = 0;
              if (*piVar27 != -1) {
                iVar20 = *piVar27;
              }
              *(int *)(puVar17 + 0x10) = iVar20;
              uVar19 = *puVar1;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_020f751c:
          uVar19 = 0;
LAB_020f7520:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_053e68a0 == '\x01') && (DAT_053e68a4 == uVar19)) {
              uVar24 = DAT_053e68a8;
              if (2 < DAT_053e68a8) goto LAB_020f7764;
            }
            else {
              if (((DAT_053e68d8 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e68d8), iVar20 != 0)) {
                DAT_053e68b0 = 0x300000000;
                DAT_053e68b8 = (undefined8 *)&DAT_053e68c0;
                __cxa_guard_release(&DAT_053e68d8);
              }
              if ((DAT_053e68e0 & 1) == 0) {
                DAT_053e68e0 = 1;
                if (((DAT_053e6900 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e6900), iVar20 != 0)) {
                  _DAT_053e68e4 = 0xffffffff00000000;
                  DAT_053e68ec = 0xffffffff00000000;
                  DAT_053e68f4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e6900);
                }
                _DAT_053e68e4 = (ulong)~uVar6;
                iVar20 = (int)DAT_053e68b0;
                iVar23 = DAT_053e68b0._4_4_;
                if ((int)DAT_053e68b0 < DAT_053e68b0._4_4_) {
                  DAT_053e68b8[(int)DAT_053e68b0] = &DAT_053e68e4;
                  iVar20 = (int)DAT_053e68b0 + 1;
                  DAT_053e68b0 = CONCAT44(DAT_053e68b0._4_4_,iVar20);
                  iVar23 = DAT_053e68b0._4_4_;
                }
                DAT_053e68ec = CONCAT44(1,~uVar14);
                if (iVar20 < iVar23) {
                  DAT_053e68b8[iVar20] = &DAT_053e68ec;
                  iVar20 = (int)DAT_053e68b0 + 1;
                  DAT_053e68b0 = CONCAT44(DAT_053e68b0._4_4_,iVar20);
                  iVar23 = DAT_053e68b0._4_4_;
                }
                DAT_053e68f4 = CONCAT44(2,~uVar7);
                if (iVar20 < iVar23) {
                  DAT_053e68b8[iVar20] = &DAT_053e68f4;
                  iVar20 = (int)DAT_053e68b0 + 1;
                  DAT_053e68b0 = CONCAT44(DAT_053e68b0._4_4_,iVar20);
                }
                puVar35 = DAT_053e68b8;
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar26] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f78e0;
LAB_020f7890:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f7890;
LAB_020f78e0:
                          if (puVar36 == (uint *)0x0) goto LAB_020f7890;
                          if (*puVar31 <= *puVar36) goto LAB_020f7890;
                          uVar24 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = (uint *)puVar35[uVar24];
                    uVar29 = uVar24;
                    do {
                      puVar33 = (uint *)puVar35[uVar30 - 1];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        puVar35[uVar30 - 1] = puVar31;
                        puVar35[uVar30] = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e68ac = '\x01';
              }
              else if (DAT_053e68ac != '\x01') goto LAB_020f7764;
              if ((int)DAT_053e68b0 == 0) {
LAB_020f7764:
                uVar24 = 0;
              }
              else {
                if ((int)DAT_053e68b0 < 2) {
                  uVar29 = 0;
                  puVar31 = (uint *)*DAT_053e68b8;
                  uVar24 = uVar29;
                  if (puVar31 != (uint *)0x0) goto LAB_020f7730;
joined_r0x020f7914:
                  if (uVar24 < 3) {
                    uVar24 = *(uint *)(DAT_053e68b8[uVar24] + 4);
                    if (uVar24 < 3) {
                      DAT_053e68a0 = '\x01';
                      DAT_053e68a4 = uVar19;
                      DAT_053e68a8 = uVar24;
                      goto LAB_020f7c8c;
                    }
                    goto LAB_020f7764;
                  }
                }
                else {
                  uVar29 = 0;
                  iVar20 = (int)DAT_053e68b0 + -1;
                  do {
                    iVar23 = iVar20 + uVar29;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar29)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar24 = iVar23 >> 1;
                    if ((uint *)DAT_053e68b8[(int)uVar24] == (uint *)0x0) goto joined_r0x020f7914;
                    uVar28 = *(uint *)DAT_053e68b8[(int)uVar24];
                    if (uVar28 == uVar19) goto joined_r0x020f7914;
                    if (uVar28 < uVar19) {
                      uVar29 = uVar24 + 1;
                    }
                    else {
                      iVar20 = uVar24 - 1;
                    }
                  } while ((int)uVar29 < iVar20);
                  puVar31 = (uint *)DAT_053e68b8[(int)uVar29];
                  uVar24 = uVar29;
                  if (puVar31 == (uint *)0x0) goto joined_r0x020f7914;
LAB_020f7730:
                  uVar24 = uVar29;
                  if (*puVar31 == uVar19) goto joined_r0x020f7914;
                }
                uVar24 = 0;
              }
            }
          }
          else {
            if ((DAT_053e6838 == '\x01') && (DAT_053e683c == uVar19)) {
              uVar24 = DAT_053e6840;
              if (2 < DAT_053e6840) goto LAB_020f7c20;
            }
            else {
              if (((DAT_053e6870 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e6870), iVar20 != 0)) {
                DAT_053e6848 = 0x300000000;
                DAT_053e6850 = &DAT_053e6858;
                __cxa_guard_release(&DAT_053e6870);
              }
              if ((DAT_053e6878 & 1) == 0) {
                DAT_053e6878 = 1;
                if (((DAT_053e6898 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e6898), iVar20 != 0)) {
                  DAT_053e688c = 0xffffffff00000000;
                  _DAT_053e687c = 0xffffffff00000000;
                  DAT_053e6884 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e6898);
                }
                _DAT_053e687c = (ulong)~uVar12;
                iVar20 = (int)DAT_053e6848;
                iVar23 = DAT_053e6848._4_4_;
                if ((int)DAT_053e6848 < DAT_053e6848._4_4_) {
                  *(undefined4 **)(DAT_053e6850 + (long)(int)DAT_053e6848 * 8) = &DAT_053e687c;
                  iVar20 = (int)DAT_053e6848 + 1;
                  DAT_053e6848 = CONCAT44(DAT_053e6848._4_4_,iVar20);
                  iVar23 = DAT_053e6848._4_4_;
                }
                DAT_053e6884 = CONCAT44(1,~uVar10);
                if (iVar20 < iVar23) {
                  *(undefined8 **)(DAT_053e6850 + (long)iVar20 * 8) = &DAT_053e6884;
                  iVar20 = (int)DAT_053e6848 + 1;
                  DAT_053e6848 = CONCAT44(DAT_053e6848._4_4_,iVar20);
                  iVar23 = DAT_053e6848._4_4_;
                }
                DAT_053e688c = CONCAT44(2,~uVar13);
                if (iVar20 < iVar23) {
                  *(undefined8 **)(DAT_053e6850 + (long)iVar20 * 8) = &DAT_053e688c;
                  iVar20 = (int)DAT_053e6848 + 1;
                  DAT_053e6848 = CONCAT44(DAT_053e6848._4_4_,iVar20);
                }
                puVar16 = DAT_053e6850;
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar29 * 8);
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar16 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar16 + uVar26 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar16 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f7bc0;
LAB_020f7b70:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f7b70;
LAB_020f7bc0:
                          if (puVar36 == (uint *)0x0) goto LAB_020f7b70;
                          if (*puVar31 <= *puVar36) goto LAB_020f7b70;
                          uVar24 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar24 * 8);
                    uVar29 = uVar24;
                    do {
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar16 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar16 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e6844 = '\x01';
              }
              else if (DAT_053e6844 != '\x01') goto LAB_020f7c20;
              if ((int)DAT_053e6848 == 0) {
LAB_020f7c20:
                uVar24 = 0;
              }
              else {
                if ((int)DAT_053e6848 < 2) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  iVar20 = (int)DAT_053e6848 + -1;
                  do {
                    iVar23 = iVar20 + uVar24;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar24)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar29 = iVar23 >> 1;
                    if (*(uint **)(DAT_053e6850 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x020f7c50;
                    uVar28 = **(uint **)(DAT_053e6850 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar19) goto joined_r0x020f7c50;
                    if (uVar28 < uVar19) {
                      uVar24 = uVar29 + 1;
                    }
                    else {
                      iVar20 = uVar29 - 1;
                    }
                  } while ((int)uVar24 < iVar20);
                }
                uVar29 = uVar24;
                if ((*(uint **)(DAT_053e6850 + (long)(int)uVar24 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053e6850 + (long)(int)uVar24 * 8) == uVar19)) {
joined_r0x020f7c50:
                  if (uVar29 < 3) {
                    uVar24 = *(uint *)(*(long *)(DAT_053e6850 + (ulong)uVar29 * 8) + 4);
                    if (uVar24 < 3) {
                      DAT_053e6838 = '\x01';
                      DAT_053e683c = uVar19;
                      DAT_053e6840 = uVar24;
                      goto LAB_020f7c84;
                    }
                    goto LAB_020f7c20;
                  }
                }
                uVar24 = 0;
              }
            }
LAB_020f7c84:
          }
LAB_020f7c8c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar19 = puVar31[1], uVar19 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar29 = 0;
              if ((ulong)uVar19 != 0) {
                uVar29 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar19);
              }
              if (*puVar31 <= uVar29) {
                uVar29 = 0xffffffff;
              }
              if (uVar29 < *(uint *)PTR_DAT_04bb9bf8) {
                *(short *)(*(long *)(PTR_DAT_04bb9bf8 + 8) + (long)(int)uVar29 * 2) = (short)uVar24;
              }
            }
          }
          uVar19 = *puVar1;
          if (uVar19 != 0) {
            cVar21 = *PTR_DAT_04bb40b0;
            do {
              puVar16 = PTR_DAT_04bb40b0;
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
                *puVar16 = 1;
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
                uVar19 = *puVar1;
              }
              else {
                uVar24 = *(uint *)(puVar17 + 0x14);
                if (-1 < (int)uVar24) {
                  if ((uint *)((long)puVar1 + (ulong)uVar24) != (uint *)0x0) {
                    uVar19 = *(uint *)((long)puVar1 + (ulong)uVar24);
                    goto LAB_020f7e20;
                  }
                  break;
                }
                if (uVar24 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar19;
              uVar19 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar19 = 0, puVar1 == puVar31)) goto LAB_020f7e20;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar26 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar17 + 0x14) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar27 = (int *)(lVar37 + 4);
              while (piVar27[-1] != -0x6115ed78) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_020f7e1c;
              }
              iVar20 = 0;
              if (*piVar27 != -1) {
                iVar20 = *piVar27;
              }
              *(int *)(puVar17 + 0x14) = iVar20;
              uVar19 = *puVar1;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_020f7e1c:
          uVar19 = 0;
LAB_020f7e20:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_053e69b0 == '\x01') && (DAT_053e69b4 == uVar19)) {
              uVar24 = DAT_053e69b8;
              if (6 < DAT_053e69b8) goto LAB_020f80e4;
            }
            else {
              if (((DAT_053e6a08 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e6a08), iVar20 != 0)) {
                DAT_053e69c0 = 0x700000000;
                DAT_053e69c8 = (undefined8 *)&DAT_053e69d0;
                __cxa_guard_release(&DAT_053e6a08);
              }
              if ((DAT_053e6a10 & 1) == 0) {
                DAT_053e6a10 = 1;
                if (((DAT_053e6a50 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e6a50), iVar20 != 0)) {
                  DAT_053e6a44 = 0xffffffff00000000;
                  DAT_053e6a14 = 0xffffffff00000000;
                  DAT_053e6a1c = 0xffffffff00000000;
                  DAT_053e6a24 = 0xffffffff00000000;
                  DAT_053e6a2c = 0xffffffff00000000;
                  DAT_053e6a34 = 0xffffffff00000000;
                  DAT_053e6a3c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e6a50);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_DAT_04a74310)[lVar37];
                  if (local_174 != pbVar38) {
                    lVar25 = 0;
                    do {
                      if (pbVar38[lVar25] == 0) {
LAB_020f7f74:
                        iVar20 = (int)lVar25;
joined_r0x020f7f78:
                        if (0xff < iVar20) {
                          iVar20 = 0xff;
                        }
                        goto LAB_020f7f80;
                      }
                      if (pbVar38[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_020f7f74;
                      }
                      if (pbVar38[lVar25 + 2] == 0) {
                        iVar20 = (int)lVar25 + 2;
                        goto joined_r0x020f7f78;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar20 = 0;
LAB_020f7f80:
                    memcpy(local_174,pbVar38,(long)iVar20);
                    local_174[iVar20] = 0;
                  }
                  uVar24 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar29 = crc32b(uVar29,uVar24,0x4c11db7);
                      uVar24 = (uint)*pbVar38;
                    } while (uVar24 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_053e6a14 + lVar37) = uVar29;
                  *(int *)((long)&DAT_053e6a14 + lVar37 * 8 + 4) = (int)lVar37;
                  iVar20 = (int)DAT_053e69c0;
                  if ((int)DAT_053e69c0 < DAT_053e69c0._4_4_) {
                    DAT_053e69c8[(int)DAT_053e69c0] = &DAT_053e6a14 + lVar37;
                    iVar20 = (int)DAT_053e69c0 + 1;
                    DAT_053e69c0 = CONCAT44(DAT_053e69c0._4_4_,iVar20);
                  }
                  puVar35 = DAT_053e69c8;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 7);
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar26] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f8260;
LAB_020f8210:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f8210;
LAB_020f8260:
                          if (puVar36 == (uint *)0x0) goto LAB_020f8210;
                          if (*puVar31 <= *puVar36) goto LAB_020f8210;
                          uVar24 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = (uint *)puVar35[uVar24];
                    uVar29 = uVar24;
                    do {
                      puVar33 = (uint *)puVar35[uVar30 - 1];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        puVar35[uVar30 - 1] = puVar31;
                        puVar35[uVar30] = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e69bc = '\x01';
              }
              else if (DAT_053e69bc != '\x01') goto LAB_020f80e4;
              if ((int)DAT_053e69c0 == 0) {
LAB_020f80e4:
                uVar24 = 0;
              }
              else {
                if ((int)DAT_053e69c0 < 2) {
                  uVar29 = 0;
                  puVar31 = (uint *)*DAT_053e69c8;
                  uVar24 = uVar29;
                  if (puVar31 != (uint *)0x0) goto LAB_020f80b0;
joined_r0x020f80c4:
                  if (uVar24 < 7) {
                    uVar24 = *(uint *)(DAT_053e69c8[uVar24] + 4);
                    if (uVar24 < 7) {
                      DAT_053e69b0 = '\x01';
                      DAT_053e69b4 = uVar19;
                      DAT_053e69b8 = uVar24;
                      goto LAB_020f869c;
                    }
                    goto LAB_020f80e4;
                  }
                }
                else {
                  uVar29 = 0;
                  iVar20 = (int)DAT_053e69c0 + -1;
                  do {
                    iVar23 = iVar20 + uVar29;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar29)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar24 = iVar23 >> 1;
                    if ((uint *)DAT_053e69c8[(int)uVar24] == (uint *)0x0) goto joined_r0x020f80c4;
                    uVar28 = *(uint *)DAT_053e69c8[(int)uVar24];
                    if (uVar28 == uVar19) goto joined_r0x020f80c4;
                    if (uVar28 < uVar19) {
                      uVar29 = uVar24 + 1;
                    }
                    else {
                      iVar20 = uVar24 - 1;
                    }
                  } while ((int)uVar29 < iVar20);
                  puVar31 = (uint *)DAT_053e69c8[(int)uVar29];
                  uVar24 = uVar29;
                  if (puVar31 == (uint *)0x0) goto joined_r0x020f80c4;
LAB_020f80b0:
                  uVar24 = uVar29;
                  if (*puVar31 == uVar19) goto joined_r0x020f80c4;
                }
                uVar24 = 0;
              }
            }
          }
          else {
            if ((DAT_053e6908 == '\x01') && (DAT_053e690c == uVar19)) {
              uVar24 = DAT_053e6910;
              if (6 < DAT_053e6910) goto LAB_020f8630;
            }
            else {
              if (((DAT_053e6960 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e6960), iVar20 != 0)) {
                DAT_053e6918 = 0x700000000;
                DAT_053e6920 = &DAT_053e6928;
                __cxa_guard_release(&DAT_053e6960);
              }
              if ((DAT_053e6968 & 1) == 0) {
                DAT_053e6968 = 1;
                if (((DAT_053e69a8 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e69a8), iVar20 != 0)) {
                  DAT_053e699c = 0xffffffff00000000;
                  DAT_053e696c = 0xffffffff00000000;
                  DAT_053e6974 = 0xffffffff00000000;
                  DAT_053e697c = 0xffffffff00000000;
                  DAT_053e6984 = 0xffffffff00000000;
                  DAT_053e698c = 0xffffffff00000000;
                  DAT_053e6994 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e69a8);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_s_Undefined_04a74280)[lVar37];
                  if (local_174 != pbVar38) {
                    lVar25 = 0;
                    do {
                      if (pbVar38[lVar25] == 0) {
LAB_020f8354:
                        iVar20 = (int)lVar25;
joined_r0x020f8358:
                        if (0xff < iVar20) {
                          iVar20 = 0xff;
                        }
                        goto LAB_020f8360;
                      }
                      if (pbVar38[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_020f8354;
                      }
                      if (pbVar38[lVar25 + 2] == 0) {
                        iVar20 = (int)lVar25 + 2;
                        goto joined_r0x020f8358;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar20 = 0;
LAB_020f8360:
                    memcpy(local_174,pbVar38,(long)iVar20);
                    local_174[iVar20] = 0;
                  }
                  uVar24 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar29 = crc32b(uVar29,uVar24,0x4c11db7);
                      uVar24 = (uint)*pbVar38;
                    } while (uVar24 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_053e696c + lVar37) = uVar29;
                  *(int *)((long)&DAT_053e696c + lVar37 * 8 + 4) = (int)lVar37;
                  iVar20 = (int)DAT_053e6918;
                  if ((int)DAT_053e6918 < DAT_053e6918._4_4_) {
                    *(undefined8 **)(DAT_053e6920 + (long)(int)DAT_053e6918 * 8) =
                         &DAT_053e696c + lVar37;
                    iVar20 = (int)DAT_053e6918 + 1;
                    DAT_053e6918 = CONCAT44(DAT_053e6918._4_4_,iVar20);
                  }
                  puVar16 = DAT_053e6920;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 7);
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar29 * 8);
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar16 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar16 + uVar26 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar16 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f85d0;
LAB_020f8580:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f8580;
LAB_020f85d0:
                          if (puVar36 == (uint *)0x0) goto LAB_020f8580;
                          if (*puVar31 <= *puVar36) goto LAB_020f8580;
                          uVar24 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar24 * 8);
                    uVar29 = uVar24;
                    do {
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar16 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar16 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e6914 = '\x01';
              }
              else if (DAT_053e6914 != '\x01') goto LAB_020f8630;
              if ((int)DAT_053e6918 == 0) {
LAB_020f8630:
                uVar24 = 0;
              }
              else {
                if ((int)DAT_053e6918 < 2) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  iVar20 = (int)DAT_053e6918 + -1;
                  do {
                    iVar23 = iVar20 + uVar24;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar24)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar29 = iVar23 >> 1;
                    if (*(uint **)(DAT_053e6920 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x020f8660;
                    uVar28 = **(uint **)(DAT_053e6920 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar19) goto joined_r0x020f8660;
                    if (uVar28 < uVar19) {
                      uVar24 = uVar29 + 1;
                    }
                    else {
                      iVar20 = uVar29 - 1;
                    }
                  } while ((int)uVar24 < iVar20);
                }
                uVar29 = uVar24;
                if ((*(uint **)(DAT_053e6920 + (long)(int)uVar24 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053e6920 + (long)(int)uVar24 * 8) == uVar19)) {
joined_r0x020f8660:
                  if (uVar29 < 7) {
                    uVar24 = *(uint *)(*(long *)(DAT_053e6920 + (ulong)uVar29 * 8) + 4);
                    if (uVar24 < 7) {
                      DAT_053e6908 = '\x01';
                      DAT_053e690c = uVar19;
                      DAT_053e6910 = uVar24;
                      goto LAB_020f8694;
                    }
                    goto LAB_020f8630;
                  }
                }
                uVar24 = 0;
              }
            }
LAB_020f8694:
          }
LAB_020f869c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar19 = puVar31[1], uVar19 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar29 = 0;
              if ((ulong)uVar19 != 0) {
                uVar29 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar19);
              }
              if (*puVar31 <= uVar29) {
                uVar29 = 0xffffffff;
              }
              if (uVar29 < *(uint *)PTR_DAT_04bc15b0) {
                *(short *)(*(long *)(PTR_DAT_04bc15b0 + 8) + (long)(int)uVar29 * 2) = (short)uVar24;
              }
            }
          }
          uVar19 = *puVar1;
          if (uVar19 != 0) {
            cVar21 = *PTR_DAT_04bb40b0;
            do {
              puVar16 = PTR_DAT_04bb40b0;
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
                *puVar16 = 1;
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
                uVar19 = *puVar1;
              }
              else {
                uVar24 = *(uint *)(puVar17 + 0x18);
                if (-1 < (int)uVar24) {
                  if ((uint *)((long)puVar1 + (ulong)uVar24) != (uint *)0x0) {
                    uVar19 = *(uint *)((long)puVar1 + (ulong)uVar24);
                    goto LAB_020f8830;
                  }
                  break;
                }
                if (uVar24 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar19;
              uVar19 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar19 = 0, puVar1 == puVar31)) goto LAB_020f8830;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar26 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar17 + 0x18) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar27 = (int *)(lVar37 + 4);
              while (piVar27[-1] != 0x4f52f6a) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_020f882c;
              }
              iVar20 = 0;
              if (*piVar27 != -1) {
                iVar20 = *piVar27;
              }
              *(int *)(puVar17 + 0x18) = iVar20;
              uVar19 = *puVar1;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_020f882c:
          uVar19 = 0;
LAB_020f8830:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_053e6b10 == '\x01') && (DAT_053e6b14 == uVar19)) {
              uVar24 = DAT_053e6b18;
              if (7 < DAT_053e6b18) goto LAB_020f8b04;
            }
            else {
              if (((DAT_053e6b70 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e6b70), iVar20 != 0)) {
                DAT_053e6b20 = 0x800000000;
                DAT_053e6b28 = (undefined8 *)&DAT_053e6b30;
                __cxa_guard_release(&DAT_053e6b70);
              }
              if ((DAT_053e6b78 & 1) == 0) {
                DAT_053e6b78 = 1;
                if (((DAT_053e6bc0 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e6bc0), iVar20 != 0)) {
                  DAT_053e6b7c = 0xffffffff00000000;
                  DAT_053e6b84 = 0xffffffff00000000;
                  DAT_053e6b8c = 0xffffffff00000000;
                  DAT_053e6b94 = 0xffffffff00000000;
                  DAT_053e6b9c = 0xffffffff00000000;
                  DAT_053e6ba4 = 0xffffffff00000000;
                  DAT_053e6bac = 0xffffffff00000000;
                  DAT_053e6bb4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e6bc0);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_DAT_04a74450)[lVar37];
                  if (local_174 != pbVar38) {
                    lVar25 = 0;
                    do {
                      if (pbVar38[lVar25] == 0) {
LAB_020f8988:
                        iVar20 = (int)lVar25;
joined_r0x020f898c:
                        if (0xff < iVar20) {
                          iVar20 = 0xff;
                        }
                        goto LAB_020f8994;
                      }
                      if (pbVar38[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_020f8988;
                      }
                      if (pbVar38[lVar25 + 2] == 0) {
                        iVar20 = (int)lVar25 + 2;
                        goto joined_r0x020f898c;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar20 = 0;
LAB_020f8994:
                    memcpy(local_174,pbVar38,(long)iVar20);
                    local_174[iVar20] = 0;
                  }
                  uVar24 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar29 = crc32b(uVar29,uVar24,0x4c11db7);
                      uVar24 = (uint)*pbVar38;
                    } while (uVar24 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_053e6b7c + lVar37) = uVar29;
                  *(int *)((long)&DAT_053e6b7c + lVar37 * 8 + 4) = (int)lVar37;
                  iVar20 = (int)DAT_053e6b20;
                  if ((int)DAT_053e6b20 < DAT_053e6b20._4_4_) {
                    DAT_053e6b28[(int)DAT_053e6b20] = &DAT_053e6b7c + lVar37;
                    iVar20 = (int)DAT_053e6b20 + 1;
                    DAT_053e6b20 = CONCAT44(DAT_053e6b20._4_4_,iVar20);
                  }
                  puVar35 = DAT_053e6b28;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 8);
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar26] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f8c90;
LAB_020f8c40:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f8c40;
LAB_020f8c90:
                          if (puVar36 == (uint *)0x0) goto LAB_020f8c40;
                          if (*puVar31 <= *puVar36) goto LAB_020f8c40;
                          uVar24 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = (uint *)puVar35[uVar24];
                    uVar29 = uVar24;
                    do {
                      puVar33 = (uint *)puVar35[uVar30 - 1];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        puVar35[uVar30 - 1] = puVar31;
                        puVar35[uVar30] = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e6b1c = '\x01';
              }
              else if (DAT_053e6b1c != '\x01') goto LAB_020f8b04;
              if ((int)DAT_053e6b20 != 0) {
                if ((int)DAT_053e6b20 < 2) {
                  uVar29 = 0;
                  puVar31 = (uint *)*DAT_053e6b28;
                  uVar24 = uVar29;
                  if (puVar31 != (uint *)0x0) goto LAB_020f8ad0;
joined_r0x020f8ae4:
                  if (uVar24 < 8) {
                    uVar24 = *(uint *)(DAT_053e6b28[uVar24] + 4);
                    if (uVar24 < 8) {
                      DAT_053e6b10 = '\x01';
                      DAT_053e6b14 = uVar19;
                      DAT_053e6b18 = uVar24;
                      goto LAB_020f8b08;
                    }
                    goto LAB_020f8b04;
                  }
                }
                else {
                  uVar29 = 0;
                  iVar20 = (int)DAT_053e6b20 + -1;
                  do {
                    iVar23 = iVar20 + uVar29;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar29)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar24 = iVar23 >> 1;
                    if ((uint *)DAT_053e6b28[(int)uVar24] == (uint *)0x0) goto joined_r0x020f8ae4;
                    uVar28 = *(uint *)DAT_053e6b28[(int)uVar24];
                    if (uVar28 == uVar19) goto joined_r0x020f8ae4;
                    if (uVar28 < uVar19) {
                      uVar29 = uVar24 + 1;
                    }
                    else {
                      iVar20 = uVar24 - 1;
                    }
                  } while ((int)uVar29 < iVar20);
                  puVar31 = (uint *)DAT_053e6b28[(int)uVar29];
                  uVar24 = uVar29;
                  if (puVar31 == (uint *)0x0) goto joined_r0x020f8ae4;
LAB_020f8ad0:
                  uVar24 = uVar29;
                  if (*puVar31 == uVar19) goto joined_r0x020f8ae4;
                }
                uVar22 = 0;
                goto LAB_020f908c;
              }
LAB_020f8b04:
              uVar24 = 0;
            }
LAB_020f8b08:
            uVar22 = (undefined2)uVar24;
          }
          else {
            if ((DAT_053e6a58 == '\x01') && (DAT_053e6a5c == uVar19)) {
              uVar24 = DAT_053e6a60;
              if (7 < DAT_053e6a60) goto LAB_020f9070;
            }
            else {
              if (((DAT_053e6ab8 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e6ab8), iVar20 != 0)) {
                DAT_053e6a68 = 0x800000000;
                DAT_053e6a70 = &DAT_053e6a78;
                __cxa_guard_release(&DAT_053e6ab8);
              }
              if ((DAT_053e6ac0 & 1) == 0) {
                DAT_053e6ac0 = 1;
                if (((DAT_053e6b08 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e6b08), iVar20 != 0)) {
                  DAT_053e6ac4 = 0xffffffff00000000;
                  DAT_053e6acc = 0xffffffff00000000;
                  DAT_053e6ad4 = 0xffffffff00000000;
                  DAT_053e6adc = 0xffffffff00000000;
                  DAT_053e6ae4 = 0xffffffff00000000;
                  DAT_053e6aec = 0xffffffff00000000;
                  DAT_053e6af4 = 0xffffffff00000000;
                  DAT_053e6afc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e6b08);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_s_Boy_normal_04a743a8)[lVar37];
                  if (local_174 != pbVar38) {
                    lVar25 = 0;
                    do {
                      if (pbVar38[lVar25] == 0) {
LAB_020f8d94:
                        iVar20 = (int)lVar25;
joined_r0x020f8d98:
                        if (0xff < iVar20) {
                          iVar20 = 0xff;
                        }
                        goto LAB_020f8da0;
                      }
                      if (pbVar38[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_020f8d94;
                      }
                      if (pbVar38[lVar25 + 2] == 0) {
                        iVar20 = (int)lVar25 + 2;
                        goto joined_r0x020f8d98;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar20 = 0;
LAB_020f8da0:
                    memcpy(local_174,pbVar38,(long)iVar20);
                    local_174[iVar20] = 0;
                  }
                  uVar24 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar29 = crc32b(uVar29,uVar24,0x4c11db7);
                      uVar24 = (uint)*pbVar38;
                    } while (uVar24 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_053e6ac4 + lVar37) = uVar29;
                  *(int *)((long)&DAT_053e6ac4 + lVar37 * 8 + 4) = (int)lVar37;
                  iVar20 = (int)DAT_053e6a68;
                  if ((int)DAT_053e6a68 < DAT_053e6a68._4_4_) {
                    *(undefined8 **)(DAT_053e6a70 + (long)(int)DAT_053e6a68 * 8) =
                         &DAT_053e6ac4 + lVar37;
                    iVar20 = (int)DAT_053e6a68 + 1;
                    DAT_053e6a68 = CONCAT44(DAT_053e6a68._4_4_,iVar20);
                  }
                  puVar16 = DAT_053e6a70;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 8);
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar29 * 8);
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar16 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar16 + uVar26 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar16 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f9010;
LAB_020f8fc0:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f8fc0;
LAB_020f9010:
                          if (puVar36 == (uint *)0x0) goto LAB_020f8fc0;
                          if (*puVar31 <= *puVar36) goto LAB_020f8fc0;
                          uVar24 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar24 * 8);
                    uVar29 = uVar24;
                    do {
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar16 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar16 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e6a64 = '\x01';
              }
              else if (DAT_053e6a64 != '\x01') goto LAB_020f9070;
              if ((int)DAT_053e6a68 != 0) {
                if ((int)DAT_053e6a68 < 2) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  iVar20 = (int)DAT_053e6a68 + -1;
                  do {
                    iVar23 = iVar20 + uVar24;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar24)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar29 = iVar23 >> 1;
                    if (*(uint **)(DAT_053e6a70 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x020f9e74;
                    uVar28 = **(uint **)(DAT_053e6a70 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar19) goto joined_r0x020f9e74;
                    if (uVar28 < uVar19) {
                      uVar24 = uVar29 + 1;
                    }
                    else {
                      iVar20 = uVar29 - 1;
                    }
                  } while ((int)uVar24 < iVar20);
                }
                uVar29 = uVar24;
                if ((*(uint **)(DAT_053e6a70 + (long)(int)uVar24 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053e6a70 + (long)(int)uVar24 * 8) == uVar19)) {
joined_r0x020f9e74:
                  if (uVar29 < 8) {
                    uVar24 = *(uint *)(*(long *)(DAT_053e6a70 + (ulong)uVar29 * 8) + 4);
                    if (uVar24 < 8) {
                      DAT_053e6a58 = '\x01';
                      DAT_053e6a5c = uVar19;
                      DAT_053e6a60 = uVar24;
                      goto LAB_020f9074;
                    }
                    goto LAB_020f9070;
                  }
                }
                uVar22 = 0;
                goto LAB_020f908c;
              }
LAB_020f9070:
              uVar24 = 0;
            }
LAB_020f9074:
            uVar22 = (undefined2)uVar24;
          }
LAB_020f908c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar19 = puVar31[1], uVar19 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar24 = 0;
              if ((ulong)uVar19 != 0) {
                uVar24 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar19);
              }
              if (*puVar31 <= uVar24) {
                uVar24 = 0xffffffff;
              }
              if (uVar24 < *(uint *)PTR_DAT_04bb6a50) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar24 * 2) = uVar22;
              }
            }
          }
          uVar19 = *puVar1;
          if (uVar19 != 0) {
            cVar21 = *PTR_DAT_04bb40b0;
            do {
              puVar16 = PTR_DAT_04bb40b0;
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
                *puVar16 = 1;
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
                uVar19 = *puVar1;
              }
              else {
                uVar24 = *(uint *)(puVar17 + 0x20);
                if (-1 < (int)uVar24) {
                  if ((uint *)((long)puVar1 + (ulong)uVar24) != (uint *)0x0) {
                    uVar19 = *(uint *)((long)puVar1 + (ulong)uVar24);
                    goto LAB_020f9230;
                  }
                  break;
                }
                if (uVar24 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar19;
              uVar19 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar19 = 0, puVar1 == puVar31)) goto LAB_020f9230;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar26 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar17 + 0x20) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar27 = (int *)(lVar37 + 4);
              while (piVar27[-1] != -0x55bbfc16) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_020f922c;
              }
              iVar20 = 0;
              if (*piVar27 != -1) {
                iVar20 = *piVar27;
              }
              *(int *)(puVar17 + 0x20) = iVar20;
              uVar19 = *puVar1;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_020f922c:
          uVar19 = 0;
LAB_020f9230:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_053e6c40 == '\x01') && (DAT_053e6c44 == uVar19)) {
              uVar24 = DAT_053e6c48;
              if (3 < DAT_053e6c48) goto LAB_020f951c;
            }
            else {
              if (((DAT_053e6c80 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e6c80), iVar20 != 0)) {
                DAT_053e6c50 = 0x400000000;
                DAT_053e6c58 = (undefined8 *)&DAT_053e6c60;
                __cxa_guard_release(&DAT_053e6c80);
              }
              if ((DAT_053e6c88 & 1) == 0) {
                DAT_053e6c88 = 1;
                if (((DAT_053e6cb0 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e6cb0), iVar20 != 0)) {
                  DAT_053e6c8c = 0xffffffff00000000;
                  DAT_053e6c94 = 0xffffffff00000000;
                  DAT_053e6c9c = 0xffffffff00000000;
                  DAT_053e6ca4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e6cb0);
                }
                uVar18 = crc32b(uVar2,0x9c,0x4c11db7);
                uVar18 = crc32b(uVar18,0xaa,0x4c11db7);
                uVar18 = crc32b(uVar18,0xe8,0x4c11db7);
                uVar18 = crc32b(uVar18,0xa8,0x4c11db7);
                uVar18 = crc32b(uVar18,0xad,0x4c11db7);
                uVar18 = crc32b(uVar18,0xe5,0x4c11db7);
                uVar18 = crc32b(uVar18,0xae,0x4c11db7);
                uVar24 = crc32b(uVar18,0x9a,0x4c11db7);
                DAT_053e6c8c = (ulong)~uVar24;
                iVar20 = (int)DAT_053e6c50;
                iVar23 = DAT_053e6c50._4_4_;
                if ((int)DAT_053e6c50 < DAT_053e6c50._4_4_) {
                  DAT_053e6c58[(int)DAT_053e6c50] = &DAT_053e6c8c;
                  iVar20 = (int)DAT_053e6c50 + 1;
                  DAT_053e6c50 = CONCAT44(DAT_053e6c50._4_4_,iVar20);
                  iVar23 = DAT_053e6c50._4_4_;
                }
                uVar18 = crc32b(uVar4,0xbd,0x4c11db7);
                uVar24 = crc32b(uVar18,0x8e,0x4c11db7);
                DAT_053e6c94 = CONCAT44(1,~uVar24);
                if (iVar20 < iVar23) {
                  DAT_053e6c58[iVar20] = &DAT_053e6c94;
                  iVar20 = (int)DAT_053e6c50 + 1;
                  DAT_053e6c50 = CONCAT44(DAT_053e6c50._4_4_,iVar20);
                  iVar23 = DAT_053e6c50._4_4_;
                }
                uVar18 = crc32b(uVar4,0xb8,0x4c11db7);
                uVar24 = crc32b(uVar18,0xad,0x4c11db7);
                DAT_053e6c9c = CONCAT44(2,~uVar24);
                if (iVar20 < iVar23) {
                  DAT_053e6c58[iVar20] = &DAT_053e6c9c;
                  iVar20 = (int)DAT_053e6c50 + 1;
                  DAT_053e6c50 = CONCAT44(DAT_053e6c50._4_4_,iVar20);
                  iVar23 = DAT_053e6c50._4_4_;
                }
                uVar18 = crc32b(uVar3,0xab,0x4c11db7);
                uVar24 = crc32b(uVar18,0x98,0x4c11db7);
                DAT_053e6ca4 = CONCAT44(3,~uVar24);
                if (iVar20 < iVar23) {
                  DAT_053e6c58[iVar20] = &DAT_053e6ca4;
                  iVar20 = (int)DAT_053e6c50 + 1;
                  DAT_053e6c50 = CONCAT44(DAT_053e6c50._4_4_,iVar20);
                }
                puVar35 = DAT_053e6c58;
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar26] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f96b0;
LAB_020f9660:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f9660;
LAB_020f96b0:
                          if (puVar36 == (uint *)0x0) goto LAB_020f9660;
                          if (*puVar31 <= *puVar36) goto LAB_020f9660;
                          uVar24 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = (uint *)puVar35[uVar24];
                    uVar29 = uVar24;
                    do {
                      puVar33 = (uint *)puVar35[uVar30 - 1];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        puVar35[uVar30 - 1] = puVar31;
                        puVar35[uVar30] = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e6c4c = '\x01';
              }
              else if (DAT_053e6c4c != '\x01') goto LAB_020f951c;
              if ((int)DAT_053e6c50 != 0) {
                if ((int)DAT_053e6c50 < 2) {
                  uVar29 = 0;
                  puVar31 = (uint *)*DAT_053e6c58;
                  uVar24 = uVar29;
                  if (puVar31 != (uint *)0x0) goto LAB_020f94f0;
joined_r0x020f9504:
                  if (uVar24 < 4) {
                    uVar24 = *(uint *)(DAT_053e6c58[uVar24] + 4);
                    if (uVar24 < 4) {
                      DAT_053e6c40 = '\x01';
                      DAT_053e6c44 = uVar19;
                      DAT_053e6c48 = uVar24;
                      goto LAB_020f9520;
                    }
                    goto LAB_020f951c;
                  }
                }
                else {
                  uVar29 = 0;
                  iVar20 = (int)DAT_053e6c50 + -1;
                  do {
                    iVar23 = iVar20 + uVar29;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar29)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar24 = iVar23 >> 1;
                    if ((uint *)DAT_053e6c58[(int)uVar24] == (uint *)0x0) goto joined_r0x020f9504;
                    uVar28 = *(uint *)DAT_053e6c58[(int)uVar24];
                    if (uVar28 == uVar19) goto joined_r0x020f9504;
                    if (uVar28 < uVar19) {
                      uVar29 = uVar24 + 1;
                    }
                    else {
                      iVar20 = uVar24 - 1;
                    }
                  } while ((int)uVar29 < iVar20);
                  puVar31 = (uint *)DAT_053e6c58[(int)uVar29];
                  uVar24 = uVar29;
                  if (puVar31 == (uint *)0x0) goto joined_r0x020f9504;
LAB_020f94f0:
                  uVar24 = uVar29;
                  if (*puVar31 == uVar19) goto joined_r0x020f9504;
                }
                uVar22 = 0;
                goto LAB_020f9a18;
              }
LAB_020f951c:
              uVar24 = 0;
            }
LAB_020f9520:
            uVar22 = (undefined2)uVar24;
          }
          else {
            if ((DAT_053e6bc8 == '\x01') && (DAT_053e6bcc == uVar19)) {
              uVar24 = DAT_053e6bd0;
              if (3 < DAT_053e6bd0) goto LAB_020f9a08;
            }
            else {
              if (((DAT_053e6c08 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(&DAT_053e6c08), iVar20 != 0)) {
                DAT_053e6bd8 = 0x400000000;
                DAT_053e6be0 = &DAT_053e6be8;
                __cxa_guard_release(&DAT_053e6c08);
              }
              if ((DAT_053e6c10 & 1) == 0) {
                DAT_053e6c10 = 1;
                if (((DAT_053e6c38 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(&DAT_053e6c38), iVar20 != 0)) {
                  _DAT_053e6c14 = 0xffffffff00000000;
                  DAT_053e6c1c = 0xffffffff00000000;
                  DAT_053e6c24 = 0xffffffff00000000;
                  DAT_053e6c2c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053e6c38);
                }
                _DAT_053e6c14 = (ulong)~uVar9;
                iVar20 = (int)DAT_053e6bd8;
                iVar23 = DAT_053e6bd8._4_4_;
                if ((int)DAT_053e6bd8 < DAT_053e6bd8._4_4_) {
                  *(undefined4 **)(DAT_053e6be0 + (long)(int)DAT_053e6bd8 * 8) = &DAT_053e6c14;
                  iVar20 = (int)DAT_053e6bd8 + 1;
                  DAT_053e6bd8 = CONCAT44(DAT_053e6bd8._4_4_,iVar20);
                  iVar23 = DAT_053e6bd8._4_4_;
                }
                DAT_053e6c1c = CONCAT44(1,~uVar8);
                if (iVar20 < iVar23) {
                  *(undefined8 **)(DAT_053e6be0 + (long)iVar20 * 8) = &DAT_053e6c1c;
                  iVar20 = (int)DAT_053e6bd8 + 1;
                  DAT_053e6bd8 = CONCAT44(DAT_053e6bd8._4_4_,iVar20);
                  iVar23 = DAT_053e6bd8._4_4_;
                }
                DAT_053e6c24 = CONCAT44(2,~uVar10);
                if (iVar20 < iVar23) {
                  *(undefined8 **)(DAT_053e6be0 + (long)iVar20 * 8) = &DAT_053e6c24;
                  iVar20 = (int)DAT_053e6bd8 + 1;
                  DAT_053e6bd8 = CONCAT44(DAT_053e6bd8._4_4_,iVar20);
                  iVar23 = DAT_053e6bd8._4_4_;
                }
                DAT_053e6c2c = CONCAT44(3,~uVar11);
                if (iVar20 < iVar23) {
                  *(undefined8 **)(DAT_053e6be0 + (long)iVar20 * 8) = &DAT_053e6c2c;
                  iVar20 = (int)DAT_053e6bd8 + 1;
                  DAT_053e6bd8 = CONCAT44(DAT_053e6bd8._4_4_,iVar20);
                }
                puVar16 = DAT_053e6be0;
                if (1 < iVar20) {
                  uVar29 = 0;
                  uVar24 = iVar20 - 1;
                  do {
                    if ((int)uVar24 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar29 * 8);
                    uVar26 = (ulong)uVar29;
                    if ((uVar24 - uVar29 & 1) == 0) {
                      uVar30 = uVar26;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar26 + 1;
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar16 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar16 + uVar26 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar24;
                    uVar24 = uVar29;
                    if (~uVar26 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar16 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_020f99b0;
LAB_020f9960:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar24 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_020f9960;
LAB_020f99b0:
                          if (puVar36 == (uint *)0x0) goto LAB_020f9960;
                          if (*puVar31 <= *puVar36) goto LAB_020f9960;
                          uVar24 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar24 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar24;
                    puVar31 = *(uint **)(puVar16 + (ulong)uVar24 * 8);
                    uVar29 = uVar24;
                    do {
                      puVar33 = *(uint **)(puVar16 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar16 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar16 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar26 < (long)uVar30);
                  } while (uVar29 != uVar24);
                }
                DAT_053e6bd4 = '\x01';
              }
              else if (DAT_053e6bd4 != '\x01') goto LAB_020f9a08;
              if ((int)DAT_053e6bd8 != 0) {
                if ((int)DAT_053e6bd8 < 2) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  iVar20 = (int)DAT_053e6bd8 + -1;
                  do {
                    iVar23 = iVar20 + uVar24;
                    if (iVar23 < 0 != SCARRY4(iVar20,uVar24)) {
                      iVar23 = iVar23 + 1;
                    }
                    uVar29 = iVar23 >> 1;
                    if (*(uint **)(DAT_053e6be0 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x020f9ea4;
                    uVar28 = **(uint **)(DAT_053e6be0 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar19) goto joined_r0x020f9ea4;
                    if (uVar28 < uVar19) {
                      uVar24 = uVar29 + 1;
                    }
                    else {
                      iVar20 = uVar29 - 1;
                    }
                  } while ((int)uVar24 < iVar20);
                }
                uVar29 = uVar24;
                if ((*(uint **)(DAT_053e6be0 + (long)(int)uVar24 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053e6be0 + (long)(int)uVar24 * 8) == uVar19)) {
joined_r0x020f9ea4:
                  if (uVar29 < 4) {
                    uVar24 = *(uint *)(*(long *)(DAT_053e6be0 + (ulong)uVar29 * 8) + 4);
                    if (uVar24 < 4) {
                      DAT_053e6bc8 = '\x01';
                      DAT_053e6bcc = uVar19;
                      DAT_053e6bd0 = uVar24;
                      goto LAB_020f9a0c;
                    }
                    goto LAB_020f9a08;
                  }
                }
                uVar22 = 0;
                goto LAB_020f9a18;
              }
LAB_020f9a08:
              uVar24 = 0;
            }
LAB_020f9a0c:
            uVar22 = (undefined2)uVar24;
          }
LAB_020f9a18:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar19 = puVar31[1], uVar19 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar24 = 0;
              if ((ulong)uVar19 != 0) {
                uVar24 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar19);
              }
              if (*puVar31 <= uVar24) {
                uVar24 = 0xffffffff;
              }
              if (uVar24 < *(uint *)PTR_DAT_04bc28c8) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc28c8 + 8) + (long)(int)uVar24 * 2) = uVar22;
              }
            }
          }
          uVar19 = *puVar1;
          if (uVar19 != 0) {
            cVar21 = *PTR_DAT_04bb40b0;
            do {
              puVar16 = PTR_DAT_04bb40b0;
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
                *puVar16 = 1;
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
                uVar19 = *puVar1;
              }
              else {
                uVar24 = *(uint *)(puVar17 + 0x24);
                if (-1 < (int)uVar24) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar24) != (undefined4 *)0x0) {
                    uVar18 = *(undefined4 *)((long)puVar1 + (ulong)uVar24);
                    goto LAB_020f9bc0;
                  }
                  break;
                }
                if (uVar24 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar19;
              uVar18 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar18 = 0, puVar1 == puVar31)) goto LAB_020f9bc0;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar26 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar17 + 0x24) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar27 = (int *)(lVar37 + 4);
              while (piVar27[-1] != 0xe7ab6a6) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_020f9bbc;
              }
              iVar20 = 0;
              if (*piVar27 != -1) {
                iVar20 = *piVar27;
              }
              *(int *)(puVar17 + 0x24) = iVar20;
              uVar19 = *puVar1;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_020f9bbc:
          uVar18 = 0;
LAB_020f9bc0:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            uVar19 = FUN_020fa8b0(uVar18,0);
            if (1 < uVar19) {
              uVar19 = 0;
            }
            uVar22 = (undefined2)uVar19;
          }
          else {
            uVar19 = FUN_020fa390(uVar18,0);
            if (1 < uVar19) {
              uVar19 = 0;
            }
            uVar22 = (undefined2)uVar19;
          }
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar31 != (uint *)0x0)) &&
             ((*puVar31 != 0 &&
              ((uVar19 = puVar31[1], uVar19 != 0 && ((ulong)(ushort)puVar31[2] != 0)))))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar24 = 0;
              if ((ulong)uVar19 != 0) {
                uVar24 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar19);
              }
              if (*puVar31 <= uVar24) {
                uVar24 = 0xffffffff;
              }
              if (uVar24 < *(uint *)PTR_DAT_04bc28d0) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc28d0 + 8) + (long)(int)uVar24 * 2) = uVar22;
              }
            }
          }
          uVar19 = *puVar1;
          if (uVar19 != 0) {
            cVar21 = *PTR_DAT_04bb40b0;
            do {
              puVar16 = PTR_DAT_04bb40b0;
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *(undefined8 *)puVar17 = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar17 + 0xa0) = 0xffffffff;
                *puVar16 = 1;
                *(undefined8 *)(puVar17 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar17 + 0x98) = 0xffffffffffffffff;
                uVar19 = *puVar1;
              }
              else {
                uVar24 = *(uint *)(puVar17 + 0x28);
                if (-1 < (int)uVar24) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar24) != (undefined4 *)0x0) {
                    uVar18 = *(undefined4 *)((long)puVar1 + (ulong)uVar24);
                    goto LAB_020f9d90;
                  }
                  break;
                }
                if (uVar24 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar19;
              uVar18 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar18 = 0, puVar1 == puVar31)) goto LAB_020f9d90;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar26 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar17 + 0x28) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar27 = (int *)(lVar37 + 4);
              while (piVar27[-1] != -0x22d2d524) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_020f9d8c;
              }
              iVar20 = 0;
              if (*piVar27 != -1) {
                iVar20 = *piVar27;
              }
              *(int *)(puVar17 + 0x28) = iVar20;
              uVar19 = *puVar1;
              if (uVar19 == 0) break;
            } while( true );
          }
LAB_020f9d8c:
          uVar18 = 0;
LAB_020f9d90:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            uVar19 = FUN_020fb550(uVar18,0);
            if (2 < uVar19) {
              uVar19 = 0;
            }
            uVar22 = (undefined2)uVar19;
          }
          else {
            uVar19 = FUN_020fae70(uVar18,0);
            if (2 < uVar19) {
              uVar19 = 0;
            }
            uVar22 = (undefined2)uVar19;
          }
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar31 != (uint *)0x0)) &&
             ((*puVar31 != 0 &&
              ((uVar19 = puVar31[1], uVar19 != 0 && ((ulong)(ushort)puVar31[2] != 0)))))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar24 = 0;
              if ((ulong)uVar19 != 0) {
                uVar24 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar19);
              }
              if (*puVar31 <= uVar24) {
                uVar24 = 0xffffffff;
              }
              if (uVar24 < *(uint *)PTR_DAT_04bc28d8) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc28d8 + 8) + (long)(int)uVar24 * 2) = uVar22;
              }
            }
          }
        }
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 != uVar15);
  }
  return;
}

