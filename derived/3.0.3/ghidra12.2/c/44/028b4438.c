
uint FUN_028b4438(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 local_28;
  long local_8;
  
  puVar1 = (undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  plVar4 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)plVar4 == 0) {
    local_28 = *puVar1;
    if ((char)(local_28 >> 0x20) < '\x05') {
      local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = local_8 + -0x15180;
      param_1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
      local_28 = param_1;
    }
    uVar2 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar2,(undefined6)local_28) & 0xff00ffffffffffff;
    plVar4 = &local_28;
  }
  local_8 = *plVar4;
  uVar3 = FUN_028b425c(param_1,puVar1,&local_8);
  return uVar3 & 1;
}

