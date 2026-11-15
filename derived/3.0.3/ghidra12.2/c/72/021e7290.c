
uint FUN_021e7290(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *local_38;
  char *pcStack_30;
  undefined8 local_28;
  long local_8;
  
  local_38 = PTR_DAT_04bb2020 + 0x10;
  uVar4 = *(undefined8 *)PTR_DAT_04bb32f0;
  pcStack_30 = "Carnival";
  puVar3 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar3 == 0) {
    local_28 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = local_8 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    }
    puVar3 = &local_28;
    uVar2 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar2,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  uVar2 = *puVar3;
  uVar1 = FUN_00879dd0(uVar4,&local_38,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
  return uVar1 & 1;
}

