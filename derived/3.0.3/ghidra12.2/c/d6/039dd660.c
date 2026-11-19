
void FUN_039dd660(ulong *param_1,uint param_2)

{
  ulong uVar1;
  int *piVar2;
  undefined4 extraout_w1;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  
  uVar3 = param_1[1];
  uVar1 = uVar3 & 0xfffffffffffffff8;
  if (uVar1 != 0) {
    nn::os::LockMutex((MutexType *)(uVar1 + 0x5d18));
    uVar3 = *param_1;
    if (uVar3 < *(ulong *)(uVar1 + 0x5ce8) || *(long *)(uVar1 + 0x5cf0) + 0x20U <= uVar3) {
      bVar4 = 4;
      if ((param_2 & 1) == 0) {
        bVar4 = 0;
      }
      if (*(uint *)(uVar1 + 0x5cb8) != 0) {
        uVar5 = 0;
        do {
          lVar6 = *(long *)(uVar1 + 0x5cb0) + (long)(int)uVar5 * 0x88;
          if (*(uint *)(uVar1 + 0x5ca8) <= uVar5) {
            lVar6 = 0;
          }
          if (((*(byte *)(lVar6 + 0x18) & 1) != 0) && (uVar3 == *(ulong *)(lVar6 + 0x38))) {
            nn::os::LockMutex((MutexType *)(lVar6 + 0x68));
            *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) & 0xfb | bVar4;
            nn::os::UnlockMutex((MutexType *)(lVar6 + 0x68));
            break;
          }
          uVar5 = uVar5 + 1;
        } while (*(uint *)(uVar1 + 0x5cb8) != uVar5);
      }
    }
    else {
      piVar2 = (int *)(uVar3 - *(ushort *)(uVar3 - 2));
      if ((piVar2 == (int *)0x0) || (*piVar2 != -0x52fff2e2)) {
        uVar3 = param_1[1];
        nn::os::LockMutex((MutexType *)(uVar3 + 0x5d18));
        nn::os::UnlockMutex((MutexType *)(uVar3 + 0x5d18));
        FUN_039db950(param_1[1],extraout_w1,0);
      }
      bVar4 = *(byte *)((long)piVar2 + 0x1d);
      if (bVar4 != 0) {
        uVar5 = bVar4 - 1;
        lVar6 = *(long *)(uVar1 + 0x5cb0) + (ulong)uVar5 * 0x88;
        if (*(uint *)(uVar1 + 0x5ca8) <= uVar5) {
          lVar6 = 0;
        }
        nn::os::LockMutex((MutexType *)(lVar6 + 0x68));
        if (bVar4 == *(byte *)((long)piVar2 + 0x1d)) {
          bVar4 = 4;
          if ((param_2 & 1) == 0) {
            bVar4 = 0;
          }
          *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) & 0xfb | bVar4;
        }
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x68));
      }
      bVar4 = 2;
      if ((param_2 & 1) == 0) {
        bVar4 = 0;
      }
      *(byte *)(piVar2 + 7) = *(byte *)(piVar2 + 7) & 0xfd | bVar4;
    }
    nn::os::UnlockMutex((MutexType *)(uVar1 + 0x5d18));
    uVar3 = param_1[1];
  }
  uVar1 = 2;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  param_1[1] = uVar3 & 0xfffffffffffffffd | uVar1;
  return;
}

