
void FUN_001a619c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  *param_1 = (long)(PTR_DAT_04bcc2c0 + 0x10);
  puVar4 = PTR_DAT_04bcb910;
  if ((int)param_1[5] != 0) {
    plVar7 = (long *)(puVar2 + 0x28);
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
        plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    plVar8 = (long *)(lVar6 + 0x78);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar7 = (long *)(puVar2 + 0x28);
    if (*puVar3 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar6 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) goto LAB_001a6378;
        plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    lVar6 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar7 + 0x10) + 0x18),(int)param_1[5]);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x14) == 1)) {
      local_34 = 0x80010004;
      FUN_0018aa70(&local_70,&local_34);
      local_58 = local_70;
      uStack_50 = uStack_68;
      local_48 = local_60;
      FUN_00197e40(lVar6,3,&local_58,1);
    }
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (*(char *)((long)param_1 + 0x34) != '\0') {
    puVar9 = (undefined8 *)(puVar2 + 0x80);
    if (*puVar3 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar6 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
LAB_001a6378:
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        puVar9 = (undefined8 *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x78);
      }
    }
    FUN_00188600(*puVar9);
    *(undefined1 *)((long)param_1 + 0x34) = 0;
  }
  FUN_0019c5fc(param_1);
  return;
}

