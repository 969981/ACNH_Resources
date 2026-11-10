
void FUN_001a666c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_04bcb910;
  puVar4 = PTR_DAT_04bcb908;
  puVar3 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar11 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  lVar8 = *(long *)(param_1 + 8);
  FUN_001dd128(lVar8 + 0x20,*(undefined8 *)(lVar8 + 0x28));
  *(undefined8 **)(lVar8 + 0x20) = (undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  plVar10 = (long *)(puVar3 + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x48) = 0xffffffffffffffff;
  if (*puVar4 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  if ((*plVar10 == 0) || (*(long *)(*plVar10 + 0x10) == 0)) goto LAB_001a6960;
  plVar10 = (long *)(puVar3 + 0x18);
  if (*puVar4 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) goto LAB_001a6988;
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  cVar7 = *puVar4;
  if (*(long *)(*(long *)(*plVar10 + 0x10) + 0x198) != 0) {
    plVar10 = (long *)(puVar3 + 0x18);
    if (cVar7 == '\0') {
LAB_001a6824:
      plVar9 = plVar10;
    }
    else {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      uVar2 = *puVar6;
      if (uVar2 == 0) goto LAB_001a6824;
      lVar8 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) goto LAB_001a6988;
      plVar9 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x10);
    }
    local_60[0] = 0;
    lVar8 = *(long *)(*(long *)(*plVar9 + 0x10) + 0x198);
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_50 = local_60;
    uStack_48 = 0x10;
    local_68 = puVar1;
    FUN_0018b070(&local_68,&DAT_0407ebb1,0xffffffffffffffff);
    FUN_00189504(lVar8 + 0x168,&local_68);
    local_68 = puVar1;
    FUN_0018b1a0(&local_68);
    if (*puVar4 != '\0') {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
      uVar2 = *puVar6;
      if (uVar2 == 0) {
        plVar10 = (long *)(puVar3 + 0x18);
      }
      else {
        lVar8 = **(long **)(puVar3 + 0xa0);
        if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) goto LAB_001a6988;
        plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x10);
      }
    }
    *(undefined2 *)(*(long *)(*(long *)(*plVar10 + 0x10) + 0x198) + 400) = 0;
    cVar7 = *puVar4;
  }
  if (cVar7 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if ((*puVar6 != 0) &&
       ((ulong)((*(long **)(puVar3 + 0xa0))[1] - **(long **)(puVar3 + 0xa0) >> 3) <= (ulong)*puVar6)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                   0x47,0xe0000003,0);
    }
  }
  plVar10 = (long *)(puVar3 + 0x18);
  if (*puVar4 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
LAB_001a6988:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  *(undefined8 *)(*(long *)(*(long *)(*(long *)(*plVar10 + 0x10) + 0x1a8) + 0x20) + 0x10) = 0;
LAB_001a6960:
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}

