
void FUN_02150c20(long *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  CalendarTime CVar9;
  long *plVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  bool bVar17;
  byte bVar18;
  short sVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong *puVar31;
  byte *pbVar32;
  uint *puVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  byte *pbVar37;
  long *plVar38;
  long *plVar39;
  char *pcVar40;
  uint *puVar41;
  int *piVar42;
  undefined *puVar43;
  long lVar44;
  char *pcVar45;
  undefined1 uVar46;
  uint uVar47;
  byte bVar48;
  undefined8 uVar49;
  char cVar50;
  byte bVar51;
  undefined1 uVar52;
  uint local_104;
  undefined1 local_e8 [4];
  CalendarTime local_e4 [4];
  undefined4 local_e0;
  undefined2 local_dc;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined1 local_b8;
  byte local_b7;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined1 local_a0;
  byte bStack_9f;
  undefined2 uStack_9e;
  uint auStack_9c [7];
  undefined1 local_7d;
  int local_74;
  uint local_70;
  uint local_6c [3];
  
  *(undefined4 *)((long)param_1 + 0x1fc) = 0x22;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0x22001d0005;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ea) = 0;
  plVar10 = (long *)param_1[1];
  while (plVar10 != param_1) {
    plVar34 = (long *)plVar10[1];
    plVar38 = plVar34;
    if (*plVar10 != 0) {
      *(long **)(*plVar10 + 8) = plVar34;
      plVar38 = (long *)plVar10[1];
    }
    if (plVar38 != (long *)0x0) {
      *plVar38 = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    plVar10[-2] = param_1[3];
    param_1[3] = (long)(plVar10 + -2);
    plVar10 = plVar34;
  }
  plVar10 = param_1 + 0xe;
  plVar34 = (long *)param_1[0xf];
  while (plVar34 != plVar10) {
    plVar38 = (long *)plVar34[1];
    plVar36 = plVar38;
    if (*plVar34 != 0) {
      *(long **)(*plVar34 + 8) = plVar38;
      plVar36 = (long *)plVar34[1];
    }
    if (plVar36 != (long *)0x0) {
      *plVar36 = *plVar34;
    }
    *plVar34 = 0;
    plVar34[1] = 0;
    *(int *)(param_1 + 0x10) = (int)param_1[0x10] + -1;
    plVar34[-2] = param_1[0x11];
    param_1[0x11] = (long)(plVar34 + -2);
    plVar34 = plVar38;
  }
  *(undefined4 *)(param_1 + 0x46) = 0;
  local_6c[0] = param_2;
  lVar24 = FUN_0265c2a0(param_2);
  puVar43 = PTR_DAT_04bb32f0;
  if (lVar24 == 0) {
    return;
  }
  lVar44 = *(long *)PTR_DAT_04bb32f0;
  lVar25 = FUN_0265c2a0(param_2);
  if (lVar25 == 0) {
    local_70 = 0;
  }
  else {
    if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar26 == (undefined8 *)0x0)) {
      uVar20 = 1;
    }
    else {
      uVar20 = (**(code **)*puVar26)();
      uVar20 = uVar20 ^ 1;
    }
    local_70 = FUN_020fd7d8(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8));
    if ((((uVar20 & 1) == 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar26 != (undefined8 *)0x0)) {
      (**(code **)*puVar26)();
    }
  }
  local_70 = local_70 & 0xff;
  if ((*(long **)(lVar24 + 0x28) == (long *)0x0) ||
     (puVar26 = (undefined8 *)**(long **)(lVar24 + 0x28), puVar26 == (undefined8 *)0x0)) {
    local_104 = 0;
LAB_02150e70:
    cVar50 = *(char *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8) + 0x1267a);
  }
  else {
    local_104 = (**(code **)*puVar26)();
    if ((*(long **)(lVar24 + 0x28) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar24 + 0x28), puVar26 == (undefined8 *)0x0))
    goto LAB_02150e70;
    uVar27 = (**(code **)*puVar26)();
    cVar50 = *(char *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8) + 0x1267a);
    if ((((uVar27 & 1) != 0) && (*(long *)(lVar24 + 0x28) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar24 + 0x28) + 8), puVar26 != (undefined8 *)0x0)) {
      (**(code **)*puVar26)();
    }
  }
  plVar38 = (long *)(lVar24 + 8);
  plVar34 = (long *)(lVar24 + 0x10);
  lVar25 = (long)(int)local_70;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = 0x95ae;
  uStack_a6 = 0x40e;
  uStack_a4 = 0;
  local_b0 = puVar1;
  iVar21 = FUN_0273ea30(&local_b0);
  if (iVar21 == 0) {
    local_a8 = 0x4e8;
    uStack_a6 = 0x40b;
    uStack_a4 = 0;
    local_b0 = puVar1;
    iVar21 = FUN_0273ea30(&local_b0);
    if (iVar21 != 0) {
      puVar26 = &DAT_053f575c;
      goto LAB_02150ee8;
    }
    pbVar32 = &DAT_053f5714 + lVar25 * 4;
  }
  else {
    puVar26 = &DAT_053f573c;
LAB_02150ee8:
    pbVar32 = (byte *)((long)puVar26 + (long)(int)local_70 * 4);
  }
  bVar18 = *pbVar32;
  uVar47 = (uint)bVar18;
  uVar20 = (uint)pbVar32[1];
  uVar49 = *(undefined8 *)puVar43;
  puVar43 = PTR_DAT_04bb2020 + 0x10;
  local_b0._0_4_ = (int)puVar43;
  local_b0._4_4_ = (undefined4)((ulong)puVar43 >> 0x20);
  local_a8 = 0xbdc2;
  uStack_a6 = 0x405;
  uStack_a4 = 0;
  puVar31 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar31 == 0) {
    local_d8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_d8 >> 0x20) < '\x05') {
      local_b0 = puVar43;
      lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d8);
      local_c8 = (undefined *)(lVar25 + -0x15180);
      local_d8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
      puVar43 = local_b0;
    }
    uVar27 = local_d8 >> 0x30;
    local_d8._0_6_ = CONCAT24(5,(undefined4)local_d8);
    local_d8 = CONCAT26((short)uVar27,(undefined6)local_d8) & 0xff00ffffffffffff;
    puVar31 = &local_d8;
  }
  uVar27 = *puVar31;
  local_b0 = puVar43;
  uVar27 = FUN_00879dd0(uVar49,&local_b0,uVar27,uVar27 >> 0x10,uVar27 >> 0x18,0);
  pbVar37 = pbVar32 + 3;
  bVar17 = (uVar27 & 1) == 0;
  pbVar5 = &DAT_053f5734;
  if (bVar17) {
    pbVar5 = pbVar32 + 2;
  }
  bVar48 = *pbVar5;
  if (!bVar17) {
    pbVar37 = &DAT_053f5735;
  }
  bVar51 = *pbVar37;
  if (((param_3 & 1) == 0) || (bVar18 < 8)) {
    if ((lVar44 != 0) && (cVar50 == '\0')) {
      puVar43 = PTR_DAT_04bb2020 + 0x10;
      local_b0._0_4_ = (int)puVar43;
      local_b0._4_4_ = (undefined4)((ulong)puVar43 >> 0x20);
      local_a8 = 0xbf35;
      uStack_a6 = 0x408;
      uStack_a4 = 0;
      puVar31 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar31 == 0) {
        local_d8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_d8 >> 0x20) < '\x05') {
          local_b0 = puVar43;
          lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d8);
          local_c8 = (undefined *)(lVar25 + -0x15180);
          local_d8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
          puVar43 = local_b0;
        }
        puVar31 = &local_d8;
        uVar27 = local_d8 >> 0x30;
        local_d8._0_6_ = CONCAT24(5,(undefined4)local_d8);
        local_d8 = CONCAT26((short)uVar27,(undefined6)local_d8) & 0xff00ffffffffffff;
      }
      uVar27 = *puVar31;
      local_b0 = puVar43;
      uVar27 = FUN_00879dd0(lVar44,&local_b0,uVar27,uVar27 >> 0x10,uVar27 >> 0x18,0);
      if ((uVar27 & 1) == 0) {
        puVar43 = PTR_DAT_04bb2020 + 0x10;
        local_b0._0_4_ = (int)puVar43;
        local_b0._4_4_ = (undefined4)((ulong)puVar43 >> 0x20);
        local_a8 = 0x9046;
        uStack_a6 = 0x40f;
        uStack_a4 = 0;
        puVar31 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*(short *)puVar31 == 0) {
          local_d8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)(local_d8 >> 0x20) < '\x05') {
            local_b0 = puVar43;
            lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d8);
            local_c8 = (undefined *)(lVar25 + -0x15180);
            local_d8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
            puVar43 = local_b0;
          }
          puVar31 = &local_d8;
          uVar27 = local_d8 >> 0x30;
          local_d8._0_6_ = CONCAT24(5,(undefined4)local_d8);
          local_d8 = CONCAT26((short)uVar27,(undefined6)local_d8) & 0xff00ffffffffffff;
        }
        uVar27 = *puVar31;
        local_b0 = puVar43;
        uVar27 = FUN_00879dd0(lVar44,&local_b0,uVar27,uVar27 >> 0x10,uVar27 >> 0x18,0);
        if ((uVar27 & 1) != 0) {
          local_b0 = PTR_DAT_04bb2020 + 0x10;
          local_a8 = 0x547f;
          uStack_a6 = 0x40e;
          uStack_a4 = 0;
          uVar23 = FUN_02749340(*plVar34 + *plVar38 + 0x1267c,&local_b0);
          if ((uVar23 & 0xffff) == 0) {
            lVar25 = FUN_0265c3e0(param_2);
            if (lVar25 != 0) {
              local_a0 = 0;
              bStack_9f = 0;
              local_b0 = PTR_DAT_04bc35d0 + 0x10;
              local_a8 = (undefined2)lVar25;
              uStack_a6 = (undefined2)((ulong)lVar25 >> 0x10);
              uStack_a4 = (undefined4)((ulong)lVar25 >> 0x20);
              if (*(long *)(lVar25 + 0x28) == 0) {
                bVar18 = 0;
              }
              else {
                puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 0x10);
                bVar18 = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  bVar18 = (**(code **)*puVar26)();
                }
              }
              bStack_9f = bVar18 & 1;
              local_b0 = PTR_DAT_04bb67a0 + 0x10;
              lVar25 = FUN_0135d92c(&local_b0);
              iVar21 = FUN_027d2ef0(0x78);
              uVar23 = iVar21 + 1;
              local_c8 = PTR_DAT_04bb2020 + 0x10;
              local_c0 = "XmasEveWakeUpMinute";
              FUN_0274a060(lVar25 + 0x1267c,&local_c8,uVar23 & 0xffff);
              FUN_02640184(&local_b0);
            }
          }
          uVar8 = (uVar23 & 0xffff) / 0x3c;
          uVar23 = uVar23 + uVar8 * 0xc4;
          uVar8 = uVar8 + 5;
          uVar4 = uVar8 & 0xff;
          if (uVar4 < uVar47) {
LAB_021528a8:
            uVar47 = uVar8;
            uVar20 = uVar23;
          }
          else if (uVar47 == uVar4) {
            if ((uVar23 & 0xff) < uVar20) goto LAB_021528a8;
          }
          bVar17 = 0x17 < bVar48;
          if (bVar48 < 0x19) {
            bVar48 = 0x18;
          }
          bVar18 = 0;
          if (bVar17) {
            bVar18 = bVar51;
          }
          bVar51 = bVar18;
        }
      }
      else if (uVar47 < 10) {
        uVar23 = 0;
        if (uVar47 != 9) {
          uVar23 = uVar20;
        }
        uVar20 = uVar23;
      }
      else {
        uVar47 = 9;
        uVar20 = 0;
      }
    }
  }
  else {
    uVar47 = 8;
    uVar20 = 0;
  }
  iVar21 = FUN_0252d29c();
  local_b0 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = 0xc0c9;
  uStack_a6 = 0x40a;
  uStack_a4 = 0;
  local_74 = iVar21;
  iVar22 = FUN_0273ea30(&local_b0);
  if ((iVar21 == -1) || (iVar22 != 0)) {
LAB_02151038:
    if (cVar50 == '\x02') {
      local_b0 = PTR_DAT_04bb2020 + 0x10;
      local_a8 = 0x8ba;
      uStack_a6 = 0x40a;
      uStack_a4 = 0;
      iVar21 = FUN_02749340(*plVar34 + *plVar38 + 0x1267c,&local_b0);
      if ((int)param_1[0x10] < (int)param_1[0x13]) {
        plVar36 = (long *)param_1[0x11];
        if (plVar36 != (long *)0x0) {
          param_1[0x11] = *plVar36;
        }
        *(bool *)(plVar36 + 1) = iVar21 != 0;
        *(undefined2 *)((long)plVar36 + 9) = 0;
        *plVar36 = 0x4001d0005;
        bVar51 = 0;
        plVar36[3] = 0;
        plVar39 = plVar36 + 2;
        *plVar39 = 0;
        puVar26 = (undefined8 *)param_1[0xf];
        param_1[0xf] = (long)plVar39;
        *plVar39 = (long)plVar10;
        plVar36[3] = (long)puVar26;
        if (puVar26 != (undefined8 *)0x0) {
          *puVar26 = plVar39;
        }
        bVar48 = 0x1d;
LAB_02151214:
        *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
      }
      else {
        bVar51 = 0;
        bVar48 = 0x1d;
      }
    }
    else if (cVar50 == '\x01') {
      if ((int)param_1[0x10] < (int)param_1[0x13]) {
        plVar36 = (long *)param_1[0x11];
        if (plVar36 != (long *)0x0) {
          param_1[0x11] = *plVar36;
        }
        *(undefined2 *)(plVar36 + 1) = 0;
        *(undefined1 *)((long)plVar36 + 10) = 0;
        uVar20 = 0;
        *plVar36 = 0x4001d0005;
        plVar36[3] = 0;
        plVar39 = plVar36 + 2;
        *plVar39 = 0;
        puVar26 = (undefined8 *)param_1[0xf];
        param_1[0xf] = (long)plVar39;
        *plVar39 = (long)plVar10;
        plVar36[3] = (long)puVar26;
        if (puVar26 != (undefined8 *)0x0) {
          *puVar26 = plVar39;
        }
        uVar47 = 5;
        goto LAB_02151214;
      }
      uVar20 = 0;
      uVar47 = 5;
    }
  }
  else {
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_c0 = "ValidatePlayerSaveFlag";
    iVar21 = FUN_0274ce10(&local_74,&local_c8);
    if (iVar21 != 0) goto LAB_02151038;
    bVar51 = 0;
    uVar20 = 0;
    uVar47 = 5;
    bVar48 = 0x1d;
  }
  uVar52 = (undefined1)uVar20;
  uVar46 = (undefined1)uVar47;
  if (*(char *)(*plVar34 + *plVar38 + 0x12678) == '\0') {
    local_b0._0_4_ = 0;
    uVar27 = FUN_02b67a30(&local_b0,param_2);
    if (((uVar27 & 1) != 0) && (uVar27 = FUN_02664300((int)local_b0), (uVar27 & 1) != 0)) {
      if (local_70 == 7) {
        if ((uVar47 & 0xff) < 7) {
          uVar16 = 0;
          if ((uVar47 & 0xff) != 6) {
            uVar16 = uVar52;
          }
          uVar52 = uVar16;
        }
        else {
          uVar52 = 0;
          uVar46 = 6;
        }
      }
      else if (local_70 == 1) {
        if ((uVar47 & 0xff) < 6) {
          if ((uVar47 & 0xff) != 5) goto LAB_02151424;
          if (0x1e < (uVar20 & 0xff)) goto LAB_021512d0;
        }
        else {
LAB_021512d0:
          uVar52 = 0x1e;
        }
        uVar46 = 5;
      }
    }
  }
LAB_02151424:
  iVar21 = (int)param_1[2];
  iVar22 = (int)param_1[5];
  if (iVar21 < iVar22) {
    plVar36 = (long *)param_1[3];
    if (plVar36 != (long *)0x0) {
      param_1[3] = *plVar36;
    }
    *(undefined2 *)(plVar36 + 1) = 0;
    *(undefined1 *)((long)plVar36 + 10) = 0;
    plVar36[3] = 0;
    *plVar36 = (long)&DAT_100000005;
    *(undefined1 *)((long)plVar36 + 2) = uVar46;
    *(undefined1 *)((long)plVar36 + 3) = uVar52;
    plVar39 = plVar36 + 2;
    *plVar39 = 0;
    lVar25 = *param_1;
    *param_1 = (long)plVar39;
    plVar36[3] = (long)param_1;
    *plVar39 = lVar25;
    if (lVar25 != 0) {
      *(long **)(lVar25 + 8) = plVar39;
    }
    iVar21 = (int)param_1[2] + 1;
    iVar22 = (int)param_1[5];
    *(int *)(param_1 + 2) = iVar21;
  }
  if (iVar21 < iVar22) {
    pbVar32 = (byte *)param_1[3];
    if (pbVar32 != (byte *)0x0) {
      param_1[3] = *(long *)pbVar32;
    }
    pbVar32[8] = 0;
    pbVar32[9] = 0;
    pbVar32[10] = 0;
    pbVar32[0x18] = 0;
    pbVar32[0x19] = 0;
    pbVar32[0x1a] = 0;
    pbVar32[0x1b] = 0;
    pbVar32[0x1c] = 0;
    pbVar32[0x1d] = 0;
    pbVar32[0x1e] = 0;
    pbVar32[0x1f] = 0;
    pbVar32[0] = 0;
    pbVar32[1] = 0;
    pbVar32[2] = 0x1d;
    pbVar32[3] = 0;
    pbVar32[4] = 1;
    pbVar32[5] = 0;
    pbVar32[6] = 0;
    pbVar32[7] = 0;
    *pbVar32 = bVar48;
    pbVar32[1] = bVar51;
    pbVar37 = pbVar32 + 0x10;
    pbVar37[0] = 0;
    pbVar37[1] = 0;
    pbVar37[2] = 0;
    pbVar37[3] = 0;
    pbVar37[4] = 0;
    pbVar37[5] = 0;
    pbVar37[6] = 0;
    pbVar37[7] = 0;
    lVar25 = *param_1;
    *param_1 = (long)pbVar37;
    *(long **)(pbVar32 + 0x18) = param_1;
    *(long *)pbVar37 = lVar25;
    if (lVar25 != 0) {
      *(byte **)(lVar25 + 8) = pbVar37;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  puVar43 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = 0xe90e;
  uStack_a6 = 0x40f;
  uStack_a4 = 0;
  local_b0 = puVar43;
  iVar21 = FUN_02749340(*plVar34 + *plVar38 + 0x1267c,&local_b0);
  if ((iVar21 == 1) && ((int)param_1[0x10] < (int)param_1[0x13])) {
    plVar36 = (long *)param_1[0x11];
    if (plVar36 != (long *)0x0) {
      param_1[0x11] = *plVar36;
    }
    *(undefined1 *)((long)plVar36 + 10) = 0;
    plVar36[3] = 0;
    *plVar36 = 0x200000005;
    *(undefined1 *)((long)plVar36 + 2) = uVar46;
    *(undefined1 *)((long)plVar36 + 3) = uVar52;
    *(undefined2 *)(plVar36 + 1) = 1;
    plVar39 = plVar36 + 2;
    *plVar39 = 0;
    lVar25 = *plVar10;
    *plVar10 = (long)plVar39;
    plVar36[3] = (long)plVar10;
    *plVar39 = lVar25;
    if (lVar25 != 0) {
      *(long **)(lVar25 + 8) = plVar39;
    }
    *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
  }
  local_a8 = 0xe90e;
  uStack_a6 = 0x40f;
  uStack_a4 = 0;
  local_b0 = puVar43;
  iVar21 = FUN_02749340(*plVar34 + *plVar38 + 0x1267c,&local_b0);
  puVar43 = local_b0;
  if (iVar21 == 2) {
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0x6c93;
    uStack_a6 = 0x408;
    uStack_a4 = 0;
    iVar21 = FUN_027490f0(param_2,&local_b0);
    puVar43 = local_b0;
    if ((iVar21 != 3) && ((int)param_1[0x10] < (int)param_1[0x13])) {
      pbVar32 = (byte *)param_1[0x11];
      if (pbVar32 != (byte *)0x0) {
        param_1[0x11] = *(long *)pbVar32;
      }
      pbVar32[10] = 0;
      pbVar32[0x18] = 0;
      pbVar32[0x19] = 0;
      pbVar32[0x1a] = 0;
      pbVar32[0x1b] = 0;
      pbVar32[0x1c] = 0;
      pbVar32[0x1d] = 0;
      pbVar32[0x1e] = 0;
      pbVar32[0x1f] = 0;
      pbVar32[0] = 0;
      pbVar32[1] = 0;
      pbVar32[2] = 0x1d;
      pbVar32[3] = 0;
      pbVar32[4] = 3;
      pbVar32[5] = 0;
      pbVar32[6] = 0;
      pbVar32[7] = 0;
      *pbVar32 = bVar48;
      pbVar32[1] = bVar51;
      pbVar32[8] = 1;
      pbVar32[9] = 0;
      pbVar37 = pbVar32 + 0x10;
      pbVar37[0] = 0;
      pbVar37[1] = 0;
      pbVar37[2] = 0;
      pbVar37[3] = 0;
      pbVar37[4] = 0;
      pbVar37[5] = 0;
      pbVar37[6] = 0;
      pbVar37[7] = 0;
      lVar25 = *plVar10;
      *plVar10 = (long)pbVar37;
      *(long **)(pbVar32 + 0x18) = plVar10;
      *(long *)pbVar37 = lVar25;
      if (lVar25 != 0) {
        *(byte **)(lVar25 + 8) = pbVar37;
      }
      *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
    }
  }
  puVar1 = PTR_DAT_04bb27d0;
  local_b0._4_4_ = (undefined4)((ulong)puVar43 >> 0x20);
  uVar49 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (lVar44 != 0) {
    lVar25 = *(long *)PTR_DAT_04bb27d0;
    if ((lVar25 != 0) && (*(long *)(lVar25 + 0x28) != 0)) {
      if (*(int *)(lVar25 + 0x80) == 1) goto LAB_02152340;
    }
    sVar19 = *(short *)PTR_DAT_04bb6298;
    if (sVar19 != -1) {
      puVar6 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar19 * 8;
      if (0xff < (uint)(int)sVar19) {
        puVar6 = PTR_DAT_04bc39f8;
      }
      puVar43 = (undefined *)CONCAT44(local_b0._4_4_,0x20);
      if ((*(uint *)(puVar6 + 4) & 1) != 0) goto LAB_02152340;
    }
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0x6941;
    uStack_a6 = 0x407;
    uStack_a4 = 0;
    iVar21 = FUN_0273ea30(&local_b0);
    puVar43 = local_b0;
    if (iVar21 != 0xffff) {
      lVar25 = *(long *)PTR_DAT_04bb3968;
      FUN_00882630(&local_b0,lVar44);
      FUN_00887de0(&local_c8,lVar44,&local_b0);
      (**(code **)(local_c8 + 0x18))(&local_c8);
      iVar21 = FUN_006bd550(local_c0,0);
      uVar20 = *(uint *)(lVar25 + 0x16718);
      if ((int)uVar20 < 1) {
        lVar44 = *(long *)(lVar25 + 0x16608);
        if ((lVar44 == 0) || (puVar33 = *(uint **)(lVar44 + 8), puVar33 == (uint *)0x0)) {
          uVar20 = 0;
        }
        else {
          uVar20 = *puVar33;
        }
      }
      puVar43 = PTR_DAT_04bb2020 + 0x10;
      local_a8 = 0xf91d;
      uStack_a6 = 0x40e;
      uStack_a4 = 0;
      local_b0 = puVar43;
      sVar19 = FUN_02196ed0(local_6c,&local_b0);
      lVar44 = **(long **)puVar1;
      bVar18 = *(byte *)(lVar44 + 0x473);
      if ((long)(char)bVar18 == 0xffffffffffffffff) {
LAB_02151800:
        local_a8 = 0x2631;
        uStack_a6 = 0x407;
        uStack_a4 = 0;
        local_b0 = puVar43;
        uVar47 = FUN_02196ed0(local_6c,&local_b0);
        uVar47 = uVar47 & 0xffff;
        puVar6 = PTR_DAT_04bb2028;
        pcVar45 = PTR_DAT_04bc2630;
        puVar26 = (undefined8 *)PTR_DAT_04bc2638;
        puVar43 = local_b0;
      }
      else {
        pbVar32 = (byte *)(lVar44 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x80;
        if (7 < bVar18) {
          pbVar32 = (byte *)(lVar44 + 0x48);
        }
        if (((*pbVar32 >> 3 & 1) == 0) || (*(byte *)(lVar44 + 0x472) == bVar18)) goto LAB_02151800;
        uVar47 = 1 << (ulong)(param_2 & 0x1f) & (uint)(ushort)DAT_05454134;
        puVar6 = PTR_DAT_04bb2028;
        pcVar45 = PTR_DAT_04bc2630;
        puVar26 = (undefined8 *)PTR_DAT_04bc2638;
        puVar43 = local_b0;
      }
      PTR_DAT_04bb2028 = puVar6;
      PTR_DAT_04bc2630 = pcVar45;
      PTR_DAT_04bc2638 = (undefined *)puVar26;
      if (uVar20 != 0) {
        uVar23 = 0;
        puVar2 = PTR_DAT_04bb2a08 + 0x10;
        puVar3 = PTR_DAT_04bb2020 + 0x10;
        do {
          if ((int)*(uint *)(lVar25 + 0x16718) < 1) {
            lVar44 = *(long *)(lVar25 + 0x16608);
            if (lVar44 != 0) {
              puVar33 = *(uint **)(lVar44 + 8);
              if ((puVar33 != (uint *)0x0) &&
                 (((*(uint *)(lVar25 + 0x16620) <= uVar23 ||
                   (*(char *)(*(long *)(lVar25 + 0x16628) + (long)(int)uVar23) != '\0')) &&
                  (uVar23 < *puVar33)))) {
                if (puVar33[1] != 0) {
                  if ((ushort)puVar33[2] != 0) {
                    iVar22 = 0xc;
                    if (*(char *)((long)puVar33 + 10) != '\0') {
                      iVar22 = 0x1c;
                    }
                    puVar33 = (uint *)((ulong)(puVar33[1] * uVar23 + (uint)(ushort)puVar33[2] * 8 +
                                              iVar22) + (long)puVar33);
                    goto joined_r0x02151b18;
                  }
                }
              }
            }
          }
          else if (uVar23 < *(uint *)(lVar25 + 0x16718)) {
            uVar4 = uVar23;
            if (*(uint *)(lVar25 + 0x16708) <= uVar23) {
              uVar4 = 0;
            }
            puVar33 = *(uint **)(*(long *)(lVar25 + 0x16710) + (ulong)uVar4 * 8);
joined_r0x02151b18:
            if (puVar33 != (uint *)0x0) {
              uVar4 = *puVar33;
              if (uVar4 != 0) {
                cVar50 = *pcVar45;
                do {
                  if (cVar50 == '\0') {
                    cVar50 = '\x01';
                    *pcVar45 = '\x01';
                    *puVar26 = 0xffffffffffffffff;
                    puVar26[1] = 0xffffffffffffffff;
                    puVar26[4] = 0xffffffffffffffff;
                    *(undefined4 *)(puVar26 + 5) = 0xffffffff;
                    puVar26[2] = 0xffffffffffffffff;
                    puVar26[3] = 0xffffffffffffffff;
                    uVar4 = *puVar33;
                  }
                  else {
                    uVar8 = *(uint *)(puVar26 + 3);
                    if (-1 < (int)uVar8) {
                      pcVar40 = (char *)((ulong)uVar8 + (long)puVar33);
                      goto LAB_021519ac;
                    }
                    if (uVar8 != 0xffffffff) break;
                  }
                  puVar41 = (uint *)(ulong)uVar4;
                  pcVar40 = (char *)0x0;
                  if ((puVar41 == (uint *)0x0) || (pcVar40 = (char *)0x0, puVar33 == puVar41))
                  goto LAB_021519ac;
                  lVar44 = 0xc;
                  if (*(char *)((long)puVar33 + (10 - (long)puVar41)) != '\0') {
                    lVar44 = 0x1c;
                  }
                  lVar44 = (long)puVar33 + (lVar44 - (long)puVar41);
                  pcVar40 = (char *)0x0;
                  if (lVar44 == 0) goto LAB_021519ac;
                  uVar27 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar41));
                  *(undefined4 *)(puVar26 + 3) = 0xfffffffe;
                  if (uVar27 == 0) break;
                  piVar42 = (int *)(lVar44 + 4);
                  while (piVar42[-1] != 0x7d740fa4) {
                    piVar42 = piVar42 + 2;
                    uVar27 = uVar27 - 1;
                    if (uVar27 == 0) goto LAB_021519a8;
                  }
                  iVar22 = 0;
                  if (*piVar42 != -1) {
                    iVar22 = *piVar42;
                  }
                  *(int *)(puVar26 + 3) = iVar22;
                  uVar4 = *puVar33;
                  if (uVar4 == 0) break;
                } while( true );
              }
LAB_021519a8:
              pcVar40 = (char *)0x0;
LAB_021519ac:
              pcVar7 = "NotEvent";
              if (pcVar40 != (char *)0x0) {
                pcVar7 = pcVar40;
              }
              local_b0 = puVar43;
              iVar22 = FUN_006bd550(pcVar7,0);
              puVar12 = PTR_DAT_04bc2638;
              puVar26 = (undefined8 *)PTR_DAT_04bc2638;
              puVar43 = local_b0;
              if (iVar22 == iVar21) {
                uVar4 = *puVar33;
                if (uVar4 != 0) {
                  cVar50 = *pcVar45;
                  do {
                    if (cVar50 == '\0') {
                      cVar50 = '\x01';
                      *pcVar45 = '\x01';
                      *(undefined8 *)puVar12 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar12 + 0x20) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar12 + 0x28) = 0xffffffff;
                      *(undefined8 *)(puVar12 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar12 + 0x18) = 0xffffffffffffffff;
                      uVar4 = *puVar33;
                    }
                    else {
                      uVar8 = *(uint *)(puVar12 + 0x18);
                      if (-1 < (int)uVar8) {
                        puVar41 = (uint *)((ulong)uVar8 + (long)puVar33);
                        goto LAB_02151b28;
                      }
                      if (uVar8 != 0xffffffff) break;
                    }
                    puVar11 = (uint *)(ulong)uVar4;
                    puVar41 = (uint *)0x0;
                    if ((puVar11 == (uint *)0x0) || (puVar41 = (uint *)0x0, puVar33 == puVar11))
                    goto LAB_02151b28;
                    lVar44 = 0xc;
                    if (*(char *)((long)puVar33 + (10 - (long)puVar11)) != '\0') {
                      lVar44 = 0x1c;
                    }
                    lVar44 = (long)puVar33 + (lVar44 - (long)puVar11);
                    puVar41 = (uint *)0x0;
                    if (lVar44 == 0) goto LAB_02151b28;
                    uVar27 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar11));
                    *(undefined4 *)(puVar12 + 0x18) = 0xfffffffe;
                    if (uVar27 == 0) break;
                    piVar42 = (int *)(lVar44 + 4);
                    while (piVar42[-1] != 0x7d740fa4) {
                      piVar42 = piVar42 + 2;
                      uVar27 = uVar27 - 1;
                      if (uVar27 == 0) goto LAB_02151b24;
                    }
                    iVar22 = 0;
                    if (*piVar42 != -1) {
                      iVar22 = *piVar42;
                    }
                    *(int *)(puVar12 + 0x18) = iVar22;
                    uVar4 = *puVar33;
                    if (uVar4 == 0) break;
                  } while( true );
                }
LAB_02151b24:
                puVar41 = (uint *)0x0;
LAB_02151b28:
                puVar11 = (uint *)"NotEvent";
                if (puVar41 != (uint *)0x0) {
                  puVar11 = puVar41;
                }
                local_7d = 0;
                iVar22 = 0x20;
                local_a0 = 0x20;
                bStack_9f = 0;
                uStack_9e = 0;
                local_a8 = SUB82(auStack_9c,0);
                uVar13 = local_a8;
                uStack_a6 = (undefined2)((ulong)auStack_9c >> 0x10);
                uVar14 = uStack_a6;
                uStack_a4 = (undefined4)((ulong)auStack_9c >> 0x20);
                uVar15 = uStack_a4;
                if (auStack_9c == puVar11) {
                  puVar41 = auStack_9c;
                }
                else {
                  lVar44 = 0;
                  do {
                    if (*(char *)((long)puVar11 + lVar44) == '\0') {
LAB_02151ba0:
                      iVar22 = (int)lVar44;
                      if (0x1f < iVar22) {
LAB_02151bbc:
                        iVar22 = 0x1f;
                      }
                      goto LAB_02151bc4;
                    }
                    if (*(char *)((long)puVar11 + lVar44 + 1) == '\0') {
                      lVar44 = lVar44 + 1;
                      goto LAB_02151ba0;
                    }
                    if (*(char *)((long)puVar11 + lVar44 + 2) == '\0') {
                      iVar22 = (int)lVar44 + 2;
                      if (0x1f < iVar22) goto LAB_02151bbc;
                      goto LAB_02151bc4;
                    }
                    lVar44 = lVar44 + 3;
                  } while (lVar44 != 0x80001);
                  iVar22 = 0;
LAB_02151bc4:
                  local_b0 = puVar2;
                  memcpy(auStack_9c,puVar11,(long)iVar22);
                  *(char *)((long)auStack_9c + (long)iVar22) = '\0';
                  iVar22 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0));
                  puVar41 = (uint *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
                  pcVar45 = PTR_DAT_04bc2630;
                }
                local_c0 = "Countdown";
                *(char *)((long)puVar41 + (long)iVar22 + -1) = '\0';
                local_c8 = puVar3;
                local_b0 = puVar6 + 0x10;
                (**(code **)(puVar6 + 0x28))(&local_b0);
                pcVar40 = (char *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
                (**(code **)(local_c8 + 0x18))(&local_c8);
                puVar26 = (undefined8 *)PTR_DAT_04bc2638;
                if (pcVar40 == local_c0) {
LAB_02151cc0:
                  uVar4 = *puVar33;
                  if (uVar4 != 0) {
                    cVar50 = *pcVar45;
                    do {
                      if (cVar50 == '\0') {
                        cVar50 = '\x01';
                        *pcVar45 = '\x01';
                        *puVar26 = 0xffffffffffffffff;
                        *(undefined8 *)((long)puVar26 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)((long)puVar26 + 0x20) = 0xffffffffffffffff;
                        *(undefined4 *)((long)puVar26 + 0x28) = 0xffffffff;
                        *(undefined8 *)((long)puVar26 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)((long)puVar26 + 0x18) = 0xffffffffffffffff;
                        uVar4 = *puVar33;
                      }
                      else {
                        uVar8 = *(uint *)((long)puVar26 + 8);
                        if (-1 < (int)uVar8) {
                          if (((byte *)((ulong)uVar8 + (long)puVar33) != (byte *)0x0) &&
                             (bVar18 = *(byte *)((ulong)uVar8 + (long)puVar33), bVar18 < 0x23)) {
                            puVar43 = local_b0;
                            if (bVar18 == 10) {
                              if (sVar19 != 0) goto LAB_021518a0;
                            }
                            else if (bVar18 == 0xd || bVar18 == 0xb) {
                              if (sVar19 == 0) goto LAB_021518a0;
                            }
                            else if ((sVar19 != 0) && (bVar18 == 0xc)) goto LAB_021518a0;
                          }
                          break;
                        }
                        if (uVar8 != 0xffffffff) break;
                      }
                      if (((ulong)uVar4 == 0) ||
                         (lVar44 = (long)puVar33 - (ulong)uVar4, lVar44 == 0)) break;
                      lVar29 = 0xc;
                      if (*(char *)(lVar44 + 10) != '\0') {
                        lVar29 = 0x1c;
                      }
                      if (lVar29 + lVar44 == 0) break;
                      uVar27 = (ulong)*(ushort *)(lVar44 + 8);
                      *(undefined4 *)((long)puVar26 + 8) = 0xfffffffe;
                      if (uVar27 == 0) break;
                      piVar42 = (int *)(lVar29 + lVar44 + 4);
                      while (piVar42[-1] != 0x69a9bb3c) {
                        piVar42 = piVar42 + 2;
                        uVar27 = uVar27 - 1;
                        if (uVar27 == 0) goto LAB_021522ac;
                      }
                      iVar22 = 0;
                      if (*piVar42 != -1) {
                        iVar22 = *piVar42;
                      }
                      *(int *)((long)puVar26 + 8) = iVar22;
                      uVar4 = *puVar33;
                      if (uVar4 == 0) break;
                    } while( true );
                  }
                }
                else {
                  uVar27 = 0;
                  bVar17 = true;
                  lVar44 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)) + 2;
                  do {
                    lVar29 = lVar44 + uVar27;
                    cVar50 = *(char *)(lVar29 + -2);
                    if (cVar50 != local_c0[uVar27]) break;
                    if (cVar50 == '\0') {
                      if (bVar17) goto LAB_02151cc0;
                      break;
                    }
                    cVar50 = *(char *)(lVar29 + -1);
                    if (cVar50 != local_c0[uVar27 + 1]) break;
                    if (cVar50 == '\0') goto LAB_02151cc0;
                    cVar50 = *(char *)(lVar44 + uVar27);
                    if (cVar50 != local_c0[uVar27 + 2]) break;
                    if (cVar50 == '\0') goto LAB_02151cc0;
                    bVar17 = uVar27 < 0x7fffe;
                    uVar27 = uVar27 + 3;
                  } while (uVar27 != 0x80001);
                  uVar4 = *puVar33;
                  if (uVar4 != 0) {
                    cVar50 = *pcVar45;
                    do {
                      if (cVar50 == '\0') {
                        cVar50 = '\x01';
                        *pcVar45 = '\x01';
                        *puVar26 = 0xffffffffffffffff;
                        *(undefined8 *)((long)puVar26 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)((long)puVar26 + 0x20) = 0xffffffffffffffff;
                        *(undefined4 *)((long)puVar26 + 0x28) = 0xffffffff;
                        *(undefined8 *)((long)puVar26 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)((long)puVar26 + 0x18) = 0xffffffffffffffff;
                        uVar4 = *puVar33;
                      }
                      else {
                        uVar8 = *(uint *)((long)puVar26 + 0x18);
                        if (-1 < (int)uVar8) {
                          puVar41 = (uint *)((ulong)uVar8 + (long)puVar33);
                          goto LAB_02151e80;
                        }
                        if (uVar8 != 0xffffffff) break;
                      }
                      puVar11 = (uint *)(ulong)uVar4;
                      puVar41 = (uint *)0x0;
                      if ((puVar11 == (uint *)0x0) || (puVar41 = (uint *)0x0, puVar33 == puVar11))
                      goto LAB_02151e80;
                      lVar44 = 0xc;
                      if (*(char *)((long)puVar33 + (10 - (long)puVar11)) != '\0') {
                        lVar44 = 0x1c;
                      }
                      lVar44 = (long)puVar33 + (lVar44 - (long)puVar11);
                      puVar41 = (uint *)0x0;
                      if (lVar44 == 0) goto LAB_02151e80;
                      uVar27 = (ulong)*(ushort *)((long)puVar33 + (8 - (long)puVar11));
                      *(undefined4 *)((long)puVar26 + 0x18) = 0xfffffffe;
                      if (uVar27 == 0) break;
                      piVar42 = (int *)(lVar44 + 4);
                      while (piVar42[-1] != 0x7d740fa4) {
                        piVar42 = piVar42 + 2;
                        uVar27 = uVar27 - 1;
                        if (uVar27 == 0) goto LAB_02151e7c;
                      }
                      iVar22 = 0;
                      if (*piVar42 != -1) {
                        iVar22 = *piVar42;
                      }
                      *(int *)((long)puVar26 + 0x18) = iVar22;
                      uVar4 = *puVar33;
                      if (uVar4 == 0) break;
                    } while( true );
                  }
LAB_02151e7c:
                  puVar41 = (uint *)0x0;
LAB_02151e80:
                  iVar22 = 0x20;
                  local_7d = 0;
                  local_a0 = 0x20;
                  bStack_9f = 0;
                  uStack_9e = 0;
                  puVar11 = (uint *)"NotEvent";
                  if (puVar41 != (uint *)0x0) {
                    puVar11 = puVar41;
                  }
                  local_b0 = PTR_DAT_04bb2a08 + 0x10;
                  local_a8 = uVar13;
                  uStack_a6 = uVar14;
                  uStack_a4 = uVar15;
                  if (auStack_9c == puVar11) {
                    puVar41 = auStack_9c;
                  }
                  else {
                    lVar44 = 0;
                    do {
                      if (*(char *)((long)puVar11 + lVar44) == '\0') {
LAB_02151f08:
                        iVar22 = (int)lVar44;
                        if (0x1f < iVar22) {
                          iVar22 = 0x1f;
                        }
                        goto LAB_02151f20;
                      }
                      if (*(char *)((long)puVar11 + lVar44 + 1) == '\0') {
                        lVar44 = lVar44 + 1;
                        goto LAB_02151f08;
                      }
                      if (*(char *)((long)puVar11 + lVar44 + 2) == '\0') {
                        lVar44 = lVar44 + 2;
                        goto LAB_02151f08;
                      }
                      lVar44 = lVar44 + 3;
                    } while (lVar44 != 0x80001);
                    iVar22 = 0;
LAB_02151f20:
                    memcpy(auStack_9c,puVar11,(long)iVar22);
                    *(char *)((long)auStack_9c + (long)iVar22) = '\0';
                    iVar22 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0));
                    puVar41 = (uint *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
                    pcVar45 = PTR_DAT_04bc2630;
                  }
                  puVar43 = PTR_DAT_04bb2028;
                  local_b0 = PTR_DAT_04bb2028 + 0x10;
                  local_c8 = PTR_DAT_04bb2020 + 0x10;
                  local_c0 = "Fireworks";
                  *(char *)((long)puVar41 + (long)iVar22 + -1) = '\0';
                  (**(code **)(puVar43 + 0x28))(&local_b0);
                  pcVar40 = (char *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
                  (**(code **)(local_c8 + 0x18))(&local_c8);
                  puVar26 = (undefined8 *)PTR_DAT_04bc2638;
                  if (pcVar40 == local_c0) {
LAB_0215202c:
                    uVar4 = *puVar33;
                    if (uVar4 != 0) {
                      cVar50 = *pcVar45;
                      do {
                        if (cVar50 == '\0') {
                          cVar50 = '\x01';
                          *pcVar45 = '\x01';
                          *puVar26 = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar26 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar26 + 0x20) = 0xffffffffffffffff;
                          *(undefined4 *)((long)puVar26 + 0x28) = 0xffffffff;
                          *(undefined8 *)((long)puVar26 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar26 + 0x18) = 0xffffffffffffffff;
                          uVar4 = *puVar33;
                        }
                        else {
                          uVar8 = *(uint *)((long)puVar26 + 8);
                          if (-1 < (int)uVar8) {
                            if (((char *)((ulong)uVar8 + (long)puVar33) != (char *)0x0) &&
                               (puVar43 = local_b0,
                               *(char *)((ulong)uVar8 + (long)puVar33) == '\x1c' && uVar47 == 0))
                            goto LAB_021518a0;
                            break;
                          }
                          if (uVar8 != 0xffffffff) break;
                        }
                        if (((ulong)uVar4 == 0) ||
                           (lVar44 = (long)puVar33 - (ulong)uVar4, lVar44 == 0)) break;
                        lVar29 = 0xc;
                        if (*(char *)(lVar44 + 10) != '\0') {
                          lVar29 = 0x1c;
                        }
                        if (lVar29 + lVar44 == 0) break;
                        uVar27 = (ulong)*(ushort *)(lVar44 + 8);
                        *(undefined4 *)((long)puVar26 + 8) = 0xfffffffe;
                        if (uVar27 == 0) break;
                        piVar42 = (int *)(lVar29 + lVar44 + 4);
                        while (piVar42[-1] != 0x69a9bb3c) {
                          piVar42 = piVar42 + 2;
                          uVar27 = uVar27 - 1;
                          if (uVar27 == 0) goto LAB_021522ac;
                        }
                        iVar22 = 0;
                        if (*piVar42 != -1) {
                          iVar22 = *piVar42;
                        }
                        *(int *)((long)puVar26 + 8) = iVar22;
                        uVar4 = *puVar33;
                        if (uVar4 == 0) break;
                      } while( true );
                    }
                  }
                  else {
                    uVar27 = 0;
                    bVar17 = true;
                    lVar44 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)) + 2;
                    do {
                      lVar29 = lVar44 + uVar27;
                      cVar50 = *(char *)(lVar29 + -2);
                      if (cVar50 != local_c0[uVar27]) break;
                      if (cVar50 == '\0') {
                        if (bVar17) goto LAB_0215202c;
                        break;
                      }
                      cVar50 = *(char *)(lVar29 + -1);
                      if (cVar50 != local_c0[uVar27 + 1]) break;
                      if (cVar50 == '\0') goto LAB_0215202c;
                      cVar50 = *(char *)(lVar44 + uVar27);
                      if (cVar50 != local_c0[uVar27 + 2]) break;
                      if (cVar50 == '\0') goto LAB_0215202c;
                      bVar17 = uVar27 < 0x7fffe;
                      uVar27 = uVar27 + 3;
                    } while (uVar27 != 0x80001);
                    uVar4 = *puVar33;
                    if (uVar4 != 0) {
                      cVar50 = *pcVar45;
                      do {
                        if (cVar50 == '\0') {
                          cVar50 = '\x01';
                          *pcVar45 = '\x01';
                          *puVar26 = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar26 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar26 + 0x20) = 0xffffffffffffffff;
                          *(undefined4 *)((long)puVar26 + 0x28) = 0xffffffff;
                          *(undefined8 *)((long)puVar26 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)((long)puVar26 + 0x18) = 0xffffffffffffffff;
                          uVar4 = *puVar33;
                        }
                        else {
                          uVar8 = *(uint *)((long)puVar26 + 8);
                          if (-1 < (int)uVar8) {
                            if (((char *)((ulong)uVar8 + (long)puVar33) != (char *)0x0) &&
                               (*(char *)((ulong)uVar8 + (long)puVar33) == ' ')) {
                              local_b0 = PTR_DAT_04bb2020 + 0x10;
                              local_a8 = 0x6a66;
                              uStack_a6 = 0x40a;
                              uStack_a4 = 0;
                              FUN_021be8c0(local_6c,&local_b0,1);
                            }
                            break;
                          }
                          if (uVar8 != 0xffffffff) break;
                        }
                        lVar44 = (long)puVar33 - (ulong)uVar4;
                        if (((ulong)uVar4 == 0) || (lVar44 == 0)) break;
                        lVar29 = 0xc;
                        if (*(char *)(lVar44 + 10) != '\0') {
                          lVar29 = 0x1c;
                        }
                        if (lVar29 + lVar44 == 0) break;
                        uVar27 = (ulong)*(ushort *)(lVar44 + 8);
                        *(undefined4 *)((long)puVar26 + 8) = 0xfffffffe;
                        if (uVar27 == 0) break;
                        piVar42 = (int *)(lVar29 + lVar44 + 4);
                        while (piVar42[-1] != 0x69a9bb3c) {
                          piVar42 = piVar42 + 2;
                          uVar27 = uVar27 - 1;
                          if (uVar27 == 0) goto LAB_021522ac;
                        }
                        iVar22 = 0;
                        if (*piVar42 != -1) {
                          iVar22 = *piVar42;
                        }
                        *(int *)((long)puVar26 + 8) = iVar22;
                        uVar4 = *puVar33;
                        if (uVar4 == 0) break;
                      } while( true );
                    }
                  }
                }
LAB_021522ac:
                FUN_0214ca00(&local_b0,puVar33);
                if ((int)param_1[0x10] < (int)param_1[0x13]) {
                  plVar34 = (long *)param_1[0x11];
                  if (plVar34 != (long *)0x0) {
                    param_1[0x11] = *plVar34;
                  }
                  plVar34[3] = 0;
                  *(undefined1 *)((long)plVar34 + 10) = 1;
                  *plVar34 = (long)local_b0;
                  *(undefined2 *)(plVar34 + 1) = local_a8;
                  plVar38 = plVar34 + 2;
                  *plVar38 = 0;
                  lVar44 = *plVar10;
                  *plVar10 = (long)plVar38;
                  plVar34[3] = (long)plVar10;
                  *plVar38 = lVar44;
                  if (lVar44 != 0) {
                    *(long **)(lVar44 + 8) = plVar38;
                  }
                  *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
                }
                puVar26 = (undefined8 *)PTR_DAT_04bc2638;
                puVar43 = local_b0;
              }
            }
          }
LAB_021518a0:
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar20);
      }
    }
  }
LAB_02152340:
  puVar6 = PTR_DAT_04bb46b0;
  lVar25 = *(long *)PTR_DAT_04bb46b0;
  local_b0 = puVar43;
  if (lVar25 != 0) {
    puVar26 = *(undefined8 **)(lVar25 + 0x10);
    if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
      lVar25 = (**(code **)(*(long *)*puVar26 + 0x38))();
      if (lVar25 != 0) {
        lVar25 = lVar25 + 0x70;
LAB_02152394:
        if (*(long **)(lVar25 + 0xe6d50) == (long *)0x0) {
          uVar27 = 0;
        }
        else {
          puVar26 = (undefined8 *)**(long **)(lVar25 + 0xe6d50);
          uVar27 = 0;
          if (puVar26 != (undefined8 *)0x0) {
            uVar27 = (**(code **)*puVar26)();
          }
        }
        uVar20 = local_6c[0];
        cVar50 = *(char *)(*(long *)(lVar25 + 0xe6d38) + *(long *)(lVar25 + 0xe6d30) + 0x3c);
        if ((((uVar27 & 1) != 0) && (*(long *)(lVar25 + 0xe6d50) != 0)) &&
           (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0xe6d50) + 8),
           puVar26 != (undefined8 *)0x0)) {
          (**(code **)*puVar26)();
        }
        if ((uVar20 == (int)cVar50) && ((int)param_1[0x10] < (int)param_1[0x13])) {
          plVar34 = (long *)param_1[0x11];
          if (plVar34 != (long *)0x0) {
            param_1[0x11] = *plVar34;
          }
          *(undefined2 *)(plVar34 + 1) = 0;
          *(undefined1 *)((long)plVar34 + 10) = 0;
          plVar34[3] = 0;
          *plVar34 = 0x12001d0005;
          plVar38 = plVar34 + 2;
          *plVar38 = 0;
          lVar25 = *plVar10;
          *plVar10 = (long)plVar38;
          plVar34[3] = (long)plVar10;
          *plVar38 = lVar25;
          if (lVar25 != 0) {
            *(long **)(lVar25 + 8) = plVar38;
          }
          *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
        }
      }
    }
    else if ((puVar26 != (undefined8 *)0x0) && ((long *)puVar26[0x26] != (long *)0x0)) {
      lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
      if (lVar25 != 0) goto LAB_02152394;
    }
  }
  uVar20 = local_6c[0];
  lVar25 = FUN_0265b4f0(local_6c[0],1);
  if (lVar25 != 0) {
    if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar26 == (undefined8 *)0x0)) {
      uVar27 = 0;
    }
    else {
      uVar27 = (**(code **)*puVar26)();
      uVar27 = uVar27 & 0xffffffff;
    }
    lVar44 = *(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8);
    switch(*(undefined1 *)(lVar44 + 0x2d)) {
    case 3:
      if ((*(char *)(lVar44 + 0x2f) == '\x02') && (lVar44 = *(long *)puVar6, lVar44 != 0)) {
        puVar26 = *(undefined8 **)(lVar44 + 0x10);
        if ((*(byte *)(lVar44 + 0x453) & 1) == 0) {
          lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
          if (lVar44 != 0) {
            lVar44 = lVar44 + 0x70;
LAB_02152754:
            plVar34 = (long *)(lVar44 + 0xe6da0);
            if ((*(long **)(lVar44 + 0xe6dc0) == (long *)0x0) ||
               (puVar26 = (undefined8 *)**(long **)(lVar44 + 0xe6dc0), puVar26 == (undefined8 *)0x0)
               ) {
              uVar28 = 0;
            }
            else {
              uVar28 = (**(code **)*puVar26)();
              uVar28 = uVar28 & 0xffffffff;
            }
            lVar29 = *(long *)(lVar44 + 0xe6da8) + *plVar34;
            if (*(char *)(lVar29 + 0x2f) == '\x02') {
              local_b0._0_4_ = (int)*(undefined8 *)(lVar29 + 0x1c);
              local_b0._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar29 + 0x1c) >> 0x20);
              local_c8 = *(undefined **)(lVar29 + 0x24);
              lVar29 = FUN_00a8255c(&local_c8,&local_b0);
              lVar30 = FUN_00a8255c(*(long *)PTR_DAT_04bb32e8 + 0x4060,&local_b0);
              if (lVar29 * 2 <= lVar30) goto joined_r0x02152730;
              lVar29 = *(long *)(lVar44 + 0xe6da8) + *plVar34;
            }
            FUN_028496d0(lVar29);
joined_r0x02152730:
            if ((((uVar28 & 1) != 0) && (plVar34[4] != 0)) &&
               (puVar26 = *(undefined8 **)(plVar34[4] + 8), puVar26 != (undefined8 *)0x0)) {
              (**(code **)*puVar26)();
            }
          }
        }
        else if ((puVar26 != (undefined8 *)0x0) && ((long *)puVar26[0x26] != (long *)0x0)) {
          lVar44 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
          if (lVar44 != 0) goto LAB_02152754;
        }
      }
      break;
    case 4:
      if ((*(char *)(lVar44 + 0x2f) == '\x02') && (*(char *)(lVar44 + 0x2e) == '\x02')) {
        uVar28 = FUN_02847f10();
        if ((uVar28 & 1) == 0) {
          lVar44 = FUN_0265b250();
          if (lVar44 != 0) {
            local_a8 = (undefined2)lVar44;
            uStack_a6 = (undefined2)((ulong)lVar44 >> 0x10);
            uStack_a4 = (undefined4)((ulong)lVar44 >> 0x20);
            local_a0 = 1;
            if (*(long **)(lVar44 + 0x28) == (long *)0x0) {
              bVar18 = 0;
            }
            else {
              puVar26 = (undefined8 *)**(long **)(lVar44 + 0x28);
              bVar18 = 0;
              if (puVar26 != (undefined8 *)0x0) {
                bVar18 = (**(code **)*puVar26)();
              }
            }
            puVar43 = PTR_DAT_04bb7040;
            bStack_9f = bVar18 & 1;
            local_b0 = PTR_DAT_04bb7040 + 0x10;
            uVar28 = FUN_0284a7d8(*(long *)(lVar44 + 0x10) + *(long *)(lVar44 + 8));
            FUN_02640184(&local_b0);
            if ((uVar28 & 1) == 0) {
LAB_021529a0:
              local_a8 = (undefined2)lVar44;
              uStack_a6 = (undefined2)((ulong)lVar44 >> 0x10);
              uStack_a4 = (undefined4)((ulong)lVar44 >> 0x20);
              local_a0 = 1;
              if (*(long **)(lVar44 + 0x28) == (long *)0x0) {
                bVar18 = 0;
              }
              else {
                puVar26 = (undefined8 *)**(long **)(lVar44 + 0x28);
                bVar18 = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  bVar18 = (**(code **)*puVar26)();
                }
              }
              bStack_9f = bVar18 & 1;
              local_b0 = puVar43 + 0x10;
              FUN_02640184(&local_b0);
            }
            else {
              local_c0 = (char *)(lVar44 + 0x38);
              local_b8 = 1;
              if (*(long **)(lVar44 + 0x60) == (long *)0x0) {
                local_b7 = 0;
              }
              else {
                puVar26 = (undefined8 *)**(long **)(lVar44 + 0x60);
                local_b7 = 0;
                if (puVar26 != (undefined8 *)0x0) {
                  local_b7 = (**(code **)*puVar26)();
                }
              }
              local_b7 = local_b7 & 1;
              local_c8 = PTR_DAT_04bb6ba0 + 0x10;
              puVar26 = (undefined8 *)(*(long *)(lVar44 + 0x48) + *(long *)(lVar44 + 0x40));
              local_b0._0_4_ = (int)*puVar26;
              local_b0._4_4_ = (undefined4)((ulong)*puVar26 >> 0x20);
              uVar49 = puVar26[1];
              local_a8 = (undefined2)uVar49;
              uStack_a6 = (undefined2)((ulong)uVar49 >> 0x10);
              uStack_a4 = (undefined4)((ulong)uVar49 >> 0x20);
              uVar49 = puVar26[2];
              local_a0 = (undefined1)uVar49;
              bStack_9f = (byte)((ulong)uVar49 >> 8);
              uStack_9e = (undefined2)((ulong)uVar49 >> 0x10);
              auStack_9c[0] = (uint)((ulong)uVar49 >> 0x20);
              auStack_9c[1] = *(uint *)(puVar26 + 3);
              FUN_02640184(&local_c8);
              FUN_02507c6c(&local_d8,1,1,0,0);
              iVar21 = (int)local_b0;
              puVar6 = PTR_DAT_04bb5038;
              puVar43 = PTR_DAT_04bb4f78;
              uVar47 = (uint)(byte)local_d8._0_1_;
              local_e0 = local_d8._4_4_;
              local_e4[0] = (CalendarTime)0xff;
              if ((byte)local_d8._0_1_ < 8) {
                local_e4[0] = local_d8._0_1_;
              }
              local_dc = local_d0;
              if ((byte)local_d8._0_1_ < 8) {
                puVar2 = PTR_DAT_04bb6c08 + 0x10;
                do {
                  local_e8[0] = (undefined1)uVar47;
                  lVar44 = FUN_025830c0(*(undefined8 *)puVar43,local_e8,1);
                  if (lVar44 != 0) {
                    local_c0 = (char *)(lVar44 + 0x17f40);
                    local_b8 = 1;
                    if (*(long **)(lVar44 + 0x17f68) == (long *)0x0) {
                      bVar18 = 0;
                    }
                    else {
                      puVar26 = (undefined8 *)**(long **)(lVar44 + 0x17f68);
                      bVar18 = 0;
                      if (puVar26 != (undefined8 *)0x0) {
                        bVar18 = (**(code **)*puVar26)();
                      }
                    }
                    local_b7 = bVar18 & 1;
                    piVar42 = (int *)(*(long *)(lVar44 + 0x17f50) + *(long *)(lVar44 + 0x17f48));
                    local_c8 = puVar2;
                    if (iVar21 == *piVar42) {
                      uVar28 = (*(ulong *)(piVar42 + 1) & 0xff00ff00ff00ff00) >> 8 |
                               (*(ulong *)(piVar42 + 1) & 0xff00ff00ff00ff) << 8;
                      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar28 & 0xffff0000ffff) << 0x10;
                      uVar35 = uVar28 >> 0x20 | uVar28 << 0x20;
                      uVar28 = CONCAT26(uStack_a6,CONCAT24(local_a8,local_b0._4_4_));
                      uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar28 & 0xffff0000ffff) << 0x10;
                      uVar28 = uVar28 >> 0x20 | uVar28 << 0x20;
                      if (uVar35 == uVar28) {
                        uVar28 = (*(ulong *)(piVar42 + 3) & 0xff00ff00ff00ff00) >> 8 |
                                 (*(ulong *)(piVar42 + 3) & 0xff00ff00ff00ff) << 8;
                        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar28 & 0xffff0000ffff) << 0x10;
                        uVar35 = uVar28 >> 0x20 | uVar28 << 0x20;
                        uVar28 = CONCAT26(uStack_9e,CONCAT15(bStack_9f,CONCAT14(local_a0,uStack_a4))
                                         );
                        uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar28 & 0xff00ff00ff00ff) << 8;
                        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar28 & 0xffff0000ffff) << 0x10;
                        uVar28 = uVar28 >> 0x20 | uVar28 << 0x20;
                        if (uVar35 != uVar28) goto LAB_02152d84;
                        uVar23 = (piVar42[5] & 0xff00ff00U) >> 8 | (piVar42[5] & 0xff00ffU) << 8;
                        uVar35 = (ulong)(uVar23 >> 0x10 | uVar23 << 0x10);
                        uVar23 = (auStack_9c[0] & 0xff00ff00) >> 8 | (auStack_9c[0] & 0xff00ff) << 8
                        ;
                        uVar28 = (ulong)(uVar23 >> 0x10 | uVar23 << 0x10);
                        if (uVar35 != uVar28) goto LAB_02152d84;
                        iVar22 = 0;
                      }
                      else {
LAB_02152d84:
                        iVar22 = 1;
                        if (uVar35 < uVar28) {
                          iVar22 = -1;
                        }
                      }
                      FUN_02640184(&local_c8);
                      if (iVar22 == 0) {
                        lVar44 = FUN_0205684c(*(long *)PTR_DAT_04bb3968 + 0x16558,0x19);
                        if (lVar44 != 0) {
                          FUN_0214ca00(&local_c8,lVar44);
                          puVar26 = &local_c8;
                          goto LAB_02152994;
                        }
                        break;
                      }
                    }
                    else {
                      FUN_02640184(&local_c8);
                    }
                  }
                  uVar28 = (ulong)uVar47;
                  do {
                    if (uVar28 == 7) goto switchD_021524cc_default;
                    uVar28 = uVar28 + 1;
                    uVar35 = FUN_02507924(local_e4,puVar6 + uVar28);
                  } while ((uVar35 & 1) == 0);
                  CVar9 = *(CalendarTime *)(puVar6 + uVar28);
                  uVar47 = (uint)(byte)CVar9;
                  if (7 < uVar47) break;
                  local_e4[0] = CVar9;
                } while( true );
              }
            }
          }
        }
      }
      break;
    case 5:
      if ((*(char *)(lVar44 + 0x2f) == '\x02') && (*(char *)(lVar44 + 0x2e) == '\x02')) {
        uVar28 = FUN_02847f10();
        if ((uVar28 & 1) == 0) {
          lVar44 = FUN_0265b2e0();
          if (lVar44 != 0) {
            local_a8 = (undefined2)lVar44;
            uStack_a6 = (undefined2)((ulong)lVar44 >> 0x10);
            uStack_a4 = (undefined4)((ulong)lVar44 >> 0x20);
            local_a0 = 1;
            if (*(long **)(lVar44 + 0x28) == (long *)0x0) {
              bVar18 = 0;
            }
            else {
              puVar26 = (undefined8 *)**(long **)(lVar44 + 0x28);
              bVar18 = 0;
              if (puVar26 != (undefined8 *)0x0) {
                bVar18 = (**(code **)*puVar26)();
              }
            }
            puVar43 = PTR_DAT_04bb7000;
            bStack_9f = bVar18 & 1;
            local_b0 = PTR_DAT_04bb7000 + 0x10;
            uVar28 = FUN_0284a8e4(*(long *)(lVar44 + 0x10) + *(long *)(lVar44 + 8));
            FUN_02640184(&local_b0);
            if ((uVar28 & 1) == 0) goto LAB_021529a0;
            lVar44 = FUN_0205684c(*(long *)PTR_DAT_04bb3968 + 0x16558,0x16);
            if (lVar44 != 0) {
              FUN_0214ca00(&local_b0,lVar44);
              puVar26 = &local_b0;
LAB_02152994:
              FUN_0214e518(plVar10,puVar26);
            }
          }
        }
      }
      break;
    case 6:
      lVar44 = *(long *)puVar6;
      if (lVar44 != 0) {
        puVar26 = *(undefined8 **)(lVar44 + 0x10);
        if ((*(byte *)(lVar44 + 0x453) & 1) == 0) {
          lVar44 = (**(code **)(*(long *)*puVar26 + 0x38))();
          if (lVar44 != 0) {
            lVar44 = lVar44 + 0x70;
LAB_02152608:
            plVar34 = (long *)(lVar44 + 0xe6ef0);
            if ((*(long **)(lVar44 + 0xe6f10) == (long *)0x0) ||
               (puVar26 = (undefined8 *)**(long **)(lVar44 + 0xe6f10), puVar26 == (undefined8 *)0x0)
               ) {
              uVar28 = 0;
            }
            else {
              uVar28 = (**(code **)*puVar26)();
              uVar28 = uVar28 & 0xffffffff;
            }
            cVar50 = *(char *)(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8) + 0x2f);
            local_c8 = (undefined *)uVar49;
            if ((char)((ulong)uVar49 >> 0x20) < '\x05') {
              lVar29 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
              local_b0 = (undefined *)(lVar29 + -0x15180);
              local_c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
            }
            uVar49 = local_c8;
            uVar35 = (ulong)local_c8 >> 0x30;
            uVar47 = (uint)local_c8;
            local_c8._0_6_ = CONCAT24(5,(uint)local_c8);
            local_c8 = (undefined *)
                       (CONCAT26((short)uVar35,(undefined6)local_c8) & 0xff00ffffffffffff);
            if (((cVar50 == '\x02') ||
                ((((cVar50 == '\x03' &&
                   (lVar44 = *(long *)(lVar44 + 0xe6ef8) + *plVar34,
                   (uint)*(ushort *)(lVar44 + 0x34) == (uVar47 & 0xffff))) &&
                  ((uint)*(byte *)(lVar44 + 0x36) == ((uint)((ulong)uVar49 >> 0x10) & 0xff))) &&
                 ((uint)*(byte *)(lVar44 + 0x37) == uVar47 >> 0x18)))) &&
               ((int)param_1[0x10] < (int)param_1[0x13])) {
              plVar38 = (long *)param_1[0x11];
              if (plVar38 != (long *)0x0) {
                param_1[0x11] = *plVar38;
              }
              *(undefined1 *)((long)plVar38 + 10) = 0;
              plVar38[3] = 0;
              *plVar38 = 0x1a001d0005;
              *(undefined2 *)(plVar38 + 1) = 0x100;
              plVar36 = plVar38 + 2;
              *plVar36 = 0;
              lVar44 = *plVar10;
              *plVar10 = (long)plVar36;
              plVar38[3] = (long)plVar10;
              *plVar36 = lVar44;
              if (lVar44 != 0) {
                *(long **)(lVar44 + 8) = plVar36;
              }
              *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
            }
            goto joined_r0x02152730;
          }
        }
        else if ((puVar26 != (undefined8 *)0x0) && ((long *)puVar26[0x26] != (long *)0x0)) {
          lVar44 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
          if (lVar44 != 0) goto LAB_02152608;
        }
      }
    }
switchD_021524cc_default:
    if ((((uVar27 & 1) != 0) && (*(long *)(lVar25 + 0x28) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8), puVar26 != (undefined8 *)0x0)) {
      (**(code **)*puVar26)();
    }
  }
  lVar25 = **(long **)puVar1;
  bVar18 = *(byte *)(lVar25 + 0x473);
  if ((long)(char)bVar18 != 0xffffffffffffffff) {
    pbVar32 = (byte *)(lVar25 + 0x48) + ((long)(char)bVar18 & 0xffffffffU) * 0x80;
    if (7 < bVar18) {
      pbVar32 = (byte *)(lVar25 + 0x48);
    }
    if (((*pbVar32 >> 3 & 1) != 0) && (*(byte *)(lVar25 + 0x472) != bVar18)) goto LAB_02152bc8;
  }
  FUN_0252d11c(&local_d8);
  if ((byte)local_d8._0_1_ < 8) {
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0xa914;
    uStack_a6 = 0x40c;
    uStack_a4 = 0;
    uVar27 = FUN_027490f0(uVar20,&local_b0);
    if ((uVar27 & 0xfffe) != 0) {
      uVar27 = FUN_021c7440();
      if ((uVar27 & 1) == 0) {
        FUN_0252d11c(&local_c8);
        if ((byte)local_c8._0_1_ < 8) {
          puVar43 = PTR_DAT_04bb2020 + 0x10;
          local_a8 = 0x5eae;
          uStack_a6 = 0x40a;
          uStack_a4 = 0;
          local_b0 = puVar43;
          iVar21 = FUN_0274bce0(&local_c8,&local_b0);
          if (iVar21 < 7) {
            FUN_0252d11c(local_e4);
            local_a8 = 0x92c9;
            uStack_a6 = 0x40f;
            uStack_a4 = 0;
            local_b0 = puVar43;
            iVar21 = FUN_0265ced0(uVar20,local_e4,&local_b0);
            if (iVar21 != 0) {
              FUN_0214f66c(param_1,uVar20);
              goto LAB_02152bc8;
            }
          }
        }
      }
      local_b0 = PTR_DAT_04bb2020 + 0x10;
      local_a8 = 0xa914;
      uStack_a6 = 0x40c;
      uStack_a4 = 0;
      FUN_027494ac(uVar20,&local_b0,1);
      *(undefined4 *)(*(long *)PTR_DAT_04bb4128 + 0x244) = 0;
    }
  }
LAB_02152bc8:
  if ((int)param_1[0x10] < (int)param_1[0x13]) {
    plVar34 = (long *)param_1[0x11];
    if (plVar34 != (long *)0x0) {
      param_1[0x11] = *plVar34;
    }
    plVar34[3] = 0;
    *plVar34 = 0x1d0005;
    *(undefined8 *)((long)plVar34 + 3) = 0;
    plVar38 = plVar34 + 2;
    *plVar38 = 0;
    lVar25 = *plVar10;
    *plVar10 = (long)plVar38;
    plVar34[3] = (long)plVar10;
    *plVar38 = lVar25;
    if (lVar25 != 0) {
      *(long **)(lVar25 + 8) = plVar38;
    }
    *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
  }
  FUN_0214d220(param_1);
  if ((((local_104 & 1) != 0) && (*(long *)(lVar24 + 0x28) != 0)) &&
     (puVar26 = *(undefined8 **)(*(long *)(lVar24 + 0x28) + 8), puVar26 != (undefined8 *)0x0)) {
    (**(code **)*puVar26)();
  }
  return;
}

