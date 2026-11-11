
void FUN_003e5248(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd00e8 + 0x10);
  FUN_003e5288();
  FUN_003e5540(param_1 + 5);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 1));
  return;
}

