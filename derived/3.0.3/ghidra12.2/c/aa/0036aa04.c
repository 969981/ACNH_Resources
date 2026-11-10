
void FUN_0036aa04(float *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x2c);
  param_1[1] = fVar2 * 0.5;
  param_1[2] = fVar1 * 0.5;
  *param_1 = fVar1 * -0.5;
  param_1[3] = fVar2 * -0.5;
  return;
}

