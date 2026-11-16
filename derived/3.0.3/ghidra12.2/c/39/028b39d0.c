
undefined4 FUN_028b39d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  undefined8 local_70;
  long local_68;
  
  piVar12 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar12 == 0) {
    local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    piVar12 = (int *)&local_70;
    uVar9 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(int)local_70);
    local_70 = CONCAT26((short)uVar9,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  iVar5 = *piVar12;
  uVar7 = nn::time::GetDayOfWeek((int)(short)iVar5,(iVar5 << 8) >> 0x18,iVar5 >> 0x18);
  puVar6 = PTR_DAT_04bb43c0;
  lVar14 = 0;
  local_68 = CONCAT44(local_68._4_4_,uVar7);
  uVar13 = 0;
  uVar8 = 0;
  lVar2 = param_1 + (ulong)uVar7 * 0x200;
  if (6 < uVar7) {
    lVar2 = param_1;
  }
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar1 = lVar2 + ((long)((ulong)uVar8 << 0x20) >> 0x1d);
    uVar7 = FUN_0277d6c4(lVar1);
    lVar10 = *(long *)puVar6;
    if (lVar10 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        uVar9 = FUN_0277d7b4(lVar1,param_2);
        if ((uVar9 & 1) != 0) {
          piVar12 = (int *)(DAT_04da6480 + 0x4068);
          if (*(short *)piVar12 == 0) {
            local_70 = *(undefined8 *)(DAT_04da6480 + 0x4060);
            if ((char)(local_70 >> 0x20) < '\x05') {
              local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              local_68 = local_68 + -0x15180;
              local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
            }
            piVar12 = (int *)&local_70;
            uVar9 = local_70 >> 0x30;
            local_70._0_6_ = CONCAT24(5,(int)local_70);
            local_70 = CONCAT26((short)uVar9,(undefined6)local_70) & 0xff00ffffffffffff;
          }
          iVar5 = *piVar12;
          uVar8 = nn::time::GetDayOfWeek((int)(short)iVar5,(iVar5 << 8) >> 0x18,iVar5 >> 0x18);
          puVar3 = (undefined4 *)(param_1 + 0xe00) + (ulong)uVar8 * 0x40;
          if (6 < uVar8) {
            puVar3 = (undefined4 *)(param_1 + 0xe00);
          }
          puVar4 = (undefined4 *)((long)puVar3 - lVar14);
          if (0x3f < uVar13) {
            puVar4 = puVar3;
          }
          return *puVar4;
        }
        lVar10 = *(long *)puVar6;
      }
    }
    uVar13 = uVar13 + 1;
    uVar8 = uVar8 + 1;
    lVar14 = lVar14 + -4;
    lVar11 = lVar10;
  } while (uVar13 != 0x40);
  return 0xffffffff;
}

