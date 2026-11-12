
void FUN_00a82400(long param_1)

{
  long local_18;
  
  local_18 = *(long *)(param_1 + 0x20) / 1000000000 + *(long *)(param_1 + 8) +
             (((*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x38)) - *(long *)(param_1 + 8)
              ) * 1000000000) / 1000000000;
  nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  return;
}

