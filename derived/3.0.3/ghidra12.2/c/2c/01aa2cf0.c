
void FUN_01aa2cf0(uint *param_1)

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
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  
  puVar6 = PTR_DAT_04bbff08;
  if ((param_1 != (uint *)0x0) && (uVar2 = *param_1, uVar2 != 0)) {
    uVar13 = 0;
    do {
      if (((uVar13 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar13 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          uVar8 = *puVar1;
          if (uVar8 != 0) {
            cVar9 = DAT_05326b10;
            do {
              if (cVar9 == '\0') {
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                cVar9 = '\x01';
                *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                uVar8 = *puVar1;
                *PTR_DAT_04bbff00 = 1;
              }
              else {
                uVar3 = *(uint *)puVar6;
                if (-1 < (int)uVar3) {
                  if ((undefined4 *)((long)puVar1 + (ulong)uVar3) != (undefined4 *)0x0) {
                    uVar7 = *(undefined4 *)((long)puVar1 + (ulong)uVar3);
                    goto LAB_01aa2e80;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar5 = (uint *)(ulong)uVar8;
              uVar7 = 0;
              if ((puVar5 == (uint *)0x0) || (uVar7 = 0, puVar1 == puVar5)) goto LAB_01aa2e80;
              lVar4 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar5)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar1 + (lVar4 - (long)puVar5);
              if (lVar4 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar5));
              *(undefined4 *)puVar6 = 0xfffffffe;
              if (uVar11 == 0) break;
              piVar12 = (int *)(lVar4 + 4);
              while (piVar12[-1] != -0x6fb99503) {
                piVar12 = piVar12 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_01aa2e7c;
              }
              iVar14 = 0;
              if (*piVar12 != -1) {
                iVar14 = *piVar12;
              }
              *(int *)puVar6 = iVar14;
              uVar8 = *puVar1;
              if (uVar8 == 0) break;
            } while( true );
          }
LAB_01aa2e7c:
          uVar7 = 0;
LAB_01aa2e80:
          if (((*puVar1 == 0) || (lVar4 = (long)puVar1 - (ulong)*puVar1, lVar4 == 0)) ||
             (*(char *)(lVar4 + 0xb) == '\0')) {
            uVar8 = FUN_01721cc0(uVar7,0);
            if (0x74 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          else {
            uVar8 = FUN_007c23b0(uVar7,0);
            if (0x74 < uVar8) {
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
              if (uVar3 < DAT_05326b00) {
                *(undefined2 *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar3 * 2) = uVar10;
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  return;
}

