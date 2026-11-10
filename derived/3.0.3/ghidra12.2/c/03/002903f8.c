
void FUN_002903f8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcdda0 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 4));
  FUN_0028a004(param_1);
  return;
}

