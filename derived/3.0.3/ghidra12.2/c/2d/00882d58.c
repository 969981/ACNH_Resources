
uint FUN_00882d58(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_20;
  long local_18;
  
  local_20 = *param_2;
  if ((char)(local_20 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
    local_18 = local_18 + -0x15180;
    param_1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    local_20 = param_1;
  }
  uVar2 = local_20;
  uVar4 = local_20 >> 0x10;
  uVar1 = local_20 >> 0x30;
  local_20._0_6_ = CONCAT24(5,(undefined4)local_20);
  local_20 = CONCAT26((short)uVar1,(undefined6)local_20) & 0xff00ffffffffffff;
  uVar3 = FUN_0087312c(param_1,uVar2,uVar4,uVar2 >> 0x18);
  return uVar3 & 1;
}

