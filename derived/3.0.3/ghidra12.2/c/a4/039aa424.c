
undefined8 FUN_039aa424(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[3];
  if (lVar3 != param_2) {
    if (lVar3 != 0) {
      nn::os::LockMutex((MutexType *)(lVar3 + 0x1f8));
      if (param_1[5] != 0 || param_1[4] != 0) {
        lVar4 = param_1[3];
        nn::os::LockMutex((MutexType *)(lVar4 + 0x1f8));
        plVar1 = (long *)((long)*(int *)(lVar4 + 0x1d4) + (long)param_1);
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar4 + 0x1d0) = *(int *)(lVar4 + 0x1d0) + -1;
        nn::os::UnlockMutex((MutexType *)(lVar4 + 0x1f8));
        param_1[3] = 0;
        (**(code **)(*param_1 + 0x18))(param_1);
      }
      nn::os::UnlockMutex((MutexType *)(lVar3 + 0x1f8));
    }
    nn::os::LockMutex((MutexType *)(param_2 + 0x1f8));
    plVar1 = (long *)((long)*(int *)(param_2 + 0x1d4) + (long)param_1);
    lVar3 = *(long *)(param_2 + 0x1c0);
    *(long **)(param_2 + 0x1c0) = plVar1;
    *plVar1 = lVar3;
    plVar1[1] = param_2 + 0x1c0;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar1;
    }
    *(int *)(param_2 + 0x1d0) = *(int *)(param_2 + 0x1d0) + 1;
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x1f8));
    param_1[3] = param_2;
  }
  param_1[2] = *(long *)(param_3 + 8);
  if (param_1[5] == 0 && param_1[4] == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x039aa54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  return uVar2;
}

