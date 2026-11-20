
void FUN_03d57850(long param_1,ulong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x48) == 3) {
    FUN_03d579f0(param_1);
  }
  if (((param_2 & 1) == 0) ||
     ((*(uint *)(*(long *)(DAT_05af83f0 + 0x418) + 8) & *(uint *)(param_1 + 0x4c)) != 0)) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    bVar5 = *(int *)(param_1 + 0x48) != 3;
    *(bool *)(param_1 + 0x50) = bVar5;
    if (bVar5) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
  }
  piVar1 = (int *)(param_1 + 0x110);
  FUN_038e2e80(piVar1);
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar7 = (long)*(int *)(param_1 + 0x74);
    piVar2 = (int *)(param_1 + 0x1b0);
    lVar6 = *(long *)(param_1 + 0x68) - lVar7;
    do {
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
      FUN_03d57850(lVar6,*(undefined1 *)(param_1 + 0x50));
      FUN_038e2e80(piVar1);
      lVar6 = *(long *)(lVar6 + lVar7 + 8) - lVar7;
    } while (lVar6 != (param_1 + 0x60) - lVar7);
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
      return;
    }
  }
  return;
}

