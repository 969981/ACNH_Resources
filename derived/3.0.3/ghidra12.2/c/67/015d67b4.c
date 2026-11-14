
void FUN_015d67b4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 7));
  plVar1 = (long *)(*(int *)((long)param_1 + 0x14) + param_2);
  lVar2 = *param_1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar2;
  plVar1[1] = (long)param_1;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 8) = plVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 7));
  return;
}

