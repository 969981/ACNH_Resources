
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0281da50(long param_1,long *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  void *pvVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined1 *puVar32;
  long *plVar33;
  short *psVar34;
  long *plVar35;
  ulong uVar36;
  uint *puVar37;
  undefined1 *puVar38;
  int iVar39;
  int iVar40;
  undefined4 *puVar41;
  undefined1 uVar42;
  int iVar43;
  undefined *puVar44;
  int iVar45;
  int iVar46;
  uint *puVar47;
  undefined8 uVar48;
  undefined3 *puVar49;
  long *plVar50;
  int local_1f00;
  undefined *local_1ea8;
  undefined2 local_1ea0;
  undefined1 local_1e9e;
  undefined1 local_1e9d;
  undefined4 local_1e9c;
  uint *local_1e98;
  undefined4 local_1e90;
  undefined4 local_1e8c;
  undefined8 local_1e88;
  uint local_1e80;
  uint uStack_1e7c;
  undefined4 local_1e78;
  uint uStack_1e74;
  undefined4 local_1e70;
  uint local_172c;
  uint local_1728;
  uint local_1724;
  int local_1720;
  undefined8 local_1718;
  undefined8 local_1710;
  undefined8 local_1708;
  undefined8 local_1700;
  undefined1 local_16f8;
  uint local_fbc;
  uint local_fb8;
  uint local_fb4;
  int local_fb0;
  undefined1 local_fa4 [4];
  long local_fa0;
  uint local_f94;
  undefined8 local_f90;
  undefined4 local_f88;
  undefined4 local_f84;
  uint *local_f80;
  undefined2 local_f78;
  undefined2 uStack_f76;
  short sStack_f74;
  undefined2 uStack_f72;
  undefined8 local_f70;
  undefined4 local_f68;
  uint uStack_f64;
  undefined4 local_f60;
  undefined1 auStack_f58 [8];
  undefined4 local_f50;
  undefined4 local_f4c;
  undefined8 local_f48;
  undefined8 local_f40;
  undefined4 local_f28;
  undefined4 local_f24;
  undefined1 local_f20;
  undefined4 local_f1c;
  undefined4 local_f18;
  undefined2 local_f14;
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  int local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  long local_7c8;
  long local_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  undefined8 local_7a8;
  undefined *local_7a0;
  char *local_798;
  undefined8 local_790;
  undefined8 local_788;
  ulong local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  if (*(int *)(param_1 + 0x50) == 7) {
    uVar11 = FUN_028254e0(param_1);
    *(undefined4 *)(param_1 + 0x50) = uVar11;
  }
  local_7d0 = "TodayGrowUp";
  local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  iVar12 = FUN_0274ce10(param_3,&local_7d8);
  plVar50 = (long *)PTR_DAT_04bb43c0;
  puVar44 = PTR_DAT_04bb37e0;
  if (iVar12 != 0) goto LAB_02822274;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar7 = *(undefined2 *)puVar44;
  uVar42 = puVar44[2];
  uVar4 = puVar44[3];
  uVar11 = *(undefined4 *)(puVar44 + 4);
  *(undefined2 *)(param_1 + 0x6c) = uVar7;
  *(undefined2 *)(param_1 + 0x74) = uVar7;
  *(undefined1 *)(param_1 + 0x6e) = uVar42;
  *(undefined1 *)(param_1 + 0x6f) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar11;
  *(undefined1 *)(param_1 + 0x76) = uVar42;
  *(undefined1 *)(param_1 + 0x77) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar11;
  local_f48 = (undefined **)CONCAT44(local_f48._4_4_,0x88);
  FUN_02822400(&local_7d8,param_3,&local_f48);
  *(undefined4 *)(param_1 + 0x54) = (undefined4)local_7d8;
  *(undefined4 *)(param_1 + 0x58) = local_7d8._4_4_;
  uVar11 = FUN_028254e0(param_1);
  *(undefined4 *)(param_1 + 0x50) = uVar11;
  local_fa0 = param_2[2];
  local_fa4[0] = 0;
  FUN_01b02920(local_fa4,&local_fa0,0);
  lVar30 = *(long *)PTR_DAT_04bb46b0;
  if (lVar30 == 0) {
LAB_0281dbbc:
    lVar30 = 0;
  }
  else {
    puVar31 = *(undefined8 **)(lVar30 + 0x10);
    if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
      lVar21 = (**(code **)(*(long *)*puVar31 + 0x38))();
      lVar30 = 0;
      if (lVar21 != 0) {
        lVar30 = lVar21 + 0x70;
      }
    }
    else {
      if (puVar31 == (undefined8 *)0x0) goto LAB_0281dbbc;
      lVar30 = 0;
      if ((long *)puVar31[0x26] != (long *)0x0) {
        lVar30 = (**(code **)(*(long *)puVar31[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar30 + 0xe7290) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar30 + 0xe7290), puVar31 == (undefined8 *)0x0)) {
    local_1f00 = *(int *)(*(long *)(lVar30 + 0xe7278) + *(long *)(lVar30 + 0xe7270));
  }
  else {
    uVar22 = (**(code **)*puVar31)();
    local_1f00 = *(int *)(*(long *)(lVar30 + 0xe7278) + *(long *)(lVar30 + 0xe7270));
    if ((((uVar22 & 1) != 0) && (*(long *)(lVar30 + 0xe7290) != 0)) &&
       (puVar31 = *(undefined8 **)(*(long *)(lVar30 + 0xe7290) + 8), puVar31 != (undefined8 *)0x0))
    {
      (**(code **)*puVar31)();
    }
  }
  local_f48 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_f40,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_7ec = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
  local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
  pvVar23 = (void *)(**(code **)((long)local_f48 + 0x18))(&local_f48);
  memset(pvVar23,0,0x754);
  local_1718._0_4_ = 0x4f;
  local_7d8 = &PTR_FUN_049ff4e8;
  local_7d0 = (char *)&local_1718;
  FUN_008a1ba0(&local_f48,&local_7d8);
  local_7d8 = &PTR_FUN_049ff4e8;
  local_1718 = (undefined *)CONCAT44(local_1718._4_4_,0x50);
  local_7d0 = (char *)&local_1718;
  FUN_008a1ba0(&local_f48,&local_7d8);
  local_1e88._0_4_ = *(undefined4 *)(param_1 + 0x50);
  uVar13 = 0;
  local_7d8 = &PTR_FUN_049ff880;
  local_7d0 = (char *)&local_1e88;
  do {
    (**(code **)((long)local_f48 + 0x10))(&local_1718,&local_f48,uVar13);
    lVar30 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    uVar15 = 1 << (ulong)(uVar13 & 0x1f);
    if ((*(uint *)(lVar30 + (ulong)(uVar13 >> 5) * 4) & uVar15) != 0) {
      lVar30 = *plVar50;
      uVar14 = FUN_0277d6c4(&local_1718);
      if (*plVar50 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar30 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_7d8)(&local_7d8,&local_1718), (uVar22 & 1) != 0))
        goto LAB_0281dd78;
      }
      lVar30 = (**(code **)((long)local_f48 + 0x18))(&local_f48);
      lVar21 = (ulong)(uVar13 >> 5) * 4;
      *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar15 ^ 0xffffffff);
    }
LAB_0281dd78:
    uVar13 = uVar13 + 1;
  } while (uVar13 != 15000);
  uVar13 = 0;
  local_7d0 = local_fa4;
  local_7d8 = &PTR_FUN_049ff6c8;
  do {
    (**(code **)((long)local_f48 + 0x10))(&local_1718,&local_f48,uVar13);
    lVar30 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    uVar15 = 1 << (ulong)(uVar13 & 0x1f);
    if ((*(uint *)(lVar30 + (ulong)(uVar13 >> 5) * 4) & uVar15) != 0) {
      lVar30 = *plVar50;
      uVar14 = FUN_0277d6c4(&local_1718);
      if (*plVar50 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if (((uVar14 < *(uint *)(lVar30 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
           (uVar22 = (*(code *)*local_7d8)(&local_7d8,&local_1718), (uVar22 & 1) != 0))
        goto LAB_0281de74;
      }
      lVar30 = (**(code **)((long)local_f48 + 0x18))(&local_f48);
      lVar21 = (ulong)(uVar13 >> 5) * 4;
      *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar15 ^ 0xffffffff);
    }
LAB_0281de74:
    uVar13 = uVar13 + 1;
  } while (uVar13 != 15000);
  local_1718 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_1710,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_fbc = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_fb8 = (local_fbc ^ local_fbc >> 0x1e) * 0x6c078965 + 2;
  local_fb4 = (local_fb8 ^ local_fb8 >> 0x1e) * 0x6c078965 + 3;
  local_fb0 = (local_fb4 ^ local_fb4 >> 0x1e) * 0x6c078965 + 4;
  pvVar23 = (void *)(**(code **)(local_1718 + 0x18))(&local_1718);
  memset(pvVar23,0,0x754);
  local_1e88._0_4_ = 9;
  local_7d8 = &PTR_FUN_049ff448;
  local_7d0 = (char *)&local_1e88;
  FUN_008a1ba0(&local_1718,&local_7d8);
  pvVar23 = (void *)(**(code **)((long)local_f48 + 0x18))(&local_f48);
  lVar21 = (**(code **)(local_1718 + 0x20))(&local_1718);
  puVar49 = (undefined3 *)PTR_DAT_04bb37e0;
  for (lVar30 = 0;
      *(uint *)((long)&local_7d8 + lVar30) =
           *(uint *)(lVar21 + lVar30) & *(uint *)((long)pvVar23 + lVar30), lVar30 != 0x750;
      lVar30 = lVar30 + 8) {
    *(uint *)((long)&local_7d8 + lVar30 + 4) =
         *(uint *)(lVar21 + lVar30 + 4) & *(uint *)((long)pvVar23 + lVar30 + 4);
  }
  memcpy(pvVar23,&local_7d8,0x754);
  *(uint *)((long)pvVar23 + 0x750) = *(uint *)((long)pvVar23 + 0x750) & 0xffffff;
  lVar21 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
  lVar30 = 0;
  iVar17 = 0;
  do {
    puVar47 = (uint *)(lVar21 + lVar30);
    lVar30 = lVar30 + 4;
    uVar13 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
    uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
    uVar13 = uVar13 + (uVar13 >> 8);
    iVar17 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar17;
  } while (lVar30 != 0x754);
  if (iVar17 != 0) {
    puVar44 = PTR_DAT_04bbfe60 + 0x10;
    local_1e88._0_4_ = (uint)puVar44;
    local_1e88._4_2_ = (short)((ulong)puVar44 >> 0x20);
    local_1e88._6_1_ = (undefined1)((ulong)puVar44 >> 0x30);
    local_1e88._7_1_ = (undefined1)((ulong)puVar44 >> 0x38);
    memset(&local_1e80,0,0x754);
    uVar13 = nn::os::GetSystemTick();
    local_172c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    local_1728 = (local_172c ^ local_172c >> 0x1e) * 0x6c078965 + 2;
    local_1724 = (local_1728 ^ local_1728 >> 0x1e) * 0x6c078965 + 3;
    local_1720 = (local_1724 ^ local_1724 >> 0x1e) * 0x6c078965 + 4;
    pvVar23 = (void *)(**(code **)(CONCAT17(local_1e88._7_1_,
                                            CONCAT16(local_1e88._6_1_,
                                                     CONCAT24(local_1e88._4_2_,(uint)local_1e88))) +
                                  0x18))(&local_1e88);
    memset(pvVar23,0,0x754);
    iVar45 = 0;
    puVar44 = PTR_DAT_04bc0510 + 0x10;
LAB_0281e1e0:
    pvVar23 = (void *)(**(code **)(CONCAT17(local_1e88._7_1_,
                                            CONCAT16(local_1e88._6_1_,
                                                     CONCAT24(local_1e88._4_2_,(uint)local_1e88))) +
                                  0x18))(&local_1e88);
    memset(pvVar23,0,0x754);
    iVar20 = 1;
    iVar43 = 2;
LAB_0281e234:
    lVar21 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    lVar30 = 0;
    iVar27 = 0;
    iVar39 = 0;
    do {
      uVar15 = *(uint *)(lVar21 + lVar30);
      uVar13 = uVar15 - (uVar15 >> 1 & 0x55555555);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
      uVar13 = uVar13 + (uVar13 >> 8);
      iVar46 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar39;
      if (iVar20 <= iVar46) {
        if (uVar15 == 0) goto LAB_0281e2c8;
        iVar39 = iVar43 - iVar39;
        goto LAB_0281e2b0;
      }
      lVar30 = lVar30 + 4;
      iVar27 = iVar27 + 0x20;
      iVar39 = iVar46;
    } while (lVar30 != 0x754);
    goto LAB_0281e390;
  }
LAB_0281ef18:
  puVar47 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar14 = puVar47[3];
  uVar13 = *puVar47 ^ *puVar47 << 0xb;
  *puVar47 = puVar47[1];
  puVar47[1] = puVar47[2];
  local_f78 = 0x4f;
  uStack_f76 = 0;
  local_7d8 = &PTR_FUN_049ff4e8;
  uVar15 = uVar13 ^ uVar14;
  uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar15;
  puVar47[2] = uVar14;
  puVar47[3] = uVar13;
  uVar15 = (uVar13 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
  local_1e88._4_2_ = (short)uVar14;
  local_1e88._6_1_ = (undefined1)(uVar14 >> 0x10);
  local_1e88._7_1_ = (undefined1)(uVar14 >> 0x18);
  uVar19 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
  uVar18 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 4;
  local_1e88._0_4_ = uVar15;
  local_1e80 = uVar19;
  uStack_1e7c = uVar18;
  local_7d0 = (char *)&local_f78;
  FUN_008a1ba0(&local_f48,&local_7d8);
  local_7d8 = &PTR_FUN_049ff4e8;
  local_f78 = 0x50;
  uStack_f76 = 0;
  local_7d0 = (char *)&local_f78;
  FUN_008a1ba0(&local_f48,&local_7d8);
  puVar44 = PTR_DAT_04bb43c0;
  local_7d8 = &PTR_FUN_049ff880;
  uVar13 = 0;
  local_f90 = (undefined *)CONCAT44(local_f90._4_4_,*(undefined4 *)(param_1 + 0x50));
  local_7d0 = (char *)&local_f90;
  do {
    (**(code **)((long)local_f48 + 0x10))(&local_f78,&local_f48,uVar13);
    lVar30 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    uVar29 = 1 << (ulong)(uVar13 & 0x1f);
    if ((*(uint *)(lVar30 + (ulong)(uVar13 >> 5) * 4) & uVar29) != 0) {
      lVar30 = *(long *)puVar44;
      uVar16 = FUN_0277d6c4(&local_f78);
      if (*(long *)puVar44 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          uVar22 = (*(code *)*local_7d8)(&local_7d8,&local_f78);
          if ((uVar22 & 1) != 0) goto LAB_0281f044;
        }
      }
      lVar30 = (**(code **)((long)local_f48 + 0x18))(&local_f48);
      lVar21 = (ulong)(uVar13 >> 5) * 4;
      *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar29 ^ 0xffffffff);
    }
LAB_0281f044:
    puVar9 = PTR_DAT_04bb43c0;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 15000);
  local_f90 = (undefined *)CONCAT44(local_f90._4_4_,9);
  local_7d0 = (char *)&local_f90;
  local_7d8 = &PTR_FUN_049ff448;
  uVar13 = 0;
  do {
    (**(code **)((long)local_f48 + 0x10))(&local_f78,&local_f48,uVar13);
    lVar30 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    uVar29 = 1 << (ulong)(uVar13 & 0x1f);
    if ((*(uint *)(lVar30 + (ulong)(uVar13 >> 5) * 4) & uVar29) != 0) {
      lVar30 = *(long *)puVar9;
      uVar16 = FUN_0277d6c4(&local_f78);
      if (*(long *)puVar9 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          uVar22 = (*(code *)*local_7d8)(&local_7d8,&local_f78);
          if ((uVar22 & 1) != 0) goto LAB_0281f154;
        }
      }
      lVar30 = (**(code **)((long)local_f48 + 0x18))(&local_f48);
      lVar21 = (ulong)(uVar13 >> 5) * 4;
      *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar29 ^ 0xffffffff);
    }
LAB_0281f154:
    uVar13 = uVar13 + 1;
  } while (uVar13 != 15000);
  lVar21 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
  puVar44 = PTR_DAT_04bb43c0;
  lVar30 = 0;
  iVar17 = 0;
  do {
    puVar47 = (uint *)(lVar21 + lVar30);
    lVar30 = lVar30 + 4;
    uVar13 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
    uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
    uVar13 = uVar13 + (uVar13 >> 8);
    iVar17 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar17;
  } while (lVar30 != 0x754);
  if (iVar17 == 0) {
    local_f90 = *(undefined **)PTR_DAT_04bb37e0;
  }
  else {
    lVar21 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    lVar30 = 0;
    uVar13 = 0;
    do {
      puVar47 = (uint *)(lVar21 + lVar30);
      lVar30 = lVar30 + 4;
      uVar29 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
      uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
      uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
      uVar29 = uVar29 + (uVar29 >> 8);
      uVar13 = (uVar29 + (uVar29 >> 0x10) & 0x3f) + uVar13;
    } while (lVar30 != 0x754);
    local_1e88._4_2_ = (short)uVar19;
    local_1e88._6_1_ = (undefined1)(uVar19 >> 0x10);
    local_1e88._7_1_ = (undefined1)(uVar19 >> 0x18);
    uVar15 = uVar15 ^ uVar15 * 0x800;
    uStack_1e7c = uVar15 >> 8 ^ uVar18 >> 0x13 ^ uVar15 ^ uVar18;
    local_1e88._0_4_ = uVar14;
    local_1e80 = uVar18;
    FUN_00889f80(&local_f90,&local_f48,(int)((ulong)uVar13 * (ulong)uStack_1e7c >> 0x20) + 1);
    FUN_01a4c66c(&local_1e88,&local_f90);
  }
  lVar30 = *(long *)puVar44;
  uVar13 = FUN_0277d6c4(&local_f90);
  if (*(long *)puVar44 == 0) {
LAB_0281f4e8:
    puVar47 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar14 = puVar47[3];
    uVar13 = *puVar47 ^ *puVar47 << 0xb;
    *puVar47 = puVar47[1];
    puVar47[1] = puVar47[2];
    local_7d8 = &PTR_FUN_049ff4e8;
    uVar15 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar15;
    puVar47[2] = uVar14;
    puVar47[3] = uVar13;
    uVar15 = (uVar13 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
    local_f78 = 0x4f;
    uStack_f76 = 0;
    local_1e88._4_2_ = (short)uVar14;
    local_1e88._6_1_ = (undefined1)(uVar14 >> 0x10);
    local_1e88._7_1_ = (undefined1)(uVar14 >> 0x18);
    uVar19 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uVar18 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 4;
    local_1e88._0_4_ = uVar15;
    local_1e80 = uVar19;
    uStack_1e7c = uVar18;
    local_7d0 = (char *)&local_f78;
    FUN_008a1ba0(&local_f48,&local_7d8);
    local_7d8 = &PTR_FUN_049ff4e8;
    local_f78 = 0x50;
    uStack_f76 = 0;
    local_7d0 = (char *)&local_f78;
    FUN_008a1ba0(&local_f48,&local_7d8);
    puVar44 = PTR_DAT_04bb43c0;
    local_1ea8 = (undefined *)CONCAT44(local_1ea8._4_4_,9);
    local_7d0 = (char *)&local_1ea8;
    local_7d8 = &PTR_FUN_049ff448;
    uVar13 = 0;
    do {
      (**(code **)((long)local_f48 + 0x10))(&local_f78,&local_f48,uVar13);
      lVar30 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
      uVar29 = 1 << (ulong)(uVar13 & 0x1f);
      if ((*(uint *)(lVar30 + (ulong)(uVar13 >> 5) * 4) & uVar29) != 0) {
        lVar30 = *(long *)puVar44;
        uVar16 = FUN_0277d6c4(&local_f78);
        if (*(long *)puVar44 != 0) {
          lVar30 = *(long *)(lVar30 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar30 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            uVar22 = (*(code *)*local_7d8)(&local_7d8,&local_f78);
            if ((uVar22 & 1) != 0) goto LAB_0281f624;
          }
        }
        lVar30 = (**(code **)((long)local_f48 + 0x18))(&local_f48);
        lVar21 = (ulong)(uVar13 >> 5) * 4;
        *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar29 ^ 0xffffffff);
      }
LAB_0281f624:
      uVar13 = uVar13 + 1;
    } while (uVar13 != 15000);
    lVar21 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    lVar30 = 0;
    iVar17 = 0;
    do {
      puVar47 = (uint *)(lVar21 + lVar30);
      lVar30 = lVar30 + 4;
      uVar13 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
      uVar13 = uVar13 + (uVar13 >> 8);
      iVar17 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar17;
    } while (lVar30 != 0x754);
    if (iVar17 == 0) goto LAB_0281f7f0;
    lVar21 = (**(code **)((long)local_f48 + 0x20))(&local_f48);
    lVar30 = 0;
    uVar13 = 0;
    do {
      puVar47 = (uint *)(lVar21 + lVar30);
      lVar30 = lVar30 + 4;
      uVar29 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
      uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
      uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
      uVar29 = uVar29 + (uVar29 >> 8);
      uVar13 = (uVar29 + (uVar29 >> 0x10) & 0x3f) + uVar13;
    } while (lVar30 != 0x754);
    local_1e88._4_2_ = (short)uVar19;
    local_1e88._6_1_ = (undefined1)(uVar19 >> 0x10);
    local_1e88._7_1_ = (undefined1)(uVar19 >> 0x18);
    uVar15 = uVar15 ^ uVar15 * 0x800;
    uStack_1e7c = uVar15 >> 8 ^ uVar18 >> 0x13 ^ uVar15 ^ uVar18;
    local_1e88._0_4_ = uVar14;
    local_1e80 = uVar18;
    FUN_00889f80(&local_f90,&local_f48,(int)((ulong)uVar13 * (ulong)uStack_1e7c >> 0x20) + 1);
    puVar31 = &local_1e88;
    goto LAB_0281f7dc;
  }
  lVar30 = *(long *)(lVar30 + 0x57e58);
  uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
  if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
     (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0281f4e8;
  goto LAB_0281f800;
  while (uVar15 = uVar15 - 1 & uVar15, uVar15 != 0) {
LAB_0281e2b0:
    iVar39 = iVar39 + -1;
    if (iVar39 < 2) {
      uVar13 = uVar15 - 1 & (uVar15 ^ 0xffffffff);
      uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
      uVar13 = uVar13 + (uVar13 >> 8);
      uVar13 = uVar13 + (uVar13 >> 0x10) & 0x3f;
      goto LAB_0281e300;
    }
  }
LAB_0281e2c8:
  uVar13 = 0xffffffff;
LAB_0281e300:
  if (uVar13 + iVar27 == -1) {
LAB_0281e390:
    local_1ea0 = *(undefined2 *)puVar49;
    local_1e9e = *(undefined1 *)((long)puVar49 + 2);
    local_1e90._0_3_ = *puVar49;
    local_1e9d = *(undefined1 *)((long)puVar49 + 3);
    local_1e9c = *(undefined4 *)(puVar49 + 1);
    lVar30 = *plVar50;
  }
  else {
    (**(code **)((long)local_f48 + 0x10))(&local_7d8,&local_f48);
    lVar21 = *plVar50;
    uVar13 = FUN_0277d6c4(&local_7d8);
    lVar30 = *plVar50;
    if (lVar30 == 0) {
LAB_0281e3b0:
      puVar41 = (undefined4 *)(PTR_DAT_04bb37e0 + 4);
      puVar38 = PTR_DAT_04bb37e0 + 3;
      puVar32 = PTR_DAT_04bb37e0 + 2;
      local_1ea0 = *(undefined2 *)PTR_DAT_04bb37e0;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((*(uint *)(lVar21 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0281e3b0;
      puVar32 = (undefined1 *)((ulong)&local_7d8 | 2);
      puVar38 = (undefined1 *)((ulong)&local_7d8 | 3);
      puVar41 = (undefined4 *)((long)&local_7d8 + 4);
      local_1ea0 = (undefined2)local_7d8;
    }
    local_1e9e = *puVar32;
    local_1e90._0_3_ = CONCAT12(local_1e9e,local_1ea0);
    local_1e9d = *puVar38;
    local_1e9c = *puVar41;
    puVar49 = (undefined3 *)PTR_DAT_04bb37e0;
  }
  local_1e90 = CONCAT13(local_1e9d,(undefined3)local_1e90);
  local_1e98 = (uint *)0x0;
  local_1ea8 = puVar44;
  local_1e8c = local_1e9c;
  uVar13 = FUN_0277d6c4(&local_1ea0);
  if (*plVar50 == 0) {
LAB_0281e480:
    puVar47 = (uint *)0x0;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0281e480;
    lVar30 = *(long *)PTR_DAT_04bc0428;
    uVar13 = FUN_0277d6c4(&local_1e90);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if (*(uint *)(lVar30 + 0x1d8) <= uVar13) goto LAB_0281e480;
    puVar47 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8);
    if (puVar47 != (uint *)0x0) {
      local_1e98 = puVar47;
    }
  }
  local_7d8 = (undefined **)CONCAT44(local_7d8._4_4_,*(undefined4 *)(param_1 + 0x50));
  uVar22 = FUN_01ae23c0(&local_1ea8,&local_7d8);
  if ((puVar47 == (uint *)0x0) || ((uVar22 & 1) == 0)) goto LAB_0281e220;
  puVar37 = (uint *)((long)puVar47 - (ulong)*puVar47);
  if ((*puVar47 == 0) ||
     ((((puVar37 == (uint *)0x0 || (*puVar37 == 0)) || (uVar13 = puVar37[1], uVar13 == 0)) ||
      ((ulong)(ushort)puVar37[2] == 0)))) goto LAB_0281e220;
  lVar30 = 0xc;
  if (*(char *)((long)puVar37 + 10) != '\0') {
    lVar30 = 0x1c;
  }
  lVar30 = (long)puVar37 + lVar30 + (ulong)(ushort)puVar37[2] * 8;
  if (lVar30 == 0) goto LAB_0281e220;
  uVar15 = 0;
  if ((ulong)uVar13 != 0) {
    uVar15 = (uint)((ulong)((long)puVar47 - lVar30) / (ulong)uVar13);
  }
  if (*puVar37 <= uVar15) {
    uVar15 = 0xffffffff;
  }
  if ((*(uint *)PTR_DAT_04bc0020 <= uVar15) ||
     ((ushort)(*(short *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar15 * 2) - 0x5b6U) <
      0xfa4b)) goto LAB_0281e220;
  local_f80 = (uint *)0x0;
  local_f88 = local_1e90;
  lVar30 = *plVar50;
  local_f84 = local_1e8c;
  local_f90 = PTR_DAT_04bc0510 + 0x10;
  uVar13 = FUN_0277d6c4(&local_f88);
  if (*plVar50 == 0) {
    local_f94 = 0;
    goto LAB_0281e668;
  }
  lVar30 = *(long *)(lVar30 + 0x57e58);
  uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
  if ((uVar13 < *(uint *)(lVar30 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
    lVar30 = *(long *)PTR_DAT_04bc0428;
    uVar13 = FUN_0277d6c4(&local_1e90);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if (*(uint *)(lVar30 + 0x1d8) <= uVar13) goto LAB_0281e65c;
    puVar47 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8);
    if (puVar47 == (uint *)0x0) goto LAB_0281e65c;
    local_f94 = 0;
    uVar13 = *puVar47;
    local_f80 = puVar47;
    if ((uVar13 != 0) && (puVar47 != (uint *)(ulong)uVar13)) {
      puVar37 = (uint *)((long)puVar47 - (long)(ulong)uVar13);
      local_f94 = 0;
      if (*puVar37 != 0) {
        uVar13 = puVar37[1];
        if ((uVar13 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
          lVar30 = 0xc;
          if (*(char *)((long)puVar37 + 10) != '\0') {
            lVar30 = 0x1c;
          }
          lVar30 = (long)puVar37 + lVar30 + (ulong)(ushort)puVar37[2] * 8;
          if (lVar30 != 0) {
            uVar15 = 0;
            if ((ulong)uVar13 != 0) {
              uVar15 = (uint)((ulong)((long)puVar47 - lVar30) / (ulong)uVar13);
            }
            if (*puVar37 <= uVar15) {
              uVar15 = 0xffffffff;
            }
            if ((uVar15 < *(uint *)PTR_DAT_04bc0020) &&
               (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar15 * 2),
               local_f94 = (uint)uVar8, uVar8 < 0x5b6)) goto LAB_0281e668;
          }
        }
        goto LAB_0281e65c;
      }
    }
  }
  else {
LAB_0281e65c:
    local_f94 = 0;
  }
LAB_0281e668:
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar13 = nn::os::GetSystemTick();
  local_7c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar23 = (void *)(**(code **)((long)local_7d8 + 0x18))(&local_7d8);
  memset(pvVar23,0,0x754);
  local_f78 = 0xf858;
  uStack_f76 = 0x49f;
  sStack_f74 = 0;
  uStack_f72 = 0;
  uVar22 = 0;
  local_f70 = &local_f94;
  do {
    uVar15 = (uint)uVar22;
    (**(code **)((long)local_7d8 + 0x10))(auStack_f58,&local_7d8,uVar22);
    lVar30 = *plVar50;
    uVar13 = FUN_0277d6c4(auStack_f58);
    if (*plVar50 == 0) {
LAB_0281e720:
      lVar21 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
      lVar30 = (uVar22 >> 5) * 4;
      uVar13 = *(uint *)(lVar21 + lVar30) & (1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
LAB_0281e748:
      *(uint *)(lVar21 + lVar30) = uVar13;
    }
    else {
      lVar30 = *(long *)(lVar30 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0281e720;
      uVar24 = (**(code **)CONCAT26(uStack_f72,CONCAT24(sStack_f74,CONCAT22(uStack_f76,local_f78))))
                         (&local_f78,auStack_f58);
      if ((uVar24 & 1) != 0) {
        (**(code **)((long)local_7d8 + 0x10))(&local_f50,&local_7d8,uVar22);
        lVar30 = *plVar50;
        uVar13 = FUN_0277d6c4(&local_f50);
        if (*plVar50 == 0) goto LAB_0281e74c;
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((*(uint *)(lVar30 + 0x1d8) <= uVar13) ||
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0281e74c;
        lVar21 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
        lVar30 = (ulong)(uVar15 >> 5) * 4;
        uVar13 = *(uint *)(lVar21 + lVar30) | 1 << (ulong)(uVar15 & 0x1f);
        goto LAB_0281e748;
      }
    }
LAB_0281e74c:
    uVar22 = (ulong)(uVar15 + 1);
  } while (uVar15 + 1 != 15000);
  lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
  lVar30 = 0;
  uVar13 = 0;
  do {
    puVar47 = (uint *)(lVar21 + lVar30);
    lVar30 = lVar30 + 4;
    uVar15 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
    uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
    uVar15 = uVar15 + (uVar15 >> 8);
    uVar13 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar13;
  } while (lVar30 != 0x754);
  local_f80 = (uint *)0x0;
  local_f88 = local_1e90;
  lVar30 = *plVar50;
  local_f84 = local_1e8c;
  local_f90 = PTR_DAT_04bc0510 + 0x10;
  uVar14 = FUN_0277d6c4(&local_f88);
  uVar15 = 0;
  if (*plVar50 == 0) goto LAB_0281e9e8;
  lVar30 = *(long *)(lVar30 + 0x57e58);
  uVar15 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
  if ((uVar15 < *(uint *)(lVar30 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
    lVar30 = *(long *)PTR_DAT_04bc0428;
    uVar15 = FUN_0277d6c4(&local_1e90);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if (*(uint *)(lVar30 + 0x1d8) <= uVar15) goto LAB_0281e9e4;
    puVar47 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar15 * 8);
    if (puVar47 == (uint *)0x0) goto LAB_0281e9e4;
    uVar14 = *puVar47;
    local_f80 = puVar47;
    uVar15 = 0;
    if ((uVar14 != 0) && (puVar47 != (uint *)(ulong)uVar14)) {
      puVar37 = (uint *)((long)puVar47 - (long)(ulong)uVar14);
      uVar15 = 0;
      if (*puVar37 != 0) {
        uVar15 = puVar37[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar37[2] != 0)) {
          lVar30 = 0xc;
          if (*(char *)((long)puVar37 + 10) != '\0') {
            lVar30 = 0x1c;
          }
          lVar30 = (long)puVar37 + lVar30 + (ulong)(ushort)puVar37[2] * 8;
          if (lVar30 != 0) {
            uVar14 = 0;
            if ((ulong)uVar15 != 0) {
              uVar14 = (uint)((ulong)((long)puVar47 - lVar30) / (ulong)uVar15);
            }
            if (*puVar37 <= uVar14) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 < *(uint *)PTR_DAT_04bc0020) &&
               (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar14 * 2),
               uVar15 = (uint)uVar8, uVar8 < 0x5b6)) goto LAB_0281e9e8;
          }
        }
        goto LAB_0281e9e4;
      }
    }
  }
  else {
LAB_0281e9e4:
    uVar15 = 0;
  }
LAB_0281e9e8:
  local_f94 = uVar15;
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar15 = nn::os::GetSystemTick();
  local_7c = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar23 = (void *)(*(code *)local_7d8[3])(&local_7d8);
  memset(pvVar23,0,0x754);
  local_f78 = 0xf858;
  uStack_f76 = 0x49f;
  sStack_f74 = 0;
  uStack_f72 = 0;
  uVar22 = 0;
  local_f70 = &local_f94;
  do {
    uVar14 = (uint)uVar22;
    (*(code *)local_7d8[2])(auStack_f58,&local_7d8,uVar22);
    lVar30 = *plVar50;
    uVar15 = FUN_0277d6c4(auStack_f58);
    if (*plVar50 == 0) {
LAB_0281eaa0:
      lVar21 = (*(code *)local_7d8[3])(&local_7d8);
      lVar30 = (uVar22 >> 5) * 4;
      uVar15 = *(uint *)(lVar21 + lVar30) & (1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU);
LAB_0281eac8:
      *(uint *)(lVar21 + lVar30) = uVar15;
    }
    else {
      lVar30 = *(long *)(lVar30 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if ((*(uint *)(lVar30 + 0x1d8) <= uVar15) ||
         (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0281eaa0;
      uVar24 = (**(code **)CONCAT26(uStack_f72,CONCAT24(sStack_f74,CONCAT22(uStack_f76,local_f78))))
                         (&local_f78,auStack_f58);
      if ((uVar24 & 1) != 0) {
        (*(code *)local_7d8[2])(&local_f50,&local_7d8,uVar22);
        lVar30 = *plVar50;
        uVar15 = FUN_0277d6c4(&local_f50);
        if (*plVar50 == 0) goto LAB_0281eacc;
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((*(uint *)(lVar30 + 0x1d8) <= uVar15) ||
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0281eacc;
        lVar21 = (*(code *)local_7d8[3])(&local_7d8);
        lVar30 = (ulong)(uVar14 >> 5) * 4;
        uVar15 = *(uint *)(lVar21 + lVar30) | 1 << (ulong)(uVar14 & 0x1f);
        goto LAB_0281eac8;
      }
    }
LAB_0281eacc:
    uVar22 = (ulong)(uVar14 + 1);
  } while (uVar14 + 1 != 15000);
  lVar21 = (*(code *)local_7d8[4])(&local_7d8);
  lVar30 = 0;
  iVar27 = 0;
  do {
    puVar47 = (uint *)(lVar21 + lVar30);
    lVar30 = lVar30 + 4;
    uVar15 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
    uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
    uVar15 = uVar15 + (uVar15 >> 8);
    iVar27 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar27;
  } while (lVar30 != 0x754);
  if (0 < iVar27) {
    iVar39 = 1;
    iVar46 = 2;
LAB_0281ec50:
    lVar21 = (*(code *)local_7d8[4])(&local_7d8);
    lVar30 = 0;
    iVar28 = 0;
    iVar40 = 0;
    do {
      uVar14 = *(uint *)(lVar21 + lVar30);
      uVar15 = uVar14 - (uVar14 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      iVar3 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar40;
      if (iVar39 <= iVar3) {
        if (uVar14 == 0) goto LAB_0281ece8;
        iVar40 = iVar46 - iVar40;
        goto LAB_0281ecd0;
      }
      lVar30 = lVar30 + 4;
      iVar28 = iVar28 + 0x20;
      iVar40 = iVar3;
    } while (lVar30 != 0x754);
    goto LAB_0281eda4;
  }
LAB_0281ee24:
  iVar39 = 0;
LAB_0281ee30:
  puVar49 = (undefined3 *)PTR_DAT_04bb37e0;
  uVar15 = 0;
  if (uVar13 != 0) {
    uVar15 = (uint)(iVar45 + local_1f00) / uVar13;
  }
  if ((iVar45 + local_1f00) - uVar15 * uVar13 == iVar39) {
    FUN_0277dedc(&local_1e90);
    lVar30 = (**(code **)(CONCAT17(local_1e88._7_1_,
                                   CONCAT16(local_1e88._6_1_,
                                            CONCAT24(local_1e88._4_2_,(uint)local_1e88))) + 0x18))
                       (&local_1e88);
    uVar13 = FUN_0277d6c4(&local_1e90);
    if ((uVar13 >> 3 & 0x1fff) < 0x753) {
      lVar21 = (ulong)((uVar13 & 0xffff) >> 5) * 4;
      *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) | 1 << (ulong)(uVar13 & 0x1f);
    }
  }
LAB_0281e220:
  iVar43 = iVar43 + 1;
  bVar10 = iVar20 == iVar17;
  iVar20 = iVar20 + 1;
  if (bVar10) goto LAB_0281eea4;
  goto LAB_0281e234;
  while (uVar14 = uVar14 - 1 & uVar14, uVar14 != 0) {
LAB_0281ecd0:
    iVar40 = iVar40 + -1;
    if (iVar40 < 2) {
      uVar15 = uVar14 - 1 & (uVar14 ^ 0xffffffff);
      uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f;
      goto LAB_0281ed20;
    }
  }
LAB_0281ece8:
  uVar15 = 0xffffffff;
LAB_0281ed20:
  if (uVar15 + iVar28 == -1) {
LAB_0281eda4:
    local_f50 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_f4c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    goto LAB_0281ee04;
  }
  (*(code *)local_7d8[2])(&local_f78,&local_7d8);
  lVar30 = *plVar50;
  uVar15 = FUN_0277d6c4(&local_f78);
  if (*plVar50 == 0) {
LAB_0281edc0:
    puVar32 = PTR_DAT_04bb37e0 + 2;
    uVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
    psVar34 = (short *)(PTR_DAT_04bb37e0 + 4);
    puVar38 = PTR_DAT_04bb37e0 + 3;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar15) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0281edc0;
    puVar32 = (undefined1 *)((ulong)&local_f78 | 2);
    psVar34 = &sStack_f74;
    puVar38 = (undefined1 *)((ulong)&local_f78 | 3);
    uVar7 = local_f78;
  }
  local_f50 = CONCAT13(*puVar38,CONCAT12(*puVar32,uVar7));
  local_f4c = *(undefined4 *)psVar34;
  plVar50 = (long *)PTR_DAT_04bb43c0;
LAB_0281ee04:
  uVar22 = FUN_0277d7b4(&local_f50,&local_1e90);
  if ((uVar22 & 1) != 0) {
    iVar39 = iVar39 + -1;
    goto LAB_0281ee30;
  }
  bVar10 = iVar39 == iVar27;
  iVar39 = iVar39 + 1;
  iVar46 = iVar46 + 1;
  if (bVar10) goto LAB_0281ee24;
  goto LAB_0281ec50;
LAB_0281eea4:
  lVar21 = (**(code **)(CONCAT17(local_1e88._7_1_,
                                 CONCAT16(local_1e88._6_1_,
                                          CONCAT24(local_1e88._4_2_,(uint)local_1e88))) + 0x20))
                     (&local_1e88);
  lVar30 = 0;
  iVar43 = 0;
  do {
    puVar47 = (uint *)(lVar21 + lVar30);
    lVar30 = lVar30 + 4;
    uVar13 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
    uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
    uVar13 = uVar13 + (uVar13 >> 8);
    iVar43 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar43;
  } while (lVar30 != 0x754);
  if (iVar43 == 0) {
    iVar45 = iVar45 + 1;
    if (iVar45 == 0x1e) goto LAB_0281ef18;
    goto LAB_0281e1e0;
  }
  puVar47 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar13 = *puVar47 ^ *puVar47 << 0xb;
  uVar14 = puVar47[3];
  *puVar47 = puVar47[1];
  puVar47[1] = puVar47[2];
  uVar15 = uVar13 ^ uVar14;
  uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar15;
  puVar47[2] = uVar14;
  puVar47[3] = uVar13;
  uVar13 = (uVar13 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
  uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
  uVar19 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
  lVar21 = (**(code **)(CONCAT17(local_1e88._7_1_,
                                 CONCAT16(local_1e88._6_1_,
                                          CONCAT24(local_1e88._4_2_,(uint)local_1e88))) + 0x20))
                     (&local_1e88);
  lVar30 = 0;
  iVar17 = 0;
  do {
    puVar47 = (uint *)(lVar21 + lVar30);
    lVar30 = lVar30 + 4;
    uVar18 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    iVar17 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar17;
  } while (lVar30 != 0x754);
  if (iVar17 == 0) {
LAB_0281f7f0:
    local_f90 = *(undefined **)PTR_DAT_04bb37e0;
  }
  else {
    lVar21 = (**(code **)(CONCAT17(local_1e88._7_1_,
                                   CONCAT16(local_1e88._6_1_,
                                            CONCAT24(local_1e88._4_2_,(uint)local_1e88))) + 0x20))
                       (&local_1e88);
    lVar30 = 0;
    uVar18 = 0;
    do {
      puVar47 = (uint *)(lVar21 + lVar30);
      lVar30 = lVar30 + 4;
      uVar29 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
      uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
      uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
      uVar29 = uVar29 + (uVar29 >> 8);
      uVar18 = (uVar29 + (uVar29 >> 0x10) & 0x3f) + uVar18;
    } while (lVar30 != 0x754);
    uVar13 = uVar13 ^ uVar13 * 0x800;
    local_7d8 = (undefined **)CONCAT44(uVar14,uVar15);
    uVar13 = uVar13 >> 8 ^ uVar19 >> 0x13 ^ uVar13 ^ uVar19;
    local_7d0 = (char *)CONCAT44(uVar13,uVar19);
    FUN_00889f80(&local_f90,&local_1e88,(int)((ulong)uVar18 * (ulong)uVar13 >> 0x20) + 1);
    puVar31 = &local_7d8;
LAB_0281f7dc:
    FUN_01a4c66c(puVar31,&local_f90);
  }
LAB_0281f800:
  *(undefined4 *)(param_1 + 0x5c) = (undefined4)local_f90;
  *(undefined4 *)(param_1 + 0x60) = local_f90._4_4_;
  lVar30 = *(long *)PTR_DAT_04bb46b0;
  if (lVar30 == 0) {
LAB_0281f864:
    lVar30 = 0;
  }
  else {
    puVar31 = *(undefined8 **)(lVar30 + 0x10);
    if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
      lVar21 = (**(code **)(*(long *)*puVar31 + 0x38))();
      lVar30 = 0;
      if (lVar21 != 0) {
        lVar30 = lVar21 + 0x70;
      }
    }
    else {
      if (puVar31 == (undefined8 *)0x0) goto LAB_0281f864;
      lVar30 = 0;
      if ((long *)puVar31[0x26] != (long *)0x0) {
        lVar30 = (**(code **)(*(long *)puVar31[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar30 + 0xe7290) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar30 + 0xe7290), puVar31 == (undefined8 *)0x0)) {
    uVar13 = *(uint *)(*(long *)(lVar30 + 0xe7278) + *(long *)(lVar30 + 0xe7270));
  }
  else {
    uVar22 = (**(code **)*puVar31)();
    uVar13 = *(uint *)(*(long *)(lVar30 + 0xe7278) + *(long *)(lVar30 + 0xe7270));
    if ((((uVar22 & 1) != 0) && (*(long *)(lVar30 + 0xe7290) != 0)) &&
       (puVar31 = *(undefined8 **)(*(long *)(lVar30 + 0xe7290) + 8), puVar31 != (undefined8 *)0x0))
    {
      (**(code **)*puVar31)();
    }
  }
  local_7d0 = "KotonoQuestClearCount";
  local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  iVar17 = FUN_0274ce10(param_3,&local_7d8);
  lVar30 = *(long *)PTR_DAT_04bb46b0;
  if (lVar30 == 0) {
LAB_0281f950:
    lVar30 = 0;
  }
  else {
    puVar31 = *(undefined8 **)(lVar30 + 0x10);
    if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
      lVar21 = (**(code **)(*(long *)*puVar31 + 0x38))();
      lVar30 = 0;
      if (lVar21 != 0) {
        lVar30 = lVar21 + 0x70;
      }
    }
    else {
      if (puVar31 == (undefined8 *)0x0) goto LAB_0281f950;
      lVar30 = 0;
      if ((long *)puVar31[0x26] != (long *)0x0) {
        lVar30 = (**(code **)(*(long *)puVar31[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar30 + 0x1a2a80) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar30 + 0x1a2a80), puVar31 == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)*puVar31)();
  }
  lVar21 = *(long *)(lVar30 + 0x1a2a60);
  lVar25 = *(long *)(lVar30 + 0x1a2a68);
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  memcpy(&local_7d0,(void *)(lVar25 + lVar21),0x754);
  puVar44 = PTR_DAT_04bb43c0;
  local_1e88._0_4_ = 0x65;
  local_f40 = (char *)&local_1e88;
  local_f48 = &PTR_FUN_049ff4e8;
  uVar14 = 0;
  do {
    (**(code **)((long)local_7d8 + 0x10))(&local_1718,&local_7d8,uVar14);
    lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
    uVar19 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar19) != 0) {
      lVar21 = *(long *)puVar44;
      uVar18 = FUN_0277d6c4(&local_1718);
      if (*(long *)puVar44 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          uVar22 = (*(code *)*local_f48)(&local_f48,&local_1718);
          if ((uVar22 & 1) != 0) goto LAB_0281fa84;
        }
      }
      lVar21 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
      lVar25 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar25) = *(uint *)(lVar21 + lVar25) & (uVar19 ^ 0xffffffff);
    }
LAB_0281fa84:
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  lVar25 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
  lVar21 = 0;
  iVar45 = 0;
  do {
    iVar43 = iVar45;
    puVar47 = (uint *)(lVar25 + lVar21);
    lVar21 = lVar21 + 4;
    uVar14 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    uVar14 = uVar14 + (uVar14 >> 0x10);
    iVar45 = (uVar14 & 0x3f) + iVar43;
  } while (lVar21 != 0x754);
  if (iVar45 != 0) {
    iVar45 = 0;
    do {
      iVar45 = iVar45 + 1;
      FUN_00889f80(&local_f48,&local_7d8,iVar45);
    } while (iVar43 + (uVar14 & 0x3f) != iVar45);
  }
  lVar21 = *(long *)(lVar30 + 0x1a2a60);
  lVar25 = *(long *)(lVar30 + 0x1a2a68);
  local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  memset(&local_7d0,0,0x754);
  uVar14 = nn::os::GetSystemTick();
  local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  memcpy(&local_7d0,(void *)(lVar25 + lVar21),0x754);
  pvVar23 = (void *)(**(code **)((long)local_7d8 + 0x18))(&local_7d8);
  for (lVar21 = 0; *(uint *)((long)&local_f48 + lVar21) = ~*(uint *)((long)pvVar23 + lVar21),
      lVar21 != 0x750; lVar21 = lVar21 + 8) {
    *(uint *)((long)&local_f48 + lVar21 + 4) = ~*(uint *)((long)pvVar23 + lVar21 + 4);
  }
  memcpy(pvVar23,&local_f48,0x754);
  local_1e88._0_4_ = 0x65;
  local_f48 = &PTR_FUN_049ff4e8;
  uVar14 = 0;
  *(uint *)((long)pvVar23 + 0x750) = *(uint *)((long)pvVar23 + 0x750) & 0xffffff;
  puVar44 = PTR_DAT_04bb43c0;
  local_f40 = (char *)&local_1e88;
  do {
    (**(code **)((long)local_7d8 + 0x10))(&local_1718,&local_7d8,uVar14);
    lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
    uVar19 = 1 << (ulong)(uVar14 & 0x1f);
    if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar19) != 0) {
      lVar21 = *(long *)puVar44;
      uVar18 = FUN_0277d6c4(&local_1718);
      if (*(long *)puVar44 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          uVar22 = (*(code *)*local_f48)(&local_f48,&local_1718);
          if ((uVar22 & 1) != 0) goto LAB_0281fd34;
        }
      }
      lVar21 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
      lVar25 = (ulong)(uVar14 >> 5) * 4;
      *(uint *)(lVar21 + lVar25) = *(uint *)(lVar21 + lVar25) & (uVar19 ^ 0xffffffff);
    }
LAB_0281fd34:
    puVar9 = PTR_DAT_04bb43c0;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 15000);
  if (iVar17 < 3) {
    local_1e88._0_4_ = 0;
    local_f40 = (char *)&local_1e88;
    local_f48 = &PTR_FUN_049ff7e0;
    uVar14 = 0;
    do {
      (**(code **)((long)local_7d8 + 0x10))(&local_1718,&local_7d8,uVar14);
      lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
      uVar19 = 1 << (ulong)(uVar14 & 0x1f);
      if ((*(uint *)(lVar21 + (ulong)(uVar14 >> 5) * 4) & uVar19) != 0) {
        lVar21 = *(long *)puVar9;
        uVar18 = FUN_0277d6c4(&local_1718);
        if (*(long *)puVar9 != 0) {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar21 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            uVar22 = (*(code *)*local_f48)(&local_f48,&local_1718);
            if ((uVar22 & 1) != 0) goto LAB_0281fe48;
          }
        }
        lVar21 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
        lVar25 = (ulong)(uVar14 >> 5) * 4;
        *(uint *)(lVar21 + lVar25) = *(uint *)(lVar21 + lVar25) & (uVar19 ^ 0xffffffff);
      }
LAB_0281fe48:
      uVar14 = uVar14 + 1;
    } while (uVar14 != 15000);
  }
  lVar25 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
  lVar21 = 0;
  iVar45 = 0;
  do {
    iVar43 = iVar45;
    puVar47 = (uint *)(lVar25 + lVar21);
    lVar21 = lVar21 + 4;
    uVar14 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    uVar14 = uVar14 + (uVar14 >> 0x10);
    iVar45 = (uVar14 & 0x3f) + iVar43;
  } while (lVar21 != 0x754);
  if (iVar45 == 0) {
LAB_028203dc:
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar30 + 0x1a2a80) != 0)) &&
       (puVar31 = *(undefined8 **)(*(long *)(lVar30 + 0x1a2a80) + 8), puVar31 != (undefined8 *)0x0))
    {
      (**(code **)*puVar31)();
    }
    FUN_0264a620(&local_7d8,param_3);
    pvVar23 = (void *)(**(code **)((long)local_7d8 + 0x18))(&local_7d8);
    for (lVar30 = 0; *(uint *)((long)&local_f48 + lVar30) = ~*(uint *)((long)pvVar23 + lVar30),
        lVar30 != 0x750; lVar30 = lVar30 + 8) {
      *(uint *)((long)&local_f48 + lVar30 + 4) = ~*(uint *)((long)pvVar23 + lVar30 + 4);
    }
    memcpy(pvVar23,&local_f48,0x754);
    local_1e88._0_4_ = 0x65;
    local_f48 = &PTR_FUN_049ff4e8;
    uVar15 = 0;
    *(uint *)((long)pvVar23 + 0x750) = *(uint *)((long)pvVar23 + 0x750) & 0xffffff;
    puVar44 = PTR_DAT_04bb43c0;
    local_f40 = (char *)&local_1e88;
    do {
      (**(code **)((long)local_7d8 + 0x10))(&local_1718,&local_7d8,uVar15);
      lVar30 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
      uVar14 = 1 << (ulong)(uVar15 & 0x1f);
      if ((*(uint *)(lVar30 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
        lVar30 = *(long *)puVar44;
        uVar19 = FUN_0277d6c4(&local_1718);
        if (*(long *)puVar44 != 0) {
          lVar30 = *(long *)(lVar30 + 0x57e58);
          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar19 < *(uint *)(lVar30 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
            uVar22 = (*(code *)*local_f48)(&local_f48,&local_1718);
            if ((uVar22 & 1) != 0) goto LAB_028204f4;
          }
        }
        lVar30 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
        lVar21 = (ulong)(uVar15 >> 5) * 4;
        *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar14 ^ 0xffffffff);
      }
LAB_028204f4:
      puVar9 = PTR_DAT_04bb43c0;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 15000);
    if (iVar17 < 3) {
      local_1e88._0_4_ = 0;
      local_f40 = (char *)&local_1e88;
      local_f48 = &PTR_FUN_049ff7e0;
      uVar15 = 0;
      do {
        (**(code **)((long)local_7d8 + 0x10))(&local_1718,&local_7d8,uVar15);
        lVar30 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
        uVar14 = 1 << (ulong)(uVar15 & 0x1f);
        if ((*(uint *)(lVar30 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
          lVar30 = *(long *)puVar9;
          uVar19 = FUN_0277d6c4(&local_1718);
          if (*(long *)puVar9 != 0) {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((uVar19 < *(uint *)(lVar30 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
              uVar22 = (*(code *)*local_f48)(&local_f48,&local_1718);
              if ((uVar22 & 1) != 0) goto LAB_02820608;
            }
          }
          lVar30 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
          lVar21 = (ulong)(uVar15 >> 5) * 4;
          *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar14 ^ 0xffffffff);
        }
LAB_02820608:
        uVar15 = uVar15 + 1;
      } while (uVar15 != 15000);
    }
    lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
    plVar50 = (long *)PTR_DAT_04bb43c0;
    lVar30 = 0;
    iVar45 = 0;
    do {
      iVar43 = iVar45;
      puVar47 = (uint *)(lVar21 + lVar30);
      lVar30 = lVar30 + 4;
      uVar15 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      uVar15 = uVar15 + (uVar15 >> 0x10);
      iVar45 = (uVar15 & 0x3f) + iVar43;
    } while (lVar30 != 0x754);
    if (iVar45 == 0) {
LAB_02820b94:
      FUN_0264a620(&local_7d8,param_3);
      pvVar23 = (void *)(**(code **)((long)local_7d8 + 0x18))(&local_7d8);
      for (lVar30 = 0; *(uint *)((long)&local_f48 + lVar30) = ~*(uint *)((long)pvVar23 + lVar30),
          lVar30 != 0x750; lVar30 = lVar30 + 8) {
        *(uint *)((long)&local_f48 + lVar30 + 4) = ~*(uint *)((long)pvVar23 + lVar30 + 4);
      }
      memcpy(pvVar23,&local_f48,0x754);
      local_1e88._0_4_ = 0x65;
      local_f48 = &PTR_FUN_049ff4e8;
      uVar13 = 0;
      *(uint *)((long)pvVar23 + 0x750) = *(uint *)((long)pvVar23 + 0x750) & 0xffffff;
      puVar44 = PTR_DAT_04bb43c0;
      local_f40 = (char *)&local_1e88;
      do {
        (**(code **)((long)local_7d8 + 0x10))(&local_1718,&local_7d8,uVar13);
        lVar30 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
        uVar15 = 1 << (ulong)(uVar13 & 0x1f);
        if ((*(uint *)(lVar30 + (ulong)(uVar13 >> 5) * 4) & uVar15) != 0) {
          lVar30 = *(long *)puVar44;
          uVar14 = FUN_0277d6c4(&local_1718);
          if (*(long *)puVar44 != 0) {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar30 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              uVar22 = (*(code *)*local_f48)(&local_f48,&local_1718);
              if ((uVar22 & 1) != 0) goto LAB_02820c84;
            }
          }
          lVar30 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
          lVar21 = (ulong)(uVar13 >> 5) * 4;
          *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar15 ^ 0xffffffff);
        }
LAB_02820c84:
        puVar9 = PTR_DAT_04bb43c0;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 15000);
      if (iVar17 < 3) {
        local_1e88._0_4_ = 0;
        local_f40 = (char *)&local_1e88;
        local_f48 = &PTR_FUN_049ff7e0;
        uVar13 = 0;
        do {
          (**(code **)((long)local_7d8 + 0x10))(&local_1718,&local_7d8,uVar13);
          lVar30 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
          uVar15 = 1 << (ulong)(uVar13 & 0x1f);
          if ((*(uint *)(lVar30 + (ulong)(uVar13 >> 5) * 4) & uVar15) != 0) {
            lVar30 = *(long *)puVar9;
            uVar14 = FUN_0277d6c4(&local_1718);
            if (*(long *)puVar9 != 0) {
              lVar30 = *(long *)(lVar30 + 0x57e58);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((uVar14 < *(uint *)(lVar30 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
                uVar22 = (*(code *)*local_f48)(&local_f48,&local_1718);
                if ((uVar22 & 1) != 0) goto LAB_02820d98;
              }
            }
            lVar30 = (**(code **)((long)local_7d8 + 0x18))(&local_7d8);
            lVar21 = (ulong)(uVar13 >> 5) * 4;
            *(uint *)(lVar30 + lVar21) = *(uint *)(lVar30 + lVar21) & (uVar15 ^ 0xffffffff);
          }
LAB_02820d98:
          uVar13 = uVar13 + 1;
        } while (uVar13 != 15000);
      }
      lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
      plVar50 = (long *)PTR_DAT_04bb43c0;
      lVar30 = 0;
      iVar17 = 0;
      do {
        puVar47 = (uint *)(lVar21 + lVar30);
        lVar30 = lVar30 + 4;
        uVar13 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
        uVar13 = uVar13 + (uVar13 >> 8);
        iVar17 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar17;
      } while (lVar30 != 0x754);
      if (iVar17 != 0) {
        puVar47 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar13 = *puVar47 ^ *puVar47 << 0xb;
        uVar14 = puVar47[3];
        *puVar47 = puVar47[1];
        puVar47[1] = puVar47[2];
        uVar15 = uVar13 ^ uVar14;
        uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar15;
        puVar47[2] = uVar14;
        puVar47[3] = uVar13;
        uVar13 = (uVar13 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
        uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
        uVar19 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
        lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
        lVar30 = 0;
        iVar17 = 0;
        do {
          puVar47 = (uint *)(lVar21 + lVar30);
          lVar30 = lVar30 + 4;
          uVar18 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
          uVar18 = uVar18 + (uVar18 >> 8);
          iVar17 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar17;
        } while (lVar30 != 0x754);
        if (iVar17 == 0) goto LAB_02821020;
        lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
        lVar30 = 0;
        uVar18 = 0;
        do {
          puVar47 = (uint *)(lVar21 + lVar30);
          lVar30 = lVar30 + 4;
          uVar29 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
          uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
          uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
          uVar29 = uVar29 + (uVar29 >> 8);
          uVar18 = (uVar29 + (uVar29 >> 0x10) & 0x3f) + uVar18;
        } while (lVar30 != 0x754);
        uVar13 = uVar13 ^ uVar13 * 0x800;
        local_f48 = (undefined **)CONCAT44(uVar14,uVar15);
        uVar13 = uVar13 >> 8 ^ uVar19 >> 0x13 ^ uVar13 ^ uVar19;
        local_f40 = (char *)CONCAT44(uVar13,uVar19);
        FUN_00889f80(&local_1e88,&local_7d8,(int)((ulong)uVar18 * (ulong)uVar13 >> 0x20) + 1);
        puVar31 = &local_f48;
LAB_02821014:
        FUN_01a4c66c(puVar31,&local_1e88);
        goto LAB_02821030;
      }
      puVar47 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar14 = puVar47[3];
      uVar13 = *puVar47 ^ *puVar47 << 0xb;
      *puVar47 = puVar47[1];
      puVar47[1] = puVar47[2];
      uVar15 = uVar13 ^ uVar14;
      uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar15;
      puVar47[2] = uVar14;
      puVar47[3] = uVar13;
      uVar13 = (uVar13 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
      uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
      local_1718 = (undefined *)CONCAT44(uVar15,uVar13);
      uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
      uVar19 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
      local_1710 = (char *)CONCAT44(uVar19,uVar14);
      local_7d8 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_7d0,0,0x754);
      uVar18 = nn::os::GetSystemTick();
      local_7c = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      pvVar23 = (void *)FUN_01a451fc(&local_7d8);
      memset(pvVar23,0,0x754);
      local_1e88._0_4_ = 0x65;
      local_f40 = (char *)&local_1e88;
      local_f48 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(&local_7d8,&local_f48);
      lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
      lVar30 = 0;
      iVar17 = 0;
      do {
        puVar47 = (uint *)(lVar21 + lVar30);
        lVar30 = lVar30 + 4;
        uVar18 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        iVar17 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar17;
      } while (lVar30 != 0x754);
      if (iVar17 == 0) {
        local_1e88._0_4_ = *(uint *)PTR_DAT_04bb37e0;
        uVar11 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_1e88._4_2_ = (short)uVar11;
        local_1e88._6_1_ = (undefined1)((uint)uVar11 >> 0x10);
        local_1e88._7_1_ = (undefined1)((uint)uVar11 >> 0x18);
      }
      else {
        lVar21 = (**(code **)((long)local_7d8 + 0x20))(&local_7d8);
        lVar30 = 0;
        uVar18 = 0;
        do {
          puVar47 = (uint *)(lVar21 + lVar30);
          lVar30 = lVar30 + 4;
          uVar29 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
          uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
          uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
          uVar29 = uVar29 + (uVar29 >> 8);
          uVar18 = (uVar29 + (uVar29 >> 0x10) & 0x3f) + uVar18;
        } while (lVar30 != 0x754);
        uVar13 = uVar13 ^ uVar13 * 0x800;
        local_1718 = (undefined *)CONCAT44(uVar14,uVar15);
        uVar13 = uVar13 >> 8 ^ uVar19 >> 0x13 ^ uVar13 ^ uVar19;
        local_1710 = (char *)CONCAT44(uVar13,uVar19);
        FUN_00889f80(&local_1e88,&local_7d8,(int)((ulong)uVar18 * (ulong)uVar13 >> 0x20) + 1);
        FUN_01a4c66c(&local_1718,&local_1e88);
      }
      plVar50 = (long *)PTR_DAT_04bb43c0;
    }
    else {
      local_f48 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&local_f40,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_7ec = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
      local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
      local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
      pvVar23 = (void *)(*(code *)local_f48[3])(&local_f48);
      memset(pvVar23,0,0x754);
      pvVar23 = (void *)(*(code *)local_f48[3])(&local_f48);
      memset(pvVar23,0,0x754);
      iVar45 = 0;
      puVar44 = PTR_DAT_04bc0510 + 0x10;
      do {
        iVar45 = iVar45 + 1;
        FUN_00889f80(&local_1e88,&local_7d8,iVar45);
        lVar30 = *plVar50;
        local_1708 = 0;
        local_1710 = (char *)CONCAT44(CONCAT13(local_1e88._7_1_,
                                               CONCAT12(local_1e88._6_1_,local_1e88._4_2_)),
                                      (uint)local_1e88);
        local_1718 = puVar44;
        uVar14 = FUN_0277d6c4(&local_1710);
        if (*plVar50 != 0) {
          lVar30 = *(long *)(lVar30 + 0x57e58);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar30 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
            lVar30 = *(long *)PTR_DAT_04bc0428;
            uVar14 = FUN_0277d6c4(&local_1e88);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar30 + 0x1d8)) &&
               ((puVar47 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar14 * 8),
                puVar47 != (uint *)0x0 &&
                (uVar14 = *puVar47, uVar14 != 0 && puVar47 != (uint *)(ulong)uVar14)))) {
              puVar37 = (uint *)((long)puVar47 - (long)(ulong)uVar14);
              if ((*puVar37 != 0) &&
                 ((uVar14 = puVar37[1], uVar14 != 0 && ((ulong)(ushort)puVar37[2] != 0)))) {
                lVar30 = 0xc;
                if (*(char *)((long)puVar37 + 10) != '\0') {
                  lVar30 = 0x1c;
                }
                lVar30 = (long)puVar37 + lVar30 + (ulong)(ushort)puVar37[2] * 8;
                if (lVar30 != 0) {
                  uVar19 = 0;
                  if ((ulong)uVar14 != 0) {
                    uVar19 = (uint)((ulong)((long)puVar47 - lVar30) / (ulong)uVar14);
                  }
                  if (*puVar37 <= uVar19) {
                    uVar19 = 0xffffffff;
                  }
                  if ((uVar19 < *(uint *)PTR_DAT_04bc0020) &&
                     (0xfa4a < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc0020 + 8) +
                                                  (long)(int)uVar19 * 2) - 0x5b6U))) {
                    uVar19 = FUN_02825270(&local_1e88);
                    iVar20 = FUN_02824fb0(&local_1e88);
                    uVar14 = 0;
                    if (uVar19 != 0) {
                      uVar14 = uVar13 / uVar19;
                    }
                    if (uVar13 - uVar14 * uVar19 == iVar20) {
                      FUN_0277dedc(&local_1e88);
                      lVar30 = (*(code *)local_f48[3])(&local_f48);
                      uVar14 = FUN_0277d6c4(&local_1e88);
                      if ((uVar14 >> 3 & 0x1fff) < 0x753) {
                        lVar21 = (ulong)((uVar14 & 0xffff) >> 5) * 4;
                        *(uint *)(lVar30 + lVar21) =
                             *(uint *)(lVar30 + lVar21) | 1 << (ulong)(uVar14 & 0x1f);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        plVar50 = (long *)PTR_DAT_04bb43c0;
      } while (iVar43 + (uVar15 & 0x3f) != iVar45);
      lVar21 = (*(code *)local_f48[4])(&local_f48);
      lVar30 = 0;
      iVar45 = 0;
      do {
        puVar47 = (uint *)(lVar21 + lVar30);
        lVar30 = lVar30 + 4;
        uVar13 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
        uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
        uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
        uVar13 = uVar13 + (uVar13 >> 8);
        iVar45 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar45;
      } while (lVar30 != 0x754);
      if (iVar45 == 0) goto LAB_02820b94;
      puVar47 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar13 = *puVar47 ^ *puVar47 << 0xb;
      uVar14 = puVar47[3];
      *puVar47 = puVar47[1];
      puVar47[1] = puVar47[2];
      uVar15 = uVar13 ^ uVar14;
      uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar15;
      puVar47[2] = uVar14;
      puVar47[3] = uVar13;
      uVar13 = (uVar13 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
      uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
      uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
      uVar19 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
      lVar21 = (*(code *)local_f48[4])(&local_f48);
      lVar30 = 0;
      iVar17 = 0;
      do {
        puVar47 = (uint *)(lVar21 + lVar30);
        lVar30 = lVar30 + 4;
        uVar18 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        iVar17 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar17;
      } while (lVar30 != 0x754);
      if (iVar17 != 0) {
        lVar21 = (*(code *)local_f48[4])(&local_f48);
        lVar30 = 0;
        uVar18 = 0;
        do {
          puVar47 = (uint *)(lVar21 + lVar30);
          lVar30 = lVar30 + 4;
          uVar29 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
          uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
          uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
          uVar29 = uVar29 + (uVar29 >> 8);
          uVar18 = (uVar29 + (uVar29 >> 0x10) & 0x3f) + uVar18;
        } while (lVar30 != 0x754);
        uVar13 = uVar13 ^ uVar13 * 0x800;
        local_1718 = (undefined *)CONCAT44(uVar14,uVar15);
        uVar13 = uVar13 >> 8 ^ uVar19 >> 0x13 ^ uVar13 ^ uVar19;
        local_1710 = (char *)CONCAT44(uVar13,uVar19);
        FUN_00889f80(&local_1e88,&local_f48,(int)((ulong)uVar18 * (ulong)uVar13 >> 0x20) + 1);
        puVar31 = &local_1718;
        goto LAB_02821014;
      }
LAB_02821020:
      local_1e88._0_4_ = *(uint *)PTR_DAT_04bb37e0;
      uVar11 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_1e88._4_2_ = (short)uVar11;
      local_1e88._6_1_ = (undefined1)((uint)uVar11 >> 0x10);
      local_1e88._7_1_ = (undefined1)((uint)uVar11 >> 0x18);
LAB_02821030:
    }
    puVar44 = PTR_DAT_04bb2020;
  }
  else {
    local_f48 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
    memset(&local_f40,0,0x754);
    uVar19 = nn::os::GetSystemTick();
    local_7ec = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
    local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
    local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
    local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
    pvVar23 = (void *)(*(code *)local_f48[3])(&local_f48);
    memset(pvVar23,0,0x754);
    pvVar23 = (void *)(*(code *)local_f48[3])(&local_f48);
    memset(pvVar23,0,0x754);
    puVar9 = PTR_DAT_04bb43c0;
    iVar45 = 0;
    puVar44 = PTR_DAT_04bc0510 + 0x10;
    do {
      iVar45 = iVar45 + 1;
      FUN_00889f80(&local_1e88,&local_7d8,iVar45);
      lVar21 = *(long *)puVar9;
      local_1708 = 0;
      local_1710 = (char *)CONCAT44(CONCAT13(local_1e88._7_1_,
                                             CONCAT12(local_1e88._6_1_,local_1e88._4_2_)),
                                    (uint)local_1e88);
      local_1718 = puVar44;
      uVar19 = FUN_0277d6c4(&local_1710);
      if (*(long *)puVar9 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar19 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar19 = FUN_0277d6c4(&local_1e88);
          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar19 < *(uint *)(lVar21 + 0x1d8)) &&
             ((puVar47 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar19 * 8),
              puVar47 != (uint *)0x0 &&
              (uVar19 = *puVar47, uVar19 != 0 && puVar47 != (uint *)(ulong)uVar19)))) {
            puVar37 = (uint *)((long)puVar47 - (long)(ulong)uVar19);
            if ((*puVar37 != 0) &&
               ((uVar19 = puVar37[1], uVar19 != 0 && ((ulong)(ushort)puVar37[2] != 0)))) {
              lVar21 = 0xc;
              if (*(char *)((long)puVar37 + 10) != '\0') {
                lVar21 = 0x1c;
              }
              lVar21 = (long)puVar37 + lVar21 + (ulong)(ushort)puVar37[2] * 8;
              if (lVar21 != 0) {
                uVar18 = 0;
                if ((ulong)uVar19 != 0) {
                  uVar18 = (uint)((ulong)((long)puVar47 - lVar21) / (ulong)uVar19);
                }
                if (*puVar37 <= uVar18) {
                  uVar18 = 0xffffffff;
                }
                if ((uVar18 < *(uint *)PTR_DAT_04bc0020) &&
                   (0xfa4a < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc0020 + 8) +
                                                (long)(int)uVar18 * 2) - 0x5b6U))) {
                  uVar18 = FUN_02825270(&local_1e88);
                  iVar20 = FUN_02824fb0(&local_1e88);
                  uVar19 = 0;
                  if (uVar18 != 0) {
                    uVar19 = uVar13 / uVar18;
                  }
                  if (uVar13 - uVar19 * uVar18 == iVar20) {
                    FUN_0277dedc(&local_1e88);
                    lVar21 = (*(code *)local_f48[3])(&local_f48);
                    uVar19 = FUN_0277d6c4(&local_1e88);
                    if ((uVar19 >> 3 & 0x1fff) < 0x753) {
                      lVar25 = (ulong)((uVar19 & 0xffff) >> 5) * 4;
                      *(uint *)(lVar21 + lVar25) =
                           *(uint *)(lVar21 + lVar25) | 1 << (ulong)(uVar19 & 0x1f);
                    }
                  }
                }
              }
            }
          }
        }
      }
    } while (iVar43 + (uVar14 & 0x3f) != iVar45);
    lVar25 = (*(code *)local_f48[4])(&local_f48);
    lVar21 = 0;
    iVar45 = 0;
    do {
      puVar47 = (uint *)(lVar25 + lVar21);
      lVar21 = lVar21 + 4;
      uVar14 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      iVar45 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar45;
    } while (lVar21 != 0x754);
    if (iVar45 == 0) goto LAB_028203dc;
    puVar47 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar13 = *puVar47 ^ *puVar47 << 0xb;
    uVar19 = puVar47[3];
    *puVar47 = puVar47[1];
    puVar47[1] = puVar47[2];
    uVar14 = uVar13 ^ uVar19;
    uVar13 = uVar13 >> 8 ^ uVar19 >> 0x13 ^ uVar14;
    puVar47[2] = uVar19;
    puVar47[3] = uVar13;
    uVar13 = (uVar13 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
    uVar19 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uVar18 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 4;
    lVar25 = (*(code *)local_f48[4])(&local_f48);
    lVar21 = 0;
    iVar17 = 0;
    do {
      puVar47 = (uint *)(lVar25 + lVar21);
      lVar21 = lVar21 + 4;
      uVar29 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
      uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
      uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
      uVar29 = uVar29 + (uVar29 >> 8);
      iVar17 = (uVar29 + (uVar29 >> 0x10) & 0x3f) + iVar17;
    } while (lVar21 != 0x754);
    if (iVar17 == 0) {
      local_1e88._0_4_ = *(uint *)PTR_DAT_04bb37e0;
      uVar11 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_1e88._4_2_ = (short)uVar11;
      local_1e88._6_1_ = (undefined1)((uint)uVar11 >> 0x10);
      local_1e88._7_1_ = (undefined1)((uint)uVar11 >> 0x18);
    }
    else {
      lVar25 = (*(code *)local_f48[4])(&local_f48);
      lVar21 = 0;
      uVar29 = 0;
      do {
        puVar47 = (uint *)(lVar25 + lVar21);
        lVar21 = lVar21 + 4;
        uVar16 = *puVar47 - (*puVar47 >> 1 & 0x55555555);
        uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
        uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
        uVar16 = uVar16 + (uVar16 >> 8);
        uVar29 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + uVar29;
      } while (lVar21 != 0x754);
      uVar13 = uVar13 ^ uVar13 * 0x800;
      local_1718 = (undefined *)CONCAT44(uVar19,uVar14);
      uVar13 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar13 ^ uVar18;
      local_1710 = (char *)CONCAT44(uVar13,uVar18);
      FUN_00889f80(&local_1e88,&local_f48,(int)((ulong)uVar29 * (ulong)uVar13 >> 0x20) + 1);
      FUN_01a4c66c(&local_1718,&local_1e88);
    }
    plVar50 = (long *)PTR_DAT_04bb43c0;
    puVar44 = PTR_DAT_04bb2020;
    if ((uVar15 & 1) != 0) {
      if (*(long *)(lVar30 + 0x1a2a80) != 0) {
        puVar31 = *(undefined8 **)(*(long *)(lVar30 + 0x1a2a80) + 8);
        if (puVar31 != (undefined8 *)0x0) {
          (**(code **)*puVar31)();
        }
      }
    }
  }
  *(uint *)(param_1 + 100) = (uint)local_1e88;
  *(uint *)(param_1 + 0x68) = CONCAT13(local_1e88._7_1_,CONCAT12(local_1e88._6_1_,local_1e88._4_2_))
  ;
  local_7d8 = (undefined **)(puVar44 + 0x10);
  local_7d0 = "BeyEvent_TotalPoint";
  iVar17 = FUN_0274ce10(param_3,&local_7d8);
  if (iVar17 < 300) {
    if (199 < iVar17) {
      uVar48 = 2;
      uVar26 = 1;
      goto LAB_02821354;
    }
    if (99 < iVar17) {
      uVar48 = 1;
      goto LAB_02821360;
    }
  }
  else {
    FUN_02824ad0(param_2,param_3,1);
    uVar48 = 3;
    uVar26 = 2;
LAB_02821354:
    FUN_02824ad0(param_2,param_3,uVar26);
LAB_02821360:
    FUN_02824ad0(param_2,param_3,uVar48);
  }
  local_7d8 = (undefined **)(puVar44 + 0x10);
  local_7d0 = "ChyEvent_TotalPoint";
  iVar17 = FUN_0274ce10(param_3,&local_7d8);
  if (iVar17 < 300) {
    if (199 < iVar17) {
      uVar48 = 2;
      uVar26 = 1;
      goto LAB_028213c8;
    }
    if (99 < iVar17) {
      uVar48 = 1;
      goto LAB_028213d4;
    }
  }
  else {
    FUN_02824d40(param_2,param_3,1);
    uVar48 = 3;
    uVar26 = 2;
LAB_028213c8:
    FUN_02824d40(param_2,param_3,uVar26);
LAB_028213d4:
    FUN_02824d40(param_2,param_3,uVar48);
  }
  local_7d0 = "BeyRequireFishSize";
  local_7d8 = (undefined **)(puVar44 + 0x10);
  iVar17 = FUN_0273ea30(&local_7d8);
  if (iVar17 == 3) {
    local_7d8 = (undefined **)0x8d8;
    FUN_0277d4ac(&local_7d8);
  }
  else {
    local_f48 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_f48 >> 0x20) < '\x05') {
      lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_f48);
      local_7d8 = (undefined **)(lVar30 + -0x15180);
      local_f48 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7d8);
    }
    FUN_013fe6d0(&local_7d8,*(undefined8 *)PTR_DAT_04bb3d80,iVar17,(int)local_f48 >> 0x18);
  }
  *(undefined4 *)(param_1 + 0x7c) = (undefined4)local_7d8;
  *(undefined4 *)(param_1 + 0x80) = local_7d8._4_4_;
  puVar9 = PTR_DAT_04bb32f0;
  local_7d8 = (undefined **)(puVar44 + 0x10);
  local_7d0 = "Easter";
  local_1718 = (undefined *)param_2[2];
  uVar26 = *(undefined8 *)PTR_DAT_04bb32f0;
  if ((char)((ulong)local_1718 >> 0x20) < '\x05') {
    lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1718);
    local_f48 = (undefined **)(lVar30 + -0x15180);
    local_1718 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
  }
  uVar24 = (ulong)local_1718;
  uVar22 = (ulong)local_1718 >> 0x30;
  local_1718._0_6_ = CONCAT24(5,(undefined4)local_1718);
  local_1718 = (undefined *)(CONCAT26((short)uVar22,(uint6)local_1718) & 0xff00ffffffffffff);
  uVar22 = FUN_00879dd0(uVar26,&local_7d8,uVar24,uVar24 >> 0x10,uVar24 >> 0x18,0);
  if ((uVar22 & 1) == 0) {
    uVar26 = *(undefined8 *)puVar9;
    local_f40 = "Easter";
    local_f48 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    uVar22 = param_2[2];
    local_1e88._0_4_ = (uint)uVar22;
    local_1e88._4_2_ = (short)(uVar22 >> 0x20);
    local_1e88._6_1_ = (undefined1)(uVar22 >> 0x30);
    local_1e88._7_1_ = (undefined1)(uVar22 >> 0x38);
    if ((char)(uVar22 >> 0x20) < '\x05') {
      lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1e88);
      local_1718 = (undefined *)(lVar30 - 0x15180);
      uVar22 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1718);
      local_1e88._0_4_ = (uint)uVar22;
      local_1e88._7_1_ = (undefined1)(uVar22 >> 0x38);
    }
    local_1e88._4_2_ = 5;
    local_1e88._6_1_ = 0;
    uVar22 = FUN_0087a8f0(uVar26,&local_f48,uVar22,uVar22 >> 0x10,uVar22 >> 0x18,0);
    puVar44 = PTR_DAT_04bb2020;
    if ((uVar22 & 1) != 0) goto LAB_028215ac;
    local_7d0 = "EasterTodayRecipeRandomGenerateNum";
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_7d8 = (undefined **)puVar1;
    FUN_0274d104(param_3,&local_7d8,0);
    local_7d0 = "EasterRecipeAddLotNum";
    local_7d8 = (undefined **)puVar1;
    FUN_0274d104(param_3,&local_7d8,0);
  }
  else {
LAB_028215ac:
    uVar15 = 0;
    uVar13 = 1;
    uVar22 = param_2[2];
    local_1e88._0_4_ = (uint)uVar22;
    local_1e88._4_2_ = (short)(uVar22 >> 0x20);
    local_1e88._6_1_ = (undefined1)(uVar22 >> 0x30);
    local_1e88._7_1_ = (undefined1)(uVar22 >> 0x38);
    puVar44 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar26 = *(undefined8 *)puVar9;
      local_7d0 = "Easter";
      local_1718 = (undefined *)uVar22;
      local_7d8 = (undefined **)puVar44;
      if ((char)(uVar22 >> 0x20) < '\x05') {
        lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1718);
        local_f48 = (undefined **)(lVar30 + -0x15180);
        local_1718 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
      }
      uVar22 = (ulong)local_1718;
      local_1718._0_6_ = CONCAT24(5,(undefined4)local_1718);
      local_1718._7_1_ = SUB81(uVar22,7);
      local_1718._0_7_ = (uint7)(uint6)local_1718;
      uVar22 = FUN_00879dd0(uVar26,&local_7d8,uVar22,uVar22 >> 0x10,uVar22 >> 0x18,0);
      if ((uVar22 & 1) != 0) goto LAB_02821674;
      uVar13 = uVar13 + 1;
      lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1e88);
      local_7d8 = (undefined **)(lVar30 + 0x15180);
      uVar22 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_7d8);
      bVar10 = uVar15 < 0x1d;
      local_1e88._0_4_ = (uint)uVar22;
      local_1e88._4_2_ = (short)(uVar22 >> 0x20);
      local_1e88._6_1_ = (undefined1)(uVar22 >> 0x30);
      local_1e88._7_1_ = (undefined1)(uVar22 >> 0x38);
      uVar15 = uVar15 + 1;
    } while (bVar10);
    uVar13 = 0x1f;
LAB_02821674:
    puVar44 = PTR_DAT_04bb46f0;
    local_6e0 = 0;
    local_6e8 = 0;
    local_6f0 = 0;
    local_6f8 = 0;
    local_700 = 0;
    local_708 = 0;
    local_710 = 0;
    local_718 = 0;
    local_720 = 0;
    local_728 = 0;
    local_730 = 0;
    local_738 = 0;
    local_740 = 0;
    local_748 = 0;
    local_750 = 0;
    local_758 = 0;
    local_760 = 0;
    local_768 = 0;
    local_770 = 0;
    local_778 = 0;
    local_780 = 0;
    local_788 = 0;
    local_790 = 0;
    local_798 = (char *)0x0;
    local_7a0 = (undefined *)0x0;
    local_7a8 = 0;
    local_7b0 = 0;
    uStack_7ac = 0;
    local_7b8 = 0;
    uStack_7b4 = 0;
    local_7c0 = 0;
    local_7c8 = 0;
    local_f48 = (undefined **)CONCAT44(local_f48._4_4_,0x30);
    local_7d0 = (char *)0x0;
    local_7d8 = (undefined **)0x0;
    FUN_0262a720(*(long *)PTR_DAT_04bb46f0,&local_7d8,&local_f48,*(long *)PTR_DAT_04bb46f0 + 0xe98e0
                );
    FUN_0262b200(*(long *)puVar44,&local_7d8,param_3,*(long *)puVar44 + 0xe98e0);
    uVar15 = 0;
    uVar22 = 0;
    do {
      uVar19 = (uint)uVar22 & 6;
      uVar14 = (uint)uVar22 + 2;
      bVar6 = *(byte *)((long)&local_7d8 + (uVar22 >> 3));
      uVar15 = (bVar6 >> (ulong)(uVar19 | 1) & 1) + (bVar6 >> (ulong)uVar19 & 1) + uVar15;
      uVar22 = (ulong)uVar14;
    } while (uVar14 != 0x800);
    uVar13 = uVar13 & 0xff;
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = uVar15 / uVar13;
    }
    if (uVar15 != uVar14 * uVar13) {
      local_f40 = "EasterRecipeAddLotNum";
      puVar44 = PTR_DAT_04bb2020 + 0x10;
      local_f48 = (undefined **)puVar44;
      iVar17 = FUN_0274ce10(param_3,&local_f48);
      uVar13 = iVar17 * 0x14 + 10;
      uVar15 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      if (99 < uVar13) {
        uVar13 = 100;
      }
      uVar15 = uVar15 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar15 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar15;
      if ((uint)((ulong)uVar15 * 100 >> 0x20) < uVar13) {
        local_f40 = "EasterRecipeAddLotNum";
        uVar14 = uVar14 + 1;
        local_f48 = (undefined **)puVar44;
        FUN_0274d104(param_3,&local_f48,0);
      }
      else {
        local_f40 = "EasterRecipeAddLotNum";
        local_f48 = (undefined **)puVar44;
        FUN_0274dc60(param_3,&local_f48,1);
      }
    }
    puVar44 = PTR_DAT_04bb2020;
    local_f40 = "EasterTodayRecipeRandomGenerateNum";
    local_f48 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    FUN_0274d104(param_3,&local_f48,uVar14);
    plVar50 = (long *)PTR_DAT_04bb43c0;
  }
  local_7d8 = (undefined **)(puVar44 + 0x10);
  uVar26 = *(undefined8 *)puVar9;
  local_7d0 = "Easter";
  local_1718 = (undefined *)param_2[2];
  if ((char)((ulong)local_1718 >> 0x20) < '\x05') {
    lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1718);
    local_f48 = (undefined **)(lVar30 + -0x15180);
    local_1718 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_f48);
  }
  uVar22 = (ulong)local_1718;
  local_1718._0_6_ = CONCAT24(5,(undefined4)local_1718);
  local_1718._7_1_ = SUB81(uVar22,7);
  local_1718._0_7_ = (uint7)(uint6)local_1718;
  uVar22 = FUN_00879dd0(uVar26,&local_7d8,uVar22,uVar22 >> 0x10,uVar22 >> 0x18,0);
  if ((uVar22 & 1) == 0) {
    uVar26 = *(undefined8 *)puVar9;
    local_f40 = "Easter";
    local_f48 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    uVar22 = param_2[2];
    local_1e88._0_4_ = (uint)uVar22;
    local_1e88._4_2_ = (short)(uVar22 >> 0x20);
    local_1e88._6_1_ = (undefined1)(uVar22 >> 0x30);
    local_1e88._7_1_ = (undefined1)(uVar22 >> 0x38);
    if ((char)(uVar22 >> 0x20) < '\x05') {
      lVar30 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1e88);
      local_1718 = (undefined *)(lVar30 + -0x15180);
      uVar22 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1718);
      local_1e88._0_4_ = (uint)uVar22;
      local_1e88._7_1_ = (undefined1)(uVar22 >> 0x38);
    }
    local_1e88._4_2_ = 5;
    local_1e88._6_1_ = 0;
    uVar22 = FUN_0087a8f0(uVar26,&local_f48,uVar22,uVar22 >> 0x10,uVar22 >> 0x18,0);
    if ((uVar22 & 1) != 0) goto LAB_02821a04;
    goto LAB_02821dd8;
  }
LAB_02821a04:
  local_7c8 = param_2[2];
  local_7c0 = param_2[3];
  local_7b8 = (undefined4)param_2[4];
  uVar26 = *(undefined8 *)((long)param_2 + 0x27);
  uStack_7b4._0_3_ = (undefined3)((ulong)param_2[4] >> 0x20);
  uStack_7b4._3_1_ = (undefined1)uVar26;
  local_7b0 = (undefined4)((ulong)uVar26 >> 8);
  uStack_7ac._0_3_ = (undefined3)((ulong)uVar26 >> 0x28);
  local_7d8 = (undefined **)*param_2;
  local_7d0 = (char *)param_2[1];
  local_7a8 = CONCAT44(local_7a8._4_4_,*param_3);
  local_f40 = "PynEvent_SendMailThisYear";
  puVar44 = PTR_DAT_04bb2020 + 0x10;
  local_f48 = (undefined **)puVar44;
  iVar17 = FUN_0274ce10(param_3,&local_f48);
  if (iVar17 == 0) {
    local_1e88._0_4_ = 0x307e;
    local_1e88._4_2_ = 0;
    local_1e88._6_1_ = 0;
    local_1e88._7_1_ = 0;
    FUN_0277d4ac(&local_1e88);
    uVar22 = FUN_0261f3b8(*(undefined8 *)PTR_DAT_04bb46f0,&local_1e88,param_3);
    if ((uVar22 & 1) == 0) goto LAB_02821b40;
    local_f40 = "PynVisitToday";
    puVar44 = PTR_DAT_04bb2020 + 0x10;
    local_f48 = (undefined **)puVar44;
    uVar22 = FUN_0273f0a0(&local_f48);
    if ((uVar22 & 1) == 0) {
      local_1710 = "PynTalkPreVisitDayFlag";
      local_1718 = puVar44;
      iVar17 = FUN_0274ce10(param_3,&local_1718);
      if (iVar17 != 0) goto LAB_02821ae4;
      uVar26 = 3;
LAB_02821c60:
      FUN_02825b10(&local_7d8,uVar26);
    }
    else {
LAB_02821ae4:
      local_f40 = "PynTalkPreVisitDayFlag";
      puVar44 = PTR_DAT_04bb2020 + 0x10;
      local_f48 = (undefined **)puVar44;
      iVar17 = FUN_0274ce10(param_3,&local_f48);
      if (iVar17 != 0) {
        local_1710 = "PynGetPreVisitRecipeFlag";
        local_1718 = puVar44;
        iVar17 = FUN_0274ce10(param_3,&local_1718);
        if (iVar17 == 0) {
          uVar26 = 4;
          goto LAB_02821c60;
        }
      }
    }
  }
  else {
LAB_02821b40:
    local_f40 = "PynEvent_SendRecipeMail";
    local_f48 = (undefined **)puVar44;
    iVar17 = FUN_0274ce10(param_3,&local_f48);
    if (iVar17 == 0) {
      local_1e88._0_4_ = 0x307e;
      local_1e88._4_2_ = 0;
      local_1e88._6_1_ = 0;
      local_1e88._7_1_ = 0;
      FUN_0277d4ac(&local_1e88);
      local_f78 = 0xfffe;
      uStack_f76 = 0;
      sStack_f74 = 0;
      uStack_f72 = 0;
      FUN_0277d4ac(&local_f78);
      puVar44 = PTR_DAT_04bb46f0;
      uVar22 = FUN_026219b0(*(undefined8 *)PTR_DAT_04bb46f0,&local_f78,&local_1e88);
      if ((uVar22 & 1) != 0) {
        uVar22 = FUN_0261f3b8(*(undefined8 *)puVar44,&local_1e88,param_3);
        if ((uVar22 & 1) == 0) {
          local_f40 = "PynVisitToday";
          puVar44 = PTR_DAT_04bb2020 + 0x10;
          local_f48 = (undefined **)puVar44;
          uVar22 = FUN_0273f0a0(&local_f48);
          if ((uVar22 & 1) == 0) {
            local_1710 = "PynTalkPreVisitDayFlag";
            local_1718 = puVar44;
            iVar17 = FUN_0274ce10(param_3,&local_1718);
            if (iVar17 != 0) goto LAB_02821c00;
            uVar42 = 1;
LAB_02821c7c:
            FUN_01b46be0(&local_f48);
            uVar11 = *param_3;
            if ((*PTR_DAT_04bb8aa8 & 1) == 0) {
              iVar17 = __cxa_guard_acquire(PTR_DAT_04bb8aa8);
              if (iVar17 != 0) {
                FUN_00dd5f80(PTR_DAT_04bb8aa0);
                __cxa_guard_release(PTR_DAT_04bb8aa8);
              }
            }
            if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
              uVar22 = 0;
              do {
                if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar22 * 4) == 0x2a)
                goto LAB_02821cd4;
                uVar22 = uVar22 + 1;
              } while (*(uint *)PTR_DAT_04bb8aa0 != uVar22);
            }
            uVar22 = 0;
LAB_02821cd4:
            uVar8 = *(ushort *)(param_2 + 2);
            bVar6 = *(byte *)((long)param_2 + 0x12);
            bVar5 = *(byte *)((long)param_2 + 0x13);
            nn::time::IsValidDate((uint)uVar8,(uint)bVar6,(uint)bVar5);
            local_f18 = CONCAT22(uStack_f72,sStack_f74);
            local_f28 = (undefined4)uVar22;
            local_f24 = 0x16;
            local_f1c = CONCAT22(uStack_f76,local_f78);
            local_f14 = 0;
            local_f40 = (char *)CONCAT44((uint)bVar5 << 0x18 | (uint)bVar6 << 0x10 | (uint)uVar8,
                                         uVar11);
            local_f20 = uVar42;
            lVar30 = (**(code **)((long)local_f48 + 0x20))
                               (&local_f48,*(undefined8 *)PTR_DAT_04bc0580);
            plVar50 = (long *)PTR_DAT_04bb43c0;
            if (lVar30 != 0) {
              plVar33 = *(long **)PTR_DAT_04bb4fa8;
              lVar21 = *plVar33;
              plVar35 = (long *)(*(int *)((long)plVar33 + 0x14) + lVar30);
              *plVar33 = (long)plVar35;
              *plVar35 = lVar21;
              plVar35[1] = (long)plVar33;
              if (lVar21 != 0) {
                *(long **)(lVar21 + 8) = plVar35;
              }
              *(int *)(plVar33 + 2) = (int)plVar33[2] + 1;
            }
            local_1710 = "PynEvent_SendRecipeMail";
            puVar44 = PTR_DAT_04bb2020 + 0x10;
            local_1718 = puVar44;
            FUN_0274d104(param_3,&local_1718,1);
            local_1710 = "PynEvent_SendMailThisYear";
            local_1718 = puVar44;
            FUN_0274d104(param_3,&local_1718,1);
          }
          else {
LAB_02821c00:
            local_f40 = "PynTalkPreVisitDayFlag";
            puVar44 = PTR_DAT_04bb2020 + 0x10;
            local_f48 = (undefined **)puVar44;
            iVar17 = FUN_0274ce10(param_3,&local_f48);
            if (iVar17 != 0) {
              local_1710 = "PynGetPreVisitRecipeFlag";
              local_1718 = puVar44;
              iVar17 = FUN_0274ce10(param_3,&local_1718);
              if (iVar17 == 0) {
                uVar42 = 2;
                goto LAB_02821c7c;
              }
            }
          }
        }
      }
    }
  }
LAB_02821dd8:
  local_7d0 = "FoxBuyArtTodayFlag";
  local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  iVar17 = FUN_0274ce10(param_3,&local_7d8);
  if (iVar17 == 0) goto LAB_02822274;
  FUN_01b46be0(&local_f48);
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    lVar30 = 0;
    plVar35 = _DAT_00000028;
    if (_DAT_00000028 != (long *)0x0) goto LAB_02821e4c;
LAB_02821e68:
    uVar22 = 0;
  }
  else {
    lVar30 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_3);
    plVar35 = *(long **)(lVar30 + 0x28);
    if (*(long **)(lVar30 + 0x28) == (long *)0x0) goto LAB_02821e68;
LAB_02821e4c:
    if ((undefined8 *)*plVar35 == (undefined8 *)0x0) goto LAB_02821e68;
    uVar22 = (*(code *)**(undefined8 **)*plVar35)();
    uVar22 = uVar22 & 0xffffffff;
  }
  lVar21 = *(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8);
  puVar44 = *(undefined **)(lVar21 + 0x37a90);
  local_f90 = *(undefined **)(lVar21 + 0x37a90);
  uVar26 = *(undefined8 *)(lVar21 + 0x37a98);
  local_1e78 = (undefined4)*(undefined8 *)(lVar21 + 0x37aa8);
  uStack_1e74 = (uint)((ulong)*(undefined8 *)(lVar21 + 0x37aa8) >> 0x20);
  local_1e70 = *(undefined4 *)(lVar21 + 0x37ab0);
  local_1e88._0_4_ = (uint)uVar26;
  local_1e88._4_2_ = (short)((ulong)uVar26 >> 0x20);
  local_1e88._6_1_ = (undefined1)((ulong)uVar26 >> 0x30);
  local_1e88._7_1_ = (undefined1)((ulong)uVar26 >> 0x38);
  local_1e80 = (uint)*(undefined8 *)(lVar21 + 0x37aa0);
  uStack_1e7c = (uint)((ulong)*(undefined8 *)(lVar21 + 0x37aa0) >> 0x20);
  lVar25 = *(long *)PTR_DAT_04bb46b0;
  if (lVar25 != 0) {
    plVar35 = *(long **)(lVar25 + 0x10);
    if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
      plVar35 = (long *)*plVar35;
    }
    else if ((plVar35 == (long *)0x0) || (plVar35 = (long *)plVar35[0x26], plVar35 == (long *)0x0))
    goto LAB_02821f00;
    (**(code **)(*plVar35 + 0x38))();
    lVar21 = *(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8);
  }
LAB_02821f00:
  uVar26 = *(undefined8 *)(lVar21 + 0xc138);
  local_f60 = *(undefined4 *)(lVar21 + 0xc150);
  local_f78 = (undefined2)uVar26;
  uStack_f76 = (undefined2)((ulong)uVar26 >> 0x10);
  sStack_f74 = (short)((ulong)uVar26 >> 0x20);
  uStack_f72 = (undefined2)((ulong)uVar26 >> 0x30);
  local_f70._0_4_ = (undefined4)*(undefined8 *)(lVar21 + 0xc140);
  local_f70._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar21 + 0xc140) >> 0x20);
  local_f68 = (undefined4)*(undefined8 *)(lVar21 + 0xc148);
  uStack_f64 = (uint)((ulong)*(undefined8 *)(lVar21 + 0xc148) >> 0x20);
  if ((local_1e88._4_2_ == 0) || (sStack_f74 == 0)) {
    if ((uint)local_1e88 != (int)uVar26) goto LAB_02821fc0;
LAB_02821fa8:
    uVar42 = 1;
  }
  else {
    if ((uint)local_1e88 == (int)uVar26) {
      uVar24 = CONCAT44(local_1e80,
                        CONCAT13(local_1e88._7_1_,CONCAT12(local_1e88._6_1_,local_1e88._4_2_)));
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar36 = uVar24 >> 0x20 | uVar24 << 0x20;
      uVar24 = CONCAT44((undefined4)local_f70,(int)((ulong)uVar26 >> 0x20));
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
      if (uVar24 == uVar36) {
        uVar24 = (CONCAT44(local_f68,local_f70._4_4_) & 0xff00ff00ff00ff00) >> 8 |
                 (CONCAT44(local_f68,local_f70._4_4_) & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = uVar24 >> 0x20 | uVar24 << 0x20;
        uVar36 = (CONCAT44(local_1e78,uStack_1e7c) & 0xff00ff00ff00ff00) >> 8 |
                 (CONCAT44(local_1e78,uStack_1e7c) & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        uVar36 = uVar36 >> 0x20 | uVar36 << 0x20;
        if (uVar24 != uVar36) goto LAB_02821fb0;
        uVar13 = (uStack_f64 & 0xff00ff00) >> 8 | (uStack_f64 & 0xff00ff) << 8;
        uVar24 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10);
        uVar13 = (uStack_1e74 & 0xff00ff00) >> 8 | (uStack_1e74 & 0xff00ff) << 8;
        uVar36 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10);
        if (uVar24 != uVar36) goto LAB_02821fb0;
        iVar17 = 0;
      }
      else {
LAB_02821fb0:
        iVar17 = 1;
        if (uVar24 < uVar36) {
          iVar17 = -1;
        }
      }
      if (iVar17 == 0) goto LAB_02821fa8;
    }
LAB_02821fc0:
    uVar42 = 2;
  }
  lVar21 = *plVar50;
  uVar13 = FUN_0277d6c4(&local_f90);
  if (*plVar50 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      local_1718 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_1718);
      local_1710 = (char *)CONCAT17(local_1e88._7_1_,
                                    CONCAT16(local_1e88._6_1_,
                                             CONCAT24(local_1e88._4_2_,(uint)local_1e88)));
      local_1708 = CONCAT44(uStack_1e7c,local_1e80);
      local_1700 = CONCAT44(uStack_1e74,local_1e78);
      uVar11 = *param_3;
      local_16f8 = (undefined1)local_1e70;
      local_1718 = puVar44;
      if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar17 != 0)) {
        FUN_00dd5f80(PTR_DAT_04bb8aa0);
        __cxa_guard_release(PTR_DAT_04bb8aa8);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
        uVar24 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar24 * 4) == 0x2b) goto LAB_028220a0;
          uVar24 = uVar24 + 1;
        } while (*(uint *)PTR_DAT_04bb8aa0 != uVar24);
      }
      uVar24 = 0;
LAB_028220a0:
      uVar8 = *(ushort *)(param_2 + 2);
      bVar6 = *(byte *)((long)param_2 + 0x12);
      bVar5 = *(byte *)((long)param_2 + 0x13);
      nn::time::IsValidDate((uint)uVar8,(uint)bVar6,(uint)bVar5);
      local_f28 = (undefined4)uVar24;
      local_f24 = 0x18;
      local_f40 = (char *)CONCAT44((uint)bVar5 << 0x18 | (uint)bVar6 << 0x10 | (uint)uVar8,uVar11);
      local_f1c = (undefined4)local_f90;
      local_f18 = local_f90._4_4_;
      local_f14 = 0;
      local_f20 = uVar42;
      FUN_01b46be0(&local_7d8);
      local_798 = (char *)0x0;
      local_790 = 0;
      local_788 = 0;
      local_780 = local_780 & 0xffffffff00000000;
      local_7d8 = &PTR_LAB_04a91670;
      local_7a0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_7a0);
      local_7d0 = local_f40;
      local_7b0 = CONCAT31(local_7b0._1_3_,local_f20);
      local_7b8 = local_f28;
      uStack_7b4 = local_f24;
      uStack_7ac = local_f1c;
      local_7a8._0_6_ = CONCAT24(local_f14,local_f18);
      local_7a0 = local_1718;
      local_798 = local_1710;
      local_790 = local_1708;
      local_788 = local_1700;
      local_780 = CONCAT71(local_780._1_7_,local_16f8);
      lVar21 = (*(code *)local_7d8[4])(&local_7d8,*(undefined8 *)PTR_DAT_04bc0580);
      if (lVar21 != 0) {
        plVar35 = *(long **)PTR_DAT_04bb4fa8;
        lVar25 = *plVar35;
        plVar50 = (long *)(*(int *)((long)plVar35 + 0x14) + lVar21);
        *plVar35 = (long)plVar50;
        *plVar50 = lVar25;
        plVar50[1] = (long)plVar35;
        if (lVar25 != 0) {
          *(long **)(lVar25 + 8) = plVar50;
        }
        *(int *)(plVar35 + 2) = (int)plVar35[2] + 1;
      }
    }
  }
  if ((((uVar22 & 1) != 0) && (*(long *)(lVar30 + 0x28) != 0)) &&
     (puVar31 = *(undefined8 **)(*(long *)(lVar30 + 0x28) + 8), puVar31 != (undefined8 *)0x0)) {
    (**(code **)*puVar31)();
  }
  local_7d0 = "FoxBuyArtTodayFlag";
  local_7d8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  FUN_0274d104(param_3,&local_7d8,0);
  plVar50 = (long *)PTR_DAT_04bb43c0;
LAB_02822274:
  if (*param_2 != 0) {
    local_7d0 = "ReserveFortune";
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_7d8 = ppuVar2;
    iVar17 = FUN_0274ce10(param_3,&local_7d8);
    if (iVar17 != 0) {
      local_7d0 = "LastFortune";
      local_7d8 = ppuVar2;
      FUN_0274d104(param_3,&local_7d8,iVar17);
    }
    local_7d0 = "TodayFortune";
    local_7d8 = ppuVar2;
    FUN_0274d104(param_3,&local_7d8,0);
    local_7d0 = "ReserveFortune";
    local_7d8 = ppuVar2;
    FUN_0274d104(param_3,&local_7d8,0);
  }
  if (iVar12 != 0) {
    lVar30 = *plVar50;
    uVar13 = FUN_0277d6c4(param_1 + 0x84);
    if (*plVar50 != 0) {
      lVar30 = *(long *)(lVar30 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar30 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
        return;
      }
    }
  }
  local_f48 = (undefined **)CONCAT44(local_f48._4_4_,0x89);
  FUN_02822400(&local_7d8,param_3,&local_f48);
  *(undefined4 *)(param_1 + 0x84) = (undefined4)local_7d8;
  *(undefined4 *)(param_1 + 0x88) = local_7d8._4_4_;
  return;
}

