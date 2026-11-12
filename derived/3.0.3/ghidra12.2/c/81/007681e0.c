
undefined8 FUN_007681e0(long param_1)

{
  MutexType *pMVar1;
  long *__dest;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_1 + 0x338)) {
    __dest = *(long **)(param_1 + 0x340);
    lVar4 = *__dest;
    memmove(__dest,__dest + 1,(long)(*(int *)(param_1 + 0x338) * 8 + -8));
    *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + -1;
    if (lVar4 != 0) {
      pMVar1 = (MutexType *)(param_1 + 0x468);
      nn::os::LockMutex(pMVar1);
      lVar2 = (long)*(int *)(param_1 + 0x2e8);
      if (*(int *)(param_1 + 0x2e8) != 0) {
        do {
          lVar2 = lVar2 + -1;
          lVar3 = *(long *)(*(long *)(param_1 + 0x2f0) + lVar2 * 8);
          if ((0 < *(int *)(lVar3 + 0x30)) && (*(char *)(lVar3 + 0x41) == '\0')) {
            *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar3 + 0x34);
            *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
            *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar3 + 0x3c);
            *(undefined1 *)(lVar3 + 0x41) = 1;
            nn::os::UnlockMutex(pMVar1);
            *(undefined1 *)(lVar4 + 0x40) = 1;
            if (*(int *)(param_1 + 0x3d8) < *(int *)(param_1 + 0x3dc)) {
              *(long *)(*(long *)(param_1 + 0x3e0) + (long)*(int *)(param_1 + 0x3d8) * 8) = lVar4;
              *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 1;
              return 1;
            }
            return 1;
          }
        } while (lVar2 != 0);
      }
      if (*(int *)(param_1 + 0x338) < *(int *)(param_1 + 0x33c)) {
        *(long *)(*(long *)(param_1 + 0x340) + (long)*(int *)(param_1 + 0x338) * 8) = lVar4;
        *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + 1;
      }
      nn::os::UnlockMutex(pMVar1);
    }
  }
  return 0;
}

