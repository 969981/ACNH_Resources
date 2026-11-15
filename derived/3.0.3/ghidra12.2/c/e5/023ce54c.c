
undefined8 FUN_023ce54c(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x178) == 0) &&
     ((*(long *)(param_1 + 0x70) == 0 || (2 < *(int *)(*(long *)(param_1 + 0x70) + 0x280) - 0x10aU))
     )) {
    uVar1 = FUN_023ce578();
    return uVar1;
  }
  return 0;
}

