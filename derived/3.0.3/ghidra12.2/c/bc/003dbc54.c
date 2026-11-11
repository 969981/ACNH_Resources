
long FUN_003dbc54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + *(int *)(param_1 + 0x14);
  if (*(short *)(param_1 + 0x10) != 0x101) {
    lVar1 = 0;
  }
  return lVar1;
}

