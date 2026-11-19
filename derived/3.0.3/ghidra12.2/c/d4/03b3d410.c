
void FUN_03b3d410(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  plVar2 = *(long **)(param_1 + 0x60);
  if ((plVar2 != (long *)0x0) && (plVar4 = (long *)plVar2[1], plVar4 != plVar2)) {
    plVar1 = (long *)(*(int *)((long)plVar2 + 0x14) + param_2);
    do {
      if (plVar4 == plVar1) {
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
        break;
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != plVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  lVar5 = *(long *)(param_1 + 0x60);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != lVar5)) {
    lVar3 = (long)*(int *)(lVar5 + 0x14);
    lVar6 = *(long *)(lVar5 + 8) - lVar3;
    do {
      if ((*(int *)(lVar6 + 0xc) != 0) && (*(int *)(lVar6 + 0xc) != 7)) {
        return;
      }
      lVar6 = *(long *)(lVar6 + lVar3 + 8) - lVar3;
    } while (lVar6 != lVar5 - lVar3);
  }
  if (DAT_05aebb78 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(DAT_05aebb78 + 8);
  }
  nn::os::LockMutex((MutexType *)(lVar5 + 0x88));
  plVar2 = (long *)(*(int *)(lVar5 + 0x14) + param_1);
  lVar6 = *plVar2;
  plVar4 = (long *)plVar2[1];
  if (plVar4 != (long *)0x0 || lVar6 != 0) {
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar4;
      plVar4 = (long *)plVar2[1];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x88));
  return;
}

