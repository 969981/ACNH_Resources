
bool FUN_02847f10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong local_28;
  
  if (*(char *)(param_1 + 0x2f) != '\x02') {
    return false;
  }
  local_28 = *(ulong *)(param_1 + 0x24);
  if ((local_28 & 0xffff) != 0) {
    lVar3 = *(long *)PTR_DAT_04bb32e8;
    lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar3 + 0x4060));
    if (lVar1 <= lVar2) {
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar3 + 0x4060));
      return lVar2 != lVar1;
    }
  }
  return false;
}

