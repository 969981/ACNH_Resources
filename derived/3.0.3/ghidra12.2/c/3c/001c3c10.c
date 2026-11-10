
void FUN_001c3c10(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  
  plVar2 = *(long **)(param_1 + 8);
  while( true ) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      return;
    }
    plVar5 = (long *)plVar2[6];
    plVar6 = plVar5 + 1;
    iVar9 = (int)*plVar6;
    iVar7 = (int)*plVar6 + -1;
    if (iVar9 != (int)*plVar6) break;
    cVar1 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *(int *)plVar6 = iVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 != '\0') goto LAB_001c3cf0;
LAB_001c3cac:
    if ((iVar7 == 0) && (*(char *)((long)plVar5 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar5 + 0xc) = 1;
      (**(code **)(*plVar5 + 8))();
      plVar6 = (long *)plVar2[1];
    }
    else {
      plVar6 = (long *)plVar2[1];
    }
    plVar5 = plVar2;
    plVar8 = plVar6;
    if (plVar6 == (long *)0x0) {
      do {
        plVar10 = (long *)plVar5[2];
        bVar4 = (long *)*plVar10 != plVar5;
        plVar5 = plVar10;
      } while (bVar4);
    }
    else {
      do {
        plVar10 = plVar8;
        plVar8 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
    plVar5 = plVar2;
    if (plVar6 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar5[2];
        bVar4 = (long *)*plVar8 != plVar5;
        plVar5 = plVar8;
      } while (bVar4);
    }
    else {
      do {
        plVar8 = plVar6;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
    if (*(long **)(param_1 + 8) == plVar2) {
      *(long **)(param_1 + 8) = plVar8;
    }
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    FUN_00192390(*(undefined8 *)(param_1 + 0x10),plVar2);
    FUN_00187e4c(plVar2);
    plVar2 = plVar10;
  }
  ClearExclusiveLocal();
LAB_001c3cf0:
  do {
    lVar3 = *plVar6;
    iVar7 = iVar9 + -1;
    if ((int)lVar3 == iVar9) {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_001c3cac;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar3;
  } while( true );
}

