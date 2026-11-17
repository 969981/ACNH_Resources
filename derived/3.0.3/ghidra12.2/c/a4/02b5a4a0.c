
uint FUN_02b5a4a0(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined8 local_28;
  long local_8;
  
  puVar2 = PTR_DAT_04bb32e8;
  psVar6 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar6 == 0) {
    local_28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = local_8 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    }
    psVar6 = (short *)&local_28;
    uVar1 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar1,(uint6)local_28) & 0xff00ffffffffffff;
  }
  if ((char)psVar6[1] == '\f') {
    uVar5 = 4;
  }
  else {
    psVar6 = (short *)(*(long *)puVar2 + 0x4068);
    if (*psVar6 == 0) {
      local_28 = *(undefined8 *)(*(long *)puVar2 + 0x4060);
      if ((char)(local_28 >> 0x20) < '\x05') {
        local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
        local_8 = local_8 + -0x15180;
        local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
      }
      uVar3 = local_28;
      psVar6 = (short *)&local_28;
      local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
      local_28._7_1_ = SUB81(uVar3,7);
      local_28._0_7_ = (uint7)(uint6)local_28;
    }
    if ((char)psVar6[1] == '\n') {
      uVar5 = 5;
    }
    else {
      iVar4 = FUN_02b60be0();
      uVar5 = iVar4 - 1;
      if (3 < uVar5) {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

