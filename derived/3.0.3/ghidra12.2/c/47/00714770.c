
undefined8 FUN_00714770(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x298) < 1) {
    uVar3 = 1;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2c0));
    if (*(long *)(param_1 + 0x290) != param_1 + 0x288) {
      lVar4 = (long)*(int *)(param_1 + 0x29c);
      lVar2 = *(long *)(param_1 + 0x290) - lVar4;
      do {
        if (((*(uint *)(*(long *)(lVar2 + 0x48) + 0x248) >> 0xe & 1) == 0) ||
           (uVar1 = FUN_00714770(lVar2), (uVar1 & 1) == 0)) {
          uVar3 = 0;
          goto LAB_00714800;
        }
        lVar2 = *(long *)(lVar2 + lVar4 + 8) - lVar4;
      } while (lVar2 != (param_1 + 0x288) - lVar4);
    }
    uVar3 = 1;
LAB_00714800:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2c0));
  }
  return uVar3;
}

