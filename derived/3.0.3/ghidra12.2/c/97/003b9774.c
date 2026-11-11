
long FUN_003b9774(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + *(int *)(param_1 + 8);
  if (*(short *)(param_1 + 4) != 0x101) {
    lVar1 = 0;
  }
  return lVar1;
}

