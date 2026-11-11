
undefined8
FUN_0040d7e4(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
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
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  FUN_00189504(param_1 + 0x158,param_3);
  FUN_00189504(param_1 + 400,param_4 + 8);
  puStack_68 = PTR_FUN_04bd29d8;
  local_70 = PTR_DAT_04bcc0c0;
  *(undefined8 *)(param_1 + 0x1b8) = param_5;
  *(undefined4 *)(param_1 + 0xa4) = param_6;
  local_60 = 0;
  puStack_58 = &DAT_0407ebb1;
  local_70 = local_70 + 0x10;
  FUN_0019a704(param_1,&local_70);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return 1;
}

