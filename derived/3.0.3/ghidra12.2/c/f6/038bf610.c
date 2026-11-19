
void FUN_038bf610(long param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  lVar7 = *(long *)(param_1 + 0x120);
  if ((lVar7 != 0) &&
     (uVar3 = nn::os::TryLockMutex
                        ((MutexType *)(*(long *)(*(long *)(param_1 + 0x40) + 0x40) + 0x28)),
     (uVar3 & 1) != 0)) {
    FUN_038beec0(param_1,lVar7);
    nn::os::UnlockMutex((MutexType *)(*(long *)(*(long *)(param_1 + 0x40) + 0x40) + 0x28));
  }
  plVar4 = *(long **)(param_1 + 0x60);
  while (plVar2 = plVar4, plVar2 != (long *)(param_1 + 0x58)) {
    plVar4 = (long *)plVar2[1];
    if (plVar2[3] != 0) {
      plVar2[3] = 0;
      plVar6 = plVar4;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar4;
        plVar6 = (long *)plVar2[1];
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
  }
  plVar4 = *(long **)(param_1 + 0x90);
  while (plVar2 = plVar4, plVar2 != (long *)(param_1 + 0x88)) {
    plVar4 = (long *)plVar2[1];
    if (plVar2[3] != 0) {
      plVar2[3] = 0;
      plVar6 = plVar4;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar4;
        plVar6 = (long *)plVar2[1];
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
    }
  }
  plVar4 = *(long **)(param_1 + 0xc0);
  while (plVar2 = plVar4, plVar2 != (long *)(param_1 + 0xb8)) {
    plVar4 = (long *)plVar2[1];
    if (plVar2[3] != 0) {
      plVar2[3] = 0;
      plVar6 = plVar4;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar4;
        plVar6 = (long *)plVar2[1];
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
    }
  }
  plVar4 = *(long **)(param_1 + 0xd8);
  while (plVar2 = plVar4, plVar2 != (long *)(param_1 + 0xd0)) {
    plVar4 = (long *)plVar2[1];
    if (plVar2[3] != 0) {
      plVar2[3] = 0;
      plVar6 = plVar4;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar4;
        plVar6 = (long *)plVar2[1];
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
    }
  }
  if (0 < DAT_05ae7550) {
    lVar7 = 0;
    iVar5 = DAT_05ae7550;
    do {
      plVar4 = *(long **)(param_1 + 0xe8 + lVar7 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x58))();
        iVar5 = DAT_05ae7550;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  FUN_038bdb80(param_1);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  *(long *)(param_1 + 0x1c0) = param_1 + 0x120;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  nn::os::LockMutex(pMVar1);
  if (*(long *)(param_1 + 0x1b0) == 0) {
    FUN_038beb3c(param_1,param_1 + 0x128,0);
  }
  else {
    FUN_038c0344(*(long *)(param_1 + 0x1b0),param_1 + 0x128);
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  return;
}

