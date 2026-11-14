
void FUN_015fe930(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_015fe180();
  fVar2 = *param_4;
  fVar3 = *param_3;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar2 <= fVar3) goto LAB_015fea14;
  }
  else if (fVar3 <= fVar2) goto LAB_015fea14;
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar1;
  fVar2 = *param_3;
  fVar3 = *param_2;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar2 <= fVar3) goto LAB_015fea14;
  }
  else if (fVar3 <= fVar2) goto LAB_015fea14;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar1;
  fVar2 = *param_2;
  fVar3 = *param_1;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar2 <= fVar3) goto LAB_015fea14;
  }
  else if (fVar3 <= fVar2) goto LAB_015fea14;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar1;
LAB_015fea14:
  fVar2 = *param_5;
  fVar3 = *param_4;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar2 <= fVar3) {
      return;
    }
  }
  else if (fVar3 <= fVar2) {
    return;
  }
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = *(undefined8 *)param_5;
  *(undefined8 *)param_5 = uVar1;
  fVar2 = *param_4;
  fVar3 = *param_3;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar2 <= fVar3) {
      return;
    }
  }
  else if (fVar3 <= fVar2) {
    return;
  }
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar1;
  fVar2 = *param_3;
  fVar3 = *param_2;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar2 <= fVar3) {
      return;
    }
  }
  else if (fVar3 <= fVar2) {
    return;
  }
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar1;
  fVar2 = *param_2;
  fVar3 = *param_1;
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) {
    if (fVar2 <= fVar3) {
      return;
    }
  }
  else if (fVar3 <= fVar2) {
    return;
  }
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar1;
  return;
}

