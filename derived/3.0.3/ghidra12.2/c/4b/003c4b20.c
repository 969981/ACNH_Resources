
void FUN_003c4b20(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 1));
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (0 < (int)uVar2) {
    lVar3 = param_1[6];
    uVar5 = 0;
    lVar4 = *(long *)(lVar3 + 8);
    if (lVar4 != lVar3) goto LAB_003c4ba0;
    while (uVar5 = uVar5 + 1, uVar5 != uVar2) {
      lVar1 = lVar3 + uVar5 * 0x10;
      lVar4 = *(long *)(lVar1 + 8);
      if (lVar4 != lVar1) {
LAB_003c4ba0:
        do {
          (**(code **)(*(long *)(lVar4 + -8) + 0x20))((long *)(lVar4 + -8));
          lVar3 = param_1[6];
          lVar4 = *(long *)(lVar4 + 8);
        } while (lVar4 != lVar3 + uVar5 * 0x10);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 1));
  return;
}

