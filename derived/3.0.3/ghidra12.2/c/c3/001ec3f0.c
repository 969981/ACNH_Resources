
void FUN_001ec3f0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  int *piVar9;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001ec3f0(param_1,*param_2);
  FUN_001ec3f0(param_1,param_2[1]);
  plVar8 = (long *)param_2[6];
  param_2[5] = &PTR_LAB_0483cdf8;
  if (plVar8 == (long *)0x0) goto LAB_001ec470;
  plVar1 = plVar8 + 1;
  iVar7 = (int)*plVar1;
  iVar5 = (int)*plVar1 + -1;
  if (iVar7 != (int)*plVar1) {
    ClearExclusiveLocal();
LAB_001ec490:
    do {
      lVar4 = *plVar1;
      iVar5 = iVar7 + -1;
      if ((int)lVar4 == iVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_001ec46c;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = (int)lVar4;
    } while( true );
  }
  cVar3 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *(int *)plVar1 = iVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 != '\0') goto LAB_001ec490;
LAB_001ec46c:
  if (iVar5 != 0) goto LAB_001ec470;
  piVar9 = (int *)((long)plVar8 + 0xc);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  iVar5 = *piVar9 + -1;
  iVar7 = *piVar9;
  if (iVar7 == *piVar9) {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar6) {
      *piVar9 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001ec4f4;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001ec4f4:
    bVar6 = false;
  }
  if (!bVar6) {
    do {
      iVar2 = *piVar9;
      iVar5 = iVar7 + -1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar6) {
          *piVar9 = iVar5;
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
  if (iVar5 == 0) {
    (**(code **)(*plVar8 + 8))(plVar8);
    FUN_00187e4c(param_2);
    return;
  }
LAB_001ec470:
  FUN_00187e4c(param_2);
  return;
}

