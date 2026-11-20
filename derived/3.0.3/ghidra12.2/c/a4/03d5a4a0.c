
void FUN_03d5a4a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar4 = (long)*(int *)(param_1 + 0x44);
    lVar5 = *(long *)(param_1 + 0x38) - lVar4;
    do {
      piVar1 = (int *)(*(long *)(lVar5 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
    } while (lVar5 != (param_1 + 0x30) - lVar4);
  }
  if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
    lVar4 = (long)*(int *)(param_1 + 0x2c);
    lVar5 = *(long *)(param_1 + 0x20) - lVar4;
    do {
      FUN_03d5a4a0(lVar5);
      lVar5 = *(long *)(lVar5 + lVar4 + 8) - lVar4;
    } while (lVar5 != (param_1 + 0x18) - lVar4);
  }
  return;
}

