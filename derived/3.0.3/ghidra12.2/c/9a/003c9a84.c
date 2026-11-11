
long * FUN_003c9a84(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  pMVar1 = (MutexType *)(param_1 + 7);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  plVar3 = (long *)param_1[5];
  if (plVar3 == param_1 + 4) {
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    plVar3 = (long *)param_1[3];
    if (plVar3 == param_1 + 2) {
      nn::os::UnlockMutex(pMVar1);
      nn::os::LockMutex(pMVar1);
      plVar3 = (long *)param_1[1];
      if (plVar3 == param_1) {
        plVar5 = (long *)0x0;
        goto LAB_003c9b14;
      }
    }
  }
  plVar2 = (long *)plVar3[1];
  plVar5 = plVar3 + -1;
  lVar4 = *plVar2;
  *(long **)(*plVar3 + 8) = plVar2;
  *plVar2 = *plVar3;
  *(long **)(lVar4 + 8) = plVar3;
  *plVar3 = lVar4;
LAB_003c9b14:
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  return plVar5;
}

