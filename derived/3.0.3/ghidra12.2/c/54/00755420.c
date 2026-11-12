
void FUN_00755420(float *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  FUN_007021a4(&local_50);
  fVar1 = *(float *)(param_2 + 0x2a0);
  fVar3 = *(float *)(param_2 + 0x2a4);
  *param_1 = local_50 * fVar1;
  param_1[1] = fStack_4c * fVar3;
  fVar2 = *(float *)(param_2 + 0x2a8);
  param_1[8] = fVar1 * local_30;
  param_1[9] = fVar3 * fStack_2c;
  param_1[4] = fVar1 * local_40;
  param_1[5] = fVar3 * fStack_3c;
  param_1[2] = local_48 * fVar2;
  param_1[3] = fStack_44;
  param_1[6] = fVar2 * local_38;
  param_1[7] = fStack_34;
  param_1[10] = fVar2 * local_28;
  param_1[0xb] = fStack_24;
  return;
}

