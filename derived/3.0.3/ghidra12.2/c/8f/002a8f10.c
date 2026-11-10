
void FUN_002a8f10(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0xd40));
  FUN_002a70a0(param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd40));
  return;
}

