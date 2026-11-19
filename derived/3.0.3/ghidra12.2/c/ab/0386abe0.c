
void FUN_0386abe0(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar3 = (long *)(param_1 + 0x58);
  lVar4 = (long)*(int *)(param_1 + 0x6c);
  if (*(long **)(param_1 + 0x60) != plVar3) {
    lVar5 = (long)*(long **)(param_1 + 0x60) - lVar4;
    do {
      bVar1 = *(int *)(param_2 + 0x158) < *(int *)(lVar5 + 0x158);
      if (*(int *)(lVar5 + 0x15c) != *(int *)(param_2 + 0x15c)) {
        bVar1 = *(int *)(param_2 + 0x15c) < *(int *)(lVar5 + 0x15c);
      }
      if (bVar1) {
        plVar3 = (long *)(lVar5 + lVar4);
        break;
      }
      lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
    } while (lVar5 != (long)plVar3 - lVar4);
  }
  lVar5 = *plVar3;
  plVar2 = (long *)(lVar4 + param_2);
  *plVar3 = (long)plVar2;
  *plVar2 = lVar5;
  plVar2[1] = (long)plVar3;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  FUN_0386acb0(param_1,param_2);
  return;
}

