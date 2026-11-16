
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025107c0(uint *param_1)

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
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  undefined *puVar19;
  char cVar20;
  undefined2 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  int *piVar26;
  ulong uVar27;
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
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar19 = PTR_DAT_04bc2fe8;
  if ((param_1 != (uint *)0x0) && (uVar17 = *param_1, uVar17 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0xe4,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar2 = crc32b(uVar2,0x80,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb8,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9a,0x4c11db7);
    uVar3 = crc32b(uVar3,0x8a,0x4c11db7);
    uVar5 = crc32b(uVar5,0x75,0x4c11db7);
    uVar6 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe5,0x4c11db7);
    uVar5 = crc32b(uVar5,0x74,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe6,0x4c11db7);
    uVar6 = crc32b(uVar6,0x65,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar7 = crc32b(uVar5,0x6f,0x4c11db7);
    uVar39 = 0;
    uVar3 = crc32b(uVar3,0x9b,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x4f,0x4c11db7);
    uVar6 = crc32b(uVar6,0x71,0x4c11db7);
    uVar8 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar2 = crc32b(uVar5,0x76,0x4c11db7);
    uVar3 = crc32b(uVar3,0xb8,0x4c11db7);
    uVar2 = crc32b(uVar2,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
    uVar5 = crc32b(uVar6,0x75,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar5 = crc32b(uVar5,0x65,0x4c11db7);
    uVar3 = crc32b(uVar3,0x81,0x4c11db7);
    uVar2 = crc32b(uVar2,0x77,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
    uVar9 = crc32b(uVar3,0x8d,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar3 = crc32b(uVar5,0x74,0x4c11db7);
    uVar5 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar2 = crc32b(uVar2,0x69,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar6 = crc32b(0xffffffff,0x48,0x4c11db7);
    uVar5 = crc32b(uVar5,0x61,0x4c11db7);
    uVar2 = crc32b(uVar2,0x74,0x4c11db7);
    uVar10 = crc32b(uVar4,0x6e,0x4c11db7);
    uVar6 = crc32b(uVar6,0x65,0x4c11db7);
    uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
    uVar11 = crc32b(uVar10,0x65,0x4c11db7);
    uVar12 = crc32b(uVar2,0x65,0x4c11db7);
    uVar2 = crc32b(0xffffffff,0xe8,0x4c11db7);
    uVar6 = crc32b(uVar6,0x61,0x4c11db7);
    uVar5 = crc32b(uVar5,0x75,0x4c11db7);
    uVar6 = crc32b(uVar6,0x76,0x4c11db7);
    uVar5 = crc32b(uVar5,0x61,0x4c11db7);
    uVar13 = crc32b(uVar6,0x79,0x4c11db7);
    uVar6 = crc32b(uVar2,0xbf,0x4c11db7);
    uVar6 = crc32b(uVar6,0xbd,0x4c11db7);
    uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
    uVar6 = crc32b(uVar6,0xbe,0x4c11db7);
    uVar6 = crc32b(uVar6,0x93,0x4c11db7);
    uVar6 = crc32b(uVar6,0xe3,0x4c11db7);
    uVar6 = crc32b(uVar6,0x81,0x4c11db7);
    uVar6 = crc32b(uVar6,0xaa,0x4c11db7);
    uVar6 = crc32b(uVar6,0xe3,0x4c11db7);
    uVar6 = crc32b(uVar6,0x81,0x4c11db7);
    uVar14 = crc32b(uVar6,0x97,0x4c11db7);
    uVar15 = crc32b(uVar5,0x6c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x61,0x4c11db7);
    uVar16 = crc32b(uVar3,0x6c,0x4c11db7);
    do {
      if (((uVar39 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar24 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar24 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar39 + (uint)(ushort)param_1[2] * 8 + iVar24) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar38 = *puVar1;
          if (uVar38 != 0) {
            cVar20 = *PTR_DAT_04bc2fe0;
            do {
              puVar18 = PTR_DAT_04bc2fe0;
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar19 = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0xa0) = 0xffffffffffffffff;
                *puVar18 = 1;
                *(undefined8 *)(puVar19 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x98) = 0xffffffffffffffff;
                uVar38 = *puVar1;
              }
              else {
                uVar23 = *(uint *)puVar19;
                if (-1 < (int)uVar23) {
                  if ((uint *)((long)puVar1 + (ulong)uVar23) != (uint *)0x0) {
                    uVar38 = *(uint *)((long)puVar1 + (ulong)uVar23);
                    goto LAB_02510ba0;
                  }
                  break;
                }
                if (uVar23 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar38;
              uVar38 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar38 = 0, puVar1 == puVar31)) goto LAB_02510ba0;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)puVar19 = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar26 = (int *)(lVar37 + 4);
              while (piVar26[-1] != 0x4045796c) {
                piVar26 = piVar26 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_02510b9c;
              }
              iVar24 = 0;
              if (*piVar26 != -1) {
                iVar24 = *piVar26;
              }
              *(int *)puVar19 = iVar24;
              uVar38 = *puVar1;
              if (uVar38 == 0) break;
            } while( true );
          }
LAB_02510b9c:
          uVar38 = 0;
LAB_02510ba0:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_054f0d30 == '\x01') && (DAT_054f0d34 == uVar38)) {
              uVar23 = DAT_054f0d38;
              if (7 < DAT_054f0d38) goto LAB_02510fe8;
            }
            else {
              if (((DAT_054f0d90 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f0d90), iVar24 != 0)) {
                DAT_054f0d40 = 0x800000000;
                DAT_054f0d48 = (undefined8 *)&DAT_054f0d50;
                __cxa_guard_release(&DAT_054f0d90);
              }
              if ((DAT_054f0d98 & 1) == 0) {
                DAT_054f0d98 = 1;
                if (((DAT_054f0de0 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f0de0), iVar24 != 0)) {
                  DAT_054f0d9c = 0xffffffff00000000;
                  DAT_054f0da4 = 0xffffffff00000000;
                  DAT_054f0dac = 0xffffffff00000000;
                  DAT_054f0db4 = 0xffffffff00000000;
                  DAT_054f0dbc = 0xffffffff00000000;
                  DAT_054f0dc4 = 0xffffffff00000000;
                  DAT_054f0dcc = 0xffffffff00000000;
                  DAT_054f0dd4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f0de0);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar40 = (&PTR_DAT_04a822e0)[lVar37];
                  if (local_174 != pbVar40) {
                    lVar25 = 0;
                    do {
                      if (pbVar40[lVar25] == 0) {
LAB_02510ce4:
                        iVar24 = (int)lVar25;
joined_r0x02510ce8:
                        if (0xff < iVar24) {
                          iVar24 = 0xff;
                        }
                        goto LAB_02510cf0;
                      }
                      if (pbVar40[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_02510ce4;
                      }
                      if (pbVar40[lVar25 + 2] == 0) {
                        iVar24 = (int)lVar25 + 2;
                        goto joined_r0x02510ce8;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar24 = 0;
LAB_02510cf0:
                    memcpy(local_174,pbVar40,(long)iVar24);
                    local_174[iVar24] = 0;
                  }
                  uVar23 = (uint)*pbVar40;
                  if (*pbVar40 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar40 = pbVar40 + 1;
                      uVar29 = crc32b(uVar29,uVar23,0x4c11db7);
                      uVar23 = (uint)*pbVar40;
                    } while (uVar23 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_054f0d9c + lVar37) = uVar29;
                  *(int *)((long)&DAT_054f0d9c + lVar37 * 8 + 4) = (int)lVar37;
                  iVar24 = (int)DAT_054f0d40;
                  if ((int)DAT_054f0d40 < DAT_054f0d40._4_4_) {
                    DAT_054f0d48[(int)DAT_054f0d40] = &DAT_054f0d9c + lVar37;
                    iVar24 = (int)DAT_054f0d40 + 1;
                    DAT_054f0d40 = CONCAT44(DAT_054f0d40._4_4_,iVar24);
                  }
                  puVar35 = DAT_054f0d48;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 8);
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar27] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02510fa0;
LAB_02510f50:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02510f50;
LAB_02510fa0:
                          if (puVar36 == (uint *)0x0) goto LAB_02510f50;
                          if (*puVar31 <= *puVar36) goto LAB_02510f50;
                          uVar23 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = (uint *)puVar35[uVar23];
                    uVar29 = uVar23;
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
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f0d3c = '\x01';
              }
              else if (DAT_054f0d3c != '\x01') goto LAB_02510fe8;
              if ((int)DAT_054f0d40 == 0) goto LAB_02510fe8;
              if ((int)DAT_054f0d40 < 2) {
                uVar23 = 0;
                puVar31 = (uint *)*DAT_054f0d48;
                if (puVar31 != (uint *)0x0) goto LAB_02510e10;
LAB_02510fcc:
                uVar29 = uVar23;
                if (uVar23 < 8) {
LAB_02510fd8:
                  uVar23 = *(uint *)(DAT_054f0d48[uVar29] + 4);
                  if (uVar23 < 8) {
                    DAT_054f0d30 = '\x01';
                    DAT_054f0d34 = uVar38;
                    DAT_054f0d38 = uVar23;
                    goto LAB_0251138c;
                  }
                }
              }
              else {
                uVar23 = 0;
                iVar24 = (int)DAT_054f0d40 + -1;
                do {
                  iVar22 = iVar24 + uVar23;
                  if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                    iVar22 = iVar22 + 1;
                  }
                  uVar29 = iVar22 >> 1;
                  if ((uint *)DAT_054f0d48[(int)uVar29] == (uint *)0x0) goto LAB_02510e20;
                  uVar28 = *(uint *)DAT_054f0d48[(int)uVar29];
                  if (uVar28 == uVar38) goto LAB_02510e20;
                  if (uVar28 < uVar38) {
                    uVar23 = uVar29 + 1;
                  }
                  else {
                    iVar24 = uVar29 - 1;
                  }
                } while ((int)uVar23 < iVar24);
                puVar31 = (uint *)DAT_054f0d48[(int)uVar23];
                if (puVar31 == (uint *)0x0) goto LAB_02510fcc;
LAB_02510e10:
                uVar29 = uVar23;
                if (*puVar31 == uVar38) {
LAB_02510e20:
                  if (7 < uVar29) goto LAB_02510fe8;
                  goto LAB_02510fd8;
                }
              }
LAB_02510fe8:
              uVar23 = 0;
            }
          }
          else {
            if ((DAT_054f0c78 == '\x01') && (DAT_054f0c7c == uVar38)) {
              uVar23 = DAT_054f0c80;
              if (7 < DAT_054f0c80) goto LAB_02511380;
            }
            else {
              if (((DAT_054f0cd8 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f0cd8), iVar24 != 0)) {
                DAT_054f0c88 = 0x800000000;
                DAT_054f0c90 = &DAT_054f0c98;
                __cxa_guard_release(&DAT_054f0cd8);
              }
              if ((DAT_054f0ce0 & 1) == 0) {
                DAT_054f0ce0 = 1;
                if (((DAT_054f0d28 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f0d28), iVar24 != 0)) {
                  DAT_054f0ce4 = 0xffffffff00000000;
                  DAT_054f0cec = 0xffffffff00000000;
                  DAT_054f0cf4 = 0xffffffff00000000;
                  DAT_054f0cfc = 0xffffffff00000000;
                  DAT_054f0d04 = 0xffffffff00000000;
                  DAT_054f0d0c = 0xffffffff00000000;
                  DAT_054f0d14 = 0xffffffff00000000;
                  DAT_054f0d1c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f0d28);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar40 = (&PTR_s_Normal_04a821b8)[lVar37];
                  if (local_174 != pbVar40) {
                    lVar25 = 0;
                    do {
                      if (pbVar40[lVar25] == 0) {
LAB_02511094:
                        iVar24 = (int)lVar25;
joined_r0x02511098:
                        if (0xff < iVar24) {
                          iVar24 = 0xff;
                        }
                        goto LAB_025110a0;
                      }
                      if (pbVar40[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_02511094;
                      }
                      if (pbVar40[lVar25 + 2] == 0) {
                        iVar24 = (int)lVar25 + 2;
                        goto joined_r0x02511098;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar24 = 0;
LAB_025110a0:
                    memcpy(local_174,pbVar40,(long)iVar24);
                    local_174[iVar24] = 0;
                  }
                  uVar23 = (uint)*pbVar40;
                  if (*pbVar40 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar40 = pbVar40 + 1;
                      uVar29 = crc32b(uVar29,uVar23,0x4c11db7);
                      uVar23 = (uint)*pbVar40;
                    } while (uVar23 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_054f0ce4 + lVar37) = uVar29;
                  *(int *)((long)&DAT_054f0ce4 + lVar37 * 8 + 4) = (int)lVar37;
                  iVar24 = (int)DAT_054f0c88;
                  if ((int)DAT_054f0c88 < DAT_054f0c88._4_4_) {
                    *(undefined8 **)(DAT_054f0c90 + (long)(int)DAT_054f0c88 * 8) =
                         &DAT_054f0ce4 + lVar37;
                    iVar24 = (int)DAT_054f0c88 + 1;
                    DAT_054f0c88 = CONCAT44(DAT_054f0c88._4_4_,iVar24);
                  }
                  puVar18 = DAT_054f0c90;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 8);
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar29 * 8);
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar18 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar18 + uVar27 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar18 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02511300;
LAB_025112b0:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_025112b0;
LAB_02511300:
                          if (puVar36 == (uint *)0x0) goto LAB_025112b0;
                          if (*puVar31 <= *puVar36) goto LAB_025112b0;
                          uVar23 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar23 * 8);
                    uVar29 = uVar23;
                    do {
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar18 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar18 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f0c84 = '\x01';
              }
              else if (DAT_054f0c84 != '\x01') goto LAB_02511380;
              if ((int)DAT_054f0c88 != 0) {
                if ((int)DAT_054f0c88 < 2) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  iVar24 = (int)DAT_054f0c88 + -1;
                  do {
                    iVar22 = iVar24 + uVar23;
                    if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                      iVar22 = iVar22 + 1;
                    }
                    uVar29 = iVar22 >> 1;
                    if (*(uint **)(DAT_054f0c90 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x0251136c;
                    uVar28 = **(uint **)(DAT_054f0c90 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar38) goto joined_r0x0251136c;
                    if (uVar28 < uVar38) {
                      uVar23 = uVar29 + 1;
                    }
                    else {
                      iVar24 = uVar29 - 1;
                    }
                  } while ((int)uVar23 < iVar24);
                }
                uVar29 = uVar23;
                if ((*(uint **)(DAT_054f0c90 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_054f0c90 + (long)(int)uVar23 * 8) == uVar38)) {
joined_r0x0251136c:
                  if ((uVar29 < 8) &&
                     (uVar23 = *(uint *)(*(long *)(DAT_054f0c90 + (ulong)uVar29 * 8) + 4),
                     uVar23 < 8)) {
                    DAT_054f0c78 = '\x01';
                    DAT_054f0c7c = uVar38;
                    DAT_054f0c80 = uVar23;
                    goto LAB_02511384;
                  }
                }
              }
LAB_02511380:
              uVar23 = 0;
            }
LAB_02511384:
          }
LAB_0251138c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar38 = puVar31[1], uVar38 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar29 = 0;
              if ((ulong)uVar38 != 0) {
                uVar29 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar38);
              }
              if (*puVar31 <= uVar29) {
                uVar29 = 0xffffffff;
              }
              if (uVar29 < *(uint *)PTR_DAT_04bc3120) {
                *(short *)(*(long *)(PTR_DAT_04bc3120 + 8) + (long)(int)uVar29 * 2) = (short)uVar23;
              }
            }
          }
          uVar38 = *puVar1;
          if (uVar38 != 0) {
            cVar20 = *PTR_DAT_04bc2fe0;
            do {
              puVar18 = PTR_DAT_04bc2fe0;
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar19 = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0xa0) = 0xffffffffffffffff;
                *puVar18 = 1;
                *(undefined8 *)(puVar19 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x98) = 0xffffffffffffffff;
                uVar38 = *puVar1;
              }
              else {
                uVar23 = *(uint *)(puVar19 + 4);
                if (-1 < (int)uVar23) {
                  if ((uint *)((long)puVar1 + (ulong)uVar23) != (uint *)0x0) {
                    uVar38 = *(uint *)((long)puVar1 + (ulong)uVar23);
                    goto LAB_02511520;
                  }
                  break;
                }
                if (uVar23 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar38;
              uVar38 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar38 = 0, puVar1 == puVar31)) goto LAB_02511520;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar19 + 4) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar26 = (int *)(lVar37 + 4);
              while (piVar26[-1] != -0x33097142) {
                piVar26 = piVar26 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_0251151c;
              }
              iVar24 = 0;
              if (*piVar26 != -1) {
                iVar24 = *piVar26;
              }
              *(int *)(puVar19 + 4) = iVar24;
              uVar38 = *puVar1;
              if (uVar38 == 0) break;
            } while( true );
          }
LAB_0251151c:
          uVar38 = 0;
LAB_02511520:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_054f0eb0 == '\x01') && (DAT_054f0eb4 == uVar38)) {
              uVar23 = DAT_054f0eb8;
              if (8 < DAT_054f0eb8) goto LAB_02511978;
            }
            else {
              if (((DAT_054f0f18 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f0f18), iVar24 != 0)) {
                DAT_054f0ec0 = 0x900000000;
                DAT_054f0ec8 = (undefined8 *)&DAT_054f0ed0;
                __cxa_guard_release(&DAT_054f0f18);
              }
              if ((DAT_054f0f20 & 1) == 0) {
                DAT_054f0f20 = 1;
                if (((DAT_054f0f70 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f0f70), iVar24 != 0)) {
                  DAT_054f0f64 = 0xffffffff00000000;
                  DAT_054f0f24 = 0xffffffff00000000;
                  DAT_054f0f2c = 0xffffffff00000000;
                  DAT_054f0f34 = 0xffffffff00000000;
                  DAT_054f0f3c = 0xffffffff00000000;
                  DAT_054f0f44 = 0xffffffff00000000;
                  DAT_054f0f4c = 0xffffffff00000000;
                  DAT_054f0f54 = 0xffffffff00000000;
                  DAT_054f0f5c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f0f70);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar40 = (&PTR_DAT_04a824d0)[lVar37];
                  if (local_174 != pbVar40) {
                    lVar25 = 0;
                    do {
                      if (pbVar40[lVar25] == 0) {
LAB_02511674:
                        iVar24 = (int)lVar25;
joined_r0x02511678:
                        if (0xff < iVar24) {
                          iVar24 = 0xff;
                        }
                        goto LAB_02511680;
                      }
                      if (pbVar40[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_02511674;
                      }
                      if (pbVar40[lVar25 + 2] == 0) {
                        iVar24 = (int)lVar25 + 2;
                        goto joined_r0x02511678;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar24 = 0;
LAB_02511680:
                    memcpy(local_174,pbVar40,(long)iVar24);
                    local_174[iVar24] = 0;
                  }
                  uVar23 = (uint)*pbVar40;
                  if (*pbVar40 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar40 = pbVar40 + 1;
                      uVar29 = crc32b(uVar29,uVar23,0x4c11db7);
                      uVar23 = (uint)*pbVar40;
                    } while (uVar23 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_054f0f24 + lVar37) = uVar29;
                  *(int *)((long)&DAT_054f0f24 + lVar37 * 8 + 4) = (int)lVar37;
                  iVar24 = (int)DAT_054f0ec0;
                  if ((int)DAT_054f0ec0 < DAT_054f0ec0._4_4_) {
                    DAT_054f0ec8[(int)DAT_054f0ec0] = &DAT_054f0f24 + lVar37;
                    iVar24 = (int)DAT_054f0ec0 + 1;
                    DAT_054f0ec0 = CONCAT44(DAT_054f0ec0._4_4_,iVar24);
                  }
                  puVar35 = DAT_054f0ec8;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 9);
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar27] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02511930;
LAB_025118e0:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_025118e0;
LAB_02511930:
                          if (puVar36 == (uint *)0x0) goto LAB_025118e0;
                          if (*puVar31 <= *puVar36) goto LAB_025118e0;
                          uVar23 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = (uint *)puVar35[uVar23];
                    uVar29 = uVar23;
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
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f0ebc = '\x01';
              }
              else if (DAT_054f0ebc != '\x01') goto LAB_02511978;
              if ((int)DAT_054f0ec0 == 0) goto LAB_02511978;
              if ((int)DAT_054f0ec0 < 2) {
                uVar23 = 0;
                puVar31 = (uint *)*DAT_054f0ec8;
                if (puVar31 != (uint *)0x0) goto LAB_025117a0;
LAB_0251195c:
                uVar29 = uVar23;
                if (uVar23 < 9) {
LAB_02511968:
                  uVar23 = *(uint *)(DAT_054f0ec8[uVar29] + 4);
                  if (uVar23 < 9) {
                    DAT_054f0eb0 = '\x01';
                    DAT_054f0eb4 = uVar38;
                    DAT_054f0eb8 = uVar23;
                    goto LAB_02511d1c;
                  }
                }
              }
              else {
                uVar23 = 0;
                iVar24 = (int)DAT_054f0ec0 + -1;
                do {
                  iVar22 = iVar24 + uVar23;
                  if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                    iVar22 = iVar22 + 1;
                  }
                  uVar29 = iVar22 >> 1;
                  if ((uint *)DAT_054f0ec8[(int)uVar29] == (uint *)0x0) goto LAB_025117b0;
                  uVar28 = *(uint *)DAT_054f0ec8[(int)uVar29];
                  if (uVar28 == uVar38) goto LAB_025117b0;
                  if (uVar28 < uVar38) {
                    uVar23 = uVar29 + 1;
                  }
                  else {
                    iVar24 = uVar29 - 1;
                  }
                } while ((int)uVar23 < iVar24);
                puVar31 = (uint *)DAT_054f0ec8[(int)uVar23];
                if (puVar31 == (uint *)0x0) goto LAB_0251195c;
LAB_025117a0:
                uVar29 = uVar23;
                if (*puVar31 == uVar38) {
LAB_025117b0:
                  if (8 < uVar29) goto LAB_02511978;
                  goto LAB_02511968;
                }
              }
LAB_02511978:
              uVar23 = 0;
            }
          }
          else {
            if ((DAT_054f0de8 == '\x01') && (DAT_054f0dec == uVar38)) {
              uVar23 = DAT_054f0df0;
              if (8 < DAT_054f0df0) goto LAB_02511d10;
            }
            else {
              if (((DAT_054f0e50 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f0e50), iVar24 != 0)) {
                DAT_054f0df8 = 0x900000000;
                DAT_054f0e00 = &DAT_054f0e08;
                __cxa_guard_release(&DAT_054f0e50);
              }
              if ((DAT_054f0e58 & 1) == 0) {
                DAT_054f0e58 = 1;
                if (((DAT_054f0ea8 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f0ea8), iVar24 != 0)) {
                  DAT_054f0e9c = 0xffffffff00000000;
                  DAT_054f0e5c = 0xffffffff00000000;
                  DAT_054f0e64 = 0xffffffff00000000;
                  DAT_054f0e6c = 0xffffffff00000000;
                  DAT_054f0e74 = 0xffffffff00000000;
                  DAT_054f0e7c = 0xffffffff00000000;
                  DAT_054f0e84 = 0xffffffff00000000;
                  DAT_054f0e8c = 0xffffffff00000000;
                  DAT_054f0e94 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f0ea8);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar40 = (&PTR_s_Disable_04a823c8)[lVar37];
                  if (local_174 != pbVar40) {
                    lVar25 = 0;
                    do {
                      if (pbVar40[lVar25] == 0) {
LAB_02511a24:
                        iVar24 = (int)lVar25;
joined_r0x02511a28:
                        if (0xff < iVar24) {
                          iVar24 = 0xff;
                        }
                        goto LAB_02511a30;
                      }
                      if (pbVar40[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_02511a24;
                      }
                      if (pbVar40[lVar25 + 2] == 0) {
                        iVar24 = (int)lVar25 + 2;
                        goto joined_r0x02511a28;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar24 = 0;
LAB_02511a30:
                    memcpy(local_174,pbVar40,(long)iVar24);
                    local_174[iVar24] = 0;
                  }
                  uVar23 = (uint)*pbVar40;
                  if (*pbVar40 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar40 = pbVar40 + 1;
                      uVar29 = crc32b(uVar29,uVar23,0x4c11db7);
                      uVar23 = (uint)*pbVar40;
                    } while (uVar23 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_054f0e5c + lVar37) = uVar29;
                  *(int *)((long)&DAT_054f0e5c + lVar37 * 8 + 4) = (int)lVar37;
                  iVar24 = (int)DAT_054f0df8;
                  if ((int)DAT_054f0df8 < DAT_054f0df8._4_4_) {
                    *(undefined8 **)(DAT_054f0e00 + (long)(int)DAT_054f0df8 * 8) =
                         &DAT_054f0e5c + lVar37;
                    iVar24 = (int)DAT_054f0df8 + 1;
                    DAT_054f0df8 = CONCAT44(DAT_054f0df8._4_4_,iVar24);
                  }
                  puVar18 = DAT_054f0e00;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 9);
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar29 * 8);
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar18 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar18 + uVar27 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar18 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02511c90;
LAB_02511c40:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02511c40;
LAB_02511c90:
                          if (puVar36 == (uint *)0x0) goto LAB_02511c40;
                          if (*puVar31 <= *puVar36) goto LAB_02511c40;
                          uVar23 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar23 * 8);
                    uVar29 = uVar23;
                    do {
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar18 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar18 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f0df4 = '\x01';
              }
              else if (DAT_054f0df4 != '\x01') goto LAB_02511d10;
              if ((int)DAT_054f0df8 != 0) {
                if ((int)DAT_054f0df8 < 2) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  iVar24 = (int)DAT_054f0df8 + -1;
                  do {
                    iVar22 = iVar24 + uVar23;
                    if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                      iVar22 = iVar22 + 1;
                    }
                    uVar29 = iVar22 >> 1;
                    if (*(uint **)(DAT_054f0e00 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x02511cfc;
                    uVar28 = **(uint **)(DAT_054f0e00 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar38) goto joined_r0x02511cfc;
                    if (uVar28 < uVar38) {
                      uVar23 = uVar29 + 1;
                    }
                    else {
                      iVar24 = uVar29 - 1;
                    }
                  } while ((int)uVar23 < iVar24);
                }
                uVar29 = uVar23;
                if ((*(uint **)(DAT_054f0e00 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_054f0e00 + (long)(int)uVar23 * 8) == uVar38)) {
joined_r0x02511cfc:
                  if ((uVar29 < 9) &&
                     (uVar23 = *(uint *)(*(long *)(DAT_054f0e00 + (ulong)uVar29 * 8) + 4),
                     uVar23 < 9)) {
                    DAT_054f0de8 = '\x01';
                    DAT_054f0dec = uVar38;
                    DAT_054f0df0 = uVar23;
                    goto LAB_02511d14;
                  }
                }
              }
LAB_02511d10:
              uVar23 = 0;
            }
LAB_02511d14:
          }
LAB_02511d1c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar38 = puVar31[1], uVar38 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar29 = 0;
              if ((ulong)uVar38 != 0) {
                uVar29 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar38);
              }
              if (*puVar31 <= uVar29) {
                uVar29 = 0xffffffff;
              }
              if (uVar29 < *(uint *)PTR_DAT_04bc2ff0) {
                *(short *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar29 * 2) = (short)uVar23;
              }
            }
          }
          uVar38 = *puVar1;
          if (uVar38 != 0) {
            cVar20 = *PTR_DAT_04bc2fe0;
            do {
              puVar18 = PTR_DAT_04bc2fe0;
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar19 = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0xa0) = 0xffffffffffffffff;
                *puVar18 = 1;
                *(undefined8 *)(puVar19 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x98) = 0xffffffffffffffff;
                uVar38 = *puVar1;
              }
              else {
                uVar23 = *(uint *)(puVar19 + 0xc);
                if (-1 < (int)uVar23) {
                  if ((uint *)((long)puVar1 + (ulong)uVar23) != (uint *)0x0) {
                    uVar38 = *(uint *)((long)puVar1 + (ulong)uVar23);
                    goto LAB_02511eb0;
                  }
                  break;
                }
                if (uVar23 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar38;
              uVar38 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar38 = 0, puVar1 == puVar31)) goto LAB_02511eb0;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar19 + 0xc) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar26 = (int *)(lVar37 + 4);
              while (piVar26[-1] != -0x3aa98e8e) {
                piVar26 = piVar26 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_02511eac;
              }
              iVar24 = 0;
              if (*piVar26 != -1) {
                iVar24 = *piVar26;
              }
              *(int *)(puVar19 + 0xc) = iVar24;
              uVar38 = *puVar1;
              if (uVar38 == 0) break;
            } while( true );
          }
LAB_02511eac:
          uVar38 = 0;
LAB_02511eb0:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_054f0fe0 == '\x01') && (DAT_054f0fe4 == uVar38)) {
              uVar23 = DAT_054f0fe8;
              if (2 < DAT_054f0fe8) goto LAB_025122f8;
            }
            else {
              if (((DAT_054f1018 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f1018), iVar24 != 0)) {
                DAT_054f0ff0 = 0x300000000;
                DAT_054f0ff8 = (undefined8 *)&DAT_054f1000;
                __cxa_guard_release(&DAT_054f1018);
              }
              if ((DAT_054f1020 & 1) == 0) {
                DAT_054f1020 = 1;
                if (((DAT_054f1040 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f1040), iVar24 != 0)) {
                  DAT_054f1034 = 0xffffffff00000000;
                  _DAT_054f1024 = 0xffffffff00000000;
                  DAT_054f102c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f1040);
                }
                _DAT_054f1024 = (ulong)~uVar8;
                iVar24 = (int)DAT_054f0ff0;
                iVar22 = DAT_054f0ff0._4_4_;
                if ((int)DAT_054f0ff0 < DAT_054f0ff0._4_4_) {
                  DAT_054f0ff8[(int)DAT_054f0ff0] = &DAT_054f1024;
                  iVar24 = (int)DAT_054f0ff0 + 1;
                  DAT_054f0ff0 = CONCAT44(DAT_054f0ff0._4_4_,iVar24);
                  iVar22 = DAT_054f0ff0._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8b,0x4c11db7);
                uVar3 = crc32b(uVar3,0x95,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x81,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8b,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x81,0x4c11db7);
                uVar3 = crc32b(uVar3,0xaa,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x81,0x4c11db7);
                uVar23 = crc32b(uVar3,0x84,0x4c11db7);
                DAT_054f102c = CONCAT44(1,~uVar23);
                if (iVar24 < iVar22) {
                  DAT_054f0ff8[iVar24] = &DAT_054f102c;
                  iVar24 = (int)DAT_054f0ff0 + 1;
                  DAT_054f0ff0 = CONCAT44(DAT_054f0ff0._4_4_,iVar24);
                  iVar22 = DAT_054f0ff0._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x81,0x4c11db7);
                uVar3 = crc32b(uVar3,0xaa,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe3,0x4c11db7);
                uVar3 = crc32b(uVar3,0x81,0x4c11db7);
                uVar23 = crc32b(uVar3,0x97,0x4c11db7);
                DAT_054f1034 = CONCAT44(2,~uVar23);
                if (iVar24 < iVar22) {
                  DAT_054f0ff8[iVar24] = &DAT_054f1034;
                  iVar24 = (int)DAT_054f0ff0 + 1;
                  DAT_054f0ff0 = CONCAT44(DAT_054f0ff0._4_4_,iVar24);
                }
                puVar35 = DAT_054f0ff8;
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar27] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_025122b0;
LAB_02512260:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02512260;
LAB_025122b0:
                          if (puVar36 == (uint *)0x0) goto LAB_02512260;
                          if (*puVar31 <= *puVar36) goto LAB_02512260;
                          uVar23 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = (uint *)puVar35[uVar23];
                    uVar29 = uVar23;
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
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f0fec = '\x01';
              }
              else if (DAT_054f0fec != '\x01') goto LAB_025122f8;
              if ((int)DAT_054f0ff0 == 0) goto LAB_025122f8;
              if ((int)DAT_054f0ff0 < 2) {
                uVar23 = 0;
                puVar31 = (uint *)*DAT_054f0ff8;
                if (puVar31 != (uint *)0x0) goto LAB_02512114;
LAB_025122dc:
                uVar29 = uVar23;
                if (uVar23 < 3) {
LAB_025122e8:
                  uVar23 = *(uint *)(DAT_054f0ff8[uVar29] + 4);
                  if (uVar23 < 3) {
                    DAT_054f0fe0 = '\x01';
                    DAT_054f0fe4 = uVar38;
                    DAT_054f0fe8 = uVar23;
                    goto LAB_0251261c;
                  }
                }
              }
              else {
                uVar23 = 0;
                iVar24 = (int)DAT_054f0ff0 + -1;
                do {
                  iVar22 = iVar24 + uVar23;
                  if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                    iVar22 = iVar22 + 1;
                  }
                  uVar29 = iVar22 >> 1;
                  if ((uint *)DAT_054f0ff8[(int)uVar29] == (uint *)0x0) goto LAB_02512124;
                  uVar28 = *(uint *)DAT_054f0ff8[(int)uVar29];
                  if (uVar28 == uVar38) goto LAB_02512124;
                  if (uVar28 < uVar38) {
                    uVar23 = uVar29 + 1;
                  }
                  else {
                    iVar24 = uVar29 - 1;
                  }
                } while ((int)uVar23 < iVar24);
                puVar31 = (uint *)DAT_054f0ff8[(int)uVar23];
                if (puVar31 == (uint *)0x0) goto LAB_025122dc;
LAB_02512114:
                uVar29 = uVar23;
                if (*puVar31 == uVar38) {
LAB_02512124:
                  if (2 < uVar29) goto LAB_025122f8;
                  goto LAB_025122e8;
                }
              }
LAB_025122f8:
              uVar23 = 0;
            }
          }
          else {
            if ((DAT_054f0f78 == '\x01') && (DAT_054f0f7c == uVar38)) {
              uVar23 = DAT_054f0f80;
              if (2 < DAT_054f0f80) goto LAB_02512610;
            }
            else {
              if (((DAT_054f0fb0 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f0fb0), iVar24 != 0)) {
                DAT_054f0f88 = 0x300000000;
                DAT_054f0f90 = &DAT_054f0f98;
                __cxa_guard_release(&DAT_054f0fb0);
              }
              if ((DAT_054f0fb8 & 1) == 0) {
                DAT_054f0fb8 = 1;
                if (((DAT_054f0fd8 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f0fd8), iVar24 != 0)) {
                  DAT_054f0fcc = 0xffffffff00000000;
                  DAT_054f0fbc = 0xffffffff00000000;
                  DAT_054f0fc4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f0fd8);
                }
                uVar3 = crc32b(uVar4,0x72,0x4c11db7);
                uVar3 = crc32b(uVar3,0x6d,0x4c11db7);
                uVar3 = crc32b(uVar3,0x61,0x4c11db7);
                uVar23 = crc32b(uVar3,0x6c,0x4c11db7);
                DAT_054f0fbc = (ulong)~uVar23;
                iVar24 = (int)DAT_054f0f88;
                iVar22 = DAT_054f0f88._4_4_;
                if ((int)DAT_054f0f88 < DAT_054f0f88._4_4_) {
                  *(ulong **)(DAT_054f0f90 + (long)(int)DAT_054f0f88 * 8) = &DAT_054f0fbc;
                  iVar24 = (int)DAT_054f0f88 + 1;
                  DAT_054f0f88 = CONCAT44(DAT_054f0f88._4_4_,iVar24);
                  iVar22 = DAT_054f0f88._4_4_;
                }
                DAT_054f0fc4 = CONCAT44(1,~uVar13);
                if (iVar24 < iVar22) {
                  *(undefined8 **)(DAT_054f0f90 + (long)iVar24 * 8) = &DAT_054f0fc4;
                  iVar24 = (int)DAT_054f0f88 + 1;
                  DAT_054f0f88 = CONCAT44(DAT_054f0f88._4_4_,iVar24);
                  iVar22 = DAT_054f0f88._4_4_;
                }
                DAT_054f0fcc = CONCAT44(2,~uVar11);
                if (iVar24 < iVar22) {
                  *(undefined8 **)(DAT_054f0f90 + (long)iVar24 * 8) = &DAT_054f0fcc;
                  iVar24 = (int)DAT_054f0f88 + 1;
                  DAT_054f0f88 = CONCAT44(DAT_054f0f88._4_4_,iVar24);
                }
                puVar18 = DAT_054f0f90;
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar29 * 8);
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar18 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar18 + uVar27 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar18 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02512590;
LAB_02512540:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02512540;
LAB_02512590:
                          if (puVar36 == (uint *)0x0) goto LAB_02512540;
                          if (*puVar31 <= *puVar36) goto LAB_02512540;
                          uVar23 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar23 * 8);
                    uVar29 = uVar23;
                    do {
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar18 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar18 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f0f84 = '\x01';
              }
              else if (DAT_054f0f84 != '\x01') goto LAB_02512610;
              if ((int)DAT_054f0f88 != 0) {
                if ((int)DAT_054f0f88 < 2) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  iVar24 = (int)DAT_054f0f88 + -1;
                  do {
                    iVar22 = iVar24 + uVar23;
                    if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                      iVar22 = iVar22 + 1;
                    }
                    uVar29 = iVar22 >> 1;
                    if (*(uint **)(DAT_054f0f90 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x025125fc;
                    uVar28 = **(uint **)(DAT_054f0f90 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar38) goto joined_r0x025125fc;
                    if (uVar28 < uVar38) {
                      uVar23 = uVar29 + 1;
                    }
                    else {
                      iVar24 = uVar29 - 1;
                    }
                  } while ((int)uVar23 < iVar24);
                }
                uVar29 = uVar23;
                if ((*(uint **)(DAT_054f0f90 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_054f0f90 + (long)(int)uVar23 * 8) == uVar38)) {
joined_r0x025125fc:
                  if ((uVar29 < 3) &&
                     (uVar23 = *(uint *)(*(long *)(DAT_054f0f90 + (ulong)uVar29 * 8) + 4),
                     uVar23 < 3)) {
                    DAT_054f0f78 = '\x01';
                    DAT_054f0f7c = uVar38;
                    DAT_054f0f80 = uVar23;
                    goto LAB_02512614;
                  }
                }
              }
LAB_02512610:
              uVar23 = 0;
            }
LAB_02512614:
          }
LAB_0251261c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar38 = puVar31[1], uVar38 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar29 = 0;
              if ((ulong)uVar38 != 0) {
                uVar29 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar38);
              }
              if (*puVar31 <= uVar29) {
                uVar29 = 0xffffffff;
              }
              if (uVar29 < *(uint *)PTR_DAT_04bc3000) {
                *(short *)(*(long *)(PTR_DAT_04bc3000 + 8) + (long)(int)uVar29 * 2) = (short)uVar23;
              }
            }
          }
          uVar38 = *puVar1;
          if (uVar38 != 0) {
            cVar20 = *PTR_DAT_04bc2fe0;
            do {
              puVar18 = PTR_DAT_04bc2fe0;
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar19 = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0xa0) = 0xffffffffffffffff;
                *puVar18 = 1;
                *(undefined8 *)(puVar19 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x98) = 0xffffffffffffffff;
                uVar38 = *puVar1;
              }
              else {
                uVar23 = *(uint *)(puVar19 + 0x10);
                if (-1 < (int)uVar23) {
                  if ((uint *)((long)puVar1 + (ulong)uVar23) != (uint *)0x0) {
                    uVar38 = *(uint *)((long)puVar1 + (ulong)uVar23);
                    goto LAB_025127b0;
                  }
                  break;
                }
                if (uVar23 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar38;
              uVar38 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar38 = 0, puVar1 == puVar31)) goto LAB_025127b0;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar19 + 0x10) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar26 = (int *)(lVar37 + 4);
              while (piVar26[-1] != -0x6232139) {
                piVar26 = piVar26 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_025127ac;
              }
              iVar24 = 0;
              if (*piVar26 != -1) {
                iVar24 = *piVar26;
              }
              *(int *)(puVar19 + 0x10) = iVar24;
              uVar38 = *puVar1;
              if (uVar38 == 0) break;
            } while( true );
          }
LAB_025127ac:
          uVar38 = 0;
LAB_025127b0:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_054f10a0 == '\x01') && (DAT_054f10a4 == uVar38)) {
              uVar23 = DAT_054f10a8;
              if (1 < DAT_054f10a8) goto LAB_02512b78;
            }
            else {
              if (((DAT_054f10d0 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f10d0), iVar24 != 0)) {
                DAT_054f10b0 = 0x200000000;
                DAT_054f10b8 = (undefined8 *)&DAT_054f10c0;
                __cxa_guard_release(&DAT_054f10d0);
              }
              if ((DAT_054f10d8 & 1) == 0) {
                DAT_054f10d8 = 1;
                if (((DAT_054f10f0 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f10f0), iVar24 != 0)) {
                  _DAT_054f10dc = 0xffffffff00000000;
                  DAT_054f10e4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f10f0);
                }
                _DAT_054f10dc = (ulong)~uVar9;
                iVar24 = (int)DAT_054f10b0;
                iVar22 = DAT_054f10b0._4_4_;
                if ((int)DAT_054f10b0 < DAT_054f10b0._4_4_) {
                  DAT_054f10b8[(int)DAT_054f10b0] = &DAT_054f10dc;
                  iVar24 = (int)DAT_054f10b0 + 1;
                  DAT_054f10b0 = CONCAT44(DAT_054f10b0._4_4_,iVar24);
                  iVar22 = DAT_054f10b0._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0xe7,0x4c11db7);
                uVar3 = crc32b(uVar3,0xb4,0x4c11db7);
                uVar3 = crc32b(uVar3,0xaf,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe7,0x4c11db7);
                uVar3 = crc32b(uVar3,0xa9,0x4c11db7);
                uVar23 = crc32b(uVar3,0x8d,0x4c11db7);
                DAT_054f10e4 = CONCAT44(1,~uVar23);
                if (iVar24 < iVar22) {
                  DAT_054f10b8[iVar24] = &DAT_054f10e4;
                  iVar24 = (int)DAT_054f10b0 + 1;
                  DAT_054f10b0 = CONCAT44(DAT_054f10b0._4_4_,iVar24);
                }
                puVar35 = DAT_054f10b8;
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar27] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02512b30;
LAB_02512ae0:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02512ae0;
LAB_02512b30:
                          if (puVar36 == (uint *)0x0) goto LAB_02512ae0;
                          if (*puVar31 <= *puVar36) goto LAB_02512ae0;
                          uVar23 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = (uint *)puVar35[uVar23];
                    uVar29 = uVar23;
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
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f10ac = '\x01';
              }
              else if (DAT_054f10ac != '\x01') goto LAB_02512b78;
              if ((int)DAT_054f10b0 == 0) goto LAB_02512b78;
              if ((int)DAT_054f10b0 < 2) {
                uVar23 = 0;
                puVar31 = (uint *)*DAT_054f10b8;
                if (puVar31 != (uint *)0x0) goto LAB_02512994;
LAB_02512b5c:
                uVar29 = uVar23;
                if (uVar23 < 2) {
LAB_02512b68:
                  uVar23 = *(uint *)(DAT_054f10b8[uVar29] + 4);
                  if (uVar23 < 2) {
                    DAT_054f10a0 = '\x01';
                    DAT_054f10a4 = uVar38;
                    DAT_054f10a8 = uVar23;
                    goto LAB_02512e4c;
                  }
                }
              }
              else {
                uVar23 = 0;
                iVar24 = (int)DAT_054f10b0 + -1;
                do {
                  iVar22 = iVar24 + uVar23;
                  if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                    iVar22 = iVar22 + 1;
                  }
                  uVar29 = iVar22 >> 1;
                  if ((uint *)DAT_054f10b8[(int)uVar29] == (uint *)0x0) goto LAB_025129a4;
                  uVar28 = *(uint *)DAT_054f10b8[(int)uVar29];
                  if (uVar28 == uVar38) goto LAB_025129a4;
                  if (uVar28 < uVar38) {
                    uVar23 = uVar29 + 1;
                  }
                  else {
                    iVar24 = uVar29 - 1;
                  }
                } while ((int)uVar23 < iVar24);
                puVar31 = (uint *)DAT_054f10b8[(int)uVar23];
                if (puVar31 == (uint *)0x0) goto LAB_02512b5c;
LAB_02512994:
                uVar29 = uVar23;
                if (*puVar31 == uVar38) {
LAB_025129a4:
                  if (1 < uVar29) goto LAB_02512b78;
                  goto LAB_02512b68;
                }
              }
LAB_02512b78:
              uVar23 = 0;
            }
          }
          else {
            if ((DAT_054f1048 == '\x01') && (DAT_054f104c == uVar38)) {
              uVar23 = DAT_054f1050;
              if (1 < DAT_054f1050) goto LAB_02512e40;
            }
            else {
              if (((DAT_054f1078 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f1078), iVar24 != 0)) {
                DAT_054f1058 = 0x200000000;
                DAT_054f1060 = &DAT_054f1068;
                __cxa_guard_release(&DAT_054f1078);
              }
              if ((DAT_054f1080 & 1) == 0) {
                DAT_054f1080 = 1;
                if (((DAT_054f1098 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f1098), iVar24 != 0)) {
                  _DAT_054f1084 = 0xffffffff00000000;
                  DAT_054f108c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f1098);
                }
                _DAT_054f1084 = (ulong)~uVar12;
                iVar24 = (int)DAT_054f1058;
                iVar22 = DAT_054f1058._4_4_;
                if ((int)DAT_054f1058 < DAT_054f1058._4_4_) {
                  *(undefined4 **)(DAT_054f1060 + (long)(int)DAT_054f1058 * 8) = &DAT_054f1084;
                  iVar24 = (int)DAT_054f1058 + 1;
                  DAT_054f1058 = CONCAT44(DAT_054f1058._4_4_,iVar24);
                  iVar22 = DAT_054f1058._4_4_;
                }
                DAT_054f108c = CONCAT44(1,~uVar16);
                if (iVar24 < iVar22) {
                  *(undefined8 **)(DAT_054f1060 + (long)iVar24 * 8) = &DAT_054f108c;
                  iVar24 = (int)DAT_054f1058 + 1;
                  DAT_054f1058 = CONCAT44(DAT_054f1058._4_4_,iVar24);
                }
                puVar18 = DAT_054f1060;
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar29 * 8);
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar18 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar18 + uVar27 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar18 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02512dc0;
LAB_02512d70:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02512d70;
LAB_02512dc0:
                          if (puVar36 == (uint *)0x0) goto LAB_02512d70;
                          if (*puVar31 <= *puVar36) goto LAB_02512d70;
                          uVar23 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar23 * 8);
                    uVar29 = uVar23;
                    do {
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar18 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar18 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f1054 = '\x01';
              }
              else if (DAT_054f1054 != '\x01') goto LAB_02512e40;
              if ((int)DAT_054f1058 != 0) {
                if ((int)DAT_054f1058 < 2) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  iVar24 = (int)DAT_054f1058 + -1;
                  do {
                    iVar22 = iVar24 + uVar23;
                    if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                      iVar22 = iVar22 + 1;
                    }
                    uVar29 = iVar22 >> 1;
                    if (*(uint **)(DAT_054f1060 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x02512e2c;
                    uVar28 = **(uint **)(DAT_054f1060 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar38) goto joined_r0x02512e2c;
                    if (uVar28 < uVar38) {
                      uVar23 = uVar29 + 1;
                    }
                    else {
                      iVar24 = uVar29 - 1;
                    }
                  } while ((int)uVar23 < iVar24);
                }
                uVar29 = uVar23;
                if ((*(uint **)(DAT_054f1060 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_054f1060 + (long)(int)uVar23 * 8) == uVar38)) {
joined_r0x02512e2c:
                  if ((uVar29 < 2) &&
                     (uVar23 = *(uint *)(*(long *)(DAT_054f1060 + (ulong)uVar29 * 8) + 4),
                     uVar23 < 2)) {
                    DAT_054f1048 = '\x01';
                    DAT_054f104c = uVar38;
                    DAT_054f1050 = uVar23;
                    goto LAB_02512e44;
                  }
                }
              }
LAB_02512e40:
              uVar23 = 0;
            }
LAB_02512e44:
          }
LAB_02512e4c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar38 = puVar31[1], uVar38 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar29 = 0;
              if ((ulong)uVar38 != 0) {
                uVar29 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar38);
              }
              if (*puVar31 <= uVar29) {
                uVar29 = 0xffffffff;
              }
              if (uVar29 < *(uint *)PTR_DAT_04bc2ff8) {
                *(short *)(*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar29 * 2) = (short)uVar23;
              }
            }
          }
          uVar38 = *puVar1;
          if (uVar38 != 0) {
            cVar20 = *PTR_DAT_04bc2fe0;
            do {
              puVar18 = PTR_DAT_04bc2fe0;
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar19 = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0xa0) = 0xffffffffffffffff;
                *puVar18 = 1;
                *(undefined8 *)(puVar19 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x98) = 0xffffffffffffffff;
                uVar38 = *puVar1;
              }
              else {
                uVar23 = *(uint *)(puVar19 + 0x14);
                if (-1 < (int)uVar23) {
                  if ((uint *)((long)puVar1 + (ulong)uVar23) != (uint *)0x0) {
                    uVar38 = *(uint *)((long)puVar1 + (ulong)uVar23);
                    goto LAB_02512fe0;
                  }
                  break;
                }
                if (uVar23 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar38;
              uVar38 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar38 = 0, puVar1 == puVar31)) goto LAB_02512fe0;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar19 + 0x14) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar26 = (int *)(lVar37 + 4);
              while (piVar26[-1] != -0x7c74f674) {
                piVar26 = piVar26 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_02512fdc;
              }
              iVar24 = 0;
              if (*piVar26 != -1) {
                iVar24 = *piVar26;
              }
              *(int *)(puVar19 + 0x14) = iVar24;
              uVar38 = *puVar1;
              if (uVar38 == 0) break;
            } while( true );
          }
LAB_02512fdc:
          uVar38 = 0;
LAB_02512fe0:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_054f1160 == '\x01') && (DAT_054f1164 == uVar38)) {
              uVar23 = DAT_054f1168;
              if (2 < DAT_054f1168) goto LAB_02513448;
            }
            else {
              if (((DAT_054f1198 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f1198), iVar24 != 0)) {
                DAT_054f1170 = 0x300000000;
                DAT_054f1178 = (undefined8 *)&DAT_054f1180;
                __cxa_guard_release(&DAT_054f1198);
              }
              if ((DAT_054f11a0 & 1) == 0) {
                DAT_054f11a0 = 1;
                if (((DAT_054f11c0 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f11c0), iVar24 != 0)) {
                  DAT_054f11b4 = 0xffffffff00000000;
                  _DAT_054f11a4 = 0xffffffff00000000;
                  DAT_054f11ac = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f11c0);
                }
                _DAT_054f11a4 = (ulong)~uVar14;
                iVar24 = (int)DAT_054f1170;
                iVar22 = DAT_054f1170._4_4_;
                if ((int)DAT_054f1170 < DAT_054f1170._4_4_) {
                  DAT_054f1178[(int)DAT_054f1170] = &DAT_054f11a4;
                  iVar24 = (int)DAT_054f1170 + 1;
                  DAT_054f1170 = CONCAT44(DAT_054f1170._4_4_,iVar24);
                  iVar22 = DAT_054f1170._4_4_;
                }
                uVar3 = crc32b(uVar2,0x87,0x4c11db7);
                uVar3 = crc32b(uVar3,0xaa,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8b,0x4c11db7);
                uVar3 = crc32b(uVar3,0x95,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe8,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbf,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbd,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbe,0x4c11db7);
                uVar23 = crc32b(uVar3,0x93,0x4c11db7);
                DAT_054f11ac = CONCAT44(1,~uVar23);
                if (iVar24 < iVar22) {
                  DAT_054f1178[iVar24] = &DAT_054f11ac;
                  iVar24 = (int)DAT_054f1170 + 1;
                  DAT_054f1170 = CONCAT44(DAT_054f1170._4_4_,iVar24);
                  iVar22 = DAT_054f1170._4_4_;
                }
                uVar3 = crc32b(0xffffffff,0xe6,0x4c11db7);
                uVar3 = crc32b(uVar3,0x89,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8b,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0x8b,0x4c11db7);
                uVar3 = crc32b(uVar3,0x95,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe8,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbf,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbd,0x4c11db7);
                uVar3 = crc32b(uVar3,0xe5,0x4c11db7);
                uVar3 = crc32b(uVar3,0xbe,0x4c11db7);
                uVar23 = crc32b(uVar3,0x93,0x4c11db7);
                DAT_054f11b4 = CONCAT44(2,~uVar23);
                if (iVar24 < iVar22) {
                  DAT_054f1178[iVar24] = &DAT_054f11b4;
                  iVar24 = (int)DAT_054f1170 + 1;
                  DAT_054f1170 = CONCAT44(DAT_054f1170._4_4_,iVar24);
                }
                puVar35 = DAT_054f1178;
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar27] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02513400;
LAB_025133b0:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_025133b0;
LAB_02513400:
                          if (puVar36 == (uint *)0x0) goto LAB_025133b0;
                          if (*puVar31 <= *puVar36) goto LAB_025133b0;
                          uVar23 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = (uint *)puVar35[uVar23];
                    uVar29 = uVar23;
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
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f116c = '\x01';
              }
              else if (DAT_054f116c != '\x01') goto LAB_02513448;
              if ((int)DAT_054f1170 == 0) goto LAB_02513448;
              if ((int)DAT_054f1170 < 2) {
                uVar23 = 0;
                puVar31 = (uint *)*DAT_054f1178;
                if (puVar31 != (uint *)0x0) goto LAB_02513270;
LAB_0251342c:
                uVar29 = uVar23;
                if (uVar23 < 3) {
LAB_02513438:
                  uVar23 = *(uint *)(DAT_054f1178[uVar29] + 4);
                  if (uVar23 < 3) {
                    DAT_054f1160 = '\x01';
                    DAT_054f1164 = uVar38;
                    DAT_054f1168 = uVar23;
                    goto LAB_0251374c;
                  }
                }
              }
              else {
                uVar23 = 0;
                iVar24 = (int)DAT_054f1170 + -1;
                do {
                  iVar22 = iVar24 + uVar23;
                  if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                    iVar22 = iVar22 + 1;
                  }
                  uVar29 = iVar22 >> 1;
                  if ((uint *)DAT_054f1178[(int)uVar29] == (uint *)0x0) goto LAB_02513280;
                  uVar28 = *(uint *)DAT_054f1178[(int)uVar29];
                  if (uVar28 == uVar38) goto LAB_02513280;
                  if (uVar28 < uVar38) {
                    uVar23 = uVar29 + 1;
                  }
                  else {
                    iVar24 = uVar29 - 1;
                  }
                } while ((int)uVar23 < iVar24);
                puVar31 = (uint *)DAT_054f1178[(int)uVar23];
                if (puVar31 == (uint *)0x0) goto LAB_0251342c;
LAB_02513270:
                uVar29 = uVar23;
                if (*puVar31 == uVar38) {
LAB_02513280:
                  if (2 < uVar29) goto LAB_02513448;
                  goto LAB_02513438;
                }
              }
LAB_02513448:
              uVar23 = 0;
            }
          }
          else {
            if ((DAT_054f10f8 == '\x01') && (DAT_054f10fc == uVar38)) {
              uVar23 = DAT_054f1100;
              if (2 < DAT_054f1100) goto LAB_02513740;
            }
            else {
              if (((DAT_054f1130 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f1130), iVar24 != 0)) {
                DAT_054f1108 = 0x300000000;
                DAT_054f1110 = &DAT_054f1118;
                __cxa_guard_release(&DAT_054f1130);
              }
              if ((DAT_054f1138 & 1) == 0) {
                DAT_054f1138 = 1;
                if (((DAT_054f1158 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f1158), iVar24 != 0)) {
                  DAT_054f114c = 0xffffffff00000000;
                  _DAT_054f113c = 0xffffffff00000000;
                  DAT_054f1144 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f1158);
                }
                _DAT_054f113c = (ulong)~uVar11;
                iVar24 = (int)DAT_054f1108;
                iVar22 = DAT_054f1108._4_4_;
                if ((int)DAT_054f1108 < DAT_054f1108._4_4_) {
                  *(undefined4 **)(DAT_054f1110 + (long)(int)DAT_054f1108 * 8) = &DAT_054f113c;
                  iVar24 = (int)DAT_054f1108 + 1;
                  DAT_054f1108 = CONCAT44(DAT_054f1108._4_4_,iVar24);
                  iVar22 = DAT_054f1108._4_4_;
                }
                DAT_054f1144 = CONCAT44(1,~uVar7);
                if (iVar24 < iVar22) {
                  *(undefined8 **)(DAT_054f1110 + (long)iVar24 * 8) = &DAT_054f1144;
                  iVar24 = (int)DAT_054f1108 + 1;
                  DAT_054f1108 = CONCAT44(DAT_054f1108._4_4_,iVar24);
                  iVar22 = DAT_054f1108._4_4_;
                }
                DAT_054f114c = CONCAT44(2,~uVar15);
                if (iVar24 < iVar22) {
                  *(undefined8 **)(DAT_054f1110 + (long)iVar24 * 8) = &DAT_054f114c;
                  iVar24 = (int)DAT_054f1108 + 1;
                  DAT_054f1108 = CONCAT44(DAT_054f1108._4_4_,iVar24);
                }
                puVar18 = DAT_054f1110;
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar29 * 8);
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar18 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar18 + uVar27 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar18 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_025136c0;
LAB_02513670:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02513670;
LAB_025136c0:
                          if (puVar36 == (uint *)0x0) goto LAB_02513670;
                          if (*puVar31 <= *puVar36) goto LAB_02513670;
                          uVar23 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar23 * 8);
                    uVar29 = uVar23;
                    do {
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar18 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar18 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f1104 = '\x01';
              }
              else if (DAT_054f1104 != '\x01') goto LAB_02513740;
              if ((int)DAT_054f1108 != 0) {
                if ((int)DAT_054f1108 < 2) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  iVar24 = (int)DAT_054f1108 + -1;
                  do {
                    iVar22 = iVar24 + uVar23;
                    if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                      iVar22 = iVar22 + 1;
                    }
                    uVar29 = iVar22 >> 1;
                    if (*(uint **)(DAT_054f1110 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x0251372c;
                    uVar28 = **(uint **)(DAT_054f1110 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar38) goto joined_r0x0251372c;
                    if (uVar28 < uVar38) {
                      uVar23 = uVar29 + 1;
                    }
                    else {
                      iVar24 = uVar29 - 1;
                    }
                  } while ((int)uVar23 < iVar24);
                }
                uVar29 = uVar23;
                if ((*(uint **)(DAT_054f1110 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_054f1110 + (long)(int)uVar23 * 8) == uVar38)) {
joined_r0x0251372c:
                  if ((uVar29 < 3) &&
                     (uVar23 = *(uint *)(*(long *)(DAT_054f1110 + (ulong)uVar29 * 8) + 4),
                     uVar23 < 3)) {
                    DAT_054f10f8 = '\x01';
                    DAT_054f10fc = uVar38;
                    DAT_054f1100 = uVar23;
                    goto LAB_02513744;
                  }
                }
              }
LAB_02513740:
              uVar23 = 0;
            }
LAB_02513744:
          }
LAB_0251374c:
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar38 = puVar31[1], uVar38 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar29 = 0;
              if ((ulong)uVar38 != 0) {
                uVar29 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar38);
              }
              if (*puVar31 <= uVar29) {
                uVar29 = 0xffffffff;
              }
              if (uVar29 < *(uint *)PTR_DAT_04bc30f0) {
                *(short *)(*(long *)(PTR_DAT_04bc30f0 + 8) + (long)(int)uVar29 * 2) = (short)uVar23;
              }
            }
          }
          uVar38 = *puVar1;
          if (uVar38 != 0) {
            cVar20 = *PTR_DAT_04bc2fe0;
            do {
              puVar18 = PTR_DAT_04bc2fe0;
              if (cVar20 == '\0') {
                cVar20 = '\x01';
                *(undefined8 *)puVar19 = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0xa0) = 0xffffffffffffffff;
                *puVar18 = 1;
                *(undefined8 *)(puVar19 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar19 + 0x98) = 0xffffffffffffffff;
                uVar38 = *puVar1;
              }
              else {
                uVar23 = *(uint *)(puVar19 + 0x18);
                if (-1 < (int)uVar23) {
                  if ((uint *)((long)puVar1 + (ulong)uVar23) != (uint *)0x0) {
                    uVar38 = *(uint *)((long)puVar1 + (ulong)uVar23);
                    goto LAB_025138e0;
                  }
                  break;
                }
                if (uVar23 != 0xffffffff) break;
              }
              puVar31 = (uint *)(ulong)uVar38;
              uVar38 = 0;
              if ((puVar31 == (uint *)0x0) || (uVar38 = 0, puVar1 == puVar31)) goto LAB_025138e0;
              lVar37 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar31)) != '\0') {
                lVar37 = 0x1c;
              }
              lVar37 = (long)puVar1 + (lVar37 - (long)puVar31);
              if (lVar37 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar31));
              *(undefined4 *)(puVar19 + 0x18) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar26 = (int *)(lVar37 + 4);
              while (piVar26[-1] != -0xd660804) {
                piVar26 = piVar26 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_025138dc;
              }
              iVar24 = 0;
              if (*piVar26 != -1) {
                iVar24 = *piVar26;
              }
              *(int *)(puVar19 + 0x18) = iVar24;
              uVar38 = *puVar1;
              if (uVar38 == 0) break;
            } while( true );
          }
LAB_025138dc:
          uVar38 = 0;
LAB_025138e0:
          if (((*puVar1 == 0) || (lVar37 = (long)puVar1 - (ulong)*puVar1, lVar37 == 0)) ||
             (*(char *)(lVar37 + 0xb) == '\0')) {
            if ((DAT_054f1250 == '\x01') && (DAT_054f1254 == uVar38)) {
              uVar23 = DAT_054f1258;
              if (4 < DAT_054f1258) goto LAB_02513d38;
            }
            else {
              if (((DAT_054f1298 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f1298), iVar24 != 0)) {
                DAT_054f1260 = 0x500000000;
                DAT_054f1268 = (undefined8 *)&DAT_054f1270;
                __cxa_guard_release(&DAT_054f1298);
              }
              if ((DAT_054f12a0 & 1) == 0) {
                DAT_054f12a0 = 1;
                if (((DAT_054f12d0 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f12d0), iVar24 != 0)) {
                  DAT_054f12c4 = 0xffffffff00000000;
                  DAT_054f12a4 = 0xffffffff00000000;
                  DAT_054f12ac = 0xffffffff00000000;
                  DAT_054f12b4 = 0xffffffff00000000;
                  DAT_054f12bc = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f12d0);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar40 = (&PTR_DAT_04a825f0)[lVar37];
                  if (local_174 != pbVar40) {
                    lVar25 = 0;
                    do {
                      if (pbVar40[lVar25] == 0) {
LAB_02513a34:
                        iVar24 = (int)lVar25;
joined_r0x02513a38:
                        if (0xff < iVar24) {
                          iVar24 = 0xff;
                        }
                        goto LAB_02513a40;
                      }
                      if (pbVar40[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_02513a34;
                      }
                      if (pbVar40[lVar25 + 2] == 0) {
                        iVar24 = (int)lVar25 + 2;
                        goto joined_r0x02513a38;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar24 = 0;
LAB_02513a40:
                    memcpy(local_174,pbVar40,(long)iVar24);
                    local_174[iVar24] = 0;
                  }
                  uVar23 = (uint)*pbVar40;
                  if (*pbVar40 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar40 = pbVar40 + 1;
                      uVar29 = crc32b(uVar29,uVar23,0x4c11db7);
                      uVar23 = (uint)*pbVar40;
                    } while (uVar23 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_054f12a4 + lVar37) = uVar29;
                  *(int *)((long)&DAT_054f12a4 + lVar37 * 8 + 4) = (int)lVar37;
                  iVar24 = (int)DAT_054f1260;
                  if ((int)DAT_054f1260 < DAT_054f1260._4_4_) {
                    DAT_054f1268[(int)DAT_054f1260] = &DAT_054f12a4 + lVar37;
                    iVar24 = (int)DAT_054f1260 + 1;
                    DAT_054f1260 = CONCAT44(DAT_054f1260._4_4_,iVar24);
                  }
                  puVar35 = DAT_054f1268;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 5);
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = (uint *)puVar35[uVar29];
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = (uint *)puVar35[uVar30];
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        puVar35[uVar30] = puVar31;
                        puVar35[uVar27] = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar34 = puVar35 + uVar30 + 1;
                      do {
                        puVar31 = (uint *)*puVar34;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar34[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02513cf0;
LAB_02513ca0:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar34[-1] = puVar31;
                          *puVar34 = puVar33;
                          puVar36 = (uint *)puVar34[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02513ca0;
LAB_02513cf0:
                          if (puVar36 == (uint *)0x0) goto LAB_02513ca0;
                          if (*puVar31 <= *puVar36) goto LAB_02513ca0;
                          uVar23 = uVar28 + 1;
                          *puVar34 = puVar36;
                          puVar34[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar34 = puVar34 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = (uint *)puVar35[uVar23];
                    uVar29 = uVar23;
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
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f125c = '\x01';
              }
              else if (DAT_054f125c != '\x01') goto LAB_02513d38;
              if ((int)DAT_054f1260 == 0) goto LAB_02513d38;
              if ((int)DAT_054f1260 < 2) {
                uVar23 = 0;
                puVar31 = (uint *)*DAT_054f1268;
                if (puVar31 != (uint *)0x0) goto LAB_02513b60;
LAB_02513d1c:
                if (uVar23 < 5) {
LAB_02513d28:
                  uVar23 = *(uint *)(DAT_054f1268[uVar23] + 4);
                  if (uVar23 < 5) {
                    DAT_054f1250 = '\x01';
                    DAT_054f1254 = uVar38;
                    DAT_054f1258 = uVar23;
                    goto LAB_02513d3c;
                  }
                }
              }
              else {
                uVar23 = 0;
                iVar24 = (int)DAT_054f1260 + -1;
                do {
                  iVar22 = iVar24 + uVar23;
                  if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                    iVar22 = iVar22 + 1;
                  }
                  uVar29 = iVar22 >> 1;
                  if ((uint *)DAT_054f1268[(int)uVar29] == (uint *)0x0) goto LAB_02513b70;
                  uVar28 = *(uint *)DAT_054f1268[(int)uVar29];
                  if (uVar28 == uVar38) goto LAB_02513b70;
                  if (uVar28 < uVar38) {
                    uVar23 = uVar29 + 1;
                  }
                  else {
                    iVar24 = uVar29 - 1;
                  }
                } while ((int)uVar23 < iVar24);
                puVar31 = (uint *)DAT_054f1268[(int)uVar23];
                if (puVar31 == (uint *)0x0) goto LAB_02513d1c;
LAB_02513b60:
                uVar29 = uVar23;
                if (*puVar31 == uVar38) {
LAB_02513b70:
                  uVar23 = uVar29;
                  if (4 < uVar29) goto LAB_02513d38;
                  goto LAB_02513d28;
                }
              }
LAB_02513d38:
              uVar23 = 2;
            }
LAB_02513d3c:
            uVar21 = (undefined2)uVar23;
          }
          else {
            if ((DAT_054f11c8 == '\x01') && (DAT_054f11cc == uVar38)) {
              uVar23 = DAT_054f11d0;
              if (4 < DAT_054f11d0) goto LAB_025140e0;
            }
            else {
              if (((DAT_054f1210 & 1) == 0) &&
                 (iVar24 = __cxa_guard_acquire(&DAT_054f1210), iVar24 != 0)) {
                DAT_054f11d8 = 0x500000000;
                DAT_054f11e0 = &DAT_054f11e8;
                __cxa_guard_release(&DAT_054f1210);
              }
              if ((DAT_054f1218 & 1) == 0) {
                DAT_054f1218 = 1;
                if (((DAT_054f1248 & 1) == 0) &&
                   (iVar24 = __cxa_guard_acquire(&DAT_054f1248), iVar24 != 0)) {
                  DAT_054f123c = 0xffffffff00000000;
                  DAT_054f121c = 0xffffffff00000000;
                  DAT_054f1224 = 0xffffffff00000000;
                  DAT_054f122c = 0xffffffff00000000;
                  DAT_054f1234 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_054f1248);
                }
                lVar37 = 0;
                do {
                  local_75 = 0;
                  pbVar40 = (&PTR_s_Continue_04a82558)[lVar37];
                  if (local_174 != pbVar40) {
                    lVar25 = 0;
                    do {
                      if (pbVar40[lVar25] == 0) {
LAB_02513de8:
                        iVar24 = (int)lVar25;
joined_r0x02513dec:
                        if (0xff < iVar24) {
                          iVar24 = 0xff;
                        }
                        goto LAB_02513df4;
                      }
                      if (pbVar40[lVar25 + 1] == 0) {
                        lVar25 = lVar25 + 1;
                        goto LAB_02513de8;
                      }
                      if (pbVar40[lVar25 + 2] == 0) {
                        iVar24 = (int)lVar25 + 2;
                        goto joined_r0x02513dec;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    iVar24 = 0;
LAB_02513df4:
                    memcpy(local_174,pbVar40,(long)iVar24);
                    local_174[iVar24] = 0;
                  }
                  uVar23 = (uint)*pbVar40;
                  if (*pbVar40 == 0) {
                    uVar29 = 0;
                  }
                  else {
                    uVar29 = 0xffffffff;
                    do {
                      pbVar40 = pbVar40 + 1;
                      uVar29 = crc32b(uVar29,uVar23,0x4c11db7);
                      uVar23 = (uint)*pbVar40;
                    } while (uVar23 != 0);
                    uVar29 = ~uVar29;
                  }
                  *(uint *)(&DAT_054f121c + lVar37) = uVar29;
                  *(int *)((long)&DAT_054f121c + lVar37 * 8 + 4) = (int)lVar37;
                  iVar24 = (int)DAT_054f11d8;
                  if ((int)DAT_054f11d8 < DAT_054f11d8._4_4_) {
                    *(undefined8 **)(DAT_054f11e0 + (long)(int)DAT_054f11d8 * 8) =
                         &DAT_054f121c + lVar37;
                    iVar24 = (int)DAT_054f11d8 + 1;
                    DAT_054f11d8 = CONCAT44(DAT_054f11d8._4_4_,iVar24);
                  }
                  puVar18 = DAT_054f11e0;
                  lVar37 = lVar37 + 1;
                } while (lVar37 != 5);
                if (1 < iVar24) {
                  uVar29 = 0;
                  uVar23 = iVar24 - 1;
                  do {
                    if ((int)uVar23 <= (int)uVar29) break;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar29 * 8);
                    uVar27 = (ulong)uVar29;
                    if ((uVar23 - uVar29 & 1) == 0) {
                      uVar30 = uVar27;
                      puVar33 = puVar31;
                    }
                    else {
                      uVar30 = uVar27 + 1;
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar33 < *puVar31)) {
                        *(uint **)(puVar18 + uVar30 * 8) = puVar31;
                        *(uint **)(puVar18 + uVar27 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                    }
                    uVar32 = (ulong)uVar23;
                    uVar23 = uVar29;
                    if (~uVar27 + uVar32 != 0) {
                      puVar35 = (undefined8 *)(puVar18 + uVar30 * 8 + 8);
                      do {
                        puVar31 = (uint *)*puVar35;
                        uVar28 = (uint)uVar30;
                        if (((puVar33 == (uint *)0x0) || (puVar31 == (uint *)0x0)) ||
                           (*puVar33 <= *puVar31)) {
                          puVar36 = (uint *)puVar35[1];
                          if (puVar31 != (uint *)0x0) goto LAB_02514060;
LAB_02514010:
                          puVar31 = puVar36;
                        }
                        else {
                          puVar35[-1] = puVar31;
                          *puVar35 = puVar33;
                          puVar36 = (uint *)puVar35[1];
                          puVar31 = puVar33;
                          uVar23 = uVar28;
                          if (puVar33 == (uint *)0x0) goto LAB_02514010;
LAB_02514060:
                          if (puVar36 == (uint *)0x0) goto LAB_02514010;
                          if (*puVar31 <= *puVar36) goto LAB_02514010;
                          uVar23 = uVar28 + 1;
                          *puVar35 = puVar36;
                          puVar35[1] = puVar31;
                        }
                        uVar30 = uVar30 + 2;
                        puVar35 = puVar35 + 2;
                        puVar33 = puVar31;
                      } while (uVar32 != uVar30);
                    }
                    if ((int)uVar23 <= (int)uVar29) break;
                    uVar30 = (ulong)uVar23;
                    puVar31 = *(uint **)(puVar18 + (ulong)uVar23 * 8);
                    uVar29 = uVar23;
                    do {
                      puVar33 = *(uint **)(puVar18 + uVar30 * 8 + -8);
                      if (((puVar31 != (uint *)0x0) && (puVar33 != (uint *)0x0)) &&
                         (*puVar31 < *puVar33)) {
                        uVar29 = (uint)uVar30;
                        *(uint **)(puVar18 + uVar30 * 8 + -8) = puVar31;
                        *(uint **)(puVar18 + uVar30 * 8) = puVar33;
                        puVar33 = puVar31;
                      }
                      uVar30 = uVar30 - 1;
                      puVar31 = puVar33;
                    } while ((long)uVar27 < (long)uVar30);
                  } while (uVar29 != uVar23);
                }
                DAT_054f11d4 = '\x01';
              }
              else if (DAT_054f11d4 != '\x01') goto LAB_025140e0;
              if ((int)DAT_054f11d8 != 0) {
                if ((int)DAT_054f11d8 < 2) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  iVar24 = (int)DAT_054f11d8 + -1;
                  do {
                    iVar22 = iVar24 + uVar23;
                    if (iVar22 < 0 != SCARRY4(iVar24,uVar23)) {
                      iVar22 = iVar22 + 1;
                    }
                    uVar29 = iVar22 >> 1;
                    if (*(uint **)(DAT_054f11e0 + (long)(int)uVar29 * 8) == (uint *)0x0)
                    goto joined_r0x025140cc;
                    uVar28 = **(uint **)(DAT_054f11e0 + (long)(int)uVar29 * 8);
                    if (uVar28 == uVar38) goto joined_r0x025140cc;
                    if (uVar28 < uVar38) {
                      uVar23 = uVar29 + 1;
                    }
                    else {
                      iVar24 = uVar29 - 1;
                    }
                  } while ((int)uVar23 < iVar24);
                }
                uVar29 = uVar23;
                if ((*(uint **)(DAT_054f11e0 + (long)(int)uVar23 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_054f11e0 + (long)(int)uVar23 * 8) == uVar38)) {
joined_r0x025140cc:
                  if ((uVar29 < 5) &&
                     (uVar23 = *(uint *)(*(long *)(DAT_054f11e0 + (ulong)uVar29 * 8) + 4),
                     uVar23 < 5)) {
                    DAT_054f11c8 = '\x01';
                    DAT_054f11cc = uVar38;
                    DAT_054f11d0 = uVar23;
                    goto LAB_025140e4;
                  }
                }
              }
LAB_025140e0:
              uVar23 = 2;
            }
LAB_025140e4:
            uVar21 = (undefined2)uVar23;
          }
          puVar31 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar31 != (uint *)0x0)) && (*puVar31 != 0)) &&
             ((uVar38 = puVar31[1], uVar38 != 0 && ((ulong)(ushort)puVar31[2] != 0)))) {
            lVar37 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              lVar37 = 0x1c;
            }
            lVar37 = (long)puVar31 + lVar37 + (ulong)(ushort)puVar31[2] * 8;
            if (lVar37 != 0) {
              uVar23 = 0;
              if ((ulong)uVar38 != 0) {
                uVar23 = (uint)((ulong)((long)puVar1 - lVar37) / (ulong)uVar38);
              }
              if (*puVar31 <= uVar23) {
                uVar23 = 0xffffffff;
              }
              if (uVar23 < *(uint *)PTR_DAT_04bc3118) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc3118 + 8) + (long)(int)uVar23 * 2) = uVar21;
              }
            }
          }
        }
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 != uVar17);
  }
  return;
}

