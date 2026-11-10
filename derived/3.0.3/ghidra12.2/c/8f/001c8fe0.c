
undefined8 FUN_001c8fe0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  if ((*(byte *)(param_2 + 0x30) >> 2 & 1) == 0) {
    plVar4 = (long *)FUN_00185a6c(0x38);
    if (plVar4 != (long *)0x0) {
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      *plVar4 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar4 + 1) = 1;
      *(undefined1 *)((long)plVar4 + 0xc) = 0;
      *plVar4 = (long)&PTR_FUN_048393d8;
      FUN_00196a24(plVar4,uVar6,0);
    }
  }
  else {
    plVar4 = (long *)FUN_0018ae24(0x38,0);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    lVar7 = *(long *)(param_2 + 0x18);
    lVar10 = *(long *)(param_2 + 0x28);
    *plVar4 = (long)(PTR_DAT_04bcbc48 + 0x10);
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined1 *)((long)plVar4 + 0xc) = 0;
    *plVar4 = (long)&PTR_FUN_048393d8;
    FUN_00196a24(plVar4,lVar10 + lVar7,4);
    *plVar4 = (long)&PTR_FUN_0483bf50;
    if (plVar4[2] == 0) {
      FUN_00196ce0(plVar4);
      FUN_00185ac4(plVar4);
      return 0;
    }
  }
  FUN_00193c08(plVar4,param_2);
  plVar5 = *(long **)(param_1 + 0x138);
  plVar1 = plVar5 + 1;
  iVar9 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar9 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001c9104:
      if ((iVar8 == 0) && (*(char *)((long)plVar5 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar5 + 0xc) = 1;
        (**(code **)(*plVar5 + 8))();
      }
      *(long **)(param_1 + 0x138) = plVar4;
      return 1;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar7 = *plVar1;
    iVar8 = iVar9 + -1;
    if ((int)lVar7 == iVar9) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001c9104;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar7;
  } while( true );
}

