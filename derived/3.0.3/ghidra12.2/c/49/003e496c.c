
void FUN_003e496c(long *param_1)

{
  int iVar1;
  
  *param_1 = (long)(PTR_DAT_04bd0070 + 0x10);
  if (*(char *)((long)param_1 + 0x369) == '\x01') {
    nn::os::LockMutex((MutexType *)(param_1 + 0xbe));
    iVar1 = *(int *)((long)param_1 + 0x36c);
    if (iVar1 == 0) {
      FUN_003dc30c(param_1 + 0x5d,param_1 + 0x6e,1);
      iVar1 = *(int *)((long)param_1 + 0x36c);
    }
    *(int *)((long)param_1 + 0x36c) = iVar1 + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xbe));
  }
  if ((char)param_1[0x6d] != '\0') {
    FUN_003dc39c(param_1 + 0x5d);
    *(undefined1 *)(param_1 + 0x6d) = 0;
  }
  FUN_003b8338(param_1);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xbe));
  FUN_003b82f4(param_1);
  return;
}

