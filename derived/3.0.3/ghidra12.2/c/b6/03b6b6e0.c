
void FUN_03b6b6e0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  if (*(int *)(param_1 + 0xe0) != 0) {
    if (*(long *)(param_1 + 0xd8) != param_1 + 0xd0) {
      lVar3 = (long)*(int *)(param_1 + 0xe4);
      lVar4 = *(long *)(param_1 + 0xd8) - lVar3;
      lVar5 = lVar4 + lVar3;
      do {
        lVar5 = *(long *)(lVar5 + 8);
        uVar2 = FUN_03b6b2f0(param_1,lVar4);
        if ((uVar2 & 1) != 0) {
          plVar1 = (long *)(lVar4 + *(int *)(param_1 + 0xe4));
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
        }
        lVar4 = lVar5 - lVar3;
      } while (lVar4 != (param_1 + 0xd0) - (long)*(int *)(param_1 + 0xe4));
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  return;
}

