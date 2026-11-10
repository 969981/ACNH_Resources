
void FUN_002075e0(void)

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
  long *plVar10;
  long lVar11;
  int iVar12;
  
  puVar8 = PTR_DAT_04bcc088;
  (**(code **)(*(long *)PTR_DAT_04bcc088 + 0x10))(PTR_DAT_04bcc088);
  puVar7 = PTR_DAT_04bcb908;
  puVar6 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x90);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar11 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar11 + (ulong)uVar3 * 8) + 0x88);
    }
  }
  if ((*plVar10 == 0) || (*(long *)(*plVar10 + 0x10) == 0)) {
    plVar10 = (long *)FUN_00185a6c(0xe0);
    if (plVar10 != (long *)0x0) {
      *plVar10 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar10 + 1) = 1;
      puVar6 = PTR_DAT_04bccc18;
      *(undefined1 *)((long)plVar10 + 0xc) = 0;
      *plVar10 = (long)(puVar6 + 0x10);
      FUN_0019d6e8(plVar10 + 2,0x10);
      FUN_00186460(plVar10 + 6,0x20000000,1);
      puVar6 = PTR_DAT_04bc0ec8;
      plVar10[0xf] = 0;
      *(undefined1 *)(plVar10 + 0x12) = 0;
      *(undefined1 *)(plVar10 + 0x18) = 0;
      *(undefined2 *)(plVar10 + 0x10) = 0;
      *(undefined2 *)(plVar10 + 0x16) = 0;
      plVar10[0x14] = (long)(plVar10 + 0x12);
      plVar10[0x15] = 0x10;
      plVar10[0x11] = (long)(puVar6 + 0x10);
      plVar10[0x17] = (long)(puVar6 + 0x10);
      plVar10[0x1a] = (long)(plVar10 + 0x18);
      plVar10[0x1b] = 0x10;
      FUN_0019b310(plVar10 + 2,plVar10);
      FUN_002146d8(plVar10);
    }
LAB_002077e4:
                    /* WARNING: Could not recover jumptable at 0x002077fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8);
    return;
  }
  plVar10 = (long *)(puVar6 + 0x90);
  if (*puVar7 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar11 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar11 + (ulong)uVar3 * 8) + 0x88);
    }
  }
  lVar11 = 0;
  if (*plVar10 != 0) {
    lVar11 = *(long *)(*plVar10 + 0x10);
  }
  piVar1 = (int *)(lVar11 + 8);
  iVar12 = *piVar1;
  if (iVar12 == *piVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_002077e4;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar2 = *piVar1;
    if (iVar2 == iVar12) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_002077e4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = iVar2;
  } while( true );
}

