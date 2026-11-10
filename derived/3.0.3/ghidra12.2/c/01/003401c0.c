
void FUN_003401c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_2 + 1);
  if (*(uint *)(param_1 + 1) < uVar2) {
    if (uVar2 < *(uint *)(param_3 + 1)) {
      uVar1 = param_3[1];
      uVar4 = *param_1;
      uVar3 = param_1[1];
      *param_1 = *param_3;
      param_1[1] = uVar1;
    }
    else {
      uVar4 = *param_1;
      uVar3 = param_1[1];
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      *param_2 = uVar4;
      param_2[1] = uVar3;
      if (*(uint *)(param_3 + 1) <= *(uint *)(param_2 + 1)) goto LAB_0034025c;
      uVar4 = *param_2;
      uVar3 = param_2[1];
      uVar1 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar1;
    }
    *param_3 = uVar4;
    param_3[1] = uVar3;
  }
  else if (uVar2 < *(uint *)(param_3 + 1)) {
    uVar4 = *param_2;
    uVar3 = param_2[1];
    uVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    *param_3 = uVar4;
    param_3[1] = uVar3;
    if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + 1)) {
      uVar4 = *param_1;
      uVar3 = param_1[1];
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      *param_2 = uVar4;
      param_2[1] = uVar3;
    }
  }
LAB_0034025c:
  if (*(uint *)(param_3 + 1) < *(uint *)(param_4 + 1)) {
    uVar4 = *param_3;
    uVar3 = param_3[1];
    uVar1 = param_4[1];
    *param_3 = *param_4;
    param_3[1] = uVar1;
    *param_4 = uVar4;
    param_4[1] = uVar3;
    if (*(uint *)(param_2 + 1) < *(uint *)(param_3 + 1)) {
      uVar4 = *param_2;
      uVar3 = param_2[1];
      uVar1 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar1;
      *param_3 = uVar4;
      param_3[1] = uVar3;
      if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + 1)) {
        uVar4 = *param_1;
        uVar3 = param_1[1];
        uVar1 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar1;
        *param_2 = uVar4;
        param_2[1] = uVar3;
      }
    }
  }
  if (*(uint *)(param_4 + 1) < *(uint *)(param_5 + 1)) {
    uVar4 = *param_4;
    uVar3 = param_4[1];
    uVar1 = param_5[1];
    *param_4 = *param_5;
    param_4[1] = uVar1;
    *param_5 = uVar4;
    param_5[1] = uVar3;
    if (*(uint *)(param_3 + 1) < *(uint *)(param_4 + 1)) {
      uVar4 = *param_3;
      uVar3 = param_3[1];
      uVar1 = param_4[1];
      *param_3 = *param_4;
      param_3[1] = uVar1;
      *param_4 = uVar4;
      param_4[1] = uVar3;
      if (*(uint *)(param_2 + 1) < *(uint *)(param_3 + 1)) {
        uVar4 = *param_2;
        uVar3 = param_2[1];
        uVar1 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = uVar1;
        *param_3 = uVar4;
        param_3[1] = uVar3;
        if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + 1)) {
          uVar4 = *param_1;
          uVar3 = param_1[1];
          uVar1 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = uVar1;
          *param_2 = uVar4;
          param_2[1] = uVar3;
        }
      }
    }
  }
  return;
}

