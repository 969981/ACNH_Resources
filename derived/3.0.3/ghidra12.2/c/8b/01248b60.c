
void FUN_01248b60(uint *param_1)

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
LAB_01248c5c:
            uVar6 = 0;
LAB_01248c60:
            uVar7 = FUN_01246a90(uVar6);
            if (0x2e < uVar7) {
              uVar7 = 0;
            }
            uVar8 = (undefined2)uVar7;
          }
          else {
            if ((DAT_05150d18 & 1) == 0) {
              DAT_05150d1c = 0xffffffffffffffff;
              DAT_05150d24 = 0xffffffffffffffff;
              DAT_05150d18 = 1;
              uVar10 = 0xffffffff;
              DAT_05150d2c = 0xffffffffffffffff;
              DAT_05150d34 = 0xffffffffffffffff;
LAB_01248c54:
              if (puVar1 == puVar9) goto LAB_01248c5c;
              do {
                if (uVar10 != 0xffffffff) goto LAB_01248d64;
                lVar2 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar9)) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar1 + (lVar2 - (long)puVar9);
                if (lVar2 == 0) goto LAB_01248d64;
                uVar10 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar9));
                DAT_05150d1c = CONCAT44(DAT_05150d1c._4_4_,0xfffffffe);
                if (uVar10 == 0) goto LAB_01248d64;
                puVar12 = (uint *)(lVar2 + 4);
                while (puVar12[-1] != 0x9b7aa0a0) {
                  puVar12 = puVar12 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_01248d64;
                }
                uVar10 = (ulong)*puVar12;
                uVar3 = 0;
                if (*puVar12 != 0xffffffff) {
                  uVar3 = uVar10;
                }
                DAT_05150d1c = CONCAT44(DAT_05150d1c._4_4_,(int)uVar3);
              } while ((int)uVar3 < 0);
              puVar11 = (undefined4 *)((long)puVar1 + uVar3);
              if (puVar11 != (undefined4 *)0x0) goto LAB_01248c30;
LAB_01248d64:
              uVar6 = 0;
              if (puVar1 != puVar9) goto LAB_01248d70;
              goto LAB_01248c60;
            }
            uVar10 = DAT_05150d1c & 0xffffffff;
            if ((int)DAT_05150d1c < 0) goto LAB_01248c54;
            puVar11 = (undefined4 *)((long)puVar1 + uVar10);
            if (puVar11 == (undefined4 *)0x0) goto LAB_01248d64;
LAB_01248c30:
            uVar6 = *puVar11;
            if (puVar1 == puVar9) goto LAB_01248c60;
LAB_01248d70:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar9)) == '\0') goto LAB_01248c60;
            uVar7 = FUN_01246570();
            if (0x2e < uVar7) {
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
              if (uVar4 < DAT_05150d50) {
                *(undefined2 *)(DAT_05150d58 + (long)(int)uVar4 * 2) = uVar8;
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

