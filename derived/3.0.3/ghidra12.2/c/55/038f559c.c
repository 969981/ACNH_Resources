
undefined1 FUN_038f559c(long param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x78) == 1) {
    return (&DAT_040d6ebb)[param_2];
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    return (&DAT_041b370e)[(ulong)param_2 * 4];
  }
  return 0;
}

