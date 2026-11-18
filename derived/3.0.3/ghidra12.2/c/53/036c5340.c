
void FUN_036c5340(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  undefined2 uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  
  puVar7 = PTR_DAT_04bc3968;
  if ((param_1 != (uint *)0x0) && (uVar2 = *param_1, uVar2 != 0)) {
    uVar15 = 0;
    do {
      if (((uVar15 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar12 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar15 + (uint)(ushort)param_1[2] * 8 + iVar12) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar9 = *puVar1;
          if (uVar9 != 0) {
            cVar10 = DAT_055b7898;
            do {
              puVar6 = PTR_DAT_04bc3960;
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                uVar9 = *puVar1;
              }
              else {
                uVar3 = *(uint *)puVar7;
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar8 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_036c54d0;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar9;
              uVar8 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar8 = 0, puVar1 == puVar5)) goto LAB_036c54d0;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)puVar7 = 0xfffffffe;
              if (uVar13 == 0) break;
              piVar14 = (int *)(lVar4 + 4);
              while (piVar14[-1] != -0x2f9f6534) {
                piVar14 = piVar14 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_036c54cc;
              }
              iVar12 = 0;
              if (*piVar14 != -1) {
                iVar12 = *piVar14;
              }
              *(int *)puVar7 = iVar12;
              uVar9 = *puVar1;
              if (uVar9 == 0) break;
            } while( true );
          }
LAB_036c54cc:
          uVar8 = 0;
LAB_036c54d0:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar9 = FUN_036c5dc0(uVar8);
            if (10 < uVar9) {
              uVar9 = 0;
            }
            uVar11 = (undefined2)uVar9;
          }
          else {
            uVar9 = FUN_036c58f0();
            if (10 < uVar9) {
              uVar9 = 0;
            }
            uVar11 = (undefined2)uVar9;
          }
          puVar5 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar5 != (uint *)0x0)) && (*puVar5 != 0)) &&
             ((uVar9 = puVar5[1], uVar9 != 0 && ((ulong)(ushort)puVar5[2] != 0)))) {
            lVar4 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar5 + lVar4 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar4 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar4) / (ulong)uVar9);
              }
              if (*puVar5 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_05ab3140) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bcac10 + 8) + (long)(int)uVar3 * 2) = uVar11;
              }
            }
          }
          uVar9 = *puVar1;
          if (uVar9 != 0) {
            cVar10 = DAT_055b7898;
            do {
              puVar6 = PTR_DAT_04bc3960;
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                uVar9 = *puVar1;
              }
              else {
                uVar3 = *(uint *)(puVar7 + 4);
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar8 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_036c5670;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar9;
              uVar8 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar8 = 0, puVar1 == puVar5)) goto LAB_036c5670;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
              if (uVar13 == 0) break;
              piVar14 = (int *)(lVar4 + 4);
              while (piVar14[-1] != 0x699b4124) {
                piVar14 = piVar14 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_036c566c;
              }
              iVar12 = 0;
              if (*piVar14 != -1) {
                iVar12 = *piVar14;
              }
              *(int *)(puVar7 + 4) = iVar12;
              uVar9 = *puVar1;
              if (uVar9 == 0) break;
            } while( true );
          }
LAB_036c566c:
          uVar8 = 0;
LAB_036c5670:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar9 = FUN_036c5dc0(uVar8);
            if (10 < uVar9) {
              uVar9 = 0;
            }
            uVar11 = (undefined2)uVar9;
          }
          else {
            uVar9 = FUN_036c58f0();
            if (10 < uVar9) {
              uVar9 = 0;
            }
            uVar11 = (undefined2)uVar9;
          }
          puVar5 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar5 != (uint *)0x0)) &&
             ((*puVar5 != 0 && ((uVar9 = puVar5[1], uVar9 != 0 && ((ulong)(ushort)puVar5[2] != 0))))
             )) {
            lVar4 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar5 + lVar4 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar4 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar4) / (ulong)uVar9);
              }
              if (*puVar5 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_05ab3150) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bcac18 + 8) + (long)(int)uVar3 * 2) = uVar11;
              }
            }
          }
          uVar9 = *puVar1;
          if (uVar9 != 0) {
            cVar10 = DAT_055b7898;
            do {
              puVar6 = PTR_DAT_04bc3960;
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                uVar9 = *puVar1;
              }
              else {
                uVar3 = *(uint *)(puVar7 + 8);
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar8 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_036c5810;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar9;
              uVar8 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar8 = 0, puVar1 == puVar5)) goto LAB_036c5810;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar13 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
              if (uVar13 == 0) break;
              piVar14 = (int *)(lVar4 + 4);
              while (piVar14[-1] != 0x78e62b5d) {
                piVar14 = piVar14 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_036c580c;
              }
              iVar12 = 0;
              if (*piVar14 != -1) {
                iVar12 = *piVar14;
              }
              *(int *)(puVar7 + 8) = iVar12;
              uVar9 = *puVar1;
              if (uVar9 == 0) break;
            } while( true );
          }
LAB_036c580c:
          uVar8 = 0;
LAB_036c5810:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar9 = FUN_036c5dc0(uVar8);
            if (10 < uVar9) {
              uVar9 = 0;
            }
            uVar11 = (undefined2)uVar9;
          }
          else {
            uVar9 = FUN_036c58f0();
            if (10 < uVar9) {
              uVar9 = 0;
            }
            uVar11 = (undefined2)uVar9;
          }
          puVar5 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar5 != (uint *)0x0)) &&
             ((*puVar5 != 0 && ((uVar9 = puVar5[1], uVar9 != 0 && ((ulong)(ushort)puVar5[2] != 0))))
             )) {
            lVar4 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar5 + lVar4 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar4 != 0) {
              uVar3 = 0;
              if ((ulong)uVar9 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar4) / (ulong)uVar9);
              }
              if (*puVar5 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_05ab3160) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bcac20 + 8) + (long)(int)uVar3 * 2) = uVar11;
              }
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar2);
  }
  return;
}

