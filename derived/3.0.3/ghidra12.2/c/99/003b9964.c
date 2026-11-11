
long FUN_003b9964(short *param_1)

{
  long lVar1;
  
  lVar1 = (long)param_1 + (long)*(int *)(param_1 + 2);
  if (*param_1 != 0x220c) {
    lVar1 = 0;
  }
  return lVar1;
}

