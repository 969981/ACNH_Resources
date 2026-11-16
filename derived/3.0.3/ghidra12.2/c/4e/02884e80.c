
void FUN_02884e80(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_48;
  long local_28;
  
  puVar4 = PTR_DAT_04bb32e8;
  if (param_2 < 2) {
    piVar8 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)piVar8 == 0) {
      local_48 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_48 >> 0x20) < '\x05') {
        local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_28 = local_28 + -0x15180;
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      piVar8 = (int *)&local_48;
      uVar3 = local_48 >> 0x30;
      local_48._0_6_ = CONCAT24(5,(int)local_48);
      local_48 = CONCAT26((short)uVar3,(undefined6)local_48) & 0xff00ffffffffffff;
    }
    iVar2 = *piVar8;
    uVar5 = nn::time::GetDayOfWeek((int)(short)iVar2,(iVar2 << 8) >> 0x18,iVar2 >> 0x18);
    local_28 = CONCAT44(local_28._4_4_,uVar5);
    lVar1 = param_1 + 0x70;
    lVar6 = lVar1 + (ulong)uVar5 * 8;
    if (6 < uVar5) {
      lVar6 = lVar1;
    }
    if (0 < *(int *)(lVar6 + (ulong)param_2 * 4)) {
      lVar6 = *(long *)puVar4;
      piVar8 = (int *)(lVar6 + 0x4068);
      if (*(short *)piVar8 == 0) {
        local_48 = *(undefined8 *)(lVar6 + 0x4060);
        if ((char)(local_48 >> 0x20) < '\x05') {
          local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          local_28 = local_28 + -0x15180;
          local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
        }
        piVar8 = (int *)&local_48;
        uVar3 = local_48 >> 0x30;
        local_48._0_6_ = CONCAT24(5,(int)local_48);
        local_48 = CONCAT26((short)uVar3,(undefined6)local_48) & 0xff00ffffffffffff;
      }
      iVar2 = *piVar8;
      uVar5 = nn::time::GetDayOfWeek((int)(short)iVar2,(iVar2 << 8) >> 0x18,iVar2 >> 0x18);
      local_28 = CONCAT44(local_28._4_4_,uVar5);
      lVar6 = lVar1 + (ulong)uVar5 * 8;
      if (6 < uVar5) {
        lVar6 = lVar1;
      }
      lVar7 = (ulong)param_2 * 4;
      *(int *)(lVar6 + lVar7) = *(int *)(lVar6 + lVar7) + -1;
      lVar6 = *(long *)puVar4;
      piVar8 = (int *)(lVar6 + 0x4068);
      if (*(short *)piVar8 == 0) {
        local_48 = *(undefined8 *)(lVar6 + 0x4060);
        if ((char)(local_48 >> 0x20) < '\x05') {
          local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          local_28 = local_28 + -0x15180;
          local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
        }
        piVar8 = (int *)&local_48;
        uVar3 = local_48 >> 0x30;
        local_48._0_6_ = CONCAT24(5,(int)local_48);
        local_48 = CONCAT26((short)uVar3,(undefined6)local_48) & 0xff00ffffffffffff;
      }
      iVar2 = *piVar8;
      uVar5 = nn::time::GetDayOfWeek((int)(short)iVar2,(iVar2 << 8) >> 0x18,iVar2 >> 0x18);
      local_28 = CONCAT44(local_28._4_4_,uVar5);
      lVar6 = lVar1 + (ulong)uVar5 * 8;
      if (6 < uVar5) {
        lVar6 = lVar1;
      }
      if (*(int *)(lVar6 + (ulong)param_2 * 4) == 0) {
        FUN_02885090(param_1,param_2);
      }
      FUN_02189b54(PTR_DAT_04bb37e0,param_2);
    }
  }
  return;
}

