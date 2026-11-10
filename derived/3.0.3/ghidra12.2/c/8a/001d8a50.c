
void FUN_001d8a50(long *param_1,long param_2,ushort param_3,uint param_4,long param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  puVar1 = PTR_DAT_04bcc330;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x42) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bcc320;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((long)param_1 + 0xac) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 0;
  param_1[0xd] = (long)(puVar1 + 0x10);
  param_1[0xf] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bcc340 + 0x10;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  puVar2 = PTR_DAT_04bcc338 + 0x10;
  param_1[0x1b] = (long)puVar1;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x1d] = (long)puVar2;
  param_1[0x1e] = 0;
  FUN_001e1500(param_1 + 0x28);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  lVar11 = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  puVar1 = PTR_DAT_04bcc7b8 + 0x10;
  param_1[0x41] = 0;
  param_1[0x45] = 0;
  *param_1 = (long)puVar1;
  if (((param_4 >> 6 & 1) != 0) && (lVar11 = FUN_00185a6c(0x30), lVar11 != 0)) {
    FUN_001dad90(lVar11);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = param_2;
  *(undefined4 *)(param_1 + 0x46) = param_6;
  *(ushort *)(param_1 + 0xc) = (ushort)param_4 & 0xfff0 | param_3 & 0xf | *(ushort *)(param_1 + 0xc)
  ;
  if (param_5 == 0) {
LAB_001d8c7c:
    param_1[0x3e] = lVar11;
    *(undefined2 *)(param_1 + 0x42) = 0;
    param_1[0x43] = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    return;
  }
  piVar3 = (int *)(param_5 + 8);
  iVar9 = *piVar3;
  if (iVar9 == *piVar3) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = *piVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
LAB_001d8be0:
      plVar8 = (long *)param_1[0x27];
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 1;
        iVar9 = (int)*plVar4;
        iVar10 = (int)*plVar4 + -1;
        if (iVar9 != (int)*plVar4) {
          ClearExclusiveLocal();
LAB_001d8cb4:
          do {
            lVar7 = *plVar4;
            iVar10 = iVar9 + -1;
            if ((int)lVar7 == iVar9) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar6) {
                *(int *)plVar4 = iVar10;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_001d8c58;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar9 = (int)lVar7;
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *(int *)plVar4 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_001d8cb4;
LAB_001d8c58:
        if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar8 + 0xc) = 1;
          (**(code **)(*plVar8 + 8))();
        }
      }
      param_1[0x27] = param_5;
      goto LAB_001d8c7c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar10 = *piVar3;
    if (iVar10 == iVar9) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_001d8be0;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar10;
  } while( true );
}

