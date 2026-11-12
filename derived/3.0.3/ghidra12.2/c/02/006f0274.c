
int FUN_006f0274(float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0 - param_1 * param_1;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  if (0.0 <= param_1) {
    if (param_1 <= 0.70710677) {
      fVar3 = (param_1 / fVar2) * 128.0;
      lVar1 = (long)(int)((param_1 / fVar2) * 128.0) * 8;
      return *(int *)(&DAT_0419a7a8 + lVar1) +
             (int)((fVar3 - (float)(int)fVar3) * *(float *)(&DAT_0419a7ac + lVar1));
    }
    fVar3 = (fVar2 / param_1) * 128.0;
    lVar1 = (long)(int)((fVar2 / param_1) * 128.0) * 8;
    return (0x40000000 - *(int *)(&DAT_0419a7a8 + lVar1)) -
           (int)((fVar3 - (float)(int)fVar3) * *(float *)(&DAT_0419a7ac + lVar1));
  }
  if (-0.70710677 <= param_1) {
    fVar3 = (-param_1 / fVar2) * 128.0;
    lVar1 = (long)(int)((-param_1 / fVar2) * 128.0) * 8;
    return -(int)((fVar3 - (float)(int)fVar3) * *(float *)(&DAT_0419a7ac + lVar1)) -
           *(int *)(&DAT_0419a7a8 + lVar1);
  }
  fVar2 = (fVar2 / param_1) * -128.0;
  return *(int *)(&DAT_0419a7a8 + (long)(int)fVar2 * 8) + -0x40000000 +
         (int)((fVar2 - (float)(int)fVar2) * *(float *)(&DAT_0419a7ac + (long)(int)fVar2 * 8));
}

