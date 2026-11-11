
void FUN_003c4f10(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_03b38a74();
  nn::os::LockMutex((MutexType *)(param_1 + 1));
  plVar1 = (long *)(param_1[5] + (long)param_3 * 0x10);
  plVar3 = plVar1;
  do {
    plVar3 = (long *)plVar3[1];
    if (plVar3 == plVar1) goto LAB_003c4fc4;
  } while (plVar3 + -1 != param_2);
  (**(code **)(*param_2 + 0x28))(param_2,lVar2 + 0x18,param_1);
  if (plVar3 != (long *)(param_1[5] + (long)param_3 * 0x10)) {
    plVar1 = (long *)plVar3[1];
    lVar2 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
  }
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
LAB_003c4fc4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 1));
  return;
}

