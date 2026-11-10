
void FUN_001fbac0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  
  *param_1 = (long)(PTR_DAT_04bcc9f0 + 0x10);
  puVar5 = PTR_DAT_04bcb900;
  if (*(int *)((long)param_1 + 0x14) == 1) {
    plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar6;
      if (uVar2 != 0) {
        lVar7 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar10 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    if ((*plVar10 == 0) || (lVar7 = *(long *)(*plVar10 + 0x10), lVar7 == 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x10);
    }
    plVar10 = (long *)(lVar7 + 0x78);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if (*(int *)((long)param_1 + 0x14) == 1) {
      FUN_00197980(param_1);
    }
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  plVar10 = (long *)param_1[0x17];
  if (plVar10 == (long *)0x0) {
LAB_001fbc04:
    if (param_1[0x12] != 0) {
      param_1[0x13] = param_1[0x12];
      FUN_00187e4c();
    }
    FUN_001976b0(param_1);
    return;
  }
  plVar1 = plVar10 + 1;
  iVar9 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar9 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001fbbe0:
      if ((iVar8 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar10 + 0xc) = 1;
        (**(code **)(*plVar10 + 8))();
      }
      param_1[0x17] = 0;
      goto LAB_001fbc04;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar7 = *plVar1;
    iVar8 = iVar9 + -1;
    if ((int)lVar7 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001fbbe0;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar7;
  } while( true );
}

