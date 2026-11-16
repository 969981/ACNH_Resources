
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffd2f0 : 0x028fc0dc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_028faeb0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined2 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined *puVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  void *pvVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  undefined1 uVar23;
  long lVar24;
  int *piVar25;
  undefined1 uVar26;
  long lVar27;
  short *psVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 local_2d10;
  undefined4 local_2d0c;
  undefined8 local_2d08;
  undefined8 local_2d00;
  uint *local_2cf8;
  uint local_25ac;
  uint local_25a8;
  uint local_25a4;
  int local_25a0;
  undefined8 local_2598;
  undefined8 local_2590;
  undefined1 local_2588 [5];
  undefined3 uStack_2583;
  undefined1 local_2565;
  uint local_1e3c;
  uint local_1e38;
  uint local_1e34;
  int local_1e30;
  undefined8 local_1e24;
  uint local_1e1c [3];
  undefined8 local_1e10;
  uint *local_1e08;
  undefined4 local_1e00;
  undefined1 local_1dfc [31];
  undefined1 local_1ddd;
  uint local_16b4;
  uint local_16b0;
  uint local_16ac;
  int local_16a8;
  undefined8 local_16a0;
  undefined1 auStack_1698 [1876];
  uint local_f44;
  uint local_f40;
  uint local_f3c;
  int local_f38;
  undefined *local_f30;
  char *local_f28 [234];
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  
  puVar9 = PTR_DAT_04bb2020;
  local_f28[0] = "ShopFtrHighRankCancel";
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_f30 = puVar1;
  sVar10 = FUN_02758850(&local_f30);
  if (sVar10 != 0) {
    local_f28[0] = "ShopFtrHighRankCancel";
    local_f30 = puVar1;
    FUN_02758bb8(&local_f30,sVar10 + -1);
  }
  local_f30 = PTR_DAT_04bbfe60 + 0x10;
  memset(local_f28,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7d4 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)(local_f30 + 0x18))(&local_f30);
  memset(pvVar16,0,0x754);
  pvVar16 = (void *)(**(code **)(local_f30 + 0x18))(&local_f30);
  memset(pvVar16,0,0x754);
  uVar11 = 0;
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar27 = param_1 + ((long)((ulong)uVar11 << 0x20) >> 0x1d);
    uVar12 = FUN_0277d6c4(lVar27);
    lVar21 = *(long *)PTR_DAT_04bb43c0;
    if (lVar21 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        FUN_0277dedc(lVar27);
        lVar24 = (**(code **)(local_f30 + 0x18))(&local_f30);
        uVar12 = FUN_0277d6c4(lVar27);
        lVar21 = *(long *)PTR_DAT_04bb43c0;
        if ((uVar12 >> 3 & 0x1fff) < 0x753) {
          lVar27 = (ulong)((uVar12 & 0xffff) >> 5) * 4;
          *(uint *)(lVar24 + lVar27) = *(uint *)(lVar24 + lVar27) | 1 << (ulong)(uVar12 & 0x1f);
        }
      }
    }
    uVar11 = uVar11 + 1;
    lVar24 = lVar21;
  } while (uVar11 != 0x40);
  pvVar16 = (void *)(**(code **)(local_f30 + 0x18))(&local_f30);
  for (lVar24 = 0; *(uint *)(auStack_1698 + lVar24 + -8) = ~*(uint *)((long)pvVar16 + lVar24),
      lVar24 != 0x750; lVar24 = lVar24 + 8) {
    *(uint *)(auStack_1698 + lVar24 + -4) = ~*(uint *)((long)pvVar16 + lVar24 + 4);
  }
  memcpy(pvVar16,&local_16a0,0x754);
  puVar1 = PTR_DAT_04bb37e0;
  uVar11 = 0;
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  uVar7 = *(undefined2 *)puVar1;
  uVar23 = puVar1[2];
  uVar26 = puVar1[3];
  uVar13 = *(undefined4 *)(puVar1 + 4);
  do {
    uVar22 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar4 = (undefined2 *)(param_1 + ((long)(uVar22 << 0x20) >> 0x1d));
    *puVar4 = uVar7;
    *(undefined1 *)(puVar4 + 1) = uVar23;
    *(undefined1 *)((long)puVar4 + 3) = uVar26;
    *(undefined4 *)(puVar4 + 2) = uVar13;
  } while (uVar11 != 0x40);
  uVar22 = 0;
  lVar24 = param_1 + 0x200;
  do {
    lVar27 = uVar22 << 0x20;
    uVar18 = uVar22 << 2;
    uVar8 = uVar22 >> 0x1f;
    uVar11 = (int)uVar22 + 2;
    uVar22 = (ulong)uVar11;
    *(undefined4 *)(lVar24 + (-uVar8 & 0xfffffffc00000000 | uVar18)) = 0xffffffff;
    *(undefined4 *)(lVar24 + (lVar27 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  local_16a0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_1698,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_f44 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
  local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
  local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
  memset(pvVar16,0,0x754);
  pvVar16 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
  memset(pvVar16,0,0x754);
  pvVar16 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
  for (lVar27 = 0; *(uint *)((long)local_1e1c + lVar27 + 0xc) = ~*(uint *)((long)pvVar16 + lVar27),
      lVar27 != 0x750; lVar27 = lVar27 + 8) {
    *(uint *)((long)local_1e1c + lVar27 + 0x10) = ~*(uint *)((long)pvVar16 + lVar27 + 4);
  }
  memcpy(pvVar16,&local_1e10,0x754);
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  pvVar16 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
  lVar21 = (**(code **)(local_f30 + 0x20))(&local_f30);
  for (lVar27 = 0;
      *(uint *)((long)local_1e1c + lVar27 + 0xc) =
           *(uint *)(lVar21 + lVar27) & *(uint *)((long)pvVar16 + lVar27), lVar27 != 0x750;
      lVar27 = lVar27 + 8) {
    *(uint *)((long)local_1e1c + lVar27 + 0x10) =
         *(uint *)(lVar21 + lVar27 + 4) & *(uint *)((long)pvVar16 + lVar27 + 4);
  }
  memcpy(pvVar16,&local_1e10,0x754);
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  local_1e10 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_1e08,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_16b4 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 2;
  local_16ac = (local_16b0 ^ local_16b0 >> 0x1e) * 0x6c078965 + 3;
  local_16a8 = (local_16ac ^ local_16ac >> 0x1e) * 0x6c078965 + 4;
  pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
  memset(pvVar16,0,0x754);
  local_2d08 = (undefined **)((ulong)local_2d08 & 0xffffffff00000000);
  local_2598 = &PTR_FUN_049ff448;
  local_2590 = &local_2d08;
  FUN_008a1ba0(&local_1e10,&local_2598);
  local_2d08._0_4_ = 0x77;
  local_2598 = &PTR_FUN_049ff448;
  local_2590 = &local_2d08;
  FUN_008a1ba0(&local_1e10,&local_2598);
  local_2d08._0_4_ = 0x29;
  local_2598 = &PTR_FUN_049ff448;
  local_2590 = &local_2d08;
  FUN_008a1ba0(&local_1e10,&local_2598);
  pvVar16 = (void *)(**(code **)(local_16a0 + 0x18))(&local_16a0);
  lVar21 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
  for (lVar27 = 0;
      *(uint *)(local_2588 + lVar27 + -0x10) =
           *(uint *)(lVar21 + lVar27) & *(uint *)((long)pvVar16 + lVar27), lVar27 != 0x750;
      lVar27 = lVar27 + 8) {
    *(uint *)(local_2588 + lVar27 + -0xc) =
         *(uint *)(lVar21 + lVar27 + 4) & *(uint *)((long)pvVar16 + lVar27 + 4);
  }
  memcpy(pvVar16,&local_2598,0x754);
  *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
  uVar13 = FUN_0252d29c();
  local_2d08 = (undefined **)CONCAT44(local_2d08._4_4_,uVar13);
  local_1e08 = (uint *)0x409155d;
  local_1e10 = (undefined **)(puVar9 + 0x10);
  iVar14 = FUN_0274ce10(&local_2d08,&local_1e10);
  puVar1 = PTR_DAT_04bb43c0;
  if (iVar14 == 0) {
    local_1e10 = &PTR_FUN_049ff538;
    local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,0xe);
    local_1e08 = (uint *)&local_7c0;
    uVar11 = 0;
    do {
      (**(code **)(local_16a0 + 0x10))(&local_2598,&local_16a0,uVar11);
      lVar27 = (**(code **)(local_16a0 + 0x20))(&local_16a0);
      uVar12 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar27 + (ulong)(uVar11 >> 5) * 4) & uVar12) != 0) {
        lVar27 = *(long *)puVar1;
        uVar15 = FUN_0277d6c4(&local_2598);
        if (*(long *)puVar1 != 0) {
          lVar27 = *(long *)(lVar27 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if (((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
             (uVar22 = (*(code *)*local_1e10)(&local_1e10,&local_2598), (uVar22 & 1) == 0))
          goto LAB_028fb568;
        }
        lVar27 = (**(code **)(local_16a0 + 0x18))(&local_16a0);
        lVar21 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar27 + lVar21) = *(uint *)(lVar27 + lVar21) & (uVar12 ^ 0xffffffff);
      }
LAB_028fb568:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
  }
  local_1e08 = (uint *)0x4091051;
  local_1e10 = (undefined **)(puVar9 + 0x10);
  iVar14 = FUN_02758850(&local_1e10);
  puVar1 = PTR_DAT_04bb39d8;
  local_1e24._0_4_ = 0;
  local_1e24._4_4_ = 1;
  local_1e1c[0] = 2;
  local_1e1c[1] = 3;
  local_1e1c[2] = 4;
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar11 = *puVar17 ^ *puVar17 << 0xb;
  uVar12 = puVar17[3];
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
  puVar17[2] = uVar12;
  puVar17[3] = uVar11;
  bVar5 = (uVar11 & 1) != 0;
  if (!bVar5) {
    local_1e24._0_4_ = 1;
    local_1e24._4_4_ = 0;
  }
  uVar15 = (uint)bVar5;
  uVar30 = (uint)!bVar5;
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar12 = puVar17[3];
  uVar11 = *puVar17 ^ *puVar17 << 0xb;
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
  puVar17[2] = uVar12;
  puVar17[3] = uVar11;
  uVar12 = uVar30;
  uVar31 = 2;
  if ((uVar11 & 1) == 0) {
    local_1e24._0_4_ = 2;
    local_1e1c[0] = (uint)!bVar5;
    uVar12 = 2;
    uVar31 = uVar30;
  }
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar30 = puVar17[3];
  uVar11 = *puVar17 ^ *puVar17 << 0xb;
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar11 = uVar11 >> 8 ^ uVar30 >> 0x13 ^ uVar11 ^ uVar30;
  puVar17[2] = uVar30;
  puVar17[3] = uVar11;
  uVar30 = uVar12;
  uVar32 = 3;
  if ((uVar11 & 1) == 0) {
    local_1e24._0_4_ = 3;
    uVar30 = 3;
    uVar32 = uVar12;
    local_1e1c[1] = uVar12;
  }
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar11 = *puVar17 ^ *puVar17 << 0xb;
  uVar12 = puVar17[3];
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
  puVar17[2] = uVar12;
  puVar17[3] = uVar11;
  if ((uVar11 & 1) == 0) {
    uVar11 = 4;
    uVar12 = uVar30;
    local_1e1c[2] = uVar30;
  }
  else {
    uVar12 = 4;
    uVar11 = uVar30;
  }
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar30 = *puVar17 ^ *puVar17 << 0xb;
  uVar6 = puVar17[3];
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar30 = uVar30 >> 8 ^ uVar6 >> 0x13 ^ uVar30 ^ uVar6;
  puVar17[2] = uVar6;
  puVar17[3] = uVar30;
  if ((uVar30 & 1) == 0) {
    uVar30 = uVar11;
    local_1e24._0_4_ = uVar15;
    local_1e24._4_4_ = uVar11;
  }
  else {
    uVar30 = uVar15;
    uVar15 = uVar11;
  }
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar11 = *puVar17 ^ *puVar17 << 0xb;
  uVar6 = puVar17[3];
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar11 = uVar11 >> 8 ^ uVar6 >> 0x13 ^ uVar11 ^ uVar6;
  puVar17[2] = uVar6;
  puVar17[3] = uVar11;
  if ((uVar11 & 1) == 0) {
    local_1e24._4_4_ = uVar31;
    local_1e1c[0] = uVar30;
  }
  else {
    uVar31 = uVar30;
  }
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar11 = *puVar17 ^ *puVar17 << 0xb;
  uVar30 = puVar17[3];
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar11 = uVar11 >> 8 ^ uVar30 >> 0x13 ^ uVar11 ^ uVar30;
  puVar17[2] = uVar30;
  puVar17[3] = uVar11;
  if ((uVar11 & 1) == 0) {
    local_1e24._4_4_ = uVar32;
    local_1e1c[1] = uVar31;
  }
  else {
    uVar32 = uVar31;
  }
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
  uVar11 = *puVar17 ^ *puVar17 << 0xb;
  uVar31 = puVar17[3];
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar11 = uVar11 >> 8 ^ uVar31 >> 0x13 ^ uVar11 ^ uVar31;
  puVar17[2] = uVar31;
  puVar17[3] = uVar11;
  if ((uVar11 & 1) == 0) {
    local_1e1c[2] = uVar32;
    local_1e24._4_4_ = uVar12;
  }
  lVar27 = 0;
  uVar11 = uVar15;
  do {
    puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
    uVar12 = *puVar17 ^ *puVar17 << 0xb;
    uVar31 = puVar17[3];
    *puVar17 = puVar17[1];
    puVar17[1] = puVar17[2];
    uVar12 = uVar12 >> 8 ^ uVar31 >> 0x13 ^ uVar12 ^ uVar31;
    puVar17[2] = uVar31;
    puVar17[3] = uVar12;
    if ((uVar12 & 1) == 0) {
      uVar15 = local_1e1c[lVar27];
      local_1e1c[lVar27] = uVar11;
      uVar11 = uVar15;
    }
    puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
    uVar12 = *puVar17 ^ *puVar17 << 0xb;
    uVar31 = puVar17[3];
    *puVar17 = puVar17[1];
    puVar17[1] = puVar17[2];
    uVar12 = uVar12 >> 8 ^ uVar31 >> 0x13 ^ uVar12 ^ uVar31;
    puVar17[2] = uVar31;
    puVar17[3] = uVar12;
    if ((uVar12 & 1) == 0) {
      uVar12 = local_1e1c[lVar27];
      local_1e1c[lVar27] = local_1e24._4_4_;
      local_1e24._4_4_ = uVar12;
    }
    if (lVar27 == 0) {
LAB_028fb960:
      puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
      uVar12 = *puVar17 ^ *puVar17 << 0xb;
      uVar31 = puVar17[3];
      *puVar17 = puVar17[1];
      puVar17[1] = puVar17[2];
      uVar12 = uVar12 >> 8 ^ uVar31 >> 0x13 ^ uVar12 ^ uVar31;
      puVar17[2] = uVar31;
      puVar17[3] = uVar12;
      if ((uVar12 & 1) == 0) {
        uVar12 = local_1e1c[lVar27];
        local_1e1c[lVar27] = local_1e1c[1];
        local_1e1c[1] = uVar12;
      }
      if (lVar27 == 2) break;
    }
    else {
      puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
      uVar12 = *puVar17 ^ *puVar17 << 0xb;
      uVar31 = puVar17[3];
      *puVar17 = puVar17[1];
      puVar17[1] = puVar17[2];
      uVar12 = uVar12 >> 8 ^ uVar31 >> 0x13 ^ uVar12 ^ uVar31;
      puVar17[2] = uVar31;
      puVar17[3] = uVar12;
      if ((uVar12 & 1) == 0) {
        uVar12 = local_1e1c[lVar27];
        local_1e1c[lVar27] = local_1e1c[0];
        local_1e1c[0] = uVar12;
      }
      if (lVar27 != 1) goto LAB_028fb960;
    }
    puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
    uVar12 = *puVar17 ^ *puVar17 << 0xb;
    uVar31 = puVar17[3];
    *puVar17 = puVar17[1];
    puVar17[1] = puVar17[2];
    uVar12 = uVar12 >> 8 ^ uVar31 >> 0x13 ^ uVar12 ^ uVar31;
    puVar17[2] = uVar31;
    puVar17[3] = uVar12;
    if ((uVar12 & 1) == 0) {
      uVar12 = local_1e1c[lVar27];
      local_1e1c[lVar27] = local_1e1c[2];
      local_1e1c[2] = uVar12;
    }
    lVar27 = lVar27 + 1;
  } while( true );
  local_1e24 = CONCAT44(local_1e24._4_4_,uVar15);
  if (iVar14 < 1) {
    local_1e10 = (undefined **)0x33ee;
    FUN_0277d4ac(&local_1e10);
    lVar27 = (**(code **)(local_16a0 + 0x18))(&local_16a0);
    uVar11 = FUN_0277d6c4(&local_1e10);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar21 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar21) =
           *(uint *)(lVar27 + lVar21) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    }
    local_1e10 = (undefined **)0x3508;
    FUN_0277d4ac(&local_1e10);
    lVar27 = (**(code **)(local_16a0 + 0x18))(&local_16a0);
    uVar11 = FUN_0277d6c4(&local_1e10);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar21 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar21) =
           *(uint *)(lVar27 + lVar21) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    }
    local_1e10 = (undefined **)0x34c3;
    FUN_0277d4ac(&local_1e10);
    lVar27 = (**(code **)(local_16a0 + 0x18))(&local_16a0);
    uVar11 = FUN_0277d6c4(&local_1e10);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar21 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar27 + lVar21) =
           *(uint *)(lVar27 + lVar21) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    }
  }
  uVar22 = 0;
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  ppuVar3 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  do {
    local_1e10 = (undefined **)puVar1;
    memset(&local_1e08,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_16b4 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_16b0 = (local_16b4 ^ local_16b4 >> 0x1e) * 0x6c078965 + 2;
    local_16ac = (local_16b0 ^ local_16b0 >> 0x1e) * 0x6c078965 + 3;
    local_16a8 = (local_16ac ^ local_16ac >> 0x1e) * 0x6c078965 + 4;
    pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
    memset(pvVar16,0,0x754);
    pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
    memset(pvVar16,0,0x754);
    pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
    lVar21 = (**(code **)(local_16a0 + 0x20))(&local_16a0);
    lVar27 = 0;
    while( true ) {
      puVar17 = (uint *)(lVar21 + 8 + lVar27);
      *(uint *)(local_2588 + lVar27 + -0x10) = puVar17[-2] | *(uint *)((long)pvVar16 + lVar27);
      if (lVar27 == 0x750) break;
      *(uint *)(local_2588 + lVar27 + -0xc) = puVar17[-1] | *(uint *)((long)pvVar16 + lVar27 + 4);
      *(uint *)(local_2588 + lVar27 + -8) = *puVar17 | *(uint *)((long)pvVar16 + lVar27 + 8);
      *(uint *)(local_2588 + lVar27 + -4) = puVar17[1] | *(uint *)((long)pvVar16 + lVar27 + 0xc);
      lVar27 = lVar27 + 0x10;
    }
    memcpy(pvVar16,&local_2598,0x754);
    *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
    uVar11 = (uint)uVar22;
    if (((iVar14 < 1) && (uVar11 < 5)) && ((1 << (ulong)(uVar11 & 0x1f) & 0x15U) != 0)) {
      pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
      memset(pvVar16,0,0x754);
      if (uVar11 == 2) {
        local_2598 = (undefined **)0x3508;
      }
      else if (uVar11 == 0) {
        local_2598 = (undefined **)0x33ee;
      }
      else {
        local_2598 = (undefined **)0x34c3;
      }
      FUN_0277d4ac(&local_2598);
      FUN_0277dedc(&local_2598);
      lVar27 = (**(code **)((long)local_1e10 + 0x18))(&local_1e10);
      uVar11 = FUN_0277d6c4(&local_2598);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar21 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar27 + lVar21) = *(uint *)(lVar27 + lVar21) | 1 << (ulong)(uVar11 & 0x1f);
      }
    }
    else {
      local_2598 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      if (uVar22 < 3) {
        memset(&local_2590,0,0x754);
        uVar12 = nn::os::GetSystemTick();
        local_1e3c = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
        local_1e38 = (local_1e3c ^ local_1e3c >> 0x1e) * 0x6c078965 + 2;
        local_1e34 = (local_1e38 ^ local_1e38 >> 0x1e) * 0x6c078965 + 3;
        local_1e30 = (local_1e34 ^ local_1e34 >> 0x1e) * 0x6c078965 + 4;
        pvVar16 = (void *)(*(code *)local_2598[3])(&local_2598);
        memset(pvVar16,0,0x754);
        local_7c0._0_4_ = 0x27;
        local_2d00 = &local_7c0;
        local_2d08._0_4_ = 0x49ff4e8;
        local_2d08._4_4_ = 0;
        FUN_008a1ba0(&local_2598,&local_2d08);
        if (2 < iVar14) {
          local_7c0._0_4_ = 0x2b;
          local_2d00 = &local_7c0;
          local_2d08._0_4_ = 0x49ff4e8;
          local_2d08._4_4_ = 0;
          FUN_008a1ba0(&local_2598,&local_2d08);
        }
        pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
        lVar21 = (*(code *)local_2598[4])(&local_2598);
        lVar27 = 0;
        while( true ) {
          puVar17 = (uint *)(lVar21 + 8 + lVar27);
          *(uint *)((long)&local_2d08 + lVar27) = puVar17[-2] & *(uint *)((long)pvVar16 + lVar27);
          if (lVar27 == 0x750) break;
          *(uint *)((long)&local_2d08 + lVar27 + 4) =
               puVar17[-1] & *(uint *)((long)pvVar16 + lVar27 + 4);
          *(uint *)((long)&local_2d00 + lVar27) = *puVar17 & *(uint *)((long)pvVar16 + lVar27 + 8);
          *(uint *)((long)&local_2d00 + lVar27 + 4) =
               puVar17[1] & *(uint *)((long)pvVar16 + lVar27 + 0xc);
          lVar27 = lVar27 + 0x10;
        }
        memcpy(pvVar16,&local_2d08,0x754);
        *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
        FUN_028fd2d0(&local_1e10,*(undefined4 *)((long)&local_1e24 + uVar22 * 4),iVar14);
        local_2d10 = 0;
        if (uVar11 == 1) {
          local_2d08._0_4_ = 0;
          local_2d08._0_4_ = 6;
          local_2d08._0_4_ = 10;
          local_2d08._0_4_ = 0xb;
          local_2d08._0_4_ = 0xc;
          local_2d08._0_4_ = 0xd;
          local_2d10 = 0x300041;
          local_2d08._0_4_ = 0xe;
        }
        else if (uVar11 == 0) {
          local_2d08._0_4_ = 2;
          local_2d10 = 4;
          local_2d08._0_4_ = 9;
        }
        else {
          local_2d08._0_4_ = 0;
          local_2d08._0_4_ = 6;
          local_2d08._0_4_ = 1;
          local_2d08._0_4_ = 7;
          local_2d08._0_4_ = 10;
          local_2d08._0_4_ = 0xb;
          local_2d08._0_4_ = 0xc;
          local_2d08._0_4_ = 0xd;
          local_2d08._0_4_ = 0xe;
          local_2d08._0_4_ = 0xf;
          local_2d08._0_4_ = 0x10;
          local_2d10 = 0x400081c3;
          local_2d08._0_4_ = 0x11;
        }
        local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,(uint)local_2d08);
        if (((uint)local_2d08 < 0x1c) && (uVar11 = (int)(uint)local_2d08 >> 3, uVar11 < 4)) {
          *(byte *)((long)&local_2d10 + (ulong)uVar11) =
               *(byte *)((long)&local_2d10 + (ulong)uVar11) |
               (byte)(1 << (ulong)((uint)local_2d08 & 7));
        }
        uVar11 = 0;
        local_2d00 = (undefined8 *)&local_2d10;
        local_2d08 = &PTR_FUN_049ff420;
        do {
          (**(code **)((long)local_1e10 + 0x10))(&local_7c0,&local_1e10,uVar11);
          lVar27 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
          puVar9 = PTR_DAT_04bb43c0;
          uVar12 = 1 << (ulong)(uVar11 & 0x1f);
          if ((*(uint *)(lVar27 + (ulong)(uVar11 >> 5) * 4) & uVar12) != 0) {
            lVar27 = *(long *)PTR_DAT_04bb43c0;
            uVar15 = FUN_0277d6c4(&local_7c0);
            if (*(long *)puVar9 != 0) {
              lVar27 = *(long *)(lVar27 + 0x57e58);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
              if (((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                 (uVar18 = (*(code *)*local_2d08)(&local_2d08,&local_7c0), (uVar18 & 1) != 0))
              goto LAB_028fca30;
            }
            lVar27 = (**(code **)((long)local_1e10 + 0x18))(&local_1e10);
            lVar21 = (ulong)(uVar11 >> 5) * 4;
            *(uint *)(lVar27 + lVar21) = *(uint *)(lVar27 + lVar21) & (uVar12 ^ 0xffffffff);
          }
LAB_028fca30:
          uVar11 = uVar11 + 1;
        } while (uVar11 != 15000);
      }
      else {
        memset(&local_2590,0,0x754);
        uVar11 = nn::os::GetSystemTick();
        local_1e3c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
        local_1e38 = (local_1e3c ^ local_1e3c >> 0x1e) * 0x6c078965 + 2;
        local_1e34 = (local_1e38 ^ local_1e38 >> 0x1e) * 0x6c078965 + 3;
        local_1e30 = (local_1e34 ^ local_1e34 >> 0x1e) * 0x6c078965 + 4;
        pvVar16 = (void *)(*(code *)local_2598[3])(&local_2598);
        memset(pvVar16,0,0x754);
        local_7c0._0_4_ = 0x28;
        local_2d00 = &local_7c0;
        local_2d08 = &PTR_FUN_049ff4e8;
        FUN_008a1ba0(&local_2598,&local_2d08);
        if (2 < iVar14) {
          local_7c0._0_4_ = 0x2a;
          local_2d00 = &local_7c0;
          local_2d08 = &PTR_FUN_049ff4e8;
          FUN_008a1ba0(&local_2598,&local_2d08);
        }
        pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
        lVar21 = (*(code *)local_2598[4])(&local_2598);
        lVar27 = 0;
        while( true ) {
          puVar17 = (uint *)(lVar21 + 8 + lVar27);
          *(uint *)((long)&local_2d08 + lVar27) = puVar17[-2] & *(uint *)((long)pvVar16 + lVar27);
          if (lVar27 == 0x750) break;
          *(uint *)((long)&local_2d08 + lVar27 + 4) =
               puVar17[-1] & *(uint *)((long)pvVar16 + lVar27 + 4);
          *(uint *)((long)&local_2d00 + lVar27) = *puVar17 & *(uint *)((long)pvVar16 + lVar27 + 8);
          *(uint *)((long)&local_2d00 + lVar27 + 4) =
               puVar17[1] & *(uint *)((long)pvVar16 + lVar27 + 0xc);
          lVar27 = lVar27 + 0x10;
        }
        memcpy(pvVar16,&local_2d08,0x754);
        *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
        FUN_028fd2d0(&local_1e10,*(undefined4 *)((long)&local_1e24 + uVar22 * 4),iVar14);
        uVar11 = 0;
        local_2d00 = (undefined8 *)&local_2d10;
        local_2d10 = 0;
        local_2d08 = &PTR_FUN_049ff3f8;
        do {
          (**(code **)((long)local_1e10 + 0x10))(&local_7c0,&local_1e10,uVar11);
          lVar27 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
          puVar9 = PTR_DAT_04bb43c0;
          uVar12 = 1 << (ulong)(uVar11 & 0x1f);
          if ((*(uint *)(lVar27 + (ulong)(uVar11 >> 5) * 4) & uVar12) != 0) {
            lVar27 = *(long *)PTR_DAT_04bb43c0;
            uVar15 = FUN_0277d6c4(&local_7c0);
            if (*(long *)puVar9 != 0) {
              lVar27 = *(long *)(lVar27 + 0x57e58);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
              if (((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) &&
                 (uVar18 = (*(code *)*local_2d08)(&local_2d08,&local_7c0), (uVar18 & 1) != 0))
              goto LAB_028fc160;
            }
            lVar27 = (**(code **)((long)local_1e10 + 0x18))(&local_1e10);
            lVar21 = (ulong)(uVar11 >> 5) * 4;
            *(uint *)(lVar27 + lVar21) = *(uint *)(lVar27 + lVar21) & (uVar12 ^ 0xffffffff);
          }
LAB_028fc160:
          uVar11 = uVar11 + 1;
        } while (uVar11 != 15000);
        local_2d08 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
        memset(&local_2d00,0,0x754);
        uVar11 = nn::os::GetSystemTick();
        local_25ac = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
        local_25a8 = (local_25ac ^ local_25ac >> 0x1e) * 0x6c078965 + 2;
        local_25a4 = (local_25a8 ^ local_25a8 >> 0x1e) * 0x6c078965 + 3;
        local_25a0 = (local_25a4 ^ local_25a4 >> 0x1e) * 0x6c078965 + 4;
        pvVar16 = (void *)(*(code *)local_2d08[3])(&local_2d08);
        memset(pvVar16,0,0x754);
        local_2d10 = 7;
        local_7c0 = &PTR_FUN_049ff538;
        local_7b8 = &local_2d10;
        FUN_008a1ba0(&local_2d08,&local_7c0);
        local_7c0 = &PTR_FUN_049ff538;
        local_2d10 = 5;
        local_7b8 = &local_2d10;
        FUN_008a1ba0(&local_2d08,&local_7c0);
        pvVar16 = (void *)(**(code **)((long)local_1e10 + 0x18))(&local_1e10);
        lVar21 = (*(code *)local_2d08[4])(&local_2d08);
        lVar27 = 0;
        while( true ) {
          puVar17 = (uint *)(lVar21 + 8 + lVar27);
          *(uint *)((long)&local_7c0 + lVar27) = puVar17[-2] & *(uint *)((long)pvVar16 + lVar27);
          if (lVar27 == 0x750) break;
          *(uint *)((long)&local_7c0 + lVar27 + 4) =
               puVar17[-1] & *(uint *)((long)pvVar16 + lVar27 + 4);
          *(uint *)((long)&local_7b8 + lVar27) = *puVar17 & *(uint *)((long)pvVar16 + lVar27 + 8);
          *(uint *)((long)&local_7b8 + lVar27 + 4) =
               puVar17[1] & *(uint *)((long)pvVar16 + lVar27 + 0xc);
          lVar27 = lVar27 + 0x10;
        }
        memcpy(pvVar16,&local_7c0,0x754);
        *(uint *)((long)pvVar16 + 0x750) = *(uint *)((long)pvVar16 + 0x750) & 0xffffff;
      }
    }
    lVar21 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
    puVar9 = PTR_DAT_04bb37e0;
    lVar27 = 0;
    iVar20 = 0;
    do {
      puVar17 = (uint *)(lVar21 + lVar27);
      lVar27 = lVar27 + 4;
      uVar11 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar20 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar20;
    } while (lVar27 != 0x754);
    if (iVar20 == 0) {
      lVar27 = 0;
      piVar25 = (int *)(param_1 + 0x204);
      psVar28 = (short *)(param_1 + 8);
      do {
        if ((psVar28[-4] == -2) && (piVar25[-1] < 0)) {
LAB_028fbb90:
          puVar4 = (undefined2 *)(param_1 + lVar27 * 8);
          *puVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined *)(puVar4 + 1) = puVar9[2];
          *(undefined *)((long)puVar4 + 3) = puVar9[3];
          *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar9 + 4);
          *(undefined4 *)(lVar24 + lVar27 * 4) = 0;
          break;
        }
        if ((*psVar28 == -2) && (*piVar25 < 0)) {
          lVar27 = lVar27 + 1;
          goto LAB_028fbb90;
        }
        lVar27 = lVar27 + 2;
        psVar28 = psVar28 + 8;
        piVar25 = piVar25 + 2;
      } while (lVar27 != 0x40);
    }
    else {
      puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar11 = *puVar17 ^ *puVar17 << 0xb;
      uVar15 = puVar17[3];
      *puVar17 = puVar17[1];
      puVar17[1] = puVar17[2];
      uVar12 = uVar11 ^ uVar15;
      uVar11 = uVar11 >> 8 ^ uVar15 >> 0x13 ^ uVar12;
      puVar17[2] = uVar15;
      puVar17[3] = uVar11;
      uVar11 = (uVar11 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
      uVar12 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      local_7c0 = (undefined **)CONCAT44(uVar12,uVar11);
      uVar11 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
      local_7b8 = (undefined4 *)CONCAT44((uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 4,uVar11);
      lVar21 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
      lVar27 = 0;
      iVar20 = 0;
      do {
        puVar17 = (uint *)(lVar21 + lVar27);
        lVar27 = lVar27 + 4;
        uVar11 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        iVar20 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar20;
      } while (lVar27 != 0x754);
      if (iVar20 == 0) {
        uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
        uVar23 = PTR_DAT_04bb37e0[2];
        uVar26 = PTR_DAT_04bb37e0[3];
        local_2d10 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_2d0c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      }
      else {
        lVar21 = (**(code **)((long)local_1e10 + 0x20))(&local_1e10);
        lVar27 = 0;
        uVar11 = 0;
        do {
          puVar17 = (uint *)(lVar21 + lVar27);
          lVar27 = lVar27 + 4;
          uVar12 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + uVar11;
        } while (lVar27 != 0x754);
        uVar12 = (uint)local_7c0 ^ (uint)local_7c0 << 0xb;
        local_7c0 = (undefined **)CONCAT44((undefined4)local_7b8,local_7c0._4_4_);
        uVar12 = uVar12 >> 8 ^ local_7b8._4_4_ >> 0x13 ^ uVar12 ^ local_7b8._4_4_;
        local_7b8 = (undefined4 *)CONCAT44(uVar12,local_7b8._4_4_);
        FUN_00889f80(&local_2d10,&local_1e10,(int)((ulong)uVar12 * (ulong)uVar11 >> 0x20) + 1);
        FUN_01a4c764(&local_7c0,&local_2d10);
        uVar23 = local_2d10._2_1_;
        uVar26 = local_2d10._3_1_;
        uVar7 = (undefined2)local_2d10;
      }
      puVar9 = PTR_DAT_04bb43c0;
      local_2d00 = (undefined8 *)CONCAT44(local_2d0c,CONCAT13(uVar26,CONCAT12(uVar23,uVar7)));
      local_2cf8 = (uint *)0x0;
      lVar27 = *(long *)PTR_DAT_04bb43c0;
      local_2d08 = ppuVar2;
      uVar11 = FUN_0277d6c4(&local_2d00);
      if (*(long *)puVar9 != 0) {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar27 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar27 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(&local_2d10);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar27 + 0x1d8)) &&
             (puVar17 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar17 != (uint *)0x0)) {
            local_2cf8 = puVar17;
          }
        }
      }
      FUN_01ae7550(&local_2d08);
      FUN_01aee3b4(&local_2d08);
      if (uVar22 < 3) {
        uVar18 = FUN_028fdb78(param_1,&local_2d10,0);
        if (((uVar18 & 1) == 0) && (uVar18 = FUN_028fdb78(param_1,&local_2d10,1), (uVar18 & 1) == 0)
           ) {
          uVar18 = FUN_028fdb78(param_1,&local_2d10,2);
joined_r0x028fcf24:
          if ((uVar18 & 1) == 0) {
            local_2565 = 0;
            uVar18 = (ulong)_local_2588 >> 0x28;
            _local_2588 = CONCAT35((int3)uVar18,0x20);
            if (local_2cf8 == (uint *)0x0) {
              uVar11 = 0xbc;
            }
            else {
              uVar12 = *local_2cf8;
              uVar11 = 0;
              if ((uVar12 != 0) && (local_2cf8 != (uint *)(ulong)uVar12)) {
                puVar17 = (uint *)((long)local_2cf8 - (long)(ulong)uVar12);
                uVar11 = 0;
                if (*puVar17 != 0) {
                  uVar11 = puVar17[1];
                  if ((uVar11 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                    lVar27 = 0xc;
                    if (*(char *)((long)puVar17 + 10) != '\0') {
                      lVar27 = 0x1c;
                    }
                    lVar27 = (long)puVar17 + lVar27 + (ulong)(ushort)puVar17[2] * 8;
                    if (lVar27 != 0) {
                      uVar12 = 0;
                      if ((ulong)uVar11 != 0) {
                        uVar12 = (uint)((ulong)((long)local_2cf8 - lVar27) / (ulong)uVar11);
                      }
                      if (*puVar17 <= uVar12) {
                        uVar12 = 0xffffffff;
                      }
                      if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                         (uVar11 = (uint)*(ushort *)
                                          (*(long *)((long)PTR_DAT_04bc00c8 + 8) +
                                          (long)(int)uVar12 * 2), uVar11 < 0xbd)) goto LAB_028fcfe0;
                    }
                  }
                  uVar11 = 0;
                }
              }
            }
LAB_028fcfe0:
            puVar19 = &DAT_0407ebb1;
            if (uVar11 < 0xbd) {
              puVar19 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar11 * 8 + 0x830);
            }
            local_2598 = ppuVar3;
            local_2590 = (undefined8 *)(local_2588 + 4);
            FUN_038d1270(&local_2598,"Shop.WherearenOffice.%s",puVar19);
          }
        }
      }
      else {
        uVar18 = FUN_028fdb78(param_1,&local_2d10,3);
        if ((uVar18 & 1) == 0) {
          uVar18 = FUN_028fdb78(param_1,&local_2d10,4);
          goto joined_r0x028fcf24;
        }
      }
      lVar27 = (**(code **)(local_16a0 + 0x18))(&local_16a0);
      uVar11 = FUN_0277d6c4(&local_2d10);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar21 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar27 + lVar21) =
             *(uint *)(lVar27 + lVar21) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      }
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 != 5);
  local_2d08 = (undefined **)0x3330;
  FUN_0277d4ac(&local_2d08);
  lVar24 = 0;
  lVar27 = 0x200;
  while ((*(short *)(param_1 + lVar24) != -2 || (-1 < *(int *)(param_1 + lVar27)))) {
    lVar24 = lVar24 + 8;
    lVar27 = lVar27 + 4;
    if (lVar24 == 0x200) {
      return;
    }
  }
  puVar19 = (undefined8 *)(param_1 + lVar24);
  *(uint *)puVar19 = (uint)local_2d08;
  *(undefined4 *)((long)puVar19 + 4) = local_2d08._4_4_;
  *(undefined4 *)(param_1 + lVar27) = 0xffffffff;
  puVar1 = PTR_DAT_04bb43c0;
  local_2590 = (undefined8 *)*puVar19;
  _local_2588 = 0;
  local_2598 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(&local_2590);
  if (*(long *)puVar1 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar24 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(puVar19);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if (uVar11 < *(uint *)(lVar24 + 0x1d8)) {
        puVar17 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8);
        local_1e10 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
        if (puVar17 == (uint *)0x0) {
          uVar11 = 0xbc;
        }
        else {
          uVar12 = *puVar17;
          uVar11 = 0;
          if ((uVar12 != 0) && (puVar17 != (uint *)(ulong)uVar12)) {
            puVar29 = (uint *)((long)puVar17 - (long)(ulong)uVar12);
            uVar11 = 0;
            if (*puVar29 != 0) {
              uVar11 = puVar29[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
                lVar24 = 0xc;
                if (*(char *)((long)puVar29 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar29 + lVar24 + (ulong)(ushort)puVar29[2] * 8;
                if (lVar24 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar17 - lVar24) / (ulong)uVar11);
                  }
                  if (*puVar29 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar11 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                     uVar11 < 0xbd)) goto LAB_028fd25c;
                }
              }
              uVar11 = 0;
            }
          }
        }
        goto LAB_028fd25c;
      }
    }
  }
  uVar11 = 0xbc;
  local_1e10 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
LAB_028fd25c:
  local_1ddd = 0;
  local_1dfc[0] = 0;
  local_1e00 = 0x20;
  local_1e08 = (uint *)local_1dfc;
  local_7c0 = (undefined **)CONCAT44(local_7c0._4_4_,uVar11);
  if (uVar11 < 0xbd) {
    puVar19 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar11 * 8 + 0x830);
  }
  else {
    puVar19 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_1e10,"Shop.WherearenOffice.%s",puVar19);
  return;
}

