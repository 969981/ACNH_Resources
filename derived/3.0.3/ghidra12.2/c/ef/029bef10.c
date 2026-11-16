
void FUN_029bef10(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  plVar1 = (long *)(param_1 + 0x98);
  do {
    plVar1 = (long *)plVar1[1];
    if (plVar1 == (long *)(param_1 + 0x98)) goto LAB_029beff8;
    plVar2 = plVar1 + -1;
  } while (*plVar2 != param_2);
  if ((plVar1 != (long *)0x0) && (plVar2 != (long *)0x0)) {
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    plVar1[-1] = *(long *)(param_1 + 0xb0);
    *(long **)(param_1 + 0xb0) = plVar2;
    if (*(int *)(param_1 + 0x2b8) < *(int *)(param_1 + 0x2d0)) {
      plVar2 = *(long **)(param_1 + 0x2c0);
      plVar1 = (long *)(param_1 + 0x2a8);
      if (plVar2 != (long *)0x0) {
        *(long *)(param_1 + 0x2c0) = *plVar2;
      }
      *plVar2 = param_2;
      plVar2[2] = 0;
      plVar3 = plVar2 + 1;
      *plVar3 = 0;
      lVar4 = *plVar1;
      *plVar1 = (long)plVar3;
      plVar2[2] = (long)plVar1;
      *plVar3 = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar3;
      }
      *(int *)(param_1 + 0x2b8) = *(int *)(param_1 + 0x2b8) + 1;
    }
  }
LAB_029beff8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}

