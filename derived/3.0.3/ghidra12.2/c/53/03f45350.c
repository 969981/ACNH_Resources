
undefined8 FUN_03f45350(long param_1,long *param_2,uint param_3)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  LightEventType *pLVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x128) < 1) {
    return 0;
  }
  pMVar1 = (MutexType *)(param_1 + 0x38);
  nn::os::LockMutex(pMVar1);
  lVar4 = FUN_03f45620(param_1,param_3 & 1);
  if (lVar4 == 0) {
    pMVar2 = (MutexType *)(param_1 + 0x78);
    nn::os::LockMutex(pMVar2);
    pLVar3 = (LightEventType *)(param_1 + 0xb8);
    *(byte *)(param_1 + 9) = (*(byte *)(param_1 + 9) ^ 0xff) & 1;
    nn::os::ClearLightEvent(pLVar3);
    nn::os::UnlockMutex(pMVar2);
    if ((param_3 & 1) == 0) {
      lVar4 = FUN_03f45620(param_1,0);
      nn::os::UnlockMutex(pMVar1);
      if (lVar4 == 0) {
        return 0;
      }
      goto LAB_03f453a8;
    }
    lVar4 = FUN_03f45620(param_1,1);
    if (lVar4 == 0) {
      do {
        nn::os::WaitLightEvent(pLVar3);
        nn::os::LockMutex(pMVar2);
        *(byte *)(param_1 + 9) = (*(byte *)(param_1 + 9) ^ 0xff) & 1;
        nn::os::ClearLightEvent(pLVar3);
        nn::os::UnlockMutex(pMVar2);
        lVar4 = FUN_03f45620(param_1,1);
      } while (lVar4 == 0);
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB_03f453a8:
  *param_2 = lVar4;
  return 1;
}

