
uint FUN_02c819dc(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_02c800ec(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x10);
  return (uVar1 ^ 0xffffffff) & 1;
}

