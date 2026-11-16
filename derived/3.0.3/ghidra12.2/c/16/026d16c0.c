
undefined8 FUN_026d16c0(long param_1)

{
  MutexType *pMVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcStack_38;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  if (*(char *)(param_1 + 0x44) != '\0') {
    if (*(char *)(param_1 + 0x45) == '\0') {
      iVar3 = nn::fs::Commit(&pcStack_38,0);
    }
    else {
      (**(code **)(DAT_0556ca08 + 0x18))();
      pcStack_38 = DAT_0556ca10;
      iVar3 = nn::fs::Commit(&pcStack_38,1);
    }
    if (iVar3 != 0) {
      uVar4 = 7;
      goto LAB_026d17b8;
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
LAB_026d17b8:
  nn::os::UnlockMutex(pMVar1);
  return uVar4;
}

