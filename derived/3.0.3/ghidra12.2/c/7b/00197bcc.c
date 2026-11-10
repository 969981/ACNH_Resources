
void FUN_00197bcc(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  
  puVar8 = PTR_DAT_04bcb910;
  puVar7 = PTR_DAT_04bcb908;
  puVar6 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
      plVar10 = (long *)(*(long *)(lVar11 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar11 = *(long *)(*plVar10 + 0x10), lVar11 == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  plVar13 = (long *)(lVar11 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  plVar10 = (long *)FUN_00185a6c(0x80);
  if (plVar10 != (long *)0x0) {
    lVar11 = *param_2;
    lVar2 = param_2[1];
    lVar12 = param_2[2];
    *plVar10 = (long)(PTR_DAT_04bcbc48 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined1 *)((long)plVar10 + 0xc) = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    *(undefined4 *)(plVar10 + 6) = 0;
    *(undefined4 *)(plVar10 + 7) = 0;
    plVar10[8] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    *(undefined4 *)(plVar10 + 9) = 0;
    plVar10[5] = 0;
    *(undefined1 *)(plVar10 + 4) = 0;
    *(undefined2 *)(plVar10 + 0xc) = 0x100;
    puVar1 = PTR_DAT_04bcc070 + 0x10;
    *(undefined4 *)((long)plVar10 + 100) = uVar4;
    *plVar10 = (long)puVar1;
    plVar10[0xd] = lVar11;
    plVar10[0xe] = lVar2;
    plVar10[0xf] = lVar12;
  }
  plVar14 = (long *)(puVar6 + 0x28);
  if (*puVar7 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)puVar8);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar11 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar14 = (long *)(*(long *)(lVar11 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar14 == 0) || (lVar11 = *(long *)(*plVar14 + 0x10), lVar11 == 0)) {
    lVar11 = 0;
    cVar5 = *PTR_DAT_04bcbd30;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x10);
    cVar5 = *PTR_DAT_04bcbd30;
  }
  if (cVar5 == '\0') {
    FUN_0019eaa0(lVar11,plVar10,0);
  }
  else {
    plVar14 = (long *)(lVar11 + 0xc0);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    plVar15 = (long *)(lVar11 + 0x30);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0019eaa0(lVar11,plVar10,0);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00197e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return;
}

