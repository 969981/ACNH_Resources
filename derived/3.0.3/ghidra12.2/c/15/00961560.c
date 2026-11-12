
void FUN_00961560(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_FUN_0492a700;
  lVar3 = DAT_04cfae30;
  if ((param_1[2] == 0 && param_1[1] == 0) || (DAT_04cfae30 == 0)) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_04cfae30 + 0x50);
  nn::os::LockMutex(pMVar1);
  plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
  if (*plVar2 != 0) {
    *(long *)(*plVar2 + 8) = plVar2[1];
  }
  if ((long *)plVar2[1] != (long *)0x0) {
    *(long *)plVar2[1] = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
  nn::os::UnlockMutex(pMVar1);
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

