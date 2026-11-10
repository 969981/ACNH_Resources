
void FUN_00212bd0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bcb900;
  lVar5 = *param_2;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
      plVar6 = (long *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar6 == 0) || (lVar4 = *(long *)(*plVar6 + 0x10), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  plVar6 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if (*(int *)(lVar5 + 0x40) == 2) {
    FUN_0019c910(lVar5,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00212c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

