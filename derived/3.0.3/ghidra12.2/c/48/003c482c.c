
undefined8 FUN_003c482c(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0x28) + (long)param_2 * 0x10;
  if ((*(long *)(lVar1 + 8) == lVar1) &&
     (lVar1 = *(long *)(param_1 + 0x30) + (long)param_2 * 0x10, *(long *)(lVar1 + 8) == lVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return uVar2;
}

