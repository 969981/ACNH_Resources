
uint FUN_028d5264(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  short *psVar7;
  int *piVar8;
  undefined *local_38;
  undefined1 *puStack_30;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_04bb32e8;
  psVar7 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  lVar6 = param_1;
  if (*psVar7 == 0) {
    local_28 = *(long *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_38 = (undefined *)(lVar6 + -0x15180);
      lVar6 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      local_28 = lVar6;
    }
    psVar7 = (short *)&local_28;
    uVar2 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(int)local_28);
    local_28 = CONCAT26((short)uVar2,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  local_38 = *(undefined **)psVar7;
  iVar4 = FUN_028d4550(lVar6,&local_38);
  local_38 = (undefined *)CONCAT44(local_38._4_4_,iVar4);
  if ((iVar4 == 0) &&
     (((DAT_0537d558 == 0 || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
      (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
    lVar6 = *(long *)puVar3;
    piVar8 = (int *)(lVar6 + 0x4068);
    if (*(short *)piVar8 == 0) {
      local_28 = *(undefined8 *)(lVar6 + 0x4060);
      if ((char)(local_28 >> 0x20) < '\x05') {
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
        local_38 = (undefined *)(lVar6 + -0x15180);
        local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      piVar8 = (int *)&local_28;
      uVar2 = local_28 >> 0x30;
      local_28._0_6_ = CONCAT24(5,(int)local_28);
      local_28 = CONCAT26((short)uVar2,(undefined6)local_28) & 0xff00ffffffffffff;
    }
    iVar4 = *piVar8;
    iVar1 = *(int *)(param_1 + 0x74);
    iVar4 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
    if (iVar1 == iVar4) {
      local_38 = PTR_DAT_04bb2020 + 0x10;
      local_28 = *(undefined8 *)(*(long *)puVar3 + 0x4060);
      puStack_30 = &DAT_0406c81e;
      uVar5 = FUN_028d4a98(&local_28,&local_38);
      goto LAB_028d52f8;
    }
  }
  uVar5 = 0;
LAB_028d52f8:
  return uVar5 & 1;
}

