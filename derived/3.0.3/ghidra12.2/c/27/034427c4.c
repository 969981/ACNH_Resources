
float FUN_034427c4(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x60);
  fVar1 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x5c);
  fVar4 = *(float *)(param_1 + 0x2c) - (*(float *)(param_1 + 0x60) + param_2[1]);
  fVar3 = *(float *)(param_1 + 0x28) - (*(float *)(param_1 + 0x5c) + *param_2);
  return SQRT(fVar4 * fVar4 + fVar3 * fVar3) - SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

