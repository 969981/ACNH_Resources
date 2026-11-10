
void FUN_001a8950(long param_1,byte param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48 [4];
  int local_44;
  
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar8 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if ((*plVar7 != 0) && (*(long *)(*plVar7 + 0x10) != 0)) {
    plVar7 = (long *)(puVar2 + 0x18);
    if (*puVar3 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar8 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) goto LAB_001a8b78;
        plVar7 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    if (*(long *)(*(long *)(*plVar7 + 0x10) + 0x198) != 0 && *(char *)(param_1 + 800) == '\0') {
      plVar7 = (long *)(puVar2 + 0x18);
      if (*puVar3 != '\0') {
        puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar1 = *puVar5;
        if (uVar1 != 0) {
          lVar8 = **(long **)(puVar2 + 0xa0);
          if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) {
LAB_001a8b78:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar7 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x10);
        }
      }
      lVar8 = *(long *)(param_1 + 0x268);
      if (lVar8 != param_1 + 0x260) {
        lVar6 = *(long *)(*(long *)(*plVar7 + 0x10) + 0x198);
        do {
          iVar4 = FUN_001b8fa0(lVar8 + 0x10,"RVCID",0);
          if (iVar4 != 0) {
            local_44 = FUN_001b8fa0(lVar8 + 0x10,"RVCID",0);
            if (lVar6 == 0) {
              return;
            }
            if (local_44 == 0) {
              return;
            }
            local_4c = *(undefined4 *)(param_1 + 0x330);
            local_48[0] = param_2 & 1;
            if (*(long *)(lVar6 + 0x10) == 0) {
              return;
            }
            local_50 = FUN_001ad6a0(lVar6);
            (**(code **)(**(long **)(lVar6 + 0x10) + 0x60))
                      (*(long **)(lVar6 + 0x10),&local_44,local_48,&local_50,&local_4c);
            return;
          }
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != param_1 + 0x260);
      }
    }
  }
  return;
}

