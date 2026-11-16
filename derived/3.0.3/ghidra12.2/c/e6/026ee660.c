
undefined8 FUN_026ee660(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  
  pcVar1 = (char *)FUN_02701110();
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return 0;
  }
  if (*(long *)(param_1 + 0x308) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x310) == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x358);
  if (*(char *)(param_1 + 0x35c) != '\0') {
    if (*(char *)(param_1 + 0x35e) == '\0') {
      uVar2 = nn::os::TryLockMutex((MutexType *)(param_1 + 0x338));
      if ((uVar2 & 1) == 0) {
        return 1;
      }
    }
    else {
      nn::os::LockMutex((MutexType *)(param_1 + 0x338));
    }
  }
  if (iVar3 == 2) {
    lVar4 = *(long *)(param_1 + 0x308);
    if (lVar4 == 0) {
      return 1;
    }
    piVar5 = *(int **)(param_1 + 0x310);
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    if (1 < *piVar5) {
      lVar4 = FUN_038567d0(piVar5,1);
      iVar3 = *(int *)(lVar4 + 0xc);
      if (iVar3 < 1) {
        FUN_038e2e80(piVar5 + 0x16);
        iVar3 = 0;
      }
      *(int *)(lVar4 + 0xc) = iVar3 + 1;
      lVar4 = *(long *)(param_1 + 0x308);
    }
    FUN_038569c0(lVar4);
  }
  else if (iVar3 == 1) {
    FUN_0272e9bc((long *)(param_1 + 0x308));
  }
  return 1;
}

