
long FUN_016207ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)((long)*(int *)(param_1 + 0x10) + *(long *)(param_1 + 8) + 8) -
          (long)*(int *)(param_1 + 0x10);
  *(long *)(param_1 + 8) = lVar1;
  return lVar1;
}

