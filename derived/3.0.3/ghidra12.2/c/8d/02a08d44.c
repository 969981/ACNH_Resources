
void FUN_02a08d44(float *param_1,float *param_2)

{
  float __x;
  float __x_00;
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2 + param_2[5];
  fVar2 = param_2[10];
  __x = (fVar1 + fVar2 + 1.0) * 0.25;
  __x_00 = __x + (param_2[5] + fVar2) * -0.5;
  fVar2 = __x + (*param_2 + fVar2) * -0.5;
  fVar1 = __x + fVar1 * -0.5;
  if (__x <= __x_00) {
    if (fVar2 < __x_00) {
      if (fVar1 < __x_00) {
        fVar1 = SQRT(__x_00);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(__x_00);
        }
        *param_1 = fVar1;
        fVar1 = 0.25 / fVar1;
        param_1[3] = fVar1 * (param_2[9] - param_2[6]);
        param_1[1] = fVar1 * (param_2[1] + param_2[4]);
        fVar2 = param_2[2] + param_2[8];
        goto LAB_02a08e48;
      }
      goto LAB_02a08eb0;
    }
  }
  else if (fVar2 < __x) {
    if (fVar1 < __x) {
      fVar1 = SQRT(__x);
      if (NAN(fVar1)) {
        fVar1 = sqrtf(__x);
      }
      param_1[3] = fVar1;
      fVar1 = 0.25 / fVar1;
      *param_1 = fVar1 * (param_2[9] - param_2[6]);
      param_1[1] = fVar1 * (param_2[2] - param_2[8]);
      fVar2 = param_2[4] - param_2[1];
LAB_02a08e48:
      param_1[2] = fVar1 * fVar2;
      return;
    }
    goto LAB_02a08eb0;
  }
  if (fVar1 < fVar2) {
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
    }
    param_1[1] = fVar1;
    fVar1 = 0.25 / fVar1;
    param_1[3] = fVar1 * (param_2[2] - param_2[8]);
    param_1[2] = fVar1 * (param_2[6] + param_2[9]);
    *param_1 = fVar1 * (param_2[4] + param_2[1]);
    return;
  }
LAB_02a08eb0:
  fVar2 = SQRT(fVar1);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar1);
  }
  fVar1 = 0.25 / fVar2;
  param_1[2] = fVar2;
  param_1[3] = fVar1 * (param_2[4] - param_2[1]);
  *param_1 = fVar1 * (param_2[8] + param_2[2]);
  param_1[1] = fVar1 * (param_2[9] + param_2[6]);
  return;
}

