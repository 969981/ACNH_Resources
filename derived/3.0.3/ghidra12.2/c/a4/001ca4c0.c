
void FUN_001ca4c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  undefined1 auStack_38 [24];
  
  plVar7 = (long *)FUN_00185a6c(0x238);
  FUN_001d8a50(plVar7,param_1,3,0,0,0);
  *(undefined1 *)(plVar7 + 8) = *(undefined1 *)((long)param_1 + 0x1eb);
  uVar5 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (((uVar5 >> 0x1b & 1) != 0) && (iVar6 = (**(code **)(*param_1 + 200))(param_1), iVar6 == 0xd))
  {
    *(undefined4 *)(plVar7 + 0x15) = 2;
  }
  FUN_001c7bf0(auStack_38,param_1,plVar7);
  plVar1 = plVar7 + 1;
  iVar6 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar6 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001ca578:
      if ((iVar8 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      plVar7 = (long *)FUN_00185a6c(0x238);
      FUN_001d8a50(plVar7,param_1,3,0,0,0);
      *(undefined1 *)(plVar7 + 8) = *(undefined1 *)((long)param_1 + 0x1eb);
      uVar5 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (((uVar5 >> 0x1b & 1) != 0) &&
         (iVar6 = (**(code **)(*param_1 + 200))(param_1), iVar6 == 0xd)) {
        *(undefined4 *)(plVar7 + 0x15) = 2;
      }
      FUN_001c7bf0(auStack_38,param_1,plVar7);
      plVar1 = plVar7 + 1;
      iVar6 = (int)*plVar1;
      iVar8 = (int)*plVar1 + -1;
      if (iVar6 == (int)*plVar1) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_001ca684:
          if ((iVar8 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar7 + 0xc) = 1;
            (**(code **)(*plVar7 + 8))(plVar7);
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
        iVar8 = iVar6 + -1;
        if ((int)lVar4 == iVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_001ca684;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = (int)lVar4;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar1;
    iVar8 = iVar6 + -1;
    if ((int)lVar4 == iVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001ca578;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = (int)lVar4;
  } while( true );
}

