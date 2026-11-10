
void FUN_0020d9c0(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  *(long *)(param_1 + 0x60) = param_2;
  plVar10 = *(long **)(*(long *)(param_1 + 0x48) + 0x10);
  (**(code **)(*plVar10 + 0x40))(plVar10);
  plVar6 = (long *)plVar10[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    iVar8 = (int)*plVar1;
    iVar7 = (int)*plVar1 + -1;
    if (iVar8 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_0020da94:
      do {
        lVar9 = *plVar1;
        iVar7 = iVar8 + -1;
        if ((int)lVar9 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0020da2c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar9;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0020da94;
LAB_0020da2c:
    if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
    }
    plVar10[2] = 0;
  }
  if (param_2 != 0) {
    plVar10[2] = param_2;
    piVar2 = (int *)(param_2 + 8);
    iVar8 = *piVar2;
    if (iVar8 != *piVar2) {
      ClearExclusiveLocal();
LAB_0020db30:
      do {
        iVar7 = *piVar2;
        if (iVar7 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0020dac8;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = *piVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0020db30;
  }
LAB_0020dac8:
  plVar10 = *(long **)(param_1 + 0x50);
  lVar9 = *(long *)(param_1 + 0x60);
  (**(code **)(*plVar10 + 0x40))(plVar10,lVar9);
  plVar6 = (long *)plVar10[2];
  if (plVar6 == (long *)0x0) {
LAB_0020db88:
    if (lVar9 == 0) {
      return;
    }
    plVar10[2] = lVar9;
    piVar2 = (int *)(lVar9 + 8);
    iVar8 = *piVar2;
    if (iVar8 == *piVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      iVar7 = *piVar2;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar7;
    } while( true );
  }
  plVar1 = plVar6 + 1;
  iVar8 = (int)*plVar1;
  iVar7 = (int)*plVar1 + -1;
  if (iVar8 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_0020db64:
      if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
      }
      plVar10[2] = 0;
      goto LAB_0020db88;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar7 = iVar8 + -1;
    if ((int)lVar5 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0020db64;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar5;
  } while( true );
}

