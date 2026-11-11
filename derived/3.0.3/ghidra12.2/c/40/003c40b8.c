
void FUN_003c40b8(long param_1,int param_2,undefined1 param_3)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  lVar1 = *(long *)(param_1 + 0x68) + (long)param_2 * 0x14;
  *(undefined1 *)(lVar1 + 0x10) = param_3;
  *(undefined1 *)(lVar1 + 0x12) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  return;
}

