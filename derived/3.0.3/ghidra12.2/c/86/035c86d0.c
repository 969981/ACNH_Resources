
void FUN_035c86d0(long param_1)

{
  long lVar1;
  long lVar2;
  MutexType *pMVar3;
  
  pMVar3 = *(MutexType **)(param_1 + 0x90);
  nn::os::LockMutex(pMVar3);
  lVar1 = *(long *)(param_1 + 0x98);
  lVar2 = *(long *)(param_1 + 0xa0);
  *(long *)(lVar2 + 0x18) = lVar1;
  *(long *)(lVar1 + 0x20) = lVar2;
  nn::os::UnlockMutex(pMVar3);
  return;
}

