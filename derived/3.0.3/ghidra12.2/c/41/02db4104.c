
long FUN_02db4104(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x128 + (ulong)param_2 * 0x20;
  if (6 < param_2) {
    lVar1 = param_1 + 0x128;
  }
  return lVar1;
}

