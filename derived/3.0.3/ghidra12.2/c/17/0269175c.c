
void FUN_0269175c(long param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  ulong local_28;
  long local_8;
  
  pcVar1 = (char *)(param_1 + 0x13151);
  local_28 = *(ulong *)(DAT_04da6480 + 0x4060);
  if ((local_28 & 0xffff) != 0) {
    local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_8 = local_8 + 0x2a30;
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
  }
  cVar3 = (char)(local_28 >> 0x20);
  *(char *)(param_1 + 0x13152) = (char)(local_28 >> 0x28);
  cVar2 = cVar3 + '\x18';
  if ('\a' < cVar3) {
    cVar2 = cVar3;
  }
  *pcVar1 = cVar2;
  if ('\x1c' < cVar2) {
    pcVar1[0] = '\x1d';
    pcVar1[1] = '\0';
  }
  *(undefined1 *)(param_1 + 0x13153) = 0;
  return;
}

