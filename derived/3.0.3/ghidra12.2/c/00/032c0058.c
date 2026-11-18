
void FUN_032c0058(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = DAT_0572e5c8;
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (*plVar6 != 0)) {
    pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar1);
    lVar2 = plVar6[1];
    lVar3 = plVar6[2];
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar6[1] = 0;
    if ((long *)*plVar5 == plVar6) {
      *plVar5 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  lVar2 = DAT_05688e68;
  plVar5 = (long *)*param_1;
  if (*plVar5 != 0) {
    lVar3 = plVar5[1];
    lVar4 = plVar5[2];
    plVar5[2] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    if (*(long **)(lVar2 + 0x560) == plVar5) {
      *(long *)(lVar2 + 0x560) = lVar4;
    }
    if (lVar4 != 0) {
      *(long *)(lVar4 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
  }
  return;
}

