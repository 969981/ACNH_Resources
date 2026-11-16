
void FUN_026d189c(long param_1)

{
  MutexType *pMVar1;
  char cVar2;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_038bb700(&DAT_0407ebb1,0x261,&DAT_0409e973,&DAT_0407ebb1);
  }
  nn::os::LockMutex(pMVar1);
  cVar2 = *(char *)(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (((cVar2 != '\0') && (*(int *)(param_1 + 0x40) == 0)) && (*(char *)(param_1 + 0x45) != '\0')) {
    (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
    nn::fs::Unmount(DAT_0556ca10);
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  return;
}

