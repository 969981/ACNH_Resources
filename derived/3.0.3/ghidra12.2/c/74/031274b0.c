
bool FUN_031274b0(float param_1,float *param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = false;
  if (param_2 != (float *)0x0) {
    fVar4 = *param_2;
    param_1 = fVar4 + param_1;
    if ((param_3 & 1) == 0) {
      fVar3 = 1.0;
      if (param_1 <= 1.0) {
        fVar3 = param_1;
      }
      fVar2 = 0.0;
      if (0.0 <= param_1) {
        fVar2 = fVar3;
      }
    }
    else {
      fVar2 = fmodf(param_1,1.0);
      if (param_1 < 0.0) {
        fVar2 = fVar2 + 1.0;
      }
    }
    *param_2 = fVar2;
    fVar4 = fVar4 - fVar2;
    bVar1 = 1.1920929e-07 < fVar4 || fVar4 < -1.1920929e-07;
  }
  return bVar1;
}

