
void FUN_002063b4(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_00194970();
  if (param_2 == 2) {
    **(undefined8 **)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x2f8);
    if (*(long *)(param_1 + 0x178) != 0) {
      FUN_00189504(*(long *)(param_1 + 0x178),param_1 + 0x3b0);
    }
    FUN_001b3d58(*(long *)(param_1 + 0x180) + 0x10,param_1 + 0x338);
    FUN_001865b0(*(long *)(param_1 + 0x180) + 0x108,param_1 + 0x3a8);
  }
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
  lVar4 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar5 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 0xa0));
  if (lVar4 != 0) {
    local_48 = *param_3;
    uStack_40 = param_3[1];
    local_38 = param_3[2];
    FUN_00197e40(lVar4,param_2,&local_48,1);
  }
  return;
}

