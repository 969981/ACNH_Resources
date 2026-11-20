
undefined4 FUN_03f2b7f0(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x18) >> 4 & 1) == 0) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    if (*(long *)(lVar5 + 0xe0) != lVar5 + 0xd8) {
      lVar1 = (long)*(int *)(lVar5 + 0xec);
      uVar2 = *(long *)(lVar5 + 0xe0) - lVar1;
      do {
        if (param_2 <= uVar2) goto LAB_03f2b914;
        if (param_3 <= *(ulong *)(uVar2 + 0x18)) goto LAB_03f2b928;
        uVar2 = *(long *)(uVar2 + lVar1 + 8) - lVar1;
      } while (uVar2 != (lVar5 + 0xd8) - lVar1);
    }
  }
  else {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    if (*(long *)(lVar5 + 0xe0) != lVar5 + 0xd8) {
      lVar1 = (long)*(int *)(lVar5 + 0xec);
      uVar2 = *(long *)(lVar5 + 0xe0) - lVar1;
      do {
        if (param_2 <= uVar2) goto LAB_03f2b914;
        if (param_3 <= *(ulong *)(uVar2 + 0x18)) goto LAB_03f2b928;
        uVar2 = *(long *)(uVar2 + lVar1 + 8) - lVar1;
      } while (uVar2 != (lVar5 + 0xd8) - lVar1);
    }
  }
  uVar3 = 0;
  if (lVar4 == 0) {
    return 0;
  }
  goto LAB_03f2b938;
LAB_03f2b914:
  uVar3 = 0;
  goto joined_r0x03f2b920;
LAB_03f2b928:
  uVar3 = 1;
joined_r0x03f2b920:
  if (lVar4 != 0) {
LAB_03f2b938:
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
  }
  return uVar3;
}

