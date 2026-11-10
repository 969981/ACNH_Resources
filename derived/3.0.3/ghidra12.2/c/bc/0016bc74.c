
void FUN_0016bc74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1[1] != 0) {
    puVar1 = (undefined8 *)(param_1[1] + 0x88);
  }
  *puVar1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_1[2] + 1;
  return;
}

