
void FUN_0386c6f0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x540));
  if (*(long *)(param_1 + 0x4f8) != param_1 + 0x4f0) {
    lVar2 = (long)*(int *)(param_1 + 0x504);
    lVar3 = *(long *)(param_1 + 0x4f8) - lVar2;
    do {
      nn::os::LockMutex((MutexType *)(lVar3 + 0xf0));
      if (*(long *)(lVar3 + 0x48) != lVar3 + 0x40) {
        lVar4 = (long)*(int *)(lVar3 + 0x54);
        lVar1 = *(long *)(lVar3 + 0x48) - lVar4;
        do {
          FUN_03869bb0(lVar1,lVar1,param_2,param_3 & 1);
          lVar1 = *(long *)(lVar1 + lVar4 + 8) - lVar4;
        } while (lVar1 != (lVar3 + 0x40) - lVar4);
      }
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0xf0));
      lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
    } while (lVar3 != (param_1 + 0x4f0) - lVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x540));
  return;
}

