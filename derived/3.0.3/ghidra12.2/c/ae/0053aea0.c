
long FUN_0053aea0(long param_1,int param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 400) == 0) {
    return 0;
  }
  lVar1 = 0;
  if ((-1 < param_2) &&
     (param_2 < *(int *)(param_1 + 0x180) + *(int *)(*(long *)(param_1 + 0x18) + 0xd8))) {
    lVar1 = *(long *)(param_1 + 400) + (long)param_2 * 0xa0;
  }
  return lVar1;
}

