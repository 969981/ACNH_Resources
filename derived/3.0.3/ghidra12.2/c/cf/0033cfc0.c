
void FUN_0033cfc0(long param_1,long param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(char *)(param_2 + 0x1c) == '\0') {
    FUN_0032c410("The EmitterSet has been already deleted.\n");
    return;
  }
  pMVar1 = (MutexType *)(param_1 + 0x1918);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(ulong *)(param_1 + 0xc40);
  if (0 < (int)uVar2) {
    uVar4 = uVar2 & 0xffffffff;
    lVar3 = 0xffffffff;
    plVar5 = *(long **)(param_1 + 0xc38);
    do {
      if (*plVar5 == param_2) {
        if (lVar3 != 0) {
          nn::os::UnlockMutex(pMVar1);
          return;
        }
        break;
      }
      lVar3 = lVar3 + -1;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  *(ulong *)(param_1 + 0xc40) = uVar2 + 1;
  (*(long **)(param_1 + 0xc38))[uVar2] = param_2;
  nn::os::UnlockMutex(pMVar1);
  return;
}

