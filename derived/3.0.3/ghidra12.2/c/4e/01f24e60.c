
/* WARNING: Removing unreachable block (ram,0x01f2523c) */
/* WARNING: Removing unreachable block (ram,0x01f2520c) */
/* WARNING: Removing unreachable block (ram,0x01f25224) */
/* WARNING: Removing unreachable block (ram,0x01f25284) */

void FUN_01f24e60(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  
  FUN_01ef9bf0();
  param_1[0x251c] = 0;
  param_1[0x2520] = 0;
  param_1[0x2524] = 0;
  param_1[0x2519] = &PTR_LAB_04a65260;
  param_1[0x251d] = &PTR_LAB_04a65260;
  param_1[0x2521] = &PTR_LAB_04a65260;
  param_1[0x2525] = &PTR_LAB_04a65260;
  *param_1 = &PTR_LAB_04a64e58;
  param_1[0x2515] = &PTR_LAB_04a65260;
  param_1[0x2516] = 0;
  param_1[0x2528] = 0;
  param_1[0x2529] = &PTR_LAB_04a652b0;
  param_1[0x252d] = &PTR_LAB_04a652b0;
  param_1[0x2531] = &PTR_LAB_04a652b0;
  param_1[0x2517] = 0;
  param_1[0x2518] = 0;
  param_1[0x252c] = 0;
  param_1[0x2530] = 0;
  param_1[0x2538] = 0;
  param_1[0x253d] = 0xfffe;
  *(undefined1 *)(param_1 + 0x253e) = 0;
  *(undefined8 *)((long)param_1 + 0x129fc) = 0;
  *(undefined8 *)((long)param_1 + 0x129f4) = 0;
  param_1[0x251a] = 0;
  param_1[0x251b] = 0;
  param_1[0x251e] = 0;
  param_1[0x251f] = 0;
  param_1[0x2522] = 0;
  param_1[0x2523] = 0;
  param_1[0x2526] = 0;
  param_1[0x2527] = 0;
  param_1[0x252a] = 0;
  param_1[0x252b] = 0;
  param_1[0x252e] = 0;
  param_1[0x252f] = 0;
  param_1[0x2532] = 0;
  param_1[0x2533] = 0;
  param_1[0x2536] = 0;
  param_1[0x2537] = 0;
  param_1[0x2534] = 0;
  param_1[0x2535] = &PTR_LAB_04a652b0;
  param_1[0x253b] = 0;
  param_1[0x253c] = 0;
  param_1[0x2539] = PTR_DAT_04bc2a60 + 0x10;
  param_1[0x253a] = param_2;
  *(undefined4 *)((long)param_1 + 0x12a04) = *(undefined4 *)(param_2 + 0x50c);
  param_1[0x2545] = 0x1e00000000;
  param_1[0x2541] = 0x1e00000000;
  param_1[0x2542] = 0;
  param_1[0x2543] = 0x300000000;
  param_1[0x2544] = 0x1e00000000;
  puVar1 = PTR_FUN_04bc20e8;
  param_1[0x2518] = 0;
  param_1[0x251c] = 0;
  param_1[0x2520] = 0;
  param_1[0x2516] = param_1;
  param_1[0x2517] = puVar1;
  param_1[0x251a] = param_1;
  param_1[0x251b] = FUN_01f252ac;
  param_1[0x251e] = param_1;
  param_1[0x251f] = FUN_01f2541c;
  param_1[0x2522] = param_1;
  param_1[0x2523] = &LAB_01f254a0;
  puVar1 = PTR_LAB_04bc1e20;
  param_1[0x2524] = 0;
  param_1[0x252c] = 0;
  param_1[0x252a] = param_1;
  param_1[0x252b] = puVar1;
  param_1[0x252e] = param_1;
  param_1[0x252f] = 0x88;
  param_1[0x2530] = 1;
  puVar1 = PTR_FUN_04bc1e28;
  param_1[0x2534] = 0;
  param_1[0x2532] = param_1;
  param_1[0x2533] = puVar1;
  iVar3 = *(int *)(param_1 + 0x1599);
  if (iVar3 < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = param_1 + 0x2515;
    iVar3 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar3;
  }
  lVar6 = *(long *)PTR_DAT_04bb32f0;
  if (lVar6 != 0) {
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "Fireworks";
    puVar4 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar4 == 0) {
      local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_70 >> 0x20) < '\x05') {
        local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = local_68 + -0x15180;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar2 = local_70 >> 0x30;
      local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
      local_70 = CONCAT26((short)uVar2,(undefined6)local_70) & 0xff00ffffffffffff;
      puVar4 = &local_70;
    }
    uVar2 = *puVar4;
    uVar2 = FUN_00879dd0(lVar6,&local_80,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
    puVar7 = param_1 + 0x2519;
    if ((uVar2 & 1) == 0) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "Countdown";
      puVar4 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar4 == 0) {
        local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = local_68 + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        puVar4 = &local_70;
        uVar2 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar2,(undefined6)local_70) & 0xff00ffffffffffff;
      }
      uVar2 = *puVar4;
      uVar2 = FUN_00879dd0(lVar6,&local_80,uVar2,uVar2 >> 0x10,uVar2 >> 0x18,0);
      if ((uVar2 & 1) == 0) {
        iVar3 = *(int *)(param_1 + 0x1599);
        goto LAB_01f251c4;
      }
      param_1[0x2526] = param_1;
      param_1[0x2527] = 800;
      param_1[0x2528] = 1;
      puVar7 = param_1 + 0x2525;
    }
    iVar3 = *(int *)(param_1 + 0x1599);
    if (iVar3 < *(int *)((long)param_1 + 0xaccc)) {
      *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = puVar7;
      iVar3 = *(int *)(param_1 + 0x1599) + 1;
      *(int *)(param_1 + 0x1599) = iVar3;
    }
  }
LAB_01f251c4:
  iVar5 = *(int *)((long)param_1 + 0xaccc);
  if (iVar3 < iVar5) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = param_1 + 0x251d;
    iVar5 = *(int *)((long)param_1 + 0xaccc);
    iVar3 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar3;
  }
  if (iVar3 < iVar5) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = param_1 + 0x2521;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  param_1[0x158b] = param_1 + 0x2529;
  param_1[0x1592] = param_1 + 0x252d;
  param_1[0x1595] = param_1 + 0x2531;
  puVar1 = PTR_LAB_04bc1650;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    param_1[0x2538] = 0;
    param_1[0x2536] = param_1;
    param_1[0x2537] = puVar1;
    param_1[0x1598] = param_1 + 0x2535;
  }
  return;
}

