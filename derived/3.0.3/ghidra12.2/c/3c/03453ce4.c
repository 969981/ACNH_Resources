
undefined8 FUN_03453ce4(float *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_1;
  fVar2 = param_2[2] - *param_2;
  if (fVar3 <= *param_2) {
    if (param_2[2] <= param_1[2]) {
      uVar1 = 0;
      goto LAB_03453d34;
    }
    param_2[2] = param_1[2];
    *param_2 = param_1[2] - fVar2;
  }
  else {
    *param_2 = fVar3;
    param_2[2] = fVar2 + fVar3;
  }
  uVar1 = 1;
LAB_03453d34:
  fVar3 = param_1[1];
  fVar2 = param_2[3] - param_2[1];
  if (fVar3 <= param_2[1]) {
    fVar3 = param_1[3];
    if (param_2[3] <= fVar3) {
      return uVar1;
    }
    param_2[3] = fVar3;
    param_2[1] = fVar3 - fVar2;
  }
  else {
    param_2[1] = fVar3;
    param_2[3] = fVar2 + fVar3;
  }
  return 1;
}

