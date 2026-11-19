
uint FUN_03bcae60(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  MemoryPoolType *pMVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x10) != param_1 + 8) {
    lVar3 = (long)*(int *)(param_1 + 0x1c);
    lVar7 = *(long *)(param_1 + 0x10) - lVar3;
    do {
      plVar1 = (long *)(lVar7 + lVar3);
      if (lVar7 == param_2) {
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        uVar9 = 0;
        piVar4 = (int *)(param_1 + 0x18);
        iVar5 = -1;
        *plVar1 = 0;
        plVar1[1] = 0;
        goto LAB_03bcaf6c;
      }
      lVar7 = plVar1[1] - lVar3;
    } while (lVar7 != (param_1 + 8) - lVar3);
  }
  if ((*(long *)(param_2 + 0x60) == 0 && *(long *)(param_2 + 0x58) == 0) &&
     (pMVar10 = (MemoryPoolType *)(param_2 + 0x38), *(long *)pMVar10 != 0)) {
    uVar2 = nn::audio::IsMemoryPoolAttached(pMVar10);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = nn::audio::RequestDetachMemoryPool(pMVar10), (uVar2 & 1) == 0)) {
      uVar9 = 0;
      uVar8 = 0;
      goto LAB_03bcaf7c;
    }
    plVar6 = (long *)(param_1 + 0x20);
    lVar7 = *plVar6;
    plVar1 = (long *)(*(int *)(param_1 + 0x34) + param_2);
    *plVar6 = (long)plVar1;
    *plVar1 = lVar7;
    plVar1[1] = (long)plVar6;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar1;
    }
    piVar4 = (int *)(param_1 + 0x30);
    iVar5 = 1;
    uVar9 = 1;
LAB_03bcaf6c:
    *piVar4 = *piVar4 + iVar5;
  }
  else {
    uVar9 = 0;
  }
  uVar8 = 1;
LAB_03bcaf7c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
  return uVar9 | uVar8;
}

