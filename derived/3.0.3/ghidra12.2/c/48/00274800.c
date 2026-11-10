
void FUN_00274800(long param_1,long param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0x138);
  nn::os::LockMutex(pMVar1);
  uVar2 = (ulong)*(uint *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x130) != 0) {
    plVar3 = (long *)(param_1 + 0x160);
    do {
      if (*plVar3 == param_2) {
        *plVar3 = 0;
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

