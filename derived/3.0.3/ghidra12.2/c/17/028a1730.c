
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffcb50 : 0x028a1e4c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_028a1730(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined *puVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  void *pvVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  undefined8 local_34b0;
  undefined8 *local_34a8;
  uint *local_34a0;
  uint local_2d54;
  uint local_2d50;
  uint local_2d4c;
  int local_2d48;
  undefined8 local_2d40;
  undefined8 *local_2d38;
  undefined4 local_2d30;
  undefined1 local_2d2c [31];
  undefined1 local_2d0d;
  uint local_25e4;
  uint local_25e0;
  uint local_25dc;
  int local_25d8;
  undefined8 local_25d0;
  undefined8 *local_25c8 [234];
  uint local_1e74;
  uint local_1e70;
  uint local_1e6c;
  int local_1e68;
  undefined8 local_1e60;
  undefined8 *local_1e58 [234];
  uint local_1704;
  uint local_1700;
  uint local_16fc;
  int local_16f8;
  undefined *local_16f0;
  undefined1 auStack_16e8 [1876];
  uint local_f94;
  uint local_f90;
  uint local_f8c;
  int local_f88;
  undefined1 local_f7c [4];
  undefined8 local_f78;
  undefined8 local_f70;
  long local_f68;
  undefined2 local_820;
  undefined1 local_81e;
  undefined1 local_81d;
  undefined4 local_81c;
  undefined8 local_818;
  uint local_810;
  int local_80c;
  undefined8 local_808;
  undefined8 *local_800 [234];
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined1 local_94 [4];
  ulong local_90;
  uint local_84;
  undefined8 local_80;
  uint local_6c;
  
  local_f7c[0] = 0;
  puVar1 = (ulong *)(param_2 + 0x10);
  FUN_01b02920(local_f7c,puVar1,0);
  puVar2 = PTR_DAT_04bbfe60 + 0x10;
  local_16f0 = puVar2;
  memset(auStack_16e8,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_f94 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_f90 = (local_f94 ^ local_f94 >> 0x1e) * 0x6c078965 + 2;
  local_f8c = (local_f90 ^ local_f90 >> 0x1e) * 0x6c078965 + 3;
  local_f88 = (local_f8c ^ local_f8c >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)FUN_01a451fc(&local_16f0);
  memset(pvVar20,0,0x754);
  local_1e60 = (undefined **)((ulong)local_1e60 & 0xffffffff00000000);
  local_808 = &PTR_FUN_049ff448;
  local_800[0] = &local_1e60;
  FUN_008a1ba0(&local_16f0,&local_808);
  local_808 = &PTR_FUN_049ff448;
  local_1e60._0_4_ = 0x77;
  local_800[0] = &local_1e60;
  FUN_008a1ba0(&local_16f0,&local_808);
  local_1e60 = (undefined **)CONCAT44(local_1e60._4_4_,0x29);
  local_808 = &PTR_FUN_049ff448;
  local_800[0] = &local_1e60;
  FUN_008a1ba0(&local_16f0,&local_808);
  local_808 = (undefined **)puVar2;
  memset(local_800,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)FUN_01a451fc(&local_808);
  memset(pvVar20,0,0x754);
  local_25d0._0_4_ = 7;
  local_1e60 = &PTR_FUN_049ff538;
  local_1e58[0] = &local_25d0;
  FUN_008a1ba0(&local_808,&local_1e60);
  local_1e60 = &PTR_FUN_049ff538;
  local_25d0 = (undefined **)CONCAT44(local_25d0._4_4_,5);
  local_1e58[0] = &local_25d0;
  FUN_008a1ba0(&local_808,&local_1e60);
  puVar2 = PTR_DAT_04bb43c0;
  local_1e58[0] = &local_2d40;
  local_2d40 = (undefined **)CONCAT44((int)((ulong)local_2d40 >> 0x20),1);
  local_1e60 = &PTR_FUN_049ff4e8;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a19a8;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a19a8:
    puVar12 = PTR_DAT_04bb43c0;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  uVar22 = (ulong)local_2d40 >> 8;
  uVar29 = (ulong)local_1e60 >> 0x20;
  local_1e60 = (undefined **)((ulong)local_1e60 & 0xffffffff00000000);
  local_25d0 = (undefined **)CONCAT44((int)((ulong)local_25d0 >> 0x20),6);
  local_1e60 = (undefined **)CONCAT44((int)uVar29,6);
  local_2d40 = (undefined **)CONCAT71((uint7)uVar22 & 0xffffffff000000,0x41);
  local_1e60 = &PTR_FUN_049ff420;
  local_1e58[0] = &local_2d40;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar12 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a1b64;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a1b64:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_1e60 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_1e58,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_1704 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_1700 = (local_1704 ^ local_1704 >> 0x1e) * 0x6c078965 + 2;
  local_16fc = (local_1700 ^ local_1700 >> 0x1e) * 0x6c078965 + 3;
  local_16f8 = (local_16fc ^ local_16fc >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_1e60 + 0x18))(&local_1e60);
  memset(pvVar20,0,0x754);
  local_25d0 = &PTR_FUN_049ff538;
  local_25c8[0] = &local_2d40;
  FUN_008a1ba0(&local_1e60,&local_25d0);
  local_25d0 = &PTR_FUN_049ff538;
  local_2d40 = (undefined **)CONCAT44((int)((ulong)local_2d40 >> 0x20),5);
  local_25c8[0] = &local_2d40;
  FUN_008a1ba0(&local_1e60,&local_25d0);
  puVar2 = PTR_DAT_04bb43c0;
  local_34b0 = (undefined **)CONCAT44((int)((ulong)local_34b0 >> 0x20),2);
  local_25c8[0] = &local_34b0;
  local_25d0 = &PTR_FUN_049ff4e8;
  uVar14 = 0;
  do {
    (**(code **)((long)local_1e60 + 0x10))(&local_2d40,&local_1e60,uVar14);
    lVar21 = (**(code **)((long)local_1e60 + 0x20))(&local_1e60);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_2d40);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_25d0)(&local_25d0,&local_2d40), (uVar22 & 1) != 0))
        goto LAB_028a1d54;
      }
      lVar21 = (**(code **)((long)local_1e60 + 0x18))(&local_1e60);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a1d54:
    puVar12 = PTR_DAT_04bb43c0;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_34b0._1_7_ = (uint7)((ulong)local_34b0 >> 8) & 0xffffffff000000;
  uVar22 = (ulong)local_25d0 >> 0x20;
  local_25d0 = (undefined **)((ulong)local_25d0 & 0xffffffff00000000);
  local_2d40 = (undefined **)CONCAT44((int)((ulong)local_2d40 >> 0x20),6);
  local_25d0 = (undefined **)CONCAT44((int)uVar22,6);
  local_34b0 = (undefined **)CONCAT71(local_34b0._1_7_,0x41);
  local_25c8[0] = &local_34b0;
  local_25d0 = &PTR_FUN_049ff420;
  uVar14 = 0;
  do {
    (**(code **)((long)local_1e60 + 0x10))(&local_2d40,&local_1e60,uVar14);
    lVar21 = (**(code **)((long)local_1e60 + 0x20))(&local_1e60);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_2d40);
      if (*(long *)puVar12 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_25d0)(&local_25d0,&local_2d40), (uVar22 & 1) != 0))
        goto LAB_028a1f04;
      }
      lVar21 = (**(code **)((long)local_1e60 + 0x18))(&local_1e60);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a1f04:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_25d0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_25c8,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_1e74 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_1e70 = (local_1e74 ^ local_1e74 >> 0x1e) * 0x6c078965 + 2;
  local_1e6c = (local_1e70 ^ local_1e70 >> 0x1e) * 0x6c078965 + 3;
  local_1e68 = (local_1e6c ^ local_1e6c >> 0x1e) * 0x6c078965 + 4;
  memcpy(local_25c8,local_800,0x754);
  pvVar20 = (void *)(**(code **)((long)local_25d0 + 0x18))(&local_25d0);
  lVar23 = (**(code **)((long)local_1e60 + 0x20))(&local_1e60);
  for (lVar21 = 0;
      *(uint *)(local_2d2c + lVar21 + -0x14) =
           *(uint *)(lVar23 + lVar21) | *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)(local_2d2c + lVar21 + -0x10) =
         *(uint *)(lVar23 + lVar21 + 4) | *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_2d40,0x754);
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  pvVar20 = (void *)(**(code **)((long)local_25d0 + 0x18))(&local_25d0);
  lVar23 = (**(code **)(local_16f0 + 0x20))(&local_16f0);
  for (lVar21 = 0;
      *(uint *)(local_2d2c + lVar21 + -0x14) =
           *(uint *)(lVar23 + lVar21) & *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)(local_2d2c + lVar21 + -0x10) =
         *(uint *)(lVar23 + lVar21 + 4) & *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_2d40,0x754);
  local_2d40 = &PTR_FUN_049ff6a0;
  uVar14 = 0;
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  puVar2 = PTR_DAT_04bb43c0;
  local_2d38 = (undefined8 *)local_f7c;
  do {
    (**(code **)((long)local_25d0 + 0x10))(&local_34b0,&local_25d0,uVar14);
    lVar21 = (**(code **)((long)local_25d0 + 0x20))(&local_25d0);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_34b0);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_2d40)(&local_2d40,&local_34b0), (uVar22 & 1) != 0))
        goto LAB_028a21b0;
      }
      lVar21 = (**(code **)((long)local_25d0 + 0x18))(&local_25d0);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a21b0:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  FUN_0289f0d0(param_1,&local_25d0,2,0xffffffff);
  local_1e60 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_1e58,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_1704 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_1700 = (local_1704 ^ local_1704 >> 0x1e) * 0x6c078965 + 2;
  local_16fc = (local_1700 ^ local_1700 >> 0x1e) * 0x6c078965 + 3;
  local_16f8 = (local_16fc ^ local_16fc >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_1e60 + 0x18))(&local_1e60);
  memset(pvVar20,0,0x754);
  local_25d0 = (undefined **)CONCAT44(local_25d0._4_4_,8);
  local_808 = &PTR_FUN_049ff4e8;
  local_800[0] = &local_25d0;
  FUN_008a1ba0(&local_1e60,&local_808);
  pvVar20 = (void *)(**(code **)((long)local_1e60 + 0x18))(&local_1e60);
  lVar23 = (**(code **)(local_16f0 + 0x20))(&local_16f0);
  for (lVar21 = 0;
      *(uint *)((long)local_800 + lVar21 + -8) =
           *(uint *)(lVar23 + lVar21) & *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)((long)local_800 + lVar21 + -4) =
         *(uint *)(lVar23 + lVar21 + 4) & *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_808,0x754);
  lVar23 = param_1 + 0x1500;
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  uVar22 = 0;
  lVar21 = param_1 + 0xe00;
  ppuVar3 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  ppuVar4 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    local_90 = *puVar1;
    FUN_00a81090(&local_90);
    uVar14 = (uint)uVar22;
    iVar18 = 7;
    if (uVar22 != 0) {
      iVar18 = uVar14 - 1;
    }
    local_808 = (undefined **)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    if (iVar18 != 0) {
      local_808 = (undefined **)((long)local_808 + ((long)iVar18 * 86400000000000) / 1000000000);
    }
    local_90 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_808);
    if (((local_90 & 0xff0000) == 0xc0000) && (0x19 < (int)local_90 >> 0x18)) {
      uVar29 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
      if (0x1f < (uint)uVar29) {
        uVar29 = 0;
      }
      if ((&DAT_04058440)[uVar29] != '\0') goto LAB_028a252c;
      local_808 = (undefined **)0x34bd;
      FUN_0277d4ac(&local_808);
      FUN_0289ee00(param_1,&local_808,uVar22,1);
    }
    else {
LAB_028a252c:
      local_94[0] = 0;
      FUN_01b02920(local_94,&local_90,0);
      local_808 = ppuVar3;
      memset(local_800,0,0x754);
      uVar16 = nn::os::GetSystemTick();
      local_ac = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
      local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
      local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
      memcpy(local_800,local_1e58,0x754);
      local_25d0 = &PTR_FUN_049ff6a0;
      uVar16 = 0;
      local_25c8[0] = (undefined8 *)local_94;
      do {
        (*(code *)local_808[2])(&local_2d40,&local_808,uVar16);
        lVar24 = (*(code *)local_808[4])(&local_808);
        puVar12 = PTR_DAT_04bb43c0;
        uVar15 = 1 << (ulong)(uVar16 & 0x1f);
        if ((*(uint *)(lVar24 + (ulong)(uVar16 >> 5) * 4) & uVar15) != 0) {
          lVar24 = *(long *)PTR_DAT_04bb43c0;
          uVar17 = FUN_0277d6c4(&local_2d40);
          if (*(long *)puVar12 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if (((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
               (uVar29 = (*(code *)*local_25d0)(&local_25d0,&local_2d40), (uVar29 & 1) != 0))
            goto LAB_028a2604;
          }
          lVar24 = (*(code *)local_808[3])(&local_808);
          lVar26 = (ulong)(uVar16 >> 5) * 4;
          *(uint *)(lVar24 + lVar26) = *(uint *)(lVar24 + lVar26) & (uVar15 ^ 0xffffffff);
        }
LAB_028a2604:
        uVar16 = uVar16 + 1;
      } while (uVar16 != 15000);
      FUN_02690004(&local_25d0);
      puVar25 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar16 = *puVar25 ^ *puVar25 << 0xb;
      uVar17 = puVar25[3];
      *puVar25 = puVar25[1];
      puVar25[1] = puVar25[2];
      uVar15 = uVar16 ^ uVar17;
      uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar15;
      puVar25[2] = uVar17;
      puVar25[3] = uVar16;
      uVar16 = (uVar16 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
      uVar15 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 2;
      local_818 = CONCAT44(uVar15,uVar16);
      local_810 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
      local_80c = (local_810 ^ local_810 >> 0x1e) * 0x6c078965 + 4;
      lVar26 = (*(code *)local_808[4])(&local_808);
      puVar12 = PTR_DAT_04bb37e0;
      lVar24 = 0;
      iVar18 = 0;
      do {
        puVar25 = (uint *)(lVar26 + lVar24);
        lVar24 = lVar24 + 4;
        uVar16 = *puVar25 - (*puVar25 >> 1 & 0x55555555);
        uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
        uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
        uVar16 = uVar16 + (uVar16 >> 8);
        iVar18 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar18;
      } while (lVar24 != 0x754);
      if (iVar18 == 0) {
        local_34b0 = (undefined **)CONCAT44(local_34b0._4_4_,uVar14);
        lVar24 = 0;
        lVar26 = 0;
        do {
          lVar30 = param_1 + (uVar22 & 0xffffffff) * 0x200;
          if (6 < uVar14) {
            lVar30 = param_1;
          }
          if (*(short *)(lVar30 + lVar24) == -2) {
            lVar6 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
            if (6 < uVar14) {
              lVar6 = lVar21;
            }
            if (-1 < *(int *)(lVar6 + lVar26 * 4)) goto LAB_028a2dcc;
LAB_028a2e10:
            puVar5 = (undefined2 *)(lVar30 + lVar26 * 8);
            puVar27 = &DAT_0407ebb1;
            *puVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
            *(undefined *)(puVar5 + 1) = puVar12[2];
            *(undefined *)((long)puVar5 + 3) = puVar12[3];
            *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar12 + 4);
            lVar24 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
            if (6 < uVar14) {
              lVar24 = lVar21;
            }
            *(undefined4 *)(lVar24 + lVar26 * 4) = 0;
            local_2d0d = 0;
            local_2d2c[0] = 0;
            lVar24 = lVar23 + (uVar22 & 0xffffffff) * 0x40;
            if (6 < uVar14) {
              lVar24 = lVar23;
            }
            *(undefined1 *)(lVar24 + lVar26) = 0;
            local_2d30 = 0x20;
            if (uVar14 < 7) {
              puVar27 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (uVar22 & 0xffffffff) * 8 + 0x40);
            }
            local_2d40 = ppuVar4;
            local_2d38 = (undefined8 *)local_2d2c;
            FUN_038d1270(&local_2d40,"Shop.Zakka.%s.None",puVar27);
            break;
          }
LAB_028a2dcc:
          lVar30 = param_1 + (uVar22 & 0xffffffff) * 0x200;
          if (6 < uVar14) {
            lVar30 = param_1;
          }
          if (*(short *)(lVar30 + lVar24 + 8) == -2) {
            lVar6 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
            if (6 < uVar14) {
              lVar6 = lVar21;
            }
            if (*(int *)(lVar6 + lVar26 * 4 + 4) < 0) {
              lVar26 = lVar26 + 1;
              goto LAB_028a2e10;
            }
          }
          lVar26 = lVar26 + 2;
          lVar24 = lVar24 + 0x10;
        } while (lVar26 != 0x40);
      }
      else {
        iVar18 = FUN_01a4cc70(&local_818,&local_25d0,&local_808,1,0,0,PTR_FUN_04bb67e0,0);
        if (iVar18 < 1) {
          do {
            puVar12 = PTR_DAT_04bb37e0;
            lVar24 = 0;
            lVar26 = 0;
            local_34b0 = (undefined **)CONCAT44(local_34b0._4_4_,uVar14);
            do {
              lVar30 = param_1 + (uVar22 & 0xffffffff) * 0x200;
              if (6 < uVar14) {
                lVar30 = param_1;
              }
              if (*(short *)(lVar30 + lVar24) == -2) {
                lVar6 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
                if (6 < uVar14) {
                  lVar6 = lVar21;
                }
                if (-1 < *(int *)(lVar6 + lVar26 * 4)) goto LAB_028a2878;
LAB_028a28bc:
                puVar5 = (undefined2 *)(lVar30 + lVar26 * 8);
                puVar27 = &DAT_0407ebb1;
                *puVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
                *(undefined *)(puVar5 + 1) = puVar12[2];
                *(undefined *)((long)puVar5 + 3) = puVar12[3];
                *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar12 + 4);
                lVar24 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
                if (6 < uVar14) {
                  lVar24 = lVar21;
                }
                *(undefined4 *)(lVar24 + lVar26 * 4) = 0;
                local_2d0d = 0;
                local_2d2c[0] = 0;
                lVar24 = lVar23 + (uVar22 & 0xffffffff) * 0x40;
                if (6 < uVar14) {
                  lVar24 = lVar23;
                }
                *(undefined1 *)(lVar24 + lVar26) = 0;
                local_2d30 = 0x20;
                local_2d40 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
                if (uVar14 < 7) {
                  puVar27 = *(undefined8 **)
                             (PTR_s_Sunday_04bc3898 + (uVar22 & 0xffffffff) * 8 + 0x40);
                }
                local_2d38 = (undefined8 *)local_2d2c;
                FUN_038d1270(&local_2d40,"Shop.Zakka.%s.None",puVar27);
                break;
              }
LAB_028a2878:
              lVar30 = param_1 + (uVar22 & 0xffffffff) * 0x200;
              if (6 < uVar14) {
                lVar30 = param_1;
              }
              if (*(short *)(lVar30 + lVar24 + 8) == -2) {
                lVar6 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
                if (6 < uVar14) {
                  lVar6 = lVar21;
                }
                if (*(int *)(lVar6 + lVar26 * 4 + 4) < 0) {
                  lVar26 = lVar26 + 1;
                  goto LAB_028a28bc;
                }
              }
              lVar26 = lVar26 + 2;
              lVar24 = lVar24 + 0x10;
            } while (lVar26 != 0x40);
            bVar13 = iVar18 != 0;
            iVar18 = iVar18 + 1;
          } while (bVar13);
        }
        else {
          uVar17 = iVar18 - 1;
          uVar15 = 0;
          uVar16 = 0;
          if (0x1e < uVar17) {
            uVar17 = 0x1f;
          }
          do {
            puVar12 = PTR_DAT_04bb43c0;
            lVar24 = (long)((ulong)uVar16 << 0x20) >> 0x1d;
            uVar11 = *(undefined2 *)((long)local_25c8 + lVar24 + -8);
            uVar9 = *(undefined1 *)((long)local_25c8 + lVar24 + -6);
            uVar10 = *(undefined1 *)((long)local_25c8 + lVar24 + -5);
            uVar8 = *(undefined4 *)((long)local_25c8 + lVar24 + -4);
            lVar24 = *(long *)PTR_DAT_04bb43c0;
            local_820 = uVar11;
            local_81e = uVar9;
            local_81d = uVar10;
            local_81c = uVar8;
            uVar19 = FUN_0277d6c4(&local_820);
            lVar26 = *(long *)puVar12;
            if (lVar26 != 0) {
              lVar24 = *(long *)(lVar24 + 0x57e58);
              uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              if ((uVar19 < *(uint *)(lVar24 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
                local_f68 = 0;
                local_f70 = (char *)CONCAT44(uVar8,CONCAT13(uVar10,CONCAT12(uVar9,uVar11)));
                local_f78 = (undefined **)puVar2;
                uVar19 = FUN_0277d6c4(&local_f70);
                if (*(long *)PTR_DAT_04bb43c0 != 0) {
                  lVar24 = *(long *)(lVar26 + 0x57e58);
                  uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if ((uVar19 < *(uint *)(lVar24 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
                    lVar24 = *(long *)PTR_DAT_04bc0428;
                    uVar19 = FUN_0277d6c4(&local_820);
                    uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                    if (uVar19 < *(uint *)(lVar24 + 0x1d8)) {
                      lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8);
                      if (lVar24 != 0) {
                        local_f68 = lVar24;
                      }
                    }
                  }
                }
                lVar24 = 0;
                lVar26 = 0;
                do {
                  lVar30 = param_1 + (uVar22 & 0xffffffff) * 0x200;
                  if (6 < uVar14) {
                    lVar30 = param_1;
                  }
                  local_6c = uVar14;
                  if (*(short *)(lVar30 + lVar24) == -2) {
                    lVar6 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
                    if (6 < uVar14) {
                      lVar6 = lVar21;
                    }
                    if (-1 < *(int *)(lVar6 + lVar26 * 4)) goto LAB_028a2b18;
LAB_028a2b5c:
                    puVar27 = (undefined8 *)(lVar30 + lVar26 * 8);
                    *(undefined2 *)puVar27 = uVar11;
                    *(undefined1 *)((long)puVar27 + 2) = uVar9;
                    *(undefined1 *)((long)puVar27 + 3) = uVar10;
                    *(undefined4 *)((long)puVar27 + 4) = uVar8;
                    lVar24 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
                    if (6 < uVar14) {
                      lVar24 = lVar21;
                    }
                    *(undefined4 *)(lVar24 + lVar26 * 4) = 0xffffffff;
                    lVar24 = lVar23 + (uVar22 & 0xffffffff) * 0x40;
                    if (6 < uVar14) {
                      lVar24 = lVar23;
                    }
                    *(undefined1 *)(lVar24 + lVar26) = 1;
                    puVar12 = PTR_DAT_04bb43c0;
                    local_34a8 = (undefined8 *)*puVar27;
                    local_34a0 = (uint *)0x0;
                    local_34b0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                    lVar24 = *(long *)PTR_DAT_04bb43c0;
                    uVar19 = FUN_0277d6c4(&local_34a8);
                    if (*(long *)puVar12 != 0) {
                      lVar24 = *(long *)(lVar24 + 0x57e58);
                      uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                      if ((uVar19 < *(uint *)(lVar24 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
                        lVar24 = *(long *)PTR_DAT_04bc0428;
                        uVar19 = FUN_0277d6c4(puVar27);
                        uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                        if (uVar19 < *(uint *)(lVar24 + 0x1d8)) {
                          puVar25 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8);
                          if (puVar25 != (uint *)0x0) {
                            local_34a0 = puVar25;
                          }
                        }
                      }
                    }
                    FUN_01afb1a0(&local_34b0,&local_80);
                    local_2d0d = 0;
                    puVar27 = &DAT_0407ebb1;
                    local_2d30 = 0x20;
                    local_2d2c[0] = 0;
                    local_2d40 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
                    if (local_6c < 7) {
                      puVar27 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_6c * 8 + 0x40)
                      ;
                    }
                    if (local_34a0 == (uint *)0x0) {
                      local_84 = 0xbc;
                    }
                    else {
                      uVar19 = *local_34a0;
                      local_84 = 0;
                      if ((uVar19 != 0) && (local_34a0 != (uint *)(ulong)uVar19)) {
                        puVar25 = (uint *)((long)local_34a0 - (long)(ulong)uVar19);
                        local_84 = 0;
                        if (*puVar25 != 0) {
                          uVar19 = puVar25[1];
                          if ((uVar19 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
                            lVar24 = 0xc;
                            if (*(char *)((long)puVar25 + 10) != '\0') {
                              lVar24 = 0x1c;
                            }
                            lVar24 = (long)puVar25 + lVar24 + (ulong)(ushort)puVar25[2] * 8;
                            if (lVar24 != 0) {
                              uVar7 = 0;
                              if ((ulong)uVar19 != 0) {
                                uVar7 = (uint)((ulong)((long)local_34a0 - lVar24) / (ulong)uVar19);
                              }
                              if (*puVar25 <= uVar7) {
                                uVar7 = 0xffffffff;
                              }
                              if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
                                 (local_84 = (uint)*(ushort *)
                                                    (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                    (long)(int)uVar7 * 2), local_84 < 0xbd))
                              goto LAB_028a2d3c;
                            }
                          }
                          local_84 = 0;
                        }
                      }
                    }
LAB_028a2d3c:
                    puVar28 = &DAT_0407ebb1;
                    if (local_84 < 0xbd) {
                      puVar28 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_84 * 8 + 0x830);
                    }
                    local_2d38 = (undefined8 *)local_2d2c;
                    FUN_038d1270(&local_2d40,"Shop.Zakka.%s.%s",puVar27,puVar28);
                    break;
                  }
LAB_028a2b18:
                  lVar30 = param_1 + (uVar22 & 0xffffffff) * 0x200;
                  if (6 < uVar14) {
                    lVar30 = param_1;
                  }
                  if (*(short *)(lVar30 + lVar24 + 8) == -2) {
                    lVar6 = lVar21 + (uVar22 & 0xffffffff) * 0x100;
                    if (6 < uVar14) {
                      lVar6 = lVar21;
                    }
                    if (*(int *)(lVar6 + lVar26 * 4 + 4) < 0) {
                      lVar26 = lVar26 + 1;
                      goto LAB_028a2b5c;
                    }
                  }
                  lVar26 = lVar26 + 2;
                  lVar24 = lVar24 + 0x10;
                } while (lVar26 != 0x40);
              }
            }
            uVar16 = uVar16 + 1;
            bVar13 = uVar15 != uVar17;
            uVar15 = uVar15 + 1;
          } while (bVar13);
        }
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 7);
  local_808 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_800,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
  memset(pvVar20,0,0x754);
  local_25d0 = (undefined **)((ulong)local_25d0 & 0xffffffff00000000);
  local_1e58[0] = &local_25d0;
  local_1e60 = &PTR_FUN_049ff538;
  FUN_008a1ba0(&local_808,&local_1e60);
  FUN_0289ed30(&local_808);
  puVar2 = PTR_DAT_04bb43c0;
  local_1e58[0] = &local_2d40;
  local_2d40 = (undefined **)CONCAT44(local_2d40._4_4_,1);
  local_1e60 = &PTR_FUN_049ff4e8;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a3004;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a3004:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_1e60 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_1e58,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_1704 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_1700 = (local_1704 ^ local_1704 >> 0x1e) * 0x6c078965 + 2;
  local_16fc = (local_1700 ^ local_1700 >> 0x1e) * 0x6c078965 + 3;
  local_16f8 = (local_16fc ^ local_16fc >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_1e60 + 0x18))(&local_1e60);
  memset(pvVar20,0,0x754);
  local_25d0 = &PTR_FUN_049ff538;
  local_25c8[0] = &local_2d40;
  FUN_008a1ba0(&local_1e60,&local_25d0);
  local_25d0 = &PTR_FUN_049ff538;
  local_2d40 = (undefined **)CONCAT44((int)((ulong)local_2d40 >> 0x20),5);
  local_25c8[0] = &local_2d40;
  FUN_008a1ba0(&local_1e60,&local_25d0);
  puVar2 = PTR_DAT_04bb43c0;
  local_25c8[0] = &local_34b0;
  local_25d0 = &PTR_FUN_049ff4e8;
  local_34b0 = (undefined **)CONCAT44(local_34b0._4_4_,1);
  uVar14 = 0;
  do {
    (**(code **)((long)local_1e60 + 0x10))(&local_2d40,&local_1e60,uVar14);
    lVar21 = (**(code **)((long)local_1e60 + 0x20))(&local_1e60);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_2d40);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_25d0)(&local_25d0,&local_2d40), (uVar22 & 1) != 0))
        goto LAB_028a31e8;
      }
      lVar21 = (**(code **)((long)local_1e60 + 0x18))(&local_1e60);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a31e8:
    puVar12 = PTR_DAT_04bb43c0;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_34b0._1_7_ = (uint7)((ulong)local_34b0 >> 8) & 0xffffffff000000;
  local_2d40 = (undefined **)CONCAT44(local_2d40._4_4_,1);
  local_25d0 = (undefined **)CONCAT44(local_25d0._4_4_,1);
  local_34b0 = (undefined **)CONCAT71(local_34b0._1_7_,2);
  local_25c8[0] = &local_34b0;
  local_25d0 = &PTR_FUN_049ff420;
  uVar14 = 0;
  do {
    (**(code **)((long)local_1e60 + 0x10))(&local_2d40,&local_1e60,uVar14);
    lVar21 = (**(code **)((long)local_1e60 + 0x20))(&local_1e60);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_2d40);
      if (*(long *)puVar12 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_25d0)(&local_25d0,&local_2d40), (uVar22 & 1) != 0))
        goto LAB_028a3344;
      }
      lVar21 = (**(code **)((long)local_1e60 + 0x18))(&local_1e60);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a3344:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  puVar2 = PTR_DAT_04bbfe60 + 0x10;
  local_25d0 = (undefined **)puVar2;
  memset(local_25c8,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_1e74 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_1e70 = (local_1e74 ^ local_1e74 >> 0x1e) * 0x6c078965 + 2;
  local_1e6c = (local_1e70 ^ local_1e70 >> 0x1e) * 0x6c078965 + 3;
  local_1e68 = (local_1e6c ^ local_1e6c >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_25d0 + 0x18))(&local_25d0);
  memset(pvVar20,0,0x754);
  local_34b0 = (undefined **)CONCAT44(local_34b0._4_4_,5);
  local_2d38 = &local_34b0;
  local_2d40 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_25d0,&local_2d40);
  local_2d40 = (undefined **)puVar2;
  memset(&local_2d38,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_25e4 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_25e0 = (local_25e4 ^ local_25e4 >> 0x1e) * 0x6c078965 + 2;
  local_25dc = (local_25e0 ^ local_25e0 >> 0x1e) * 0x6c078965 + 3;
  local_25d8 = (local_25dc ^ local_25dc >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_2d40 + 0x18))(&local_2d40);
  memset(pvVar20,0,0x754);
  local_f78 = (undefined **)CONCAT44(local_f78._4_4_,7);
  local_34b0 = &PTR_FUN_049ff4e8;
  local_34a8 = &local_f78;
  FUN_008a1ba0(&local_2d40,&local_34b0);
  local_34b0 = (undefined **)puVar2;
  memset(&local_34a8,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_2d54 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_2d50 = (local_2d54 ^ local_2d54 >> 0x1e) * 0x6c078965 + 2;
  local_2d4c = (local_2d50 ^ local_2d50 >> 0x1e) * 0x6c078965 + 3;
  local_2d48 = (local_2d4c ^ local_2d4c >> 0x1e) * 0x6c078965 + 4;
  memcpy(&local_34a8,local_800,0x754);
  pvVar20 = (void *)(**(code **)((long)local_34b0 + 0x18))(&local_34b0);
  lVar23 = (**(code **)((long)local_1e60 + 0x20))(&local_1e60);
  for (lVar21 = 0;
      *(uint *)((long)&local_f78 + lVar21) =
           *(uint *)(lVar23 + lVar21) | *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)(local_f7c + lVar21 + 8) =
         *(uint *)(lVar23 + lVar21 + 4) | *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_f78,0x754);
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  pvVar20 = (void *)(**(code **)((long)local_34b0 + 0x18))(&local_34b0);
  lVar23 = (**(code **)((long)local_25d0 + 0x20))(&local_25d0);
  for (lVar21 = 0;
      *(uint *)(local_f7c + lVar21 + 4) =
           *(uint *)(lVar23 + lVar21) | *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)(local_f7c + lVar21 + 8) =
         *(uint *)(lVar23 + lVar21 + 4) | *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_f78,0x754);
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  pvVar20 = (void *)(**(code **)((long)local_34b0 + 0x18))(&local_34b0);
  lVar23 = (**(code **)((long)local_2d40 + 0x20))(&local_2d40);
  for (lVar21 = 0;
      *(uint *)(local_f7c + lVar21 + 4) =
           *(uint *)(lVar23 + lVar21) | *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)(local_f7c + lVar21 + 8) =
         *(uint *)(lVar23 + lVar21 + 4) | *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_f78,0x754);
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  pvVar20 = (void *)(**(code **)((long)local_34b0 + 0x18))(&local_34b0);
  lVar23 = (**(code **)(local_16f0 + 0x20))(&local_16f0);
  for (lVar21 = 0;
      *(uint *)(local_f7c + lVar21 + 4) =
           *(uint *)(lVar23 + lVar21) & *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)(local_f7c + lVar21 + 8) =
         *(uint *)(lVar23 + lVar21 + 4) & *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_f78,0x754);
  local_f78 = &PTR_FUN_049ff6a0;
  uVar14 = 0;
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  puVar2 = PTR_DAT_04bb43c0;
  local_f70 = local_f7c;
  do {
    (**(code **)((long)local_34b0 + 0x10))(&local_80,&local_34b0,uVar14);
    lVar21 = (**(code **)((long)local_34b0 + 0x20))(&local_34b0);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_f78)(&local_f78,&local_80), (uVar22 & 1) != 0))
        goto LAB_028a3820;
      }
      lVar21 = (**(code **)((long)local_34b0 + 0x18))(&local_34b0);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a3820:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_f70 = "ShopSocksFlag";
  local_f78 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  uVar22 = FUN_0273f0a0(&local_f78);
  if ((uVar22 & 1) != 0) {
    local_80 = *puVar1;
    FUN_00a81090(&local_80);
    local_818 = local_80;
    lVar21 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_818);
    local_f78 = (undefined **)(lVar21 + 0xa8c00);
    local_818 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f78);
    if ((local_80._2_1_ == '\f') && ((local_818 & 0xff0000) == 0xc0000)) {
      local_f78 = &PTR_FUN_049ff4e8;
      local_90 = CONCAT44(local_90._4_4_,6);
      local_f70 = (char *)&local_90;
      FUN_008a1ba0(&local_34b0,&local_f78);
    }
  }
  FUN_0289f0d0(param_1,&local_34b0,2,1);
  local_808 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_800,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
  memset(pvVar20,0,0x754);
  local_25d0._0_4_ = 3;
  local_1e60 = &PTR_FUN_049ff4e8;
  local_1e58[0] = &local_25d0;
  FUN_008a1ba0(&local_808,&local_1e60);
  local_1e60 = &PTR_FUN_049ff4e8;
  local_25d0 = (undefined **)CONCAT44(local_25d0._4_4_,4);
  local_1e58[0] = &local_25d0;
  FUN_008a1ba0(&local_808,&local_1e60);
  pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
  lVar23 = (**(code **)(local_16f0 + 0x20))(&local_16f0);
  for (lVar21 = 0;
      *(uint *)((long)local_1e58 + lVar21 + -8) =
           *(uint *)(lVar23 + lVar21) & *(uint *)((long)pvVar20 + lVar21), lVar21 != 0x750;
      lVar21 = lVar21 + 8) {
    *(uint *)((long)local_1e58 + lVar21 + -4) =
         *(uint *)(lVar23 + lVar21 + 4) & *(uint *)((long)pvVar20 + lVar21 + 4);
  }
  memcpy(pvVar20,&local_1e60,0x754);
  local_1e60 = &PTR_FUN_049ff6a0;
  uVar14 = 0;
  *(uint *)((long)pvVar20 + 0x750) = *(uint *)((long)pvVar20 + 0x750) & 0xffffff;
  puVar2 = PTR_DAT_04bb43c0;
  local_1e58[0] = (undefined8 *)local_f7c;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a3b68;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a3b68:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  FUN_0289f0d0(param_1,&local_808,1,1);
  FUN_028a49b0(param_1,param_2);
  FUN_0289e220(param_1,param_2,0xffffffff);
  local_808 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_800,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
  memset(pvVar20,0,0x754);
  FUN_01a44940(&local_808,0,0xffffffffffffffff);
  puVar2 = PTR_DAT_04bb43c0;
  local_2d40 = (undefined **)CONCAT44(local_2d40._4_4_,4);
  local_1e58[0] = &local_2d40;
  local_1e60 = &PTR_FUN_049ff448;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a3d54;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a3d54:
    puVar12 = PTR_DAT_04bb43c0;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_1e58[0] = (undefined8 *)local_f7c;
  local_1e60 = &PTR_FUN_049ff6a0;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar12 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a3e64;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a3e64:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  FUN_0289e6c0(param_1,&local_808,8,0);
  local_808 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_800,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
  memset(pvVar20,0,0x754);
  FUN_01a44940(&local_808,0,0xffffffffffffffff);
  puVar2 = PTR_DAT_04bb43c0;
  local_2d40 = (undefined **)CONCAT44(local_2d40._4_4_,5);
  local_1e58[0] = &local_2d40;
  local_1e60 = &PTR_FUN_049ff448;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a4034;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a4034:
    puVar12 = PTR_DAT_04bb43c0;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_1e58[0] = (undefined8 *)local_f7c;
  local_1e60 = &PTR_FUN_049ff6a0;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar12 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a4144;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a4144:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  FUN_0289e6c0(param_1,&local_808,8,0);
  local_808 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(local_800,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  pvVar20 = (void *)FUN_01a451fc(&local_808);
  memset(pvVar20,0,0x754);
  local_25d0._0_4_ = 0xf;
  local_1e60 = &PTR_FUN_049ff4e8;
  local_1e58[0] = &local_25d0;
  FUN_008a1ba0(&local_808,&local_1e60);
  local_1e60 = &PTR_FUN_049ff4e8;
  local_25d0 = (undefined **)CONCAT44(local_25d0._4_4_,0x10);
  local_1e58[0] = &local_25d0;
  FUN_008a1ba0(&local_808,&local_1e60);
  puVar2 = PTR_DAT_04bb43c0;
  local_2d40 = (undefined **)CONCAT44(local_2d40._4_4_,0x14);
  local_1e58[0] = &local_2d40;
  local_1e60 = &PTR_FUN_049ff448;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar2;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar2 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a4348;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a4348:
    puVar12 = PTR_DAT_04bb43c0;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  local_1e58[0] = (undefined8 *)local_f7c;
  local_1e60 = &PTR_FUN_049ff6a0;
  uVar14 = 0;
  do {
    (**(code **)((long)local_808 + 0x10))(&local_25d0,&local_808,uVar14);
    lVar21 = (**(code **)((long)local_808 + 0x20))(&local_808);
    uVar16 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar16) != 0) {
      lVar21 = *(long *)puVar12;
      uVar15 = FUN_0277d6c4(&local_25d0);
      if (*(long *)puVar12 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (((uVar15 < *(uint *)(lVar21 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_1e60)(&local_1e60,&local_25d0), (uVar22 & 1) != 0))
        goto LAB_028a4454;
      }
      lVar21 = (**(code **)((long)local_808 + 0x18))(&local_808);
      lVar23 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar23) = *(uint *)(lVar21 + lVar23) & (uVar16 ^ 0xffffffff);
    }
LAB_028a4454:
    uVar14 = uVar14 + 1;
    if (uVar14 == 15000) {
      FUN_0289e6c0(param_1,&local_808,2,0);
      puVar2 = PTR_DAT_04bbfe60 + 0x10;
      local_808 = (undefined **)puVar2;
      memset(local_800,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
      local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
      pvVar20 = (void *)FUN_01a451fc(&local_808);
      memset(pvVar20,0,0x754);
      local_25d0 = (undefined **)CONCAT44(local_25d0._4_4_,0x11);
      local_1e58[0] = &local_25d0;
      local_1e60 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(&local_808,&local_1e60);
      FUN_0289e6c0(param_1,&local_808,2,0);
      if (((DAT_055aed48 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_055aed48), iVar18 != 0)) {
        DAT_055aed34 = 0x1500000014;
        DAT_055aed3c = 0x1700000016;
        DAT_055aed44 = 0x18;
        __cxa_guard_release(&DAT_055aed48);
      }
      local_808 = (undefined **)puVar2;
      memset(local_800,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
      local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
      pvVar20 = (void *)FUN_01a451fc(&local_808);
      memset(pvVar20,0,0x754);
      local_1e60 = &PTR_FUN_049ff4e8;
      local_1e58[0] = &DAT_055aed34;
      FUN_008a1ba0(&local_808,&local_1e60);
      FUN_0289e6c0(param_1,&local_808,1,1);
      local_808 = (undefined **)puVar2;
      memset(local_800,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
      local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
      pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
      memset(pvVar20,0,0x754);
      local_1e60 = &PTR_FUN_049ff4e8;
      local_1e58[0] = (undefined8 *)((long)&DAT_055aed34 + 4);
      FUN_008a1ba0(&local_808,&local_1e60);
      FUN_0289e6c0(param_1,&local_808,1,1);
      local_808 = (undefined **)puVar2;
      memset(local_800,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
      local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
      pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
      memset(pvVar20,0,0x754);
      local_1e60 = &PTR_FUN_049ff4e8;
      local_1e58[0] = &DAT_055aed3c;
      FUN_008a1ba0(&local_808,&local_1e60);
      FUN_0289e6c0(param_1,&local_808,1,1);
      local_808 = (undefined **)puVar2;
      memset(local_800,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
      local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
      pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
      memset(pvVar20,0,0x754);
      local_1e60 = &PTR_FUN_049ff4e8;
      local_1e58[0] = (undefined8 *)((long)&DAT_055aed3c + 4);
      FUN_008a1ba0(&local_808,&local_1e60);
      FUN_0289e6c0(param_1,&local_808,1,1);
      local_808 = (undefined **)puVar2;
      memset(local_800,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_ac = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
      local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
      local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
      pvVar20 = (void *)(**(code **)((long)local_808 + 0x18))(&local_808);
      memset(pvVar20,0,0x754);
      local_1e60 = &PTR_FUN_049ff4e8;
      local_1e58[0] = (undefined8 *)&DAT_055aed44;
      FUN_008a1ba0(&local_808,&local_1e60);
      FUN_0289e6c0(param_1,&local_808,1,1);
      return;
    }
  } while( true );
}

