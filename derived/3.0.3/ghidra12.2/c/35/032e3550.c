
float FUN_032e3550(float param_1,float param_2,float *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  if (((0.0 < param_1) && (fVar4 = 1.0, param_1 < 1.0)) && (fVar4 = 0.0, 0 < param_4)) {
    iVar1 = 0;
    fVar2 = 0.5;
    do {
      fVar3 = *param_3;
      fVar5 = param_3[2];
      iVar1 = iVar1 + 1;
      fVar4 = fVar2 * fVar3 + 0.0;
      fVar3 = fVar3 + fVar2 * (fVar5 - fVar3);
      fVar4 = fVar4 + fVar2 * (fVar3 - fVar4);
      fVar4 = fVar4 + fVar2 * ((fVar3 + fVar2 * ((fVar5 + fVar2 * (1.0 - fVar5)) - fVar3)) - fVar4);
      fVar3 = exp2f(-(float)iVar1);
      if (ABS(param_1 - fVar4) < param_2) {
        return fVar4;
      }
      if (param_1 - fVar4 <= 0.0) {
        fVar3 = -fVar3;
      }
      fVar2 = fVar2 + fVar3;
    } while (param_4 != iVar1);
  }
  return fVar4;
}

