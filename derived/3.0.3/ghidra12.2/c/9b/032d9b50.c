
void FUN_032d9b50(long param_1,long *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long *local_50;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  if (*param_2 != 0) {
    pMVar1 = (MutexType *)(param_1 + 0x240);
    nn::os::LockMutex(pMVar1);
    lVar3 = param_2[1];
    lVar2 = param_2[2];
    param_2[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    if (*(long **)(param_1 + 0x218) == param_2) {
      *(long *)(param_1 + 0x218) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    lVar3 = *(long *)(param_1 + 0x218);
    nn::os::UnlockMutex(pMVar1);
    if (lVar3 != 0) {
      nn::os::LockMutex(pMVar1);
      lVar3 = *(long *)(param_1 + 0x218);
      do {
        lVar2 = lVar3;
        lVar3 = *(long *)(lVar2 + 0x10);
      } while (*(long *)(lVar2 + 0x10) != 0);
      *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar2 + 0x1c);
      nn::os::UnlockMutex(pMVar1);
      return;
    }
    local_50 = (long *)0x0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0x3e8000003f333333;
    *(undefined8 *)(param_1 + 0x278) = 0x3e8000003f333333;
    FUN_032d9b50(DAT_0572cca0,&local_50);
    if (local_50 != (long *)0x0) {
      if ((long **)*local_50 == &local_50) {
        *local_50 = local_40;
      }
      if (local_40 != 0) {
        *(long *)(local_40 + 8) = local_48;
      }
      if (local_48 != 0) {
        *(long *)(local_48 + 0x10) = local_40;
      }
    }
  }
  return;
}

