
long FUN_003b8f50(long param_1,int param_2)

{
  if (param_2 == -1) {
    return 0;
  }
  param_1 = param_1 + *(int *)(param_1 + 4);
  return param_1 + *(int *)(param_1 + (long)param_2 * 0xc + 8);
}

