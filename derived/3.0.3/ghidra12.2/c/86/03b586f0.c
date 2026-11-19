
void FUN_03b586f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x10));
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
  plVar2 = *(long **)(param_1 + 0x1b0);
  while (plVar2 != (long *)(param_1 + 0x1a8)) {
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar1;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar1;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + -1;
    plVar2[-0x14] = *(long *)(param_1 + 0x1c0);
    *(long **)(param_1 + 0x1c0) = plVar2 + -0x14;
    plVar2 = plVar1;
  }
  return;
}

