
float FUN_009cedf0(float *param_1,float *param_2)

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
  
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar4 = param_2[8];
  fVar7 = param_2[9];
  fVar8 = param_2[10];
  fVar1 = -(fVar7 * fVar6) + fVar8 * fVar5;
  fVar3 = param_2[1];
  fVar2 = param_2[2];
  fVar9 = fVar3 * (-(param_2[4] * fVar8) + fVar4 * fVar6) + fVar1 * *param_2 +
          (-(fVar4 * fVar5) + fVar7 * param_2[4]) * fVar2;
  if (fVar9 == 0.0) {
    fVar9 = NAN;
  }
  else {
    fVar9 = 1.0 / fVar9;
    fVar4 = fVar1 * fVar9;
    fVar1 = (-(fVar5 * fVar2) + fVar6 * fVar3) * fVar9;
    fVar9 = (fVar2 * -fVar7 + fVar8 * fVar3) * fVar9;
  }
  return *param_1 - (fVar9 + fVar4 * 0.0 + fVar1 * 0.0);
}

