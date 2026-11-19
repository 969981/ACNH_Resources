
void FUN_038e5b6c(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xa8);
  fVar3 = *(float *)(param_1 + 0xac);
  fVar2 = (fVar3 - fVar1) * 0.5;
  fVar4 = *(float *)(param_1 + 0xa0);
  fVar5 = *(float *)(param_1 + 0xa4);
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *param_2 = 1.0 / fVar2;
  param_2[3] = ((fVar1 + fVar3) * -0.5) / fVar2;
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0xa4);
  param_2[4] = 0.0;
  param_2[6] = 0.0;
  fVar1 = (fVar1 - fVar2) * 0.5;
  param_2[5] = 1.0 / fVar1;
  param_2[7] = ((fVar4 + fVar5) * -0.5) / fVar1;
  fVar2 = *(float *)(param_1 + 0x98);
  fVar1 = *(float *)(param_1 + 0x9c);
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  fVar1 = 1.0 / (fVar1 - fVar2);
  param_2[10] = fVar1 * -2.0;
  fVar2 = *(float *)(param_1 + 0x98);
  fVar3 = *(float *)(param_1 + 0x9c);
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[0xf] = 1.0;
  param_2[0xb] = -((fVar2 + fVar3) * fVar1);
  return;
}

