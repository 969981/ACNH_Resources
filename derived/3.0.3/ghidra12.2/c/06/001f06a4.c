
void FUN_001f06a4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  int local_38 [6];
  
  puVar1 = PTR_DAT_04bcb900;
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
      plVar5 = (long *)(*(long *)(lVar4 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar4 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar5 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 0xa0));
  if (lVar4 == 0) {
    local_38[0] = -0x7ffefffc;
    FUN_0018aa70(&local_58,local_38);
    FUN_001f0c44(param_1,&local_58);
    return;
  }
  FUN_001f07e8(local_38,param_1);
  puVar1 = PTR_LAB_04bc0ee0;
  if (local_38[0] < 0) {
    puVar1 = (undefined *)0x0;
  }
  if (puVar1 == (undefined *)0x0) {
    FUN_001f0c44(param_1,local_38);
    return;
  }
  local_58 = PTR_DAT_04bcc0c0 + 0x10;
  local_48 = 0;
  puStack_40 = &DAT_0407ebb1;
  puStack_50 = PTR_LAB_04bcc898;
  FUN_0019a704(param_1,&local_58);
  return;
}

