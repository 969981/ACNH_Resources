
void FUN_03db9aa0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  uVar1 = param_3[2];
  param_2[3] = param_3[3];
  param_2[2] = uVar1;
  uVar1 = param_3[4];
  param_2[5] = param_3[5];
  param_2[4] = uVar1;
  uVar1 = param_3[6];
  param_2[7] = param_3[7];
  param_2[6] = uVar1;
  return;
}

