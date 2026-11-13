
uint FUN_012297cc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long local_38;
  
  puVar3 = PTR_DAT_04bb32f0;
  puVar2 = PTR_DAT_04bb2020;
  local_58 = *param_1;
  uVar6 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "Easter";
  if ((char)(local_58 >> 0x20) < '\x05') {
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
    local_38 = local_38 + -0x15180;
    local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
  }
  uVar4 = local_58;
  uVar1 = local_58 >> 0x30;
  local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
  local_58 = CONCAT26((short)uVar1,(uint6)local_58) & 0xff00ffffffffffff;
  uVar5 = FUN_0087a8f0(uVar6,&local_68,uVar4,uVar4 >> 0x10,uVar4 >> 0x18,0);
  if (((uVar5 & 1) == 0) && ((param_2 & 1) != 0)) {
    local_58 = *param_1;
    local_68 = puVar2 + 0x10;
    uVar6 = *(undefined8 *)puVar3;
    pcStack_60 = "Easter";
    if ((char)(local_58 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    uVar1 = local_58;
    local_58._0_6_ = CONCAT24(5,(undefined4)local_58);
    local_58._7_1_ = SUB81(uVar1,7);
    local_58._0_7_ = (uint7)(uint6)local_58;
    uVar5 = FUN_00879dd0(uVar6,&local_68,uVar1,uVar1 >> 0x10,uVar1 >> 0x18,0);
  }
  return uVar5 & 1;
}

