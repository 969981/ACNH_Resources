
void FUN_038e2f80(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  if (*(long *)(param_1 + 0xa8) != lVar5) {
    piVar1 = (int *)(param_1 + 4);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      piVar1 = (int *)(param_1 + 0x50);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 != 0) {
        nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x28));
      }
    }
    piVar1 = (int *)(param_1 + 0xa0);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 != 0) {
      nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 0x78));
    }
    *(long *)(param_1 + 0xa8) = lVar5;
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  return;
}

