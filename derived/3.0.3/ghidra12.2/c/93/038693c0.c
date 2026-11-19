
void FUN_038693c0(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x48);
  if (lVar6 == 0) {
    if (*(long *)(param_2 + 0x98) == 0) {
      return;
    }
    FUN_0386abe0(*(long *)(param_2 + 0x98),param_2);
    return;
  }
  nn::os::LockMutex((MutexType *)(lVar6 + 0x188));
  plVar3 = (long *)(lVar6 + 0x68);
  lVar4 = (long)*(int *)(lVar6 + 0x7c);
  if (*(long **)(lVar6 + 0x70) != plVar3) {
    lVar5 = (long)*(long **)(lVar6 + 0x70) - lVar4;
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
  *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x188));
  FUN_03869720(lVar6,param_2);
  return;
}

