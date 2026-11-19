
void FUN_03b6e5e4(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[0x34];
  if (plVar5 != (long *)0x0) {
    lVar2 = nn::os::GetSystemTick();
    *plVar5 = lVar2;
  }
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)param_1[0x19];
  nn::os::UnlockMutex(pMVar1);
  if (plVar4 != (long *)0x0) {
    if ((int)plVar4[1] == 4) {
      nn::os::LockMutex(pMVar1);
      *(undefined1 *)(param_1 + 0x1a) = 0;
      param_1[0x1b] = 0;
      nn::os::UnlockMutex(pMVar1);
      if ((long *)param_1[0x19] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x19] + 0x38))();
      }
      uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
      if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*param_1 + 0x50))(param_1), (uVar3 & 1) != 0))
      {
        param_1[0x19] = 0;
      }
    }
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar5 != (long *)0x0) {
    lVar2 = nn::os::GetSystemTick();
    plVar5[1] = lVar2 - *plVar5;
  }
  return;
}

