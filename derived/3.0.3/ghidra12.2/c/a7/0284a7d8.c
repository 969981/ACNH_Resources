
undefined8 FUN_0284a7d8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_38;
  ulong local_18;
  
  if (*(char *)(param_1 + 0x2e) == '\x02' && *(char *)(param_1 + 0x2f) == '\x02') {
    local_18 = *(ulong *)(param_1 + 0x24);
    if ((local_18 & 0xffff) != 0) {
      lVar4 = *(long *)PTR_DAT_04bb32e8;
      lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar4 + 0x4060));
      if ((lVar1 <= lVar2) &&
         (lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar4 + 0x4060)), lVar2 != lVar1)) {
        return 0;
      }
    }
    local_38 = *(undefined8 *)(param_1 + 0x1c);
    if ((char)(local_38 >> 0x20) < '\x05') {
      lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = lVar1 - 0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar3 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar3,(undefined6)local_38) & 0xff00ffffffffffff;
    lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = lVar1 + 0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    uVar3 = FUN_00a80d84(&local_38,1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

