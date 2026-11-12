
void FUN_008a3cc4(long param_1)

{
  CalendarTime *pCVar1;
  ushort uVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  puVar4 = PTR_DAT_04bb32e8;
  if (*(char *)(param_1 + 0x1d) != '\0') {
    local_40 = *(ulong *)(param_1 + 0x29);
    lVar7 = *(long *)PTR_DAT_04bb32e8;
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
    if (lVar6 < lVar5) {
      cVar3 = (char)(*(ushort *)(param_1 + 0x32) / 0x3c);
      *(char *)(param_1 + 0x7c) = cVar3;
      *(char *)(param_1 + 0x7d) = (char)*(ushort *)(param_1 + 0x32) + cVar3 * -0x3c;
      return;
    }
    nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
    local_48 = local_40;
    if ((local_40 & 0xffff) != 0) {
      uVar2 = *(ushort *)(param_1 + 0x32);
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_38 = local_38 + (ulong)uVar2;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    pCVar1 = (CalendarTime *)(*(long *)puVar4 + 0x4060);
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    lVar6 = nn::time::ToPosixTimeFromUtc(pCVar1);
    if (lVar6 < lVar5) {
      lVar5 = FUN_00a8255c(&local_48,*(long *)puVar4 + 0x4060);
      cVar3 = (char)(lVar5 / 0x3c);
      *(char *)(param_1 + 0x7c) = cVar3;
      *(char *)(param_1 + 0x7d) = (char)lVar5 + cVar3 * -0x3c;
      return;
    }
    nn::time::ToPosixTimeFromUtc(pCVar1);
  }
  *(undefined2 *)(param_1 + 0x7c) = 0;
  return;
}

