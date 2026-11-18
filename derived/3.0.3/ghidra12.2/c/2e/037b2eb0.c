
void FUN_037b2eb0(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (((*(byte *)(param_1 + 0x180) >> 2 & 1) != 0) &&
     (*(long *)(param_1 + 0x760) != 0 || *(long *)(param_1 + 0x758) != 0)) {
    uVar6 = *(int *)(param_1 + 0x750) - 1;
    if (uVar6 < 5) {
      uVar5 = *(undefined8 *)(&DAT_04199110 + (long)(int)uVar6 * 8);
    }
    else {
      uVar5 = 0;
    }
    FUN_029acc70(param_1 + 0x758,uVar5,param_1 + 0x750);
    uVar6 = (uint)*(byte *)(param_1 + 0x180);
  }
  if (((uVar6 >> 3 & 1) != 0) &&
     (*(long *)(param_1 + 0x7b8) != 0 || *(long *)(param_1 + 0x7b0) != 0)) {
    piVar1 = (int *)(*(long *)PTR_DAT_04bb26a8 + 0xa7690);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      lVar7 = DAT_055f00a8;
    } while (cVar3 != '\0');
    pMVar2 = (MutexType *)(DAT_055f00a8 + 0x1700);
    nn::os::LockMutex(pMVar2);
    plVar8 = (long *)((long)*(int *)(lVar7 + 0x1734) + param_1 + 0x7b0);
    if (*plVar8 != 0) {
      *(long *)(*plVar8 + 8) = plVar8[1];
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      *(long *)plVar8[1] = *plVar8;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(lVar7 + 0x1730) = *(int *)(lVar7 + 0x1730) + -1;
    nn::os::UnlockMutex(pMVar2);
    uVar6 = (uint)*(byte *)(param_1 + 0x180);
  }
  if (((uVar6 >> 5 & 1) != 0) &&
     (*(long *)(param_1 + 0x800) != 0 || *(long *)(param_1 + 0x7f8) != 0)) {
    lVar7 = *(long *)PTR_DAT_04bc4230;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x1708));
    plVar8 = (long *)((long)*(int *)(lVar7 + 0x173c) + param_1 + 0x7f8);
    if (*plVar8 != 0) {
      *(long *)(*plVar8 + 8) = plVar8[1];
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      *(long *)plVar8[1] = *plVar8;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(lVar7 + 0x1738) = *(int *)(lVar7 + 0x1738) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x1708));
  }
  if (*(long *)(param_1 + 0x838) != 0) {
    FUN_029cfba4();
  }
  lVar7 = DAT_055f26b0;
  if (((*(byte *)(param_1 + 0x180) >> 6 & 1) != 0) &&
     (plVar8 = *(long **)(param_1 + 0x840), plVar8[1] != 0 || *plVar8 != 0)) {
    pMVar2 = (MutexType *)(DAT_055f26b0 + 0x23a70);
    piVar1 = (int *)(DAT_055f26b0 + 0x23aa0);
    nn::os::LockMutex(pMVar2);
    plVar8 = (long *)((long)*(int *)(lVar7 + 0x23aa4) + (long)plVar8);
    if (*plVar8 != 0) {
      *(long *)(*plVar8 + 8) = plVar8[1];
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      *(long *)plVar8[1] = *plVar8;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    *piVar1 = *piVar1 + -1;
    nn::os::UnlockMutex(pMVar2);
  }
  if (*(long *)(param_1 + 0x848) != 0) {
    FUN_029f5bec();
  }
  if (*(long *)(param_1 + 0x850) == 0) {
    return;
  }
  FUN_029f583c();
  return;
}

