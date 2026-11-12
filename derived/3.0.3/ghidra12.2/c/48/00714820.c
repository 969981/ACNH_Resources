
bool FUN_00714820(long param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2c0));
  iVar1 = *(int *)(param_1 + 0x298);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2c0));
  return iVar1 == 0;
}

