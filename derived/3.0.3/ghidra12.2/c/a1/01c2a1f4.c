
uint FUN_01c2a1f4(void)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  uVar4 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "InternationalMuseum";
  puVar3 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar3 == 0) {
    local_30 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar1 = local_30;
    puVar3 = &local_30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30._7_1_ = SUB81(uVar1,7);
    local_30._0_7_ = (uint7)(uint6)local_30;
  }
  local_30 = *puVar3;
  if ((char)(local_30 >> 0x20) < '\x05') {
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = local_28 + -0x15180;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar1 = local_30;
  local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
  local_30._7_1_ = SUB81(uVar1,7);
  local_30._0_7_ = (uint7)(uint6)local_30;
  uVar2 = FUN_00879dd0(uVar4,&local_40,uVar1,uVar1 >> 0x10,uVar1 >> 0x18,0);
  return uVar2 & 1;
}

