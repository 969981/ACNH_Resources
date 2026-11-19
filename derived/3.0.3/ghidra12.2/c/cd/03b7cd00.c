
undefined8 FUN_03b7cd00(float *param_1,float *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar7 = *param_3;
  fVar8 = param_3[2];
  fVar6 = *param_2;
  bVar3 = false;
  bVar4 = false;
  if (fVar7 < fVar6) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8) && !NAN(fVar6)) {
      bVar3 = fVar8 == fVar6;
      bVar4 = fVar6 <= fVar8;
    }
  }
  if (bVar4 && !bVar3) {
    fVar9 = param_2[1];
    if ((param_3[1] < fVar9) && (fVar9 < param_3[3])) {
      pfVar5 = param_2 + 3;
      fVar13 = *pfVar5;
      fVar12 = param_2[2];
      if ((fVar12 == 0.0) && (fVar13 == 0.0)) {
        return 0;
      }
      bVar3 = -1.1920929e-07 <= fVar12;
      if (fVar12 <= 1.1920929e-07 && bVar3) {
        *param_1 = fVar6;
      }
      else {
        if ((fVar13 < -1.1920929e-07) || (1.1920929e-07 < fVar13)) {
          fVar10 = param_3[1];
          if (0.0 <= fVar13) {
            fVar10 = param_3[3];
          }
          fVar11 = fVar10 - fVar9;
          fVar12 = fVar6 + fVar12 * (fVar11 / fVar13);
          if (fVar7 <= fVar12) {
            if (fVar8 < fVar12) {
              fVar10 = fVar9 + fVar11 * ((fVar8 - fVar6) / (fVar12 - fVar6));
              fVar12 = fVar8;
            }
          }
          else {
            fVar10 = fVar9 + fVar11 * ((fVar7 - fVar6) / (fVar12 - fVar6));
            fVar12 = fVar7;
          }
          *param_1 = fVar12;
          param_1[1] = fVar10;
          return 1;
        }
        param_1[1] = fVar9;
        pfVar5 = param_2 + 2;
      }
      lVar1 = 0;
      if (fVar12 <= 1.1920929e-07 && bVar3) {
        lVar1 = 4;
      }
      if (0.0 <= *pfVar5) {
        lVar2 = 8;
        if (fVar12 <= 1.1920929e-07 && bVar3) {
          lVar2 = 0xc;
        }
        fVar6 = *(float *)((long)param_3 + lVar2);
      }
      else {
        if (fVar12 <= 1.1920929e-07 && bVar3) {
          param_3 = param_3 + 1;
        }
        fVar6 = *param_3;
      }
      *(float *)((long)param_1 + lVar1) = fVar6;
      return 1;
    }
  }
  bVar3 = true;
  if ((fVar6 != fVar7) && (bVar3 = false, !NAN(fVar8) && !NAN(fVar6))) {
    bVar3 = fVar8 == fVar6;
  }
  if (!bVar3) {
    fVar7 = param_2[1];
    bVar3 = true;
    if ((fVar7 != param_3[1]) && (bVar3 = false, !NAN(param_3[3]) && !NAN(fVar7))) {
      bVar3 = param_3[3] == fVar7;
    }
    if (!bVar3) {
      return 0;
    }
  }
  *param_1 = fVar6;
  param_1[1] = param_2[1];
  return 1;
}

