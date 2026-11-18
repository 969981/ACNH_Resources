
bool FUN_033ffc10(byte *param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  undefined *local_30;
  char *pcStack_28;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,0x11);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) != 0) {
      return false;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8 &&
      *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x8fb780d) {
    uVar5 = (uint)sVar2;
    if (uVar5 != 0xffffffff) {
      local_30 = (undefined *)CONCAT44(local_30._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar5 * 8);
      if (0xff < uVar5) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) != 0) {
        return false;
      }
    }
    bVar6 = *param_1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_30 = (undefined *)CONCAT71(local_30._1_7_,bVar6);
    uVar4 = FUN_02669430(&local_30);
    if ((uVar4 & 1) != 0) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "HasLookMyHouseExplain";
      iVar3 = FUN_0274bce0(param_1,&local_30);
      return iVar3 != 0;
    }
  }
  return false;
}

