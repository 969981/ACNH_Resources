
undefined4 FUN_026d13ec(long param_1,undefined1 *param_2)

{
  MutexType *pMVar1;
  int iVar2;
  undefined4 uVar3;
  bool local_44 [4];
  int local_24;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  iVar2 = *(int *)(param_1 + 0x40);
  if ((*(char *)(param_1 + 0x44) == '\0') && (iVar2 == 0)) {
    if (*(char *)(param_1 + 0x45) == '\0') {
      (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
      local_24 = nn::fs::MountDeviceSaveData(DAT_0556ca10);
      if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl((Result *)&local_24);
      }
      *(undefined1 *)(param_1 + 0x45) = 1;
      iVar2 = *(int *)(param_1 + 0x40);
    }
    else {
      iVar2 = 0;
    }
  }
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  nn::os::UnlockMutex(pMVar1);
  local_44[0] = false;
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  iVar2 = nn::fs::GetSaveDataRestoreFlag(local_44,DAT_0556ca10);
  if (iVar2 == 0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = local_44[0];
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 7;
  }
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = *(int *)(param_1 + 0x40) + -1;
    *(int *)(param_1 + 0x40) = iVar2;
    if (((iVar2 == 0) && (*(char *)(param_1 + 0x44) == '\0')) && (*(char *)(param_1 + 0x45) != '\0')
       ) {
      (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
      nn::fs::Unmount(DAT_0556ca10);
      *(undefined1 *)(param_1 + 0x45) = 0;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar3;
}

