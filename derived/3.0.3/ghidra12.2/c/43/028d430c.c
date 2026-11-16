
uint FUN_028d430c(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bb2020;
  local_28 = *param_2;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "Halloween";
  if ((char)(local_28 >> 0x20) < '\x05') {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_68 = (undefined *)(lVar4 + -0x15180);
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  }
  uVar2 = local_28;
  uVar5 = local_28 >> 0x30;
  local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
  local_28 = CONCAT26((short)uVar5,(undefined6)local_28) & 0xff00ffffffffffff;
  uVar5 = FUN_00879dd0(param_1,&local_58,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
  if ((uVar5 & 1) == 0) {
    local_48 = *param_2;
    local_68 = puVar1 + 0x10;
    pcStack_60 = "Halloween";
    if ((char)(local_48 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = lVar4 - 0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar5 = local_48;
    local_48._7_1_ = SUB81(uVar5,7);
    local_48._0_7_ = (uint7)CONCAT24(5,(undefined4)local_48);
    uVar3 = FUN_0087a8f0(param_1,&local_68,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3 & 1;
}

