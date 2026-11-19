
void FUN_0386a980(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar5 = (long *)(param_1 + 0x58);
  plVar6 = (long *)*plVar5;
  if (plVar6 != plVar5) {
    iVar2 = *(int *)(param_1 + 0x6c);
    do {
      plVar6 = (long *)*plVar6;
      FUN_03868800();
    } while ((long)plVar6 - (long)iVar2 != (long)plVar5 - (long)iVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  lVar3 = DAT_05ae62d0;
  if (*(int *)(param_1 + 0xc0) == 5) {
    pMVar1 = (MutexType *)(DAT_05ae62d0 + 0x540);
    nn::os::LockMutex(pMVar1);
    plVar5 = (long *)(*(int *)(lVar3 + 0x51c) + param_1);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar3 + 0x518) = *(int *)(lVar3 + 0x518) + -1;
    nn::os::UnlockMutex(pMVar1);
    uVar4 = 2;
  }
  else {
    if (*(int *)(param_1 + 0xc0) != 6) {
      return;
    }
    uVar4 = 3;
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  return;
}

