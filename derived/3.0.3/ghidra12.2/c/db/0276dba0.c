
/* WARNING: Removing unreachable block (ram,0x0276dc44) */
/* WARNING: Removing unreachable block (ram,0x0276dc50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0276dba0(long *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined2 uVar14;
  ushort uVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  long *plVar33;
  char cVar34;
  byte bVar35;
  long lVar36;
  long lVar37;
  long *plVar38;
  long *plVar39;
  long lVar40;
  byte *pbVar41;
  char cVar42;
  long lVar43;
  undefined8 *puVar44;
  undefined *puVar45;
  long lVar46;
  uint local_114;
  byte local_d0 [4];
  undefined1 auStack_cc [4];
  byte local_c8 [4];
  uint local_c4;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined **local_b0;
  uint *local_a8;
  undefined8 *local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  uint local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_6c;
  
  lVar36 = *param_1;
  if (0 < lVar36) {
    puVar44 = *(undefined8 **)PTR_DAT_04bb48c8;
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,3);
    ppuVar1 = local_b0;
    local_b0._0_4_ = 3;
    iVar20 = (int)local_b0;
    uVar22 = *(uint *)(puVar44 + 0xb);
    lVar36 = puVar44[0xc];
    local_b0 = ppuVar1;
    if (*(char *)(puVar44 + 1) == '\0') {
      uVar26 = nn::oe::GetProgramTotalActiveTime();
      *puVar44 = uVar26;
      *(undefined1 *)(puVar44 + 1) = 1;
    }
    else {
      uVar26 = *puVar44;
    }
    if (uVar22 < 4) {
      iVar20 = 0;
    }
    *(undefined8 *)(lVar36 + (long)iVar20 * 8) = uVar26;
    lVar36 = *param_1;
  }
  if ((*(char *)((long)param_1 + 0x29) != '\0') || (0 < lVar36)) {
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
    FUN_01388630();
    FUN_01388cf0(1);
  }
  lVar36 = *(long *)PTR_DAT_04bb2800;
  *(undefined8 *)(lVar36 + 0x26e0) = 3;
  *(undefined8 *)(lVar36 + 0x26c8) = 1;
  *(undefined4 *)(lVar36 + 0x2720) = 0;
  *(undefined8 *)(lVar36 + 0x26ec) = 4;
  *(undefined8 *)(lVar36 + 0x26bc) = 0;
  *(undefined2 *)(lVar36 + 0x26c4) = 0;
  *(undefined8 *)(lVar36 + 0x26d4) = 2;
  *(undefined2 *)(lVar36 + 0x26d0) = 0;
  *(undefined2 *)(lVar36 + 0x26dc) = 0;
  *(undefined2 *)(lVar36 + 0x26e8) = 0;
  *(undefined2 *)(lVar36 + 0x26f4) = 0;
  *(undefined2 *)(lVar36 + 0x2700) = 0;
  *(undefined2 *)(lVar36 + 0x270c) = 0;
  *(undefined2 *)(lVar36 + 0x2718) = 0;
  *(undefined2 *)(lVar36 + 0x2724) = 0;
  *(undefined2 *)(lVar36 + 0x2730) = 0;
  *(undefined8 *)(lVar36 + 0x26f8) = 5;
  *(undefined8 *)(lVar36 + 0x2704) = 6;
  *(undefined8 *)(lVar36 + 10000) = 7;
  *(undefined4 *)(lVar36 + 0x271c) = 8;
  *(undefined8 *)(lVar36 + 0x2728) = 9;
  if (*(char *)((long)param_1 + 0x29) == '\0') {
    *(undefined1 *)(*(long *)PTR_DAT_04bb4910 + 0x88) = 1;
  }
  plVar39 = (long *)PTR_DAT_04bb46b0;
  lVar36 = *(long *)PTR_DAT_04bb46b0;
  if (lVar36 == 0) {
    return;
  }
  puVar44 = *(undefined8 **)(lVar36 + 0x10);
  if ((*(byte *)(lVar36 + 0x453) & 1) == 0) {
    lVar36 = (**(code **)(*(long *)*puVar44 + 0x38))();
    if (lVar36 == 0) {
      return;
    }
    lVar36 = lVar36 + 0x70;
  }
  else {
    if (puVar44 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar44[0x26] == (long *)0x0) {
      return;
    }
    lVar36 = (**(code **)(*(long *)puVar44[0x26] + 0x38))();
    if (lVar36 == 0) {
      return;
    }
  }
  if (*plVar39 == 0) {
    return;
  }
  lVar27 = (**(code **)(*(long *)**(undefined8 **)(*plVar39 + 0x10) + 0x30))();
  if (lVar27 == 0) {
    return;
  }
  lVar37 = *(long *)(&LAB_00284e28 + lVar27);
  if (lVar37 == 0) {
    uVar28 = 0;
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(&LAB_00284e28 + lVar27);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 == 0) goto LAB_0276de00;
    }
    plVar33 = *(long **)(lVar37 + 0x20);
    if (plVar33 != (long *)0x0) {
      local_b0 = *(undefined ***)(&LAB_00284e08 + lVar27);
      local_a8 = *(uint **)(&LAB_00284e10 + lVar27);
      local_a0 = (undefined8 *)0x28370;
      (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
    }
  }
LAB_0276de00:
  FUN_0280ecd0(*(long *)(&LAB_00284e10 + lVar27) + *(long *)(&LAB_00284e08 + lVar27),
               *(undefined1 *)((long)param_1 + 0x2c));
  if ((((uVar28 & 1) != 0) && (*(long *)(&LAB_00284e28 + lVar27) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar27) + 0x18),
     puVar44 != (undefined8 *)0x0)) {
    (**(code **)*puVar44)();
  }
  puVar45 = PTR_DAT_04bb2020;
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_a8 = (uint *)0x40a7482;
    lVar37 = *(long *)PTR_DAT_04bb49a0;
    uVar19 = FUN_006bd550("LE_DayRollBack",0);
    local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar19);
    uVar26 = FUN_01b5b650(lVar37 + 0x238,&local_c0);
    FUN_01b5cf20(&local_b0,uVar26,0,0,0);
  }
  if (*param_1 != 0) {
    ppuVar1 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)0x40a5e98;
    local_b0 = ppuVar1;
    FUN_0273f3c4(&local_b0,0);
    local_a8 = (uint *)0x40bfb63;
    local_b0 = ppuVar1;
    iVar20 = FUN_0273ea30(&local_b0);
    if (iVar20 != 0) {
      local_a8 = (uint *)0x40a5e98;
      local_b0 = ppuVar1;
      FUN_0273f3c4(&local_b0,iVar20);
      puVar45 = PTR_DAT_04bb2020;
      switch(iVar20) {
      case 1:
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x4071b35;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,1);
        local_a8 = (uint *)0x40e95ae;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40b04e8;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40a09cb;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x405dcb8;
        break;
      case 2:
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x4071b35;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40e95ae;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,1);
        local_a8 = (uint *)0x40b04e8;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40a09cb;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40ac603;
        break;
      case 3:
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x4071b35;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40e95ae;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40b04e8;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,1);
        local_a8 = (uint *)0x40a09cb;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x4078514;
        break;
      case 4:
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x4071b35;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40e95ae;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40b04e8;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40a09cb;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,1);
        local_a8 = (uint *)0x40ffc65;
        break;
      default:
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x4071b35;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40e95ae;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40b04e8;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40a09cb;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x407d3f8;
      }
      local_b0 = (undefined **)(puVar45 + 0x10);
      lVar37 = *(long *)PTR_DAT_04bb49a0;
      uVar19 = FUN_006bd550(local_a8,0);
      local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar19);
      uVar26 = FUN_01b5b650(lVar37 + 0x238,&local_c0);
      FUN_01b5cf20(&local_b0,uVar26,0,0,0);
    }
    local_a8 = (uint *)0x40bfb63;
    local_b0 = ppuVar1;
    FUN_0273f3c4(&local_b0,0);
    puVar45 = PTR_DAT_04bb2020;
  }
  local_a8 = (uint *)0x40c11e8;
  local_b0 = (undefined **)(puVar45 + 0x10);
  uVar28 = FUN_0273f0a0(&local_b0);
  if ((uVar28 & 1) != 0) {
    pcStack_b8 = "IslandDevQuestComplete";
    local_c0 = (undefined **)(puVar45 + 0x10);
    uVar28 = FUN_0273f0a0(&local_c0);
    if ((uVar28 & 1) != 0) {
      local_b0 = (undefined **)(puVar45 + 0x10);
      local_a8 = (uint *)0x40c11e8;
      FUN_0273f3c4(&local_b0,0);
    }
  }
  if (*(char *)((long)param_1 + 0x2a) == '\0' && *(char *)((long)param_1 + 0x29) == '\0') {
    cVar42 = '\0';
    cVar34 = '\0';
  }
  else {
    FUN_0081673c(*(undefined8 *)PTR_DAT_04bb3448,lVar36);
    cVar34 = *(char *)((long)param_1 + 0x2a);
    cVar42 = *(char *)((long)param_1 + 0x29);
  }
  plVar33 = (long *)(lVar36 + 0x1bf198);
  if (cVar34 != '\0' || cVar42 != '\0') {
    FUN_01b358f0(*(undefined8 *)PTR_DAT_04bb4fa8);
  }
  plVar31 = (long *)(lVar36 + 0x1a0b50);
  plVar3 = (long *)(lVar36 + 0x196270);
  plVar4 = (long *)(&LAB_001191c0 + lVar36);
  plVar5 = (long *)(lVar36 + 0xe7120);
  plVar6 = (long *)(lVar27 + 0x276cb8);
  if ((char)param_1[5] != '\0') {
    local_a8 = (uint *)0x40bfcce;
    local_b0 = (undefined **)(puVar45 + 0x10);
    FUN_0273f3c4(&local_b0,1);
    local_a8 = (uint *)0x40b6c65;
    local_b0 = (undefined **)(puVar45 + 0x10);
    FUN_0273f3c4(&local_b0,1);
    if ((char)param_1[5] != '\0') {
      lVar37 = *(long *)(lVar36 + 0x1c27c0);
      if (lVar37 == 0) {
        FUN_026d4074(*(long *)(lVar36 + 0x1c27a8) + *(long *)(lVar36 + 0x1c27a0),param_1);
      }
      else {
        if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
          uVar28 = 0;
LAB_0276e308:
          plVar38 = *(long **)(lVar37 + 0x20);
          if (plVar38 != (long *)0x0) {
            local_b0 = *(undefined ***)(lVar36 + 0x1c27a0);
            local_a8 = *(uint **)(lVar36 + 0x1c27a8);
            local_a0 = (undefined8 *)0xe0ae8;
            (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
          }
        }
        else {
          uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
          lVar37 = *(long *)(lVar36 + 0x1c27c0);
          uVar28 = uVar28 & 0xffffffff;
          if (lVar37 != 0) goto LAB_0276e308;
        }
        FUN_026d4074(*(long *)(lVar36 + 0x1c27a8) + *(long *)(lVar36 + 0x1c27a0),param_1);
        if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1c27c0) != 0)) &&
           (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1c27c0) + 0x18),
           puVar44 != (undefined8 *)0x0)) {
          (**(code **)*puVar44)();
        }
      }
    }
  }
  FUN_011f4730(param_1);
  FUN_0169821c(param_1);
  iVar20 = 0;
  lVar37 = *(long *)PTR_DAT_04bb3968;
  do {
    puVar44 = (undefined8 *)(lVar37 + 0x4f18 + (long)iVar20 * 0x30);
    iVar20 = iVar20 + 1;
    *puVar44 = 0;
    puVar44[1] = 0x244db4da00000000;
    *(undefined1 *)puVar44[3] = 0;
    puVar16 = PTR_DAT_04bb37e0;
  } while (iVar20 != 0x80);
  if (((*(char *)((long)param_1 + 0x2a) != '\0') || (*(char *)((long)param_1 + 0x29) != '\0')) ||
     (*(char *)((long)param_1 + 0x2b) != '\0')) {
    iVar20 = 0;
    lVar37 = *(long *)PTR_DAT_04bb46e8;
    do {
      uVar14 = *(undefined2 *)puVar16;
      lVar43 = lVar37 + 8 + (long)iVar20 * 0x38;
      iVar20 = iVar20 + 1;
      *(undefined2 *)(lVar43 + 0x28) = uVar14;
      uVar11 = puVar16[2];
      *(undefined1 *)(lVar43 + 0x2a) = uVar11;
      uVar12 = puVar16[3];
      *(undefined1 *)(lVar43 + 0x2b) = uVar12;
      uVar19 = *(undefined4 *)(puVar16 + 4);
      *(undefined2 *)(lVar43 + 0x30) = uVar14;
      *(undefined1 *)(lVar43 + 0x32) = uVar11;
      *(undefined1 *)(lVar43 + 0x33) = uVar12;
      *(undefined4 *)(lVar43 + 0x2c) = uVar19;
      *(undefined4 *)(lVar43 + 0x34) = uVar19;
      **(undefined1 **)(lVar43 + 8) = 0;
    } while (iVar20 != 0x80);
  }
  if (*param_1 != 0) {
    FUN_0252d29c();
    if ((*(long **)(lVar36 + 0x28) == (long *)0x0) ||
       (puVar44 = (undefined8 *)**(long **)(lVar36 + 0x28), puVar44 == (undefined8 *)0x0)) {
      local_114 = 0;
    }
    else {
      local_114 = (**(code **)*puVar44)();
    }
    uVar28 = 0;
    ppuVar1 = (undefined **)(puVar45 + 0x10);
    plVar38 = (long *)(*(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8) + 0x1e33b8);
    do {
      local_c4 = (uint)uVar28;
      if (((plVar38[-1] != 0 || *plVar38 != 0) && (*(long *)PTR_DAT_04bb46b0 != 0)) &&
         (lVar37 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar28 & 0xffffffff), lVar37 != 0)) {
        plVar39 = (long *)(lVar37 + 0x18300);
        lVar43 = *(long *)(lVar37 + 0x18320);
        if (lVar43 == 0) {
          uVar29 = 0;
        }
        else {
          if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
            uVar29 = 0;
            plVar30 = *(long **)(lVar43 + 0x20);
          }
          else {
            uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
            lVar43 = *(long *)(lVar37 + 0x18320);
            uVar29 = uVar29 & 0xffffffff;
            if (lVar43 == 0) goto LAB_0276e558;
            plVar30 = *(long **)(lVar43 + 0x20);
          }
          if (plVar30 != (long *)0x0) {
            local_b0 = (undefined **)*plVar39;
            local_a8 = *(uint **)(lVar37 + 0x18308);
            local_a0 = (undefined8 *)0x1000;
            (**(code **)(*plVar30 + 0x20))(plVar30,&local_b0);
            lVar43 = *(long *)(lVar37 + 0x18320);
          }
        }
LAB_0276e558:
        local_b0 = (undefined **)*plVar39;
        local_a8 = *(uint **)(lVar37 + 0x18308);
        pcStack_b8 = "WHEREAREN_PlayedContentsBefore";
        lVar46 = (long)local_b0 + (long)local_a8;
        local_c0 = ppuVar1;
        if ((lVar43 == 0) || (plVar30 = *(long **)(lVar43 + 0x20), plVar30 == (long *)0x0)) {
          lVar43 = lVar46;
        }
        else {
          local_a0 = (undefined8 *)0x1000;
          (**(code **)(*plVar30 + 0x20))(plVar30,&local_b0);
          lVar43 = *(long *)(lVar37 + 0x18308) + *plVar39;
        }
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x40c11fe;
        local_b0 = ppuVar2;
        uVar19 = FUN_0274bbb0(lVar43,&local_b0);
        FUN_0274d230(lVar46,&local_c0,uVar19,&local_c4);
        if ((*(long *)(lVar37 + 0x18320) != 0) &&
           (plVar30 = *(long **)(*(long *)(lVar37 + 0x18320) + 0x20), plVar30 != (long *)0x0)) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x18308);
          local_a0 = (undefined8 *)0x1000;
          (**(code **)(*plVar30 + 0x20))(plVar30,&local_b0);
        }
        local_a8 = (uint *)0x40c9acd;
        local_b0 = ppuVar2;
        iVar20 = FUN_0274bbb0(*(long *)(lVar37 + 0x18308) + *plVar39,&local_b0);
        if ((*(long *)(lVar37 + 0x18320) != 0) &&
           (plVar30 = *(long **)(*(long *)(lVar37 + 0x18320) + 0x20), plVar30 != (long *)0x0)) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x18308);
          local_a0 = (undefined8 *)0x1000;
          (**(code **)(*plVar30 + 0x20))(plVar30,&local_b0);
        }
        puVar45 = PTR_DAT_04bb2020;
        lVar43 = *(long *)(lVar37 + 0x18308) + *plVar39;
        if (iVar20 == 0) {
          local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_a8 = (uint *)0x406d115;
          FUN_0274f580(lVar43,&local_b0,1);
        }
        else {
          local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_a8 = (uint *)0x406d115;
          FUN_0274f1c0(lVar43,&local_b0,0);
        }
        if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x18320) != 0)) &&
           (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x18320) + 0x18),
           puVar44 != (undefined8 *)0x0)) {
          (**(code **)*puVar44)();
        }
      }
      plVar39 = (long *)PTR_DAT_04bb46b0;
      uVar28 = uVar28 + 1;
      plVar38 = plVar38 + 9;
    } while (uVar28 != 8);
    if ((((local_114 & 1) != 0) && (*(long *)(lVar36 + 0x28) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x28) + 8), puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  iVar20 = 0;
  ppuVar1 = (undefined **)(puVar45 + 0x10);
  do {
    lVar37 = *plVar39;
    local_c0 = (undefined **)CONCAT44(local_c0._4_4_,iVar20);
    if (lVar37 == 0) {
LAB_0276e790:
      lVar37 = 0;
      plVar38 = _DAT_00000028;
      if (_DAT_00000028 != (long *)0x0) goto LAB_0276e79c;
LAB_0276e75c:
      uVar28 = 0;
    }
    else {
      puVar44 = *(undefined8 **)(lVar37 + 0x10);
      if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
        lVar43 = (**(code **)(*(long *)*puVar44 + 0x38))();
        lVar37 = 0;
        if (lVar43 != 0) {
          lVar37 = lVar43 + 0x70;
        }
        plVar38 = *(long **)(lVar37 + 0x28);
      }
      else {
        if ((puVar44 == (undefined8 *)0x0) || ((long *)puVar44[0x26] == (long *)0x0))
        goto LAB_0276e790;
        lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))();
        plVar38 = *(long **)(lVar37 + 0x28);
      }
      if (plVar38 == (long *)0x0) goto LAB_0276e75c;
LAB_0276e79c:
      uVar28 = 0;
      if ((undefined8 *)*plVar38 != (undefined8 *)0x0) {
        uVar28 = (*(code *)**(undefined8 **)*plVar38)();
      }
    }
    if ((uint)local_c0 < 8) {
      lVar43 = *(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8) +
               ((ulong)local_c0 & 0xffffffff) * 0x48;
      bVar18 = *(long *)(lVar43 + 0x1e33b0) != 0 || *(long *)(lVar43 + 0x1e33b8) != 0;
    }
    else {
      bVar18 = false;
    }
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0x28) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x28) + 8), puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
    if ((bVar18) && (lVar37 = FUN_026eec4c(*plVar39,(ulong)local_c0 & 0xffffffff), lVar37 != 0)) {
      if (*param_1 != 0) {
        ppuVar2 = (undefined **)(puVar45 + 0x10);
        local_a8 = (uint *)0x40d9830;
        local_b0 = ppuVar2;
        FUN_0273f3c4(&local_b0,0);
        local_a8 = (uint *)0x40aaed2;
        local_b0 = ppuVar2;
        iVar21 = FUN_0274ce10(&local_c0,&local_b0);
        if (0 < iVar21) {
          local_a8 = (uint *)0x40bf712;
          local_b0 = ppuVar2;
          uVar28 = FUN_0273f0a0(&local_b0);
          if ((uVar28 & 1) == 0) {
            FUN_01b46be0(&local_b0);
            ppuVar2 = local_c0;
            if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
               (iVar21 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar21 != 0)) {
              FUN_00dd5f80(PTR_DAT_04bb8aa0);
              __cxa_guard_release(PTR_DAT_04bb8aa8);
            }
            if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
              uVar28 = 0;
              do {
                if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar28 * 4) == 0x19)
                goto LAB_0276e8cc;
                uVar28 = uVar28 + 1;
              } while (*(uint *)PTR_DAT_04bb8aa0 != uVar28);
            }
            uVar28 = 0;
LAB_0276e8cc:
            lVar37 = *(long *)PTR_DAT_04bb32e8;
            uVar15 = *(ushort *)(lVar37 + 0x4060);
            bVar35 = *(byte *)(lVar37 + 0x4062);
            bVar13 = *(byte *)(lVar37 + 0x4063);
            nn::time::IsValidDate((uint)uVar15,(uint)bVar35,(uint)bVar13);
            local_90 = (undefined4)uVar28;
            local_8c = 8;
            local_88 = CONCAT11(local_88._1_1_,0x18);
            local_7c = local_7c & 0xffff0000;
            local_84 = *(uint *)PTR_DAT_04bb37e0;
            local_80 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            local_a8 = (uint *)CONCAT44((uint)bVar13 << 0x18 | (uint)bVar35 << 0x10 | (uint)uVar15,
                                        (int)ppuVar2);
            lVar37 = (*(code *)local_b0[4])(&local_b0,*(undefined8 *)PTR_DAT_04bc0580);
            plVar39 = (long *)PTR_DAT_04bb46b0;
            puVar45 = PTR_DAT_04bb2020;
            if (lVar37 != 0) {
              plVar30 = *(long **)PTR_DAT_04bb4fa8;
              lVar43 = *plVar30;
              plVar38 = (long *)(*(int *)((long)plVar30 + 0x14) + lVar37);
              *plVar30 = (long)plVar38;
              *plVar38 = lVar43;
              plVar38[1] = (long)plVar30;
              if (lVar43 != 0) {
                *(long **)(lVar43 + 8) = plVar38;
              }
              *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
            }
          }
          local_a8 = (uint *)0x40bf712;
          local_b0 = (undefined **)(puVar45 + 0x10);
          FUN_0273f3c4(&local_b0,1);
          local_a8 = (uint *)0x405dcce;
          local_b0 = (undefined **)(puVar45 + 0x10);
          FUN_0273f3c4(&local_b0,0);
        }
        if (*param_1 != 0) {
          ppuVar2 = (undefined **)(puVar45 + 0x10);
          local_a8 = (uint *)0x40fabed;
          local_b0 = ppuVar2;
          iVar21 = FUN_0274ce10(&local_c0,&local_b0);
          if (iVar21 != 0) {
            local_a8 = (uint *)0x40fe91a;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40f94e1;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40e4252;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40a5e00;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40e952a;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40a7491;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40eeafa;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40a5e1d;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
            local_a8 = (uint *)0x40fabed;
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,0);
          }
        }
      }
      local_a8 = (uint *)0x40ee888;
      local_b0 = ppuVar1;
      iVar21 = FUN_0274ce10(&local_c0,&local_b0);
      if (iVar21 != 0) {
        local_b0 = (undefined **)(puVar45 + 0x10);
        local_a8 = (uint *)0x40ffc86;
        FUN_0273f3c4(&local_b0,1);
      }
      if (*param_1 != 0) {
        ppuVar2 = (undefined **)(puVar45 + 0x10);
        local_a8 = (uint *)0x40d4667;
        local_b0 = ppuVar2;
        iVar21 = FUN_0274ce10(&local_c0,&local_b0);
        if (iVar21 != 0) {
          local_a8 = (uint *)0x40cf924;
          local_b0 = ppuVar2;
          FUN_0274dc60(&local_c0,&local_b0,1);
        }
        local_a8 = (uint *)0x407d419;
        local_b0 = ppuVar2;
        iVar21 = FUN_0274ce10(&local_c0,&local_b0);
        if (iVar21 != 0) {
          local_b0 = (undefined **)(puVar45 + 0x10);
          local_a8 = (uint *)0x408d9ba;
          FUN_0274dc60(&local_c0,&local_b0,1);
        }
      }
    }
    iVar20 = iVar20 + 1;
  } while (iVar20 != 8);
  lVar37 = *plVar39;
  if (lVar37 == 0) {
LAB_0276ec24:
    lVar37 = 0;
  }
  else {
    puVar44 = *(undefined8 **)(lVar37 + 0x10);
    if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
      lVar43 = (**(code **)(*(long *)*puVar44 + 0x38))();
      lVar37 = 0;
      if (lVar43 != 0) {
        lVar37 = lVar43 + 0x70;
      }
    }
    else {
      if (puVar44 == (undefined8 *)0x0) goto LAB_0276ec24;
      lVar37 = 0;
      if ((long *)puVar44[0x26] != (long *)0x0) {
        lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))();
      }
    }
  }
  plVar38 = (long *)(lVar37 + 0xe75f0);
  lVar43 = *(long *)(lVar37 + 0xe7610);
  if (lVar43 == 0) {
    FUN_0273e670(*(long *)(lVar37 + 0xe75f8) + *plVar38,param_1);
  }
  else {
    if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276ec74:
      plVar30 = *(long **)(lVar43 + 0x20);
      if (plVar30 != (long *)0x0) {
        local_b0 = (undefined **)*plVar38;
        local_a8 = *(uint **)(lVar37 + 0xe75f8);
        local_a0 = (undefined8 *)0x800;
        (**(code **)(*plVar30 + 0x20))(plVar30,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
      lVar43 = *(long *)(lVar37 + 0xe7610);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar43 != 0) goto LAB_0276ec74;
    }
    FUN_0273e670(*(long *)(lVar37 + 0xe75f8) + *plVar38,param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0xe7610) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0xe7610) + 0x18), puVar44 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *plVar39;
  if (lVar37 == 0) {
LAB_0276ed20:
    lVar37 = 0;
  }
  else {
    puVar44 = *(undefined8 **)(lVar37 + 0x10);
    if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
      lVar43 = (**(code **)(*(long *)*puVar44 + 0x38))();
      lVar37 = 0;
      if (lVar43 != 0) {
        lVar37 = lVar43 + 0x70;
      }
    }
    else {
      if (puVar44 == (undefined8 *)0x0) goto LAB_0276ed20;
      lVar37 = 0;
      if ((long *)puVar44[0x26] != (long *)0x0) {
        lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))();
      }
    }
  }
  lVar43 = *(long *)(&LAB_001191e0 + lVar37);
  if (lVar43 == 0) {
    uVar28 = 0;
  }
  else {
    if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
      lVar43 = *(long *)(&LAB_001191e0 + lVar37);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar43 == 0) goto LAB_0276ed94;
    }
    plVar38 = *(long **)(lVar43 + 0x20);
    if (plVar38 != (long *)0x0) {
      local_b0 = *(undefined ***)(&LAB_001191c0 + lVar37);
      local_a8 = *(uint **)(&LAB_001191c8 + lVar37);
      local_a0 = (undefined8 *)0x145140;
      (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
    }
  }
LAB_0276ed94:
  lVar43 = *(long *)(&LAB_001191c8 + lVar37) + *(long *)(&LAB_001191c0 + lVar37);
  FUN_0273be90(lVar43 + 0x20,param_1);
  FUN_0273be90(lVar43 + 0x28a48,param_1);
  FUN_0273be90(lVar43 + 0x51470,param_1);
  FUN_0273be90(lVar43 + 0x79e98,param_1);
  FUN_0273be90(lVar43 + 0xa28c0,param_1);
  FUN_0273be90(lVar43 + 0xcb2e8,param_1);
  FUN_0273be90(lVar43 + 0xf3d10,param_1);
  FUN_0273be90(lVar43 + 0x11c738,param_1);
  if ((((uVar28 & 1) != 0) && (*(long *)(&LAB_001191e0 + lVar37) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(&LAB_001191e0 + lVar37) + 0x18),
     puVar44 != (undefined8 *)0x0)) {
    (**(code **)*puVar44)();
  }
  lVar37 = *plVar39;
  if (lVar37 == 0) {
LAB_0276ee88:
    lVar37 = 0;
  }
  else {
    puVar44 = *(undefined8 **)(lVar37 + 0x10);
    if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
      lVar43 = (**(code **)(*(long *)*puVar44 + 0x38))();
      lVar37 = 0;
      if (lVar43 != 0) {
        lVar37 = lVar43 + 0x70;
      }
    }
    else {
      if (puVar44 == (undefined8 *)0x0) goto LAB_0276ee88;
      lVar37 = 0;
      if ((long *)puVar44[0x26] != (long *)0x0) {
        lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))();
      }
    }
  }
  plVar39 = (long *)(lVar37 + 0x205208);
  lVar43 = *(long *)(lVar37 + 0x205228);
  if (lVar43 == 0) {
    FUN_02741ea0(*(long *)(lVar37 + 0x205210) + *plVar39,param_1);
  }
  else {
    if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276eed8:
      plVar38 = *(long **)(lVar43 + 0x20);
      if (plVar38 != (long *)0x0) {
        local_b0 = (undefined **)*plVar39;
        local_a8 = *(uint **)(lVar37 + 0x205210);
        local_a0 = (undefined8 *)0x100;
        (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
      lVar43 = *(long *)(lVar37 + 0x205228);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar43 != 0) goto LAB_0276eed8;
    }
    FUN_02741ea0(*(long *)(lVar37 + 0x205210) + *plVar39,param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0x205228) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x205228) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  puVar45 = PTR_DAT_04bb46f0;
  iVar20 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  do {
    local_c0 = (undefined **)CONCAT44(local_c0._4_4_,iVar20);
    lVar37 = *(long *)PTR_DAT_04bb46b0;
    if (lVar37 == 0) {
LAB_0276f000:
      lVar37 = 0;
      plVar39 = _DAT_00000028;
      if (_DAT_00000028 != (long *)0x0) goto LAB_0276f00c;
LAB_0276efc0:
      uVar28 = 0;
    }
    else {
      puVar44 = *(undefined8 **)(lVar37 + 0x10);
      if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
        lVar43 = (**(code **)(*(long *)*puVar44 + 0x38))();
        lVar37 = 0;
        if (lVar43 != 0) {
          lVar37 = lVar43 + 0x70;
        }
        plVar39 = *(long **)(lVar37 + 0x28);
      }
      else {
        if ((puVar44 == (undefined8 *)0x0) || ((long *)puVar44[0x26] == (long *)0x0))
        goto LAB_0276f000;
        lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))();
        plVar39 = *(long **)(lVar37 + 0x28);
      }
      if (plVar39 == (long *)0x0) goto LAB_0276efc0;
LAB_0276f00c:
      uVar28 = 0;
      if ((undefined8 *)*plVar39 != (undefined8 *)0x0) {
        uVar28 = (*(code *)**(undefined8 **)*plVar39)();
      }
    }
    if ((uint)local_c0 < 8) {
      lVar43 = *(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8) +
               ((ulong)local_c0 & 0xffffffff) * 0x48;
      bVar18 = *(long *)(lVar43 + 0x1e33b0) != 0 || *(long *)(lVar43 + 0x1e33b8) != 0;
    }
    else {
      bVar18 = false;
    }
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0x28) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x28) + 8), puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
    if ((bVar18) &&
       (lVar37 = FUN_026eec4c(*(undefined8 *)PTR_DAT_04bb46b0,(ulong)local_c0 & 0xffffffff),
       lVar37 != 0)) {
      lVar43 = *(long *)(lVar37 + 0x28);
      if (lVar43 == 0) {
        uVar28 = 0;
      }
      else {
        if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
          uVar28 = 0;
          plVar39 = *(long **)(lVar43 + 0x20);
        }
        else {
          uVar28 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
          uVar28 = uVar28 & 0xffffffff;
          if (*(long *)(lVar37 + 0x28) == 0) goto LAB_0276f110;
          plVar39 = *(long **)(*(long *)(lVar37 + 0x28) + 0x20);
        }
        if (plVar39 != (long *)0x0) {
          local_b0 = *(undefined ***)(lVar37 + 8);
          local_a8 = *(uint **)(lVar37 + 0x10);
          local_a0 = (undefined8 *)0x37ad0;
          (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
        }
      }
LAB_0276f110:
      FUN_0274b490(*(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8) + 0xc170,param_1,&local_c0);
      if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0x28) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x28) + 0x18), puVar44 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar44)();
      }
      if (param_1[1] != 0) {
        local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x40928aa;
        FUN_0274d104(&local_c0,&local_b0,0);
      }
      lVar43 = *(long *)(lVar37 + 0x28);
      if (lVar43 == 0) {
        uVar28 = 0;
      }
      else {
        if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
          uVar28 = 0;
          plVar39 = *(long **)(lVar43 + 0x20);
        }
        else {
          uVar28 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
          uVar28 = uVar28 & 0xffffffff;
          if (*(long *)(lVar37 + 0x28) == 0) goto LAB_0276f1ec;
          plVar39 = *(long **)(*(long *)(lVar37 + 0x28) + 0x20);
        }
        if (plVar39 != (long *)0x0) {
          local_b0 = *(undefined ***)(lVar37 + 8);
          local_a8 = *(uint **)(lVar37 + 0x10);
          local_a0 = (undefined8 *)0x37ad0;
          (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
        }
      }
LAB_0276f1ec:
      iVar21 = (int)*param_1;
      if (iVar21 < 0) {
        iVar21 = 1;
      }
      if (0 < iVar21) {
        iVar21 = -iVar21;
        local_a8 = (uint *)0x40ffce0;
        local_b0 = ppuVar1;
        FUN_0274dc60(&local_c0,&local_b0,iVar21);
        local_a8 = (uint *)0x40ac62c;
        local_b0 = ppuVar1;
        FUN_0274dc60(&local_c0,&local_b0,iVar21);
        local_a8 = (uint *)0x407853c;
        local_b0 = ppuVar1;
        FUN_0274dc60(&local_c0,&local_b0,iVar21);
      }
      lVar43 = *(long *)(lVar37 + 0x28);
      if ((uVar28 & 1) == 0) {
LAB_0276f27c:
        if (lVar43 != 0) goto LAB_0276f280;
LAB_0276f2f8:
        uVar28 = 0;
        iVar21 = (int)*param_1;
        if (-1 < iVar21) goto LAB_0276f2d4;
LAB_0276f304:
        ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x40dee35;
        local_b0 = ppuVar2;
        iVar21 = FUN_0274ce10(&local_c0,&local_b0);
        if (iVar21 != 0) {
          local_a8 = (uint *)0x4086a76;
          local_b0 = ppuVar2;
          FUN_0274d104(&local_c0,&local_b0,7);
        }
      }
      else {
        if (lVar43 == 0) goto LAB_0276f2f8;
        if (*(undefined8 **)(lVar43 + 0x18) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar43 + 0x18))();
          lVar43 = *(long *)(lVar37 + 0x28);
          goto LAB_0276f27c;
        }
LAB_0276f280:
        if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
          uVar28 = 0;
          plVar39 = *(long **)(lVar43 + 0x20);
joined_r0x0276f36c:
          if (plVar39 != (long *)0x0) {
            local_b0 = *(undefined ***)(lVar37 + 8);
            local_a8 = *(uint **)(lVar37 + 0x10);
            local_a0 = (undefined8 *)0x37ad0;
            (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
          }
        }
        else {
          uVar28 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
          uVar28 = uVar28 & 0xffffffff;
          if (*(long *)(lVar37 + 0x28) != 0) {
            plVar39 = *(long **)(*(long *)(lVar37 + 0x28) + 0x20);
            goto joined_r0x0276f36c;
          }
        }
        iVar21 = (int)*param_1;
        if (iVar21 < 0) goto LAB_0276f304;
LAB_0276f2d4:
        local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x4086a76;
        FUN_0274dc60(&local_c0,&local_b0,-iVar21);
      }
      if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0x28) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x28) + 0x18), puVar44 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar44)();
      }
      FUN_0261d6f8(*(undefined8 *)puVar45,lVar37);
    }
    plVar39 = (long *)PTR_DAT_04bb46b0;
    puVar16 = PTR_DAT_04bb2020;
    iVar20 = iVar20 + 1;
  } while (iVar20 != 8);
  lVar37 = *(long *)PTR_DAT_04bb46b0;
  if (lVar37 == 0) {
    lVar37 = 0;
  }
  else {
    puVar44 = *(undefined8 **)(lVar37 + 0x10);
    if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
      lVar43 = (**(code **)(*(long *)*puVar44 + 0x38))();
      lVar37 = 0;
      if (lVar43 != 0) {
        lVar37 = lVar43 + 0x70;
      }
    }
    else if (puVar44 == (undefined8 *)0x0) {
      lVar37 = 0;
    }
    else {
      lVar37 = 0;
      if ((long *)puVar44[0x26] != (long *)0x0) {
        lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))();
      }
    }
  }
  lVar43 = 0;
  if (lVar37 != 0) {
    lVar43 = lVar37 + 0xa8;
  }
  lVar37 = *(long *)(lVar43 + 0x28);
  if (lVar37 == 0) {
    FUN_027d3418(*(long *)(lVar43 + 0x10) + *(long *)(lVar43 + 8),param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276f450:
      plVar38 = *(long **)(lVar37 + 0x20);
      if (plVar38 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar43 + 8);
        local_a8 = *(uint **)(lVar43 + 0x10);
        local_a0 = (undefined8 *)0x1e3388;
        (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar43 + 0x28);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276f450;
    }
    FUN_027d3418(*(long *)(lVar43 + 0x10) + *(long *)(lVar43 + 8),param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar43 + 0x28) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar43 + 0x28) + 0x18), puVar44 != (undefined8 *)0x0))
    {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)PTR_DAT_04bb47e0;
  *(undefined1 *)(lVar37 + 0x64c) = 0;
  *(undefined1 *)(lVar37 + 0x660) = 1;
  *(undefined1 *)(lVar37 + 0x670) = 1;
  *(undefined8 *)(lVar37 + 0x664) = 0x7fc000007fc00000;
  *(undefined8 *)(lVar37 + 0x674) = 0x7fc000007fc00000;
  *(undefined4 *)(lVar37 + 0x66c) = 0x7fc00000;
  *(undefined4 *)(lVar37 + 0x67c) = 0x7fc00000;
  if (0 < *param_1) {
    *(undefined1 *)(*(long *)PTR_DAT_04bb8658 + 0x74) = 1;
  }
  puVar45 = PTR_DAT_04bb4408;
  FUN_01d870b0(*(undefined8 *)PTR_DAT_04bb4408);
  FUN_01d888c0(*(undefined8 *)puVar45,param_1 + 2);
  FUN_01556710(param_1);
  FUN_008853f0(*(undefined8 *)PTR_DAT_04bb32f0,param_1);
  lVar37 = *(long *)(lVar36 + 0xe7178);
  if (lVar37 == 0) {
    uVar28 = 0;
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0xe7178);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 == 0) goto LAB_0276f5a0;
    }
    plVar38 = *(long **)(lVar37 + 0x20);
    if (plVar38 != (long *)0x0) {
      local_b0 = *(undefined ***)(lVar36 + 0xe7158);
      local_a8 = *(uint **)(lVar36 + 0xe7160);
      local_a0 = (undefined8 *)&DAT_0000014c;
      (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
    }
  }
LAB_0276f5a0:
  puVar45 = PTR_DAT_04bb30a0;
  FUN_00930750(*(long *)PTR_DAT_04bb30a0 + 0x651f0,
               *(long *)(lVar36 + 0xe7160) + *(long *)(lVar36 + 0xe7158));
  lVar37 = *(long *)(lVar36 + 0xe7178);
  if ((uVar28 & 1) == 0) {
LAB_0276f5e4:
    if (lVar37 != 0) goto LAB_0276f5e8;
LAB_0276f60c:
    uVar28 = 0;
  }
  else {
    if (lVar37 == 0) goto LAB_0276f60c;
    if (*(undefined8 **)(lVar37 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar37 + 0x18))();
      lVar37 = *(long *)(lVar36 + 0xe7178);
      goto LAB_0276f5e4;
    }
LAB_0276f5e8:
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0xe7178);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 == 0) goto LAB_0276f644;
    }
    plVar38 = *(long **)(lVar37 + 0x20);
    if (plVar38 != (long *)0x0) {
      local_b0 = *(undefined ***)(lVar36 + 0xe7158);
      local_a8 = *(uint **)(lVar36 + 0xe7160);
      local_a0 = (undefined8 *)&DAT_0000014c;
      (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
    }
  }
LAB_0276f644:
  iVar20 = (int)*param_1;
  if ((char)param_1[5] != '\0') {
    iVar20 = 3;
  }
  FUN_028da85c(*(long *)(lVar36 + 0xe7160) + *(long *)(lVar36 + 0xe7158),iVar20,1);
  if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0xe7178) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0xe7178) + 0x18), puVar44 != (undefined8 *)0x0))
  {
    (**(code **)*puVar44)();
  }
  lVar37 = *(long *)(lVar27 + 0x27c880);
  if (lVar37 == 0) {
    uVar28 = 0;
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar27 + 0x27c880);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 == 0) goto LAB_0276f6ec;
    }
    plVar38 = *(long **)(lVar37 + 0x20);
    if (plVar38 != (long *)0x0) {
      local_b0 = *(undefined ***)(lVar27 + 0x27c860);
      local_a8 = *(uint **)(lVar27 + 0x27c868);
      local_a0 = (undefined8 *)&DAT_0000014c;
      (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
    }
  }
LAB_0276f6ec:
  FUN_00930750(*(long *)puVar45 + 0x651f0,
               *(long *)(lVar27 + 0x27c868) + *(long *)(lVar27 + 0x27c860));
  lVar37 = *(long *)(lVar27 + 0x27c880);
  if ((uVar28 & 1) == 0) {
LAB_0276f72c:
    if (lVar37 != 0) goto LAB_0276f730;
LAB_0276f754:
    uVar28 = 0;
  }
  else {
    if (lVar37 == 0) goto LAB_0276f754;
    if (*(undefined8 **)(lVar37 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar37 + 0x18))();
      lVar37 = *(long *)(lVar27 + 0x27c880);
      goto LAB_0276f72c;
    }
LAB_0276f730:
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar27 + 0x27c880);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 == 0) goto LAB_0276f78c;
    }
    plVar38 = *(long **)(lVar37 + 0x20);
    if (plVar38 != (long *)0x0) {
      local_b0 = *(undefined ***)(lVar27 + 0x27c860);
      local_a8 = *(uint **)(lVar27 + 0x27c868);
      local_a0 = (undefined8 *)&DAT_0000014c;
      (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
    }
  }
LAB_0276f78c:
  iVar20 = (int)*param_1;
  if ((char)param_1[5] != '\0') {
    iVar20 = 3;
  }
  FUN_028da85c(*(long *)(lVar27 + 0x27c868) + *(long *)(lVar27 + 0x27c860),iVar20,0);
  if ((((uVar28 & 1) != 0) && (*(long *)(lVar27 + 0x27c880) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(lVar27 + 0x27c880) + 0x18), puVar44 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar44)();
  }
  lVar37 = *(long *)(lVar36 + 0xe7178);
  if (lVar37 == 0) {
    FUN_00930750(*(long *)puVar45 + 0x651f0,
                 *(long *)(lVar36 + 0xe7160) + *(long *)(lVar36 + 0xe7158));
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276f820:
      plVar38 = *(long **)(lVar37 + 0x20);
      if (plVar38 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar36 + 0xe7158);
        local_a8 = *(uint **)(lVar36 + 0xe7160);
        local_a0 = (undefined8 *)&DAT_0000014c;
        (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0xe7178);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276f820;
    }
    FUN_00930750(*(long *)puVar45 + 0x651f0,
                 *(long *)(lVar36 + 0xe7160) + *(long *)(lVar36 + 0xe7158));
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0xe7178) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0xe7178) + 0x18), puVar44 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)puVar45;
  *(undefined1 *)(lVar37 + 0x653dd) = 1;
  FUN_00a88608(lVar37,1);
  *(undefined1 *)(*(long *)puVar45 + 0x65b1c) = 1;
  FUN_016ac8ec(param_1);
  lVar37 = *(long *)(lVar36 + 0x1a0b70);
  if (lVar37 == 0) {
    FUN_028603d0(*(long *)(lVar36 + 0x1a0b58) + *plVar31,param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276f904:
      plVar38 = *(long **)(lVar37 + 0x20);
      if (plVar38 != (long *)0x0) {
        local_b0 = (undefined **)*plVar31;
        local_a8 = *(uint **)(lVar36 + 0x1a0b58);
        local_a0 = (undefined8 *)0x37f0;
        (**(code **)(*plVar38 + 0x20))(plVar38,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0x1a0b70);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276f904;
    }
    FUN_028603d0(*(long *)(lVar36 + 0x1a0b58) + *plVar31,param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1a0b70) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1a0b70) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)(lVar36 + 0x1bf1b8);
  if (lVar37 == 0) {
    FUN_027ba0cc(*(long *)(lVar36 + 0x1bf1a0) + *plVar33,param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276f9a4:
      plVar31 = *(long **)(lVar37 + 0x20);
      if (plVar31 != (long *)0x0) {
        local_b0 = (undefined **)*plVar33;
        local_a8 = *(uint **)(lVar36 + 0x1bf1a0);
        local_a0 = (undefined8 *)0x3404;
        (**(code **)(*plVar31 + 0x20))(plVar31,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0x1bf1b8);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276f9a4;
    }
    FUN_027ba0cc(*(long *)(lVar36 + 0x1bf1a0) + *plVar33,param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1bf1b8) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1bf1b8) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)(lVar36 + 0x1c2718);
  if (lVar37 == 0) {
    *(undefined4 *)(*(long *)(lVar36 + 0x1c2700) + *(long *)(lVar36 + 0x1c26f8)) = 2;
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276fa44:
      plVar33 = *(long **)(lVar37 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar36 + 0x1c26f8);
        local_a8 = *(uint **)(lVar36 + 0x1c2700);
        local_a0 = (undefined8 *)&DAT_00000004;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0x1c2718);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276fa44;
    }
    *(undefined4 *)(*(long *)(lVar36 + 0x1c2700) + *(long *)(lVar36 + 0x1c26f8)) = 2;
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1c2718) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1c2718) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  local_a8 = (uint *)0x40fe362;
  local_b0 = (undefined **)(puVar16 + 0x10);
  uVar28 = FUN_0273f0a0(&local_b0);
  if ((uVar28 & 1) != 0) {
    pcStack_b8 = "Market2Built";
    local_c0 = (undefined **)(puVar16 + 0x10);
    uVar28 = FUN_0273f0a0(&local_c0);
    if ((uVar28 & 1) != 0) {
      local_b0 = (undefined **)(puVar16 + 0x10);
      local_a8 = (uint *)0x40cb292;
      FUN_0273f3c4(&local_b0,1);
    }
  }
  lVar37 = *(long *)(lVar36 + 0x1c2980);
  if (lVar37 == 0) {
    FUN_027c5d6c(*(long *)(lVar36 + 0x1c2968) + *(long *)(lVar36 + 0x1c2960),param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276fb38:
      plVar33 = *(long **)(lVar37 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar36 + 0x1c2960);
        local_a8 = *(uint **)(lVar36 + 0x1c2968);
        local_a0 = (undefined8 *)&DAT_00000114;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0x1c2980);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276fb38;
    }
    FUN_027c5d6c(*(long *)(lVar36 + 0x1c2968) + *(long *)(lVar36 + 0x1c2960),param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1c2980) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1c2980) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)(lVar36 + 0x1c28d8);
  if (lVar37 == 0) {
    FUN_026d6994(*(long *)(lVar36 + 0x1c28c0) + *(long *)(lVar36 + 0x1c28b8),param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276fbe0:
      plVar33 = *(long **)(lVar37 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar36 + 0x1c28b8);
        local_a8 = *(uint **)(lVar36 + 0x1c28c0);
        local_a0 = (undefined8 *)&DAT_00000004;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0x1c28d8);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276fbe0;
    }
    FUN_026d6994(*(long *)(lVar36 + 0x1c28c0) + *(long *)(lVar36 + 0x1c28b8),param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1c28d8) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1c28d8) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)(lVar27 + 0x276fb0);
  if (lVar37 == 0) {
    FUN_027aa170(*(long *)(lVar27 + 0x276f98) + *(long *)(lVar27 + 0x276f90),param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276fc88:
      plVar33 = *(long **)(lVar37 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar27 + 0x276f90);
        local_a8 = *(uint **)(lVar27 + 0x276f98);
        local_a0 = (undefined8 *)0x280;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar27 + 0x276fb0);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276fc88;
    }
    FUN_027aa170(*(long *)(lVar27 + 0x276f98) + *(long *)(lVar27 + 0x276f90),param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar27 + 0x276fb0) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar27 + 0x276fb0) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)(lVar36 + 0x1bf260);
  if (lVar37 == 0) {
    FUN_028cdad0(*(long *)(lVar36 + 0x1bf248) + *(long *)(lVar36 + 0x1bf240),param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276fd2c:
      plVar33 = *(long **)(lVar37 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar36 + 0x1bf240);
        local_a8 = *(uint **)(lVar36 + 0x1bf248);
        local_a0 = (undefined8 *)&DAT_00000094;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0x1bf260);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276fd2c;
    }
    FUN_028cdad0(*(long *)(lVar36 + 0x1bf248) + *(long *)(lVar36 + 0x1bf240),param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1bf260) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1bf260) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  lVar37 = *(long *)(lVar36 + 0x1c2e18);
  if (lVar37 == 0) {
    FUN_0285baf4(*(long *)(lVar36 + 0x1c2e00) + *(long *)(lVar36 + 0x1c2df8),param_1);
  }
  else {
    if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_0276fdd0:
      plVar33 = *(long **)(lVar37 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = *(undefined ***)(lVar36 + 0x1c2df8);
        local_a8 = *(uint **)(lVar36 + 0x1c2e00);
        local_a0 = (undefined8 *)0x2520;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      lVar37 = *(long *)(lVar36 + 0x1c2e18);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar37 != 0) goto LAB_0276fdd0;
    }
    FUN_0285baf4(*(long *)(lVar36 + 0x1c2e00) + *(long *)(lVar36 + 0x1c2df8),param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x1c2e18) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x1c2e18) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  FUN_02adb800(param_1);
  FUN_011a19f0(param_1);
  FUN_0252d11c(&local_c0);
  if ((byte)local_c0 < 8) {
    local_a8 = &local_c4;
    local_c4 = CONCAT31(local_c4._1_3_,1);
    local_b0 = &PTR_FUN_04a41ac8;
    local_a0 = &local_c0;
    FUN_01c55e50(&local_b0);
    if ((char)local_c4 != '\0') {
      local_a8 = (uint *)&local_c0;
      local_b0 = &PTR_LAB_04a41af0;
      FUN_01c55e50(&local_b0);
    }
  }
  uVar22 = FUN_0252d29c();
  if ((*(long **)(lVar36 + 0x28) == (long *)0x0) ||
     (puVar44 = (undefined8 *)**(long **)(lVar36 + 0x28), puVar44 == (undefined8 *)0x0)) {
    uVar23 = 0;
  }
  else {
    uVar23 = (**(code **)*puVar44)();
  }
  uVar28 = 0;
  plVar33 = (long *)(*(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8) + 0x1e33b8);
  do {
    local_c4 = (uint)uVar28;
    if (((plVar33[-1] != 0 || *plVar33 != 0) && (*plVar39 != 0)) &&
       (lVar37 = FUN_026eec4c(*plVar39,uVar28 & 0xffffffff), lVar37 != 0)) {
      lVar43 = *(long *)(lVar37 + 0x28);
      if (lVar43 == 0) {
        FUN_027ee960(*(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8),param_1,&local_c4);
      }
      else {
        if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
          uVar29 = 0;
          plVar39 = *(long **)(lVar43 + 0x20);
joined_r0x02770364:
          if (plVar39 != (long *)0x0) {
            local_b0 = *(undefined ***)(lVar37 + 8);
            local_a8 = *(uint **)(lVar37 + 0x10);
            local_a0 = (undefined8 *)0x37ad0;
            (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
          }
        }
        else {
          uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
          uVar29 = uVar29 & 0xffffffff;
          if (*(long *)(lVar37 + 0x28) != 0) {
            plVar39 = *(long **)(*(long *)(lVar37 + 0x28) + 0x20);
            goto joined_r0x02770364;
          }
        }
        FUN_027ee960(*(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8),param_1,&local_c4);
        if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x28) != 0)) &&
           (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x28) + 0x18),
           puVar44 != (undefined8 *)0x0)) {
          (**(code **)*puVar44)();
        }
      }
      lVar43 = lVar37 + 0x194b0;
      if (*(long *)(lVar37 + 0x194b8) == 0) {
        lVar46 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        lVar40 = *(long *)(lVar46 + 0x28);
        if (lVar40 != 0) goto LAB_0277000c;
LAB_027700a8:
        FUN_02812830(*(long *)(lVar46 + 0x10) + *(long *)(lVar46 + 8),param_1,&local_c4);
      }
      else {
        lVar40 = *(long *)(lVar37 + 0x194d8);
        lVar46 = lVar43;
        if (lVar40 == 0) goto LAB_027700a8;
LAB_0277000c:
        if (*(undefined8 **)(lVar40 + 0x10) == (undefined8 *)0x0) {
          uVar29 = 0;
          plVar39 = *(long **)(lVar40 + 0x20);
joined_r0x02770374:
          if (plVar39 != (long *)0x0) {
            local_b0 = *(undefined ***)(lVar46 + 8);
            local_a8 = *(uint **)(lVar46 + 0x10);
            local_a0 = (undefined8 *)0x3ce60;
            (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
          }
        }
        else {
          uVar29 = (**(code **)**(undefined8 **)(lVar40 + 0x10))();
          uVar29 = uVar29 & 0xffffffff;
          if (*(long *)(lVar46 + 0x28) != 0) {
            plVar39 = *(long **)(*(long *)(lVar46 + 0x28) + 0x20);
            goto joined_r0x02770374;
          }
        }
        FUN_02812830(*(long *)(lVar46 + 0x10) + *(long *)(lVar46 + 8),param_1,&local_c4);
        if ((((uVar29 & 1) != 0) && (*(long *)(lVar46 + 0x28) != 0)) &&
           (puVar44 = *(undefined8 **)(*(long *)(lVar46 + 0x28) + 0x18),
           puVar44 != (undefined8 *)0x0)) {
          (**(code **)*puVar44)();
        }
      }
      local_a8 = (uint *)0x40e046e;
      local_b0 = (undefined **)(puVar16 + 0x10);
      FUN_0274d104(&local_c4,&local_b0,1);
      if ((uVar22 != 0xffffffff) && (uVar22 == local_c4)) {
        local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x407d409;
        FUN_0274d104(&local_c4,&local_b0,1);
      }
      nn::oe::GetPseudoDeviceId((Uuid *)&local_b0);
      plVar39 = (long *)PTR_DAT_04bb46b0;
      if (*(long *)(lVar37 + 0x194b8) == 0) {
        lVar43 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar43 + 0x2ad80) == (long *)0x0) ||
         (puVar44 = (undefined8 *)**(long **)(lVar43 + 0x2ad80), puVar44 == (undefined8 *)0x0)) {
        uVar29 = 0;
      }
      else {
        uVar29 = (**(code **)*puVar44)();
        uVar29 = uVar29 & 0xffffffff;
      }
      plVar31 = (long *)(*(long *)(lVar43 + 0x2ad68) + *(long *)(lVar43 + 0x2ad60));
      if ((undefined **)*plVar31 != local_b0 || (uint *)plVar31[1] != local_a8) {
        local_c0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        pcStack_b8 = "ChangedPermanentNum";
        FUN_0274d104(&local_c4,&local_c0,1);
      }
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar43 + 0x2ad80) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar43 + 0x2ad80) + 8), puVar44 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar44)();
      }
      puVar45 = PTR_DAT_04bb2020;
      lVar37 = *param_1;
      if (0 < lVar37) {
        local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x408c513;
        FUN_0274d104(&local_c4,&local_b0,1);
        lVar37 = *param_1;
      }
      if (lVar37 < 0) {
        local_b0 = (undefined **)(puVar45 + 0x10);
        local_a8 = (uint *)0x40ffc7b;
        FUN_0274d104(&local_c4,&local_b0,1);
      }
      if (*(char *)((long)param_1 + 0x2c) != '\0') {
        ppuVar1 = (undefined **)(puVar45 + 0x10);
        local_a8 = (uint *)0x4087704;
        local_b0 = ppuVar1;
        FUN_0274d104(&local_c4,&local_b0,(long)(short)param_1[2]);
        local_a8 = (uint *)0x407ca7b;
        local_b0 = ppuVar1;
        FUN_0274d104(&local_c4,&local_b0,(long)*(char *)((long)param_1 + 0x12));
        local_a8 = (uint *)0x40da75b;
        local_b0 = ppuVar1;
        FUN_0274d104(&local_c4,&local_b0,(long)*(char *)((long)param_1 + 0x13));
      }
      local_a8 = (uint *)0x40d5dbd;
      local_b0 = (undefined **)(puVar45 + 0x10);
      iVar20 = FUN_0274ce10(&local_c4,&local_b0);
      if (iVar20 == 0) {
        local_a8 = (uint *)0x40ab50b;
        local_b0 = (undefined **)(puVar45 + 0x10);
        iVar20 = FUN_0274ce10(&local_c4,&local_b0);
        if (iVar20 != 0) {
          local_b0 = (undefined **)(puVar45 + 0x10);
          local_a8 = (uint *)0x40c0bcd;
          FUN_0274d104(&local_c4,&local_b0,1);
        }
        local_b0 = (undefined **)(puVar45 + 0x10);
        local_a8 = (uint *)0x40d5dbd;
        FUN_0274d104(&local_c4,&local_b0,1);
      }
      if (*(char *)((long)param_1 + 0x29) != '\0') {
        local_a8 = (uint *)0x40a0ec5;
        local_b0 = (undefined **)(puVar45 + 0x10);
        iVar20 = FUN_0274ce10(&local_c4,&local_b0);
        if (iVar20 == 0) {
          local_a8 = (uint *)0x4091f6d;
          local_b0 = (undefined **)(puVar45 + 0x10);
          iVar20 = FUN_0274ce10(&local_c4,&local_b0);
          local_b0 = (undefined **)(puVar45 + 0x10);
          local_a8 = (uint *)0x40f5ae3;
          FUN_0274d104(&local_c4,&local_b0,iVar20 != 0);
          local_a8 = (uint *)0x4091c17;
          local_b0 = (undefined **)(puVar45 + 0x10);
          iVar20 = FUN_0274ce10(&local_c4,&local_b0);
          if (iVar20 == 0) {
            local_a8 = (uint *)0x40d05b0;
            local_b0 = (undefined **)(puVar45 + 0x10);
            FUN_0274d104(&local_c4,&local_b0,1);
          }
        }
      }
      local_b0 = (undefined **)0x52b;
      FUN_0277d4ac(&local_b0);
      FUN_02649620(&local_c4,&local_b0,0);
    }
    uVar28 = uVar28 + 1;
    plVar33 = plVar33 + 9;
  } while (uVar28 != 8);
  if ((((uVar23 & 1) != 0) && (*(long *)(lVar36 + 0x28) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x28) + 8), puVar44 != (undefined8 *)0x0)) {
    (**(code **)*puVar44)();
  }
  FUN_02743630();
  FUN_021dc930();
  FUN_021c0a70(&DAT_053fe348,param_1,1);
  FUN_0252d11c(&local_b0);
  FUN_021c6130(&DAT_053fe348,&local_b0);
  lVar37 = *plVar39;
  if (lVar37 != 0) {
    puVar44 = *(undefined8 **)(lVar37 + 0x10);
    if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
      lVar37 = (**(code **)(*(long *)*puVar44 + 0x38))();
      if (lVar37 != 0) {
        lVar37 = lVar37 + 0x70;
        goto LAB_0277048c;
      }
    }
    else if (((puVar44 != (undefined8 *)0x0) && ((long *)puVar44[0x26] != (long *)0x0)) &&
            (lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))(), lVar37 != 0)) {
LAB_0277048c:
      lVar43 = *(long *)(lVar37 + 0xd0);
      if (lVar43 == 0) {
        FUN_027d3750(*(long *)(lVar37 + 0xb8) + *(long *)(lVar37 + 0xb0),param_1);
      }
      else {
        if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
          uVar28 = 0;
LAB_027704d0:
          plVar33 = *(long **)(lVar43 + 0x20);
          if (plVar33 != (long *)0x0) {
            local_b0 = *(undefined ***)(lVar37 + 0xb0);
            local_a8 = *(uint **)(lVar37 + 0xb8);
            local_a0 = (undefined8 *)0x1e3388;
            (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
          }
        }
        else {
          uVar28 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
          lVar43 = *(long *)(lVar37 + 0xd0);
          uVar28 = uVar28 & 0xffffffff;
          if (lVar43 != 0) goto LAB_027704d0;
        }
        FUN_027d3750(*(long *)(lVar37 + 0xb8) + *(long *)(lVar37 + 0xb0),param_1);
        if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0xd0) != 0)) &&
           (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0xd0) + 0x18),
           puVar44 != (undefined8 *)0x0)) {
          (**(code **)*puVar44)();
        }
      }
    }
  }
  if ((*(long *)(lVar27 + 0x276cd8) == 0) ||
     (puVar44 = *(undefined8 **)(*(long *)(lVar27 + 0x276cd8) + 0x10), puVar44 == (undefined8 *)0x0)
     ) {
    uVar22 = 0;
    lVar37 = *param_1;
  }
  else {
    uVar22 = (**(code **)*puVar44)();
    lVar37 = *param_1;
  }
  if (lVar37 != 0) {
    if ((0 < lVar37) && (lVar37 = *plVar39, lVar37 != 0)) {
      puVar44 = *(undefined8 **)(lVar37 + 0x10);
      if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
        lVar37 = (**(code **)(*(long *)*puVar44 + 0x38))();
        if (lVar37 != 0) {
          lVar37 = lVar37 + 0x70;
          goto LAB_027705b8;
        }
      }
      else if (((puVar44 != (undefined8 *)0x0) && ((long *)puVar44[0x26] != (long *)0x0)) &&
              (lVar37 = (**(code **)(*(long *)puVar44[0x26] + 0x38))(), lVar37 != 0)) {
LAB_027705b8:
        plVar39 = (long *)(lVar37 + 0xe7120);
        if ((*(long **)(lVar37 + 0xe7140) == (long *)0x0) ||
           (puVar44 = (undefined8 *)**(long **)(lVar37 + 0xe7140), puVar44 == (undefined8 *)0x0)) {
          uVar28 = 0;
        }
        else {
          uVar28 = (**(code **)*puVar44)();
          uVar28 = uVar28 & 0xffffffff;
        }
        plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        if (*plVar33 != 0 || plVar33[1] != 0) {
          uVar29 = FUN_007b3cbc(&local_b0,0);
          if ((uVar29 & 1) != 0) {
            FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,0);
          }
          plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        }
        if (plVar33[9] != 0 || plVar33[10] != 0) {
          uVar29 = FUN_007b3cbc(&local_b0,1);
          if ((uVar29 & 1) != 0) {
            FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,1);
          }
          plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        }
        if (plVar33[0x12] != 0 || plVar33[0x13] != 0) {
          uVar29 = FUN_007b3cbc(&local_b0,2);
          if ((uVar29 & 1) != 0) {
            FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,2);
          }
          plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        }
        if (plVar33[0x1b] != 0 || plVar33[0x1c] != 0) {
          uVar29 = FUN_007b3cbc(&local_b0,3);
          if ((uVar29 & 1) != 0) {
            FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,3);
          }
          plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        }
        if (plVar33[0x24] != 0 || plVar33[0x25] != 0) {
          uVar29 = FUN_007b3cbc(&local_b0,4);
          if ((uVar29 & 1) != 0) {
            FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,4);
          }
          plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        }
        if (plVar33[0x2d] != 0 || plVar33[0x2e] != 0) {
          uVar29 = FUN_007b3cbc(&local_b0,5);
          if ((uVar29 & 1) != 0) {
            FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,5);
          }
          plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        }
        if (plVar33[0x36] != 0 || plVar33[0x37] != 0) {
          uVar29 = FUN_007b3cbc(&local_b0,6);
          if ((uVar29 & 1) != 0) {
            FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,6);
          }
          plVar33 = (long *)(*(long *)(lVar37 + 0xe7128) + *plVar39);
        }
        if ((plVar33[0x3f] != 0 || plVar33[0x40] != 0) &&
           (uVar29 = FUN_007b3cbc(&local_b0,7), (uVar29 & 1) != 0)) {
          FUN_0260e0d4(*(undefined8 *)PTR_DAT_04bb2268,param_1,7);
        }
        if ((((uVar28 & 1) != 0) && (*(long *)(lVar37 + 0xe7140) != 0)) &&
           (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0xe7140) + 8),
           puVar44 != (undefined8 *)0x0)) {
          (**(code **)*puVar44)();
        }
      }
    }
    if ((*(long *)(lVar27 + 0x276cd8) != 0) &&
       (plVar39 = *(long **)(*(long *)(lVar27 + 0x276cd8) + 0x20), plVar39 != (long *)0x0)) {
      local_b0 = (undefined **)*plVar6;
      local_a8 = *(uint **)(lVar27 + 0x276cc0);
      local_a0 = (undefined8 *)0x3fd140;
      (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
    }
    FUN_0278e9a0(*(long *)(lVar27 + 0x276cc0) + *plVar6);
    puVar45 = PTR_DAT_04bc3a18;
    *(undefined8 *)(PTR_DAT_04bc3a18 + 0x30) = 0;
    *(undefined8 *)(puVar45 + 0x38) = 0;
    *(undefined8 *)(puVar45 + 0x20) = 0;
    *(undefined8 *)(puVar45 + 0x28) = 0;
    *(undefined8 *)(puVar45 + 0x10) = 0;
    *(undefined8 *)(puVar45 + 0x18) = 0;
    *(undefined8 *)puVar45 = 0;
    *(undefined8 *)(puVar45 + 8) = 0;
    puVar45 = PTR_DAT_04bc3a20;
    *(undefined8 *)PTR_DAT_04bc3a20 = 0;
    *(undefined8 *)(puVar45 + 8) = 0;
    *(undefined8 *)(puVar45 + 0x10) = 0;
    *(undefined8 *)(puVar45 + 0x18) = 0;
    *(undefined8 *)(puVar45 + 0x20) = 0;
    *(undefined8 *)(puVar45 + 0x28) = 0;
    puVar16 = PTR_DAT_04bc3a28;
    *(undefined8 *)(puVar45 + 0x30) = 0;
    *(undefined8 *)(puVar45 + 0x38) = 0;
    *(undefined8 *)puVar16 = 0;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 0x10) = 0;
    *(undefined8 *)(puVar16 + 0x18) = 0;
    *(undefined8 *)(puVar16 + 0x20) = 0;
    *(undefined8 *)(puVar16 + 0x28) = 0;
    *(undefined8 *)(puVar16 + 0x30) = 0;
    *(undefined8 *)(puVar16 + 0x38) = 0;
  }
  FUN_0291e4fc();
  if ((*(long **)(lVar36 + 0xe7140) == (long *)0x0) ||
     (puVar44 = (undefined8 *)**(long **)(lVar36 + 0xe7140), puVar44 == (undefined8 *)0x0)) {
    uVar28 = 0;
  }
  else {
    uVar28 = (**(code **)*puVar44)();
    uVar28 = uVar28 & 0xffffffff;
  }
  FUN_02507c6c(&local_c0,1,1,0,0);
  puVar45 = PTR_DAT_04bb5038;
  if ((byte)local_c0 < 8) {
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    bVar35 = (byte)local_c0;
    do {
      local_c8[0] = bVar35;
      uVar29 = FUN_02669430(local_c8);
      if ((uVar29 & 1) != 0) {
        if ((*(long *)(lVar27 + 0x276cd8) != 0) &&
           (plVar39 = *(long **)(*(long *)(lVar27 + 0x276cd8) + 0x20), plVar39 != (long *)0x0)) {
          local_b0 = (undefined **)*plVar6;
          local_a8 = *(uint **)(lVar27 + 0x276cc0);
          local_a0 = (undefined8 *)0x3fd140;
          (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
        }
        lVar37 = *plVar6;
        lVar43 = *(long *)(lVar27 + 0x276cc0);
        if ((byte)local_c0 < 8) {
          local_b0 = (undefined **)CONCAT71(local_b0._1_7_,(byte)local_c0);
          uVar23 = FUN_02582fe0(&local_b0);
        }
        else {
          uVar23 = FUN_0252d29c();
        }
        if (uVar23 < 8) {
          FUN_027f0dcc(lVar43 + lVar37 + (ulong)uVar23 * 0xd8 + 0x3c52c0,&local_c0);
        }
        uVar23 = FUN_02582fe0(&local_c0);
        if (uVar23 != 0xffffffff) {
          if (((DAT_05582be0 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(&DAT_05582be0), iVar20 != 0)) {
            local_a8 = (uint *)0x40914e2;
            local_b0 = ppuVar1;
            FUN_011c96f0(&DAT_05582b88,&local_b0);
            __cxa_guard_release(&DAT_05582be0);
          }
          if (((DAT_05582c40 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(&DAT_05582c40), iVar20 != 0)) {
            local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_a8 = (uint *)0x40bf989;
            FUN_011c96f0(&DAT_05582be8,&local_b0);
            __cxa_guard_release(&DAT_05582c40);
          }
          uVar8 = ~(1 << (ulong)(uVar23 & 0x1f));
          lVar37 = *plVar5;
          lVar43 = *(long *)(lVar36 + 0xe7128);
          if (uVar23 == 0) {
LAB_02770adc:
            local_b0._0_4_ = 1;
            if (*(long *)(lVar43 + lVar37 + 0x48) != 0 || *(long *)(lVar43 + lVar37 + 0x50) != 0) {
              uVar24 = FUN_0274ce10(&local_b0,&DAT_05582b88);
              uVar25 = FUN_0274ce10(&local_b0,&DAT_05582be8);
              FUN_0274d104(&local_b0,&DAT_05582b88,uVar24 & uVar8);
              FUN_0274d104(&local_b0,&DAT_05582be8,uVar25 & uVar8);
              lVar37 = *plVar5;
              lVar43 = *(long *)(lVar36 + 0xe7128);
            }
            if (uVar23 != 2) goto LAB_02770b44;
LAB_02770bac:
            local_b0._0_4_ = 3;
            if (*(long *)(lVar43 + lVar37 + 0xd8) != 0 || *(long *)(lVar43 + lVar37 + 0xe0) != 0) {
              uVar24 = FUN_0274ce10(&local_b0,&DAT_05582b88);
              uVar25 = FUN_0274ce10(&local_b0,&DAT_05582be8);
              FUN_0274d104(&local_b0,&DAT_05582b88,uVar24 & uVar8);
              FUN_0274d104(&local_b0,&DAT_05582be8,uVar25 & uVar8);
              lVar37 = *plVar5;
              lVar43 = *(long *)(lVar36 + 0xe7128);
            }
            if (uVar23 != 4) goto LAB_02770c14;
LAB_02770c7c:
            local_b0 = (undefined **)CONCAT44(local_b0._4_4_,5);
            if (*(long *)(lVar43 + lVar37 + 0x168) != 0 || *(long *)(lVar43 + lVar37 + 0x170) != 0)
            {
              uVar24 = FUN_0274ce10(&local_b0,&DAT_05582b88);
              uVar25 = FUN_0274ce10(&local_b0,&DAT_05582be8);
              FUN_0274d104(&local_b0,&DAT_05582b88,uVar24 & uVar8);
              FUN_0274d104(&local_b0,&DAT_05582be8,uVar25 & uVar8);
              lVar37 = *plVar5;
              lVar43 = *(long *)(lVar36 + 0xe7128);
            }
            if (uVar23 != 6) goto LAB_02770ce4;
          }
          else {
            local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
            if (*(long *)(lVar43 + lVar37) != 0 || ((long *)(lVar43 + lVar37))[1] != 0) {
              uVar24 = FUN_0274ce10(&local_b0,&DAT_05582b88);
              uVar25 = FUN_0274ce10(&local_b0,&DAT_05582be8);
              FUN_0274d104(&local_b0,&DAT_05582b88,uVar24 & uVar8);
              FUN_0274d104(&local_b0,&DAT_05582be8,uVar25 & uVar8);
              lVar37 = *plVar5;
              lVar43 = *(long *)(lVar36 + 0xe7128);
            }
            if (uVar23 != 1) goto LAB_02770adc;
LAB_02770b44:
            local_b0._0_4_ = 2;
            if (*(long *)(lVar43 + lVar37 + 0x90) != 0 || *(long *)(lVar43 + lVar37 + 0x98) != 0) {
              uVar24 = FUN_0274ce10(&local_b0,&DAT_05582b88);
              uVar25 = FUN_0274ce10(&local_b0,&DAT_05582be8);
              FUN_0274d104(&local_b0,&DAT_05582b88,uVar24 & uVar8);
              FUN_0274d104(&local_b0,&DAT_05582be8,uVar25 & uVar8);
              lVar37 = *plVar5;
              lVar43 = *(long *)(lVar36 + 0xe7128);
            }
            if (uVar23 != 3) goto LAB_02770bac;
LAB_02770c14:
            local_b0._0_4_ = 4;
            if (*(long *)(lVar43 + lVar37 + 0x120) != 0 || *(long *)(lVar43 + lVar37 + 0x128) != 0)
            {
              uVar24 = FUN_0274ce10(&local_b0,&DAT_05582b88);
              uVar25 = FUN_0274ce10(&local_b0,&DAT_05582be8);
              FUN_0274d104(&local_b0,&DAT_05582b88,uVar24 & uVar8);
              FUN_0274d104(&local_b0,&DAT_05582be8,uVar25 & uVar8);
              lVar37 = *plVar5;
              lVar43 = *(long *)(lVar36 + 0xe7128);
            }
            if (uVar23 != 5) goto LAB_02770c7c;
LAB_02770ce4:
            local_b0 = (undefined **)CONCAT44(local_b0._4_4_,6);
            if (*(long *)(lVar43 + lVar37 + 0x1b0) != 0 || *(long *)(lVar43 + lVar37 + 0x1b8) != 0)
            {
              uVar24 = FUN_0274ce10(&local_b0,&DAT_05582b88);
              uVar25 = FUN_0274ce10(&local_b0,&DAT_05582be8);
              FUN_0274d104(&local_b0,&DAT_05582b88,uVar24 & uVar8);
              FUN_0274d104(&local_b0,&DAT_05582be8,uVar25 & uVar8);
            }
            if (uVar23 == 7) goto LAB_02770da4;
            lVar37 = *plVar5;
            lVar43 = *(long *)(lVar36 + 0xe7128);
          }
          local_b0 = (undefined **)CONCAT44(local_b0._4_4_,7);
          if (*(long *)(lVar43 + lVar37 + 0x1f8) != 0 || *(long *)(lVar43 + lVar37 + 0x200) != 0) {
            uVar23 = FUN_0274ce10(&local_b0,&DAT_05582b88);
            uVar24 = FUN_0274ce10(&local_b0,&DAT_05582be8);
            FUN_0274d104(&local_b0,&DAT_05582b88,uVar23 & uVar8);
            FUN_0274d104(&local_b0,&DAT_05582be8,uVar24 & uVar8);
          }
        }
      }
LAB_02770da4:
      bVar35 = (byte)local_c0;
      uVar29 = (ulong)local_c0 & 0xff;
      if ((7 < (byte)local_c0) || (uVar29 + 1 == 8)) break;
      pbVar41 = puVar45 + uVar29 + 1;
      uVar32 = FUN_02507924(&local_c0,pbVar41);
      if ((uVar32 & 1) == 0) {
        if (uVar29 + 2 == 8) break;
        pbVar41 = puVar45 + uVar29 + 2;
        uVar32 = FUN_02507924(&local_c0,pbVar41);
        if ((uVar32 & 1) == 0) {
          if (uVar29 + 3 == 8) break;
          pbVar41 = puVar45 + uVar29 + 3;
          uVar32 = FUN_02507924(&local_c0,pbVar41);
          if ((uVar32 & 1) == 0) {
            if (uVar29 + 4 == 8) break;
            pbVar41 = puVar45 + uVar29 + 4;
            uVar32 = FUN_02507924(&local_c0,pbVar41);
            if ((uVar32 & 1) == 0) {
              if (uVar29 + 5 == 8) break;
              pbVar41 = puVar45 + uVar29 + 5;
              uVar32 = FUN_02507924(&local_c0,pbVar41);
              if ((uVar32 & 1) == 0) {
                if (uVar29 + 6 == 8) break;
                pbVar41 = puVar45 + uVar29 + 6;
                uVar32 = FUN_02507924(&local_c0,pbVar41);
                if ((uVar32 & 1) == 0) {
                  if (uVar29 + 7 == 8) break;
                  pbVar41 = puVar45 + uVar29 + 7;
                  uVar32 = FUN_02507924(&local_c0,pbVar41);
                  if ((uVar32 & 1) == 0) {
                    if (bVar35 == 0) break;
                    pbVar41 = puVar45 + uVar29 + 8;
                    FUN_02507924(&local_c0,pbVar41);
                  }
                }
              }
            }
          }
        }
      }
      bVar35 = *pbVar41;
      if (7 < bVar35) break;
      local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar35);
    } while( true );
  }
  if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0xe7140) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0xe7140) + 8), puVar44 != (undefined8 *)0x0)) {
    (**(code **)*puVar44)();
  }
  puVar16 = PTR_DAT_04bb32f0;
  puVar45 = PTR_DAT_04bb2020;
  if ((((uVar22 & 1) != 0) && (*(long *)(lVar27 + 0x276cd8) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(lVar27 + 0x276cd8) + 0x18), puVar44 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar44)();
  }
  FUN_020e6f80(*(undefined8 *)PTR_DAT_04bb4128);
  plVar39 = (long *)PTR_DAT_04bb46b0;
  lVar27 = *(long *)(&LAB_001191e0 + lVar36);
  if (lVar27 == 0) {
    FUN_027f79b8(*(long *)(&LAB_001191c8 + lVar36) + *plVar4,param_1);
    plVar39 = (long *)PTR_DAT_04bb46b0;
  }
  else {
    if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_02770f64:
      plVar33 = *(long **)(lVar27 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = (undefined **)*plVar4;
        local_a8 = *(uint **)(&LAB_001191c8 + lVar36);
        local_a0 = (undefined8 *)0x145140;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
      lVar27 = *(long *)(&LAB_001191e0 + lVar36);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar27 != 0) goto LAB_02770f64;
    }
    FUN_027f79b8(*(long *)(&LAB_001191c8 + lVar36) + *plVar4,param_1);
    if ((uVar28 & 1) != 0) {
      if (*(long *)(&LAB_001191e0 + lVar36) != 0) {
        puVar44 = *(undefined8 **)(*(long *)(&LAB_001191e0 + lVar36) + 0x18);
        if (puVar44 != (undefined8 *)0x0) {
          (**(code **)*puVar44)();
        }
      }
    }
  }
  lVar27 = *(long *)(lVar36 + 0x196290);
  if (lVar27 == 0) {
    FUN_027d12b0(*(long *)(lVar36 + 0x196278) + *plVar3,param_1);
  }
  else {
    if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
LAB_02771008:
      plVar33 = *(long **)(lVar27 + 0x20);
      if (plVar33 != (long *)0x0) {
        local_b0 = (undefined **)*plVar3;
        local_a8 = *(uint **)(lVar36 + 0x196278);
        local_a0 = (undefined8 *)0xbd10;
        (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
      }
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
      lVar27 = *(long *)(lVar36 + 0x196290);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar27 != 0) goto LAB_02771008;
    }
    FUN_027d12b0(*(long *)(lVar36 + 0x196278) + *plVar3,param_1);
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x196290) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x196290) + 0x18),
       puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  uVar26 = *(undefined8 *)puVar16;
  FUN_0087ed70(uVar26,param_1);
  FUN_00880650(uVar26,param_1);
  FUN_011f4890();
  FUN_011f5530(param_1);
  FUN_02507c6c(&local_c0,1,1,0,0);
  if ((byte)local_c0 < 8) {
    local_a8 = (uint *)0x40fabed;
    local_b0 = (undefined **)(puVar45 + 0x10);
    FUN_0274bfe8(&local_c0,&local_b0,1);
    puVar16 = PTR_DAT_04bb5038;
    while ((byte)local_c0 < 8) {
      uVar28 = (ulong)(byte)local_c0;
      do {
        if (uVar28 == 7) goto LAB_02771144;
        uVar28 = uVar28 + 1;
        uVar29 = FUN_02507924(&local_c0,puVar16 + uVar28);
      } while ((uVar29 & 1) == 0);
      bVar35 = puVar16[uVar28];
      if (7 < bVar35) break;
      local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar35);
      local_a8 = (uint *)0x40fabed;
      local_b0 = (undefined **)(puVar45 + 0x10);
      FUN_0274bfe8(&local_c0,&local_b0,1);
    }
  }
LAB_02771144:
  if (*(char *)((long)param_1 + 0x29) == '\0') {
    lVar27 = *(long *)PTR_DAT_04bb39b0;
    if (lVar27 == 0) {
      bVar35 = *PTR_DAT_04bb32e0;
LAB_027711d0:
      if (bVar35 < 8) goto LAB_027711d8;
LAB_027711e0:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02771244:
        bVar13 = *PTR_DAT_04bb5038;
        bVar35 = bVar13;
        if (7 < bVar13) {
          bVar35 = 0xff;
        }
        local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar35);
        if (7 < bVar13) goto LAB_027712e0;
      }
      else {
        lVar27 = **(long **)PTR_DAT_04bb27d0;
        bVar35 = *(byte *)(lVar27 + 0x473);
        pbVar41 = PTR_DAT_04bb5038;
        if ((long)(char)bVar35 != 0xffffffffffffffff) {
          puVar7 = (uint *)(lVar27 + 0x48) + ((long)(char)bVar35 & 0xffffffffU) * 0x20;
          if (7 < bVar35) {
            puVar7 = (uint *)(lVar27 + 0x48);
          }
          if ((*puVar7 & 8) != 0) {
            pbVar41 = (byte *)(lVar27 + 0x471);
          }
        }
        bVar35 = *pbVar41;
        bVar18 = 7 < bVar35;
        if (bVar18) {
          bVar35 = 0xff;
        }
        local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar35);
        if (bVar18) goto LAB_02771244;
      }
    }
    else {
      pbVar41 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar27 + 0x15c) != 0) {
        pbVar41 = (byte *)(lVar27 + 0x158);
      }
      bVar35 = *pbVar41;
      if (7 < bVar35) {
        if ((*(int *)(lVar27 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar35 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_027711d0;
        }
        goto LAB_027711e0;
      }
LAB_027711d8:
      local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar35);
    }
    ppuVar1 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)0x409b7c8;
    local_b0 = ppuVar1;
    iVar20 = FUN_0274bce0(&local_c0,&local_b0);
    local_a8 = (uint *)0x40f04c1;
    local_b0 = ppuVar1;
    iVar21 = FUN_02743000(&local_b0);
    puVar45 = PTR_DAT_04bb2020;
    local_a8 = (uint *)0x40f04c1;
    local_b0 = ppuVar1;
    FUN_02743234(&local_b0,iVar20 != 0);
    if ((iVar20 == 0) && (iVar21 != 0)) {
      local_b0 = (undefined **)(puVar45 + 0x10);
      local_a8 = (uint *)&DAT_0406c81e;
      FUN_022029d0(&local_b0);
    }
  }
  else {
    local_b0 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)0x40f04c1;
    FUN_02743234(&local_b0,1);
  }
LAB_027712e0:
  if (*param_1 < 1) {
    local_b0 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)0x40d5de4;
    uVar28 = FUN_0273f0a0(&local_b0);
    if ((uVar28 & 1) != 0) {
      if (*(long *)PTR_DAT_04bb46b0 == 0) goto LAB_02771464;
      FUN_02705554(&local_b0,0,1);
      uVar28 = (ulong)local_b0 >> 0x20;
      if ((int)((ulong)local_b0 >> 0x20) != 8) {
        uVar29 = (ulong)local_b0 & 0xffffffff;
        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        do {
          uVar32 = uVar28;
          if (7 < uVar28) {
            uVar32 = 0xffffffff;
          }
          local_a8 = (uint *)0x40def50;
          local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)uVar32);
          local_b0 = ppuVar1;
          iVar20 = FUN_0274ce10(&local_c0,&local_b0);
          if (iVar20 == 0) {
            local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)uVar32);
            local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_a8 = (uint *)0x4095f2b;
            FUN_0274d104(&local_c0,&local_b0,1);
          }
          if (uVar28 < 8) {
            lVar27 = *(long *)PTR_DAT_04bb46b0;
            if (lVar27 == 0) goto LAB_02771464;
            (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
            if ((uVar29 == 0) && ((*(byte *)(lVar27 + 0x453) & 1) != 0)) {
              lVar27 = (**(code **)(**(long **)(*(long *)(lVar27 + 0x10) + 0x130) + 0x18))();
            }
            else {
              lVar27 = (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
              lVar27 = lVar27 + 0x110;
            }
            if (uVar28 == 7) break;
            plVar39 = (long *)(lVar27 + uVar28 * 0x48 + 0x1e3400);
            while ((6 < uVar28 || (plVar39[-1] == 0 && *plVar39 == 0))) {
              uVar28 = uVar28 + 1;
              plVar39 = plVar39 + 9;
              if (uVar28 == 7) goto LAB_02771394;
            }
            uVar28 = (ulong)((int)uVar28 + 1);
          }
        } while (uVar28 != 8);
      }
    }
LAB_02771394:
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      FUN_02705554(&local_b0,0,1);
      uVar28 = (ulong)local_b0 >> 0x20;
      iVar20 = (int)local_b0;
      if ((int)((ulong)local_b0 >> 0x20) != 8) {
        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        uVar29 = uVar28;
        do {
          uVar32 = uVar29;
          if (7 < uVar29) {
            uVar32 = 0xffffffff;
          }
          local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)uVar32);
          local_a8 = (uint *)0x40ffc7b;
          local_b0 = ppuVar1;
          FUN_0274ce10(&local_c0,&local_b0);
          if (uVar29 < 8) {
            lVar27 = *(long *)PTR_DAT_04bb46b0;
            if (lVar27 == 0) break;
            (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
            if ((iVar20 == 0) && ((*(byte *)(lVar27 + 0x453) & 1) != 0)) {
              lVar27 = (**(code **)(**(long **)(*(long *)(lVar27 + 0x10) + 0x130) + 0x18))();
            }
            else {
              lVar27 = (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
              lVar27 = lVar27 + 0x110;
            }
            if (uVar29 == 7) break;
            plVar39 = (long *)(lVar27 + uVar29 * 0x48 + 0x1e3400);
            while ((6 < uVar29 || (plVar39[-1] == 0 && *plVar39 == 0))) {
              uVar29 = uVar29 + 1;
              plVar39 = plVar39 + 9;
              if (uVar29 == 7) goto LAB_027713cc;
            }
            uVar29 = (ulong)((int)uVar29 + 1);
          }
        } while (uVar29 != 8);
      }
LAB_027713cc:
      ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_a8 = (uint *)0x40d05cd;
      local_b0 = ppuVar1;
      uVar29 = FUN_0273f0a0(&local_b0);
      if ((uVar29 & 1) == 0) {
        local_a8 = (uint *)0x40bf712;
        local_b0 = ppuVar1;
        uVar29 = FUN_0273f0a0(&local_b0);
        if (((uVar29 & 1) != 0) && (uVar28 != 8)) {
          ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          uVar29 = uVar28;
          do {
            uVar32 = uVar29;
            if (7 < uVar29) {
              uVar32 = 0xffffffff;
            }
            local_a8 = (uint *)0x4095f2b;
            local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)uVar32);
            local_b0 = ppuVar2;
            FUN_0274d104(&local_c0,&local_b0,1);
            if (uVar29 < 8) {
              lVar27 = *(long *)PTR_DAT_04bb46b0;
              if (lVar27 == 0) break;
              (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
              if ((iVar20 == 0) && ((*(byte *)(lVar27 + 0x453) & 1) != 0)) {
                lVar27 = (**(code **)(**(long **)(*(long *)(lVar27 + 0x10) + 0x130) + 0x18))();
              }
              else {
                lVar27 = (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
                lVar27 = lVar27 + 0x110;
              }
              if (uVar29 == 7) break;
              plVar39 = (long *)(lVar27 + uVar29 * 0x48 + 0x1e3400);
              while ((6 < uVar29 || (plVar39[-1] == 0 && *plVar39 == 0))) {
                uVar29 = uVar29 + 1;
                plVar39 = plVar39 + 9;
                if (uVar29 == 7) goto LAB_02771408;
              }
              uVar29 = (ulong)((int)uVar29 + 1);
            }
          } while (uVar29 != 8);
        }
      }
LAB_02771408:
      local_a8 = (uint *)0x40a0ec5;
      local_b0 = ppuVar1;
      uVar29 = FUN_0273f0a0(&local_b0);
      if ((uVar29 & 1) == 0) {
        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_a8 = (uint *)0x40c9df0;
        local_b0 = ppuVar1;
        uVar29 = FUN_0273f0a0(&local_b0);
        if ((uVar29 & 1) == 0) {
          local_a8 = (uint *)0x40cf0ad;
          local_b0 = ppuVar1;
          uVar29 = FUN_0273f0a0(&local_b0);
          if (((uVar29 & 1) != 0) && (uVar28 != 8)) {
            ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            do {
              uVar29 = uVar28;
              if (7 < uVar28) {
                uVar29 = 0xffffffff;
              }
              local_a8 = (uint *)0x4095f2b;
              local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)uVar29);
              local_b0 = ppuVar1;
              FUN_0274d104(&local_c0,&local_b0,1);
              if (uVar28 < 8) {
                lVar27 = *(long *)PTR_DAT_04bb46b0;
                if (lVar27 == 0) break;
                (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
                if ((iVar20 == 0) && ((*(byte *)(lVar27 + 0x453) & 1) != 0)) {
                  lVar27 = (**(code **)(**(long **)(*(long *)(lVar27 + 0x10) + 0x130) + 0x18))();
                }
                else {
                  lVar27 = (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
                  lVar27 = lVar27 + 0x110;
                }
                if (uVar28 == 7) break;
                plVar39 = (long *)(lVar27 + uVar28 * 0x48 + 0x1e3400);
                while ((6 < uVar28 || (plVar39[-1] == 0 && *plVar39 == 0))) {
                  uVar28 = uVar28 + 1;
                  plVar39 = plVar39 + 9;
                  if (uVar28 == 7) goto LAB_02771464;
                }
                uVar28 = (ulong)((int)uVar28 + 1);
              }
            } while (uVar28 != 8);
          }
        }
      }
    }
  }
  else if (*plVar39 != 0) {
    FUN_02705554(&local_b0,0,1);
    uVar28 = (ulong)local_b0 >> 0x20;
    if ((int)((ulong)local_b0 >> 0x20) != 8) {
      uVar29 = (ulong)local_b0 & 0xffffffff;
      ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      do {
        uVar32 = uVar28;
        if (7 < uVar28) {
          uVar32 = 0xffffffff;
        }
        local_a8 = (uint *)0x40bf4da;
        local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)uVar32);
        local_b0 = ppuVar1;
        iVar20 = FUN_0274ce10(&local_c0,&local_b0);
        if (iVar20 != 0) {
          local_c0 = (undefined **)CONCAT44(local_c0._4_4_,(int)uVar32);
          local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_a8 = (uint *)0x4095f2b;
          FUN_0274d104(&local_c0,&local_b0,1);
        }
        if (uVar28 < 8) {
          lVar27 = *(long *)PTR_DAT_04bb46b0;
          if (lVar27 == 0) break;
          (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
          if ((uVar29 == 0) && ((*(byte *)(lVar27 + 0x453) & 1) != 0)) {
            lVar27 = (**(code **)(**(long **)(*(long *)(lVar27 + 0x10) + 0x130) + 0x18))();
          }
          else {
            lVar27 = (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
            lVar27 = lVar27 + 0x110;
          }
          if (uVar28 == 7) break;
          plVar39 = (long *)(lVar27 + uVar28 * 0x48 + 0x1e3400);
          while ((6 < uVar28 || (plVar39[-1] == 0 && *plVar39 == 0))) {
            uVar28 = uVar28 + 1;
            plVar39 = plVar39 + 9;
            if (uVar28 == 7) goto LAB_02771464;
          }
          uVar28 = (ulong)((int)uVar28 + 1);
        }
      } while (uVar28 != 8);
    }
  }
LAB_02771464:
  puVar45 = PTR_DAT_04bb46b0;
  if (*(long **)(lVar36 + 0x28) == (long *)0x0) {
    uVar28 = 0;
  }
  else {
    puVar44 = (undefined8 *)**(long **)(lVar36 + 0x28);
    if (puVar44 == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)*puVar44)();
      uVar28 = uVar28 & 0xffffffff;
    }
  }
  lVar27 = *(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8);
  if (((*(long *)(lVar27 + 0x1e33b0) != 0 || *(long *)(lVar27 + 0x1e33b8) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar37 = FUN_026eec4c(*(long *)puVar45,0), lVar37 != 0)) {
    plVar39 = (long *)(lVar37 + 0x184c0);
    lVar43 = *(long *)(lVar37 + 0x184e0);
    if (lVar43 == 0) {
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_02771860:
        plVar33 = *(long **)(lVar43 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
        lVar43 = *(long *)(lVar37 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar43 != 0) goto LAB_02771860;
      }
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if (((*(long *)(lVar27 + 0x1e33f8) != 0 || *(long *)(lVar27 + 0x1e3400) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar37 = FUN_026eec4c(*(long *)puVar45,1), lVar37 != 0)) {
    plVar39 = (long *)(lVar37 + 0x184c0);
    lVar43 = *(long *)(lVar37 + 0x184e0);
    if (lVar43 == 0) {
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_0277192c:
        plVar33 = *(long **)(lVar43 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
        lVar43 = *(long *)(lVar37 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar43 != 0) goto LAB_0277192c;
      }
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if (((*(long *)(lVar27 + 0x1e3440) != 0 || *(long *)(lVar27 + 0x1e3448) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar37 = FUN_026eec4c(*(long *)puVar45,2), lVar37 != 0)) {
    plVar39 = (long *)(lVar37 + 0x184c0);
    lVar43 = *(long *)(lVar37 + 0x184e0);
    if (lVar43 == 0) {
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_027719f8:
        plVar33 = *(long **)(lVar43 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
        lVar43 = *(long *)(lVar37 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar43 != 0) goto LAB_027719f8;
      }
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if (((*(long *)(lVar27 + 0x1e3488) != 0 || *(long *)(lVar27 + 0x1e3490) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar37 = FUN_026eec4c(*(long *)puVar45,3), lVar37 != 0)) {
    plVar39 = (long *)(lVar37 + 0x184c0);
    lVar43 = *(long *)(lVar37 + 0x184e0);
    if (lVar43 == 0) {
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_02771ac4:
        plVar33 = *(long **)(lVar43 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
        lVar43 = *(long *)(lVar37 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar43 != 0) goto LAB_02771ac4;
      }
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if (((*(long *)(lVar27 + 0x1e34d0) != 0 || *(long *)(lVar27 + 0x1e34d8) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar37 = FUN_026eec4c(*(long *)puVar45,4), lVar37 != 0)) {
    plVar39 = (long *)(lVar37 + 0x184c0);
    lVar43 = *(long *)(lVar37 + 0x184e0);
    if (lVar43 == 0) {
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_02771b90:
        plVar33 = *(long **)(lVar43 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
        lVar43 = *(long *)(lVar37 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar43 != 0) goto LAB_02771b90;
      }
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if (((*(long *)(lVar27 + 0x1e3518) != 0 || *(long *)(lVar27 + 0x1e3520) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar37 = FUN_026eec4c(*(long *)puVar45,5), lVar37 != 0)) {
    plVar39 = (long *)(lVar37 + 0x184c0);
    lVar43 = *(long *)(lVar37 + 0x184e0);
    if (lVar43 == 0) {
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_02771c5c:
        plVar33 = *(long **)(lVar43 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
        lVar43 = *(long *)(lVar37 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar43 != 0) goto LAB_02771c5c;
      }
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if (((*(long *)(lVar27 + 0x1e3560) != 0 || *(long *)(lVar27 + 0x1e3568) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar37 = FUN_026eec4c(*(long *)puVar45,6), lVar37 != 0)) {
    plVar39 = (long *)(lVar37 + 0x184c0);
    lVar43 = *(long *)(lVar37 + 0x184e0);
    if (lVar43 == 0) {
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar43 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_02771d28:
        plVar33 = *(long **)(lVar43 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar37 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar43 + 0x10))();
        lVar43 = *(long *)(lVar37 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar43 != 0) goto LAB_02771d28;
      }
      FUN_02842f30(*(long *)(lVar37 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar37 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if (((*(long *)(lVar27 + 0x1e35a8) != 0 || *(long *)(lVar27 + 0x1e35b0) != 0) &&
      (*(long *)puVar45 != 0)) && (lVar27 = FUN_026eec4c(*(long *)puVar45,7), lVar27 != 0)) {
    plVar39 = (long *)(lVar27 + 0x184c0);
    lVar37 = *(long *)(lVar27 + 0x184e0);
    if (lVar37 == 0) {
      FUN_02842f30(*(long *)(lVar27 + 0x184c8) + *plVar39);
    }
    else {
      if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
        uVar29 = 0;
LAB_02771df4:
        plVar33 = *(long **)(lVar37 + 0x20);
        if (plVar33 != (long *)0x0) {
          local_b0 = (undefined **)*plVar39;
          local_a8 = *(uint **)(lVar27 + 0x184c8);
          local_a0 = (undefined8 *)0x234d0;
          (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
        }
      }
      else {
        uVar29 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
        lVar37 = *(long *)(lVar27 + 0x184e0);
        uVar29 = uVar29 & 0xffffffff;
        if (lVar37 != 0) goto LAB_02771df4;
      }
      FUN_02842f30(*(long *)(lVar27 + 0x184c8) + *plVar39);
      if ((((uVar29 & 1) != 0) && (*(long *)(lVar27 + 0x184e0) != 0)) &&
         (puVar44 = *(undefined8 **)(*(long *)(lVar27 + 0x184e0) + 0x18),
         puVar44 != (undefined8 *)0x0)) {
        (**(code **)*puVar44)();
      }
    }
  }
  if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x28) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x28) + 8), puVar44 != (undefined8 *)0x0)) {
    (**(code **)*puVar44)();
  }
  lVar27 = *(long *)(FUN_002051f0 + lVar36);
  if (lVar27 == 0) {
    uVar28 = 0;
  }
  else {
    if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
      lVar27 = *(long *)(FUN_002051f0 + lVar36);
      uVar28 = uVar28 & 0xffffffff;
      if (lVar27 == 0) goto LAB_02771ed4;
    }
    plVar39 = *(long **)(lVar27 + 0x20);
    if (plVar39 != (long *)0x0) {
      local_b0 = *(undefined ***)(lVar36 + 0x2051d0);
      local_a8 = *(uint **)(FUN_002051d8 + lVar36);
      local_a0 = (undefined8 *)0x58;
      (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
    }
  }
LAB_02771ed4:
  lVar27 = *(long *)(FUN_002051d8 + lVar36) + *(long *)(lVar36 + 0x2051d0);
  if (((*(long *)(lVar27 + 8) == 0) && (*(long *)puVar45 != 0)) &&
     (lVar37 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar45 + 0x10) + 0x38))(),
     lVar37 != 0)) {
    if ((*(long **)(lVar37 + 0x276f40) == (long *)0x0) ||
       (puVar44 = (undefined8 *)**(long **)(lVar37 + 0x276f40), puVar44 == (undefined8 *)0x0)) {
      uVar22 = 1;
    }
    else {
      uVar22 = (**(code **)*puVar44)();
      uVar22 = uVar22 ^ 1;
    }
    lVar43 = *(long *)(lVar37 + 0x276f28) + *(long *)(lVar37 + 0x276f20);
    if (*(long *)(lVar43 + 0x50) != 0) {
      *(long *)(lVar27 + 8) = *(long *)(lVar43 + 0x50);
      uVar26 = *(undefined8 *)(lVar43 + 0x58);
      uVar9 = *(undefined8 *)(lVar43 + 0x60);
      uVar10 = *(undefined8 *)(lVar43 + 0x70);
      *(undefined8 *)(lVar27 + 0x20) = *(undefined8 *)(lVar43 + 0x68);
      *(undefined8 *)(lVar27 + 0x28) = uVar10;
      *(undefined8 *)(lVar27 + 0x10) = uVar26;
      *(undefined8 *)(lVar27 + 0x18) = uVar9;
      *(undefined8 *)(lVar27 + 0x30) =
           *(undefined8 *)(*(long *)(lVar37 + 0x276f28) + *(long *)(lVar37 + 0x276f20) + 0x78);
    }
    if ((((uVar22 & 1) == 0) && (*(long *)(lVar37 + 0x276f40) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar37 + 0x276f40) + 8), puVar44 != (undefined8 *)0x0))
    {
      (**(code **)*puVar44)();
    }
  }
  if ((((uVar28 & 1) != 0) && (*(long *)(FUN_002051f0 + lVar36) != 0)) &&
     (puVar44 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar36) + 0x18),
     puVar44 != (undefined8 *)0x0)) {
    (**(code **)*puVar44)();
  }
  FUN_01a20ae0();
  if (*(long *)puVar45 != 0) {
    FUN_02705554(&local_b0,0,1);
    uVar28 = (ulong)local_b0 >> 0x20;
    if ((int)((ulong)local_b0 >> 0x20) != 8) {
      uVar29 = (ulong)local_b0 & 0xffffffff;
      do {
        uVar32 = 0xffffffff;
        if (uVar28 < 8) {
          uVar32 = uVar28;
        }
        local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(int)uVar32);
        if (uVar28 < 8) {
          FUN_0264aef0(&local_b0);
          FUN_0264b2e0(&local_b0);
          FUN_0264b9e0(&local_b0);
          lVar27 = *(long *)PTR_DAT_04bb46b0;
          if (lVar27 == 0) break;
          (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
          if ((uVar29 == 0) && ((*(byte *)(lVar27 + 0x453) & 1) != 0)) {
            lVar27 = (**(code **)(**(long **)(*(long *)(lVar27 + 0x10) + 0x130) + 0x18))();
          }
          else {
            lVar27 = (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
            lVar27 = lVar27 + 0x110;
          }
          if (uVar28 == 7) break;
          plVar39 = (long *)(lVar27 + uVar28 * 0x48 + 0x1e3400);
          while ((6 < uVar28 || (plVar39[-1] == 0 && *plVar39 == 0))) {
            uVar28 = uVar28 + 1;
            plVar39 = plVar39 + 9;
            if (uVar28 == 7) goto LAB_02771f34;
          }
          uVar28 = (ulong)((int)uVar28 + 1);
        }
      } while (uVar28 != 8);
    }
  }
LAB_02771f34:
  uVar22 = FUN_0252d29c();
  puVar16 = PTR_DAT_04bb46b0;
  puVar45 = PTR_DAT_04bb2020;
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar22);
  if (uVar22 != 0xffffffff) {
    if ((*(long **)(lVar36 + 0x28) == (long *)0x0) ||
       (puVar44 = (undefined8 *)**(long **)(lVar36 + 0x28), puVar44 == (undefined8 *)0x0)) {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)*puVar44)();
      uVar28 = uVar28 & 0xffffffff;
    }
    if ((uVar22 < 8) &&
       (lVar27 = *(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8) + (ulong)uVar22 * 0x48,
       *(long *)(lVar27 + 0x1e33b0) != 0 || *(long *)(lVar27 + 0x1e33b8) != 0)) {
      FUN_026868d0(&local_b0);
      FUN_02686c80(&local_b0);
    }
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0x28) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0x28) + 8), puVar44 != (undefined8 *)0x0)) {
      (**(code **)*puVar44)();
    }
  }
  local_b0 = (undefined **)(puVar45 + 0x10);
  local_a8 = (uint *)0x40a0ec5;
  uVar28 = FUN_0273f0a0(&local_b0);
  puVar17 = PTR_DAT_04bb37e0;
  if ((uVar28 & 1) != 0) goto LAB_02771ff8;
  local_98 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_96 = PTR_DAT_04bb37e0[2];
  local_95 = PTR_DAT_04bb37e0[3];
  local_80 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_90 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_94 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  local_a0 = *(undefined8 **)PTR_DAT_04bb37e0;
  local_a8 = *(uint **)PTR_DAT_04bb37e0;
  local_b0 = *(undefined ***)PTR_DAT_04bb37e0;
  local_8c = local_94;
  local_88 = local_98;
  local_86 = local_96;
  local_85 = local_95;
  local_84 = local_94;
  local_7c = local_94;
  local_78 = local_98;
  local_76 = local_96;
  local_75 = local_95;
  local_74 = local_94;
  local_70 = local_98;
  local_6e = local_96;
  local_6d = local_95;
  local_6c = local_94;
  FUN_016d3390(&local_b0,0);
  FUN_016c9dd8(0,&local_b0);
  local_98 = *(undefined2 *)puVar17;
  local_96 = puVar17[2];
  local_95 = puVar17[3];
  local_80 = *(undefined4 *)puVar17;
  local_90 = *(undefined4 *)puVar17;
  local_94 = *(uint *)(puVar17 + 4);
  local_a0 = *(undefined8 **)puVar17;
  local_a8 = *(uint **)puVar17;
  local_b0 = *(undefined ***)puVar17;
  local_8c = local_94;
  local_88 = local_98;
  local_86 = local_96;
  local_85 = local_95;
  local_84 = local_94;
  local_7c = local_94;
  local_78 = local_98;
  local_76 = local_96;
  local_75 = local_95;
  local_74 = local_94;
  local_70 = local_98;
  local_6e = local_96;
  local_6d = local_95;
  local_6c = local_94;
  FUN_016d3390(&local_b0,1);
  FUN_016c9dd8(1,&local_b0);
  lVar27 = *(long *)puVar16;
  if (lVar27 != 0) {
    puVar44 = *(undefined8 **)(lVar27 + 0x10);
    if ((*(byte *)(lVar27 + 0x453) & 1) == 0) {
      lVar27 = (**(code **)(*(long *)*puVar44 + 0x38))();
      if (lVar27 != 0) {
        lVar27 = lVar27 + 0x70;
        goto LAB_02772aa8;
      }
    }
    else if (((puVar44 != (undefined8 *)0x0) && ((long *)puVar44[0x26] != (long *)0x0)) &&
            (lVar27 = (**(code **)(*(long *)puVar44[0x26] + 0x38))(), lVar27 != 0)) {
LAB_02772aa8:
      plVar39 = (long *)(lVar27 + 0x2181a8);
      lVar37 = *(long *)(lVar27 + 0x2181c8);
      if (lVar37 == 0) {
        FUN_02779788(*(long *)(lVar27 + 0x2181b0) + *plVar39);
      }
      else {
        if (*(undefined8 **)(lVar37 + 0x10) == (undefined8 *)0x0) {
          uVar28 = 0;
LAB_02772c48:
          plVar33 = *(long **)(lVar37 + 0x20);
          if (plVar33 != (long *)0x0) {
            local_b0 = (undefined **)*plVar39;
            local_a8 = *(uint **)(lVar27 + 0x2181b0);
            local_a0 = (undefined8 *)0x179e4;
            (**(code **)(*plVar33 + 0x20))(plVar33,&local_b0);
          }
        }
        else {
          uVar28 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
          lVar37 = *(long *)(lVar27 + 0x2181c8);
          uVar28 = uVar28 & 0xffffffff;
          if (lVar37 != 0) goto LAB_02772c48;
        }
        FUN_02779788(*(long *)(lVar27 + 0x2181b0) + *plVar39);
        if ((((uVar28 & 1) != 0) && (*(long *)(lVar27 + 0x2181c8) != 0)) &&
           (puVar44 = *(undefined8 **)(*(long *)(lVar27 + 0x2181c8) + 0x18),
           puVar44 != (undefined8 *)0x0)) {
          (**(code **)*puVar44)();
        }
      }
    }
LAB_02771ff8:
    if (*(long *)puVar16 != 0) {
      FUN_02705554(&local_c0,0,1);
      if (local_c0._4_4_ != 8) {
        uVar23 = (uint)local_c0;
        ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        uVar22 = local_c0._4_4_;
        do {
          uVar8 = uVar22;
          if (7 < uVar22) {
            uVar8 = 0xffffffff;
          }
          local_a8 = (uint *)0x40a0ec5;
          local_c4 = uVar8;
          local_b0 = ppuVar1;
          iVar20 = FUN_0274ce10(&local_c4,&local_b0);
          if (iVar20 == 0) {
            FUN_027771d0(uVar8);
          }
          if (uVar22 < 8) {
            lVar27 = *(long *)puVar16;
            if (lVar27 == 0) break;
            (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
            if ((uVar23 == 0) && ((*(byte *)(lVar27 + 0x453) & 1) != 0)) {
              lVar27 = (**(code **)(**(long **)(*(long *)(lVar27 + 0x10) + 0x130) + 0x18))();
            }
            else {
              lVar27 = (**(code **)(*(long *)**(undefined8 **)(lVar27 + 0x10) + 0x18))();
              lVar27 = lVar27 + 0x110;
            }
            if (uVar22 == 7) break;
            uVar28 = (ulong)uVar22;
            plVar39 = (long *)(lVar27 + (ulong)uVar22 * 0x48 + 0x1e3400);
            while ((6 < uVar28 || (plVar39[-1] == 0 && *plVar39 == 0))) {
              uVar28 = uVar28 + 1;
              plVar39 = plVar39 + 9;
              if (uVar28 == 7) goto LAB_0277201c;
            }
            uVar22 = (int)uVar28 + 1;
          }
        } while (uVar22 != 8);
      }
LAB_0277201c:
      puVar45 = PTR_DAT_04bb2020;
    }
  }
  local_b0 = (undefined **)(puVar45 + 0x10);
  local_a8 = (uint *)0x40a0ec5;
  uVar28 = FUN_0273f0a0(&local_b0);
  if ((uVar28 & 1) == 0) {
    if ((*(long *)(lVar36 + 0xd0) == 0) ||
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0xd0) + 0x10), puVar44 == (undefined8 *)0x0))
    {
      uVar28 = 0;
    }
    else {
      uVar28 = (**(code **)*puVar44)();
      uVar28 = uVar28 & 0xffffffff;
    }
    local_b0 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)&DAT_040cfb83;
    iVar20 = FUN_021f57e0(&local_c0,&local_b0);
    if ((*(long *)(lVar36 + 0xd0) != 0) &&
       (plVar39 = *(long **)(*(long *)(lVar36 + 0xd0) + 0x20), plVar39 != (long *)0x0)) {
      local_b0 = *(undefined ***)(lVar36 + 0xb0);
      local_a8 = *(uint **)(lVar36 + 0xb8);
      local_a0 = (undefined8 *)0x1e3388;
      (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
    }
    if (iVar20 - 1U < 0x1a4) {
      lVar27 = *(long *)(lVar36 + 0xb8) + *(long *)(lVar36 + 0xb0) + (ulong)(iVar20 - 1U) * 0xe8;
      *(undefined8 *)(lVar27 + 0x1cb794) = 0;
      *(undefined8 *)(lVar27 + 0x1cb79c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb784) = 0;
      *(undefined8 *)(lVar27 + 0x1cb78c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6bc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb774) = 0;
      *(undefined8 *)(lVar27 + 0x1cb77c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb764) = 0;
      *(undefined8 *)(lVar27 + 0x1cb76c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb754) = 0;
      *(undefined8 *)(lVar27 + 0x1cb75c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb744) = 0;
      *(undefined8 *)(lVar27 + 0x1cb74c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb734) = 0;
      *(undefined8 *)(lVar27 + 0x1cb73c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb724) = 0;
      *(undefined8 *)(lVar27 + 0x1cb72c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb714) = 0;
      *(undefined8 *)(lVar27 + 0x1cb71c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb704) = 0;
      *(undefined8 *)(lVar27 + 0x1cb70c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6f4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6fc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6e4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6ec) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6d4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6dc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6c4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6cc) = 0;
      FUN_027c5694();
    }
    local_b0 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)&DAT_040bfaf3;
    iVar20 = FUN_021f57e0(&local_c0,&local_b0);
    if ((*(long *)(lVar36 + 0xd0) != 0) &&
       (plVar39 = *(long **)(*(long *)(lVar36 + 0xd0) + 0x20), plVar39 != (long *)0x0)) {
      local_b0 = *(undefined ***)(lVar36 + 0xb0);
      local_a8 = *(uint **)(lVar36 + 0xb8);
      local_a0 = (undefined8 *)0x1e3388;
      (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
    }
    if (iVar20 - 1U < 0x1a4) {
      lVar27 = *(long *)(lVar36 + 0xb8) + *(long *)(lVar36 + 0xb0) + (ulong)(iVar20 - 1U) * 0xe8;
      *(undefined8 *)(lVar27 + 0x1cb794) = 0;
      *(undefined8 *)(lVar27 + 0x1cb79c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb784) = 0;
      *(undefined8 *)(lVar27 + 0x1cb78c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6bc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb774) = 0;
      *(undefined8 *)(lVar27 + 0x1cb77c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb764) = 0;
      *(undefined8 *)(lVar27 + 0x1cb76c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb754) = 0;
      *(undefined8 *)(lVar27 + 0x1cb75c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb744) = 0;
      *(undefined8 *)(lVar27 + 0x1cb74c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb734) = 0;
      *(undefined8 *)(lVar27 + 0x1cb73c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb724) = 0;
      *(undefined8 *)(lVar27 + 0x1cb72c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb714) = 0;
      *(undefined8 *)(lVar27 + 0x1cb71c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb704) = 0;
      *(undefined8 *)(lVar27 + 0x1cb70c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6f4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6fc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6e4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6ec) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6d4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6dc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6c4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6cc) = 0;
      FUN_027c5694();
    }
    local_b0 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)&DAT_040f40e9;
    iVar20 = FUN_021f57e0(&local_c0,&local_b0);
    if ((*(long *)(lVar36 + 0xd0) != 0) &&
       (plVar39 = *(long **)(*(long *)(lVar36 + 0xd0) + 0x20), plVar39 != (long *)0x0)) {
      local_b0 = *(undefined ***)(lVar36 + 0xb0);
      local_a8 = *(uint **)(lVar36 + 0xb8);
      local_a0 = (undefined8 *)0x1e3388;
      (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
    }
    if (iVar20 - 1U < 0x1a4) {
      lVar27 = *(long *)(lVar36 + 0xb8) + *(long *)(lVar36 + 0xb0) + (ulong)(iVar20 - 1U) * 0xe8;
      *(undefined8 *)(lVar27 + 0x1cb794) = 0;
      *(undefined8 *)(lVar27 + 0x1cb79c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb784) = 0;
      *(undefined8 *)(lVar27 + 0x1cb78c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6bc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb774) = 0;
      *(undefined8 *)(lVar27 + 0x1cb77c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb764) = 0;
      *(undefined8 *)(lVar27 + 0x1cb76c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb754) = 0;
      *(undefined8 *)(lVar27 + 0x1cb75c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb744) = 0;
      *(undefined8 *)(lVar27 + 0x1cb74c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb734) = 0;
      *(undefined8 *)(lVar27 + 0x1cb73c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb724) = 0;
      *(undefined8 *)(lVar27 + 0x1cb72c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb714) = 0;
      *(undefined8 *)(lVar27 + 0x1cb71c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb704) = 0;
      *(undefined8 *)(lVar27 + 0x1cb70c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6f4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6fc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6e4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6ec) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6d4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6dc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6c4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6cc) = 0;
      FUN_027c5694();
    }
    local_b0 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)&DAT_0407ca93;
    iVar20 = FUN_021f57e0(&local_c0,&local_b0);
    if ((*(long *)(lVar36 + 0xd0) != 0) &&
       (plVar39 = *(long **)(*(long *)(lVar36 + 0xd0) + 0x20), plVar39 != (long *)0x0)) {
      local_b0 = *(undefined ***)(lVar36 + 0xb0);
      local_a8 = *(uint **)(lVar36 + 0xb8);
      local_a0 = (undefined8 *)0x1e3388;
      (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
    }
    if (iVar20 - 1U < 0x1a4) {
      lVar27 = *(long *)(lVar36 + 0xb8) + *(long *)(lVar36 + 0xb0) + (ulong)(iVar20 - 1U) * 0xe8;
      *(undefined8 *)(lVar27 + 0x1cb794) = 0;
      *(undefined8 *)(lVar27 + 0x1cb79c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb784) = 0;
      *(undefined8 *)(lVar27 + 0x1cb78c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6bc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb774) = 0;
      *(undefined8 *)(lVar27 + 0x1cb77c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb764) = 0;
      *(undefined8 *)(lVar27 + 0x1cb76c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb754) = 0;
      *(undefined8 *)(lVar27 + 0x1cb75c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb744) = 0;
      *(undefined8 *)(lVar27 + 0x1cb74c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb734) = 0;
      *(undefined8 *)(lVar27 + 0x1cb73c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb724) = 0;
      *(undefined8 *)(lVar27 + 0x1cb72c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb714) = 0;
      *(undefined8 *)(lVar27 + 0x1cb71c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb704) = 0;
      *(undefined8 *)(lVar27 + 0x1cb70c) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6f4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6fc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6e4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6ec) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6d4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6dc) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6c4) = 0;
      *(undefined8 *)(lVar27 + 0x1cb6cc) = 0;
      FUN_027c5694();
    }
    if ((((uVar28 & 1) != 0) && (*(long *)(lVar36 + 0xd0) != 0)) &&
       (puVar44 = *(undefined8 **)(*(long *)(lVar36 + 0xd0) + 0x18), puVar44 != (undefined8 *)0x0))
    {
      (**(code **)*puVar44)();
    }
  }
  if (*(long *)puVar16 != 0) {
    FUN_02705554(&local_c0,0,1);
    if (local_c0._4_4_ != 8) {
      ppuVar1 = (undefined **)(puVar45 + 0x10);
      uVar22 = local_c0._4_4_;
      do {
        uVar23 = uVar22;
        if (7 < uVar22) {
          uVar23 = 0xffffffff;
        }
        local_a8 = (uint *)0x40a0ec5;
        local_c4 = uVar23;
        local_b0 = ppuVar1;
        iVar20 = FUN_0274ce10(&local_c4,&local_b0);
        if (iVar20 == 0) {
          lVar27 = FUN_026eec4c(*(undefined8 *)PTR_DAT_04bb46b0,uVar23);
          lVar36 = lVar27 + 0x194b0;
          if (*(long *)(lVar27 + 0x194b8) == 0) {
            lVar36 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          lVar27 = *(long *)(lVar36 + 0x28);
          if (lVar27 == 0) {
            lVar37 = *(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8) + 0x38888;
            puVar45 = PTR_DAT_04bb2020;
          }
          else {
            if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
              uVar28 = 0;
LAB_02772794:
              plVar39 = *(long **)(lVar27 + 0x20);
              if (plVar39 == (long *)0x0) goto LAB_027727e0;
              local_b0 = *(undefined ***)(lVar36 + 8);
              local_a8 = *(uint **)(lVar36 + 0x10);
              local_a0 = (undefined8 *)0x3ce60;
              (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
              lVar37 = *(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8) + 0x38888;
              if ((uVar28 & 1) == 0) {
                puVar45 = PTR_DAT_04bb2020;
                goto LAB_0277281c;
              }
              lVar27 = *(long *)(lVar36 + 0x28);
            }
            else {
              uVar28 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
              lVar27 = *(long *)(lVar36 + 0x28);
              uVar28 = uVar28 & 0xffffffff;
              if (lVar27 != 0) goto LAB_02772794;
LAB_027727e0:
              lVar37 = *(long *)(lVar36 + 0x10) + *(long *)(lVar36 + 8) + 0x38888;
              puVar45 = PTR_DAT_04bb2020;
              if ((uVar28 & 1) == 0) goto LAB_0277281c;
            }
            puVar45 = PTR_DAT_04bb2020;
            if (lVar27 != 0) {
              if (*(undefined8 **)(lVar27 + 0x18) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(lVar27 + 0x18))();
              }
            }
          }
LAB_0277281c:
          local_a8 = (uint *)&DAT_040cfb83;
          local_b0 = (undefined **)(puVar45 + 0x10);
          uVar23 = FUN_021f57e0(auStack_cc,&local_b0);
          if (uVar23 < 0x1fe) {
            *(undefined1 *)(lVar37 + (ulong)uVar23) = 0;
            ((undefined1 *)(lVar37 + (ulong)uVar23))[0x1fe] = 0;
          }
          local_a8 = (uint *)&DAT_040bfaf3;
          local_b0 = (undefined **)(puVar45 + 0x10);
          uVar23 = FUN_021f57e0(auStack_cc,&local_b0);
          if (uVar23 < 0x1fe) {
            *(undefined1 *)(lVar37 + (ulong)uVar23) = 0;
            ((undefined1 *)(lVar37 + (ulong)uVar23))[0x1fe] = 0;
          }
          local_a8 = (uint *)&DAT_040f40e9;
          local_b0 = (undefined **)(puVar45 + 0x10);
          uVar23 = FUN_021f57e0(auStack_cc,&local_b0);
          if (uVar23 < 0x1fe) {
            *(undefined1 *)(lVar37 + (ulong)uVar23) = 0;
            ((undefined1 *)(lVar37 + (ulong)uVar23))[0x1fe] = 0;
          }
          local_a8 = (uint *)&DAT_0407ca93;
          local_b0 = (undefined **)(puVar45 + 0x10);
          uVar23 = FUN_021f57e0(auStack_cc,&local_b0);
          if (uVar23 < 0x1fe) {
            *(undefined1 *)(lVar37 + (ulong)uVar23) = 0;
            ((undefined1 *)(lVar37 + (ulong)uVar23))[0x1fe] = 0;
          }
        }
        if (uVar22 < 8) {
          lVar36 = *(long *)PTR_DAT_04bb46b0;
          if (lVar36 == 0) break;
          (**(code **)(*(long *)**(undefined8 **)(lVar36 + 0x10) + 0x18))();
          if (((uint)local_c0 == 0) && ((*(byte *)(lVar36 + 0x453) & 1) != 0)) {
            lVar36 = (**(code **)(**(long **)(*(long *)(lVar36 + 0x10) + 0x130) + 0x18))();
          }
          else {
            lVar36 = (**(code **)(*(long *)**(undefined8 **)(lVar36 + 0x10) + 0x18))();
            lVar36 = lVar36 + 0x110;
          }
          if (uVar22 == 7) break;
          uVar28 = (ulong)uVar22;
          plVar39 = (long *)(lVar36 + (ulong)uVar22 * 0x48 + 0x1e3400);
          while ((6 < uVar28 || (plVar39[-1] == 0 && *plVar39 == 0))) {
            uVar28 = uVar28 + 1;
            plVar39 = plVar39 + 9;
            if (uVar28 == 7) goto LAB_0277264c;
          }
          uVar22 = (int)uVar28 + 1;
        }
      } while (uVar22 != 8);
    }
  }
LAB_0277264c:
  FUN_016a9b40(param_1);
  FUN_02618ecc(param_1);
  if (*(char *)((long)param_1 + 0x29) != '\0') {
    return;
  }
  lVar36 = *(long *)PTR_DAT_04bb39b0;
  pbVar41 = PTR_DAT_04bb32e0;
  if (lVar36 == 0) {
LAB_02772ae4:
    if (7 < *pbVar41) {
LAB_02772af0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar36 = **(long **)PTR_DAT_04bb27d0;
        bVar35 = *(byte *)(lVar36 + 0x473);
        pbVar41 = PTR_DAT_04bb5038;
        if ((long)(char)bVar35 != 0xffffffffffffffff) {
          puVar7 = (uint *)(lVar36 + 0x48) + ((long)(char)bVar35 & 0xffffffffU) * 0x20;
          if (7 < bVar35) {
            puVar7 = (uint *)(lVar36 + 0x48);
          }
          if ((*puVar7 & 8) != 0) {
            pbVar41 = (byte *)(lVar36 + 0x471);
          }
        }
        local_d0[0] = *pbVar41;
        bVar35 = local_d0[0];
        if (7 < local_d0[0]) {
          bVar35 = 0xff;
        }
        local_c0 = (undefined **)CONCAT71(local_c0._1_7_,bVar35);
        if (7 >= local_d0[0]) goto LAB_02772b70;
      }
      pbVar41 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar36 + 0x15c) != 0) {
      pbVar41 = (byte *)(lVar36 + 0x158);
    }
    if (7 < *pbVar41) {
      if ((*(int *)(lVar36 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar41 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02772ae4;
      }
      goto LAB_02772af0;
    }
  }
  local_d0[0] = *pbVar41;
  if (7 < local_d0[0]) {
    local_d0[0] = 0xff;
  }
  local_c0 = (undefined **)CONCAT71(local_c0._1_7_,local_d0[0]);
LAB_02772b70:
  if (7 < local_d0[0]) {
    local_d0[0] = 0xff;
  }
  uVar28 = FUN_02669430(local_d0);
  if ((uVar28 & 1) != 0) {
    local_b0 = (undefined **)(puVar45 + 0x10);
    local_a8 = (uint *)0x40c0e3d;
    iVar20 = FUN_0274bce0(&local_c0,&local_b0);
    if (iVar20 != 0) {
      FUN_0253b9d0(&local_c0);
    }
  }
  return;
}

