
bool FUN_00a80d84(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [8];
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  undefined8 local_30;
  long local_28;
  
  uVar5 = *param_1;
  local_30 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((param_2 & 1) == 0) {
    bVar3 = (int)uVar5 == (int)local_30;
  }
  else {
    local_38 = (undefined1  [8])uVar5;
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar1 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
    if ((char)((ulong)uVar5 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_38);
      local_28 = local_28 + -0x15180;
      local_38 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    auVar2 = local_38;
    local_38._4_2_ = 5;
    local_38[7] = auVar2[7];
    local_38[6] = 0;
    iVar4 = FUN_00a82474(&local_30,local_38);
    bVar3 = iVar4 == 0;
  }
  return bVar3;
}

