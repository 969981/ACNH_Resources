
void FUN_00197350(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  
  *param_1 = (long)(PTR_DAT_04bcc058 + 0x10);
  plVar5 = (long *)param_1[2];
  plVar1 = plVar5 + 1;
  iVar7 = (int)*plVar1;
  iVar6 = (int)*plVar1 + -1;
  if (iVar7 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001973a4:
      if ((iVar6 == 0) && (*(char *)((long)plVar5 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar5 + 0xc) = 1;
        (**(code **)(*plVar5 + 8))();
        param_1[2] = 0;
        return;
      }
      param_1[2] = 0;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar1;
    iVar6 = iVar7 + -1;
    if ((int)lVar4 == iVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001973a4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar4;
  } while( true );
}

