
void FUN_001e9bd0(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  
  plVar7 = *(long **)(param_2 + 8);
  puVar12 = (undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x20) * 0x10 + 8);
  plVar11 = (long *)*puVar12;
  if (plVar11 == plVar7) goto LAB_001e9d64;
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 1;
    iVar10 = (int)*plVar7;
    iVar8 = (int)*plVar7 + -1;
    if (iVar10 != (int)*plVar7) {
      ClearExclusiveLocal();
LAB_001e9c90:
      do {
        lVar6 = *plVar7;
        iVar8 = iVar10 + -1;
        if ((int)lVar6 == iVar10) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar9) {
            *(int *)plVar7 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001e9c3c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar6;
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar9) {
      *(int *)plVar7 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001e9c90;
LAB_001e9c3c:
    if (iVar8 == 0) {
      piVar13 = (int *)((long)plVar11 + 0xc);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      iVar8 = *piVar13 + -1;
      iVar10 = *piVar13;
      if (iVar10 == *piVar13) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar9) {
          *piVar13 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_001e9cbc;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e9cbc:
        bVar9 = false;
      }
      if (!bVar9) {
        do {
          iVar2 = *piVar13;
          iVar8 = iVar10 + -1;
          if (iVar2 == iVar10) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar9) {
              *piVar13 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar2;
        } while( true );
      }
      if (iVar8 == 0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
    plVar7 = *(long **)(param_2 + 8);
  }
  *puVar12 = plVar7;
  if ((plVar7 == (long *)0x0) || (plVar7 = plVar7 + 1, (int)*plVar7 == 0)) {
LAB_001e9d64:
    uVar1 = *(long *)(param_1 + 0x20) + 1;
    uVar3 = *(ulong *)(param_1 + 0x38);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar1 / uVar3;
    }
    *(ulong *)(param_1 + 0x20) = uVar1 - uVar5 * uVar3;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    return;
  }
  iVar10 = (int)*plVar7;
  if (iVar10 == (int)*plVar7) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar9) {
      *(int *)plVar7 = (int)*plVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_001e9d64;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar7;
    if ((int)lVar6 == iVar10) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar9) {
        *(int *)plVar7 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_001e9d64;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar6;
  } while( true );
}

