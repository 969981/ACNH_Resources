
void FUN_006fb5f0(long param_1,undefined4 param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = (uint *)(param_1 + 0x248);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined4 *)(param_1 + 0x238) = param_2;
  if ((((*(uint *)(param_1 + 0x248) >> 9 & 1) == 0) && ((*puVar1 >> 1 & 1) == 0)) &&
     ((*puVar1 >> 8 & 1) == 0)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 & 0xfffffdff | 0x200;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar5 = (long)*(int *)(param_1 + 0xbc);
      plVar4 = (long *)(*(long *)(param_1 + 0xb0) - lVar5);
      do {
        (**(code **)(*plVar4 + 0xb0))(plVar4);
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
      } while (plVar4 != (long *)((param_1 + 0xa8) - lVar5));
    }
  }
  if ((((*puVar1 >> 10 & 1) == 0) && ((*puVar1 >> 1 & 1) == 0)) &&
     (((*puVar1 >> 9 & 1) != 0 || ((*puVar1 >> 8 & 1) != 0)))) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 & 0xfffffbff | 0x400;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar5 = (long)*(int *)(param_1 + 0xbc);
      plVar4 = (long *)(*(long *)(param_1 + 0xb0) - lVar5);
      do {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
      } while (plVar4 != (long *)((param_1 + 0xa8) - lVar5));
    }
  }
  return;
}

