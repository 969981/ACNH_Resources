
void FUN_0386c648(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_2 + 0xc0);
  if (iVar2 == 6 || iVar2 == 4) {
    uVar3 = 5;
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x540));
    plVar1 = (long *)(*(int *)(param_1 + 0x51c) + param_2);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + -1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x540));
    uVar3 = 2;
  }
  *(undefined4 *)(param_2 + 0xc0) = uVar3;
  return;
}

