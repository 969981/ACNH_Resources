
undefined8 FUN_03b47f78(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  pMVar1 = (MutexType *)(param_1 + 0x48);
  nn::os::LockMutex(pMVar1);
  if (*(int *)(param_1 + 0x10) == 4) {
LAB_03b47fa8:
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      uVar5 = 0;
      goto LAB_03b4806c;
    }
    nn::os::UnlockMutex(pMVar1);
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 == 1) {
      fVar6 = *(float *)(param_1 + 0x1c);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(param_1 + 8) == 0) {
        iVar3 = 0;
      }
      else {
        FUN_03b60e78(fVar6);
        iVar3 = (uint)(fVar6 != 0.0) << 1;
      }
      *(int *)(param_1 + 0x10) = iVar3;
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      goto LAB_03b4806c;
    }
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != 0) {
      lVar2 = *(long *)(lVar4 + 0x38);
      if (DAT_05aebc00 != '\0') {
        lVar2 = lVar4 + 0x70;
      }
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x11) >> 5 & 1) == 0)) {
        if (iVar3 == 2) {
          FUN_03b60e78(*(undefined4 *)(param_1 + 0x1c));
LAB_03b480ac:
          fVar6 = 0.0;
        }
        else {
          iVar3 = FUN_03b61214();
          if (iVar3 < 0) goto LAB_03b480ac;
          FUN_03b60e78(*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 8));
          fVar6 = (float)iVar3;
        }
        *(float *)(param_1 + 0x24) = fVar6;
      }
    }
    nn::os::LockMutex(pMVar1);
    if (*(int *)(param_1 + 0x10) == 1) goto LAB_03b47fa8;
  }
  uVar5 = 1;
LAB_03b4806c:
  nn::os::UnlockMutex(pMVar1);
  return uVar5;
}

