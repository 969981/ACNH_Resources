
bool FUN_001a8844(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar4 = PTR_DAT_04bcb910;
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) goto LAB_001a8934;
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar6 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar7 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 0x238));
  if (lVar6 == 0) {
    return true;
  }
  plVar7 = (long *)(puVar2 + 0x28);
  if (*puVar3 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
LAB_001a8934:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  return *(char *)(*(long *)(*plVar7 + 0x10) + 0x50) != '\0' || *(char *)(param_1 + 0x321) != '\0';
}

