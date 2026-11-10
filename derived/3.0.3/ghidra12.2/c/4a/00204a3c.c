
uint FUN_00204a3c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined4 param_10,undefined4 param_11,byte param_12)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar4 * 8) + 0x20);
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
  uVar4 = FUN_00194070(param_2);
  if ((uVar4 & 1) != 0) {
    plVar8 = (long *)(puVar2 + 0x28);
    if (*puVar3 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar6 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar8 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if ((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x10), lVar6 == 0)) {
      uVar9 = 0;
      lVar6 = FUN_00185a6c(0x400);
    }
    else {
      uVar9 = *(undefined8 *)(lVar6 + 0x10);
      lVar6 = FUN_00185a6c(0x400);
    }
    if (lVar6 != 0) {
      FUN_00205e88(lVar6,*(undefined4 *)(param_2 + 0x18),param_1,param_3,param_4,param_5,param_6,
                   param_7,param_8,param_9,param_10,param_11,param_12 & 1);
    }
    FUN_00194148(uVar9,lVar6,0);
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar4 & 1;
}

