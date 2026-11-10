
uint FUN_0019a3a0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  plVar13 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar7 = *puVar8;
    if (uVar7 != 0) {
      lVar10 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar13 = (long *)(*(long *)(lVar10 + (ulong)uVar7 * 8) + 0x20);
    }
  }
  if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x10), lVar10 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  plVar13 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  uVar7 = FUN_00194070(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar7 & 1) == 0) goto LAB_0019a670;
  plVar14 = (long *)(puVar4 + 0x28);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x18);
  if (*puVar5 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      lVar10 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar14 = (long *)(*(long *)(lVar10 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar14 == 0) || (lVar10 = *(long *)(*plVar14 + 0x10), lVar10 == 0)) {
    lVar10 = 0;
    if (*PTR_DAT_04bcbd30 != '\0') goto LAB_0019a500;
LAB_0019a4cc:
    FUN_0019eaa0(lVar10,param_1,0);
    cVar3 = *puVar5;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x10);
    if (*PTR_DAT_04bcbd30 == '\0') goto LAB_0019a4cc;
LAB_0019a500:
    plVar14 = (long *)(lVar10 + 0xc0);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    plVar15 = (long *)(lVar10 + 0x30);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0019eaa0(lVar10,param_1,0);
    (**(code **)(*plVar15 + 0x20))(plVar15);
    (**(code **)(*plVar14 + 0x20))(plVar14);
    cVar3 = *puVar5;
  }
  plVar14 = (long *)(puVar4 + 0x28);
  if (cVar3 != '\0') {
    plVar14 = (long *)(puVar4 + 0x28);
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      lVar10 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar14 = (long *)(*(long *)(lVar10 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  uVar1 = *(uint *)(param_1 + 0xa0);
  lVar10 = *(long *)(*(long *)(*plVar14 + 0x10) + 0x18);
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x18);
  puVar9 = (undefined8 *)FUN_00187df4(0x28);
  *(uint *)((long)puVar9 + 0x1c) = uVar1;
  *(undefined4 *)(puVar9 + 4) = uVar2;
  puVar11 = (undefined8 *)(lVar10 + 0x68);
  puVar6 = (undefined8 *)*puVar11;
  if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar11;
    *puVar11 = puVar9;
    lVar12 = **(long **)(lVar10 + 0x60);
  }
  else {
    do {
      while (puVar11 = puVar6, uVar1 < *(uint *)((long)puVar11 + 0x1c)) {
        puVar6 = (undefined8 *)*puVar11;
        if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = puVar11;
          *puVar11 = puVar9;
          lVar12 = **(long **)(lVar10 + 0x60);
          goto joined_r0x0019a6b4;
        }
      }
      puVar6 = (undefined8 *)puVar11[1];
    } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = puVar11;
    puVar11[1] = puVar9;
    lVar12 = **(long **)(lVar10 + 0x60);
    puVar11 = puVar11 + 1;
  }
joined_r0x0019a6b4:
  if (lVar12 != 0) {
    *(long *)(lVar10 + 0x60) = lVar12;
    puVar9 = (undefined8 *)*puVar11;
  }
  FUN_03876250(*(undefined8 *)(lVar10 + 0x68),puVar9);
  *(long *)(lVar10 + 0x70) = *(long *)(lVar10 + 0x70) + 1;
  FUN_00187810(&local_48);
  *(undefined **)(param_1 + 0x80) = PTR_FUN_04bcc0d8;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = local_48;
  *(undefined8 **)(param_1 + 0x90) = &DAT_0407ebb1;
LAB_0019a670:
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return uVar7 & 1;
}

