
void FUN_0386b2b0(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_2 + 0x15) | 2) == 7) {
    return;
  }
  (**(code **)(*param_2 + 0x60))(param_2);
  iVar2 = (int)param_2[0x15];
  iVar3 = 5;
  if ((iVar2 != 6) && (iVar2 != 4)) {
    if (iVar2 != 3) goto LAB_0386b390;
    nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
    plVar1 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)param_2);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
    FUN_0386af30(param_1,param_2);
    iVar3 = 2;
  }
  if ((iVar3 == 5) || (iVar3 == 2)) {
    *(undefined1 *)((long)param_2 + 0x165) = 0;
  }
  *(int *)(param_2 + 0x15) = iVar3;
LAB_0386b390:
  *(undefined1 *)((long)param_2 + 0x164) = 0;
                    /* WARNING: Could not recover jumptable at 0x0386b3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2);
  return;
}

