
void FUN_006faa20(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = (uint *)(param_1 + 0x248);
  if ((*(uint *)(param_1 + 0x248) >> 1 & 1) == 0) {
    lVar2 = param_1 + 0xc0 + (ulong)param_2 * 0x20;
    if (3 < param_2) {
      lVar2 = param_1 + 0xc0;
    }
    if (*(long *)(lVar2 + 0x10) != lVar2 + 8) {
      lVar6 = (long)*(int *)(lVar2 + 0x1c);
      puVar5 = (undefined8 *)(*(long *)(lVar2 + 0x10) - lVar6);
      do {
        (**(code **)*puVar5)(puVar5);
        puVar5 = (undefined8 *)(*(long *)((long)puVar5 + lVar6 + 8) - lVar6);
      } while (puVar5 != (undefined8 *)((lVar2 + 8) - lVar6));
    }
    if ((((*puVar1 >> 1 & 1) == 0) && (param_2 == 1)) && (*(char *)(param_1 + 0x260) != '\0')) {
      FUN_006fab60(param_1);
      return;
    }
  }
  else {
    if (param_2 != 3) {
      return;
    }
    if ((*puVar1 >> 0xd & 1) == 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 0x2000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if ((param_2 == 3) && ((*puVar1 >> 7 & 1) != 0)) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 & 0xffffff7f;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

