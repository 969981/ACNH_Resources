
float FUN_008cdf50(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  fVar3 = 0.0;
  fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  if (DAT_04ced028 < fVar2) {
    if (fVar2 < DAT_04ced02c) {
      fVar3 = (fVar2 - DAT_04ced028) / (DAT_04ced02c - DAT_04ced028) + 0.0;
    }
    else {
      fVar3 = 1.0;
    }
  }
  if (0.0 < fVar2) {
    return (fVar3 / fVar2) * fVar1;
  }
  return fVar1;
}

