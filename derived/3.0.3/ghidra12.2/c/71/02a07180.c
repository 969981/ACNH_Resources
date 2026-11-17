
void FUN_02a07180(float param_1,long param_2,float *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,int param_7)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (((param_4 != 0) && (*(long *)(param_2 + 0x1690) == param_4)) &&
     (*(char *)(param_2 + 0x1688) != '\0')) {
    uVar4 = *(undefined8 *)(param_2 + 0x1680);
    uVar5 = *(undefined8 *)(param_2 + 0x1678);
    *(undefined8 *)param_3 = *(undefined8 *)(param_2 + 0x1670);
    *(undefined8 *)(param_3 + 2) = uVar5;
    *(undefined8 *)(param_3 + 4) = uVar4;
    return;
  }
  if (DAT_05aebb78 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(DAT_05aebb78 + 0x20);
  }
  lVar6 = *(long *)(lVar7 + 0x28);
  fVar10 = 0.0;
  if (lVar6 == lVar7 + 0x20) {
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x18);
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    if (0 < iVar3) {
      lVar8 = lVar6 + -0x1b8;
      iVar9 = 1;
      if (0.0 <= param_1) {
        do {
          fVar15 = param_1;
          if (0.0 <= *(float *)(lVar8 + (long)param_7 * 4 + 0x54)) {
            fVar15 = *(float *)(lVar8 + (long)param_7 * 4 + 0x54) * param_1;
          }
          pfVar2 = (float *)(lVar8 + 0x50);
          fVar16 = 0.0;
          if (0.0 <= fVar15) {
            fVar16 = fVar15;
          }
          lVar6 = *(long *)(lVar6 + 8);
          lVar8 = lVar6 + -0x1b8;
          fVar15 = (*pfVar2 * fVar16) / 255.0;
          fVar16 = *(float *)(param_2 + 0x14c0) * fVar15;
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          fVar16 = *(float *)(param_2 + 0x14c4) * fVar15;
          if (fVar10 <= fVar16) {
            fVar10 = fVar16;
          }
          fVar16 = *(float *)(param_2 + 0x14c8) * fVar15;
          if (fVar11 <= fVar16) {
            fVar11 = fVar16;
          }
          fVar16 = *(float *)(param_2 + 0x14cc) * fVar15;
          fVar15 = *(float *)(param_2 + 0x14d0) * fVar15;
          if (fVar12 <= fVar16) {
            fVar12 = fVar16;
          }
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
        } while ((lVar8 != lVar7 + -0x198) && (bVar1 = iVar9 < iVar3, iVar9 = iVar9 + 1, bVar1));
      }
      else {
        do {
          fVar15 = param_1;
          if (0.0 <= *(float *)(lVar8 + (long)param_7 * 4 + 0x54)) {
            fVar15 = *(float *)(lVar8 + (long)param_7 * 4 + 0x54);
          }
          pfVar2 = (float *)(lVar8 + 0x50);
          fVar16 = 0.0;
          if (0.0 <= fVar15) {
            fVar16 = fVar15;
          }
          lVar6 = *(long *)(lVar6 + 8);
          lVar8 = lVar6 + -0x1b8;
          fVar15 = (*pfVar2 * fVar16) / 255.0;
          fVar16 = *(float *)(param_2 + 0x14c0) * fVar15;
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          fVar16 = *(float *)(param_2 + 0x14c4) * fVar15;
          if (fVar10 <= fVar16) {
            fVar10 = fVar16;
          }
          fVar16 = *(float *)(param_2 + 0x14c8) * fVar15;
          if (fVar11 <= fVar16) {
            fVar11 = fVar16;
          }
          fVar16 = *(float *)(param_2 + 0x14cc) * fVar15;
          fVar15 = *(float *)(param_2 + 0x14d0) * fVar15;
          if (fVar12 <= fVar16) {
            fVar12 = fVar16;
          }
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
        } while ((lVar8 != lVar7 + -0x198) && (bVar1 = iVar9 < iVar3, iVar9 = iVar9 + 1, bVar1));
      }
    }
  }
  if (*(char *)(param_2 + 0x1668) != '\0') {
    fVar15 = *(float *)(*(long *)(*(long *)(*(long *)(DAT_05aebb78 + 0x38) + 0x38) +
                                  (long)param_7 * 8 + 0x10) + (long)*(int *)(param_2 + 0x15e4) * 4);
    fVar16 = fVar13 + fVar12 + fVar11 + fVar10 + fVar14 + 0.0;
    if (fVar15 < fVar16) {
      fVar15 = fVar15 / fVar16;
      fVar14 = fVar14 * fVar15;
      fVar10 = fVar10 * fVar15;
      fVar11 = fVar11 * fVar15;
      fVar12 = fVar12 * fVar15;
      fVar13 = fVar13 * fVar15;
    }
  }
  *(float *)(param_2 + 0x1670) = fVar14;
  *(float *)(param_2 + 0x1674) = fVar10;
  *(float *)(param_2 + 0x1678) = fVar11;
  *(float *)(param_2 + 0x167c) = fVar12;
  *(float *)(param_2 + 0x1680) = fVar13;
  *(undefined4 *)(param_2 + 0x1684) = 0;
  *(undefined1 *)(param_2 + 0x1688) = 1;
  *(long *)(param_2 + 0x1690) = param_4;
  *param_3 = fVar14;
  param_3[1] = fVar10;
  param_3[2] = fVar11;
  param_3[3] = fVar12;
  param_3[4] = fVar13;
  param_3[5] = 0.0;
  return;
}

