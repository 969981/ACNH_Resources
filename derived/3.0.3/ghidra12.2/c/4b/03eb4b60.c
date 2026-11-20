
float FUN_03eb4b60(float param_1,float param_2,float param_3,float *param_4,float *param_5)

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
  
  fVar5 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar6 = *param_5;
  fVar7 = param_5[1];
  fVar8 = param_5[2];
  bVar1 = false;
  if ((fVar5 == fVar6) && (bVar1 = false, !NAN(fVar3) && !NAN(fVar7))) {
    bVar1 = fVar3 == fVar7;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(fVar4) && !NAN(fVar8))) {
    bVar2 = fVar4 == fVar8;
  }
  if (!bVar2) {
    fVar10 = fVar5 - fVar6;
    fVar7 = fVar3 - fVar7;
    fVar8 = fVar4 - fVar8;
    fVar9 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar8 * fVar8);
    if (param_3 <= fVar9) {
      fVar9 = fVar9 * param_1;
      bVar1 = false;
      bVar2 = true;
      if (-1.1920929e-07 <= fVar9) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar9)) {
          bVar1 = fVar9 == 1.1920929e-07;
          bVar2 = 1.1920929e-07 <= fVar9;
        }
      }
      if (!bVar2 || bVar1) {
        *param_4 = fVar6;
        param_4[1] = param_5[1];
        param_4[2] = param_5[2];
        return 0.0;
      }
      fVar10 = fVar10 * param_1;
      fVar7 = fVar7 * param_1;
      fVar8 = fVar8 * param_1;
      if ((param_2 < fVar9) || (param_2 = param_3, fVar9 < param_3)) {
        param_2 = param_2 / fVar9;
        fVar10 = fVar10 * param_2;
        fVar7 = fVar7 * param_2;
        fVar8 = fVar8 * param_2;
      }
      fVar5 = fVar5 - fVar10;
      fVar3 = fVar3 - fVar7;
      *param_4 = fVar5;
      param_4[1] = fVar3;
      fVar4 = fVar4 - fVar8;
    }
    else {
      *param_4 = fVar6;
      fVar3 = param_5[1];
      param_4[1] = fVar3;
      fVar4 = param_5[2];
      fVar5 = fVar6;
    }
    param_4[2] = fVar4;
    fVar8 = param_5[2];
    fVar6 = *param_5;
    fVar7 = param_5[1];
  }
  return SQRT((fVar3 - fVar7) * (fVar3 - fVar7) + (fVar5 - fVar6) * (fVar5 - fVar6) +
              (fVar4 - fVar8) * (fVar4 - fVar8));
}

