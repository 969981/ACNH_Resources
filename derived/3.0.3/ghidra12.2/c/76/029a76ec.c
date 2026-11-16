
long FUN_029a76ec(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 != 0) {
    uVar3 = iVar1 - 1;
    if (*(uint *)(param_1 + 0x2798) <= uVar3) {
      uVar3 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x27a0) + (long)(int)uVar3 * 0x228;
    lVar5 = lVar4 + 0x130;
    if (param_3 != 4) {
      lVar5 = lVar4 + 0x30;
    }
    goto LAB_029a77cc;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x118));
  uVar3 = FUN_0299a690(param_1 + 0xf0,param_2,param_2,param_3);
  if ((int)uVar3 < 0) {
LAB_029a77c0:
    lVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x160);
    uVar2 = uVar3 - iVar1;
    if ((int)uVar3 < iVar1) {
      lVar5 = *(long *)(param_1 + 0x168) + (ulong)uVar3 * 0xf8;
    }
    else {
      if ((int)(*(uint *)(param_1 + 0x1a0) + iVar1) <= (int)uVar3) goto LAB_029a77c0;
      if (*(uint *)(param_1 + 0x1a0) <= uVar2) {
        uVar2 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x1a8) + (long)(int)uVar2 * 0xf8;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x118));
LAB_029a77cc:
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = lVar5 + 8;
  }
  return lVar4;
}

