
void FUN_03868800(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  plVar2 = (long *)(param_1 + 0x68);
  plVar3 = (long *)*plVar2;
  if (plVar3 != plVar2) {
    iVar1 = *(int *)(param_1 + 0x7c);
    do {
      plVar3 = (long *)*plVar3;
      FUN_03868800();
    } while ((long)plVar3 - (long)iVar1 != (long)plVar2 - (long)iVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  if (*(int *)(param_1 + 0xa8) - 5U < 3) {
    FUN_03868eb8(param_1);
    return;
  }
  return;
}

