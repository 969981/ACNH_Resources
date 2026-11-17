
long FUN_02db40ec(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48 + (ulong)param_2 * 0x20;
  if (6 < param_2) {
    lVar1 = param_1 + 0x48;
  }
  return lVar1;
}

