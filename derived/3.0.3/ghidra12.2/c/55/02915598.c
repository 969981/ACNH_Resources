
bool FUN_02915598(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int local_28;
  int local_24;
  int local_8;
  byte local_4 [4];
  
  if ((long)(short)DAT_04c487d4 == 0xffffffffffffffff) {
    return false;
  }
  local_8 = 6;
  puVar1 = &DAT_055c11c8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 2;
  if (0xff < DAT_04c487d4) {
    puVar1 = &DAT_055c11c8;
  }
  if (((*puVar1 >> 6 & 1) != 0) && (local_4[0] = *param_1, local_4[0] < 8)) {
    local_28 = 0;
    iVar2 = FUN_02582fe0(local_4);
    if (iVar2 != -1) {
      local_8 = 0;
      uVar3 = FUN_02b5e950(&local_8,iVar2);
      if ((uVar3 & 1) != 0) {
        local_24 = local_8;
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
        uVar3 = FUN_02b5f400(&local_28,*(undefined4 *)(puVar4 + 7));
        if ((uVar3 & 1) != 0) {
          return local_24 == local_28;
        }
      }
    }
  }
  return false;
}

