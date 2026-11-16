
void FUN_02847d38(long param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  local_30 = *(ulong *)(param_1 + 0x1c);
  cVar1 = (char)(local_30 >> 0x20);
  switch(*(undefined1 *)(param_1 + 0x30)) {
  default:
    local_30 = CONCAT26((short)(local_30 >> 0x30),0x1010000);
    goto LAB_02847ea0;
  case 1:
    if (cVar1 < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar2 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(uint)local_30);
    local_30 = CONCAT26((short)uVar2,(uint6)local_30) & 0xff00ffffffffffff;
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = local_28 + 0x15180;
    break;
  case 2:
    if (cVar1 < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar2 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(uint)local_30);
    local_30 = CONCAT26((short)uVar2,(uint6)local_30) & 0xff00ffffffffffff;
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = local_28 + 0x2a300;
    break;
  case 3:
    if (cVar1 < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar2 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(uint)local_30);
    local_30 = CONCAT26((short)uVar2,(uint6)local_30) & 0xff00ffffffffffff;
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = local_28 + 0x3f480;
    break;
  case 4:
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = local_28 + 0x15180;
    uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    local_30._6_2_ = (undefined2)((ulong)uVar3 >> 0x30);
    local_30._0_4_ = (uint)uVar3;
    local_30._0_6_ = (uint6)(uint)local_30;
LAB_02847ea0:
    local_30._0_7_ = (uint7)(uint6)local_30;
    goto LAB_02847ea4;
  case 5:
    if ((local_30 & 0xffff) == 0) goto LAB_02847ea4;
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    if (param_2 != 0) {
      local_28 = local_28 + ((long)param_2 * 60000000000) / 1000000000;
    }
  }
  local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
LAB_02847ea4:
  *(ulong *)(param_1 + 0x24) = local_30;
  return;
}

