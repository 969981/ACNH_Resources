
void FUN_01789ad0(undefined8 *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_049c3630;
  lVar3 = DAT_05290150;
  if ((DAT_05290150 != 0) && (param_1[3] != 0 || param_1[2] != 0)) {
    pMVar1 = (MutexType *)(DAT_05290150 + 0x28);
    nn::os::LockMutex(pMVar1);
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar3 + 0x5c) + 8);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + -1;
    nn::os::UnlockMutex(pMVar1);
  }
  param_1[1] = &PTR_FUN_049c3c70;
  lVar3 = DAT_05290150;
  if ((param_1[3] == 0 && param_1[2] == 0) || (DAT_05290150 == 0)) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_05290150 + 0x28);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar3 + 0x5c) + 8);
  if (*plVar2 != 0) {
    *(long *)(*plVar2 + 8) = plVar2[1];
  }
  if ((long *)plVar2[1] != (long *)0x0) {
    *(long *)plVar2[1] = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + -1;
  nn::os::UnlockMutex(pMVar1);
  return;
}

