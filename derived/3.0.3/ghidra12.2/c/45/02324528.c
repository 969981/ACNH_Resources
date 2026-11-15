
undefined8 FUN_02324528(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  undefined4 local_1a8 [2];
  char *local_1a0;
  int local_198;
  char *local_148;
  int local_140;
  char *local_f0;
  int local_e8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_84;
  undefined4 local_80;
  int local_54;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "WHEREAREN_Unlock_AccentWall";
  pcStack_48 = "HasLookMyHouseExplain_CeilingFtrAWall";
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  local_40 = local_50;
  iVar5 = FUN_0274bce0(pbVar1,&local_40);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = FUN_0274bce0(pbVar1,&local_50);
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  if (*pbVar1 < 8) {
    if (uVar3 == 0xffff) {
      return 0;
    }
    local_1a8[0] = 6;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_02915598(pbVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (uVar3 == 0xffff) {
      return 0;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
    if (0xff < uVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 6 & 1) == 0) {
      return 0;
    }
  }
  sVar4 = *(short *)PTR_DAT_04bbdeb0;
  if (sVar4 != -1) {
    local_1a8[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 1 & 1) != 0) && (local_54 = FUN_0266c940(pbVar1), 1 < local_54)) {
      FUN_0257a010(local_1a8);
      if (local_f0 != "PlayerWait") {
        iVar5 = 10;
        if (local_e8 < 0xb) {
          iVar5 = local_e8 + -1;
        }
        memcpy(local_f0,"PlayerWait",(long)iVar5);
        local_f0[iVar5] = '\0';
      }
      if (local_1a0 != "System_CmnDialog") {
        iVar5 = 0x10;
        if (local_198 < 0x11) {
          iVar5 = local_198 + -1;
        }
        memcpy(local_1a0,"System_CmnDialog",(long)iVar5);
        local_1a0[iVar5] = '\0';
      }
      if (local_148 != "TipsAccentWall") {
        iVar5 = 0xe;
        if (local_140 < 0xf) {
          iVar5 = local_140 + -1;
        }
        memcpy(local_148,"TipsAccentWall",(long)iVar5);
        local_148[iVar5] = '\0';
      }
      local_a0 = 0;
      local_9c = *(undefined4 *)PTR_DAT_04bb3238;
      local_84 = *(undefined4 *)PTR_DAT_04bb37e0;
      local_80 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      FUN_024480f0(param_1,local_1a8);
      return 1;
    }
  }
  return 0;
}

