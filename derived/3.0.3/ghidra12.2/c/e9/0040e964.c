
undefined8
FUN_0040e964(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
  puVar2 = PTR_DAT_04bcb900;
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
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  FUN_00189504(param_1 + 0x158,param_3);
  local_70 = PTR_DAT_04bcc0c0;
  uVar5 = *(undefined8 *)(param_4 + 8);
  *(undefined4 *)(param_1 + 0xa4) = param_6;
  puStack_68 = PTR_LAB_04bd2a28;
  local_60 = 0;
  puStack_58 = &DAT_0407ebb1;
  local_70 = local_70 + 0x10;
  *(undefined8 *)(param_1 + 400) = uVar5;
  *(undefined8 *)(param_1 + 0x198) = param_5;
  FUN_0019a704(param_1,&local_70);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return 1;
}

