
void FUN_0047dc40(MutexType *param_1)

{
  MutexType *pMVar1;
  
  nn::os::LockMutex(param_1);
  pMVar1 = param_1 + 0x20;
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x6c)) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  param_1[0x70] = (MutexType)0x1;
  nn::os::UnlockMutex(pMVar1);
  nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x40));
  param_1[0x70] = (MutexType)0x0;
  return;
}

