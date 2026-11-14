
bool FUN_014f311c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x248));
  if (*(int *)(param_1 + 0x220) < 1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x218);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + -1;
  }
  lVar1 = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = (long)plVar2 - (long)*(int *)(param_1 + 0x224);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x248));
  if (lVar1 != 0) {
    FUN_014e70e0(lVar1,param_2);
    nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
    plVar2 = (long *)(*(int *)(param_1 + 0x1bc) + lVar1);
    lVar3 = *(long *)(param_1 + 0x1a8);
    *(long **)(param_1 + 0x1a8) = plVar2;
    *plVar2 = lVar3;
    plVar2[1] = param_1 + 0x1a8;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
  }
  return lVar1 != 0;
}

