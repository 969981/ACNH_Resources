
void FUN_02205b50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_98 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_98 >> 0x20) < '\x05') {
    lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
    local_80 = (undefined *)(lVar6 + -0x15180);
    local_98 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
  }
  uVar8 = local_98;
  puVar2 = PTR_DAT_04bb2020;
  local_98._7_1_ = SUB81(uVar8,7);
  local_98._0_7_ = (uint7)CONCAT24(5,(undefined4)local_98);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "CalendarEventStop";
  local_80 = puVar1;
  uVar4 = FUN_02743000(&local_80);
  pcStack_78 = "CalendarEventStop";
  local_80 = puVar1;
  FUN_02743234(&local_80,0);
  pcStack_a0 = "LastPlayHalloweenYear";
  local_a8 = puVar1;
  sVar3 = FUN_0274ce10(param_1,&local_a8);
  if ((short)local_98 != sVar3) {
    local_68 = local_98;
    uVar8 = *(undefined8 *)PTR_DAT_04bb32f0;
    pcStack_78 = "Halloween";
    local_80 = puVar1;
    if ((char)(local_98 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_90 = (undefined *)(lVar6 + -0x15180);
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
    }
    uVar7 = local_68;
    local_68._7_1_ = SUB81(uVar7,7);
    local_68._0_7_ = (uint7)CONCAT24(5,(undefined4)local_68);
    uVar7 = FUN_00879dd0(uVar8,&local_80,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
    if ((uVar7 & 1) == 0) {
      local_90 = puVar2 + 0x10;
      local_70 = local_98;
      pcStack_88 = "Halloween";
      if ((char)(local_98 >> 0x20) < '\x05') {
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = lVar6 + -0x15180;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar7 = local_70;
      local_70._7_1_ = SUB81(uVar7,7);
      local_70._0_7_ = (uint7)CONCAT24(5,(undefined4)local_70);
      uVar7 = FUN_0087a8f0(uVar8,&local_90,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
      if ((uVar7 & 1) == 0) goto LAB_02205db0;
    }
    puVar1 = puVar2 + 0x10;
    pcStack_78 = "RcmExplainCandyFlag";
    local_80 = puVar1;
    FUN_0274d104(param_1,&local_80,0);
    pcStack_78 = "RcmExplainPumpkinFlag";
    local_80 = puVar1;
    FUN_0274d104(param_1,&local_80,0);
    pcStack_78 = "ExplainPumpkinColorFlag";
    local_80 = puVar1;
    FUN_0274d104(param_1,&local_80,0);
    pcStack_78 = "SloExplainPumpkinSeedingFlag";
    local_80 = puVar1;
    FUN_0274d104(param_1,&local_80,0);
    pcStack_78 = "PknSendLetterFlag";
    local_80 = puVar1;
    FUN_0274d104(param_1,&local_80,0);
    pcStack_78 = "PAnnounceHalloween";
    local_80 = puVar1;
    FUN_0274d104(param_1,&local_80,0);
    pcStack_78 = "LastPlayHalloweenYear";
    local_80 = puVar1;
    FUN_0274d104(param_1,&local_80,(long)(short)local_98);
  }
LAB_02205db0:
  puVar2 = puVar2 + 0x10;
  pcStack_78 = "PAnnounceHalloween";
  local_80 = puVar2;
  iVar5 = FUN_0274ce10(param_1,&local_80);
  if (iVar5 != 0) {
    pcStack_78 = "AnnounceHalloween2Ready";
    local_80 = puVar2;
    FUN_0274d104(param_1,&local_80,1);
  }
  pcStack_78 = "CalendarEventStop";
  local_80 = puVar2;
  FUN_02743234(&local_80,uVar4);
  return;
}

