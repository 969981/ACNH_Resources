
void FUN_03868c7c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((*(uint *)(param_2 + 0x15) | 2) == 7) {
    return;
  }
  (**(code **)(*param_2 + 0x60))(param_2);
  iVar2 = (int)param_2[0x15];
  if ((iVar2 == 6) || (iVar2 == 4)) {
    uVar3 = 5;
  }
  else {
    if (iVar2 != 3) goto LAB_03868d8c;
    lVar4 = param_2[9];
    if (lVar4 == 0) {
      if (param_2[0x13] != 0) {
        FUN_0386aeb4(param_2[0x13],param_2);
      }
    }
    else {
      FUN_03869930(lVar4,param_2);
      nn::os::LockMutex((MutexType *)(lVar4 + 0x188));
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x7c) + (long)param_2);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + -1;
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x188));
    }
    uVar3 = 2;
  }
  *(undefined1 *)((long)param_2 + 0x165) = 0;
  *(undefined4 *)(param_2 + 0x15) = uVar3;
LAB_03868d8c:
                    /* WARNING: Could not recover jumptable at 0x03868da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2);
  return;
}

