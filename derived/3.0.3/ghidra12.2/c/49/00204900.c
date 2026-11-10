
void FUN_00204900(long *param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  (**(code **)(*param_1 + 0x40))();
  plVar6 = (long *)param_1[2];
  if (plVar6 == (long *)0x0) {
LAB_00204980:
    if (param_2 == 0) {
      return;
    }
    param_1[2] = param_2;
    piVar2 = (int *)(param_2 + 8);
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
LAB_0020495c:
      if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
      }
      param_1[2] = 0;
      goto LAB_00204980;
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
      if (cVar3 == '\0') goto LAB_0020495c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar5;
  } while( true );
}

