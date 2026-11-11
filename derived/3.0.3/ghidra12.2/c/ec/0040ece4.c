
undefined8
FUN_0040ece4(long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  
  puVar4 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar5;
    if (uVar3 != 0) {
      lVar6 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  FUN_00189504(param_1 + 0x158,param_3);
  uVar1 = *(undefined8 *)(param_4 + 8);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  if (param_1 + 0x188 != param_4) {
    FUN_001dbd00(param_1 + 0x1a8,*(undefined8 *)(param_4 + 0x20),param_4 + 0x28);
  }
  puStack_68 = PTR_LAB_04bd2a38;
  local_70 = PTR_DAT_04bcc0c0;
  *(undefined8 *)(param_1 + 0x1c0) = param_5;
  *(undefined4 *)(param_1 + 0xa4) = param_6;
  local_60 = 0;
  puStack_58 = &DAT_0407ebb1;
  local_70 = local_70 + 0x10;
  FUN_0019a704(param_1,&local_70);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return 1;
}

