
void FUN_003c9bc0(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 7));
  plVar3 = (long *)param_1[1];
  while (plVar1 = plVar3, plVar1 != param_1) {
    plVar3 = (long *)plVar1[1];
    if (*(int *)((long)plVar1 + 0x3c) == param_2) {
      lVar2 = *plVar3;
      *(long **)(*plVar1 + 8) = plVar3;
      *plVar3 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *(undefined4 *)(plVar1 + 7) = 4;
      nn::os::SignalEvent((EventType *)(plVar1 + 2));
    }
  }
  plVar3 = (long *)param_1[3];
  while (plVar1 = plVar3, plVar1 != param_1 + 2) {
    plVar3 = (long *)plVar1[1];
    if (*(int *)((long)plVar1 + 0x3c) == param_2) {
      lVar2 = *plVar3;
      *(long **)(*plVar1 + 8) = plVar3;
      *plVar3 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *(undefined4 *)(plVar1 + 7) = 4;
      nn::os::SignalEvent((EventType *)(plVar1 + 2));
    }
  }
  plVar3 = (long *)param_1[5];
  while (plVar1 = plVar3, plVar1 != param_1 + 4) {
    plVar3 = (long *)plVar1[1];
    if (*(int *)((long)plVar1 + 0x3c) == param_2) {
      lVar2 = *plVar3;
      *(long **)(*plVar1 + 8) = plVar3;
      *plVar3 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *(undefined4 *)(plVar1 + 7) = 4;
      nn::os::SignalEvent((EventType *)(plVar1 + 2));
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 7));
  return;
}

