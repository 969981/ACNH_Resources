
uint FUN_0019dba8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_04bcb910;
  puVar2 = PTR_DAT_04bcb908;
  puVar1 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      lVar6 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar4) goto LAB_0019dca0;
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  lVar6 = *(long *)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x18);
  if (*(long *)(lVar6 + 0x60) == *(long *)(lVar6 + 0x58)) {
    return 0;
  }
  plVar7 = (long *)(puVar1 + 0x28);
  if (*puVar2 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      lVar6 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar4) {
LAB_0019dca0:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  uVar4 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x1b8) + 0x18))();
  return (uVar4 ^ 1) & 1;
}

