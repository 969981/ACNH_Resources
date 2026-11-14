
void FUN_015547f0(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *local_40;
  undefined8 uStack_38;
  undefined4 local_14;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
      if (DAT_05292338 != 0) {
        local_40 = (undefined *)CONCAT44(local_40._4_4_,6);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 6 & 1) != 0) {
          if (DAT_05aed670 == 0) {
            puVar6 = &DAT_055c04a0;
          }
          else {
            puVar6 = &DAT_055c04a0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              puVar6 = (undefined8 *)
                       (**(code **)(*DAT_05aed668 + 0x18))
                                 (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar3 = FUN_006bd550(*puVar6,0);
              puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar3 != 0x758f7eaf) {
                puVar6 = &DAT_055c04a0;
              }
            }
          }
          local_14 = 0;
          uVar5 = FUN_02b5f400(&local_14,*(undefined4 *)(puVar6 + 7));
          uVar2 = local_14;
          if ((uVar5 & 1) != 0) {
            uVar4 = FUN_0180da90();
            local_40 = PTR_DAT_04bb2010 + 0x10;
            uStack_38 = 0xffffffffffffffff;
            FUN_01554fe0(param_1,uVar2,uVar4,param_2,&local_40);
          }
        }
      }
    }
    else {
      local_40 = PTR_DAT_04bb2010 + 0x10;
      uStack_38 = 0xffffffffffffffff;
      FUN_01554b20(param_1,param_2,&local_40);
    }
  }
  return;
}

