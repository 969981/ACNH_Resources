
bool FUN_01810dd0(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int local_8;
  byte local_4 [4];
  
  if ((DAT_05292338 == 0) || (DAT_04c487d4 == -1)) {
    return false;
  }
  local_8 = 6;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((((*puVar1 >> 6 & 1) != 0) && (local_4[0] = *param_1, local_4[0] < 8)) &&
     (iVar2 = FUN_02582fe0(local_4), iVar2 != -1)) {
    local_8 = 0;
    uVar4 = FUN_02b5e950(&local_8,iVar2);
    iVar2 = local_8;
    if ((uVar4 & 1) != 0) {
      local_8 = 0;
      if (DAT_05aed670 == 0) {
        puVar5 = &DAT_055c04a0;
      }
      else {
        puVar5 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar5 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar5,0);
          puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar3 != 0x758f7eaf) {
            puVar5 = &DAT_055c04a0;
          }
        }
      }
      uVar4 = FUN_02b5f400(&local_8,*(undefined4 *)(puVar5 + 7));
      if ((uVar4 & 1) != 0) {
        return iVar2 == local_8;
      }
    }
  }
  return false;
}

