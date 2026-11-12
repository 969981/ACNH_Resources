
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0094e208(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
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
  
  fVar15 = param_3[1];
  fVar12 = param_3[2];
  fVar6 = param_2[1];
  fVar14 = param_2[2];
  fVar11 = *param_3;
  fVar8 = *param_2;
  fVar10 = fVar6 * fVar15 + fVar11 * fVar8 + fVar12 * fVar14 + 1.0;
  if (fVar10 <= 1.1920929e-06) {
    bVar4 = false;
    bVar5 = true;
    if (-1.1920929e-06 <= fVar6) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar6)) {
        bVar4 = fVar6 == 1.1920929e-06;
        bVar5 = 1.1920929e-06 <= fVar6;
      }
    }
    if (((bVar5 && !bVar4) &&
        (fVar6 = (fVar8 * fVar8) / (fVar6 * fVar6), fVar6 = fVar6 * (1.0 / (fVar6 + 1.0)),
        fVar6 < 0.0)) && (NAN(SQRT(fVar6)))) {
      sqrtf(fVar6);
    }
    uVar3 = _UNK_04102888;
    uVar2 = _DAT_04102880;
    uVar1 = _DAT_04102200;
    *(undefined8 *)(param_1 + 2) = _UNK_04102208;
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar3;
    *(undefined8 *)(param_1 + 4) = uVar2;
    uVar1 = _DAT_041023d0;
    *(undefined8 *)(param_1 + 10) = _UNK_041023d8;
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  else {
    fVar7 = SQRT(fVar10 + fVar10);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar10 + fVar10);
    }
    fVar9 = 1.0 / fVar7;
    param_1[3] = 0.0;
    param_1[7] = 0.0;
    param_1[0xb] = 0.0;
    fVar7 = fVar7 * 0.5 + fVar7 * 0.5;
    fVar13 = (-(fVar14 * fVar15) + fVar12 * fVar6) * fVar9;
    fVar12 = (-(fVar8 * fVar12) + fVar11 * fVar14) * fVar9;
    fVar9 = (-(fVar6 * fVar11) + fVar15 * fVar8) * fVar9;
    fVar11 = fVar13 + fVar13;
    fVar15 = fVar12 * (fVar12 + fVar12);
    fVar14 = fVar9 * (fVar9 + fVar9);
    fVar6 = fVar9 * (fVar12 + fVar12);
    param_1[8] = fVar9 * fVar11 - fVar12 * fVar7;
    param_1[9] = fVar13 * fVar7 + fVar6;
    fVar8 = 1.0 - fVar13 * fVar11;
    param_1[4] = fVar9 * fVar7 + fVar12 * fVar11;
    param_1[1] = fVar12 * fVar11 - fVar9 * fVar7;
    param_1[2] = fVar12 * fVar7 + fVar9 * fVar11;
    *param_1 = (1.0 - fVar15) - fVar14;
    param_1[5] = fVar8 - fVar14;
    param_1[6] = fVar6 - fVar13 * fVar7;
    param_1[10] = fVar8 - fVar15;
  }
  return 1.1920929e-06 < fVar10;
}

