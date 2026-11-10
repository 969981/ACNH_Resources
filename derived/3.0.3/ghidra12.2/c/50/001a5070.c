
uint FUN_001a5070(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined4 param_7,byte param_8,long *param_9)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      lVar6 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar6 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar8 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar4 = FUN_00194070(param_2);
  if ((uVar4 & 1) != 0) {
    lVar6 = FUN_00185a6c(0x350);
    if (lVar6 != 0) {
      FUN_001a7df0(lVar6,*(undefined4 *)(param_1 + 300),param_1,*(undefined4 *)(param_2 + 0x18),
                   param_3,param_4,param_5,param_6,param_7,param_8 & 1);
    }
    puVar3 = PTR_DAT_04bcb900;
    plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        lVar1 = **(long **)(puVar3 + 0xa0);
        if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar7 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    FUN_00194148(*(undefined8 *)(*(long *)(*plVar7 + 0x10) + 0x10),lVar6,0);
    if (param_9 != (long *)0x0) {
      *param_9 = lVar6;
    }
  }
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return uVar4 & 1;
}

