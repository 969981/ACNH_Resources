
void FUN_00210960(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  FUN_001fb588(param_3);
  puVar5 = PTR_DAT_04bcb900;
  plVar13 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar8 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar13 = (long *)(*(long *)(lVar8 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar13 == 0) || (lVar8 = *(long *)(*plVar13 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar13 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  iVar6 = (**(code **)(*param_3 + 0x80))(param_3);
  uVar4 = *(ushort *)(param_3 + 9);
  lVar8 = param_1 + 0x20;
  if (iVar6 != 1) {
    lVar8 = param_1 + 8;
  }
  lVar1 = 0x20;
  if (iVar6 != 1) {
    lVar1 = 8;
  }
  puVar14 = (undefined8 *)(lVar8 + 8);
  puVar9 = (undefined8 *)*puVar14;
  if (puVar9 == (undefined8 *)0x0) {
    puVar12 = puVar14;
  }
  else {
    puVar11 = puVar14;
    puVar12 = puVar9;
    do {
      puVar2 = puVar12;
      if (*(ushort *)(puVar12 + 4) < uVar4) {
        puVar2 = puVar11;
        puVar12 = puVar12 + 1;
      }
      puVar12 = (undefined8 *)*puVar12;
      puVar11 = puVar2;
    } while (puVar12 != (undefined8 *)0x0);
    if ((puVar2 != puVar14) && (*(ushort *)(puVar2 + 4) <= uVar4)) {
      (**(code **)(*param_3 + 8))(param_3);
      goto LAB_00210b5c;
    }
    do {
      while (puVar14 = puVar9, uVar4 < *(ushort *)(puVar14 + 4)) {
        puVar9 = (undefined8 *)*puVar14;
        puVar12 = puVar14;
        if ((undefined8 *)*puVar14 == (undefined8 *)0x0) goto LAB_00210b08;
      }
      puVar9 = puVar14;
      if (uVar4 <= *(ushort *)(puVar14 + 4)) goto LAB_00210b58;
      puVar9 = (undefined8 *)puVar14[1];
    } while ((undefined8 *)puVar14[1] != (undefined8 *)0x0);
    puVar12 = puVar14 + 1;
  }
LAB_00210b08:
  puVar9 = (undefined8 *)FUN_00187df4(0x30);
  puVar9[5] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = puVar14;
  *puVar12 = puVar9;
  lVar10 = **(long **)(param_1 + lVar1);
  *(ushort *)(puVar9 + 4) = uVar4;
  puVar14 = puVar9;
  if (lVar10 != 0) {
    *(long *)(param_1 + lVar1) = lVar10;
    puVar14 = (undefined8 *)*puVar12;
  }
  FUN_03876250(*(undefined8 *)(lVar8 + 8),puVar14);
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
LAB_00210b58:
  puVar9[5] = param_3;
LAB_00210b5c:
                    /* WARNING: Could not recover jumptable at 0x00210b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return;
}

