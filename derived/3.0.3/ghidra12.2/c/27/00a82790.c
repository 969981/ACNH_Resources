
undefined8 FUN_00a82790(long param_1)

{
  ulong uVar1;
  short *psVar2;
  undefined8 local_20;
  long local_18;
  
  psVar2 = (short *)(param_1 + 0x4068);
  if (*(short *)(param_1 + 0x4068) == 0) {
    local_20 = *(undefined8 *)(param_1 + 0x4060);
    if ((char)(local_20 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
      local_18 = local_18 + -0x15180;
      local_20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar1 = local_20 >> 0x30;
    local_20._0_6_ = CONCAT24(5,(undefined4)local_20);
    local_20 = CONCAT26((short)uVar1,(undefined6)local_20) & 0xff00ffffffffffff;
    psVar2 = (short *)&local_20;
  }
  return *(undefined8 *)psVar2;
}

