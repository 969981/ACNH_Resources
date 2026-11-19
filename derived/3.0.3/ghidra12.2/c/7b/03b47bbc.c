
undefined4 FUN_03b47bbc(undefined4 param_1,long param_2,undefined4 param_3)

{
  MutexType *pMVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  if (*(long *)(param_2 + 8) == 0) {
    return 0;
  }
  pMVar1 = (MutexType *)(param_2 + 0x48);
  nn::os::LockMutex(pMVar1);
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 == 4) {
    lVar6 = *(long *)(param_2 + 8);
    lVar5 = *(long *)(lVar6 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar5 = lVar6 + 0x70;
    }
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x11) >> 5 & 1) == 0)) {
      if (DAT_05aebc00 == '\0') {
        *(undefined4 *)(lVar6 + 0x18) = param_3;
        uVar4 = FUN_03b46a00(param_1,*(long *)(param_2 + 8) + 8,0);
      }
      else {
        if (*(char *)(lVar6 + 0x58) != '\0') {
          *(undefined4 *)(lVar6 + 0x60) = param_3;
          lVar6 = *(long *)(param_2 + 8);
        }
        uVar4 = FUN_03b600e4(param_1,lVar6 + 0x50,0);
      }
      if ((uVar4 & 1) == 0) {
        nn::os::LockMutex(pMVar1);
        if (*(long *)(param_2 + 8) != 0) {
          FUN_03b60e78(0);
        }
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x24) = 0;
        *(undefined1 *)(param_2 + 0x18) = 0;
        nn::os::UnlockMutex(pMVar1);
        goto LAB_03b47cec;
      }
    }
    uVar7 = 1;
    *(undefined4 *)(param_2 + 0x10) = 1;
    if ((*(char *)(param_2 + 0x18) != '\0') && (lVar5 = *(long *)(param_2 + 8), lVar5 != 0)) {
      lVar6 = *(long *)(lVar5 + 0x38);
      if (DAT_05aebc00 != '\0') {
        lVar6 = lVar5 + 0x70;
      }
      if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x11) >> 5 & 1) == 0)) {
        FUN_03b60f94(0,lVar5,1);
      }
      *(undefined1 *)(param_2 + 0x18) = 1;
    }
  }
  else {
LAB_03b47cec:
    uVar7 = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  uVar2 = 0;
  if (iVar3 == 4) {
    uVar2 = uVar7;
  }
  return uVar2;
}

