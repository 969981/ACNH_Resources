
void FUN_01ac1930(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  undefined2 uVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  
  puVar6 = PTR_DAT_04bbffc0;
  if ((param_1 != (uint *)0x0) && (uVar2 = *param_1, uVar2 != 0)) {
    uVar14 = 0;
    do {
      if (((uVar14 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar11 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar14 + (uint)(ushort)param_1[2] * 8 + iVar11) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar8 = *puVar1;
          if (uVar8 != 0) {
            cVar9 = DAT_053272d8;
            do {
              if (cVar9 == '\0') {
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                cVar9 = '\x01';
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                uVar8 = *puVar1;
                *PTR_DAT_04bbffb8 = 1;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 4);
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar7 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_01ac1ad0;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar8;
              uVar7 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar7 = 0, puVar1 == puVar5)) goto LAB_01ac1ad0;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar4 + 4);
              while (piVar13[-1] != -0x4bddac62) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01ac1acc;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar6 + 4) = iVar11;
              uVar8 = *puVar1;
              if (uVar8 == 0) break;
            } while( true );
          }
LAB_01ac1acc:
          uVar7 = 0;
LAB_01ac1ad0:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar8 = FUN_01ac26c0(uVar7,0);
            if (0xc < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          else {
            uVar8 = FUN_01ac20d0(uVar7,0);
            if (0xc < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          puVar5 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar5 != (uint *)0x0)) && (*puVar5 != 0)) &&
             ((uVar8 = puVar5[1], uVar8 != 0 && ((ulong)(ushort)puVar5[2] != 0)))) {
            lVar4 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar5 + lVar4 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar4 != 0) {
              uVar3 = 0;
              if ((ulong)uVar8 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar4) / (ulong)uVar8);
              }
              if (*puVar5 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_05327310) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0328 + 8) + (long)(int)uVar3 * 2) = uVar10;
              }
            }
          }
          uVar8 = *puVar1;
          if (uVar8 != 0) {
            cVar9 = DAT_053272d8;
            do {
              if (cVar9 == '\0') {
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                cVar9 = '\x01';
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                uVar8 = *puVar1;
                *PTR_DAT_04bbffb8 = 1;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 8);
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar7 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_01ac1c80;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar8;
              uVar7 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar7 = 0, puVar1 == puVar5)) goto LAB_01ac1c80;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar4 + 4);
              while (piVar13[-1] != -0x6699840f) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01ac1c7c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar6 + 8) = iVar11;
              uVar8 = *puVar1;
              if (uVar8 == 0) break;
            } while( true );
          }
LAB_01ac1c7c:
          uVar7 = 0;
LAB_01ac1c80:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar8 = FUN_01ac3110(uVar7);
            if (1 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          else {
            uVar8 = FUN_01ac2cb0();
            if (1 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          puVar5 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar5 != (uint *)0x0)) &&
             ((*puVar5 != 0 && ((uVar8 = puVar5[1], uVar8 != 0 && ((ulong)(ushort)puVar5[2] != 0))))
             )) {
            lVar4 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar5 + lVar4 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar4 != 0) {
              uVar3 = 0;
              if ((ulong)uVar8 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar4) / (ulong)uVar8);
              }
              if (*puVar5 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_05327320) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0330 + 8) + (long)(int)uVar3 * 2) = uVar10;
              }
            }
          }
          uVar8 = *puVar1;
          if (uVar8 != 0) {
            cVar9 = DAT_053272d8;
            do {
              if (cVar9 == '\0') {
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                cVar9 = '\x01';
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                uVar8 = *puVar1;
                *PTR_DAT_04bbffb8 = 1;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 0xc);
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar7 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_01ac1e30;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar8;
              uVar7 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar7 = 0, puVar1 == puVar5)) goto LAB_01ac1e30;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar4 + 4);
              while (piVar13[-1] != -0x41d051af) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01ac1e2c;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar6 + 0xc) = iVar11;
              uVar8 = *puVar1;
              if (uVar8 == 0) break;
            } while( true );
          }
LAB_01ac1e2c:
          uVar7 = 0;
LAB_01ac1e30:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar8 = FUN_01ac39e0(uVar7);
            if (2 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          else {
            uVar8 = FUN_01ac3560();
            if (2 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          puVar5 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar5 != (uint *)0x0)) &&
             ((*puVar5 != 0 && ((uVar8 = puVar5[1], uVar8 != 0 && ((ulong)(ushort)puVar5[2] != 0))))
             )) {
            lVar4 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar5 + lVar4 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar4 != 0) {
              uVar3 = 0;
              if ((ulong)uVar8 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar4) / (ulong)uVar8);
              }
              if (*puVar5 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_05327330) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0338 + 8) + (long)(int)uVar3 * 2) = uVar10;
              }
            }
          }
          uVar8 = *puVar1;
          if (uVar8 != 0) {
            cVar9 = DAT_053272d8;
            do {
              if (cVar9 == '\0') {
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                cVar9 = '\x01';
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                uVar8 = *puVar1;
                *PTR_DAT_04bbffb8 = 1;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 0x10);
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar7 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_01ac1fe0;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar8;
              uVar7 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar7 = 0, puVar1 == puVar5)) goto LAB_01ac1fe0;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar4 + 4);
              while (piVar13[-1] != 0x11ae74f8) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_01ac1fdc;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar6 + 0x10) = iVar11;
              uVar8 = *puVar1;
              if (uVar8 == 0) break;
            } while( true );
          }
LAB_01ac1fdc:
          uVar7 = 0;
LAB_01ac1fe0:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar8 = FUN_01ac4300(uVar7);
            if (1 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          else {
            uVar8 = FUN_01ac3e90();
            if (1 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          puVar5 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar5 != (uint *)0x0)) &&
             ((*puVar5 != 0 && ((uVar8 = puVar5[1], uVar8 != 0 && ((ulong)(ushort)puVar5[2] != 0))))
             )) {
            lVar4 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar5 + lVar4 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar4 != 0) {
              uVar3 = 0;
              if ((ulong)uVar8 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar4) / (ulong)uVar8);
              }
              if (*puVar5 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_05327340) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc0340 + 8) + (long)(int)uVar3 * 2) = uVar10;
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar2);
  }
  return;
}

