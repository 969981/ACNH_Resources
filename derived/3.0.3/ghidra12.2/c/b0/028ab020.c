
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028ab020(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined2 uVar20;
  ulong uVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  uint *puVar28;
  void *pvVar29;
  int iVar30;
  long lVar31;
  undefined8 *puVar32;
  ulong *puVar33;
  undefined8 uVar34;
  undefined4 *puVar35;
  undefined *puVar36;
  char local_82c [4];
  undefined **local_828;
  char *apcStack_820 [234];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined **local_98;
  char *local_90;
  ulong local_88;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar19 = PTR_DAT_04bb46b0;
  lVar31 = *(long *)PTR_DAT_04bb46b0;
  if (lVar31 == 0) {
LAB_028ab0a0:
    lVar31 = 0;
  }
  else {
    puVar32 = *(undefined8 **)(lVar31 + 0x10);
    if ((*(byte *)(lVar31 + 0x453) & 1) == 0) {
      lVar26 = (**(code **)(*(long *)*puVar32 + 0x38))();
      lVar31 = 0;
      if (lVar26 != 0) {
        lVar31 = lVar26 + 0x70;
      }
    }
    else {
      if (puVar32 == (undefined8 *)0x0) goto LAB_028ab0a0;
      lVar31 = 0;
      if ((long *)puVar32[0x26] != (long *)0x0) {
        lVar31 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar31 + 0x1a0b70) == (long *)0x0) {
    uVar27 = 0;
  }
  else {
    puVar32 = (undefined8 *)**(long **)(lVar31 + 0x1a0b70);
    uVar27 = 0;
    if (puVar32 != (undefined8 *)0x0) {
      uVar27 = (**(code **)*puVar32)();
    }
  }
  uVar24 = *(uint *)(*(long *)(lVar31 + 0x1a0b58) + *(long *)(lVar31 + 0x1a0b50));
  if (3 < uVar24) {
    uVar24 = 0;
  }
  local_828 = (undefined **)CONCAT44(local_828._4_4_,uVar24);
  if ((((uVar27 & 1) != 0) && (*(long *)(lVar31 + 0x1a0b70) != 0)) &&
     (puVar32 = *(undefined8 **)(*(long *)(lVar31 + 0x1a0b70) + 8), puVar32 != (undefined8 *)0x0)) {
    (**(code **)*puVar32)();
  }
  puVar36 = PTR_DAT_04bb2020;
  if (1 < (int)uVar24) {
    local_828 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    apcStack_820[0] = "ShopSocksFlag";
    uVar27 = FUN_0273f0a0(&local_828);
    if (((uVar27 & 1) == 0) && (*param_2 != 0)) {
      uVar23 = nn::time::GetDayOfWeek
                         ((int)(short)param_2[2],(int)*(char *)((long)param_2 + 0x12),
                          (int)*(char *)((long)param_2 + 0x13));
      local_70 = CONCAT44(local_70._4_4_,uVar23);
      if (*(char *)((long)param_2 + 0x12) == '\f') {
        puVar28 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar24 = *puVar28 ^ *puVar28 << 0xb;
        uVar16 = puVar28[3];
        *puVar28 = puVar28[1];
        puVar28[1] = puVar28[2];
        uVar24 = uVar24 >> 8 ^ uVar16 >> 0x13 ^ uVar24 ^ uVar16;
        puVar28[2] = uVar16;
        puVar28[3] = uVar24;
        if (uVar24 < 0x1999999a) {
          local_828 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
          memset(apcStack_820,0,0x754);
          uVar24 = nn::os::GetSystemTick();
          local_cc = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 1;
          local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
          local_c4 = (local_c8 ^ local_c8 >> 0x1e) * 0x6c078965 + 3;
          local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
          pvVar29 = (void *)(*(code *)local_828[3])(&local_828);
          memset(pvVar29,0,0x754);
          local_90 = (char *)&local_a8;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,6);
          local_98 = &PTR_FUN_049ff4e8;
          FUN_008a1ba0(&local_828,&local_98);
          puVar28 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar24 = *puVar28 ^ *puVar28 << 0xb;
          uVar25 = puVar28[3];
          *puVar28 = puVar28[1];
          puVar28[1] = puVar28[2];
          uVar16 = uVar24 ^ uVar25;
          uVar24 = uVar24 >> 8 ^ uVar25 >> 0x13 ^ uVar16;
          puVar28[2] = uVar25;
          puVar28[3] = uVar24;
          uVar24 = (uVar24 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
          uVar16 = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 2;
          local_a8 = (undefined *)CONCAT44(uVar16,uVar24);
          uVar24 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
          local_a0 = (char *)CONCAT44((uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 4,uVar24);
          lVar26 = (*(code *)local_828[4])(&local_828);
          lVar31 = 0;
          iVar30 = 0;
          do {
            puVar28 = (uint *)(lVar26 + lVar31);
            lVar31 = lVar31 + 4;
            uVar24 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
            uVar24 = (uVar24 >> 2 & 0x33333333) + (uVar24 & 0x33333333);
            uVar24 = uVar24 + (uVar24 >> 4) & 0xf0f0f0f;
            uVar24 = uVar24 + (uVar24 >> 8);
            iVar30 = (uVar24 + (uVar24 >> 0x10) & 0x3f) + iVar30;
          } while (lVar31 != 0x754);
          if (iVar30 == 0) {
            local_b8 = (char *)CONCAT44(DAT_0558600c,_DAT_05586008);
          }
          else {
            lVar26 = (*(code *)local_828[4])(&local_828);
            lVar31 = 0;
            uVar24 = 0;
            do {
              puVar28 = (uint *)(lVar26 + lVar31);
              lVar31 = lVar31 + 4;
              uVar16 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
              uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
              uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
              uVar16 = uVar16 + (uVar16 >> 8);
              uVar24 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + uVar24;
            } while (lVar31 != 0x754);
            uVar16 = (uint)local_a8 ^ (uint)local_a8 << 0xb;
            local_a8 = (undefined *)CONCAT44((uint)local_a0,local_a8._4_4_);
            uVar16 = uVar16 >> 8 ^ local_a0._4_4_ >> 0x13 ^ uVar16 ^ local_a0._4_4_;
            local_a0 = (char *)CONCAT44(uVar16,local_a0._4_4_);
            FUN_00889f80(&local_b8,&local_828,(int)((ulong)uVar16 * (ulong)uVar24 >> 0x20) + 1);
            FUN_01a4c66c(&local_a8,&local_b8);
          }
          puVar18 = PTR_DAT_04bb43c0;
          lVar31 = *(long *)PTR_DAT_04bb43c0;
          uVar24 = FUN_0277d6c4(&local_b8);
          puVar36 = PTR_DAT_04bb2020;
          if (*(long *)puVar18 != 0) {
            lVar31 = *(long *)(lVar31 + 0x57e58);
            uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
            if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
              lVar31 = FUN_0264d510();
              local_88 = CONCAT71(local_88._1_7_,1);
              local_90 = (char *)(lVar31 + 0x1a0b48);
              if (*(long **)(lVar31 + 0x1a0b70) == (long *)0x0) {
                uVar22 = 0;
              }
              else {
                puVar32 = (undefined8 *)**(long **)(lVar31 + 0x1a0b70);
                uVar22 = 0;
                if (puVar32 != (undefined8 *)0x0) {
                  uVar22 = (**(code **)*puVar32)();
                }
              }
              local_88 = CONCAT62(local_88._2_6_,CONCAT11(uVar22,(undefined1)local_88)) &
                         0xffffffffffff01ff;
              local_98 = &PTR_FUN_04933928;
              uVar24 = *(uint *)(*(long *)(lVar31 + 0x1a0b58) + *(long *)(lVar31 + 0x1a0b50));
              if (3 < uVar24) {
                uVar24 = 0;
              }
              local_78 = CONCAT44(local_78._4_4_,uVar24);
              FUN_02640184(&local_98);
              puVar28 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
              uVar17 = puVar28[3];
              uVar16 = *puVar28 ^ *puVar28 << 0xb;
              *puVar28 = puVar28[1];
              puVar28[1] = puVar28[2];
              uVar25 = uVar16 ^ uVar17;
              uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar25;
              puVar28[2] = uVar17;
              puVar28[3] = uVar16;
              uVar16 = 3 - ((int)uVar16 >> 0x1f);
              if ((int)uVar24 < 3) {
                uVar16 = uVar25 >> 0x1f | 2;
              }
              uVar27 = (ulong)uVar16;
              lVar31 = param_1 + (local_70 & 0xffffffff) * 0x200;
              if (6 < (uint)local_70) {
                lVar31 = param_1;
              }
              puVar35 = (undefined4 *)(lVar31 + uVar27 * 8);
              *puVar35 = (undefined4)local_b8;
              puVar35[1] = local_b8._4_4_;
              lVar31 = param_1 + 0xe00 + (local_70 & 0xffffffff) * 0x100;
              if (6 < (uint)local_70) {
                lVar31 = param_1 + 0xe00;
              }
              *(undefined4 *)(lVar31 + uVar27 * 4) = 1;
              lVar31 = param_1 + 0x1500 + (local_70 & 0xffffffff) * 0x40;
              if (6 < (uint)local_70) {
                lVar31 = param_1 + 0x1500;
              }
              *(undefined1 *)(lVar31 + uVar27) = 1;
              local_98 = (undefined **)(puVar36 + 0x10);
              local_90 = "ShopSocksFlag";
              FUN_0273f3c4(&local_98,1);
              FUN_01ad5d04(&local_98,&local_b8);
            }
          }
        }
      }
    }
  }
  lVar31 = *(long *)puVar19;
  if (lVar31 == 0) {
LAB_028ab5c4:
    lVar31 = 0;
  }
  else {
    puVar32 = *(undefined8 **)(lVar31 + 0x10);
    if ((*(byte *)(lVar31 + 0x453) & 1) == 0) {
      lVar26 = (**(code **)(*(long *)*puVar32 + 0x38))();
      lVar31 = 0;
      if (lVar26 != 0) {
        lVar31 = lVar26 + 0x70;
      }
    }
    else {
      if (puVar32 == (undefined8 *)0x0) goto LAB_028ab5c4;
      lVar31 = 0;
      if ((long *)puVar32[0x26] != (long *)0x0) {
        lVar31 = (**(code **)(*(long *)puVar32[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar31 + 0x1a0b70) == (long *)0x0) {
    uVar27 = 0;
  }
  else {
    puVar32 = (undefined8 *)**(long **)(lVar31 + 0x1a0b70);
    uVar27 = 0;
    if (puVar32 != (undefined8 *)0x0) {
      uVar27 = (**(code **)*puVar32)();
    }
  }
  uVar24 = *(uint *)(*(long *)(lVar31 + 0x1a0b58) + *(long *)(lVar31 + 0x1a0b50));
  if (3 < uVar24) {
    uVar24 = 0;
  }
  local_828 = (undefined **)CONCAT44(local_828._4_4_,uVar24);
  if ((((uVar27 & 1) != 0) && (*(long *)(lVar31 + 0x1a0b70) != 0)) &&
     (puVar32 = *(undefined8 **)(*(long *)(lVar31 + 0x1a0b70) + 8), puVar32 != (undefined8 *)0x0)) {
    (**(code **)*puVar32)();
  }
  if ((int)uVar24 < 3) {
    return;
  }
  puVar33 = (ulong *)(param_2 + 2);
  local_a8 = (undefined *)*puVar33;
  local_828 = (undefined **)(puVar36 + 0x10);
  uVar34 = *(undefined8 *)PTR_DAT_04bb32f0;
  apcStack_820[0] = "XmasEve";
  if ((char)((ulong)local_a8 >> 0x20) < '\x05') {
    lVar31 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
    local_98 = (undefined **)(lVar31 + -0x15180);
    local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_98);
  }
  uVar21 = (ulong)local_a8;
  uVar27 = (ulong)local_a8 >> 0x30;
  local_a8._0_6_ = CONCAT24(5,(uint)local_a8);
  local_a8 = (undefined *)(CONCAT26((short)uVar27,(undefined6)local_a8) & 0xff00ffffffffffff);
  uVar27 = FUN_00879dd0(uVar34,&local_828,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
  if ((uVar27 & 1) == 0) {
    local_b8 = (char *)*puVar33;
    local_98 = (undefined **)(puVar36 + 0x10);
    local_90 = "XmasReady1";
    if ((char)((ulong)local_b8 >> 0x20) < '\x05') {
      lVar31 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
      local_a8 = (undefined *)(lVar31 + -0x15180);
      local_b8 = (char *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
    }
    uVar27 = (ulong)local_b8;
    local_b8._7_1_ = SUB81(uVar27,7);
    local_b8._0_7_ = (uint7)CONCAT24(5,(undefined4)local_b8);
    uVar27 = FUN_00879dd0(uVar34,&local_98,uVar27,uVar27 >> 0x10,uVar27 >> 0x18,0);
    if ((uVar27 & 1) == 0) {
      local_70 = *puVar33;
      local_a8 = puVar36 + 0x10;
      local_a0 = "XmasReady2";
      if ((char)(local_70 >> 0x20) < '\x05') {
        lVar31 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_b8 = (char *)(lVar31 + -0x15180);
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
      }
      uVar27 = local_70;
      local_70._7_1_ = SUB81(uVar27,7);
      local_70._0_7_ = (uint7)CONCAT24(5,(uint)local_70);
      uVar27 = FUN_00879dd0(uVar34,&local_a8,uVar27,uVar27 >> 0x10,uVar27 >> 0x18,0);
      if ((uVar27 & 1) == 0) {
        local_78 = *puVar33;
        local_b8 = puVar36 + 0x10;
        pcStack_b0 = "XmasAfter";
        if ((char)(local_78 >> 0x20) < '\x05') {
          lVar31 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
          local_70 = lVar31 - 0x15180;
          local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
        }
        uVar27 = local_78;
        local_78._7_1_ = SUB81(uVar27,7);
        local_78._0_7_ = (uint7)CONCAT24(5,(undefined4)local_78);
        uVar27 = FUN_00879dd0(uVar34,&local_b8,uVar27,uVar27 >> 0x10,uVar27 >> 0x18,0);
        if ((uVar27 & 1) == 0) {
          return;
        }
      }
    }
  }
  uVar23 = nn::time::GetDayOfWeek
                     ((int)(short)param_2[2],(int)*(char *)((long)param_2 + 0x12),
                      (int)*(char *)((long)param_2 + 0x13));
  local_70 = CONCAT44(local_70._4_4_,uVar23);
  apcStack_820[0] = "ShopSelectChristmasFtr";
  local_828 = (undefined **)(puVar36 + 0x10);
  uVar27 = FUN_0273f0a0(&local_828);
  if ((uVar27 & 1) != 0) {
    return;
  }
  local_82c[0] = '\0';
  FUN_01b02920(local_82c,puVar33,0);
  local_828 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(apcStack_820,0,0x754);
  uVar24 = nn::os::GetSystemTick();
  local_cc = (uVar24 ^ uVar24 >> 0x1e) * 0x6c078965 + 1;
  local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
  local_c4 = (local_c8 ^ local_c8 >> 0x1e) * 0x6c078965 + 3;
  local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
  pvVar29 = (void *)(*(code *)local_828[3])(&local_828);
  memset(pvVar29,0,0x754);
  local_a8._0_4_ = 0x127;
  local_98 = &PTR_FUN_049ff4e8;
  local_90 = (char *)&local_a8;
  FUN_008a1ba0(&local_828,&local_98);
  local_90 = "ChristmasFtrFirstRound";
  local_98 = (undefined **)(puVar36 + 0x10);
  uVar27 = FUN_0273f0a0(&local_98);
  if ((uVar27 & 1) != 0) {
    local_a8._0_4_ = 8;
    local_98 = &PTR_FUN_049ff4e8;
    local_90 = (char *)&local_a8;
    FUN_008a1ba0(&local_828,&local_98);
  }
  puVar19 = PTR_DAT_04bb43c0;
  local_b8 = (char *)((ulong)local_b8 & 0xffffffff00000000);
  uVar24 = 0;
  local_98 = &PTR_FUN_049ff448;
  local_90 = (char *)&local_b8;
  do {
    (*(code *)local_828[2])(&local_a8,&local_828,uVar24);
    lVar31 = (*(code *)local_828[4])(&local_828);
    uVar16 = 1 << (ulong)(uVar24 & 0x1f);
    if ((*(uint *)(lVar31 + (ulong)(uVar24 >> 5) * 4) & uVar16) != 0) {
      lVar31 = *(long *)puVar19;
      uVar25 = FUN_0277d6c4(&local_a8);
      if (*(long *)puVar19 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if (((uVar25 < *(uint *)(lVar31 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) &&
           (uVar27 = (*(code *)*local_98)(&local_98,&local_a8), (uVar27 & 1) != 0))
        goto LAB_028ab990;
      }
      lVar31 = (*(code *)local_828[3])(&local_828);
      lVar26 = (ulong)(uVar24 >> 5) * 4;
      *(uint *)(lVar31 + lVar26) = *(uint *)(lVar31 + lVar26) & (uVar16 ^ 0xffffffff);
    }
LAB_028ab990:
    uVar24 = uVar24 + 1;
  } while (uVar24 != 15000);
  uVar24 = 0;
  local_90 = local_82c;
  local_98 = &PTR_FUN_049ff6a0;
  do {
    (*(code *)local_828[2])(&local_a8,&local_828,uVar24);
    lVar31 = (*(code *)local_828[4])(&local_828);
    uVar16 = 1 << (ulong)(uVar24 & 0x1f);
    if ((*(uint *)(lVar31 + (ulong)(uVar24 >> 5) * 4) & uVar16) != 0) {
      lVar31 = *(long *)puVar19;
      uVar25 = FUN_0277d6c4(&local_a8);
      if (*(long *)puVar19 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if (((uVar25 < *(uint *)(lVar31 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) &&
           (uVar27 = (*(code *)*local_98)(&local_98,&local_a8), (uVar27 & 1) != 0))
        goto LAB_028aba74;
      }
      lVar31 = (*(code *)local_828[3])(&local_828);
      lVar26 = (ulong)(uVar24 >> 5) * 4;
      *(uint *)(lVar31 + lVar26) = *(uint *)(lVar31 + lVar26) & (uVar16 ^ 0xffffffff);
    }
LAB_028aba74:
    uVar24 = uVar24 + 1;
  } while (uVar24 != 15000);
  (*(code *)local_828[4])(&local_828);
  puVar35 = (undefined4 *)(param_1 + 0x16e8);
  lVar31 = *(long *)puVar19;
  uVar24 = FUN_0277d6c4(puVar35);
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar35);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar1 = (undefined4 *)(param_1 + 0x16f0);
  uVar24 = FUN_0277d6c4(puVar1);
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar1);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar2 = (undefined4 *)(param_1 + 0x16f8);
  uVar24 = FUN_0277d6c4(puVar2);
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar2);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar3 = (undefined4 *)(param_1 + 0x1700);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar3);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar4 = (undefined4 *)(param_1 + 0x1708);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar4);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar5 = (undefined4 *)(param_1 + 0x1710);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar5);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar6 = (undefined4 *)(param_1 + 0x1718);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar6);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar7 = (undefined4 *)(param_1 + 0x1720);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar7);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar8 = (undefined4 *)(param_1 + 0x1728);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar8);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar9 = (undefined4 *)(param_1 + 0x1730);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar9);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar10 = (undefined4 *)(param_1 + 0x1738);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar10);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar11 = (undefined4 *)(param_1 + 0x1740);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar11);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar12 = (undefined4 *)(param_1 + 0x1748);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar12);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar13 = (undefined4 *)(param_1 + 0x1750);
  uVar24 = FUN_0277d6c4(puVar13);
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar13);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  puVar14 = (undefined4 *)(param_1 + 0x1758);
  lVar31 = *(long *)puVar19;
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar14);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar31 = *(long *)puVar19;
  puVar15 = (undefined4 *)(param_1 + 0x1760);
  uVar24 = FUN_0277d6c4();
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      lVar31 = (*(code *)local_828[3])(&local_828);
      uVar24 = FUN_0277d6c4(puVar15);
      if ((uVar24 >> 3 & 0x1fff) < 0x753) {
        lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
        *(uint *)(lVar31 + lVar26) =
             *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar26 = (*(code *)local_828[4])(&local_828);
  lVar31 = 0;
  iVar30 = 0;
  do {
    puVar28 = (uint *)(lVar26 + lVar31);
    lVar31 = lVar31 + 4;
    uVar24 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
    uVar24 = (uVar24 >> 2 & 0x33333333) + (uVar24 & 0x33333333);
    uVar24 = uVar24 + (uVar24 >> 4) & 0xf0f0f0f;
    uVar24 = uVar24 + (uVar24 >> 8);
    iVar30 = (uVar24 + (uVar24 >> 0x10) & 0x3f) + iVar30;
  } while (lVar31 != 0x754);
  if (iVar30 == 0) {
    local_b8 = (char *)0xfffe;
    FUN_0277d4ac(&local_b8);
    lVar26 = *(long *)puVar19;
    uVar24 = FUN_0277d6c4(puVar35);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x16e8);
      }
    }
    *(undefined2 *)(param_1 + 0x16e8) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x16ea) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x16eb) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x16ec) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar1);
    lVar26 = *(long *)puVar19;
    if (lVar26 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x16f0);
      }
    }
    *(undefined2 *)(param_1 + 0x16f0) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x16f2) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x16f3) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x16f4) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar2);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x16f8);
      }
    }
    *(undefined2 *)(param_1 + 0x16f8) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x16fa) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x16fb) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x16fc) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar3);
    lVar26 = *(long *)puVar19;
    if (lVar26 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1700);
      }
    }
    *(undefined2 *)(param_1 + 0x1700) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x1702) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x1703) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1704) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar4);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1708);
      }
    }
    *(undefined2 *)(param_1 + 0x1708) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x170a) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x170b) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x170c) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar5);
    lVar26 = *(long *)puVar19;
    if (lVar26 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1710);
      }
    }
    *(undefined2 *)(param_1 + 0x1710) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x1712) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x1713) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1714) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar6);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1718);
      }
    }
    *(undefined2 *)(param_1 + 0x1718) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x171a) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x171b) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x171c) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar7);
    lVar26 = *(long *)puVar19;
    if (lVar26 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1720);
      }
    }
    *(undefined2 *)(param_1 + 0x1720) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x1722) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x1723) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1724) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar8);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1728);
      }
    }
    *(undefined2 *)(param_1 + 0x1728) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x172a) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x172b) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x172c) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar9);
    lVar26 = *(long *)puVar19;
    if (lVar26 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1730);
      }
    }
    *(undefined2 *)(param_1 + 0x1730) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x1732) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x1733) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1734) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar10);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1738);
      }
    }
    *(undefined2 *)(param_1 + 0x1738) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x173a) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x173b) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x173c) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar11);
    lVar26 = *(long *)puVar19;
    if (lVar26 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1740);
      }
    }
    *(undefined2 *)(param_1 + 0x1740) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x1742) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x1743) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1744) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar12);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1748);
      }
    }
    *(undefined2 *)(param_1 + 0x1748) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x174a) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x174b) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x174c) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar13);
    lVar26 = *(long *)puVar19;
    if (lVar26 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1750);
      }
    }
    *(undefined2 *)(param_1 + 0x1750) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x1752) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x1753) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1754) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar14);
    lVar31 = *(long *)puVar19;
    if (lVar31 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1758);
      }
    }
    *(undefined2 *)(param_1 + 0x1758) = DAT_05586008;
    *(undefined1 *)(param_1 + 0x175a) = DAT_0558600a;
    *(undefined1 *)(param_1 + 0x175b) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x175c) = DAT_0558600c;
    uVar24 = FUN_0277d6c4(puVar15);
    if (*(long *)puVar19 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_b8 = *(char **)(param_1 + 0x1760);
      }
    }
    uVar20 = DAT_05586008;
    *(undefined1 *)(param_1 + 0x1762) = DAT_0558600a;
    *(undefined2 *)(param_1 + 0x1760) = uVar20;
    *(undefined1 *)(param_1 + 0x1763) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1764) = DAT_0558600c;
    local_98 = &PTR_LAB_048f9770;
    local_90 = "ChristmasFtrFirstRound";
    FUN_0273f3c4(&local_98,1);
    local_a8._0_4_ = 0x127;
    local_98 = &PTR_FUN_049ff4e8;
    local_90 = (char *)&local_a8;
    FUN_008a1ba0(&local_828,&local_98);
    local_a8._0_4_ = 8;
    local_98 = &PTR_FUN_049ff4e8;
    local_90 = (char *)&local_a8;
    FUN_008a1ba0(&local_828,&local_98);
    lVar31 = *(long *)puVar19;
    uVar24 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar19 != 0) {
      lVar31 = *(long *)(lVar31 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        lVar31 = (*(code *)local_828[3])(&local_828);
        uVar24 = FUN_0277d6c4(&local_b8);
        if ((uVar24 >> 3 & 0x1fff) < 0x753) {
          lVar26 = (ulong)((uVar24 & 0xffff) >> 5) * 4;
          *(uint *)(lVar31 + lVar26) =
               *(uint *)(lVar31 + lVar26) & (1 << (ulong)(uVar24 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    uVar24 = 0;
    local_90 = (char *)&local_78;
    local_78 = local_78 & 0xffffffff00000000;
    local_98 = &PTR_FUN_049ff448;
    do {
      (*(code *)local_828[2])(&local_a8,&local_828,uVar24);
      lVar31 = (*(code *)local_828[4])(&local_828);
      uVar16 = 1 << (ulong)(uVar24 & 0x1f);
      if ((*(uint *)(lVar31 + (ulong)(uVar24 >> 5) * 4) & uVar16) != 0) {
        lVar31 = *(long *)puVar19;
        uVar25 = FUN_0277d6c4(&local_a8);
        if (*(long *)puVar19 != 0) {
          lVar31 = *(long *)(lVar31 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (((uVar25 < *(uint *)(lVar31 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) &&
             (uVar27 = (*(code *)*local_98)(&local_98,&local_a8), (uVar27 & 1) != 0))
          goto LAB_028acdc0;
        }
        lVar31 = (*(code *)local_828[3])(&local_828);
        lVar26 = (ulong)(uVar24 >> 5) * 4;
        *(uint *)(lVar31 + lVar26) = *(uint *)(lVar31 + lVar26) & (uVar16 ^ 0xffffffff);
      }
LAB_028acdc0:
      uVar24 = uVar24 + 1;
    } while (uVar24 != 15000);
    uVar24 = 0;
    local_90 = local_82c;
    local_98 = &PTR_FUN_049ff6a0;
    do {
      (*(code *)local_828[2])(&local_a8,&local_828,uVar24);
      lVar31 = (*(code *)local_828[4])(&local_828);
      uVar16 = 1 << (ulong)(uVar24 & 0x1f);
      if ((*(uint *)(lVar31 + (ulong)(uVar24 >> 5) * 4) & uVar16) != 0) {
        lVar31 = *(long *)puVar19;
        uVar25 = FUN_0277d6c4(&local_a8);
        if (*(long *)puVar19 != 0) {
          lVar31 = *(long *)(lVar31 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (((uVar25 < *(uint *)(lVar31 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar25 * 8) != 0)) &&
             (uVar27 = (*(code *)*local_98)(&local_98,&local_a8), (uVar27 & 1) != 0))
          goto LAB_028aceb0;
        }
        lVar31 = (*(code *)local_828[3])(&local_828);
        lVar26 = (ulong)(uVar24 >> 5) * 4;
        *(uint *)(lVar31 + lVar26) = *(uint *)(lVar31 + lVar26) & (uVar16 ^ 0xffffffff);
      }
LAB_028aceb0:
      uVar24 = uVar24 + 1;
    } while (uVar24 != 15000);
  }
  puVar28 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar24 = *puVar28 ^ *puVar28 << 0xb;
  uVar25 = puVar28[3];
  *puVar28 = puVar28[1];
  puVar28[1] = puVar28[2];
  uVar16 = uVar24 ^ uVar25;
  uVar24 = uVar24 >> 8 ^ uVar25 >> 0x13 ^ uVar16;
  puVar28[2] = uVar25;
  puVar28[3] = uVar24;
  local_a8._0_4_ = (uVar24 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
  local_a8._4_4_ = ((uint)local_a8 ^ (uint)local_a8 >> 0x1e) * 0x6c078965 + 2;
  local_a0._0_4_ = (local_a8._4_4_ ^ local_a8._4_4_ >> 0x1e) * 0x6c078965 + 3;
  local_a0._4_4_ = ((uint)local_a0 ^ (uint)local_a0 >> 0x1e) * 0x6c078965 + 4;
  lVar26 = (*(code *)local_828[4])(&local_828);
  lVar31 = 0;
  iVar30 = 0;
  do {
    puVar28 = (uint *)(lVar26 + lVar31);
    lVar31 = lVar31 + 4;
    uVar24 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
    uVar24 = (uVar24 >> 2 & 0x33333333) + (uVar24 & 0x33333333);
    uVar24 = uVar24 + (uVar24 >> 4) & 0xf0f0f0f;
    uVar24 = uVar24 + (uVar24 >> 8);
    iVar30 = (uVar24 + (uVar24 >> 0x10) & 0x3f) + iVar30;
  } while (lVar31 != 0x754);
  if (iVar30 == 0) {
    local_b8 = (char *)CONCAT44(DAT_0558600c,_DAT_05586008);
  }
  else {
    lVar26 = (*(code *)local_828[4])(&local_828);
    lVar31 = 0;
    uVar24 = 0;
    do {
      puVar28 = (uint *)(lVar26 + lVar31);
      lVar31 = lVar31 + 4;
      uVar16 = *puVar28 - (*puVar28 >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      uVar24 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + uVar24;
    } while (lVar31 != 0x754);
    uVar16 = (uint)local_a8 ^ (uint)local_a8 << 0xb;
    local_a8._0_4_ = local_a8._4_4_;
    local_a8._4_4_ = (uint)local_a0;
    uVar16 = uVar16 >> 8 ^ local_a0._4_4_ >> 0x13 ^ uVar16 ^ local_a0._4_4_;
    local_a0._0_4_ = local_a0._4_4_;
    local_a0._4_4_ = uVar16;
    FUN_00889f80(&local_b8,&local_828,(int)((ulong)uVar16 * (ulong)uVar24 >> 0x20) + 1);
    FUN_01a4c66c(&local_a8,&local_b8);
  }
  lVar31 = *(long *)puVar19;
  uVar24 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar19 == 0) {
    return;
  }
  lVar31 = *(long *)(lVar31 + 0x57e58);
  uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
  if (*(uint *)(lVar31 + 0x1d8) <= uVar24) {
    return;
  }
  if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) == 0) {
    return;
  }
  lVar31 = param_1 + (local_70 & 0xffffffff) * 0x200;
  if (6 < (uint)local_70) {
    lVar31 = param_1;
  }
  *(undefined4 *)(lVar31 + 0x10) = (undefined4)local_b8;
  *(undefined4 *)(lVar31 + 0x14) = local_b8._4_4_;
  lVar31 = param_1 + 0xe00 + (local_70 & 0xffffffff) * 0x100;
  if (6 < (uint)local_70) {
    lVar31 = param_1 + 0xe00;
  }
  *(undefined4 *)(lVar31 + 8) = 0xffffffff;
  lVar31 = param_1 + 0x1500 + (local_70 & 0xffffffff) * 0x40;
  if (6 < (uint)local_70) {
    lVar31 = param_1 + 0x1500;
  }
  *(undefined1 *)(lVar31 + 2) = 1;
  lVar26 = *(long *)puVar19;
  uVar24 = FUN_0277d6c4(puVar35);
  lVar31 = *(long *)puVar19;
  if (lVar31 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      uVar24 = FUN_0277d6c4(puVar1);
      lVar26 = *(long *)puVar19;
      puVar35 = puVar1;
      if (lVar26 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
          uVar24 = FUN_0277d6c4(puVar2);
          puVar35 = puVar2;
          if (*(long *)puVar19 != 0) {
            lVar31 = *(long *)(lVar26 + 0x57e58);
            uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
            if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
              uVar27 = FUN_0277d9a8(puVar3);
              puVar35 = puVar3;
              if ((uVar27 & 1) != 0) {
                uVar27 = FUN_0277d9a8(puVar4);
                puVar35 = puVar4;
                if ((uVar27 & 1) != 0) {
                  uVar27 = FUN_0277d9a8(puVar5);
                  puVar35 = puVar5;
                  if ((uVar27 & 1) != 0) {
                    uVar27 = FUN_0277d9a8(puVar6);
                    puVar35 = puVar6;
                    if ((uVar27 & 1) != 0) {
                      uVar27 = FUN_0277d9a8(puVar7);
                      puVar35 = puVar7;
                      if ((uVar27 & 1) != 0) {
                        uVar27 = FUN_0277d9a8(puVar8);
                        puVar35 = puVar8;
                        if ((uVar27 & 1) != 0) {
                          uVar27 = FUN_0277d9a8(puVar9);
                          puVar35 = puVar9;
                          if ((uVar27 & 1) != 0) {
                            uVar27 = FUN_0277d9a8(puVar10);
                            puVar35 = puVar10;
                            if ((uVar27 & 1) != 0) {
                              uVar27 = FUN_0277d9a8(puVar11);
                              puVar35 = puVar11;
                              if ((uVar27 & 1) != 0) {
                                uVar27 = FUN_0277d9a8(puVar12);
                                puVar35 = puVar12;
                                if ((uVar27 & 1) != 0) {
                                  uVar27 = FUN_0277d9a8(puVar13);
                                  puVar35 = puVar13;
                                  if ((uVar27 & 1) != 0) {
                                    uVar27 = FUN_0277d9a8(puVar14);
                                    puVar35 = puVar14;
                                    if ((uVar27 & 1) != 0) {
                                      uVar27 = FUN_0277d9a8(puVar15);
                                      puVar35 = puVar15;
                                      if ((uVar27 & 1) != 0) goto LAB_028ad328;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *puVar35 = (undefined4)local_b8;
  puVar35[1] = local_b8._4_4_;
LAB_028ad328:
  local_98 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_90 = "ShopSelectChristmasFtr";
  FUN_0273f3c4(&local_98,1);
  local_88 = 0;
  lVar31 = *(long *)puVar19;
  local_98 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_90 = local_b8;
  uVar24 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar19 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar24 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
      FUN_0277d6c4(&local_b8);
    }
  }
  return;
}

