
undefined * FUN_003c689c(long param_1,uint param_2)

{
  if ((int)param_2 < 0x10) {
    return (undefined *)(param_1 + (long)(int)param_2 * 2 + 0x1c0);
  }
  if (param_2 < 0x20) {
    return PTR_DAT_04bd0388 + (ulong)(param_2 - 0x10) * 2;
  }
  return (undefined *)0x0;
}

