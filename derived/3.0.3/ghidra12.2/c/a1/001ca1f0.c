
void FUN_001ca1f0(long param_1,long param_2,undefined2 param_3,undefined1 param_4)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_2 + 0x30) >> 2 & 1) == 0) {
    plVar6 = (long *)FUN_00185a6c(0x238);
    if (plVar6 != (long *)0x0) {
      FUN_001d8a50(plVar6,param_1,2,0x2000,param_2,0);
    }
  }
  else {
    plVar6 = (long *)FUN_0018ae24(0x238,0);
    if (plVar6 == (long *)0x0) {
      return;
    }
    FUN_001a7b50(plVar6,param_1,2,0x2000,param_2,0);
    if (((*(ushort *)(plVar6 + 0xc) >> 6 & 1) != 0) && (plVar6[0x3e] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x001ca2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6);
      return;
    }
  }
  uVar2 = *(undefined1 *)(param_1 + 0x1eb);
  *(undefined2 *)(plVar6 + 0xe) = param_3;
  *(undefined1 *)((long)plVar6 + 0xa4) = param_4;
  *(undefined1 *)(plVar6 + 8) = uVar2;
  FUN_001c7bf0(auStack_48,param_1,plVar6);
  plVar1 = plVar6 + 1;
  iVar8 = (int)*plVar1;
  iVar7 = (int)*plVar1 + -1;
  if (iVar8 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001ca2f8:
      if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))(plVar6);
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar7 = iVar8 + -1;
    if ((int)lVar5 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001ca2f8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar5;
  } while( true );
}

