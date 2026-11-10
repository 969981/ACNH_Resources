
void FUN_0020ebc8(long *param_1,undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined4 local_34;
  
  FUN_0019a2a8(param_1,2,&local_58);
  *param_1 = (long)(PTR_DAT_04bccce8 + 0x10);
  param_1[0x19] = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 0x1a) = 1;
  puVar3 = PTR_DAT_04bcc068;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x80010001);
  param_1[0x19] = (long)(puVar3 + 0x10);
  param_1[0x1d] = (long)(param_1 + 0x1d);
  param_1[0x1e] = (long)(param_1 + 0x1d);
  FUN_0018aa70(param_1 + 0x24,&local_58);
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  param_1[0x13] = 0x1000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar3 = PTR_DAT_04bcb900;
  if ((param_4 != 0) && (lVar5 = *(long *)(param_4 + 0x88), lVar5 != 0)) {
    plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        lVar1 = **(long **)(puVar3 + 0xa0);
        if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar6 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar7 = *(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x18);
    local_34 = 0x80010004;
    FUN_0018aa70(&local_58,&local_34);
    FUN_00199e80(uVar7,lVar5,0,&local_58);
  }
  local_58 = PTR_DAT_04bcc0c0 + 0x10;
  local_48 = 0;
  puStack_40 = &DAT_0407ebb1;
  puStack_50 = PTR_LAB_04bcccf0;
  FUN_0019a704(param_1,&local_58);
  return;
}

