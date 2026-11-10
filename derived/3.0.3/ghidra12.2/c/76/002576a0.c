
void FUN_002576a0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcd928 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xa9));
  FUN_00220f6c(param_1 + 0x9e);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x96));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x92));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x69));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 100));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5d));
  FUN_0021f584(param_1 + 0x59);
  FUN_0021f584(param_1 + 0x55);
  FUN_0025c86c(param_1 + 0x4d);
  FUN_0025c86c(param_1 + 0x45);
  FUN_0025c86c(param_1 + 0x3d);
  FUN_0025c86c(param_1 + 0x35);
  FUN_0025c86c(param_1 + 0x2d);
  FUN_0025c86c(param_1 + 0x25);
  FUN_0025c86c(param_1 + 0x1d);
  FUN_0025c86c(param_1 + 0x15);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x11));
  param_1[0xc] = (long)(PTR_DAT_04bcba18 + 0x10);
  FUN_0021f584(param_1 + 0xd);
  FUN_002aa8b4(param_1);
  return;
}

