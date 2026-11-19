
void FUN_03868db0(long *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_1[0x15] == 3) {
    *(undefined4 *)(param_1 + 0x15) = 4;
    (**(code **)(*param_1 + 0x70))(param_1);
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  if (((param_2 & 1) == 0) ||
     ((*(uint *)(*(long *)(DAT_05af83f0 + 0x418) + 8) & *(uint *)(param_1 + 0x2c)) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = (int)param_1[0x15] != 3;
  }
  *(bool *)((long)param_1 + 0x164) = bVar1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x31));
  if ((long *)param_1[0xe] != param_1 + 0xd) {
    lVar3 = (long)*(int *)((long)param_1 + 0x7c);
    lVar2 = param_1[0xe] - lVar3;
    do {
      FUN_03868db0(lVar2,*(undefined1 *)((long)param_1 + 0x164));
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (long)(param_1 + 0xd) - lVar3);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x31));
                    /* WARNING: Could not recover jumptable at 0x03868eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

