
void FUN_03d57600(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if ((int)param_1[9] - 8U < 0xfffffffc) {
    return;
  }
  (**(code **)(*param_1 + 0x90))();
  plVar2 = param_1 + 0x22;
  FUN_038e2e80(plVar2);
  plVar7 = param_1 + 0xc;
  if ((long *)*plVar7 != plVar7) {
    lVar8 = (long)*(int *)((long)param_1 + 0x74);
    plVar1 = param_1 + 0x36;
    lVar9 = *plVar7 - lVar8;
    plVar10 = (long *)(lVar9 + lVar8);
    do {
      plVar10 = (long *)*plVar10;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar5 == 1) {
        do {
          lVar5 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar5 != 1) {
          nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x31));
        }
      }
      FUN_03d57600(lVar9);
      FUN_038e2e80(plVar2);
      lVar9 = (long)plVar10 - lVar8;
    } while (lVar9 != (long)plVar7 - lVar8);
  }
  do {
    lVar9 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = (int)lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar9 == 1) {
    plVar2 = param_1 + 0x36;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x31));
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  (**(code **)(*param_1 + 0x98))(param_1);
  uVar6 = 3;
  switch((int)param_1[9]) {
  case 4:
  case 6:
    break;
  case 5:
    lVar9 = param_1[0xb];
    FUN_038e2f80(lVar9 + 0x110);
    plVar2 = (long *)((long)*(int *)(lVar9 + 0x74) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar9 + 0x70) = *(int *)(lVar9 + 0x70) + -1;
    FUN_038e3040(lVar9 + 0x110);
    param_1[0xb] = 0;
    uVar6 = 2;
    break;
  case 7:
    lVar9 = param_1[0xb];
    FUN_038e2f80(lVar9 + 0x110);
    plVar2 = (long *)((long)*(int *)(lVar9 + 0x74) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar9 + 0x70) = *(int *)(lVar9 + 0x70) + -1;
    FUN_038e3040(lVar9 + 0x110);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    uVar6 = 8;
    break;
  default:
    goto switchD_03d57758_default;
  }
  *(undefined4 *)(param_1 + 9) = uVar6;
switchD_03d57758_default:
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
  return;
}

