
long FUN_015d83c0(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  pMVar1 = (MutexType *)(param_1 + 0x448);
  iVar4 = *(int *)(param_1 + 0x424);
  lVar5 = *(long *)(param_1 + 0x418) - (long)iVar4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x418) + 8);
  nn::os::LockMutex(pMVar1);
  lVar2 = (param_1 - *(int *)(param_1 + 0x424)) + 0x410;
  if (lVar5 == lVar2) {
LAB_015d84a0:
    lVar5 = 0;
  }
  else {
    if (0 < *(int *)(lVar5 + 0x470)) {
      do {
        lVar5 = lVar6 - iVar4;
        if (lVar5 == lVar2) goto LAB_015d84a0;
        lVar6 = *(long *)(lVar6 + 8);
      } while (0 < *(int *)(lVar5 + 0x470));
    }
    nn::os::LockMutex(pMVar1);
    plVar3 = (long *)(lVar5 + *(int *)(param_1 + 0x424));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + -1;
    nn::os::UnlockMutex(pMVar1);
    *(undefined8 *)(lVar5 + 0x468) = 0xffffffffffffffff;
    *(ushort *)(lVar5 + 0x474) = *(ushort *)(lVar5 + 0x474) & 0xfffe;
    *(undefined4 *)(lVar5 + 0x470) = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  return lVar5;
}

