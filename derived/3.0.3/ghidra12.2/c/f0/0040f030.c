
void FUN_0040f030(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  int *piVar11;
  
  *param_1 = (long)(PTR_DAT_04bd2a40 + 0x10);
  if ((long *)param_1[0x2a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2a] + 8))();
  }
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 8))();
  }
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  param_1[0x3a] = (long)(PTR_DAT_04bd2a68 + 0x10);
  param_1[0x41] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x41);
  puVar7 = PTR_DAT_04bd2a60;
  param_1[0x3c] = (long)puVar1;
  param_1[0x3a] = (long)(puVar7 + 0x10);
  FUN_0018b1a0(param_1 + 0x3c);
  param_1[0x34] = (long)(PTR_DAT_04bd2a50 + 0x10);
  param_1[0x35] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x35);
  plVar10 = (long *)param_1[0x33];
  param_1[0x32] = (long)(PTR_DAT_04bd2a58 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    iVar9 = (int)*plVar2;
    iVar8 = (int)*plVar2 + -1;
    if (iVar9 != (int)*plVar2) {
      ClearExclusiveLocal();
LAB_0040f174:
      do {
        lVar6 = *plVar2;
        iVar8 = iVar9 + -1;
        if ((int)lVar6 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0040f124;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = (int)lVar6;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_0040f174;
LAB_0040f124:
    if (iVar8 == 0) {
      piVar11 = (int *)((long)plVar10 + 0xc);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      iVar8 = *piVar11 + -1;
      iVar9 = *piVar11;
      if (iVar9 != *piVar11) {
        ClearExclusiveLocal();
LAB_0040f220:
        do {
          iVar3 = *piVar11;
          iVar8 = iVar9 + -1;
          if (iVar3 == iVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar5) {
              *piVar11 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0040f1a8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar3;
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0040f220;
LAB_0040f1a8:
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  param_1[0x2b] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x2b);
  plVar10 = (long *)param_1[0x28];
  param_1[0x27] = (long)(PTR_DAT_04bd2a48 + 0x10);
  if (plVar10 == (long *)0x0) goto LAB_0040f2ec;
  plVar2 = plVar10 + 1;
  iVar9 = (int)*plVar2;
  iVar8 = (int)*plVar2 + -1;
  if (iVar9 == (int)*plVar2) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_0040f254:
      if (iVar8 != 0) {
LAB_0040f2ec:
        FUN_001976b0(param_1 + 0x15);
        FUN_0019a368(param_1);
        return;
      }
      piVar11 = (int *)((long)plVar10 + 0xc);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      iVar8 = *piVar11 + -1;
      iVar9 = *piVar11;
      if (iVar9 == *piVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
LAB_0040f2d8:
          if (iVar8 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          goto LAB_0040f2ec;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar3 = *piVar11;
        iVar8 = iVar9 + -1;
        if (iVar3 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0040f2d8;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar3;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar2;
    iVar8 = iVar9 + -1;
    if ((int)lVar6 == iVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0040f254;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar6;
  } while( true );
}

