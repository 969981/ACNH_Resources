
void FUN_02209d10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_68 >> 0x20) < '\x05') {
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_78 = (undefined *)(lVar5 + -0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  }
  uVar7 = local_68;
  puVar2 = PTR_DAT_04bb2020;
  local_68._7_1_ = SUB81(uVar7,7);
  local_68._0_7_ = (uint7)CONCAT24(5,(undefined4)local_68);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "CalendarEventStop";
  local_78 = puVar1;
  uVar4 = FUN_02743000(&local_78);
  pcStack_70 = "CalendarEventStop";
  local_78 = puVar1;
  FUN_02743234(&local_78,0);
  pcStack_70 = "LastPlayMuseumYear";
  local_78 = puVar1;
  sVar3 = FUN_0274ce10(param_1,&local_78);
  if ((short)local_68 != sVar3) {
    local_60 = local_68;
    uVar7 = *(undefined8 *)PTR_DAT_04bb32f0;
    pcStack_80 = "InternationalMuseum";
    local_88 = puVar1;
    if ((char)(local_68 >> 0x20) < '\x05') {
      local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_58 = local_58 + -0x15180;
      local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
    }
    uVar6 = local_60;
    local_60._7_1_ = SUB81(uVar6,7);
    local_60._0_7_ = (uint7)CONCAT24(5,(undefined4)local_60);
    uVar6 = FUN_00879dd0(uVar7,&local_88,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
    if ((uVar6 & 1) != 0) {
      puVar1 = puVar2 + 0x10;
      pcStack_70 = "PAnnounceStampRally";
      local_78 = puVar1;
      FUN_0274d104(param_1,&local_78,0);
      pcStack_70 = "OwlStampPlayed";
      local_78 = puVar1;
      FUN_0274d104(param_1,&local_78,0);
      pcStack_70 = "OwlStampPlayedThisYear";
      local_78 = puVar1;
      FUN_0274d104(param_1,&local_78,0);
      pcStack_70 = "OwlStampPlayedThisYear2";
      local_78 = puVar1;
      FUN_0274d104(param_1,&local_78,0);
      pcStack_70 = "OwlStampPlayedThisYear3";
      local_78 = puVar1;
      FUN_0274d104(param_1,&local_78,0);
      pcStack_70 = "OwlStampPlayedThisYear4";
      local_78 = puVar1;
      FUN_0274d104(param_1,&local_78,0);
      pcStack_70 = "LastPlayMuseumYear";
      local_78 = puVar1;
      FUN_0274d104(param_1,&local_78,(long)(short)local_68);
    }
  }
  local_78 = puVar2 + 0x10;
  pcStack_70 = "CalendarEventStop";
  FUN_02743234(&local_78,uVar4);
  return;
}

