
bool FUN_02691650(long param_1)

{
  char *pcVar1;
  CalendarTime *pCVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 local_30;
  long local_28;
  
  pcVar1 = (char *)(param_1 + 0x13151);
  cVar6 = *pcVar1;
  if ((cVar6 < '\0') || (*(char *)(param_1 + 0x13152) < '\0')) {
    bVar7 = true;
  }
  else {
    local_30 = *(undefined8 *)(DAT_04da6480 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      cVar6 = *pcVar1;
    }
    uVar3 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar3,(undefined6)local_30) & 0xff00ffffffffffff;
    if ('\x17' < cVar6) {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + 0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      cVar6 = *pcVar1 + -0x18;
    }
    uVar3 = local_30;
    local_30._0_6_ =
         CONCAT15(*(undefined1 *)(param_1 + 0x13152),CONCAT14(cVar6,(undefined4)local_30));
    local_30 = CONCAT26((short)(uVar3 >> 0x30),(undefined6)local_30) & 0xff00ffffffffffff;
    pCVar2 = (CalendarTime *)(DAT_04da6480 + 0x4060);
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    lVar5 = nn::time::ToPosixTimeFromUtc(pCVar2);
    bVar7 = lVar4 <= lVar5;
    if (lVar4 <= lVar5) {
      nn::time::ToPosixTimeFromUtc(pCVar2);
    }
  }
  return bVar7;
}

