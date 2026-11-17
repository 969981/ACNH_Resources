
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a458d0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint *puVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  
  if ((param_1 != (uint *)0x0) && (uVar12 = *param_1, uVar12 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x44,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
    uVar5 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar6 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar21 = 0;
    uVar5 = crc32b(uVar5,0xe5,0x4c11db7);
    uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x75,0x4c11db7);
    uVar5 = crc32b(uVar5,0xb8,0x4c11db7);
    uVar6 = crc32b(uVar6,0x75,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
    uVar7 = crc32b(uVar4,0x6d,0x4c11db7);
    uVar4 = crc32b(uVar5,0xb8,0x4c11db7);
    uVar5 = crc32b(uVar6,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
    uVar5 = crc32b(uVar5,0x48,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar4 = crc32b(uVar4,0xa5,0x4c11db7);
    uVar5 = crc32b(uVar5,0x61,0x4c11db7);
    uVar8 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar3 = crc32b(uVar4,0xbd,0x4c11db7);
    uVar4 = crc32b(uVar5,0x6e,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
    uVar4 = crc32b(uVar4,100,0x4c11db7);
    uVar3 = crc32b(uVar3,0x99,0x4c11db7);
    uVar9 = crc32b(uVar4,0x73,0x4c11db7);
    uVar10 = crc32b(uVar3,0xa8,0x4c11db7);
    do {
      if (((uVar21 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar21 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          puVar20 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_02a45ae0:
            uVar26 = 0;
LAB_02a45ae4:
            if ((DAT_055f6548 == '\x01') && (DAT_055f654c == uVar26)) {
              uVar19 = DAT_055f6550;
              if (3 < DAT_055f6550) goto LAB_02a45ff8;
            }
            else {
              if (((DAT_055f6588 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_055f6588), iVar14 != 0)) {
                DAT_055f6558 = 0x400000000;
                DAT_055f6560 = (undefined8 *)&DAT_055f6568;
                __cxa_guard_release(&DAT_055f6588);
              }
              if ((DAT_055f6590 & 1) == 0) {
                DAT_055f6590 = 1;
                if (((DAT_055f65b8 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_055f65b8), iVar14 != 0)) {
                  _DAT_055f6594 = 0xffffffff00000000;
                  DAT_055f659c = 0xffffffff00000000;
                  DAT_055f65a4 = 0xffffffff00000000;
                  DAT_055f65ac = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055f65b8);
                }
                _DAT_055f6594 = (ulong)~uVar10;
                iVar14 = (int)DAT_055f6558;
                iVar18 = DAT_055f6558._4_4_;
                if ((int)DAT_055f6558 < DAT_055f6558._4_4_) {
                  DAT_055f6560[(int)DAT_055f6558] = &DAT_055f6594;
                  iVar14 = (int)DAT_055f6558 + 1;
                  DAT_055f6558 = CONCAT44(DAT_055f6558._4_4_,iVar14);
                  iVar18 = DAT_055f6558._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar3 = crc32b(uVar3,0x89,0x4c11db7);
                uVar3 = crc32b(uVar3,0x93,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe6,0x4c11db7);
                uVar3 = crc32b(uVar3,0xa5,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbd,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0x99,0x4c11db7);
                uVar19 = crc32b(uVar3,0xa8,0x4c11db7);
                DAT_055f659c = CONCAT44(1,~uVar19);
                if (iVar14 < iVar18) {
                  DAT_055f6560[iVar14] = &DAT_055f659c;
                  iVar14 = (int)DAT_055f6558 + 1;
                  DAT_055f6558 = CONCAT44(DAT_055f6558._4_4_,iVar14);
                  iVar18 = DAT_055f6558._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0x89,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xa9,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xa0,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x82,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbb,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x83,0x4c11db7);
                uVar19 = crc32b(uVar3,0x88,0x4c11db7);
                DAT_055f65a4 = CONCAT44(2,~uVar19);
                if (iVar14 < iVar18) {
                  DAT_055f6560[iVar14] = &DAT_055f65a4;
                  iVar14 = (int)DAT_055f6558 + 1;
                  DAT_055f6558 = CONCAT44(DAT_055f6558._4_4_,iVar14);
                  iVar18 = DAT_055f6558._4_4_;
                }
                uVar3 = crc32b(uVar2,0xa3,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbc,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbe,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe6,0x4c11db7);
                uVar3 = crc32b(uVar3,0xa5,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbd,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0x99,0x4c11db7);
                uVar19 = crc32b(uVar3,0xa8,0x4c11db7);
                DAT_055f65ac = CONCAT44(3,~uVar19);
                if (iVar14 < iVar18) {
                  DAT_055f6560[iVar14] = &DAT_055f65ac;
                  iVar14 = (int)DAT_055f6558 + 1;
                  DAT_055f6558 = CONCAT44(DAT_055f6558._4_4_,iVar14);
                }
                puVar28 = DAT_055f6560;
                if (1 < iVar14) {
                  uVar15 = 0;
                  uVar19 = iVar14 - 1;
                  do {
                    if ((int)uVar19 <= (int)uVar15) break;
                    puVar20 = (uint *)puVar28[uVar15];
                    uVar22 = (ulong)uVar15;
                    if ((uVar19 - uVar15 & 1) == 0) {
                      uVar23 = uVar22;
                      puVar25 = puVar20;
                    }
                    else {
                      uVar23 = uVar22 + 1;
                      puVar25 = (uint *)puVar28[uVar23];
                      if (((puVar20 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar20)) {
                        puVar28[uVar23] = puVar20;
                        puVar28[uVar22] = puVar25;
                        puVar25 = puVar20;
                      }
                    }
                    uVar27 = (ulong)uVar19;
                    uVar19 = uVar15;
                    if (~uVar22 + uVar27 != 0) {
                      puVar24 = puVar28 + uVar23 + 1;
                      do {
                        puVar20 = (uint *)*puVar24;
                        uVar16 = (uint)uVar23;
                        if (((puVar25 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar20)) {
                          puVar17 = (uint *)puVar24[1];
                          if (puVar20 != (uint *)0x0) goto LAB_02a45fb0;
LAB_02a45f60:
                          puVar20 = puVar17;
                        }
                        else {
                          puVar24[-1] = puVar20;
                          *puVar24 = puVar25;
                          puVar17 = (uint *)puVar24[1];
                          puVar20 = puVar25;
                          uVar19 = uVar16;
                          if (puVar25 == (uint *)0x0) goto LAB_02a45f60;
LAB_02a45fb0:
                          if (puVar17 == (uint *)0x0) goto LAB_02a45f60;
                          if (*puVar20 <= *puVar17) goto LAB_02a45f60;
                          uVar19 = uVar16 + 1;
                          *puVar24 = puVar17;
                          puVar24[1] = puVar20;
                        }
                        uVar23 = uVar23 + 2;
                        puVar24 = puVar24 + 2;
                        puVar25 = puVar20;
                      } while (uVar27 != uVar23);
                    }
                    if ((int)uVar19 <= (int)uVar15) break;
                    uVar23 = (ulong)uVar19;
                    puVar20 = (uint *)puVar28[uVar19];
                    uVar15 = uVar19;
                    do {
                      puVar25 = (uint *)puVar28[uVar23 - 1];
                      if (((puVar20 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar20 < *puVar25)) {
                        uVar15 = (uint)uVar23;
                        puVar28[uVar23 - 1] = puVar20;
                        puVar28[uVar23] = puVar25;
                        puVar25 = puVar20;
                      }
                      uVar23 = uVar23 - 1;
                      puVar20 = puVar25;
                    } while ((long)uVar22 < (long)uVar23);
                  } while (uVar15 != uVar19);
                }
                DAT_055f6554 = '\x01';
              }
              else if (DAT_055f6554 != '\x01') goto LAB_02a45ff8;
              if ((int)DAT_055f6558 == 0) goto LAB_02a45ff8;
              if ((int)DAT_055f6558 < 2) {
                uVar19 = 0;
                puVar20 = (uint *)*DAT_055f6560;
                if (puVar20 != (uint *)0x0) goto LAB_02a45e44;
LAB_02a45fdc:
                uVar15 = uVar19;
                if (uVar19 < 4) {
LAB_02a45fe8:
                  uVar19 = *(uint *)(DAT_055f6560[uVar15] + 4);
                  if (uVar19 < 4) {
                    DAT_055f6548 = '\x01';
                    DAT_055f654c = uVar26;
                    DAT_055f6550 = uVar19;
                    goto LAB_02a45ffc;
                  }
                }
              }
              else {
                uVar19 = 0;
                iVar14 = (int)DAT_055f6558 + -1;
                do {
                  iVar18 = iVar14 + uVar19;
                  if (iVar18 < 0 != SCARRY4(iVar14,uVar19)) {
                    iVar18 = iVar18 + 1;
                  }
                  uVar15 = iVar18 >> 1;
                  if ((uint *)DAT_055f6560[(int)uVar15] == (uint *)0x0) goto LAB_02a45e54;
                  uVar16 = *(uint *)DAT_055f6560[(int)uVar15];
                  if (uVar16 == uVar26) goto LAB_02a45e54;
                  if (uVar16 < uVar26) {
                    uVar19 = uVar15 + 1;
                  }
                  else {
                    iVar14 = uVar15 - 1;
                  }
                } while ((int)uVar19 < iVar14);
                puVar20 = (uint *)DAT_055f6560[(int)uVar19];
                if (puVar20 == (uint *)0x0) goto LAB_02a45fdc;
LAB_02a45e44:
                uVar15 = uVar19;
                if (*puVar20 == uVar26) {
LAB_02a45e54:
                  if (3 < uVar15) goto LAB_02a45ff8;
                  goto LAB_02a45fe8;
                }
              }
LAB_02a45ff8:
              uVar19 = 0;
            }
          }
          else {
            if ((DAT_055f5f68 & 1) == 0) {
              DAT_055f5f68 = 1;
              DAT_055f5f6c = 0xffffffffffffffff;
              DAT_055f5f74 = 0xffffffffffffffff;
              uVar22 = 0xffffffff;
              DAT_055f5f7c = 0xffffffff;
LAB_02a45ad8:
              if (puVar1 == puVar20) goto LAB_02a45ae0;
              do {
                if (uVar22 != 0xffffffff) goto LAB_02a45bb0;
                lVar11 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar20)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar1 + (lVar11 - (long)puVar20);
                if (lVar11 == 0) goto LAB_02a45bb0;
                uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar20));
                DAT_055f5f6c = CONCAT44(DAT_055f5f6c._4_4_,0xfffffffe);
                if (uVar22 == 0) goto LAB_02a45bb0;
                puVar25 = (uint *)(lVar11 + 4);
                while (puVar25[-1] != 0x64bc65e7) {
                  puVar25 = puVar25 + 2;
                  uVar22 = uVar22 - 1;
                  if (uVar22 == 0) goto LAB_02a45bb0;
                }
                uVar22 = (ulong)*puVar25;
                uVar23 = 0;
                if (*puVar25 != 0xffffffff) {
                  uVar23 = uVar22;
                }
                DAT_055f5f6c = CONCAT44(DAT_055f5f6c._4_4_,(int)uVar23);
              } while ((int)uVar23 < 0);
              puVar25 = (uint *)((long)puVar1 + uVar23);
              if (puVar25 != (uint *)0x0) goto LAB_02a45aac;
LAB_02a45bb0:
              uVar26 = 0;
              if (puVar1 != puVar20) goto LAB_02a45bbc;
              goto LAB_02a45ae4;
            }
            uVar22 = DAT_055f5f6c & 0xffffffff;
            if ((int)DAT_055f5f6c < 0) goto LAB_02a45ad8;
            puVar25 = (uint *)((long)puVar1 + uVar22);
            if (puVar25 == (uint *)0x0) goto LAB_02a45bb0;
LAB_02a45aac:
            uVar26 = *puVar25;
            if (puVar1 == puVar20) goto LAB_02a45ae4;
LAB_02a45bbc:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar20)) == '\0') goto LAB_02a45ae4;
            if ((DAT_055f64d0 == '\x01') && (DAT_055f64d4 == uVar26)) {
              uVar19 = DAT_055f64d8;
              if (3 < DAT_055f64d8) goto LAB_02a463ec;
            }
            else {
              if (((DAT_055f6510 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_055f6510), iVar14 != 0)) {
                DAT_055f64e0 = 0x400000000;
                DAT_055f64e8 = &DAT_055f64f0;
                __cxa_guard_release(&DAT_055f6510);
              }
              if ((DAT_055f6518 & 1) == 0) {
                DAT_055f6518 = 1;
                if (((DAT_055f6540 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_055f6540), iVar14 != 0)) {
                  _DAT_055f651c = 0xffffffff00000000;
                  DAT_055f6524 = 0xffffffff00000000;
                  DAT_055f652c = 0xffffffff00000000;
                  DAT_055f6534 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_055f6540);
                }
                _DAT_055f651c = (ulong)~uVar8;
                iVar14 = (int)DAT_055f64e0;
                iVar18 = DAT_055f64e0._4_4_;
                if ((int)DAT_055f64e0 < DAT_055f64e0._4_4_) {
                  *(undefined4 **)(DAT_055f64e8 + (long)(int)DAT_055f64e0 * 8) = &DAT_055f651c;
                  iVar14 = (int)DAT_055f64e0 + 1;
                  DAT_055f64e0 = CONCAT44(DAT_055f64e0._4_4_,iVar14);
                  iVar18 = DAT_055f64e0._4_4_;
                }
                DAT_055f6524 = CONCAT44(1,~uVar7);
                if (iVar14 < iVar18) {
                  *(undefined8 **)(DAT_055f64e8 + (long)iVar14 * 8) = &DAT_055f6524;
                  iVar14 = (int)DAT_055f64e0 + 1;
                  DAT_055f64e0 = CONCAT44(DAT_055f64e0._4_4_,iVar14);
                  iVar18 = DAT_055f64e0._4_4_;
                }
                uVar3 = crc32b(uVar7,0x53,0x4c11db7);
                uVar3 = crc32b(uVar3,0x65,0x4c11db7);
                uVar19 = crc32b(uVar3,0x74,0x4c11db7);
                DAT_055f652c = CONCAT44(2,~uVar19);
                if (iVar14 < iVar18) {
                  *(undefined8 **)(DAT_055f64e8 + (long)iVar14 * 8) = &DAT_055f652c;
                  iVar14 = (int)DAT_055f64e0 + 1;
                  DAT_055f64e0 = CONCAT44(DAT_055f64e0._4_4_,iVar14);
                  iVar18 = DAT_055f64e0._4_4_;
                }
                DAT_055f6534 = CONCAT44(3,~uVar9);
                if (iVar14 < iVar18) {
                  *(undefined8 **)(DAT_055f64e8 + (long)iVar14 * 8) = &DAT_055f6534;
                  iVar14 = (int)DAT_055f64e0 + 1;
                  DAT_055f64e0 = CONCAT44(DAT_055f64e0._4_4_,iVar14);
                }
                puVar13 = DAT_055f64e8;
                if (1 < iVar14) {
                  uVar15 = 0;
                  uVar19 = iVar14 - 1;
                  do {
                    if ((int)uVar19 <= (int)uVar15) break;
                    puVar20 = *(uint **)(puVar13 + (ulong)uVar15 * 8);
                    uVar22 = (ulong)uVar15;
                    if ((uVar19 - uVar15 & 1) == 0) {
                      uVar23 = uVar22;
                      puVar25 = puVar20;
                    }
                    else {
                      uVar23 = uVar22 + 1;
                      puVar25 = *(uint **)(puVar13 + uVar23 * 8);
                      if (((puVar20 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar25 < *puVar20)) {
                        *(uint **)(puVar13 + uVar23 * 8) = puVar20;
                        *(uint **)(puVar13 + uVar22 * 8) = puVar25;
                        puVar25 = puVar20;
                      }
                    }
                    uVar27 = (ulong)uVar19;
                    uVar19 = uVar15;
                    if (~uVar22 + uVar27 != 0) {
                      puVar28 = (undefined8 *)(puVar13 + uVar23 * 8 + 8);
                      do {
                        puVar20 = (uint *)*puVar28;
                        uVar16 = (uint)uVar23;
                        if (((puVar25 == (uint *)0x0) || (puVar20 == (uint *)0x0)) ||
                           (*puVar25 <= *puVar20)) {
                          puVar17 = (uint *)puVar28[1];
                          if (puVar20 != (uint *)0x0) goto LAB_02a46390;
LAB_02a46340:
                          puVar20 = puVar17;
                        }
                        else {
                          puVar28[-1] = puVar20;
                          *puVar28 = puVar25;
                          puVar17 = (uint *)puVar28[1];
                          puVar20 = puVar25;
                          uVar19 = uVar16;
                          if (puVar25 == (uint *)0x0) goto LAB_02a46340;
LAB_02a46390:
                          if ((puVar17 == (uint *)0x0) || (*puVar20 <= *puVar17)) goto LAB_02a46340;
                          uVar19 = uVar16 + 1;
                          *puVar28 = puVar17;
                          puVar28[1] = puVar20;
                        }
                        uVar23 = uVar23 + 2;
                        puVar28 = puVar28 + 2;
                        puVar25 = puVar20;
                      } while (uVar27 != uVar23);
                    }
                    if ((int)uVar19 <= (int)uVar15) break;
                    uVar23 = (ulong)uVar19;
                    puVar20 = *(uint **)(puVar13 + (ulong)uVar19 * 8);
                    uVar15 = uVar19;
                    do {
                      puVar25 = *(uint **)(puVar13 + uVar23 * 8 + -8);
                      if (((puVar20 != (uint *)0x0) && (puVar25 != (uint *)0x0)) &&
                         (*puVar20 < *puVar25)) {
                        uVar15 = (uint)uVar23;
                        *(uint **)(puVar13 + uVar23 * 8 + -8) = puVar20;
                        *(uint **)(puVar13 + uVar23 * 8) = puVar25;
                        puVar25 = puVar20;
                      }
                      uVar23 = uVar23 - 1;
                      puVar20 = puVar25;
                    } while ((long)uVar22 < (long)uVar23);
                  } while (uVar15 != uVar19);
                }
                DAT_055f64dc = '\x01';
              }
              else if (DAT_055f64dc != '\x01') goto LAB_02a463ec;
              if ((int)DAT_055f64e0 != 0) {
                if ((int)DAT_055f64e0 < 2) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = 0;
                  iVar14 = (int)DAT_055f64e0 + -1;
                  do {
                    iVar18 = iVar14 + uVar19;
                    if (iVar18 < 0 != SCARRY4(iVar14,uVar19)) {
                      iVar18 = iVar18 + 1;
                    }
                    uVar15 = iVar18 >> 1;
                    if (*(uint **)(DAT_055f64e8 + (long)(int)uVar15 * 8) == (uint *)0x0)
                    goto LAB_02a463d4;
                    uVar16 = **(uint **)(DAT_055f64e8 + (long)(int)uVar15 * 8);
                    if (uVar16 == uVar26) goto LAB_02a463d4;
                    if (uVar16 < uVar26) {
                      uVar19 = uVar15 + 1;
                    }
                    else {
                      iVar14 = uVar15 - 1;
                    }
                  } while ((int)uVar19 < iVar14);
                }
                uVar15 = uVar19;
                if ((*(uint **)(DAT_055f64e8 + (long)(int)uVar19 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_055f64e8 + (long)(int)uVar19 * 8) == uVar26)) {
LAB_02a463d4:
                  if ((uVar15 < 4) &&
                     (uVar19 = *(uint *)(*(long *)(DAT_055f64e8 + (ulong)uVar15 * 8) + 4),
                     uVar19 < 4)) {
                    DAT_055f64d0 = '\x01';
                    DAT_055f64d4 = uVar26;
                    DAT_055f64d8 = uVar19;
                    goto LAB_02a463f0;
                  }
                }
              }
LAB_02a463ec:
              uVar19 = 0;
            }
LAB_02a463f0:
          }
LAB_02a45ffc:
          puVar20 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar20 != (uint *)0x0)) &&
             ((*puVar20 != 0 &&
              ((uVar26 = puVar20[1], uVar26 != 0 && ((ulong)(ushort)puVar20[2] != 0)))))) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar20 + lVar11 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar11 != 0) {
              uVar15 = 0;
              if ((ulong)uVar26 != 0) {
                uVar15 = (uint)((ulong)((long)puVar1 - lVar11) / (ulong)uVar26);
              }
              if (*puVar20 <= uVar15) {
                uVar15 = 0xffffffff;
              }
              if (uVar15 < DAT_055f5f80) {
                *(short *)(DAT_055f5f88 + (long)(int)uVar15 * 2) = (short)uVar19;
              }
            }
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar12);
  }
  return;
}

