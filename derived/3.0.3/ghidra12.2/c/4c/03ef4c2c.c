
bool FUN_03ef4c2c(float param_1,float param_2,float param_3,float param_4,float *param_5)

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
  
  fVar3 = tanf(param_5[1] * 0.5);
  fVar4 = tanf(*param_5 * 0.5);
  fVar10 = -fVar3;
  if (0.0 <= fVar3) {
    fVar10 = fVar3;
  }
  if (1e+07 < fVar10) {
    return false;
  }
  fVar10 = -fVar4;
  if (0.0 <= fVar4) {
    fVar10 = fVar4;
  }
  if (1e+07 < fVar10) {
    return false;
  }
  fVar5 = tanf(param_3 * 0.5);
  fVar6 = tanf(param_4 * 0.5);
  fVar7 = tanf(param_1 * 0.5);
  fVar8 = tanf(param_2 * 0.5);
  fVar10 = -fVar7;
  if (0.0 <= fVar7) {
    fVar10 = fVar7;
  }
  if (1e+07 < fVar10) {
    return false;
  }
  fVar10 = -fVar8;
  if (0.0 <= fVar8) {
    fVar10 = fVar8;
  }
  if (1e+07 < fVar10) {
    return false;
  }
  fVar10 = -fVar5;
  if (0.0 <= fVar5) {
    fVar10 = fVar5;
  }
  if (1e+07 < fVar10) {
    return false;
  }
  fVar10 = -fVar6;
  if (0.0 <= fVar6) {
    fVar10 = fVar6;
  }
  if (1e+07 < fVar10) {
    return false;
  }
  fVar10 = fVar6 - fVar5;
  fVar11 = fVar8 - fVar7;
  if (fVar10 <= fVar11) {
    if (fVar11 <= fVar10) {
      fVar3 = fVar3 - (fVar5 + fVar6) * 0.5;
      fVar4 = fVar4 - (fVar7 + fVar8) * 0.5;
      fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
      fVar10 = fVar10 * 0.5 * fVar10 * 0.5;
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar3) && !NAN(fVar10)) {
        bVar1 = fVar3 == fVar10;
        bVar2 = fVar10 <= fVar3;
      }
      goto LAB_03ef4e44;
    }
    fVar9 = fVar4;
    fVar11 = fVar7;
    fVar12 = fVar8;
  }
  else {
    fVar9 = fVar3;
    fVar10 = fVar11;
    fVar11 = fVar5;
    fVar12 = fVar6;
    fVar3 = fVar4;
    fVar5 = fVar7;
    fVar6 = fVar8;
  }
  fVar10 = fVar10 * 0.5;
  if ((((fVar6 < fVar3) || (fVar3 < fVar5)) || (fVar9 < fVar11 + fVar10)) ||
     (fVar12 - fVar10 < fVar9)) {
    fVar4 = fVar10 * fVar10;
    fVar7 = fVar9 - (fVar11 + fVar10);
    fVar3 = fVar3 + (fVar5 + fVar6) * -0.5;
    fVar3 = fVar3 * fVar3;
    if (fVar4 < fVar3 + fVar7 * fVar7) {
      fVar9 = fVar9 - (fVar12 - fVar10);
      fVar3 = fVar3 + fVar9 * fVar9;
      bVar2 = fVar4 <= fVar3;
      bVar1 = fVar3 == fVar4;
LAB_03ef4e44:
      return !bVar2 || bVar1;
    }
  }
  return true;
}

