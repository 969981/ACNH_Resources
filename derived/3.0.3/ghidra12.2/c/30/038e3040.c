
void FUN_038e3040(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  if (((*(long *)(param_1 + 0xa8) == lVar5) && (lVar5 != 0 && 0 < *(int *)(param_1 + 0xb0))) &&
     (iVar4 = *(int *)(param_1 + 0xb0) + -1, *(int *)(param_1 + 0xb0) = iVar4, iVar4 == 0)) {
    piVar1 = (int *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x78));
    }
    piVar1 = (int *)(param_1 + 4);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 1) {
      piVar1 = (int *)(param_1 + 0x50);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 != 1) {
        nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x28));
        return;
      }
    }
  }
  return;
}

