
void FUN_03bc16f0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2 != 0) && (lVar3 = *param_1, lVar3 != 0)) {
    lVar4 = *(long *)(param_2 + 8);
    if (lVar4 != 0) {
      nn::os::LockMutex((MutexType *)(lVar3 + 400));
      if ((*(long *)(lVar4 + 0x20) == lVar3 + 0x90) && (*(long *)(lVar4 + 0x20) != 0)) {
        *(undefined8 *)(lVar4 + 0x20) = 0;
        if (*(long *)(lVar4 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar4 + 8) + 8) = *(undefined8 *)(lVar4 + 0x10);
        }
        if (*(undefined8 **)(lVar4 + 0x10) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar4 + 0x10) = *(undefined8 *)(lVar4 + 8);
        }
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(int *)(lVar3 + 0xa0) = *(int *)(lVar3 + 0xa0) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar3 + 400));
    }
    plVar1 = (long *)(*(int *)((long)param_1 + 0x94) + param_2);
    lVar3 = *plVar1;
    plVar2 = (long *)plVar1[1];
    if (plVar2 != (long *)0x0 || lVar3 != 0) {
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar2;
        plVar2 = (long *)plVar1[1];
      }
      if (plVar2 != (long *)0x0) {
        *plVar2 = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x12) = (int)param_1[0x12] + -1;
    }
  }
  return;
}

