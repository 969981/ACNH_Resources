
undefined8 FUN_026f5120(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  if (*(long *)(param_1 + 0x308) == 0 || *(long *)(param_1 + 0x310) == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x368);
  if (*(char *)(param_1 + 0x36c) != '\0') {
    if (*(char *)(param_1 + 0x36e) == '\0') {
      uVar1 = nn::os::TryLockMutex((MutexType *)(param_1 + 0x338));
      if ((uVar1 & 1) == 0) {
        return 0;
      }
    }
    else {
      nn::os::LockMutex((MutexType *)(param_1 + 0x338));
    }
  }
  if (iVar2 == 2) {
    lVar3 = *(long *)(param_1 + 0x308);
    if (lVar3 == 0) {
      return 1;
    }
    piVar4 = *(int **)(param_1 + 0x310);
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    if (1 < *piVar4) {
      lVar3 = FUN_038567d0(piVar4,1);
      iVar2 = *(int *)(lVar3 + 0xc);
      if (iVar2 < 1) {
        FUN_038e2e80(piVar4 + 0x16);
        iVar2 = 0;
      }
      *(int *)(lVar3 + 0xc) = iVar2 + 1;
      lVar3 = *(long *)(param_1 + 0x308);
    }
    FUN_038569c0(lVar3);
  }
  else if (iVar2 == 1) {
    FUN_0272e9bc((long *)(param_1 + 0x308));
  }
  return 1;
}

