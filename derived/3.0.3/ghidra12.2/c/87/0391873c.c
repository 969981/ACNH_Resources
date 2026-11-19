
void FUN_0391873c(long param_1,long param_2)

{
  long *plVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x8d0));
  plVar1 = (long *)(*(int *)(param_1 + 0x224) + param_2);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + -1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x8d0));
  if (*(long *)(param_2 + 0x168) != 0 || *(long *)(param_2 + 0x160) != 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x890));
    plVar1 = (long *)(*(int *)(param_1 + 0x23c) + param_2);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x890));
  }
  *(undefined4 *)(param_2 + 0x2a38) = 0;
  *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + -1;
  return;
}

