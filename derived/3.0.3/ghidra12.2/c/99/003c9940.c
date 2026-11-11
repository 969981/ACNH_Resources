
void FUN_003c9940(long param_1)

{
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1b0));
  nn::os::FinalizeMessageQueue((MessageQueueType *)(param_1 + 0x58));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x38));
  return;
}

