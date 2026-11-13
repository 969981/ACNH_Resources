
uint FUN_0118c084(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *local_38;
  char *pcStack_30;
  undefined8 local_28;
  long local_8;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "PlacementRadioGymnastics";
  local_38 = puVar1;
  uVar3 = FUN_0273f0a0(&local_38);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    pcStack_30 = "Countdown";
    uVar5 = *(undefined8 *)PTR_DAT_04bb32f0;
    puVar4 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    local_38 = puVar1;
    if (*(short *)puVar4 == 0) {
      local_28 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_28 >> 0x20) < '\x05') {
        local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
        local_8 = local_8 + -0x15180;
        local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
      }
      puVar4 = &local_28;
      uVar3 = local_28 >> 0x30;
      local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
      local_28 = CONCAT26((short)uVar3,(undefined6)local_28) & 0xff00ffffffffffff;
    }
    uVar3 = *puVar4;
    uVar2 = FUN_00879dd0(uVar5,&local_38,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2 & 1;
}

