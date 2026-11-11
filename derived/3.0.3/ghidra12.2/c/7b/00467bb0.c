
void FUN_00467bb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

