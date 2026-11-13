
bool FUN_01223640(void)

{
  uint uVar1;
  bool bVar2;
  short *psVar3;
  undefined8 local_20;
  long local_18;
  
  psVar3 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar3 == 0) {
    local_20 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_20 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
      local_18 = local_18 + -0x15180;
      nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    psVar3 = (short *)&local_20;
  }
  uVar1 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  if (uVar1 == 1) {
    bVar2 = (char)psVar3[1] == '\x05';
  }
  else {
    if (uVar1 != 0) {
      return false;
    }
    bVar2 = (char)psVar3[1] == '\v';
  }
  return bVar2;
}

