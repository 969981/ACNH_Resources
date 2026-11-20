
void FUN_03d57b40(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  piVar1 = (int *)(param_1 + 0x110);
  FUN_038e2e80(piVar1);
  plVar6 = (long *)(param_1 + 0x60);
  if ((long *)*plVar6 != plVar6) {
    lVar7 = (long)*(int *)(param_1 + 0x74);
    piVar2 = (int *)(param_1 + 0x1b0);
    lVar8 = *plVar6 - lVar7;
    plVar9 = (long *)(lVar8 + lVar7);
    do {
      plVar9 = (long *)*plVar9;
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 1) {
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 != 1) {
          nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x188));
        }
      }
      FUN_03d57b40(lVar8);
      FUN_038e2e80(piVar1);
      lVar8 = (long)plVar9 - lVar7;
    } while (lVar8 != (long)plVar6 - lVar7);
  }
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 1) {
    piVar1 = (int *)(param_1 + 0x1b0);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x188));
    }
  }
  if (*(int *)(param_1 + 0x48) - 5U < 3) {
    FUN_03d57600(param_1);
    return;
  }
  return;
}

