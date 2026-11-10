
undefined8 FUN_002c3a1c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  lVar1 = FUN_002ca200(*(long *)(param_1 + 0x18) + 0x180);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x9c) == -1)) {
    return 0;
  }
  return 1;
}

