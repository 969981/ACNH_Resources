
int FUN_03858470(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 0) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (((*(char *)(param_1 + 0x28) == '\0') || ((int)uVar1 < 1)) || (iVar2 == -1)) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar7 = puVar6 + (int)uVar1;
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    lVar9 = 0;
    do {
      piVar8 = *(int **)((long)puVar6 + lVar9);
      if (*piVar8 == iVar2) {
        fVar12 = *(float *)(param_1 + 0x2c) * 0.5;
        fVar11 = (float)piVar8[1] - fVar12;
        fVar12 = fVar12 + (float)piVar8[2];
        fVar14 = fVar11 * 0.15915494;
        fVar13 = fVar12 * 0.15915494;
        uVar10 = 0;
        if (fVar14 != (float)(int)fVar14) {
          uVar10 = (uint)(fVar14 < 0.0);
        }
        fVar11 = fVar11 + (float)(int)((int)fVar14 - uVar10) * -6.2831855;
        bVar3 = false;
        bVar4 = false;
        if (fVar11 < 6.2831855) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar11)) {
            bVar3 = fVar11 == 0.0;
            bVar4 = 0.0 <= fVar11;
          }
        }
        if (!bVar4 || bVar3) {
          fVar11 = 0.0;
        }
        uVar10 = 0;
        if (fVar13 != (float)(int)fVar13) {
          uVar10 = (uint)(fVar13 < 0.0);
        }
        fVar12 = fVar12 + (float)(int)((int)fVar13 - uVar10) * -6.2831855;
        fVar13 = *param_2;
        bVar3 = false;
        bVar4 = false;
        if (fVar12 < 6.2831855) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar12)) {
            bVar3 = fVar12 == 0.0;
            bVar4 = 0.0 <= fVar12;
          }
        }
        if (!bVar4 || bVar3) {
          fVar12 = 0.0;
        }
        if (fVar11 <= fVar12) {
          bVar3 = false;
          if ((fVar11 <= fVar13) && (bVar3 = false, !NAN(fVar13) && !NAN(fVar12))) {
            bVar3 = fVar13 < fVar12;
          }
        }
        else {
          bVar3 = true;
          if ((fVar13 < fVar11) && (bVar3 = false, !NAN(fVar13) && !NAN(fVar12))) {
            bVar3 = fVar13 < fVar12;
          }
        }
        if ((bVar3) && ((float)piVar8[3] < *param_3)) {
          return iVar2;
        }
        break;
      }
      lVar9 = lVar9 + 8;
    } while ((ulong)uVar1 * 8 != lVar9);
    puVar7 = puVar6 + uVar1;
  }
  fVar11 = *param_2;
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar5 = -1;
    do {
      piVar8 = (int *)*puVar6;
      fVar13 = (float)piVar8[1];
      fVar12 = (float)piVar8[2];
      if (fVar13 <= fVar12) {
        bVar3 = false;
        if ((fVar13 <= fVar11) && (bVar3 = false, !NAN(fVar11) && !NAN(fVar12))) {
          bVar3 = fVar11 < fVar12;
        }
        if (bVar3) goto LAB_03858644;
      }
      else {
        bVar3 = true;
        if ((fVar11 < fVar13) && (bVar3 = false, !NAN(fVar11) && !NAN(fVar12))) {
          bVar3 = fVar11 < fVar12;
        }
        if (bVar3) {
LAB_03858644:
          if ((float)piVar8[3] < *param_3) {
            iVar5 = *piVar8;
            break;
          }
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar7);
  }
  else {
    do {
      piVar8 = (int *)*puVar6;
      iVar5 = *piVar8;
      if (iVar2 != iVar5) {
        fVar13 = (float)piVar8[1];
        fVar12 = (float)piVar8[2];
        if (fVar13 <= fVar12) {
          bVar3 = false;
          if ((fVar13 <= fVar11) && (bVar3 = false, !NAN(fVar11) && !NAN(fVar12))) {
            bVar3 = fVar11 < fVar12;
          }
          if (bVar3) goto LAB_038585e0;
        }
        else {
          bVar3 = true;
          if ((fVar11 < fVar13) && (bVar3 = false, !NAN(fVar11) && !NAN(fVar12))) {
            bVar3 = fVar11 < fVar12;
          }
          if (bVar3) {
LAB_038585e0:
            if ((float)piVar8[3] < *param_3) goto LAB_0385869c;
          }
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar7);
    iVar5 = -1;
  }
LAB_0385869c:
  *(int *)(param_1 + 0x30) = iVar5;
  return iVar5;
}

