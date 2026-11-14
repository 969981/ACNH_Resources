
void FUN_0155333c(undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int local_2c;
  int local_28;
  int local_24;
  
  if (DAT_04c487d4 != -1) {
    local_24 = 3;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      FUN_01553660(param_1,1,0xffffffff,0xffffffff,10,10);
      return;
    }
    local_24 = 6;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) != 0) {
      if (DAT_05aed670 == 0) {
        puVar4 = &DAT_055c04a0;
      }
      else {
        puVar4 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar4 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar4,0);
          puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar2 != 0x758f7eaf) {
            puVar4 = &DAT_055c04a0;
          }
        }
      }
      local_2c = 0;
      uVar3 = FUN_02b5f400(&local_2c,*(undefined4 *)(puVar4 + 7));
      iVar2 = local_2c;
      if ((uVar3 & 1) != 0) {
        local_28 = FUN_0180da90();
        local_24 = iVar2;
        FUN_01553660(param_1,local_28 + iVar2 * 6 + 2,iVar2,local_28,3,3);
      }
    }
  }
  return;
}

