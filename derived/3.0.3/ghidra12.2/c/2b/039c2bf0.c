
void FUN_039c2bf0(float *param_1,undefined8 param_2,float *param_3,undefined8 param_4,float *param_5
                 )

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_5;
  *param_1 = fVar2 * param_3[3] * 0.32534343;
  param_1[1] = fVar2 * param_3[1] * 0.32534343;
  param_1[2] = fVar2 * param_3[2] * 0.32534343;
  param_1[3] = fVar2 * (param_3[6] * -0.07875311 + *param_3 * 0.28175688);
  param_1[0xc] = fVar2 * param_3[4] * 0.27280876;
  param_1[0xd] = fVar2 * param_3[5] * 0.27280876;
  param_1[0xe] = fVar2 * param_3[6] * 0.23625931;
  param_1[0xf] = fVar2 * param_3[7] * 0.27280876;
  fVar2 = param_5[1];
  param_1[4] = fVar2 * param_3[0xc] * 0.32534343;
  param_1[5] = fVar2 * param_3[10] * 0.32534343;
  param_1[6] = fVar2 * param_3[0xb] * 0.32534343;
  param_1[7] = fVar2 * (param_3[0xf] * -0.07875311 + param_3[9] * 0.28175688);
  param_1[0x10] = fVar2 * param_3[0xd] * 0.27280876;
  param_1[0x11] = fVar2 * param_3[0xe] * 0.27280876;
  param_1[0x12] = fVar2 * param_3[0xf] * 0.23625931;
  param_1[0x13] = fVar2 * param_3[0x10] * 0.27280876;
  fVar2 = param_5[2];
  param_1[8] = fVar2 * param_3[0x15] * 0.32534343;
  param_1[9] = fVar2 * param_3[0x13] * 0.32534343;
  param_1[10] = fVar2 * param_3[0x14] * 0.32534343;
  param_1[0xb] = fVar2 * (param_3[0x18] * -0.07875311 + param_3[0x12] * 0.28175688);
  param_1[0x14] = fVar2 * param_3[0x16] * 0.27280876;
  param_1[0x15] = fVar2 * param_3[0x17] * 0.27280876;
  param_1[0x16] = fVar2 * param_3[0x18] * 0.23625931;
  param_1[0x17] = fVar2 * param_3[0x19] * 0.27280876;
  param_1[0x18] = *param_5 * param_3[8] * 0.13640438;
  param_1[0x19] = param_5[1] * param_3[0x11] * 0.13640438;
  fVar1 = param_3[0x1a];
  fVar2 = param_5[2];
  param_1[0x1b] = 1.0;
  param_1[0x1a] = fVar2 * fVar1 * 0.13640438;
  return;
}

