
void FUN_03d57c90(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((int)param_1[9] == 3) {
    return;
  }
  if ((param_3 & 1) == 0) {
    bVar6 = (*(uint *)(*(long *)(DAT_05af83f0 + 0x418) + 8) & *(uint *)((long)param_1 + 0x4c)) != 0;
  }
  else {
    bVar6 = true;
  }
  plVar1 = param_1 + 0x22;
  FUN_038e2e80(plVar1);
  plVar7 = param_1 + 0xc;
  if ((long *)*plVar7 != plVar7) {
    lVar9 = (long)*(int *)((long)param_1 + 0x74);
    plVar2 = param_1 + 0x36;
    lVar8 = *plVar7 - lVar9;
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
      FUN_03d57c90(lVar8,param_2,bVar6);
      FUN_038e2e80(plVar1);
      lVar8 = *(long *)(lVar8 + lVar9) - lVar9;
    } while (lVar8 != (long)plVar7 - lVar9);
  }
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar8 == 1) {
    plVar1 = param_1 + 0x36;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x31));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03d57dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2,bVar6);
  return;
}

