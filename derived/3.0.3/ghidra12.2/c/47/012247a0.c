
float FUN_012247a0(void)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  ulong local_60;
  undefined8 local_58;
  long local_38;
  
  uVar4 = FUN_00a8c31c(DAT_04da7238);
  uVar1 = DAT_04da7238;
  local_58 = FUN_00a8c31c(DAT_04da7238);
  if ((char)(local_58 >> 0x20) < '\x05') {
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_38 = local_38 + -0x15180;
    local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  }
  uVar6 = local_58 >> 0x10;
  uVar5 = local_58 >> 0x30;
  uVar7 = local_58 >> 0x18;
  local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
  local_58 = CONCAT26((short)uVar5,(uint6)local_58) & 0xff00ffffffffffff;
  cVar3 = FUN_00a8ae20(uVar1,uVar6,uVar7,4);
  if (cVar3 == '\x02') {
    return 0.0;
  }
  local_60 = uVar4;
  local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
  local_38 = local_38 + 0x278d00;
  local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  uVar1 = DAT_04da7238;
  local_58 = local_60;
  if ((char)(local_60 >> 0x20) < '\x05') {
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_38 = local_38 + -0x15180;
    local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  }
  uVar5 = local_58;
  uVar6 = local_58 >> 0x10;
  uVar7 = local_58 >> 0x18;
  local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
  local_58._7_1_ = SUB81(uVar5,7);
  local_58._0_7_ = (uint7)(uint6)local_58;
  cVar3 = FUN_00a8ae20(uVar1,uVar6,uVar7,4);
  if (cVar3 == '\x02') {
    uVar9 = 0;
    local_60 = uVar4;
    do {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
      local_38 = local_38 + 0x15180;
      uVar5 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      uVar1 = DAT_04da7238;
      local_60 = uVar5;
      if ((char)(uVar5 >> 0x20) < '\x05') {
        local_58 = uVar5;
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_38 = local_38 + -0x15180;
        uVar5 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      local_58._0_4_ = (undefined4)uVar5;
      local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
      local_58._7_1_ = (undefined1)(uVar5 >> 0x38);
      local_58._0_7_ = (uint7)(uint6)local_58;
      cVar3 = FUN_00a8ae20(uVar1,uVar5 >> 0x10,uVar5 >> 0x18,4);
      uVar8 = uVar9 + 1;
      bVar2 = uVar9 < 0x1d;
      uVar9 = uVar8;
    } while (cVar3 != '\x02' && bVar2);
    if (cVar3 != '\x02') goto LAB_01224958;
LAB_01224a68:
    fVar10 = (float)(int)uVar8 / 30.0;
  }
  else {
LAB_01224958:
    local_60 = uVar4;
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
    local_38 = local_38 + -0x278d00;
    local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar1 = DAT_04da7238;
    local_58 = local_60;
    if ((char)(local_60 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar5 = local_58;
    uVar6 = local_58 >> 0x10;
    uVar7 = local_58 >> 0x18;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58._7_1_ = SUB81(uVar5,7);
    local_58._0_7_ = (uint7)(uint6)local_58;
    cVar3 = FUN_00a8ae20(uVar1,uVar6,uVar7,4);
    if (cVar3 == '\x02') {
      uVar9 = 0;
      local_60 = uVar4;
      do {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        local_38 = local_38 + -0x15180;
        uVar4 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        uVar1 = DAT_04da7238;
        local_60 = uVar4;
        if ((char)(uVar4 >> 0x20) < '\x05') {
          local_58 = uVar4;
          local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
          local_38 = local_38 + -0x15180;
          uVar4 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        local_58._0_4_ = (undefined4)uVar4;
        local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
        local_58._7_1_ = (undefined1)(uVar4 >> 0x38);
        local_58._0_7_ = (uint7)(uint6)local_58;
        cVar3 = FUN_00a8ae20(uVar1,uVar4 >> 0x10,uVar4 >> 0x18,4);
        uVar8 = uVar9 + 1;
        bVar2 = uVar9 < 0x1d;
        uVar9 = uVar8;
      } while (cVar3 != '\x02' && bVar2);
      if (cVar3 == '\x02') goto LAB_01224a68;
    }
    fVar10 = 1.0;
  }
  return fVar10;
}

