
void FUN_027e4a60(byte *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined8 local_90;
  char *pcStack_88;
  undefined *local_80;
  char *pcStack_78;
  ulong local_70;
  undefined8 local_68;
  
  uVar23 = param_2[2];
  lVar22 = *(long *)PTR_DAT_04bb32f0;
  local_70 = uVar23;
  if (lVar22 == 0) {
LAB_027e4bb4:
    uVar25 = 1;
  }
  else {
    uVar25 = 1;
    uVar16 = FUN_00873540(lVar22,&local_70,1,1);
    if ((uVar16 & 1) == 0) {
      uVar24 = uVar23 >> 0x10;
      uVar26 = uVar23 >> 0x18;
      cVar6 = (char)(uVar23 >> 0x20);
      uVar20 = uVar26 & 0xffffffff;
      uVar19 = uVar24 & 0xffffffff;
      uVar25 = uVar23 & 0xffffffff;
      local_90 = (undefined *)uVar23;
      if (cVar6 < '\x05') {
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
        local_80 = (undefined *)(lVar17 + -0x15180);
        uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        uVar19 = uVar16 >> 0x10;
        uVar20 = uVar16 >> 0x18;
        uVar25 = uVar16;
        local_90 = (undefined *)uVar16;
      }
      uVar7 = (ulong)local_90 >> 0x30;
      local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
      local_90 = (undefined *)(CONCAT26((short)uVar7,(uint6)local_90) & 0xff00ffffffffffff);
      uVar16 = FUN_0087312c(uVar16,uVar25,uVar19,uVar20);
      if ((uVar16 & 1) == 0) {
        uVar20 = uVar26 & 0xffffffff;
        uVar19 = uVar24 & 0xffffffff;
        uVar25 = uVar23 & 0xffffffff;
        local_90 = (undefined *)uVar23;
        if (cVar6 < '\x05') {
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
          local_80 = (undefined *)(lVar17 + -0x15180);
          uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
          uVar19 = uVar16 >> 0x10;
          uVar20 = uVar16 >> 0x18;
          uVar25 = uVar16;
          local_90 = (undefined *)uVar16;
        }
        uVar7 = (ulong)local_90;
        local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
        local_90._7_1_ = SUB81(uVar7,7);
        local_90._0_7_ = (uint7)(uint6)local_90;
        uVar16 = FUN_008727d0(uVar16,uVar25,uVar19,uVar20);
        if ((uVar16 & 1) == 0) {
          uVar9 = FUN_006bd550("LunarNewYear",0);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
          uVar18 = FUN_0088c0d0(lVar22 + 8,&local_80);
          uVar16 = FUN_00875c10(lVar22,uVar18,uVar23 & 0xffffffff,uVar24 & 0xffffffff,
                                uVar26 & 0xffffffff);
          if ((uVar16 & 1) == 0) {
            local_80 = PTR_DAT_04bb2020 + 0x10;
            pcStack_78 = "NewYear";
            local_68 = uVar23;
            if (cVar6 < '\x05') {
              lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
              local_90 = (undefined *)(lVar17 + -0x15180);
              local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
              uVar23 = local_68 & 0xffffffff;
              uVar24 = local_68 >> 0x10;
              uVar26 = local_68 >> 0x18;
            }
            uVar16 = local_68;
            local_68._7_1_ = SUB81(uVar16,7);
            local_68._0_7_ = (uint7)CONCAT24(5,(undefined4)local_68);
            uVar25 = FUN_00879dd0(lVar22,&local_80,uVar23 & 0xffffffff,uVar24 & 0xffffffff,
                                  uVar26 & 0xffffffff,0);
            uVar25 = uVar25 & 0xffffffff;
            goto LAB_027e4bb8;
          }
        }
      }
      goto LAB_027e4bb4;
    }
  }
LAB_027e4bb8:
  puVar8 = PTR_DAT_04bc2a20;
  puVar3 = PTR_DAT_04bc27f0;
  if (*param_2 == 0) {
    if ((uVar25 & 1) == 0) {
      return;
    }
    uVar23 = (ulong)*param_1;
    if (((uVar23 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x1267c,0,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x13230];
    if (((uVar23 < 0x23) && (param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x258ac,1,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x26460];
    if (((uVar23 < 0x23) && (param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x38adc,2,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x39690];
    if (((uVar23 < 0x23) && (param_1[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x4bd0c,3,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x4c8c0];
    if (((uVar23 < 0x23) && (param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x5ef3c,4,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x5faf0];
    if (((uVar23 < 0x23) && (param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x7216c,5,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x72d20];
    if (((uVar23 < 0x23) && (param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x8539c,6,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x85f50];
    if (((uVar23 < 0x23) && (param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0x985cc,7,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0x99180];
    if (((uVar23 < 0x23) && (param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + 0xab7fc,8,&local_80,0,0);
    }
    uVar23 = (ulong)param_1[0xac3b0];
    if (0x22 < uVar23) {
      return;
    }
    if ((byte)PTR_DAT_04bc27f0[uVar23] < param_1[0xac3b1]) {
      return;
    }
    if ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) == 0) {
      return;
    }
    param_1 = param_1 + 0xbea2c;
    uVar13 = 9;
    uVar18 = 0;
    goto LAB_027e5bd4;
  }
  uVar13 = 0;
  iVar11 = 0;
  uVar15 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar23 = (ulong)param_1[(long)iVar11 * 0x13230];
    if (((uVar23 < 0x23) &&
        (bVar5 = (param_1 + (long)iVar11 * 0x13230)[1], bVar5 <= (byte)puVar3[uVar23])) &&
       ((*(uint *)(puVar8 + uVar23 * 4) >> (ulong)(bVar5 & 0x1f) & 1) != 0)) {
      uVar15 = uVar15 | 1 << (ulong)(uVar13 & 0x1f);
      if (*param_2 == 1) {
        pbVar4 = param_1 + (long)iVar11 * 0x13230 + 0x1267c;
        pcStack_78 = "EarlyOrLate";
        local_80 = puVar2;
        iVar10 = FUN_02749340(pbVar4,&local_80);
        if (iVar10 != 2) {
          local_90 = PTR_DAT_04bb2020 + 0x10;
          pcStack_88 = "EarlyOrLate";
          iVar10 = FUN_02749340(pbVar4,&local_90);
          if (iVar10 != 4) goto LAB_027e4c00;
        }
        local_80 = PTR_DAT_04bb2020 + 0x10;
        pcStack_78 = "EarlyOrLate";
        FUN_02749650(pbVar4,uVar13,&local_80,3,0);
      }
      else {
LAB_027e4c00:
        local_80 = PTR_DAT_04bb2020 + 0x10;
        pcStack_78 = "EarlyOrLate";
        FUN_02749650(param_1 + (long)iVar11 * 0x13230 + 0x1267c,uVar13,&local_80,0,0);
      }
    }
    uVar13 = uVar13 + 1;
    iVar11 = iVar11 + 1;
  } while (uVar13 != 10);
  if ((uVar25 & 1) == 0) {
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "BuiltTownOffice";
    uVar23 = FUN_0273f0a0(&local_80);
    if ((uVar23 & 1) == 0) goto LAB_027e4dc0;
    uVar13 = uVar15 - (uVar15 >> 1 & 0x55555555);
    uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
    uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
    uVar13 = uVar13 + (uVar13 >> 8);
    uVar14 = (uVar13 + (uVar13 >> 0x10) & 0x3f) * 10;
    if (0x4f < uVar14) {
      uVar14 = 0x50;
    }
  }
  else {
LAB_027e4dc0:
    uVar14 = 0;
  }
  if (DAT_05594b4c == '\x01') {
    uVar13 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar13 = uVar13 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar13 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    bVar1 = (uint)((ulong)uVar13 * 100 >> 0x20) < uVar14;
    DAT_05582b7c = uVar13;
LAB_027e5308:
    uVar13 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar21 = uVar13 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar13 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar21;
    if ((uVar15 & 1) != 0) goto LAB_027e5624;
LAB_027e533c:
    uVar12 = 0;
    if ((uVar15 >> 1 & 1) != 0) goto LAB_027e5344;
LAB_027e5678:
    local_a0 = 0;
    uVar13 = uVar12;
    uVar27 = uVar12;
    if ((uVar15 >> 2 & 1) == 0) goto LAB_027e5684;
LAB_027e53a4:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0x38adc,&local_80);
    local_a4 = iVar11 + uVar13;
    if (iVar11 < 2) {
      local_a4 = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar27 = iVar11 + uVar13;
    if (iVar11 < 2) {
      uVar27 = uVar13;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x38adc,2,&local_80,1,0);
    if ((uVar15 >> 3 & 1) != 0) goto LAB_027e5404;
LAB_027e568c:
    local_a8 = 0;
    if ((uVar15 >> 4 & 1) == 0) goto LAB_027e5694;
LAB_027e5464:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0x5ef3c,&local_80);
    local_ac = iVar11 + uVar27;
    if (iVar11 < 2) {
      local_ac = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar13 = iVar11 + uVar27;
    if (iVar11 < 2) {
      uVar13 = uVar27;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x5ef3c,4,&local_80,1,0);
    uVar27 = uVar13;
    if ((uVar15 >> 5 & 1) != 0) goto LAB_027e54c4;
LAB_027e569c:
    local_b0 = 0;
    if ((uVar15 >> 6 & 1) == 0) goto LAB_027e56a4;
LAB_027e5524:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0x8539c,&local_80);
    local_b4 = iVar11 + uVar27;
    if (iVar11 < 2) {
      local_b4 = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar13 = iVar11 + uVar27;
    if (iVar11 < 2) {
      uVar13 = uVar27;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x8539c,6,&local_80,1,0);
    uVar27 = uVar13;
    if ((uVar15 >> 7 & 1) != 0) goto LAB_027e5584;
LAB_027e56ac:
    local_b8 = 0;
  }
  else {
    uVar13 = nn::os::GetSystemTick();
    uVar21 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    uVar13 = uVar21 ^ uVar21 * 0x800;
    uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 2;
    uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 3;
    uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 4;
    bVar1 = (uint)((ulong)(uVar13 >> 8 ^ uVar21 >> 0x13 ^ uVar13 ^ uVar21) * 100 >> 0x20) < uVar14;
    if (DAT_05594b4c == '\x01') goto LAB_027e5308;
    uVar13 = nn::os::GetSystemTick();
    uVar21 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    uVar13 = uVar21 ^ uVar21 * 0x800;
    uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 2;
    uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 3;
    uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 4;
    uVar21 = uVar13 >> 8 ^ uVar21 >> 0x13 ^ uVar13 ^ uVar21;
    if ((uVar15 & 1) == 0) goto LAB_027e533c;
LAB_027e5624:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    uVar12 = FUN_02749340(param_1 + 0x1267c,&local_80);
    if ((int)uVar12 < 2) {
      uVar12 = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x1267c,0,&local_80,1,0);
    if ((uVar15 >> 1 & 1) == 0) goto LAB_027e5678;
LAB_027e5344:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0x258ac,&local_80);
    local_a0 = iVar11 + uVar12;
    if (iVar11 < 2) {
      local_a0 = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar13 = iVar11 + uVar12;
    if (iVar11 < 2) {
      uVar13 = uVar12;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x258ac,1,&local_80,1,0);
    uVar27 = uVar13;
    if ((uVar15 >> 2 & 1) != 0) goto LAB_027e53a4;
LAB_027e5684:
    local_a4 = 0;
    if ((uVar15 >> 3 & 1) == 0) goto LAB_027e568c;
LAB_027e5404:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0x4bd0c,&local_80);
    local_a8 = iVar11 + uVar27;
    if (iVar11 < 2) {
      local_a8 = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar13 = iVar11 + uVar27;
    if (iVar11 < 2) {
      uVar13 = uVar27;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x4bd0c,3,&local_80,1,0);
    uVar27 = uVar13;
    if ((uVar15 >> 4 & 1) != 0) goto LAB_027e5464;
LAB_027e5694:
    local_ac = 0;
    if ((uVar15 >> 5 & 1) == 0) goto LAB_027e569c;
LAB_027e54c4:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0x7216c,&local_80);
    local_b0 = iVar11 + uVar27;
    if (iVar11 < 2) {
      local_b0 = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar13 = iVar11 + uVar27;
    if (iVar11 < 2) {
      uVar13 = uVar27;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x7216c,5,&local_80,1,0);
    uVar27 = uVar13;
    if ((uVar15 >> 6 & 1) != 0) goto LAB_027e5524;
LAB_027e56a4:
    local_b4 = 0;
    if ((uVar15 >> 7 & 1) == 0) goto LAB_027e56ac;
LAB_027e5584:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0x985cc,&local_80);
    local_b8 = iVar11 + uVar27;
    if (iVar11 < 2) {
      local_b8 = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar13 = iVar11 + uVar27;
    if (iVar11 < 2) {
      uVar13 = uVar27;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0x985cc,7,&local_80,1,0);
    uVar27 = uVar13;
  }
  uVar28 = uVar27;
  if ((uVar15 >> 8 & 1) == 0) {
    local_bc = 0;
    if ((uVar15 >> 9 & 1) != 0) goto LAB_027e56c8;
LAB_027e5788:
    uVar15 = 0;
  }
  else {
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0xab7fc,&local_80);
    local_bc = iVar11 + uVar27;
    if (iVar11 < 2) {
      local_bc = 0;
    }
    pcStack_78 = "ContinuousNormalDay";
    uVar28 = iVar11 + uVar27;
    if (iVar11 < 2) {
      uVar28 = uVar27;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0xab7fc,8,&local_80,1,0);
    if ((uVar15 >> 9 & 1) == 0) goto LAB_027e5788;
LAB_027e56c8:
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "ContinuousNormalDay";
    local_80 = puVar3;
    iVar11 = FUN_02749340(param_1 + 0xbea2c,&local_80);
    uVar15 = iVar11 + uVar28;
    pcStack_78 = "ContinuousNormalDay";
    uVar13 = uVar15;
    if (iVar11 < 2) {
      uVar15 = 0;
      uVar13 = uVar28;
    }
    local_80 = puVar3;
    FUN_02749eb0(param_1 + 0xbea2c,9,&local_80,1,0);
    uVar28 = uVar13;
  }
  if (bVar1) {
    if (DAT_05594b4c == '\x01') {
      uVar13 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar13 = uVar13 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar13 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar13;
    }
    else {
      uVar13 = nn::os::GetSystemTick();
      uVar27 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = uVar27 ^ uVar27 * 0x800;
      uVar27 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 2;
      uVar27 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 3;
      uVar27 = (uVar27 ^ uVar27 >> 0x1e) * 0x6c078965 + 4;
      uVar13 = uVar13 >> 8 ^ uVar27 >> 0x13 ^ uVar13 ^ uVar27;
    }
    iVar11 = (int)((ulong)uVar13 * (ulong)uVar28 >> 0x20) - uVar12;
    if (iVar11 < 0) {
      uVar13 = 0;
    }
    else {
      iVar11 = iVar11 - local_a0;
      if (iVar11 < 0) {
        uVar13 = 1;
      }
      else {
        iVar11 = iVar11 - local_a4;
        if (iVar11 < 0) {
          uVar13 = 2;
        }
        else {
          iVar11 = iVar11 - local_a8;
          if (iVar11 < 0) {
            uVar13 = 3;
          }
          else {
            iVar11 = iVar11 - local_ac;
            if (iVar11 < 0) {
              uVar13 = 4;
            }
            else {
              iVar11 = iVar11 - local_b0;
              if (iVar11 < 0) {
                uVar13 = 5;
              }
              else {
                iVar11 = iVar11 - local_b4;
                if (iVar11 < 0) {
                  uVar13 = 6;
                }
                else {
                  iVar11 = iVar11 - local_b8;
                  if (iVar11 < 0) {
                    uVar13 = 7;
                  }
                  else {
                    uVar27 = iVar11 - local_bc;
                    if ((int)uVar27 < 0) {
                      uVar13 = 8;
                    }
                    else {
                      uVar13 = 9;
                      if (uVar15 <= uVar27) {
                        uVar13 = 0xffffffff;
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
  else {
    uVar13 = 0xffffffff;
  }
  if ((uint)((ulong)uVar21 * 100 >> 0x20) < uVar14) {
    if (DAT_05594b4c == '\x01') {
      uVar14 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar14 = uVar14 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar14 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar14;
    }
    else {
      uVar14 = nn::os::GetSystemTick();
      uVar21 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      uVar14 = uVar21 ^ uVar21 * 0x800;
      uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 2;
      uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 3;
      uVar21 = (uVar21 ^ uVar21 >> 0x1e) * 0x6c078965 + 4;
      uVar14 = uVar14 >> 8 ^ uVar21 >> 0x13 ^ uVar14 ^ uVar21;
    }
    iVar11 = (int)((ulong)uVar14 * (ulong)uVar28 >> 0x20) - uVar12;
    if (iVar11 < 0) {
      uVar14 = 0;
    }
    else {
      iVar11 = iVar11 - local_a0;
      if (iVar11 < 0) {
        uVar14 = 1;
      }
      else {
        iVar11 = iVar11 - local_a4;
        if (iVar11 < 0) {
          uVar14 = 2;
        }
        else {
          iVar11 = iVar11 - local_a8;
          if (iVar11 < 0) {
            uVar14 = 3;
          }
          else {
            iVar11 = iVar11 - local_ac;
            if (iVar11 < 0) {
              uVar14 = 4;
            }
            else {
              iVar11 = iVar11 - local_b0;
              if (iVar11 < 0) {
                uVar14 = 5;
              }
              else {
                iVar11 = iVar11 - local_b4;
                if (iVar11 < 0) {
                  uVar14 = 6;
                }
                else {
                  iVar11 = iVar11 - local_b8;
                  if (iVar11 < 0) {
                    uVar14 = 7;
                  }
                  else {
                    local_bc = iVar11 - local_bc;
                    if ((int)local_bc < 0) {
                      uVar14 = 8;
                    }
                    else {
                      uVar14 = 9;
                      if (uVar15 <= local_bc) {
                        uVar14 = 0xffffffff;
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
  else {
    uVar14 = 0xffffffff;
  }
  if (((int)uVar13 < 0) || (uVar13 != uVar14)) {
    if (-1 < (int)uVar13) goto LAB_027e5b74;
joined_r0x027e5b28:
    uVar13 = uVar14;
    if ((int)uVar13 < 0) {
      return;
    }
  }
  else {
    if (DAT_05594b4c == '\x01') {
      uVar15 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar15 = uVar15 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar15 ^ DAT_05582b7c;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar15;
    }
    else {
      uVar15 = nn::os::GetSystemTick();
      uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
      uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
      uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
      uVar15 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4 ^ uVar15 * 0x800 ^ uVar15;
    }
    if ((int)uVar15 < 0) {
      uVar14 = 0xffffffff;
LAB_027e5b74:
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_78 = "EarlyOrLate";
      FUN_02749650(param_1 + (ulong)uVar13 * 0x13230 + 0x1267c,uVar13,&local_80,1,0);
      goto joined_r0x027e5b28;
    }
  }
  uVar18 = 2;
  param_1 = param_1 + (ulong)uVar13 * 0x13230 + 0x1267c;
LAB_027e5bd4:
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "EarlyOrLate";
  FUN_02749650(param_1,uVar13,&local_80,uVar18,0);
  return;
}

