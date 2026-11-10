
void FUN_001d9790(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long local_18;
  
  plVar4 = param_2 + 1;
  iVar5 = (int)*plVar4;
  if (iVar5 != (int)*plVar4) {
    ClearExclusiveLocal();
LAB_001d9800:
    do {
      lVar8 = *plVar4;
      if ((int)lVar8 == iVar5) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *(int *)plVar4 = iVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_001d97d8;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar5 = (int)lVar8;
    } while( true );
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar3) {
    *(int *)plVar4 = (int)*plVar4 + 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_001d9800;
LAB_001d97d8:
  lVar8 = param_2[6];
  lVar1 = param_2[7];
  if (lVar1 == 0) {
    if (lVar8 != 0) {
      param_2[7] = 0;
      goto LAB_001d9830;
    }
    if (*(long **)(param_1 + 8) != param_2) goto LAB_001d9904;
    lVar8 = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if (*(long **)(param_1 + 8) != param_2) goto LAB_001d9844;
LAB_001d996c:
    *(long *)(param_1 + 8) = lVar8;
    plVar7 = *(long **)(param_1 + 0x10);
  }
  else {
    *(long *)(lVar1 + 0x30) = lVar8;
    param_2[7] = 0;
    if (lVar8 != 0) {
LAB_001d9830:
      *(long *)(lVar8 + 0x38) = lVar1;
    }
    param_2[6] = 0;
    if (*(long **)(param_1 + 8) == param_2) goto LAB_001d996c;
LAB_001d9844:
    plVar7 = *(long **)(param_1 + 0x10);
  }
  if (plVar7 == param_2) {
    *(long *)(param_1 + 0x10) = lVar1;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  iVar5 = (int)*plVar4;
  iVar6 = (int)*plVar4 + -1;
  if (iVar5 == (int)*plVar4) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *(int *)plVar4 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001d9890:
      if ((iVar6 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
        *(undefined1 *)((long)param_2 + 0xc) = 1;
        (**(code **)(*param_2 + 8))(param_2);
      }
LAB_001d9904:
      if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x18)) {
        plVar4 = (long *)(param_1 + 0x10);
      }
      else {
        param_2[6] = *(long *)(param_1 + 8);
        plVar4 = (long *)(*(long *)(param_1 + 8) + 0x38);
      }
      *plVar4 = (long)param_2;
      *(long **)(param_1 + 8) = param_2;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      FUN_00187810(&local_18);
      param_2[0x3c] = local_18;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar8 = *plVar4;
    iVar6 = iVar5 + -1;
    if ((int)lVar8 == iVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *(int *)plVar4 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001d9890;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar5 = (int)lVar8;
  } while( true );
}

