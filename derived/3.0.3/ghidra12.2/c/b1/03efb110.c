
bool FUN_03efb110(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float __x;
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
  
  fVar9 = param_4[1];
  fVar12 = param_4[2];
  fVar10 = param_5[1];
  fVar13 = param_5[2];
  fVar8 = *param_4;
  fVar11 = *param_5;
  fVar6 = fVar10 * fVar9 + fVar8 * fVar11 + fVar12 * fVar13 + 1.0;
  if (fVar6 <= 1.1920929e-06) {
    bVar1 = false;
    bVar2 = true;
    if (-1.1920929e-06 <= fVar10) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar10)) {
        bVar1 = fVar10 == 1.1920929e-06;
        bVar2 = 1.1920929e-06 <= fVar10;
      }
    }
    if (((bVar2 && !bVar1) &&
        (fVar8 = (fVar11 * fVar11) / (fVar10 * fVar10), fVar8 = fVar8 * (1.0 / (fVar8 + 1.0)),
        fVar8 < 0.0)) && (NAN(SQRT(fVar8)))) {
      sqrtf(fVar8);
    }
    fVar8 = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    if (param_2 == (float *)0x0) goto code_r0x03efb2d4;
  }
  else {
    fVar5 = SQRT(fVar6 + fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6 + fVar6);
    }
    fVar7 = param_5[1] * param_4[1] + *param_4 * *param_5 + param_4[2] * param_5[2] + 1.0;
    fVar4 = atan2f(-(param_7[2] * param_4[2]) - (param_4[1] * param_7[1] + *param_4 * *param_7),
                   fVar7);
    *param_1 = fVar4 + fVar4;
    fVar4 = atan2f(param_6[1] * param_4[1] + *param_4 * *param_6 + param_4[2] * param_6[2],fVar7);
    param_1[1] = fVar4 + fVar4;
    if (param_2 == (float *)0x0) goto code_r0x03efb2d4;
    fVar7 = fVar5 * 0.5;
    fVar5 = 1.0 / fVar5;
    fVar4 = (-(fVar13 * fVar9) + fVar12 * fVar10) * fVar5;
    fVar12 = (-(fVar11 * fVar12) + fVar8 * fVar13) * fVar5;
    fVar5 = (-(fVar10 * fVar8) + fVar9 * fVar11) * fVar5;
    fVar8 = fVar4 * fVar4 + fVar7 * fVar7 + fVar12 * fVar12 + fVar5 * fVar5;
    if (1.1920929e-07 < fVar8) {
      fVar8 = 1.0 / fVar8;
      fVar7 = fVar7 * fVar8;
      fVar4 = fVar4 * fVar8;
      fVar12 = fVar12 * fVar8;
      fVar5 = fVar5 * fVar8;
    }
    fVar4 = -fVar4;
    fVar5 = -fVar5;
    fVar12 = -fVar12;
    fVar9 = *param_3;
    fVar10 = param_3[1];
    fVar14 = param_3[2];
    fVar13 = param_3[3];
    fVar11 = ((-(fVar4 * fVar9) + fVar13 * fVar7) - fVar10 * fVar12) - fVar14 * fVar5;
    fVar8 = 1.0;
    if (fVar11 <= 1.0) {
      fVar8 = fVar11;
    }
    __x = -1.0;
    if (-1.0 <= fVar11) {
      __x = fVar8;
    }
    fVar11 = acosf(__x);
    fVar11 = fVar11 + fVar11;
    *param_2 = fVar11;
    if (param_5[1] * (-(fVar4 * fVar14) + fVar10 * fVar7 + fVar13 * fVar12 + fVar9 * fVar5) +
        ((fVar4 * fVar13 + fVar9 * fVar7 + fVar14 * fVar12) - fVar10 * fVar5) * *param_5 +
        (((fVar4 * fVar10 + fVar14 * fVar7) - fVar9 * fVar12) + fVar13 * fVar5) * param_5[2] < 0.0)
    {
      fVar11 = -fVar11;
      *param_2 = fVar11;
    }
    fVar9 = fVar11 + 6.2831855;
    if (-3.1415927 <= fVar11) {
      fVar9 = fVar11;
    }
    fVar8 = fVar9 + -6.2831855;
    if (fVar9 <= 3.1415927) {
      fVar8 = fVar9;
    }
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (-3.1415927 <= fVar11) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar9)) {
        bVar1 = fVar9 < 3.1415927;
        bVar2 = fVar9 == 3.1415927;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) goto code_r0x03efb2d4;
  }
  *param_2 = fVar8;
code_r0x03efb2d4:
  return 1.1920929e-06 < fVar6;
}

