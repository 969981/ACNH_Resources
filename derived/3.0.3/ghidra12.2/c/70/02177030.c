
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02177030(uint *param_1)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  undefined2 uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
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
  byte local_174 [255];
  undefined1 local_75;
  
  puVar12 = PTR_DAT_04bb40a8;
  if ((param_1 != (uint *)0x0) && (uVar11 = *param_1, uVar11 != 0)) {
    uVar2 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar14 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar2 = crc32b(uVar2,0x91,0x4c11db7);
    uVar14 = crc32b(uVar14,0x9d,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x43,0x4c11db7);
    uVar2 = crc32b(uVar2,0xbc,0x4c11db7);
    uVar14 = crc32b(uVar14,0xa1,0x4c11db7);
    uVar4 = crc32b(0xffffffff,0x44,0x4c11db7);
    uVar4 = crc32b(uVar4,0x69,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar14 = crc32b(uVar14,0xe4,0x4c11db7);
    uVar33 = 0;
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar14 = crc32b(uVar14,0xbb,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb9,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar14 = crc32b(uVar14,0xb6,0x4c11db7);
    uVar4 = crc32b(uVar4,0x73,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
    uVar14 = crc32b(uVar14,0xe4,0x4c11db7);
    uVar3 = crc32b(uVar3,100,0x4c11db7);
    uVar14 = crc32b(uVar14,0xbb,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar5 = crc32b(uVar2,0x82,0x4c11db7);
    uVar3 = crc32b(uVar3,0x74,0x4c11db7);
    uVar6 = crc32b(uVar5,0x8b,0x4c11db7);
    uVar14 = crc32b(uVar14,0x98,0x4c11db7);
    uVar4 = crc32b(uVar4,0x61,0x4c11db7);
    uVar3 = crc32b(uVar3,0x69,0x4c11db7);
    uVar14 = crc32b(uVar14,0xe3,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar14 = crc32b(uVar14,0x81,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
    uVar7 = crc32b(uVar14,0x8d,0x4c11db7);
    uVar14 = crc32b(uVar3,0x61,0x4c11db7);
    uVar3 = crc32b(0xffffffff,0x41,0x4c11db7);
    uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar8 = crc32b(uVar14,0x6c,0x4c11db7);
    uVar14 = crc32b(uVar3,0x6c,0x4c11db7);
    uVar3 = crc32b(uVar4,0x6c,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6c,0x4c11db7);
    uVar3 = crc32b(uVar3,0x6f,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6f,0x4c11db7);
    uVar3 = crc32b(uVar3,0x77,0x4c11db7);
    uVar14 = crc32b(uVar14,0x77,0x4c11db7);
    uVar3 = crc32b(uVar3,0x65,0x4c11db7);
    uVar14 = crc32b(uVar14,0x65,0x4c11db7);
    uVar9 = crc32b(uVar3,100,0x4c11db7);
    uVar10 = crc32b(uVar14,100,0x4c11db7);
    do {
      if (((uVar33 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar16 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar33 + (uint)(ushort)param_1[2] * 8 + iVar16) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar17 = *PTR_DAT_04bb40a0;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *PTR_DAT_04bb40a0 = 1;
                *(undefined8 *)(puVar12 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar12 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x68) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar19 = *(uint *)puVar12;
                if (-1 < (int)uVar19) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar19) != (undefined4 *)0x0) {
                    uVar14 = *(undefined4 *)((long)puVar1 + (ulong)uVar19);
                    goto LAB_02177370;
                  }
                  break;
                }
                if (uVar19 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar14 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar14 = 0, puVar1 == puVar27)) goto LAB_02177370;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar27);
              if (lVar35 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)puVar12 = 0xfffffffe;
              if (uVar22 == 0) break;
              piVar23 = (int *)(lVar35 + 4);
              while (piVar23[-1] != -0x225a2a9a) {
                piVar23 = piVar23 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_0217736c;
              }
              iVar16 = 0;
              if (*piVar23 != -1) {
                iVar16 = *piVar23;
              }
              *(int *)puVar12 = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_0217736c:
          uVar14 = 0;
LAB_02177370:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            uVar15 = FUN_02179360(uVar14);
            if (1 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          else {
            uVar15 = FUN_02178f20();
            if (1 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar27 != (uint *)0x0)) && (*puVar27 != 0)) &&
             ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar27 + lVar35 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar35 != 0) {
              uVar19 = 0;
              if ((ulong)uVar15 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bc2af0) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc2af0 + 8) + (long)(int)uVar19 * 2) = uVar18;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar17 = *PTR_DAT_04bb40a0;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *PTR_DAT_04bb40a0 = 1;
                *(undefined8 *)(puVar12 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar12 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x68) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar19 = *(uint *)(puVar12 + 4);
                if (-1 < (int)uVar19) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar19) != (undefined4 *)0x0) {
                    uVar14 = *(undefined4 *)((long)puVar1 + (ulong)uVar19);
                    goto LAB_02177540;
                  }
                  break;
                }
                if (uVar19 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar14 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar14 = 0, puVar1 == puVar27)) goto LAB_02177540;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar27);
              if (lVar35 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar12 + 4) = 0xfffffffe;
              if (uVar22 == 0) break;
              piVar23 = (int *)(lVar35 + 4);
              while (piVar23[-1] != -0x7952f31f) {
                piVar23 = piVar23 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_0217753c;
              }
              iVar16 = 0;
              if (*piVar23 != -1) {
                iVar16 = *piVar23;
              }
              *(int *)(puVar12 + 4) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_0217753c:
          uVar14 = 0;
LAB_02177540:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            uVar15 = FUN_02179360(uVar14);
            if (1 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          else {
            uVar15 = FUN_02178f20();
            if (1 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar27 != (uint *)0x0)) &&
             ((*puVar27 != 0 &&
              ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar27 + lVar35 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar35 != 0) {
              uVar19 = 0;
              if ((ulong)uVar15 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bc2af8) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc2af8 + 8) + (long)(int)uVar19 * 2) = uVar18;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar17 = *PTR_DAT_04bb40a0;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *PTR_DAT_04bb40a0 = 1;
                *(undefined8 *)(puVar12 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar12 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x68) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar19 = *(uint *)(puVar12 + 0x10);
                if (-1 < (int)uVar19) {
                  if ((uint *)((long)puVar1 + (ulong)uVar19) != (uint *)0x0) {
                    uVar15 = *(uint *)((long)puVar1 + (ulong)uVar19);
                    goto LAB_02177710;
                  }
                  break;
                }
                if (uVar19 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar15 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar15 = 0, puVar1 == puVar27)) goto LAB_02177710;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar27);
              if (lVar35 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar12 + 0x10) = 0xfffffffe;
              if (uVar22 == 0) break;
              piVar23 = (int *)(lVar35 + 4);
              while (piVar23[-1] != 0xe3f98aa) {
                piVar23 = piVar23 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_0217770c;
              }
              iVar16 = 0;
              if (*piVar23 != -1) {
                iVar16 = *piVar23;
              }
              *(int *)(puVar12 + 0x10) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_0217770c:
          uVar15 = 0;
LAB_02177710:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_053f9760 == '\x01') && (DAT_053f9764 == uVar15)) {
              uVar19 = DAT_053f9768;
              if (6 < DAT_053f9768) goto LAB_02177b68;
            }
            else {
              if (((DAT_053f97b8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_053f97b8), iVar16 != 0)) {
                DAT_053f9770 = 0x700000000;
                DAT_053f9778 = (undefined8 *)&DAT_053f9780;
                __cxa_guard_release(&DAT_053f97b8);
              }
              if ((DAT_053f97c0 & 1) == 0) {
                DAT_053f97c0 = 1;
                if (((DAT_053f9800 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_053f9800), iVar16 != 0)) {
                  DAT_053f97f4 = 0xffffffff00000000;
                  DAT_053f97c4 = 0xffffffff00000000;
                  DAT_053f97cc = 0xffffffff00000000;
                  DAT_053f97d4 = 0xffffffff00000000;
                  DAT_053f97dc = 0xffffffff00000000;
                  DAT_053f97e4 = 0xffffffff00000000;
                  DAT_053f97ec = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053f9800);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar34 = (&PTR_DAT_04a75af8)[lVar35];
                  if (local_174 != pbVar34) {
                    lVar21 = 0;
                    do {
                      if (pbVar34[lVar21] == 0) {
LAB_02177854:
                        iVar16 = (int)lVar21;
joined_r0x02177858:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02177860;
                      }
                      if (pbVar34[lVar21 + 1] == 0) {
                        lVar21 = lVar21 + 1;
                        goto LAB_02177854;
                      }
                      if (pbVar34[lVar21 + 2] == 0) {
                        iVar16 = (int)lVar21 + 2;
                        goto joined_r0x02177858;
                      }
                      lVar21 = lVar21 + 3;
                    } while (lVar21 != 0x80001);
                    iVar16 = 0;
LAB_02177860:
                    memcpy(local_174,pbVar34,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar19 = (uint)*pbVar34;
                  if (*pbVar34 == 0) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = 0xffffffff;
                    do {
                      pbVar34 = pbVar34 + 1;
                      uVar25 = crc32b(uVar25,uVar19,0x4c11db7);
                      uVar19 = (uint)*pbVar34;
                    } while (uVar19 != 0);
                    uVar25 = ~uVar25;
                  }
                  *(uint *)(&DAT_053f97c4 + lVar35) = uVar25;
                  *(int *)((long)&DAT_053f97c4 + lVar35 * 8 + 4) = (int)lVar35;
                  iVar16 = (int)DAT_053f9770;
                  if ((int)DAT_053f9770 < DAT_053f9770._4_4_) {
                    DAT_053f9778[(int)DAT_053f9770] = &DAT_053f97c4 + lVar35;
                    iVar16 = (int)DAT_053f9770 + 1;
                    DAT_053f9770 = CONCAT44(DAT_053f9770._4_4_,iVar16);
                  }
                  puVar31 = DAT_053f9778;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 7);
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar19 = iVar16 - 1;
                  do {
                    if ((int)uVar19 <= (int)uVar25) break;
                    puVar27 = (uint *)puVar31[uVar25];
                    uVar22 = (ulong)uVar25;
                    if ((uVar19 - uVar25 & 1) == 0) {
                      uVar26 = uVar22;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar22 + 1;
                      puVar29 = (uint *)puVar31[uVar26];
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        puVar31[uVar26] = puVar27;
                        puVar31[uVar22] = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar19;
                    uVar19 = uVar25;
                    if (~uVar22 + uVar28 != 0) {
                      puVar30 = puVar31 + uVar26 + 1;
                      do {
                        puVar27 = (uint *)*puVar30;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar30[1];
                          if (puVar27 != (uint *)0x0) goto LAB_02177b20;
LAB_02177ad0:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar30[-1] = puVar27;
                          *puVar30 = puVar29;
                          puVar32 = (uint *)puVar30[1];
                          puVar27 = puVar29;
                          uVar19 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_02177ad0;
LAB_02177b20:
                          if (puVar32 == (uint *)0x0) goto LAB_02177ad0;
                          if (*puVar27 <= *puVar32) goto LAB_02177ad0;
                          uVar19 = uVar24 + 1;
                          *puVar30 = puVar32;
                          puVar30[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar30 = puVar30 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar19 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar19;
                    puVar27 = (uint *)puVar31[uVar19];
                    uVar25 = uVar19;
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
                    } while ((long)uVar22 < (long)uVar26);
                  } while (uVar25 != uVar19);
                }
                DAT_053f976c = '\x01';
              }
              else if (DAT_053f976c != '\x01') goto LAB_02177b68;
              if ((int)DAT_053f9770 == 0) goto LAB_02177b68;
              if ((int)DAT_053f9770 < 2) {
                uVar19 = 0;
                puVar27 = (uint *)*DAT_053f9778;
                if (puVar27 != (uint *)0x0) goto LAB_02177984;
LAB_02177b4c:
                if (uVar19 < 7) {
LAB_02177b58:
                  uVar19 = *(uint *)(DAT_053f9778[uVar19] + 4);
                  if (uVar19 < 7) {
                    DAT_053f9760 = '\x01';
                    DAT_053f9764 = uVar15;
                    DAT_053f9768 = uVar19;
                    goto LAB_02177b6c;
                  }
                }
              }
              else {
                uVar19 = 0;
                iVar16 = (int)DAT_053f9770 + -1;
                do {
                  iVar20 = iVar16 + uVar19;
                  if (iVar20 < 0 != SCARRY4(iVar16,uVar19)) {
                    iVar20 = iVar20 + 1;
                  }
                  uVar25 = iVar20 >> 1;
                  if ((uint *)DAT_053f9778[(int)uVar25] == (uint *)0x0) goto LAB_02177994;
                  uVar24 = *(uint *)DAT_053f9778[(int)uVar25];
                  if (uVar24 == uVar15) goto LAB_02177994;
                  if (uVar24 < uVar15) {
                    uVar19 = uVar25 + 1;
                  }
                  else {
                    iVar16 = uVar25 - 1;
                  }
                } while ((int)uVar19 < iVar16);
                puVar27 = (uint *)DAT_053f9778[(int)uVar19];
                if (puVar27 == (uint *)0x0) goto LAB_02177b4c;
LAB_02177984:
                uVar25 = uVar19;
                if (*puVar27 == uVar15) {
LAB_02177994:
                  uVar19 = uVar25;
                  if (6 < uVar25) goto LAB_02177b68;
                  goto LAB_02177b58;
                }
              }
LAB_02177b68:
              uVar19 = 0;
            }
LAB_02177b6c:
            uVar18 = (undefined2)uVar19;
          }
          else {
            if ((DAT_053f96b8 == '\x01') && (DAT_053f96bc == uVar15)) {
              uVar19 = DAT_053f96c0;
              if (6 < DAT_053f96c0) goto LAB_02177f24;
            }
            else {
              if (((DAT_053f9710 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_053f9710), iVar16 != 0)) {
                DAT_053f96c8 = 0x700000000;
                DAT_053f96d0 = &DAT_053f96d8;
                __cxa_guard_release(&DAT_053f9710);
              }
              if ((DAT_053f9718 & 1) == 0) {
                DAT_053f9718 = 1;
                if (((DAT_053f9758 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_053f9758), iVar16 != 0)) {
                  DAT_053f974c = 0xffffffff00000000;
                  DAT_053f971c = 0xffffffff00000000;
                  DAT_053f9724 = 0xffffffff00000000;
                  DAT_053f972c = 0xffffffff00000000;
                  DAT_053f9734 = 0xffffffff00000000;
                  DAT_053f973c = 0xffffffff00000000;
                  DAT_053f9744 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053f9758);
                }
                lVar35 = 0;
                do {
                  local_75 = 0;
                  pbVar34 = (&PTR_s_Undefined_04a75a68)[lVar35];
                  if (local_174 != pbVar34) {
                    lVar21 = 0;
                    do {
                      if (pbVar34[lVar21] == 0) {
LAB_02177c14:
                        iVar16 = (int)lVar21;
joined_r0x02177c18:
                        if (0xff < iVar16) {
                          iVar16 = 0xff;
                        }
                        goto LAB_02177c20;
                      }
                      if (pbVar34[lVar21 + 1] == 0) {
                        lVar21 = lVar21 + 1;
                        goto LAB_02177c14;
                      }
                      if (pbVar34[lVar21 + 2] == 0) {
                        iVar16 = (int)lVar21 + 2;
                        goto joined_r0x02177c18;
                      }
                      lVar21 = lVar21 + 3;
                    } while (lVar21 != 0x80001);
                    iVar16 = 0;
LAB_02177c20:
                    memcpy(local_174,pbVar34,(long)iVar16);
                    local_174[iVar16] = 0;
                  }
                  uVar19 = (uint)*pbVar34;
                  if (*pbVar34 == 0) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = 0xffffffff;
                    do {
                      pbVar34 = pbVar34 + 1;
                      uVar25 = crc32b(uVar25,uVar19,0x4c11db7);
                      uVar19 = (uint)*pbVar34;
                    } while (uVar19 != 0);
                    uVar25 = ~uVar25;
                  }
                  *(uint *)(&DAT_053f971c + lVar35) = uVar25;
                  *(int *)((long)&DAT_053f971c + lVar35 * 8 + 4) = (int)lVar35;
                  iVar16 = (int)DAT_053f96c8;
                  if ((int)DAT_053f96c8 < DAT_053f96c8._4_4_) {
                    *(undefined8 **)(DAT_053f96d0 + (long)(int)DAT_053f96c8 * 8) =
                         &DAT_053f971c + lVar35;
                    iVar16 = (int)DAT_053f96c8 + 1;
                    DAT_053f96c8 = CONCAT44(DAT_053f96c8._4_4_,iVar16);
                  }
                  puVar13 = DAT_053f96d0;
                  lVar35 = lVar35 + 1;
                } while (lVar35 != 7);
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar19 = iVar16 - 1;
                  do {
                    if ((int)uVar19 <= (int)uVar25) break;
                    puVar27 = *(uint **)(puVar13 + (ulong)uVar25 * 8);
                    uVar22 = (ulong)uVar25;
                    if ((uVar19 - uVar25 & 1) == 0) {
                      uVar26 = uVar22;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar22 + 1;
                      puVar29 = *(uint **)(puVar13 + uVar26 * 8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        *(uint **)(puVar13 + uVar26 * 8) = puVar27;
                        *(uint **)(puVar13 + uVar22 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar19;
                    uVar19 = uVar25;
                    if (~uVar22 + uVar28 != 0) {
                      puVar31 = (undefined8 *)(puVar13 + uVar26 * 8 + 8);
                      do {
                        puVar27 = (uint *)*puVar31;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar31[1];
                          if (puVar27 != (uint *)0x0) goto LAB_02177ea0;
LAB_02177e50:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar31[-1] = puVar27;
                          *puVar31 = puVar29;
                          puVar32 = (uint *)puVar31[1];
                          puVar27 = puVar29;
                          uVar19 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_02177e50;
LAB_02177ea0:
                          if (puVar32 == (uint *)0x0) goto LAB_02177e50;
                          if (*puVar27 <= *puVar32) goto LAB_02177e50;
                          uVar19 = uVar24 + 1;
                          *puVar31 = puVar32;
                          puVar31[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar31 = puVar31 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar19 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar19;
                    puVar27 = *(uint **)(puVar13 + (ulong)uVar19 * 8);
                    uVar25 = uVar19;
                    do {
                      puVar29 = *(uint **)(puVar13 + uVar26 * 8 + -8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar27 < *puVar29)) {
                        uVar25 = (uint)uVar26;
                        *(uint **)(puVar13 + uVar26 * 8 + -8) = puVar27;
                        *(uint **)(puVar13 + uVar26 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                      uVar26 = uVar26 - 1;
                      puVar27 = puVar29;
                    } while ((long)uVar22 < (long)uVar26);
                  } while (uVar25 != uVar19);
                }
                DAT_053f96c4 = '\x01';
              }
              else if (DAT_053f96c4 != '\x01') goto LAB_02177f24;
              if ((int)DAT_053f96c8 != 0) {
                if ((int)DAT_053f96c8 < 2) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = 0;
                  iVar16 = (int)DAT_053f96c8 + -1;
                  do {
                    iVar20 = iVar16 + uVar19;
                    if (iVar20 < 0 != SCARRY4(iVar16,uVar19)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar25 = iVar20 >> 1;
                    if (*(uint **)(DAT_053f96d0 + (long)(int)uVar25 * 8) == (uint *)0x0)
                    goto joined_r0x02177f10;
                    uVar24 = **(uint **)(DAT_053f96d0 + (long)(int)uVar25 * 8);
                    if (uVar24 == uVar15) goto joined_r0x02177f10;
                    if (uVar24 < uVar15) {
                      uVar19 = uVar25 + 1;
                    }
                    else {
                      iVar16 = uVar25 - 1;
                    }
                  } while ((int)uVar19 < iVar16);
                }
                uVar25 = uVar19;
                if ((*(uint **)(DAT_053f96d0 + (long)(int)uVar19 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053f96d0 + (long)(int)uVar19 * 8) == uVar15)) {
joined_r0x02177f10:
                  if ((uVar25 < 7) &&
                     (uVar19 = *(uint *)(*(long *)(DAT_053f96d0 + (ulong)uVar25 * 8) + 4),
                     uVar19 < 7)) {
                    DAT_053f96b8 = '\x01';
                    DAT_053f96bc = uVar15;
                    DAT_053f96c0 = uVar19;
                    goto LAB_02177f28;
                  }
                }
              }
LAB_02177f24:
              uVar19 = 0;
            }
LAB_02177f28:
            uVar18 = (undefined2)uVar19;
          }
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar27 != (uint *)0x0)) && (*puVar27 != 0)) &&
             ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar27 + lVar35 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar35 != 0) {
              uVar19 = 0;
              if ((ulong)uVar15 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bc2b00) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc2b00 + 8) + (long)(int)uVar19 * 2) = uVar18;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 == 0) {
            uVar15 = 0;
          }
          else {
            cVar17 = *PTR_DAT_04bb40a0;
LAB_02177fd8:
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *PTR_DAT_04bb40a0 = 1;
              *(undefined8 *)(puVar12 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)puVar12 = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar12 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar12 + 0x68) = 0xffffffffffffffff;
              uVar15 = *puVar1;
joined_r0x02178040:
              puVar27 = (uint *)(ulong)uVar15;
              uVar15 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar15 = 0, puVar1 == puVar27)) goto LAB_021780f8;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar27);
              if (lVar35 == 0) goto LAB_021780f4;
              uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar12 + 0x14) = 0xfffffffe;
              if (uVar22 == 0) goto LAB_021780f4;
              piVar23 = (int *)(lVar35 + 4);
              while (piVar23[-1] != 0x295227e5) {
                piVar23 = piVar23 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_021780f4;
              }
              iVar16 = 0;
              if (*piVar23 != -1) {
                iVar16 = *piVar23;
              }
              *(int *)(puVar12 + 0x14) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) goto LAB_021780f4;
              goto LAB_02177fd8;
            }
            uVar19 = *(uint *)(puVar12 + 0x14);
            if ((int)uVar19 < 0) {
              if (uVar19 != 0xffffffff) goto LAB_021780f4;
              goto joined_r0x02178040;
            }
            if ((uint *)((long)puVar1 + (ulong)uVar19) != (uint *)0x0) {
              uVar15 = *(uint *)((long)puVar1 + (ulong)uVar19);
              goto LAB_021780f8;
            }
LAB_021780f4:
            uVar15 = 0;
          }
LAB_021780f8:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            if ((DAT_053f9870 == '\x01') && (DAT_053f9874 == uVar15)) {
              uVar19 = DAT_053f9878;
              if (2 < DAT_053f9878) goto LAB_02178350;
            }
            else {
              if (((DAT_053f98a8 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_053f98a8), iVar16 != 0)) {
                DAT_053f9880 = 0x300000000;
                DAT_053f9888 = (undefined8 *)&DAT_053f9890;
                __cxa_guard_release(&DAT_053f98a8);
              }
              if ((DAT_053f98b0 & 1) == 0) {
                DAT_053f98b0 = 1;
                if (((DAT_053f98d0 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_053f98d0), iVar16 != 0)) {
                  _DAT_053f98b4 = 0xffffffff00000000;
                  DAT_053f98bc = 0xffffffff00000000;
                  DAT_053f98c4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053f98d0);
                }
                _DAT_053f98b4 = (ulong)~uVar6;
                iVar16 = (int)DAT_053f9880;
                iVar20 = DAT_053f9880._4_4_;
                if ((int)DAT_053f9880 < DAT_053f9880._4_4_) {
                  DAT_053f9888[(int)DAT_053f9880] = &DAT_053f98b4;
                  iVar16 = (int)DAT_053f9880 + 1;
                  DAT_053f9880 = CONCAT44(DAT_053f9880._4_4_,iVar16);
                  iVar20 = DAT_053f9880._4_4_;
                }
                DAT_053f98bc = CONCAT44(1,~uVar7);
                if (iVar16 < iVar20) {
                  DAT_053f9888[iVar16] = &DAT_053f98bc;
                  iVar16 = (int)DAT_053f9880 + 1;
                  DAT_053f9880 = CONCAT44(DAT_053f9880._4_4_,iVar16);
                  iVar20 = DAT_053f9880._4_4_;
                }
                uVar14 = crc32b(uVar2,0x81,0x4c11db7);
                uVar14 = crc32b(uVar14,0xaa,0x4c11db7);
                uVar14 = crc32b(uVar14,0xe3,0x4c11db7);
                uVar14 = crc32b(uVar14,0x81,0x4c11db7);
                uVar19 = crc32b(uVar14,0x84,0x4c11db7);
                DAT_053f98c4 = CONCAT44(2,~uVar19);
                if (iVar16 < iVar20) {
                  DAT_053f9888[iVar16] = &DAT_053f98c4;
                  iVar16 = (int)DAT_053f9880 + 1;
                  DAT_053f9880 = CONCAT44(DAT_053f9880._4_4_,iVar16);
                }
                puVar31 = DAT_053f9888;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar19 = iVar16 - 1;
                  do {
                    if ((int)uVar19 <= (int)uVar25) break;
                    puVar27 = (uint *)puVar31[uVar25];
                    uVar22 = (ulong)uVar25;
                    if ((uVar19 - uVar25 & 1) == 0) {
                      uVar26 = uVar22;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar22 + 1;
                      puVar29 = (uint *)puVar31[uVar26];
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        puVar31[uVar26] = puVar27;
                        puVar31[uVar22] = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar19;
                    uVar19 = uVar25;
                    if (~uVar22 + uVar28 != 0) {
                      puVar30 = puVar31 + uVar26 + 1;
                      do {
                        puVar27 = (uint *)*puVar30;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar30[1];
                          if (puVar27 != (uint *)0x0) goto LAB_021784e0;
LAB_02178490:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar30[-1] = puVar27;
                          *puVar30 = puVar29;
                          puVar32 = (uint *)puVar30[1];
                          puVar27 = puVar29;
                          uVar19 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_02178490;
LAB_021784e0:
                          if (puVar32 == (uint *)0x0) goto LAB_02178490;
                          if (*puVar27 <= *puVar32) goto LAB_02178490;
                          uVar19 = uVar24 + 1;
                          *puVar30 = puVar32;
                          puVar30[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar30 = puVar30 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar19 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar19;
                    puVar27 = (uint *)puVar31[uVar19];
                    uVar25 = uVar19;
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
                    } while ((long)uVar22 < (long)uVar26);
                  } while (uVar25 != uVar19);
                }
                DAT_053f987c = '\x01';
              }
              else if (DAT_053f987c != '\x01') goto LAB_02178350;
              if ((int)DAT_053f9880 != 0) {
                if ((int)DAT_053f9880 < 2) {
                  uVar25 = 0;
                  puVar27 = (uint *)*DAT_053f9888;
                  uVar19 = uVar25;
                  if (puVar27 != (uint *)0x0) goto LAB_02178320;
joined_r0x02178514:
                  if (uVar19 < 3) {
                    uVar19 = *(uint *)(DAT_053f9888[uVar19] + 4);
                    if (uVar19 < 3) {
                      DAT_053f9870 = '\x01';
                      DAT_053f9874 = uVar15;
                      DAT_053f9878 = uVar19;
                      goto LAB_02178354;
                    }
                    goto LAB_02178350;
                  }
                }
                else {
                  uVar25 = 0;
                  iVar16 = (int)DAT_053f9880 + -1;
                  do {
                    iVar20 = iVar16 + uVar25;
                    if (iVar20 < 0 != SCARRY4(iVar16,uVar25)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar19 = iVar20 >> 1;
                    if ((uint *)DAT_053f9888[(int)uVar19] == (uint *)0x0) goto joined_r0x02178514;
                    uVar24 = *(uint *)DAT_053f9888[(int)uVar19];
                    if (uVar24 == uVar15) goto joined_r0x02178514;
                    if (uVar24 < uVar15) {
                      uVar25 = uVar19 + 1;
                    }
                    else {
                      iVar16 = uVar19 - 1;
                    }
                  } while ((int)uVar25 < iVar16);
                  puVar27 = (uint *)DAT_053f9888[(int)uVar25];
                  uVar19 = uVar25;
                  if (puVar27 == (uint *)0x0) goto joined_r0x02178514;
LAB_02178320:
                  uVar19 = uVar25;
                  if (*puVar27 == uVar15) goto joined_r0x02178514;
                }
                uVar18 = 0;
                goto LAB_0217881c;
              }
LAB_02178350:
              uVar19 = 0;
            }
LAB_02178354:
            uVar18 = (undefined2)uVar19;
          }
          else {
            if ((DAT_053f9808 == '\x01') && (DAT_053f980c == uVar15)) {
              uVar19 = DAT_053f9810;
              if (2 < DAT_053f9810) goto LAB_0217880c;
            }
            else {
              if (((DAT_053f9840 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(&DAT_053f9840), iVar16 != 0)) {
                DAT_053f9818 = 0x300000000;
                DAT_053f9820 = &DAT_053f9828;
                __cxa_guard_release(&DAT_053f9840);
              }
              if ((DAT_053f9848 & 1) == 0) {
                DAT_053f9848 = 1;
                if (((DAT_053f9868 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_053f9868), iVar16 != 0)) {
                  _DAT_053f984c = 0xffffffff00000000;
                  DAT_053f9854 = 0xffffffff00000000;
                  DAT_053f985c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_053f9868);
                }
                _DAT_053f984c = (ulong)~uVar10;
                iVar16 = (int)DAT_053f9818;
                iVar20 = DAT_053f9818._4_4_;
                if ((int)DAT_053f9818 < DAT_053f9818._4_4_) {
                  *(undefined4 **)(DAT_053f9820 + (long)(int)DAT_053f9818 * 8) = &DAT_053f984c;
                  iVar16 = (int)DAT_053f9818 + 1;
                  DAT_053f9818 = CONCAT44(DAT_053f9818._4_4_,iVar16);
                  iVar20 = DAT_053f9818._4_4_;
                }
                DAT_053f9854 = CONCAT44(1,~uVar8);
                if (iVar16 < iVar20) {
                  *(undefined8 **)(DAT_053f9820 + (long)iVar16 * 8) = &DAT_053f9854;
                  iVar16 = (int)DAT_053f9818 + 1;
                  DAT_053f9818 = CONCAT44(DAT_053f9818._4_4_,iVar16);
                  iVar20 = DAT_053f9818._4_4_;
                }
                DAT_053f985c = CONCAT44(2,~uVar9);
                if (iVar16 < iVar20) {
                  *(undefined8 **)(DAT_053f9820 + (long)iVar16 * 8) = &DAT_053f985c;
                  iVar16 = (int)DAT_053f9818 + 1;
                  DAT_053f9818 = CONCAT44(DAT_053f9818._4_4_,iVar16);
                }
                puVar13 = DAT_053f9820;
                if (1 < iVar16) {
                  uVar25 = 0;
                  uVar19 = iVar16 - 1;
                  do {
                    if ((int)uVar19 <= (int)uVar25) break;
                    puVar27 = *(uint **)(puVar13 + (ulong)uVar25 * 8);
                    uVar22 = (ulong)uVar25;
                    if ((uVar19 - uVar25 & 1) == 0) {
                      uVar26 = uVar22;
                      puVar29 = puVar27;
                    }
                    else {
                      uVar26 = uVar22 + 1;
                      puVar29 = *(uint **)(puVar13 + uVar26 * 8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar29 < *puVar27)) {
                        *(uint **)(puVar13 + uVar26 * 8) = puVar27;
                        *(uint **)(puVar13 + uVar22 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                    }
                    uVar28 = (ulong)uVar19;
                    uVar19 = uVar25;
                    if (~uVar22 + uVar28 != 0) {
                      puVar31 = (undefined8 *)(puVar13 + uVar26 * 8 + 8);
                      do {
                        puVar27 = (uint *)*puVar31;
                        uVar24 = (uint)uVar26;
                        if (((puVar29 == (uint *)0x0) || (puVar27 == (uint *)0x0)) ||
                           (*puVar29 <= *puVar27)) {
                          puVar32 = (uint *)puVar31[1];
                          if (puVar27 != (uint *)0x0) goto LAB_021787b0;
LAB_02178760:
                          puVar27 = puVar32;
                        }
                        else {
                          puVar31[-1] = puVar27;
                          *puVar31 = puVar29;
                          puVar32 = (uint *)puVar31[1];
                          puVar27 = puVar29;
                          uVar19 = uVar24;
                          if (puVar29 == (uint *)0x0) goto LAB_02178760;
LAB_021787b0:
                          if (puVar32 == (uint *)0x0) goto LAB_02178760;
                          if (*puVar27 <= *puVar32) goto LAB_02178760;
                          uVar19 = uVar24 + 1;
                          *puVar31 = puVar32;
                          puVar31[1] = puVar27;
                        }
                        uVar26 = uVar26 + 2;
                        puVar31 = puVar31 + 2;
                        puVar29 = puVar27;
                      } while (uVar28 != uVar26);
                    }
                    if ((int)uVar19 <= (int)uVar25) break;
                    uVar26 = (ulong)uVar19;
                    puVar27 = *(uint **)(puVar13 + (ulong)uVar19 * 8);
                    uVar25 = uVar19;
                    do {
                      puVar29 = *(uint **)(puVar13 + uVar26 * 8 + -8);
                      if (((puVar27 != (uint *)0x0) && (puVar29 != (uint *)0x0)) &&
                         (*puVar27 < *puVar29)) {
                        uVar25 = (uint)uVar26;
                        *(uint **)(puVar13 + uVar26 * 8 + -8) = puVar27;
                        *(uint **)(puVar13 + uVar26 * 8) = puVar29;
                        puVar29 = puVar27;
                      }
                      uVar26 = uVar26 - 1;
                      puVar27 = puVar29;
                    } while ((long)uVar22 < (long)uVar26);
                  } while (uVar25 != uVar19);
                }
                DAT_053f9814 = '\x01';
              }
              else if (DAT_053f9814 != '\x01') goto LAB_0217880c;
              if ((int)DAT_053f9818 != 0) {
                if ((int)DAT_053f9818 < 2) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = 0;
                  iVar16 = (int)DAT_053f9818 + -1;
                  do {
                    iVar20 = iVar16 + uVar19;
                    if (iVar20 < 0 != SCARRY4(iVar16,uVar19)) {
                      iVar20 = iVar20 + 1;
                    }
                    uVar25 = iVar20 >> 1;
                    if (*(uint **)(DAT_053f9820 + (long)(int)uVar25 * 8) == (uint *)0x0)
                    goto joined_r0x02178c68;
                    uVar24 = **(uint **)(DAT_053f9820 + (long)(int)uVar25 * 8);
                    if (uVar24 == uVar15) goto joined_r0x02178c68;
                    if (uVar24 < uVar15) {
                      uVar19 = uVar25 + 1;
                    }
                    else {
                      iVar16 = uVar25 - 1;
                    }
                  } while ((int)uVar19 < iVar16);
                }
                uVar25 = uVar19;
                if ((*(uint **)(DAT_053f9820 + (long)(int)uVar19 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_053f9820 + (long)(int)uVar19 * 8) == uVar15)) {
joined_r0x02178c68:
                  if (uVar25 < 3) {
                    uVar19 = *(uint *)(*(long *)(DAT_053f9820 + (ulong)uVar25 * 8) + 4);
                    if (uVar19 < 3) {
                      DAT_053f9808 = '\x01';
                      DAT_053f980c = uVar15;
                      DAT_053f9810 = uVar19;
                      goto LAB_02178810;
                    }
                    goto LAB_0217880c;
                  }
                }
                uVar18 = 0;
                goto LAB_0217881c;
              }
LAB_0217880c:
              uVar19 = 0;
            }
LAB_02178810:
            uVar18 = (undefined2)uVar19;
          }
LAB_0217881c:
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar27 != (uint *)0x0)) && (*puVar27 != 0)) &&
             ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar27 + lVar35 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar35 != 0) {
              uVar19 = 0;
              if ((ulong)uVar15 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bc2b08) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc2b08 + 8) + (long)(int)uVar19 * 2) = uVar18;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar17 = *PTR_DAT_04bb40a0;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *PTR_DAT_04bb40a0 = 1;
                *(undefined8 *)(puVar12 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar12 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x68) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar19 = *(uint *)(puVar12 + 0x18);
                if (-1 < (int)uVar19) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar19) != (undefined4 *)0x0) {
                    uVar14 = *(undefined4 *)((long)puVar1 + (ulong)uVar19);
                    goto LAB_021789c0;
                  }
                  break;
                }
                if (uVar19 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar14 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar14 = 0, puVar1 == puVar27)) goto LAB_021789c0;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar27);
              if (lVar35 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar12 + 0x18) = 0xfffffffe;
              if (uVar22 == 0) break;
              piVar23 = (int *)(lVar35 + 4);
              while (piVar23[-1] != 0xe7ab6a6) {
                piVar23 = piVar23 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_021789bc;
              }
              iVar16 = 0;
              if (*piVar23 != -1) {
                iVar16 = *piVar23;
              }
              *(int *)(puVar12 + 0x18) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_021789bc:
          uVar14 = 0;
LAB_021789c0:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            uVar15 = FUN_020fa8b0(uVar14,0);
            if (1 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          else {
            uVar15 = FUN_020fa390(uVar14,0);
            if (1 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar27 != (uint *)0x0)) &&
             ((*puVar27 != 0 &&
              ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar27 + lVar35 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar35 != 0) {
              uVar19 = 0;
              if ((ulong)uVar15 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bc2b10) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc2b10 + 8) + (long)(int)uVar19 * 2) = uVar18;
              }
            }
          }
          uVar15 = *puVar1;
          if (uVar15 != 0) {
            cVar17 = *PTR_DAT_04bb40a0;
            do {
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *PTR_DAT_04bb40a0 = 1;
                *(undefined8 *)(puVar12 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar12 = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar12 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar12 + 0x68) = 0xffffffffffffffff;
                uVar15 = *puVar1;
              }
              else {
                uVar19 = *(uint *)(puVar12 + 0x1c);
                if (-1 < (int)uVar19) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar19) != (undefined4 *)0x0) {
                    uVar14 = *(undefined4 *)((long)puVar1 + (ulong)uVar19);
                    goto LAB_02178b90;
                  }
                  break;
                }
                if (uVar19 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)uVar15;
              uVar14 = 0;
              if ((puVar27 == (uint *)0x0) || (uVar14 = 0, puVar1 == puVar27)) goto LAB_02178b90;
              lVar35 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar27)) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar1 + (lVar35 - (long)puVar27);
              if (lVar35 == 0) break;
              uVar22 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar27));
              *(undefined4 *)(puVar12 + 0x1c) = 0xfffffffe;
              if (uVar22 == 0) break;
              piVar23 = (int *)(lVar35 + 4);
              while (piVar23[-1] != -0x22d2d524) {
                piVar23 = piVar23 + 2;
                uVar22 = uVar22 - 1;
                if (uVar22 == 0) goto LAB_02178b8c;
              }
              iVar16 = 0;
              if (*piVar23 != -1) {
                iVar16 = *piVar23;
              }
              *(int *)(puVar12 + 0x1c) = iVar16;
              uVar15 = *puVar1;
              if (uVar15 == 0) break;
            } while( true );
          }
LAB_02178b8c:
          uVar14 = 0;
LAB_02178b90:
          if (((*puVar1 == 0) || (lVar35 = (long)puVar1 - (ulong)*puVar1, lVar35 == 0)) ||
             (*(char *)(lVar35 + 0xb) == '\0')) {
            uVar15 = FUN_020fb550(uVar14,0);
            if (2 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          else {
            uVar15 = FUN_020fae70(uVar14,0);
            if (2 < uVar15) {
              uVar15 = 0;
            }
            uVar18 = (undefined2)uVar15;
          }
          puVar27 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar27 != (uint *)0x0)) &&
             ((*puVar27 != 0 &&
              ((uVar15 = puVar27[1], uVar15 != 0 && ((ulong)(ushort)puVar27[2] != 0)))))) {
            lVar35 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar35 = 0x1c;
            }
            lVar35 = (long)puVar27 + lVar35 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar35 != 0) {
              uVar19 = 0;
              if ((ulong)uVar15 != 0) {
                uVar19 = (uint)((ulong)((long)puVar1 - lVar35) / (ulong)uVar15);
              }
              if (*puVar27 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if (uVar19 < *(uint *)PTR_DAT_04bc2b18) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc2b18 + 8) + (long)(int)uVar19 * 2) = uVar18;
              }
            }
          }
        }
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 != uVar11);
  }
  return;
}

