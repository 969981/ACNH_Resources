
void FUN_029d5b50(uint *param_1,uint param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if (*param_1 <= param_2 || (int)param_2 < 1) {
    return;
  }
  piVar7 = *(int **)(param_1 + 2);
  uVar8 = param_2 + 1;
  uVar10 = (ulong)(uVar8 >> 1);
  uVar11 = uVar10;
  do {
    uVar18 = (int)uVar10 * 2;
    piVar2 = piVar7 + (uVar11 - 1 & 0xffffffff) * 4;
    iVar9 = *piVar2;
    iVar4 = piVar2[1];
    uVar13 = *(undefined8 *)(piVar2 + 2);
    if ((int)uVar8 < (int)uVar18) {
      uVar14 = (uint)uVar11;
    }
    else {
      uVar16 = uVar11 & 0xffffffff;
      do {
        if ((int)param_2 < (int)uVar18) {
          uVar15 = uVar18;
        }
        else {
          uVar15 = uVar18 | (piVar7 + (long)(int)uVar18 * 4)[-4] < piVar7[(long)(int)uVar18 * 4];
        }
        lVar5 = (long)(int)uVar15 + -1;
        uVar14 = (uint)uVar16;
        if (piVar7[lVar5 * 4] <= iVar9) break;
        iVar12 = piVar7[lVar5 * 4 + 1];
        uVar6 = *(undefined8 *)(piVar7 + lVar5 * 4 + 2);
        piVar7[(long)(int)uVar14 * 4 + -4] = piVar7[lVar5 * 4];
        piVar7[(long)(int)uVar14 * 4 + -3] = iVar12;
        uVar18 = uVar15 * 2;
        *(undefined8 *)(piVar7 + (long)(int)uVar14 * 4 + -2) = uVar6;
        uVar16 = (ulong)uVar15;
        uVar14 = uVar15;
      } while ((int)uVar18 <= (int)uVar8);
    }
    uVar10 = (ulong)((int)uVar10 - 1);
    piVar7[(long)(int)uVar14 * 4 + -4] = iVar9;
    piVar7[(long)(int)uVar14 * 4 + -3] = iVar4;
    *(undefined8 *)(piVar7 + (long)(int)uVar14 * 4 + -2) = uVar13;
    bVar1 = 1 < (long)uVar11;
    uVar11 = uVar11 - 1;
  } while (bVar1);
  iVar4 = piVar7[1];
  piVar2 = piVar7 + (ulong)param_2 * 4;
  iVar9 = *piVar2;
  iVar12 = piVar2[1];
  uVar13 = *(undefined8 *)(piVar2 + 2);
  *piVar2 = *piVar7;
  piVar2[1] = iVar4;
  *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar7 + 2);
  if (2 < (int)uVar8) {
    do {
      uVar18 = 2;
      uVar14 = 1;
      do {
        if ((int)uVar18 < (int)param_2) {
          uVar15 = uVar18 | (piVar7 + (long)(int)uVar18 * 4)[-4] < piVar7[(long)(int)uVar18 * 4];
        }
        else {
          uVar15 = uVar18;
        }
        lVar17 = (long)(int)uVar15 + -1;
        lVar5 = (long)(int)uVar14 + -1;
        if (piVar7[lVar17 * 4] <= iVar9) goto LAB_029d5c64;
        iVar4 = piVar7[lVar17 * 4 + 1];
        uVar6 = *(undefined8 *)(piVar7 + lVar17 * 4 + 2);
        piVar2 = piVar7 + ((long)(int)uVar14 + -1) * 4;
        *piVar2 = piVar7[lVar17 * 4];
        piVar2[1] = iVar4;
        uVar18 = uVar15 * 2;
        *(undefined8 *)(piVar2 + 2) = uVar6;
        uVar14 = uVar15;
      } while ((int)uVar18 < (int)uVar8);
      lVar5 = lVar17;
LAB_029d5c64:
      piVar3 = piVar7 + lVar5 * 4;
      piVar2 = piVar7 + (ulong)(param_2 - 1) * 4;
      *piVar3 = iVar9;
      piVar3[1] = iVar12;
      *(undefined8 *)(piVar3 + 2) = uVar13;
      iVar4 = piVar7[1];
      uVar13 = *(undefined8 *)(piVar2 + 2);
      iVar9 = *piVar2;
      iVar12 = piVar2[1];
      *piVar2 = *piVar7;
      piVar2[1] = iVar4;
      *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(piVar7 + 2);
      bVar1 = 2 < (int)param_2;
      uVar8 = param_2;
      param_2 = param_2 - 1;
    } while (bVar1);
  }
  *piVar7 = iVar9;
  piVar7[1] = iVar12;
  *(undefined8 *)(piVar7 + 2) = uVar13;
  return;
}

