
void FUN_032c8ca0(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  
  pMVar1 = (MutexType *)(param_1 + 5);
  nn::os::LockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x10);
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  if (lVar3 != 0) {
    FUN_032c76f0(lVar3);
    while (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      FUN_032c76f0(lVar2);
      lVar2 = lVar3;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

