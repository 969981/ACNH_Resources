
int FUN_00a82aa0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = *param_2;
  if ((char)(local_20 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
    local_18 = local_18 + -0x15180;
    local_20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  uVar2 = local_20 >> 0x30;
  local_20._0_6_ = CONCAT24(5,(undefined4)local_20);
  local_20 = CONCAT26((short)uVar2,(undefined6)local_20) & 0xff00ffffffffffff;
  local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
  local_18 = local_18 + 0x15180;
  uVar2 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  iVar1 = ((uint)uVar2 & 0xffff) - 0xb;
  return (int)(*(int *)(&BYTE_041680fc + (uVar2 >> 0x10 & 0xff) * 4) + ((uint)uVar2 >> 0x18) +
              iVar1 * 0xb + (iVar1 / 0x13) * -0xd1) % 0x1e;
}

