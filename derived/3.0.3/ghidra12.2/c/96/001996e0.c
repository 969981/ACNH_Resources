
void FUN_001996e0(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  
  puVar6 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar2 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  uVar8 = FUN_00199b30(*(undefined8 *)(*(long *)(*plVar9 + 0x10) + 0x10),
                       *(undefined8 *)(param_1 + 0x80));
  plVar9 = *(long **)(param_1 + 0x80);
  if ((uVar8 & 1) == 0) {
    *(undefined4 *)(plVar9 + 8) = 5;
    if ((code *)plVar9[5] != (code *)0x0) {
      (*(code *)plVar9[5])(plVar9,plVar9 + 6);
      plVar9 = *(long **)(param_1 + 0x80);
    }
  }
  plVar1 = plVar9 + 1;
  iVar11 = (int)*plVar1;
  iVar10 = (int)*plVar1 + -1;
  if (iVar11 == (int)*plVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_001997b0:
      if ((iVar10 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar9 + 0xc) = 1;
        (**(code **)(*plVar9 + 8))();
        *(undefined8 *)(param_1 + 0x80) = 0;
        return;
      }
      *(undefined8 *)(param_1 + 0x80) = 0;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar2 = *plVar1;
    iVar10 = iVar11 + -1;
    if ((int)lVar2 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_001997b0;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar2;
  } while( true );
}

