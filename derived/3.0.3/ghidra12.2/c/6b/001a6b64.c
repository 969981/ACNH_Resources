
uint FUN_001a6b64(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long *plVar10;
  undefined4 local_38;
  undefined1 uStack_31;
  
  uVar6 = FUN_00194070(param_2);
  if ((uVar6 & 1) != 0) {
    FUN_00189504(param_1 + 8,param_3);
    *(undefined8 *)(param_1 + 0x30) = param_4;
    FUN_0018b7a0(param_4,0xf);
    plVar7 = (long *)FUN_00185a6c(0x120);
    if (plVar7 != (long *)0x0) {
      uVar2 = *(undefined4 *)PTR_DAT_04bcc2e8;
      uVar3 = *(undefined4 *)PTR_DAT_04bcc2f0;
      FUN_0019a2a8(plVar7,0,&uStack_31);
      puVar5 = PTR_DAT_04bcc2f8;
      *(undefined4 *)(plVar7 + 0x14) = 0;
      *plVar7 = (long)(puVar5 + 0x10);
      local_38 = 0x80010001;
      FUN_0018aa70(plVar7 + 0x15,&local_38);
      plVar7[0x18] = 0;
      FUN_00186460(plVar7 + 0x19,1,1);
      puVar5 = PTR_DAT_04bcbce8;
      *(undefined4 *)(plVar7 + 0x22) = uVar2;
      *(undefined4 *)((long)plVar7 + 0x114) = uVar3;
      plVar7[0x19] = (long)(puVar5 + 0x10);
      puVar8 = (undefined8 *)FUN_00185a6c(0x10);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_LAB_0483c218;
        puVar8[1] = param_1;
      }
      plVar7[0x23] = (long)puVar8;
      FUN_001a59a0();
    }
    FUN_001a69f4(plVar7,*(undefined4 *)(param_2 + 0x18));
    puVar5 = PTR_DAT_04bcb900;
    plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar4 = *puVar9;
      if (uVar4 != 0) {
        lVar1 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar10 = (long *)(*(long *)(lVar1 + (ulong)uVar4 * 8) + 0x20);
      }
    }
    FUN_00194148(*(undefined8 *)(*(long *)(*plVar10 + 0x10) + 0x10),plVar7,0);
  }
  return uVar6 & 1;
}

