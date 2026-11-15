
undefined8 FUN_02324290(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  undefined4 local_198 [2];
  char *local_190;
  int local_188;
  char *local_138;
  int local_130;
  char *local_e0;
  int local_d8;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_74;
  undefined4 local_70;
  int local_44;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "HasLookMyHouseExplain";
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  iVar5 = FUN_0274bce0(pbVar1,&local_40);
  if (iVar5 != 0) {
    return 0;
  }
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  if (*pbVar1 < 8) {
    if (uVar3 == 0xffff) {
      return 0;
    }
    local_198[0] = 6;
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
    local_198[0] = 1;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 1 & 1) != 0) && (local_44 = FUN_0266c940(pbVar1), 1 < local_44)) {
      FUN_0274bfe8(pbVar1,&local_40,1);
      FUN_0257a010(local_198);
      if (local_e0 != "PlayerWait") {
        iVar5 = 10;
        if (local_d8 < 0xb) {
          iVar5 = local_d8 + -1;
        }
        memcpy(local_e0,"PlayerWait",(long)iVar5);
        local_e0[iVar5] = '\0';
      }
      if (local_190 != "System_CmnDialog") {
        iVar5 = 0x10;
        if (local_188 < 0x11) {
          iVar5 = local_188 + -1;
        }
        memcpy(local_190,"System_CmnDialog",(long)iVar5);
        local_190[iVar5] = '\0';
      }
      if (local_138 != "TipsMyHouse") {
        iVar5 = 0xb;
        if (local_130 < 0xc) {
          iVar5 = local_130 + -1;
        }
        memcpy(local_138,"TipsMyHouse",(long)iVar5);
        local_138[iVar5] = '\0';
      }
      local_90 = 0;
      local_8c = *(undefined4 *)PTR_DAT_04bb3238;
      local_74 = *(undefined4 *)PTR_DAT_04bb37e0;
      local_70 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      FUN_024480f0(param_1,local_198);
      return 1;
    }
  }
  return 0;
}

