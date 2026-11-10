
undefined8 FUN_00198a80(long *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined1 auStack_38 [24];
  undefined4 local_14;
  
  if (*(int *)((long)param_1 + 0x14) - 2U < 3) {
    return 1;
  }
  if (*(int *)((long)param_1 + 0x14) != 1) {
    return 0;
  }
  plVar1 = param_1 + 1;
  lVar3 = *plVar1;
  if ((int)lVar3 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_00198b04;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00198b04:
    bVar5 = false;
  }
  iVar4 = (int)lVar3;
  if (!bVar5) {
    do {
      lVar3 = *plVar1;
      if ((int)lVar3 == iVar4) {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar4 = (int)lVar3;
    } while( true );
  }
  local_14 = 0x80010013;
  FUN_0018aa70(auStack_38,&local_14);
  FUN_00197e40(param_1,4,auStack_38,1);
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x10))();
  }
  iVar4 = (int)*plVar1 + -1;
  lVar3 = *plVar1;
  if ((int)lVar3 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      bVar5 = true;
      goto LAB_00198bb0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar5 = false;
LAB_00198bb0:
  iVar6 = (int)lVar3;
  if (bVar5) {
LAB_00198bb4:
    if (iVar4 != 0) {
      return 1;
    }
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      *(undefined1 *)((long)param_1 + 0xc) = 1;
      (**(code **)(*param_1 + 8))(param_1);
      return 1;
    }
    return 1;
  }
  do {
    lVar3 = *plVar1;
    iVar4 = iVar6 + -1;
    if ((int)lVar3 == iVar6) {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_00198bb4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = (int)lVar3;
  } while( true );
}

