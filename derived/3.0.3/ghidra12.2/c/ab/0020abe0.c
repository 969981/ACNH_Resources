
void FUN_0020abe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar4 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar4 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar5 = (long *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar5 == 0) || (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 == 0)) {
    uVar6 = 0;
    lVar4 = FUN_00185a6c(0xe8);
  }
  else {
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    lVar4 = FUN_00185a6c(0xe8);
  }
  if (lVar4 != 0) {
    FUN_001f9950(lVar4,*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
  FUN_00194148(uVar6,lVar4,0);
  return;
}

