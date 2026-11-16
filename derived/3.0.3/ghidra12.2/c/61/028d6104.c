
bool FUN_028d6104(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  undefined8 local_30;
  long local_28;
  
  puVar3 = PTR_DAT_04bb32e8;
  plVar7 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  lVar6 = param_1;
  if (*(short *)plVar7 == 0) {
    local_30 = *(long *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      lVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      local_30 = lVar6;
    }
    uVar2 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(int)local_30);
    local_30 = CONCAT26((short)uVar2,(undefined6)local_30) & 0xff00ffffffffffff;
    plVar7 = &local_30;
  }
  local_28 = *plVar7;
  iVar5 = FUN_028d4550(lVar6,&local_28);
  local_28 = CONCAT44(local_28._4_4_,iVar5);
  if ((iVar5 == 0) &&
     (((DAT_0537d558 == 0 || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
      (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
    piVar8 = (int *)(*(long *)puVar3 + 0x4068);
    if (*(short *)piVar8 == 0) {
      local_30 = *(undefined8 *)(*(long *)puVar3 + 0x4060);
      if ((char)(local_30 >> 0x20) < '\x05') {
        local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
        local_28 = local_28 + -0x15180;
        local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      uVar2 = local_30 >> 0x30;
      local_30._0_6_ = CONCAT24(5,(int)local_30);
      local_30 = CONCAT26((short)uVar2,(undefined6)local_30) & 0xff00ffffffffffff;
      piVar8 = (int *)&local_30;
    }
    iVar5 = *piVar8;
    iVar1 = *(int *)(param_1 + 0x74);
    iVar5 = nn::time::GetDayOfWeek((int)(short)iVar5,(iVar5 << 8) >> 0x18,iVar5 >> 0x18);
    bVar4 = iVar1 == iVar5;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

