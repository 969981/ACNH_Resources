
void FUN_0386d810(long param_1,long param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  puVar2 = PTR_DAT_04bb49e0;
  lVar5 = *(long *)PTR_DAT_04bb49e0;
  pMVar1 = (MutexType *)(lVar5 + 0x540);
  nn::os::LockMutex(pMVar1);
  lVar5 = FUN_0386a210(lVar5 + 0x4f0,uVar3);
  nn::os::UnlockMutex(pMVar1);
  if (lVar5 != 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
    lVar6 = *(long *)puVar2;
    pMVar1 = (MutexType *)(lVar6 + 0x540);
    nn::os::LockMutex(pMVar1);
    lVar6 = FUN_0386a210(lVar6 + 0x4f0,uVar3);
    nn::os::UnlockMutex(pMVar1);
    if (lVar6 != 0) {
      lVar7 = *(long *)puVar2;
      pMVar1 = (MutexType *)(lVar7 + 0x540);
      nn::os::LockMutex(pMVar1);
      lVar4 = *(long *)(lVar7 + 0x510);
      if (lVar4 != lVar7 + 0x508) {
        do {
          if (lVar4 == *(int *)(lVar7 + 0x51c) + lVar6) {
            nn::os::UnlockMutex(pMVar1);
            if (param_2 == 0) {
              return;
            }
            goto LAB_0386d90c;
          }
          lVar4 = *(long *)(lVar4 + 8);
        } while (lVar4 != lVar7 + 0x508);
      }
      nn::os::UnlockMutex(pMVar1);
      FUN_0386c560(*(undefined8 *)puVar2,lVar6);
    }
    if (param_2 != 0) {
LAB_0386d90c:
      pMVar1 = (MutexType *)(lVar5 + 0xf0);
      nn::os::LockMutex(pMVar1);
      lVar6 = *(long *)(lVar5 + 0x60);
      if (lVar6 != lVar5 + 0x58) {
        do {
          if (lVar6 == *(int *)(lVar5 + 0x6c) + param_2) {
            nn::os::UnlockMutex(pMVar1);
            return;
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while (lVar6 != lVar5 + 0x58);
      }
      nn::os::UnlockMutex(pMVar1);
      FUN_0386b170(lVar5,param_2);
      return;
    }
  }
  return;
}

