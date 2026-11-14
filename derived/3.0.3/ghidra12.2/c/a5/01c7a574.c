
void FUN_01c7a574(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  uVar4 = param_3[4];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  uVar3 = *(undefined1 *)(param_3 + 5);
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 5) = uVar3;
  param_2[3] = uVar2;
  param_2[4] = uVar4;
  param_2[2] = uVar1;
  if (*(char *)(param_3 + 7) != '\0') {
    param_2[6] = param_3[6];
    *(undefined1 *)(param_2 + 7) = 1;
  }
  return;
}

