
/* WARNING: Type propagation algorithm not settling */

void FUN_028949e0(uint *param_1,long param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  void *pvVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined ***pppuVar21;
  undefined **ppuVar22;
  char cVar23;
  undefined2 uVar24;
  ulong *puVar25;
  uint *puVar26;
  undefined1 uVar27;
  long lVar28;
  ushort *puVar29;
  undefined1 uVar30;
  uint *puVar31;
  undefined4 uVar32;
  int *piVar33;
  uint extraout_w12;
  undefined2 *puVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  undefined **ppuVar38;
  undefined **ppuVar39;
  ulong uVar40;
  undefined8 uVar41;
  undefined2 *puVar42;
  long *plVar43;
  ulong uVar44;
  int iVar45;
  undefined **ppuVar46;
  ulong uVar47;
  uint *local_2d30;
  undefined8 local_2d28;
  undefined1 auStack_2d20 [1876];
  uint local_25cc;
  uint local_25c8;
  uint local_25c4;
  int local_25c0;
  undefined8 local_25b8;
  uint local_25b0;
  uint local_25ac;
  uint local_1e5c;
  uint local_1e58;
  uint local_1e54;
  int local_1e50;
  undefined8 local_1e48;
  undefined8 local_1e40;
  undefined **local_1e38;
  uint local_16ec;
  undefined *local_16e8;
  undefined4 local_16e0;
  uint local_16dc;
  uint *local_16d8;
  undefined8 local_16d0;
  undefined8 local_16c8;
  uint *local_16c0;
  uint local_f74;
  uint local_f70;
  uint local_f6c;
  int local_f68;
  undefined4 local_f60;
  uint local_f5c;
  undefined8 local_f58;
  uint local_f50;
  uint local_f4c;
  undefined8 local_f48;
  undefined8 local_f40;
  long local_f38;
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  int local_7e0;
  undefined **local_7d8;
  undefined **local_7d0;
  long local_7c8;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  puVar42 = (undefined2 *)((long)param_1 + 0x12ae);
  local_7d0 = (undefined **)0x4097ac6;
  ppuVar38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_7d8 = ppuVar38;
  uVar15 = FUN_0273f0a0(&local_7d8);
  uVar24 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar27 = PTR_DAT_04bb37e0[2];
  uVar30 = PTR_DAT_04bb37e0[3];
  uVar11 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  if ((uVar15 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x4b5) = uVar24;
    *(undefined1 *)((long)param_1 + 0x12d6) = uVar27;
    *(undefined1 *)((long)param_1 + 0x12d7) = uVar30;
    param_1[0x4b6] = uVar11;
    *(undefined2 *)(param_1 + 0x4b7) = uVar24;
    *(undefined1 *)((long)param_1 + 0x12de) = uVar27;
    *(undefined1 *)((long)param_1 + 0x12df) = uVar30;
    param_1[0x4b8] = uVar11;
    *(undefined2 *)(param_1 + 0x4b9) = uVar24;
    *(undefined1 *)((long)param_1 + 0x12e6) = uVar27;
    *(undefined1 *)((long)param_1 + 0x12e7) = uVar30;
    param_1[0x4ba] = uVar11;
  }
  *(undefined2 *)(param_1 + 0x4ab) = uVar24;
  *(undefined1 *)puVar42 = uVar27;
  *(undefined1 *)((long)param_1 + 0x12af) = uVar30;
  uVar44 = 0x33333333;
  param_1[0x4ac] = uVar11;
  ppuVar3 = (undefined **)(param_1 + 0x4ab);
  local_7d0 = (undefined **)0x40f054f;
  local_7d8 = ppuVar38;
  uVar15 = FUN_0273f0a0(&local_7d8);
  if ((uVar15 & 1) != 0) {
    puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar12 = puVar16[3];
    uVar11 = *puVar16 ^ *puVar16 << 0xb;
    *puVar16 = puVar16[1];
    puVar16[1] = puVar16[2];
    uVar13 = uVar11 ^ uVar12;
    uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar13;
    puVar16[2] = uVar12;
    puVar16[3] = uVar11;
    uVar11 = (uVar11 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
    local_25b8 = (undefined *)CONCAT44(uVar13,uVar11);
    local_25b0 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
    local_25ac = (local_25b0 ^ local_25b0 >> 0x1e) * 0x6c078965 + 4;
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    memcpy(&local_7d0,param_1 + 0x2d6,0x754);
    lVar17 = (*(code *)local_7d8[4])(&local_7d8);
    lVar28 = 0;
    iVar14 = 0;
    do {
      puVar16 = (uint *)(lVar17 + lVar28);
      lVar28 = lVar28 + 4;
      uVar11 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar14 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar14;
    } while (lVar28 != 0x754);
    if (iVar14 == 0) {
      local_f48 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_f40,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_7ec = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
      local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
      local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
      memcpy(&local_f40,param_1 + 0x101,0x754);
      lVar17 = (*(code *)local_f48[4])(&local_f48);
      lVar28 = 0;
      iVar14 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar11 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        iVar14 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar14;
      } while (lVar28 != 0x754);
      if (iVar14 != 0) {
        lVar17 = (*(code *)local_f48[4])(&local_f48);
        lVar28 = 0;
        iVar14 = 0;
        do {
          puVar16 = (uint *)(lVar17 + lVar28);
          lVar28 = lVar28 + 4;
          uVar11 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
          uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
          uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
          uVar11 = uVar11 + (uVar11 >> 8);
          iVar14 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar14;
        } while (lVar28 != 0x754);
        if (iVar14 == 0) {
          uVar24 = *(undefined2 *)PTR_DAT_04bb37e0;
          uVar27 = PTR_DAT_04bb37e0[2];
          uVar30 = PTR_DAT_04bb37e0[3];
          uVar32 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          local_2d28 = *(undefined ***)PTR_DAT_04bb37e0;
        }
        else {
          lVar17 = (*(code *)local_f48[4])(&local_f48);
          lVar28 = 0;
          uVar11 = 0;
          do {
            puVar16 = (uint *)(lVar17 + lVar28);
            lVar28 = lVar28 + 4;
            uVar13 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
            uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
            uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
            uVar13 = uVar13 + (uVar13 >> 8);
            uVar11 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar11;
          } while (lVar28 != 0x754);
          uVar13 = (uint)local_25b8 ^ (uint)local_25b8 << 0xb;
          local_25b8 = (undefined *)CONCAT44(local_25b0,local_25b8._4_4_);
          local_25b0 = local_25ac;
          local_25ac = uVar13 >> 8 ^ local_25ac >> 0x13 ^ uVar13 ^ local_25ac;
          FUN_00889f80(&local_2d28,&local_f48,(int)((ulong)local_25ac * (ulong)uVar11 >> 0x20) + 1);
          FUN_01a4c66c(&local_25b8,&local_2d28);
          uVar24 = (undefined2)local_2d28;
          uVar27 = local_2d28._2_1_;
          uVar30 = local_2d28._3_1_;
          uVar32 = local_2d28._4_4_;
        }
        puVar8 = PTR_DAT_04bb43c0;
        local_16c8._0_4_ = CONCAT13(uVar30,CONCAT12(uVar27,uVar24));
        local_16c8 = (undefined8 *)CONCAT44(uVar32,(undefined4)local_16c8);
        local_16d0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        local_16c0 = (uint *)0x0;
        lVar28 = *(long *)PTR_DAT_04bb43c0;
        uVar11 = FUN_0277d6c4(&local_16c8);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar28 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
            lVar28 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(&local_2d28);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar28 + 0x1d8)) &&
               (puVar16 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8),
               puVar16 != (uint *)0x0)) {
              local_16c0 = puVar16;
            }
          }
        }
        FUN_01ae2fa0(&local_1e40,&local_16d0);
        *(undefined2 *)(param_1 + 0x4ab) = (undefined2)local_1e40;
        *puVar42 = local_1e40._2_2_;
        param_1[0x4ac] = local_1e40._4_4_;
      }
    }
    else {
      lVar17 = (*(code *)local_7d8[4])(&local_7d8);
      lVar28 = 0;
      iVar14 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar11 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        iVar14 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar14;
      } while (lVar28 != 0x754);
      if (iVar14 == 0) {
        uVar24 = *(undefined2 *)PTR_DAT_04bb37e0;
        uVar27 = PTR_DAT_04bb37e0[2];
        uVar30 = PTR_DAT_04bb37e0[3];
        uVar32 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_16d0 = *(undefined ***)PTR_DAT_04bb37e0;
      }
      else {
        lVar17 = (*(code *)local_7d8[4])(&local_7d8);
        lVar28 = 0;
        uVar11 = 0;
        do {
          puVar16 = (uint *)(lVar17 + lVar28);
          lVar28 = lVar28 + 4;
          uVar13 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
          uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
          uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
          uVar13 = uVar13 + (uVar13 >> 8);
          uVar11 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar11;
        } while (lVar28 != 0x754);
        uVar13 = (uint)local_25b8 ^ (uint)local_25b8 << 0xb;
        local_25b8 = (undefined *)CONCAT44(local_25b0,local_25b8._4_4_);
        local_25b0 = local_25ac;
        local_25ac = uVar13 >> 8 ^ local_25ac >> 0x13 ^ uVar13 ^ local_25ac;
        FUN_00889f80(&local_16d0,&local_7d8,(int)((ulong)local_25ac * (ulong)uVar11 >> 0x20) + 1);
        FUN_01a4c66c(&local_25b8,&local_16d0);
        uVar32 = local_16d0._4_4_;
        uVar27 = local_16d0._2_1_;
        uVar30 = local_16d0._3_1_;
        uVar24 = (undefined2)local_16d0;
      }
      puVar8 = PTR_DAT_04bb43c0;
      local_f48 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_f40 = (char *)CONCAT44(uVar32,CONCAT13(uVar30,CONCAT12(uVar27,uVar24)));
      local_f38 = 0;
      lVar28 = *(long *)PTR_DAT_04bb43c0;
      uVar11 = FUN_0277d6c4(&local_f40);
      if (*(long *)puVar8 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar28 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(&local_16d0);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar28 + 0x1d8)) &&
             (lVar28 = *(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8), lVar28 != 0)) {
            local_f38 = lVar28;
          }
        }
      }
      FUN_01ae2fa0(&local_2d28,&local_f48);
      *(undefined2 *)(param_1 + 0x4ab) = (undefined2)local_2d28;
      *puVar42 = local_2d28._2_2_;
      param_1[0x4ac] = local_2d28._4_4_;
      lVar17 = (*(code *)local_7d8[4])(&local_7d8);
      lVar28 = 0;
      iVar14 = 0;
      do {
        iVar45 = iVar14;
        puVar16 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar11 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        uVar11 = uVar11 + (uVar11 >> 0x10);
        iVar14 = (uVar11 & 0x3f) + iVar45;
      } while (lVar28 != 0x754);
      if (iVar14 != 0) {
        iVar14 = 0;
        do {
          iVar14 = iVar14 + 1;
          FUN_00889f80(&local_f48,&local_7d8,iVar14);
          FUN_02779e74(param_1 + 0x101,&local_f48,0);
        } while (iVar45 + (uVar11 & 0x3f) != iVar14);
      }
    }
  }
  memset(param_1 + 0x2d6,0,0x754);
  uVar11 = 0;
  uVar24 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar27 = PTR_DAT_04bb37e0[2];
  uVar30 = PTR_DAT_04bb37e0[3];
  uVar32 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  do {
    uVar15 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar34 = (undefined2 *)((long)param_1 + ((long)(uVar15 << 0x20) >> 0x1d) + 4);
    *puVar34 = uVar24;
    *(undefined1 *)(puVar34 + 1) = uVar27;
    *(undefined1 *)((long)puVar34 + 3) = uVar30;
    *(undefined4 *)(puVar34 + 2) = uVar32;
  } while (uVar11 != 0x80);
  if (*(short *)ppuVar3 != -2) {
    FUN_0288f130(param_1,ppuVar3);
  }
  local_1e48._4_4_ = *param_1;
  local_1e48._0_1_ = 0;
  if (2 < local_1e48._4_4_) {
    local_1e48._4_4_ = 0;
  }
  puVar1 = (ulong *)(param_2 + 0x10);
  FUN_01b02920(&local_1e48,puVar1,0);
  local_25b8 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_25b0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_1e5c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_1e58 = (local_1e5c ^ local_1e5c >> 0x1e) * 0x6c078965 + 2;
  local_1e54 = (local_1e58 ^ local_1e58 >> 0x1e) * 0x6c078965 + 3;
  local_1e50 = (local_1e54 ^ local_1e54 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(**(code **)(local_25b8 + 0x18))(&local_25b8);
  memset(pvVar18,0,0x754);
  local_f48 = (undefined **)CONCAT44(local_f48._4_4_,0x4f);
  ppuVar38 = (undefined **)&local_f48;
  local_7d8 = &PTR_FUN_049ff4e8;
  local_7d0 = ppuVar38;
  FUN_008a1ba0(&local_25b8,&local_7d8);
  ppuVar39 = ppuVar3;
  if (1 < (int)local_1e48._4_4_) {
    local_f48 = (undefined **)CONCAT44(local_f48._4_4_,0x50);
    local_7d8 = &PTR_FUN_049ff4e8;
    local_7d0 = ppuVar38;
    FUN_008a1ba0(&local_25b8,&local_7d8);
    puVar42 = (undefined2 *)0x0;
    local_2d30 = param_1 + 0x4af;
    ppuVar39 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    bVar10 = true;
    do {
      bVar6 = bVar10;
      uVar19 = FUN_0289c060(param_1,puVar42);
      uVar40 = uVar19 & 0xffffffff;
      uVar15 = 0;
      while( true ) {
        uVar44 = uVar15;
        FUN_0297ac30(&local_7d8,uVar19,uVar40,uVar44);
        puVar8 = PTR_DAT_04bb43c0;
        lVar28 = *(long *)PTR_DAT_04bb43c0;
        uVar19 = FUN_0277d6c4(&local_7d8);
        iVar14 = (int)uVar44;
        if (*(long *)puVar8 == 0) break;
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar11 = ((uint)uVar19 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((*(uint *)(lVar28 + 0x1d8) <= uVar11) ||
           (uVar15 = (ulong)(iVar14 + 1),
           *(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) break;
      }
      if (iVar14 != 0) {
        iVar45 = 0;
LAB_0289551c:
        puVar25 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*(short *)puVar25 == 0) {
          local_f48 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)((ulong)local_f48 >> 0x20) < '\x05') {
            lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_f48);
            local_7d8 = (undefined **)(lVar28 + -0x15180);
            local_f48 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7d8);
          }
          uVar15 = (ulong)local_f48 >> 0x30;
          local_f48._0_6_ = CONCAT24(5,(undefined4)local_f48);
          local_f48 = (undefined **)
                      (CONCAT26((short)uVar15,(undefined6)local_f48) & 0xff00ffffffffffff);
          puVar25 = &local_f48;
        }
        ppuVar46 = (undefined **)*puVar25;
        ppuVar38 = (undefined **)&local_16d0;
        uVar47 = (ulong)ppuVar46 >> 0x10;
        uVar40 = (ulong)ppuVar46 >> 0x18;
        ppuVar22 = (undefined **)((ulong)ppuVar46 & 0xffffffff);
        uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
        cVar23 = (char)((ulong)ppuVar46 >> 0x20);
        uVar19 = uVar40 & 0xffffffff;
        uVar15 = uVar47 & 0xffffffff;
        local_7d0 = (undefined **)0x40f9046;
        local_16d0 = ppuVar46;
        local_7d8 = ppuVar39;
        if (cVar23 < '\x05') {
          lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
          local_f48 = (undefined **)(lVar28 + -0x15180);
          ppuVar22 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
          uVar15 = (ulong)ppuVar22 >> 0x10;
          uVar19 = (ulong)ppuVar22 >> 0x18;
          local_16d0 = ppuVar22;
        }
        uVar7 = (ulong)local_16d0 >> 0x30;
        local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
        local_16d0 = (undefined **)(CONCAT26((short)uVar7,(uint6)local_16d0) & 0xff00ffffffffffff);
        uVar15 = FUN_00879dd0(uVar41,&local_7d8,ppuVar22,uVar15,uVar19,0);
        if ((uVar15 & 1) != 0) {
          lVar28 = *(long *)PTR_DAT_04bb4700;
          uVar11 = *(uint *)(lVar28 + 1000);
          uVar13 = uVar11;
          if ((0 < (int)uVar11) ||
             (((*(long *)(lVar28 + 0x2d8) != 0 &&
               (puVar16 = *(uint **)(*(long *)(lVar28 + 0x2d8) + 8), puVar16 != (uint *)0x0)) &&
              (uVar13 = *puVar16, uVar13 != 0)))) {
            uVar12 = 0;
            puVar34 = (undefined2 *)0x0;
            do {
              if ((int)uVar11 < 1) {
                if (((((*(long *)(lVar28 + 0x2d8) != 0) &&
                      (puVar16 = *(uint **)(*(long *)(lVar28 + 0x2d8) + 8), puVar16 != (uint *)0x0))
                     && ((*(uint *)(lVar28 + 0x2f0) <= uVar12 ||
                         (*(char *)(*(long *)(lVar28 + 0x2f8) + (long)(int)uVar12) != '\0')))) &&
                    ((uVar12 < *puVar16 && (puVar16[1] != 0)))) && ((ushort)puVar16[2] != 0)) {
                  iVar37 = 0xc;
                  if (*(char *)((long)puVar16 + 10) != '\0') {
                    iVar37 = 0x1c;
                  }
                  puVar16 = (uint *)((ulong)(puVar16[1] * uVar12 + (uint)(ushort)puVar16[2] * 8 +
                                            iVar37) + (long)puVar16);
                  goto joined_r0x02895748;
                }
              }
              else if (uVar12 < uVar11) {
                uVar35 = uVar12;
                if (*(uint *)(lVar28 + 0x3d8) <= uVar12) {
                  uVar35 = 0;
                }
                puVar16 = *(uint **)(*(long *)(lVar28 + 0x3e0) + (ulong)uVar35 * 8);
joined_r0x02895748:
                if (puVar16 != (uint *)0x0) {
                  uVar35 = *puVar16;
                  if (uVar35 == 0 || puVar16 == (uint *)(ulong)uVar35) {
LAB_028956b4:
                    uVar35 = 0;
                  }
                  else {
                    puVar26 = (uint *)((long)puVar16 - (long)(ulong)uVar35);
                    uVar35 = 0;
                    if (*puVar26 != 0) {
                      uVar35 = puVar26[1];
                      if ((uVar35 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                        lVar17 = 0xc;
                        if (*(char *)((long)puVar26 + 10) != '\0') {
                          lVar17 = 0x1c;
                        }
                        lVar17 = (long)puVar26 + lVar17 + (ulong)(ushort)puVar26[2] * 8;
                        if (lVar17 != 0) {
                          uVar36 = 0;
                          if ((ulong)uVar35 != 0) {
                            uVar36 = (uint)((ulong)((long)puVar16 - lVar17) / (ulong)uVar35);
                          }
                          if (*puVar26 <= uVar36) {
                            uVar36 = 0xffffffff;
                          }
                          if ((uVar36 < *(uint *)PTR_DAT_04bc38a0) &&
                             (uVar35 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc38a0 + 8) +
                                              (long)(int)uVar36 * 2), uVar35 < 3))
                          goto LAB_028956b8;
                        }
                      }
                      goto LAB_028956b4;
                    }
                  }
LAB_028956b8:
                  local_7d8 = (undefined **)CONCAT44(local_7d8._4_4_,uVar35);
                  if (uVar35 == 1) {
                    if (puVar42 == puVar34) {
                      uVar11 = *puVar16;
                      if (uVar11 != 0) {
                        cVar23 = *PTR_DAT_04bc38a8;
                        goto LAB_02895b98;
                      }
                      uVar11 = 0;
                      goto LAB_02895a18;
                    }
                    puVar34 = (undefined2 *)(ulong)((int)puVar34 + 1);
                  }
                }
              }
              uVar12 = uVar12 + 1;
            } while (uVar13 != uVar12);
          }
        }
        uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_7d0 = (undefined **)0x40e90fb;
        local_16d0 = ppuVar46;
        if (cVar23 < '\x05') {
          lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
          local_f48 = (undefined **)(lVar28 + -0x15180);
          local_16d0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
          ppuVar46 = (undefined **)((ulong)local_16d0 & 0xffffffff);
          uVar47 = (ulong)local_16d0 >> 0x10;
          uVar40 = (ulong)local_16d0 >> 0x18;
        }
        ppuVar22 = local_16d0;
        local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
        local_16d0._7_1_ = SUB81(ppuVar22,7);
        local_16d0._0_7_ = (uint7)(uint6)local_16d0;
        uVar15 = FUN_00879dd0(uVar41,&local_7d8,(ulong)ppuVar46 & 0xffffffff,uVar47 & 0xffffffff,
                              uVar40 & 0xffffffff,0);
        lVar28 = *(long *)PTR_DAT_04bb4700;
        if (((uVar15 & 1) != 0) &&
           ((uVar11 = *(uint *)(lVar28 + 1000), uVar13 = uVar11, 0 < (int)uVar11 ||
            (((*(long *)(lVar28 + 0x2d8) != 0 &&
              (puVar16 = *(uint **)(*(long *)(lVar28 + 0x2d8) + 8), puVar16 != (uint *)0x0)) &&
             (uVar13 = *puVar16, uVar13 != 0)))))) {
          uVar35 = 0;
          uVar12 = 0;
          do {
            if ((int)uVar11 < 1) {
              if ((((*(long *)(lVar28 + 0x2d8) != 0) &&
                   (puVar16 = *(uint **)(*(long *)(lVar28 + 0x2d8) + 8), puVar16 != (uint *)0x0)) &&
                  ((*(uint *)(lVar28 + 0x2f0) <= uVar35 ||
                   (*(char *)(*(long *)(lVar28 + 0x2f8) + (long)(int)uVar35) != '\0')))) &&
                 (((uVar35 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
                iVar37 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  iVar37 = 0x1c;
                }
                puVar16 = (uint *)((ulong)(puVar16[1] * uVar35 + (uint)(ushort)puVar16[2] * 8 +
                                          iVar37) + (long)puVar16);
                goto joined_r0x02895988;
              }
            }
            else if (uVar35 < uVar11) {
              uVar36 = uVar35;
              if (*(uint *)(lVar28 + 0x3d8) <= uVar35) {
                uVar36 = 0;
              }
              puVar16 = *(uint **)(*(long *)(lVar28 + 0x3e0) + (ulong)uVar36 * 8);
joined_r0x02895988:
              if (puVar16 != (uint *)0x0) {
                uVar36 = *puVar16;
                if (uVar36 == 0 || puVar16 == (uint *)(ulong)uVar36) {
LAB_028958f8:
                  uVar36 = 0;
                }
                else {
                  puVar26 = (uint *)((long)puVar16 - (long)(ulong)uVar36);
                  uVar36 = 0;
                  if (*puVar26 != 0) {
                    uVar36 = puVar26[1];
                    if ((uVar36 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar26 + 10) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar26 + lVar17 + (ulong)(ushort)puVar26[2] * 8;
                      if (lVar17 != 0) {
                        uVar5 = 0;
                        if ((ulong)uVar36 != 0) {
                          uVar5 = (uint)((ulong)((long)puVar16 - lVar17) / (ulong)uVar36);
                        }
                        if (*puVar26 <= uVar5) {
                          uVar5 = 0xffffffff;
                        }
                        if ((uVar5 < *(uint *)PTR_DAT_04bc38a0) &&
                           (uVar36 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc38a0 + 8) + (long)(int)uVar5 * 2)
                           , uVar36 < 3)) goto LAB_028958fc;
                      }
                    }
                    goto LAB_028958f8;
                  }
                }
LAB_028958fc:
                local_7d8 = (undefined **)CONCAT44(local_7d8._4_4_,uVar36);
                if (uVar36 == 2) {
                  if (puVar42 == (undefined2 *)(ulong)uVar12) {
                    uVar11 = *puVar16;
                    if (uVar11 == 0) goto LAB_02895da4;
                    cVar23 = *PTR_DAT_04bc38a8;
                    goto LAB_02895c98;
                  }
                  uVar12 = uVar12 + 1;
                }
              }
            }
            uVar35 = uVar35 + 1;
          } while (uVar13 != uVar35);
        }
        uVar11 = local_2d30[(long)puVar42];
        goto LAB_02895a18;
      }
LAB_02895460:
      puVar42 = (undefined2 *)0x1;
      bVar10 = false;
    } while (bVar6);
  }
  plVar43 = &local_16d0;
  uVar11 = *param_1;
  if (2 < uVar11) {
    uVar11 = 0;
  }
  local_1e40 = (undefined **)CONCAT44(local_1e40._4_4_,uVar11);
  uVar15 = *(ulong *)PTR_DAT_04bb32f0;
  if ((int)uVar11 < 2) {
    local_7d0 = (undefined **)0x40da524;
    local_16d0 = (undefined **)*puVar1;
    local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    if ((char)((ulong)local_16d0 >> 0x20) < '\x05') {
      lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
      local_f48 = (undefined **)(lVar28 + -0x15180);
      local_16d0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
    }
    ppuVar38 = local_16d0;
    uVar44 = (ulong)local_16d0 >> 0x30;
    local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
    local_16d0 = (undefined **)(CONCAT26((short)uVar44,(uint6)local_16d0) & 0xff00ffffffffffff);
    uVar15 = FUN_00879dd0(uVar15,&local_7d8,ppuVar38,(ulong)ppuVar38 >> 0x10,(ulong)ppuVar38 >> 0x18
                          ,0);
    if ((uVar15 & 1) == 0) {
      uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_7d0 = (undefined **)0x4071ba4;
      local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_16d0 = (undefined **)*puVar1;
      if ((char)((ulong)local_16d0 >> 0x20) < '\x05') {
        lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
        local_f48 = (undefined **)(lVar28 + -0x15180);
        local_16d0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
      }
      ppuVar38 = local_16d0;
      uVar15 = (ulong)local_16d0 >> 0x30;
      local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
      local_16d0 = (undefined **)(CONCAT26((short)uVar15,(uint6)local_16d0) & 0xff00ffffffffffff);
      uVar15 = FUN_00879dd0(uVar41,&local_7d8,ppuVar38,(ulong)ppuVar38 >> 0x10,
                            (ulong)ppuVar38 >> 0x18,0);
      if ((uVar15 & 1) == 0) goto LAB_02896a1c;
      local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_7d0,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      pvVar18 = (void *)FUN_01a451fc(&local_7d8);
      memset(pvVar18,0,0x754);
      local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0x29f);
      local_f48 = &PTR_FUN_049ff858;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar11 = *puVar16 ^ *puVar16 << 0xb;
      uVar12 = puVar16[3];
      *puVar16 = puVar16[1];
      puVar16[1] = puVar16[2];
      uVar13 = uVar11 ^ uVar12;
      uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar13;
      puVar16[2] = uVar12;
      puVar16[3] = uVar11;
      uVar11 = (uVar11 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      local_f48 = (undefined **)CONCAT44(uVar13,uVar11);
      uVar12 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
      uVar35 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
      local_f40 = (char *)CONCAT44(uVar35,uVar12);
      lVar17 = (*(code *)local_7d8[4])(&local_7d8);
      lVar28 = 0;
      iVar14 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar36 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar36 = (uVar36 >> 2 & 0x33333333) + (uVar36 & 0x33333333);
        uVar36 = uVar36 + (uVar36 >> 4) & 0xf0f0f0f;
        uVar36 = uVar36 + (uVar36 >> 8);
        iVar14 = (uVar36 + (uVar36 >> 0x10) & 0x3f) + iVar14;
      } while (lVar28 != 0x754);
      if (iVar14 == 0) {
        local_16d0 = *(undefined ***)PTR_DAT_04bb37e0;
      }
      else {
        lVar17 = (*(code *)local_7d8[4])(&local_7d8);
        lVar28 = 0;
        uVar36 = 0;
        do {
          puVar16 = (uint *)(lVar17 + lVar28);
          lVar28 = lVar28 + 4;
          uVar5 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar36 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar36;
        } while (lVar28 != 0x754);
        uVar11 = uVar11 ^ uVar11 * 0x800;
        local_f48 = (undefined **)CONCAT44(uVar12,uVar13);
        uVar11 = uVar11 >> 8 ^ uVar35 >> 0x13 ^ uVar11 ^ uVar35;
        local_f40 = (char *)CONCAT44(uVar11,uVar35);
        FUN_00889f80(&local_16d0,&local_7d8,(int)((ulong)uVar36 * (ulong)uVar11 >> 0x20) + 1);
        FUN_01a4c66c(&local_f48,&local_16d0);
      }
      FUN_0288f130(param_1,&local_16d0);
      local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_7d0,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      pvVar18 = (void *)FUN_01a451fc(&local_7d8);
      memset(pvVar18,0,0x754);
      local_f48 = &PTR_FUN_049ff858;
      local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0x27f);
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar11 = *puVar16 ^ *puVar16 << 0xb;
      uVar12 = puVar16[3];
      *puVar16 = puVar16[1];
      puVar16[1] = puVar16[2];
      uVar13 = uVar11 ^ uVar12;
      uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar13;
      puVar16[2] = uVar12;
      puVar16[3] = uVar11;
      uVar11 = (uVar11 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      local_f48 = (undefined **)CONCAT44(uVar13,uVar11);
      uVar12 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
      uVar35 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
      local_f40 = (char *)CONCAT44(uVar35,uVar12);
      lVar17 = (*(code *)local_7d8[4])(&local_7d8);
      lVar28 = 0;
      iVar14 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar36 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar36 = (uVar36 >> 2 & 0x33333333) + (uVar36 & 0x33333333);
        uVar36 = uVar36 + (uVar36 >> 4) & 0xf0f0f0f;
        uVar36 = uVar36 + (uVar36 >> 8);
        iVar14 = (uVar36 + (uVar36 >> 0x10) & 0x3f) + iVar14;
      } while (lVar28 != 0x754);
      if (iVar14 == 0) goto LAB_028969f8;
      lVar17 = (*(code *)local_7d8[4])(&local_7d8);
      lVar28 = 0;
      uVar36 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar5 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        uVar36 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar36;
      } while (lVar28 != 0x754);
LAB_0289699c:
      uVar11 = uVar11 ^ uVar11 << 0xb;
      local_f48 = (undefined **)CONCAT44(uVar12,uVar13);
      uVar11 = uVar11 >> 8 ^ uVar35 >> 0x13 ^ uVar11 ^ uVar35;
      local_f40 = (char *)CONCAT44(uVar11,uVar35);
      FUN_00889f80(&local_16d0,&local_7d8,(int)((ulong)uVar36 * (ulong)uVar11 >> 0x20) + 1);
      FUN_01a4c66c(&local_f48,&local_16d0);
    }
    else {
      local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_7d0,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      pvVar18 = (void *)FUN_01a451fc(&local_7d8);
      memset(pvVar18,0,0x754);
      local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0x29f);
      local_f48 = &PTR_FUN_049ff858;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar11 = *puVar16 ^ *puVar16 << 0xb;
      uVar12 = puVar16[3];
      *puVar16 = puVar16[1];
      puVar16[1] = puVar16[2];
      uVar13 = uVar11 ^ uVar12;
      uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar13;
      puVar16[2] = uVar12;
      puVar16[3] = uVar11;
      uVar11 = (uVar11 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      local_f48 = (undefined **)CONCAT44(uVar13,uVar11);
      uVar12 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
      uVar35 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
      local_f40 = (char *)CONCAT44(uVar35,uVar12);
      lVar17 = (*(code *)local_7d8[4])(&local_7d8);
      lVar28 = 0;
      iVar14 = 0;
      do {
        puVar16 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar36 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
        uVar36 = (uVar36 >> 2 & 0x33333333) + (uVar36 & 0x33333333);
        uVar36 = uVar36 + (uVar36 >> 4) & 0xf0f0f0f;
        uVar36 = uVar36 + (uVar36 >> 8);
        iVar14 = (uVar36 + (uVar36 >> 0x10) & 0x3f) + iVar14;
      } while (lVar28 != 0x754);
      if (iVar14 != 0) {
        lVar17 = (*(code *)local_7d8[4])(&local_7d8);
        lVar28 = 0;
        uVar36 = 0;
        do {
          puVar16 = (uint *)(lVar17 + lVar28);
          lVar28 = lVar28 + 4;
          uVar5 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar36 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar36;
        } while (lVar28 != 0x754);
        goto LAB_0289699c;
      }
LAB_028969f8:
      local_16d0 = *(undefined ***)PTR_DAT_04bb37e0;
    }
    pppuVar21 = (undefined ***)&local_16d0;
LAB_02896a14:
    FUN_0288f130(param_1,pppuVar21);
  }
  else {
    local_7d0 = (undefined **)0x40da524;
    local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_16d0 = (undefined **)*puVar1;
    if ((char)((ulong)local_16d0 >> 0x20) < '\x05') {
      lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
      local_f48 = (undefined **)(lVar28 + -0x15180);
      local_16d0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
    }
    ppuVar2 = local_16d0;
    uVar19 = (ulong)local_16d0 >> 0x30;
    local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
    local_16d0 = (undefined **)(CONCAT26((short)uVar19,(uint6)local_16d0) & 0xff00ffffffffffff);
    uVar19 = FUN_00879dd0(uVar15,&local_7d8,ppuVar2,(ulong)ppuVar2 >> 0x10,(ulong)ppuVar2 >> 0x18,0)
    ;
    if ((uVar19 & 1) != 0) {
      uVar11 = nn::os::GetSystemTick();
      uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
      if ((int)((uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4 ^ uVar11 * 0x800 ^ uVar11) < 0) {
switchD_02896518_caseD_1:
        local_7d8 = (undefined **)0xc61;
      }
      else {
switchD_02896518_caseD_0:
        local_7d8 = (undefined **)0x1506;
      }
      goto LAB_0289677c;
    }
    puVar16 = *(uint **)PTR_DAT_04bb32f0;
    local_7d0 = (undefined **)0x4071ba4;
    local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_16d0 = (undefined **)*puVar1;
    if ((char)((ulong)local_16d0 >> 0x20) < '\x05') {
      lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
      local_f48 = (undefined **)(lVar28 + -0x15180);
      local_16d0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
    }
    ppuVar2 = local_16d0;
    uVar19 = (ulong)local_16d0 >> 0x30;
    local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
    local_16d0 = (undefined **)(CONCAT26((short)uVar19,(uint6)local_16d0) & 0xff00ffffffffffff);
    uVar19 = FUN_00879dd0(puVar16,&local_7d8,ppuVar2,(ulong)ppuVar2 >> 0x10,(ulong)ppuVar2 >> 0x18,0
                         );
    if ((uVar19 & 1) == 0) {
      uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_7d0 = (undefined **)0x40f9046;
      local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_16d0 = (undefined **)*puVar1;
      if ((char)((ulong)local_16d0 >> 0x20) < '\x05') {
        lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
        local_f48 = (undefined **)(lVar28 + -0x15180);
        local_16d0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
      }
      ppuVar38 = local_16d0;
      uVar15 = (ulong)local_16d0 >> 0x30;
      local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
      local_16d0 = (undefined **)(CONCAT26((short)uVar15,(uint6)local_16d0) & 0xff00ffffffffffff);
      uVar15 = FUN_00879dd0(uVar41,&local_7d8,ppuVar38,(ulong)ppuVar38 >> 0x10,
                            (ulong)ppuVar38 >> 0x18,0);
      if ((uVar15 & 1) == 0) {
        uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_f40 = "XmasAfter";
        local_f48 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_2d28 = (undefined **)*puVar1;
        if ((char)((ulong)local_2d28 >> 0x20) < '\x05') {
          lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_2d28);
          local_16d0 = (undefined **)(lVar28 + -0x15180);
          local_2d28 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_16d0);
        }
        uVar44 = (ulong)local_2d28;
        uVar15 = (ulong)local_2d28 >> 0x30;
        local_2d28._0_6_ = CONCAT24(5,(undefined4)local_2d28);
        local_2d28 = (undefined **)
                     (CONCAT26((short)uVar15,(undefined6)local_2d28) & 0xff00ffffffffffff);
        uVar15 = FUN_00879dd0(uVar41,&local_f48,uVar44,uVar44 >> 0x10,uVar44 >> 0x18,0);
        if ((uVar15 & 1) == 0) goto LAB_02896a1c;
      }
      local_7d8 = (undefined **)0x1506;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
      local_7d8 = (undefined **)0xc61;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
      local_7d8 = (undefined **)0xd3e;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
      local_7d8 = (undefined **)0xd3f;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
      local_7d8 = (undefined **)0x118c;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
      local_7d8 = (undefined **)0x14ba;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
      local_7d8 = (undefined **)0xc3f;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
switchD_02896518_caseD_4:
      local_7d8 = (undefined **)0x119f;
      FUN_0277d4ac(&local_7d8);
      FUN_0288f130(param_1,&local_7d8);
      local_7d8 = (undefined **)0x1546;
      goto LAB_0289677c;
    }
    puVar20 = (undefined8 *)nn::os::GetSystemTick();
    uVar13 = ((uint)puVar20 ^ (uint)puVar20 >> 0x1e) * 0x6c078965 + 1;
    uVar11 = uVar13 ^ uVar13 * 0x800;
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4;
    uVar19 = (ulong)(uVar11 >> 8 ^ uVar13 >> 0x13 ^ uVar11 ^ uVar13) * 5;
    uVar40 = uVar19 >> 0x20;
    uVar11 = (uint)(uVar19 >> 0x20);
    bVar10 = 3 < uVar11;
    if (uVar11 < 5) {
      puVar29 = &switchD_02896518::switchdataD_0417bc58;
      uVar11 = 0x417bc58;
      puVar26 = param_1;
      local_f4c = extraout_w12;
      switch(uVar40) {
      case 0:
        goto switchD_02896518_caseD_0;
      case 1:
        goto switchD_02896518_caseD_1;
      case 2:
        local_7d8 = (undefined **)0xd3e;
        FUN_0277d4ac(&local_7d8);
        FUN_0288f130(param_1,&local_7d8);
        local_7d8 = (undefined **)0xd3f;
        FUN_0277d4ac(&local_7d8);
        FUN_0288f130(param_1,&local_7d8);
        local_7d8 = (undefined **)0x118c;
        FUN_0277d4ac(&local_7d8);
        FUN_0288f130(param_1,&local_7d8);
        local_7d8 = (undefined **)0x14ba;
        break;
      case 3:
        local_7d8 = (undefined **)0x14ba;
        FUN_0277d4ac(&local_7d8);
        FUN_0288f130(param_1,&local_7d8);
        local_7d8 = (undefined **)0xc3f;
        break;
      case 4:
        goto switchD_02896518_caseD_4;
      case 5:
        goto switchD_02896518_caseD_5;
      case 6:
        goto switchD_02896518_caseD_6;
      case 7:
        goto switchD_02896518_caseD_7;
      }
LAB_0289677c:
      FUN_0277d4ac(&local_7d8);
      pppuVar21 = &local_7d8;
      goto LAB_02896a14;
    }
  }
LAB_02896a1c:
  uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_7d0 = (undefined **)0x40d4383;
  local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_16d0 = (undefined **)*puVar1;
  if ((char)((ulong)local_16d0 >> 0x20) < '\x05') {
    lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_16d0);
    local_f48 = (undefined **)(lVar28 + -0x15180);
    local_16d0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
  }
  ppuVar38 = local_16d0;
  local_16d0._0_6_ = CONCAT24(5,(undefined4)local_16d0);
  local_16d0._7_1_ = SUB81(ppuVar38,7);
  local_16d0._0_7_ = (uint7)(uint6)local_16d0;
  uVar15 = FUN_00879dd0(uVar41,&local_7d8,ppuVar38,(ulong)ppuVar38 >> 0x10,(ulong)ppuVar38 >> 0x18,0
                       );
  if ((uVar15 & 1) == 0) {
    if (*(char *)(param_2 + 0x12) == '\n') {
      local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_7d0,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
      memset(pvVar18,0,0x754);
      local_f48 = &PTR_FUN_049ff448;
      local_16d0._0_4_ = 9;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      local_16d0._0_4_ = 10;
      local_f48 = &PTR_FUN_049ff448;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      local_16d0._0_4_ = 0xd;
      local_f48 = &PTR_FUN_049ff448;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      local_16d0._0_4_ = 0x12;
      local_f48 = &PTR_FUN_049ff448;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      local_f48 = &PTR_FUN_049ff448;
      local_16d0._0_4_ = 0x10;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      local_f48 = &PTR_FUN_049ff448;
      local_16d0._0_4_ = 0x11;
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      local_f48 = &PTR_FUN_049ff448;
      local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0xf);
      local_f40 = (char *)&local_16d0;
      FUN_008a1ba0(&local_7d8,&local_f48);
      uVar32 = 0xe;
      goto LAB_02896e14;
    }
    local_f48 = (undefined **)CONCAT44(local_f48._4_4_,0x53);
    local_7d8 = &PTR_FUN_049ff4e8;
    local_7d0 = (undefined **)&local_f48;
    FUN_008a1ba0(&local_25b8,&local_7d8);
    if (1 < (int)local_1e48._4_4_) {
      local_f48 = (undefined **)CONCAT44(local_f48._4_4_,0x54);
      local_7d8 = &PTR_FUN_049ff4e8;
      local_7d0 = (undefined **)&local_f48;
      FUN_008a1ba0(&local_25b8,&local_7d8);
    }
  }
  else {
    ppuVar38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    local_7d8 = ppuVar38;
    memset(&local_7d0,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    memset(pvVar18,0,0x754);
    local_16d0._0_4_ = 10;
    local_f48 = &PTR_FUN_049ff448;
    local_f40 = (char *)&local_16d0;
    FUN_008a1ba0(&local_7d8,&local_f48);
    FUN_02890840(param_1,&local_7d8);
    local_7d8 = ppuVar38;
    memset(&local_7d0,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    memset(pvVar18,0,0x754);
    local_f48 = &PTR_FUN_049ff448;
    local_16d0._0_4_ = 0x12;
    local_f40 = (char *)&local_16d0;
    FUN_008a1ba0(&local_7d8,&local_f48);
    local_f48 = &PTR_FUN_049ff448;
    local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0x10);
    local_f40 = (char *)&local_16d0;
    FUN_008a1ba0(&local_7d8,&local_f48);
    uVar32 = 0x11;
LAB_02896e14:
    local_f40 = (char *)&local_16d0;
    local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,uVar32);
    local_f48 = &PTR_FUN_049ff448;
    FUN_008a1ba0(&local_7d8,&local_f48);
    FUN_02890840(param_1,&local_7d8);
  }
  if (*(short *)ppuVar3 == -2) {
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    memcpy(&local_7d0,param_1 + 0x101,0x754);
    puVar8 = PTR_DAT_04bb43c0;
    local_2d28 = (undefined **)CONCAT44(local_2d28._4_4_,0x65);
    local_f40 = (char *)&local_2d28;
    local_f48 = &PTR_FUN_049ff4e8;
    uVar11 = 0;
    do {
      (*(code *)local_7d8[2])(&local_16d0,&local_7d8,uVar11);
      lVar28 = (*(code *)local_7d8[4])(&local_7d8);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_16d0);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_f48)(&local_f48,&local_16d0), (uVar15 & 1) != 0))
          goto LAB_02896f44;
        }
        lVar28 = (*(code *)local_7d8[3])(&local_7d8);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_02896f44:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    pvVar18 = (void *)(**(code **)(local_25b8 + 0x18))(&local_25b8);
    lVar17 = (*(code *)local_7d8[4])(&local_7d8);
    for (lVar28 = 0;
        *(uint *)((long)&local_f48 + lVar28) =
             *(uint *)(lVar17 + lVar28) | *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_f48 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) | *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_f48,0x754);
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  }
  ppuVar38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_2d28 = ppuVar38;
  memset(auStack_2d20,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_25cc = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_25c8 = (local_25cc ^ local_25cc >> 0x1e) * 0x6c078965 + 2;
  local_25c4 = (local_25c8 ^ local_25c8 >> 0x1e) * 0x6c078965 + 3;
  local_25c0 = (local_25c4 ^ local_25c4 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_2d28[3])(&local_2d28);
  memset(pvVar18,0,0x754);
  local_7d0 = (undefined **)&local_1e48;
  local_7d8 = &PTR_FUN_049ff6c8;
  FUN_008a1ba0(&local_2d28,&local_7d8);
  local_7d8 = ppuVar38;
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  memset(pvVar18,0,0x754);
  local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,9);
  local_f48 = &PTR_FUN_049ff448;
  local_f40 = (char *)&local_16d0;
  FUN_008a1ba0(&local_7d8,&local_f48);
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (*(code *)local_2d28[4])(&local_2d28);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  puVar8 = PTR_DAT_04bb43c0;
  if ((int)local_1e48._4_4_ < 2) {
    uVar41 = 2;
  }
  else {
    local_f48 = &PTR_FUN_049ff808;
    uVar11 = 0;
    do {
      (*(code *)local_7d8[2])(&local_16d0,&local_7d8,uVar11);
      lVar28 = (*(code *)local_7d8[4])(&local_7d8);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_16d0);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_f48)(&local_f48,&local_16d0), (uVar15 & 1) == 0))
          goto LAB_02897368;
        }
        lVar28 = (*(code *)local_7d8[3])(&local_7d8);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_02897368:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    uVar41 = 4;
  }
  FUN_0288eb60(param_1,&local_7d8,uVar41);
  uVar11 = nn::os::GetSystemTick();
  uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
  uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
  uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965;
  ppuVar38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_7d8 = ppuVar38;
  memset(&local_7d0,0,0x754);
  uVar12 = nn::os::GetSystemTick();
  local_7c = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  memset(pvVar18,0,0x754);
  local_f48 = ppuVar38;
  memset(&local_f40,0,0x754);
  uVar12 = nn::os::GetSystemTick();
  local_7ec = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
  local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_f48[3])(&local_f48);
  memset(pvVar18,0,0x754);
  ppuVar38 = &PTR_FUN_049ff7e0;
  if (((uVar11 >> 8 ^ uVar13 + 4 >> 0x13 ^ uVar11 ^ uVar13) & 1) == 0) {
    local_16d0 = &PTR_FUN_049ff7e0;
    local_1e40._0_4_ = 2;
    local_16c8 = &local_1e40;
    FUN_008a1ba0(&local_f48,&local_16d0);
    local_1e40 = (undefined **)((ulong)local_1e40._4_4_ << 0x20);
    local_16d0 = &PTR_FUN_049ff7e0;
    local_16c8 = &local_1e40;
    FUN_008a1ba0(&local_7d8,&local_16d0);
    pppuVar21 = &local_7d8;
  }
  else {
    local_16d0 = &PTR_FUN_049ff7e0;
    local_1e40._0_4_ = 2;
    local_16c8 = &local_1e40;
    FUN_008a1ba0(&local_7d8,&local_16d0);
    local_1e40 = (undefined **)((ulong)local_1e40._4_4_ << 0x20);
    local_16d0 = &PTR_FUN_049ff7e0;
    local_16c8 = &local_1e40;
    FUN_008a1ba0(&local_f48,&local_16d0);
    pppuVar21 = (undefined ***)&local_f48;
  }
  local_16d0 = &PTR_FUN_049ff7e0;
  local_1e40 = (undefined **)CONCAT44(local_1e40._4_4_,1);
  local_16c8 = &local_1e40;
  FUN_008a1ba0(pppuVar21,&local_16d0);
  local_16d0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_16c8,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_f74 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_f70 = (local_f74 ^ local_f74 >> 0x1e) * 0x6c078965 + 2;
  local_f6c = (local_f70 ^ local_f70 >> 0x1e) * 0x6c078965 + 3;
  local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  memset(pvVar18,0,0x754);
  local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,0xd);
  local_1e38 = &local_16e8;
  local_1e40 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_16d0,&local_1e40);
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
  for (lVar28 = 0;
      *(uint *)((long)&local_1e40 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_1e40 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_1e40,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  lVar17 = (*(code *)local_2d28[4])(&local_2d28);
  for (lVar28 = 0;
      *(uint *)((long)&local_1e40 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_1e40 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_1e40,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  lVar17 = (*(code *)local_7d8[4])(&local_7d8);
  for (lVar28 = 0;
      *(uint *)((long)&local_1e40 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_1e40 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_1e40,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  puVar8 = PTR_DAT_04bb43c0;
  if (1 < (int)local_1e48._4_4_) {
    local_1e40 = &PTR_FUN_049ff808;
    uVar11 = 0;
    do {
      (*(code *)local_16d0[2])(&local_16e8,&local_16d0,uVar11);
      lVar28 = (*(code *)local_16d0[4])(&local_16d0);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_16e8);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_1e40)(&local_1e40,&local_16e8), (uVar15 & 1) == 0))
          goto LAB_02897928;
        }
        lVar28 = (*(code *)local_16d0[3])(&local_16d0);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_02897928:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
  }
  FUN_0288eb60(param_1,&local_16d0,1);
  local_16d0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_16c8,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_f74 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_f70 = (local_f74 ^ local_f74 >> 0x1e) * 0x6c078965 + 2;
  local_f6c = (local_f70 ^ local_f70 >> 0x1e) * 0x6c078965 + 3;
  local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  memset(pvVar18,0,0x754);
  local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,0xd);
  local_1e38 = &local_16e8;
  local_1e40 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_16d0,&local_1e40);
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
  for (lVar28 = 0;
      *(uint *)((long)&local_1e40 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_1e40 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_1e40,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  lVar17 = (*(code *)local_2d28[4])(&local_2d28);
  for (lVar28 = 0;
      *(uint *)((long)&local_1e40 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_1e40 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_1e40,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
  lVar17 = (*(code *)local_f48[4])(&local_f48);
  for (lVar28 = 0;
      *(uint *)((long)&local_1e40 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_1e40 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_1e40,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  if (1 < (int)local_1e48._4_4_) {
    local_1e40 = &PTR_FUN_049ff808;
    uVar15 = 0;
    ppuVar39 = (undefined **)0x1;
    puVar16 = (uint *)0x3a98;
    puVar42 = (undefined2 *)0x57e58;
    plVar43 = (long *)PTR_DAT_04bb43c0;
    do {
      uVar12 = (uint)uVar15;
      (*(code *)local_16d0[2])(&local_16e8,&local_16d0,uVar15);
      lVar28 = (*(code *)local_16d0[4])(&local_16d0);
      uVar44 = (ulong)(uVar12 >> 5);
      uVar13 = (int)ppuVar39 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar28 + uVar44 * 4) & uVar13) != 0) {
        lVar28 = *plVar43;
        uVar11 = FUN_0277d6c4(&local_16e8);
        if (*plVar43 != 0) {
          uVar40 = *(ulong *)(lVar28 + (long)puVar42);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(uVar40 + 0x1f8);
          bVar10 = *(uint *)(uVar40 + 0x1d8) <= uVar11;
          puVar26 = (uint *)(ulong)uVar13;
switchD_02896518_caseD_6:
          uVar12 = (uint)uVar15;
          uVar13 = (uint)puVar26;
          if (((!bVar10) && (*(long *)(*(long *)(uVar40 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar19 = (*(code *)*local_1e40)(&local_1e40,&local_16e8), (uVar19 & 1) == 0)) {
switchD_02896518_caseD_7:
            uVar12 = (uint)uVar15;
            goto LAB_02897cc4;
          }
        }
        lVar28 = (*(code *)local_16d0[3])(&local_16d0);
        *(uint *)(lVar28 + uVar44 * 4) = *(uint *)(lVar28 + uVar44 * 4) & (uVar13 ^ 0xffffffff);
      }
LAB_02897cc4:
      uVar15 = (ulong)(uVar12 + 1);
    } while (uVar12 + 1 != (uint)puVar16);
  }
  FUN_0288eb60(param_1,&local_16d0,1);
  if ((int)local_1e48._4_4_ < 2) {
    local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_7d0,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    memset(pvVar18,0,0x754);
    local_f48 = &PTR_FUN_049ff448;
    local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,10);
    local_f40 = (char *)&local_16d0;
    FUN_008a1ba0(&local_7d8,&local_f48);
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
    for (lVar28 = 0;
        *(uint *)((long)&local_f48 + lVar28) =
             *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_f48 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_f48,0x754);
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    lVar17 = (*(code *)local_2d28[4])(&local_2d28);
    for (lVar28 = 0;
        *(uint *)((long)&local_f48 + lVar28) =
             *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_f48 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_f48,0x754);
    pppuVar21 = &local_7d8;
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  }
  else {
    uVar11 = nn::os::GetSystemTick();
    ppuVar3 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    local_7d8 = ppuVar3;
    memset(&local_7d0,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_7c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
    local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    memset(pvVar18,0,0x754);
    local_f48 = ppuVar3;
    memset(&local_f40,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_7ec = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
    local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
    local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
    pvVar18 = (void *)(*(code *)local_f48[3])(&local_f48);
    memset(pvVar18,0,0x754);
    if ((*(char *)(param_2 + 0x12) == '\b') &&
       (iVar14 = nn::time::GetDayOfWeek
                           ((int)*(short *)(param_2 + 0x10),8,(int)*(char *)(param_2 + 0x13)),
       iVar14 == 0)) {
      local_16d0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_16c8,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_f74 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_f70 = (local_f74 ^ local_f74 >> 0x1e) * 0x6c078965 + 2;
      local_f6c = (local_f70 ^ local_f70 >> 0x1e) * 0x6c078965 + 3;
      local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 4;
      pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
      memset(pvVar18,0,0x754);
      local_16e8._0_4_ = 0x353;
      local_1e40 = &PTR_FUN_049ff858;
      local_1e38 = &local_16e8;
      FUN_008a1ba0(&local_16d0,&local_1e40);
      local_1e40 = &PTR_FUN_049ff858;
      local_16e8._0_4_ = 0x125;
      local_1e38 = &local_16e8;
      FUN_008a1ba0(&local_16d0,&local_1e40);
      local_1e40 = &PTR_FUN_049ff858;
      local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,0x369);
      local_1e38 = &local_16e8;
      FUN_008a1ba0(&local_16d0,&local_1e40);
      puVar8 = PTR_DAT_04bb43c0;
      local_1e40 = &PTR_FUN_049ff808;
      uVar11 = 0;
      do {
        (*(code *)local_16d0[2])(&local_16e8,&local_16d0,uVar11);
        lVar28 = (*(code *)local_16d0[4])(&local_16d0);
        uVar13 = 1 << (ulong)(uVar11 & 0x1f);
        if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
          lVar28 = *(long *)puVar8;
          uVar12 = FUN_0277d6c4(&local_16e8);
          if (*(long *)puVar8 != 0) {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
               (uVar15 = (*(code *)*local_1e40)(&local_1e40,&local_16e8), (uVar15 & 1) == 0))
            goto LAB_0289a334;
          }
          lVar28 = (*(code *)local_16d0[3])(&local_16d0);
          lVar17 = (ulong)(uVar11 >> 5) * 4;
          *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
        }
LAB_0289a334:
        uVar11 = uVar11 + 1;
      } while (uVar11 != 15000);
      uVar41 = 3;
    }
    else {
      uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 3;
      uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965;
      local_16d0 = ppuVar38;
      if (((uVar11 >> 8 ^ uVar13 + 4 >> 0x13 ^ uVar11 ^ uVar13) & 1) == 0) {
        local_1e40._0_4_ = 2;
        local_16c8 = &local_1e40;
        FUN_008a1ba0(&local_f48,&local_16d0);
        local_1e40 = (undefined **)((ulong)local_1e40._4_4_ << 0x20);
        local_16d0 = ppuVar38;
        local_16c8 = &local_1e40;
        FUN_008a1ba0(&local_7d8,&local_16d0);
        pppuVar21 = &local_7d8;
      }
      else {
        local_1e40._0_4_ = 2;
        local_16c8 = &local_1e40;
        FUN_008a1ba0(&local_7d8,&local_16d0);
        local_1e40 = (undefined **)((ulong)local_1e40._4_4_ << 0x20);
        local_16d0 = ppuVar38;
        local_16c8 = &local_1e40;
        FUN_008a1ba0(&local_f48,&local_16d0);
        pppuVar21 = (undefined ***)&local_f48;
      }
      local_1e40 = (undefined **)CONCAT44(local_1e40._4_4_,1);
      local_16c8 = &local_1e40;
      local_16d0 = ppuVar38;
      FUN_008a1ba0(pppuVar21,&local_16d0);
      local_16d0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_16c8,0,0x754);
      uVar11 = nn::os::GetSystemTick();
      local_f74 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
      local_f70 = (local_f74 ^ local_f74 >> 0x1e) * 0x6c078965 + 2;
      local_f6c = (local_f70 ^ local_f70 >> 0x1e) * 0x6c078965 + 3;
      local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 4;
      pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
      memset(pvVar18,0,0x754);
      local_1e40 = &PTR_FUN_049ff448;
      local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,10);
      local_1e38 = &local_16e8;
      FUN_008a1ba0(&local_16d0,&local_1e40);
      pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
      lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
      for (lVar28 = 0;
          *(uint *)((long)&local_1e40 + lVar28) =
               *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
          lVar28 = lVar28 + 8) {
        *(uint *)((long)&local_1e40 + lVar28 + 4) =
             *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
      }
      memcpy(pvVar18,&local_1e40,0x754);
      *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
      pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
      lVar17 = (*(code *)local_2d28[4])(&local_2d28);
      for (lVar28 = 0;
          *(uint *)((long)&local_1e40 + lVar28) =
               *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
          lVar28 = lVar28 + 8) {
        *(uint *)((long)&local_1e40 + lVar28 + 4) =
             *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
      }
      memcpy(pvVar18,&local_1e40,0x754);
      *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
      pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
      lVar17 = (*(code *)local_7d8[4])(&local_7d8);
      for (lVar28 = 0;
          *(uint *)((long)&local_1e40 + lVar28) =
               *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
          lVar28 = lVar28 + 8) {
        *(uint *)((long)&local_1e40 + lVar28 + 4) =
             *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
      }
      memcpy(pvVar18,&local_1e40,0x754);
      local_1e40 = &PTR_FUN_049ff808;
      uVar11 = 0;
      *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
      puVar8 = PTR_DAT_04bb43c0;
      do {
        (*(code *)local_16d0[2])(&local_16e8,&local_16d0,uVar11);
        lVar28 = (*(code *)local_16d0[4])(&local_16d0);
        uVar13 = 1 << (ulong)(uVar11 & 0x1f);
        if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
          lVar28 = *(long *)puVar8;
          uVar12 = FUN_0277d6c4(&local_16e8);
          if (*(long *)puVar8 != 0) {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
               (uVar15 = (*(code *)*local_1e40)(&local_1e40,&local_16e8), (uVar15 & 1) == 0))
            goto LAB_02898508;
          }
          lVar28 = (*(code *)local_16d0[3])(&local_16d0);
          lVar17 = (ulong)(uVar11 >> 5) * 4;
          *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
        }
LAB_02898508:
        uVar11 = uVar11 + 1;
      } while (uVar11 != 15000);
      uVar41 = 1;
    }
    FUN_0288eb60(param_1,&local_16d0,uVar41);
    local_16d0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_16c8,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_f74 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_f70 = (local_f74 ^ local_f74 >> 0x1e) * 0x6c078965 + 2;
    local_f6c = (local_f70 ^ local_f70 >> 0x1e) * 0x6c078965 + 3;
    local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 4;
    pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
    memset(pvVar18,0,0x754);
    local_1e40 = &PTR_FUN_049ff448;
    local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,10);
    local_1e38 = &local_16e8;
    FUN_008a1ba0(&local_16d0,&local_1e40);
    pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
    lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
    for (lVar28 = 0;
        *(uint *)((long)&local_1e40 + lVar28) =
             *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_1e40 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_1e40,0x754);
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
    pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
    lVar17 = (*(code *)local_2d28[4])(&local_2d28);
    for (lVar28 = 0;
        *(uint *)((long)&local_1e40 + lVar28) =
             *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_1e40 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_1e40,0x754);
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
    pvVar18 = (void *)(*(code *)local_16d0[3])(&local_16d0);
    lVar17 = (*(code *)local_f48[4])(&local_f48);
    for (lVar28 = 0;
        *(uint *)((long)&local_1e40 + lVar28) =
             *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_1e40 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_1e40,0x754);
    local_1e40 = &PTR_FUN_049ff808;
    uVar11 = 0;
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
    puVar8 = PTR_DAT_04bb43c0;
    do {
      (*(code *)local_16d0[2])(&local_16e8,&local_16d0,uVar11);
      lVar28 = (*(code *)local_16d0[4])(&local_16d0);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_16e8);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_1e40)(&local_1e40,&local_16e8), (uVar15 & 1) == 0))
          goto LAB_02898888;
        }
        lVar28 = (*(code *)local_16d0[3])(&local_16d0);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_02898888:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    pppuVar21 = (undefined ***)&local_16d0;
  }
  FUN_0288eb60(param_1,pppuVar21,1);
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  memset(pvVar18,0,0x754);
  local_f48 = &PTR_FUN_049ff448;
  local_16d0._0_4_ = 0x10;
  local_f40 = (char *)&local_16d0;
  FUN_008a1ba0(&local_7d8,&local_f48);
  local_f48 = &PTR_FUN_049ff448;
  local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0x11);
  local_f40 = (char *)&local_16d0;
  FUN_008a1ba0(&local_7d8,&local_f48);
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (*(code *)local_2d28[4])(&local_2d28);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  uVar41 = 1;
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  puVar8 = PTR_DAT_04bb43c0;
  if (1 < (int)local_1e48._4_4_) {
    local_f48 = &PTR_FUN_049ff808;
    uVar11 = 0;
    do {
      (*(code *)local_7d8[2])(&local_16d0,&local_7d8,uVar11);
      lVar28 = (*(code *)local_7d8[4])(&local_7d8);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_16d0);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_f48)(&local_f48,&local_16d0), (uVar15 & 1) == 0))
          goto LAB_02898bc4;
        }
        lVar28 = (*(code *)local_7d8[3])(&local_7d8);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_02898bc4:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    uVar41 = 2;
  }
  FUN_0288eb60(param_1,&local_7d8,uVar41);
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  memset(pvVar18,0,0x754);
  local_f48 = &PTR_FUN_049ff448;
  local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0x12);
  local_f40 = (char *)&local_16d0;
  FUN_008a1ba0(&local_7d8,&local_f48);
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (*(code *)local_2d28[4])(&local_2d28);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  uVar41 = 1;
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  puVar8 = PTR_DAT_04bb43c0;
  if (1 < (int)local_1e48._4_4_) {
    local_f48 = &PTR_FUN_049ff808;
    uVar11 = 0;
    do {
      (*(code *)local_7d8[2])(&local_16d0,&local_7d8,uVar11);
      lVar28 = (*(code *)local_7d8[4])(&local_7d8);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_16d0);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_f48)(&local_f48,&local_16d0), (uVar15 & 1) == 0))
          goto LAB_02898ee4;
        }
        lVar28 = (*(code *)local_7d8[3])(&local_7d8);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_02898ee4:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    uVar41 = 2;
  }
  FUN_0288eb60(param_1,&local_7d8,uVar41);
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  memset(pvVar18,0,0x754);
  local_f48 = &PTR_FUN_049ff448;
  local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0xe);
  local_f40 = (char *)&local_16d0;
  FUN_008a1ba0(&local_7d8,&local_f48);
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  lVar17 = (*(code *)local_2d28[4])(&local_2d28);
  for (lVar28 = 0;
      *(uint *)((long)&local_f48 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_f48 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_f48,0x754);
  uVar41 = 1;
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  puVar8 = PTR_DAT_04bb43c0;
  if (1 < (int)local_1e48._4_4_) {
    local_f48 = &PTR_FUN_049ff808;
    uVar11 = 0;
    do {
      (*(code *)local_7d8[2])(&local_16d0,&local_7d8,uVar11);
      lVar28 = (*(code *)local_7d8[4])(&local_7d8);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_16d0);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_f48)(&local_f48,&local_16d0), (uVar15 & 1) == 0))
          goto LAB_028991f8;
        }
        lVar28 = (*(code *)local_7d8[3])(&local_7d8);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_028991f8:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    uVar41 = 2;
  }
  FUN_0288eb60(param_1,&local_7d8,uVar41);
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  memset(pvVar18,0,0x754);
  if ((((int)local_1e48._4_4_ < 2) || (*(char *)(param_2 + 0x12) != '\b')) ||
     (iVar14 = nn::time::GetDayOfWeek
                         ((int)*(short *)(param_2 + 0x10),8,(int)*(char *)(param_2 + 0x13)),
     iVar14 != 0)) {
    local_f48 = &PTR_FUN_049ff448;
    local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,0xf);
    local_f40 = (char *)&local_16d0;
    FUN_008a1ba0(&local_7d8,&local_f48);
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    lVar17 = (**(code **)(local_25b8 + 0x20))(&local_25b8);
    for (lVar28 = 0;
        *(uint *)((long)&local_f48 + lVar28) =
             *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_f48 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_f48,0x754);
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
    pvVar18 = (void *)(*(code *)local_7d8[3])(&local_7d8);
    lVar17 = (*(code *)local_2d28[4])(&local_2d28);
    for (lVar28 = 0;
        *(uint *)((long)&local_f48 + lVar28) =
             *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
        lVar28 = lVar28 + 8) {
      *(uint *)((long)&local_f48 + lVar28 + 4) =
           *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
    }
    memcpy(pvVar18,&local_f48,0x754);
    uVar41 = 1;
    *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
    puVar8 = PTR_DAT_04bb43c0;
    if (1 < (int)local_1e48._4_4_) {
      local_f48 = &PTR_FUN_049ff808;
      uVar11 = 0;
      do {
        (*(code *)local_7d8[2])(&local_16d0,&local_7d8,uVar11);
        lVar28 = (*(code *)local_7d8[4])(&local_7d8);
        uVar13 = 1 << (ulong)(uVar11 & 0x1f);
        if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
          lVar28 = *(long *)puVar8;
          uVar12 = FUN_0277d6c4(&local_16d0);
          if (*(long *)puVar8 != 0) {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
               (uVar15 = (*(code *)*local_f48)(&local_f48,&local_16d0), (uVar15 & 1) == 0))
            goto LAB_02899548;
          }
          lVar28 = (*(code *)local_7d8[3])(&local_7d8);
          lVar17 = (ulong)(uVar11 >> 5) * 4;
          *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
        }
LAB_02899548:
        uVar11 = uVar11 + 1;
      } while (uVar11 != 15000);
      uVar41 = 2;
    }
    FUN_0288eb60(param_1,&local_7d8,uVar41);
  }
  else {
    local_f48 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_f40,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_7ec = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
    local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
    local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
    pvVar18 = (void *)(*(code *)local_f48[3])(&local_f48);
    memset(pvVar18,0,0x754);
    local_1e40._0_4_ = 0x1f8;
    local_16d0 = &PTR_FUN_049ff858;
    local_16c8 = &local_1e40;
    FUN_008a1ba0(&local_f48,&local_16d0);
    local_16d0 = &PTR_FUN_049ff858;
    local_1e40 = (undefined **)CONCAT44(local_1e40._4_4_,0xd3);
    local_16c8 = &local_1e40;
    FUN_008a1ba0(&local_f48,&local_16d0);
    puVar8 = PTR_DAT_04bb43c0;
    local_16d0 = &PTR_FUN_049ff808;
    uVar11 = 0;
    do {
      (*(code *)local_f48[2])(&local_1e40,&local_f48,uVar11);
      lVar28 = (*(code *)local_f48[4])(&local_f48);
      uVar13 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar28 + (ulong)(uVar11 >> 5) * 4) & uVar13) != 0) {
        lVar28 = *(long *)puVar8;
        uVar12 = FUN_0277d6c4(&local_1e40);
        if (*(long *)puVar8 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_16d0)(&local_16d0,&local_1e40), (uVar15 & 1) == 0))
          goto LAB_0289a104;
        }
        lVar28 = (*(code *)local_f48[3])(&local_f48);
        lVar17 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) & (uVar13 ^ 0xffffffff);
      }
LAB_0289a104:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    FUN_0288eb60(param_1,&local_f48,1);
  }
  ppuVar38 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_7d8 = ppuVar38;
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)FUN_01a451fc(&local_7d8);
  memset(pvVar18,0,0x754);
  local_16d0._0_4_ = 9;
  local_f48 = &PTR_FUN_049ff448;
  local_f40 = (char *)&local_16d0;
  FUN_008a1ba0(&local_7d8,&local_f48);
  local_f48 = &PTR_FUN_049ff448;
  local_16d0 = (undefined **)CONCAT44(local_16d0._4_4_,10);
  local_f40 = (char *)&local_16d0;
  FUN_008a1ba0(&local_7d8,&local_f48);
  local_f48 = ppuVar38;
  memset(&local_f40,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7ec = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
  local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)FUN_01a451fc(&local_f48);
  memset(pvVar18,0,0x754);
  puVar8 = PTR_DAT_04bb37e0;
  uVar11 = 0;
  uVar24 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 0x12b6) = PTR_DAT_04bb37e0[2];
  *(undefined *)((long)param_1 + 0x12b7) = puVar8[3];
  puVar9 = PTR_DAT_04bc0510;
  *(undefined2 *)(param_1 + 0x4ad) = uVar24;
  local_2d30 = param_1 + 0x4ad;
  param_1[0x4ae] = *(uint *)(puVar8 + 4);
  ppuVar38 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  do {
    puVar8 = PTR_DAT_04bb43c0;
    puVar42 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar11 << 0x20) >> 0x1d) + 4);
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    uVar13 = FUN_0277d6c4(puVar42);
    lVar28 = *(long *)puVar8;
    if (lVar28 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
        local_16c0 = (uint *)0x0;
        local_16c8._0_4_ =
             CONCAT22(*(undefined2 *)((long)param_1 + (long)(int)uVar11 * 8 + 6),*puVar42);
        local_16c8 = (undefined8 *)
                     CONCAT44(param_1[(long)(int)uVar11 * 2 + 2],(undefined4)local_16c8);
        local_16d0 = (undefined **)(puVar9 + 0x10);
        uVar13 = FUN_0277d6c4(&local_16c8);
        if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_028998e8:
          puVar16 = (uint *)0x0;
        }
        else {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((*(uint *)(lVar28 + 0x1d8) <= uVar13) ||
             (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_028998e8;
          lVar28 = *(long *)PTR_DAT_04bc0428;
          uVar13 = FUN_0277d6c4(puVar42);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (*(uint *)(lVar28 + 0x1d8) <= uVar13) goto LAB_028998e8;
          puVar16 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar13 * 8);
          if (puVar16 != (uint *)0x0) {
            local_16c0 = puVar16;
          }
        }
        if ((*(char *)(param_2 + 0x12) == '\b') &&
           (iVar14 = nn::time::GetDayOfWeek
                               ((int)*(short *)(param_2 + 0x10),8,(int)*(char *)(param_2 + 0x13)),
           iVar14 == 0)) {
          if (puVar16 != (uint *)0x0) {
            puVar26 = (uint *)((long)puVar16 - (ulong)*puVar16);
            if ((((*puVar16 != 0) && (puVar26 != (uint *)0x0)) && (*puVar26 != 0)) &&
               ((uVar13 = puVar26[1], uVar13 != 0 && ((ulong)(ushort)puVar26[2] != 0)))) {
              lVar28 = 0xc;
              if (*(char *)((long)puVar26 + 10) != '\0') {
                lVar28 = 0x1c;
              }
              lVar28 = (long)puVar26 + lVar28 + (ulong)(ushort)puVar26[2] * 8;
              if (lVar28 != 0) {
                uVar12 = 0;
                if ((ulong)uVar13 != 0) {
                  uVar12 = (uint)((ulong)((long)puVar16 - lVar28) / (ulong)uVar13);
                }
                if (*puVar26 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if (((uVar12 < *(uint *)PTR_DAT_04bc0020) &&
                    (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar12 * 2),
                    uVar4 < 0x5b6)) && ((uVar4 == 0x125 || ((uVar4 == 0x369 || (uVar4 == 0x353))))))
                goto LAB_02899a38;
              }
            }
          }
        }
        else {
          uVar41 = *(undefined8 *)PTR_DAT_04bb32f0;
          local_1e38 = (undefined **)0x40d4383;
          local_f58 = *puVar1;
          local_1e40 = ppuVar38;
          if ((char)(local_f58 >> 0x20) < '\x05') {
            lVar28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_f58);
            local_16e8 = (undefined *)(lVar28 + -0x15180);
            local_f58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_16e8);
          }
          uVar15 = local_f58;
          local_f58._7_1_ = SUB81(uVar15,7);
          local_f58._0_7_ = (uint7)CONCAT24(5,(uint)local_f58);
          uVar15 = FUN_00879dd0(uVar41,&local_1e40,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
          if ((uVar15 & 1) == 0) {
LAB_02899a38:
            FUN_01ae2fa0(&local_1e40,&local_16d0);
            FUN_0277dedc(&local_1e40);
            lVar28 = (*(code *)local_f48[3])(&local_f48);
            uVar13 = FUN_0277d6c4(&local_1e40);
            if ((uVar13 >> 3 & 0x1fff) < 0x753) {
              lVar17 = (ulong)((uVar13 & 0xffff) >> 5) * 4;
              *(uint *)(lVar28 + lVar17) = *(uint *)(lVar28 + lVar17) | 1 << (ulong)(uVar13 & 0x1f);
            }
          }
          else if (puVar16 != (uint *)0x0) {
            puVar26 = (uint *)((long)puVar16 - (ulong)*puVar16);
            if ((((*puVar16 != 0) && (puVar26 != (uint *)0x0)) && (*puVar26 != 0)) &&
               ((uVar13 = puVar26[1], uVar13 != 0 && ((ulong)(ushort)puVar26[2] != 0)))) {
              lVar28 = 0xc;
              if (*(char *)((long)puVar26 + 10) != '\0') {
                lVar28 = 0x1c;
              }
              lVar28 = (long)puVar26 + lVar28 + (ulong)(ushort)puVar26[2] * 8;
              if (lVar28 != 0) {
                uVar12 = 0;
                if ((ulong)uVar13 != 0) {
                  uVar12 = (uint)((ulong)((long)puVar16 - lVar28) / (ulong)uVar13);
                }
                if (*puVar26 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if ((uVar12 < *(uint *)PTR_DAT_04bc0068) &&
                   (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar12 * 2),
                   uVar4 < 0x13e && (uVar4 == 0x53 || uVar4 == 0x54))) goto LAB_02899a38;
              }
            }
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x80);
  pvVar18 = (void *)(*(code *)local_f48[3])(&local_f48);
  lVar17 = (*(code *)local_7d8[4])(&local_7d8);
  uVar15 = 0x55555555;
  uVar11 = 0x55555555;
  puVar42 = (undefined2 *)0x33333333;
  uVar13 = 0x33333333;
  for (lVar28 = 0;
      *(uint *)((long)&local_16d0 + lVar28) =
           *(uint *)(lVar17 + lVar28) & *(uint *)((long)pvVar18 + lVar28), lVar28 != 0x750;
      lVar28 = lVar28 + 8) {
    *(uint *)((long)&local_16d0 + lVar28 + 4) =
         *(uint *)(lVar17 + lVar28 + 4) & *(uint *)((long)pvVar18 + lVar28 + 4);
  }
  memcpy(pvVar18,&local_16d0,0x754);
  *(uint *)((long)pvVar18 + 0x750) = *(uint *)((long)pvVar18 + 0x750) & 0xffffff;
  puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar12 = *puVar16 ^ *puVar16 << 0xb;
  uVar36 = puVar16[3];
  *puVar16 = puVar16[1];
  puVar16[1] = puVar16[2];
  uVar35 = uVar12 ^ uVar36;
  uVar12 = uVar12 >> 8 ^ uVar36 >> 0x13 ^ uVar35;
  puVar16[2] = uVar36;
  puVar16[3] = uVar12;
  uVar12 = (uVar12 ^ uVar35 >> 0x1e) * 0x6c078965 + 1;
  uVar35 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
  local_f58 = CONCAT44(uVar35,uVar12);
  local_f50 = (uVar35 ^ uVar35 >> 0x1e) * 0x6c078965 + 3;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 4;
  lVar17 = (*(code *)local_f48[4])(&local_f48);
  lVar28 = 0;
  iVar14 = 0;
  do {
    puVar16 = (uint *)(lVar17 + lVar28);
    lVar28 = lVar28 + 4;
    uVar12 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    iVar14 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar14;
  } while (lVar28 != 0x754);
  puVar16 = param_1;
  if (iVar14 == 0) {
    local_f60 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_f5c = *(uint *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    lVar17 = (*(code *)local_f48[4])(&local_f48);
    lVar28 = 0;
    uVar40 = 0;
    do {
      puVar26 = (uint *)(lVar17 + lVar28);
      lVar28 = lVar28 + 4;
      uVar11 = *puVar26 - (*puVar26 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      uVar40 = (ulong)((uVar11 + (uVar11 >> 0x10) & 0x3f) + (int)uVar40);
    } while (lVar28 != 0x754);
    puVar20 = &local_f48;
    puVar29 = (ushort *)(ulong)((uint)local_f58 ^ (uint)local_f58 << 0xb);
    local_f58 = CONCAT44(local_f50,local_f58._4_4_);
switchD_02896518_caseD_5:
    uVar13 = (uint)puVar42;
    uVar11 = (uint)uVar15;
    uVar12 = (uint)((ulong)puVar29 >> 8) ^ local_f4c >> 0x13 ^ (uint)puVar29 ^ local_f4c;
    local_f50 = local_f4c;
    local_f4c = uVar12;
    FUN_00889f80(&local_f60,puVar20,(int)(uVar12 * uVar40 >> 0x20) + 1);
    FUN_01a4c66c(&local_f58,&local_f60);
  }
  puVar8 = PTR_DAT_04bb43c0;
  lVar28 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(&local_f60);
  if (*(long *)puVar8 == 0) {
    return;
  }
  lVar28 = *(long *)(lVar28 + 0x57e58);
  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
  if (*(uint *)(lVar28 + 0x1d8) <= uVar12) {
    return;
  }
  if (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) == 0) {
    return;
  }
  local_16d0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_16c8,0,0x754);
  uVar12 = nn::os::GetSystemTick();
  local_f74 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  local_f70 = (local_f74 ^ local_f74 >> 0x1e) * 0x6c078965 + 2;
  local_f6c = (local_f70 ^ local_f70 >> 0x1e) * 0x6c078965 + 3;
  local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 4;
  pvVar18 = (void *)FUN_01a451fc(&local_16d0);
  memset(pvVar18,0,0x754);
  puVar8 = PTR_DAT_04bb43c0;
  local_16d8 = (uint *)0x0;
  local_16e0 = local_f60;
  local_16dc = local_f5c;
  local_16e8 = PTR_DAT_04bc0510 + 0x10;
  lVar28 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(&local_16e0);
  if (*(long *)puVar8 != 0) {
    lVar28 = *(long *)(lVar28 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      lVar28 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_f60);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar28 + 0x1d8)) &&
         (puVar26 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar12 * 8),
         puVar26 != (uint *)0x0)) {
        local_16ec = 0;
        uVar12 = *puVar26;
        local_16d8 = puVar26;
        if ((uVar12 == 0) || (puVar26 == (uint *)(ulong)uVar12)) goto LAB_0289a400;
        puVar31 = (uint *)((long)puVar26 - (long)(ulong)uVar12);
        local_16ec = 0;
        if (*puVar31 == 0) goto LAB_0289a400;
        uVar12 = puVar31[1];
        if ((uVar12 != 0) && ((ulong)(ushort)puVar31[2] != 0)) {
          lVar28 = 0xc;
          if (*(char *)((long)puVar31 + 10) != '\0') {
            lVar28 = 0x1c;
          }
          lVar28 = (long)puVar31 + lVar28 + (ulong)(ushort)puVar31[2] * 8;
          if (lVar28 != 0) {
            uVar35 = 0;
            if ((ulong)uVar12 != 0) {
              uVar35 = (uint)((ulong)((long)puVar26 - lVar28) / (ulong)uVar12);
            }
            if (*puVar31 <= uVar35) {
              uVar35 = 0xffffffff;
            }
            if ((uVar35 < *(uint *)PTR_DAT_04bc0020) &&
               (local_16ec = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar35 * 2),
               local_16ec < 0x5b6)) goto LAB_0289a400;
          }
        }
      }
    }
  }
  local_16ec = 0;
LAB_0289a400:
  local_1e40 = &PTR_FUN_049ff858;
  local_1e38 = (undefined **)&local_16ec;
  FUN_008a1ba0(&local_16d0,&local_1e40);
  lVar17 = (*(code *)local_16d0[4])(&local_16d0);
  lVar28 = 0;
  uVar12 = 0;
  do {
    puVar26 = (uint *)(lVar17 + lVar28);
    lVar28 = lVar28 + 4;
    uVar35 = *puVar26 - (uVar11 & *puVar26 >> 1);
    uVar35 = (uVar13 & uVar35 >> 2) + (uVar35 & uVar13);
    uVar35 = uVar35 + (uVar35 >> 4) & 0xf0f0f0f;
    uVar35 = uVar35 + (uVar35 >> 8);
    uVar12 = (uVar35 + (uVar35 >> 0x10) & 0x3f) + uVar12;
  } while (lVar28 != 0x754);
  if (uVar12 < 2) {
    *(undefined2 *)(puVar16 + 0x4ad) = (undefined2)local_f60;
    *(undefined2 *)((long)param_1 + 0x12b6) = local_f60._2_2_;
    puVar16[0x4ae] = local_f5c;
  }
  else {
    FUN_01ae2fa0(&local_1e40,&local_16e8);
    lVar28 = (*(code *)local_16d0[3])(&local_16d0);
    uVar12 = FUN_0277d6c4(&local_1e40);
    if ((uVar12 >> 3 & 0x1fff) < 0x753) {
      lVar17 = (ulong)((uVar12 & 0xffff) >> 5) * 4;
      *(uint *)(lVar28 + lVar17) =
           *(uint *)(lVar28 + lVar17) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
    }
    lVar17 = (*(code *)local_16d0[4])(&local_16d0);
    lVar28 = 0;
    iVar14 = 0;
    do {
      puVar26 = (uint *)(lVar17 + lVar28);
      lVar28 = lVar28 + 4;
      uVar12 = *puVar26 - (uVar11 & *puVar26 >> 1);
      uVar12 = (uVar13 & uVar12 >> 2) + (uVar12 & uVar13);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      iVar14 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar14;
    } while (lVar28 != 0x754);
    if (iVar14 == 0) {
      uVar30 = PTR_DAT_04bb37e0[2];
      uVar27 = PTR_DAT_04bb37e0[3];
      puVar20 = (undefined8 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar17 = (*(code *)local_16d0[4])(&local_16d0);
      lVar28 = 0;
      uVar12 = 0;
      do {
        puVar26 = (uint *)(lVar17 + lVar28);
        lVar28 = lVar28 + 4;
        uVar35 = *puVar26 - (uVar11 & *puVar26 >> 1);
        uVar35 = (uVar13 & uVar35 >> 2) + (uVar35 & uVar13);
        uVar35 = uVar35 + (uVar35 >> 4) & 0xf0f0f0f;
        uVar35 = uVar35 + (uVar35 >> 8);
        uVar12 = (uVar35 + (uVar35 >> 0x10) & 0x3f) + uVar12;
      } while (lVar28 != 0x754);
      uVar11 = (uint)local_f58 ^ (uint)local_f58 << 0xb;
      local_f58 = CONCAT44(local_f50,local_f58._4_4_);
      local_f50 = local_f4c;
      local_f4c = uVar11 >> 8 ^ local_f4c >> 0x13 ^ uVar11 ^ local_f4c;
      FUN_00889f80(&local_1e40,&local_16d0,(int)((ulong)local_f4c * (ulong)uVar12 >> 0x20) + 1);
      FUN_01a4c66c(&local_f58,&local_1e40);
      puVar20 = &local_1e40;
      uVar27 = local_1e40._3_1_;
      uVar30 = local_1e40._2_1_;
    }
    uVar24 = *(undefined2 *)puVar20;
    uVar11 = *(uint *)((long)puVar20 + 4);
    *(undefined1 *)((long)param_1 + 0x12b6) = uVar30;
    *(undefined1 *)((long)param_1 + 0x12b7) = uVar27;
    *(undefined2 *)(puVar16 + 0x4ad) = uVar24;
    puVar16[0x4ae] = uVar11;
  }
  FUN_0277d6c4(local_2d30);
  return;
LAB_02895b98:
  puVar8 = PTR_DAT_04bc38b0;
  if (cVar23 == '\0') {
    cVar23 = '\x01';
    *(undefined8 *)PTR_DAT_04bc38b0 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined4 *)(puVar8 + 0x28) = 0xffffffff;
    uVar11 = *puVar16;
    *PTR_DAT_04bc38a8 = 1;
  }
  else {
    uVar13 = *(uint *)(PTR_DAT_04bc38b0 + 0x28);
    if (-1 < (int)uVar13) goto LAB_02895d94;
    if (uVar13 != 0xffffffff) goto LAB_02895da4;
  }
  puVar26 = (uint *)(ulong)uVar11;
  if ((puVar26 == (uint *)0x0) || (puVar16 == puVar26)) goto LAB_02895da4;
  lVar17 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
    lVar17 = 0x1c;
  }
  lVar17 = (long)puVar16 + (lVar17 - (long)puVar26);
  if (lVar17 == 0) goto LAB_02895da4;
  uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
  *(undefined4 *)(PTR_DAT_04bc38b0 + 0x28) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_02895da4;
  piVar33 = (int *)(lVar17 + 4);
  while (piVar33[-1] != 0x54706054) {
    piVar33 = piVar33 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_02895da4;
  }
  iVar37 = 0;
  if (*piVar33 != -1) {
    iVar37 = *piVar33;
  }
  *(int *)(PTR_DAT_04bc38b0 + 0x28) = iVar37;
  uVar11 = *puVar16;
  if (uVar11 == 0) goto LAB_02895da4;
  goto LAB_02895b98;
LAB_02895c98:
  puVar8 = PTR_DAT_04bc38b0;
  if (cVar23 == '\0') {
    cVar23 = '\x01';
    *(undefined8 *)PTR_DAT_04bc38b0 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined4 *)(puVar8 + 0x28) = 0xffffffff;
    uVar11 = *puVar16;
    *PTR_DAT_04bc38a8 = 1;
  }
  else {
    uVar13 = *(uint *)(PTR_DAT_04bc38b0 + 0x28);
    if (-1 < (int)uVar13) goto LAB_02895d94;
    if (uVar13 != 0xffffffff) goto LAB_02895da4;
  }
  puVar26 = (uint *)(ulong)uVar11;
  if ((puVar26 == (uint *)0x0) || (puVar16 == puVar26)) goto LAB_02895da4;
  lVar17 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar26)) != '\0') {
    lVar17 = 0x1c;
  }
  lVar17 = (long)puVar16 + (lVar17 - (long)puVar26);
  if (lVar17 == 0) goto LAB_02895da4;
  uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar26));
  *(undefined4 *)(PTR_DAT_04bc38b0 + 0x28) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_02895da4;
  piVar33 = (int *)(lVar17 + 4);
  while (piVar33[-1] != 0x54706054) {
    piVar33 = piVar33 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_02895da4;
  }
  iVar37 = 0;
  if (*piVar33 != -1) {
    iVar37 = *piVar33;
  }
  *(int *)(PTR_DAT_04bc38b0 + 0x28) = iVar37;
  uVar11 = *puVar16;
  if (uVar11 == 0) goto LAB_02895da4;
  goto LAB_02895c98;
LAB_02895d94:
  if ((ushort *)((ulong)uVar13 + (long)puVar16) == (ushort *)0x0) {
LAB_02895da4:
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*(ushort *)((ulong)uVar13 + (long)puVar16);
  }
LAB_02895a18:
  FUN_0297ac30(&local_f48,lVar28,uVar11,iVar45);
  puVar8 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(&local_f48);
  lVar28 = *(long *)puVar8;
  if (lVar28 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      local_7c8 = 0;
      local_7d0 = local_f48;
      local_7d8 = ppuVar2;
      uVar11 = FUN_0277d6c4(&local_7d0);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar28 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(&local_f48);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar28 + 0x1d8)) &&
             (lVar28 = *(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar11 * 8), lVar28 != 0)) {
            local_7c8 = lVar28;
          }
        }
      }
      FUN_01ae2fa0(&local_16d0,&local_7d8);
      lVar28 = (**(code **)(local_25b8 + 0x18))(&local_25b8);
      uVar11 = FUN_0277d6c4(&local_16d0);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar17 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar28 + lVar17) =
             *(uint *)(lVar28 + lVar17) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  iVar45 = iVar45 + 1;
  if (iVar14 == iVar45) goto LAB_02895460;
  goto LAB_0289551c;
}

