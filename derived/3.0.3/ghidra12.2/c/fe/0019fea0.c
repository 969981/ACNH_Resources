
void FUN_0019fea0(long param_1,long *param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  
  iVar3 = (int)param_2[8];
  if (iVar3 == 3) {
    *(undefined4 *)(param_2 + 8) = 4;
    if (*(char *)(param_1 + 0x1c8) != '\0') {
      (**(code **)(*param_2 + 0x28))(param_2,0);
    }
    lVar4 = *param_4;
    param_2[10] = *param_3;
    param_2[0xb] = lVar4;
    (**(code **)(*param_2 + 0x10))(param_2);
    iVar3 = (int)param_2[8];
    if (iVar3 == 4) {
      (**(code **)(*param_2 + 0x38))(param_2);
      iVar3 = (int)param_2[8];
    }
    *(int *)(param_2 + 9) = (int)param_2[9] + 1;
  }
  if (iVar3 != 5) {
    if (DAT_04be2201 == '\0') {
      FUN_0019eaa0(param_1,param_2,0);
      return;
    }
    plVar6 = (long *)(param_1 + 0xc0);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar7 = (long *)(param_1 + 0x30);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0019eaa0(param_1,param_2,0);
    (**(code **)(*plVar7 + 0x20))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x0019ffd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x20))(plVar6);
    return;
  }
  plVar6 = param_2 + 1;
  iVar3 = (int)*plVar6;
  iVar5 = (int)*plVar6 + -1;
  if (iVar3 == (int)*plVar6) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *(int *)plVar6 = iVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
LAB_0019ffe8:
      if ((iVar5 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
        *(undefined1 *)((long)param_2 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x001a0078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 8))(param_2);
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar6;
    iVar5 = iVar3 + -1;
    if ((int)lVar4 == iVar3) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_0019ffe8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar3 = (int)lVar4;
  } while( true );
}

