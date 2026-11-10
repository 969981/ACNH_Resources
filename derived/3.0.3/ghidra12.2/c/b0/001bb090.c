
undefined8 FUN_001bb090(long param_1,long param_2,char param_3,char *param_4)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  uint *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ushort uVar15;
  long *plVar16;
  ushort local_60 [4];
  long local_58;
  ushort local_44 [2];
  
  puVar5 = PTR_DAT_04bcb910;
  puVar4 = PTR_DAT_04bcb908;
  puVar11 = PTR_DAT_04bcb900;
  plVar16 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar10 = **(long **)(puVar11 + 0xa0);
      if ((ulong)((*(long **)(puVar11 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar16 = (long *)(*(long *)(lVar10 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar16 == 0) || (lVar10 = *(long *)(*plVar16 + 0x10), lVar10 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  plVar16 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar16 + 0x10))(plVar16);
  puVar11 = PTR_DAT_04bcbb78;
  uVar2 = *(uint *)(param_2 + 8);
  if (*puVar4 == '\0') {
LAB_001bb1e0:
    puVar11 = puVar11 + (ulong)uVar2 * 0x2a8 + 0x18;
    if (param_3 == '\0') goto LAB_001bb18c;
LAB_001bb1f4:
    uVar15 = CONCAT11(param_3,*(undefined1 *)(param_2 + 8));
    local_44[0] = uVar15;
    lVar10 = FUN_001bb2c0(param_1,local_44);
    uVar6 = local_60[0];
    local_60[0] = uVar15;
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar7 == 0) goto LAB_001bb1e0;
    puVar11 = (undefined *)
              (*(long *)(puVar11 + (ulong)uVar2 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148);
    if (param_3 != '\0') goto LAB_001bb1f4;
LAB_001bb18c:
    uVar15 = 0x10;
    if (*(int *)(puVar11 + 0x140) != 0) {
      uVar15 = 0x20;
    }
    do {
      uVar15 = uVar15 - 1;
      param_3 = (char)uVar15;
      uVar6 = local_60[0];
      if ((uVar15 & 0xff) == 0) goto LAB_001bb1d8;
      uVar3 = (ushort)*(byte *)(param_2 + 8) | uVar15 * 0x100;
      local_44[0] = uVar3;
      lVar10 = FUN_001bb2c0(param_1,local_44);
    } while (lVar10 != 0);
    lVar10 = FUN_001bb2c0(param_1,local_44);
    uVar6 = local_60[0];
    local_60[0] = uVar3;
  }
  if (lVar10 != 0) {
LAB_001bb1d8:
    local_60[0] = uVar6;
    uVar14 = 0;
    goto LAB_001bb290;
  }
  puVar8 = *(ushort **)(param_1 + 0x10);
  puVar1 = *(ushort **)(param_1 + 0x18);
  lVar10 = (long)puVar1 - (long)puVar8;
  local_58 = param_2;
  if (lVar10 == 0) {
    puVar9 = puVar1;
LAB_001bb278:
    FUN_001de410((long *)(param_1 + 0x10),puVar9,local_60);
  }
  else {
    uVar12 = lVar10 >> 4;
    do {
      uVar13 = uVar12 >> 1;
      puVar9 = puVar8 + uVar13 * 8 + 8;
      uVar12 = uVar12 + ~uVar13;
      if (local_60[0] <= puVar8[uVar13 * 8]) {
        puVar9 = puVar8;
        uVar12 = uVar13;
      }
      puVar8 = puVar9;
    } while (uVar12 != 0);
    if ((puVar1 == puVar9) || (local_60[0] < *puVar9)) goto LAB_001bb278;
  }
  if (param_4 != (char *)0x0) {
    *param_4 = param_3;
  }
  uVar14 = 1;
LAB_001bb290:
  (**(code **)(*plVar16 + 0x20))(plVar16);
  return uVar14;
}

