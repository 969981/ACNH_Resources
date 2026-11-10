
uint FUN_003736c4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00368d60();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,param_3);
  }
  return uVar1 & 1;
}

