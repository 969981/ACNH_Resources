
bool FUN_0087cc70(undefined8 param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  local_58 = *param_2;
  if ((param_3 & 1) == 0) {
    do {
      bVar1 = local_58._2_1_ == '\v';
      if (!bVar1) {
        return bVar1;
      }
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_68 = (undefined **)(lVar2 + -0x15180);
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      local_60 = "HarvestFestival";
      local_68 = &PTR_LAB_048f9770;
      uVar3 = FUN_00879dd0(param_1,&local_68,local_58,local_58 >> 0x10,local_58 >> 0x18,0);
    } while ((uVar3 & 1) == 0);
  }
  else {
    do {
      bVar1 = local_58._2_1_ == '\v';
      if (!bVar1) {
        return bVar1;
      }
      lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_68 = (undefined **)(lVar2 + -0x15180);
      uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      local_68 = &PTR_LAB_048f9770;
      local_60 = "HarvestFestival";
      local_58 = uVar3;
      if ((char)(uVar3 >> 0x20) < '\x05') {
        local_50 = uVar3;
        local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
        local_48 = local_48 + -0x15180;
        uVar3 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      local_50._7_1_ = (undefined1)(uVar3 >> 0x38);
      local_50._0_7_ = (uint7)CONCAT24(5,(int)uVar3);
      uVar3 = FUN_00879dd0(param_1,&local_68,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
    } while ((uVar3 & 1) == 0);
  }
  return bVar1;
}

