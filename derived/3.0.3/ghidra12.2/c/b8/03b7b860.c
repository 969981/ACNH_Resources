
void FUN_03b7b860(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x78) != param_1 + 0x70) {
    lVar4 = (long)*(int *)(param_1 + 0x84);
    lVar5 = *(long *)(param_1 + 0x78) - lVar4;
    lVar3 = lVar5 + lVar4;
    do {
      plVar1 = (long *)(lVar5 + *(int *)(param_1 + 0x9c));
      lVar3 = *(long *)(lVar3 + 8);
      lVar2 = *plVar1;
      plVar6 = (long *)plVar1[1];
      if (plVar6 != (long *)0x0 || lVar2 != 0) {
        if (lVar2 != 0) {
          *(long **)(lVar2 + 8) = plVar6;
          plVar6 = (long *)plVar1[1];
        }
        if (plVar6 != (long *)0x0) {
          *plVar6 = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      plVar1 = (long *)(lVar5 + *(int *)(param_1 + 0xb4));
      lVar2 = *plVar1;
      plVar6 = (long *)plVar1[1];
      if (plVar6 != (long *)0x0 || lVar2 != 0) {
        if (lVar2 != 0) {
          *(long **)(lVar2 + 8) = plVar6;
          plVar6 = (long *)plVar1[1];
        }
        if (plVar6 != (long *)0x0) {
          *plVar6 = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
      }
      plVar1 = (long *)(lVar5 + *(int *)(param_1 + 0x84));
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1 = (long *)(lVar5 + *(int *)(param_1 + 0x6c));
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
      lVar5 = *(long *)(param_1 + 0x58);
      *(long **)(param_1 + 0x58) = plVar1;
      *plVar1 = lVar5;
      plVar1[1] = param_1 + 0x58;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar1;
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      lVar5 = lVar3 - lVar4;
    } while (lVar5 != (param_1 + 0x70) - lVar4);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}

