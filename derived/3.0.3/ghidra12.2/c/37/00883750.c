
bool FUN_00883750(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong local_90;
  undefined *local_88;
  char *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_48;
  
  local_70 = *param_2;
  if ((char)(local_70 >> 0x20) < '\x05') {
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_88 = (undefined *)(lVar3 + -0x15180);
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
  }
  uVar5 = local_70 >> 0x30;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = CONCAT26((short)uVar5,(undefined6)local_70) & 0xff00ffffffffffff;
  uVar5 = local_70;
  local_78 = local_70;
  uVar4 = FUN_00a82b80(&local_78);
  local_68 = uVar5;
  if ((uVar4 & 1) == 0) {
    do {
      uVar5 = FUN_00a82d58(&local_78);
      if ((uVar5 & 1) != 0) break;
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_88 = (undefined *)(lVar3 + -0x15180);
      local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
      uVar5 = FUN_00a82b80(&local_78);
    } while ((uVar5 & 1) == 0);
    local_68 = local_78;
  }
  puVar2 = PTR_DAT_04bb2020;
  iVar7 = 7;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    local_80 = "NormalLive";
    local_88 = puVar1;
    if ((char)(local_68 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_48 = local_48 + -0x15180;
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    uVar5 = local_68;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68._7_1_ = SUB81(uVar5,7);
    local_68._0_7_ = (uint7)(uint6)local_68;
    uVar5 = FUN_00879dd0(param_1,&local_88,uVar5 & 0xffffffff,uVar5 >> 0x10,uVar5 >> 0x18,0);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_00874988(uVar5,&local_78), (uVar5 & 1) == 0)) {
      local_90 = local_78;
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_88 = (undefined *)(lVar3 + 0x15180);
      local_90 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
      local_88 = puVar2 + 0x10;
      local_80 = "NormalLive";
      local_68 = local_90;
      if ((char)(local_90 >> 0x20) < '\x05') {
        local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_48 = local_48 + -0x15180;
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      uVar5 = local_68;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68._7_1_ = SUB81(uVar5,7);
      local_68._0_7_ = (uint7)(uint6)local_68;
      uVar5 = FUN_00879dd0(param_1,&local_88,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
      if (((uVar5 & 1) == 0) && (uVar5 = FUN_00874988(uVar5,&local_90), (uVar5 & 1) == 0)) {
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        if (lVar6 < lVar3) {
          return false;
        }
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        return lVar6 == lVar3;
      }
    }
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
    local_88 = (undefined *)(lVar3 + 0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
    iVar7 = iVar7 + -1;
    local_78 = local_68;
    if (iVar7 == 0) {
      return false;
    }
  } while( true );
}

