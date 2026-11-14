
void FUN_01a185a8(float *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar3 = *(uint **)(param_1 + 8);
  if (puVar3 != (uint *)0x0) {
    uVar2 = puVar3[3];
    uVar1 = *puVar3 ^ *puVar3 << 0xb;
    fVar4 = *param_1;
    fVar5 = param_1[6];
    *puVar3 = puVar3[1];
    puVar3[1] = puVar3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar1;
    puVar3 = *(uint **)(param_1 + 8);
    fVar6 = param_1[6];
    param_1[1] = (fVar4 + fVar5 * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0)) -
                 (param_1[3] * param_1[3]) / (param_1[5] + param_1[5]);
    fVar4 = *param_1;
    uVar2 = puVar3[3];
    uVar1 = *puVar3 ^ *puVar3 << 0xb;
    *puVar3 = puVar3[1];
    puVar3[1] = puVar3[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar1;
    param_1[2] = (param_1[4] * param_1[4]) / (param_1[5] + param_1[5]) +
                 (fVar4 - fVar6 * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0));
  }
  return;
}

