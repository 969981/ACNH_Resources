
void FUN_03868ae0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)((long)param_1 + 0x164) == '\0') {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x31));
  if ((long *)param_1[0xe] != param_1 + 0xd) {
    lVar2 = (long)*(int *)((long)param_1 + 0x7c);
    lVar1 = param_1[0xe] - lVar2;
    do {
      FUN_03868ae0(lVar1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (long)(param_1 + 0xd) - (long)*(int *)((long)param_1 + 0x7c));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x31));
                    /* WARNING: Could not recover jumptable at 0x03868b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}

