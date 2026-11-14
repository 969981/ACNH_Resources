
void FUN_015cf2b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  if (*(char *)(param_1 + 8) != '\0') {
    fVar1 = param_1[3] + (0.0 - *param_1) + param_1[1] * 0.0 + param_1[2] * 0.0;
    fVar2 = ((*param_1 * 0.0 + 0.0) - param_1[1]) + param_1[2] + param_1[3] * 0.0;
    fVar4 = ((param_1[4] * 0.0 + 0.0) - param_1[5]) + param_1[6] + param_1[7] * 0.0;
    fVar3 = (0.0 - param_1[4]) + param_1[5] * 0.0 + param_1[6] * 0.0 + param_1[7];
    fVar6 = fVar2 + fVar4;
    fVar5 = fVar1 + fVar3;
    param_1[0xd] = fVar2;
    param_1[0xe] = fVar1;
    param_1[0xb] = fVar4;
    param_1[0xc] = fVar3;
    param_1[9] = fVar6;
    param_1[10] = fVar5;
    fVar7 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    if (0.0 < fVar7) {
      fVar7 = 1.0 / fVar7;
      param_1[9] = fVar6 * fVar7;
      param_1[10] = fVar5 * fVar7;
    }
    fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    if (0.0 < fVar5) {
      fVar5 = 1.0 / fVar5;
      param_1[0xb] = fVar4 * fVar5;
      param_1[0xc] = fVar3 * fVar5;
    }
    fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    if (0.0 < fVar3) {
      fVar3 = 1.0 / fVar3;
      param_1[0xd] = fVar2 * fVar3;
      param_1[0xe] = fVar1 * fVar3;
    }
  }
  return;
}

