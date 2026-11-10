
void FUN_001d8660(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  *param_1 = (long)puVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  puVar2 = PTR_DAT_04bcc330;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x42) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bcc320 + 0x10;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((long)param_1 + 0xac) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 0;
  param_1[0xd] = (long)puVar2;
  param_1[0xf] = (long)puVar2;
  puVar2 = PTR_DAT_04bcc340 + 0x10;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  puVar3 = PTR_DAT_04bcc338 + 0x10;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x1b] = (long)puVar2;
  param_1[0x1c] = 0;
  param_1[0x1d] = (long)puVar3;
  param_1[0x1e] = 0;
  FUN_001e1500(param_1 + 0x28);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar2 = PTR_DAT_04bcc7a8;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *param_1 = (long)(puVar2 + 0x10);
  plVar8 = (long *)FUN_00185a6c(0x38);
  if (plVar8 != (long *)0x0) {
    *plVar8 = (long)puVar1;
    *(undefined4 *)(plVar8 + 1) = 1;
    puVar1 = PTR_DAT_04bcc018;
    *(undefined1 *)((long)plVar8 + 0xc) = 0;
    *plVar8 = (long)(puVar1 + 0x10);
    uVar9 = FUN_00196a18();
    FUN_00196a24(plVar8,uVar9,0);
  }
  plVar10 = (long *)param_1[0x27];
  if (plVar10 == (long *)0x0) {
LAB_001d87cc:
    param_1[0x27] = (long)plVar8;
    return;
  }
  plVar4 = plVar10 + 1;
  iVar12 = (int)*plVar4;
  iVar11 = (int)*plVar4 + -1;
  if (iVar12 == (int)*plVar4) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *(int *)plVar4 = iVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
LAB_001d87c8:
      if ((iVar11 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar10 + 0xc) = 1;
        (**(code **)(*plVar10 + 8))();
        param_1[0x27] = (long)plVar8;
        return;
      }
      goto LAB_001d87cc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar7 = *plVar4;
    iVar11 = iVar12 + -1;
    if ((int)lVar7 == iVar12) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_001d87c8;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = (int)lVar7;
  } while( true );
}

