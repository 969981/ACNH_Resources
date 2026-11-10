
undefined8 FUN_00250604(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0 || *(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  uVar1 = FUN_0025b33c();
  return uVar1;
}

