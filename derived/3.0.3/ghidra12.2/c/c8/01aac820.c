
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aac820(uint *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  char cVar23;
  undefined2 uVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  uint *puVar32;
  ulong uVar33;
  uint *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  uint *puVar37;
  uint uVar38;
  
  puVar18 = PTR_DAT_04bbff50;
  puVar17 = PTR_DAT_04bbff48;
  if ((param_1 != (uint *)0x0) && (uVar15 = *param_1, uVar15 != 0)) {
    uVar20 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar20 = crc32b(uVar20,0xb1,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x43,0x4c11db7);
    uVar20 = crc32b(uVar20,0x8e,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
    uVar20 = crc32b(uVar20,0xe7,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar38 = 0;
    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6d,0x4c11db7);
    uVar20 = crc32b(uVar20,0x94,0x4c11db7);
    uVar6 = crc32b(uVar3,0x72,0x4c11db7);
    uVar4 = crc32b(uVar4,99,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6d,0x4c11db7);
    uVar20 = crc32b(uVar20,0xa8,0x4c11db7);
    uVar6 = crc32b(uVar6,0x6d,0x4c11db7);
    uVar4 = crc32b(uVar4,0x65,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
    uVar20 = crc32b(uVar20,0x26,0x4c11db7);
    uVar4 = crc32b(uVar4,0x4f,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
    uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x72,0x4c11db7);
    uVar5 = crc32b(uVar5,0x41,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar6 = crc32b(uVar6,0x61,0x4c11db7);
    uVar20 = crc32b(uVar20,0x83,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
    uVar20 = crc32b(uVar20,0x9e,0x4c11db7);
    uVar5 = crc32b(uVar5,100,0x4c11db7);
    uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
    uVar5 = crc32b(uVar5,0x4d,0x4c11db7);
    uVar7 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar8 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar20 = crc32b(uVar20,0x82,0x4c11db7);
    uVar7 = crc32b(uVar7,0x79,0x4c11db7);
    uVar5 = crc32b(uVar5,0x79,0x4c11db7);
    uVar4 = crc32b(uVar4,0x67,0x4c11db7);
    uVar20 = crc32b(uVar20,0xa4,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar20 = crc32b(uVar20,0x83,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar7 = crc32b(uVar7,0x44,0x4c11db7);
    uVar5 = crc32b(uVar5,0x44,0x4c11db7);
    uVar20 = crc32b(uVar20,0x87,0x4c11db7);
    uVar9 = crc32b(uVar6,0x6c,0x4c11db7);
    uVar10 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar4 = crc32b(uVar7,0x65,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
    uVar4 = crc32b(uVar4,0x73,0x4c11db7);
    uVar5 = crc32b(uVar5,0x73,0x4c11db7);
    uVar20 = crc32b(uVar20,0x82,0x4c11db7);
    uVar5 = crc32b(uVar5,0x69,0x4c11db7);
    uVar11 = crc32b(uVar20,0xb6,0x4c11db7);
    uVar20 = crc32b(uVar4,0x69,0x4c11db7);
    uVar4 = crc32b(uVar5,0x67,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar20 = crc32b(uVar20,0x67,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar12 = crc32b(uVar20,0x6e,0x4c11db7);
    uVar13 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar14 = crc32b(uVar4,0x6e,0x4c11db7);
    do {
      if (((uVar38 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar22 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar22 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar38 + (uint)(ushort)param_1[2] * 8 + iVar22) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar21 = *puVar1;
          if (uVar21 != 0) {
            cVar23 = *puVar17;
            do {
              if (cVar23 == '\0') {
                *(undefined8 *)puVar18 = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 8) = 0xffffffffffffffff;
                cVar23 = '\x01';
                *(undefined8 *)(puVar18 + 0xe0) = 0xffffffffffffffff;
                *puVar17 = 1;
                *(undefined8 *)(puVar18 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x98) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xa8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xb0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xb8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xc0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 200) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xd0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xd8) = 0xffffffffffffffff;
                uVar21 = *puVar1;
              }
              else {
                uVar26 = *(uint *)puVar18;
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar21 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01aacbd0;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar32 = (uint *)(ulong)uVar21;
              uVar21 = 0;
              if ((puVar32 == (uint *)0x0) || (uVar21 = 0, puVar1 == puVar32)) goto LAB_01aacbd0;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar32)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar32);
              if (lVar16 == 0) break;
              uVar28 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar32));
              *(undefined4 *)puVar18 = 0xfffffffe;
              if (uVar28 == 0) break;
              piVar27 = (int *)(lVar16 + 4);
              while (piVar27[-1] != 0x35917e05) {
                piVar27 = piVar27 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_01aacbcc;
              }
              iVar22 = 0;
              if (*piVar27 != -1) {
                iVar22 = *piVar27;
              }
              *(int *)puVar18 = iVar22;
              uVar21 = *puVar1;
              if (uVar21 == 0) break;
            } while( true );
          }
LAB_01aacbcc:
          uVar21 = 0;
LAB_01aacbd0:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05323c20 == '\x01') && (DAT_05323c24 == uVar21)) {
              uVar26 = DAT_05323c28;
              if (2 < DAT_05323c28) goto LAB_01aad018;
            }
            else {
              if (((DAT_05323c58 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05323c58), iVar22 != 0)) {
                DAT_05323c30 = 0x300000000;
                DAT_05323c38 = (undefined8 *)&DAT_05323c40;
                __cxa_guard_release(&DAT_05323c58);
              }
              if ((DAT_05323c60 & 1) == 0) {
                DAT_05323c60 = 1;
                if (((DAT_05323c80 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05323c80), iVar22 != 0)) {
                  _DAT_05323c64 = 0xffffffff00000000;
                  DAT_05323c6c = 0xffffffff00000000;
                  DAT_05323c74 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05323c80);
                }
                uVar20 = crc32b(uVar8,0x81,0x4c11db7);
                uVar20 = crc32b(uVar20,0xaa,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x81,0x4c11db7);
                uVar26 = crc32b(uVar20,0x97,0x4c11db7);
                _DAT_05323c64 = (ulong)~uVar26;
                iVar22 = (int)DAT_05323c30;
                iVar25 = DAT_05323c30._4_4_;
                if ((int)DAT_05323c30 < DAT_05323c30._4_4_) {
                  DAT_05323c38[(int)DAT_05323c30] = &DAT_05323c64;
                  iVar22 = (int)DAT_05323c30 + 1;
                  DAT_05323c30 = CONCAT44(DAT_05323c30._4_4_,iVar22);
                  iVar25 = DAT_05323c30._4_4_;
                }
                uVar20 = crc32b(uVar8,0x83,0x4c11db7);
                uVar20 = crc32b(uVar20,0x9e,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x82,0x4c11db7);
                uVar20 = crc32b(uVar20,0xa4,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x83,0x4c11db7);
                uVar20 = crc32b(uVar20,0x87,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x82,0x4c11db7);
                uVar26 = crc32b(uVar20,0xb6,0x4c11db7);
                DAT_05323c6c = CONCAT44(1,~uVar26);
                if (iVar22 < iVar25) {
                  DAT_05323c38[iVar22] = &DAT_05323c6c;
                  iVar22 = (int)DAT_05323c30 + 1;
                  DAT_05323c30 = CONCAT44(DAT_05323c30._4_4_,iVar22);
                  iVar25 = DAT_05323c30._4_4_;
                }
                DAT_05323c74 = CONCAT44(2,~uVar11);
                if (iVar22 < iVar25) {
                  DAT_05323c38[iVar22] = &DAT_05323c74;
                  iVar22 = (int)DAT_05323c30 + 1;
                  DAT_05323c30 = CONCAT44(DAT_05323c30._4_4_,iVar22);
                }
                puVar36 = DAT_05323c38;
                if (1 < iVar22) {
                  uVar30 = 0;
                  uVar26 = iVar22 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar30) break;
                    puVar32 = (uint *)puVar36[uVar30];
                    uVar28 = (ulong)uVar30;
                    if ((uVar26 - uVar30 & 1) == 0) {
                      uVar31 = uVar28;
                      puVar34 = puVar32;
                    }
                    else {
                      uVar31 = uVar28 + 1;
                      puVar34 = (uint *)puVar36[uVar31];
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar34 < *puVar32)) {
                        puVar36[uVar31] = puVar32;
                        puVar36[uVar28] = puVar34;
                        puVar34 = puVar32;
                      }
                    }
                    uVar33 = (ulong)uVar26;
                    uVar26 = uVar30;
                    if (~uVar28 + uVar33 != 0) {
                      puVar35 = puVar36 + uVar31 + 1;
                      do {
                        puVar32 = (uint *)*puVar35;
                        uVar29 = (uint)uVar31;
                        if (((puVar34 == (uint *)0x0) || (puVar32 == (uint *)0x0)) ||
                           (*puVar34 <= *puVar32)) {
                          puVar37 = (uint *)puVar35[1];
                          if (puVar32 != (uint *)0x0) goto LAB_01aacfd0;
LAB_01aacf80:
                          puVar32 = puVar37;
                        }
                        else {
                          puVar35[-1] = puVar32;
                          *puVar35 = puVar34;
                          puVar37 = (uint *)puVar35[1];
                          puVar32 = puVar34;
                          uVar26 = uVar29;
                          if (puVar34 == (uint *)0x0) goto LAB_01aacf80;
LAB_01aacfd0:
                          if (puVar37 == (uint *)0x0) goto LAB_01aacf80;
                          if (*puVar32 <= *puVar37) goto LAB_01aacf80;
                          uVar26 = uVar29 + 1;
                          *puVar35 = puVar37;
                          puVar35[1] = puVar32;
                        }
                        uVar31 = uVar31 + 2;
                        puVar35 = puVar35 + 2;
                        puVar34 = puVar32;
                      } while (uVar33 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar30) break;
                    uVar31 = (ulong)uVar26;
                    puVar32 = (uint *)puVar36[uVar26];
                    uVar30 = uVar26;
                    do {
                      puVar34 = (uint *)puVar36[uVar31 - 1];
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar32 < *puVar34)) {
                        uVar30 = (uint)uVar31;
                        puVar36[uVar31 - 1] = puVar32;
                        puVar36[uVar31] = puVar34;
                        puVar34 = puVar32;
                      }
                      uVar31 = uVar31 - 1;
                      puVar32 = puVar34;
                    } while ((long)uVar28 < (long)uVar31);
                  } while (uVar30 != uVar26);
                }
                DAT_05323c2c = '\x01';
              }
              else if (DAT_05323c2c != '\x01') goto LAB_01aad018;
              if ((int)DAT_05323c30 == 0) goto LAB_01aad018;
              if ((int)DAT_05323c30 < 2) {
                uVar26 = 0;
                puVar32 = (uint *)*DAT_05323c38;
                if (puVar32 != (uint *)0x0) goto LAB_01aace40;
LAB_01aacffc:
                uVar30 = uVar26;
                if (uVar26 < 3) {
LAB_01aad008:
                  uVar26 = *(uint *)(DAT_05323c38[uVar30] + 4);
                  if (uVar26 < 3) {
                    DAT_05323c20 = '\x01';
                    DAT_05323c24 = uVar21;
                    DAT_05323c28 = uVar26;
                    goto LAB_01aad330;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar22 = (int)DAT_05323c30 + -1;
                do {
                  iVar25 = iVar22 + uVar26;
                  if (iVar25 < 0 != SCARRY4(iVar22,uVar26)) {
                    iVar25 = iVar25 + 1;
                  }
                  uVar30 = iVar25 >> 1;
                  if ((uint *)DAT_05323c38[(int)uVar30] == (uint *)0x0) goto LAB_01aace50;
                  uVar29 = *(uint *)DAT_05323c38[(int)uVar30];
                  if (uVar29 == uVar21) goto LAB_01aace50;
                  if (uVar29 < uVar21) {
                    uVar26 = uVar30 + 1;
                  }
                  else {
                    iVar22 = uVar30 - 1;
                  }
                } while ((int)uVar26 < iVar22);
                puVar32 = (uint *)DAT_05323c38[(int)uVar26];
                if (puVar32 == (uint *)0x0) goto LAB_01aacffc;
LAB_01aace40:
                uVar30 = uVar26;
                if (*puVar32 == uVar21) {
LAB_01aace50:
                  if (2 < uVar30) goto LAB_01aad018;
                  goto LAB_01aad008;
                }
              }
LAB_01aad018:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05323bb8 == '\x01') && (DAT_05323bbc == uVar21)) {
              uVar26 = DAT_05323bc0;
              if (2 < DAT_05323bc0) goto LAB_01aad324;
            }
            else {
              if (((DAT_05323bf0 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05323bf0), iVar22 != 0)) {
                DAT_05323bc8 = 0x300000000;
                DAT_05323bd0 = &DAT_05323bd8;
                __cxa_guard_release(&DAT_05323bf0);
              }
              if ((DAT_05323bf8 & 1) == 0) {
                DAT_05323bf8 = 1;
                if (((DAT_05323c18 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05323c18), iVar22 != 0)) {
                  _DAT_05323bfc = 0xffffffff00000000;
                  DAT_05323c04 = 0xffffffff00000000;
                  DAT_05323c0c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05323c18);
                }
                uVar20 = crc32b(uVar3,0x6e,0x4c11db7);
                uVar26 = crc32b(uVar20,0x65,0x4c11db7);
                _DAT_05323bfc = (ulong)~uVar26;
                iVar22 = (int)DAT_05323bc8;
                iVar25 = DAT_05323bc8._4_4_;
                if ((int)DAT_05323bc8 < DAT_05323bc8._4_4_) {
                  *(undefined4 **)(DAT_05323bd0 + (long)(int)DAT_05323bc8 * 8) = &DAT_05323bfc;
                  iVar22 = (int)DAT_05323bc8 + 1;
                  DAT_05323bc8 = CONCAT44(DAT_05323bc8._4_4_,iVar22);
                  iVar25 = DAT_05323bc8._4_4_;
                }
                DAT_05323c04 = CONCAT44(1,~uVar12);
                if (iVar22 < iVar25) {
                  *(undefined8 **)(DAT_05323bd0 + (long)iVar22 * 8) = &DAT_05323c04;
                  iVar22 = (int)DAT_05323bc8 + 1;
                  DAT_05323bc8 = CONCAT44(DAT_05323bc8._4_4_,iVar22);
                  iVar25 = DAT_05323bc8._4_4_;
                }
                DAT_05323c0c = CONCAT44(2,~uVar14);
                if (iVar22 < iVar25) {
                  *(undefined8 **)(DAT_05323bd0 + (long)iVar22 * 8) = &DAT_05323c0c;
                  iVar22 = (int)DAT_05323bc8 + 1;
                  DAT_05323bc8 = CONCAT44(DAT_05323bc8._4_4_,iVar22);
                }
                puVar19 = DAT_05323bd0;
                if (1 < iVar22) {
                  uVar30 = 0;
                  uVar26 = iVar22 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar30) break;
                    puVar32 = *(uint **)(puVar19 + (ulong)uVar30 * 8);
                    uVar28 = (ulong)uVar30;
                    if ((uVar26 - uVar30 & 1) == 0) {
                      uVar31 = uVar28;
                      puVar34 = puVar32;
                    }
                    else {
                      uVar31 = uVar28 + 1;
                      puVar34 = *(uint **)(puVar19 + uVar31 * 8);
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar34 < *puVar32)) {
                        *(uint **)(puVar19 + uVar31 * 8) = puVar32;
                        *(uint **)(puVar19 + uVar28 * 8) = puVar34;
                        puVar34 = puVar32;
                      }
                    }
                    uVar33 = (ulong)uVar26;
                    uVar26 = uVar30;
                    if (~uVar28 + uVar33 != 0) {
                      puVar36 = (undefined8 *)(puVar19 + uVar31 * 8 + 8);
                      do {
                        puVar32 = (uint *)*puVar36;
                        uVar29 = (uint)uVar31;
                        if (((puVar34 == (uint *)0x0) || (puVar32 == (uint *)0x0)) ||
                           (*puVar34 <= *puVar32)) {
                          puVar37 = (uint *)puVar36[1];
                          if (puVar32 != (uint *)0x0) goto LAB_01aad2a0;
LAB_01aad250:
                          puVar32 = puVar37;
                        }
                        else {
                          puVar36[-1] = puVar32;
                          *puVar36 = puVar34;
                          puVar37 = (uint *)puVar36[1];
                          puVar32 = puVar34;
                          uVar26 = uVar29;
                          if (puVar34 == (uint *)0x0) goto LAB_01aad250;
LAB_01aad2a0:
                          if (puVar37 == (uint *)0x0) goto LAB_01aad250;
                          if (*puVar32 <= *puVar37) goto LAB_01aad250;
                          uVar26 = uVar29 + 1;
                          *puVar36 = puVar37;
                          puVar36[1] = puVar32;
                        }
                        uVar31 = uVar31 + 2;
                        puVar36 = puVar36 + 2;
                        puVar34 = puVar32;
                      } while (uVar33 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar30) break;
                    uVar31 = (ulong)uVar26;
                    puVar32 = *(uint **)(puVar19 + (ulong)uVar26 * 8);
                    uVar30 = uVar26;
                    do {
                      puVar34 = *(uint **)(puVar19 + uVar31 * 8 + -8);
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar32 < *puVar34)) {
                        uVar30 = (uint)uVar31;
                        *(uint **)(puVar19 + uVar31 * 8 + -8) = puVar32;
                        *(uint **)(puVar19 + uVar31 * 8) = puVar34;
                        puVar34 = puVar32;
                      }
                      uVar31 = uVar31 - 1;
                      puVar32 = puVar34;
                    } while ((long)uVar28 < (long)uVar31);
                  } while (uVar30 != uVar26);
                }
                DAT_05323bc4 = '\x01';
              }
              else if (DAT_05323bc4 != '\x01') goto LAB_01aad324;
              if ((int)DAT_05323bc8 != 0) {
                if ((int)DAT_05323bc8 < 2) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = 0;
                  iVar22 = (int)DAT_05323bc8 + -1;
                  do {
                    iVar25 = iVar22 + uVar26;
                    if (iVar25 < 0 != SCARRY4(iVar22,uVar26)) {
                      iVar25 = iVar25 + 1;
                    }
                    uVar30 = iVar25 >> 1;
                    if (*(uint **)(DAT_05323bd0 + (long)(int)uVar30 * 8) == (uint *)0x0)
                    goto joined_r0x01aad310;
                    uVar29 = **(uint **)(DAT_05323bd0 + (long)(int)uVar30 * 8);
                    if (uVar29 == uVar21) goto joined_r0x01aad310;
                    if (uVar29 < uVar21) {
                      uVar26 = uVar30 + 1;
                    }
                    else {
                      iVar22 = uVar30 - 1;
                    }
                  } while ((int)uVar26 < iVar22);
                }
                uVar30 = uVar26;
                if ((*(uint **)(DAT_05323bd0 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05323bd0 + (long)(int)uVar26 * 8) == uVar21)) {
joined_r0x01aad310:
                  if ((uVar30 < 3) &&
                     (uVar26 = *(uint *)(*(long *)(DAT_05323bd0 + (ulong)uVar30 * 8) + 4),
                     uVar26 < 3)) {
                    DAT_05323bb8 = '\x01';
                    DAT_05323bbc = uVar21;
                    DAT_05323bc0 = uVar26;
                    goto LAB_01aad328;
                  }
                }
              }
LAB_01aad324:
              uVar26 = 0;
            }
LAB_01aad328:
          }
LAB_01aad330:
          puVar32 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar32 != (uint *)0x0)) && (*puVar32 != 0)) &&
             ((uVar21 = puVar32[1], uVar21 != 0 && ((ulong)(ushort)puVar32[2] != 0)))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar32 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar32 + lVar16 + (ulong)(ushort)puVar32[2] * 8;
            if (lVar16 != 0) {
              uVar30 = 0;
              if ((ulong)uVar21 != 0) {
                uVar30 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar21);
              }
              if (*puVar32 <= uVar30) {
                uVar30 = 0xffffffff;
              }
              if (uVar30 < *(uint *)PTR_DAT_04bc02e0) {
                *(short *)(*(long *)(PTR_DAT_04bc02e0 + 8) + (long)(int)uVar30 * 2) = (short)uVar26;
              }
            }
          }
          uVar21 = *puVar1;
          if (uVar21 != 0) {
            cVar23 = *puVar17;
            do {
              if (cVar23 == '\0') {
                *(undefined8 *)puVar18 = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 8) = 0xffffffffffffffff;
                cVar23 = '\x01';
                *(undefined8 *)(puVar18 + 0xe0) = 0xffffffffffffffff;
                *puVar17 = 1;
                *(undefined8 *)(puVar18 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x98) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xa8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xb0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xb8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xc0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 200) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xd0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xd8) = 0xffffffffffffffff;
                uVar21 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar18 + 4);
                if (-1 < (int)uVar26) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar26) != (undefined4 *)0x0) {
                    uVar20 = *(undefined4 *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01aad4b0;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar32 = (uint *)(ulong)uVar21;
              uVar20 = 0;
              if ((puVar32 == (uint *)0x0) || (uVar20 = 0, puVar1 == puVar32)) goto LAB_01aad4b0;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar32)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar32);
              if (lVar16 == 0) break;
              uVar28 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar32));
              *(undefined4 *)(puVar18 + 4) = 0xfffffffe;
              if (uVar28 == 0) break;
              piVar27 = (int *)(lVar16 + 4);
              while (piVar27[-1] != -0x3ab15527) {
                piVar27 = piVar27 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_01aad4ac;
              }
              iVar22 = 0;
              if (*piVar27 != -1) {
                iVar22 = *piVar27;
              }
              *(int *)(puVar18 + 4) = iVar22;
              uVar21 = *puVar1;
              if (uVar21 == 0) break;
            } while( true );
          }
LAB_01aad4ac:
          uVar20 = 0;
LAB_01aad4b0:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            uVar21 = FUN_01a895b0(uVar20);
            if (10 < uVar21) {
              uVar21 = 0;
            }
            uVar24 = (undefined2)uVar21;
          }
          else {
            uVar21 = FUN_01a890e0();
            if (10 < uVar21) {
              uVar21 = 0;
            }
            uVar24 = (undefined2)uVar21;
          }
          puVar32 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar32 != (uint *)0x0)) &&
             ((*puVar32 != 0 &&
              ((uVar21 = puVar32[1], uVar21 != 0 && ((ulong)(ushort)puVar32[2] != 0)))))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar32 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar32 + lVar16 + (ulong)(ushort)puVar32[2] * 8;
            if (lVar16 != 0) {
              uVar26 = 0;
              if ((ulong)uVar21 != 0) {
                uVar26 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar21);
              }
              if (*puVar32 <= uVar26) {
                uVar26 = 0xffffffff;
              }
              if (uVar26 < *(uint *)PTR_DAT_04bc02e8) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc02e8 + 8) + (long)(int)uVar26 * 2) = uVar24;
              }
            }
          }
          uVar21 = *puVar1;
          if (uVar21 != 0) {
            cVar23 = *puVar17;
            do {
              if (cVar23 == '\0') {
                *(undefined8 *)puVar18 = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 8) = 0xffffffffffffffff;
                cVar23 = '\x01';
                *(undefined8 *)(puVar18 + 0xe0) = 0xffffffffffffffff;
                *puVar17 = 1;
                *(undefined8 *)(puVar18 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x98) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xa0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xa8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xb0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xb8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xc0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 200) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xd0) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0xd8) = 0xffffffffffffffff;
                uVar21 = *puVar1;
              }
              else {
                uVar26 = *(uint *)(puVar18 + 0x44);
                if (-1 < (int)uVar26) {
                  if ((uint *)((long)puVar1 + (ulong)uVar26) != (uint *)0x0) {
                    uVar21 = *(uint *)((long)puVar1 + (ulong)uVar26);
                    goto LAB_01aad6c0;
                  }
                  break;
                }
                if (uVar26 != 0xffffffff) break;
              }
              puVar32 = (uint *)(ulong)uVar21;
              uVar21 = 0;
              if ((puVar32 == (uint *)0x0) || (uVar21 = 0, puVar1 == puVar32)) goto LAB_01aad6c0;
              lVar16 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar32)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar1 + (lVar16 - (long)puVar32);
              if (lVar16 == 0) break;
              uVar28 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar32));
              *(undefined4 *)(puVar18 + 0x44) = 0xfffffffe;
              if (uVar28 == 0) break;
              piVar27 = (int *)(lVar16 + 4);
              while (piVar27[-1] != -0x5793d945) {
                piVar27 = piVar27 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) goto LAB_01aad6bc;
              }
              iVar22 = 0;
              if (*piVar27 != -1) {
                iVar22 = *piVar27;
              }
              *(int *)(puVar18 + 0x44) = iVar22;
              uVar21 = *puVar1;
              if (uVar21 == 0) break;
            } while( true );
          }
LAB_01aad6bc:
          uVar21 = 0;
LAB_01aad6c0:
          if (((*puVar1 == 0) || (lVar16 = (long)puVar1 - (ulong)*puVar1, lVar16 == 0)) ||
             (*(char *)(lVar16 + 0xb) == '\0')) {
            if ((DAT_05323ce0 == '\x01') && (DAT_05323ce4 == uVar21)) {
              uVar26 = DAT_05323ce8;
              if (1 < DAT_05323ce8) goto LAB_01aadae8;
            }
            else {
              if (((DAT_05323d10 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05323d10), iVar22 != 0)) {
                DAT_05323cf0 = 0x200000000;
                DAT_05323cf8 = (undefined8 *)&DAT_05323d00;
                __cxa_guard_release(&DAT_05323d10);
              }
              if ((DAT_05323d18 & 1) == 0) {
                DAT_05323d18 = 1;
                if (((DAT_05323d30 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05323d30), iVar22 != 0)) {
                  _DAT_05323d1c = 0xffffffff00000000;
                  DAT_05323d24 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05323d30);
                }
                _DAT_05323d1c = (ulong)~uVar13;
                iVar22 = (int)DAT_05323cf0;
                iVar25 = DAT_05323cf0._4_4_;
                if ((int)DAT_05323cf0 < DAT_05323cf0._4_4_) {
                  DAT_05323cf8[(int)DAT_05323cf0] = &DAT_05323d1c;
                  iVar22 = (int)DAT_05323cf0 + 1;
                  DAT_05323cf0 = CONCAT44(DAT_05323cf0._4_4_,iVar22);
                  iVar25 = DAT_05323cf0._4_4_;
                }
                uVar20 = crc32b(uVar8,0x82,0x4c11db7);
                uVar20 = crc32b(uVar20,0xaa,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x83,0x4c11db7);
                uVar20 = crc32b(uVar20,0xaa,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x82,0x4c11db7);
                uVar20 = crc32b(uVar20,0xb8,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x83,0x4c11db7);
                uVar20 = crc32b(uVar20,0x8a,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe3,0x4c11db7);
                uVar20 = crc32b(uVar20,0x83,0x4c11db7);
                uVar20 = crc32b(uVar20,0xab,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe5,0x4c11db7);
                uVar20 = crc32b(uVar20,0xbc,0x4c11db7);
                uVar20 = crc32b(uVar20,0xb7,0x4c11db7);
                uVar20 = crc32b(uVar20,0xe5,0x4c11db7);
                uVar20 = crc32b(uVar20,0x88,0x4c11db7);
                uVar26 = crc32b(uVar20,0xb6,0x4c11db7);
                DAT_05323d24 = CONCAT44(1,~uVar26);
                if (iVar22 < iVar25) {
                  DAT_05323cf8[iVar22] = &DAT_05323d24;
                  iVar22 = (int)DAT_05323cf0 + 1;
                  DAT_05323cf0 = CONCAT44(DAT_05323cf0._4_4_,iVar22);
                }
                puVar36 = DAT_05323cf8;
                if (1 < iVar22) {
                  uVar30 = 0;
                  uVar26 = iVar22 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar30) break;
                    puVar32 = (uint *)puVar36[uVar30];
                    uVar28 = (ulong)uVar30;
                    if ((uVar26 - uVar30 & 1) == 0) {
                      uVar31 = uVar28;
                      puVar34 = puVar32;
                    }
                    else {
                      uVar31 = uVar28 + 1;
                      puVar34 = (uint *)puVar36[uVar31];
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar34 < *puVar32)) {
                        puVar36[uVar31] = puVar32;
                        puVar36[uVar28] = puVar34;
                        puVar34 = puVar32;
                      }
                    }
                    uVar33 = (ulong)uVar26;
                    uVar26 = uVar30;
                    if (~uVar28 + uVar33 != 0) {
                      puVar35 = puVar36 + uVar31 + 1;
                      do {
                        puVar32 = (uint *)*puVar35;
                        uVar29 = (uint)uVar31;
                        if (((puVar34 == (uint *)0x0) || (puVar32 == (uint *)0x0)) ||
                           (*puVar34 <= *puVar32)) {
                          puVar37 = (uint *)puVar35[1];
                          if (puVar32 != (uint *)0x0) goto LAB_01aadaa0;
LAB_01aada50:
                          puVar32 = puVar37;
                        }
                        else {
                          puVar35[-1] = puVar32;
                          *puVar35 = puVar34;
                          puVar37 = (uint *)puVar35[1];
                          puVar32 = puVar34;
                          uVar26 = uVar29;
                          if (puVar34 == (uint *)0x0) goto LAB_01aada50;
LAB_01aadaa0:
                          if (puVar37 == (uint *)0x0) goto LAB_01aada50;
                          if (*puVar32 <= *puVar37) goto LAB_01aada50;
                          uVar26 = uVar29 + 1;
                          *puVar35 = puVar37;
                          puVar35[1] = puVar32;
                        }
                        uVar31 = uVar31 + 2;
                        puVar35 = puVar35 + 2;
                        puVar34 = puVar32;
                      } while (uVar33 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar30) break;
                    uVar31 = (ulong)uVar26;
                    puVar32 = (uint *)puVar36[uVar26];
                    uVar30 = uVar26;
                    do {
                      puVar34 = (uint *)puVar36[uVar31 - 1];
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar32 < *puVar34)) {
                        uVar30 = (uint)uVar31;
                        puVar36[uVar31 - 1] = puVar32;
                        puVar36[uVar31] = puVar34;
                        puVar34 = puVar32;
                      }
                      uVar31 = uVar31 - 1;
                      puVar32 = puVar34;
                    } while ((long)uVar28 < (long)uVar31);
                  } while (uVar30 != uVar26);
                }
                DAT_05323cec = '\x01';
              }
              else if (DAT_05323cec != '\x01') goto LAB_01aadae8;
              if ((int)DAT_05323cf0 == 0) goto LAB_01aadae8;
              if ((int)DAT_05323cf0 < 2) {
                uVar26 = 0;
                puVar32 = (uint *)*DAT_05323cf8;
                if (puVar32 != (uint *)0x0) goto LAB_01aad900;
LAB_01aadacc:
                uVar30 = uVar26;
                if (uVar26 < 2) {
LAB_01aadad8:
                  uVar26 = *(uint *)(DAT_05323cf8[uVar30] + 4);
                  if (uVar26 < 2) {
                    DAT_05323ce0 = '\x01';
                    DAT_05323ce4 = uVar21;
                    DAT_05323ce8 = uVar26;
                    goto LAB_01aaddc0;
                  }
                }
              }
              else {
                uVar26 = 0;
                iVar22 = (int)DAT_05323cf0 + -1;
                do {
                  iVar25 = iVar22 + uVar26;
                  if (iVar25 < 0 != SCARRY4(iVar22,uVar26)) {
                    iVar25 = iVar25 + 1;
                  }
                  uVar30 = iVar25 >> 1;
                  if ((uint *)DAT_05323cf8[(int)uVar30] == (uint *)0x0) goto LAB_01aad910;
                  uVar29 = *(uint *)DAT_05323cf8[(int)uVar30];
                  if (uVar29 == uVar21) goto LAB_01aad910;
                  if (uVar29 < uVar21) {
                    uVar26 = uVar30 + 1;
                  }
                  else {
                    iVar22 = uVar30 - 1;
                  }
                } while ((int)uVar26 < iVar22);
                puVar32 = (uint *)DAT_05323cf8[(int)uVar26];
                if (puVar32 == (uint *)0x0) goto LAB_01aadacc;
LAB_01aad900:
                uVar30 = uVar26;
                if (*puVar32 == uVar21) {
LAB_01aad910:
                  if (1 < uVar30) goto LAB_01aadae8;
                  goto LAB_01aadad8;
                }
              }
LAB_01aadae8:
              uVar26 = 0;
            }
          }
          else {
            if ((DAT_05323c88 == '\x01') && (DAT_05323c8c == uVar21)) {
              uVar26 = DAT_05323c90;
              if (1 < DAT_05323c90) goto LAB_01aaddb4;
            }
            else {
              if (((DAT_05323cb8 & 1) == 0) &&
                 (iVar22 = __cxa_guard_acquire(&DAT_05323cb8), iVar22 != 0)) {
                DAT_05323c98 = 0x200000000;
                DAT_05323ca0 = &DAT_05323ca8;
                __cxa_guard_release(&DAT_05323cb8);
              }
              if ((DAT_05323cc0 & 1) == 0) {
                DAT_05323cc0 = 1;
                if (((DAT_05323cd8 & 1) == 0) &&
                   (iVar22 = __cxa_guard_acquire(&DAT_05323cd8), iVar22 != 0)) {
                  _DAT_05323cc4 = 0xffffffff00000000;
                  _DAT_05323ccc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05323cd8);
                }
                _DAT_05323cc4 = (ulong)~uVar9;
                iVar22 = (int)DAT_05323c98;
                iVar25 = DAT_05323c98._4_4_;
                if ((int)DAT_05323c98 < DAT_05323c98._4_4_) {
                  *(undefined4 **)(DAT_05323ca0 + (long)(int)DAT_05323c98 * 8) = &DAT_05323cc4;
                  iVar22 = (int)DAT_05323c98 + 1;
                  DAT_05323c98 = CONCAT44(DAT_05323c98._4_4_,iVar22);
                  iVar25 = DAT_05323c98._4_4_;
                }
                _DAT_05323ccc = CONCAT44(1,~uVar10);
                if (iVar22 < iVar25) {
                  *(undefined4 **)(DAT_05323ca0 + (long)iVar22 * 8) = &DAT_05323ccc;
                  iVar22 = (int)DAT_05323c98 + 1;
                  DAT_05323c98 = CONCAT44(DAT_05323c98._4_4_,iVar22);
                }
                puVar19 = DAT_05323ca0;
                if (1 < iVar22) {
                  uVar30 = 0;
                  uVar26 = iVar22 - 1;
                  do {
                    if ((int)uVar26 <= (int)uVar30) break;
                    puVar32 = *(uint **)(puVar19 + (ulong)uVar30 * 8);
                    uVar28 = (ulong)uVar30;
                    if ((uVar26 - uVar30 & 1) == 0) {
                      uVar31 = uVar28;
                      puVar34 = puVar32;
                    }
                    else {
                      uVar31 = uVar28 + 1;
                      puVar34 = *(uint **)(puVar19 + uVar31 * 8);
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar34 < *puVar32)) {
                        *(uint **)(puVar19 + uVar31 * 8) = puVar32;
                        *(uint **)(puVar19 + uVar28 * 8) = puVar34;
                        puVar34 = puVar32;
                      }
                    }
                    uVar33 = (ulong)uVar26;
                    uVar26 = uVar30;
                    if (~uVar28 + uVar33 != 0) {
                      puVar36 = (undefined8 *)(puVar19 + uVar31 * 8 + 8);
                      do {
                        puVar32 = (uint *)*puVar36;
                        uVar29 = (uint)uVar31;
                        if (((puVar34 == (uint *)0x0) || (puVar32 == (uint *)0x0)) ||
                           (*puVar34 <= *puVar32)) {
                          puVar37 = (uint *)puVar36[1];
                          if (puVar32 != (uint *)0x0) goto LAB_01aadd30;
LAB_01aadce0:
                          puVar32 = puVar37;
                        }
                        else {
                          puVar36[-1] = puVar32;
                          *puVar36 = puVar34;
                          puVar37 = (uint *)puVar36[1];
                          puVar32 = puVar34;
                          uVar26 = uVar29;
                          if (puVar34 == (uint *)0x0) goto LAB_01aadce0;
LAB_01aadd30:
                          if (puVar37 == (uint *)0x0) goto LAB_01aadce0;
                          if (*puVar32 <= *puVar37) goto LAB_01aadce0;
                          uVar26 = uVar29 + 1;
                          *puVar36 = puVar37;
                          puVar36[1] = puVar32;
                        }
                        uVar31 = uVar31 + 2;
                        puVar36 = puVar36 + 2;
                        puVar34 = puVar32;
                      } while (uVar33 != uVar31);
                    }
                    if ((int)uVar26 <= (int)uVar30) break;
                    uVar31 = (ulong)uVar26;
                    puVar32 = *(uint **)(puVar19 + (ulong)uVar26 * 8);
                    uVar30 = uVar26;
                    do {
                      puVar34 = *(uint **)(puVar19 + uVar31 * 8 + -8);
                      if (((puVar32 != (uint *)0x0) && (puVar34 != (uint *)0x0)) &&
                         (*puVar32 < *puVar34)) {
                        uVar30 = (uint)uVar31;
                        *(uint **)(puVar19 + uVar31 * 8 + -8) = puVar32;
                        *(uint **)(puVar19 + uVar31 * 8) = puVar34;
                        puVar34 = puVar32;
                      }
                      uVar31 = uVar31 - 1;
                      puVar32 = puVar34;
                    } while ((long)uVar28 < (long)uVar31);
                  } while (uVar30 != uVar26);
                }
                DAT_05323c94 = '\x01';
              }
              else if (DAT_05323c94 != '\x01') goto LAB_01aaddb4;
              if ((int)DAT_05323c98 != 0) {
                if ((int)DAT_05323c98 < 2) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = 0;
                  iVar22 = (int)DAT_05323c98 + -1;
                  do {
                    iVar25 = iVar22 + uVar26;
                    if (iVar25 < 0 != SCARRY4(iVar22,uVar26)) {
                      iVar25 = iVar25 + 1;
                    }
                    uVar30 = iVar25 >> 1;
                    if (*(uint **)(DAT_05323ca0 + (long)(int)uVar30 * 8) == (uint *)0x0)
                    goto joined_r0x01aadda0;
                    uVar29 = **(uint **)(DAT_05323ca0 + (long)(int)uVar30 * 8);
                    if (uVar29 == uVar21) goto joined_r0x01aadda0;
                    if (uVar29 < uVar21) {
                      uVar26 = uVar30 + 1;
                    }
                    else {
                      iVar22 = uVar30 - 1;
                    }
                  } while ((int)uVar26 < iVar22);
                }
                uVar30 = uVar26;
                if ((*(uint **)(DAT_05323ca0 + (long)(int)uVar26 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05323ca0 + (long)(int)uVar26 * 8) == uVar21)) {
joined_r0x01aadda0:
                  if ((uVar30 < 2) &&
                     (uVar26 = *(uint *)(*(long *)(DAT_05323ca0 + (ulong)uVar30 * 8) + 4),
                     uVar26 < 2)) {
                    DAT_05323c88 = '\x01';
                    DAT_05323c8c = uVar21;
                    DAT_05323c90 = uVar26;
                    goto LAB_01aaddb8;
                  }
                }
              }
LAB_01aaddb4:
              uVar26 = 0;
            }
LAB_01aaddb8:
          }
LAB_01aaddc0:
          puVar32 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar32 != (uint *)0x0)) && (*puVar32 != 0)) &&
             ((uVar21 = puVar32[1], uVar21 != 0 && ((ulong)(ushort)puVar32[2] != 0)))) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar32 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar32 + lVar16 + (ulong)(ushort)puVar32[2] * 8;
            if (lVar16 != 0) {
              uVar30 = 0;
              if ((ulong)uVar21 != 0) {
                uVar30 = (uint)((ulong)((long)puVar1 - lVar16) / (ulong)uVar21);
              }
              if (*puVar32 <= uVar30) {
                uVar30 = 0xffffffff;
              }
              if (uVar30 < *(uint *)PTR_DAT_04bc02f0) {
                *(short *)(*(long *)(PTR_DAT_04bc02f0 + 8) + (long)(int)uVar30 * 2) = (short)uVar26;
              }
            }
          }
        }
      }
      uVar38 = uVar38 + 1;
    } while (uVar38 != uVar15);
  }
  return;
}

