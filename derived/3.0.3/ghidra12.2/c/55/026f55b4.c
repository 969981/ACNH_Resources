
void FUN_026f55b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  if (*(long *)(param_1 + 0x308) != 0 && *(long *)(param_1 + 0x310) != 0) {
    iVar3 = *(int *)(param_1 + 0x380);
    if (*(char *)(param_1 + 900) != '\0') {
      if (*(char *)(param_1 + 0x386) == '\0') {
        uVar1 = nn::os::TryLockMutex((MutexType *)(param_1 + 0x338));
        if ((uVar1 & 1) == 0) {
          return;
        }
      }
      else {
        nn::os::LockMutex((MutexType *)(param_1 + 0x338));
      }
    }
    if (iVar3 == 2) {
      lVar2 = *(long *)(param_1 + 0x308);
      if ((lVar2 != 0) && (piVar4 = *(int **)(param_1 + 0x310), piVar4 != (int *)0x0)) {
        if (1 < *piVar4) {
          lVar2 = FUN_038567d0(piVar4,1);
          iVar3 = *(int *)(lVar2 + 0xc);
          if (iVar3 < 1) {
            FUN_038e2e80(piVar4 + 0x16);
            iVar3 = 0;
          }
          *(int *)(lVar2 + 0xc) = iVar3 + 1;
          lVar2 = *(long *)(param_1 + 0x308);
        }
        FUN_038569c0(lVar2);
        return;
      }
    }
    else if (iVar3 == 1) {
      FUN_0272e9bc((long *)(param_1 + 0x308));
      return;
    }
  }
  return;
}

