
void FUN_038e5cd4(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0xa8);
  fVar1 = *(float *)(param_1 + 0xac);
  fVar3 = *(float *)(param_1 + 0x98);
  param_2[1] = 0.0;
  fVar1 = 1.0 / (fVar1 - fVar2);
  *param_2 = (fVar3 + fVar3) * fVar1;
  fVar2 = *(float *)(param_1 + 0xa8);
  fVar3 = *(float *)(param_1 + 0xac);
  param_2[3] = 0.0;
  param_2[2] = fVar1 * (fVar2 + fVar3);
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0xa4);
  param_2[4] = 0.0;
  fVar1 = 1.0 / (fVar1 - fVar2);
  param_2[5] = fVar1 * (*(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x98));
  fVar2 = *(float *)(param_1 + 0xa0);
  fVar3 = *(float *)(param_1 + 0xa4);
  param_2[7] = 0.0;
  param_2[6] = fVar1 * (fVar2 + fVar3);
  fVar2 = *(float *)(param_1 + 0x98);
  fVar1 = *(float *)(param_1 + 0x9c);
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  fVar1 = 1.0 / (fVar1 - fVar2);
  param_2[10] = -((*(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x98)) * fVar1);
  fVar3 = *(float *)(param_1 + 0x98);
  fVar2 = *(float *)(param_1 + 0x9c);
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = -1.0;
  param_2[0xf] = 0.0;
  param_2[0xb] = fVar1 * fVar2 * -2.0 * fVar3;
  return;
}

