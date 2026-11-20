
void FUN_03d4ab60(float *param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = (**(code **)(**(long **)PTR_DAT_04bb2158 + 0x40))();
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar2 = *(float *)(lVar1 + 4) * 0.5;
  *param_1 = fVar3;
  fVar3 = fVar3 / fVar2;
  param_1[1] = param_2[1];
  param_1[2] = fVar3;
  fVar4 = fVar4 / fVar2;
  param_1[3] = fVar4;
  param_1[10] = *param_2;
  fVar2 = param_2[1];
  param_1[0xc] = fVar3;
  param_1[0xd] = fVar4;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[0xb] = fVar2;
  param_1[0xe] = *param_3;
  fVar2 = param_3[1];
  param_1[0x10] = 1.0;
  param_1[0x13] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0xf] = fVar2;
  return;
}

