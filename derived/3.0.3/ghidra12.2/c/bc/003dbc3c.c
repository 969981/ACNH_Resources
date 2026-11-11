
long FUN_003dbc3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + *(int *)(param_1 + 0xc);
  if (*(short *)(param_1 + 8) != 0x101) {
    lVar1 = 0;
  }
  return lVar1;
}

