
void FUN_001c1570(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  
  plVar4 = (long *)*param_3;
  lVar1 = plVar4[2];
  lVar7 = plVar4[3];
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = lVar1;
  }
  plVar4[3] = 0;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = lVar7;
  }
  plVar4[2] = 0;
  if (*(long **)(param_2 + 0x10) == plVar4) {
    *(long *)(param_2 + 0x10) = lVar1;
    plVar8 = *(long **)(param_2 + 0x18);
  }
  else {
    plVar8 = *(long **)(param_2 + 0x18);
  }
  if (plVar8 == plVar4) {
    *(long *)(param_2 + 0x18) = lVar7;
  }
  lVar7 = *(long *)(param_2 + 0x28);
  *param_3 = lVar1;
  plVar4[0x3b] = 0;
  plVar8 = plVar4 + 1;
  *(long *)(param_2 + 0x28) = lVar7 + -1;
  iVar6 = (int)*plVar8;
  iVar5 = (int)*plVar8 + -1;
  if (iVar6 == (int)*plVar8) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *(int *)plVar8 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001c160c:
      if ((iVar5 == 0) && (*(char *)((long)plVar4 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar4 + 0xc) = 1;
        (**(code **)(*plVar4 + 8))();
        *param_1 = *param_3;
        return;
      }
      *param_1 = *param_3;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar1 = *plVar8;
    iVar5 = iVar6 + -1;
    if ((int)lVar1 == iVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001c160c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = (int)lVar1;
  } while( true );
}

