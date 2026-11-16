
bool FUN_02884964(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 local_30;
  long local_28;
  
  if (1 < param_2) {
    return true;
  }
  piVar5 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar5 == 0) {
    local_30 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar3 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(int)local_30);
    local_30 = CONCAT26((short)uVar3,(undefined6)local_30) & 0xff00ffffffffffff;
    piVar5 = (int *)&local_30;
  }
  iVar2 = *piVar5;
  uVar4 = nn::time::GetDayOfWeek((int)(short)iVar2,(iVar2 << 8) >> 0x18,iVar2 >> 0x18);
  lVar1 = param_1 + 0x70 + (ulong)uVar4 * 8;
  if (6 < uVar4) {
    lVar1 = param_1 + 0x70;
  }
  return *(int *)(lVar1 + (ulong)param_2 * 4) == 0;
}

