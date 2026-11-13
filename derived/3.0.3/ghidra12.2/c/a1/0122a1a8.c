
bool FUN_0122a1a8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_38;
  long local_18;
  
  uVar2 = DAT_04da7238;
  local_38 = FUN_00a8c31c(DAT_04da7238);
  if ((char)(local_38 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = local_18 + -0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  uVar5 = local_38 >> 0x10;
  uVar1 = local_38 >> 0x30;
  uVar6 = local_38 >> 0x18;
  local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
  local_38 = CONCAT26((short)uVar1,(uint6)local_38) & 0xff00ffffffffffff;
  cVar4 = FUN_00a8ae20(uVar2,uVar5,uVar6,5);
  uVar2 = DAT_04da7238;
  if (cVar4 == '\x02') {
    bVar3 = true;
  }
  else {
    local_38 = FUN_00a8c31c(DAT_04da7238);
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar1 = local_38;
    uVar5 = local_38 >> 0x10;
    uVar6 = local_38 >> 0x18;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38._7_1_ = SUB81(uVar1,7);
    local_38._0_7_ = (uint7)(uint6)local_38;
    cVar4 = FUN_00a8ae20(uVar2,uVar5,uVar6,4);
    uVar2 = DAT_04da7238;
    if (cVar4 < '\x01') {
      bVar3 = false;
    }
    else {
      local_38 = FUN_00a8c31c(DAT_04da7238);
      if ((char)(local_38 >> 0x20) < '\x05') {
        local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_18 = local_18 + -0x15180;
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
      }
      uVar1 = local_38;
      uVar5 = local_38 >> 0x10;
      uVar6 = local_38 >> 0x18;
      local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
      local_38._7_1_ = SUB81(uVar1,7);
      local_38._0_7_ = (uint7)(uint6)local_38;
      cVar4 = FUN_00a8ae20(uVar2,uVar5,uVar6,4);
      bVar3 = cVar4 != '\x02';
    }
  }
  return bVar3;
}

