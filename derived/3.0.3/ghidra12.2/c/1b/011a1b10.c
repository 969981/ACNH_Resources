
void FUN_011a1b10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined *local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "PlacementRadioGymnastics";
  local_50 = puVar1;
  uVar7 = FUN_0273f0a0(&local_50);
  if ((uVar7 & 1) == 0) {
    local_48 = "EventObjFlag1";
    local_50 = puVar1;
    FUN_0273f3c4(&local_50,0);
  }
  else {
    local_48 = "EventObjFlag1";
    local_50 = puVar1;
    FUN_0273f3c4(&local_50,1);
    puVar4 = PTR_DAT_04bb32f0;
    puVar3 = PTR_DAT_04bb32e8;
    local_48 = "Fireworks";
    uVar9 = *(undefined8 *)PTR_DAT_04bb32f0;
    puVar8 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    local_50 = puVar1;
    if (*(short *)puVar8 == 0) {
      local_40 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_40 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_38 = local_38 + -0x15180;
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      puVar8 = &local_40;
      uVar7 = local_40 >> 0x30;
      local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
      local_40 = CONCAT26((short)uVar7,(undefined6)local_40) & 0xff00ffffffffffff;
    }
    uVar7 = *puVar8;
    uVar5 = FUN_00879dd0(uVar9,&local_50,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
    local_50 = puVar2 + 0x10;
    local_48 = "Countdown";
    uVar9 = *(undefined8 *)puVar4;
    puVar8 = (ulong *)(*(long *)puVar3 + 0x4068);
    if (*(short *)puVar8 == 0) {
      local_40 = *(ulong *)(*(long *)puVar3 + 0x4060);
      if ((char)(local_40 >> 0x20) < '\x05') {
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_38 = local_38 + -0x15180;
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      puVar8 = &local_40;
      uVar7 = local_40 >> 0x30;
      local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
      local_40 = CONCAT26((short)uVar7,(undefined6)local_40) & 0xff00ffffffffffff;
    }
    uVar7 = *puVar8;
    uVar6 = FUN_00879dd0(uVar9,&local_50,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
    uVar7 = FUN_011be9f0();
    if ((((uVar5 | uVar6) & 1) != 0) || ((uVar7 & 1) != 0)) {
      uVar9 = 1;
      goto LAB_011a1cec;
    }
  }
  uVar9 = 0;
LAB_011a1cec:
  local_48 = "EventObjFlag2";
  local_50 = puVar2 + 0x10;
  FUN_0273f3c4(&local_50,uVar9);
  return;
}

