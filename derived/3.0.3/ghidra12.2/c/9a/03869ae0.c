
uint FUN_03869ae0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(uint *)(param_1 + 0x120) >> (ulong)(param_2 & 0x1f) & 1) == 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x188));
    if (*(long *)(param_1 + 0x58) == param_1 + 0x50) {
      uVar1 = 0;
    }
    else {
      lVar3 = (long)*(int *)(param_1 + 100);
      lVar2 = *(long *)(param_1 + 0x58) - lVar3;
      do {
        uVar1 = FUN_03869ae0(lVar2,param_2);
        if ((uVar1 & 1) != 0) break;
        lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
      } while (lVar2 != (param_1 + 0x50) - (long)*(int *)(param_1 + 100));
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

