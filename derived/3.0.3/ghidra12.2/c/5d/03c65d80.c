
long FUN_03c65d80(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if (param_1 == param_2) {
    uVar7 = (**(code **)(**(long **)(*(long *)(param_1 + 0xa8) + 0x20) + 0x18))();
    if ((uVar7 & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(param_1 + 0xa8) + 0x20;
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0xd0);
    FUN_038e2e80(piVar1);
    plVar4 = *(long **)(param_1 + 0xb0);
    if (*(long **)(param_1 + 0xb0) == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      do {
        plVar10 = plVar4;
        plVar4 = (long *)plVar10[1];
      } while ((long *)plVar10[1] != (long *)0x0);
      lVar9 = (long)plVar10 - *(long *)(param_1 + 200);
      lVar6 = (**(code **)(**(long **)(lVar9 + 0x20) + 0x30))(*(long **)(lVar9 + 0x20),0);
      while (lVar6 != param_2) {
        plVar4 = (long *)plVar10[2];
        plVar8 = plVar10;
        if ((long *)plVar10[2] == (long *)0x0) {
          do {
            plVar10 = (long *)*plVar8;
            if (plVar10 == (long *)0x0) {
              lVar9 = 0;
              goto LAB_03c65e90;
            }
            bVar5 = (long *)plVar10[1] != plVar8;
            plVar8 = plVar10;
          } while (bVar5);
        }
        else {
          do {
            plVar10 = plVar4;
            plVar4 = (long *)plVar10[1];
          } while ((long *)plVar10[1] != (long *)0x0);
        }
        lVar9 = (long)plVar10 - *(long *)(param_1 + 200);
        lVar6 = (**(code **)(**(long **)(lVar9 + 0x20) + 0x30))(*(long **)(lVar9 + 0x20),0);
      }
      lVar9 = lVar9 + 0x20;
    }
LAB_03c65e90:
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
      piVar1 = (int *)(param_1 + 0x170);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 != 1) {
        nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x148));
      }
    }
  }
  return lVar9;
}

