
long FUN_014f21bc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x248));
  if (*(int *)(param_1 + 0x220) < 1) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x218);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + -1;
  }
  iVar1 = *(int *)(param_1 + 0x224);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x248));
  lVar2 = 0;
  if ((plVar4 != (long *)0x0) && (lVar3 = (long)plVar4 - (long)iVar1, lVar3 != 0)) {
    FUN_014e70e0(lVar3,param_2);
    nn::os::LockMutex((MutexType *)(param_1 + 0x2a0));
    plVar4 = (long *)(lVar3 + *(int *)(param_1 + 0x27c));
    lVar2 = *(long *)(param_1 + 0x268);
    *(long **)(param_1 + 0x268) = plVar4;
    *plVar4 = lVar2;
    plVar4[1] = param_1 + 0x268;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 8) = plVar4;
    }
    *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2a0));
    lVar2 = lVar3;
  }
  return lVar2;
}

