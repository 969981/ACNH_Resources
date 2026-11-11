
void FUN_00411d64(long param_1,int *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
      plVar6 = (long *)(*(long *)(lVar4 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar4 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 0xa0));
  if (lVar4 != 0) {
    puVar1 = PTR_LAB_04bc0ee0;
    if (*param_2 < 0) {
      puVar1 = (undefined *)0x0;
    }
    if (puVar1 == (undefined *)0x0) {
      local_48 = *(undefined8 *)param_2;
      uStack_40 = *(undefined8 *)(param_2 + 2);
      uVar5 = 3;
    }
    else {
      local_48 = *(undefined8 *)param_2;
      uStack_40 = *(undefined8 *)(param_2 + 2);
      uVar5 = 2;
    }
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_00197e40(lVar4,uVar5,&local_48,1);
  }
  FUN_00194970(param_1);
  return;
}

