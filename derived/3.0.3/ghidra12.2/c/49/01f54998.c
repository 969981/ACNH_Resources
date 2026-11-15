
/* WARNING: Removing unreachable block (ram,0x01f54cf4) */
/* WARNING: Removing unreachable block (ram,0x01f54cc4) */
/* WARNING: Removing unreachable block (ram,0x01f54c98) */
/* WARNING: Removing unreachable block (ram,0x01f54cb0) */
/* WARNING: Removing unreachable block (ram,0x01f54ce0) */
/* WARNING: Removing unreachable block (ram,0x01f54d0c) */

void FUN_01f54998(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long local_48;
  
  FUN_01e608f0();
  param_1[0x2688] = 0;
  param_1[0x268c] = 0;
  param_1[0x2690] = 0;
  param_1[0x2681] = &PTR_LAB_04a67768;
  param_1[0x2682] = 0;
  param_1[0x2698] = 0;
  param_1[0x2699] = &PTR_LAB_04a67768;
  param_1[0x2685] = &PTR_LAB_04a67768;
  param_1[0x2689] = &PTR_LAB_04a67768;
  param_1[0x268d] = &PTR_LAB_04a67768;
  param_1[0x2691] = &PTR_LAB_04a67768;
  param_1[0x2695] = &PTR_LAB_04a67768;
  *param_1 = &PTR_LAB_04a67370;
  param_1[0x26ca] = 0xffffffff0000001e;
  param_1[0x26cb] = 0x3c00000000;
  param_1[0x2694] = 0;
  param_1[0x269a] = 0;
  param_1[0x269d] = &PTR_LAB_04a677b8;
  param_1[0x26c4] = 0;
  param_1[0x26c3] = 0;
  param_1[0x26c2] = 0;
  param_1[0x26c8] = 0;
  param_1[0x26c7] = 0;
  param_1[0x26c6] = 0;
  param_1[0x26c5] = &PTR_LAB_04a677b8;
  param_1[0x26c9] = 0;
  param_1[0x26cc] = 0x3c;
  param_1[0x26ce] = 0;
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
  param_1[0x269b] = 0;
  param_1[0x269c] = 0;
  param_1[0x269e] = 0;
  param_1[0x269f] = 0;
  param_1[0x26a2] = 0;
  param_1[0x26a3] = 0;
  param_1[0x26a0] = 0;
  param_1[0x26a1] = &PTR_LAB_04a677b8;
  param_1[0x26a6] = 0;
  param_1[0x26a7] = 0;
  param_1[0x26a4] = 0;
  param_1[0x26a5] = &PTR_LAB_04a677b8;
  param_1[0x26aa] = 0;
  param_1[0x26ab] = 0;
  param_1[0x26a8] = 0;
  param_1[0x26a9] = &PTR_LAB_04a677b8;
  param_1[0x26ae] = 0;
  param_1[0x26af] = 0;
  param_1[0x26ac] = 0;
  param_1[0x26ad] = &PTR_LAB_04a677b8;
  param_1[0x26b2] = 0;
  param_1[0x26b3] = 0;
  param_1[0x26b0] = 0;
  param_1[0x26b1] = &PTR_LAB_04a677b8;
  param_1[0x26b6] = 0;
  param_1[0x26b7] = 0;
  param_1[0x26b4] = 0;
  param_1[0x26b5] = &PTR_LAB_04a677b8;
  param_1[0x26ba] = 0;
  param_1[0x26bb] = 0;
  param_1[0x26b8] = 0;
  param_1[0x26b9] = &PTR_LAB_04a677b8;
  param_1[0x26be] = 0;
  param_1[0x26bf] = 0;
  param_1[0x26bc] = 0;
  param_1[0x26bd] = &PTR_LAB_04a677b8;
  param_1[0x26c0] = 0;
  param_1[0x26c1] = &PTR_LAB_04a677b8;
  param_1[0x26cd] = PTR_DAT_04bb2010 + 0x10;
  param_1[0x26cf] = 0xffffffff00000003;
  *(undefined1 *)(param_1 + 0x26d0) = 0;
  *(undefined8 *)((long)param_1 + 0x13684) = 0;
  *(undefined8 *)((long)param_1 + 0x1368c) = 0;
  lVar15 = param_1[1];
  uVar1 = *(uint *)(lVar15 + 0x288) ^ *(uint *)(lVar15 + 0x288) << 0xb;
  *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
  *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
  uVar5 = *(uint *)(lVar15 + 0x294);
  uVar2 = uVar1 ^ uVar5;
  *(uint *)(lVar15 + 0x290) = uVar5;
  *(uint *)(lVar15 + 0x294) = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar2;
  lVar15 = param_1[1];
  uVar5 = *(uint *)(lVar15 + 0x294);
  uVar1 = *(uint *)(lVar15 + 0x288) ^ *(uint *)(lVar15 + 0x288) << 0xb;
  uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
  *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
  uVar6 = *(undefined4 *)(lVar15 + 0x290);
  *(uint *)(lVar15 + 0x290) = uVar5;
  *(uint *)(lVar15 + 0x294) = uVar1;
  *(undefined4 *)(lVar15 + 0x28c) = uVar6;
  *(uint *)((long)param_1 + 0x13694) =
       (int)((ulong)uVar1 * 0x1e >> 0x20) + (uVar2 >> 0x1e) * 0x1e + 0x348;
  *(undefined4 *)((long)param_1 + 0x136b4) = 0;
  param_1[0x26d3] = 0;
  *(undefined1 *)(param_1 + 0x26d4) = 0;
  *(undefined8 *)((long)param_1 + 0x136a4) = 0;
  uVar6 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined8 *)((long)param_1 + 0x136a9) = 0;
  *(undefined4 *)((long)param_1 + 0x136dc) = 0;
  *(undefined1 *)(param_1 + 0x26dc) = 0;
  *(undefined8 *)((long)param_1 + 0x136e4) = 0xfffe00000000;
  *(undefined4 *)(param_1 + 0x26d7) = uVar6;
  *(undefined8 *)((long)param_1 + 0x136cc) = 0;
  *(undefined8 *)((long)param_1 + 0x136d1) = 0;
  *(undefined8 *)((long)param_1 + 0x136bc) = 0;
  *(undefined8 *)((long)param_1 + 0x136c4) = 0;
  uVar16 = *(undefined8 *)PTR_DAT_04bc22a8;
  uVar3 = *(undefined8 *)(PTR_DAT_04bc22a8 + 8);
  uVar4 = *(undefined8 *)(PTR_DAT_04bc22a8 + 0x18);
  *(undefined8 *)((long)param_1 + 0x136fc) = *(undefined8 *)(PTR_DAT_04bc22a8 + 0x10);
  *(undefined8 *)((long)param_1 + 0x13704) = uVar4;
  *(undefined8 *)((long)param_1 + 0x136ec) = uVar16;
  *(undefined8 *)((long)param_1 + 0x136f4) = uVar3;
  *(undefined4 *)((long)param_1 + 0x13714) = 0;
  *(undefined8 *)((long)param_1 + 0x1370c) = 0;
  puVar11 = PTR_LAB_04bc2148;
  param_1[0x2684] = 0;
  param_1[0x2688] = 0;
  param_1[0x268c] = 0;
  param_1[0x2682] = param_1;
  param_1[0x2683] = puVar11;
  param_1[0x2686] = param_1;
  param_1[0x2687] = &LAB_01f553b4;
  param_1[0x268a] = param_1;
  param_1[0x268b] = &LAB_01f553b8;
  puVar11 = PTR_LAB_04bc2128;
  param_1[0x2690] = 0;
  param_1[0x268e] = param_1;
  param_1[0x268f] = puVar11;
  param_1[0x2692] = param_1;
  param_1[0x2693] = 0x88;
  puVar11 = PTR_FUN_04bc1e28;
  param_1[0x2694] = 1;
  param_1[0x2698] = 0;
  param_1[0x2696] = param_1;
  param_1[0x2697] = puVar11;
  param_1[0x158b] = param_1 + 0x2681;
  param_1[0x158e] = param_1 + 0x2685;
  param_1[0x158d] = param_1 + 0x2689;
  param_1[0x158f] = param_1 + 0x268d;
  param_1[0x1592] = param_1 + 0x2691;
  param_1[0x1595] = param_1 + 0x2695;
  puVar11 = PTR_LAB_04bc1df0;
  param_1[0x26c6] = param_1;
  param_1[0x26c8] = 0;
  param_1[0x26c7] = puVar11;
  iVar12 = *(int *)(param_1 + 0x1599);
  iVar14 = *(int *)((long)param_1 + 0xaccc);
  if (iVar12 < iVar14) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26c5;
    iVar14 = *(int *)((long)param_1 + 0xaccc);
    iVar12 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar12;
  }
  puVar11 = PTR_LAB_04bc2150;
  param_1[0x26a2] = param_1;
  param_1[0x26a3] = &LAB_01f553f0;
  param_1[0x269e] = param_1;
  param_1[0x26a4] = 0;
  param_1[0x26a8] = 0;
  param_1[0x269f] = puVar11;
  param_1[0x26a0] = 0;
  param_1[0x26a6] = param_1;
  param_1[0x26a7] = &LAB_01f55970;
  puVar11 = PTR_LAB_04bc2108;
  param_1[0x26ac] = 0;
  param_1[0x26aa] = param_1;
  param_1[0x26ab] = puVar11;
  puVar11 = PTR_FUN_04bc2110;
  param_1[0x26ae] = param_1;
  param_1[0x26af] = puVar11;
  puVar11 = PTR_FUN_04bc20e8;
  param_1[0x26b0] = 0;
  param_1[0x26b4] = 0;
  param_1[0x26b8] = 0;
  param_1[0x26b2] = param_1;
  param_1[0x26b3] = puVar11;
  param_1[0x26b6] = param_1;
  param_1[0x26b7] = &LAB_01f55ab0;
  param_1[0x26ba] = param_1;
  param_1[0x26bb] = 0x358;
  param_1[0x26bc] = 1;
  if (iVar12 < iVar14) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x269d;
    iVar14 = *(int *)((long)param_1 + 0xaccc);
    iVar12 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar12;
    if (iVar14 <= iVar12) goto LAB_01f54df8;
LAB_01f54f00:
    *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26a1;
    iVar12 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar12;
    if (iVar12 < *(int *)((long)param_1 + 0xaccc)) goto LAB_01f54e00;
  }
  else {
    if (iVar12 < iVar14) goto LAB_01f54f00;
LAB_01f54df8:
    if (iVar12 < iVar14) {
LAB_01f54e00:
      *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26a5;
      iVar12 = *(int *)(param_1 + 0x1599) + 1;
      *(int *)(param_1 + 0x1599) = iVar12;
    }
  }
  puVar8 = PTR_DAT_04bb32f0;
  puVar7 = PTR_DAT_04bb32e8;
  puVar11 = PTR_DAT_04bb2020;
  lVar15 = *(long *)PTR_DAT_04bb32f0;
  if (lVar15 == 0) goto LAB_01f551e8;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "Countdown";
  puVar10 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar10 == 0) {
    local_68 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_68 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
      local_48 = local_48 + -0x15180;
      local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    puVar10 = &local_68;
    uVar9 = local_68 >> 0x30;
    local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
    local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
  }
  uVar9 = *puVar10;
  uVar9 = FUN_00879dd0(lVar15,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
  if ((uVar9 & 1) == 0) {
    local_78 = puVar11 + 0x10;
    pcStack_70 = "Fireworks";
    puVar10 = (ulong *)(*(long *)puVar7 + 0x4068);
    if (*(short *)puVar10 == 0) {
      local_68 = *(ulong *)(*(long *)puVar7 + 0x4060);
      if ((char)(local_68 >> 0x20) < '\x05') {
        local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_48 = local_48 + -0x15180;
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      puVar10 = &local_68;
      uVar9 = local_68 >> 0x30;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
    }
    uVar9 = *puVar10;
    uVar9 = FUN_00879dd0(lVar15,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
    if ((uVar9 & 1) == 0) {
      local_78 = puVar11 + 0x10;
      pcStack_70 = "Halloween";
      uVar16 = *(undefined8 *)puVar8;
      puVar10 = (ulong *)(*(long *)puVar7 + 0x4068);
      if (*(short *)puVar10 == 0) {
        local_68 = *(ulong *)(*(long *)puVar7 + 0x4060);
        if ((char)(local_68 >> 0x20) < '\x05') {
          local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
          local_48 = local_48 + -0x15180;
          local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
        }
        uVar9 = local_68 >> 0x30;
        local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
        local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
        puVar10 = &local_68;
      }
      uVar9 = *puVar10;
      uVar9 = FUN_00879dd0(uVar16,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
      if ((uVar9 & 1) == 0) {
        local_78 = puVar11 + 0x10;
        pcStack_70 = "HarvestFestival";
        uVar16 = *(undefined8 *)puVar8;
        puVar10 = (ulong *)(*(long *)puVar7 + 0x4068);
        if (*(short *)puVar10 == 0) {
          local_68 = *(ulong *)(*(long *)puVar7 + 0x4060);
          if ((char)(local_68 >> 0x20) < '\x05') {
            local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            local_48 = local_48 + -0x15180;
            local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
          }
          puVar10 = &local_68;
          uVar9 = local_68 >> 0x30;
          local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
          local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
        }
        uVar9 = *puVar10;
        uVar9 = FUN_00879dd0(uVar16,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
        if ((uVar9 & 1) == 0) {
          local_78 = puVar11 + 0x10;
          pcStack_70 = "Carnival";
          uVar16 = *(undefined8 *)puVar8;
          puVar10 = (ulong *)(*(long *)puVar7 + 0x4068);
          if (*(short *)puVar10 == 0) {
            local_68 = *(ulong *)(*(long *)puVar7 + 0x4060);
            if ((char)(local_68 >> 0x20) < '\x05') {
              local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
              local_48 = local_48 + -0x15180;
              local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
            }
            puVar10 = &local_68;
            uVar9 = local_68 >> 0x30;
            local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
            local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
          }
          uVar9 = *puVar10;
          uVar9 = FUN_00879dd0(uVar16,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
          if ((uVar9 & 1) == 0) {
            local_78 = puVar11 + 0x10;
            pcStack_70 = "Easter";
            uVar16 = *(undefined8 *)puVar8;
            puVar10 = (ulong *)(*(long *)puVar7 + 0x4068);
            if (*(short *)puVar10 == 0) {
              local_68 = *(ulong *)(*(long *)puVar7 + 0x4060);
              if ((char)(local_68 >> 0x20) < '\x05') {
                local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
                local_48 = local_48 + -0x15180;
                local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
              }
              puVar10 = &local_68;
              uVar9 = local_68 >> 0x30;
              local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
              local_68 = CONCAT26((short)uVar9,(undefined6)local_68) & 0xff00ffffffffffff;
            }
            uVar9 = *puVar10;
            uVar9 = FUN_00879dd0(uVar16,&local_78,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
            iVar12 = *(int *)(param_1 + 0x1599);
            if ((uVar9 & 1) == 0) goto LAB_01f551e8;
            param_1[0x26c0] = 0;
            param_1[0x26be] = param_1;
            param_1[0x26bf] = &LAB_01f56b68;
            if (*(int *)((long)param_1 + 0xaccc) <= iVar12) goto LAB_01f551e8;
            *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26bd;
          }
          else {
            param_1[0x26c2] = param_1;
            param_1[0x26c3] = &LAB_01f567f4;
            iVar12 = *(int *)(param_1 + 0x1599);
            param_1[0x26c4] = 0;
            if (*(int *)((long)param_1 + 0xaccc) <= iVar12) goto LAB_01f551e8;
            *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26c1;
          }
          goto LAB_01f551dc;
        }
        puVar13 = &LAB_01f56360;
        puVar11 = PTR_LAB_04bc2120;
      }
      else {
        puVar13 = &LAB_01f55ecc;
        puVar11 = PTR_LAB_04bc2118;
      }
      param_1[0x26c3] = puVar13;
      param_1[0x26c2] = param_1;
      param_1[0x26c4] = 0;
      param_1[0x26be] = param_1;
      param_1[0x26bf] = puVar11;
      param_1[0x26c0] = 0;
      iVar12 = *(int *)(param_1 + 0x1599);
      if (iVar12 < *(int *)((long)param_1 + 0xaccc)) {
        *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26bd;
        iVar12 = *(int *)(param_1 + 0x1599) + 1;
        *(int *)(param_1 + 0x1599) = iVar12;
        if (*(int *)((long)param_1 + 0xaccc) <= iVar12) goto LAB_01f551e8;
      }
      else if (*(int *)((long)param_1 + 0xaccc) <= iVar12) goto LAB_01f551e8;
      *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26c1;
    }
    else {
      iVar12 = *(int *)(param_1 + 0x1599);
      if (iVar12 < *(int *)((long)param_1 + 0xaccc)) {
        *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26b5;
        iVar12 = *(int *)(param_1 + 0x1599) + 1;
        *(int *)(param_1 + 0x1599) = iVar12;
        if (*(int *)((long)param_1 + 0xaccc) <= iVar12) goto LAB_01f551e8;
      }
      else if (*(int *)((long)param_1 + 0xaccc) <= iVar12) goto LAB_01f551e8;
      *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26b9;
    }
LAB_01f551dc:
    iVar12 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar12;
    goto LAB_01f551e8;
  }
  iVar12 = *(int *)(param_1 + 0x1599);
  iVar14 = *(int *)((long)param_1 + 0xaccc);
  if (iVar12 < iVar14) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x15c2;
    iVar14 = *(int *)((long)param_1 + 0xaccc);
    iVar12 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar12;
    if (iVar12 < iVar14) {
LAB_01f54fe8:
      *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26a9;
      iVar14 = *(int *)((long)param_1 + 0xaccc);
      iVar12 = *(int *)(param_1 + 0x1599) + 1;
      *(int *)(param_1 + 0x1599) = iVar12;
    }
  }
  else if (iVar12 < iVar14) goto LAB_01f54fe8;
  if (iVar12 < iVar14) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26ad;
    iVar12 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar12;
  }
  *(undefined1 *)(param_1 + 0x15e6) = 1;
LAB_01f551e8:
  if (iVar12 < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar12 * 8) = param_1 + 0x26b1;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  param_1[0x15ab] = param_1[0x15ab] | 0x4000000;
  return;
}

