
long FUN_003c98a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  if (*(int *)(param_1 + 4) != 0x21f) {
    lVar1 = 0;
  }
  return lVar1;
}

