
undefined8 FUN_032927f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_3 != (float *)0x0) || (((uint)param_1[4] & 1) != 0)) {
    if (((param_1[1] != 0.0) || (fVar1 = 0.0, param_1[3] != 0.0)) &&
       (fVar1 = param_2[3] - param_1[3], fVar1 <= 0.0)) {
      fVar2 = param_2[1] - param_1[1];
      fVar1 = 0.0;
      if (fVar2 < 0.0) {
        fVar1 = fVar2;
      }
    }
    if (((*param_1 != 0.0) || (fVar2 = 0.0, param_1[2] != 0.0)) &&
       (fVar2 = param_2[2] - param_1[2], fVar2 <= 0.0)) {
      fVar3 = *param_2 - *param_1;
      fVar2 = 0.0;
      if (fVar3 < 0.0) {
        fVar2 = fVar3;
      }
    }
    if (param_3 != (float *)0x0) {
      *param_3 = fVar2;
      param_3[1] = fVar1;
    }
    if (((uint)param_1[4] & 1) != 0) {
      if (fVar1 != 0.0) {
        return 0;
      }
      if (fVar2 != 0.0) {
        return 0;
      }
    }
  }
  return 1;
}

