
void FUN_03b7f58c(float param_1,float param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_4 + 200);
  fVar2 = *(float *)(param_4 + 0xcc);
  fVar3 = *(float *)(param_4 + 0xd0);
  fVar1 = *(float *)(param_4 + 0xd4);
  if ((((0.0 <= fVar4) || (0.0 <= fVar2)) || (0.0 <= fVar3)) ||
     ((0.0 <= param_2 || (fVar6 = 0.0, 0.0 <= fVar1)))) {
    fVar5 = 1.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar4 = 1.0;
    if (0.0 <= fVar2) {
      fVar4 = fVar2;
    }
    fVar2 = 1.0;
    if (0.0 <= fVar3) {
      fVar2 = fVar3;
    }
    fVar3 = 1.0;
    if (0.0 <= fVar1) {
      fVar3 = fVar1;
    }
    fVar6 = 1.0;
    if (0.0 <= param_2) {
      fVar6 = param_2;
    }
    fVar6 = fVar6 * fVar5 * fVar4 * fVar2 * fVar3;
  }
  fVar1 = *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x10) *
          *(float *)(*(long *)(*(long *)(DAT_05aebb78 + 0x10) + 8) + 0x20) *
          *(float *)(param_4 + 0xc4) *
          *(float *)(param_4 + 0xa8) * *(float *)(param_4 + 0xac) * *(float *)(param_4 + 0xb0) *
          *(float *)(param_4 + 0xb4) * *(float *)(param_4 + 0xb8) *
          *(float *)(param_4 + 0xbc) * *(float *)(param_4 + 0xc0) * fVar6 * param_1;
  *(float *)(param_4 + 0x98) = fVar1;
  *(float *)(param_4 + 0x9c) = *(float *)(param_4 + 0x8c) * fVar1;
  *(float *)(param_4 + 0xa0) = fVar1 * *(float *)(param_4 + 0x90);
  *(float *)(param_4 + 0xa4) = fVar1 * *(float *)(param_4 + 0x94);
  return;
}

