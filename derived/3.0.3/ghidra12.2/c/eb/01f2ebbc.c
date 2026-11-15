
/* WARNING: Removing unreachable block (ram,0x01f2eda8) */
/* WARNING: Removing unreachable block (ram,0x01f2ed90) */
/* WARNING: Removing unreachable block (ram,0x01f2edbc) */
/* WARNING: Removing unreachable block (ram,0x01f2edd4) */

void FUN_01f2ebbc(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  
  FUN_01e608f0();
  param_1[0x2688] = 0;
  param_1[0x268c] = 0;
  param_1[0x2685] = &PTR_LAB_04a65af0;
  param_1[0x2689] = &PTR_LAB_04a65af0;
  param_1[0x268d] = &PTR_LAB_04a65af0;
  param_1[0x2681] = &PTR_LAB_04a65af0;
  param_1[0x2682] = 0;
  *param_1 = &PTR_LAB_04a65760;
  param_1[0x269d] = &PTR_LAB_04a65b40;
  param_1[0x2690] = 0;
  param_1[0x2699] = &PTR_LAB_04a65b40;
  param_1[0x2691] = &PTR_LAB_04a65b40;
  puVar12 = param_1 + 0x2695;
  *puVar12 = &PTR_LAB_04a65b40;
  param_1[0x26a0] = 0;
  param_1[0x26a1] = &PTR_LAB_04a65b40;
  *(undefined8 *)((long)param_1 + 0x1357e) = 0;
  param_1[0x26ad] = 0;
  param_1[0x2694] = 0;
  param_1[0x2698] = 0;
  param_1[0x269c] = 0;
  param_1[0x26a8] = 0;
  *(undefined1 *)((long)param_1 + 0x1358a) = 0;
  param_1[0x26a4] = 0;
  param_1[0x26a5] = &PTR_LAB_04a65b40;
  param_1[0x26a9] = &PTR_LAB_04a65b40;
  param_1[0x26aa] = 0;
  *(undefined4 *)((long)param_1 + 0x13586) = 0x101;
  param_1[0x26ae] = 0;
  param_1[0x26af] = 0;
  *(undefined4 *)((long)param_1 + 0x13593) = 0;
  *(undefined8 *)((long)param_1 + 0x1358c) = 0;
  param_1[0x26b3] = 0x42c8000000000000;
  param_1[0x26b4] = 0xbf800000bf800000;
  param_1[0x26b5] = 0xbf800000;
  param_1[0x26b6] = 0;
  *(undefined2 *)(param_1 + 0x26b7) = 1;
  param_1[0x2683] = 0;
  param_1[0x2684] = 0;
  param_1[0x2686] = 0;
  param_1[0x2687] = 0;
  param_1[0x268a] = 0;
  param_1[0x268b] = 0;
  param_1[0x268e] = 0;
  param_1[0x268f] = 0;
  param_1[0x2692] = 0;
  param_1[0x2693] = 0;
  param_1[0x2696] = 0;
  param_1[0x2697] = 0;
  param_1[0x269a] = 0;
  param_1[0x269b] = 0;
  param_1[0x269e] = 0;
  param_1[0x269f] = 0;
  param_1[0x26a2] = 0;
  param_1[0x26a3] = 0;
  param_1[0x26a6] = 0;
  param_1[0x26a7] = 0;
  param_1[0x26ab] = 0;
  param_1[0x26ac] = 0;
  uVar11 = *(undefined8 *)(param_2 + 0x160);
  *(undefined4 *)((long)param_1 + 0x135c4) = *(undefined4 *)(param_2 + 0x168);
  *(undefined8 *)((long)param_1 + 0x135bc) = uVar11;
  *(undefined4 *)(param_1 + 0x26b9) = 0;
  *(undefined4 *)((long)param_1 + 0x135d4) = 0;
  *(undefined2 *)(param_1 + 0x26bb) = 0;
  *(undefined4 *)((long)param_1 + 0x135dc) = 0;
  *(undefined1 *)(param_1 + 0x26bc) = 0;
  *(undefined4 *)((long)param_1 + 0x135e4) = 1;
  puVar3 = PTR_FUN_04bc1df8;
  param_1[0x2682] = param_1;
  param_1[0x2683] = puVar3;
  puVar3 = PTR_FUN_04bc1e18;
  param_1[0x2684] = 0;
  param_1[0x2688] = 0;
  param_1[0x2686] = param_1;
  param_1[0x2687] = puVar3;
  puVar3 = PTR_LAB_04bc2128;
  param_1[0x268c] = 0;
  param_1[0x2690] = 0;
  param_1[0x268a] = param_1;
  param_1[0x268b] = puVar3;
  param_1[0x268e] = param_1;
  param_1[0x268f] = &LAB_01f2f19c;
  param_1[0x158e] = param_1 + 0x2681;
  param_1[0x158d] = param_1 + 0x2685;
  param_1[0x158f] = param_1 + 0x2689;
  param_1[0x1590] = param_1 + 0x268d;
  puVar3 = PTR_LAB_04bc1df0;
  param_1[0x26ac] = 0;
  param_1[0x26aa] = param_1;
  param_1[0x26ab] = puVar3;
  if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x26a9;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  puVar4 = PTR_FUN_04bc2110;
  puVar3 = PTR_LAB_04bc2108;
  param_1[0x2692] = param_1;
  param_1[0x2696] = param_1;
  param_1[0x269c] = 0;
  param_1[0x269a] = param_1;
  param_1[0x269b] = &LAB_01f2f328;
  param_1[0x2693] = puVar3;
  param_1[0x2694] = 0;
  param_1[0x26a0] = 0;
  param_1[0x2697] = puVar4;
  param_1[0x2698] = 0;
  param_1[0x269e] = param_1;
  param_1[0x269f] = &LAB_01f2f600;
  puVar4 = PTR_LAB_04bc2120;
  puVar3 = PTR_LAB_04bc2118;
  param_1[0x26a2] = param_1;
  param_1[0x26a3] = puVar3;
  puVar5 = PTR_DAT_04bb32f0;
  puVar3 = PTR_DAT_04bb2020;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x26a4] = 0;
  param_1[0x26a6] = param_1;
  param_1[0x26a7] = puVar4;
  param_1[0x26a8] = 0;
  puVar4 = PTR_DAT_04bb32e8;
  uVar11 = *(undefined8 *)puVar5;
  pcStack_78 = "Countdown";
  puVar9 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar9 == 0) {
    local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    puVar9 = &local_70;
    uVar6 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = CONCAT26((short)uVar6,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  uVar6 = *puVar9;
  uVar6 = FUN_00879dd0(uVar11,&local_80,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
  if ((uVar6 & 1) == 0) {
    local_80 = puVar3 + 0x10;
    pcStack_78 = "Halloween";
    lVar8 = *(long *)puVar4;
    uVar11 = *(undefined8 *)puVar5;
    puVar9 = (ulong *)(lVar8 + 0x4068);
    if (*(short *)puVar9 == 0) {
      local_70 = *(ulong *)(lVar8 + 0x4060);
      if ((char)(local_70 >> 0x20) < '\x05') {
        local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = local_68 + -0x15180;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      puVar9 = &local_70;
      uVar6 = local_70 >> 0x30;
      local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
      local_70 = CONCAT26((short)uVar6,(undefined6)local_70) & 0xff00ffffffffffff;
    }
    uVar6 = *puVar9;
    uVar6 = FUN_00879dd0(uVar11,&local_80,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
    if ((uVar6 & 1) == 0) {
      local_80 = puVar3 + 0x10;
      pcStack_78 = "HarvestFestival";
      lVar8 = *(long *)puVar4;
      uVar11 = *(undefined8 *)puVar5;
      puVar12 = param_1 + 0x26a5;
      puVar9 = (ulong *)(lVar8 + 0x4068);
      if (*(short *)puVar9 == 0) {
        local_70 = *(ulong *)(lVar8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = local_68 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        uVar6 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar6,(undefined6)local_70) & 0xff00ffffffffffff;
        puVar9 = &local_70;
      }
      uVar6 = *puVar9;
      uVar6 = FUN_00879dd0(uVar11,&local_80,uVar6,uVar6 >> 0x10,uVar6 >> 0x18,0);
      iVar7 = *(int *)(param_1 + 0x1599);
      if ((uVar6 & 1) == 0) goto LAB_01f2f0b0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1599);
      puVar12 = param_1 + 0x26a1;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1599);
    iVar10 = *(int *)((long)param_1 + 0xaccc);
    if (iVar7 < iVar10) {
      *(undefined8 **)(param_1[0x159a] + (long)iVar7 * 8) = param_1 + 0x15c2;
      iVar10 = *(int *)((long)param_1 + 0xaccc);
      iVar7 = *(int *)(param_1 + 0x1599) + 1;
      *(int *)(param_1 + 0x1599) = iVar7;
    }
    if (iVar7 < iVar10) {
      *(undefined8 **)(param_1[0x159a] + (long)iVar7 * 8) = param_1 + 0x2691;
      iVar7 = *(int *)(param_1 + 0x1599) + 1;
      *(int *)(param_1 + 0x1599) = iVar7;
    }
  }
  if (iVar7 < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar7 * 8) = puVar12;
    iVar7 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar7;
  }
LAB_01f2f0b0:
  iVar10 = *(int *)((long)param_1 + 0xaccc);
  if (iVar7 < iVar10) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar7 * 8) = param_1 + 0x269d;
    iVar10 = *(int *)((long)param_1 + 0xaccc);
    iVar7 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar7;
  }
  if (iVar7 < iVar10) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar7 * 8) = param_1 + 0x2699;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  uVar6 = (**(code **)(*(long *)param_1[1] + 0x180))();
  if (((uVar6 & 1) != 0) && (sVar2 = *(short *)PTR_DAT_04bb6298, sVar2 != -1)) {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,7);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 7 & 1) != 0) &&
       (uVar6 = FUN_02917058(*(undefined4 *)(param_1[1] + 0x508)), (uVar6 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x26bc) = 1;
    }
  }
  param_1[0x15ab] = param_1[0x15ab] | 0x4000000;
  return;
}

