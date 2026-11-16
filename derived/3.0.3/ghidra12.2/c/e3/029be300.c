
void FUN_029be300(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  plVar1 = *(long **)(param_1 + 0xa0);
  if (plVar1 != (long *)(param_1 + 0x98)) {
    iVar3 = *(int *)(param_1 + 0x2b8);
    if (iVar3 < *(int *)(param_1 + 0x2d0)) {
      plVar2 = (long *)(param_1 + 0x2a8);
      do {
        if (iVar3 < *(int *)(param_1 + 0x2d0)) {
          lVar5 = plVar1[-1];
          plVar4 = *(long **)(param_1 + 0x2c0);
          if (plVar4 != (long *)0x0) {
            *(long *)(param_1 + 0x2c0) = *plVar4;
          }
          *plVar4 = lVar5;
          plVar4[2] = 0;
          plVar6 = plVar4 + 1;
          *plVar6 = 0;
          lVar5 = *plVar2;
          *plVar2 = (long)plVar6;
          plVar4[2] = (long)plVar2;
          *plVar6 = lVar5;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 8) = plVar6;
          }
          iVar3 = *(int *)(param_1 + 0x2b8) + 1;
          *(int *)(param_1 + 0x2b8) = iVar3;
        }
        plVar1 = (long *)plVar1[1];
      } while (plVar1 + -1 != (long *)(param_1 + 0x90));
      plVar1 = *(long **)(param_1 + 0xa0);
    }
    else {
      plVar2 = plVar1;
      do {
        plVar2 = (long *)plVar2[1];
      } while (plVar2 + -1 != (long *)(param_1 + 0x90));
    }
  }
  while (plVar1 != (long *)(param_1 + 0x98)) {
    plVar2 = (long *)plVar1[1];
    plVar4 = plVar2;
    if (*plVar1 != 0) {
      *(long **)(*plVar1 + 8) = plVar2;
      plVar4 = (long *)plVar1[1];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    plVar1[-1] = *(long *)(param_1 + 0xb0);
    *(long **)(param_1 + 0xb0) = plVar1 + -1;
    plVar1 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}

