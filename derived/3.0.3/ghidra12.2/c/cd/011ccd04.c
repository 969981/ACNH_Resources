
void FUN_011ccd04(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = sinf(*param_3);
  fVar2 = sinf(param_3[1]);
  fVar3 = sinf(param_3[2]);
  fVar4 = cosf(*param_3);
  fVar5 = cosf(param_3[1]);
  fVar6 = cosf(param_3[2]);
  *param_1 = *param_2 * fVar5 * fVar6;
  param_1[4] = fVar3 * fVar5 * *param_2;
  param_1[8] = -(fVar2 * *param_2);
  param_1[1] = (fVar1 * fVar2 * fVar6 - fVar3 * fVar4) * param_2[1];
  param_1[5] = (fVar4 * fVar6 + fVar3 * fVar1 * fVar2) * param_2[1];
  param_1[9] = fVar1 * fVar5 * param_2[1];
  param_1[2] = (fVar1 * fVar3 + fVar2 * fVar4 * fVar6) * param_2[2];
  param_1[6] = (-(fVar1 * fVar6) + fVar2 * fVar3 * fVar4) * param_2[2];
  param_1[10] = fVar4 * fVar5 * param_2[2];
  param_1[3] = *param_4;
  param_1[7] = param_4[1];
  param_1[0xb] = param_4[2];
  return;
}

