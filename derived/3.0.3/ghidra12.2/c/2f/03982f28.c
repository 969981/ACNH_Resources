
void FUN_03982f28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *param_6;
  param_5[1] = param_6[1];
  *param_5 = uVar1;
  uVar1 = param_6[2];
  param_5[3] = param_6[3];
  param_5[2] = uVar1;
  uVar1 = param_6[4];
  param_5[5] = param_6[5];
  param_5[4] = uVar1;
  FUN_007535b4(param_5 + 6);
  FUN_03982fb0(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  return;
}

