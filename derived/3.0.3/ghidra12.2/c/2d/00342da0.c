
undefined8 FUN_00342da0(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_2;
  fVar3 = *param_1;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar3 <= fVar2) goto LAB_00342dc0;
  }
  else if (fVar2 <= fVar3) {
LAB_00342dc0:
    fVar3 = *param_3;
    if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
      if (fVar2 <= fVar3) {
        return 0;
      }
    }
    else if (fVar3 <= fVar2) {
      return 0;
    }
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar1;
    fVar2 = *param_2;
    fVar3 = *param_1;
    if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
      if (fVar3 <= fVar2) {
        return 1;
      }
    }
    else if (fVar2 <= fVar3) {
      return 1;
    }
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
    return 2;
  }
  fVar3 = *param_3;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar3 < fVar2) goto LAB_00342e80;
  }
  else if (fVar2 < fVar3) {
LAB_00342e80:
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar1;
    return 1;
  }
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar1;
  fVar2 = (float)uVar1;
  fVar3 = *param_3;
  if ((0.0 <= fVar3) || (0.0 <= fVar2)) {
    if (fVar2 <= fVar3) {
      return 1;
    }
  }
  else if (fVar3 <= fVar2) {
    return 1;
  }
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar1;
  return 2;
}

