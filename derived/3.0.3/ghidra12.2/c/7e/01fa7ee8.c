
uint FUN_01fa7ee8(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x560))(param_1,0);
  return (uVar1 ^ 0xffffffff) & 1;
}

