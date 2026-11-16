
bool FUN_028b3790(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  uint local_67c;
  long local_678 [192];
  undefined8 local_78;
  undefined8 local_70;
  
  puVar5 = PTR_DAT_04bb32e8;
  local_67c = 0;
  piVar12 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar12 == 0) {
    local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_678[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_678[0] = local_678[0] + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_678);
    }
    piVar12 = (int *)&local_70;
    uVar9 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(int)local_70);
    local_70 = CONCAT26((short)uVar9,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  iVar4 = *piVar12;
  uVar7 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
  puVar6 = PTR_DAT_04bb43c0;
  local_678[0] = CONCAT44(local_678[0]._4_4_,uVar7);
  lVar14 = 0;
  uVar8 = 0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  lVar10 = param_1 + (ulong)uVar7 * 0x200;
  if (6 < uVar7) {
    lVar10 = param_1;
  }
  do {
    lVar1 = lVar10 + ((long)((ulong)uVar8 << 0x20) >> 0x1d);
    uVar7 = FUN_0277d6c4(lVar1);
    lVar11 = *(long *)puVar6;
    if (lVar11 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        uVar9 = FUN_0277d7b4(lVar1,param_2);
        if ((uVar9 & 1) != 0) {
          uVar9 = FUN_0291e130(local_678,&local_67c,0);
          if ((uVar9 & 1) == 0) {
            return false;
          }
          if (local_67c <= (uint)lVar14) {
            return false;
          }
          piVar12 = (int *)(*(long *)puVar5 + 0x4068);
          if (*(short *)piVar12 == 0) {
            local_78 = *(undefined8 *)(*(long *)puVar5 + 0x4060);
            if ((char)(local_78 >> 0x20) < '\x05') {
              lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
              local_70 = lVar10 - 0x15180;
              local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
            }
            piVar12 = (int *)&local_78;
            uVar9 = local_78 >> 0x30;
            local_78._0_6_ = CONCAT24(5,(int)local_78);
            local_78 = CONCAT26((short)uVar9,(undefined6)local_78) & 0xff00ffffffffffff;
          }
          iVar4 = *piVar12;
          uVar8 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
          pcVar2 = (char *)(param_1 + 0x1500) + (ulong)uVar8 * 0x40;
          if (6 < uVar8) {
            pcVar2 = (char *)(param_1 + 0x1500);
          }
          pcVar3 = pcVar2 + lVar14;
          if (0x3f < (uint)lVar14) {
            pcVar3 = pcVar2;
          }
          return *pcVar3 != '\0';
        }
        lVar11 = *(long *)puVar6;
      }
    }
    lVar14 = lVar14 + 1;
    uVar8 = uVar8 + 1;
    lVar13 = lVar11;
    if ((int)lVar14 == 0x40) {
      return false;
    }
  } while( true );
}

