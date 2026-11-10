
void FUN_0030eee0(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  FUN_001f8f6c(param_1,1);
  *param_1 = (long)(PTR_DAT_04bceb70 + 0x10);
  if ((param_2 & 0xffff) == 0) {
    return;
  }
  FUN_001fb588(param_1,param_2);
  puVar3 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x70);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x68);
    }
  }
  lVar1 = param_1[9];
  uVar7 = *(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x10);
  uVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
  FUN_00210960(uVar7,(short)lVar1,uVar5);
  return;
}

