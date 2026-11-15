
void FUN_022094e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb2020;
  uVar10 = *(ulong *)(param_1 + 0x10);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "CalendarEventStop";
  local_60 = puVar1;
  uVar4 = FUN_02743000(&local_60);
  pcStack_58 = "CalendarEventStop";
  local_60 = puVar1;
  FUN_02743234(&local_60,0);
  pcStack_58 = "LastPlayMayDayYear";
  local_60 = puVar1;
  iVar5 = FUN_0274ce10(param_2,&local_60);
  if (iVar5 == 0) {
LAB_02209570:
    uVar9 = *(undefined8 *)PTR_DAT_04bb32f0;
    local_60 = puVar2 + 0x10;
    pcStack_58 = "MayDay";
    local_38 = uVar10;
    if ((char)(uVar10 >> 0x20) < '\x05') {
      lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_70 = (undefined *)(lVar7 + -0x15180);
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
    }
    uVar3 = local_38;
    uVar8 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar8,(undefined6)local_38) & 0xff00ffffffffffff;
    uVar8 = FUN_00879dd0(uVar9,&local_60,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
    if ((uVar8 & 1) != 0) goto LAB_022096b4;
  }
  else {
    pcStack_68 = "LastPlayMayDayYear";
    local_70 = puVar1;
    uVar6 = FUN_0274ce10(param_2,&local_70);
    if ((uVar6 & 0xffff) == (int)(short)uVar10) goto LAB_02209570;
  }
  puVar1 = puVar2 + 0x10;
  pcStack_58 = "GetMayDayTicket";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,0);
  pcStack_58 = "DodHeardAboutMayDayTravelTicket";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,0);
  pcStack_58 = "UseMayDayTicket";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,0);
  pcStack_58 = "ClearMayDayTour";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,0);
  pcStack_58 = "CompleteEventMayDay";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,0);
  pcStack_58 = "PAnnounceMayDayTour";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,0);
  pcStack_58 = "RcoHeardAboutMayDayTravelTicket";
  local_60 = puVar1;
  FUN_0274d104(param_2,&local_60,0);
LAB_022096b4:
  pcStack_58 = "LastPlayMayDayYear";
  local_60 = puVar2 + 0x10;
  FUN_0274d104(param_2,&local_60,(int)(short)uVar10);
  pcStack_58 = "CalendarEventStop";
  local_60 = puVar2 + 0x10;
  FUN_02743234(&local_60,uVar4);
  return;
}

