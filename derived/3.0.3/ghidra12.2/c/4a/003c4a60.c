
void FUN_003c4a60(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 1));
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (0 < (int)uVar2) {
    lVar3 = param_1[6];
    uVar4 = 0;
    lVar5 = *(long *)(lVar3 + 8);
    if (lVar5 != lVar3) goto LAB_003c4ae0;
    while (uVar4 = uVar4 + 1, uVar4 != uVar2) {
      lVar1 = lVar3 + uVar4 * 0x10;
      lVar5 = *(long *)(lVar1 + 8);
      if (lVar5 != lVar1) {
LAB_003c4ae0:
        do {
          FUN_003ddf90(lVar5 + -8);
          lVar3 = param_1[6];
          lVar5 = *(long *)(lVar5 + 8);
        } while (lVar5 != lVar3 + uVar4 * 0x10);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 1));
  return;
}

