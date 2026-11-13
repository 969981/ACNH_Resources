
undefined8 FUN_014cbd68(long param_1)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0xb58) == 0) || ((*(byte *)(param_1 + 0xa2d) & 1) == 0)) ||
     (*(int *)(param_1 + 0xb58) == 0)) {
    return 0;
  }
  uVar1 = FUN_014ed7fc(param_1 + 0xb40);
  return uVar1;
}

