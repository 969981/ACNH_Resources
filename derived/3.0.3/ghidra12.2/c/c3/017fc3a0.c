
void FUN_017fc3a0(long param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  byte bVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined1 uVar19;
  byte *pbVar20;
  undefined2 uVar21;
  long lVar22;
  undefined1 uVar23;
  undefined4 uVar24;
  long lVar25;
  char cVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  uint local_70;
  undefined4 local_6c;
  char local_68 [4];
  int local_64;
  byte local_60 [4];
  uint local_5c;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  
  local_5c = 0xfffe;
  lVar22 = *(long *)PTR_DAT_04bb39b0;
  pbVar20 = PTR_DAT_04bb32e0;
  if (lVar22 != 0) {
    if (*(int *)(lVar22 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar22 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(lVar22 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_017fc418;
      }
      goto LAB_017fc424;
    }
LAB_017fc490:
    local_60[0] = *pbVar20;
    if (local_60[0] < 8) goto LAB_017fc4ac;
    local_60[0] = 0xff;
    FUN_0252d11c(&local_70);
    if (7 < (byte)local_70) goto LAB_017fc6fc;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "AlwJuneBrideDayCount";
    iVar9 = FUN_0274bce0(&local_70,&local_58);
    if (iVar9 < 6) goto LAB_017fc6fc;
LAB_017fc570:
    local_64 = 0;
    FUN_02203230(&local_64);
    puVar6 = PTR_DAT_04bb46d0;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,local_64);
    uVar30 = *(undefined8 *)PTR_DAT_04bb46d0;
    iVar9 = local_64 + 2;
    uVar15 = FUN_017c3860(uVar30,iVar9);
    puVar1 = PTR_DAT_04bb39d8;
    puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = puVar12[3];
    uVar11 = *puVar12 ^ *puVar12 << 0xb;
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    uVar11 = uVar11 >> 8 ^ uVar3 >> 0x13 ^ uVar11 ^ uVar3;
    puVar12[2] = uVar3;
    puVar12[3] = uVar11;
    uVar11 = FUN_017c3a40(uVar30,iVar9,(ulong)uVar11 * (uVar15 & 0xffffffff) >> 0x20);
    puVar8 = PTR_DAT_04bbe4d0;
    puVar7 = PTR_DAT_04bbe4c8;
    if (uVar11 != 0xffffffff) {
      lVar22 = *(long *)puVar6;
      uVar3 = *(uint *)(lVar22 + 0x15c8);
      if ((int)uVar3 < 1) {
        if ((((*(long *)(lVar22 + 0x14b8) != 0) &&
             (puVar12 = *(uint **)(*(long *)(lVar22 + 0x14b8) + 8), puVar12 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x14d0) <= uVar11 ||
             (*(char *)(*(long *)(lVar22 + 0x14d8) + (long)(int)uVar11) != '\0')))) &&
           (((uVar11 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * uVar11 + (uint)(ushort)puVar12[2] * 8 + iVar9) +
                            (long)puVar12);
          goto joined_r0x017fca24;
        }
        uVar28 = 0xfffe;
LAB_017fcb30:
        if ((((*(long *)(lVar22 + 0x14b8) != 0) &&
             (puVar12 = *(uint **)(*(long *)(lVar22 + 0x14b8) + 8), puVar12 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x14d0) <= uVar11 ||
             (*(char *)(*(long *)(lVar22 + 0x14d8) + (long)(int)uVar11) != '\0')))) &&
           (((uVar11 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * uVar11 + (uint)(ushort)puVar12[2] * 8 + iVar9) +
                            (long)puVar12);
          pcVar5 = PTR_DAT_04bbe4c8;
          puVar17 = (undefined8 *)PTR_DAT_04bbe4d0;
          goto joined_r0x017fcb98;
        }
        uVar29 = 0xfffe;
LAB_017fcbb8:
        if ((((*(long *)(lVar22 + 0x14b8) != 0) &&
             (puVar12 = *(uint **)(*(long *)(lVar22 + 0x14b8) + 8), puVar12 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x14d0) <= uVar11 ||
             (*(char *)(*(long *)(lVar22 + 0x14d8) + (long)(int)uVar11) != '\0')))) &&
           (((uVar11 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * uVar11 + (uint)(ushort)puVar12[2] * 8 + iVar9) +
                            (long)puVar12);
          goto LAB_017fcc50;
        }
      }
      else {
        if (uVar11 < uVar3) {
          uVar28 = uVar11;
          if (*(uint *)(lVar22 + 0x15b8) <= uVar11) {
            uVar28 = 0;
          }
          puVar12 = *(uint **)(*(long *)(lVar22 + 0x15c0) + (ulong)uVar28 * 8);
joined_r0x017fca24:
          if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
            cVar26 = *PTR_DAT_04bbe4c8;
            do {
              if (cVar26 == '\0') {
                cVar26 = '\x01';
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *puVar7 = 1;
                *(undefined4 *)(puVar8 + 0x10) = 0xffffffff;
              }
              else {
                uVar28 = *(uint *)(puVar8 + 0x10);
                if (-1 < (int)uVar28) {
                  if ((ushort *)((ulong)uVar28 + (long)puVar12) != (ushort *)0x0) {
                    uVar28 = (uint)*(ushort *)((ulong)uVar28 + (long)puVar12);
                    goto joined_r0x017fcfa4;
                  }
                  break;
                }
                if (uVar28 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)*puVar12;
              if ((*puVar12 == 0) || (puVar12 == puVar27)) break;
              lVar25 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar27)) != '\0') {
                lVar25 = 0x1c;
              }
              lVar25 = (long)puVar12 + (lVar25 - (long)puVar27);
              if (lVar25 == 0) break;
              uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar27));
              *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
              if (uVar15 == 0) break;
              piVar18 = (int *)(lVar25 + 4);
              while (piVar18[-1] != 0x350e1ef9) {
                piVar18 = piVar18 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_017fca2c;
              }
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)(puVar8 + 0x10) = iVar9;
              if (*puVar12 == 0) break;
            } while( true );
          }
LAB_017fca2c:
          uVar28 = 0xfffe;
joined_r0x017fcfa4:
          if ((int)uVar3 < 1) goto LAB_017fcb30;
        }
        else {
          uVar28 = 0xfffe;
        }
        if (uVar11 < uVar3) {
          uVar29 = uVar11;
          if (*(uint *)(lVar22 + 0x15b8) <= uVar11) {
            uVar29 = 0;
          }
          puVar12 = *(uint **)(*(long *)(lVar22 + 0x15c0) + (ulong)uVar29 * 8);
          pcVar5 = PTR_DAT_04bbe4c8;
          puVar17 = (undefined8 *)PTR_DAT_04bbe4d0;
joined_r0x017fcb98:
          PTR_DAT_04bbe4c8 = pcVar5;
          PTR_DAT_04bbe4d0 = (undefined *)puVar17;
          if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
            cVar26 = *pcVar5;
            do {
              if (cVar26 == '\0') {
                cVar26 = '\x01';
                *puVar17 = 0xffffffffffffffff;
                puVar17[1] = 0xffffffffffffffff;
                *pcVar5 = '\x01';
                *(undefined4 *)(puVar17 + 2) = 0xffffffff;
              }
              else {
                uVar29 = *(uint *)((long)puVar17 + 4);
                if (-1 < (int)uVar29) {
                  if ((ushort *)((ulong)uVar29 + (long)puVar12) == (ushort *)0x0) break;
                  uVar29 = (uint)*(ushort *)((ulong)uVar29 + (long)puVar12);
                  goto LAB_017fcba0;
                }
                if (uVar29 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)*puVar12;
              uVar29 = 0xfffe;
              if ((*puVar12 == 0) || (puVar12 == puVar27)) goto LAB_017fcba0;
              lVar25 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar27)) != '\0') {
                lVar25 = 0x1c;
              }
              lVar25 = (long)puVar12 + (lVar25 - (long)puVar27);
              if (lVar25 == 0) goto LAB_017fcba0;
              uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar27));
              *(undefined4 *)((long)puVar17 + 4) = 0xfffffffe;
              if (uVar15 == 0) goto LAB_017fcba0;
              piVar18 = (int *)(lVar25 + 4);
              while (piVar18[-1] != 0x4e718582) {
                piVar18 = piVar18 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_017fcb9c;
              }
              uVar29 = 0xfffe;
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)((long)puVar17 + 4) = iVar9;
              if (*puVar12 == 0) goto LAB_017fcba0;
            } while( true );
          }
LAB_017fcb9c:
          uVar29 = 0xfffe;
LAB_017fcba0:
          if ((int)uVar3 < 1) goto LAB_017fcbb8;
        }
        else {
          uVar29 = 0xfffe;
        }
        if (uVar11 < uVar3) {
          if (*(uint *)(lVar22 + 0x15b8) <= uVar11) {
            uVar11 = 0;
          }
          puVar12 = *(uint **)(*(long *)(lVar22 + 0x15c0) + (ulong)uVar11 * 8);
LAB_017fcc50:
          puVar6 = PTR_DAT_04bbe4d0;
          puVar1 = PTR_DAT_04bbe4c8;
          if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
            cVar26 = *PTR_DAT_04bbe4c8;
            do {
              if (cVar26 == '\0') {
                cVar26 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
              }
              else {
                uVar11 = *(uint *)(puVar6 + 8);
                if (-1 < (int)uVar11) goto LAB_017fd0e8;
                if (uVar11 != 0xffffffff) goto LAB_017fd0f8;
              }
              puVar27 = (uint *)(ulong)*puVar12;
              local_5c = 0xfffe;
              if ((*puVar12 == 0) || (puVar12 == puVar27)) break;
              lVar22 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar27)) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar12 + (lVar22 - (long)puVar27);
              if (lVar22 == 0) goto LAB_017fd0f8;
              uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar27));
              *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
              if (uVar15 == 0) goto LAB_017fd0f8;
              piVar18 = (int *)(lVar22 + 4);
              while (piVar18[-1] != -0x5edb6ed7) {
                piVar18 = piVar18 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_017fd0f8;
              }
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)(puVar6 + 8) = iVar9;
              local_5c = 0xfffe;
            } while (*puVar12 != 0);
            goto LAB_017fd0fc;
          }
        }
      }
LAB_017fd0f8:
      local_5c = 0xfffe;
      goto LAB_017fd0fc;
    }
    FUN_017fd450();
    uVar30 = *(undefined8 *)puVar6;
    uVar15 = FUN_017c3860(uVar30,iVar9);
    puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
    uVar3 = puVar12[3];
    uVar11 = *puVar12 ^ *puVar12 << 0xb;
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    uVar11 = uVar11 >> 8 ^ uVar3 >> 0x13 ^ uVar11 ^ uVar3;
    puVar12[2] = uVar3;
    puVar12[3] = uVar11;
    FUN_017c3a40(uVar30,iVar9,(ulong)uVar11 * (uVar15 & 0xffffffff) >> 0x20);
    uVar30 = *(undefined8 *)puVar6;
    uVar15 = FUN_017c3860(uVar30,iVar9);
    puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
    uVar3 = puVar12[3];
    uVar11 = *puVar12 ^ *puVar12 << 0xb;
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    uVar11 = uVar11 >> 8 ^ uVar3 >> 0x13 ^ uVar11 ^ uVar3;
    puVar12[2] = uVar3;
    puVar12[3] = uVar11;
    uVar11 = FUN_017c3a40(uVar30,iVar9,(ulong)uVar11 * (uVar15 & 0xffffffff) >> 0x20);
    puVar7 = PTR_DAT_04bbe4d0;
    puVar1 = PTR_DAT_04bbe4c8;
    if (uVar11 != 0xffffffff) {
      lVar22 = *(long *)puVar6;
      uVar3 = *(uint *)(lVar22 + 0x15c8);
      if ((int)uVar3 < 1) {
        if ((((*(long *)(lVar22 + 0x14b8) != 0) &&
             (puVar12 = *(uint **)(*(long *)(lVar22 + 0x14b8) + 8), puVar12 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x14d0) <= uVar11 ||
             (*(char *)(*(long *)(lVar22 + 0x14d8) + (long)(int)uVar11) != '\0')))) &&
           (((uVar11 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * uVar11 + (uint)(ushort)puVar12[2] * 8 + iVar9) +
                            (long)puVar12);
          goto joined_r0x017fcd9c;
        }
        uVar28 = 0xfffe;
LAB_017fcdb4:
        if ((((*(long *)(lVar22 + 0x14b8) != 0) &&
             (puVar12 = *(uint **)(*(long *)(lVar22 + 0x14b8) + 8), puVar12 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x14d0) <= uVar11 ||
             (*(char *)(*(long *)(lVar22 + 0x14d8) + (long)(int)uVar11) != '\0')))) &&
           (((uVar11 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * uVar11 + (uint)(ushort)puVar12[2] * 8 + iVar9) +
                            (long)puVar12);
          pcVar5 = PTR_DAT_04bbe4c8;
          puVar17 = (undefined8 *)PTR_DAT_04bbe4d0;
          goto joined_r0x017fce1c;
        }
        uVar29 = 0xfffe;
LAB_017fce28:
        if ((((*(long *)(lVar22 + 0x14b8) != 0) &&
             (puVar12 = *(uint **)(*(long *)(lVar22 + 0x14b8) + 8), puVar12 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x14d0) <= uVar11 ||
             (*(char *)(*(long *)(lVar22 + 0x14d8) + (long)(int)uVar11) != '\0')))) &&
           (((uVar11 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar12 = (uint *)((ulong)(puVar12[1] * uVar11 + (uint)(ushort)puVar12[2] * 8 + iVar9) +
                            (long)puVar12);
          goto LAB_017fd00c;
        }
      }
      else {
        if (uVar11 < uVar3) {
          uVar28 = uVar11;
          if (*(uint *)(lVar22 + 0x15b8) <= uVar11) {
            uVar28 = 0;
          }
          puVar12 = *(uint **)(*(long *)(lVar22 + 0x15c0) + (ulong)uVar28 * 8);
joined_r0x017fcd9c:
          if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
            cVar26 = *PTR_DAT_04bbe4c8;
            do {
              if (cVar26 == '\0') {
                cVar26 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
              }
              else {
                uVar28 = *(uint *)(puVar7 + 0x10);
                if (-1 < (int)uVar28) {
                  if ((ushort *)((ulong)uVar28 + (long)puVar12) != (ushort *)0x0) {
                    uVar28 = (uint)*(ushort *)((ulong)uVar28 + (long)puVar12);
                    goto joined_r0x017fcfcc;
                  }
                  break;
                }
                if (uVar28 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)*puVar12;
              if ((*puVar12 == 0) || (puVar12 == puVar27)) break;
              lVar25 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar27)) != '\0') {
                lVar25 = 0x1c;
              }
              lVar25 = (long)puVar12 + (lVar25 - (long)puVar27);
              if (lVar25 == 0) break;
              uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar27));
              *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
              if (uVar15 == 0) break;
              piVar18 = (int *)(lVar25 + 4);
              while (piVar18[-1] != 0x350e1ef9) {
                piVar18 = piVar18 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_017fcda4;
              }
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)(puVar7 + 0x10) = iVar9;
              if (*puVar12 == 0) break;
            } while( true );
          }
LAB_017fcda4:
          uVar28 = 0xfffe;
joined_r0x017fcfcc:
          if ((int)uVar3 < 1) goto LAB_017fcdb4;
        }
        else {
          uVar28 = 0xfffe;
        }
        if (uVar11 < uVar3) {
          uVar29 = uVar11;
          if (*(uint *)(lVar22 + 0x15b8) <= uVar11) {
            uVar29 = 0;
          }
          puVar12 = *(uint **)(*(long *)(lVar22 + 0x15c0) + (ulong)uVar29 * 8);
          pcVar5 = PTR_DAT_04bbe4c8;
          puVar17 = (undefined8 *)PTR_DAT_04bbe4d0;
joined_r0x017fce1c:
          PTR_DAT_04bbe4c8 = pcVar5;
          PTR_DAT_04bbe4d0 = (undefined *)puVar17;
          if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
            cVar26 = *pcVar5;
            do {
              if (cVar26 == '\0') {
                cVar26 = '\x01';
                *puVar17 = 0xffffffffffffffff;
                puVar17[1] = 0xffffffffffffffff;
                *pcVar5 = '\x01';
                *(undefined4 *)(puVar17 + 2) = 0xffffffff;
              }
              else {
                uVar29 = *(uint *)((long)puVar17 + 4);
                if (-1 < (int)uVar29) {
                  if ((ushort *)((ulong)uVar29 + (long)puVar12) == (ushort *)0x0) break;
                  uVar29 = (uint)*(ushort *)((ulong)uVar29 + (long)puVar12);
                  goto LAB_017fcfe8;
                }
                if (uVar29 != 0xffffffff) break;
              }
              puVar27 = (uint *)(ulong)*puVar12;
              uVar29 = 0xfffe;
              if ((*puVar12 == 0) || (puVar12 == puVar27)) goto LAB_017fcfe8;
              lVar25 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar27)) != '\0') {
                lVar25 = 0x1c;
              }
              lVar25 = (long)puVar12 + (lVar25 - (long)puVar27);
              if (lVar25 == 0) goto LAB_017fcfe8;
              uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar27));
              *(undefined4 *)((long)puVar17 + 4) = 0xfffffffe;
              if (uVar15 == 0) goto LAB_017fcfe8;
              piVar18 = (int *)(lVar25 + 4);
              while (piVar18[-1] != 0x4e718582) {
                piVar18 = piVar18 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_017fcfe4;
              }
              uVar29 = 0xfffe;
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)((long)puVar17 + 4) = iVar9;
              if (*puVar12 == 0) goto LAB_017fcfe8;
            } while( true );
          }
LAB_017fcfe4:
          uVar29 = 0xfffe;
LAB_017fcfe8:
          if ((int)uVar3 < 1) goto LAB_017fce28;
        }
        else {
          uVar29 = 0xfffe;
        }
        if (uVar11 < uVar3) {
          if (*(uint *)(lVar22 + 0x15b8) <= uVar11) {
            uVar11 = 0;
          }
          puVar12 = *(uint **)(*(long *)(lVar22 + 0x15c0) + (ulong)uVar11 * 8);
LAB_017fd00c:
          puVar6 = PTR_DAT_04bbe4d0;
          puVar1 = PTR_DAT_04bbe4c8;
          if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
            cVar26 = *PTR_DAT_04bbe4c8;
            while( true ) {
              if (cVar26 == '\0') {
                cVar26 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
              }
              else {
                uVar11 = *(uint *)(puVar6 + 8);
                if (-1 < (int)uVar11) goto LAB_017fd0e8;
                if (uVar11 != 0xffffffff) goto LAB_017fd0f8;
              }
              puVar27 = (uint *)(ulong)*puVar12;
              local_5c = 0xfffe;
              if ((*puVar12 == 0) || (puVar12 == puVar27)) break;
              lVar22 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar27)) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar12 + (lVar22 - (long)puVar27);
              if (lVar22 == 0) goto LAB_017fd0f8;
              uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar27));
              *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
              if (uVar15 == 0) goto LAB_017fd0f8;
              piVar18 = (int *)(lVar22 + 4);
              while (piVar18[-1] != -0x5edb6ed7) {
                piVar18 = piVar18 + 2;
                uVar15 = uVar15 - 1;
                local_5c = 0xfffe;
                if (uVar15 == 0) goto LAB_017fd0fc;
              }
              iVar9 = 0;
              if (*piVar18 != -1) {
                iVar9 = *piVar18;
              }
              *(int *)(puVar6 + 8) = iVar9;
              local_5c = 0xfffe;
              if (*puVar12 == 0) break;
            }
            goto LAB_017fd0fc;
          }
        }
      }
      goto LAB_017fd0f8;
    }
    uVar29 = 0xfffe;
    goto LAB_017fd110;
  }
LAB_017fc418:
  if (*pbVar20 < 8) goto LAB_017fc490;
LAB_017fc424:
  if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_017fc488:
    pbVar20 = PTR_DAT_04bb5038;
    goto LAB_017fc490;
  }
  lVar22 = **(long **)PTR_DAT_04bb27d0;
  bVar4 = *(byte *)(lVar22 + 0x473);
  pbVar20 = PTR_DAT_04bb5038;
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    puVar12 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar12 = (uint *)(lVar22 + 0x48);
    }
    if ((*puVar12 & 8) != 0) {
      pbVar20 = (byte *)(lVar22 + 0x471);
    }
  }
  local_60[0] = *pbVar20;
  if (7 < local_60[0]) goto LAB_017fc488;
LAB_017fc4ac:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "AlwJuneBrideDayCount";
  local_58 = puVar1;
  iVar9 = FUN_0274bce0(local_60,&local_58);
  FUN_0252d11c(&local_70);
  if ((byte)local_70 < 8) {
    local_50 = "AlwJuneBrideDayCount";
    local_58 = puVar1;
    iVar10 = FUN_0274bce0(&local_70,&local_58);
    if (5 < iVar10) {
      if ((iVar9 != 6) || (iVar9 = FUN_02202f80(), iVar9 != 2)) goto LAB_017fc570;
      FUN_017fc190(param_1,&local_5c,3);
      goto LAB_017fd15c;
    }
  }
LAB_017fc6fc:
  local_64 = 0;
  FUN_02202da0(&local_64,local_68);
  if (local_64 == 1) {
    if (local_68[0] == '\x03') {
      uVar30 = 6;
    }
    else if (local_68[0] == '\x02') {
      uVar30 = 5;
    }
    else {
      if (local_68[0] == '\x01') {
        FUN_017fd450();
      }
      uVar30 = 0;
    }
    puVar1 = PTR_DAT_04bb46d0;
    iVar10 = FUN_017c2f80(*(undefined8 *)PTR_DAT_04bb46d0,uVar30);
    iVar9 = 0x30ad;
    if (iVar10 != 0xfffe) {
      iVar9 = iVar10;
    }
    local_58 = (undefined *)(ulong)(ushort)iVar9;
    FUN_0277d4ac(&local_58);
    uVar13 = *(undefined8 *)puVar1;
    *(uint *)(param_1 + 0xd0) = (uint)local_58;
    *(undefined4 *)(param_1 + 0xd4) = local_58._4_4_;
    uVar11 = FUN_017c31f0(uVar13,uVar30);
    local_70 = 0x308f;
    if (uVar11 != 0xfffe) {
      local_70 = uVar11;
    }
    local_6c = 0;
    local_70 = local_70 & 0xffff;
    FUN_0277d4ac(&local_70);
    uVar13 = *(undefined8 *)puVar1;
    *(uint *)(param_1 + 0xb4) = local_70;
    *(undefined4 *)(param_1 + 0xb8) = local_6c;
    local_5c = FUN_017c3460(uVar13,uVar30);
    uVar13 = *(undefined8 *)puVar1;
    *(undefined1 *)(param_1 + 0xfe) = 0;
    *(undefined1 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x100) = 2;
    FUN_017c36d0(uVar13,uVar30);
    FUN_017fc288();
  }
  else {
    FUN_017fc190(param_1,&local_5c);
  }
  goto LAB_017fd15c;
LAB_017fd0e8:
  if ((ushort *)((ulong)uVar11 + (long)puVar12) == (ushort *)0x0) goto LAB_017fd0f8;
  local_5c = (uint)*(ushort *)((ulong)uVar11 + (long)puVar12);
LAB_017fd0fc:
  FUN_017fc288();
  if (uVar28 == 0xfffe) {
LAB_017fd110:
    uVar28 = 0x30ad;
  }
  local_58 = (undefined *)(ulong)uVar28;
  FUN_0277d4ac(&local_58);
  local_6c = 0;
  *(uint *)(param_1 + 0xd0) = (uint)local_58;
  *(undefined4 *)(param_1 + 0xd4) = local_58._4_4_;
  local_70 = 0x308f;
  if (uVar29 != 0xfffe) {
    local_70 = uVar29;
  }
  FUN_0277d4ac(&local_70);
  *(uint *)(param_1 + 0xb4) = local_70;
  *(undefined4 *)(param_1 + 0xb8) = local_6c;
LAB_017fd15c:
  *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0xb8);
  if (local_5c == 0xfffe) {
    uVar21 = *(undefined2 *)PTR_DAT_04bb37e0;
    uVar19 = PTR_DAT_04bb37e0[2];
    uVar23 = PTR_DAT_04bb37e0[3];
    uVar24 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    local_58._0_4_ = local_5c & 0xffff;
    local_58 = (undefined *)(ulong)(uint)local_58;
    FUN_0277d4ac(&local_58);
    uVar21 = (undefined2)local_58;
    uVar19 = local_58._2_1_;
    uVar23 = local_58._3_1_;
    uVar24 = local_58._4_4_;
  }
  *(undefined2 *)(param_1 + 0x1b4) = uVar21;
  puVar1 = PTR_DAT_04bb3170;
  *(undefined1 *)(param_1 + 0x1b6) = uVar19;
  uVar21 = *(undefined2 *)puVar1;
  *(undefined1 *)(param_1 + 0x1b7) = uVar23;
  *(undefined4 *)(param_1 + 0x1b8) = uVar24;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined2 *)(param_1 + 0xd8) = uVar21;
  *(undefined2 *)(param_1 + 0xfc) = uVar21;
  *(undefined2 *)(param_1 + 0xbc) = uVar21;
  if (*(char *)(param_1 + 0x144) != '\0') {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xbf;
    lVar22 = *(long *)PTR_DAT_04bb2200;
    *(undefined4 *)(*(long *)(lVar22 + 0x70) + 0x98) = 0;
    *(undefined1 *)(*(long *)(lVar22 + 0x80) + 0x60) = 1;
    local_58 = (undefined *)CONCAT44(local_58._4_4_,*(int *)(param_1 + 0x140));
    lVar25 = *(long *)(lVar22 + 0x70);
    *(bool *)(lVar25 + 0x9d) = *(int *)(param_1 + 0x140) != 2;
    *(undefined1 *)(*(long *)(lVar22 + 0x80) + 0x60) = 1;
    uVar19 = *(undefined1 *)(lVar25 + 0x9d);
    *(undefined1 *)(lVar25 + 0x9c) = uVar19;
    if (*(long *)(lVar25 + 0xa8) != 0) {
      lVar22 = *(long *)(*(long *)(lVar25 + 0xa8) + 0x10);
      puVar14 = (undefined1 *)(**(code **)(*(long *)(lVar22 + 0x158) + 0xf0))(lVar22 + 0x158);
      *puVar14 = uVar19;
      *(uint *)(lVar22 + 0x178) = *(uint *)(lVar22 + 0x178) | 0x1000000;
    }
  }
  FUN_017ef108(param_1,0,0);
  FUN_017eff3c(param_1,0,0);
  FUN_017f0b3c(param_1);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1f0);
  *(byte *)(param_1 + 0x10e) = *(byte *)(param_1 + 0x13c) >> 7;
  *(byte *)(param_1 + 0xe6) = *(byte *)(param_1 + 0x13c) >> 4 & 1;
  *(undefined1 *)(param_1 + 0x10f) = *(undefined1 *)(param_1 + 0xfe);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
  *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
  FUN_017e8150(param_1,0);
  FUN_017e83a0(param_1,0);
  FUN_017e8610(param_1,0);
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar22 = FUN_026f480c();
  if (lVar22 == 0) {
    return;
  }
  lVar25 = *(long *)(lVar22 + 0x103d0);
  if (lVar25 == 0) {
    uVar15 = 0;
  }
  else {
    if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
      uVar15 = 0;
      plVar16 = *(long **)(lVar25 + 0x20);
    }
    else {
      uVar15 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
      uVar15 = uVar15 & 0xffffffff;
      if (*(long *)(lVar22 + 0x103d0) == 0) goto LAB_017fd3b0;
      plVar16 = *(long **)(*(long *)(lVar22 + 0x103d0) + 0x20);
    }
    if (plVar16 != (long *)0x0) {
      local_58 = *(undefined **)(lVar22 + 0x103b0);
      local_50 = *(char **)(lVar22 + 0x103b8);
      uStack_48 = 0x20;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_58);
    }
  }
LAB_017fd3b0:
  puVar2 = (undefined2 *)(*(long *)(lVar22 + 0x103b8) + *(long *)(lVar22 + 0x103b0));
  *puVar2 = *(undefined2 *)(param_1 + 0x1a4);
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_1 + 0x1a6);
  *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)(param_1 + 0x1a7);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x1a8);
  puVar2[4] = *(undefined2 *)(param_1 + 0x1ac);
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x1ae);
  *(undefined1 *)((long)puVar2 + 0xb) = *(undefined1 *)(param_1 + 0x1af);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x1b0);
  puVar2[8] = *(undefined2 *)(param_1 + 0x1b4);
  *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_1 + 0x1b6);
  *(undefined1 *)((long)puVar2 + 0x13) = *(undefined1 *)(param_1 + 0x1b7);
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x1b8);
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar22 + 0x103d0) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0x103d0) + 0x18), puVar17 != (undefined8 *)0x0))
  {
    (**(code **)*puVar17)();
  }
  return;
}

