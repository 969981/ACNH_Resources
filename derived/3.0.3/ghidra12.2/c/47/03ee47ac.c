
void FUN_03ee47ac(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2[3];
  fVar2 = *param_2 * *param_2 + fVar1 * fVar1 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  if (fVar2 <= 1.1920929e-07) {
    param_1[3] = fVar1;
    fVar3 = -*param_2;
    *param_1 = fVar3;
    fVar4 = -param_2[1];
    param_1[1] = fVar4;
    fVar2 = param_2[2];
  }
  else {
    fVar2 = 1.0 / fVar2;
    fVar1 = fVar1 * fVar2;
    param_1[3] = fVar1;
    fVar3 = -(*param_2 * fVar2);
    *param_1 = fVar3;
    fVar4 = -(param_2[1] * fVar2);
    param_1[1] = fVar4;
    fVar2 = param_2[2] * fVar2;
  }
  fVar2 = -fVar2;
  param_1[2] = fVar2;
  fVar6 = param_2[5];
  fVar5 = param_2[6];
  fVar7 = param_2[4];
  fVar9 = -(fVar2 * fVar6) + fVar5 * fVar4 + fVar7 * fVar1;
  fVar10 = (fVar2 * fVar7 - fVar5 * fVar3) + fVar6 * fVar1;
  fVar8 = -(fVar4 * fVar7) + fVar6 * fVar3 + fVar5 * fVar1;
  fVar5 = (-(fVar4 * fVar6) - fVar7 * fVar3) - fVar5 * fVar2;
  param_1[4] = -(fVar5 * -fVar3) - (-(fVar2 * fVar10) + fVar1 * fVar9 + fVar4 * fVar8);
  param_1[5] = -(fVar5 * -fVar4) - ((fVar1 * fVar10 + fVar2 * fVar9) - fVar3 * fVar8);
  param_1[6] = -(fVar5 * -fVar2) - ((fVar3 * fVar10 - fVar4 * fVar9) + fVar1 * fVar8);
  return;
}

