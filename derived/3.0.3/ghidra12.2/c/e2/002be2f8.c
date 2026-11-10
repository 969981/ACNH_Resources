
long FUN_002be2f8(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 3) {
    lVar1 = param_1 + (ulong)param_2 * 0x40 + 0x348;
  }
  return lVar1;
}

