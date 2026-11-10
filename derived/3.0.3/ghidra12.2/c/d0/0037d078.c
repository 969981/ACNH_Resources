
void FUN_0037d078(float *param_1,long param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = *(byte *)(param_2 + 0x5b);
  if ((bVar1 & 3) == 2) {
    fVar2 = -*(float *)(param_2 + 0x50);
  }
  else {
    fVar2 = 0.0;
    if ((bVar1 & 3) == 0) {
      fVar2 = *(float *)(param_2 + 0x50) * -0.5;
    }
  }
  if ((bVar1 >> 2 & 3) == 0) {
    fVar5 = *(float *)(param_2 + 0x50);
    fVar3 = *(float *)(param_2 + 0x54);
    fVar4 = fVar3 * 0.5;
    *param_1 = fVar2;
    param_1[1] = fVar4;
    param_1[2] = fVar2 + fVar5;
    param_1[3] = fVar4 - fVar3;
    return;
  }
  if ((bVar1 >> 2 & 3) == 2) {
    fVar4 = *(float *)(param_2 + 0x50);
    fVar3 = *(float *)(param_2 + 0x54);
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = fVar2 + fVar4;
    param_1[3] = fVar3 - fVar3;
    return;
  }
  fVar4 = *(float *)(param_2 + 0x50);
  fVar3 = *(float *)(param_2 + 0x54);
  *param_1 = fVar2;
  param_1[1] = 0.0;
  param_1[2] = fVar2 + fVar4;
  param_1[3] = 0.0 - fVar3;
  return;
}

