
undefined8 FUN_001af5d0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      lVar4 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar4 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar4 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(*plVar6 + 0x10) + 0xe8) + 0x80))();
  if (*(char *)(lVar4 + 0x10) == '\0') {
    return 0;
  }
  uVar5 = FUN_0018b44c(*(undefined8 *)(param_1 + 0x180),&DAT_0407ebb1);
  if (((uVar5 & 1) != 0) || (*(short *)(param_1 + 400) == 0)) {
    return 0;
  }
  if ((param_3 & 1) != 0) {
    lVar4 = FUN_001b8fa0(param_2,&DAT_0410a6d5,0);
    if (lVar4 != 0) {
      return 0;
    }
    uVar2 = FUN_001b8fa0(param_2,&DAT_0410a6b7,0);
    if ((uVar2 >> 1 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

