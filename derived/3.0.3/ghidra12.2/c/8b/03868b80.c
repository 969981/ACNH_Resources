
void FUN_03868b80(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x15) < 7 && (1 << (ulong)(*(uint *)(param_1 + 0x15) & 0x1f) & 0x58U) != 0
     ) {
    if (param_1[9] == 0) {
      if (param_1[0x13] != 0) {
        FUN_0386b2b0(param_1[0x13],param_1);
      }
    }
    else {
      FUN_03868c7c(param_1,param_1);
    }
  }
  if ((int)param_1[0x15] == 2) {
    uVar1 = 8;
  }
  else {
    if ((int)param_1[0x15] != 5) goto LAB_03868c00;
    uVar1 = 7;
  }
  *(undefined4 *)(param_1 + 0x15) = uVar1;
LAB_03868c00:
  nn::os::LockMutex((MutexType *)(param_1 + 0x31));
  if ((long *)param_1[0xb] != param_1 + 10) {
    lVar3 = (long)*(int *)((long)param_1 + 100);
    lVar2 = param_1[0xb] - lVar3;
    do {
      FUN_03868b80(lVar2);
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (long)(param_1 + 10) - (long)*(int *)((long)param_1 + 100));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x31));
                    /* WARNING: Could not recover jumptable at 0x03868c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}

