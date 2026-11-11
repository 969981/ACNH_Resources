
void FUN_0041d820(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  
  *param_1 = (long)(PTR_DAT_04bd2ca0 + 0x10);
  FUN_0041dafc();
  FUN_0041dc44(param_1);
  FUN_0041dd8c(param_1);
  FUN_0041ded4(param_1);
  FUN_0041e01c(param_1);
  FUN_0041e170(param_1);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  FUN_0019c210();
  plVar8 = (long *)param_1[4];
  param_1[3] = (long)&PTR_LAB_04853350;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    iVar7 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar7 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_0041d920:
      do {
        lVar5 = *plVar1;
        iVar6 = iVar7 + -1;
        if ((int)lVar5 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0041d8d0;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_0041d920;
LAB_0041d8d0:
    if (iVar6 == 0) {
      piVar9 = (int *)((long)plVar8 + 0xc);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar6 = *piVar9 + -1;
      iVar7 = *piVar9;
      if (iVar7 != *piVar9) {
        ClearExclusiveLocal();
LAB_0041d9b0:
        do {
          iVar2 = *piVar9;
          iVar6 = iVar7 + -1;
          if (iVar2 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0041d954;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar2;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar4) {
        *piVar9 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0041d9b0;
LAB_0041d954:
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
        param_1[1] = (long)&PTR_LAB_04853318;
        plVar8 = (long *)param_1[2];
        goto joined_r0x0041dadc;
      }
    }
  }
  param_1[1] = (long)&PTR_LAB_04853318;
  plVar8 = (long *)param_1[2];
joined_r0x0041dadc:
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar1 = plVar8 + 1;
  iVar7 = (int)*plVar1;
  iVar6 = (int)*plVar1 + -1;
  if (iVar7 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_0041d9e4:
      if (iVar6 != 0) {
        return;
      }
      piVar9 = (int *)((long)plVar8 + 0xc);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar6 = *piVar9 + -1;
      iVar7 = *piVar9;
      if (iVar7 == *piVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_0041da68:
          if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0041daf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 8))(plVar8);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar9;
        iVar6 = iVar7 + -1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0041da68;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar6 = iVar7 + -1;
    if ((int)lVar5 == iVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0041d9e4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar5;
  } while( true );
}

