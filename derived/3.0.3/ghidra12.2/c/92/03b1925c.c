
uint FUN_03b1925c(long *param_1)

{
  uint uVar1;
  long in_x5;
  
  *(undefined1 *)(in_x5 + 0xa8) = 1;
  uVar1 = FUN_00368d60();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1 & 1;
}

