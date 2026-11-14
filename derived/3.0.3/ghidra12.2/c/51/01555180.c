
void FUN_01555180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (DAT_04c487d4 != -1) {
    local_38 = 3;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      FUN_01554b20(param_1,param_2,param_3);
      return;
    }
    if (DAT_05292338 != 0) {
      local_34 = 6;
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
        local_3c = 0;
        uVar5 = FUN_02b5f400(&local_3c,*(undefined4 *)(puVar6 + 7));
        uVar2 = local_3c;
        if ((uVar5 & 1) != 0) {
          uVar4 = FUN_0180da90();
          FUN_01554fe0(param_1,uVar2,uVar4,param_2,param_3);
        }
      }
    }
  }
  return;
}

