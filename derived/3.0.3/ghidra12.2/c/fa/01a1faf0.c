
void FUN_01a1faf0(float param_1,float param_2,float param_3,float *param_4,uint *param_5,
                 float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if ((param_4 != (float *)0x0) && (param_5 != (uint *)0x0)) {
    uVar3 = param_5[3];
    fVar4 = *param_6;
    param_1 = param_1 * 0.5;
    fVar5 = param_6[2];
    param_2 = param_2 * 0.5;
    uVar1 = *param_5 ^ *param_5 << 0xb;
    uVar2 = param_5[1] ^ param_5[1] << 0xb;
    *param_5 = param_5[2];
    param_5[1] = uVar3;
    uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
    param_5[2] = uVar1;
    param_5[3] = uVar2;
    *param_4 = fVar4 + ((param_1 + param_1) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) - param_1);
    param_4[2] = fVar5 + ((param_2 + param_2) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) - param_2)
    ;
  }
  uVar1 = *param_5 ^ *param_5 << 0xb;
  uVar2 = param_5[3];
  fVar4 = param_6[1];
  *param_5 = param_5[1];
  param_5[1] = param_5[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  param_5[2] = uVar2;
  param_5[3] = uVar1;
  param_4[1] = fVar4 + ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * param_3;
  return;
}

