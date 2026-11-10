
void FUN_00286110(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  while (puVar1 != param_1) {
    puVar2 = (undefined8 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}

