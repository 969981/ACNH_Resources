
undefined8 FUN_001bb2c0(long param_1,ushort *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04bcb900;
  if (*PTR_DAT_04bcbd30 != '\0') {
    plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar3;
      if (uVar1 != 0) {
        lVar4 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar4 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar10 = (long *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if ((*plVar10 == 0) || (lVar4 = *(long *)(*plVar10 + 0x10), lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    plVar10 = (long *)(lVar4 + 0x78);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    puVar6 = *(ushort **)(param_1 + 0x10);
    lVar4 = (long)*(ushort **)(param_1 + 0x18) - (long)puVar6;
    if (lVar4 != 0) {
      uVar7 = lVar4 >> 4;
      puVar5 = puVar6;
      do {
        uVar8 = uVar7 >> 1;
        puVar6 = puVar5 + uVar8 * 8 + 8;
        uVar7 = uVar7 + ~uVar8;
        if (*param_2 <= puVar5[uVar8 * 8]) {
          puVar6 = puVar5;
          uVar7 = uVar8;
        }
        puVar5 = puVar6;
      } while (uVar7 != 0);
    }
    if ((puVar6 == *(ushort **)(param_1 + 0x18)) || (*param_2 < *puVar6)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(puVar6 + 4);
    }
    (**(code **)(*plVar10 + 0x20))(plVar10);
    return uVar9;
  }
  puVar6 = *(ushort **)(param_1 + 0x10);
  lVar4 = (long)*(ushort **)(param_1 + 0x18) - (long)puVar6;
  if (lVar4 != 0) {
    uVar7 = lVar4 >> 4;
    puVar5 = puVar6;
    do {
      uVar8 = uVar7 >> 1;
      puVar6 = puVar5 + uVar8 * 8 + 8;
      uVar7 = uVar7 + ~uVar8;
      if (*param_2 <= puVar5[uVar8 * 8]) {
        puVar6 = puVar5;
        uVar7 = uVar8;
      }
      puVar5 = puVar6;
    } while (uVar7 != 0);
  }
  if ((puVar6 == *(ushort **)(param_1 + 0x18)) || (*param_2 < *puVar6)) {
    return 0;
  }
  return *(undefined8 *)(puVar6 + 4);
}

