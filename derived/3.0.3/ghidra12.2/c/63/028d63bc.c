
bool FUN_028d63bc(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  undefined8 local_38;
  long local_18;
  
  puVar3 = PTR_DAT_04bb32e8;
  plVar7 = (long *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  lVar6 = param_1;
  if (*(short *)plVar7 == 0) {
    local_38 = *(long *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_38 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = local_18 + -0x15180;
      lVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
      local_38 = lVar6;
    }
    plVar7 = &local_38;
    uVar1 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(int)local_38);
    local_38 = CONCAT26((short)uVar1,(undefined6)local_38) & 0xff00ffffffffffff;
  }
  local_18 = *plVar7;
  iVar4 = FUN_028d4550(lVar6,&local_18);
  local_18 = CONCAT44(local_18._4_4_,iVar4);
  if ((iVar4 == 0) &&
     (((DAT_0537d558 == 0 || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
      (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
    lVar6 = *(long *)puVar3;
    piVar8 = (int *)(lVar6 + 0x4068);
    if (*(short *)piVar8 == 0) {
      local_38 = *(undefined8 *)(lVar6 + 0x4060);
      if ((char)(local_38 >> 0x20) < '\x05') {
        local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_18 = local_18 + -0x15180;
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
      }
      piVar8 = (int *)&local_38;
      uVar1 = local_38 >> 0x30;
      local_38._0_6_ = CONCAT24(5,(int)local_38);
      local_38 = CONCAT26((short)uVar1,(undefined6)local_38) & 0xff00ffffffffffff;
    }
    iVar4 = *piVar8;
    uVar5 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
    local_18 = CONCAT44(local_18._4_4_,uVar5);
    if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
       (*(int *)(DAT_0537d558 + 0x80) != 1)) {
      uVar1 = (ulong)uVar5;
      if (6 < uVar5) {
        uVar1 = 0;
      }
      uVar5 = *(uint *)(param_1 + uVar1 * 4);
      if ((uVar5 < 0xc) && (uVar5 == 4)) {
        return true;
      }
    }
    if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
       (*(int *)(DAT_0537d558 + 0x80) != 1)) {
      lVar6 = *(long *)puVar3;
      piVar8 = (int *)(lVar6 + 0x4068);
      if (*(short *)piVar8 == 0) {
        local_38 = *(undefined8 *)(lVar6 + 0x4060);
        if ((char)(local_38 >> 0x20) < '\x05') {
          local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
          local_18 = local_18 + -0x15180;
          local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
        }
        piVar8 = (int *)&local_38;
        uVar1 = local_38 >> 0x30;
        local_38._0_6_ = CONCAT24(5,(int)local_38);
        local_38 = CONCAT26((short)uVar1,(undefined6)local_38) & 0xff00ffffffffffff;
      }
      iVar4 = *piVar8;
      iVar2 = *(int *)(param_1 + 0x70);
      iVar4 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
      return iVar2 == iVar4;
    }
  }
  return false;
}

