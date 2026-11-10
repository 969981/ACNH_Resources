
void FUN_00290394(long *param_1)

{
  FUN_00289f24();
  *param_1 = (long)(PTR_DAT_04bcdda0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  return;
}

