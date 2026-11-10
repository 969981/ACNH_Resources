
void FUN_001a4ea0(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  
  iVar3 = FUN_001e1884(param_1 + 0x58);
  if (iVar3 == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x80))(param_2,0xffffffff);
  (**(code **)(*param_2 + 0x70))(param_2);
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar5 = (**(code **)(**(long **)(*(long *)(*plVar6 + 0x10) + 0xe8) + 0x78))();
  if ((char)param_2[0xf] == '\0') {
    FUN_001b8590(param_2 + 2);
  }
  FUN_001bd038(*(long *)(lVar5 + 0x18) + 0x90,param_2[3],param_1 + 0x58,1);
  return;
}

