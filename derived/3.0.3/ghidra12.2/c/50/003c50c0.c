
void FUN_003c50c0(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  lVar2 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(param_1 + 1));
  lVar7 = (long)param_2;
  plVar3 = (long *)(param_1[5] + (long)param_2 * 0x10);
  plVar5 = (long *)plVar3[1];
  if (plVar5 == plVar3) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      (**(code **)(plVar5[-1] + 0x28))(plVar5 + -1,lVar2 + 0x18,param_1);
      iVar6 = iVar6 + 1;
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)(param_1[5] + lVar7 * 0x10));
  }
  while (plVar3 = (long *)plVar5[1], plVar3 != plVar5) {
    plVar1 = (long *)plVar3[1];
    lVar4 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
  }
  plVar3 = (long *)(param_1[6] + lVar7 * 0x10);
  plVar5 = (long *)plVar3[1];
  if (plVar5 != plVar3) {
    do {
      FUN_003ddd7c(plVar5 + -1,lVar2 + 0x18,param_1);
      (**(code **)(plVar5[-1] + 0x18))(plVar5 + -1);
      iVar6 = iVar6 + 1;
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)(param_1[6] + lVar7 * 0x10));
  }
  while (plVar3 = (long *)plVar5[1], plVar3 != plVar5) {
    plVar1 = (long *)plVar3[1];
    lVar2 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
  }
  (**(code **)(*param_1 + 0x18))(param_1,-iVar6);
  nn::os::UnlockMutex((MutexType *)(param_1 + 1));
  return;
}

