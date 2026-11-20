
byte FUN_03d5a890(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  
  if (*(long *)(param_1 + 0x38) == param_1 + 0x30) {
    bVar5 = 0;
  }
  else {
    lVar6 = (long)*(int *)(param_1 + 0x44);
    bVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x38) - lVar6;
    do {
      piVar8 = *(int **)(lVar7 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar1 = (undefined8 *)(lVar7 + 0x10);
      lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
      bVar5 = bVar5 | *(int *)*puVar1 == 0;
    } while (lVar7 != (param_1 + 0x30) - lVar6);
  }
  if (*(long *)(param_1 + 0x50) != param_1 + 0x48) {
    lVar6 = (long)*(int *)(param_1 + 0x5c);
    lVar7 = *(long *)(param_1 + 0x50) - lVar6;
    do {
      piVar8 = (int *)(*(long *)(lVar7 + 0x10) + 4);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = (long *)(lVar7 + 0x10);
      lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
      bVar5 = bVar5 | *(int *)(*plVar2 + 4) == 0;
    } while (lVar7 != (param_1 + 0x48) - lVar6);
  }
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar6 = (long)*(int *)(param_1 + 0x74);
    lVar7 = *(long *)(param_1 + 0x68) - lVar6;
    do {
      piVar8 = (int *)(*(long *)(lVar7 + 0x10) + 4);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = *piVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = (long *)(lVar7 + 0x10);
      lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
      bVar5 = bVar5 | *(int *)(*plVar2 + 4) == 0;
    } while (lVar7 != (param_1 + 0x60) - lVar6);
  }
  return bVar5;
}

