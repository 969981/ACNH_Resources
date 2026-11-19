
void FUN_03858260(long param_1,undefined4 *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar4;
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar4;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    *(undefined4 *)puVar4 = *param_2;
    fVar13 = (float)param_2[1] + -6.2831855;
    fVar14 = (float)param_2[2] + -6.2831855;
    bVar2 = true;
    bVar3 = false;
    if (fVar13 <= 1.1920929e-07) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar13)) {
        bVar2 = fVar13 < -1.1920929e-07;
        bVar3 = false;
      }
    }
    fVar13 = 0.0;
    if (bVar2 != bVar3) {
      fVar13 = (float)param_2[1] * 0.017453292;
    }
    bVar2 = true;
    bVar3 = false;
    if (fVar14 <= 1.1920929e-07) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar14)) {
        bVar2 = fVar14 < -1.1920929e-07;
        bVar3 = false;
      }
    }
    fVar14 = 0.0;
    if (bVar2 != bVar3) {
      fVar14 = (float)param_2[2] * 0.017453292;
    }
    *(float *)((long)puVar4 + 4) = fVar13;
    *(float *)(puVar4 + 1) = fVar14;
    if (1 < *(int *)(param_1 + 8)) {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar8 = 0;
      uVar6 = *(int *)(param_1 + 8) - 1;
      do {
        if ((int)uVar6 <= (int)uVar8) {
          return;
        }
        piVar9 = *(int **)(lVar5 + (ulong)uVar8 * 8);
        uVar7 = (ulong)uVar8;
        if ((uVar6 - uVar8 & 1) == 0) {
          piVar12 = piVar9;
          uVar10 = uVar7;
        }
        else {
          uVar10 = uVar7 + 1;
          piVar12 = *(int **)(lVar5 + uVar10 * 8);
          if (0 < *piVar9 - *piVar12) {
            *(int **)(lVar5 + uVar10 * 8) = piVar9;
            *(int **)(lVar5 + uVar7 * 8) = piVar12;
            piVar12 = piVar9;
          }
        }
        uVar11 = (ulong)uVar6;
        uVar6 = uVar8;
        if (~uVar7 + uVar11 != 0) {
          puVar4 = (undefined8 *)(lVar5 + 8 + uVar10 * 8);
          do {
            piVar9 = (int *)*puVar4;
            if (*piVar12 - *piVar9 < 1) {
              piVar12 = piVar9;
            }
            else {
              puVar4[-1] = piVar9;
              *puVar4 = piVar12;
              uVar6 = (uint)uVar10;
            }
            piVar9 = (int *)puVar4[1];
            if (*piVar12 - *piVar9 < 1) {
              piVar12 = piVar9;
            }
            else {
              uVar6 = (uint)uVar10 + 1;
              *puVar4 = piVar9;
              puVar4[1] = piVar12;
            }
            uVar10 = uVar10 + 2;
            puVar4 = puVar4 + 2;
          } while (uVar11 != uVar10);
        }
        if ((int)uVar6 <= (int)uVar8) {
          return;
        }
        piVar9 = *(int **)(lVar5 + (ulong)uVar6 * 8);
        uVar10 = (ulong)uVar6;
        uVar8 = uVar6;
        do {
          lVar1 = lVar5 + uVar10 * 8;
          piVar12 = *(int **)(lVar1 + -8);
          if (*piVar9 - *piVar12 < 0) {
            uVar8 = (uint)uVar10;
            *(int **)(lVar1 + -8) = piVar9;
            *(int **)(lVar5 + uVar10 * 8) = piVar12;
          }
          else {
            piVar9 = piVar12;
          }
          uVar10 = uVar10 - 1;
        } while ((long)uVar7 < (long)uVar10);
      } while (uVar8 != uVar6);
    }
  }
  return;
}

