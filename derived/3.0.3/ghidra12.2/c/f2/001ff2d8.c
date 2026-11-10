
void FUN_001ff2d8(long *param_1,short param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  local_50[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_40 = local_50;
  uStack_38 = 0x10;
  local_58 = puVar1;
  FUN_0018b070(&local_58,"<unknown>",0xffffffffffffffff);
  FUN_001991dc(param_1,&local_58);
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar1 = PTR_DAT_04bcca90 + 0x10;
  param_1[0x11] = 0;
  *param_1 = (long)puVar1;
  if (param_2 != 0) {
    *(short *)(param_1 + 9) = param_2;
    puVar1 = PTR_DAT_04bcb900;
    plVar6 = (long *)(PTR_DAT_04bcb900 + 0x70);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        lVar2 = **(long **)(puVar1 + 0xa0);
        if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar6 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x68);
      }
    }
    lVar2 = param_1[9];
    uVar7 = *(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x10);
    uVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
    FUN_00210960(uVar7,(short)lVar2,uVar5);
  }
  return;
}

