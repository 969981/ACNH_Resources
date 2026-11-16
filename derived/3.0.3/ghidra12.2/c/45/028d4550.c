
uint FUN_028d4550(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long local_28;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "TkkFirstLive";
  local_58 = puVar1;
  uVar6 = FUN_0273f0a0(&local_58);
  puVar3 = PTR_DAT_04bb32f0;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    local_48 = *param_2;
    uVar7 = *(undefined8 *)PTR_DAT_04bb32f0;
    pcStack_50 = "FirstLive";
    local_58 = puVar1;
    if ((char)(local_48 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = local_28 + -0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar4 = local_48;
    uVar6 = local_48 >> 0x30;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = CONCAT26((short)uVar6,(uint6)local_48) & 0xff00ffffffffffff;
    uVar6 = FUN_00879dd0(uVar7,&local_58,uVar4,uVar4 >> 0x10,uVar4 >> 0x18,0);
    if ((uVar6 & 1) == 0) {
      local_48 = *param_2;
      local_58 = puVar2 + 0x10;
      uVar7 = *(undefined8 *)puVar3;
      pcStack_50 = "BirthdayLive";
      if ((char)(local_48 >> 0x20) < '\x05') {
        local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_28 = local_28 + -0x15180;
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      uVar6 = local_48;
      local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
      local_48._7_1_ = SUB81(uVar6,7);
      local_48._0_7_ = (uint7)(uint6)local_48;
      uVar6 = FUN_00879dd0(uVar7,&local_58,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
      if ((uVar6 & 1) == 0) {
        local_48 = *param_2;
        local_58 = puVar2 + 0x10;
        uVar7 = *(undefined8 *)puVar3;
        pcStack_50 = "NormalLive";
        if ((char)(local_48 >> 0x20) < '\x05') {
          local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          local_28 = local_28 + -0x15180;
          local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
        }
        uVar6 = local_48;
        local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
        local_48._7_1_ = SUB81(uVar6,7);
        local_48._0_7_ = (uint7)(uint6)local_48;
        uVar5 = FUN_00879dd0(uVar7,&local_58,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
        uVar5 = uVar5 & 1;
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 3;
    }
  }
  return uVar5;
}

