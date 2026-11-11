
float FUN_0038ed60(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50;
  
  fVar1 = *(float *)(param_2 + 0xc) * 3.0;
  fVar2 = fVar1 + *(float *)(param_2 + 4) * -3.0 + 1.0;
  fVar3 = (*(float *)(param_2 + 0xc) * -6.0 + 0.0 + *(float *)(param_2 + 4) * 3.0) / fVar2;
  fVar1 = fVar1 / fVar2;
  fVar5 = fVar3 / -3.0;
  fVar4 = (fVar1 * -3.0 + fVar3 * fVar3) / 9.0;
  fVar3 = (fVar1 * fVar3 * -9.0 + fVar3 * fVar3 * (fVar3 + fVar3) + ((0.0 - param_1) / fVar2) * 27.0
          ) / 54.0;
  fVar2 = fVar4 * fVar4 * fVar4;
  fVar1 = fVar3 * fVar3 - fVar2;
  if (0.0 < fVar1) {
    local_50 = (float)((uint)-fVar3 ^ ((uint)-fVar3 ^ 0x3f800000) & 0x7fffffff);
    fVar2 = SQRT(fVar1);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar1);
    }
    fVar1 = powf(ABS(fVar3) + fVar2,0.33333334);
    return fVar5 + (fVar1 + fVar4 / fVar1) * local_50;
  }
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar1 = acosf(fVar3 * (1.0 / fVar1));
  fVar2 = SQRT(fVar4);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar4);
  }
  fVar2 = fVar2 * -2.0;
  fVar3 = cosf(fVar1 / 3.0);
  fVar3 = fVar5 + fVar3 * fVar2;
  if ((fVar3 < 0.0) || (1.0 < fVar3)) {
    fVar4 = *(float *)PTR_FloatPi_04bcee68;
    fVar3 = cosf((fVar1 + fVar4 * 2.0) / 3.0);
    fVar3 = fVar5 + fVar3 * fVar2;
    if ((fVar3 < 0.0) || (1.0 < fVar3)) {
      fVar1 = cosf((fVar1 + fVar4 * 4.0) / 3.0);
      fVar3 = fVar5 + fVar1 * fVar2;
      if (fVar3 < 0.0) {
        return param_1;
      }
      if (1.0 < fVar3) {
        return param_1;
      }
    }
  }
  return fVar3;
}

