
void FUN_001e28f0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int *piVar12;
  undefined **local_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0xc5) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xc5) = 1;
  (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 8))();
  if ((*(int *)(param_1 + 0xc0) == 0) &&
     (uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0xb0) + 0x10) + 0x48))(),
     (uVar5 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  lVar7 = *(long *)(param_1 + 0xd0);
  if (lVar7 == 0) {
    return;
  }
  lVar2 = 0;
  if (*(long *)(lVar7 + 0x10) != 0) {
    lVar2 = DAT_04bcbf58;
  }
  if (lVar2 == 0) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  plVar8 = *(long **)(param_1 + 0xb0);
  local_30 = &PTR_LAB_0483cdf8;
  local_28 = (long *)0x0;
  if ((plVar8 != (long *)0x0) && (plVar1 = plVar8 + 1, local_28 = plVar8, (int)*plVar1 != 0)) {
    lVar7 = *plVar1;
    if ((int)lVar7 == (int)*plVar1) {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001e29f4;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e29f4:
      bVar10 = false;
    }
    iVar9 = (int)lVar7;
    if (!bVar10) {
      do {
        lVar7 = *plVar1;
        if ((int)lVar7 == iVar9) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *(int *)plVar1 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = (int)lVar7;
      } while( true );
    }
  }
  FUN_001e5db0(uVar6,&local_30);
  plVar8 = local_28;
  local_30 = &PTR_LAB_0483cdf8;
  if (local_28 == (long *)0x0) {
    return;
  }
  plVar1 = local_28 + 1;
  lVar7 = *plVar1;
  iVar9 = (int)*plVar1 + -1;
  if ((int)lVar7 == (int)*plVar1) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *(int *)plVar1 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001e2a7c;
    bVar10 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001e2a7c:
    bVar10 = false;
  }
  iVar11 = (int)lVar7;
  if (!bVar10) {
    do {
      lVar7 = *plVar1;
      iVar9 = iVar11 + -1;
      if ((int)lVar7 == iVar11) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = (int)lVar7;
    } while( true );
  }
  if (iVar9 != 0) {
    return;
  }
  piVar12 = (int *)((long)local_28 + 0xc);
  (**(code **)(*local_28 + 0x10))(local_28);
  iVar11 = *piVar12 + -1;
  iVar9 = *piVar12;
  if (iVar9 == *piVar12) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar10) {
      *piVar12 = iVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      bVar10 = true;
      goto LAB_001e2b00;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar10 = false;
LAB_001e2b00:
  if (bVar10) {
LAB_001e2b04:
    if (iVar11 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      return;
    }
    return;
  }
  do {
    iVar3 = *piVar12;
    iVar11 = iVar9 + -1;
    if (iVar3 == iVar9) {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar10) {
        *piVar12 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_001e2b04;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar3;
  } while( true );
}

