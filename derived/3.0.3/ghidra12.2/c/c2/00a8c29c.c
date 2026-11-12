
int FUN_00a8c29c(undefined8 param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_28;
  long local_8;
  
  local_28 = FUN_00a8c31c(DAT_04da7238);
  if ((char)(local_28 >> 0x20) < '\x05') {
    local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_8 = local_8 + -0x15180;
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
  }
  uVar3 = local_28 >> 0x10;
  uVar1 = local_28 >> 0x30;
  uVar4 = local_28 >> 0x18;
  local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
  local_28 = CONCAT26((short)uVar1,(undefined6)local_28) & 0xff00ffffffffffff;
  cVar2 = FUN_00a8ae20(param_1,uVar3,uVar4);
  return (int)cVar2;
}

