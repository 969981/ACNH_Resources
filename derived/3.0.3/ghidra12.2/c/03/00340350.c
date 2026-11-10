
undefined8 * FUN_00340350(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  
  if (param_1 != param_2) {
    uVar7 = (long)param_2 - (long)param_1;
    lVar8 = (long)uVar7 >> 4;
    if ((0x10 < (long)uVar7) && (0x1f < uVar7)) {
      uVar11 = lVar8 - 2U >> 1;
      uVar13 = uVar11;
      do {
        if ((long)uVar13 <= (long)uVar11) {
          uVar3 = uVar13 << 1 | 1;
          uVar2 = uVar13 * 2 + 2;
          puVar9 = param_1 + uVar3 * 2;
          uVar17 = uVar3;
          if ((long)uVar2 < lVar8) {
            uVar17 = uVar2;
            if (*(uint *)(puVar9 + 1) <= *(uint *)(puVar9 + 3)) {
              uVar17 = uVar3;
            }
            puVar9 = puVar9 + (ulong)(*(uint *)(puVar9 + 3) < *(uint *)(puVar9 + 1)) * 2;
          }
          puVar10 = param_1 + uVar13 * 2;
          uVar14 = *(uint *)(puVar10 + 1);
          if (*(uint *)(puVar9 + 1) <= uVar14) {
            uVar12 = *puVar10;
            uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
            do {
              puVar15 = puVar9;
              uVar6 = puVar15[1];
              *puVar10 = *puVar15;
              puVar10[1] = uVar6;
              if ((long)uVar11 < (long)uVar17) break;
              uVar3 = uVar17 << 1 | 1;
              uVar2 = uVar17 * 2 + 2;
              puVar9 = param_1 + uVar3 * 2;
              uVar17 = uVar3;
              if ((long)uVar2 < lVar8) {
                uVar17 = uVar2;
                if (*(uint *)(puVar9 + 1) <= *(uint *)(puVar9 + 3)) {
                  uVar17 = uVar3;
                }
                puVar9 = puVar9 + (ulong)(*(uint *)(puVar9 + 3) < *(uint *)(puVar9 + 1)) * 2;
              }
              puVar10 = puVar15;
            } while (*(uint *)(puVar9 + 1) <= uVar14);
            *puVar15 = uVar12;
            *(uint *)(puVar15 + 1) = uVar14;
            *(undefined4 *)((long)puVar15 + 0xc) = uVar5;
          }
        }
        bVar1 = 0 < (long)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar1);
    }
    puVar9 = param_2;
    if (param_2 != param_3) {
      if ((long)uVar7 < 0x20) {
        do {
          if (*(uint *)(param_1 + 1) < *(uint *)(puVar9 + 1)) {
            uVar12 = *puVar9;
            uVar6 = puVar9[1];
            uVar4 = param_1[1];
            *puVar9 = *param_1;
            puVar9[1] = uVar4;
            *param_1 = uVar12;
            param_1[1] = uVar6;
          }
          puVar9 = puVar9 + 2;
        } while (puVar9 != param_3);
      }
      else {
        puVar9 = param_1 + 2;
        puVar10 = param_2;
        do {
          if (*(uint *)(param_1 + 1) < *(uint *)(puVar10 + 1)) {
            uVar12 = *puVar10;
            uVar6 = puVar10[1];
            uVar4 = param_1[1];
            *puVar10 = *param_1;
            puVar10[1] = uVar4;
            *param_1 = uVar12;
            param_1[1] = uVar6;
            if (uVar7 == 0x20) {
              uVar13 = 1;
              uVar14 = *(uint *)(param_1 + 1);
              puVar15 = puVar9;
              if (*(uint *)(param_1 + 3) <= uVar14) goto LAB_00340468;
            }
            else {
              uVar13 = 1;
              if (*(uint *)(param_1 + 5) < *(uint *)(param_1 + 3)) {
                uVar13 = 2;
              }
              uVar14 = *(uint *)(param_1 + 1);
              puVar15 = puVar9 + (ulong)(*(uint *)(param_1 + 5) < *(uint *)(param_1 + 3)) * 2;
              if (*(uint *)(puVar9 + (ulong)(*(uint *)(param_1 + 5) < *(uint *)(param_1 + 3)) * 2 +
                           1) <= uVar14) {
LAB_00340468:
                uVar12 = *param_1;
                uVar5 = *(undefined4 *)((long)param_1 + 0xc);
                puVar18 = param_1;
                do {
                  puVar16 = puVar15;
                  uVar6 = puVar16[1];
                  *puVar18 = *puVar16;
                  puVar18[1] = uVar6;
                  if ((long)(lVar8 - 2U >> 1) < (long)uVar13) break;
                  uVar2 = uVar13 << 1 | 1;
                  uVar11 = uVar13 * 2 + 2;
                  puVar15 = param_1 + uVar2 * 2;
                  uVar13 = uVar2;
                  if ((long)uVar11 < lVar8) {
                    uVar13 = uVar11;
                    if (*(uint *)(puVar15 + 1) <= *(uint *)(puVar15 + 3)) {
                      uVar13 = uVar2;
                    }
                    puVar15 = puVar15 + (ulong)(*(uint *)(puVar15 + 3) < *(uint *)(puVar15 + 1)) * 2
                    ;
                  }
                  puVar18 = puVar16;
                } while (*(uint *)(puVar15 + 1) <= uVar14);
                *puVar16 = uVar12;
                *(uint *)(puVar16 + 1) = uVar14;
                *(undefined4 *)((long)puVar16 + 0xc) = uVar5;
              }
            }
          }
          puVar10 = puVar10 + 2;
        } while (puVar10 != param_3);
      }
      puVar9 = param_3;
    }
    param_3 = puVar9;
    if (0x10 < (long)uVar7) {
      uVar7 = uVar7 >> 4;
      do {
        uVar12 = *param_1;
        uVar6 = param_1[1];
        uVar13 = 0;
        puVar9 = param_1;
        do {
          puVar10 = puVar9 + (uVar13 + 1) * 2;
          uVar2 = uVar13 << 1 | 1;
          uVar11 = uVar13 * 2 + 2;
          uVar13 = uVar2;
          if ((long)uVar11 < (long)uVar7) {
            uVar13 = uVar11;
            if (*(uint *)(puVar10 + 1) <= *(uint *)(puVar10 + 3)) {
              uVar13 = uVar2;
            }
            puVar10 = puVar10 + (ulong)(*(uint *)(puVar10 + 3) < *(uint *)(puVar10 + 1)) * 2;
          }
          uVar4 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar4;
          puVar9 = puVar10;
        } while ((long)uVar13 <= (long)(uVar7 - 2 >> 1));
        puVar9 = param_2 + -2;
        if (puVar10 == puVar9) {
          *puVar10 = uVar12;
          puVar10[1] = uVar6;
        }
        else {
          uVar4 = param_2[-1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar4;
          *puVar9 = uVar12;
          param_2[-1] = uVar6;
          uVar13 = (long)puVar10 + (0x10 - (long)param_1);
          if (0x10 < (long)uVar13) {
            uVar13 = (uVar13 >> 4) - 2 >> 1;
            uVar14 = *(uint *)(puVar10 + 1);
            if (uVar14 < *(uint *)(param_1 + uVar13 * 2 + 1)) {
              uVar12 = *puVar10;
              uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
              do {
                puVar15 = param_1 + uVar13 * 2;
                uVar6 = puVar15[1];
                *puVar10 = *puVar15;
                puVar10[1] = uVar6;
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1 >> 1;
                puVar10 = puVar15;
              } while (uVar14 < *(uint *)(param_1 + uVar13 * 2 + 1));
              *puVar15 = uVar12;
              *(uint *)(puVar15 + 1) = uVar14;
              *(undefined4 *)((long)puVar15 + 0xc) = uVar5;
            }
          }
        }
        bVar1 = 2 < (long)uVar7;
        param_2 = puVar9;
        uVar7 = uVar7 - 1;
      } while (bVar1);
    }
  }
  return param_3;
}

