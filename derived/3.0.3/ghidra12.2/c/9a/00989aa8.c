
void FUN_00989aa8(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2 * 0.96;
  fVar4 = param_2[2] * 0.96;
  fVar3 = *(float *)(param_1 + 0x28);
  if (fVar1 <= *(float *)(param_1 + 0x28)) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0x28) = fVar3;
  fVar3 = *(float *)(param_1 + 0x30);
  if (fVar4 <= *(float *)(param_1 + 0x30)) {
    fVar3 = fVar4;
  }
  fVar2 = *(float *)(param_1 + 0x34);
  if (*(float *)(param_1 + 0x34) <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x30) = fVar3;
  *(float *)(param_1 + 0x34) = fVar2;
  fVar3 = *(float *)(param_1 + 0x3c);
  if (*(float *)(param_1 + 0x3c) <= fVar4) {
    fVar3 = fVar4;
  }
  *(float *)(param_1 + 0x3c) = fVar3;
  return;
}

