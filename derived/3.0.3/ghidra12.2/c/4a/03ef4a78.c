
undefined8 FUN_03ef4a78(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = tanf(*param_2 * 0.5);
  fVar5 = tanf(param_2[1] * 0.5);
  fVar6 = -fVar4;
  if (0.0 <= fVar4) {
    fVar6 = fVar4;
  }
  if (fVar6 <= 1e+07) {
    fVar6 = -fVar5;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    if (fVar6 <= 1e+07) {
      fVar10 = param_3[2];
      fVar6 = 2.0 / (fVar5 * fVar5 + fVar4 * fVar4 + 1.0);
      fVar11 = fVar6 + -1.0;
      fVar7 = *param_3;
      fVar9 = param_3[1];
      fVar5 = fVar5 * fVar6;
      fVar6 = fVar6 * -fVar4;
      fVar4 = fVar11 * fVar7 + fVar5 * *param_4 + fVar6 * *param_5;
      fVar8 = fVar11 * fVar9 + fVar5 * param_4[1] + fVar6 * param_5[1];
      fVar6 = fVar11 * fVar10 + fVar5 * param_4[2] + fVar6 * param_5[2];
      goto LAB_03ef4b90;
    }
  }
  fVar7 = *param_3;
  fVar9 = param_3[1];
  fVar8 = -fVar9;
  fVar10 = param_3[2];
  fVar4 = -fVar7;
  fVar6 = -fVar10;
LAB_03ef4b90:
  bVar1 = true;
  if ((!NAN(fVar4)) && (bVar1 = true, !NAN(fVar8))) {
    bVar1 = false;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = true, !NAN(fVar6))) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar3 = 0;
    *param_1 = -fVar7;
    fVar6 = -fVar10;
    param_1[1] = -fVar9;
  }
  else {
    fVar5 = SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar6 * fVar6);
    if (0.0 < fVar5) {
      fVar9 = 1.0 / fVar5;
      fVar4 = fVar4 * fVar9;
      fVar8 = fVar8 * fVar9;
      fVar6 = fVar6 * fVar9;
    }
    if (fVar5 == 0.0) {
      *param_1 = fVar7;
      uVar3 = 0;
      param_1[1] = param_3[1];
      fVar6 = param_3[2];
    }
    else {
      uVar3 = 1;
      *param_1 = fVar4;
      param_1[1] = fVar8;
    }
  }
  param_1[2] = fVar6;
  return uVar3;
}

