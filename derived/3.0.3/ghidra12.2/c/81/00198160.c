
void FUN_00198160(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar9 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar9 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar9 = *(long *)(*(long *)(*plVar8 + 0x10) + 0x18);
  uVar1 = *(uint *)(lVar9 + 0x78);
  iVar6 = 1;
  if (1 < uVar1 + 1) {
    iVar6 = uVar1 + 1;
  }
  *(int *)(lVar9 + 0x78) = iVar6;
  puVar10 = (undefined8 *)(lVar9 + 0x50);
  puVar5 = (undefined8 *)*puVar10;
  if ((undefined8 *)*puVar10 == (undefined8 *)0x0) {
    puVar11 = puVar10;
  }
  else {
    do {
      while (puVar4 = puVar5, puVar10 = puVar4, *(uint *)(puVar4 + 4) <= uVar1) {
        if (uVar1 <= *(uint *)(puVar4 + 4)) goto LAB_00198280;
        puVar5 = (undefined8 *)puVar4[1];
        if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
          puVar11 = puVar4 + 1;
          goto LAB_00198230;
        }
      }
      puVar5 = (undefined8 *)*puVar4;
      puVar11 = puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_00198230:
  puVar4 = (undefined8 *)FUN_00187df4(0x30);
  puVar4[5] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = puVar10;
  *puVar11 = puVar4;
  lVar7 = **(long **)(lVar9 + 0x48);
  *(uint *)(puVar4 + 4) = uVar1;
  puVar5 = puVar4;
  if (lVar7 != 0) {
    *(long *)(lVar9 + 0x48) = lVar7;
    puVar5 = (undefined8 *)*puVar11;
  }
  FUN_03876250(*(undefined8 *)(lVar9 + 0x50),puVar5);
  *(long *)(lVar9 + 0x58) = *(long *)(lVar9 + 0x58) + 1;
LAB_00198280:
  puVar4[5] = param_1;
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}

