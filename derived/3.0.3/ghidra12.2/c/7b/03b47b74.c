
void FUN_03b47b74(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x48));
  if (*(long *)(param_1 + 8) != 0) {
    FUN_03b60e78(0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x48));
  return;
}

