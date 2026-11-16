
long FUN_02884690(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 local_30;
  long local_28;
  
  piVar6 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar6 == 0) {
    local_30 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar4 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(int)local_30);
    local_30 = CONCAT26((short)uVar4,(undefined6)local_30) & 0xff00ffffffffffff;
    piVar6 = (int *)&local_30;
  }
  iVar3 = *piVar6;
  uVar5 = nn::time::GetDayOfWeek((int)(short)iVar3,(iVar3 << 8) >> 0x18,iVar3 >> 0x18);
  lVar1 = param_1 + (ulong)uVar5 * 0x10;
  if (6 < uVar5) {
    lVar1 = param_1;
  }
  lVar2 = lVar1 + (ulong)param_2 * 8;
  if (1 < param_2) {
    lVar2 = lVar1;
  }
  return lVar2;
}

