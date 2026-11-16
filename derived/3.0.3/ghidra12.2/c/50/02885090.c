
void FUN_02885090(undefined2 *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_690;
  undefined *local_688;
  undefined4 local_680;
  undefined4 local_67c;
  byte local_678;
  undefined8 *local_670;
  int local_668;
  int iStack_664;
  undefined8 local_660;
  undefined2 local_658;
  undefined1 local_656;
  undefined1 local_655;
  undefined4 local_654;
  long local_650;
  undefined2 local_648;
  undefined1 local_646;
  undefined1 local_645;
  undefined4 local_644;
  undefined8 *local_640;
  undefined8 local_638;
  int local_630;
  int iStack_62c;
  undefined4 local_628;
  uint uStack_624;
  
  puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254) {
    local_660 = (undefined **)((ulong)local_660 & 0xffffffff00000000);
    uVar7 = FUN_0291e130(&local_640,&local_660,0);
    if (((uVar7 & 1) != 0) && ((uint)local_660 != 0)) {
      uVar5 = 0;
      iVar6 = 0;
      do {
        if (param_2 == uVar5) {
          fVar13 = *(float *)((long)&local_640 + (long)iVar6 * 0xc);
          fVar12 = *(float *)((long)&local_638 + (long)iVar6 * 0xc);
          goto LAB_0288511c;
        }
        iVar6 = iVar6 + 1;
      } while ((iVar6 != 0x80) && (uVar5 = uVar5 + 1, uVar5 < (uint)local_660));
    }
    fVar13 = 0.0;
    fVar12 = 0.0;
LAB_0288511c:
    piVar11 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)piVar11 == 0) {
      local_660 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)((ulong)local_660 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_660);
        local_640 = (undefined8 *)(lVar8 + -0x15180);
        local_660 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_640);
      }
      piVar11 = (int *)&local_660;
      uVar7 = (ulong)local_660 >> 0x30;
      local_660._0_6_ = CONCAT24(5,(uint)local_660);
      local_660 = (undefined **)(CONCAT26((short)uVar7,(undefined6)local_660) & 0xff00ffffffffffff);
    }
    iVar6 = *piVar11;
    uVar5 = nn::time::GetDayOfWeek((int)(short)iVar6,(iVar6 << 8) >> 0x18,iVar6 >> 0x18);
    puVar4 = PTR_DAT_04bb43c0;
    local_640 = (undefined8 *)CONCAT44(local_640._4_4_,uVar5);
    puVar1 = param_1 + (ulong)uVar5 * 8;
    if (6 < uVar5) {
      puVar1 = param_1;
    }
    puVar2 = puVar1 + (ulong)param_2 * 4;
    if (1 < param_2) {
      puVar2 = puVar1;
    }
    local_656 = *(undefined1 *)(puVar2 + 1);
    local_655 = *(undefined1 *)((long)puVar2 + 3);
    local_654 = *(undefined4 *)(puVar2 + 2);
    local_660 = &PTR_FUN_04a36b50;
    local_650 = 0;
    local_658 = *puVar2;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    local_648 = local_658;
    local_646 = local_656;
    local_645 = local_655;
    local_644 = local_654;
    uVar5 = FUN_0277d6c4(&local_658);
    if (*(long *)puVar4 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_648);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
          local_650 = lVar8;
        }
      }
    }
    local_680 = 0;
    local_688 = PTR_DAT_04bbfe68 + 0x10;
    local_670 = &DAT_048f9750;
    local_668 = ~(uint)(fVar13 < 0.0) + (int)((float)(int)fVar13 / 5.0);
    iStack_664 = ~(uint)(fVar12 < 0.0) + (int)((float)(int)fVar12 / 5.0);
    if (DAT_05aed670 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar6 = FUN_006bd550(*puVar9,0);
        if (iVar6 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
        puVar9 = puVar3;
      }
    }
    local_67c = *(undefined4 *)(puVar9 + 7);
    local_678 = FUN_017baf44();
    local_678 = local_678 & 1;
    FUN_01a5033c(&local_640,&local_688,1,&local_670,0);
    uVar5 = FUN_0277d7b4(&local_640,&local_648);
    iVar6 = FUN_01aee3b4(&local_660);
    if ((iVar6 == 6) || (iVar6 = FUN_01aee3b4(&local_660), iVar6 == 7)) {
      ppuVar10 = &local_640;
      local_640 = &DAT_048f9750;
      local_638 = (undefined8 *)CONCAT44(iStack_664 + 1,local_668);
    }
    else {
      ppuVar10 = &local_670;
    }
    FUN_01513b9c(ppuVar10,uVar5 & 1,0);
    local_638 = &DAT_048f9750;
    local_690 = (undefined8 *)0x1cf2;
    FUN_0277d4ac(&local_690);
    local_628 = 0;
    local_640 = local_690;
    local_630 = local_668;
    iStack_62c = iStack_664;
    uStack_624 = uVar5 & 1;
    FUN_0152015c(&local_640);
  }
  return;
}

