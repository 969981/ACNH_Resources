
long FUN_003b978c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + *(int *)(param_1 + 0x1c);
  if (*(short *)(param_1 + 0x18) != 0x2210 || (long)*(int *)(param_1 + 0x1c) == -1) {
    lVar1 = 0;
  }
  return lVar1;
}

