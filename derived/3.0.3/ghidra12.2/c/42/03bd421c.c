
uint FUN_03bd421c(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x58))();
  return uVar1 >> 3 & 1;
}

