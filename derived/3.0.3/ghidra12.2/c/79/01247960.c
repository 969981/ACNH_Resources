
undefined8 FUN_01247960(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1[0x16] == 0) {
    return 0;
  }
  if (param_1[0x17] == 0) {
    (**(code **)(*DAT_05ae53d8 + 0x40))();
  }
  param_1[0x16] = 0;
  (**(code **)(*param_1 + 0x38))(param_1);
  if (param_1[0x17] == 0) {
    uVar1 = FUN_01247610(param_1,param_1 + 1,param_2);
    return uVar1;
  }
  uVar1 = FUN_01248940(param_1,param_1[0x17],param_2);
  return uVar1;
}

