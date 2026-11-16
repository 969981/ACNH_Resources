
void FUN_028b3e80(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_70;
  undefined8 local_68;
  
  piVar10 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar10 == 0) {
    local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    uVar8 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(int)local_70);
    local_70 = CONCAT26((short)uVar8,(undefined6)local_70) & 0xff00ffffffffffff;
    piVar10 = (int *)&local_70;
  }
  iVar6 = *piVar10;
  uVar5 = nn::time::GetDayOfWeek((int)(short)iVar6,(iVar6 << 8) >> 0x18,iVar6 >> 0x18);
  puVar4 = PTR_DAT_04bb43c0;
  local_68 = CONCAT44(local_68._4_4_,uVar5);
  lVar12 = 0;
  uVar11 = 0;
  uVar7 = 0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  lVar2 = param_1 + (ulong)uVar5 * 0x200;
  if (6 < uVar5) {
    lVar2 = param_1;
  }
  do {
    lVar1 = lVar2 + ((long)((ulong)uVar7 << 0x20) >> 0x1d);
    uVar5 = FUN_0277d6c4(lVar1);
    lVar9 = *(long *)puVar4;
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        uVar8 = FUN_0277d7b4(lVar1,param_2);
        if ((uVar8 & 1) != 0) {
          iVar6 = FUN_028b39d0(param_1,param_2);
          if (iVar6 < 1) {
            return;
          }
          piVar10 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
          if (*(short *)piVar10 == 0) {
            local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
            if ((char)(local_70 >> 0x20) < '\x05') {
              local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              local_68 = local_68 + -0x15180;
              local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
            }
            uVar8 = local_70 >> 0x30;
            local_70._0_6_ = CONCAT24(5,(int)local_70);
            local_70 = CONCAT26((short)uVar8,(undefined6)local_70) & 0xff00ffffffffffff;
            piVar10 = (int *)&local_70;
          }
          iVar6 = *piVar10;
          uVar7 = nn::time::GetDayOfWeek((int)(short)iVar6,(iVar6 << 8) >> 0x18,iVar6 >> 0x18);
          local_68 = CONCAT44(local_68._4_4_,uVar7);
          piVar10 = (int *)(param_1 + 0xe00) + (ulong)uVar7 * 0x40;
          if (6 < uVar7) {
            piVar10 = (int *)(param_1 + 0xe00);
          }
          piVar3 = (int *)((long)piVar10 - lVar12);
          if (0x3f < uVar11) {
            piVar3 = piVar10;
          }
          *piVar3 = *piVar3 + -1;
          iVar6 = FUN_028b39d0(param_1,param_2);
          if (iVar6 == 0) {
            FUN_028b3be4(param_1,param_2);
          }
          local_70 = 0xfffe;
          FUN_0277d4ac(&local_70);
          local_70 = *param_2;
          uVar8 = (ulong)local_68 >> 0x30;
          local_68 = CONCAT26((ushort)uVar8 & 0xff00,0xff0000000000);
          if (DAT_053fbba0 < 0) {
            return;
          }
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053fbba0,&local_68,&local_70,8,0);
          return;
        }
        lVar9 = *(long *)puVar4;
      }
    }
    uVar11 = uVar11 + 1;
    uVar7 = uVar7 + 1;
    lVar12 = lVar12 + -4;
    lVar13 = lVar9;
    if (uVar11 == 0x40) {
      return;
    }
  } while( true );
}

