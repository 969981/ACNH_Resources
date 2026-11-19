
void FUN_038e2e80(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  
  piVar1 = param_1 + 0x14;
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 != 0) {
    nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 10));
  }
  do {
    iVar3 = *param_1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = iVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    piVar2 = param_1 + 0x28;
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) {
      nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x1e));
    }
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
    return;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 10));
  return;
}

