
bool FUN_01a190c0(void)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_28;
  long local_8;
  
  lVar2 = DAT_04da7238;
  if (DAT_04da7238 == 0) {
    bVar3 = false;
  }
  else {
    local_28 = FUN_00a8c31c(DAT_04da7238);
    if ((char)(local_28 >> 0x20) < '\x05') {
      local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = local_8 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    }
    uVar5 = local_28 >> 0x10;
    uVar1 = local_28 >> 0x30;
    uVar6 = local_28 >> 0x18;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar1,(undefined6)local_28) & 0xff00ffffffffffff;
    cVar4 = FUN_00a8ae20(lVar2,uVar5,uVar6,8);
    bVar3 = (byte)(cVar4 - 1U) < 3;
  }
  return bVar3;
}

