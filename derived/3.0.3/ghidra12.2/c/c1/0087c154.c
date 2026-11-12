
void FUN_0087c154(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 local_30;
  long local_28;
  
  puVar2 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar2 == 0) {
    local_30 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar1 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
    puVar2 = &local_30;
  }
  uVar1 = *puVar2;
  FUN_00879dd0(param_1,param_2,uVar1,uVar1 >> 0x10,uVar1 >> 0x18,0);
  return;
}

