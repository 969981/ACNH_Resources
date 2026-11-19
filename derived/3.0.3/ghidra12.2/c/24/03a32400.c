
void FUN_03a32400(long param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_0393da40(param_1 + -0x5f0,0);
  bVar1 = *(int *)(param_1 + -0x48) != 1;
  fVar2 = *(float *)(param_1 + -0x198);
  if (bVar1) {
    fVar2 = 0.298912;
  }
  fVar3 = *(float *)(param_1 + -0x194);
  if (bVar1) {
    fVar3 = 0.586611;
  }
  *(float *)(param_1 + -0x40) = fVar2;
  *(float *)(param_1 + -0x3c) = fVar3;
  fVar4 = *(float *)(param_1 + -400);
  if (bVar1) {
    fVar4 = 0.114478;
  }
  *(float *)(param_1 + -0x38) = fVar4;
  fVar5 = fVar2 + fVar3 + fVar4;
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    *(float *)(param_1 + -0x40) = fVar2 * fVar5;
    *(float *)(param_1 + -0x3c) = fVar3 * fVar5;
    *(float *)(param_1 + -0x38) = fVar4 * fVar5;
  }
  return;
}

