
void FUN_022590d0(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  short *psVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar7 = *(long *)PTR_DAT_04bb32e8;
  psVar6 = (short *)(lVar7 + 0x4068);
  if (*(short *)(lVar7 + 0x4070) == 0) {
    if (*psVar6 == 0) {
      local_38 = *(undefined8 *)(lVar7 + 0x4060);
      if ((char)(local_38 >> 0x20) < '\x05') {
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_50 = (undefined *)(lVar7 + -0x15180);
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
      }
      uVar4 = local_38 >> 0x30;
      local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
      local_38 = CONCAT26((short)uVar4,(undefined6)local_38) & 0xff00ffffffffffff;
      psVar6 = (short *)&local_38;
    }
    local_40 = *(undefined8 *)psVar6;
  }
  else {
    local_40 = *(undefined8 *)(lVar7 + 0x4070);
  }
  local_38 = local_40;
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  local_50 = (undefined *)(lVar7 + 0x15180);
  local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
  puVar2 = PTR_DAT_04bb32f0;
  uVar4 = FUN_00883750(*(undefined8 *)PTR_DAT_04bb32f0,&local_40);
  uVar5 = FUN_00883750(*(undefined8 *)puVar2,&local_38);
  lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
  local_50 = (undefined *)(lVar7 + -0x15180);
  local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
  uVar3 = FUN_00883750(*(undefined8 *)puVar2,&local_38);
  uVar1 = 2;
  if ((uVar5 & 1) == 0) {
    uVar1 = uVar3 & 1;
  }
  uVar3 = 3;
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar1;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "MoonKKFesUnlockRestDays";
  FUN_02758bb8(&local_50,uVar3);
  return;
}

