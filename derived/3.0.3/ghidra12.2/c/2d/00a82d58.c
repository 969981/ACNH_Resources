
bool FUN_00a82d58(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined8 local_68;
  long local_48;
  
  local_70 = *param_1;
  local_68 = local_70;
  if ((char)((ulong)local_70 >> 0x20) < '\x05') {
    local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_48 = local_48 + -0x15180;
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  }
  uVar5 = local_68 >> 0x30;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68 = CONCAT26((short)uVar5,(uint6)local_68) & 0xff00ffffffffffff;
  local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
  local_48 = local_48 + 0x15180;
  uVar5 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  iVar1 = ((uint)uVar5 & 0xffff) - 0xb;
  iVar1 = (int)(*(int *)(&BYTE_041680fc + (uVar5 >> 0x10 & 0xff) * 4) + ((uint)uVar5 >> 0x18) +
               iVar1 * 0xb + (iVar1 / 0x13) * -0xd1) % 0x1e;
  local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
  local_48 = local_48 + -0x15180;
  local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  local_68 = local_70;
  if ((char)((ulong)local_70 >> 0x20) < '\x05') {
    local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_48 = local_48 + -0x15180;
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  }
  uVar3 = local_68;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68._7_1_ = SUB81(uVar3,7);
  local_68._0_7_ = (uint7)(uint6)local_68;
  local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
  local_48 = local_48 + 0x15180;
  uVar5 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  if (iVar1 == 0xf) {
    bVar4 = true;
  }
  else {
    iVar2 = ((uint)uVar5 & 0xffff) - 0xb;
    bVar4 = iVar1 == 0x10 &&
            (int)(*(int *)(&BYTE_041680fc + (uVar5 >> 0x10 & 0xff) * 4) + ((uint)uVar5 >> 0x18) +
                 iVar2 * 0xb + (iVar2 / 0x13) * -0xd1) % 0x1e == 0xe;
  }
  return bVar4;
}

