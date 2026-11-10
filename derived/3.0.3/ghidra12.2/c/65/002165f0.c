
void FUN_002165f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bcb900;
  lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1f8);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x40) != 5)) {
    FUN_0019c910(param_1,1);
    *(undefined4 *)(param_1 + 0x44) = 100;
    return;
  }
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
                       *(undefined4 *)(param_1 + 0xa8));
  if (lVar4 != 0) {
    local_54 = 0x10001;
    FUN_0018aa70(&local_50,&local_54);
    local_38 = local_50;
    uStack_30 = uStack_48;
    local_28 = local_40;
    FUN_00197e40(lVar4,2,&local_38,1);
  }
  FUN_00194970(param_1);
  return;
}

