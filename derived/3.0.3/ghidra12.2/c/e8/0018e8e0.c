
void FUN_0018e8e0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  (**(code **)(DAT_04c58af8 + 0x10))(&DAT_04c58af8);
  plVar6 = DAT_04c58a08;
  if (DAT_04c58a08 == (long *)0x0) {
LAB_0018e988:
                    /* WARNING: Could not recover jumptable at 0x0018e99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_04c58af8 + 0x20))(&DAT_04c58af8);
    return;
  }
  lVar4 = DAT_04c58a08[1];
  plVar1 = DAT_04c58a08 + 1;
  iVar8 = (int)*plVar1;
  iVar7 = (int)*plVar1 + -1;
  if (iVar8 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_0018e954:
      if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
      }
      if ((int)lVar4 == 1) {
        DAT_04c58a08 = (long *)0x0;
        if (DAT_04c58a60 != (long *)0x0) {
          (**(code **)(*DAT_04c58a60 + 8))();
        }
        DAT_04c58a60 = (long *)0x0;
      }
      goto LAB_0018e988;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar7 = iVar8 + -1;
    if ((int)lVar5 == iVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_0018e954;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar5;
  } while( true );
}

