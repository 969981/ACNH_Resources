
void FUN_03d58210(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if ((int)param_1[9] != 3) {
    plVar1 = param_1 + 0x22;
    FUN_038e2e80(plVar1);
    (**(code **)(*param_1 + 0x78))(param_1,param_2);
    if ((long *)param_1[0xd] != param_1 + 0xc) {
      lVar5 = (long)*(int *)((long)param_1 + 0x74);
      lVar4 = param_1[0xd] - lVar5;
      do {
        FUN_03d58210(lVar4,param_2);
        lVar4 = *(long *)(lVar4 + lVar5 + 8) - lVar5;
      } while (lVar4 != (long)(param_1 + 0xc) - lVar5);
    }
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == 1) {
      plVar1 = param_1 + 0x36;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 != 1) {
        nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x31));
        return;
      }
    }
  }
  return;
}

