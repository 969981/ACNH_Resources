
void FUN_0386b090(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  (**(code **)(*param_2 + 0x50))(param_2);
  if ((int)param_2[0x15] == 5) {
    iVar2 = 6;
  }
  else {
    if ((int)param_2[0x15] != 2) goto LAB_0386b14c;
    nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
    plVar4 = (long *)(param_1 + 0x58);
    lVar3 = *plVar4;
    plVar1 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)param_2);
    *plVar4 = (long)plVar1;
    *plVar1 = lVar3;
    plVar1[1] = (long)plVar4;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar1;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
    FUN_0386aa80(param_1,param_2);
    iVar2 = 3;
  }
  if ((iVar2 == 5) || (iVar2 == 2)) {
    *(undefined1 *)((long)param_2 + 0x165) = 0;
  }
  *(int *)(param_2 + 0x15) = iVar2;
LAB_0386b14c:
  *(undefined1 *)((long)param_2 + 0x164) = 0;
                    /* WARNING: Could not recover jumptable at 0x0386b168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2);
  return;
}

