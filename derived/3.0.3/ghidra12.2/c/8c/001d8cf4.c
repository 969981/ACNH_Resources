
bool FUN_001d8cf4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  puVar1 = PTR_DAT_04bcbb78;
  puVar5 = PTR_DAT_04bcb910;
  puVar4 = PTR_DAT_04bcb908;
  if ((*(ushort *)(param_1 + 0x60) & 0xf) == 7 || *(char *)(param_1 + 0x210) != '\0') {
    return true;
  }
  uVar10 = (ulong)*(byte *)(param_1 + 0x42);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001d8d90:
    cVar3 = puVar1[uVar10 * 0x2a8 + 0x58];
  }
  else {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar6 == 0) goto LAB_001d8d90;
    cVar3 = *(char *)(*(long *)(puVar1 + uVar10 * 0x2a8 + 0x10) + (ulong)*puVar6 * 0x148 + 0x40);
  }
  if (cVar3 == '\0') {
    return true;
  }
  uVar9 = *(ulong *)(param_1 + 0x1d8);
  if (*puVar4 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    if (*puVar6 != 0) {
      puVar11 = (undefined *)(*(long *)(puVar1 + uVar10 * 0x2a8 + 0x10) + (ulong)*puVar6 * 0x148);
      cVar3 = *puVar4;
      puVar1 = puVar11 + 0x38;
      puVar4 = PTR_DAT_04bcb900;
      goto joined_r0x001d8e0c;
    }
  }
  puVar11 = puVar1 + uVar10 * 0x2a8 + 0x18;
  cVar3 = *puVar4;
  puVar1 = puVar1 + uVar10 * 0x2a8 + 0x50;
  puVar4 = PTR_DAT_04bcb900;
joined_r0x001d8e0c:
  plVar8 = (long *)(puVar4 + 0x28);
  PTR_DAT_04bcb900 = puVar4;
  if (cVar3 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar7 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar8 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  FUN_001ba1c0(puVar1);
  uVar10 = *(ulong *)(puVar11 + 0x48);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return uVar9 <= uVar10;
}

