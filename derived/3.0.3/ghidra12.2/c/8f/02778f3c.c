
byte FUN_02778f3c(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_28;
  long local_8;
  
  local_28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_28 >> 0x20) < '\x05') {
    local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_8 = local_8 + -0x15180;
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
  }
  uVar3 = local_28 >> 0x30;
  local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
  local_28 = CONCAT26((short)uVar3,(undefined6)local_28) & 0xff00ffffffffffff;
  uVar3 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_28,1,1);
  bVar1 = 0;
  if ((uVar3 & 1) == 0) {
    uVar2 = nn::time::GetDayOfWeek((int)(short)local_28,(int)local_28._2_1_,(int)local_28._3_1_);
    uVar3 = (ulong)uVar2;
    if (6 < uVar2) {
      uVar3 = 0;
    }
    bVar1 = *(byte *)(param_1 + 0x179d1) >> (ulong)((&DAT_0417ba0c)[uVar3] & 0x1f) & 1;
  }
  return bVar1;
}

