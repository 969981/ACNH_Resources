
void FUN_026c4374(undefined1 **param_1)

{
  MutexType *pMVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [8];
  uint local_50;
  undefined1 *local_48;
  undefined1 local_40 [16];
  undefined1 **local_18;
  
  *(undefined1 *)((long)param_1 + 4) = 0;
  lVar2 = DAT_05574040;
  if (DAT_05574040 != 0) {
    pMVar1 = (MutexType *)(DAT_05574040 + 0x338);
    local_50 = 0;
    nn::os::LockMutex(pMVar1);
    local_40 = FUN_02700ee8(lVar2);
    local_48 = auStack_58;
    uVar3 = local_40._8_8_ & 0xffffffff;
    if (uVar3 == 0xffffffff) {
LAB_026c4444:
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_18 = &local_48;
    (*(code *)(&PTR_LAB_04a886c8)[uVar3])(&local_18,local_40);
    nn::os::UnlockMutex(pMVar1);
    if (local_50 != 0) {
      local_18 = param_1;
      if (local_50 == 0xffffffff) goto LAB_026c4444;
      local_40._0_8_ = &local_18;
      (*(code *)(&PTR_LAB_04a88550)[local_50])(local_40,auStack_58);
    }
  }
  return;
}

