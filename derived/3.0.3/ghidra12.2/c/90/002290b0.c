
long FUN_002290b0(long param_1,uint param_2)

{
  param_1 = param_1 + (ulong)param_2 * 0x68;
  if (0xe < param_2) {
    param_1 = 0;
  }
  return param_1;
}

