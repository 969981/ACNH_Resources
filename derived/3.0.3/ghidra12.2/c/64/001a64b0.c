
void FUN_001a64b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_1 + 1;
  iVar6 = (int)*plVar1;
  iVar5 = (int)*plVar1 + -1;
  if (iVar6 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001a64e8:
      if ((iVar5 == 0) && (*(char *)((long)param_1 + 0xc) == '\0')) {
        *(undefined1 *)((long)param_1 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x001a6548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 8))();
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar1;
    iVar5 = iVar6 + -1;
    if ((int)lVar4 == iVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001a64e8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = (int)lVar4;
  } while( true );
}

