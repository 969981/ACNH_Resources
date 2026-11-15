
void FUN_022036d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [8];
  short sVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_90;
  char *pcStack_88;
  undefined1 local_80 [8];
  undefined1 local_78 [3];
  char cStack_75;
  undefined2 uStack_74;
  undefined1 uStack_71;
  undefined *local_70;
  char *pcStack_68;
  
  puVar4 = PTR_DAT_04bb32e8;
  local_80 = *(undefined1 (*) [8])(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)((ulong)local_80 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_80);
    local_70 = (undefined *)(lVar9 + -0x15180);
    local_80 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  }
  auVar6 = local_80;
  puVar3 = PTR_DAT_04bb2020;
  local_80._4_2_ = 5;
  local_80[7] = auVar6[7];
  local_80[6] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "CalendarEventStop";
  local_70 = puVar1;
  uVar8 = FUN_02743000(&local_70);
  pcStack_68 = "CalendarEventStop";
  local_70 = puVar1;
  FUN_02743234(&local_70,0);
  pcStack_88 = "LastPlayJuneBrideYear";
  local_90 = puVar1;
  sVar7 = FUN_0274ce10(param_1,&local_90);
  puVar1 = PTR_DAT_04bb32f0;
  if (sVar7 < (short)local_80._0_2_) {
    _local_78 = *(undefined8 *)(*(long *)puVar4 + 0x4060);
    if ((char)((ulong)_local_78 >> 0x20) < '\x05') {
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_78);
      local_70 = (undefined *)(lVar9 + -0x15180);
      _local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
    }
    uVar5 = _local_78;
    local_70 = puVar3 + 0x10;
    uStack_71 = SUB81(uVar5,7);
    _local_78 = (uint7)CONCAT24(5,_local_78);
    pcStack_68 = "JuneBride";
    uVar10 = FUN_0087c200(*(undefined8 *)puVar1,&local_70,local_78,1);
    if (((uVar10 & 1) != 0) || ((local_78[2] == '\a' && (cStack_75 < '\b')))) {
      puVar2 = puVar3 + 0x10;
      pcStack_68 = "AlwJuneBrideDayCount";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "SpnJuneBrideTalkEventFrag";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "IsSelectedJuneBrideCuteThisYear";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "IsSelectedJuneBrideChicThisYear";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "IsSelectedJuneBrideGardenThisYear";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "AlwJuneBrideTotalClearCount";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "SpnJuneBrideGetFenceFrag";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "PAnnounceJuneBride";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "StandByPhoneCallJuneBrideSpn";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "AlpJuneBrideGetStickFrag";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "AlwJuneBrideExchangeTalkFlag";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "SpnJuneBrideClearTalkFrag";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
      pcStack_68 = "JuneBrideBGMHasUnlocked";
      local_70 = puVar2;
      FUN_0274d104(param_1,&local_70,0);
    }
  }
  local_90 = *(undefined **)(*(long *)puVar4 + 0x4060);
  if ((char)((ulong)local_90 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    local_70 = (undefined *)(lVar9 + -0x15180);
    local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  }
  uVar5 = local_90;
  local_70 = puVar3 + 0x10;
  local_90._7_1_ = SUB81(uVar5,7);
  local_90._0_7_ = (uint7)CONCAT24(5,(undefined4)local_90);
  pcStack_68 = "JuneBride";
  uVar10 = FUN_0087c200(*(undefined8 *)puVar1,&local_70,&local_90,1);
  if (((uVar10 & 1) != 0) || ((local_90._2_1_ == '\a' && (local_90._3_1_ < '\b')))) {
    local_70 = puVar3 + 0x10;
    pcStack_68 = "LastPlayJuneBrideYear";
    FUN_0274d104(param_1,&local_70,(long)(short)local_80._0_2_);
  }
  local_70 = puVar3 + 0x10;
  pcStack_68 = "CalendarEventStop";
  FUN_02743234(&local_70,uVar8);
  return;
}

