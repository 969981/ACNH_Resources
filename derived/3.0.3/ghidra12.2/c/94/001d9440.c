
void FUN_001d9440(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_04bcc7d8 + 0x10;
  lVar6 = *(long *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x38) = puVar1;
  while (lVar6 != 0) {
    plVar9 = *(long **)(param_1 + 0x48);
    *(long *)(param_1 + 0x50) = lVar6 + -1;
    lVar6 = *plVar9;
    *(long *)(lVar6 + 8) = plVar9[1];
    plVar3 = (long *)plVar9[2];
    *(long *)plVar9[1] = lVar6;
    plVar2 = plVar3 + 1;
    iVar8 = (int)*plVar2;
    iVar7 = (int)*plVar2 + -1;
    if (iVar8 != (int)*plVar2) {
      ClearExclusiveLocal();
LAB_001d9510:
      do {
        lVar6 = *plVar2;
        iVar7 = iVar8 + -1;
        if ((int)lVar6 == iVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001d94dc;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar6;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001d9510;
LAB_001d94dc:
    if ((iVar7 == 0) && (*(char *)((long)plVar3 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar3 + 0xc) = 1;
      (**(code **)(*plVar3 + 8))();
    }
    FUN_001e1868(plVar9 + 3);
    FUN_00187e4c(plVar9);
    lVar6 = *(long *)(param_1 + 0x50);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined **)(param_1 + 8) = puVar1;
  while( true ) {
    if (lVar6 == 0) {
      return;
    }
    plVar9 = *(long **)(param_1 + 0x18);
    *(long *)(param_1 + 0x20) = lVar6 + -1;
    lVar6 = *plVar9;
    *(long *)(lVar6 + 8) = plVar9[1];
    plVar3 = (long *)plVar9[2];
    *(long *)plVar9[1] = lVar6;
    plVar2 = plVar3 + 1;
    iVar8 = (int)*plVar2;
    iVar7 = (int)*plVar2 + -1;
    if (iVar8 != (int)*plVar2) break;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001d95f0;
LAB_001d95bc:
    if ((iVar7 == 0) && (*(char *)((long)plVar3 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar3 + 0xc) = 1;
      (**(code **)(*plVar3 + 8))();
    }
    FUN_001e1868(plVar9 + 3);
    FUN_00187e4c(plVar9);
    lVar6 = *(long *)(param_1 + 0x20);
  }
  ClearExclusiveLocal();
LAB_001d95f0:
  do {
    lVar6 = *plVar2;
    iVar7 = iVar8 + -1;
    if ((int)lVar6 == iVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_001d95bc;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar6;
  } while( true );
}

