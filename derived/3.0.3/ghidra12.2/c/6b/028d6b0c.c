
uint FUN_028d6b0c(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 local_28;
  long local_8;
  
  piVar4 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar4 == 0) {
    local_28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = local_8 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    }
    piVar4 = (int *)&local_28;
    uVar3 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(int)local_28);
    local_28 = CONCAT26((short)uVar3,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  iVar1 = *piVar4;
  uVar2 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    uVar3 = (ulong)uVar2;
    if (6 < uVar2) {
      uVar3 = 0;
    }
    uVar2 = *(uint *)(param_1 + uVar3 * 4);
    if (0xb < uVar2) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

