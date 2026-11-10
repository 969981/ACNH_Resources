
float FUN_0037d114(long param_1)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  if ((bVar1 & 3) == 2) {
    fVar2 = -*(float *)(param_1 + 0x50);
  }
  else {
    fVar2 = 0.0;
    if ((bVar1 & 3) == 0) {
      fVar2 = *(float *)(param_1 + 0x50) * -0.5;
    }
  }
  bVar1 = bVar1 >> 2 & 3;
  if ((bVar1 == 2) || (bVar1 != 0)) {
    return fVar2;
  }
  return fVar2;
}

