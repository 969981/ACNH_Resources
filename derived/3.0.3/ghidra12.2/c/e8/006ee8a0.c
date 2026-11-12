
void FUN_006ee8a0(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 8) - *param_2;
  fVar2 = *(float *)(param_1 + 0x10) - param_2[2];
  if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= *(float *)(param_1 + 0x14)) {
    fVar2 = param_2[1];
    fVar1 = *(float *)(param_1 + 0xc);
    if ((fVar1 <= fVar2) && (fVar2 <= fVar1 + *(float *)(param_1 + 0x18))) {
      return;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc);
    fVar2 = param_2[1];
  }
  fVar3 = fVar1 + *(float *)(param_1 + 0x18);
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar3;
  }
  param_2[1] = fVar1;
  fVar2 = *param_2 - *(float *)(param_1 + 8);
  fVar1 = param_2[2] - *(float *)(param_1 + 0x10);
  fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (*(float *)(param_1 + 0x14) < fVar3) {
    fVar3 = *(float *)(param_1 + 0x14) / fVar3;
    *param_2 = *(float *)(param_1 + 8) + fVar2 * fVar3;
    param_2[2] = fVar1 * fVar3 + *(float *)(param_1 + 0x10);
  }
  return;
}

