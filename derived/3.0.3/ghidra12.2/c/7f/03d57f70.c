
void FUN_03d57f70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((char)param_1[10] != '\0') {
    (**(code **)(*param_1 + 0xa0))();
    (**(code **)(*param_1 + 0x58))(param_1);
    plVar1 = param_1 + 0x22;
    FUN_038e2e80(plVar1);
    if ((long *)param_1[0xd] != param_1 + 0xc) {
      lVar7 = (long)*(int *)((long)param_1 + 0x74);
      plVar2 = param_1 + 0x36;
      lVar6 = param_1[0xd] - lVar7;
      do {
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar5 == 1) {
          do {
            lVar5 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = (int)lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar5 != 1) {
            nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x31));
          }
        }
        FUN_03d57f70(lVar6);
        FUN_038e2e80(plVar1);
        lVar6 = *(long *)(lVar6 + lVar7 + 8) - lVar7;
      } while (lVar6 != (long)(param_1 + 0xc) - lVar7);
    }
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == 1) {
      plVar1 = param_1 + 0x36;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 != 1) {
        nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x31));
        return;
      }
    }
  }
  return;
}

