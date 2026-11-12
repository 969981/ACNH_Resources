
undefined8 FUN_006edf28(long param_1,long param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = fVar3 + *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_2 + 0xc);
  if ((fVar4 < fVar5) || (fVar8 = fVar5 + *(float *)(param_2 + 0x18), fVar8 < fVar3)) {
    return 0;
  }
  fVar11 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_2 + 8);
  fVar7 = fVar11 - fVar6;
  fVar9 = *(float *)(param_2 + 0x10);
  fVar10 = *(float *)(param_1 + 0x10) - fVar9;
  fVar12 = SQRT(fVar10 * fVar10 + fVar7 * fVar7);
  if (*(float *)(param_1 + 0x14) + *(float *)(param_2 + 0x14) < fVar12) {
    return 0;
  }
  fVar14 = fVar6 - fVar11;
  fVar13 = fVar9 - *(float *)(param_1 + 0x10);
  fVar15 = SQRT(fVar14 * fVar14 + 0.0 + fVar13 * fVar13);
  if (fVar15 <= 0.0) {
    bVar1 = true;
  }
  else {
    fVar15 = 1.0 / fVar15;
    fVar14 = fVar14 * fVar15;
    fVar13 = fVar13 * fVar15;
    bVar1 = fVar15 * 0.0 == 0.0;
  }
  if (((fVar14 != 0.0) || (!bVar1)) || (fVar13 != 0.0)) {
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-07 <= fVar12) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar12)) {
        bVar1 = fVar12 == 1.1920929e-07;
        bVar2 = 1.1920929e-07 <= fVar12;
      }
    }
    if (bVar2 && !bVar1) {
      if (param_3 == (float *)0x0) {
        return 1;
      }
      fVar12 = *(float *)(param_2 + 0x14) / fVar12;
      fVar11 = 1.0;
      if (fVar12 <= 1.0) {
        fVar11 = fVar12;
      }
      if (fVar5 <= fVar3) {
        fVar5 = fVar3;
      }
      if (fVar4 <= fVar8) {
        fVar8 = fVar4;
      }
      fVar5 = (fVar5 + fVar8) * 0.5;
      *param_3 = fVar6 + fVar11 * fVar7;
      param_3[1] = fVar5 + fVar11 * (fVar5 - fVar5);
      param_3[2] = fVar9 + fVar11 * fVar10;
      return 1;
    }
  }
  if (param_3 == (float *)0x0) {
    return 1;
  }
  *param_3 = fVar11;
  fVar5 = *(float *)(param_1 + 0xc);
  param_3[1] = fVar5;
  param_3[2] = *(float *)(param_1 + 0x10);
  param_3[1] = fVar5 + *(float *)(param_1 + 0x18) * 0.5;
  return 1;
}

