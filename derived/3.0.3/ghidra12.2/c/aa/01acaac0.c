
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acaac0(uint *param_1)

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
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined *puVar15;
  int iVar16;
  uint *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  
  if ((param_1 != (uint *)0x0) && (uVar14 = *param_1, uVar14 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe8,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa3,0x4c11db7);
    uVar3 = crc32b(uVar3,0xad,0x4c11db7);
    uVar6 = crc32b(0xffffffff,0x50,0x4c11db7);
    uVar2 = crc32b(uVar2,0x8f,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar3 = crc32b(uVar3,0xa3,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar24 = 0;
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar6 = crc32b(uVar6,0x75,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
    uVar5 = crc32b(uVar5,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0x82,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0xaf,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb7,0x4c11db7);
    uVar7 = crc32b(uVar3,0x80,0x4c11db7);
    uVar3 = crc32b(uVar4,0x72,0x4c11db7);
    uVar4 = crc32b(uVar6,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,0x70,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x53,0x4c11db7);
    uVar2 = crc32b(uVar2,0x83,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0xaa,0x4c11db7);
    uVar3 = crc32b(uVar3,0x72,0x4c11db7);
    uVar5 = crc32b(uVar5,0x73,0x4c11db7);
    uVar4 = crc32b(uVar4,0x73,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
    uVar8 = crc32b(uVar4,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0x83,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar9 = crc32b(uVar5,0x6e,0x4c11db7);
    uVar10 = crc32b(uVar3,0x73,0x4c11db7);
    uVar2 = crc32b(uVar2,0xbc,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x82,0x4c11db7);
    uVar11 = crc32b(uVar2,0xba,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar12 = crc32b(uVar2,0x65,0x4c11db7);
    do {
      uVar26 = 0xffffffff;
      if (((uVar24 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar16 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar24 + (uint)(ushort)param_1[2] * 8 + iVar16) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          puVar23 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_01acad24:
            uVar29 = 0;
LAB_01acad28:
            if ((DAT_05325cb0 == '\x01') && (DAT_05325cb4 == uVar29)) {
              uVar22 = DAT_05325cb8;
              if (3 < DAT_05325cb8) goto LAB_01acb1a8;
            }
            else {
              if (((DAT_05325cf0 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05325cf0), iVar16 != 0)) {
                DAT_05325cc0 = 0x400000000;
                DAT_05325cc8 = (undefined8 *)&DAT_05325cd0;
                __cxa_guard_release(&DAT_05325cf0);
              }
              if ((DAT_05325cf8 & 1) == 0) {
                DAT_05325cf8 = 1;
                if (((DAT_05325d20 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05325d20), iVar16 != 0)) {
                  _DAT_05325cfc = 0xffffffff00000000;
                  DAT_05325d04 = 0xffffffff00000000;
                  DAT_05325d0c = 0xffffffff00000000;
                  DAT_05325d14 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05325d20);
                }
                _DAT_05325cfc = (ulong)~uVar7;
                iVar16 = (int)DAT_05325cc0;
                iVar21 = DAT_05325cc0._4_4_;
                if ((int)DAT_05325cc0 < DAT_05325cc0._4_4_) {
                  DAT_05325cc8[(int)DAT_05325cc0] = &DAT_05325cfc;
                  iVar16 = (int)DAT_05325cc0 + 1;
                  DAT_05325cc0 = CONCAT44(DAT_05325cc0._4_4_,iVar16);
                  iVar21 = DAT_05325cc0._4_4_;
                }
                DAT_05325d04 = CONCAT44(1,~uVar11);
                if (iVar16 < iVar21) {
                  DAT_05325cc8[iVar16] = &DAT_05325d04;
                  iVar16 = (int)DAT_05325cc0 + 1;
                  DAT_05325cc0 = CONCAT44(DAT_05325cc0._4_4_,iVar16);
                  iVar21 = DAT_05325cc0._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe7,0x4c11db7);
                uVar2 = crc32b(uVar2,0x9b,0x4c11db7);
                uVar2 = crc32b(uVar2,0xae,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe7,0x4c11db7);
                uVar2 = crc32b(uVar2,0x9a,0x4c11db7);
                uVar22 = crc32b(uVar2,0x84,0x4c11db7);
                DAT_05325d0c = CONCAT44(2,~uVar22);
                if (iVar16 < iVar21) {
                  DAT_05325cc8[iVar16] = &DAT_05325d0c;
                  iVar16 = (int)DAT_05325cc0 + 1;
                  DAT_05325cc0 = CONCAT44(DAT_05325cc0._4_4_,iVar16);
                  iVar21 = DAT_05325cc0._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar2 = crc32b(uVar2,0xaa,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x81,0x4c11db7);
                uVar22 = crc32b(uVar2,0x97,0x4c11db7);
                DAT_05325d14 = CONCAT44(3,~uVar22);
                if (iVar16 < iVar21) {
                  DAT_05325cc8[iVar16] = &DAT_05325d14;
                  iVar16 = (int)DAT_05325cc0 + 1;
                  DAT_05325cc0 = CONCAT44(DAT_05325cc0._4_4_,iVar16);
                }
                puVar20 = DAT_05325cc8;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar22 = iVar16 - 1;
                  do {
                    if ((int)uVar22 <= (int)uVar25) break;
                    puVar23 = (uint *)puVar20[uVar25];
                    uVar26 = (ulong)uVar25;
                    if ((uVar22 - uVar25 & 1) == 0) {
                      puVar19 = puVar23;
                      uVar27 = uVar26;
                    }
                    else {
                      uVar27 = uVar26 + 1;
                      puVar19 = (uint *)puVar20[uVar27];
                      if (((puVar23 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar19 < *puVar23)) {
                        puVar20[uVar27] = puVar23;
                        puVar20[uVar26] = puVar19;
                        puVar19 = puVar23;
                      }
                    }
                    uVar28 = (ulong)uVar22;
                    uVar22 = uVar25;
                    if (~uVar26 + uVar28 != 0) {
                      puVar18 = puVar20 + uVar27 + 1;
                      do {
                        puVar23 = (uint *)*puVar18;
                        uVar30 = (uint)uVar27;
                        if (((puVar19 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar19 <= *puVar23)) {
                          puVar17 = (uint *)puVar18[1];
                          if (puVar23 != (uint *)0x0) goto LAB_01acb160;
LAB_01acb110:
                          puVar23 = puVar17;
                        }
                        else {
                          puVar18[-1] = puVar23;
                          *puVar18 = puVar19;
                          puVar17 = (uint *)puVar18[1];
                          puVar23 = puVar19;
                          uVar22 = uVar30;
                          if (puVar19 == (uint *)0x0) goto LAB_01acb110;
LAB_01acb160:
                          if (puVar17 == (uint *)0x0) goto LAB_01acb110;
                          if (*puVar23 <= *puVar17) goto LAB_01acb110;
                          uVar22 = uVar30 + 1;
                          *puVar18 = puVar17;
                          puVar18[1] = puVar23;
                        }
                        uVar27 = uVar27 + 2;
                        puVar18 = puVar18 + 2;
                        puVar19 = puVar23;
                      } while (uVar28 != uVar27);
                    }
                    if ((int)uVar22 <= (int)uVar25) break;
                    uVar27 = (ulong)uVar22;
                    puVar23 = (uint *)puVar20[uVar22];
                    uVar25 = uVar22;
                    do {
                      puVar19 = (uint *)puVar20[uVar27 - 1];
                      if (((puVar23 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar23 < *puVar19)) {
                        uVar25 = (uint)uVar27;
                        puVar20[uVar27 - 1] = puVar23;
                        puVar20[uVar27] = puVar19;
                        puVar19 = puVar23;
                      }
                      uVar27 = uVar27 - 1;
                      puVar23 = puVar19;
                    } while ((long)uVar26 < (long)uVar27);
                  } while (uVar25 != uVar22);
                }
                DAT_05325cbc = '\x01';
              }
              else if (DAT_05325cbc != '\x01') goto LAB_01acb1a8;
              if ((int)DAT_05325cc0 == 0) goto LAB_01acb1a8;
              if ((int)DAT_05325cc0 < 2) {
                uVar22 = 0;
                puVar23 = (uint *)*DAT_05325cc8;
                if (puVar23 != (uint *)0x0) goto LAB_01acaff4;
LAB_01acb18c:
                uVar25 = uVar22;
                if (uVar22 < 4) {
LAB_01acb198:
                  uVar22 = *(uint *)(DAT_05325cc8[uVar25] + 4);
                  if (uVar22 < 4) {
                    DAT_05325cb0 = '\x01';
                    DAT_05325cb4 = uVar29;
                    DAT_05325cb8 = uVar22;
                    goto LAB_01acb1ac;
                  }
                }
              }
              else {
                uVar22 = 0;
                iVar16 = (int)DAT_05325cc0 + -1;
                do {
                  iVar21 = iVar16 + uVar22;
                  if (iVar21 < 0 != SCARRY4(iVar16,uVar22)) {
                    iVar21 = iVar21 + 1;
                  }
                  uVar25 = iVar21 >> 1;
                  if ((uint *)DAT_05325cc8[(int)uVar25] == (uint *)0x0) goto LAB_01acb004;
                  uVar30 = *(uint *)DAT_05325cc8[(int)uVar25];
                  if (uVar30 == uVar29) goto LAB_01acb004;
                  if (uVar30 < uVar29) {
                    uVar22 = uVar25 + 1;
                  }
                  else {
                    iVar16 = uVar25 - 1;
                  }
                } while ((int)uVar22 < iVar16);
                puVar23 = (uint *)DAT_05325cc8[(int)uVar22];
                if (puVar23 == (uint *)0x0) goto LAB_01acb18c;
LAB_01acaff4:
                uVar25 = uVar22;
                if (*puVar23 == uVar29) {
LAB_01acb004:
                  if (3 < uVar25) goto LAB_01acb1a8;
                  goto LAB_01acb198;
                }
              }
LAB_01acb1a8:
              uVar22 = 0;
            }
          }
          else {
            if ((DAT_05300754 & 1) == 0) {
              DAT_05300754 = 1;
              DAT_05300758 = 0xffffffffffffffff;
              DAT_05300760 = 0xffffffffffffffff;
LAB_01acad1c:
              if (puVar1 == puVar23) goto LAB_01acad24;
              do {
                if (uVar26 != 0xffffffff) goto LAB_01acadf0;
                lVar13 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar23)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar1 + (lVar13 - (long)puVar23);
                if (lVar13 == 0) goto LAB_01acadf0;
                uVar26 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar23));
                DAT_05300758 = CONCAT44(DAT_05300758._4_4_,0xfffffffe);
                if (uVar26 == 0) goto LAB_01acadf0;
                puVar19 = (uint *)(lVar13 + 4);
                while (puVar19[-1] != 0xa8eacf70) {
                  puVar19 = puVar19 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_01acadf0;
                }
                uVar26 = (ulong)*puVar19;
                uVar27 = 0;
                if (*puVar19 != 0xffffffff) {
                  uVar27 = uVar26;
                }
                DAT_05300758 = CONCAT44(DAT_05300758._4_4_,(int)uVar27);
              } while ((int)uVar27 < 0);
              puVar19 = (uint *)((long)puVar1 + uVar27);
              if (puVar19 != (uint *)0x0) goto LAB_01acad00;
LAB_01acadf0:
              uVar29 = 0;
              if (puVar1 != puVar23) goto LAB_01acadfc;
              goto LAB_01acad28;
            }
            uVar26 = DAT_05300758 & 0xffffffff;
            if ((int)DAT_05300758 < 0) goto LAB_01acad1c;
            puVar19 = (uint *)((long)puVar1 + uVar26);
            if (puVar19 == (uint *)0x0) goto LAB_01acadf0;
LAB_01acad00:
            uVar29 = *puVar19;
            if (puVar1 == puVar23) goto LAB_01acad28;
LAB_01acadfc:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar23)) == '\0') goto LAB_01acad28;
            if ((DAT_05325c38 == '\x01') && (DAT_05325c3c == uVar29)) {
              uVar22 = DAT_05325c40;
              if (3 < DAT_05325c40) goto LAB_01acb5ac;
            }
            else {
              if (((DAT_05325c78 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_05325c78), iVar16 != 0)) {
                DAT_05325c48 = 0x400000000;
                DAT_05325c50 = &DAT_05325c58;
                __cxa_guard_release(&DAT_05325c78);
              }
              if ((DAT_05325c80 & 1) == 0) {
                DAT_05325c80 = 1;
                if (((DAT_05325ca8 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_05325ca8), iVar16 != 0)) {
                  _DAT_05325c84 = 0xffffffff00000000;
                  DAT_05325c8c = 0xffffffff00000000;
                  DAT_05325c94 = 0xffffffff00000000;
                  DAT_05325c9c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05325ca8);
                }
                _DAT_05325c84 = (ulong)~uVar9;
                iVar16 = (int)DAT_05325c48;
                iVar21 = DAT_05325c48._4_4_;
                if ((int)DAT_05325c48 < DAT_05325c48._4_4_) {
                  *(undefined4 **)(DAT_05325c50 + (long)(int)DAT_05325c48 * 8) = &DAT_05325c84;
                  iVar16 = (int)DAT_05325c48 + 1;
                  DAT_05325c48 = CONCAT44(DAT_05325c48._4_4_,iVar16);
                  iVar21 = DAT_05325c48._4_4_;
                }
                DAT_05325c8c = CONCAT44(1,~uVar10);
                if (iVar16 < iVar21) {
                  *(undefined8 **)(DAT_05325c50 + (long)iVar16 * 8) = &DAT_05325c8c;
                  iVar16 = (int)DAT_05325c48 + 1;
                  DAT_05325c48 = CONCAT44(DAT_05325c48._4_4_,iVar16);
                  iVar21 = DAT_05325c48._4_4_;
                }
                DAT_05325c94 = CONCAT44(2,~uVar8);
                if (iVar16 < iVar21) {
                  *(undefined8 **)(DAT_05325c50 + (long)iVar16 * 8) = &DAT_05325c94;
                  iVar16 = (int)DAT_05325c48 + 1;
                  DAT_05325c48 = CONCAT44(DAT_05325c48._4_4_,iVar16);
                  iVar21 = DAT_05325c48._4_4_;
                }
                DAT_05325c9c = CONCAT44(3,~uVar12);
                if (iVar16 < iVar21) {
                  *(undefined8 **)(DAT_05325c50 + (long)iVar16 * 8) = &DAT_05325c9c;
                  iVar16 = (int)DAT_05325c48 + 1;
                  DAT_05325c48 = CONCAT44(DAT_05325c48._4_4_,iVar16);
                }
                puVar15 = DAT_05325c50;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar22 = iVar16 - 1;
                  do {
                    if ((int)uVar22 <= (int)uVar25) break;
                    puVar23 = *(uint **)(puVar15 + (ulong)uVar25 * 8);
                    uVar26 = (ulong)uVar25;
                    if ((uVar22 - uVar25 & 1) == 0) {
                      puVar19 = puVar23;
                      uVar27 = uVar26;
                    }
                    else {
                      uVar27 = uVar26 + 1;
                      puVar19 = *(uint **)(puVar15 + uVar27 * 8);
                      if (((puVar23 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar19 < *puVar23)) {
                        *(uint **)(puVar15 + uVar27 * 8) = puVar23;
                        *(uint **)(puVar15 + uVar26 * 8) = puVar19;
                        puVar19 = puVar23;
                      }
                    }
                    uVar28 = (ulong)uVar22;
                    uVar22 = uVar25;
                    if (~uVar26 + uVar28 != 0) {
                      puVar20 = (undefined8 *)(puVar15 + uVar27 * 8 + 8);
                      do {
                        puVar23 = (uint *)*puVar20;
                        uVar30 = (uint)uVar27;
                        if (((puVar19 == (uint *)0x0) || (puVar23 == (uint *)0x0)) ||
                           (*puVar19 <= *puVar23)) {
                          puVar17 = (uint *)puVar20[1];
                          if (puVar23 != (uint *)0x0) goto LAB_01acb550;
LAB_01acb500:
                          puVar23 = puVar17;
                        }
                        else {
                          puVar20[-1] = puVar23;
                          *puVar20 = puVar19;
                          puVar17 = (uint *)puVar20[1];
                          puVar23 = puVar19;
                          uVar22 = uVar30;
                          if (puVar19 == (uint *)0x0) goto LAB_01acb500;
LAB_01acb550:
                          if ((puVar17 == (uint *)0x0) || (*puVar23 <= *puVar17)) goto LAB_01acb500;
                          uVar22 = uVar30 + 1;
                          *puVar20 = puVar17;
                          puVar20[1] = puVar23;
                        }
                        uVar27 = uVar27 + 2;
                        puVar20 = puVar20 + 2;
                        puVar19 = puVar23;
                      } while (uVar28 != uVar27);
                    }
                    if ((int)uVar22 <= (int)uVar25) break;
                    uVar27 = (ulong)uVar22;
                    puVar23 = *(uint **)(puVar15 + (ulong)uVar22 * 8);
                    uVar25 = uVar22;
                    do {
                      puVar19 = *(uint **)(puVar15 + uVar27 * 8 + -8);
                      if (((puVar23 != (uint *)0x0) && (puVar19 != (uint *)0x0)) &&
                         (*puVar23 < *puVar19)) {
                        uVar25 = (uint)uVar27;
                        *(uint **)(puVar15 + uVar27 * 8 + -8) = puVar23;
                        *(uint **)(puVar15 + uVar27 * 8) = puVar19;
                        puVar19 = puVar23;
                      }
                      uVar27 = uVar27 - 1;
                      puVar23 = puVar19;
                    } while ((long)uVar26 < (long)uVar27);
                  } while (uVar25 != uVar22);
                }
                DAT_05325c44 = '\x01';
              }
              else if (DAT_05325c44 != '\x01') goto LAB_01acb5ac;
              if ((int)DAT_05325c48 != 0) {
                if ((int)DAT_05325c48 < 2) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0;
                  iVar16 = (int)DAT_05325c48 + -1;
                  do {
                    iVar21 = iVar16 + uVar22;
                    if (iVar21 < 0 != SCARRY4(iVar16,uVar22)) {
                      iVar21 = iVar21 + 1;
                    }
                    uVar25 = iVar21 >> 1;
                    if (*(uint **)(DAT_05325c50 + (long)(int)uVar25 * 8) == (uint *)0x0)
                    goto LAB_01acb594;
                    uVar30 = **(uint **)(DAT_05325c50 + (long)(int)uVar25 * 8);
                    if (uVar30 == uVar29) goto LAB_01acb594;
                    if (uVar30 < uVar29) {
                      uVar22 = uVar25 + 1;
                    }
                    else {
                      iVar16 = uVar25 - 1;
                    }
                  } while ((int)uVar22 < iVar16);
                }
                uVar25 = uVar22;
                if ((*(uint **)(DAT_05325c50 + (long)(int)uVar22 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05325c50 + (long)(int)uVar22 * 8) == uVar29)) {
LAB_01acb594:
                  if ((uVar25 < 4) &&
                     (uVar22 = *(uint *)(*(long *)(DAT_05325c50 + (ulong)uVar25 * 8) + 4),
                     uVar22 < 4)) {
                    DAT_05325c38 = '\x01';
                    DAT_05325c3c = uVar29;
                    DAT_05325c40 = uVar22;
                    goto LAB_01acb5b0;
                  }
                }
              }
LAB_01acb5ac:
              uVar22 = 0;
            }
LAB_01acb5b0:
          }
LAB_01acb1ac:
          puVar23 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar23 != (uint *)0x0)) &&
             ((*puVar23 != 0 &&
              ((uVar29 = puVar23[1], uVar29 != 0 && ((ulong)(ushort)puVar23[2] != 0)))))) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar23 + lVar13 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar13 != 0) {
              uVar25 = 0;
              if ((ulong)uVar29 != 0) {
                uVar25 = (uint)((ulong)((long)puVar1 - lVar13) / (ulong)uVar29);
              }
              if (*puVar23 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if (uVar25 < DAT_04ca7a18) {
                *(short *)(*(long *)(PTR_DAT_04bb43b8 + 8) + (long)(int)uVar25 * 2) = (short)uVar22;
              }
            }
          }
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar14);
  }
  return;
}

