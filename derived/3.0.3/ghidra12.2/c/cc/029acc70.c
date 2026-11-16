
void FUN_029acc70(long *param_1,uint param_2,uint *param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  
  if (param_1[1] != 0 || *param_1 != 0) {
    piVar3 = (int *)(*(long *)PTR_DAT_04bb26a8 + 0xa7724) + *param_3;
    if (9 < *param_3) {
      piVar3 = (int *)(*(long *)PTR_DAT_04bb26a8 + 0xa7724);
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      lVar7 = DAT_055e61e8;
    } while (cVar5 != '\0');
    pMVar1 = (MutexType *)(DAT_055e61e8 + 0x7360);
    nn::os::LockMutex(pMVar1);
    lVar4 = lVar7 + 0x7380 + (ulong)param_2 * 0x18;
    if (4 < param_2) {
      lVar4 = lVar7 + 0x7380;
    }
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x14) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    nn::os::UnlockMutex(pMVar1);
    param_1[9] = -1;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
  }
  return;
}

