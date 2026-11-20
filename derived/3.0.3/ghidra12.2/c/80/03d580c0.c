
void FUN_03d580c0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = param_1 + 0x22;
  FUN_038e2e80(plVar1);
  plVar5 = param_1 + 0xc;
  if ((long *)*plVar5 != plVar5) {
    lVar8 = (long)*(int *)((long)param_1 + 0x74);
    lVar7 = *plVar5 - lVar8;
    do {
      FUN_03d580c0(lVar7,param_2,param_3);
      lVar7 = *(long *)(lVar7 + lVar8) - lVar8;
    } while (lVar7 != (long)plVar5 - lVar8);
  }
  if ((char)param_1[10] == '\0') {
    lVar7 = *param_1;
    uVar4 = 0;
  }
  else {
    lVar7 = *param_3;
    param_2 = param_1 + 0xf;
    plVar6 = (long *)(lVar7 + 0x18);
    lVar8 = *plVar6;
    plVar5 = (long *)((long)*(int *)(lVar7 + 0x2c) + (long)param_2);
    *plVar6 = (long)plVar5;
    *plVar5 = lVar8;
    plVar5[1] = (long)plVar6;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar5;
    }
    *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
    *param_3 = (long)param_2;
    lVar7 = *param_1;
    uVar4 = (undefined1)param_1[10];
  }
  (**(code **)(lVar7 + 0x70))(param_1,param_2,uVar4);
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar7 == 1) {
    plVar1 = param_1 + 0x36;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x31));
      return;
    }
  }
  return;
}

