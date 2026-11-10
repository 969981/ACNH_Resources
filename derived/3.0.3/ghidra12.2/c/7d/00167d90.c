
undefined8 FUN_00167d90(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00168534(param_2);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x28) = uVar1 & 0x7fffffff;
  return 0;
}

