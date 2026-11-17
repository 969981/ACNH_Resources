
void FUN_02fdee6c(int *param_1)

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
  
  fVar3 = (float)param_1[2];
  if (*param_1 == param_1[1]) {
    fVar4 = fVar3 - (float)(param_1[1] * 100);
    bVar1 = false;
    bVar2 = true;
    if (-1.0 <= fVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4)) {
        bVar1 = fVar4 == 1.0;
        bVar2 = 1.0 <= fVar4;
      }
    }
    if (!bVar2 || bVar1) {
      return;
    }
  }
  fVar5 = (float)(int)(float)(param_1[1] * 100);
  fVar6 = fVar5 - fVar3;
  fVar4 = -fVar6;
  if (0.0 <= fVar6) {
    fVar4 = fVar6;
  }
  if (param_1[3] == 1) {
    fVar8 = fVar4 * (float)param_1[4];
    fVar7 = (float)param_1[6];
    if (fVar8 <= (float)param_1[6]) {
      fVar7 = fVar8;
    }
    fVar9 = (float)param_1[5];
    if ((float)param_1[5] <= fVar8) {
      fVar9 = fVar7;
    }
  }
  else {
    fVar9 = 0.0;
    if (param_1[3] == 0) {
      fVar9 = fVar4 / (float)param_1[8];
    }
  }
  if (fVar9 <= fVar4) {
    fVar4 = fVar9;
  }
  fVar7 = -fVar4;
  if (0.0 <= fVar6) {
    fVar7 = fVar4;
  }
  param_1[2] = (int)(fVar3 + fVar7);
  fVar3 = (fVar3 + fVar7) - fVar5;
  bVar1 = false;
  bVar2 = true;
  if (-1.0 <= fVar3) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3)) {
      bVar1 = fVar3 == 1.0;
      bVar2 = 1.0 <= fVar3;
    }
  }
  if (!bVar2 || bVar1) {
    param_1[2] = (int)fVar5;
    *param_1 = param_1[1];
  }
  return;
}

