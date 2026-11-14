
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c49bf0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  uint *puVar28;
  ulong uVar29;
  uint uVar30;
  
  if ((param_1 != (uint *)0x0) && (uVar14 = *param_1, uVar14 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe8,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x45,0x4c11db7);
    uVar6 = crc32b(uVar2,0xb2,0x4c11db7);
    uVar3 = crc32b(uVar3,0xa5,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar5 = crc32b(uVar5,0x61,0x4c11db7);
    uVar6 = crc32b(uVar6,0xb3,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x57,0x4c11db7);
    uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
    uVar23 = 0;
    uVar7 = crc32b(uVar7,0x65,0x4c11db7);
    uVar7 = crc32b(uVar7,0x73,0x4c11db7);
    uVar6 = crc32b(uVar6,0x8f,0x4c11db7);
    uVar5 = crc32b(uVar5,0x73,0x4c11db7);
    uVar3 = crc32b(uVar3,0xbf,0x4c11db7);
    uVar6 = crc32b(uVar6,0xa3,0x4c11db7);
    uVar7 = crc32b(uVar7,0x74,0x4c11db7);
    uVar5 = crc32b(uVar5,0x74,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe6,0x4c11db7);
    uVar4 = crc32b(uVar4,0x52,0x4c11db7);
    uVar7 = crc32b(uVar7,0x52,0x4c11db7);
    uVar5 = crc32b(uVar5,0x52,0x4c11db7);
    uVar6 = crc32b(uVar6,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb2,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar7 = crc32b(uVar7,0x69,0x4c11db7);
    uVar5 = crc32b(uVar5,0x69,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
    uVar6 = crc32b(uVar6,0x81,0x4c11db7);
    uVar4 = crc32b(uVar4,0x76,0x4c11db7);
    uVar7 = crc32b(uVar7,0x76,0x4c11db7);
    uVar5 = crc32b(uVar5,0x76,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x65,0x4c11db7);
    uVar7 = crc32b(uVar7,0x65,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar6 = crc32b(uVar6,0xaa,0x4c11db7);
    uVar8 = crc32b(uVar3,0xa3,0x4c11db7);
    uVar3 = crc32b(uVar6,0xe3,0x4c11db7);
    uVar9 = crc32b(uVar4,0x72,0x4c11db7);
    uVar3 = crc32b(uVar3,0x81,0x4c11db7);
    uVar10 = crc32b(uVar3,0x97,0x4c11db7);
    uVar11 = crc32b(uVar7,0x72,0x4c11db7);
    uVar12 = crc32b(uVar5,0x72,0x4c11db7);
    do {
      if (((uVar23 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar16 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar23 + (uint)(ushort)param_1[2] * 8 + iVar16) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          puVar21 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_01c49e38:
            uVar30 = 0;
LAB_01c49e3c:
            if ((DAT_0534d1b8 == '\x01') && (DAT_0534d1bc == uVar30)) {
              uVar20 = DAT_0534d1c0;
              if (2 < DAT_0534d1c0) goto LAB_01c4a268;
            }
            else {
              if (((DAT_0534d1f0 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_0534d1f0), iVar16 != 0)) {
                DAT_0534d1c8 = 0x300000000;
                DAT_0534d1d0 = (undefined8 *)&DAT_0534d1d8;
                __cxa_guard_release(&DAT_0534d1f0);
              }
              if ((DAT_0534d1f8 & 1) == 0) {
                DAT_0534d1f8 = 1;
                if (((DAT_0534d218 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_0534d218), iVar16 != 0)) {
                  DAT_0534d20c = 0xffffffff00000000;
                  _DAT_0534d1fc = 0xffffffff00000000;
                  DAT_0534d204 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534d218);
                }
                _DAT_0534d1fc = (ulong)~uVar10;
                iVar16 = (int)DAT_0534d1c8;
                iVar19 = DAT_0534d1c8._4_4_;
                if ((int)DAT_0534d1c8 < DAT_0534d1c8._4_4_) {
                  DAT_0534d1d0[(int)DAT_0534d1c8] = &DAT_0534d1fc;
                  iVar16 = (int)DAT_0534d1c8 + 1;
                  DAT_0534d1c8 = CONCAT44(DAT_0534d1c8._4_4_,iVar16);
                  iVar19 = DAT_0534d1c8._4_4_;
                }
                DAT_0534d204 = CONCAT44(1,~uVar8);
                if (iVar16 < iVar19) {
                  DAT_0534d1d0[iVar16] = &DAT_0534d204;
                  iVar16 = (int)DAT_0534d1c8 + 1;
                  DAT_0534d1c8 = CONCAT44(DAT_0534d1c8._4_4_,iVar16);
                  iVar19 = DAT_0534d1c8._4_4_;
                }
                uVar3 = crc32b(uVar2,0x9d,0x4c11db7);
                uVar3 = crc32b(uVar3,0xb1,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe6,0x4c11db7);
                uVar3 = crc32b(uVar3,0xb2,0x4c11db7);
                uVar3 = crc32b(uVar3,0xb3,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8f,0x4c11db7);
                uVar20 = crc32b(uVar3,0xa3,0x4c11db7);
                DAT_0534d20c = CONCAT44(2,~uVar20);
                if (iVar16 < iVar19) {
                  DAT_0534d1d0[iVar16] = &DAT_0534d20c;
                  iVar16 = (int)DAT_0534d1c8 + 1;
                  DAT_0534d1c8 = CONCAT44(DAT_0534d1c8._4_4_,iVar16);
                }
                puVar26 = DAT_0534d1d0;
                if (1 < iVar16) {
                  uVar24 = 0;
                  uVar20 = iVar16 - 1;
                  do {
                    if ((int)uVar20 <= (int)uVar24) break;
                    puVar21 = (uint *)puVar26[uVar24];
                    uVar22 = (ulong)uVar24;
                    if ((uVar20 - uVar24 & 1) == 0) {
                      puVar28 = puVar21;
                      uVar25 = uVar22;
                    }
                    else {
                      uVar25 = uVar22 + 1;
                      puVar28 = (uint *)puVar26[uVar25];
                      if (((puVar21 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar28 < *puVar21)) {
                        puVar26[uVar25] = puVar21;
                        puVar26[uVar22] = puVar28;
                        puVar28 = puVar21;
                      }
                    }
                    uVar29 = (ulong)uVar20;
                    uVar20 = uVar24;
                    if (~uVar22 + uVar29 != 0) {
                      puVar27 = puVar26 + uVar25 + 1;
                      do {
                        puVar21 = (uint *)*puVar27;
                        uVar18 = (uint)uVar25;
                        if (((puVar28 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar28 <= *puVar21)) {
                          puVar17 = (uint *)puVar27[1];
                          if (puVar21 != (uint *)0x0) goto LAB_01c4a220;
LAB_01c4a1d0:
                          puVar21 = puVar17;
                        }
                        else {
                          puVar27[-1] = puVar21;
                          *puVar27 = puVar28;
                          puVar17 = (uint *)puVar27[1];
                          puVar21 = puVar28;
                          uVar20 = uVar18;
                          if (puVar28 == (uint *)0x0) goto LAB_01c4a1d0;
LAB_01c4a220:
                          if (puVar17 == (uint *)0x0) goto LAB_01c4a1d0;
                          if (*puVar21 <= *puVar17) goto LAB_01c4a1d0;
                          uVar20 = uVar18 + 1;
                          *puVar27 = puVar17;
                          puVar27[1] = puVar21;
                        }
                        uVar25 = uVar25 + 2;
                        puVar27 = puVar27 + 2;
                        puVar28 = puVar21;
                      } while (uVar29 != uVar25);
                    }
                    if ((int)uVar20 <= (int)uVar24) break;
                    uVar25 = (ulong)uVar20;
                    puVar21 = (uint *)puVar26[uVar20];
                    uVar24 = uVar20;
                    do {
                      puVar28 = (uint *)puVar26[uVar25 - 1];
                      if (((puVar21 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar21 < *puVar28)) {
                        uVar24 = (uint)uVar25;
                        puVar26[uVar25 - 1] = puVar21;
                        puVar26[uVar25] = puVar28;
                        puVar28 = puVar21;
                      }
                      uVar25 = uVar25 - 1;
                      puVar21 = puVar28;
                    } while ((long)uVar22 < (long)uVar25);
                  } while (uVar24 != uVar20);
                }
                DAT_0534d1c4 = '\x01';
              }
              else if (DAT_0534d1c4 != '\x01') goto LAB_01c4a268;
              if ((int)DAT_0534d1c8 == 0) goto LAB_01c4a268;
              if ((int)DAT_0534d1c8 < 2) {
                uVar20 = 0;
                puVar21 = (uint *)*DAT_0534d1d0;
                if (puVar21 != (uint *)0x0) goto LAB_01c4a0b4;
LAB_01c4a24c:
                uVar24 = uVar20;
                if (uVar20 < 3) {
LAB_01c4a258:
                  uVar20 = *(uint *)(DAT_0534d1d0[uVar24] + 4);
                  if (uVar20 < 3) {
                    DAT_0534d1b8 = '\x01';
                    DAT_0534d1bc = uVar30;
                    DAT_0534d1c0 = uVar20;
                    goto LAB_01c4a26c;
                  }
                }
              }
              else {
                uVar20 = 0;
                iVar16 = (int)DAT_0534d1c8 + -1;
                do {
                  iVar19 = iVar16 + uVar20;
                  if (iVar19 < 0 != SCARRY4(iVar16,uVar20)) {
                    iVar19 = iVar19 + 1;
                  }
                  uVar24 = iVar19 >> 1;
                  if ((uint *)DAT_0534d1d0[(int)uVar24] == (uint *)0x0) goto LAB_01c4a0c4;
                  uVar18 = *(uint *)DAT_0534d1d0[(int)uVar24];
                  if (uVar18 == uVar30) goto LAB_01c4a0c4;
                  if (uVar18 < uVar30) {
                    uVar20 = uVar24 + 1;
                  }
                  else {
                    iVar16 = uVar24 - 1;
                  }
                } while ((int)uVar20 < iVar16);
                puVar21 = (uint *)DAT_0534d1d0[(int)uVar20];
                if (puVar21 == (uint *)0x0) goto LAB_01c4a24c;
LAB_01c4a0b4:
                uVar24 = uVar20;
                if (*puVar21 == uVar30) {
LAB_01c4a0c4:
                  if (2 < uVar24) goto LAB_01c4a268;
                  goto LAB_01c4a258;
                }
              }
LAB_01c4a268:
              uVar20 = 0;
            }
          }
          else {
            if ((DAT_0534d120 & 1) == 0) {
              DAT_0534d120 = 1;
              uVar22 = 0xffffffff;
              DAT_0534d124 = 0xffffffff;
              DAT_0534d128 = 0xffffffff;
LAB_01c49e30:
              if (puVar1 == puVar21) goto LAB_01c49e38;
              do {
                if (uVar22 != 0xffffffff) goto LAB_01c49f00;
                lVar13 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar21)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar1 + (lVar13 - (long)puVar21);
                if (lVar13 == 0) goto LAB_01c49f00;
                uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar21));
                DAT_0534d124 = 0xfffffffe;
                if (uVar22 == 0) goto LAB_01c49f00;
                puVar28 = (uint *)(lVar13 + 4);
                while (puVar28[-1] != 0xe8fa8b93) {
                  puVar28 = puVar28 + 2;
                  uVar22 = uVar22 - 1;
                  if (uVar22 == 0) goto LAB_01c49f00;
                }
                uVar22 = (ulong)*puVar28;
                uVar25 = 0;
                if (*puVar28 != 0xffffffff) {
                  uVar25 = uVar22;
                }
                DAT_0534d124 = (uint)uVar25;
              } while ((int)DAT_0534d124 < 0);
              puVar28 = (uint *)((long)puVar1 + uVar25);
              if (puVar28 != (uint *)0x0) goto LAB_01c49e0c;
LAB_01c49f00:
              uVar30 = 0;
              if (puVar1 != puVar21) goto LAB_01c49f0c;
              goto LAB_01c49e3c;
            }
            uVar22 = (ulong)DAT_0534d124;
            if ((int)DAT_0534d124 < 0) goto LAB_01c49e30;
            puVar28 = (uint *)((long)puVar1 + uVar22);
            if (puVar28 == (uint *)0x0) goto LAB_01c49f00;
LAB_01c49e0c:
            uVar30 = *puVar28;
            if (puVar1 == puVar21) goto LAB_01c49e3c;
LAB_01c49f0c:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar21)) == '\0') goto LAB_01c49e3c;
            if ((DAT_0534d150 == '\x01') && (DAT_0534d154 == uVar30)) {
              uVar20 = DAT_0534d158;
              if (2 < DAT_0534d158) goto LAB_01c4a61c;
            }
            else {
              if (((DAT_0534d188 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_0534d188), iVar16 != 0)) {
                DAT_0534d160 = 0x300000000;
                DAT_0534d168 = &DAT_0534d170;
                __cxa_guard_release(&DAT_0534d188);
              }
              if ((DAT_0534d190 & 1) == 0) {
                DAT_0534d190 = 1;
                if (((DAT_0534d1b0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_0534d1b0), iVar16 != 0)) {
                  DAT_0534d1a4 = 0xffffffff00000000;
                  _DAT_0534d194 = 0xffffffff00000000;
                  DAT_0534d19c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_0534d1b0);
                }
                _DAT_0534d194 = (ulong)~uVar9;
                iVar16 = (int)DAT_0534d160;
                iVar19 = DAT_0534d160._4_4_;
                if ((int)DAT_0534d160 < DAT_0534d160._4_4_) {
                  *(undefined4 **)(DAT_0534d168 + (long)(int)DAT_0534d160 * 8) = &DAT_0534d194;
                  iVar16 = (int)DAT_0534d160 + 1;
                  DAT_0534d160 = CONCAT44(DAT_0534d160._4_4_,iVar16);
                  iVar19 = DAT_0534d160._4_4_;
                }
                DAT_0534d19c = CONCAT44(1,~uVar11);
                if (iVar16 < iVar19) {
                  *(undefined8 **)(DAT_0534d168 + (long)iVar16 * 8) = &DAT_0534d19c;
                  iVar16 = (int)DAT_0534d160 + 1;
                  DAT_0534d160 = CONCAT44(DAT_0534d160._4_4_,iVar16);
                  iVar19 = DAT_0534d160._4_4_;
                }
                DAT_0534d1a4 = CONCAT44(2,~uVar12);
                if (iVar16 < iVar19) {
                  *(undefined8 **)(DAT_0534d168 + (long)iVar16 * 8) = &DAT_0534d1a4;
                  iVar16 = (int)DAT_0534d160 + 1;
                  DAT_0534d160 = CONCAT44(DAT_0534d160._4_4_,iVar16);
                }
                puVar15 = DAT_0534d168;
                if (1 < iVar16) {
                  uVar24 = 0;
                  uVar20 = iVar16 - 1;
                  do {
                    if ((int)uVar20 <= (int)uVar24) break;
                    puVar21 = *(uint **)(puVar15 + (ulong)uVar24 * 8);
                    uVar22 = (ulong)uVar24;
                    if ((uVar20 - uVar24 & 1) == 0) {
                      uVar25 = uVar22;
                      puVar28 = puVar21;
                    }
                    else {
                      uVar25 = uVar22 + 1;
                      puVar28 = *(uint **)(puVar15 + uVar25 * 8);
                      if (((puVar21 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar28 < *puVar21)) {
                        *(uint **)(puVar15 + uVar25 * 8) = puVar21;
                        *(uint **)(puVar15 + uVar22 * 8) = puVar28;
                        puVar28 = puVar21;
                      }
                    }
                    uVar29 = (ulong)uVar20;
                    uVar20 = uVar24;
                    if (~uVar22 + uVar29 != 0) {
                      puVar26 = (undefined8 *)(puVar15 + uVar25 * 8 + 8);
                      do {
                        puVar21 = (uint *)*puVar26;
                        uVar18 = (uint)uVar25;
                        if (((puVar28 == (uint *)0x0) || (puVar21 == (uint *)0x0)) ||
                           (*puVar28 <= *puVar21)) {
                          puVar17 = (uint *)puVar26[1];
                          if (puVar21 != (uint *)0x0) goto LAB_01c4a5c0;
LAB_01c4a570:
                          puVar21 = puVar17;
                        }
                        else {
                          puVar26[-1] = puVar21;
                          *puVar26 = puVar28;
                          puVar17 = (uint *)puVar26[1];
                          puVar21 = puVar28;
                          uVar20 = uVar18;
                          if (puVar28 == (uint *)0x0) goto LAB_01c4a570;
LAB_01c4a5c0:
                          if ((puVar17 == (uint *)0x0) || (*puVar21 <= *puVar17)) goto LAB_01c4a570;
                          uVar20 = uVar18 + 1;
                          *puVar26 = puVar17;
                          puVar26[1] = puVar21;
                        }
                        uVar25 = uVar25 + 2;
                        puVar26 = puVar26 + 2;
                        puVar28 = puVar21;
                      } while (uVar29 != uVar25);
                    }
                    if ((int)uVar20 <= (int)uVar24) break;
                    uVar25 = (ulong)uVar20;
                    puVar21 = *(uint **)(puVar15 + (ulong)uVar20 * 8);
                    uVar24 = uVar20;
                    do {
                      puVar28 = *(uint **)(puVar15 + uVar25 * 8 + -8);
                      if (((puVar21 != (uint *)0x0) && (puVar28 != (uint *)0x0)) &&
                         (*puVar21 < *puVar28)) {
                        uVar24 = (uint)uVar25;
                        *(uint **)(puVar15 + uVar25 * 8 + -8) = puVar21;
                        *(uint **)(puVar15 + uVar25 * 8) = puVar28;
                        puVar28 = puVar21;
                      }
                      uVar25 = uVar25 - 1;
                      puVar21 = puVar28;
                    } while ((long)uVar22 < (long)uVar25);
                  } while (uVar24 != uVar20);
                }
                DAT_0534d15c = '\x01';
              }
              else if (DAT_0534d15c != '\x01') goto LAB_01c4a61c;
              if ((int)DAT_0534d160 != 0) {
                if ((int)DAT_0534d160 < 2) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = 0;
                  iVar16 = (int)DAT_0534d160 + -1;
                  do {
                    iVar19 = iVar16 + uVar20;
                    if (iVar19 < 0 != SCARRY4(iVar16,uVar20)) {
                      iVar19 = iVar19 + 1;
                    }
                    uVar24 = iVar19 >> 1;
                    if (*(uint **)(DAT_0534d168 + (long)(int)uVar24 * 8) == (uint *)0x0)
                    goto LAB_01c4a604;
                    uVar18 = **(uint **)(DAT_0534d168 + (long)(int)uVar24 * 8);
                    if (uVar18 == uVar30) goto LAB_01c4a604;
                    if (uVar18 < uVar30) {
                      uVar20 = uVar24 + 1;
                    }
                    else {
                      iVar16 = uVar24 - 1;
                    }
                  } while ((int)uVar20 < iVar16);
                }
                uVar24 = uVar20;
                if ((*(uint **)(DAT_0534d168 + (long)(int)uVar20 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_0534d168 + (long)(int)uVar20 * 8) == uVar30)) {
LAB_01c4a604:
                  if ((uVar24 < 3) &&
                     (uVar20 = *(uint *)(*(long *)(DAT_0534d168 + (ulong)uVar24 * 8) + 4),
                     uVar20 < 3)) {
                    DAT_0534d150 = '\x01';
                    DAT_0534d154 = uVar30;
                    DAT_0534d158 = uVar20;
                    goto LAB_01c4a620;
                  }
                }
              }
LAB_01c4a61c:
              uVar20 = 0;
            }
LAB_01c4a620:
          }
LAB_01c4a26c:
          puVar21 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar21 != (uint *)0x0)) &&
             ((*puVar21 != 0 &&
              ((uVar30 = puVar21[1], uVar30 != 0 && ((ulong)(ushort)puVar21[2] != 0)))))) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar21 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar21 + lVar13 + (ulong)(ushort)puVar21[2] * 8;
            if (lVar13 != 0) {
              uVar24 = 0;
              if ((ulong)uVar30 != 0) {
                uVar24 = (uint)((ulong)((long)puVar1 - lVar13) / (ulong)uVar30);
              }
              if (*puVar21 <= uVar24) {
                uVar24 = 0xffffffff;
              }
              if (uVar24 < DAT_0534d130) {
                *(short *)(DAT_0534d138 + (long)(int)uVar24 * 2) = (short)uVar20;
              }
            }
          }
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar14);
  }
  return;
}

