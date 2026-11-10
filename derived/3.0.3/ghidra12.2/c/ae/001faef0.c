
undefined8 FUN_001faef0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar5 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
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
  puVar11 = (undefined8 *)(param_1 + 0x90);
  puVar6 = (undefined8 *)*puVar11;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = puVar11;
  }
  else {
    puVar7 = puVar11;
    puVar8 = puVar6;
    do {
      puVar1 = puVar8;
      if ((ulong)puVar8[4] < param_2) {
        puVar1 = puVar7;
        puVar8 = puVar8 + 1;
      }
      puVar8 = (undefined8 *)*puVar8;
      puVar7 = puVar1;
    } while (puVar8 != (undefined8 *)0x0);
    if ((puVar1 != puVar11) && ((ulong)puVar1[4] <= param_2)) {
      uVar9 = 0;
      goto LAB_001fb070;
    }
    do {
      while( true ) {
        puVar8 = puVar6;
        if (param_2 < (ulong)puVar8[4]) break;
        if (param_2 <= (ulong)puVar8[4]) goto LAB_001fb06c;
        puVar6 = (undefined8 *)puVar8[1];
        if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
          puVar11 = puVar8 + 1;
          goto LAB_001fb024;
        }
      }
      puVar6 = (undefined8 *)*puVar8;
      puVar11 = puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
LAB_001fb024:
  puVar6 = (undefined8 *)FUN_00187df4(0x28);
  puVar6[4] = param_2;
  puVar6[2] = puVar8;
  *puVar6 = 0;
  puVar6[1] = 0;
  *puVar11 = puVar6;
  if (**(long **)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = **(long **)(param_1 + 0x88);
    puVar6 = (undefined8 *)*puVar11;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x90),puVar6);
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
LAB_001fb06c:
  uVar9 = 1;
LAB_001fb070:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar9;
}

