
undefined4 FUN_006f05f8(float param_1,float param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_1 <= 360.0) {
    if (param_1 < 0.0) {
      fVar2 = param_1 / 360.0 + -1.0;
      goto LAB_006f062c;
    }
  }
  else {
    fVar2 = param_1 / 360.0;
LAB_006f062c:
    param_1 = param_1 - (float)(int)fVar2 * 360.0;
  }
  if (param_2 <= 360.0) {
    if (0.0 <= param_2) goto LAB_006f0674;
    fVar2 = param_2 / 360.0 + -1.0;
  }
  else {
    fVar2 = param_2 / 360.0;
  }
  param_2 = param_2 - (float)(int)fVar2 * 360.0;
LAB_006f0674:
  if (param_1 == param_2) {
    *param_3 = 0.0;
    return 0;
  }
  fVar2 = param_1 - param_2;
  if (param_1 <= param_2) {
    fVar2 = param_2 - param_1;
  }
  if (180.0 < fVar2) {
    *param_3 = 360.0 - fVar2;
    uVar1 = 0xffffffff;
    if (param_2 < param_1) {
      uVar1 = 1;
    }
    return uVar1;
  }
  *param_3 = fVar2;
  uVar1 = 0xffffffff;
  if (param_1 <= param_2) {
    uVar1 = 1;
  }
  return uVar1;
}

