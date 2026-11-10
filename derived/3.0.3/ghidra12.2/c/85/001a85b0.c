
void FUN_001a85b0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_04bcc350 + 0x10);
  plVar3 = (long *)param_1[0x48];
  if (plVar3 == (long *)0x0) {
LAB_001a861c:
    plVar3 = (long *)param_1[0x49];
  }
  else {
    plVar8 = plVar3 + 1;
    iVar6 = (int)*plVar8;
    iVar5 = (int)*plVar8 + -1;
    if (iVar6 != (int)*plVar8) {
      ClearExclusiveLocal();
LAB_001a8660:
      do {
        lVar4 = *plVar8;
        iVar5 = iVar6 + -1;
        if ((int)lVar4 == iVar6) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *(int *)plVar8 = iVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_001a8610;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = (int)lVar4;
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *(int *)plVar8 = iVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 != '\0') goto LAB_001a8660;
LAB_001a8610:
    if ((iVar5 != 0) || (*(char *)((long)plVar3 + 0xc) != '\0')) goto LAB_001a861c;
    *(undefined1 *)((long)plVar3 + 0xc) = 1;
    (**(code **)(*plVar3 + 8))();
    plVar3 = (long *)param_1[0x49];
  }
  if (plVar3 == (long *)0x0) {
LAB_001a8714:
    if (param_1[0x67] != 0) {
      param_1[0x68] = param_1[0x67];
      FUN_00187e4c();
    }
    FUN_001e1868(param_1 + 0x50);
    if (param_1[0x4e] != 0) {
      plVar3 = (long *)param_1[0x4d];
      param_1[0x4e] = 0;
      lVar4 = param_1[0x4c];
      lVar7 = *plVar3;
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar4 + 8);
      **(long **)(lVar4 + 8) = lVar7;
      while (plVar3 != param_1 + 0x4c) {
        plVar8 = (long *)plVar3[1];
        (**(code **)plVar3[2])();
        FUN_00187e4c(plVar3);
        plVar3 = plVar8;
      }
    }
    FUN_001976b0(param_1 + 0x35);
    FUN_001976b0(param_1 + 0x23);
    if (param_1[0x21] != 0) {
      lVar4 = param_1[0x1f];
      plVar3 = (long *)param_1[0x20];
      param_1[0x21] = 0;
      lVar7 = *plVar3;
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar4 + 8);
      **(long **)(lVar4 + 8) = lVar7;
      while (plVar3 != param_1 + 0x1f) {
        plVar8 = (long *)plVar3[1];
        (**(code **)plVar3[2])();
        FUN_00187e4c(plVar3);
        plVar3 = plVar8;
      }
    }
    FUN_001a155c(param_1 + 0x14);
    FUN_0019a368(param_1);
    return;
  }
  plVar8 = plVar3 + 1;
  iVar6 = (int)*plVar8;
  iVar5 = (int)*plVar8 + -1;
  if (iVar6 == (int)*plVar8) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *(int *)plVar8 = iVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
LAB_001a8694:
      if ((iVar5 == 0) && (*(char *)((long)plVar3 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar3 + 0xc) = 1;
        (**(code **)(*plVar3 + 8))();
      }
      goto LAB_001a8714;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar8;
    iVar5 = iVar6 + -1;
    if ((int)lVar4 == iVar6) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_001a8694;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = (int)lVar4;
  } while( true );
}

