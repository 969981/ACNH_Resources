
void FUN_039aa568(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[3] == 0) {
    return;
  }
  pMVar1 = (MutexType *)(param_1[3] + 0x1f8);
  nn::os::LockMutex(pMVar1);
  if (param_1[5] != 0 || param_1[4] != 0) {
    lVar3 = param_1[3];
    nn::os::LockMutex((MutexType *)(lVar3 + 0x1f8));
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x1d4) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x1d0) = *(int *)(lVar3 + 0x1d0) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x1f8));
    param_1[3] = 0;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

