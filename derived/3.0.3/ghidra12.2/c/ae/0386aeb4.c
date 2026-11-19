
void FUN_0386aeb4(long param_1,long param_2)

{
  long *plVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar1 = (long *)(*(int *)(param_1 + 0x6c) + param_2);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  FUN_0386af30(param_1,param_2);
  return;
}

