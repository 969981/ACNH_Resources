
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01278db0(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
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
  char cVar18;
  undefined2 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  int *piVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint *puVar29;
  ulong uVar30;
  uint *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint *puVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  byte *pbVar38;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar16 = PTR_DAT_04bbbde0;
  if ((param_1 != (uint *)0x0) && (uVar15 = *param_1, uVar15 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe7,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar4 = crc32b(uVar3,0xb8,0x4c11db7);
    uVar2 = crc32b(uVar2,0xaa,0x4c11db7);
    uVar4 = crc32b(uVar4,0xa6,0x4c11db7);
    uVar37 = 0;
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0xe6,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar4 = crc32b(uVar4,0xa8,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x4c,0x4c11db7);
    uVar6 = crc32b(uVar2,0x97,0x4c11db7);
    uVar2 = crc32b(uVar4,0xaa,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x56,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar5 = crc32b(uVar5,0x76,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar2 = crc32b(uVar2,0xbb,0x4c11db7);
    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
    uVar8 = crc32b(uVar2,0x9d,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x52,0x4c11db7);
    uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
    uVar9 = crc32b(uVar7,0x65,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0x69,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar4 = crc32b(uVar4,0x74,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0x67,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x68,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
    uVar7 = crc32b(uVar7,0x61,0x4c11db7);
    uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
    uVar10 = crc32b(uVar2,0x74,0x4c11db7);
    uVar11 = crc32b(uVar7,0x74,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0x54,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x46,0x4c11db7);
    uVar2 = crc32b(uVar2,0x61,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
    uVar12 = crc32b(uVar5,0x30,0x4c11db7);
    uVar13 = crc32b(uVar2,0x6c,0x4c11db7);
    uVar14 = crc32b(uVar4,0x31,0x4c11db7);
    do {
      if (((uVar37 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar22 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar22 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar37 + (uint)(ushort)param_1[2] * 8 + iVar22) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar36 = *puVar1;
          if (uVar36 == 0) {
            uVar36 = 0;
          }
          else {
            cVar18 = *PTR_DAT_04bbbdd8;
LAB_01279048:
            if (cVar18 == '\0') {
              *(undefined8 *)puVar16 = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
              cVar18 = '\x01';
              *(undefined8 *)(puVar16 + 0xa0) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar16 + 0x98) = 0xffffffffffffffff;
              uVar36 = *puVar1;
              *PTR_DAT_04bbbdd8 = 1;
joined_r0x012790b4:
              puVar29 = (uint *)(ulong)uVar36;
              uVar36 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar36 = 0, puVar1 == puVar29)) goto LAB_0127914c;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
              if (lVar35 == 0) goto LAB_01279148;
              uVar25 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)puVar16 = 0xfffffffe;
              if (uVar25 == 0) goto LAB_01279148;
              piVar24 = (int *)(lVar35 + 4);
              while (piVar24[-1] != -0x26bc1d43) {
                piVar24 = piVar24 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_01279148;
              }
              iVar22 = 0;
              if (*piVar24 != -1) {
                iVar22 = *piVar24;
              }
              *(int *)puVar16 = iVar22;
              uVar36 = *puVar1;
              if (uVar36 == 0) goto LAB_01279148;
              goto LAB_01279048;
            }
            uVar21 = *(uint *)puVar16;
            if ((int)uVar21 < 0) {
              if (uVar21 != 0xffffffff) goto LAB_01279148;
              goto joined_r0x012790b4;
            }
            if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
              uVar36 = *(uint *)((long)puVar1 + (ulong)uVar21);
              goto LAB_0127914c;
            }
LAB_01279148:
            uVar36 = 0;
          }
LAB_0127914c:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_051603b0 == '\x01') && (DAT_051603b4 == uVar36)) {
              uVar21 = DAT_051603b8;
              if (1 < DAT_051603b8) goto LAB_0127934c;
            }
            else {
              if (((DAT_051603e0 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_051603e0), iVar22 != 0)) {
                DAT_051603c0 = 0x200000000;
                DAT_051603c8 = (undefined8 *)&DAT_051603d0;
                __cxa_guard_release(&DAT_051603e0);
              }
              if ((DAT_051603e8 & 1) == 0) {
                DAT_051603e8 = 1;
                if (((DAT_05160400 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160400), iVar22 != 0)) {
                  _DAT_051603ec = 0xffffffff00000000;
                  DAT_051603f4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160400);
                }
                _DAT_051603ec = (ulong)~uVar6;
                iVar22 = (int)DAT_051603c0;
                iVar20 = DAT_051603c0._4_4_;
                if ((int)DAT_051603c0 < DAT_051603c0._4_4_) {
                  DAT_051603c8[(int)DAT_051603c0] = &DAT_051603ec;
                  iVar22 = (int)DAT_051603c0 + 1;
                  DAT_051603c0 = CONCAT44(DAT_051603c0._4_4_,iVar22);
                  iVar20 = DAT_051603c0._4_4_;
                }
                DAT_051603f4 = CONCAT44(1,~uVar8);
                if (iVar22 < iVar20) {
                  DAT_051603c8[iVar22] = &DAT_051603f4;
                  iVar22 = (int)DAT_051603c0 + 1;
                  DAT_051603c0 = CONCAT44(DAT_051603c0._4_4_,iVar22);
                }
                puVar33 = DAT_051603c8;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = (uint *)puVar33[uVar27];
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = (uint *)puVar33[uVar28];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        puVar33[uVar28] = puVar29;
                        puVar33[uVar25] = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar28 + 1;
                      do {
                        puVar29 = (uint *)*puVar32;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar32[1];
                          if (puVar29 != (uint *)0x0) goto LAB_012794d0;
LAB_01279480:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar32[-1] = puVar29;
                          *puVar32 = puVar31;
                          puVar34 = (uint *)puVar32[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_01279480;
LAB_012794d0:
                          if (puVar34 == (uint *)0x0) goto LAB_01279480;
                          if (*puVar29 <= *puVar34) goto LAB_01279480;
                          uVar21 = uVar26 + 1;
                          *puVar32 = puVar34;
                          puVar32[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = (uint *)puVar33[uVar21];
                    uVar27 = uVar21;
                    do {
                      puVar31 = (uint *)puVar33[uVar28 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        puVar33[uVar28 - 1] = puVar29;
                        puVar33[uVar28] = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_051603bc = '\x01';
              }
              else if (DAT_051603bc != '\x01') goto LAB_0127934c;
              if ((int)DAT_051603c0 == 0) {
LAB_0127934c:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_051603c0 < 2) {
                  uVar27 = 0;
                  puVar29 = (uint *)*DAT_051603c8;
                  uVar21 = uVar27;
                  if (puVar29 != (uint *)0x0) goto LAB_01279320;
joined_r0x01279504:
                  if (uVar21 < 2) {
                    uVar21 = *(uint *)(DAT_051603c8[uVar21] + 4);
                    if (uVar21 < 2) {
                      DAT_051603b0 = '\x01';
                      DAT_051603b4 = uVar36;
                      DAT_051603b8 = uVar21;
                      goto LAB_01279804;
                    }
                    goto LAB_0127934c;
                  }
                }
                else {
                  uVar27 = 0;
                  iVar22 = (int)DAT_051603c0 + -1;
                  do {
                    iVar20 = iVar22 + uVar27;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar27)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar21 = iVar20 >> 1;
                    if ((uint *)DAT_051603c8[(int)uVar21] == (uint *)0x0) goto joined_r0x01279504;
                    uVar26 = *(uint *)DAT_051603c8[(int)uVar21];
                    if (uVar26 == uVar36) goto joined_r0x01279504;
                    if (uVar26 < uVar36) {
                      uVar27 = uVar21 + 1;
                    }
                    else {
                      iVar22 = uVar21 - 1;
                    }
                  } while ((int)uVar27 < iVar22);
                  puVar29 = (uint *)DAT_051603c8[(int)uVar27];
                  uVar21 = uVar27;
                  if (puVar29 == (uint *)0x0) goto joined_r0x01279504;
LAB_01279320:
                  uVar21 = uVar27;
                  if (*puVar29 == uVar36) goto joined_r0x01279504;
                }
                uVar21 = 0;
              }
            }
          }
          else {
            if ((DAT_05160358 == '\x01') && (DAT_0516035c == uVar36)) {
              uVar21 = DAT_05160360;
              if (1 < DAT_05160360) goto LAB_012797a8;
            }
            else {
              if (((DAT_05160388 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160388), iVar22 != 0)) {
                DAT_05160368 = 0x200000000;
                DAT_05160370 = &DAT_05160378;
                __cxa_guard_release(&DAT_05160388);
              }
              if ((DAT_05160390 & 1) == 0) {
                DAT_05160390 = 1;
                if (((DAT_051603a8 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_051603a8), iVar22 != 0)) {
                  _DAT_05160394 = 0xffffffff00000000;
                  DAT_0516039c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051603a8);
                }
                _DAT_05160394 = (ulong)~uVar9;
                iVar22 = (int)DAT_05160368;
                iVar20 = DAT_05160368._4_4_;
                if ((int)DAT_05160368 < DAT_05160368._4_4_) {
                  *(undefined4 **)(DAT_05160370 + (long)(int)DAT_05160368 * 8) = &DAT_05160394;
                  iVar22 = (int)DAT_05160368 + 1;
                  DAT_05160368 = CONCAT44(DAT_05160368._4_4_,iVar22);
                  iVar20 = DAT_05160368._4_4_;
                }
                DAT_0516039c = CONCAT44(1,~uVar13);
                if (iVar22 < iVar20) {
                  *(undefined8 **)(DAT_05160370 + (long)iVar22 * 8) = &DAT_0516039c;
                  iVar22 = (int)DAT_05160368 + 1;
                  DAT_05160368 = CONCAT44(DAT_05160368._4_4_,iVar22);
                }
                puVar17 = DAT_05160370;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar27 * 8);
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        *(uint **)(puVar17 + uVar28 * 8) = puVar29;
                        *(uint **)(puVar17 + uVar25 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar17 + uVar28 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar33;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar33[1];
                          if (puVar29 != (uint *)0x0) goto LAB_01279750;
LAB_01279700:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar33[-1] = puVar29;
                          *puVar33 = puVar31;
                          puVar34 = (uint *)puVar33[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_01279700;
LAB_01279750:
                          if (puVar34 == (uint *)0x0) goto LAB_01279700;
                          if (*puVar29 <= *puVar34) goto LAB_01279700;
                          uVar21 = uVar26 + 1;
                          *puVar33 = puVar34;
                          puVar33[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar33 = puVar33 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar21 * 8);
                    uVar27 = uVar21;
                    do {
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        *(uint **)(puVar17 + uVar28 * 8 + -8) = puVar29;
                        *(uint **)(puVar17 + uVar28 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_05160364 = '\x01';
              }
              else if (DAT_05160364 != '\x01') goto LAB_012797a8;
              if ((int)DAT_05160368 == 0) {
LAB_012797a8:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_05160368 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar22 = (int)DAT_05160368 + -1;
                  do {
                    iVar20 = iVar22 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar27 = iVar20 >> 1;
                    if (*(uint **)(DAT_05160370 + (long)(int)uVar27 * 8) == (uint *)0x0)
                    goto joined_r0x012797d4;
                    uVar26 = **(uint **)(DAT_05160370 + (long)(int)uVar27 * 8);
                    if (uVar26 == uVar36) goto joined_r0x012797d4;
                    if (uVar26 < uVar36) {
                      uVar21 = uVar27 + 1;
                    }
                    else {
                      iVar22 = uVar27 - 1;
                    }
                  } while ((int)uVar21 < iVar22);
                }
                uVar27 = uVar21;
                if ((*(uint **)(DAT_05160370 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05160370 + (long)(int)uVar21 * 8) == uVar36)) {
joined_r0x012797d4:
                  if (uVar27 < 2) {
                    uVar21 = *(uint *)(*(long *)(DAT_05160370 + (ulong)uVar27 * 8) + 4);
                    if (uVar21 < 2) {
                      DAT_05160358 = '\x01';
                      DAT_0516035c = uVar36;
                      DAT_05160360 = uVar21;
                      goto LAB_012797fc;
                    }
                    goto LAB_012797a8;
                  }
                }
                uVar21 = 0;
              }
            }
LAB_012797fc:
          }
LAB_01279804:
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar29 != (uint *)0x0)) && (*puVar29 != 0)) &&
             ((uVar36 = puVar29[1], uVar36 != 0 && ((ulong)(ushort)puVar29[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar27 = 0;
              if ((ulong)uVar36 != 0) {
                uVar27 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar36);
              }
              if (*puVar29 <= uVar27) {
                uVar27 = 0xffffffff;
              }
              if (uVar27 < *(uint *)PTR_DAT_04bbbe28) {
                *(short *)(*(long *)(PTR_DAT_04bbbe28 + 8) + (long)(int)uVar27 * 2) = (short)uVar21;
              }
            }
          }
          uVar36 = *puVar1;
          if (uVar36 != 0) {
            cVar18 = *PTR_DAT_04bbbdd8;
            do {
              if (cVar18 == '\0') {
                *(undefined8 *)puVar16 = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
                cVar18 = '\x01';
                *(undefined8 *)(puVar16 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x98) = 0xffffffffffffffff;
                uVar36 = *puVar1;
                *PTR_DAT_04bbbdd8 = 1;
              }
              else {
                uVar21 = *(uint *)(puVar16 + 4);
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar36 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_01279984;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)uVar36;
              uVar36 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar36 = 0, puVar1 == puVar29)) goto LAB_01279984;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
              if (lVar35 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)(puVar16 + 4) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar24 = (int *)(lVar35 + 4);
              while (piVar24[-1] != -0x620564c7) {
                piVar24 = piVar24 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_01279980;
              }
              iVar22 = 0;
              if (*piVar24 != -1) {
                iVar22 = *piVar24;
              }
              *(int *)(puVar16 + 4) = iVar22;
              uVar36 = *puVar1;
              if (uVar36 == 0) break;
            } while( true );
          }
LAB_01279980:
          uVar36 = 0;
LAB_01279984:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_05160470 == '\x01') && (DAT_05160474 == uVar36)) {
              uVar21 = DAT_05160478;
              if (2 < DAT_05160478) goto LAB_01279c2c;
            }
            else {
              if (((DAT_051604a8 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_051604a8), iVar22 != 0)) {
                DAT_05160480 = 0x300000000;
                DAT_05160488 = (undefined8 *)&DAT_05160490;
                __cxa_guard_release(&DAT_051604a8);
              }
              if ((DAT_051604b0 & 1) == 0) {
                DAT_051604b0 = 1;
                if (((DAT_051604d0 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_051604d0), iVar22 != 0)) {
                  _DAT_051604b4 = 0xffffffff00000000;
                  DAT_051604bc = 0xffffffff00000000;
                  DAT_051604c4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051604d0);
                }
                _DAT_051604b4 = (ulong)~uVar6;
                iVar22 = (int)DAT_05160480;
                iVar20 = DAT_05160480._4_4_;
                if ((int)DAT_05160480 < DAT_05160480._4_4_) {
                  DAT_05160488[(int)DAT_05160480] = &DAT_051604b4;
                  iVar22 = (int)DAT_05160480 + 1;
                  DAT_05160480 = CONCAT44(DAT_05160480._4_4_,iVar22);
                  iVar20 = DAT_05160480._4_4_;
                }
                uVar2 = crc32b(uVar3,0x9b,0x4c11db7);
                uVar2 = crc32b(uVar2,0xb4,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe8,0x4c11db7);
                uVar2 = crc32b(uVar2,0xa7,0x4c11db7);
                uVar21 = crc32b(uVar2,0x92,0x4c11db7);
                DAT_051604bc = CONCAT44(1,~uVar21);
                if (iVar22 < iVar20) {
                  DAT_05160488[iVar22] = &DAT_051604bc;
                  iVar22 = (int)DAT_05160480 + 1;
                  DAT_05160480 = CONCAT44(DAT_05160480._4_4_,iVar22);
                  iVar20 = DAT_05160480._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar2 = crc32b(uVar2,0x96,0x4c11db7);
                uVar2 = crc32b(uVar2,0x9c,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
                uVar2 = crc32b(uVar2,0x82,0x4c11db7);
                uVar21 = crc32b(uVar2,0x81,0x4c11db7);
                DAT_051604c4 = CONCAT44(2,~uVar21);
                if (iVar22 < iVar20) {
                  DAT_05160488[iVar22] = &DAT_051604c4;
                  iVar22 = (int)DAT_05160480 + 1;
                  DAT_05160480 = CONCAT44(DAT_05160480._4_4_,iVar22);
                }
                puVar33 = DAT_05160488;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = (uint *)puVar33[uVar27];
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = (uint *)puVar33[uVar28];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        puVar33[uVar28] = puVar29;
                        puVar33[uVar25] = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar28 + 1;
                      do {
                        puVar29 = (uint *)*puVar32;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar32[1];
                          if (puVar29 != (uint *)0x0) goto LAB_01279db0;
LAB_01279d60:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar32[-1] = puVar29;
                          *puVar32 = puVar31;
                          puVar34 = (uint *)puVar32[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_01279d60;
LAB_01279db0:
                          if (puVar34 == (uint *)0x0) goto LAB_01279d60;
                          if (*puVar29 <= *puVar34) goto LAB_01279d60;
                          uVar21 = uVar26 + 1;
                          *puVar32 = puVar34;
                          puVar32[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = (uint *)puVar33[uVar21];
                    uVar27 = uVar21;
                    do {
                      puVar31 = (uint *)puVar33[uVar28 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        puVar33[uVar28 - 1] = puVar29;
                        puVar33[uVar28] = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_0516047c = '\x01';
              }
              else if (DAT_0516047c != '\x01') goto LAB_01279c2c;
              if ((int)DAT_05160480 == 0) {
LAB_01279c2c:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_05160480 < 2) {
                  uVar27 = 0;
                  puVar29 = (uint *)*DAT_05160488;
                  uVar21 = uVar27;
                  if (puVar29 != (uint *)0x0) goto LAB_01279c00;
joined_r0x01279c14:
                  if (uVar21 < 3) {
                    uVar21 = *(uint *)(DAT_05160488[uVar21] + 4);
                    if (uVar21 < 3) {
                      DAT_05160470 = '\x01';
                      DAT_05160474 = uVar36;
                      DAT_05160478 = uVar21;
                      goto LAB_0127a114;
                    }
                    goto LAB_01279c2c;
                  }
                }
                else {
                  uVar27 = 0;
                  iVar22 = (int)DAT_05160480 + -1;
                  do {
                    iVar20 = iVar22 + uVar27;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar27)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar21 = iVar20 >> 1;
                    if ((uint *)DAT_05160488[(int)uVar21] == (uint *)0x0) goto joined_r0x01279c14;
                    uVar26 = *(uint *)DAT_05160488[(int)uVar21];
                    if (uVar26 == uVar36) goto joined_r0x01279c14;
                    if (uVar26 < uVar36) {
                      uVar27 = uVar21 + 1;
                    }
                    else {
                      iVar22 = uVar21 - 1;
                    }
                  } while ((int)uVar27 < iVar22);
                  puVar29 = (uint *)DAT_05160488[(int)uVar27];
                  uVar21 = uVar27;
                  if (puVar29 == (uint *)0x0) goto joined_r0x01279c14;
LAB_01279c00:
                  uVar21 = uVar27;
                  if (*puVar29 == uVar36) goto joined_r0x01279c14;
                }
                uVar21 = 0;
              }
            }
          }
          else {
            if ((DAT_05160408 == '\x01') && (DAT_0516040c == uVar36)) {
              uVar21 = DAT_05160410;
              if (2 < DAT_05160410) goto LAB_0127a0b8;
            }
            else {
              if (((DAT_05160440 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160440), iVar22 != 0)) {
                DAT_05160418 = 0x300000000;
                DAT_05160420 = &DAT_05160428;
                __cxa_guard_release(&DAT_05160440);
              }
              if ((DAT_05160448 & 1) == 0) {
                DAT_05160448 = 1;
                if (((DAT_05160468 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160468), iVar22 != 0)) {
                  DAT_0516045c = 0xffffffff00000000;
                  _DAT_0516044c = 0xffffffff00000000;
                  DAT_05160454 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160468);
                }
                _DAT_0516044c = (ulong)~uVar9;
                iVar22 = (int)DAT_05160418;
                iVar20 = DAT_05160418._4_4_;
                if ((int)DAT_05160418 < DAT_05160418._4_4_) {
                  *(undefined4 **)(DAT_05160420 + (long)(int)DAT_05160418 * 8) = &DAT_0516044c;
                  iVar22 = (int)DAT_05160418 + 1;
                  DAT_05160418 = CONCAT44(DAT_05160418._4_4_,iVar22);
                  iVar20 = DAT_05160418._4_4_;
                }
                DAT_05160454 = CONCAT44(1,~uVar10);
                if (iVar22 < iVar20) {
                  *(undefined8 **)(DAT_05160420 + (long)iVar22 * 8) = &DAT_05160454;
                  iVar22 = (int)DAT_05160418 + 1;
                  DAT_05160418 = CONCAT44(DAT_05160418._4_4_,iVar22);
                  iVar20 = DAT_05160418._4_4_;
                }
                DAT_0516045c = CONCAT44(2,~uVar11);
                if (iVar22 < iVar20) {
                  *(undefined8 **)(DAT_05160420 + (long)iVar22 * 8) = &DAT_0516045c;
                  iVar22 = (int)DAT_05160418 + 1;
                  DAT_05160418 = CONCAT44(DAT_05160418._4_4_,iVar22);
                }
                puVar17 = DAT_05160420;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar27 * 8);
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        *(uint **)(puVar17 + uVar28 * 8) = puVar29;
                        *(uint **)(puVar17 + uVar25 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar17 + uVar28 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar33;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar33[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127a060;
LAB_0127a010:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar33[-1] = puVar29;
                          *puVar33 = puVar31;
                          puVar34 = (uint *)puVar33[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127a010;
LAB_0127a060:
                          if (puVar34 == (uint *)0x0) goto LAB_0127a010;
                          if (*puVar29 <= *puVar34) goto LAB_0127a010;
                          uVar21 = uVar26 + 1;
                          *puVar33 = puVar34;
                          puVar33[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar33 = puVar33 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar21 * 8);
                    uVar27 = uVar21;
                    do {
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        *(uint **)(puVar17 + uVar28 * 8 + -8) = puVar29;
                        *(uint **)(puVar17 + uVar28 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_05160414 = '\x01';
              }
              else if (DAT_05160414 != '\x01') goto LAB_0127a0b8;
              if ((int)DAT_05160418 == 0) {
LAB_0127a0b8:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_05160418 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar22 = (int)DAT_05160418 + -1;
                  do {
                    iVar20 = iVar22 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar27 = iVar20 >> 1;
                    if (*(uint **)(DAT_05160420 + (long)(int)uVar27 * 8) == (uint *)0x0)
                    goto joined_r0x0127a0e4;
                    uVar26 = **(uint **)(DAT_05160420 + (long)(int)uVar27 * 8);
                    if (uVar26 == uVar36) goto joined_r0x0127a0e4;
                    if (uVar26 < uVar36) {
                      uVar21 = uVar27 + 1;
                    }
                    else {
                      iVar22 = uVar27 - 1;
                    }
                  } while ((int)uVar21 < iVar22);
                }
                uVar27 = uVar21;
                if ((*(uint **)(DAT_05160420 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05160420 + (long)(int)uVar21 * 8) == uVar36)) {
joined_r0x0127a0e4:
                  if (uVar27 < 3) {
                    uVar21 = *(uint *)(*(long *)(DAT_05160420 + (ulong)uVar27 * 8) + 4);
                    if (uVar21 < 3) {
                      DAT_05160408 = '\x01';
                      DAT_0516040c = uVar36;
                      DAT_05160410 = uVar21;
                      goto LAB_0127a10c;
                    }
                    goto LAB_0127a0b8;
                  }
                }
                uVar21 = 0;
              }
            }
LAB_0127a10c:
          }
LAB_0127a114:
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar29 != (uint *)0x0)) && (*puVar29 != 0)) &&
             ((uVar36 = puVar29[1], uVar36 != 0 && ((ulong)(ushort)puVar29[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar27 = 0;
              if ((ulong)uVar36 != 0) {
                uVar27 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar36);
              }
              if (*puVar29 <= uVar27) {
                uVar27 = 0xffffffff;
              }
              if (uVar27 < *(uint *)PTR_DAT_04bbbe30) {
                *(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar27 * 2) = (short)uVar21;
              }
            }
          }
          uVar36 = *puVar1;
          if (uVar36 != 0) {
            cVar18 = *PTR_DAT_04bbbdd8;
            do {
              if (cVar18 == '\0') {
                *(undefined8 *)puVar16 = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
                cVar18 = '\x01';
                *(undefined8 *)(puVar16 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x98) = 0xffffffffffffffff;
                uVar36 = *puVar1;
                *PTR_DAT_04bbbdd8 = 1;
              }
              else {
                uVar21 = *(uint *)(puVar16 + 8);
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar36 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_0127a290;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)uVar36;
              uVar36 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar36 = 0, puVar1 == puVar29)) goto LAB_0127a290;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
              if (lVar35 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)(puVar16 + 8) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar24 = (int *)(lVar35 + 4);
              while (piVar24[-1] != 0xd54d810) {
                piVar24 = piVar24 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_0127a28c;
              }
              iVar22 = 0;
              if (*piVar24 != -1) {
                iVar22 = *piVar24;
              }
              *(int *)(puVar16 + 8) = iVar22;
              uVar36 = *puVar1;
              if (uVar36 == 0) break;
            } while( true );
          }
LAB_0127a28c:
          uVar36 = 0;
LAB_0127a290:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_05160550 == '\x01') && (DAT_05160554 == uVar36)) {
              uVar21 = DAT_05160558;
              if (3 < DAT_05160558) goto LAB_0127a50c;
            }
            else {
              if (((DAT_05160590 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160590), iVar22 != 0)) {
                DAT_05160560 = 0x400000000;
                DAT_05160568 = (undefined8 *)&DAT_05160570;
                __cxa_guard_release(&DAT_05160590);
              }
              if ((DAT_05160598 & 1) == 0) {
                DAT_05160598 = 1;
                if (((DAT_051605c0 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_051605c0), iVar22 != 0)) {
                  _DAT_0516059c = 0xffffffff00000000;
                  DAT_051605a4 = 0xffffffff00000000;
                  DAT_051605ac = 0xffffffff00000000;
                  DAT_051605b4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051605c0);
                }
                _DAT_0516059c = (ulong)~uVar6;
                iVar22 = (int)DAT_05160560;
                iVar20 = DAT_05160560._4_4_;
                if ((int)DAT_05160560 < DAT_05160560._4_4_) {
                  DAT_05160568[(int)DAT_05160560] = &DAT_0516059c;
                  iVar22 = (int)DAT_05160560 + 1;
                  DAT_05160560 = CONCAT44(DAT_05160560._4_4_,iVar22);
                  iVar20 = DAT_05160560._4_4_;
                }
                DAT_051605a4 = CONCAT44(1,~uVar14);
                if (iVar22 < iVar20) {
                  DAT_05160568[iVar22] = &DAT_051605a4;
                  iVar22 = (int)DAT_05160560 + 1;
                  DAT_05160560 = CONCAT44(DAT_05160560._4_4_,iVar22);
                  iVar20 = DAT_05160560._4_4_;
                }
                uVar21 = crc32b(uVar4,0x32,0x4c11db7);
                DAT_051605ac = CONCAT44(2,~uVar21);
                if (iVar22 < iVar20) {
                  DAT_05160568[iVar22] = &DAT_051605ac;
                  iVar22 = (int)DAT_05160560 + 1;
                  DAT_05160560 = CONCAT44(DAT_05160560._4_4_,iVar22);
                  iVar20 = DAT_05160560._4_4_;
                }
                uVar21 = crc32b(uVar4,0x34,0x4c11db7);
                DAT_051605b4 = CONCAT44(3,~uVar21);
                if (iVar22 < iVar20) {
                  DAT_05160568[iVar22] = &DAT_051605b4;
                  iVar22 = (int)DAT_05160560 + 1;
                  DAT_05160560 = CONCAT44(DAT_05160560._4_4_,iVar22);
                }
                puVar33 = DAT_05160568;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = (uint *)puVar33[uVar27];
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = (uint *)puVar33[uVar28];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        puVar33[uVar28] = puVar29;
                        puVar33[uVar25] = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar28 + 1;
                      do {
                        puVar29 = (uint *)*puVar32;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar32[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127a690;
LAB_0127a640:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar32[-1] = puVar29;
                          *puVar32 = puVar31;
                          puVar34 = (uint *)puVar32[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127a640;
LAB_0127a690:
                          if (puVar34 == (uint *)0x0) goto LAB_0127a640;
                          if (*puVar29 <= *puVar34) goto LAB_0127a640;
                          uVar21 = uVar26 + 1;
                          *puVar32 = puVar34;
                          puVar32[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = (uint *)puVar33[uVar21];
                    uVar27 = uVar21;
                    do {
                      puVar31 = (uint *)puVar33[uVar28 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        puVar33[uVar28 - 1] = puVar29;
                        puVar33[uVar28] = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_0516055c = '\x01';
              }
              else if (DAT_0516055c != '\x01') goto LAB_0127a50c;
              if ((int)DAT_05160560 == 0) {
LAB_0127a50c:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_05160560 < 2) {
                  uVar27 = 0;
                  puVar29 = (uint *)*DAT_05160568;
                  uVar21 = uVar27;
                  if (puVar29 != (uint *)0x0) goto LAB_0127a4e0;
joined_r0x0127a4f4:
                  if (uVar21 < 4) {
                    uVar21 = *(uint *)(DAT_05160568[uVar21] + 4);
                    if (uVar21 < 4) {
                      DAT_05160550 = '\x01';
                      DAT_05160554 = uVar36;
                      DAT_05160558 = uVar21;
                      goto LAB_0127aa44;
                    }
                    goto LAB_0127a50c;
                  }
                }
                else {
                  uVar27 = 0;
                  iVar22 = (int)DAT_05160560 + -1;
                  do {
                    iVar20 = iVar22 + uVar27;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar27)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar21 = iVar20 >> 1;
                    if ((uint *)DAT_05160568[(int)uVar21] == (uint *)0x0) goto joined_r0x0127a4f4;
                    uVar26 = *(uint *)DAT_05160568[(int)uVar21];
                    if (uVar26 == uVar36) goto joined_r0x0127a4f4;
                    if (uVar26 < uVar36) {
                      uVar27 = uVar21 + 1;
                    }
                    else {
                      iVar22 = uVar21 - 1;
                    }
                  } while ((int)uVar27 < iVar22);
                  puVar29 = (uint *)DAT_05160568[(int)uVar27];
                  uVar21 = uVar27;
                  if (puVar29 == (uint *)0x0) goto joined_r0x0127a4f4;
LAB_0127a4e0:
                  uVar21 = uVar27;
                  if (*puVar29 == uVar36) goto joined_r0x0127a4f4;
                }
                uVar21 = 0;
              }
            }
          }
          else {
            if ((DAT_051604d8 == '\x01') && (DAT_051604dc == uVar36)) {
              uVar21 = DAT_051604e0;
              if (3 < DAT_051604e0) goto LAB_0127a9e8;
            }
            else {
              if (((DAT_05160518 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160518), iVar22 != 0)) {
                DAT_051604e8 = 0x400000000;
                DAT_051604f0 = &DAT_051604f8;
                __cxa_guard_release(&DAT_05160518);
              }
              if ((DAT_05160520 & 1) == 0) {
                DAT_05160520 = 1;
                if (((DAT_05160548 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160548), iVar22 != 0)) {
                  _DAT_05160524 = 0xffffffff00000000;
                  DAT_0516052c = 0xffffffff00000000;
                  DAT_05160534 = 0xffffffff00000000;
                  DAT_0516053c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160548);
                }
                _DAT_05160524 = (ulong)~uVar9;
                iVar22 = (int)DAT_051604e8;
                iVar20 = DAT_051604e8._4_4_;
                if ((int)DAT_051604e8 < DAT_051604e8._4_4_) {
                  *(undefined4 **)(DAT_051604f0 + (long)(int)DAT_051604e8 * 8) = &DAT_05160524;
                  iVar22 = (int)DAT_051604e8 + 1;
                  DAT_051604e8 = CONCAT44(DAT_051604e8._4_4_,iVar22);
                  iVar20 = DAT_051604e8._4_4_;
                }
                DAT_0516052c = CONCAT44(1,~uVar14);
                if (iVar22 < iVar20) {
                  *(undefined8 **)(DAT_051604f0 + (long)iVar22 * 8) = &DAT_0516052c;
                  iVar22 = (int)DAT_051604e8 + 1;
                  DAT_051604e8 = CONCAT44(DAT_051604e8._4_4_,iVar22);
                  iVar20 = DAT_051604e8._4_4_;
                }
                uVar21 = crc32b(uVar4,0x32,0x4c11db7);
                DAT_05160534 = CONCAT44(2,~uVar21);
                if (iVar22 < iVar20) {
                  *(undefined8 **)(DAT_051604f0 + (long)iVar22 * 8) = &DAT_05160534;
                  iVar22 = (int)DAT_051604e8 + 1;
                  DAT_051604e8 = CONCAT44(DAT_051604e8._4_4_,iVar22);
                  iVar20 = DAT_051604e8._4_4_;
                }
                uVar21 = crc32b(uVar4,0x34,0x4c11db7);
                DAT_0516053c = CONCAT44(3,~uVar21);
                if (iVar22 < iVar20) {
                  *(undefined8 **)(DAT_051604f0 + (long)iVar22 * 8) = &DAT_0516053c;
                  iVar22 = (int)DAT_051604e8 + 1;
                  DAT_051604e8 = CONCAT44(DAT_051604e8._4_4_,iVar22);
                }
                puVar17 = DAT_051604f0;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar27 * 8);
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        *(uint **)(puVar17 + uVar28 * 8) = puVar29;
                        *(uint **)(puVar17 + uVar25 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar17 + uVar28 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar33;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar33[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127a990;
LAB_0127a940:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar33[-1] = puVar29;
                          *puVar33 = puVar31;
                          puVar34 = (uint *)puVar33[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127a940;
LAB_0127a990:
                          if (puVar34 == (uint *)0x0) goto LAB_0127a940;
                          if (*puVar29 <= *puVar34) goto LAB_0127a940;
                          uVar21 = uVar26 + 1;
                          *puVar33 = puVar34;
                          puVar33[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar33 = puVar33 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar21 * 8);
                    uVar27 = uVar21;
                    do {
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        *(uint **)(puVar17 + uVar28 * 8 + -8) = puVar29;
                        *(uint **)(puVar17 + uVar28 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_051604e4 = '\x01';
              }
              else if (DAT_051604e4 != '\x01') goto LAB_0127a9e8;
              if ((int)DAT_051604e8 == 0) {
LAB_0127a9e8:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_051604e8 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar22 = (int)DAT_051604e8 + -1;
                  do {
                    iVar20 = iVar22 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar27 = iVar20 >> 1;
                    if (*(uint **)(DAT_051604f0 + (long)(int)uVar27 * 8) == (uint *)0x0)
                    goto joined_r0x0127aa14;
                    uVar26 = **(uint **)(DAT_051604f0 + (long)(int)uVar27 * 8);
                    if (uVar26 == uVar36) goto joined_r0x0127aa14;
                    if (uVar26 < uVar36) {
                      uVar21 = uVar27 + 1;
                    }
                    else {
                      iVar22 = uVar27 - 1;
                    }
                  } while ((int)uVar21 < iVar22);
                }
                uVar27 = uVar21;
                if ((*(uint **)(DAT_051604f0 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_051604f0 + (long)(int)uVar21 * 8) == uVar36)) {
joined_r0x0127aa14:
                  if (uVar27 < 4) {
                    uVar21 = *(uint *)(*(long *)(DAT_051604f0 + (ulong)uVar27 * 8) + 4);
                    if (uVar21 < 4) {
                      DAT_051604d8 = '\x01';
                      DAT_051604dc = uVar36;
                      DAT_051604e0 = uVar21;
                      goto LAB_0127aa3c;
                    }
                    goto LAB_0127a9e8;
                  }
                }
                uVar21 = 0;
              }
            }
LAB_0127aa3c:
          }
LAB_0127aa44:
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar29 != (uint *)0x0)) && (*puVar29 != 0)) &&
             ((uVar36 = puVar29[1], uVar36 != 0 && ((ulong)(ushort)puVar29[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar27 = 0;
              if ((ulong)uVar36 != 0) {
                uVar27 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar36);
              }
              if (*puVar29 <= uVar27) {
                uVar27 = 0xffffffff;
              }
              if (uVar27 < *(uint *)PTR_DAT_04bbbe38) {
                *(short *)(*(long *)(PTR_DAT_04bbbe38 + 8) + (long)(int)uVar27 * 2) = (short)uVar21;
              }
            }
          }
          uVar36 = *puVar1;
          if (uVar36 != 0) {
            cVar18 = *PTR_DAT_04bbbdd8;
            do {
              if (cVar18 == '\0') {
                *(undefined8 *)puVar16 = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
                cVar18 = '\x01';
                *(undefined8 *)(puVar16 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x98) = 0xffffffffffffffff;
                uVar36 = *puVar1;
                *PTR_DAT_04bbbdd8 = 1;
              }
              else {
                uVar21 = *(uint *)(puVar16 + 0xc);
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar36 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_0127abd0;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)uVar36;
              uVar36 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar36 = 0, puVar1 == puVar29)) goto LAB_0127abd0;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
              if (lVar35 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)(puVar16 + 0xc) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar24 = (int *)(lVar35 + 4);
              while (piVar24[-1] != -0x14bbcf39) {
                piVar24 = piVar24 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_0127abcc;
              }
              iVar22 = 0;
              if (*piVar24 != -1) {
                iVar22 = *piVar24;
              }
              *(int *)(puVar16 + 0xc) = iVar22;
              uVar36 = *puVar1;
              if (uVar36 == 0) break;
            } while( true );
          }
LAB_0127abcc:
          uVar36 = 0;
LAB_0127abd0:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_051606d0 == '\x01') && (DAT_051606d4 == uVar36)) {
              uVar21 = DAT_051606d8;
              if (0xc < DAT_051606d8) goto LAB_0127ae70;
            }
            else {
              if (((DAT_05160758 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160758), iVar22 != 0)) {
                DAT_051606e0 = 0xd00000000;
                DAT_051606e8 = (undefined8 *)&DAT_051606f0;
                __cxa_guard_release(&DAT_05160758);
              }
              if ((DAT_05160760 & 1) == 0) {
                DAT_05160760 = 1;
                if (((DAT_051607d0 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_051607d0), iVar22 != 0)) {
                  DAT_051607c4 = 0xffffffff00000000;
                  DAT_05160764 = 0xffffffff00000000;
                  DAT_0516076c = 0xffffffff00000000;
                  DAT_05160774 = 0xffffffff00000000;
                  DAT_0516077c = 0xffffffff00000000;
                  DAT_05160784 = 0xffffffff00000000;
                  DAT_0516078c = 0xffffffff00000000;
                  DAT_05160794 = 0xffffffff00000000;
                  DAT_0516079c = 0xffffffff00000000;
                  DAT_051607a4 = 0xffffffff00000000;
                  DAT_051607ac = 0xffffffff00000000;
                  DAT_051607b4 = 0xffffffff00000000;
                  DAT_051607bc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051607d0);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_DAT_04989ac0)[lVar35];
                  if (local_174 != pbVar38) {
                    lVar23 = 0;
                    do {
                      if (pbVar38[lVar23] == 0) {
LAB_0127ad14:
                        iVar22 = (int)lVar23;
joined_r0x0127ad18:
                        if (0xff < iVar22) {
                          iVar22 = 0xff;
                        }
                        goto LAB_0127ad20;
                      }
                      if (pbVar38[lVar23 + 1] == 0) {
                        lVar23 = lVar23 + 1;
                        goto LAB_0127ad14;
                      }
                      if (pbVar38[lVar23 + 2] == 0) {
                        iVar22 = (int)lVar23 + 2;
                        goto joined_r0x0127ad18;
                      }
                      lVar23 = lVar23 + 3;
                    } while (lVar23 != 0x80001);
                    iVar22 = 0;
LAB_0127ad20:
                    memcpy(local_174,pbVar38,(long)iVar22);
                    local_174[iVar22] = 0;
                  }
                  uVar21 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar27 = crc32b(uVar27,uVar21,0x4c11db7);
                      uVar21 = (uint)*pbVar38;
                    } while (uVar21 != 0);
                    uVar27 = ~uVar27;
                  }
                  *(uint *)(&DAT_05160764 + lVar35) = uVar27;
                  *(int *)((long)&DAT_05160764 + lVar35 * 8 + 4) = (int)lVar35;
                  iVar22 = (int)DAT_051606e0;
                  if ((int)DAT_051606e0 < DAT_051606e0._4_4_) {
                    DAT_051606e8[(int)DAT_051606e0] = &DAT_05160764 + lVar35;
                    iVar22 = (int)DAT_051606e0 + 1;
                    DAT_051606e0 = CONCAT44(DAT_051606e0._4_4_,iVar22);
                  }
                  puVar33 = DAT_051606e8;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 0xd);
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = (uint *)puVar33[uVar27];
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = (uint *)puVar33[uVar28];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        puVar33[uVar28] = puVar29;
                        puVar33[uVar25] = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar28 + 1;
                      do {
                        puVar29 = (uint *)*puVar32;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar32[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127aff0;
LAB_0127afa0:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar32[-1] = puVar29;
                          *puVar32 = puVar31;
                          puVar34 = (uint *)puVar32[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127afa0;
LAB_0127aff0:
                          if (puVar34 == (uint *)0x0) goto LAB_0127afa0;
                          if (*puVar29 <= *puVar34) goto LAB_0127afa0;
                          uVar21 = uVar26 + 1;
                          *puVar32 = puVar34;
                          puVar32[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = (uint *)puVar33[uVar21];
                    uVar27 = uVar21;
                    do {
                      puVar31 = (uint *)puVar33[uVar28 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        puVar33[uVar28 - 1] = puVar29;
                        puVar33[uVar28] = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_051606dc = '\x01';
              }
              else if (DAT_051606dc != '\x01') goto LAB_0127ae70;
              if ((int)DAT_051606e0 == 0) {
LAB_0127ae70:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_051606e0 < 2) {
                  uVar27 = 0;
                  puVar29 = (uint *)*DAT_051606e8;
                  uVar21 = uVar27;
                  if (puVar29 != (uint *)0x0) goto LAB_0127ae44;
joined_r0x0127ae58:
                  if (uVar21 < 0xd) {
                    uVar21 = *(uint *)(DAT_051606e8[uVar21] + 4);
                    if (uVar21 < 0xd) {
                      DAT_051606d0 = '\x01';
                      DAT_051606d4 = uVar36;
                      DAT_051606d8 = uVar21;
                      goto LAB_0127b404;
                    }
                    goto LAB_0127ae70;
                  }
                }
                else {
                  uVar27 = 0;
                  iVar22 = (int)DAT_051606e0 + -1;
                  do {
                    iVar20 = iVar22 + uVar27;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar27)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar21 = iVar20 >> 1;
                    if ((uint *)DAT_051606e8[(int)uVar21] == (uint *)0x0) goto joined_r0x0127ae58;
                    uVar26 = *(uint *)DAT_051606e8[(int)uVar21];
                    if (uVar26 == uVar36) goto joined_r0x0127ae58;
                    if (uVar26 < uVar36) {
                      uVar27 = uVar21 + 1;
                    }
                    else {
                      iVar22 = uVar21 - 1;
                    }
                  } while ((int)uVar27 < iVar22);
                  puVar29 = (uint *)DAT_051606e8[(int)uVar27];
                  uVar21 = uVar27;
                  if (puVar29 == (uint *)0x0) goto joined_r0x0127ae58;
LAB_0127ae44:
                  uVar21 = uVar27;
                  if (*puVar29 == uVar36) goto joined_r0x0127ae58;
                }
                uVar21 = 0;
              }
            }
          }
          else {
            if ((DAT_051605c8 == '\x01') && (DAT_051605cc == uVar36)) {
              uVar21 = DAT_051605d0;
              if (0xc < DAT_051605d0) goto LAB_0127b3a8;
            }
            else {
              if (((DAT_05160650 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160650), iVar22 != 0)) {
                DAT_051605d8 = 0xd00000000;
                DAT_051605e0 = &DAT_051605e8;
                __cxa_guard_release(&DAT_05160650);
              }
              if ((DAT_05160658 & 1) == 0) {
                DAT_05160658 = 1;
                if (((DAT_051606c8 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_051606c8), iVar22 != 0)) {
                  DAT_051606bc = 0xffffffff00000000;
                  DAT_0516065c = 0xffffffff00000000;
                  DAT_05160664 = 0xffffffff00000000;
                  DAT_0516066c = 0xffffffff00000000;
                  DAT_05160674 = 0xffffffff00000000;
                  DAT_0516067c = 0xffffffff00000000;
                  DAT_05160684 = 0xffffffff00000000;
                  DAT_0516068c = 0xffffffff00000000;
                  DAT_05160694 = 0xffffffff00000000;
                  DAT_0516069c = 0xffffffff00000000;
                  DAT_051606a4 = 0xffffffff00000000;
                  DAT_051606ac = 0xffffffff00000000;
                  DAT_051606b4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051606c8);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_DAT_04989a00)[lVar35];
                  if (local_174 != pbVar38) {
                    lVar23 = 0;
                    do {
                      if (pbVar38[lVar23] == 0) {
LAB_0127b0d8:
                        iVar22 = (int)lVar23;
joined_r0x0127b0dc:
                        if (0xff < iVar22) {
                          iVar22 = 0xff;
                        }
                        goto LAB_0127b0e4;
                      }
                      if (pbVar38[lVar23 + 1] == 0) {
                        lVar23 = lVar23 + 1;
                        goto LAB_0127b0d8;
                      }
                      if (pbVar38[lVar23 + 2] == 0) {
                        iVar22 = (int)lVar23 + 2;
                        goto joined_r0x0127b0dc;
                      }
                      lVar23 = lVar23 + 3;
                    } while (lVar23 != 0x80001);
                    iVar22 = 0;
LAB_0127b0e4:
                    memcpy(local_174,pbVar38,(long)iVar22);
                    local_174[iVar22] = 0;
                  }
                  uVar21 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar27 = crc32b(uVar27,uVar21,0x4c11db7);
                      uVar21 = (uint)*pbVar38;
                    } while (uVar21 != 0);
                    uVar27 = ~uVar27;
                  }
                  *(uint *)(&DAT_0516065c + lVar35) = uVar27;
                  *(int *)((long)&DAT_0516065c + lVar35 * 8 + 4) = (int)lVar35;
                  iVar22 = (int)DAT_051605d8;
                  if ((int)DAT_051605d8 < DAT_051605d8._4_4_) {
                    *(undefined8 **)(DAT_051605e0 + (long)(int)DAT_051605d8 * 8) =
                         &DAT_0516065c + lVar35;
                    iVar22 = (int)DAT_051605d8 + 1;
                    DAT_051605d8 = CONCAT44(DAT_051605d8._4_4_,iVar22);
                  }
                  puVar17 = DAT_051605e0;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 0xd);
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar27 * 8);
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        *(uint **)(puVar17 + uVar28 * 8) = puVar29;
                        *(uint **)(puVar17 + uVar25 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar17 + uVar28 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar33;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar33[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127b350;
LAB_0127b300:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar33[-1] = puVar29;
                          *puVar33 = puVar31;
                          puVar34 = (uint *)puVar33[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127b300;
LAB_0127b350:
                          if (puVar34 == (uint *)0x0) goto LAB_0127b300;
                          if (*puVar29 <= *puVar34) goto LAB_0127b300;
                          uVar21 = uVar26 + 1;
                          *puVar33 = puVar34;
                          puVar33[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar33 = puVar33 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar21 * 8);
                    uVar27 = uVar21;
                    do {
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        *(uint **)(puVar17 + uVar28 * 8 + -8) = puVar29;
                        *(uint **)(puVar17 + uVar28 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_051605d4 = '\x01';
              }
              else if (DAT_051605d4 != '\x01') goto LAB_0127b3a8;
              if ((int)DAT_051605d8 == 0) {
LAB_0127b3a8:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_051605d8 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar22 = (int)DAT_051605d8 + -1;
                  do {
                    iVar20 = iVar22 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar27 = iVar20 >> 1;
                    if (*(uint **)(DAT_051605e0 + (long)(int)uVar27 * 8) == (uint *)0x0)
                    goto joined_r0x0127b3d4;
                    uVar26 = **(uint **)(DAT_051605e0 + (long)(int)uVar27 * 8);
                    if (uVar26 == uVar36) goto joined_r0x0127b3d4;
                    if (uVar26 < uVar36) {
                      uVar21 = uVar27 + 1;
                    }
                    else {
                      iVar22 = uVar27 - 1;
                    }
                  } while ((int)uVar21 < iVar22);
                }
                uVar27 = uVar21;
                if ((*(uint **)(DAT_051605e0 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_051605e0 + (long)(int)uVar21 * 8) == uVar36)) {
joined_r0x0127b3d4:
                  if (uVar27 < 0xd) {
                    uVar21 = *(uint *)(*(long *)(DAT_051605e0 + (ulong)uVar27 * 8) + 4);
                    if (uVar21 < 0xd) {
                      DAT_051605c8 = '\x01';
                      DAT_051605cc = uVar36;
                      DAT_051605d0 = uVar21;
                      goto LAB_0127b3fc;
                    }
                    goto LAB_0127b3a8;
                  }
                }
                uVar21 = 0;
              }
            }
LAB_0127b3fc:
          }
LAB_0127b404:
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar29 != (uint *)0x0)) && (*puVar29 != 0)) &&
             ((uVar36 = puVar29[1], uVar36 != 0 && ((ulong)(ushort)puVar29[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar27 = 0;
              if ((ulong)uVar36 != 0) {
                uVar27 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar36);
              }
              if (*puVar29 <= uVar27) {
                uVar27 = 0xffffffff;
              }
              if (uVar27 < *(uint *)PTR_DAT_04bbbe40) {
                *(short *)(*(long *)(PTR_DAT_04bbbe40 + 8) + (long)(int)uVar27 * 2) = (short)uVar21;
              }
            }
          }
          uVar36 = *puVar1;
          if (uVar36 != 0) {
            cVar18 = *PTR_DAT_04bbbdd8;
            do {
              if (cVar18 == '\0') {
                *(undefined8 *)puVar16 = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
                cVar18 = '\x01';
                *(undefined8 *)(puVar16 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x98) = 0xffffffffffffffff;
                uVar36 = *puVar1;
                *PTR_DAT_04bbbdd8 = 1;
              }
              else {
                uVar21 = *(uint *)(puVar16 + 0x10);
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar36 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_0127b590;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)uVar36;
              uVar36 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar36 = 0, puVar1 == puVar29)) goto LAB_0127b590;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
              if (lVar35 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)(puVar16 + 0x10) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar24 = (int *)(lVar35 + 4);
              while (piVar24[-1] != -0x3fe1b859) {
                piVar24 = piVar24 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_0127b58c;
              }
              iVar22 = 0;
              if (*piVar24 != -1) {
                iVar22 = *piVar24;
              }
              *(int *)(puVar16 + 0x10) = iVar22;
              uVar36 = *puVar1;
              if (uVar36 == 0) break;
            } while( true );
          }
LAB_0127b58c:
          uVar36 = 0;
LAB_0127b590:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_05160860 == '\x01') && (DAT_05160864 == uVar36)) {
              uVar21 = DAT_05160868;
              if (4 < DAT_05160868) goto LAB_0127b840;
            }
            else {
              if (((DAT_051608a8 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_051608a8), iVar22 != 0)) {
                DAT_05160870 = 0x500000000;
                DAT_05160878 = (undefined8 *)&DAT_05160880;
                __cxa_guard_release(&DAT_051608a8);
              }
              if ((DAT_051608b0 & 1) == 0) {
                DAT_051608b0 = 1;
                if (((DAT_051608e0 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_051608e0), iVar22 != 0)) {
                  DAT_051608d4 = 0xffffffff00000000;
                  DAT_051608b4 = 0xffffffff00000000;
                  DAT_051608bc = 0xffffffff00000000;
                  DAT_051608c4 = 0xffffffff00000000;
                  DAT_051608cc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_051608e0);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_DAT_04989b88)[lVar35];
                  if (local_174 != pbVar38) {
                    lVar23 = 0;
                    do {
                      if (pbVar38[lVar23] == 0) {
LAB_0127b6e4:
                        iVar22 = (int)lVar23;
joined_r0x0127b6e8:
                        if (0xff < iVar22) {
                          iVar22 = 0xff;
                        }
                        goto LAB_0127b6f0;
                      }
                      if (pbVar38[lVar23 + 1] == 0) {
                        lVar23 = lVar23 + 1;
                        goto LAB_0127b6e4;
                      }
                      if (pbVar38[lVar23 + 2] == 0) {
                        iVar22 = (int)lVar23 + 2;
                        goto joined_r0x0127b6e8;
                      }
                      lVar23 = lVar23 + 3;
                    } while (lVar23 != 0x80001);
                    iVar22 = 0;
LAB_0127b6f0:
                    memcpy(local_174,pbVar38,(long)iVar22);
                    local_174[iVar22] = 0;
                  }
                  uVar21 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar27 = crc32b(uVar27,uVar21,0x4c11db7);
                      uVar21 = (uint)*pbVar38;
                    } while (uVar21 != 0);
                    uVar27 = ~uVar27;
                  }
                  *(uint *)(&DAT_051608b4 + lVar35) = uVar27;
                  *(int *)((long)&DAT_051608b4 + lVar35 * 8 + 4) = (int)lVar35;
                  iVar22 = (int)DAT_05160870;
                  if ((int)DAT_05160870 < DAT_05160870._4_4_) {
                    DAT_05160878[(int)DAT_05160870] = &DAT_051608b4 + lVar35;
                    iVar22 = (int)DAT_05160870 + 1;
                    DAT_05160870 = CONCAT44(DAT_05160870._4_4_,iVar22);
                  }
                  puVar33 = DAT_05160878;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 5);
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = (uint *)puVar33[uVar27];
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = (uint *)puVar33[uVar28];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        puVar33[uVar28] = puVar29;
                        puVar33[uVar25] = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar28 + 1;
                      do {
                        puVar29 = (uint *)*puVar32;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar32[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127b9c0;
LAB_0127b970:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar32[-1] = puVar29;
                          *puVar32 = puVar31;
                          puVar34 = (uint *)puVar32[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127b970;
LAB_0127b9c0:
                          if (puVar34 == (uint *)0x0) goto LAB_0127b970;
                          if (*puVar29 <= *puVar34) goto LAB_0127b970;
                          uVar21 = uVar26 + 1;
                          *puVar32 = puVar34;
                          puVar32[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = (uint *)puVar33[uVar21];
                    uVar27 = uVar21;
                    do {
                      puVar31 = (uint *)puVar33[uVar28 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        puVar33[uVar28 - 1] = puVar29;
                        puVar33[uVar28] = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_0516086c = '\x01';
              }
              else if (DAT_0516086c != '\x01') goto LAB_0127b840;
              if ((int)DAT_05160870 == 0) {
LAB_0127b840:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_05160870 < 2) {
                  uVar27 = 0;
                  puVar29 = (uint *)*DAT_05160878;
                  uVar21 = uVar27;
                  if (puVar29 != (uint *)0x0) goto LAB_0127b814;
joined_r0x0127b828:
                  if (uVar21 < 5) {
                    uVar21 = *(uint *)(DAT_05160878[uVar21] + 4);
                    if (uVar21 < 5) {
                      DAT_05160860 = '\x01';
                      DAT_05160864 = uVar36;
                      DAT_05160868 = uVar21;
                      goto LAB_0127bd98;
                    }
                    goto LAB_0127b840;
                  }
                }
                else {
                  uVar27 = 0;
                  iVar22 = (int)DAT_05160870 + -1;
                  do {
                    iVar20 = iVar22 + uVar27;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar27)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar21 = iVar20 >> 1;
                    if ((uint *)DAT_05160878[(int)uVar21] == (uint *)0x0) goto joined_r0x0127b828;
                    uVar26 = *(uint *)DAT_05160878[(int)uVar21];
                    if (uVar26 == uVar36) goto joined_r0x0127b828;
                    if (uVar26 < uVar36) {
                      uVar27 = uVar21 + 1;
                    }
                    else {
                      iVar22 = uVar21 - 1;
                    }
                  } while ((int)uVar27 < iVar22);
                  puVar29 = (uint *)DAT_05160878[(int)uVar27];
                  uVar21 = uVar27;
                  if (puVar29 == (uint *)0x0) goto joined_r0x0127b828;
LAB_0127b814:
                  uVar21 = uVar27;
                  if (*puVar29 == uVar36) goto joined_r0x0127b828;
                }
                uVar21 = 0;
              }
            }
LAB_0127bd98:
            uVar19 = (undefined2)uVar21;
          }
          else {
            if ((DAT_051607d8 == '\x01') && (DAT_051607dc == uVar36)) {
              uVar21 = DAT_051607e0;
              if (4 < DAT_051607e0) goto LAB_0127bd78;
            }
            else {
              if (((DAT_05160820 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160820), iVar22 != 0)) {
                DAT_051607e8 = 0x500000000;
                DAT_051607f0 = &DAT_051607f8;
                __cxa_guard_release(&DAT_05160820);
              }
              if ((DAT_05160828 & 1) == 0) {
                DAT_05160828 = 1;
                if (((DAT_05160858 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160858), iVar22 != 0)) {
                  DAT_0516084c = 0xffffffff00000000;
                  DAT_0516082c = 0xffffffff00000000;
                  DAT_05160834 = 0xffffffff00000000;
                  DAT_0516083c = 0xffffffff00000000;
                  DAT_05160844 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160858);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_s_Plane_04989b48)[lVar35];
                  if (local_174 != pbVar38) {
                    lVar23 = 0;
                    do {
                      if (pbVar38[lVar23] == 0) {
LAB_0127baa8:
                        iVar22 = (int)lVar23;
joined_r0x0127baac:
                        if (0xff < iVar22) {
                          iVar22 = 0xff;
                        }
                        goto LAB_0127bab4;
                      }
                      if (pbVar38[lVar23 + 1] == 0) {
                        lVar23 = lVar23 + 1;
                        goto LAB_0127baa8;
                      }
                      if (pbVar38[lVar23 + 2] == 0) {
                        iVar22 = (int)lVar23 + 2;
                        goto joined_r0x0127baac;
                      }
                      lVar23 = lVar23 + 3;
                    } while (lVar23 != 0x80001);
                    iVar22 = 0;
LAB_0127bab4:
                    memcpy(local_174,pbVar38,(long)iVar22);
                    local_174[iVar22] = 0;
                  }
                  uVar21 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar27 = crc32b(uVar27,uVar21,0x4c11db7);
                      uVar21 = (uint)*pbVar38;
                    } while (uVar21 != 0);
                    uVar27 = ~uVar27;
                  }
                  *(uint *)(&DAT_0516082c + lVar35) = uVar27;
                  *(int *)((long)&DAT_0516082c + lVar35 * 8 + 4) = (int)lVar35;
                  iVar22 = (int)DAT_051607e8;
                  if ((int)DAT_051607e8 < DAT_051607e8._4_4_) {
                    *(undefined8 **)(DAT_051607f0 + (long)(int)DAT_051607e8 * 8) =
                         &DAT_0516082c + lVar35;
                    iVar22 = (int)DAT_051607e8 + 1;
                    DAT_051607e8 = CONCAT44(DAT_051607e8._4_4_,iVar22);
                  }
                  puVar17 = DAT_051607f0;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 5);
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar27 * 8);
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        *(uint **)(puVar17 + uVar28 * 8) = puVar29;
                        *(uint **)(puVar17 + uVar25 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar17 + uVar28 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar33;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar33[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127bd20;
LAB_0127bcd0:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar33[-1] = puVar29;
                          *puVar33 = puVar31;
                          puVar34 = (uint *)puVar33[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127bcd0;
LAB_0127bd20:
                          if (puVar34 == (uint *)0x0) goto LAB_0127bcd0;
                          if (*puVar29 <= *puVar34) goto LAB_0127bcd0;
                          uVar21 = uVar26 + 1;
                          *puVar33 = puVar34;
                          puVar33[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar33 = puVar33 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar21 * 8);
                    uVar27 = uVar21;
                    do {
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        *(uint **)(puVar17 + uVar28 * 8 + -8) = puVar29;
                        *(uint **)(puVar17 + uVar28 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_051607e4 = '\x01';
              }
              else if (DAT_051607e4 != '\x01') goto LAB_0127bd78;
              if ((int)DAT_051607e8 == 0) {
LAB_0127bd78:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_051607e8 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar22 = (int)DAT_051607e8 + -1;
                  do {
                    iVar20 = iVar22 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar27 = iVar20 >> 1;
                    if (*(uint **)(DAT_051607f0 + (long)(int)uVar27 * 8) == (uint *)0x0)
                    goto joined_r0x0127bdac;
                    uVar26 = **(uint **)(DAT_051607f0 + (long)(int)uVar27 * 8);
                    if (uVar26 == uVar36) goto joined_r0x0127bdac;
                    if (uVar26 < uVar36) {
                      uVar21 = uVar27 + 1;
                    }
                    else {
                      iVar22 = uVar27 - 1;
                    }
                  } while ((int)uVar21 < iVar22);
                }
                uVar27 = uVar21;
                if ((*(uint **)(DAT_051607f0 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_051607f0 + (long)(int)uVar21 * 8) == uVar36)) {
joined_r0x0127bdac:
                  if (uVar27 < 5) {
                    uVar21 = *(uint *)(*(long *)(DAT_051607f0 + (ulong)uVar27 * 8) + 4);
                    if (uVar21 < 5) {
                      DAT_051607d8 = '\x01';
                      DAT_051607dc = uVar36;
                      DAT_051607e0 = uVar21;
                      goto LAB_0127bdd4;
                    }
                    goto LAB_0127bd78;
                  }
                }
                uVar21 = 0;
              }
            }
LAB_0127bdd4:
            uVar19 = (undefined2)uVar21;
          }
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar29 != (uint *)0x0)) && (*puVar29 != 0)) &&
             ((uVar36 = puVar29[1], uVar36 != 0 && ((ulong)(ushort)puVar29[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar21 = 0;
              if ((ulong)uVar36 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar36);
              }
              if (*puVar29 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bbbe48) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar21 * 2) = uVar19;
              }
            }
          }
          uVar36 = *puVar1;
          if (uVar36 != 0) {
            cVar18 = *PTR_DAT_04bbbdd8;
            do {
              if (cVar18 == '\0') {
                *(undefined8 *)puVar16 = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
                cVar18 = '\x01';
                *(undefined8 *)(puVar16 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x98) = 0xffffffffffffffff;
                uVar36 = *puVar1;
                *PTR_DAT_04bbbdd8 = 1;
              }
              else {
                uVar21 = *(uint *)(puVar16 + 0x14);
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar36 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_0127bf60;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)uVar36;
              uVar36 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar36 = 0, puVar1 == puVar29)) goto LAB_0127bf60;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
              if (lVar35 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)(puVar16 + 0x14) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar24 = (int *)(lVar35 + 4);
              while (piVar24[-1] != -0x3807d503) {
                piVar24 = piVar24 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_0127bf5c;
              }
              iVar22 = 0;
              if (*piVar24 != -1) {
                iVar22 = *piVar24;
              }
              *(int *)(puVar16 + 0x14) = iVar22;
              uVar36 = *puVar1;
              if (uVar36 == 0) break;
            } while( true );
          }
LAB_0127bf5c:
          uVar36 = 0;
LAB_0127bf60:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_05160940 == '\x01') && (DAT_05160944 == uVar36)) {
              uVar21 = DAT_05160948;
              if (1 < DAT_05160948) goto LAB_0127c15c;
            }
            else {
              if (((DAT_05160970 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160970), iVar22 != 0)) {
                DAT_05160950 = 0x200000000;
                DAT_05160958 = (undefined8 *)&DAT_05160960;
                __cxa_guard_release(&DAT_05160970);
              }
              if ((DAT_05160978 & 1) == 0) {
                DAT_05160978 = 1;
                if (((DAT_05160990 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160990), iVar22 != 0)) {
                  _DAT_0516097c = 0xffffffff00000000;
                  DAT_05160984 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160990);
                }
                _DAT_0516097c = (ulong)~uVar6;
                iVar22 = (int)DAT_05160950;
                iVar20 = DAT_05160950._4_4_;
                if ((int)DAT_05160950 < DAT_05160950._4_4_) {
                  DAT_05160958[(int)DAT_05160950] = &DAT_0516097c;
                  iVar22 = (int)DAT_05160950 + 1;
                  DAT_05160950 = CONCAT44(DAT_05160950._4_4_,iVar22);
                  iVar20 = DAT_05160950._4_4_;
                }
                uVar2 = crc32b(0xffffffff,0x31,0x4c11db7);
                uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
                uVar2 = crc32b(uVar2,0xae,0x4c11db7);
                uVar21 = crc32b(uVar2,0xb5,0x4c11db7);
                DAT_05160984 = CONCAT44(1,~uVar21);
                if (iVar22 < iVar20) {
                  DAT_05160958[iVar22] = &DAT_05160984;
                  iVar22 = (int)DAT_05160950 + 1;
                  DAT_05160950 = CONCAT44(DAT_05160950._4_4_,iVar22);
                }
                puVar33 = DAT_05160958;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = (uint *)puVar33[uVar27];
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = (uint *)puVar33[uVar28];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        puVar33[uVar28] = puVar29;
                        puVar33[uVar25] = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar28 + 1;
                      do {
                        puVar29 = (uint *)*puVar32;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar32[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127c2e0;
LAB_0127c290:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar32[-1] = puVar29;
                          *puVar32 = puVar31;
                          puVar34 = (uint *)puVar32[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127c290;
LAB_0127c2e0:
                          if (puVar34 == (uint *)0x0) goto LAB_0127c290;
                          if (*puVar29 <= *puVar34) goto LAB_0127c290;
                          uVar21 = uVar26 + 1;
                          *puVar32 = puVar34;
                          puVar32[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = (uint *)puVar33[uVar21];
                    uVar27 = uVar21;
                    do {
                      puVar31 = (uint *)puVar33[uVar28 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        puVar33[uVar28 - 1] = puVar29;
                        puVar33[uVar28] = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_0516094c = '\x01';
              }
              else if (DAT_0516094c != '\x01') goto LAB_0127c15c;
              if ((int)DAT_05160950 == 0) {
LAB_0127c15c:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_05160950 < 2) {
                  uVar27 = 0;
                  puVar29 = (uint *)*DAT_05160958;
                  uVar21 = uVar27;
                  if (puVar29 != (uint *)0x0) goto LAB_0127c130;
joined_r0x0127c144:
                  if (uVar21 < 2) {
                    uVar21 = *(uint *)(DAT_05160958[uVar21] + 4);
                    if (uVar21 < 2) {
                      DAT_05160940 = '\x01';
                      DAT_05160944 = uVar36;
                      DAT_05160948 = uVar21;
                      goto LAB_0127c624;
                    }
                    goto LAB_0127c15c;
                  }
                }
                else {
                  uVar27 = 0;
                  iVar22 = (int)DAT_05160950 + -1;
                  do {
                    iVar20 = iVar22 + uVar27;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar27)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar21 = iVar20 >> 1;
                    if ((uint *)DAT_05160958[(int)uVar21] == (uint *)0x0) goto joined_r0x0127c144;
                    uVar26 = *(uint *)DAT_05160958[(int)uVar21];
                    if (uVar26 == uVar36) goto joined_r0x0127c144;
                    if (uVar26 < uVar36) {
                      uVar27 = uVar21 + 1;
                    }
                    else {
                      iVar22 = uVar21 - 1;
                    }
                  } while ((int)uVar27 < iVar22);
                  puVar29 = (uint *)DAT_05160958[(int)uVar27];
                  uVar21 = uVar27;
                  if (puVar29 == (uint *)0x0) goto joined_r0x0127c144;
LAB_0127c130:
                  uVar21 = uVar27;
                  if (*puVar29 == uVar36) goto joined_r0x0127c144;
                }
                uVar21 = 0;
              }
            }
          }
          else {
            if ((DAT_051608e8 == '\x01') && (DAT_051608ec == uVar36)) {
              uVar21 = DAT_051608f0;
              if (1 < DAT_051608f0) goto LAB_0127c5c8;
            }
            else {
              if (((DAT_05160918 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160918), iVar22 != 0)) {
                DAT_051608f8 = 0x200000000;
                DAT_05160900 = &DAT_05160908;
                __cxa_guard_release(&DAT_05160918);
              }
              if ((DAT_05160920 & 1) == 0) {
                DAT_05160920 = 1;
                if (((DAT_05160938 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160938), iVar22 != 0)) {
                  _DAT_05160924 = 0xffffffff00000000;
                  DAT_0516092c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160938);
                }
                _DAT_05160924 = (ulong)~uVar12;
                iVar22 = (int)DAT_051608f8;
                iVar20 = DAT_051608f8._4_4_;
                if ((int)DAT_051608f8 < DAT_051608f8._4_4_) {
                  *(undefined4 **)(DAT_05160900 + (long)(int)DAT_051608f8 * 8) = &DAT_05160924;
                  iVar22 = (int)DAT_051608f8 + 1;
                  DAT_051608f8 = CONCAT44(DAT_051608f8._4_4_,iVar22);
                  iVar20 = DAT_051608f8._4_4_;
                }
                uVar21 = crc32b(uVar5,0x31,0x4c11db7);
                DAT_0516092c = CONCAT44(1,~uVar21);
                if (iVar22 < iVar20) {
                  *(undefined8 **)(DAT_05160900 + (long)iVar22 * 8) = &DAT_0516092c;
                  iVar22 = (int)DAT_051608f8 + 1;
                  DAT_051608f8 = CONCAT44(DAT_051608f8._4_4_,iVar22);
                }
                puVar17 = DAT_05160900;
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar27 * 8);
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        *(uint **)(puVar17 + uVar28 * 8) = puVar29;
                        *(uint **)(puVar17 + uVar25 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar17 + uVar28 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar33;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar33[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127c570;
LAB_0127c520:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar33[-1] = puVar29;
                          *puVar33 = puVar31;
                          puVar34 = (uint *)puVar33[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127c520;
LAB_0127c570:
                          if (puVar34 == (uint *)0x0) goto LAB_0127c520;
                          if (*puVar29 <= *puVar34) goto LAB_0127c520;
                          uVar21 = uVar26 + 1;
                          *puVar33 = puVar34;
                          puVar33[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar33 = puVar33 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar21 * 8);
                    uVar27 = uVar21;
                    do {
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        *(uint **)(puVar17 + uVar28 * 8 + -8) = puVar29;
                        *(uint **)(puVar17 + uVar28 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_051608f4 = '\x01';
              }
              else if (DAT_051608f4 != '\x01') goto LAB_0127c5c8;
              if ((int)DAT_051608f8 == 0) {
LAB_0127c5c8:
                uVar21 = 0;
              }
              else {
                if ((int)DAT_051608f8 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar22 = (int)DAT_051608f8 + -1;
                  do {
                    iVar20 = iVar22 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar27 = iVar20 >> 1;
                    if (*(uint **)(DAT_05160900 + (long)(int)uVar27 * 8) == (uint *)0x0)
                    goto joined_r0x0127c5f4;
                    uVar26 = **(uint **)(DAT_05160900 + (long)(int)uVar27 * 8);
                    if (uVar26 == uVar36) goto joined_r0x0127c5f4;
                    if (uVar26 < uVar36) {
                      uVar21 = uVar27 + 1;
                    }
                    else {
                      iVar22 = uVar27 - 1;
                    }
                  } while ((int)uVar21 < iVar22);
                }
                uVar27 = uVar21;
                if ((*(uint **)(DAT_05160900 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05160900 + (long)(int)uVar21 * 8) == uVar36)) {
joined_r0x0127c5f4:
                  if (uVar27 < 2) {
                    uVar21 = *(uint *)(*(long *)(DAT_05160900 + (ulong)uVar27 * 8) + 4);
                    if (uVar21 < 2) {
                      DAT_051608e8 = '\x01';
                      DAT_051608ec = uVar36;
                      DAT_051608f0 = uVar21;
                      goto LAB_0127c61c;
                    }
                    goto LAB_0127c5c8;
                  }
                }
                uVar21 = 0;
              }
            }
LAB_0127c61c:
          }
LAB_0127c624:
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar29 != (uint *)0x0)) && (*puVar29 != 0)) &&
             ((uVar36 = puVar29[1], uVar36 != 0 && ((ulong)(ushort)puVar29[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar27 = 0;
              if ((ulong)uVar36 != 0) {
                uVar27 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar36);
              }
              if (*puVar29 <= uVar27) {
                uVar27 = 0xffffffff;
              }
              if (uVar27 < *(uint *)PTR_DAT_04bbbe50) {
                *(short *)(*(long *)(PTR_DAT_04bbbe50 + 8) + (long)(int)uVar27 * 2) = (short)uVar21;
              }
            }
          }
          uVar36 = *puVar1;
          if (uVar36 != 0) {
            cVar18 = *PTR_DAT_04bbbdd8;
            do {
              if (cVar18 == '\0') {
                *(undefined8 *)puVar16 = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 8) = 0xffffffffffffffff;
                cVar18 = '\x01';
                *(undefined8 *)(puVar16 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar16 + 0x98) = 0xffffffffffffffff;
                uVar36 = *puVar1;
                *PTR_DAT_04bbbdd8 = 1;
              }
              else {
                uVar21 = *(uint *)(puVar16 + 0x18);
                if (-1 < (int)uVar21) {
                  if ((uint *)((long)puVar1 + (ulong)uVar21) != (uint *)0x0) {
                    uVar36 = *(uint *)((long)puVar1 + (ulong)uVar21);
                    goto LAB_0127c7b0;
                  }
                  break;
                }
                if (uVar21 != 0xffffffff) break;
              }
              puVar29 = (uint *)(ulong)uVar36;
              uVar36 = 0;
              if ((puVar29 == (uint *)0x0) || (uVar36 = 0, puVar1 == puVar29)) goto LAB_0127c7b0;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar29)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar29);
              if (lVar35 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar29));
              *(undefined4 *)(puVar16 + 0x18) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar24 = (int *)(lVar35 + 4);
              while (piVar24[-1] != 0x59d78633) {
                piVar24 = piVar24 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_0127c7ac;
              }
              iVar22 = 0;
              if (*piVar24 != -1) {
                iVar22 = *piVar24;
              }
              *(int *)(puVar16 + 0x18) = iVar22;
              uVar36 = *puVar1;
              if (uVar36 == 0) break;
            } while( true );
          }
LAB_0127c7ac:
          uVar36 = 0;
LAB_0127c7b0:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_05160a20 == '\x01') && (DAT_05160a24 == uVar36)) {
              uVar21 = DAT_05160a28;
              if (4 < DAT_05160a28) goto LAB_0127ca60;
            }
            else {
              if (((DAT_05160a68 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05160a68), iVar22 != 0)) {
                DAT_05160a30 = 0x500000000;
                DAT_05160a38 = (undefined8 *)&DAT_05160a40;
                __cxa_guard_release(&DAT_05160a68);
              }
              if ((DAT_05160a70 & 1) == 0) {
                DAT_05160a70 = 1;
                if (((DAT_05160aa0 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160aa0), iVar22 != 0)) {
                  DAT_05160a94 = 0xffffffff00000000;
                  DAT_05160a74 = 0xffffffff00000000;
                  DAT_05160a7c = 0xffffffff00000000;
                  DAT_05160a84 = 0xffffffff00000000;
                  DAT_05160a8c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160aa0);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_DAT_04989c50)[lVar35];
                  if (local_174 != pbVar38) {
                    lVar23 = 0;
                    do {
                      if (pbVar38[lVar23] == 0) {
LAB_0127c904:
                        iVar22 = (int)lVar23;
joined_r0x0127c908:
                        if (0xff < iVar22) {
                          iVar22 = 0xff;
                        }
                        goto LAB_0127c910;
                      }
                      if (pbVar38[lVar23 + 1] == 0) {
                        lVar23 = lVar23 + 1;
                        goto LAB_0127c904;
                      }
                      if (pbVar38[lVar23 + 2] == 0) {
                        iVar22 = (int)lVar23 + 2;
                        goto joined_r0x0127c908;
                      }
                      lVar23 = lVar23 + 3;
                    } while (lVar23 != 0x80001);
                    iVar22 = 0;
LAB_0127c910:
                    memcpy(local_174,pbVar38,(long)iVar22);
                    local_174[iVar22] = 0;
                  }
                  uVar21 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar27 = crc32b(uVar27,uVar21,0x4c11db7);
                      uVar21 = (uint)*pbVar38;
                    } while (uVar21 != 0);
                    uVar27 = ~uVar27;
                  }
                  *(uint *)(&DAT_05160a74 + lVar35) = uVar27;
                  *(int *)((long)&DAT_05160a74 + lVar35 * 8 + 4) = (int)lVar35;
                  iVar22 = (int)DAT_05160a30;
                  if ((int)DAT_05160a30 < DAT_05160a30._4_4_) {
                    DAT_05160a38[(int)DAT_05160a30] = &DAT_05160a74 + lVar35;
                    iVar22 = (int)DAT_05160a30 + 1;
                    DAT_05160a30 = CONCAT44(DAT_05160a30._4_4_,iVar22);
                  }
                  puVar33 = DAT_05160a38;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 5);
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = (uint *)puVar33[uVar27];
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = (uint *)puVar33[uVar28];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        puVar33[uVar28] = puVar29;
                        puVar33[uVar25] = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar32 = puVar33 + uVar28 + 1;
                      do {
                        puVar29 = (uint *)*puVar32;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar32[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127cbf0;
LAB_0127cba0:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar32[-1] = puVar29;
                          *puVar32 = puVar31;
                          puVar34 = (uint *)puVar32[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127cba0;
LAB_0127cbf0:
                          if (puVar34 == (uint *)0x0) goto LAB_0127cba0;
                          if (*puVar29 <= *puVar34) goto LAB_0127cba0;
                          uVar21 = uVar26 + 1;
                          *puVar32 = puVar34;
                          puVar32[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar32 = puVar32 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = (uint *)puVar33[uVar21];
                    uVar27 = uVar21;
                    do {
                      puVar31 = (uint *)puVar33[uVar28 - 1];
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        puVar33[uVar28 - 1] = puVar29;
                        puVar33[uVar28] = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_05160a2c = '\x01';
              }
              else if (DAT_05160a2c != '\x01') goto LAB_0127ca60;
              if ((int)DAT_05160a30 != 0) {
                if ((int)DAT_05160a30 < 2) {
                  uVar27 = 0;
                  puVar29 = (uint *)*DAT_05160a38;
                  uVar21 = uVar27;
                  if (puVar29 != (uint *)0x0) goto LAB_0127ca34;
joined_r0x0127ca48:
                  if (uVar21 < 5) {
                    uVar21 = *(uint *)(DAT_05160a38[uVar21] + 4);
                    if (uVar21 < 5) {
                      DAT_05160a20 = '\x01';
                      DAT_05160a24 = uVar36;
                      DAT_05160a28 = uVar21;
                      goto LAB_0127ca64;
                    }
                    goto LAB_0127ca60;
                  }
                }
                else {
                  uVar27 = 0;
                  iVar22 = (int)DAT_05160a30 + -1;
                  do {
                    iVar20 = iVar22 + uVar27;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar27)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar21 = iVar20 >> 1;
                    if ((uint *)DAT_05160a38[(int)uVar21] == (uint *)0x0) goto joined_r0x0127ca48;
                    uVar26 = *(uint *)DAT_05160a38[(int)uVar21];
                    if (uVar26 == uVar36) goto joined_r0x0127ca48;
                    if (uVar26 < uVar36) {
                      uVar27 = uVar21 + 1;
                    }
                    else {
                      iVar22 = uVar21 - 1;
                    }
                  } while ((int)uVar27 < iVar22);
                  puVar29 = (uint *)DAT_05160a38[(int)uVar27];
                  uVar21 = uVar27;
                  if (puVar29 == (uint *)0x0) goto joined_r0x0127ca48;
LAB_0127ca34:
                  uVar21 = uVar27;
                  if (*puVar29 == uVar36) goto joined_r0x0127ca48;
                }
                uVar19 = 0;
                goto LAB_0127cfd0;
              }
LAB_0127ca60:
              uVar21 = 0;
            }
LAB_0127ca64:
            uVar19 = (undefined2)uVar21;
          }
          else {
            if ((DAT_05160998 == '\x01') && (DAT_0516099c == uVar36)) {
              uVar21 = DAT_051609a0;
              if (4 < DAT_051609a0) goto LAB_0127cfb8;
            }
            else {
              if (((DAT_051609e0 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_051609e0), iVar22 != 0)) {
                DAT_051609a8 = 0x500000000;
                DAT_051609b0 = &DAT_051609b8;
                __cxa_guard_release(&DAT_051609e0);
              }
              if ((DAT_051609e8 & 1) == 0) {
                DAT_051609e8 = 1;
                if (((DAT_05160a18 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05160a18), iVar22 != 0)) {
                  DAT_05160a0c = 0xffffffff00000000;
                  DAT_051609ec = 0xffffffff00000000;
                  DAT_051609f4 = 0xffffffff00000000;
                  DAT_051609fc = 0xffffffff00000000;
                  DAT_05160a04 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05160a18);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar38 = (&PTR_s_Invalid_04989be8)[lVar35];
                  if (local_174 != pbVar38) {
                    lVar23 = 0;
                    do {
                      if (pbVar38[lVar23] == 0) {
LAB_0127cce4:
                        iVar22 = (int)lVar23;
joined_r0x0127cce8:
                        if (0xff < iVar22) {
                          iVar22 = 0xff;
                        }
                        goto LAB_0127ccf0;
                      }
                      if (pbVar38[lVar23 + 1] == 0) {
                        lVar23 = lVar23 + 1;
                        goto LAB_0127cce4;
                      }
                      if (pbVar38[lVar23 + 2] == 0) {
                        iVar22 = (int)lVar23 + 2;
                        goto joined_r0x0127cce8;
                      }
                      lVar23 = lVar23 + 3;
                    } while (lVar23 != 0x80001);
                    iVar22 = 0;
LAB_0127ccf0:
                    memcpy(local_174,pbVar38,(long)iVar22);
                    local_174[iVar22] = 0;
                  }
                  uVar21 = (uint)*pbVar38;
                  if (*pbVar38 == 0) {
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = 0xffffffff;
                    do {
                      pbVar38 = pbVar38 + 1;
                      uVar27 = crc32b(uVar27,uVar21,0x4c11db7);
                      uVar21 = (uint)*pbVar38;
                    } while (uVar21 != 0);
                    uVar27 = ~uVar27;
                  }
                  *(uint *)(&DAT_051609ec + lVar35) = uVar27;
                  *(int *)((long)&DAT_051609ec + lVar35 * 8 + 4) = (int)lVar35;
                  iVar22 = (int)DAT_051609a8;
                  if ((int)DAT_051609a8 < DAT_051609a8._4_4_) {
                    *(undefined8 **)(DAT_051609b0 + (long)(int)DAT_051609a8 * 8) =
                         &DAT_051609ec + lVar35;
                    iVar22 = (int)DAT_051609a8 + 1;
                    DAT_051609a8 = CONCAT44(DAT_051609a8._4_4_,iVar22);
                  }
                  puVar17 = DAT_051609b0;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 5);
                if (1 < iVar22) {
                  uVar27 = 0;
                  uVar21 = iVar22 - 1;
                  do {
                    if ((int)uVar21 <= (int)uVar27) break;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar27 * 8);
                    uVar25 = (ulong)uVar27;
                    if ((uVar21 - uVar27 & 1) == 0) {
                      uVar28 = uVar25;
                      puVar31 = puVar29;
                    }
                    else {
                      uVar28 = uVar25 + 1;
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar31 < *puVar29)) {
                        *(uint **)(puVar17 + uVar28 * 8) = puVar29;
                        *(uint **)(puVar17 + uVar25 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                    }
                    uVar30 = (ulong)uVar21;
                    uVar21 = uVar27;
                    if (~uVar25 + uVar30 != 0) {
                      puVar33 = (undefined8 *)(puVar17 + uVar28 * 8 + 8);
                      do {
                        puVar29 = (uint *)*puVar33;
                        uVar26 = (uint)uVar28;
                        if (((puVar31 == (uint *)0x0) || (puVar29 == (uint *)0x0)) ||
                           (*puVar31 <= *puVar29)) {
                          puVar34 = (uint *)puVar33[1];
                          if (puVar29 != (uint *)0x0) goto LAB_0127cf60;
LAB_0127cf10:
                          puVar29 = puVar34;
                        }
                        else {
                          puVar33[-1] = puVar29;
                          *puVar33 = puVar31;
                          puVar34 = (uint *)puVar33[1];
                          puVar29 = puVar31;
                          uVar21 = uVar26;
                          if (puVar31 == (uint *)0x0) goto LAB_0127cf10;
LAB_0127cf60:
                          if (puVar34 == (uint *)0x0) goto LAB_0127cf10;
                          if (*puVar29 <= *puVar34) goto LAB_0127cf10;
                          uVar21 = uVar26 + 1;
                          *puVar33 = puVar34;
                          puVar33[1] = puVar29;
                        }
                        uVar28 = uVar28 + 2;
                        puVar33 = puVar33 + 2;
                        puVar31 = puVar29;
                      } while (uVar30 != uVar28);
                    }
                    if ((int)uVar21 <= (int)uVar27) break;
                    uVar28 = (ulong)uVar21;
                    puVar29 = *(uint **)(puVar17 + (ulong)uVar21 * 8);
                    uVar27 = uVar21;
                    do {
                      puVar31 = *(uint **)(puVar17 + uVar28 * 8 + -8);
                      if (((puVar29 != (uint *)0x0) && (puVar31 != (uint *)0x0)) &&
                         (*puVar29 < *puVar31)) {
                        uVar27 = (uint)uVar28;
                        *(uint **)(puVar17 + uVar28 * 8 + -8) = puVar29;
                        *(uint **)(puVar17 + uVar28 * 8) = puVar31;
                        puVar31 = puVar29;
                      }
                      uVar28 = uVar28 - 1;
                      puVar29 = puVar31;
                    } while ((long)uVar25 < (long)uVar28);
                  } while (uVar27 != uVar21);
                }
                DAT_051609a4 = '\x01';
              }
              else if (DAT_051609a4 != '\x01') goto LAB_0127cfb8;
              if ((int)DAT_051609a8 != 0) {
                if ((int)DAT_051609a8 < 2) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = 0;
                  iVar22 = (int)DAT_051609a8 + -1;
                  do {
                    iVar20 = iVar22 + uVar21;
                    if (iVar20 < 0 != SCARRY4(iVar22,uVar21)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar27 = iVar20 >> 1;
                    if (*(uint **)(DAT_051609b0 + (long)(int)uVar27 * 8) == (uint *)0x0)
                    goto joined_r0x0127d074;
                    uVar26 = **(uint **)(DAT_051609b0 + (long)(int)uVar27 * 8);
                    if (uVar26 == uVar36) goto joined_r0x0127d074;
                    if (uVar26 < uVar36) {
                      uVar21 = uVar27 + 1;
                    }
                    else {
                      iVar22 = uVar27 - 1;
                    }
                  } while ((int)uVar21 < iVar22);
                }
                uVar27 = uVar21;
                if ((*(uint **)(DAT_051609b0 + (long)(int)uVar21 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_051609b0 + (long)(int)uVar21 * 8) == uVar36)) {
joined_r0x0127d074:
                  if (uVar27 < 5) {
                    uVar21 = *(uint *)(*(long *)(DAT_051609b0 + (ulong)uVar27 * 8) + 4);
                    if (uVar21 < 5) {
                      DAT_05160998 = '\x01';
                      DAT_0516099c = uVar36;
                      DAT_051609a0 = uVar21;
                      goto LAB_0127cfbc;
                    }
                    goto LAB_0127cfb8;
                  }
                }
                uVar19 = 0;
                goto LAB_0127cfd0;
              }
LAB_0127cfb8:
              uVar21 = 0;
            }
LAB_0127cfbc:
            uVar19 = (undefined2)uVar21;
          }
LAB_0127cfd0:
          puVar29 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar29 != (uint *)0x0)) && (*puVar29 != 0)) &&
             ((uVar36 = puVar29[1], uVar36 != 0 && ((ulong)(ushort)puVar29[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar29 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar29 + lVar35 + (ulong)(ushort)puVar29[2] * 8;
            if (lVar35 != 0) {
              uVar21 = 0;
              if ((ulong)uVar36 != 0) {
                uVar21 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar36);
              }
              if (*puVar29 <= uVar21) {
                uVar21 = 0xffffffff;
              }
              if (uVar21 < *(uint *)PTR_DAT_04bbbe58) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bbbe58 + 8) + (long)(int)uVar21 * 2) = uVar19;
              }
            }
          }
        }
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 != uVar15);
  }
  return;
}

