
undefined8 FUN_03c671d0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == param_2) {
    uVar7 = (**(code **)(**(long **)(*(long *)(param_2 + 0xa8) + 0x20) + 0x18))();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    lVar9 = *(long *)(param_2 + 0xa8);
  }
  else {
    piVar1 = (int *)(lVar8 + 0xd0);
    FUN_038e2e80(piVar1);
    plVar4 = *(long **)(lVar8 + 0xb0);
    if (*(long **)(lVar8 + 0xb0) == (long *)0x0) {
LAB_03c672e4:
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
        piVar1 = (int *)(lVar8 + 0x170);
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
          nn::os::ReleaseSemaphore((SemaphoreType *)(lVar8 + 0x148));
        }
      }
      return 0;
    }
    do {
      plVar11 = plVar4;
      plVar4 = (long *)plVar11[1];
    } while ((long *)plVar11[1] != (long *)0x0);
    lVar9 = (long)plVar11 - *(long *)(lVar8 + 200);
    lVar6 = (**(code **)(**(long **)(lVar9 + 0x20) + 0x30))(*(long **)(lVar9 + 0x20),0);
    while (lVar6 != param_2) {
      plVar4 = (long *)plVar11[2];
      plVar10 = plVar11;
      if ((long *)plVar11[2] == (long *)0x0) {
        do {
          plVar11 = (long *)*plVar10;
          if (plVar11 == (long *)0x0) goto LAB_03c672e4;
          bVar5 = (long *)plVar11[1] != plVar10;
          plVar10 = plVar11;
        } while (bVar5);
      }
      else {
        do {
          plVar11 = plVar4;
          plVar4 = (long *)plVar11[1];
        } while ((long *)plVar11[1] != (long *)0x0);
      }
      lVar9 = (long)plVar11 - *(long *)(lVar8 + 200);
      lVar6 = (**(code **)(**(long **)(lVar9 + 0x20) + 0x30))(*(long **)(lVar9 + 0x20),0);
    }
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
      piVar1 = (int *)(lVar8 + 0x170);
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
        nn::os::ReleaseSemaphore((SemaphoreType *)(lVar8 + 0x148));
      }
    }
  }
  **(long **)(param_1 + 8) = lVar9 + 0x20;
  return 1;
}

