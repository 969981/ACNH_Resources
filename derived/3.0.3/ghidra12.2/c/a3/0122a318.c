
bool FUN_0122a318(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  short *psVar5;
  undefined8 local_20;
  long local_18;
  
  psVar5 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar5 == 0) {
    local_20 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_20 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
      local_18 = local_18 + -0x15180;
      local_20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar3 = local_20 >> 0x30;
    local_20._0_6_ = CONCAT24(5,(undefined4)local_20);
    local_20 = CONCAT26((short)uVar3,(undefined6)local_20) & 0xff00ffffffffffff;
    psVar5 = (short *)&local_20;
  }
  uVar2 = (uint)*(undefined8 *)psVar5 >> 0x10 & 0xff;
  iVar1 = (int)(uint)*(undefined8 *)psVar5 >> 0x18;
  if (uVar2 == 1) {
    bVar4 = iVar1 < 7;
  }
  else if (uVar2 == 0xc) {
    bVar4 = 0xe < iVar1;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

