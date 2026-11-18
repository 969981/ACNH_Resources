
void FUN_036b6560(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  long lVar24;
  byte *pbVar25;
  uint uVar26;
  byte local_174 [255];
  undefined1 local_75;
  
  puVar5 = PTR_DAT_04bc11f0;
  if ((param_1 != (uint *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar26 = 0;
    do {
      if (((uVar26 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar11 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar2 = (uint *)((ulong)(param_1[1] * uVar26 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                         (long)param_1);
        if (puVar2 != (uint *)0x0) {
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)puVar5;
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b6720;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b6720;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)puVar5 = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x416eaf25) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b671c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)puVar5 = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b671c:
          uVar6 = 0;
LAB_036b6720:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar18 != (uint *)0x0)) && (*puVar18 != 0)) &&
             ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab2598) {
                *(undefined2 *)(DAT_05ab25a0 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 4);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b68d0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b68d0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0x76a8b33) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b68cc;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 4) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b68cc:
          uVar6 = 0;
LAB_036b68d0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab25a8) {
                *(undefined2 *)(DAT_05ab25b0 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 8);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b6a80;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b6a80;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0x1617e14c) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b6a7c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 8) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b6a7c:
          uVar6 = 0;
LAB_036b6a80:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab25b8) {
                *(undefined2 *)(DAT_05ab25c0 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0xc);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b6c30;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b6c30;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x5013c55c) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b6c2c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0xc) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b6c2c:
          uVar6 = 0;
LAB_036b6c30:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab25c8) {
                *(undefined2 *)(DAT_05ab25d0 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0x10);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b6de0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b6de0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0x34ed35ba) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b6ddc;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x10) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b6ddc:
          uVar6 = 0;
LAB_036b6de0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab25d8) {
                *(undefined2 *)(DAT_05ab25e0 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0x14);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b6f90;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b6f90;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x72e911ae) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b6f8c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x14) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b6f8c:
          uVar6 = 0;
LAB_036b6f90:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab25e8) {
                *(undefined2 *)(DAT_05ab25f0 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0x18);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b7140;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b7140;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x63947bd7) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b713c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x18) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b713c:
          uVar6 = 0;
LAB_036b7140:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab25f8) {
                *(undefined2 *)(DAT_05ab2600 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0x1c);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b72f0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b72f0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0x25905fc1) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b72ec;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x1c) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b72ec:
          uVar6 = 0;
LAB_036b72f0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab2608) {
                *(undefined2 *)(DAT_05ab2610 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0x20);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b74a0;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b74a0;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != -0x71189c5e) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b749c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x20) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b749c:
          uVar6 = 0;
LAB_036b74a0:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab2618) {
                *(undefined2 *)(DAT_05ab2620 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0x24);
                if (-1 < (int)uVar10) {
                  if ((undefined4 *)((long)puVar2 + (ulong)uVar10) != (undefined4 *)0x0) {
                    uVar6 = *(undefined4 *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b7650;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar6 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar6 = 0, puVar2 == puVar18)) goto LAB_036b7650;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x7328de13) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b764c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x24) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b764c:
          uVar6 = 0;
LAB_036b7650:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            uVar7 = FUN_036ab7d0(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          else {
            uVar7 = FUN_036ab180(uVar6,0);
            if (0x3c < uVar7) {
              uVar7 = 0;
            }
            uVar9 = (undefined2)uVar7;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if (((*puVar2 != 0) && (puVar18 != (uint *)0x0)) &&
             ((*puVar18 != 0 &&
              ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < DAT_05ab2628) {
                *(undefined2 *)(DAT_05ab2630 + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
          uVar7 = *puVar2;
          if (uVar7 != 0) {
            cVar8 = *PTR_DAT_04bc11e8;
            do {
              puVar4 = PTR_DAT_04bc11e8;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                uVar7 = *puVar2;
              }
              else {
                uVar10 = *(uint *)(puVar5 + 0x28);
                if (-1 < (int)uVar10) {
                  if ((uint *)((long)puVar2 + (ulong)uVar10) != (uint *)0x0) {
                    uVar7 = *(uint *)((long)puVar2 + (ulong)uVar10);
                    goto LAB_036b7810;
                  }
                  break;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar18 = (uint *)(ulong)uVar7;
              uVar7 = 0;
              if ((puVar18 == (uint *)0x0) || (uVar7 = 0, puVar2 == puVar18)) goto LAB_036b7810;
              lVar24 = 0xc;
              if (*(char *)((long)puVar2 + (10 - (long)puVar18)) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar2 + (lVar24 - (long)puVar18);
              if (lVar24 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar13 = (int *)(lVar24 + 4);
              while (piVar13[-1] != 0x649ed9ae) {
                piVar13 = piVar13 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_036b780c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x28) = iVar11;
              uVar7 = *puVar2;
              if (uVar7 == 0) break;
            } while( true );
          }
LAB_036b780c:
          uVar7 = 0;
LAB_036b7810:
          if (((*puVar2 == 0) || (lVar24 = (long)puVar2 - (ulong)*puVar2, lVar24 == 0)) ||
             (*(char *)(lVar24 + 0xb) == '\0')) {
            if ((DAT_05ab26c0 == '\x01') && (DAT_05ab26c4 == uVar7)) {
              uVar10 = DAT_05ab26c8;
              if (4 < DAT_05ab26c8) goto LAB_036b7c78;
            }
            else {
              if (((DAT_05ab2708 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05ab2708), iVar11 != 0)) {
                DAT_05ab26d0 = 0x500000000;
                DAT_05ab26d8 = (undefined8 *)&DAT_05ab26e0;
                __cxa_guard_release(&DAT_05ab2708);
              }
              if ((DAT_05ab2710 & 1) == 0) {
                DAT_05ab2710 = 1;
                if (((DAT_05ab2740 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05ab2740), iVar11 != 0)) {
                  DAT_05ab2734 = 0xffffffff00000000;
                  DAT_05ab2714 = 0xffffffff00000000;
                  DAT_05ab271c = 0xffffffff00000000;
                  DAT_05ab2724 = 0xffffffff00000000;
                  DAT_05ab272c = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05ab2740);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = (&PTR_DAT_04b442e0)[lVar24];
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_036b7958:
                        iVar11 = (int)lVar12;
joined_r0x036b795c:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_036b7964;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_036b7958;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x036b795c;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_036b7964:
                    memcpy(local_174,pbVar25,(long)iVar11);
                    local_174[iVar11] = 0;
                  }
                  uVar10 = (uint)*pbVar25;
                  if (*pbVar25 == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0xffffffff;
                    do {
                      pbVar25 = pbVar25 + 1;
                      uVar16 = crc32b(uVar16,uVar10,0x4c11db7);
                      uVar10 = (uint)*pbVar25;
                    } while (uVar10 != 0);
                    uVar16 = ~uVar16;
                  }
                  *(uint *)(&DAT_05ab2714 + lVar24) = uVar16;
                  *(int *)((long)&DAT_05ab2714 + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05ab26d0;
                  if ((int)DAT_05ab26d0 < DAT_05ab26d0._4_4_) {
                    DAT_05ab26d8[(int)DAT_05ab26d0] = &DAT_05ab2714 + lVar24;
                    iVar11 = (int)DAT_05ab26d0 + 1;
                    DAT_05ab26d0 = CONCAT44(DAT_05ab26d0._4_4_,iVar11);
                  }
                  puVar22 = DAT_05ab26d8;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 5);
                if (1 < iVar11) {
                  uVar16 = 0;
                  uVar10 = iVar11 - 1;
                  do {
                    if ((int)uVar10 <= (int)uVar16) break;
                    puVar18 = (uint *)puVar22[uVar16];
                    uVar14 = (ulong)uVar16;
                    if ((uVar10 - uVar16 & 1) == 0) {
                      uVar17 = uVar14;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar17 = uVar14 + 1;
                      puVar20 = (uint *)puVar22[uVar17];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        puVar22[uVar17] = puVar18;
                        puVar22[uVar14] = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar10;
                    uVar10 = uVar16;
                    if (~uVar14 + uVar19 != 0) {
                      puVar21 = puVar22 + uVar17 + 1;
                      do {
                        puVar18 = (uint *)*puVar21;
                        uVar15 = (uint)uVar17;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar23 = (uint *)puVar21[1];
                          if (puVar18 != (uint *)0x0) goto LAB_036b7c30;
LAB_036b7be0:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar21[-1] = puVar18;
                          *puVar21 = puVar20;
                          puVar23 = (uint *)puVar21[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_036b7be0;
LAB_036b7c30:
                          if (puVar23 == (uint *)0x0) goto LAB_036b7be0;
                          if (*puVar18 <= *puVar23) goto LAB_036b7be0;
                          uVar10 = uVar15 + 1;
                          *puVar21 = puVar23;
                          puVar21[1] = puVar18;
                        }
                        uVar17 = uVar17 + 2;
                        puVar21 = puVar21 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar17);
                    }
                    if ((int)uVar10 <= (int)uVar16) break;
                    uVar17 = (ulong)uVar10;
                    puVar18 = (uint *)puVar22[uVar10];
                    uVar16 = uVar10;
                    do {
                      puVar20 = (uint *)puVar22[uVar17 - 1];
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar16 = (uint)uVar17;
                        puVar22[uVar17 - 1] = puVar18;
                        puVar22[uVar17] = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar17 = uVar17 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar14 < (long)uVar17);
                  } while (uVar16 != uVar10);
                }
                DAT_05ab26cc = '\x01';
              }
              else if (DAT_05ab26cc != '\x01') goto LAB_036b7c78;
              if ((int)DAT_05ab26d0 == 0) goto LAB_036b7c78;
              if ((int)DAT_05ab26d0 < 2) {
                uVar10 = 0;
                puVar18 = (uint *)*DAT_05ab26d8;
                if (puVar18 != (uint *)0x0) goto LAB_036b7a94;
LAB_036b7c5c:
                if (uVar10 < 5) {
LAB_036b7c68:
                  uVar10 = *(uint *)(DAT_05ab26d8[uVar10] + 4);
                  if (uVar10 < 5) {
                    DAT_05ab26c0 = '\x01';
                    DAT_05ab26c4 = uVar7;
                    DAT_05ab26c8 = uVar10;
                    goto LAB_036b7c7c;
                  }
                }
              }
              else {
                uVar10 = 0;
                iVar11 = (int)DAT_05ab26d0 + -1;
                do {
                  iVar1 = iVar11 + uVar10;
                  if (iVar1 < 0 != SCARRY4(iVar11,uVar10)) {
                    iVar1 = iVar1 + 1;
                  }
                  uVar16 = iVar1 >> 1;
                  if ((uint *)DAT_05ab26d8[(int)uVar16] == (uint *)0x0) goto LAB_036b7aa4;
                  uVar15 = *(uint *)DAT_05ab26d8[(int)uVar16];
                  if (uVar15 == uVar7) goto LAB_036b7aa4;
                  if (uVar15 < uVar7) {
                    uVar10 = uVar16 + 1;
                  }
                  else {
                    iVar11 = uVar16 - 1;
                  }
                } while ((int)uVar10 < iVar11);
                puVar18 = (uint *)DAT_05ab26d8[(int)uVar10];
                if (puVar18 == (uint *)0x0) goto LAB_036b7c5c;
LAB_036b7a94:
                uVar16 = uVar10;
                if (*puVar18 == uVar7) {
LAB_036b7aa4:
                  uVar10 = uVar16;
                  if (4 < uVar16) goto LAB_036b7c78;
                  goto LAB_036b7c68;
                }
              }
LAB_036b7c78:
              uVar10 = 0;
            }
LAB_036b7c7c:
            uVar9 = (undefined2)uVar10;
          }
          else {
            if ((DAT_05ab2638 == '\x01') && (DAT_05ab263c == uVar7)) {
              uVar10 = DAT_05ab2640;
              if (4 < DAT_05ab2640) goto LAB_036b8030;
            }
            else {
              if (((DAT_05ab2680 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_05ab2680), iVar11 != 0)) {
                DAT_05ab2648 = 0x500000000;
                DAT_05ab2650 = &DAT_05ab2658;
                __cxa_guard_release(&DAT_05ab2680);
              }
              if ((DAT_05ab2688 & 1) == 0) {
                DAT_05ab2688 = 1;
                if (((DAT_05ab26b8 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_05ab26b8), iVar11 != 0)) {
                  DAT_05ab26ac = 0xffffffff00000000;
                  DAT_05ab268c = 0xffffffff00000000;
                  DAT_05ab2694 = 0xffffffff00000000;
                  DAT_05ab269c = 0xffffffff00000000;
                  DAT_05ab26a4 = 0xffffffff00000000;
                  __cxa_guard_release(&DAT_05ab26b8);
                }
                lVar24 = 0;
                do {
                  local_75 = 0;
                  pbVar25 = (&PTR_DAT_04b44248)[lVar24];
                  if (local_174 != pbVar25) {
                    lVar12 = 0;
                    do {
                      if (pbVar25[lVar12] == 0) {
LAB_036b7d24:
                        iVar11 = (int)lVar12;
joined_r0x036b7d28:
                        if (0xff < iVar11) {
                          iVar11 = 0xff;
                        }
                        goto LAB_036b7d30;
                      }
                      if (pbVar25[lVar12 + 1] == 0) {
                        lVar12 = lVar12 + 1;
                        goto LAB_036b7d24;
                      }
                      if (pbVar25[lVar12 + 2] == 0) {
                        iVar11 = (int)lVar12 + 2;
                        goto joined_r0x036b7d28;
                      }
                      lVar12 = lVar12 + 3;
                    } while (lVar12 != 0x80001);
                    iVar11 = 0;
LAB_036b7d30:
                    memcpy(local_174,pbVar25,(long)iVar11);
                    local_174[iVar11] = 0;
                  }
                  uVar10 = (uint)*pbVar25;
                  if (*pbVar25 == 0) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0xffffffff;
                    do {
                      pbVar25 = pbVar25 + 1;
                      uVar16 = crc32b(uVar16,uVar10,0x4c11db7);
                      uVar10 = (uint)*pbVar25;
                    } while (uVar10 != 0);
                    uVar16 = ~uVar16;
                  }
                  *(uint *)(&DAT_05ab268c + lVar24) = uVar16;
                  *(int *)((long)&DAT_05ab268c + lVar24 * 8 + 4) = (int)lVar24;
                  iVar11 = (int)DAT_05ab2648;
                  if ((int)DAT_05ab2648 < DAT_05ab2648._4_4_) {
                    *(undefined8 **)(DAT_05ab2650 + (long)(int)DAT_05ab2648 * 8) =
                         &DAT_05ab268c + lVar24;
                    iVar11 = (int)DAT_05ab2648 + 1;
                    DAT_05ab2648 = CONCAT44(DAT_05ab2648._4_4_,iVar11);
                  }
                  puVar4 = DAT_05ab2650;
                  lVar24 = lVar24 + 1;
                } while (lVar24 != 5);
                if (1 < iVar11) {
                  uVar16 = 0;
                  uVar10 = iVar11 - 1;
                  do {
                    if ((int)uVar10 <= (int)uVar16) break;
                    puVar18 = *(uint **)(puVar4 + (ulong)uVar16 * 8);
                    uVar14 = (ulong)uVar16;
                    if ((uVar10 - uVar16 & 1) == 0) {
                      uVar17 = uVar14;
                      puVar20 = puVar18;
                    }
                    else {
                      uVar17 = uVar14 + 1;
                      puVar20 = *(uint **)(puVar4 + uVar17 * 8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar20 < *puVar18)) {
                        *(uint **)(puVar4 + uVar17 * 8) = puVar18;
                        *(uint **)(puVar4 + uVar14 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                    }
                    uVar19 = (ulong)uVar10;
                    uVar10 = uVar16;
                    if (~uVar14 + uVar19 != 0) {
                      puVar22 = (undefined8 *)(puVar4 + uVar17 * 8 + 8);
                      do {
                        puVar18 = (uint *)*puVar22;
                        uVar15 = (uint)uVar17;
                        if (((puVar20 == (uint *)0x0) || (puVar18 == (uint *)0x0)) ||
                           (*puVar20 <= *puVar18)) {
                          puVar23 = (uint *)puVar22[1];
                          if (puVar18 != (uint *)0x0) goto LAB_036b7fb0;
LAB_036b7f60:
                          puVar18 = puVar23;
                        }
                        else {
                          puVar22[-1] = puVar18;
                          *puVar22 = puVar20;
                          puVar23 = (uint *)puVar22[1];
                          puVar18 = puVar20;
                          uVar10 = uVar15;
                          if (puVar20 == (uint *)0x0) goto LAB_036b7f60;
LAB_036b7fb0:
                          if (puVar23 == (uint *)0x0) goto LAB_036b7f60;
                          if (*puVar18 <= *puVar23) goto LAB_036b7f60;
                          uVar10 = uVar15 + 1;
                          *puVar22 = puVar23;
                          puVar22[1] = puVar18;
                        }
                        uVar17 = uVar17 + 2;
                        puVar22 = puVar22 + 2;
                        puVar20 = puVar18;
                      } while (uVar19 != uVar17);
                    }
                    if ((int)uVar10 <= (int)uVar16) break;
                    uVar17 = (ulong)uVar10;
                    puVar18 = *(uint **)(puVar4 + (ulong)uVar10 * 8);
                    uVar16 = uVar10;
                    do {
                      puVar20 = *(uint **)(puVar4 + uVar17 * 8 + -8);
                      if (((puVar18 != (uint *)0x0) && (puVar20 != (uint *)0x0)) &&
                         (*puVar18 < *puVar20)) {
                        uVar16 = (uint)uVar17;
                        *(uint **)(puVar4 + uVar17 * 8 + -8) = puVar18;
                        *(uint **)(puVar4 + uVar17 * 8) = puVar20;
                        puVar20 = puVar18;
                      }
                      uVar17 = uVar17 - 1;
                      puVar18 = puVar20;
                    } while ((long)uVar14 < (long)uVar17);
                  } while (uVar16 != uVar10);
                }
                DAT_05ab2644 = '\x01';
              }
              else if (DAT_05ab2644 != '\x01') goto LAB_036b8030;
              if ((int)DAT_05ab2648 != 0) {
                if ((int)DAT_05ab2648 < 2) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = 0;
                  iVar11 = (int)DAT_05ab2648 + -1;
                  do {
                    iVar1 = iVar11 + uVar10;
                    if (iVar1 < 0 != SCARRY4(iVar11,uVar10)) {
                      iVar1 = iVar1 + 1;
                    }
                    uVar16 = iVar1 >> 1;
                    if (*(uint **)(DAT_05ab2650 + (long)(int)uVar16 * 8) == (uint *)0x0)
                    goto joined_r0x036b801c;
                    uVar15 = **(uint **)(DAT_05ab2650 + (long)(int)uVar16 * 8);
                    if (uVar15 == uVar7) goto joined_r0x036b801c;
                    if (uVar15 < uVar7) {
                      uVar10 = uVar16 + 1;
                    }
                    else {
                      iVar11 = uVar16 - 1;
                    }
                  } while ((int)uVar10 < iVar11);
                }
                uVar16 = uVar10;
                if ((*(uint **)(DAT_05ab2650 + (long)(int)uVar10 * 8) == (uint *)0x0) ||
                   (**(uint **)(DAT_05ab2650 + (long)(int)uVar10 * 8) == uVar7)) {
joined_r0x036b801c:
                  if ((uVar16 < 5) &&
                     (uVar10 = *(uint *)(*(long *)(DAT_05ab2650 + (ulong)uVar16 * 8) + 4),
                     uVar10 < 5)) {
                    DAT_05ab2638 = '\x01';
                    DAT_05ab263c = uVar7;
                    DAT_05ab2640 = uVar10;
                    goto LAB_036b8034;
                  }
                }
              }
LAB_036b8030:
              uVar10 = 0;
            }
LAB_036b8034:
            uVar9 = (undefined2)uVar10;
          }
          puVar18 = (uint *)((long)puVar2 - (ulong)*puVar2);
          if ((((*puVar2 != 0) && (puVar18 != (uint *)0x0)) && (*puVar18 != 0)) &&
             ((uVar7 = puVar18[1], uVar7 != 0 && ((ulong)(ushort)puVar18[2] != 0)))) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar18 + lVar24 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar24 != 0) {
              uVar10 = 0;
              if ((ulong)uVar7 != 0) {
                uVar10 = (uint)((ulong)((long)puVar2 - lVar24) / (ulong)uVar7);
              }
              if (*puVar18 <= uVar10) {
                uVar10 = 0xffffffff;
              }
              if (uVar10 < *(uint *)PTR_DAT_04bc3950) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc3950 + 8) + (long)(int)uVar10 * 2) = uVar9;
              }
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
  }
  return;
}

