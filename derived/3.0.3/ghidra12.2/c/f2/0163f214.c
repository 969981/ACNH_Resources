
float FUN_0163f214(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)(int)*(char *)(param_1 + 5) / 60.0 + (float)(int)*(char *)(param_1 + 4) +
          (float)(int)*(char *)(param_1 + 6) / 3600.0;
  fVar1 = (float)FUN_00a90fa4(DAT_04da7238);
  if (fVar1 <= 0.0) {
    fVar2 = 4.0 - fVar1;
  }
  else {
    fVar2 = fVar1 * -0.79999995 + 4.0;
  }
  fVar1 = fVar1 + 19.0;
  if (fVar4 <= fVar2) {
    fVar1 = (fVar4 / fVar2) * 4.0;
  }
  else {
    if (fVar4 <= 12.0) {
      fVar3 = 8.0;
      fVar4 = (fVar4 - fVar2) / (12.0 - fVar2);
      fVar1 = 4.0;
    }
    else {
      if (fVar4 <= fVar1) {
        return ((fVar4 + -12.0) / (fVar1 + -12.0)) * 7.0 + 12.0;
      }
      fVar3 = 5.0;
      fVar4 = (fVar4 - fVar1) / (24.0 - fVar1);
      fVar1 = 19.0;
    }
    fVar1 = fVar1 + fVar3 * fVar4;
  }
  return fVar1;
}

