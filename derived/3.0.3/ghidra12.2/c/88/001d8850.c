
void FUN_001d8850(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  
  puVar1 = PTR_DAT_04bcbc48 + 0x10;
  *param_1 = (long)puVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  puVar2 = PTR_DAT_04bcc330;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
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
  puVar2 = PTR_DAT_04bcc7b0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *param_1 = (long)(puVar2 + 0x10);
  plVar8 = (long *)FUN_0018ae24(0x38,0);
  if (plVar8 != (long *)0x0) {
    *plVar8 = (long)puVar1;
    *(undefined4 *)(plVar8 + 1) = 1;
    puVar1 = PTR_DAT_04bcc018;
    *(undefined1 *)((long)plVar8 + 0xc) = 0;
    *plVar8 = (long)(puVar1 + 0x10);
    FUN_00196a24(plVar8,param_2,4);
    *plVar8 = (long)(PTR_DAT_04bcc518 + 0x10);
  }
  plVar9 = (long *)param_1[0x27];
  if (plVar9 == (long *)0x0) {
LAB_001d89d0:
    param_1[0x27] = (long)plVar8;
    return;
  }
  plVar4 = plVar9 + 1;
  iVar11 = (int)*plVar4;
  iVar10 = (int)*plVar4 + -1;
  if (iVar11 == (int)*plVar4) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *(int *)plVar4 = iVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
LAB_001d89cc:
      if ((iVar10 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar9 + 0xc) = 1;
        (**(code **)(*plVar9 + 8))();
        param_1[0x27] = (long)plVar8;
        return;
      }
      goto LAB_001d89d0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar7 = *plVar4;
    iVar10 = iVar11 + -1;
    if ((int)lVar7 == iVar11) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_001d89cc;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar7;
  } while( true );
}

