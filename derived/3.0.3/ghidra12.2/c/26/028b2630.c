
undefined * FUN_028b2630(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  long local_68;
  
  puVar3 = PTR_DAT_04bb32e8;
  piVar9 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar9 == 0) {
    local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    piVar9 = (int *)&local_70;
    uVar2 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(int)local_70);
    local_70 = CONCAT26((short)uVar2,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  iVar1 = *piVar9;
  uVar6 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
  puVar4 = PTR_DAT_04bb37e0;
  lVar12 = 0;
  uVar8 = 0;
  lVar11 = 0;
  do {
    lVar10 = param_1 + 0x1500 + (ulong)uVar6 * 0x40;
    if (6 < uVar6) {
      lVar10 = param_1 + 0x1500;
    }
    if (*(char *)(lVar10 + lVar12) == '\0') {
      lVar10 = *(long *)puVar3;
      piVar9 = (int *)(lVar10 + 0x4068);
      if (*(short *)piVar9 == 0) {
        local_70 = *(undefined8 *)(lVar10 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = local_68 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        uVar2 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(int)local_70);
        local_70 = CONCAT26((short)uVar2,(undefined6)local_70) & 0xff00ffffffffffff;
        piVar9 = (int *)&local_70;
      }
      iVar1 = *piVar9;
      uVar7 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
      local_68 = CONCAT44(local_68._4_4_,uVar7);
      lVar10 = param_1 + 0xe00 + (ulong)uVar7 * 0x100;
      if (6 < uVar7) {
        lVar10 = param_1 + 0xe00;
      }
      if (*(int *)(lVar10 + lVar12 * 4) == 0) goto LAB_028b2700;
    }
    else {
LAB_028b2700:
      uVar8 = uVar8 + 1;
      if (param_2 < uVar8) {
        lVar12 = *(long *)puVar3;
        piVar9 = (int *)(lVar12 + 0x4068);
        if (*(short *)piVar9 == 0) {
          local_70 = *(undefined8 *)(lVar12 + 0x4060);
          if ((char)(local_70 >> 0x20) < '\x05') {
            local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
            local_68 = local_68 + -0x15180;
            local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
          }
          piVar9 = (int *)&local_70;
          uVar2 = local_70 >> 0x30;
          local_70._0_6_ = CONCAT24(5,(int)local_70);
          local_70 = CONCAT26((short)uVar2,(undefined6)local_70) & 0xff00ffffffffffff;
        }
        iVar1 = *piVar9;
        uVar8 = nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
        lVar12 = param_1 + (ulong)uVar8 * 0x200;
        if (6 < uVar8) {
          lVar12 = param_1;
        }
        return (undefined *)(lVar12 - lVar11);
      }
    }
    lVar12 = lVar12 + 1;
    bVar5 = lVar11 == -0x1f8;
    lVar11 = lVar11 + -8;
    if (bVar5) {
      return puVar4;
    }
  } while( true );
}

