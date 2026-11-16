
bool FUN_02917058(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int local_24;
  int local_8 [2];
  
  local_8[0] = 0;
  local_24 = 0;
  if ((long)(short)DAT_04c487d4 != 0xffffffffffffffff) {
    local_8[1] = 7;
    puVar1 = &DAT_055c11c8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 2;
    if (0xff < DAT_04c487d4) {
      puVar1 = &DAT_055c11c8;
    }
    if (((*puVar1 >> 7 & 1) != 0) && (uVar3 = FUN_02b67a30(local_8,param_1), (uVar3 & 1) != 0)) {
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
      uVar3 = FUN_02b64e40(&local_24,*(undefined4 *)(puVar4 + 7));
      if ((uVar3 & 1) != 0) {
        return local_8[0] == local_24;
      }
    }
  }
  return false;
}

