
undefined8 FUN_001bf4b0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04bcb900;
  if (*PTR_DAT_04bcbd30 == '\0') {
    puVar4 = *(uint **)(param_1 + 0x2c8);
    lVar5 = (long)*(uint **)(param_1 + 0x2d0) - (long)puVar4;
    if (lVar5 != 0) {
      uVar7 = lVar5 >> 4;
      puVar6 = puVar4;
      do {
        uVar8 = uVar7 >> 1;
        puVar4 = puVar6 + uVar8 * 4;
        bVar3 = *puVar4 < *param_2;
        if ((ushort)puVar4[1] != (ushort)param_2[1]) {
          bVar3 = (ushort)puVar4[1] < (ushort)param_2[1];
        }
        puVar4 = puVar4 + 4;
        uVar7 = uVar7 + ~uVar8;
        if (!bVar3) {
          puVar4 = puVar6;
          uVar7 = uVar8;
        }
        puVar6 = puVar4;
      } while (uVar7 != 0);
    }
    if (puVar4 != *(uint **)(param_1 + 0x2d0)) {
      bVar3 = *param_2 < *puVar4;
      if ((ushort)param_2[1] != (ushort)puVar4[1]) {
        bVar3 = (ushort)param_2[1] < (ushort)puVar4[1];
      }
      if (!bVar3) {
        return *(undefined8 *)(puVar4 + 2);
      }
    }
    return 0;
  }
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar5 = *(long *)(*plVar10 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar10 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  puVar4 = *(uint **)(param_1 + 0x2c8);
  lVar5 = (long)*(uint **)(param_1 + 0x2d0) - (long)puVar4;
  if (lVar5 != 0) {
    uVar7 = lVar5 >> 4;
    puVar6 = puVar4;
    do {
      uVar8 = uVar7 >> 1;
      puVar4 = puVar6 + uVar8 * 4;
      bVar3 = *puVar4 < *param_2;
      if ((ushort)puVar4[1] != (ushort)param_2[1]) {
        bVar3 = (ushort)puVar4[1] < (ushort)param_2[1];
      }
      puVar4 = puVar4 + 4;
      uVar7 = uVar7 + ~uVar8;
      if (!bVar3) {
        puVar4 = puVar6;
        uVar7 = uVar8;
      }
      puVar6 = puVar4;
    } while (uVar7 != 0);
  }
  if (puVar4 != *(uint **)(param_1 + 0x2d0)) {
    bVar3 = *param_2 < *puVar4;
    if ((ushort)param_2[1] != (ushort)puVar4[1]) {
      bVar3 = (ushort)param_2[1] < (ushort)puVar4[1];
    }
    if (!bVar3) {
      uVar9 = *(undefined8 *)(puVar4 + 2);
      goto LAB_001bf6a8;
    }
  }
  uVar9 = 0;
LAB_001bf6a8:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar9;
}

