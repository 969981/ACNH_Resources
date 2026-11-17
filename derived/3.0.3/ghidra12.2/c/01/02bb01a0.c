
void FUN_02bb01a0(uint *param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  
  if ((param_1 != (uint *)0x0) && (uVar5 = *param_1, uVar5 != 0)) {
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
          puVar9 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_02bb0298:
            uVar6 = 0;
LAB_02bb029c:
            uVar7 = FUN_02ba4180(uVar6);
            if (0x16 < uVar7) {
              uVar7 = 0;
            }
            uVar8 = (undefined2)uVar7;
          }
          else {
            if ((DAT_05642f98 & 1) == 0) {
              DAT_05642f9c = 0xffffffff;
              DAT_05642f98 = 1;
              DAT_05642fa4 = 0xffffffff;
              DAT_05642fa0 = 0xffffffff;
              uVar10 = 0xffffffff;
LAB_02bb0290:
              if (puVar1 == puVar9) goto LAB_02bb0298;
              do {
                if (uVar10 != 0xffffffff) goto LAB_02bb0390;
                lVar2 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar9)) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar1 + (lVar2 - (long)puVar9);
                if (lVar2 == 0) goto LAB_02bb0390;
                uVar10 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar9));
                DAT_05642f9c = 0xfffffffe;
                if (uVar10 == 0) goto LAB_02bb0390;
                puVar12 = (uint *)(lVar2 + 4);
                while (puVar12[-1] != 0xa988063c) {
                  puVar12 = puVar12 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_02bb0390;
                }
                uVar10 = (ulong)*puVar12;
                uVar3 = 0;
                if (*puVar12 != 0xffffffff) {
                  uVar3 = uVar10;
                }
                DAT_05642f9c = (uint)uVar3;
              } while ((int)DAT_05642f9c < 0);
              puVar11 = (undefined4 *)((long)puVar1 + uVar3);
              if (puVar11 != (undefined4 *)0x0) goto LAB_02bb0260;
LAB_02bb0390:
              uVar6 = 0;
              if (puVar1 != puVar9) goto LAB_02bb039c;
              goto LAB_02bb029c;
            }
            uVar10 = (ulong)DAT_05642f9c;
            if ((int)DAT_05642f9c < 0) goto LAB_02bb0290;
            puVar11 = (undefined4 *)((long)puVar1 + uVar10);
            if (puVar11 == (undefined4 *)0x0) goto LAB_02bb0390;
LAB_02bb0260:
            uVar6 = *puVar11;
            if (puVar1 == puVar9) goto LAB_02bb029c;
LAB_02bb039c:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar9)) == '\0') goto LAB_02bb029c;
            uVar7 = FUN_02ba3c90();
            if (0x16 < uVar7) {
              uVar7 = 0;
            }
            uVar8 = (undefined2)uVar7;
          }
          puVar9 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar9 != (uint *)0x0)) &&
             ((*puVar9 != 0 && ((uVar7 = puVar9[1], uVar7 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
             )) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar2 != 0) {
              uVar4 = 0;
              if ((ulong)uVar7 != 0) {
                uVar4 = (uint)((ulong)((long)puVar1 - lVar2) / (ulong)uVar7);
              }
              if (*puVar9 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if (uVar4 < DAT_05642fb8) {
                *(undefined2 *)(DAT_05642fc0 + (long)(int)uVar4 * 2) = uVar8;
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar5);
  }
  return;
}

