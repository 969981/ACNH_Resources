
void FUN_038e5968(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *(float *)(param_1 + 0xac);
  fVar3 = *(float *)(param_1 + 0xb0);
  fVar1 = *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x98);
  fVar5 = *(float *)(param_1 + 0xb4);
  fVar6 = *(float *)(param_1 + 0xb8);
  param_2[1] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  fVar2 = fVar1 * fVar2;
  fVar3 = fVar2 * fVar3;
  fVar6 = fVar2 * fVar6;
  fVar5 = fVar3 * fVar5;
  fVar3 = fVar3 * 0.5;
  fVar4 = fVar2 * 0.5 + fVar6;
  fVar6 = fVar6 - fVar2 * 0.5;
  fVar7 = fVar5 - fVar3;
  fVar3 = fVar3 + fVar5;
  fVar2 = 1.0 / (fVar3 - fVar7);
  fVar5 = 1.0 / (fVar4 - fVar6);
  *param_2 = fVar1 * fVar2;
  param_2[2] = (fVar3 + fVar7) * fVar2;
  fVar1 = *(float *)(param_1 + 0x98);
  param_2[7] = 0.0;
  param_2[5] = fVar5 * (fVar1 + fVar1);
  param_2[6] = (fVar4 + fVar6) * fVar5;
  fVar2 = *(float *)(param_1 + 0x98);
  fVar1 = *(float *)(param_1 + 0x9c);
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  fVar1 = 1.0 / (fVar1 - fVar2);
  param_2[10] = -((*(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x98)) * fVar1);
  fVar6 = *(float *)(param_1 + 0x98);
  fVar2 = *(float *)(param_1 + 0x9c);
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = -1.0;
  param_2[0xf] = 0.0;
  param_2[0xb] = fVar1 * fVar2 * -2.0 * fVar6;
  return;
}

