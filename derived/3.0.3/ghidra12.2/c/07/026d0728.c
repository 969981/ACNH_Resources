
void FUN_026d0728(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *local_50;
  char *pcStack_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if (((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x40) == 0)) &&
     (*(char *)(param_1 + 0x45) == '\0')) {
    (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
    iVar1 = nn::fs::MountDeviceSaveData(DAT_0556ca10);
    if (iVar1 != 0) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar1);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_50);
    }
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  uVar2 = (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = DAT_0556ca10;
  FUN_026d081c(uVar2,&local_50,param_2,param_3);
  return;
}

