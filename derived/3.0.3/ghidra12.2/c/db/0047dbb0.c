
void FUN_0047dbb0(MutexType *param_1)

{
  nn::os::LockMutex(param_1);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  nn::os::UnlockMutex(param_1);
  return;
}

