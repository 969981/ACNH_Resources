
void FUN_003d7970(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0x2341);
  nn::os::LockMutex(pMVar1);
  if (param_1[0x1f] == 0) {
    lVar7 = param_1[0x1e];
    if ((lVar7 == 0) || (plVar6 = *(long **)(lVar7 + 0x30), plVar6 == (long *)(lVar7 + 0x28)))
    goto LAB_003d79f8;
    plVar2 = (long *)plVar6[1];
    lVar7 = *plVar2;
    *(long **)(*plVar6 + 8) = plVar2;
    *plVar2 = *plVar6;
    *(long **)(lVar7 + 8) = plVar6;
    *plVar6 = lVar7;
    param_1[0x1f] = (long)(plVar6 + -0x6c2);
    cVar3 = (char)param_1[0x22cd];
  }
  else {
    cVar3 = (char)param_1[0x22cd];
  }
  if (cVar3 == '\0') {
    FUN_003d906c();
    FUN_003d604c(param_1,param_1 + 0x232a);
    if ((char)param_1[0x2329] != '\0') {
      FUN_003d6560(param_1,param_1 + 0x22ce);
      *(undefined1 *)(param_1 + 0x2329) = 0;
    }
    FUN_003d639c(param_1,param_1 + 0x2271);
    if (param_1[0x1f] == 0) goto LAB_003d79f8;
  }
  FUN_003d92a0();
  if (0 < (int)param_1[0x25]) {
    *(int *)(param_1 + 0x25) = (int)param_1[0x25] + -1;
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  if (((*(char *)((long)param_1 + 0xe2) != '\0') && (*(char *)((long)param_1 + 0xd9) != '\0')) &&
     (*(char *)((long)param_1 + 0x39) == '\0')) {
    FUN_003d6e40(param_1);
  }
  FUN_003d7c20(param_1);
  if (*(char *)((long)param_1 + 0x39) != '\0') {
    if (0 < (int)*(uint *)(param_1 + 0x8d)) {
      lVar7 = 0;
      do {
        if (*(long *)((long)param_1 + lVar7 + 0x488) == 0) {
          (**(code **)(*param_1 + 0x28))(param_1);
          *(undefined1 *)((long)param_1 + 0x3b) = 1;
          nn::os::UnlockMutex(pMVar1);
          return;
        }
        lVar7 = lVar7 + 0x1080;
      } while ((ulong)*(uint *)(param_1 + 0x8d) * 0x1080 != lVar7);
    }
    if (0 < *(int *)((long)param_1 + 0x46c)) {
      lVar7 = 0;
      plVar6 = param_1 + 0x2190;
      do {
        FUN_003d8340(param_1,plVar6);
        lVar7 = lVar7 + 1;
        plVar6 = plVar6 + 0x10;
      } while (lVar7 < *(int *)((long)param_1 + 0x46c));
    }
  }
  if (((*(char *)((long)param_1 + 0xdd) != '\0') &&
      (uVar4 = FUN_003d934c(param_1[0x1f]), (uVar4 & 1) == 0)) && (DAT_04c64431 == '\0')) {
    cVar3 = *(char *)((long)param_1 + 0x3a);
    *(undefined1 *)((long)param_1 + 0xdd) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    if (*(char *)((long)param_1 + 0xdc) != cVar3) {
      iVar5 = (int)param_1[0x8d];
      if (0 < iVar5) {
        lVar7 = 0;
        plVar6 = param_1 + 0x91;
        do {
          if (*plVar6 != 0) {
            FUN_003c0db0(*plVar6,cVar3 != '\0');
            iVar5 = (int)param_1[0x8d];
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 0x210;
        } while (lVar7 < iVar5);
      }
      *(char *)((long)param_1 + 0xdc) = cVar3;
    }
  }
  if (*(char *)((long)param_1 + 0xdf) != '\0') {
    *(undefined1 *)((long)param_1 + 0xdf) = 0;
    nn::os::UnlockMutex(pMVar1);
    return;
  }
LAB_003d79f8:
  nn::os::UnlockMutex(pMVar1);
  return;
}

