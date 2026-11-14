
float FUN_016e7d64(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  fVar3 = param_1[2];
  fVar1 = (float)(int)((int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0));
  fVar2 = fVar1 * 5.0;
  if (fVar1 * 5.0 + 2.5 < fVar4) {
    fVar2 = fVar2 + 5.0;
  }
  if ((float)(int)((int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0)) * 5.0 + 2.5 < fVar3) {
    return fVar2;
  }
  return fVar2;
}

