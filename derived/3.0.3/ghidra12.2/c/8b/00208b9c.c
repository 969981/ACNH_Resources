
void FUN_00208b9c(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bcb900;
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN_002095d0(param_1,param_2);
    return;
  }
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) {
    plVar6 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar5 = *(long *)(param_1 + 0x120);
  }
  else {
    plVar6 = (long *)(*(long *)(lVar5 + 0x10) + 0x78);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = *(long *)(param_1 + 0x120);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_00185a6c(0x28);
    if (lVar5 != 0) {
      FUN_00211218(lVar5,param_1);
    }
    *(long *)(param_1 + 0x120) = lVar5;
  }
  uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
  FUN_002095d0(uVar4,param_2,*(undefined8 *)(param_1 + 0x120));
  return;
}

