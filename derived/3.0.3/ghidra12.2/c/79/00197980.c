
uint FUN_00197980(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  uint *local_58;
  uint *local_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04bcb910;
  puVar4 = PTR_DAT_04bcb908;
  puVar3 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar6 = *puVar7;
    if (uVar6 != 0) {
      lVar9 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar9 + (ulong)uVar6 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  plVar13 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  plVar12 = (long *)(puVar3 + 0x28);
  local_48 = 0;
  local_58 = (uint *)0x0;
  local_50 = (uint *)0x0;
  if (*puVar4 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar6 = *puVar7;
    if (uVar6 != 0) {
      lVar9 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar6) {
LAB_00197b90:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar9 + (ulong)uVar6 * 8) + 0x20);
    }
  }
  FUN_00198890(*(undefined8 *)(*(long *)(*plVar12 + 0x10) + 0x18),*(undefined4 *)(param_1 + 0x18),
               &local_58);
  uVar6 = FUN_00198a80(param_1);
  puVar7 = local_58;
  if (local_58 != local_50) {
    do {
      plVar12 = (long *)(puVar3 + 0x28);
      if (*puVar4 != '\0') {
        puVar8 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
        uVar2 = *puVar8;
        if (uVar2 != 0) {
          lVar9 = **(long **)(puVar3 + 0xa0);
          if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2)
          goto LAB_00197b90;
          plVar12 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x20);
        }
      }
      plVar10 = (long *)(*(long *)(*(long *)(*plVar12 + 0x10) + 0x18) + 0x50);
      plVar12 = (long *)*plVar10;
      if (plVar12 != (long *)0x0) {
        plVar11 = plVar10;
        do {
          plVar1 = plVar12;
          if (*(uint *)(plVar12 + 4) < *puVar7) {
            plVar1 = plVar11;
            plVar12 = plVar12 + 1;
          }
          plVar12 = (long *)*plVar12;
          plVar11 = plVar1;
        } while (plVar12 != (long *)0x0);
        if (((plVar1 != plVar10) && (*(uint *)(plVar1 + 4) <= *puVar7)) && (plVar1[5] != 0)) {
          FUN_00197980();
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != local_50);
  }
  if (local_58 != (uint *)0x0) {
    local_50 = local_58;
    FUN_00187e4c(local_58);
  }
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return uVar6 & 1;
}

