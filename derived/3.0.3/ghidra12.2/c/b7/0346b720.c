
undefined8 FUN_0346b720(long *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = *(long *)PTR_DAT_04bb49e0;
  pMVar1 = (MutexType *)(lVar4 + 0x540);
  nn::os::LockMutex(pMVar1);
  lVar3 = *(long *)(lVar4 + 0x510);
  if (lVar3 != lVar4 + 0x508) {
    do {
      if (lVar3 == *(int *)(lVar4 + 0x51c) + lVar5) {
        nn::os::UnlockMutex(pMVar1);
        FUN_0346b490(param_1);
        if ((char)param_1[7] == '\0') {
          return 0;
        }
        *(undefined1 *)(param_1 + 7) = 0;
        return 0;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != lVar4 + 0x508);
  }
  nn::os::UnlockMutex(pMVar1);
  if ((char)param_1[7] == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    iVar2 = 2;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x34) + -1;
    if (*(int *)((long)param_1 + 0x34) < 1) {
      return 1;
    }
  }
  *(int *)((long)param_1 + 0x34) = iVar2;
  return 0;
}

