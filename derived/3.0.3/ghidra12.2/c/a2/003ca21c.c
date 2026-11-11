
void FUN_003ca21c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd04c0 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xa0));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8a));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x6d));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x69));
  nn::os::FinalizeMessageQueue((MessageQueueType *)(param_1 + 0x3f));
  FUN_003cb0d4(param_1 + 1);
  return;
}

