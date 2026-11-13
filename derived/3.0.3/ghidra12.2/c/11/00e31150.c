
uint FUN_00e31150(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bb2020;
  uVar5 = *param_2;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  uVar6 = uVar5 >> 0x10;
  uVar7 = uVar5 >> 0x18;
  pcStack_50 = "Carnival";
  local_28 = uVar5;
  if ((param_3 & 1) != 0) {
    if ((char)(uVar5 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_68 = (undefined *)(lVar4 + -0x15180);
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      uVar5 = local_28 & 0xffffffff;
      uVar6 = local_28 >> 0x10;
      uVar7 = local_28 >> 0x18;
    }
    uVar1 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar1,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  uVar5 = FUN_00879dd0(param_1,&local_58,uVar5,uVar6,uVar7,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = *param_2;
    local_68 = puVar2 + 0x10;
    uVar6 = uVar5 >> 0x10;
    uVar7 = uVar5 >> 0x18;
    pcStack_60 = "Carnival";
    local_48 = uVar5;
    if ((param_3 & 1) != 0) {
      if ((char)(uVar5 >> 0x20) < '\x05') {
        lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_28 = lVar4 - 0x15180;
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
        uVar5 = local_48 & 0xffffffff;
        uVar6 = local_48 >> 0x10;
        uVar7 = local_48 >> 0x18;
      }
      uVar1 = local_48 >> 0x30;
      local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
      local_48 = CONCAT26((short)uVar1,(undefined6)local_48) & 0xff00ffffffffffff;
    }
    uVar3 = FUN_0087a8f0(param_1,&local_68,uVar5,uVar6,uVar7,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3 & 1;
}

