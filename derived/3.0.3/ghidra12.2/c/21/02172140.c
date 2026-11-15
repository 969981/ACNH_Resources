
bool FUN_02172140(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  uint uVar5;
  short local_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_18;
  
  psVar4 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar4 == 0) {
    local_38 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    psVar4 = (short *)&local_38;
    uVar1 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar1,(undefined6)local_38) & 0xff00ffffffffffff;
  }
  local_18 = *(long *)psVar4;
  local_38._4_4_ = (undefined4)((ulong)local_18 >> 0x20);
  local_38._0_2_ = (short)local_18;
  local_38._0_4_ = CONCAT22(0x1303,(short)local_38);
  _local_40 = CONCAT44(local_38._4_4_,CONCAT22(0x130a,(short)local_38));
  lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
  lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
  if (lVar3 < lVar2) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    uVar5 = (uint)(lVar3 != lVar2);
  }
  lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
  lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  if (lVar2 <= lVar3) {
    nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  }
  return ((int)uVar5 < 0 && lVar2 <= lVar3) != (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1);
}

