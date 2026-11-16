
undefined8 FUN_026d17d8(long param_1,CommitOption *param_2)

{
  MutexType *pMVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  if (*(char *)(param_1 + 0x44) != '\0') {
    (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
    iVar3 = nn::fs::Commit(DAT_0556ca10,param_2);
    if (iVar3 != 0) {
      uVar4 = 7;
      goto LAB_026d1880;
    }
    nn::os::LockMutex(pMVar1);
    cVar2 = *(char *)(param_1 + 0x44);
    *(undefined1 *)(param_1 + 0x44) = 0;
    if (((cVar2 != '\0') && (*(int *)(param_1 + 0x40) == 0)) && (*(char *)(param_1 + 0x45) != '\0'))
    {
      (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
      nn::fs::Unmount(DAT_0556ca10);
      *(undefined1 *)(param_1 + 0x45) = 0;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  uVar4 = 1;
LAB_026d1880:
  nn::os::UnlockMutex(pMVar1);
  return uVar4;
}

