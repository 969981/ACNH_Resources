
undefined8 FUN_0386c7f0(long param_1,undefined8 param_2,uint param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x540));
  if (*(long *)(param_1 + 0x4f8) != param_1 + 0x4f0) {
    lVar5 = (long)*(int *)(param_1 + 0x504);
    lVar6 = *(long *)(param_1 + 0x4f8) - lVar5;
    do {
      pMVar1 = (MutexType *)(lVar6 + 0xf0);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(lVar6 + 0x48) != lVar6 + 0x40) {
        lVar7 = (long)*(int *)(lVar6 + 0x54);
        lVar4 = *(long *)(lVar6 + 0x48) - lVar7;
        do {
          uVar2 = FUN_03869ce0(lVar4,lVar4,param_2,param_3 & 1);
          if ((uVar2 & 1) != 0) {
            nn::os::UnlockMutex(pMVar1);
            uVar3 = 1;
            goto LAB_0386c8e8;
          }
          lVar4 = *(long *)(lVar4 + lVar7 + 8) - lVar7;
        } while (lVar4 != (lVar6 + 0x40) - lVar7);
      }
      nn::os::UnlockMutex(pMVar1);
      lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
    } while (lVar6 != (param_1 + 0x4f0) - lVar5);
  }
  uVar3 = 0;
LAB_0386c8e8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x540));
  return uVar3;
}

