
uint FUN_01a09450(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x118))();
  return (uVar1 ^ 0xffffffff) & 1;
}

