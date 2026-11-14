
void FUN_015f0540(long param_1,long param_2)

{
  uint *puVar1;
  MutexType *pMVar2;
  long lVar3;
  uint uVar4;
  
  puVar1 = (uint *)(&LAB_007a6498 + param_1);
  pMVar2 = (MutexType *)(param_1 + 0x7a6478);
  nn::os::LockMutex(pMVar2);
  if (0 < (int)*puVar1) {
    uVar4 = 0;
    do {
      nn::os::LockMutex(pMVar2);
      if (uVar4 < *puVar1) {
        lVar3 = *(long *)(*(long *)(&LAB_007a64a0 + param_1) + (long)(int)uVar4 * 8);
      }
      else {
        lVar3 = 0;
      }
      nn::os::UnlockMutex(pMVar2);
      if ((*(long *)(lVar3 + 0x28) == param_2) &&
         ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x38) >> 2 & 1) == 0)) {
        FUN_015efc70(param_1,lVar3);
      }
      else {
        uVar4 = uVar4 + 1;
      }
    } while ((int)uVar4 < (int)*puVar1);
  }
  nn::os::UnlockMutex(pMVar2);
  return;
}

