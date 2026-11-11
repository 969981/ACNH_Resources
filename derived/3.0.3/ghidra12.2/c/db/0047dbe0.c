
void FUN_0047dbe0(long param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = iVar1;
  if ((*(char *)(param_1 + 0x70) != '\0') && (*(int *)(param_1 + 0x68) == iVar1)) {
    nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x40),1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

