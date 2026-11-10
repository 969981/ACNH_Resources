
void FUN_001a59a0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  puVar7 = PTR_DAT_04bcb908;
  puVar6 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar8;
    if (uVar3 != 0) {
      lVar9 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  if ((*plVar11 == 0) || (*(long *)(*plVar11 + 0x10) == 0)) {
    lVar9 = FUN_00185a6c(0x4a8);
    if (lVar9 == 0) {
      return;
    }
    FUN_001b56a4();
    return;
  }
  plVar11 = (long *)(puVar6 + 0x18);
  if (*puVar7 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar8;
    if (uVar3 != 0) {
      lVar9 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  lVar9 = 0;
  if (*plVar11 != 0) {
    lVar9 = *(long *)(*plVar11 + 0x10);
  }
  piVar1 = (int *)(lVar9 + 8);
  iVar10 = *piVar1;
  if (iVar10 == *piVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == iVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar2;
  } while( true );
}

