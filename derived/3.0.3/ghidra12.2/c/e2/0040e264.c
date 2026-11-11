
undefined8
FUN_0040e264(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  FUN_00189504(param_1 + 0x158,param_3);
  uVar2 = *(undefined4 *)(param_4 + 0x10);
  uVar6 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x1a0) = param_5;
  local_70 = PTR_DAT_04bcc0c0;
  *(undefined4 *)(param_1 + 0xa4) = param_6;
  puStack_68 = PTR_LAB_04bd2a08;
  *(undefined8 *)(param_1 + 400) = uVar6;
  *(undefined4 *)(param_1 + 0x198) = uVar2;
  local_70 = local_70 + 0x10;
  local_60 = 0;
  puStack_58 = &DAT_0407ebb1;
  FUN_0019a704(param_1,&local_70);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return 1;
}

