
void FUN_00512660(long param_1,long param_2)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x100));
  if (0 < *(int *)(param_1 + 0xe8)) {
    lVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xe0) + lVar1 * 8) == param_2) {
        *(undefined1 *)(*(long *)(param_1 + 0xf0) + lVar1) = 0;
        break;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xe8));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x100));
  return;
}

