
void FUN_0043b720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_d0 [144];
  
  FUN_004225d0(auStack_d0,param_3);
  FUN_00423a80(auStack_d0);
  *param_1 = param_2;
  FUN_0043bfc0(param_1 + 1,auStack_d0);
  FUN_00422550(auStack_d0);
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[2] = param_5;
  param_1[3] = param_6;
  return;
}

