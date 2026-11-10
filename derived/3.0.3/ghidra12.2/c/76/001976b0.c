
void FUN_001976b0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_04bcc068 + 0x10);
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) ||
     (*(long *)(lVar5 + 0x10) == 0)) {
    plVar7 = (long *)param_1[0x10];
  }
  else {
    plVar7 = (long *)(puVar2 + 0x28);
    if (*puVar3 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        lVar5 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
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
    if (*(int *)((long)param_1 + 0x14) == 1) {
      FUN_00197980(param_1);
    }
    if ((int)param_1[3] != 0) {
      plVar8 = (long *)(puVar2 + 0x28);
      if (*puVar3 != '\0') {
        puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar1 = *puVar4;
        if (uVar1 != 0) {
          lVar5 = **(long **)(puVar2 + 0xa0);
          if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar8 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_001982c0(*(undefined8 *)(*(long *)(*plVar8 + 0x10) + 0x18),(int)param_1[3]);
      *(undefined4 *)(param_1 + 3) = 0;
    }
    (**(code **)(*plVar7 + 0x20))(plVar7);
    plVar7 = (long *)param_1[0x10];
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
    param_1[0x10] = 0;
  }
  plVar7 = (long *)param_1[10];
  if (plVar7 != (long *)0x0) {
    plVar8 = (long *)*plVar7;
    if (plVar8 == (long *)plVar7[1]) {
      plVar7[1] = (long)plVar8;
    }
    else {
      do {
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 8))();
          plVar7 = (long *)param_1[10];
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != (long *)plVar7[1]);
      plVar8 = (long *)*plVar7;
      plVar7[1] = (long)plVar8;
    }
    if (plVar8 != (long *)0x0) {
      FUN_00187e4c(plVar8);
    }
    FUN_00185ac4(plVar7);
    param_1[10] = 0;
  }
  param_1[0x11] = 0;
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    FUN_00187e4c();
  }
  if (param_1[6] != 0) {
    lVar5 = param_1[4];
    plVar7 = (long *)param_1[5];
    param_1[6] = 0;
    lVar6 = *plVar7;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar6;
    while (plVar7 != param_1 + 4) {
      plVar7 = (long *)plVar7[1];
      FUN_00187e4c();
    }
  }
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  return;
}

