
void FUN_006fb3d0(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(uint *)(param_1 + 0x248) >> 1 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x248);
    if ((*puVar1 >> 3 & 1) != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 & 0xfffffff7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if ((*puVar1 >> 9 & 1) != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 & 0xfffffdff;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (((((*puVar1 >> 8 & 1) != 0) && ((*puVar1 >> 10 & 1) == 0)) && ((*puVar1 >> 1 & 1) == 0)) &&
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
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 & 0xfffffffd | 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 & 0xfffeffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar5 = (long)*(int *)(param_1 + 0xbc);
      plVar4 = (long *)(*(long *)(param_1 + 0xb0) - lVar5);
      do {
        (**(code **)(*plVar4 + 0xa8))(plVar4);
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
      } while (plVar4 != (long *)((param_1 + 0xa8) - lVar5));
    }
  }
  return;
}

