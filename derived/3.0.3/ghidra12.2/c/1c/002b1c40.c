
void FUN_002b1c40(long param_1,uint param_2)

{
  *(long *)(param_1 + 0x678) = (long)(*(long *)PTR_DAT_04bcd020 * (ulong)param_2) / 1000;
  return;
}

