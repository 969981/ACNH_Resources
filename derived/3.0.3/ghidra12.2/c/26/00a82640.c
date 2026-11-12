
void FUN_00a82640(long param_1,char param_2,char param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  CalendarTime *pCVar3;
  undefined8 uVar4;
  ulong local_48;
  undefined8 local_28;
  
  local_48 = *(ulong *)(param_1 + 0x4068);
  if ((local_48 & 0xffff) == 0) {
    *(ulong *)(param_1 + 0x4060) = local_48;
  }
  else {
    lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    local_28 = lVar1 + (long)(int)param_2 * 0xe10 + (long)(int)param_3 * 0x3c + (long)param_4 +
               -18000;
    local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    *(ulong *)(param_1 + 0x4060) = local_48;
    if (((local_48 & 0xffff) != 0) &&
       (uVar2 = nn::time::IsValidDate
                          ((int)(short)local_48,((int)local_48 << 8) >> 0x18,(int)local_48 >> 0x18),
       (uVar2 & 1) != 0)) {
      pCVar3 = (CalendarTime *)(param_1 + 0x4060);
      goto LAB_00a82704;
    }
  }
  uVar2 = (ulong)local_28 >> 0x30;
  pCVar3 = (CalendarTime *)&local_28;
  local_28 = CONCAT26((ushort)uVar2 & 0xff00,0x10107d0);
LAB_00a82704:
  lVar1 = nn::time::ToPosixTimeFromUtc(pCVar3);
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined8 *)(param_1 + 0x4068) = *(undefined8 *)(param_1 + 0x4060);
  *(long *)(param_1 + 0x30) =
       (lVar1 - *(long *)(param_1 + 8)) * 1000000000 -
       (*(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28));
  if ((char)((ulong)*(undefined8 *)(param_1 + 0x4060) >> 0x20) < '\x05') {
    lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x4068));
    local_28 = lVar1 + -0x15180;
    uVar4 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    *(undefined8 *)(param_1 + 0x4068) = uVar4;
  }
  *(undefined1 *)(param_1 + 0x406e) = 0;
  *(undefined2 *)(param_1 + 0x406c) = 5;
  return;
}

