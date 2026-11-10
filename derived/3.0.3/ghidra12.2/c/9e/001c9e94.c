
void FUN_001c9e94(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_04bcb910;
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  if ((*(ushort *)(param_3 + 0x60) >> 0xb & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      return;
    }
    plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar7 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar6 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if ((*plVar6 == 0) || (lVar7 = *(long *)(*plVar6 + 0x10), lVar7 == 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x10);
    }
    plVar8 = (long *)(lVar7 + 0x78);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(**(long **)(param_1 + 0x80) + 0x10))
              (*(long **)(param_1 + 0x80),param_1,param_2,*(undefined1 *)(param_3 + 0xa4));
  }
  else {
    plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar7 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar6 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if ((*plVar6 == 0) || (lVar7 = *(long *)(*plVar6 + 0x10), lVar7 == 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x10);
    }
    plVar8 = (long *)(lVar7 + 0x78);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    plVar6 = (long *)(puVar2 + 0x78);
    if (*puVar3 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar7 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar6 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x70);
      }
    }
    if ((*plVar6 != 0) && (plVar6 = *(long **)(*plVar6 + 0x10), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x28))
                (plVar6,param_1,param_2,*(undefined2 *)(param_3 + 0x60),
                 *(undefined1 *)(param_3 + 0xa4));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001ca0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

