
void FUN_01a1f9f0(float param_1,float param_2,float *param_3,uint *param_4,float *param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != (float *)0x0) {
    if (param_4 == (uint *)0x0) {
      param_1 = 0.0;
      fVar7 = 0.0;
    }
    else {
      uVar2 = *param_4 ^ *param_4 << 0xb;
      uVar5 = param_4[3];
      uVar3 = param_4[1] ^ param_4[1] << 0xb;
      *param_4 = param_4[2];
      param_4[1] = uVar5;
      uVar4 = uVar2 ^ uVar5;
      uVar2 = uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar4;
      uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
      param_4[2] = uVar2;
      param_4[3] = uVar3;
      param_1 = ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * param_1;
      uVar1 = (ulong)(uVar4 >> 0x18);
      fVar6 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
      fVar7 = ((float)(&DAT_04199798)[uVar1 * 4] + fVar6 * (float)(&DAT_0419979c)[uVar1 * 4]) *
              param_1;
      param_1 = ((float)(&DAT_041997a0)[uVar1 * 4] + fVar6 * (float)(&DAT_041997a4)[uVar1 * 4]) *
                param_1;
    }
    fVar6 = param_5[2];
    *param_3 = fVar7 + *param_5;
    param_3[2] = param_1 + fVar6;
    fVar7 = param_5[1];
    uVar3 = param_4[3];
    uVar2 = *param_4 ^ *param_4 << 0xb;
    *param_4 = param_4[1];
    param_4[1] = param_4[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    param_4[2] = uVar3;
    param_4[3] = uVar2;
    param_3[1] = fVar7 + ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * param_2;
  }
  return;
}

