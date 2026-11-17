
undefined4 FUN_02b60be0(void)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  byte local_24 [4];
  undefined8 local_20;
  long local_18;
  
  plVar3 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)plVar3 == 0) {
    local_20 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_20 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
      local_18 = local_18 + -0x15180;
      local_20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    plVar3 = &local_20;
    uVar1 = local_20 >> 0x30;
    local_20._0_6_ = CONCAT24(5,(undefined4)local_20);
    local_20 = CONCAT26((short)uVar1,(undefined6)local_20) & 0xff00ffffffffffff;
  }
  local_18 = *plVar3;
  local_24[0] = 0;
  FUN_01b02920(local_24,&local_18,0);
  uVar2 = 1;
  if (((((local_24[0] & 2) == 0) && (uVar2 = 2, (local_24[0] & 4) == 0)) &&
      (uVar2 = 3, (local_24[0] & 8) == 0)) && (uVar2 = 4, (local_24[0] & 0x10) == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}

