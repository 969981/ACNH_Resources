
void FUN_003e5288(long param_1)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  char *pcVar3;
  long *plVar4;
  
  pMVar1 = (MutexType *)(param_1 + 8);
  nn::os::LockMutex(pMVar1);
  plVar4 = (long *)(param_1 + 0x28);
  if (*plVar4 != 0) {
    nn::os::LockMutex(pMVar1);
    FUN_003e5864(plVar4);
    nn::os::UnlockMutex(pMVar1);
    pcVar3 = (char *)FUN_003c5b84();
    if (*pcVar3 != '\0') {
      uVar2 = FUN_003cc180(pcVar3,1);
      FUN_003cc0c0(pcVar3,uVar2);
    }
    if (*(char *)(param_1 + 0x48) != '\0') {
      FUN_003cd648(param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    FUN_003e5580(plVar4);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

