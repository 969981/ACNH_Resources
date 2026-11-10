
void FUN_001e7b70(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined *local_30;
  long *local_28;
  
  local_28 = (long *)0x0;
  puVar1 = PTR_DAT_04bcbf30 + 0x10;
  plVar7 = *(long **)(param_2 + 8);
  if ((plVar7 != (long *)0x0) && (plVar2 = plVar7 + 1, local_28 = plVar7, (int)*plVar2 != 0)) {
    iVar8 = (int)*plVar2;
    if (iVar8 != (int)*plVar2) {
      ClearExclusiveLocal();
LAB_001e7c34:
      do {
        lVar6 = *plVar2;
        if ((int)lVar6 == iVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001e7be0;
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
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001e7c34;
  }
LAB_001e7be0:
  local_30 = puVar1;
  FUN_001e5db0(param_1,&local_30);
  plVar7 = local_28;
  local_30 = puVar1;
  if (local_28 == (long *)0x0) goto LAB_001e7d08;
  plVar2 = local_28 + 1;
  iVar8 = (int)*plVar2;
  iVar9 = (int)*plVar2 + -1;
  if (iVar8 == (int)*plVar2) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_001e7c68:
      if (iVar9 != 0) {
LAB_001e7d08:
        plVar7 = (long *)(param_1 + 0xb8);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_001e9dd0(param_1);
        FUN_001eacf0(param_1);
        (**(code **)(*plVar7 + 0x20))(plVar7);
        return;
      }
      piVar10 = (int *)((long)local_28 + 0xc);
      (**(code **)(*local_28 + 0x10))(local_28);
      iVar9 = *piVar10 + -1;
      iVar8 = *piVar10;
      if (iVar8 == *piVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
LAB_001e7cf4:
          if (iVar9 == 0) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
          goto LAB_001e7d08;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar3 = *piVar10;
        iVar9 = iVar8 + -1;
        if (iVar3 == iVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001e7cf4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar3;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar2;
    iVar9 = iVar8 + -1;
    if ((int)lVar6 == iVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_001e7c68;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar6;
  } while( true );
}

