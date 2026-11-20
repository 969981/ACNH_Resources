
void FUN_03d5a660(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar3 = (long)*(int *)(param_1 + 0x44);
    lVar4 = *(long *)(param_1 + 0x38) - lVar3;
    do {
      piVar5 = *(int **)(lVar4 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      piVar5 = (int *)(*(long *)(lVar4 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
    } while (lVar4 != (param_1 + 0x30) - lVar3);
  }
  if (*(long *)(param_1 + 0x50) != param_1 + 0x48) {
    lVar3 = (long)*(int *)(param_1 + 0x5c);
    lVar4 = *(long *)(param_1 + 0x50) - lVar3;
    do {
      piVar5 = (int *)(*(long *)(lVar4 + 0x10) + 4);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
    } while (lVar4 != (param_1 + 0x48) - lVar3);
  }
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar3 = (long)*(int *)(param_1 + 0x74);
    lVar4 = *(long *)(param_1 + 0x68) - lVar3;
    do {
      piVar5 = (int *)(*(long *)(lVar4 + 0x10) + 4);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
    } while (lVar4 != (param_1 + 0x60) - lVar3);
  }
  return;
}

