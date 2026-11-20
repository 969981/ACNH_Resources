
void FUN_03f2bc40(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = (long *)(*(int *)(param_1 + 0x54) + param_2);
  if (plVar1[1] == 0 && *plVar1 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  plVar1 = (long *)(param_1 + 0x58);
  plVar2 = (long *)(*(int *)(param_1 + 0x6c) + param_2);
  lVar4 = *plVar2;
  plVar3 = (long *)plVar2[1];
  if (plVar3 != (long *)0x0 || lVar4 != 0) {
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar3;
      plVar3 = (long *)plVar2[1];
    }
    if (plVar3 != (long *)0x0) {
      *plVar3 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    plVar2 = (long *)(*(int *)(param_1 + 0x6c) + param_2);
  }
  lVar4 = *plVar1;
  *plVar1 = (long)plVar2;
  *plVar2 = lVar4;
  plVar2[1] = (long)plVar1;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return;
}

