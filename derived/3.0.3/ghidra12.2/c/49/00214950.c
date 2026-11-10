
void FUN_00214950(long *param_1)

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
  
  plVar8 = (long *)param_1[1];
  *param_1 = (long)(PTR_DAT_04bccbc0 + 0x10);
  if (plVar8 == (long *)0x0) goto LAB_002149b0;
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
LAB_002149ac:
      if (iVar6 != 0) {
LAB_002149b0:
        FUN_00185ac4(param_1);
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
LAB_00214a40:
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
            FUN_00185ac4(param_1);
            return;
          }
          goto LAB_002149b0;
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
          if (cVar3 == '\0') goto LAB_00214a40;
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
      if (cVar3 == '\0') goto LAB_002149ac;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar5;
  } while( true );
}

