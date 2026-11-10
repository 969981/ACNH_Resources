
void FUN_00196a4c(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_04bcb908;
  puVar3 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x80);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x78);
    }
  }
  if (*plVar8 != 0) {
    puVar7 = (undefined8 *)(puVar3 + 0x80);
    if (*puVar4 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        lVar1 = **(long **)(puVar3 + 0xa0);
        if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) goto LAB_00196ba0;
        puVar7 = (undefined8 *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x78);
      }
    }
    uVar6 = FUN_00188648(*puVar7);
    if (param_2 <= uVar6) {
      if ((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0) {
        puVar7 = (undefined8 *)(puVar3 + 0x80);
        if (*puVar4 != '\0') {
          puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
          uVar2 = *puVar5;
          if (uVar2 != 0) {
            lVar1 = **(long **)(puVar3 + 0xa0);
            if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
LAB_00196ba0:
                    /* WARNING: Subroutine does not return */
              FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            }
            puVar7 = (undefined8 *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x78);
          }
        }
        FUN_001887dc(*puVar7,param_2);
        return;
      }
      goto LAB_00196b8c;
    }
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
LAB_00196b8c:
  FUN_00187df4(param_2);
  return;
}

