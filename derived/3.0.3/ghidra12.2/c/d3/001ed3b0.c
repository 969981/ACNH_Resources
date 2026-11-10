
long * FUN_001ed3b0(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  
  plVar9 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    plVar9 = param_2;
    do {
      plVar8 = (long *)plVar9[2];
      bVar5 = (long *)*plVar8 != plVar9;
      plVar9 = plVar8;
    } while (bVar5);
  }
  else {
    do {
      plVar8 = plVar9;
      plVar9 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar8;
  }
  param_1[2] = param_1[2] + -1;
  FUN_00192390(param_1[1],param_2);
  plVar9 = (long *)param_2[6];
  param_2[5] = (long)&PTR_LAB_0483cdf8;
  if (plVar9 == (long *)0x0) goto LAB_001ed508;
  plVar1 = plVar9 + 1;
  iVar7 = (int)*plVar1;
  iVar6 = (int)*plVar1 + -1;
  if (iVar7 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001ed470:
      if (iVar6 != 0) {
LAB_001ed508:
        FUN_00187e4c(param_2);
        return plVar8;
      }
      piVar10 = (int *)((long)plVar9 + 0xc);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      iVar6 = *piVar10 + -1;
      iVar7 = *piVar10;
      if (iVar7 == *piVar10) {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_001ed4f4:
          if (iVar6 == 0) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
          goto LAB_001ed508;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar2 = *piVar10;
        iVar6 = iVar7 + -1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001ed4f4;
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
    lVar4 = *plVar1;
    iVar6 = iVar7 + -1;
    if ((int)lVar4 == iVar7) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001ed470;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar4;
  } while( true );
}

