
void FUN_001ea740(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  plVar5 = (long *)FUN_00187df4(0x48);
  *plVar5 = 0;
  plVar5[3] = (long)&PTR_LAB_0483cdf8;
  plVar5[4] = 0;
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    plVar5[4] = lVar6;
    piVar1 = (int *)(lVar6 + 8);
    if (*piVar1 != 0) {
      iVar7 = *piVar1;
      if (iVar7 != *piVar1) {
        ClearExclusiveLocal();
LAB_001ea820:
        do {
          iVar2 = *piVar1;
          if (iVar2 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001ea7b8;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar2;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001ea820;
    }
  }
LAB_001ea7b8:
  plVar5[5] = (long)&PTR_LAB_0483cd28;
  plVar5[6] = 0;
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != 0) {
    plVar5[6] = lVar6;
    piVar1 = (int *)(lVar6 + 8);
    if (*piVar1 != 0) {
      iVar7 = *piVar1;
      if (iVar7 != *piVar1) {
        ClearExclusiveLocal();
LAB_001ea8b0:
        do {
          iVar2 = *piVar1;
          if (iVar2 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001ea854;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar2;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001ea8b0;
    }
  }
LAB_001ea854:
  plVar5[7] = (long)&PTR_LAB_0483cd28;
  plVar5[8] = 0;
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 != 0) {
    plVar5[8] = lVar6;
    piVar1 = (int *)(lVar6 + 8);
    if (*piVar1 != 0) {
      iVar7 = *piVar1;
      if (iVar7 == *piVar1) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_001ea8e4;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while( true );
    }
  }
LAB_001ea8e4:
  lVar6 = *param_1;
  *plVar5 = lVar6;
  plVar5[1] = (long)param_1;
  *(long **)(lVar6 + 8) = plVar5;
  *param_1 = (long)plVar5;
  param_1[2] = param_1[2] + 1;
  return;
}

