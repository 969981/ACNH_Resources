
long FUN_01586a10(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  pMVar1 = (MutexType *)(param_1 + 0x438);
  iVar4 = *(int *)(param_1 + 0x414);
  lVar5 = *(long *)(param_1 + 0x408) - (long)iVar4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x408) + 8);
  nn::os::LockMutex(pMVar1);
  lVar2 = (param_1 - *(int *)(param_1 + 0x414)) + 0x400;
  if (lVar5 == lVar2) {
LAB_01586af8:
    lVar5 = 0;
  }
  else {
    if (0 < *(int *)(lVar5 + 0x46c)) {
      do {
        lVar5 = lVar6 - iVar4;
        if (lVar5 == lVar2) goto LAB_01586af8;
        lVar6 = *(long *)(lVar6 + 8);
      } while (0 < *(int *)(lVar5 + 0x46c));
    }
    nn::os::LockMutex(pMVar1);
    plVar3 = (long *)(lVar5 + *(int *)(param_1 + 0x414));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -1;
    nn::os::UnlockMutex(pMVar1);
    *(undefined4 *)(lVar5 + 0x468) = DAT_04cb0c60;
    *(ushort *)(lVar5 + 0x470) = *(ushort *)(lVar5 + 0x470) & 0xfffe;
    *(undefined4 *)(lVar5 + 0x46c) = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  return lVar5;
}

