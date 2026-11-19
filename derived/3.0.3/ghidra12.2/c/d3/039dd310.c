
undefined8 FUN_039dd310(ulong *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 extraout_w1;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*param_1 == 0) {
    *(int *)(param_1 + 2) = param_2;
  }
  else {
    uVar6 = param_1[1] & 0xfffffffffffffff8;
    nn::os::LockMutex((MutexType *)(uVar6 + 0x5d18));
    uVar3 = *param_1;
    if (uVar3 < *(ulong *)(uVar6 + 0x5ce8) || *(long *)(uVar6 + 0x5cf0) + 0x20U <= uVar3) {
      if (*(uint *)(uVar6 + 0x5cb8) != 0) {
        uVar4 = 0;
        do {
          lVar5 = *(long *)(uVar6 + 0x5cb0) + (long)(int)uVar4 * 0x88;
          if (*(uint *)(uVar6 + 0x5ca8) <= uVar4) {
            lVar5 = 0;
          }
          if (((*(byte *)(lVar5 + 0x18) & 1) != 0) && (uVar3 == *(ulong *)(lVar5 + 0x38))) {
            nn::os::LockMutex((MutexType *)(lVar5 + 0x68));
            *(int *)(lVar5 + 0x28) = param_2;
            nn::os::UnlockMutex((MutexType *)(lVar5 + 0x68));
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(uVar6 + 0x5cb8) != uVar4);
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
      bVar1 = *(byte *)((long)piVar2 + 0x1d);
      if (bVar1 != 0) {
        uVar4 = bVar1 - 1;
        lVar5 = *(long *)(uVar6 + 0x5cb0) + (ulong)uVar4 * 0x88;
        if (*(uint *)(uVar6 + 0x5ca8) <= uVar4) {
          lVar5 = 0;
        }
        nn::os::LockMutex((MutexType *)(lVar5 + 0x68));
        if (bVar1 == *(byte *)((long)piVar2 + 0x1d)) {
          *(int *)(lVar5 + 0x28) = param_2;
        }
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0x68));
      }
      piVar2[5] = param_2;
    }
    *(int *)(param_1 + 2) = param_2;
    nn::os::UnlockMutex((MutexType *)(uVar6 + 0x5d18));
  }
  return 1;
}

