
void FUN_001d7828(long param_1,long *param_2)

{
  long local_18;
  
  if (DAT_04c58f48 != 0) {
    if (param_2 == (long *)0x0) {
      FUN_00187810(&local_18);
      if (local_18 - *(long *)(param_1 + 0x40) <= (long)(ulong)DAT_04c58f48) {
        return;
      }
    }
    else {
      local_18 = *param_2;
      if (local_18 - *(long *)(param_1 + 0x40) <= (long)(ulong)DAT_04c58f48) {
        return;
      }
    }
    *(long *)(param_1 + 0x40) = local_18;
    FUN_001d7580(param_1);
  }
  return;
}

