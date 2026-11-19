
long FUN_03b4dec0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  if (*(int *)(param_1 + 0x30) < 1) {
    lVar5 = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x28);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    lVar5 = 0;
    if (plVar2 != (long *)0x0) {
      lVar4 = (long)plVar2 - (long)*(int *)(param_1 + 0x34);
      lVar5 = 0;
      if (lVar4 != 0) {
        plVar3 = (long *)(param_1 + 0x38);
        lVar5 = *plVar3;
        plVar2 = (long *)(lVar4 + *(int *)(param_1 + 0x4c));
        *plVar3 = (long)plVar2;
        *plVar2 = lVar5;
        plVar2[1] = (long)plVar3;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar2;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        uVar1 = FUN_03b4cf50(lVar4,param_2);
        lVar5 = lVar4;
        if ((uVar1 & 1) == 0) {
          plVar2 = (long *)(lVar4 + *(int *)(param_1 + 0x4c));
          if (*plVar2 != 0) {
            *(long *)(*plVar2 + 8) = plVar2[1];
          }
          if ((long *)plVar2[1] != (long *)0x0) {
            *(long *)plVar2[1] = *plVar2;
          }
          *plVar2 = 0;
          plVar2[1] = 0;
          plVar2 = (long *)(lVar4 + *(int *)(param_1 + 0x34));
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
          lVar5 = *(long *)(param_1 + 0x20);
          *(long **)(param_1 + 0x20) = plVar2;
          *plVar2 = lVar5;
          plVar2[1] = param_1 + 0x20;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 8) = plVar2;
          }
          lVar5 = 0;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return lVar5;
}

