
void FUN_026f61ec(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  
  pcVar1 = (char *)FUN_02701110();
  if (pcVar1 == (char *)0x0) {
    return;
  }
  if ((*(long *)(param_1 + 0x308) != 0) && (*(long *)(param_1 + 0x310) != 0)) {
    iVar4 = *(int *)(param_1 + 0x358);
    if (*(char *)(param_1 + 0x35c) != '\0') {
      if (*(char *)(param_1 + 0x35e) == '\0') {
        uVar2 = nn::os::TryLockMutex((MutexType *)(param_1 + 0x338));
        if ((uVar2 & 1) == 0) goto LAB_026f62b8;
      }
      else {
        nn::os::LockMutex((MutexType *)(param_1 + 0x338));
      }
    }
    if (iVar4 == 2) {
      lVar3 = *(long *)(param_1 + 0x308);
      if ((lVar3 != 0) && (piVar5 = *(int **)(param_1 + 0x310), piVar5 != (int *)0x0)) {
        if (1 < *piVar5) {
          lVar3 = FUN_038567d0(piVar5,1);
          iVar4 = *(int *)(lVar3 + 0xc);
          if (iVar4 < 1) {
            FUN_038e2e80(piVar5 + 0x16);
            iVar4 = 0;
          }
          *(int *)(lVar3 + 0xc) = iVar4 + 1;
          lVar3 = *(long *)(param_1 + 0x308);
        }
        FUN_038569c0(lVar3);
      }
    }
    else if (iVar4 == 1) {
      FUN_0272e9bc((long *)(param_1 + 0x308));
    }
  }
LAB_026f62b8:
  *pcVar1 = *pcVar1 + '\x01';
  return;
}

