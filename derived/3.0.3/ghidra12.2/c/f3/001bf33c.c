
uint FUN_001bf33c(undefined8 param_1,long param_2,undefined4 param_3,undefined2 param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      lVar6 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar2 * 8) + 0x20);
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
  local_68._0_6_ = CONCAT24(param_4,param_3);
  lVar6 = FUN_001bf4b0(param_1,&local_68);
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001b9300(&local_68,param_2);
    lVar4 = FUN_0018b798(&local_68);
    if (lVar4 != 0) {
      plVar5 = *(long **)(*(long *)(lVar6 + 0xb0) + 0x10);
      (**(code **)(*plVar5 + 0xa0))(plVar5,&local_68);
    }
    if (*(char *)(param_2 + 0x68) == '\0') {
      FUN_001b8590(param_2);
    }
    uVar2 = FUN_001e2e38(lVar6,*(undefined8 *)(param_2 + 8));
    local_68 = PTR_DAT_04bc0ec8 + 0x10;
    FUN_0018b1a0(&local_68);
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar2 & 1;
}

