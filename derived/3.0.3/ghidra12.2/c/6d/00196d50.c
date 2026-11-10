
void FUN_00196d50(ulong param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_04bcb908;
  puVar3 = PTR_DAT_04bcb900;
  if (param_1 < param_2) {
    if (param_1 < 2) {
      param_1 = 1;
    }
    plVar9 = (long *)(PTR_DAT_04bcb900 + 0x80);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar6;
      if (uVar2 != 0) {
        lVar1 = **(long **)(puVar3 + 0xa0);
        if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar9 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x78);
      }
    }
    if (*plVar9 == 0) {
      uVar7 = 0;
    }
    else {
      puVar8 = (undefined8 *)(puVar3 + 0x80);
      if (*puVar4 != '\0') {
        puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar2 = *puVar6;
        if (uVar2 != 0) {
          lVar1 = **(long **)(puVar3 + 0xa0);
          if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          puVar8 = (undefined8 *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x78);
        }
      }
      uVar7 = FUN_00188660(*puVar8,param_2);
    }
    if (param_2 <= uVar7) {
      param_1 = uVar7;
    }
    do {
      bVar5 = param_1 < param_2;
      param_1 = param_1 << 1;
    } while (bVar5);
  }
  return;
}

