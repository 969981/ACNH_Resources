
void FUN_0019e610(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = (long *)(param_1 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  plVar5 = *(long **)(param_1 + 0x178);
  if (plVar5 != param_2 && plVar5 != *(long **)(param_1 + 0x188)) {
    do {
      plVar5 = (long *)plVar5[2];
    } while (plVar5 != *(long **)(param_1 + 0x188) && plVar5 != param_2);
  }
  lVar1 = plVar5[2];
  lVar2 = plVar5[3];
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  plVar5[3] = 0;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  plVar5[2] = 0;
  if (*(long **)(param_1 + 0x178) == plVar5) {
    *(long *)(param_1 + 0x178) = lVar1;
    plVar8 = *(long **)(param_1 + 0x180);
  }
  else {
    plVar8 = *(long **)(param_1 + 0x180);
  }
  if (plVar8 == plVar5) {
    *(long *)(param_1 + 0x180) = lVar2;
  }
  *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + -1;
  plVar5 = param_2 + 1;
  iVar7 = (int)*plVar5;
  iVar6 = (int)*plVar5 + -1;
  if (iVar7 == (int)*plVar5) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar4) {
      *(int *)plVar5 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_0019e6dc:
      if ((iVar6 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
        *(undefined1 *)((long)param_2 + 0xc) = 1;
        (**(code **)(*param_2 + 8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0019e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x20))(plVar9);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0019e6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x20))(plVar9);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar1 = *plVar5;
    iVar6 = iVar7 + -1;
    if ((int)lVar1 == iVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *(int *)plVar5 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0019e6dc;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar1;
  } while( true );
}

