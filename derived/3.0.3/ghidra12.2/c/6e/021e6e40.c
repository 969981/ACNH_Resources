
void FUN_021e6e40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [8];
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined *local_60;
  char *pcStack_58;
  undefined1 local_38 [8];
  
  local_38 = *(undefined1 (*) [8])(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)((ulong)local_38 >> 0x20) < '\x05') {
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_38);
    local_60 = (undefined *)(lVar7 + -0x15180);
    local_38 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
  }
  auVar3 = local_38;
  puVar2 = PTR_DAT_04bb2020;
  local_38._4_2_ = 5;
  local_38[7] = auVar3[7];
  local_38[6] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "CalendarEventStop";
  local_60 = puVar1;
  uVar5 = FUN_02743000(&local_60);
  pcStack_58 = "CalendarEventStop";
  local_60 = puVar1;
  FUN_02743234(&local_60,0);
  pcStack_58 = "Fireworks";
  local_60 = puVar1;
  uVar6 = FUN_008841f4(*(undefined8 *)PTR_DAT_04bb32f0,&local_60);
  pcStack_58 = "LastPlayFireWorksFestival";
  local_60 = puVar1;
  sVar4 = FUN_0274ce10(param_1,&local_60);
  if ((uVar6 < 2) && (sVar4 != local_38._0_2_)) {
    pcStack_58 = "PAnnounceFireworksSza1";
    local_60 = puVar2 + 0x10;
    FUN_0274d104(param_1,&local_60,0);
    pcStack_58 = "LastPlayFireWorksFestival";
    local_60 = puVar2 + 0x10;
    FUN_0274d104(param_1,&local_60,(long)(short)local_38._0_2_);
  }
  pcStack_58 = "CalendarEventStop";
  local_60 = puVar1;
  FUN_02743234(&local_60,uVar5);
  return;
}

