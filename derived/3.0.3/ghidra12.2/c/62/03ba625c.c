
undefined8 FUN_03ba625c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if (((*(ushort *)(param_2 + 0x1d0) >> 1 & 1) == 0) && (*(int *)(param_2 + 0xc) < 3)) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x120) + 8);
    lVar5 = *(long *)(lVar3 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar5 = lVar3 + 0x70;
    }
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x11) & 0x21) == 0)) {
      plVar1 = *(long **)(*(long *)(param_1 + 0x160) + 0x50);
      if ((plVar1 != (long *)0x0) &&
         (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) == 0)) {
        return 0;
      }
      nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
      plVar4 = *(long **)(*(long *)(param_1 + 0x160) + 0x38);
      plVar1 = *(long **)(*(long *)(param_1 + 0x160) + 0x48);
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4;
      }
      if (plVar1 != (long *)0x0) {
        plVar4 = (long *)(*(int *)((long)plVar1 + 0x14) + param_2);
        lVar5 = *plVar1;
        *plVar1 = (long)plVar4;
        *plVar4 = lVar5;
        plVar4[1] = (long)plVar1;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 8) = plVar4;
        }
        plVar1 = plVar1 + 2;
        goto LAB_03ba6370;
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
  plVar1 = (long *)(*(int *)(param_1 + 0x1bc) + param_2);
  lVar5 = *(long *)(param_1 + 0x1a8);
  *(long **)(param_1 + 0x1a8) = plVar1;
  *plVar1 = lVar5;
  plVar1[1] = param_1 + 0x1a8;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar1;
  }
  plVar1 = (long *)(param_1 + 0x1b8);
LAB_03ba6370:
  *(int *)plVar1 = (int)*plVar1 + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
  return 1;
}

