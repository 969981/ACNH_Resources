
void FUN_03951cf4(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float __x;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1] * param_4[1] + *param_4 * *param_3 + param_4[2] * param_3[2] +
          param_4[3] * param_3[3];
  fVar3 = 1.0;
  if ((fVar1 <= 1.0) && (fVar3 = fVar1, fVar1 < -1.0)) {
    fVar3 = -1.0;
  }
  fVar1 = fVar3;
  if (fVar3 < 0.0) {
    fVar1 = -fVar3;
  }
  __x = acosf(fVar1);
  fVar2 = sinf(__x);
  fVar1 = -fVar2;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  if (1.1920929e-07 <= fVar1) {
    fVar1 = sinf(__x - __x * param_1);
    fVar1 = (1.0 / fVar2) * fVar1;
    param_1 = sinf(__x * param_1);
    param_1 = (1.0 / fVar2) * param_1;
  }
  else {
    fVar1 = 1.0 - param_1;
  }
  if (fVar3 < 0.0) {
    param_1 = -param_1;
  }
  *param_2 = param_1 * *param_4 + *param_3 * fVar1;
  param_2[1] = param_1 * param_4[1] + param_3[1] * fVar1;
  param_2[2] = param_1 * param_4[2] + param_3[2] * fVar1;
  param_2[3] = param_1 * param_4[3] + param_3[3] * fVar1;
  return;
}

