
bool FUN_016f0b1c(float *param_1,float *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = *param_2;
  fVar9 = param_2[2];
  fVar5 = (float)(int)((int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0));
  fVar12 = (float)(int)((int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0));
  fVar7 = fVar5 * 5.0;
  fVar6 = fVar12 * 5.0;
  if (fVar5 * 5.0 + 2.5 < fVar10) {
    fVar7 = fVar7 + 5.0;
  }
  if (fVar12 * 5.0 + 2.5 < fVar9) {
    fVar6 = fVar6 + 5.0;
  }
  if ((*param_3 + 0x20000000U >> 0x1e | 2) == 2) {
    fVar5 = 6.25;
    fVar9 = 10.0;
    fVar10 = -6.25;
    fVar12 = -10.0;
  }
  else {
    fVar5 = 10.0;
    fVar9 = 6.25;
    fVar10 = -10.0;
    fVar12 = -6.25;
  }
  fVar11 = *param_1;
  fVar9 = fVar7 + fVar9;
  fVar10 = fVar6 + fVar10;
  fVar8 = param_1[2];
  bVar1 = false;
  bVar3 = true;
  if (fVar7 + fVar12 <= fVar11) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(fVar11) && !NAN(fVar9)) {
      bVar1 = fVar11 == fVar9;
      bVar3 = fVar9 <= fVar11;
    }
  }
  bVar2 = false;
  bVar4 = true;
  if (!bVar3 || bVar1) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(fVar10) && !NAN(fVar8)) {
      bVar2 = fVar10 == fVar8;
      bVar4 = fVar8 <= fVar10;
    }
  }
  if (bVar4 && !bVar2) {
    return false;
  }
  return fVar8 <= fVar6 + fVar5;
}

