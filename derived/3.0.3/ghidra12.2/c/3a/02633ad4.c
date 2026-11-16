
uint FUN_02633ad4(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_04bb2020;
  local_70 = (undefined *)*param_2;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "XmasEve";
  if ((char)((ulong)local_70 >> 0x20) < '\x05') {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_60 = (undefined *)(lVar4 + -0x15180);
    local_70 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
  }
  uVar2 = (ulong)local_70;
  uVar5 = (ulong)local_70 >> 0x30;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = (undefined *)(CONCAT26((short)uVar5,(undefined6)local_70) & 0xff00ffffffffffff);
  uVar5 = FUN_00879dd0(param_1,&local_50,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
  if ((uVar5 & 1) == 0) {
    local_80 = (undefined *)*param_2;
    local_60 = puVar1 + 0x10;
    pcStack_58 = "XmasReady1";
    if ((char)((ulong)local_80 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
      local_70 = (undefined *)(lVar4 - 0x15180);
      local_80 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
    }
    uVar5 = (ulong)local_80;
    local_80._7_1_ = SUB81(uVar5,7);
    local_80._0_7_ = (uint7)CONCAT24(5,(undefined4)local_80);
    uVar5 = FUN_00879dd0(param_1,&local_60,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    if ((uVar5 & 1) == 0) {
      local_38 = *param_2;
      local_70 = puVar1 + 0x10;
      pcStack_68 = "XmasReady2";
      if ((char)(local_38 >> 0x20) < '\x05') {
        lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_80 = (undefined *)(lVar4 + -0x15180);
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
      }
      uVar5 = local_38;
      local_38._7_1_ = SUB81(uVar5,7);
      local_38._0_7_ = (uint7)CONCAT24(5,(undefined4)local_38);
      uVar5 = FUN_00879dd0(param_1,&local_70,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
      if ((uVar5 & 1) == 0) {
        local_40 = *param_2;
        local_80 = puVar1 + 0x10;
        pcStack_78 = "XmasAfter";
        if ((char)(local_40 >> 0x20) < '\x05') {
          lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_38 = lVar4 + -0x15180;
          local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        uVar5 = local_40;
        local_40._7_1_ = SUB81(uVar5,7);
        local_40._0_7_ = (uint7)CONCAT24(5,(undefined4)local_40);
        uVar3 = FUN_00879dd0(param_1,&local_80,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
        goto LAB_02633c44;
      }
    }
  }
  uVar3 = 1;
LAB_02633c44:
  return uVar3 & 1;
}

