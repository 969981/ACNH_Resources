
void FUN_0386c560(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(param_2 + 0xc0) == 5) {
    uVar3 = 6;
  }
  else {
    if (*(int *)(param_2 + 0xc0) != 2) {
      return;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x540));
    plVar4 = (long *)(param_1 + 0x508);
    lVar5 = (long)*(int *)(param_1 + 0x51c);
    if (*(long **)(param_1 + 0x510) != plVar4) {
      lVar6 = (long)*(long **)(param_1 + 0x510) - lVar5;
      do {
        bVar1 = *(int *)(param_2 + 0xc4) < *(int *)(lVar6 + 0xc4);
        if (*(int *)(lVar6 + 200) != *(int *)(param_2 + 200)) {
          bVar1 = *(int *)(param_2 + 200) < *(int *)(lVar6 + 200);
        }
        if (bVar1) {
          plVar4 = (long *)(lVar6 + lVar5);
          break;
        }
        lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
      } while (lVar6 != (long)plVar4 - lVar5);
    }
    lVar6 = *plVar4;
    plVar2 = (long *)(lVar5 + param_2);
    *plVar4 = (long)plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)plVar4;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x540));
    uVar3 = 3;
  }
  *(undefined4 *)(param_2 + 0xc0) = uVar3;
  return;
}

