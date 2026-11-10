
long * FUN_001d6900(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined4 local_24;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x30) >> 2 & 1) == 0)) {
    plVar5 = (long *)FUN_00185a6c(0x38);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined1 *)((long)plVar5 + 0xc) = 0;
      *plVar5 = (long)&PTR_FUN_048393d8;
      uVar6 = FUN_00196a18();
      FUN_00196a24(plVar5,uVar6,0);
    }
  }
  else {
    plVar5 = (long *)FUN_0018ae24(0x38,0);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar8 = *(long *)(param_1 + 0x18);
    *plVar5 = (long)(PTR_DAT_04bcbc48 + 0x10);
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *plVar5 = (long)&PTR_FUN_048393d8;
    FUN_00196a24(plVar5,lVar8 + 6,4);
    *plVar5 = (long)&PTR_FUN_0483bf50;
    if (plVar5[2] == 0) {
      FUN_00196ce0(plVar5);
      FUN_00185ac4(plVar5);
      return (long *)0x0;
    }
  }
  FUN_001972b0(auStack_50,plVar5);
  plVar1 = plVar5 + 1;
  iVar9 = (int)*plVar1;
  iVar7 = (int)*plVar1 + -1;
  if (iVar9 != (int)*plVar1) {
    ClearExclusiveLocal();
LAB_001d6ae4:
    do {
      lVar8 = *plVar1;
      iVar7 = iVar9 + -1;
      if ((int)lVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_001d6a30;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = (int)lVar8;
    } while( true );
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *(int *)plVar1 = iVar7;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_001d6ae4;
LAB_001d6a30:
  if ((iVar7 == 0) && (*(char *)((long)plVar5 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar5 + 0xc) = 1;
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  local_24 = FUN_001e1884(param_3);
  FUN_00197478(auStack_50,&local_24,4);
  uVar4 = FUN_001e14f8(param_3);
  local_24 = CONCAT22(local_24._2_2_,uVar4);
  FUN_00197478(auStack_50,&local_24,2);
  FUN_001975b8(auStack_50,param_1);
  if ((*(byte *)(param_1 + 0x30) >> 2 & 1) == 0) {
    plVar5 = (long *)FUN_00185a6c(0x238);
    if (plVar5 != (long *)0x0) {
      FUN_001d8a50(plVar5,0,param_2,0,local_40,0);
    }
  }
  else {
    plVar5 = (long *)FUN_0018ae24(0x238,0);
    if (plVar5 == (long *)0x0) goto LAB_001d6b60;
    FUN_001a7b50(plVar5,0,param_2,0,local_40,0);
    if (((*(ushort *)(plVar5 + 0xc) >> 6 & 1) != 0) && (plVar5[0x3e] == 0)) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar5 = (long *)0x0;
      goto LAB_001d6b60;
    }
  }
  *(undefined1 *)(plVar5 + 8) = 0;
LAB_001d6b60:
  FUN_00197350(auStack_50);
  return plVar5;
}

