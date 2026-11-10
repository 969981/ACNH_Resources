
void FUN_00207420(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  FUN_0019c050();
  puVar8 = PTR_DAT_04bcc088;
  (**(code **)(*(long *)PTR_DAT_04bcc088 + 0x10))(PTR_DAT_04bcc088);
  puVar7 = PTR_DAT_04bcb908;
  puVar6 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x70);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar10 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x68);
    }
  }
  if ((*plVar12 == 0) || (*(long *)(*plVar12 + 0x10) == 0)) {
    lVar10 = FUN_00185a6c(0x70);
    if (lVar10 != 0) {
      FUN_00210b80();
    }
LAB_00207588:
                    /* WARNING: Could not recover jumptable at 0x002075a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8);
    return;
  }
  plVar12 = (long *)(puVar6 + 0x70);
  if (*puVar7 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar10 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x68);
    }
  }
  lVar10 = 0;
  if (*plVar12 != 0) {
    lVar10 = *(long *)(*plVar12 + 0x10);
  }
  piVar1 = (int *)(lVar10 + 8);
  iVar11 = *piVar1;
  if (iVar11 == *piVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00207588;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_00207588;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar2;
  } while( true );
}

