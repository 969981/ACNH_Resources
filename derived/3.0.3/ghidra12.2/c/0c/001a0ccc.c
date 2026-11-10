
undefined8 FUN_001a0ccc(void)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x28), lVar5 != 0)) {
    lVar5 = lVar5 + 8;
    lVar4 = FUN_001a0e60(lVar5);
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar5 = FUN_001a0e60(lVar5);
      return *(undefined8 *)(*(long *)(lVar5 + 8) + 0x18);
    }
  }
  return 0;
}

