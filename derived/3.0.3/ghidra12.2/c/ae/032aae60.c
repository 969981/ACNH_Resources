
void FUN_032aae60(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = DAT_0572baa0;
  plVar5 = (long *)*param_1;
  plVar6 = plVar5 + 1;
  if (*plVar6 != 0) {
    lVar2 = plVar5[2];
    lVar3 = plVar5[3];
    plVar5[3] = 0;
    *plVar6 = 0;
    plVar5[2] = 0;
    if ((long *)*plVar4 == plVar6) {
      *plVar4 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  (**(code **)(*plVar5 + 0x30))();
  plVar4 = DAT_0572e5c8;
  plVar5 = (long *)param_1[1];
  if (*plVar5 != 0) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    lVar2 = plVar5[1];
    lVar3 = plVar5[2];
    plVar5[2] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    if ((long *)*plVar4 == plVar5) {
      *plVar4 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  plVar4 = DAT_0572e5c8;
  plVar5 = (long *)param_1[2];
  if (*plVar5 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
  nn::os::LockMutex(pMVar1);
  lVar2 = plVar5[1];
  lVar3 = plVar5[2];
  plVar5[2] = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  if ((long *)*plVar4 == plVar5) {
    *plVar4 = lVar3;
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar3;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

