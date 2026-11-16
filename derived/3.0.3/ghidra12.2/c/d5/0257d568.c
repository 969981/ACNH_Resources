
void FUN_0257d568(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  fVar1 = (float)FUN_006f0400(*param_3 - *param_4,param_3[2] - param_4[2]);
  param_2[6] = fVar1;
  fVar6 = 0.0;
  fVar3 = param_3[1];
  fVar4 = *param_4 - *param_3;
  fVar1 = param_3[2];
  fVar5 = param_4[2] - fVar1;
  fVar7 = SQRT(fVar4 * fVar4 + 0.0 + fVar5 * fVar5);
  if (0.0 < fVar7) {
    fVar7 = 1.0 / fVar7;
    fVar4 = fVar4 * fVar7;
    fVar6 = fVar7 * 0.0;
    fVar5 = fVar5 * fVar7;
  }
  pfVar2 = param_2 + 3;
  *pfVar2 = *param_3 + fVar4 * param_1;
  param_2[4] = fVar3 + fVar6 * param_1;
  param_2[5] = fVar1 + fVar5 * param_1;
  fVar1 = (float)FUN_016e026c(0,pfVar2,0,0);
  param_2[4] = fVar1;
  fVar1 = (float)FUN_006f0400(-(param_3[1] - fVar1),
                              SQRT((param_3[2] - param_2[5]) * (param_3[2] - param_2[5]) +
                                   (*param_3 - *pfVar2) * (*param_3 - *pfVar2)));
  param_2[7] = fVar1;
  param_2[8] = 0.0;
  param_2[9] = 1.0;
  param_2[10] = 0.0;
  return;
}

