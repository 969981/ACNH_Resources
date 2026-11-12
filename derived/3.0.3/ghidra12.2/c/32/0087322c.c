
uint FUN_0087322c(undefined8 param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_30;
  long local_28;
  
  uVar3 = *param_3;
  uVar4 = uVar3 >> 0x10;
  uVar5 = uVar3 >> 0x18;
  local_30 = uVar3;
  if ((param_4 & 1) != 0) {
    if ((char)(uVar3 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      uVar3 = local_30 & 0xffffffff;
      uVar4 = local_30 >> 0x10;
      uVar5 = local_30 >> 0x18;
    }
    uVar1 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
  }
  uVar2 = FUN_00879dd0(param_1,param_2,uVar3,uVar4,uVar5,0);
  return uVar2 & 1;
}

