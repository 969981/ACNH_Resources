
undefined8 FUN_0021107c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_28;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar4 = (long *)(PTR_DAT_04bcb900 + 0x70);
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
      plVar4 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  if (*plVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*plVar4 + 0x10);
  }
  if ((param_2 == 0) || (*(long *)(lVar5 + 0x60) == 0)) {
    return 0;
  }
  lVar6 = *(long *)(lVar5 + 0x68);
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_28);
  }
  else {
    FUN_0018c9b0(&local_28,0);
  }
  *(long *)PTR_DAT_04bcbcb0 = local_28;
  FUN_001870c0(&local_28,(local_28 - *(long *)(lVar5 + 0x60)) / 1000 + lVar6);
  FUN_001865b0(param_2,&local_28);
  return 1;
}

