
void FUN_038e2f30(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  do {
    iVar2 = *param_1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 1) {
    piVar1 = param_1 + 0x28;
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x1e));
      return;
    }
  }
  return;
}

