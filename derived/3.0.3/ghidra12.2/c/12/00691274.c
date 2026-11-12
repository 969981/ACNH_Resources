
long FUN_00691274(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = param_1 + *(int *)(param_1 + 0x18);
  }
  return lVar1;
}

