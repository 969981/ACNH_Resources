
void FUN_03bc1618(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (((param_2 != 0) && (lVar4 = *param_1, lVar4 != 0)) &&
     (lVar5 = *(long *)(param_2 + 8), lVar5 != 0)) {
    nn::os::LockMutex((MutexType *)(lVar4 + 400));
    plVar1 = (long *)(lVar5 + 8);
    if (*(long *)(lVar5 + 0x10) == 0 && *plVar1 == 0) {
      lVar2 = *(long *)(lVar5 + 0x20);
      plVar3 = (long *)(lVar4 + 0x90);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *plVar1 = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
      }
      *(long **)(lVar5 + 0x20) = plVar3;
      lVar2 = *plVar3;
      *plVar3 = (long)plVar1;
      *(long *)(lVar5 + 8) = lVar2;
      *(long **)(lVar5 + 0x10) = plVar3;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 8) = plVar1;
      }
      *(int *)(lVar4 + 0xa0) = *(int *)(lVar4 + 0xa0) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar4 + 400));
    plVar3 = param_1 + 0x10;
    lVar4 = *plVar3;
    plVar1 = (long *)(*(int *)((long)param_1 + 0x94) + param_2);
    *plVar3 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar3;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(param_1 + 0x12) = (int)param_1[0x12] + 1;
  }
  return;
}

