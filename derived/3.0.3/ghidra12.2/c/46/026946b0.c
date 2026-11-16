
undefined8 FUN_026946b0(ulong param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  undefined *local_40;
  char *local_38;
  
  puVar3 = PTR_DAT_04bb2020;
  lVar10 = *(long *)PTR_DAT_04bb32f0;
  if (lVar10 != 0) {
    if ((param_1 & 1) == 0) {
      puVar11 = (ulong *)(param_2 + 0x10);
      local_48 = *puVar11;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      local_38 = "Easter";
      if ((char)(local_48 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_58 = (undefined *)(lVar8 + -0x15180);
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      uVar5 = local_48;
      uVar9 = local_48 >> 0x30;
      local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
      local_48 = CONCAT26((short)uVar9,(uint6)local_48) & 0xff00ffffffffffff;
      uVar9 = FUN_0087a8f0(lVar10,&local_40,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
      if ((uVar9 & 1) != 0) {
        return 0x13;
      }
      local_48 = *puVar11;
      local_40 = puVar3 + 0x10;
      local_38 = "Halloween";
      if ((char)(local_48 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_58 = (undefined *)(lVar8 + -0x15180);
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      uVar9 = local_48;
      local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
      local_48._7_1_ = SUB81(uVar9,7);
      local_48._0_7_ = (uint7)(uint6)local_48;
      uVar9 = FUN_0087a8f0(lVar10,&local_40,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
      if ((uVar9 & 1) != 0) {
        return 0x15;
      }
      local_48 = *puVar11;
      local_40 = puVar3 + 0x10;
      local_38 = "HarvestFestival";
      if ((char)(local_48 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_58 = (undefined *)(lVar8 + -0x15180);
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      uVar9 = local_48;
      local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
      local_48._7_1_ = SUB81(uVar9,7);
      local_48._0_7_ = (uint7)(uint6)local_48;
      uVar9 = FUN_0087a8f0(lVar10,&local_40,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
      if ((uVar9 & 1) != 0) {
        return 0x16;
      }
      local_48 = *puVar11;
      local_40 = puVar3 + 0x10;
      local_38 = "XmasReady1";
      if ((char)(local_48 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_58 = (undefined *)(lVar8 + -0x15180);
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      uVar9 = local_48;
      local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
      local_48._7_1_ = SUB81(uVar9,7);
      local_48._0_7_ = (uint7)(uint6)local_48;
      uVar9 = FUN_00879dd0(lVar10,&local_40,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
      if ((uVar9 & 1) != 0) {
        return 0x18;
      }
      local_50 = "XmasReady2";
      local_58 = puVar3 + 0x10;
      uVar9 = FUN_0087322c(lVar10,&local_58,puVar11,1,1);
      if ((uVar9 & 1) != 0) {
        return 0x18;
      }
      local_38 = "Carnival";
      local_40 = puVar3 + 0x10;
      uVar9 = FUN_0087b568(lVar10,&local_40,puVar11,1,1);
      if ((uVar9 & 1) != 0) {
        return 0x19;
      }
    }
    puVar3 = PTR_DAT_04bb2020;
    lVar8 = *(long *)PTR_DAT_04bb27d0;
    if (((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) || (*(int *)(lVar8 + 0x80) != 1)) {
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 != -1) {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
        if (0xff < (uint)(int)sVar2) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar1 + 4) & 1) != 0) {
          return 0;
        }
      }
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_38 = "TodayGlobalEventId";
      local_40 = puVar1;
      iVar7 = FUN_0273ea30(&local_40);
      if (iVar7 != 0xffff) {
        FUN_00882630(&local_40,lVar10);
        FUN_00887de0(&local_58,lVar10,&local_40);
        local_38 = "Fireworks";
        local_40 = puVar1;
        (**(code **)(local_58 + 0x18))(&local_58);
        (**(code **)(local_58 + 0x18))(&local_58);
        pcVar4 = local_50;
        (**(code **)(local_40 + 0x18))(&local_40);
        if (pcVar4 == local_38) {
          return 0x14;
        }
        uVar9 = 0;
        bVar6 = true;
        do {
          if (local_50[uVar9] != local_38[uVar9]) break;
          if (local_50[uVar9] == '\0') {
            if (bVar6) {
              return 0x14;
            }
            break;
          }
          bVar6 = uVar9 < 0x80000;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x80001);
        (**(code **)(local_58 + 0x18))(&local_58);
        (**(code **)(local_58 + 0x18))(&local_58);
        if (local_50 == "Halloween") {
          return 0x15;
        }
        uVar9 = 0;
        bVar6 = true;
        do {
          if (local_50[uVar9] != "Halloween"[uVar9]) break;
          if (local_50[uVar9] == '\0') {
            if (bVar6) {
              return 0x15;
            }
            break;
          }
          bVar6 = uVar9 < 0x80000;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x80001);
        (**(code **)(local_58 + 0x18))(&local_58);
        (**(code **)(local_58 + 0x18))(&local_58);
        if (local_50 == "HarvestFestival") {
          return 0x16;
        }
        uVar9 = 0;
        bVar6 = true;
        do {
          if (local_50[uVar9] != "HarvestFestival"[uVar9]) break;
          if (local_50[uVar9] == '\0') {
            if (bVar6) {
              return 0x16;
            }
            break;
          }
          bVar6 = uVar9 < 0x80000;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x80001);
        (**(code **)(local_58 + 0x18))(&local_58);
        (**(code **)(local_58 + 0x18))(&local_58);
        if (local_50 == "XmasEve") {
          return 0x18;
        }
        uVar9 = 0;
        bVar6 = true;
        do {
          if (local_50[uVar9] != "XmasEve"[uVar9]) break;
          if (local_50[uVar9] == '\0') {
            if (bVar6) {
              return 0x18;
            }
            break;
          }
          bVar6 = uVar9 < 0x80000;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x80001);
        local_38 = "Carnival";
        local_40 = puVar3 + 0x10;
        uVar9 = FUN_00710cb0(&local_58,&local_40);
        if ((uVar9 & 1) != 0) {
          return 0x19;
        }
        local_38 = "Easter";
        local_40 = puVar3 + 0x10;
        uVar9 = FUN_00710cb0(&local_58,&local_40);
        if ((uVar9 & 1) != 0) {
          return 0x13;
        }
      }
    }
  }
  return 0;
}

