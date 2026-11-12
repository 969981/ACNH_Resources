
bool FUN_00a8d4a0(long param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  int local_2c;
  undefined8 local_28;
  long local_8;
  
  local_2c = 0;
  iVar1 = *(int *)(param_1 + 0x6539c);
  if (iVar1 == 5) goto LAB_00a8d554;
  if (iVar1 == 4) {
LAB_00a8d54c:
    local_2c = 2;
  }
  else {
    if (iVar1 != 3) {
      local_28 = *param_2;
      if ((char)(local_28 >> 0x20) < '\x05') {
        local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
        local_8 = local_8 + -0x15180;
        local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
      }
      uVar4 = local_28 >> 0x10;
      uVar2 = local_28 >> 0x30;
      uVar5 = local_28 >> 0x18;
      local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
      local_28 = CONCAT26((short)uVar2,(undefined6)local_28) & 0xff00ffffffffffff;
      cVar3 = FUN_00a8ae20(param_1,uVar4,uVar5,8);
      if (cVar3 == '\x05') goto LAB_00a8d54c;
      if (cVar3 != '\x04') goto LAB_00a8d554;
    }
    local_2c = 1;
  }
LAB_00a8d554:
  return local_2c - 1U < 2;
}

